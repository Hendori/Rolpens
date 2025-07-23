/* GodotPhysicsServer2D::set_active(bool) */void GodotPhysicsServer2D::set_active(GodotPhysicsServer2D *this, bool param_1) {
   this[0x171] = (GodotPhysicsServer2D)param_1;
   return;
}
/* GodotPhysicsServer2D::sync() */void GodotPhysicsServer2D::sync(GodotPhysicsServer2D *this) {
   this[0x172] = (GodotPhysicsServer2D)0x1;
   return;
}
/* GodotPhysicsServer2D::end_sync() */void GodotPhysicsServer2D::end_sync(GodotPhysicsServer2D *this) {
   this[0x172] = (GodotPhysicsServer2D)0x0;
   return;
}
/* GodotPhysicsServer2D::get_process_info(PhysicsServer2D::ProcessInfo) */undefined4 GodotPhysicsServer2D::get_process_info(GodotPhysicsServer2D *this, int param_2) {
   undefined4 uVar1;
   if (param_2 == 1) {
      return *(undefined4*)( this + 0x17c );
   }

   if (param_2 == 2) {
      uVar1 = *(undefined4*)( this + 0x174 );
   }
 else {
      uVar1 = 0;
      if (param_2 == 0) {
         return *(undefined4*)( this + 0x178 );
      }

   }

   return uVar1;
}
/* GodotPhysicsServer2D::shape_set_data(RID, Variant const&) */void GodotPhysicsServer2D::shape_set_data(GodotPhysicsServer2D *this, ulong param_2, undefined8 param_3) {
   int iVar1;
   long *plVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1d4 ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            /* WARNING: Could not recover jumptable at 0x001000c6. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *plVar2 + 0x50 ) )(plVar2, param_3);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shape_set_data", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x75, "Parameter \"shape\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::shape_set_custom_solver_bias(RID, float) */void GodotPhysicsServer2D::shape_set_custom_solver_bias(undefined4 param_1, GodotPhysicsServer2D *this, ulong param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x1d4 ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(undefined4*)( lVar2 + 0x24 ) = param_1;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shape_set_custom_solver_bias", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x7b, "Parameter \"shape\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::shape_get_type(RID) const */undefined8 GodotPhysicsServer2D::shape_get_type(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long *plVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1d4 ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         puVar2 = (undefined8*)*plVar4;
         if (puVar2 != (undefined8*)0x0) {
            /* WARNING: Could not recover jumptable at 0x0010024f. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar3 = ( **(code**)*puVar2 )();
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shape_get_type", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x81, "Parameter \"shape\" is null.", 0, 0);
   return 8;
}
/* GodotPhysicsServer2D::shape_get_data(RID) const */undefined4 *GodotPhysicsServer2D::shape_get_data(undefined4 *param_1, long param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   char *pcVar3;
   long *plVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x1d4 ) <= (uint)param_3 )) {
      LAB_00100368:uVar5 = 0x87;
      pcVar3 = "Parameter \"shape\" is null.";
   }
 else {
      plVar4 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x1c0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 != (int)( param_3 >> 0x20 )) {
         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00100368;
      }

      plVar4 = (long*)*plVar4;
      if (plVar4 == (long*)0x0) goto LAB_00100368;
      if ((char)plVar4[4] != '\0') {
         ( **(code**)( *plVar4 + 0x58 ) )();
         goto LAB_00100338;
      }

      uVar5 = 0x88;
      pcVar3 = "Condition \"!shape->is_configured()\" is true. Returning: Variant()";
   }

   _err_print_error("shape_get_data", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar5, pcVar3, 0, 0);
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   LAB_00100338:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::shape_get_custom_solver_bias(RID) const */undefined4 GodotPhysicsServer2D::shape_get_custom_solver_bias(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1d4 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x24 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shape_get_custom_solver_bias", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x8e, "Parameter \"shape\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::area_get_space(RID) const */undefined8 GodotPhysicsServer2D::area_get_space(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            lVar2 = *(long*)( lVar2 + 0x40 );
            if (lVar2 == 0) {
               return 0;
            }

            return *(undefined8*)( lVar2 + 0x30 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_get_space", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x13a, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::area_get_transform(RID) const */undefined8 *GodotPhysicsServer2D::area_get_transform(undefined8 *param_1, long param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long *plVar5;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x284 ) )) {
      plVar5 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar5[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar5;
         if (lVar2 != 0) {
            uVar4 = *(undefined8*)( lVar2 + 0x50 );
            uVar3 = *(undefined8*)( lVar2 + 0x58 );
            *param_1 = *(undefined8*)( lVar2 + 0x48 );
            param_1[1] = uVar4;
            param_1[2] = uVar3;
            return param_1;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_get_transform", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1d5, "Parameter \"area\" is null.", 0, 0);
   *param_1 = 0x3f800000;
   param_1[1] = 0x3f80000000000000;
   param_1[2] = 0;
   return param_1;
}
/* GodotPhysicsServer2D::area_set_pickable(RID, bool) */void GodotPhysicsServer2D::area_set_pickable(GodotPhysicsServer2D *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x284 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               *(undefined1*)( lVar2 + 0x28 ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("area_set_pickable", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1dc, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_set_collision_layer(RID, unsigned int) */void GodotPhysicsServer2D::area_set_collision_layer(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   undefined8 *puVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x284 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            puVar2 = (undefined8*)*plVar3;
            if (puVar2 != (undefined8*)0x0) {
               *(undefined4*)( (long)puVar2 + 0x7c ) = param_3;
               /* WARNING: Could not recover jumptable at 0x001007b4. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)*puVar2 )();
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("area_set_collision_layer", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1ea, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_get_collision_layer(RID) const */undefined4 GodotPhysicsServer2D::area_get_collision_layer(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x7c );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_get_collision_layer", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1f1, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::area_set_collision_mask(RID, unsigned int) */void GodotPhysicsServer2D::area_set_collision_mask(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   undefined8 *puVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x284 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            puVar2 = (undefined8*)*plVar3;
            if (puVar2 != (undefined8*)0x0) {
               *(undefined4*)( puVar2 + 0xf ) = param_3;
               /* WARNING: Could not recover jumptable at 0x00100954. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)*puVar2 )();
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("area_set_collision_mask", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1f8, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_get_collision_mask(RID) const */undefined4 GodotPhysicsServer2D::area_get_collision_mask(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x78 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_get_collision_mask", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1ff, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::space_get_contact_count(RID) const */undefined4 GodotPhysicsServer2D::space_get_contact_count(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x22c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x6108 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("space_get_contact_count", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x113, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_get_space(RID) const */undefined8 GodotPhysicsServer2D::body_get_space(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            lVar2 = *(long*)( lVar2 + 0x40 );
            if (lVar2 == 0) {
               return 0;
            }

            return *(undefined8*)( lVar2 + 0x30 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_space", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x22e, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_set_continuous_collision_detection_mode(RID, PhysicsServer2D::CCDMode)
    */void GodotPhysicsServer2D::body_set_continuous_collision_detection_mode(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               *(undefined4*)( lVar2 + 0x1b8 ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_continuous_collision_detection_mode", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x29e, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_continuous_collision_detection_mode(RID) const */undefined4 GodotPhysicsServer2D::body_get_continuous_collision_detection_mode(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x1b8 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_continuous_collision_detection_mode", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2a4, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_attach_object_instance_id(RID, ObjectID) */void GodotPhysicsServer2D::body_attach_object_instance_id(GodotPhysicsServer2D *this, ulong param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(undefined8*)( lVar2 + 0x18 ) = param_3;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_attach_object_instance_id", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2ab, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_object_instance_id(RID) const */undefined8 GodotPhysicsServer2D::body_get_object_instance_id(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined8*)( lVar2 + 0x18 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_object_instance_id", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2b2, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_attach_canvas_instance_id(RID, ObjectID) */void GodotPhysicsServer2D::body_attach_canvas_instance_id(GodotPhysicsServer2D *this, ulong param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(undefined8*)( lVar2 + 0x20 ) = param_3;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_attach_canvas_instance_id", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2b9, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_canvas_instance_id(RID) const */undefined8 GodotPhysicsServer2D::body_get_canvas_instance_id(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined8*)( lVar2 + 0x20 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_canvas_instance_id", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2c0, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_set_collision_layer(RID, unsigned int) */void GodotPhysicsServer2D::body_set_collision_layer(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   undefined8 *puVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            puVar2 = (undefined8*)*plVar3;
            if (puVar2 != (undefined8*)0x0) {
               *(undefined4*)( (long)puVar2 + 0x7c ) = param_3;
               /* WARNING: Could not recover jumptable at 0x00101184. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)*puVar2 )();
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_collision_layer", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2c7, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_collision_layer(RID) const */undefined4 GodotPhysicsServer2D::body_get_collision_layer(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x7c );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_collision_layer", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2cd, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_set_collision_mask(RID, unsigned int) */void GodotPhysicsServer2D::body_set_collision_mask(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   undefined8 *puVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            puVar2 = (undefined8*)*plVar3;
            if (puVar2 != (undefined8*)0x0) {
               *(undefined4*)( puVar2 + 0xf ) = param_3;
               /* WARNING: Could not recover jumptable at 0x00101324. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)*puVar2 )();
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_collision_mask", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2d4, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_collision_mask(RID) const */undefined4 GodotPhysicsServer2D::body_get_collision_mask(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x78 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_collision_mask", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2da, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_set_collision_priority(RID, float) */void GodotPhysicsServer2D::body_set_collision_priority(float param_1, GodotPhysicsServer2D *this, ulong param_3) {
   int iVar1;
   undefined8 *puVar2;
   long *plVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         puVar2 = (undefined8*)*plVar3;
         if (puVar2 != (undefined8*)0x0) {
            if (0.0 < param_1) {
               *(float*)( puVar2 + 0x10 ) = param_1;
               /* WARNING: Could not recover jumptable at 0x001014d0. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)*puVar2 )();
               return;
            }

            _err_print_error("set_collision_priority", "modules/godot_physics_2d/godot_collision_object_2d.h", 0xab, "Condition \"p_priority <= 0\" is true.", "Priority must be greater than 0.", 0, 0);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_collision_priority", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2e1, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_collision_priority(RID) const */undefined4 GodotPhysicsServer2D::body_get_collision_priority(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x80 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_collision_priority", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2e8, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_get_constant_force(RID) const */undefined8 GodotPhysicsServer2D::body_get_constant_force(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined8*)( lVar2 + 0x13c );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_constant_force", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x368, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_get_constant_torque(RID) const */undefined4 GodotPhysicsServer2D::body_get_constant_torque(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x144 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_constant_torque", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x378, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_set_contacts_reported_depth_threshold(RID, float) */void GodotPhysicsServer2D::body_set_contacts_reported_depth_threshold(long param_1, ulong param_2) {
   int iVar1;
   long *plVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar2 != 0) {
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_contacts_reported_depth_threshold", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3a6, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_contacts_reported_depth_threshold(RID) const */undefined8 GodotPhysicsServer2D::body_get_contacts_reported_depth_threshold(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long *plVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar2 != 0) {
            return 0;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_contacts_reported_depth_threshold", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3ab, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_set_omit_force_integration(RID, bool) */void GodotPhysicsServer2D::body_set_omit_force_integration(GodotPhysicsServer2D *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               *(undefined1*)( lVar2 + 0x1bc ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_omit_force_integration", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3b1, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_is_omitting_force_integration(RID) const */undefined1 GodotPhysicsServer2D::body_is_omitting_force_integration(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined1*)( lVar2 + 0x1bc );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_is_omitting_force_integration", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3b8, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_set_pickable(RID, bool) */void GodotPhysicsServer2D::body_set_pickable(GodotPhysicsServer2D *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               *(undefined1*)( lVar2 + 0x28 ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_pickable", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3de, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::joint_set_param(RID, PhysicsServer2D::JointParam, float) */void GodotPhysicsServer2D::joint_set_param(undefined4 param_1, GodotPhysicsServer2D *this, ulong param_3, int param_4) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            if (param_4 == 1) {
               *(undefined4*)( lVar2 + 0x34 ) = param_1;
               return;
            }

            if (param_4 != 2) {
               if (param_4 == 0) {
                  *(undefined4*)( lVar2 + 0x30 ) = param_1;
               }

               return;
            }

            *(undefined4*)( lVar2 + 0x38 ) = param_1;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("joint_set_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x417, "Parameter \"joint\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::joint_get_param(RID, PhysicsServer2D::JointParam) const */void GodotPhysicsServer2D::joint_get_param(GodotPhysicsServer2D *this, ulong param_2, int param_3) {
   int iVar1;
   long *plVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar2 != 0) {
            if (param_3 == 1) {
               return;
            }

            if (param_3 != 2) {
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("joint_get_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x428, "Parameter \"joint\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::joint_disable_collisions_between_bodies(RID, bool) */void GodotPhysicsServer2D::joint_disable_collisions_between_bodies(GodotPhysicsServer2D *this, ulong param_2, char param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar4;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x334 )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
         iVar1 = (int)plVar4[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar4;
            if (lVar2 != 0) {
               *(char*)( lVar2 + 0x20 ) = param_3;
               if (*(int*)( lVar2 + 0x10 ) != 2) {
                  return;
               }

               lVar3 = **(long**)( lVar2 + 8 );
               lVar2 = ( *(long**)( lVar2 + 8 ) )[1];
               if (param_3 == '\0') {
                  ( **(code**)( *(long*)this + 0x468 ) )();
                  UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x468 );
               }
 else {
                  ( **(code**)( *(long*)this + 0x460 ) )(this, *(undefined8*)( lVar3 + 0x10 ), *(undefined8*)( lVar2 + 0x10 ));
                  UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x460 );
               }

               /* WARNING: Could not recover jumptable at 0x00101e8e. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(this, *(undefined8*)( lVar2 + 0x10 ), *(undefined8*)( lVar3 + 0x10 ));
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("joint_disable_collisions_between_bodies", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x43b, "Parameter \"joint\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::joint_is_disabled_collisions_between_bodies(RID) const */undefined1 GodotPhysicsServer2D::joint_is_disabled_collisions_between_bodies(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined1*)( lVar2 + 0x20 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("joint_is_disabled_collisions_between_bodies", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x44f, "Parameter \"joint\" is null.", 0, 0);
   return 1;
}
/* GodotPhysicsServer2D::joint_get_type(RID) const */undefined8 GodotPhysicsServer2D::joint_get_type(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            /* WARNING: Could not recover jumptable at 0x00102040. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar2 = ( **(code**)( *plVar3 + 0x28 ) )();
            return uVar2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("joint_get_type", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x4c1, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::area_get_shape_count(RID) const */undefined4 GodotPhysicsServer2D::area_get_shape_count(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   undefined4 uVar3;
   long *plVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar4;
         if (lVar2 != 0) {
            lVar2 = *(long*)( lVar2 + 0x38 );
            if (lVar2 == 0) {
               uVar3 = 0;
            }
 else {
               uVar3 = *(undefined4*)( lVar2 + -8 );
            }

            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_get_shape_count", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x16a, "Parameter \"area\" is null.", 0, 0);
   return 0xffffffff;
}
/* GodotPhysicsServer2D::body_get_shape_count(RID) const */undefined4 GodotPhysicsServer2D::body_get_shape_count(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   undefined4 uVar3;
   long *plVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar4;
         if (lVar2 != 0) {
            lVar2 = *(long*)( lVar2 + 0x38 );
            if (lVar2 == 0) {
               uVar3 = 0;
            }
 else {
               uVar3 = *(undefined4*)( lVar2 + -8 );
            }

            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_shape_count", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x264, "Parameter \"body\" is null.", 0, 0);
   return 0xffffffff;
}
/* GodotPhysicsServer2D::body_get_max_contacts_reported(RID) const */undefined4 GodotPhysicsServer2D::body_get_max_contacts_reported(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   undefined4 uVar3;
   long *plVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar4;
         if (lVar2 != 0) {
            lVar2 = *(long*)( lVar2 + 0x1f8 );
            if (lVar2 == 0) {
               uVar3 = 0;
            }
 else {
               uVar3 = *(undefined4*)( lVar2 + -8 );
            }

            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_max_contacts_reported", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3c4, "Parameter \"body\" is null.", 0, 0);
   return 0xffffffff;
}
/* GodotPhysicsServer2D::_shape_col_cbk(Vector2 const&, Vector2 const&, void*) */void GodotPhysicsServer2D::_shape_col_cbk(Vector2 *param_1, Vector2 *param_2, void *param_3) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   int iVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   float fVar6;
   int iVar7;
   float fVar8;
   float fVar9;
   int iVar10;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( (long)param_3 + 0xc ) == 0) goto LAB_00102387;
   fVar6 = (float)Vector2::length_squared();
   /* WARNING: Load size is inaccurate */
   if (( *param_3 != 0.0 ) || ( *(float*)( (long)param_3 + 4 ) != 0.0 )) {
      fVar8 = *(float*)( (long)param_3 + 8 );
      if (_LC59 <= (double)fVar8) {
         if (0.0 < fVar6) {
            Vector2::normalized();
            fVar8 = (float)Vector2::dot((Vector2*)param_3);
            if ((double)fVar8 < _LC60) goto LAB_00102387;
         }

      }
 else {
         if (fVar8 * fVar8 < fVar6) {
            LAB_001024b8:*(int*)( (long)param_3 + 0x18 ) = *(int*)( (long)param_3 + 0x18 ) + 1;
            goto LAB_00102387;
         }

         if (_LC60 < (double)fVar6) {
            Vector2::normalized();
            fVar8 = (float)Vector2::dot((Vector2*)param_3);
            if ((double)fVar8 < _LC60) goto LAB_001024b8;
         }

      }

   }

   iVar4 = *(int*)( (long)param_3 + 0x10 );
   if (iVar4 == *(int*)( (long)param_3 + 0xc )) {
      fVar8 = _LC58;
      if (iVar4 < 1) {
         iVar4 = 0;
      }
 else {
         uVar3 = 0;
         uVar5 = 0;
         do {
            fVar9 = (float)Vector2::distance_squared_to((Vector2*)( *(long*)( (long)param_3 + 0x20 ) + uVar3 * 0x10 ));
            if (fVar9 < fVar8) {
               uVar5 = uVar3 & 0xffffffff;
               fVar8 = fVar9;
            }

            iVar4 = (int)uVar5;
            uVar3 = uVar3 + 1;
         }
 while ( (int)uVar3 < *(int*)( (long)param_3 + 0x10 ) );
      }

      if (fVar8 <= fVar6) {
         lVar2 = *(long*)( (long)param_3 + 0x20 );
         *(undefined8*)( lVar2 + (long)( iVar4 * 2 ) * 8 ) = *(undefined8*)param_1;
         *(undefined8*)( lVar2 + 8 + (long)( iVar4 * 2 ) * 8 ) = *(undefined8*)param_2;
         *(int*)( (long)param_3 + 0x14 ) = *(int*)( (long)param_3 + 0x14 ) + 1;
      }

   }
 else {
      lVar2 = *(long*)( (long)param_3 + 0x20 );
      iVar7 = iVar4 + (int)_LC61;
      iVar10 = *(int*)( (long)param_3 + 0x14 ) + _LC61._4_4_;
      *(undefined8*)( lVar2 + (long)( iVar4 * 2 ) * 8 ) = *(undefined8*)param_1;
      *(undefined8*)( lVar2 + 8 + (long)( iVar4 * 2 ) * 8 ) = *(undefined8*)param_2;
      *(ulong*)( (long)param_3 + 0x10 ) = CONCAT44(iVar10, iVar7);
   }

   LAB_00102387:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::shape_collide(RID, Transform2D const&, Vector2 const&, RID, Transform2D
   const&, Vector2 const&, Vector2*, int, int&) */undefined8 GodotPhysicsServer2D::shape_collide(GodotPhysicsServer2D *this, ulong param_2, Transform2D *param_3, Vector2 *param_4, ulong param_5, Transform2D *param_6, Vector2 *param_7, undefined8 param_8, int param_9, undefined4 *param_10) {
   int iVar1;
   GodotShape2D *pGVar2;
   GodotShape2D *pGVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined4 local_50;
   int local_4c;
   undefined8 local_48;
   undefined4 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x1d4 ) <= (uint)param_2 )) {
      LAB_00102780:_err_print_error("shape_collide", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0xc6, "Parameter \"shape_A\" is null.", 0, 0);
      uVar4 = 0;
   }
 else {
      puVar5 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = *(int*)( puVar5 + 1 );
      if (iVar1 != (int)( param_2 >> 0x20 )) {
         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00102780;
      }

      pGVar2 = (GodotShape2D*)*puVar5;
      if (pGVar2 == (GodotShape2D*)0x0) goto LAB_00102780;
      if (( param_5 == 0 ) || ( *(uint*)( this + 0x1d4 ) <= (uint)param_5 )) {
         LAB_001027c0:_err_print_error("shape_collide", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 200, "Parameter \"shape_B\" is null.", 0, 0);
         uVar4 = 0;
      }
 else {
         puVar5 = (undefined8*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
         iVar1 = *(int*)( puVar5 + 1 );
         if (iVar1 != (int)( param_5 >> 0x20 )) {
            if (iVar1 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

            goto LAB_001027c0;
         }

         pGVar3 = (GodotShape2D*)*puVar5;
         if (pGVar3 == (GodotShape2D*)0x0) goto LAB_001027c0;
         if (param_9 == 0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar4 = GodotCollisionSolver2D::solve(pGVar2, param_3, param_4, pGVar3, param_6, param_7, (_func_void_Vector2_ptr_Vector2_ptr_void_ptr*)0x0, (void*)0x0, (Vector2*)0x0, 0.0, 0.0);
               return uVar4;
            }

            goto LAB_00102866;
         }

         local_58 = 0;
         local_4c = param_9;
         local_50 = 0;
         local_48 = 0;
         local_40 = 0;
         local_38 = param_8;
         uVar4 = GodotCollisionSolver2D::solve(pGVar2, param_3, param_4, pGVar3, param_6, param_7, _shape_col_cbk, &local_58, (Vector2*)0x0, 0.0, 0.0);
         *param_10 = (undefined4)local_48;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   LAB_00102866:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer2D::space_set_param(RID, PhysicsServer2D::SpaceParameter, float) */void GodotPhysicsServer2D::space_set_param(long param_1, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( param_1 + 0x22c )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x228 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x228 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               GodotSpace2D::set_param(lVar2, param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("space_set_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0xfa, "Parameter \"space\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::space_get_param(RID, PhysicsServer2D::SpaceParameter) const */undefined8 GodotPhysicsServer2D::space_get_param(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   undefined8 uVar4;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x22c )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               uVar4 = GodotSpace2D::get_param(lVar2, param_3);
               return uVar4;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("space_get_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x101, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::space_get_direct_state(RID) */undefined8 GodotPhysicsServer2D::space_get_direct_state(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   char cVar2;
   undefined8 uVar3;
   long *plVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x22c ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar4 != 0) {
            if (( ( this[0x180] == (GodotPhysicsServer2D)0x0 ) || ( this[0x172] != (GodotPhysicsServer2D)0x0 ) ) && ( cVar2 = GodotSpace2D::is_locked() ),cVar2 == '\0') {
               uVar3 = GodotSpace2D::get_direct_state();
               return uVar3;
            }

            _err_print_error("space_get_direct_state", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x11a, "Condition \"(using_threads && !doing_sync) || space->is_locked()\" is true. Returning: nullptr", "Space state is inaccessible right now, wait for iteration or physics process notification.", 0, 0);
            return 0;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("space_get_direct_state", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x119, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::area_add_shape(RID, RID, Transform2D const&, bool) */void GodotPhysicsServer2D::area_add_shape(long param_1, ulong param_2, ulong param_3, bool param_4) {
   int iVar1;
   GodotShape2D *pGVar2;
   Transform2D *pTVar3;
   undefined8 *puVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x284 ) )) {
      puVar4 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
      iVar1 = *(int*)( puVar4 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pGVar2 = (GodotShape2D*)*puVar4;
         if (pGVar2 != (GodotShape2D*)0x0) {
            if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_1 + 0x1d4 ) )) {
               puVar4 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x1c0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x1d0 ) ) * 8 ) );
               iVar1 = *(int*)( puVar4 + 1 );
               if (iVar1 == (int)( param_3 >> 0x20 )) {
                  pTVar3 = (Transform2D*)*puVar4;
                  if (pTVar3 != (Transform2D*)0x0) {
                     GodotCollisionObject2D::add_shape(pGVar2, pTVar3, param_4);
                     return;
                  }

               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            _err_print_error("area_add_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x148, "Parameter \"shape\" is null.", 0, 0);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_add_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x145, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_add_shape(RID, RID, Transform2D const&, bool) */void GodotPhysicsServer2D::body_add_shape(long param_1, ulong param_2, ulong param_3, bool param_4) {
   int iVar1;
   GodotShape2D *pGVar2;
   Transform2D *pTVar3;
   undefined8 *puVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      puVar4 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar4 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pGVar2 = (GodotShape2D*)*puVar4;
         if (pGVar2 != (GodotShape2D*)0x0) {
            if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_1 + 0x1d4 ) )) {
               puVar4 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x1c0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x1d0 ) ) * 8 ) );
               iVar1 = *(int*)( puVar4 + 1 );
               if (iVar1 == (int)( param_3 >> 0x20 )) {
                  pTVar3 = (Transform2D*)*puVar4;
                  if (pTVar3 != (Transform2D*)0x0) {
                     GodotCollisionObject2D::add_shape(pGVar2, pTVar3, param_4);
                     return;
                  }

               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            _err_print_error("body_add_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x24b, "Parameter \"shape\" is null.", 0, 0);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x248, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_set_shape(RID, int, RID) */void GodotPhysicsServer2D::area_set_shape(GodotPhysicsServer2D *this, ulong param_2, uint param_3, ulong param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x284 )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
         iVar1 = (int)plVar4[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar4;
            if (lVar2 != 0) {
               if (( param_4 != 0 ) && ( (uint)param_4 < *(uint*)( this + 0x1d4 ) )) {
                  plVar4 = (long*)( ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
                  iVar1 = (int)plVar4[1];
                  if (iVar1 == (int)( param_4 >> 0x20 )) {
                     lVar3 = *plVar4;
                     if (lVar3 != 0) {
                        if (*(char*)( lVar3 + 0x20 ) != '\0') {
                           GodotCollisionObject2D::set_shape((int)lVar2, (GodotShape2D*)(ulong)param_3);
                           return;
                        }

                        _err_print_error("area_set_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x153, "Condition \"!shape->is_configured()\" is true.", 0, 0);
                        return;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

               _err_print_error("area_set_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x152, "Parameter \"shape\" is null.", 0, 0);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("area_set_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x14f, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_set_shape(RID, int, RID) */void GodotPhysicsServer2D::body_set_shape(GodotPhysicsServer2D *this, ulong param_2, uint param_3, ulong param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar4[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar4;
            if (lVar2 != 0) {
               if (( param_4 != 0 ) && ( (uint)param_4 < *(uint*)( this + 0x1d4 ) )) {
                  plVar4 = (long*)( ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
                  iVar1 = (int)plVar4[1];
                  if (iVar1 == (int)( param_4 >> 0x20 )) {
                     lVar3 = *plVar4;
                     if (lVar3 != 0) {
                        if (*(char*)( lVar3 + 0x20 ) != '\0') {
                           GodotCollisionObject2D::set_shape((int)lVar2, (GodotShape2D*)(ulong)param_3);
                           return;
                        }

                        _err_print_error("body_set_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x256, "Condition \"!shape->is_configured()\" is true.", 0, 0);
                        return;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

               _err_print_error("body_set_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x255, "Parameter \"shape\" is null.", 0, 0);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x252, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_set_shape_transform(RID, int, Transform2D const&) */void GodotPhysicsServer2D::area_set_shape_transform(long param_1, ulong param_2, uint param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( param_1 + 0x284 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               GodotCollisionObject2D::set_shape_transform((int)lVar2, (Transform2D*)(ulong)param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("area_set_shape_transform", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x15a, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_set_shape_transform(RID, int, Transform2D const&) */void GodotPhysicsServer2D::body_set_shape_transform(long param_1, ulong param_2, uint param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( param_1 + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               GodotCollisionObject2D::set_shape_transform((int)lVar2, (Transform2D*)(ulong)param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_shape_transform", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x25d, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_get_shape(RID, int) const */undefined8 GodotPhysicsServer2D::area_get_shape(GodotPhysicsServer2D *this, ulong param_2, int param_3) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x284 ) <= (uint)param_2 )) {
      LAB_001034e0:_err_print_error("area_get_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x171, "Parameter \"area\" is null.", 0, 0);
      return 0;
   }

   plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
   iVar1 = (int)plVar5[1];
   if (iVar1 != (int)( param_2 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_001034e0;
   }

   lVar2 = *plVar5;
   if (lVar2 == 0) goto LAB_001034e0;
   lVar2 = *(long*)( lVar2 + 0x38 );
   lVar4 = (long)param_3;
   if (param_3 < 0) {
      if (lVar2 != 0) {
         lVar6 = *(long*)( lVar2 + -8 );
         goto LAB_00103485;
      }

   }
 else if (lVar2 != 0) {
      lVar6 = *(long*)( lVar2 + -8 );
      if (lVar4 < lVar6) {
         lVar2 = *(long*)( lVar2 + 0x48 + lVar4 * 0x58 );
         if (lVar2 == 0) {
            _err_print_error("area_get_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x174, "Parameter \"shape\" is null.", 0, 0);
            return 0;
         }

         return *(undefined8*)( lVar2 + 8 );
      }

      goto LAB_00103485;
   }

   lVar6 = 0;
   LAB_00103485:_err_print_index_error("get_shape", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x75, lVar4, lVar6, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* GodotPhysicsServer2D::body_get_shape(RID, int) const */undefined8 GodotPhysicsServer2D::body_get_shape(GodotPhysicsServer2D *this, ulong param_2, int param_3) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x2dc ) <= (uint)param_2 )) {
      LAB_00103690:_err_print_error("body_get_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x26b, "Parameter \"body\" is null.", 0, 0);
      return 0;
   }

   plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
   iVar1 = (int)plVar5[1];
   if (iVar1 != (int)( param_2 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00103690;
   }

   lVar2 = *plVar5;
   if (lVar2 == 0) goto LAB_00103690;
   lVar2 = *(long*)( lVar2 + 0x38 );
   lVar4 = (long)param_3;
   if (param_3 < 0) {
      if (lVar2 != 0) {
         lVar6 = *(long*)( lVar2 + -8 );
         goto LAB_00103635;
      }

   }
 else if (lVar2 != 0) {
      lVar6 = *(long*)( lVar2 + -8 );
      if (lVar4 < lVar6) {
         lVar2 = *(long*)( lVar2 + 0x48 + lVar4 * 0x58 );
         if (lVar2 == 0) {
            _err_print_error("body_get_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x26e, "Parameter \"shape\" is null.", 0, 0);
            return 0;
         }

         return *(undefined8*)( lVar2 + 8 );
      }

      goto LAB_00103635;
   }

   lVar6 = 0;
   LAB_00103635:_err_print_index_error("get_shape", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x75, lVar4, lVar6, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* GodotPhysicsServer2D::area_get_shape_transform(RID, int) const */undefined8 *GodotPhysicsServer2D::area_get_shape_transform(undefined8 *param_1, long param_2, ulong param_3, int param_4) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   code *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   long lVar9;
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x284 ) <= (uint)param_3 )) {
      LAB_0010383c:_err_print_error("area_get_shape_transform", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x17b, "Parameter \"area\" is null.", 0, 0);
      *param_1 = 0x3f800000;
      param_1[1] = 0x3f80000000000000;
      param_1[2] = 0;
      return param_1;
   }

   plVar8 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 ) );
   iVar2 = (int)plVar8[1];
   if (iVar2 != (int)( param_3 >> 0x20 )) {
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_0010383c;
   }

   lVar3 = *plVar8;
   if (lVar3 == 0) goto LAB_0010383c;
   lVar3 = *(long*)( lVar3 + 0x38 );
   lVar7 = (long)param_4;
   if (param_4 < 0) {
      if (lVar3 != 0) {
         lVar9 = *(long*)( lVar3 + -8 );
         goto LAB_001037e5;
      }

   }
 else if (lVar3 != 0) {
      lVar9 = *(long*)( lVar3 + -8 );
      if (lVar7 < lVar9) {
         puVar1 = (undefined8*)( lVar3 + lVar7 * 0x58 );
         uVar6 = puVar1[1];
         uVar4 = puVar1[2];
         *param_1 = *puVar1;
         param_1[1] = uVar6;
         param_1[2] = uVar4;
         return param_1;
      }

      goto LAB_001037e5;
   }

   lVar9 = 0;
   LAB_001037e5:_err_print_index_error("get_shape_transform", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x79, lVar7, lVar9, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}
/* GodotPhysicsServer2D::body_get_shape_transform(RID, int) const */undefined8 *GodotPhysicsServer2D::body_get_shape_transform(undefined8 *param_1, long param_2, ulong param_3, int param_4) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   code *pcVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   long lVar9;
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x2dc ) <= (uint)param_3 )) {
      LAB_001039cc:_err_print_error("body_get_shape_transform", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x275, "Parameter \"body\" is null.", 0, 0);
      *param_1 = 0x3f800000;
      param_1[1] = 0x3f80000000000000;
      param_1[2] = 0;
      return param_1;
   }

   plVar8 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x2d8 ) ) * 8 ) );
   iVar2 = (int)plVar8[1];
   if (iVar2 != (int)( param_3 >> 0x20 )) {
      if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_001039cc;
   }

   lVar3 = *plVar8;
   if (lVar3 == 0) goto LAB_001039cc;
   lVar3 = *(long*)( lVar3 + 0x38 );
   lVar7 = (long)param_4;
   if (param_4 < 0) {
      if (lVar3 != 0) {
         lVar9 = *(long*)( lVar3 + -8 );
         goto LAB_00103975;
      }

   }
 else if (lVar3 != 0) {
      lVar9 = *(long*)( lVar3 + -8 );
      if (lVar7 < lVar9) {
         puVar1 = (undefined8*)( lVar3 + lVar7 * 0x58 );
         uVar6 = puVar1[1];
         uVar4 = puVar1[2];
         *param_1 = *puVar1;
         param_1[1] = uVar6;
         param_1[2] = uVar4;
         return param_1;
      }

      goto LAB_00103975;
   }

   lVar9 = 0;
   LAB_00103975:_err_print_index_error("get_shape_transform", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x79, lVar7, lVar9, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar5 = (code*)invalidInstructionException();
   ( *pcVar5 )();
}
/* GodotPhysicsServer2D::area_set_shape_disabled(RID, int, bool) */undefined8 GodotPhysicsServer2D::area_set_shape_disabled(long param_1, ulong param_2, int param_3) {
   long lVar1;
   undefined8 uVar2;
   long *plVar3;
   int iVar4;
   long lVar5;
   if (( param_2 == 0 ) || ( *(uint*)( param_1 + 0x284 ) <= (uint)param_2 )) {
      LAB_00103b60:uVar2 = _err_print_error("area_set_shape_disabled", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x161, "Parameter \"area\" is null.", 0, 0);
      return uVar2;
   }

   plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
   iVar4 = (int)plVar3[1];
   if (iVar4 != (int)( param_2 >> 0x20 )) {
      if (iVar4 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00103b60;
   }

   lVar5 = *plVar3;
   if (lVar5 == 0) goto LAB_00103b60;
   lVar1 = *(long*)( lVar5 + 0x38 );
   if (param_3 < 0) {
      if (lVar1 != 0) {
         iVar4 = (int)*(undefined8*)( lVar1 + -8 );
         goto LAB_00103b05;
      }

   }
 else if (lVar1 != 0) {
      iVar4 = (int)*(undefined8*)( lVar1 + -8 );
      if (param_3 < iVar4) {
         if (( *(long*)( lVar5 + 0x40 ) != 0 ) && ( *(char*)( param_1 + 0x181 ) != '\0' )) {
            uVar2 = 0;
            _err_print_error("area_set_shape_disabled", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x163, "Condition \"area->get_space() && flushing_queries\" is true.", "Can\'t change this state while flushing queries. Use call_deferred() or set_deferred() to change monitoring state instead.", 0);
            return uVar2;
         }

         uVar2 = GodotCollisionObject2D::set_shape_disabled((int)lVar5, SUB41(param_3, 0));
         return uVar2;
      }

      LAB_00103b05:lVar5 = (long)iVar4;
      goto LAB_00103b08;
   }

   lVar5 = 0;
   LAB_00103b08:uVar2 = _err_print_index_error("area_set_shape_disabled", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x162, (long)param_3, lVar5, "p_shape", "area->get_shape_count()", "", false, false);
   return uVar2;
}
/* GodotPhysicsServer2D::body_set_shape_disabled(RID, int, bool) */undefined8 GodotPhysicsServer2D::body_set_shape_disabled(long param_1, ulong param_2, int param_3) {
   long lVar1;
   undefined8 uVar2;
   long *plVar3;
   int iVar4;
   long lVar5;
   if (( param_2 == 0 ) || ( *(uint*)( param_1 + 0x2dc ) <= (uint)param_2 )) {
      LAB_00103d20:uVar2 = _err_print_error("body_set_shape_disabled", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x28c, "Parameter \"body\" is null.", 0, 0);
      return uVar2;
   }

   plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
   iVar4 = (int)plVar3[1];
   if (iVar4 != (int)( param_2 >> 0x20 )) {
      if (iVar4 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00103d20;
   }

   lVar5 = *plVar3;
   if (lVar5 == 0) goto LAB_00103d20;
   lVar1 = *(long*)( lVar5 + 0x38 );
   if (param_3 < 0) {
      if (lVar1 != 0) {
         iVar4 = (int)*(undefined8*)( lVar1 + -8 );
         goto LAB_00103cc5;
      }

   }
 else if (lVar1 != 0) {
      iVar4 = (int)*(undefined8*)( lVar1 + -8 );
      if (param_3 < iVar4) {
         if (( *(long*)( lVar5 + 0x40 ) != 0 ) && ( *(char*)( param_1 + 0x181 ) != '\0' )) {
            uVar2 = 0;
            _err_print_error("body_set_shape_disabled", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x28e, "Condition \"body->get_space() && flushing_queries\" is true.", "Can\'t change this state while flushing queries. Use call_deferred() or set_deferred() to change monitoring state instead.", 0);
            return uVar2;
         }

         uVar2 = GodotCollisionObject2D::set_shape_disabled((int)lVar5, SUB41(param_3, 0));
         return uVar2;
      }

      LAB_00103cc5:lVar5 = (long)iVar4;
      goto LAB_00103cc8;
   }

   lVar5 = 0;
   LAB_00103cc8:uVar2 = _err_print_index_error("body_set_shape_disabled", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x28d, (long)param_3, lVar5, "p_shape_idx", "body->get_shape_count()", "", false, false);
   return uVar2;
}
/* GodotPhysicsServer2D::area_remove_shape(RID, int) */void GodotPhysicsServer2D::area_remove_shape(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            GodotCollisionObject2D::remove_shape((int)lVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_remove_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x182, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_remove_shape(RID, int) */void GodotPhysicsServer2D::body_remove_shape(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            GodotCollisionObject2D::remove_shape((int)lVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_remove_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x27c, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_clear_shapes(RID) */void GodotPhysicsServer2D::area_clear_shapes(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            while (( *(long*)( lVar2 + 0x38 ) != 0 && ( *(int*)( *(long*)( lVar2 + 0x38 ) + -8 ) != 0 ) )) {
               GodotCollisionObject2D::remove_shape((int)lVar2);
            }
;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_clear_shapes", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x189, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_clear_shapes(RID) */void GodotPhysicsServer2D::body_clear_shapes(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            while (( *(long*)( lVar2 + 0x38 ) != 0 && ( *(int*)( *(long*)( lVar2 + 0x38 ) + -8 ) != 0 ) )) {
               GodotCollisionObject2D::remove_shape((int)lVar2);
            }
;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_clear_shapes", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x283, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_set_transform(RID, Transform2D const&) */void GodotPhysicsServer2D::area_set_transform(long param_1, ulong param_2) {
   int iVar1;
   Transform2D *pTVar2;
   undefined8 *puVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x284 ) )) {
      puVar3 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
      iVar1 = *(int*)( puVar3 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pTVar2 = (Transform2D*)*puVar3;
         if (pTVar2 != (Transform2D*)0x0) {
            GodotArea2D::set_transform(pTVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_set_transform", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1c4, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_set_monitorable(RID, bool) */void GodotPhysicsServer2D::area_set_monitorable(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( *(char*)( param_1 + 0x181 ) != '\0' )) {
               _err_print_error("area_set_monitorable", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1e3, "Condition \"area->get_space() && flushing_queries\" is true.", "Can\'t change this state while flushing queries. Use call_deferred() or set_deferred() to change monitoring state instead.", 0, 0);
               return;
            }

            GodotArea2D::set_monitorable(SUB81(lVar2, 0));
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_set_monitorable", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1e2, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_set_monitor_callback(RID, Callable const&) */void GodotPhysicsServer2D::area_set_monitor_callback(GodotPhysicsServer2D *this, ulong param_2, Callable *param_3) {
   int iVar1;
   Callable *pCVar2;
   char cVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x284 )) {
         puVar4 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
         iVar1 = *(int*)( puVar4 + 1 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            pCVar2 = (Callable*)*puVar4;
            if (pCVar2 != (Callable*)0x0) {
               cVar3 = Callable::is_valid();
               if (cVar3 == '\0') {
                  local_38 = 0;
                  local_30 = 0;
               }
 else {
                  Callable::Callable((Callable*)&local_38, param_3);
               }

               GodotArea2D::set_monitor_callback(pCVar2);
               Callable::~Callable((Callable*)&local_38);
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_00104453;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("area_set_monitor_callback", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x206, "Parameter \"area\" is null.", 0, 0);
      return;
   }

   LAB_00104453:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer2D::area_set_area_monitor_callback(RID, Callable const&) */void GodotPhysicsServer2D::area_set_area_monitor_callback(GodotPhysicsServer2D *this, ulong param_2, Callable *param_3) {
   int iVar1;
   Callable *pCVar2;
   char cVar3;
   undefined8 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x284 )) {
         puVar4 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
         iVar1 = *(int*)( puVar4 + 1 );
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            pCVar2 = (Callable*)*puVar4;
            if (pCVar2 != (Callable*)0x0) {
               cVar3 = Callable::is_valid();
               if (cVar3 == '\0') {
                  local_38 = 0;
                  local_30 = 0;
               }
 else {
                  Callable::Callable((Callable*)&local_38, param_3);
               }

               GodotArea2D::set_area_monitor_callback(pCVar2);
               Callable::~Callable((Callable*)&local_38);
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_001045b3;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("area_set_area_monitor_callback", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x20d, "Parameter \"area\" is null.", 0, 0);
      return;
   }

   LAB_001045b3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer2D::body_set_mode(RID, PhysicsServer2D::BodyMode) */void GodotPhysicsServer2D::body_set_mode(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( this[0x181] != (GodotPhysicsServer2D)0x0 )) {
                  _err_print_error("body_set_mode", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x23a, "Condition \"body->get_space() && flushing_queries\" is true.", "Can\'t change this state while flushing queries. Use call_deferred() or set_deferred() to change monitoring state instead.", 0, 0);
                  return;
               }

               GodotBody2D::set_mode(lVar2, param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_mode", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x239, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_mode(RID) const */undefined8 GodotPhysicsServer2D::body_get_mode(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar3 != 0) {
            uVar2 = GodotBody2D::get_mode();
            return uVar2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_mode", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x241, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::body_set_param(RID, PhysicsServer2D::BodyParameter, Variant const&) */void GodotPhysicsServer2D::body_set_param(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3, undefined8 param_4) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               GodotBody2D::set_param(lVar2, param_3, param_4);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2ef, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_param(RID, PhysicsServer2D::BodyParameter) const */Variant *GodotPhysicsServer2D::body_get_param(Variant *param_1, long param_2, ulong param_3, undefined4 param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar3 = *plVar4;
         if (lVar3 != 0) {
            GodotBody2D::get_param(param_1, lVar3, param_4);
            goto LAB_001048d6;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2f6, "Parameter \"body\" is null.", 0, 0);
   Variant::Variant(param_1, 0);
   LAB_001048d6:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::body_reset_mass_properties(RID) */void GodotPhysicsServer2D::body_reset_mass_properties(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long *plVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar2 != 0) {
            GodotBody2D::reset_mass_properties();
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_reset_mass_properties", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x2fd, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_set_state(RID, PhysicsServer2D::BodyState, Variant const&) */void GodotPhysicsServer2D::body_set_state(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3, undefined8 param_4) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               GodotBody2D::set_state(lVar2, param_3, param_4);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_state", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x304, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_state(RID, PhysicsServer2D::BodyState) const */undefined4 *GodotPhysicsServer2D::body_get_state(undefined4 *param_1, long param_2, ulong param_3, undefined4 param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar3 = *plVar4;
         if (lVar3 != 0) {
            GodotBody2D::get_state(param_1, lVar3, param_4);
            goto LAB_00104b76;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_state", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x30b, "Parameter \"body\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   LAB_00104b76:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::body_apply_central_impulse(RID, Vector2 const&) */void GodotPhysicsServer2D::body_apply_central_impulse(GodotPhysicsServer2D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   float fVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            fVar4 = (float)( ( ulong ) * (undefined8*)( lVar2 + 0x100 ) >> 0x20 );
            *(ulong*)( lVar2 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar2 + 0xb8 ) >> 0x20 ) + (float)( ( ulong ) * param_3 >> 0x20 ) * fVar4, (float)*(undefined8*)( lVar2 + 0xb8 ) + (float)*param_3 * fVar4);
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_central_impulse", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x312, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_apply_central_force(RID, Vector2 const&) */void GodotPhysicsServer2D::body_apply_central_force(GodotPhysicsServer2D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(ulong*)( lVar2 + 0x130 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar2 + 0x130 ) >> 0x20 ) + (float)( ( ulong ) * param_3 >> 0x20 ), (float)*(undefined8*)( lVar2 + 0x130 ) + (float)*param_3);
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_central_force", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x32e, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_apply_torque(RID, float) */void GodotPhysicsServer2D::body_apply_torque(float param_1, GodotPhysicsServer2D *this, ulong param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(float*)( lVar2 + 0x138 ) = param_1 + *(float*)( lVar2 + 0x138 );
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_torque", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x33e, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_add_constant_central_force(RID, Vector2 const&) */void GodotPhysicsServer2D::body_add_constant_central_force(GodotPhysicsServer2D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(ulong*)( lVar2 + 0x13c ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar2 + 0x13c ) >> 0x20 ) + (float)( ( ulong ) * param_3 >> 0x20 ), (float)*(undefined8*)( lVar2 + 0x13c ) + (float)*param_3);
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_constant_central_force", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x346, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_add_constant_torque(RID, float) */void GodotPhysicsServer2D::body_add_constant_torque(float param_1, GodotPhysicsServer2D *this, ulong param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(float*)( lVar2 + 0x144 ) = param_1 + *(float*)( lVar2 + 0x144 );
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_constant_torque", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x356, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_set_constant_torque(RID, float) */void GodotPhysicsServer2D::body_set_constant_torque(float param_1, GodotPhysicsServer2D *this, ulong param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(float*)( lVar2 + 0x144 ) = param_1;
            if (( ( _LC116 <= ABS(param_1) ) && ( *(long*)( lVar2 + 0x40 ) != 0 ) ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_constant_torque", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x36e, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_apply_force(RID, Vector2 const&, Vector2 const&) */void GodotPhysicsServer2D::body_apply_force(GodotPhysicsServer2D *this, ulong param_2, undefined8 *param_3, undefined8 *param_4) {
   int iVar1;
   long lVar2;
   long *plVar3;
   long in_FS_OFFSET;
   float fVar4;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               *(ulong*)( lVar2 + 0x130 ) = CONCAT44((float)( ( ulong ) * param_3 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar2 + 0x130 ) >> 0x20 ), (float)*param_3 + (float)*(undefined8*)( lVar2 + 0x130 ));
               local_18 = CONCAT44((float)( ( ulong ) * param_4 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar2 + 0x118 ) >> 0x20 ), (float)*param_4 - (float)*(undefined8*)( lVar2 + 0x118 ));
               fVar4 = (float)Vector2::cross((Vector2*)&local_18);
               *(float*)( lVar2 + 0x138 ) = fVar4 + *(float*)( lVar2 + 0x138 );
               if (( *(long*)( lVar2 + 0x40 ) == 0 ) || ( *(uint*)( lVar2 + 0xa8 ) < 2 )) {
                  if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

               }
 else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  GodotBody2D::set_active(SUB81(lVar2, 0));
                  return;
               }

               goto LAB_001053b3;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("body_apply_force", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x336, "Parameter \"body\" is null.", 0, 0);
      return;
   }

   LAB_001053b3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer2D::body_add_constant_force(RID, Vector2 const&, Vector2 const&) */void GodotPhysicsServer2D::body_add_constant_force(GodotPhysicsServer2D *this, ulong param_2, undefined8 *param_3, undefined8 *param_4) {
   int iVar1;
   long lVar2;
   long *plVar3;
   long in_FS_OFFSET;
   float fVar4;
   undefined8 local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               *(ulong*)( lVar2 + 0x13c ) = CONCAT44((float)( ( ulong ) * param_3 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar2 + 0x13c ) >> 0x20 ), (float)*param_3 + (float)*(undefined8*)( lVar2 + 0x13c ));
               local_18 = CONCAT44((float)( ( ulong ) * param_4 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar2 + 0x118 ) >> 0x20 ), (float)*param_4 - (float)*(undefined8*)( lVar2 + 0x118 ));
               fVar4 = (float)Vector2::cross((Vector2*)&local_18);
               *(float*)( lVar2 + 0x144 ) = fVar4 + *(float*)( lVar2 + 0x144 );
               if (( *(long*)( lVar2 + 0x40 ) == 0 ) || ( *(uint*)( lVar2 + 0xa8 ) < 2 )) {
                  if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

               }
 else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  GodotBody2D::set_active(SUB81(lVar2, 0));
                  return;
               }

               goto LAB_00105553;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("body_add_constant_force", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x34e, "Parameter \"body\" is null.", 0, 0);
      return;
   }

   LAB_00105553:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer2D::body_set_constant_force(RID, Vector2 const&) */void GodotPhysicsServer2D::body_set_constant_force(GodotPhysicsServer2D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   char cVar3;
   long *plVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar4;
         if (lVar2 != 0) {
            *(undefined8*)( lVar2 + 0x13c ) = *param_3;
            cVar3 = Vector2::is_zero_approx();
            if (( ( cVar3 == '\0' ) && ( *(long*)( lVar2 + 0x40 ) != 0 ) ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_constant_force", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x35e, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_set_state_sync_callback(RID, Callable const&) */void GodotPhysicsServer2D::body_set_state_sync_callback(long param_1, ulong param_2) {
   int iVar1;
   Callable *pCVar2;
   undefined8 *puVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      puVar3 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar3 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pCVar2 = (Callable*)*puVar3;
         if (pCVar2 != (Callable*)0x0) {
            GodotBody2D::set_state_sync_callback(pCVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_state_sync_callback", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3ca, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_set_force_integration_callback(RID, Callable const&, Variant const&)
    */void GodotPhysicsServer2D::body_set_force_integration_callback(long param_1, ulong param_2, Variant *param_3) {
   int iVar1;
   Callable *pCVar2;
   undefined8 *puVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      puVar3 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar3 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pCVar2 = (Callable*)*puVar3;
         if (pCVar2 != (Callable*)0x0) {
            GodotBody2D::set_force_integration_callback(pCVar2, param_3);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_force_integration_callback", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3d0, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_collide_shape(RID, int, RID, Transform2D const&, Vector2 const&,
   Vector2*, int, int&) */undefined8 GodotPhysicsServer2D::body_collide_shape(GodotPhysicsServer2D *this, ulong param_2, int param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6, undefined8 param_7, undefined4 param_8, undefined8 param_9) {
   code *pcVar1;
   int iVar2;
   undefined8 uVar3;
   long lVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_60;
   Transform2D local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar2 = (int)plVar5[1];
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         lVar6 = *plVar5;
         if (lVar6 != 0) {
            lVar7 = *(long*)( lVar6 + 0x38 );
            lVar4 = (long)param_3;
            if (param_3 < 0) {
               if (lVar7 == 0) goto LAB_00105a60;
               iVar2 = (int)*(undefined8*)( lVar7 + -8 );
               LAB_0010599d:lVar6 = (long)iVar2;
            }
 else {
               if (lVar7 != 0) {
                  lVar7 = *(long*)( lVar7 + -8 );
                  iVar2 = (int)lVar7;
                  if (param_3 < iVar2) {
                     local_60 = 0;
                     pcVar1 = *(code**)( *(long*)this + 0x1c0 );
                     if (lVar7 <= lVar4) {
                        _err_print_index_error("get_shape_transform", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x79, lVar4, lVar7, "p_index", "shapes.size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar1 = (code*)invalidInstructionException();
                        ( *pcVar1 )();
                     }

                     Transform2D::operator *(local_58, (Transform2D*)( lVar6 + 0x48 ));
                     lVar6 = *(long*)( lVar6 + 0x38 );
                     if (lVar6 == 0) {
                        lVar7 = 0;
                        LAB_00105a73:_err_print_index_error("get_shape", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x75, lVar4, lVar7, "p_index", "shapes.size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar1 = (code*)invalidInstructionException();
                        ( *pcVar1 )();
                     }

                     lVar7 = *(long*)( lVar6 + -8 );
                     if (lVar7 <= lVar4) goto LAB_00105a73;
                     uVar3 = ( *pcVar1 )(this, *(undefined8*)( *(long*)( lVar6 + 0x48 + lVar4 * 0x58 ) + 8 ), local_58, &local_60, param_4, param_5, param_6, param_7, param_8, param_9);
                     goto LAB_00105968;
                  }

                  goto LAB_0010599d;
               }

               LAB_00105a60:lVar6 = 0;
            }

            _err_print_index_error("body_collide_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3d7, lVar4, lVar6, "p_body_shape", "body->get_shape_count()", "", false, false);
            uVar3 = 0;
            goto LAB_00105968;
         }

      }
 else if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_collide_shape", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3d6, "Parameter \"body\" is null.", 0, 0);
   uVar3 = 0;
   LAB_00105968:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::pin_joint_set_flag(RID, PhysicsServer2D::PinJointFlag, bool) */void GodotPhysicsServer2D::pin_joint_set_flag(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3, undefined1 param_4) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x28 ) )(plVar3);
            if (iVar1 == 0) {
               GodotPinJoint2D::set_flag(plVar3, param_3, param_4);
               return;
            }

            uVar4 = 0x48c;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true.";
            goto LAB_00105b92;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x48b;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00105b92:_err_print_error("pin_joint_set_flag", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer2D::pin_joint_get_flag(RID, PhysicsServer2D::PinJointFlag) const */undefined8 GodotPhysicsServer2D::pin_joint_get_flag(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x28 ) )(plVar3);
            if (iVar1 != 0) {
               _err_print_error("pin_joint_get_flag", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x495, "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: false", 0, 0);
               return 0;
            }

            uVar2 = GodotPinJoint2D::get_flag(plVar3, param_3);
            return uVar2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("pin_joint_get_flag", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x494, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::pin_joint_set_param(RID, PhysicsServer2D::PinJointParam, float) */void GodotPhysicsServer2D::pin_joint_set_param(undefined4 param_1, GodotPhysicsServer2D *this, ulong param_3, undefined4 param_4) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x28 ) )(plVar3);
            if (iVar1 == 0) {
               GodotPinJoint2D::set_param(plVar3, param_4);
               return;
            }

            uVar4 = 0x49e;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true.";
            goto LAB_00105dc2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         param_1 = _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x49d;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00105dc2:_err_print_error(param_1, "pin_joint_set_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer2D::pin_joint_get_param(RID, PhysicsServer2D::PinJointParam) const */undefined8 GodotPhysicsServer2D::pin_joint_get_param(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long *plVar2;
   undefined8 uVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar2 + 0x28 ) )(plVar2);
            if (iVar1 != 0) {
               _err_print_error("pin_joint_get_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x4a7, "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: 0", 0, 0);
               return 0;
            }

            uVar3 = GodotPinJoint2D::get_param(plVar2, param_3);
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("pin_joint_get_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x4a6, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::damped_spring_joint_set_param(RID, PhysicsServer2D::DampedSpringParam,
   float) */void GodotPhysicsServer2D::damped_spring_joint_set_param(undefined4 param_1, GodotPhysicsServer2D *this, ulong param_3, undefined4 param_4) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x28 ) )(plVar3);
            if (iVar1 == 2) {
               GodotDampedSpringJoint2D::set_param(plVar3, param_4);
               return;
            }

            uVar4 = 0x4b0;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_DAMPED_SPRING\" is true.";
            goto LAB_00105ff2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         param_1 = _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x4af;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00105ff2:_err_print_error(param_1, "damped_spring_joint_set_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer2D::damped_spring_joint_get_param(RID, PhysicsServer2D::DampedSpringParam)
   const */undefined8 GodotPhysicsServer2D::damped_spring_joint_get_param(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long *plVar2;
   undefined8 uVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar2 + 0x28 ) )(plVar2);
            if (iVar1 != 2) {
               _err_print_error("damped_spring_joint_get_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x4b9, "Condition \"joint->get_type() != JOINT_TYPE_DAMPED_SPRING\" is true. Returning: 0", 0, 0);
               return 0;
            }

            uVar3 = GodotDampedSpringJoint2D::get_param(plVar2, param_3);
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("damped_spring_joint_get_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x4b8, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::init() */void GodotPhysicsServer2D::init(GodotPhysicsServer2D *this) {
   GodotStep2D *this_00;
   this[0x172] = (GodotPhysicsServer2D)0x0;
   this_00 = (GodotStep2D*)operator_new(0x40, "");
   GodotStep2D::GodotStep2D(this_00);
   *(GodotStep2D**)( this + 0x188 ) = this_00;
   return;
}
/* GodotPhysicsServer2D::finish() */void GodotPhysicsServer2D::finish(GodotPhysicsServer2D *this) {
   GodotStep2D *this_00;
   this_00 = *(GodotStep2D**)( this + 0x188 );
   GodotStep2D::~GodotStep2D(this_00);
   Memory::free_static(this_00, false);
   return;
}
/* GodotPhysicsServer2D::area_set_space(RID, RID) */void GodotPhysicsServer2D::area_set_space(GodotPhysicsServer2D *this, ulong param_2, ulong param_3) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   long *plVar4;
   undefined8 uVar5;
   long lVar6;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            lVar6 = 0;
            if (param_3 == 0) {
               LAB_00106244:if (lVar6 != plVar3[8]) {
                  if (( plVar3[0x33] != 0 ) && ( *(int*)( (long)plVar3 + 0x1bc ) != 0 )) {
                     if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar3 + 0x37 ) * 4 ) != 0) {
                        memset((void*)plVar3[0x36], 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar3 + 0x37 ) * 4 ) << 2);
                     }

                     *(undefined4*)( (long)plVar3 + 0x1bc ) = 0;
                  }

                  /* WARNING: Could not recover jumptable at 0x001062a5. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( **(code**)( *plVar3 + 0x28 ) )(plVar3, lVar6);
                  return;
               }

               return;
            }

            if ((uint)param_3 < *(uint*)( this + 0x22c )) {
               plVar4 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
               iVar1 = (int)plVar4[1];
               if (iVar1 == (int)( param_3 >> 0x20 )) {
                  lVar6 = *plVar4;
                  if (lVar6 != 0) goto LAB_00106244;
               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            uVar5 = 0x12d;
            pcVar2 = "Parameter \"space\" is null.";
            goto LAB_00106332;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar5 = 0x128;
   pcVar2 = "Parameter \"area\" is null.";
   LAB_00106332:_err_print_error("area_set_space", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar5, pcVar2, 0, 0);
   return;
}
/* CowData<GodotCollisionObject2D::Shape>::_copy_on_write() [clone .isra.0] */void CowData<GodotCollisionObject2D::Shape>::_copy_on_write(CowData<GodotCollisionObject2D::Shape> *this) {
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
   __n = lVar2 * 0x58;
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
/* GodotPhysicsServer2D::body_set_shape_as_one_way_collision(RID, int, bool, float) */long GodotPhysicsServer2D::body_set_shape_as_one_way_collision(undefined4 param_1, GodotPhysicsServer2D *this, ulong param_3, int param_4, undefined1 param_5) {
   long lVar1;
   code *pcVar2;
   int iVar3;
   long *plVar4;
   long lVar5;
   long lVar6;
   if (param_3 == 0) {
      LAB_00106660:lVar5 = _err_print_error("body_set_shape_as_one_way_collision", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x295, "Parameter \"body\" is null.", 0, 0);
      return lVar5;
   }

   lVar5 = (long)param_4;
   if (*(uint*)( this + 0x2dc ) <= (uint)param_3) goto LAB_00106660;
   plVar4 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
   iVar3 = (int)plVar4[1];
   if (iVar3 != (int)( param_3 >> 0x20 )) {
      if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00106660;
   }

   lVar1 = *plVar4;
   if (lVar1 == 0) goto LAB_00106660;
   lVar6 = *(long*)( lVar1 + 0x38 );
   if (param_4 < 0) {
      if (lVar6 == 0) goto LAB_00106728;
      iVar3 = (int)*(undefined8*)( lVar6 + -8 );
   }
 else {
      if (lVar6 == 0) {
         LAB_00106728:lVar5 = 0;
         goto LAB_00106600;
      }

      lVar6 = *(long*)( lVar6 + -8 );
      iVar3 = (int)lVar6;
      if (param_4 < iVar3) {
         if (( *(long*)( lVar1 + 0x40 ) != 0 ) && ( this[0x181] != (GodotPhysicsServer2D)0x0 )) {
            lVar5 = 0;
            _err_print_error("body_set_shape_as_one_way_collision", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x297, "Condition \"body->get_space() && flushing_queries\" is true.", "Can\'t change this state while flushing queries. Use call_deferred() or set_deferred() to change monitoring state instead.", 0);
            return lVar5;
         }

         if (lVar6 <= lVar5) {
            _err_print_index_error("set_shape_as_one_way_collision", "modules/godot_physics_2d/godot_collision_object_2d.h", 0x90, lVar5, lVar6, "p_idx", "shapes.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         CowData<GodotCollisionObject2D::Shape>::_copy_on_write((CowData<GodotCollisionObject2D::Shape>*)( lVar1 + 0x38 ));
         lVar6 = *(long*)( lVar1 + 0x38 );
         *(undefined1*)( lVar6 + 0x51 + lVar5 * 0x58 ) = param_5;
         if (lVar6 == 0) {
            lVar6 = 0;
         }
 else {
            lVar6 = *(long*)( lVar6 + -8 );
            if (lVar5 < lVar6) {
               CowData<GodotCollisionObject2D::Shape>::_copy_on_write((CowData<GodotCollisionObject2D::Shape>*)( lVar1 + 0x38 ));
               lVar1 = *(long*)( lVar1 + 0x38 );
               *(undefined4*)( lVar1 + 0x54 + lVar5 * 0x58 ) = param_1;
               return lVar1;
            }

         }

         _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar5, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

   }

   lVar5 = (long)iVar3;
   LAB_00106600:lVar5 = _err_print_index_error("body_set_shape_as_one_way_collision", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x296, (long)param_4, lVar5, "p_shape_idx", "body->get_shape_count()", "", false, false);
   return lVar5;
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] */void CowData<RID>::_copy_on_write(CowData<RID> *this) {
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
/* GodotPhysicsServer2D::body_set_space(RID, RID) */void GodotPhysicsServer2D::body_set_space(GodotPhysicsServer2D *this, ulong param_2, ulong param_3) {
   int iVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   char *pcVar5;
   long *plVar6;
   long *plVar7;
   undefined8 uVar8;
   long lVar9;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar6 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar6[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar6 = (long*)*plVar6;
         if (plVar6 != (long*)0x0) {
            lVar9 = 0;
            if (param_3 == 0) {
               LAB_00106937:if (lVar9 == plVar6[8]) {
                  return;
               }

               plVar7 = (long*)plVar6[0x3b];
               if (plVar7 != (long*)0x0) {
                  do {
                     pvVar2 = (void*)*plVar7;
                     if (pvVar2 == (void*)0x0) goto LAB_001069b8;
                     if (*(long**)( (long)pvVar2 + 0x20 ) == plVar7) {
                        lVar4 = *(long*)( (long)pvVar2 + 0x10 );
                        lVar3 = *(long*)( (long)pvVar2 + 0x18 );
                        *plVar7 = lVar4;
                        if (pvVar2 == (void*)plVar7[1]) {
                           plVar7[1] = lVar3;
                        }

                        if (lVar3 != 0) {
                           *(long*)( lVar3 + 0x10 ) = lVar4;
                           lVar4 = *(long*)( (long)pvVar2 + 0x10 );
                        }

                        if (lVar4 != 0) {
                           *(long*)( lVar4 + 0x18 ) = lVar3;
                        }

                        Memory::free_static(pvVar2, false);
                        *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     plVar7 = (long*)plVar6[0x3b];
                  }
 while ( (int)plVar7[2] != 0 );
                  Memory::free_static(plVar7, false);
                  plVar6[0x3b] = 0;
               }

               LAB_001069b8:/* WARNING: Could not recover jumptable at 0x001069ca. Too many branches *//* WARNING: Treating indirect jump as call */( **(code**)( *plVar6 + 0x28 ) )(plVar6, lVar9);
               return;
            }

            if ((uint)param_3 < *(uint*)( this + 0x22c )) {
               plVar7 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
               iVar1 = (int)plVar7[1];
               if (iVar1 == (int)( param_3 >> 0x20 )) {
                  lVar9 = *plVar7;
                  if (lVar9 != 0) goto LAB_00106937;
               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            uVar8 = 0x221;
            pcVar5 = "Parameter \"space\" is null.";
            goto LAB_00106a9a;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x21d;
   pcVar5 = "Parameter \"body\" is null.";
   LAB_00106a9a:_err_print_error("body_set_space", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar8, pcVar5, 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_get_collision_exceptions(RID, List<RID, DefaultAllocator>*) */void GodotPhysicsServer2D::body_get_collision_exceptions(GodotPhysicsServer2D *this, ulong param_2, long *param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   code *pcVar5;
   long lVar6;
   undefined8 *puVar7;
   undefined1(*pauVar8)[16];
   long *plVar9;
   long lVar10;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar9 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar9[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar9;
         if (lVar2 != 0) {
            lVar6 = *(long*)( lVar2 + 0x1b0 );
            if (lVar6 != 0) {
               lVar10 = 0;
               do {
                  lVar3 = *(long*)( lVar6 + -8 );
                  if ((int)lVar3 <= (int)lVar10) {
                     return;
                  }

                  if (lVar3 <= lVar10) {
                     _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar3, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar5 = (code*)invalidInstructionException();
                     ( *pcVar5 )();
                  }

                  if (*param_3 == 0) {
                     pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *param_3 = (long)pauVar8;
                     *(undefined4*)pauVar8[1] = 0;
                     *pauVar8 = (undefined1[16])0x0;
                  }

                  puVar7 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                  *puVar7 = 0;
                  uVar4 = *(undefined8*)( lVar6 + lVar10 * 8 );
                  puVar7[1] = 0;
                  *puVar7 = uVar4;
                  plVar9 = (long*)*param_3;
                  lVar6 = plVar9[1];
                  puVar7[2] = lVar6;
                  puVar7[3] = plVar9;
                  if (lVar6 != 0) {
                     *(undefined8**)( lVar6 + 8 ) = puVar7;
                  }

                  plVar9[1] = (long)puVar7;
                  if (*plVar9 == 0) {
                     *plVar9 = (long)puVar7;
                  }

                  lVar6 = *(long*)( lVar2 + 0x1b0 );
                  *(int*)( plVar9 + 2 ) = (int)plVar9[2] + 1;
                  lVar10 = lVar10 + 1;
               }
 while ( lVar6 != 0 );
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_collision_exceptions", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x39d, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::flush_queries() */void GodotPhysicsServer2D::flush_queries(GodotPhysicsServer2D *this) {
   long *plVar1;
   char cVar2;
   long *plVar3;
   long lVar4;
   Variant *pVVar5;
   long *plVar6;
   long *plVar7;
   int iVar8;
   int iVar9;
   long lVar10;
   long in_FS_OFFSET;
   Array local_98[8];
   long local_90;
   int local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x171] != (GodotPhysicsServer2D)0x0) {
      this[0x181] = (GodotPhysicsServer2D)0x1;
      plVar3 = (long*)OS::get_singleton();
      lVar4 = ( **(code**)( *plVar3 + 0x208 ) )(plVar3);
      iVar8 = *(int*)( this + 0x1b4 );
      if (iVar8 != 0) {
         for (iVar9 = 0; GodotSpace2D::call_queries(),iVar9 + 1 < iVar8; iVar9 = iVar9 + 1) {}
      }

      this[0x181] = (GodotPhysicsServer2D)0x0;
      StringName::StringName((StringName*)&local_90, "servers", false);
      cVar2 = EngineDebugger::is_profiling((StringName*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      if (cVar2 != '\0') {
         iVar8 = *(int*)( this + 0x1b4 );
         local_48 = 0;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         if (iVar8 != 0) {
            plVar3 = *(long**)( this + 400 );
            iVar9 = 0;
            while (true) {
               plVar6 = (long*)*plVar3;
               plVar1 = plVar6 + 5;
               plVar7 = (long*)local_68;
               do {
                  lVar10 = *plVar6;
                  plVar6 = plVar6 + 1;
                  *plVar7 = *plVar7 + lVar10;
                  plVar7 = plVar7 + 1;
               }
 while ( plVar1 != plVar6 );
               iVar9 = iVar9 + 1;
               if (iVar8 <= iVar9) break;
               plVar3 = plVar3 + 1;
            }
;
         }

         lVar10 = 0;
         Array::Array(local_98);
         iVar8 = (int)local_98;
         Array::resize(iVar8);
         do {
            Variant::Variant((Variant*)local_88, ( &flush_queries()::time_name )[lVar10]);
            pVVar5 = (Variant*)Array::operator [](iVar8);
            if (pVVar5 == (Variant*)local_88) {
               if (Variant::needs_deinit[local_88[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar5 = 0;
               *(int*)pVVar5 = local_88[0];
               *(undefined8*)( pVVar5 + 8 ) = local_80;
               *(undefined8*)( pVVar5 + 0x10 ) = uStack_78;
            }

            Variant::Variant((Variant*)local_88, (double)*(ulong*)( (long)local_68 + lVar10 * 8 ) / __LC156);
            pVVar5 = (Variant*)Array::operator [](iVar8);
            if (pVVar5 == (Variant*)local_88) {
               if (Variant::needs_deinit[local_88[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar5 = 0;
               *(int*)pVVar5 = local_88[0];
               *(undefined8*)( pVVar5 + 8 ) = local_80;
               *(undefined8*)( pVVar5 + 0x10 ) = uStack_78;
            }

            lVar10 = lVar10 + 1;
         }
 while ( lVar10 != 5 );
         Variant::Variant((Variant*)local_88, "flush_queries");
         Array::push_back((Variant*)local_98);
         if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
         }

         plVar3 = (long*)OS::get_singleton();
         lVar10 = ( **(code**)( *plVar3 + 0x208 ) )(plVar3);
         Variant::Variant((Variant*)local_88, (double)( ulong )(lVar10 - lVar4) / __LC156);
         Array::push_back((Variant*)local_98);
         if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_88, "physics_2d");
         Array::push_front((Variant*)local_98);
         if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
         }

         StringName::StringName((StringName*)&local_90, "servers", false);
         EngineDebugger::profiler_add_frame_data((StringName*)&local_90, local_98);
         if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
            StringName::unref();
         }

         Array::~Array(local_98);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::space_get_contacts(RID) const */long GodotPhysicsServer2D::space_get_contacts(long param_1, long param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   bool bVar6;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x22c ) )) {
      plVar5 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 8 ) );
      iVar1 = (int)plVar5[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar5;
         if (lVar2 != 0) {
            *(undefined8*)( param_1 + 8 ) = 0;
            plVar5 = (long*)( *(long*)( lVar2 + 0x6100 ) + -0x10 );
            if (*(long*)( lVar2 + 0x6100 ) != 0) {
               do {
                  lVar3 = *plVar5;
                  if (lVar3 == 0) {
                     return param_1;
                  }

                  LOCK();
                  lVar4 = *plVar5;
                  bVar6 = lVar3 == lVar4;
                  if (bVar6) {
                     *plVar5 = lVar3 + 1;
                     lVar4 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar6 );
               if (lVar4 != -1) {
                  *(undefined8*)( param_1 + 8 ) = *(undefined8*)( lVar2 + 0x6100 );
               }

            }

            return param_1;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("space_get_contacts", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x10d, "Parameter \"space\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* GodotPhysicsServer2D::body_get_direct_state(RID) */undefined8 GodotPhysicsServer2D::body_get_direct_state(GodotPhysicsServer2D *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   uint uVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   undefined8 uVar5;
   long *plVar6;
   uint uVar7;
   if (( this[0x180] == (GodotPhysicsServer2D)0x0 ) || ( this[0x172] != (GodotPhysicsServer2D)0x0 )) {
      __mutex = (pthread_mutex_t*)( this + 0x2f0 );
      iVar4 = pthread_mutex_lock(__mutex);
      if (iVar4 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar4);
      }

      if (( *(uint*)( this + 0x2dc ) <= (uint)param_2 ) || ( param_2 >> 0x20 == 0x7fffffff )) {
         pthread_mutex_unlock(__mutex);
         return 0;
      }

      uVar7 = ( uint )(param_2 >> 0x20);
      if (uVar7 == ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(__mutex);
         if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
            plVar6 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
            uVar1 = *(uint*)( plVar6 + 1 );
            if (uVar7 == uVar1) {
               lVar2 = *plVar6;
               if (lVar2 != 0) {
                  if (*(long*)( lVar2 + 0x40 ) == 0) {
                     return 0;
                  }

                  cVar3 = GodotSpace2D::is_locked();
                  if (cVar3 != '\0') {
                     _err_print_error("body_get_direct_state", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3fb, "Condition \"body->get_space()->is_locked()\" is true. Returning: nullptr", "Body state is inaccessible right now, wait for iteration or physics process notification.", 0, 0);
                     return 0;
                  }

                  uVar5 = GodotBody2D::get_direct_state();
                  return uVar5;
               }

            }
 else if (uVar1 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         _err_print_error("body_get_direct_state", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3f5, "Parameter \"body\" is null.", 0, 0);
      }
 else {
         pthread_mutex_unlock(__mutex);
      }

   }
 else {
      _err_print_error("body_get_direct_state", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3ee, "Condition \"(using_threads && !doing_sync)\" is true. Returning: nullptr", "Body state is inaccessible right now, wait for iteration or physics process notification.", 0, 0);
   }

   return 0;
}
/* GodotPhysicsServer2D::area_attach_canvas_instance_id(RID, ObjectID) */void GodotPhysicsServer2D::area_attach_canvas_instance_id(GodotPhysicsServer2D *this, ulong param_2, undefined8 param_3) {
   pthread_mutex_t *__mutex;
   long lVar1;
   code *pcVar2;
   int iVar3;
   uint uVar4;
   long *plVar5;
   uint uVar6;
   __mutex = (pthread_mutex_t*)( this + 0x240 );
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   uVar6 = (uint)param_2;
   if (uVar6 < *(uint*)( this + 0x22c )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(__mutex);
      }
 else {
         uVar4 = ( uint )(param_2 >> 0x20);
         if (uVar4 != ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) goto LAB_0010751f;
         pthread_mutex_unlock(__mutex);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar6 )) {
            LAB_0010dfa4:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         uVar6 = *(uint*)( plVar5 + 1 );
         if (uVar4 != uVar6) {
            if (uVar6 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2 >> 0x20);
            }

            goto LAB_0010dfa4;
         }

         param_2 = *(ulong*)( *(long*)( *plVar5 + 0xb8 ) + 0x10 );
         uVar6 = (uint)param_2;
         if (param_2 == 0) goto LAB_001075fb;
      }

   }
 else {
      LAB_0010751f:pthread_mutex_unlock(__mutex);
      if (param_2 == 0) goto LAB_001075fb;
   }

   if (uVar6 < *(uint*)( this + 0x284 )) {
      plVar5 = (long*)( ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar3 = (int)plVar5[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar5;
         if (lVar1 != 0) {
            *(undefined8*)( lVar1 + 0x20 ) = param_3;
            return;
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   LAB_001075fb:_err_print_error("area_attach_canvas_instance_id", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1aa, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_attach_object_instance_id(RID, ObjectID) */void GodotPhysicsServer2D::area_attach_object_instance_id(GodotPhysicsServer2D *this, ulong param_2, undefined8 param_3) {
   pthread_mutex_t *__mutex;
   long lVar1;
   code *pcVar2;
   int iVar3;
   uint uVar4;
   long *plVar5;
   uint uVar6;
   __mutex = (pthread_mutex_t*)( this + 0x240 );
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   uVar6 = (uint)param_2;
   if (uVar6 < *(uint*)( this + 0x22c )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(__mutex);
      }
 else {
         uVar4 = ( uint )(param_2 >> 0x20);
         if (uVar4 != ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) goto LAB_0010770f;
         pthread_mutex_unlock(__mutex);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar6 )) {
            LAB_0010dfe8:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         uVar6 = *(uint*)( plVar5 + 1 );
         if (uVar4 != uVar6) {
            if (uVar6 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2 >> 0x20);
            }

            goto LAB_0010dfe8;
         }

         param_2 = *(ulong*)( *(long*)( *plVar5 + 0xb8 ) + 0x10 );
         uVar6 = (uint)param_2;
         if (param_2 == 0) goto LAB_001077eb;
      }

   }
 else {
      LAB_0010770f:pthread_mutex_unlock(__mutex);
      if (param_2 == 0) goto LAB_001077eb;
   }

   if (uVar6 < *(uint*)( this + 0x284 )) {
      plVar5 = (long*)( ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar3 = (int)plVar5[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar5;
         if (lVar1 != 0) {
            *(undefined8*)( lVar1 + 0x18 ) = param_3;
            return;
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   LAB_001077eb:_err_print_error("area_attach_object_instance_id", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x196, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_get_object_instance_id(RID) const */undefined8 GodotPhysicsServer2D::area_get_object_instance_id(GodotPhysicsServer2D *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   long lVar1;
   code *pcVar2;
   int iVar3;
   long *plVar4;
   uint uVar5;
   uint uVar6;
   __mutex = (pthread_mutex_t*)( this + 0x240 );
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   uVar5 = (uint)param_2;
   if (uVar5 < *(uint*)( this + 0x22c )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(__mutex);
      }
 else {
         uVar6 = ( uint )(param_2 >> 0x20);
         if (uVar6 != ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
            pthread_mutex_unlock(__mutex);
            goto LAB_001078fe;
         }

         pthread_mutex_unlock(__mutex);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar5 )) {
            LAB_0010e02c:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         uVar5 = *(uint*)( plVar4 + 1 );
         if (uVar6 != uVar5) {
            if (uVar5 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x218 ));
            }

            goto LAB_0010e02c;
         }

         param_2 = *(ulong*)( *(long*)( *plVar4 + 0xb8 ) + 0x10 );
         uVar5 = (uint)param_2;
         if (param_2 == 0) goto LAB_001079bd;
      }

   }
 else {
      pthread_mutex_unlock(__mutex);
      LAB_001078fe:if (param_2 == 0) goto LAB_001079bd;
   }

   if (uVar5 < *(uint*)( this + 0x284 )) {
      plVar4 = (long*)( ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar3 = (int)plVar4[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar4;
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x18 );
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   LAB_001079bd:_err_print_error("area_get_object_instance_id", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1a0, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::area_get_canvas_instance_id(RID) const */undefined8 GodotPhysicsServer2D::area_get_canvas_instance_id(GodotPhysicsServer2D *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   long lVar1;
   code *pcVar2;
   int iVar3;
   long *plVar4;
   uint uVar5;
   uint uVar6;
   __mutex = (pthread_mutex_t*)( this + 0x240 );
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   uVar5 = (uint)param_2;
   if (uVar5 < *(uint*)( this + 0x22c )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(__mutex);
      }
 else {
         uVar6 = ( uint )(param_2 >> 0x20);
         if (uVar6 != ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
            pthread_mutex_unlock(__mutex);
            goto LAB_00107ade;
         }

         pthread_mutex_unlock(__mutex);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar5 )) {
            LAB_0010e070:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         uVar5 = *(uint*)( plVar4 + 1 );
         if (uVar6 != uVar5) {
            if (uVar5 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x218 ));
            }

            goto LAB_0010e070;
         }

         param_2 = *(ulong*)( *(long*)( *plVar4 + 0xb8 ) + 0x10 );
         uVar5 = (uint)param_2;
         if (param_2 == 0) goto LAB_00107b9d;
      }

   }
 else {
      pthread_mutex_unlock(__mutex);
      LAB_00107ade:if (param_2 == 0) goto LAB_00107b9d;
   }

   if (uVar5 < *(uint*)( this + 0x284 )) {
      plVar4 = (long*)( ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar3 = (int)plVar4[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar4;
         if (lVar1 != 0) {
            return *(undefined8*)( lVar1 + 0x20 );
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   LAB_00107b9d:_err_print_error("area_get_canvas_instance_id", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1b4, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::area_set_param(RID, PhysicsServer2D::AreaParameter, Variant const&) */void GodotPhysicsServer2D::area_set_param(GodotPhysicsServer2D *this, ulong param_2, undefined4 param_3, undefined8 param_4) {
   long lVar1;
   code *pcVar2;
   int iVar3;
   uint uVar4;
   long *plVar5;
   pthread_mutex_t *__mutex;
   uint uVar6;
   __mutex = (pthread_mutex_t*)( this + 0x240 );
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }

   uVar6 = (uint)param_2;
   if (uVar6 < *(uint*)( this + 0x22c )) {
      if (param_2 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(__mutex);
      }
 else {
         uVar4 = ( uint )(param_2 >> 0x20);
         if (uVar4 != ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) goto LAB_00107cc9;
         pthread_mutex_unlock(__mutex);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar6 )) {
            LAB_0010e0b4:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         uVar6 = *(uint*)( plVar5 + 1 );
         if (uVar4 != uVar6) {
            if (uVar6 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2 >> 0x20);
            }

            goto LAB_0010e0b4;
         }

         param_2 = *(ulong*)( *(long*)( *plVar5 + 0xb8 ) + 0x10 );
         uVar6 = (uint)param_2;
         if (param_2 == 0) goto LAB_00107da8;
      }

   }
 else {
      LAB_00107cc9:pthread_mutex_unlock(__mutex);
      if (param_2 == 0) goto LAB_00107da8;
   }

   if (uVar6 < *(uint*)( this + 0x284 )) {
      plVar5 = (long*)( ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar3 = (int)plVar5[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar5;
         if (lVar1 != 0) {
            GodotArea2D::set_param(lVar1, param_3, param_4);
            return;
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   LAB_00107da8:_err_print_error("area_set_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1be, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::area_get_param(RID, PhysicsServer2D::AreaParameter) const */undefined4 *GodotPhysicsServer2D::area_get_param(undefined4 *param_1, long param_2, ulong param_3, undefined4 param_4) {
   pthread_mutex_t *__mutex;
   long lVar1;
   long lVar2;
   code *pcVar3;
   int iVar4;
   uint uVar5;
   long *plVar6;
   uint uVar7;
   long in_FS_OFFSET;
   __mutex = (pthread_mutex_t*)( param_2 + 0x240 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = pthread_mutex_lock(__mutex);
   if (iVar4 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar4);
   }

   uVar7 = (uint)param_3;
   if (uVar7 < *(uint*)( param_2 + 0x22c )) {
      if (param_3 >> 0x20 == 0x7fffffff) {
         pthread_mutex_unlock(__mutex);
         goto LAB_00107eee;
      }

      uVar5 = ( uint )(param_3 >> 0x20);
      if (uVar5 != ( *(uint*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) goto LAB_00107edd;
      pthread_mutex_unlock(__mutex);
      if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x22c ) <= uVar7 )) {
         LAB_0010e0f8:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      plVar6 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 8 ) );
      uVar7 = *(uint*)( plVar6 + 1 );
      if (uVar5 != uVar7) {
         if (uVar7 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_3 >> 0x20);
         }

         goto LAB_0010e0f8;
      }

      param_3 = *(ulong*)( *(long*)( *plVar6 + 0xb8 ) + 0x10 );
      uVar7 = (uint)param_3;
      if (param_3 != 0) goto LAB_00107eee;
   }
 else {
      LAB_00107edd:pthread_mutex_unlock(__mutex);
      if (param_3 != 0) {
         LAB_00107eee:if (uVar7 < *(uint*)( param_2 + 0x284 )) {
            plVar6 = (long*)( ( (ulong)uVar7 % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x270 ) + ( (ulong)uVar7 / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 ) );
            iVar4 = (int)plVar6[1];
            if (iVar4 == (int)( param_3 >> 0x20 )) {
               lVar2 = *plVar6;
               if (lVar2 != 0) {
                  GodotArea2D::get_param(param_1, lVar2, param_4);
                  goto LAB_00107f40;
               }

            }
 else if (iVar4 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

      }

   }

   _err_print_error("area_get_param", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x1ce, "Parameter \"area\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   LAB_00107f40:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* GodotPhysicsServer2D::joint_make_damped_spring(RID, Vector2 const&, Vector2 const&, RID, RID) */void GodotPhysicsServer2D::joint_make_damped_spring(GodotPhysicsServer2D *this, ulong param_2, Vector2 *param_3, Vector2 *param_4, ulong param_5, ulong param_6) {
   int iVar1;
   int iVar2;
   GodotBody2D *pGVar3;
   GodotBody2D *pGVar4;
   long *plVar5;
   GodotDampedSpringJoint2D *this_00;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   if (( param_5 != 0 ) && ( (uint)param_5 < *(uint*)( this + 0x2dc ) )) {
      puVar7 = (undefined8*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar7 + 1 );
      if (iVar1 == (int)( param_5 >> 0x20 )) {
         pGVar3 = (GodotBody2D*)*puVar7;
         if (pGVar3 != (GodotBody2D*)0x0) {
            if (( param_6 != 0 ) && ( (uint)param_6 < *(uint*)( this + 0x2dc ) )) {
               puVar7 = (undefined8*)( ( ( param_6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
               iVar1 = *(int*)( puVar7 + 1 );
               if (iVar1 == (int)( param_6 >> 0x20 )) {
                  pGVar4 = (GodotBody2D*)*puVar7;
                  if (pGVar4 != (GodotBody2D*)0x0) {
                     if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
                        puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
                        iVar1 = *(int*)( puVar7 + 1 );
                        if (iVar1 == (int)( param_2 >> 0x20 )) {
                           plVar5 = (long*)*puVar7;
                           if (plVar5 != (long*)0x0) {
                              this_00 = (GodotDampedSpringJoint2D*)operator_new(0x98, "");
                              GodotDampedSpringJoint2D::GodotDampedSpringJoint2D(this_00, param_3, param_4, pGVar3, pGVar4);
                              if ((uint)param_2 < *(uint*)( this + 0x334 )) {
                                 puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
                                 iVar2 = *(int*)( puVar7 + 1 );
                                 if (iVar1 == iVar2) {
                                    *puVar7 = this_00;
                                    goto LAB_0010820e;
                                 }

                                 if (iVar2 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                              _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                              LAB_0010820e:GodotJoint2D::copy_settings_from((GodotJoint2D*)this_00);
                              ( **(code**)( *plVar5 + 0x18 ) )(plVar5);
                              Memory::free_static(plVar5, false);
                              return;
                           }

                        }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                     }

                     uVar8 = 0x480;
                     pcVar6 = "Parameter \"prev_joint\" is null.";
                     goto LAB_00108272;
                  }

               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            uVar8 = 0x47d;
            pcVar6 = "Parameter \"B\" is null.";
            goto LAB_00108272;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x47a;
   pcVar6 = "Parameter \"A\" is null.";
   LAB_00108272:_err_print_error("joint_make_damped_spring", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar8, pcVar6, 0, 0);
   return;
}
/* GodotPhysicsServer2D::joint_make_groove(RID, Vector2 const&, Vector2 const&, Vector2 const&, RID,
   RID) */void GodotPhysicsServer2D::joint_make_groove(GodotPhysicsServer2D *this, ulong param_2, Vector2 *param_3, Vector2 *param_4, Vector2 *param_5, ulong param_6, ulong param_7) {
   int iVar1;
   int iVar2;
   GodotBody2D *pGVar3;
   GodotBody2D *pGVar4;
   long *plVar5;
   GodotGrooveJoint2D *this_00;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   if (( param_6 != 0 ) && ( (uint)param_6 < *(uint*)( this + 0x2dc ) )) {
      puVar7 = (undefined8*)( ( ( param_6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar7 + 1 );
      if (iVar1 == (int)( param_6 >> 0x20 )) {
         pGVar3 = (GodotBody2D*)*puVar7;
         if (pGVar3 != (GodotBody2D*)0x0) {
            if (( param_7 != 0 ) && ( (uint)param_7 < *(uint*)( this + 0x2dc ) )) {
               puVar7 = (undefined8*)( ( ( param_7 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_7 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
               iVar1 = *(int*)( puVar7 + 1 );
               if (iVar1 == (int)( param_7 >> 0x20 )) {
                  pGVar4 = (GodotBody2D*)*puVar7;
                  if (pGVar4 != (GodotBody2D*)0x0) {
                     if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
                        puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
                        iVar1 = *(int*)( puVar7 + 1 );
                        if (iVar1 == (int)( param_2 >> 0x20 )) {
                           plVar5 = (long*)*puVar7;
                           if (plVar5 != (long*)0x0) {
                              this_00 = (GodotGrooveJoint2D*)operator_new(0xb8, "");
                              GodotGrooveJoint2D::GodotGrooveJoint2D(this_00, param_3, param_4, param_5, pGVar3, pGVar4);
                              if ((uint)param_2 < *(uint*)( this + 0x334 )) {
                                 puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
                                 iVar2 = *(int*)( puVar7 + 1 );
                                 if (iVar1 == iVar2) {
                                    *puVar7 = this_00;
                                    goto LAB_001085cb;
                                 }

                                 if (iVar2 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                              _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                              LAB_001085cb:GodotJoint2D::copy_settings_from((GodotJoint2D*)this_00);
                              ( **(code**)( *plVar5 + 0x18 ) )(plVar5);
                              Memory::free_static(plVar5, false);
                              return;
                           }

                        }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                           _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                        }

                     }

                     uVar8 = 0x46f;
                     pcVar6 = "Parameter \"prev_joint\" is null.";
                     goto LAB_00108632;
                  }

               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            uVar8 = 0x46c;
            pcVar6 = "Parameter \"B\" is null.";
            goto LAB_00108632;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x469;
   pcVar6 = "Parameter \"A\" is null.";
   LAB_00108632:_err_print_error("joint_make_groove", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar8, pcVar6, 0, 0);
   return;
}
/* GodotPhysicsServer2D::joint_clear(RID) */void GodotPhysicsServer2D::joint_clear(GodotPhysicsServer2D *this, ulong param_2) {
   int iVar1;
   long *plVar2;
   undefined8 uVar3;
   int iVar4;
   GodotJoint2D *pGVar5;
   undefined8 *puVar6;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x334 ) <= (uint)param_2 )) {
      LAB_00108960:_err_print_error("joint_clear", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x40b, "Parameter \"joint\" is null.", 0, 0);
      return;
   }

   puVar6 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
   iVar1 = *(int*)( puVar6 + 1 );
   if (iVar1 != (int)( param_2 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00108960;
   }

   plVar2 = (long*)*puVar6;
   if (plVar2 == (long*)0x0) goto LAB_00108960;
   iVar4 = ( **(code**)( *plVar2 + 0x28 ) )(plVar2);
   if (iVar4 == 3) {
      return;
   }

   pGVar5 = (GodotJoint2D*)operator_new(0x40, "");
   *(undefined8*)( pGVar5 + 0x18 ) = 0;
   pGVar5[0x20] = (GodotJoint2D)0x1;
   *(undefined8*)( pGVar5 + 0x28 ) = 0;
   *(undefined8*)( pGVar5 + 8 ) = 0;
   *(undefined4*)( pGVar5 + 0x10 ) = 0;
   *(undefined***)pGVar5 = &PTR_setup_00114590;
   uVar3 = _LC185;
   *(undefined4*)( pGVar5 + 0x38 ) = 0x7f7fffee;
   *(undefined8*)( pGVar5 + 0x30 ) = uVar3;
   *(undefined2*)( pGVar5 + 0x3c ) = 0;
   GodotJoint2D::copy_settings_from(pGVar5);
   if ((uint)param_2 < *(uint*)( this + 0x334 )) {
      puVar6 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar4 = *(int*)( puVar6 + 1 );
      if (iVar1 == iVar4) {
         *puVar6 = pGVar5;
         goto LAB_00108929;
      }

      if (iVar4 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
   LAB_00108929:( **(code**)( *plVar2 + 0x18 ) )(plVar2);
   Memory::free_static(plVar2, false);
   return;
}
/* GodotPhysicsServer2D::space_is_active(RID) const */undefined8 GodotPhysicsServer2D::space_is_active(GodotPhysicsServer2D *this, ulong param_2) {
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
   int iVar12;
   long *plVar13;
   long lVar14;
   ulong uVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x22c ) )) {
      plVar13 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
      iVar12 = (int)plVar13[1];
      if (iVar12 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar13;
         if (lVar1 != 0) {
            if (*(long*)( this + 400 ) == 0) {
               return 0;
            }

            if (*(int*)( this + 0x1b4 ) == 0) {
               return 0;
            }

            uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b0 ) * 4 ));
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1b0 ) * 8 );
            uVar11 = lVar1 * 0x3ffff - 1;
            uVar11 = ( uVar11 ^ uVar11 >> 0x1f ) * 0x15;
            uVar11 = ( uVar11 ^ uVar11 >> 0xb ) * 0x41;
            uVar11 = uVar11 >> 0x16 ^ uVar11;
            uVar17 = uVar11 & 0xffffffff;
            if ((int)uVar11 == 0) {
               uVar17 = 1;
            }

            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar17 * lVar2;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar14 = SUB168(auVar3 * auVar7, 8);
            uVar18 = *(uint*)( *(long*)( this + 0x1a8 ) + lVar14 * 4 );
            iVar12 = SUB164(auVar3 * auVar7, 8);
            if (uVar18 == 0) {
               return 0;
            }

            uVar16 = 0;
            do {
               if (( uVar18 == (uint)uVar17 ) && ( lVar1 == *(long*)( *(long*)( this + 400 ) + ( ulong ) * (uint*)( *(long*)( this + 0x198 ) + lVar14 * 4 ) * 8 ) )) {
                  return 1;
               }

               uVar16 = uVar16 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar15;
               lVar14 = SUB168(auVar4 * auVar8, 8);
               uVar18 = *(uint*)( *(long*)( this + 0x1a8 ) + lVar14 * 4 );
               iVar12 = SUB164(auVar4 * auVar8, 8);
               if (uVar18 == 0) {
                  return 0;
               }

               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar18 * lVar2;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = uVar15;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b0 ) * 4 ) + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar15;
            }
 while ( uVar16 <= SUB164(auVar6 * auVar10, 8) );
            return 0;
         }

      }
 else if (iVar12 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("space_is_active", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0xf3, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::joint_make_pin(RID, Vector2 const&, RID, RID) */void GodotPhysicsServer2D::joint_make_pin(GodotPhysicsServer2D *this, ulong param_2, Vector2 *param_3, ulong param_4, ulong param_5) {
   pthread_mutex_t *__mutex;
   int iVar1;
   uint uVar2;
   GodotBody2D *pGVar3;
   int iVar4;
   GodotPinJoint2D *this_00;
   uint uVar5;
   GodotBody2D *pGVar6;
   char *pcVar7;
   undefined8 *puVar8;
   long *plVar9;
   undefined8 uVar10;
   if (( param_4 != 0 ) && ( (uint)param_4 < *(uint*)( this + 0x2dc ) )) {
      puVar8 = (undefined8*)( ( ( param_4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar4 = *(int*)( puVar8 + 1 );
      if (iVar4 == (int)( param_4 >> 0x20 )) {
         pGVar3 = (GodotBody2D*)*puVar8;
         if (pGVar3 != (GodotBody2D*)0x0) {
            __mutex = (pthread_mutex_t*)( this + 0x2f0 );
            iVar4 = pthread_mutex_lock(__mutex);
            if (iVar4 != 0) {
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(iVar4);
            }

            if (( ( (uint)param_5 < *(uint*)( this + 0x2dc ) ) && ( param_5 >> 0x20 != 0x7fffffff ) ) && ( uVar5 = ( uint )(param_5 >> 0x20) ),uVar5 == ( *(uint*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
               pthread_mutex_unlock(__mutex);
               if (( param_5 != 0 ) && ( (uint)param_5 < *(uint*)( this + 0x2dc ) )) {
                  plVar9 = (long*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
                  uVar2 = *(uint*)( plVar9 + 1 );
                  if (uVar5 == uVar2) {
                     pGVar6 = (GodotBody2D*)*plVar9;
                     if (pGVar6 != (GodotBody2D*)0x0) goto joined_r0x00108ea8;
                  }
 else if (uVar2 + 0x80000000 < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

               uVar10 = 0x45a;
               pcVar7 = "Parameter \"B\" is null.";
            }
 else {
               pthread_mutex_unlock(__mutex);
               pGVar6 = (GodotBody2D*)0x0;
               joined_r0x00108ea8:if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
                  puVar8 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
                  iVar4 = *(int*)( puVar8 + 1 );
                  if (iVar4 == (int)( param_2 >> 0x20 )) {
                     plVar9 = (long*)*puVar8;
                     if (plVar9 != (long*)0x0) {
                        this_00 = (GodotPinJoint2D*)operator_new(0xc0, "");
                        GodotPinJoint2D::GodotPinJoint2D(this_00, param_3, pGVar3, pGVar6);
                        if ((uint)param_2 < *(uint*)( this + 0x334 )) {
                           puVar8 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
                           iVar1 = *(int*)( puVar8 + 1 );
                           if (iVar4 == iVar1) {
                              *puVar8 = this_00;
                              goto LAB_00108e07;
                           }

                           if (iVar1 + 0x80000000U < 0x7fffffff) {
                              _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                           }

                        }

                        _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                        LAB_00108e07:GodotJoint2D::copy_settings_from((GodotJoint2D*)this_00);
                        ( **(code**)( *plVar9 + 0x18 ) )(plVar9);
                        Memory::free_static(plVar9, false);
                        return;
                     }

                  }
 else if (iVar4 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

               uVar10 = 0x45e;
               pcVar7 = "Parameter \"prev_joint\" is null.";
            }

            goto LAB_00108ec0;
         }

      }
 else if (iVar4 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar10 = 0x456;
   pcVar7 = "Parameter \"A\" is null.";
   LAB_00108ec0:_err_print_error("joint_make_pin", "modules/godot_physics_2d/godot_physics_server_2d.cpp", uVar10, pcVar7, 0, 0);
   return;
}
/* HashSet<GodotSpace2D*, HashMapHasherDefault, HashMapComparatorDefault<GodotSpace2D*>
   >::erase(GodotSpace2D* const&) [clone .isra.0] */void HashSet<GodotSpace2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace2D*>>::erase(HashSet<GodotSpace2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace2D*>> *this, GodotSpace2D **param_1) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   uint *puVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
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
   ulong uVar32;
   uint uVar33;
   uint *puVar34;
   int iVar35;
   uint uVar36;
   long lVar37;
   ulong uVar38;
   uint *puVar39;
   ulong uVar40;
   uint *puVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   lVar6 = *(long*)this;
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x24 ) != 0 )) {
      lVar7 = *(long*)( this + 0x18 );
      uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      uVar42 = CONCAT44(0, uVar31);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar32 = (long)*param_1 * 0x3ffff - 1;
      uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
      uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
      uVar32 = uVar32 >> 0x16 ^ uVar32;
      uVar40 = uVar32 & 0xffffffff;
      if ((int)uVar32 == 0) {
         uVar40 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar40 * lVar8;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar42;
      lVar37 = SUB168(auVar11 * auVar21, 8);
      uVar44 = *(uint*)( lVar7 + lVar37 * 4 );
      iVar35 = SUB164(auVar11 * auVar21, 8);
      if (uVar44 != 0) {
         uVar33 = 0;
         do {
            if ((uint)uVar40 == uVar44) {
               lVar9 = *(long*)( this + 8 );
               uVar44 = *(uint*)( lVar9 + lVar37 * 4 );
               uVar32 = (ulong)uVar44;
               if (*param_1 == *(GodotSpace2D**)( lVar6 + uVar32 * 8 )) {
                  lVar10 = *(long*)( this + 0x10 );
                  puVar1 = (uint*)( lVar10 + uVar32 * 4 );
                  uVar33 = *puVar1;
                  uVar40 = (ulong)uVar33;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = ( ulong )(uVar33 + 1) * lVar8;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar42;
                  lVar37 = SUB168(auVar15 * auVar25, 8) * 4;
                  uVar36 = SUB164(auVar15 * auVar25, 8);
                  uVar43 = (ulong)uVar36;
                  puVar39 = (uint*)( lVar7 + lVar37 );
                  if (( *puVar39 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = ( ulong ) * puVar39 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar36 + uVar31 ) - SUB164(auVar16 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar42,SUB164(auVar17 * auVar27, 8) == 0) {
                     uVar43 = (ulong)uVar33;
                  }
 else {
                     while (true) {
                        puVar34 = (uint*)( lVar37 + lVar9 );
                        puVar4 = (uint*)( lVar9 + uVar40 * 4 );
                        puVar41 = (uint*)( uVar40 * 4 + lVar7 );
                        puVar2 = (undefined4*)( lVar10 + ( ulong ) * puVar34 * 4 );
                        puVar3 = (undefined4*)( lVar10 + ( ulong ) * puVar4 * 4 );
                        uVar5 = *puVar3;
                        *puVar3 = *puVar2;
                        *puVar2 = uVar5;
                        uVar33 = *puVar39;
                        *puVar39 = *puVar41;
                        *puVar41 = uVar33;
                        uVar33 = *puVar34;
                        *puVar34 = *puVar4;
                        *puVar4 = uVar33;
                        auVar20._8_8_ = 0;
                        auVar20._0_8_ = ( ulong )((int)uVar43 + 1) * lVar8;
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = uVar42;
                        uVar38 = SUB168(auVar20 * auVar30, 8);
                        lVar37 = uVar38 * 4;
                        puVar39 = (uint*)( lVar7 + lVar37 );
                        if (( *puVar39 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar39 * lVar8,auVar28._8_8_ = 0,auVar28._0_8_ = uVar42,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( SUB164(auVar20 * auVar30, 8) + uVar31 ) - SUB164(auVar18 * auVar28, 8)) * lVar8,auVar29._8_8_ = 0,auVar29._0_8_ = uVar42,SUB164(auVar19 * auVar29, 8) == 0) break;
                        uVar40 = uVar43;
                        uVar43 = uVar38 & 0xffffffff;
                     }
;
                  }

                  *(undefined4*)( lVar7 + uVar43 * 4 ) = 0;
                  uVar31 = *(int*)( this + 0x24 ) - 1;
                  *(uint*)( this + 0x24 ) = uVar31;
                  if (uVar31 <= uVar44) {
                     return;
                  }

                  uVar33 = *(uint*)( lVar10 + (ulong)uVar31 * 4 );
                  *(undefined8*)( lVar6 + uVar32 * 8 ) = *(undefined8*)( lVar6 + (ulong)uVar31 * 8 );
                  *puVar1 = uVar33;
                  *(uint*)( lVar9 + ( ulong ) * (uint*)( lVar10 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar44;
                  return;
               }

            }

            uVar33 = uVar33 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar8;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar42;
            lVar37 = SUB168(auVar12 * auVar22, 8);
            uVar44 = *(uint*)( lVar7 + lVar37 * 4 );
            iVar35 = SUB164(auVar12 * auVar22, 8);
         }
 while ( ( uVar44 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar44 * lVar8,auVar23._8_8_ = 0,auVar23._0_8_ = uVar42,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar13 * auVar23, 8)) * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar42,uVar33 <= SUB164(auVar14 * auVar24, 8) );
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
/* GodotPhysicsServer2D::_update_shapes() */void GodotPhysicsServer2D::_update_shapes(GodotPhysicsServer2D *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( this + 0x370 );
   if (lVar3 != 0) {
      do {
         ( **(code**)**(undefined8**)( lVar3 + 8 ) )();
         plVar1 = *(long**)( this + 0x370 );
         if ((GodotPhysicsServer2D*)*plVar1 == this + 0x370) {
            lVar3 = plVar1[2];
            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x18 ) = plVar1[3];
            }

            lVar2 = plVar1[3];
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar3;
               lVar3 = plVar1[2];
            }

            *(long*)( this + 0x370 ) = lVar3;
            if (plVar1 == *(long**)( this + 0x378 )) {
               *(long*)( this + 0x378 ) = lVar2;
            }

            *plVar1 = 0;
            *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
         }
 else {
            _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
            lVar3 = *(long*)( this + 0x370 );
         }

      }
 while ( lVar3 != 0 );
      return;
   }

   return;
}
/* GodotPhysicsServer2D::body_apply_torque_impulse(RID, float) */void GodotPhysicsServer2D::body_apply_torque_impulse(float param_1, GodotPhysicsServer2D *this, ulong param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            _update_shapes(this);
            *(float*)( lVar2 + 0xc0 ) = param_1 * *(float*)( lVar2 + 0x10c ) + *(float*)( lVar2 + 0xc0 );
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_torque_impulse", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x31a, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_apply_impulse(RID, Vector2 const&, Vector2 const&) */void GodotPhysicsServer2D::body_apply_impulse(GodotPhysicsServer2D *this, ulong param_2, undefined8 *param_3, undefined8 *param_4) {
   float fVar1;
   int iVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar2 = (int)plVar4[1];
         if (iVar2 == (int)( param_2 >> 0x20 )) {
            lVar3 = *plVar4;
            if (lVar3 != 0) {
               _update_shapes(this);
               fVar1 = *(float*)( lVar3 + 0x10c );
               fVar5 = (float)( ( ulong ) * (undefined8*)( lVar3 + 0x100 ) >> 0x20 );
               *(ulong*)( lVar3 + 0xb8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xb8 ) >> 0x20 ) + fVar5 * (float)( ( ulong ) * param_3 >> 0x20 ), (float)*(undefined8*)( lVar3 + 0xb8 ) + fVar5 * (float)*param_3);
               local_28 = CONCAT44((float)( ( ulong ) * param_4 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar3 + 0x118 ) >> 0x20 ), (float)*param_4 - (float)*(undefined8*)( lVar3 + 0x118 ));
               fVar5 = (float)Vector2::cross((Vector2*)&local_28);
               *(float*)( lVar3 + 0xc0 ) = fVar5 * fVar1 + *(float*)( lVar3 + 0xc0 );
               if (( *(long*)( lVar3 + 0x40 ) == 0 ) || ( *(uint*)( lVar3 + 0xa8 ) < 2 )) {
                  if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

               }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  GodotBody2D::set_active(SUB81(lVar3, 0));
                  return;
               }

               goto LAB_00109723;
            }

         }
 else if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("body_apply_impulse", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x324, "Parameter \"body\" is null.", 0, 0);
      return;
   }

   LAB_00109723:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer2D::body_set_axis_velocity(RID, Vector2 const&) */void GodotPhysicsServer2D::body_set_axis_velocity(GodotPhysicsServer2D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long *plVar4;
   long in_FS_OFFSET;
   float fVar5;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar4[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar4;
            if (lVar2 != 0) {
               _update_shapes(this);
               uVar3 = *(undefined8*)( lVar2 + 0xb8 );
               local_28 = Vector2::normalized();
               fVar5 = (float)Vector2::dot((Vector2*)&local_28);
               *(ulong*)( lVar2 + 0xb8 ) = CONCAT44(( (float)( (ulong)uVar3 >> 0x20 ) - fVar5 * (float)( (ulong)local_28 >> 0x20 ) ) + (float)( ( ulong ) * param_3 >> 0x20 ), ( (float)uVar3 - fVar5 * (float)local_28 ) + (float)*param_3);
               if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
                  GodotBody2D::set_active(SUB81(lVar2, 0));
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_001098c3;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("body_set_axis_velocity", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x37f, "Parameter \"body\" is null.", 0, 0);
      return;
   }

   LAB_001098c3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer2D::body_test_motion(RID, PhysicsServer2D::MotionParameters const&,
   PhysicsServer2D::MotionResult*) */undefined8 GodotPhysicsServer2D::body_test_motion(GodotPhysicsServer2D *param_1, ulong param_2, MotionResult *param_3) {
   int iVar1;
   MotionParameters *pMVar2;
   char cVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      puVar5 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar5 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pMVar2 = (MotionParameters*)*puVar5;
         if (pMVar2 != (MotionParameters*)0x0) {
            if (*(long*)( pMVar2 + 0x40 ) == 0) {
               _err_print_error("body_test_motion", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3e5, "Parameter \"body->get_space()\" is null.", 0, 0);
               return 0;
            }

            cVar3 = GodotSpace2D::is_locked();
            if (cVar3 != '\0') {
               _err_print_error("body_test_motion", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3e6, "Condition \"body->get_space()->is_locked()\" is true. Returning: false", 0, 0);
               return 0;
            }

            _update_shapes(param_1);
            uVar4 = GodotSpace2D::test_body_motion(*(GodotBody2D**)( pMVar2 + 0x40 ), pMVar2, param_3);
            return uVar4;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_test_motion", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3e4, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer2D::step(float) */void GodotPhysicsServer2D::step(GodotPhysicsServer2D *this, float param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   if (this[0x171] == (GodotPhysicsServer2D)0x0) {
      return;
   }

   _update_shapes(this);
   iVar1 = *(int*)( this + 0x1b4 );
   *(undefined8*)( this + 0x174 ) = 0;
   *(undefined4*)( this + 0x17c ) = 0;
   if (iVar1 != 0) {
      lVar2 = *(long*)( this + 400 );
      lVar4 = 0;
      while (true) {
         lVar3 = *(long*)( lVar2 + lVar4 * 8 );
         GodotStep2D::step(*(GodotSpace2D**)( this + 0x188 ), param_1);
         for (int i = 0; i < 3; i++) {
            *(int*)( this + ( 4*i + 372 ) ) = *(int*)( this + ( 4*i + 372 ) ) + *(int*)( lVar3 + ( 4*i + 24812 ) );
         }

         if (iVar1 <= (int)lVar4 + 1) break;
         lVar4 = lVar4 + 1;
      }
;
   }

   return;
}
/* GodotPhysicsServer2D::free(RID) */void GodotPhysicsServer2D::free(GodotPhysicsServer2D *this, ulong param_2) {
   uint uVar1;
   ulong uVar2;
   code *pcVar3;
   int iVar4;
   uint uVar5;
   undefined8 *puVar6;
   long lVar7;
   undefined8 *puVar8;
   GodotSpace2D *this_00;
   undefined8 in_R11;
   uint uVar9;
   ulong uVar10;
   pthread_mutex_t *ppVar11;
   long in_FS_OFFSET;
   GodotSpace2D *local_48;
   long local_40;
   ppVar11 = (pthread_mutex_t*)( this + 0x1e8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _update_shapes(this);
   iVar4 = pthread_mutex_lock(ppVar11);
   if (iVar4 != 0) goto LAB_0010a777;
   uVar9 = (uint)param_2;
   uVar10 = param_2 & 0xffffffff;
   uVar5 = ( uint )(param_2 >> 0x20);
   if (( uVar9 < *(uint*)( this + 0x1d4 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 == ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar11);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x1d4 ) <= uVar9 )) {
            LAB_00109f68:this_00 = (GodotSpace2D*)0x0;
         }
 else {
            puVar8 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
            uVar1 = *(uint*)( puVar8 + 1 );
            if (uVar5 != uVar1) {
               if (uVar1 + 0x80000000 < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_00109f68;
            }

            this_00 = (GodotSpace2D*)*puVar8;
         }

         while (lVar7 = GodotShape2D::get_owners(),*(int*)( lVar7 + 0x2c ) != 0) {
            lVar7 = GodotShape2D::get_owners();
            ( **(code**)( **(long**)( *(long*)( lVar7 + 0x18 ) + 0x10 ) + 8 ) )();
         }
;
         iVar4 = pthread_mutex_lock(ppVar11);
         if (iVar4 != 0) goto LAB_0010a777;
         if (uVar9 < *(uint*)( this + 0x1d4 )) {
            lVar7 = ( uVar10 % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( uVar10 / *(uint*)( this + 0x1d0 ) ) * 8 );
            uVar1 = *(uint*)( lVar7 + 8 );
            if ((int)uVar1 < 0) {
               pthread_mutex_unlock(ppVar11);
               _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
            }
 else if (uVar5 == uVar1) {
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0x1d8 ) - 1;
               *(uint*)( this + 0x1d8 ) = uVar5;
               *(uint*)( *(long*)( *(long*)( this + 0x1c8 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 4 ) = uVar9;
               pthread_mutex_unlock(ppVar11);
            }
 else {
               pthread_mutex_unlock(ppVar11);
               _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            pthread_mutex_unlock(ppVar11);
            _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         ( **(code**)( *(long*)this_00 + 0x60 ) )(this_00);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00109edf;
         goto LAB_0010a386;
      }

      pthread_mutex_unlock(ppVar11);
   }
 else {
      pthread_mutex_unlock(ppVar11);
   }

   ppVar11 = (pthread_mutex_t*)( this + 0x2f0 );
   iVar4 = pthread_mutex_lock(ppVar11);
   if (iVar4 != 0) goto LAB_0010a777;
   if (( uVar9 < *(uint*)( this + 0x2dc ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 != ( *(uint*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( uVar10 / *(uint*)( this + 0x2d8 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar11);
         goto LAB_00109c1d;
      }

      pthread_mutex_unlock(ppVar11);
      if (( param_2 == 0 ) || ( *(uint*)( this + 0x2dc ) <= uVar9 )) {
         LAB_0010a581:( **(code**)( *(long*)this + 0x2f8 ) )(this, param_2, 0);
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      uVar2 = uVar10 / *(uint*)( this + 0x2d8 );
      puVar8 = (undefined8*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + uVar2 * 8 ) );
      uVar1 = *(uint*)( puVar8 + 1 );
      if (uVar5 != uVar1) {
         if (uVar1 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar2);
         }

         goto LAB_0010a581;
      }

      this_00 = (GodotSpace2D*)*puVar8;
      ( **(code**)( *(long*)this + 0x2f8 ) )(this, param_2, 0);
      lVar7 = *(long*)( this_00 + 0x38 );
      while (( lVar7 != 0 && ( *(int*)( lVar7 + -8 ) != 0 ) )) {
         GodotCollisionObject2D::remove_shape((int)this_00);
         lVar7 = *(long*)( this_00 + 0x38 );
      }
;
      iVar4 = pthread_mutex_lock(ppVar11);
      if (iVar4 != 0) goto LAB_0010a777;
      if (*(uint*)( this + 0x2dc ) <= uVar9) goto LAB_0010a448;
      lVar7 = ( uVar10 % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( uVar10 / *(uint*)( this + 0x2d8 ) ) * 8 );
      uVar5 = *(uint*)( lVar7 + 8 );
      if ((int)uVar5 < 0) {
         LAB_0010a4fb:pthread_mutex_unlock(ppVar11);
         _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
      }
 else if (uVar1 == uVar5) {
         *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
         lVar7 = *(long*)( this + 0x2d0 );
         uVar5 = *(int*)( this + 0x2e0 ) - 1;
         *(uint*)( this + 0x2e0 ) = uVar5;
         uVar10 = (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x2d8 );
         uVar5 = uVar5 % *(uint*)( this + 0x2d8 );
         LAB_0010a064:*(uint*)( *(long*)( lVar7 + uVar10 * 8 ) + (ulong)uVar5 * 4 ) = uVar9;
         pthread_mutex_unlock(ppVar11);
      }
 else {
         LAB_0010a53b:pthread_mutex_unlock(ppVar11);
         _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      }

      LAB_0010a076:( **(code**)( *(long*)this_00 + 0x10 ) )(this_00);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00109edf;
      goto LAB_0010a386;
   }

   pthread_mutex_unlock(ppVar11);
   LAB_00109c1d:ppVar11 = (pthread_mutex_t*)( this + 0x298 );
   iVar4 = pthread_mutex_lock(ppVar11);
   if (iVar4 != 0) goto LAB_0010a777;
   if (( uVar9 < *(uint*)( this + 0x284 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 == ( *(uint*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( uVar10 / *(uint*)( this + 0x280 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar11);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x284 ) <= uVar9 )) {
            LAB_0010e141:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar8 = (undefined8*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( uVar10 / *(uint*)( this + 0x280 ) ) * 8 ) );
         uVar1 = *(uint*)( puVar8 + 1 );
         if (uVar5 != uVar1) {
            if (uVar1 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_R11);
            }

            goto LAB_0010e141;
         }

         this_00 = (GodotSpace2D*)*puVar8;
         ( **(code**)( *(long*)this_00 + 0x28 ) )(this_00);
         lVar7 = *(long*)( this_00 + 0x38 );
         while (( lVar7 != 0 && ( *(int*)( lVar7 + -8 ) != 0 ) )) {
            GodotCollisionObject2D::remove_shape((int)this_00);
            lVar7 = *(long*)( this_00 + 0x38 );
         }
;
         iVar4 = pthread_mutex_lock(ppVar11);
         if (iVar4 != 0) goto LAB_0010a777;
         if (uVar9 < *(uint*)( this + 0x284 )) {
            lVar7 = ( uVar10 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( uVar10 / *(uint*)( this + 0x280 ) ) * 8 );
            uVar5 = *(uint*)( lVar7 + 8 );
            if (-1 < (int)uVar5) {
               if (uVar1 != uVar5) goto LAB_0010a53b;
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               lVar7 = *(long*)( this + 0x278 );
               uVar5 = *(int*)( this + 0x288 ) - 1;
               *(uint*)( this + 0x288 ) = uVar5;
               uVar10 = (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x280 );
               uVar5 = uVar5 % *(uint*)( this + 0x280 );
               goto LAB_0010a064;
            }

            goto LAB_0010a4fb;
         }

         LAB_0010a448:pthread_mutex_unlock(ppVar11);
         _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         goto LAB_0010a076;
      }

      pthread_mutex_unlock(ppVar11);
   }
 else {
      pthread_mutex_unlock(ppVar11);
   }

   ppVar11 = (pthread_mutex_t*)( this + 0x240 );
   iVar4 = pthread_mutex_lock(ppVar11);
   if (iVar4 != 0) goto LAB_0010a777;
   if (( uVar9 < *(uint*)( this + 0x22c ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 == ( *(uint*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( uVar10 / *(uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar11);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar9 )) {
            LAB_0010a27a:local_48 = (GodotSpace2D*)0x0;
            this_00 = local_48;
         }
 else {
            puVar8 = (undefined8*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( uVar10 / *(uint*)( this + 0x228 ) ) * 8 ) );
            uVar1 = *(uint*)( puVar8 + 1 );
            if (uVar5 != uVar1) {
               if (uVar1 + 0x80000000 < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_0010a27a;
            }

            local_48 = (GodotSpace2D*)*puVar8;
            this_00 = local_48;
         }

         while (lVar7 = GodotSpace2D::get_objects(),*(int*)( lVar7 + 0x24 ) != 0) {
            puVar6 = (undefined8*)GodotSpace2D::get_objects();
            puVar8 = (undefined8*)&DAT_fffffffffffffff8;
            if (*(int*)( (long)puVar6 + 0x24 ) != 0) {
               puVar8 = (undefined8*)*puVar6;
            }

            ( **(code**)( *(long*)*puVar8 + 0x28 ) )((long*)*puVar8, 0);
         }
;
         HashSet<GodotSpace2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace2D*>>::erase((HashSet<GodotSpace2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace2D*>>*)( this + 400 ), &local_48);
         ( **(code**)( *(long*)this + 0x558 ) )(this);
         iVar4 = pthread_mutex_lock(ppVar11);
         if (iVar4 != 0) goto LAB_0010a777;
         if (uVar9 < *(uint*)( this + 0x22c )) {
            lVar7 = ( uVar10 % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( uVar10 / *(uint*)( this + 0x228 ) ) * 8 );
            uVar1 = *(uint*)( lVar7 + 8 );
            if ((int)uVar1 < 0) {
               pthread_mutex_unlock(ppVar11);
               _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
            }
 else if (uVar5 == uVar1) {
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0x230 ) - 1;
               *(uint*)( this + 0x230 ) = uVar5;
               *(uint*)( *(long*)( *(long*)( this + 0x220 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x228 ) ) * 4 ) = uVar9;
               pthread_mutex_unlock(ppVar11);
            }
 else {
               pthread_mutex_unlock(ppVar11);
               _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            pthread_mutex_unlock(ppVar11);
            _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         GodotSpace2D::~GodotSpace2D(this_00);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00109edf;
         goto LAB_0010a386;
      }

      pthread_mutex_unlock(ppVar11);
   }
 else {
      pthread_mutex_unlock(ppVar11);
   }

   ppVar11 = (pthread_mutex_t*)( this + 0x348 );
   iVar4 = pthread_mutex_lock(ppVar11);
   if (iVar4 != 0) goto LAB_0010a777;
   if (( uVar9 < *(uint*)( this + 0x334 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 == ( *(uint*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( uVar10 / *(uint*)( this + 0x330 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar11);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x334 ) <= uVar9 )) {
            LAB_0010a1bb:this_00 = (GodotSpace2D*)0x0;
         }
 else {
            puVar8 = (undefined8*)( ( uVar10 % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( uVar10 / *(uint*)( this + 0x330 ) ) * 8 ) );
            uVar1 = *(uint*)( puVar8 + 1 );
            if (uVar5 != uVar1) {
               if (uVar1 + 0x80000000 < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_0010a1bb;
            }

            this_00 = (GodotSpace2D*)*puVar8;
         }

         iVar4 = pthread_mutex_lock(ppVar11);
         if (iVar4 != 0) {
            LAB_0010a777:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar4);
         }

         if (uVar9 < *(uint*)( this + 0x334 )) {
            lVar7 = ( uVar10 % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( uVar10 / *(uint*)( this + 0x330 ) ) * 8 );
            uVar1 = *(uint*)( lVar7 + 8 );
            if ((int)uVar1 < 0) {
               pthread_mutex_unlock(ppVar11);
               _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
            }
 else if (uVar5 == uVar1) {
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0x338 ) - 1;
               *(uint*)( this + 0x338 ) = uVar5;
               *(uint*)( *(long*)( *(long*)( this + 0x328 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x330 ) ) * 4 ) = uVar9;
               pthread_mutex_unlock(ppVar11);
            }
 else {
               pthread_mutex_unlock(ppVar11);
               _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            pthread_mutex_unlock(ppVar11);
            _err_print_error(&_LC201, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         ( **(code**)( *(long*)this_00 + 0x18 ) )(this_00);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            LAB_00109edf:Memory::free_static(this_00, false);
            return;
         }

         goto LAB_0010a386;
      }

      pthread_mutex_unlock(ppVar11);
   }
 else {
      pthread_mutex_unlock(ppVar11);
   }

   _err_print_error(&_LC201, "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x4fd, "Method/function failed.", "Invalid ID.", 0, 0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a386:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::GodotPhysicsServer2D(bool) */void GodotPhysicsServer2D::GodotPhysicsServer2D(GodotPhysicsServer2D *this, bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   PhysicsServer2D::PhysicsServer2D((PhysicsServer2D*)this);
   *(undefined***)this = &PTR__initialize_classv_00114670;
   *(undefined2*)( this + 0x171 ) = 1;
   uVar1 = _UNK_00114e78;
   uVar2 = __LC207;
   *(undefined2*)( this + 0x180 ) = 0;
   *(undefined1(*) [16])( this + 0x1f8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x174 ) = 0;
   *(undefined4*)( this + 0x17c ) = 0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   *(undefined8*)( this + 0x1b0 ) = 2;
   *(undefined***)( this + 0x1b8 ) = &PTR__RID_Alloc_001145d0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 448 ) ) = 0;
   }

   *(undefined4*)( this + 0x1f8 ) = 1;
   *(undefined1(*) [16])( this + 0x188 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x1d0 ) = uVar2;
   *(undefined8*)( this + 0x1d8 ) = uVar1;
   *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
   uVar2 = Memory::alloc_static(0x108, false);
   *(undefined8*)( this + 0x1c0 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x1dc ) << 3, false);
   *(undefined8*)( this + 0x1c8 ) = uVar2;
   *(undefined1(*) [16])( this + 0x250 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x210 ) = &PTR__RID_Alloc_001145f0;
   uVar1 = _UNK_00114e78;
   uVar2 = __LC207;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 536 ) ) = 0;
   }

   *(undefined4*)( this + 0x250 ) = 1;
   *(undefined8*)( this + 0x228 ) = uVar2;
   *(undefined8*)( this + 0x230 ) = uVar1;
   *(undefined1(*) [16])( this + 0x240 ) = (undefined1[16])0x0;
   uVar2 = Memory::alloc_static(0x108, false);
   *(undefined8*)( this + 0x218 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x234 ) << 3, false);
   *(undefined8*)( this + 0x220 ) = uVar2;
   *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x268 ) = &PTR__RID_Alloc_00114610;
   uVar1 = _UNK_00114e78;
   uVar2 = __LC207;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 624 ) ) = 0;
   }

   *(undefined4*)( this + 0x2a8 ) = 1;
   *(undefined8*)( this + 0x280 ) = uVar2;
   *(undefined8*)( this + 0x288 ) = uVar1;
   *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
   uVar2 = Memory::alloc_static(0x108, false);
   *(undefined8*)( this + 0x270 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x28c ) << 3, false);
   *(undefined8*)( this + 0x278 ) = uVar2;
   *(undefined1(*) [16])( this + 0x300 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x2c0 ) = &PTR__RID_Alloc_00114630;
   uVar1 = _UNK_00114e78;
   uVar2 = __LC207;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 712 ) ) = 0;
   }

   *(undefined4*)( this + 0x300 ) = 1;
   *(undefined8*)( this + 0x2d8 ) = uVar2;
   *(undefined8*)( this + 0x2e0 ) = uVar1;
   *(undefined1(*) [16])( this + 0x2f0 ) = (undefined1[16])0x0;
   uVar2 = Memory::alloc_static(0x108, false);
   *(undefined8*)( this + 0x2c8 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x2e4 ) << 3, false);
   *(undefined8*)( this + 0x2d0 ) = uVar2;
   *(undefined1(*) [16])( this + 0x358 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x318 ) = &PTR__RID_Alloc_00114650;
   uVar1 = _UNK_00114e78;
   uVar2 = __LC207;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 800 ) ) = 0;
   }

   *(undefined4*)( this + 0x358 ) = 1;
   *(undefined1(*) [16])( this + 0x348 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x330 ) = uVar2;
   *(undefined8*)( this + 0x338 ) = uVar1;
   uVar2 = Memory::alloc_static(0x108, false);
   *(undefined8*)( this + 800 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x33c ) << 3, false);
   *(undefined8*)( this + 0x328 ) = uVar2;
   this[0x180] = (GodotPhysicsServer2D)param_1;
   *(undefined1(*) [16])( this + 0x370 ) = (undefined1[16])0x0;
   godot_singleton = this;
   GodotBroadPhase2D::create_func = GodotBroadPhase2DBVH::_create;
   return;
}
/* GodotPhysicsServer2D::space_set_active(RID, bool) */void GodotPhysicsServer2D::space_set_active(GodotPhysicsServer2D *this, ulong param_2, char param_3) {
   int iVar1;
   long *plVar2;
   long in_FS_OFFSET;
   GodotSpace2D *local_30;
   GodotSpace2D *local_28[3];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x22c )) {
         plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         iVar1 = (int)plVar2[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            local_30 = (GodotSpace2D*)*plVar2;
            if (local_30 != (GodotSpace2D*)0x0) {
               if (param_3 == '\0') {
                  HashSet<GodotSpace2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace2D*>>::erase((HashSet<GodotSpace2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace2D*>>*)( this + 400 ), &local_30);
               }
 else {
                  HashSet<GodotSpace2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace2D*>>::insert(local_28);
               }

               if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_0010ac73;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("space_set_active", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0xe9, "Parameter \"space\" is null.", 0, 0);
      return;
   }

   LAB_0010ac73:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer2D::space_set_debug_contacts(RID, int) */void GodotPhysicsServer2D::space_set_debug_contacts(GodotPhysicsServer2D *this, ulong param_2, int param_3) {
   code *pcVar1;
   int iVar2;
   ulong uVar3;
   ulong uVar4;
   undefined8 *puVar5;
   size_t __n;
   char *pcVar6;
   long *plVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   char *pcVar11;
   char *pcVar12;
   undefined8 *puVar13;
   long lVar14;
   long lVar15;
   if (param_2 != 0) {
      lVar9 = (long)param_3;
      if ((uint)param_2 < *(uint*)( this + 0x22c )) {
         plVar7 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         iVar2 = (int)plVar7[1];
         if (iVar2 == (int)( param_2 >> 0x20 )) {
            lVar14 = *plVar7;
            if (lVar14 != 0) {
               if (-1 < lVar9) {
                  lVar10 = *(long*)( lVar14 + 0x6100 );
                  if (lVar10 == 0) {
                     lVar15 = 0;
                     if (lVar9 == 0) {
                        return;
                     }

                     LAB_0010ae68:uVar3 = lVar9 * 8 - 1;
                     uVar3 = uVar3 | uVar3 >> 1;
                     uVar3 = uVar3 >> 2 | uVar3;
                     uVar3 = uVar3 | uVar3 >> 4;
                     uVar3 = uVar3 | uVar3 >> 8;
                     uVar3 = uVar3 | uVar3 >> 0x10;
                     lVar10 = ( uVar3 >> 0x20 | uVar3 ) + 1;
                     if (lVar15 < lVar9) {
                        LAB_0010aed0:if (lVar15 != 0) {
                           iVar2 = CowData<Vector2>::_realloc((CowData<Vector2>*)( lVar14 + 0x6100 ), lVar10);
                           if (iVar2 != 0) {
                              return;
                           }

                           LAB_0010adca:puVar13 = *(undefined8**)( lVar14 + 0x6100 );
                           if (puVar13 == (undefined8*)0x0) {
                              GodotPhysicsServer2D_space_set_debug_contacts:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
                              ( *pcVar1 )();
                           }

                           lVar14 = puVar13[-1];
                           LAB_0010addf:if (lVar14 < lVar9) {
                              memset(puVar13 + lVar14, 0, ( lVar9 - lVar14 ) * 8);
                           }

                           puVar13[-1] = lVar9;
                           return;
                        }

                        puVar5 = (undefined8*)Memory::alloc_static(lVar10 + 0x10, false);
                        if (puVar5 != (undefined8*)0x0) {
                           puVar13 = puVar5 + 2;
                           *puVar5 = 1;
                           puVar5[1] = 0;
                           *(undefined8**)( lVar14 + 0x6100 ) = puVar13;
                           lVar14 = 0;
                           goto LAB_0010addf;
                        }

                        uVar8 = 0x171;
                        pcVar6 = "Parameter \"mem_new\" is null.";
                        goto LAB_0010af6a;
                     }

                  }
 else {
                     lVar15 = *(long*)( lVar10 + -8 );
                     if (lVar9 == lVar15) {
                        return;
                     }

                     if (lVar9 == 0) {
                        LOCK();
                        plVar7 = (long*)( lVar10 + -0x10 );
                        *plVar7 = *plVar7 + -1;
                        UNLOCK();
                        if (*plVar7 != 0) {
                           *(undefined8*)( lVar14 + 0x6100 ) = 0;
                           return;
                        }

                        lVar9 = *(long*)( lVar14 + 0x6100 );
                        *(undefined8*)( lVar14 + 0x6100 ) = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                        return;
                     }

                     if (1 < *(ulong*)( lVar10 + -0x10 )) {
                        if (*(long*)( lVar14 + 0x6100 ) == 0) goto GodotPhysicsServer2D_space_set_debug_contacts;
                        lVar10 = *(long*)( *(long*)( lVar14 + 0x6100 ) + -8 );
                        uVar3 = 0x10;
                        __n = lVar10 * 8;
                        if (__n != 0) {
                           uVar3 = __n - 1 | __n - 1 >> 1;
                           uVar3 = uVar3 | uVar3 >> 2;
                           uVar3 = uVar3 | uVar3 >> 4;
                           uVar3 = uVar3 | uVar3 >> 8;
                           uVar3 = uVar3 | uVar3 >> 0x10;
                           uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
                        }

                        puVar5 = (undefined8*)Memory::alloc_static(uVar3, false);
                        if (puVar5 == (undefined8*)0x0) {
                           _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                        }
 else {
                           *puVar5 = 1;
                           puVar5[1] = lVar10;
                           memcpy(puVar5 + 2, *(void**)( lVar14 + 0x6100 ), __n);
                           if (*(long*)( lVar14 + 0x6100 ) != 0) {
                              LOCK();
                              plVar7 = (long*)( *(long*)( lVar14 + 0x6100 ) + -0x10 );
                              *plVar7 = *plVar7 + -1;
                              UNLOCK();
                              if (*plVar7 == 0) {
                                 lVar10 = *(long*)( lVar14 + 0x6100 );
                                 *(undefined8*)( lVar14 + 0x6100 ) = 0;
                                 Memory::free_static((void*)( lVar10 + -0x10 ), false);
                              }

                           }

                           *(undefined8**)( lVar14 + 0x6100 ) = puVar5 + 2;
                        }

                     }

                     uVar3 = lVar9 * 8 - 1;
                     uVar3 = uVar3 >> 1 | uVar3;
                     uVar3 = uVar3 >> 2 | uVar3;
                     uVar3 = uVar3 >> 4 | uVar3;
                     uVar3 = uVar3 >> 8 | uVar3;
                     uVar3 = uVar3 >> 0x10 | uVar3;
                     uVar3 = uVar3 >> 0x20 | uVar3;
                     lVar10 = uVar3 + 1;
                     if (lVar15 * 8 == 0) goto LAB_0010ae68;
                     uVar4 = lVar15 * 8 - 1;
                     uVar4 = uVar4 | uVar4 >> 1;
                     uVar4 = uVar4 | uVar4 >> 2;
                     uVar4 = uVar4 | uVar4 >> 4;
                     uVar4 = uVar4 | uVar4 >> 8;
                     uVar4 = uVar4 | uVar4 >> 0x10;
                     uVar4 = uVar4 | uVar4 >> 0x20;
                     if (lVar15 < lVar9) {
                        if (uVar4 != uVar3) goto LAB_0010aed0;
                        goto LAB_0010adca;
                     }

                     if (uVar4 == uVar3) goto LAB_0010ae35;
                  }

                  iVar2 = CowData<Vector2>::_realloc((CowData<Vector2>*)( lVar14 + 0x6100 ), lVar10);
                  if (iVar2 != 0) {
                     return;
                  }

                  LAB_0010ae35:if (*(long*)( lVar14 + 0x6100 ) != 0) {
                     *(long*)( *(long*)( lVar14 + 0x6100 ) + -8 ) = lVar9;
                     return;
                  }

                  FUN_0010e156();
                  return;
               }

               uVar8 = 0x157;
               pcVar6 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
               LAB_0010af6a:pcVar11 = "./core/templates/cowdata.h";
               pcVar12 = "resize";
               goto LAB_0010af40;
            }

         }
 else if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   pcVar6 = "Parameter \"space\" is null.";
   uVar8 = 0x107;
   pcVar11 = "modules/godot_physics_2d/godot_physics_server_2d.cpp";
   pcVar12 = "space_set_debug_contacts";
   LAB_0010af40:_err_print_error(pcVar12, pcVar11, uVar8, pcVar6, 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_remove_collision_exception(RID, RID) */void GodotPhysicsServer2D::body_remove_collision_exception(GodotPhysicsServer2D *this, ulong param_2, ulong param_3) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   code *pcVar4;
   int iVar5;
   int iVar6;
   long *plVar7;
   long lVar8;
   int iVar9;
   long lVar10;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar7 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar6 = (int)plVar7[1];
      if (iVar6 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar7;
         if (lVar1 != 0) {
            lVar2 = *(long*)( lVar1 + 0x1b0 );
            if (lVar2 != 0) {
               lVar10 = *(long*)( lVar2 + -8 );
               iVar6 = (int)lVar10 + -1;
               if (lVar10 < 1) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar10, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               iVar9 = 0;
               if (-1 < iVar6) {
                  do {
                     while (true) {
                        iVar5 = ( iVar6 + iVar9 ) / 2;
                        lVar8 = (long)iVar5;
                        uVar3 = *(ulong*)( lVar2 + lVar8 * 8 );
                        if (param_3 < uVar3) break;
                        if (param_3 <= uVar3) {
                           if (-2 < iVar6 + iVar9) {
                              if (lVar8 < lVar10) {
                                 CowData<RID>::_copy_on_write((CowData<RID>*)( lVar1 + 0x1b0 ));
                                 lVar2 = *(long*)( lVar1 + 0x1b0 );
                                 if (lVar2 == 0) {
                                    lVar10 = -1;
                                 }
 else {
                                    lVar10 = *(long*)( lVar2 + -8 ) + -1;
                                    if (lVar8 < lVar10) {
                                       memmove((void*)( lVar2 + lVar8 * 8 ), (void*)( lVar2 + 8 + lVar8 * 8 ), ( lVar10 - lVar8 ) * 8);
                                    }

                                 }

                                 CowData<RID>::resize<false>((CowData<RID>*)( lVar1 + 0x1b0 ), lVar10);
                              }
 else {
                                 _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar8, lVar10, "p_index", "size()", "", false, false);
                              }

                           }

                           goto LAB_0010b1e3;
                        }

                        iVar9 = iVar5 + 1;
                        if (iVar6 < iVar9) goto LAB_0010b1e3;
                     }
;
                     iVar6 = iVar5 + -1;
                  }
 while ( iVar9 <= iVar6 );
               }

            }

            LAB_0010b1e3:if (( *(long*)( lVar1 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar1 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar1, 0));
               return;
            }

            return;
         }

      }
 else if (iVar6 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_remove_collision_exception", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x395, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_add_collision_exception(RID, RID) */void GodotPhysicsServer2D::body_add_collision_exception(GodotPhysicsServer2D *this, ulong param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   undefined8 local_10;
   local_10 = param_3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            VSet<RID>::insert((VSet<RID>*)( lVar2 + 0x1a8 ), (RID*)&local_10);
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xa8 ) )) {
               GodotBody2D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_collision_exception", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x38d, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer2D::body_set_max_contacts_reported(RID, int) */void GodotPhysicsServer2D::body_set_max_contacts_reported(GodotPhysicsServer2D *this, ulong param_2, int param_3) {
   long lVar1;
   code *pcVar2;
   int iVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   char *pcVar7;
   long *plVar8;
   ulong uVar9;
   undefined8 *puVar10;
   size_t __n;
   undefined8 uVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x2dc ) <= (uint)param_2 )) {
      LAB_0010b830:_err_print_error("body_set_max_contacts_reported", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0x3be, "Parameter \"body\" is null.", 0, 0);
      return;
   }

   plVar8 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
   iVar3 = (int)plVar8[1];
   if (iVar3 != (int)( param_2 >> 0x20 )) {
      if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_0010b830;
   }

   lVar1 = *plVar8;
   if (lVar1 == 0) goto LAB_0010b830;
   lVar12 = (long)param_3;
   if (lVar12 < 0) {
      uVar11 = 0x157;
      pcVar7 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
      LAB_0010b87a:_err_print_error("resize", "./core/templates/cowdata.h", uVar11, pcVar7, 0, 0);
      LAB_0010b7bc:iVar3 = *(int*)( lVar1 + 0xa8 );
      *(undefined4*)( lVar1 + 0x200 ) = 0;
   }
 else {
      lVar13 = *(long*)( lVar1 + 0x1f8 );
      if (lVar13 == 0) {
         lVar14 = 0;
         if (lVar12 == 0) {
            *(undefined4*)( lVar1 + 0x200 ) = 0;
            return;
         }

         LAB_0010b754:uVar9 = lVar12 * 0x50 - 1;
         uVar9 = uVar9 | uVar9 >> 1;
         uVar9 = uVar9 >> 2 | uVar9;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = uVar9 | uVar9 >> 0x10;
         lVar13 = ( uVar9 | uVar9 >> 0x20 ) + 1;
         if (lVar14 < lVar12) {
            LAB_0010b7e0:if (lVar14 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(lVar13 + 0x10, false);
               if (puVar6 == (undefined8*)0x0) {
                  uVar11 = 0x171;
                  pcVar7 = "Parameter \"mem_new\" is null.";
                  goto LAB_0010b87a;
               }

               puVar10 = puVar6 + 2;
               *puVar6 = 1;
               puVar6[1] = 0;
               *(undefined8**)( lVar1 + 0x1f8 ) = puVar10;
               lVar13 = 0;
            }
 else {
               iVar3 = CowData<GodotBody2D::Contact>::_realloc((CowData<GodotBody2D::Contact>*)( lVar1 + 0x1f8 ), lVar13);
               if (iVar3 != 0) goto LAB_0010b7bc;
               LAB_0010b5fd:puVar10 = *(undefined8**)( lVar1 + 0x1f8 );
               if (puVar10 == (undefined8*)0x0) {
                  GodotPhysicsServer2D_body_set_max_contacts_reported:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar13 = puVar10[-1];
            }

            if (lVar13 < lVar12) {
               puVar6 = puVar10 + lVar13 * 10;
               do {
                  *puVar6 = 0;
                  puVar5 = puVar6 + 10;
                  puVar6[1] = 0;
                  puVar6[2] = 0;
                  *(undefined4*)( puVar6 + 3 ) = 0;
                  *(undefined4*)( (long)puVar6 + 0x1c ) = 0;
                  puVar6[4] = 0;
                  *(undefined4*)( puVar6 + 5 ) = 0;
                  *(undefined1(*) [16])( puVar6 + 6 ) = (undefined1[16])0x0;
                  puVar6[8] = 0;
                  puVar6[9] = 0;
                  puVar6 = puVar5;
               }
 while ( puVar10 + lVar12 * 10 != puVar5 );
            }

            iVar3 = *(int*)( lVar1 + 0xa8 );
            puVar10[-1] = lVar12;
            *(undefined4*)( lVar1 + 0x200 ) = 0;
            goto joined_r0x0010b696;
         }

         LAB_0010b7ac:iVar3 = CowData<GodotBody2D::Contact>::_realloc((CowData<GodotBody2D::Contact>*)( lVar1 + 0x1f8 ), lVar13);
         if (iVar3 != 0) goto LAB_0010b7bc;
      }
 else {
         lVar14 = *(long*)( lVar13 + -8 );
         if (lVar12 == lVar14) {
            *(undefined4*)( lVar1 + 0x200 ) = 0;
            if (*(int*)( lVar1 + 0xa8 ) != 1) {
               return;
            }

            if (param_3 == 0) {
               return;
            }

            goto LAB_0010b698;
         }

         if (lVar12 == 0) {
            LOCK();
            plVar8 = (long*)( lVar13 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 != 0) {
               *(undefined8*)( lVar1 + 0x1f8 ) = 0;
               *(undefined4*)( lVar1 + 0x200 ) = 0;
               return;
            }

            lVar12 = *(long*)( lVar1 + 0x1f8 );
            *(undefined8*)( lVar1 + 0x1f8 ) = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
            *(undefined4*)( lVar1 + 0x200 ) = 0;
            return;
         }

         if (1 < *(ulong*)( lVar13 + -0x10 )) {
            if (*(long*)( lVar1 + 0x1f8 ) == 0) goto GodotPhysicsServer2D_body_set_max_contacts_reported;
            lVar13 = *(long*)( *(long*)( lVar1 + 0x1f8 ) + -8 );
            uVar9 = 0x10;
            __n = lVar13 * 0x50;
            if (__n != 0) {
               uVar9 = __n - 1 | __n - 1 >> 1;
               uVar9 = uVar9 | uVar9 >> 2;
               uVar9 = uVar9 | uVar9 >> 4;
               uVar9 = uVar9 | uVar9 >> 8;
               uVar9 = uVar9 | uVar9 >> 0x10;
               uVar9 = ( uVar9 | uVar9 >> 0x20 ) + 0x11;
            }

            puVar6 = (undefined8*)Memory::alloc_static(uVar9, false);
            if (puVar6 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               *puVar6 = 1;
               puVar6[1] = lVar13;
               memcpy(puVar6 + 2, *(void**)( lVar1 + 0x1f8 ), __n);
               if (*(long*)( lVar1 + 0x1f8 ) != 0) {
                  LOCK();
                  plVar8 = (long*)( *(long*)( lVar1 + 0x1f8 ) + -0x10 );
                  *plVar8 = *plVar8 + -1;
                  UNLOCK();
                  if (*plVar8 == 0) {
                     lVar13 = *(long*)( lVar1 + 0x1f8 );
                     *(undefined8*)( lVar1 + 0x1f8 ) = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

               *(undefined8**)( lVar1 + 0x1f8 ) = puVar6 + 2;
            }

         }

         uVar9 = lVar12 * 0x50 - 1;
         uVar9 = uVar9 >> 1 | uVar9;
         uVar9 = uVar9 >> 2 | uVar9;
         uVar9 = uVar9 >> 4 | uVar9;
         uVar9 = uVar9 >> 8 | uVar9;
         uVar9 = uVar9 >> 0x10 | uVar9;
         uVar9 = uVar9 >> 0x20 | uVar9;
         lVar13 = uVar9 + 1;
         if (lVar14 * 0x50 == 0) goto LAB_0010b754;
         uVar4 = lVar14 * 0x50 - 1;
         uVar4 = uVar4 | uVar4 >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         uVar4 = uVar4 | uVar4 >> 0x20;
         if (lVar14 < lVar12) {
            if (uVar4 != uVar9) goto LAB_0010b7e0;
            goto LAB_0010b5fd;
         }

         if (uVar4 != uVar9) goto LAB_0010b7ac;
      }

      if (*(long*)( lVar1 + 0x1f8 ) == 0) {
         FUN_0010e16c();
         return;
      }

      iVar3 = *(int*)( lVar1 + 0xa8 );
      *(long*)( *(long*)( lVar1 + 0x1f8 ) + -8 ) = lVar12;
      *(undefined4*)( lVar1 + 0x200 ) = 0;
   }

   joined_r0x0010b696:if (iVar3 != 1) {
      return;
   }

   LAB_0010b698:GodotBody2D::set_active(SUB81(lVar1, 0));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::_shape_create(PhysicsServer2D::ShapeType) */undefined8 GodotPhysicsServer2D::_shape_create(GodotPhysicsServer2D *this, undefined4 param_2) {
   code *pcVar1;
   undefined8 uVar2;
   GodotShape2D *pGVar3;
   undefined8 uVar4;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_2) {
      case 0:
    pGVar3 = (GodotShape2D *)operator_new(0x78,"");
    *(undefined1 (*) [16])(pGVar3 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar3 + 0x40) = (undefined1  [16])0x0;
    uVar2 = _UNK_00114e88;
    uVar4 = __LC250;
    *(undefined8 *)(pGVar3 + 8) = 0;
    *(undefined8 *)(pGVar3 + 0x10) = 0;
    *(undefined8 *)(pGVar3 + 0x18) = 0;
    pGVar3[0x20] = (GodotShape2D)0x0;
    *(undefined4 *)(pGVar3 + 0x24) = 0;
    *(undefined8 *)(pGVar3 + 0x50) = 2;
    *(undefined8 *)(pGVar3 + 0x58) = uVar4;
    *(undefined8 *)(pGVar3 + 0x60) = uVar2;
    *(undefined **)pGVar3 = &GodotSegmentShape2D::vtable;
    *(undefined8 *)(pGVar3 + 0x68) = 0;
    *(undefined4 *)(pGVar3 + 0x70) = 0;
    break;
      case 1:
    pGVar3 = (GodotShape2D *)operator_new(0x70,"");
    *(undefined1 (*) [16])(pGVar3 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar3 + 0x40) = (undefined1  [16])0x0;
    uVar2 = _UNK_00114e88;
    uVar4 = __LC250;
    *(undefined8 *)(pGVar3 + 8) = 0;
    *(undefined8 *)(pGVar3 + 0x10) = 0;
    *(undefined8 *)(pGVar3 + 0x18) = 0;
    pGVar3[0x20] = (GodotShape2D)0x0;
    *(undefined4 *)(pGVar3 + 0x24) = 0;
    *(undefined8 *)(pGVar3 + 0x50) = 2;
    *(undefined8 *)(pGVar3 + 0x58) = uVar4;
    *(undefined8 *)(pGVar3 + 0x60) = uVar2;
    *(undefined **)pGVar3 = &GodotCircleShape2D::vtable;
    *(undefined4 *)(pGVar3 + 0x68) = 0;
    pGVar3[0x6c] = (GodotShape2D)0x0;
    break;
      case 2:
    pGVar3 = (GodotShape2D *)operator_new(0x80,"");
    *(undefined1 (*) [16])(pGVar3 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar3 + 0x40) = (undefined1  [16])0x0;
    uVar2 = _UNK_00114e88;
    uVar4 = __LC250;
    *(undefined8 *)(pGVar3 + 8) = 0;
    *(undefined8 *)(pGVar3 + 0x10) = 0;
    *(undefined8 *)(pGVar3 + 0x18) = 0;
    pGVar3[0x20] = (GodotShape2D)0x0;
    *(undefined4 *)(pGVar3 + 0x24) = 0;
    *(undefined8 *)(pGVar3 + 0x50) = 2;
    *(undefined8 *)(pGVar3 + 0x58) = uVar4;
    *(undefined8 *)(pGVar3 + 0x60) = uVar2;
    *(undefined **)pGVar3 = &GodotRectangleShape2D::vtable;
    *(undefined8 *)(pGVar3 + 0x68) = 0;
    *(undefined8 *)(pGVar3 + 0x70) = 0;
    *(undefined8 *)(pGVar3 + 0x78) = 0;
    break;
      case 3:
    pGVar3 = (GodotShape2D *)operator_new(0x70,"");
    *(undefined1 (*) [16])(pGVar3 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar3 + 0x40) = (undefined1  [16])0x0;
    uVar2 = _UNK_00114e88;
    uVar4 = __LC250;
    *(undefined8 *)(pGVar3 + 8) = 0;
    *(undefined8 *)(pGVar3 + 0x10) = 0;
    *(undefined8 *)(pGVar3 + 0x18) = 0;
    pGVar3[0x20] = (GodotShape2D)0x0;
    *(undefined4 *)(pGVar3 + 0x24) = 0;
    *(undefined8 *)(pGVar3 + 0x50) = 2;
    *(undefined8 *)(pGVar3 + 0x58) = uVar4;
    *(undefined8 *)(pGVar3 + 0x60) = uVar2;
    *(undefined **)pGVar3 = &GodotCapsuleShape2D::vtable;
    break;
      case 4:
    pGVar3 = (GodotShape2D *)operator_new(0x70,"");
    *(undefined1 (*) [16])(pGVar3 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar3 + 0x40) = (undefined1  [16])0x0;
    uVar2 = _UNK_00114e88;
    uVar4 = __LC250;
    *(undefined8 *)(pGVar3 + 8) = 0;
    *(undefined8 *)(pGVar3 + 0x10) = 0;
    *(undefined8 *)(pGVar3 + 0x18) = 0;
    pGVar3[0x20] = (GodotShape2D)0x0;
    *(undefined4 *)(pGVar3 + 0x24) = 0;
    *(undefined8 *)(pGVar3 + 0x50) = 2;
    *(undefined8 *)(pGVar3 + 0x58) = uVar4;
    *(undefined8 *)(pGVar3 + 0x60) = uVar2;
    *(undefined **)pGVar3 = &GodotConvexPolygonShape2D::vtable;
    *(undefined8 *)(pGVar3 + 0x68) = 0;
    break;
      case 5:
    pGVar3 = (GodotShape2D *)operator_new(0x70,"");
    *(undefined1 (*) [16])(pGVar3 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar3 + 0x40) = (undefined1  [16])0x0;
    uVar2 = _UNK_00114e88;
    uVar4 = __LC250;
    *(undefined8 *)(pGVar3 + 8) = 0;
    *(undefined8 *)(pGVar3 + 0x10) = 0;
    *(undefined8 *)(pGVar3 + 0x18) = 0;
    pGVar3[0x20] = (GodotShape2D)0x0;
    *(undefined4 *)(pGVar3 + 0x24) = 0;
    *(undefined8 *)(pGVar3 + 0x50) = 2;
    *(undefined8 *)(pGVar3 + 0x58) = uVar4;
    *(undefined8 *)(pGVar3 + 0x60) = uVar2;
    *(code **)pGVar3 = GodotArea2D::GodotArea2D;
    *(undefined8 *)(pGVar3 + 0x68) = 0;
    break;
      case 6:
    pGVar3 = (GodotShape2D *)operator_new(0x78,"");
    *(undefined1 (*) [16])(pGVar3 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar3 + 0x40) = (undefined1  [16])0x0;
    uVar2 = _UNK_00114e88;
    uVar4 = __LC250;
    *(undefined8 *)(pGVar3 + 8) = 0;
    *(undefined8 *)(pGVar3 + 0x10) = 0;
    *(undefined8 *)(pGVar3 + 0x18) = 0;
    pGVar3[0x20] = (GodotShape2D)0x0;
    *(undefined4 *)(pGVar3 + 0x24) = 0;
    *(undefined8 *)(pGVar3 + 0x50) = 2;
    *(undefined8 *)(pGVar3 + 0x58) = uVar4;
    *(undefined8 *)(pGVar3 + 0x60) = uVar2;
    *(code **)pGVar3 = GodotSpace2D::GodotSpace2D;
    *(undefined8 *)(pGVar3 + 0x68) = 0;
    *(undefined4 *)(pGVar3 + 0x70) = 0;
    break;
      case 7:
    pGVar3 = (GodotShape2D *)operator_new(0xa0,"");
    *(undefined1 (*) [16])(pGVar3 + 0x30) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(pGVar3 + 0x40) = (undefined1  [16])0x0;
    uVar2 = _UNK_00114e88;
    uVar4 = __LC250;
    *(undefined8 *)(pGVar3 + 8) = 0;
    *(undefined8 *)(pGVar3 + 0x10) = 0;
    *(undefined8 *)(pGVar3 + 0x18) = 0;
    pGVar3[0x20] = (GodotShape2D)0x0;
    *(undefined4 *)(pGVar3 + 0x24) = 0;
    *(undefined8 *)(pGVar3 + 0x50) = 2;
    *(undefined8 *)(pGVar3 + 0x58) = uVar4;
    *(undefined8 *)(pGVar3 + 0x60) = uVar2;
    *(undefined **)pGVar3 = &GodotSeparationRayShape2D::vtable;
    *(undefined8 *)(pGVar3 + 0x70) = 0;
    *(undefined8 *)(pGVar3 + 0x80) = 0;
    *(undefined8 *)(pGVar3 + 0x90) = 0;
    *(undefined4 *)(pGVar3 + 0x98) = 0;
    break;
      case 8:
    _err_print_error("_shape_create","modules/godot_physics_2d/godot_physics_server_2d.cpp",0x48,
                     "Method/function failed. Returning: RID()",0,0);
    uVar4 = 0;
    goto LAB_0010bb37;
      default:
    local_28 = (GodotShape2D *)0x0;
    RID_Alloc<GodotShape2D*,true>::make_rid
              ((RID_Alloc<GodotShape2D*,true> *)(this + 0x1b8),&local_28);
    _DAT_00000008 = 0;
                    /* WARNING: Does not return */
    pcVar1 = (code *)invalidInstructionException();
    (*pcVar1)();
   }

   local_28 = pGVar3;
   uVar4 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar3 + 8 ) = uVar4;
   LAB_0010bb37:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::rectangle_shape_create() */void GodotPhysicsServer2D::rectangle_shape_create(GodotPhysicsServer2D *this) {
   undefined8 uVar1;
   GodotShape2D *pGVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar2 = (GodotShape2D*)operator_new(0x70, "");
   *(undefined1(*) [16])( pGVar2 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar2 + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00114e88;
   uVar3 = __LC250;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 8 ) ) = 0;
   }

   pGVar2[0x20] = (GodotShape2D)0x0;
   *(undefined4*)( pGVar2 + 0x24 ) = 0;
   *(undefined8*)( pGVar2 + 0x50 ) = 2;
   *(undefined8*)( pGVar2 + 0x58 ) = uVar3;
   *(undefined8*)( pGVar2 + 0x60 ) = uVar1;
   *(undefined**)pGVar2 = &GodotConvexPolygonShape2D::vtable;
   *(undefined8*)( pGVar2 + 0x68 ) = 0;
   local_28 = pGVar2;
   uVar3 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar2 + 8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::convex_polygon_shape_create() */void GodotPhysicsServer2D::convex_polygon_shape_create(GodotPhysicsServer2D *this) {
   undefined8 uVar1;
   GodotShape2D *pGVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar2 = (GodotShape2D*)operator_new(0x78, "");
   *(undefined1(*) [16])( pGVar2 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar2 + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00114e88;
   uVar3 = __LC250;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 8 ) ) = 0;
   }

   pGVar2[0x20] = (GodotShape2D)0x0;
   *(undefined4*)( pGVar2 + 0x24 ) = 0;
   *(undefined8*)( pGVar2 + 0x50 ) = 2;
   *(undefined8*)( pGVar2 + 0x58 ) = uVar3;
   *(undefined8*)( pGVar2 + 0x60 ) = uVar1;
   *(code**)pGVar2 = GodotSpace2D::GodotSpace2D;
   *(undefined8*)( pGVar2 + 0x68 ) = 0;
   *(undefined4*)( pGVar2 + 0x70 ) = 0;
   local_28 = pGVar2;
   uVar3 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar2 + 8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::capsule_shape_create() */void GodotPhysicsServer2D::capsule_shape_create(GodotPhysicsServer2D *this) {
   undefined8 uVar1;
   GodotShape2D *pGVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar2 = (GodotShape2D*)operator_new(0x70, "");
   *(undefined1(*) [16])( pGVar2 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar2 + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00114e88;
   uVar3 = __LC250;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 8 ) ) = 0;
   }

   pGVar2[0x20] = (GodotShape2D)0x0;
   *(undefined4*)( pGVar2 + 0x24 ) = 0;
   *(undefined8*)( pGVar2 + 0x50 ) = 2;
   *(undefined8*)( pGVar2 + 0x58 ) = uVar3;
   *(undefined8*)( pGVar2 + 0x60 ) = uVar1;
   *(code**)pGVar2 = GodotArea2D::GodotArea2D;
   *(undefined8*)( pGVar2 + 0x68 ) = 0;
   local_28 = pGVar2;
   uVar3 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar2 + 8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::concave_polygon_shape_create() */void GodotPhysicsServer2D::concave_polygon_shape_create(GodotPhysicsServer2D *this) {
   undefined8 uVar1;
   GodotShape2D *pGVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar2 = (GodotShape2D*)operator_new(0xa0, "");
   *(undefined1(*) [16])( pGVar2 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar2 + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00114e88;
   uVar3 = __LC250;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 8 ) ) = 0;
   }

   pGVar2[0x20] = (GodotShape2D)0x0;
   *(undefined4*)( pGVar2 + 0x24 ) = 0;
   *(undefined8*)( pGVar2 + 0x50 ) = 2;
   *(undefined8*)( pGVar2 + 0x58 ) = uVar3;
   *(undefined8*)( pGVar2 + 0x60 ) = uVar1;
   *(undefined**)pGVar2 = &GodotSeparationRayShape2D::vtable;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 16*i + 112 ) ) = 0;
   }

   *(undefined4*)( pGVar2 + 0x98 ) = 0;
   local_28 = pGVar2;
   uVar3 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar2 + 8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::world_boundary_shape_create() */void GodotPhysicsServer2D::world_boundary_shape_create(GodotPhysicsServer2D *this) {
   undefined8 uVar1;
   GodotShape2D *pGVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar2 = (GodotShape2D*)operator_new(0x78, "");
   *(undefined1(*) [16])( pGVar2 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar2 + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00114e88;
   uVar3 = __LC250;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 8 ) ) = 0;
   }

   pGVar2[0x20] = (GodotShape2D)0x0;
   *(undefined4*)( pGVar2 + 0x24 ) = 0;
   *(undefined8*)( pGVar2 + 0x50 ) = 2;
   *(undefined8*)( pGVar2 + 0x58 ) = uVar3;
   *(undefined8*)( pGVar2 + 0x60 ) = uVar1;
   *(undefined**)pGVar2 = &GodotSegmentShape2D::vtable;
   *(undefined8*)( pGVar2 + 0x68 ) = 0;
   *(undefined4*)( pGVar2 + 0x70 ) = 0;
   local_28 = pGVar2;
   uVar3 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar2 + 8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::circle_shape_create() */void GodotPhysicsServer2D::circle_shape_create(GodotPhysicsServer2D *this) {
   undefined8 uVar1;
   GodotShape2D *pGVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar2 = (GodotShape2D*)operator_new(0x70, "");
   *(undefined1(*) [16])( pGVar2 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar2 + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00114e88;
   uVar3 = __LC250;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 8 ) ) = 0;
   }

   pGVar2[0x20] = (GodotShape2D)0x0;
   *(undefined4*)( pGVar2 + 0x24 ) = 0;
   *(undefined8*)( pGVar2 + 0x50 ) = 2;
   *(undefined8*)( pGVar2 + 0x58 ) = uVar3;
   *(undefined8*)( pGVar2 + 0x60 ) = uVar1;
   *(undefined**)pGVar2 = &GodotCapsuleShape2D::vtable;
   local_28 = pGVar2;
   uVar3 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar2 + 8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::separation_ray_shape_create() */void GodotPhysicsServer2D::separation_ray_shape_create(GodotPhysicsServer2D *this) {
   undefined8 uVar1;
   GodotShape2D *pGVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar2 = (GodotShape2D*)operator_new(0x70, "");
   *(undefined1(*) [16])( pGVar2 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar2 + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00114e88;
   uVar3 = __LC250;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 8 ) ) = 0;
   }

   pGVar2[0x20] = (GodotShape2D)0x0;
   *(undefined4*)( pGVar2 + 0x24 ) = 0;
   *(undefined8*)( pGVar2 + 0x50 ) = 2;
   *(undefined8*)( pGVar2 + 0x58 ) = uVar3;
   *(undefined8*)( pGVar2 + 0x60 ) = uVar1;
   *(undefined**)pGVar2 = &GodotCircleShape2D::vtable;
   *(undefined4*)( pGVar2 + 0x68 ) = 0;
   pGVar2[0x6c] = (GodotShape2D)0x0;
   local_28 = pGVar2;
   uVar3 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar2 + 8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::segment_shape_create() */void GodotPhysicsServer2D::segment_shape_create(GodotPhysicsServer2D *this) {
   undefined8 uVar1;
   GodotShape2D *pGVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   GodotShape2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar2 = (GodotShape2D*)operator_new(0x80, "");
   *(undefined1(*) [16])( pGVar2 + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar2 + 0x40 ) = (undefined1[16])0x0;
   uVar1 = _UNK_00114e88;
   uVar3 = __LC250;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 8 ) ) = 0;
   }

   pGVar2[0x20] = (GodotShape2D)0x0;
   *(undefined4*)( pGVar2 + 0x24 ) = 0;
   *(undefined8*)( pGVar2 + 0x50 ) = 2;
   *(undefined8*)( pGVar2 + 0x58 ) = uVar3;
   *(undefined8*)( pGVar2 + 0x60 ) = uVar1;
   *(undefined**)pGVar2 = &GodotRectangleShape2D::vtable;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( pGVar2 + ( 8*i + 104 ) ) = 0;
   }

   local_28 = pGVar2;
   uVar3 = RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( this + 0x1b8 ), &local_28);
   *(undefined8*)( pGVar2 + 8 ) = uVar3;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::area_create() */void GodotPhysicsServer2D::area_create(GodotPhysicsServer2D *this) {
   GodotArea2D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotArea2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotArea2D*)operator_new(0x1c0, "");
   GodotArea2D::GodotArea2D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotArea2D*,true>::make_rid((RID_Alloc<GodotArea2D*,true>*)( this + 0x268 ), &local_28);
   *(undefined8*)( this_00 + 0x10 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::space_create() */undefined8 GodotPhysicsServer2D::space_create(GodotPhysicsServer2D *this) {
   int iVar1;
   long lVar2;
   GodotSpace2D *this_00;
   undefined8 uVar3;
   GodotArea2D *this_01;
   ulong uVar4;
   long *plVar5;
   long in_FS_OFFSET;
   GodotSpace2D *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotSpace2D*)operator_new(0x6110, "");
   GodotSpace2D::GodotSpace2D(this_00);
   local_38 = this_00;
   uVar3 = RID_Alloc<GodotSpace2D*,true>::make_rid((RID_Alloc<GodotSpace2D*,true>*)( this + 0x210 ), &local_38);
   *(undefined8*)( this_00 + 0x30 ) = uVar3;
   if (*(code**)( *(long*)this + 0x210 ) == area_create) {
      this_01 = (GodotArea2D*)operator_new(0x1c0, "");
      GodotArea2D::GodotArea2D(this_01);
      local_38 = (GodotSpace2D*)this_01;
      uVar4 = RID_Alloc<GodotArea2D*,true>::make_rid((RID_Alloc<GodotArea2D*,true>*)( this + 0x268 ), (GodotArea2D**)&local_38);
      *(ulong*)( this_01 + 0x10 ) = uVar4;
   }
 else {
      uVar4 = ( **(code**)( *(long*)this + 0x210 ) )(this);
   }

   if (( uVar4 != 0 ) && ( (uint)uVar4 < *(uint*)( this + 0x284 ) )) {
      plVar5 = (long*)( ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar5[1];
      if (iVar1 == (int)( uVar4 >> 0x20 )) {
         plVar5 = (long*)*plVar5;
         if (plVar5 != (long*)0x0) {
            lVar2 = *plVar5;
            *(long**)( this_00 + 0xb8 ) = plVar5;
            ( **(code**)( lVar2 + 0x28 ) )(plVar5, this_00);
            *(undefined4*)( plVar5 + 0x1a ) = 0xffffffff;
            goto LAB_0010c681;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar3 = 0;
   _err_print_error("space_create", "modules/godot_physics_2d/godot_physics_server_2d.cpp", 0xdf, "Parameter \"area\" is null.", 0, 0);
   LAB_0010c681:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* GodotPhysicsServer2D::body_create() */void GodotPhysicsServer2D::body_create(GodotPhysicsServer2D *this) {
   GodotBody2D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotBody2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotBody2D*)operator_new(0x230, "");
   GodotBody2D::GodotBody2D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotBody2D*,true>::make_rid((RID_Alloc<GodotBody2D*,true>*)( this + 0x2c0 ), &local_28);
   *(undefined8*)( this_00 + 0x10 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer2D::joint_create() */void GodotPhysicsServer2D::joint_create(GodotPhysicsServer2D *this) {
   GodotJoint2D *pGVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   GodotJoint2D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar1 = (GodotJoint2D*)operator_new(0x40, "");
   *(undefined8*)( pGVar1 + 0x18 ) = 0;
   pGVar1[0x20] = (GodotJoint2D)0x1;
   *(undefined8*)( pGVar1 + 0x28 ) = 0;
   *(undefined8*)( pGVar1 + 8 ) = 0;
   *(undefined4*)( pGVar1 + 0x10 ) = 0;
   *(undefined***)pGVar1 = &PTR_setup_00114590;
   uVar2 = _LC185;
   *(undefined4*)( pGVar1 + 0x38 ) = 0x7f7fffee;
   *(undefined8*)( pGVar1 + 0x30 ) = uVar2;
   *(undefined2*)( pGVar1 + 0x3c ) = 0;
   local_28 = pGVar1;
   uVar2 = RID_Alloc<GodotJoint2D*,true>::make_rid((RID_Alloc<GodotJoint2D*,true>*)( this + 0x318 ), &local_28);
   *(undefined8*)( pGVar1 + 0x28 ) = uVar2;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* GodotJoint2D::setup(float) */undefined8 GodotJoint2D::setup(float param_1) {
   return 0;
}
/* GodotJoint2D::pre_solve(float) */undefined8 GodotJoint2D::pre_solve(float param_1) {
   return 0;
}
/* GodotJoint2D::solve(float) */void GodotJoint2D::solve(float param_1) {
   return;
}
/* GodotJoint2D::get_type() const */undefined8 GodotJoint2D::get_type(void) {
   return 3;
}
/* GodotPhysicsServer2D::is_class_ptr(void*) const */uint GodotPhysicsServer2D::is_class_ptr(GodotPhysicsServer2D *this, void *param_1) {
   return (uint)CONCAT71(0x114c, (undefined4*)param_1 == &PhysicsServer2D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x114c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x114c, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GodotPhysicsServer2D::_getv(StringName const&, Variant&) const */undefined8 GodotPhysicsServer2D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsServer2D::_setv(StringName const&, Variant const&) */undefined8 GodotPhysicsServer2D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsServer2D::_validate_propertyv(PropertyInfo&) const */void GodotPhysicsServer2D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GodotPhysicsServer2D::_property_can_revertv(StringName const&) const */undefined8 GodotPhysicsServer2D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GodotPhysicsServer2D::_property_get_revertv(StringName const&, Variant&) const */undefined8 GodotPhysicsServer2D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsServer2D::_notificationv(int, bool) */void GodotPhysicsServer2D::_notificationv(int param_1, bool param_2) {
   return;
}
/* GodotPhysicsServer2D::is_flushing_queries() const */GodotPhysicsServer2D GodotPhysicsServer2D::is_flushing_queries(GodotPhysicsServer2D *this) {
   return this[0x181];
}
/* CowData<GodotCollisionObject2D::Shape>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GodotCollisionObject2D::Shape>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::area_attach_canvas_instance_id(RID, ObjectID) [clone .cold] */void GodotPhysicsServer2D::area_attach_canvas_instance_id(void) {
   code *pcVar1;
   int in_EAX;
   undefined8 in_RCX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::area_attach_object_instance_id(RID, ObjectID) [clone .cold] */void GodotPhysicsServer2D::area_attach_object_instance_id(void) {
   code *pcVar1;
   int in_EAX;
   undefined8 in_RCX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::area_get_object_instance_id(RID) const [clone .cold] */void GodotPhysicsServer2D::area_get_object_instance_id(void) {
   code *pcVar1;
   int in_EAX;
   undefined8 in_RCX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::area_get_canvas_instance_id(RID) const [clone .cold] */void GodotPhysicsServer2D::area_get_canvas_instance_id(void) {
   code *pcVar1;
   int in_EAX;
   undefined8 in_RCX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::area_set_param(RID, PhysicsServer2D::AreaParameter, Variant const&) [clone
   .cold] */void GodotPhysicsServer2D::area_set_param(void) {
   code *pcVar1;
   int in_EAX;
   undefined8 in_RCX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::area_get_param(RID, PhysicsServer2D::AreaParameter) const [clone .cold] */void GodotPhysicsServer2D::area_get_param(void) {
   code *pcVar1;
   int in_EAX;
   undefined8 in_RCX;
   if (in_EAX + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, in_RCX);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::free(RID) [clone .cold] */void GodotPhysicsServer2D::free(void) {
   code *pcVar1;
   int unaff_R15D;
   if (unaff_R15D + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::space_set_debug_contacts(RID, int) [clone .cold] */void GodotPhysicsServer2D::space_set_debug_contacts(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010e156(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::body_set_max_contacts_reported(RID, int) [clone .cold] */void GodotPhysicsServer2D::body_set_max_contacts_reported(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010e16c(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer2D::_shape_create(PhysicsServer2D::ShapeType) [clone .cold] */void GodotPhysicsServer2D::_shape_create(long param_1) {
   code *pcVar1;
   RID_Alloc<GodotShape2D*,true>::make_rid((RID_Alloc<GodotShape2D*,true>*)( param_1 + 0x1b8 ), (GodotShape2D**)&stack0x00000000);
   _DAT_00000008 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer2D::_get_class_namev() const */undefined8 *GodotPhysicsServer2D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010e1e3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010e1e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GodotPhysicsServer2D");
         goto LAB_0010e24e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GodotPhysicsServer2D");
   LAB_0010e24e:return &_get_class_namev();
}
/* GodotJoint2D::~GodotJoint2D() */void GodotJoint2D::~GodotJoint2D(GodotJoint2D *this) {
   long lVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   *(undefined***)this = &PTR_setup_00114590;
   if (*(int*)( this + 0x10 ) < 1) {
      return;
   }

   lVar6 = 0;
   do {
      lVar1 = *(long*)( *(long*)( this + 8 ) + lVar6 * 8 );
      if (( lVar1 != 0 ) && ( plVar2 = *(long**)( lVar1 + 0x1d8 ) ),plVar2 != (long*)0x0) {
         for (plVar3 = (long*)*plVar2; plVar3 != (long*)0x0; plVar3 = (long*)plVar3[2]) {
            if (( this == (GodotJoint2D*)*plVar3 ) && ( (int)plVar3[1] == (int)lVar6 )) {
               if (plVar2 == (long*)plVar3[4]) {
                  lVar5 = plVar3[2];
                  if ((long*)*plVar2 == plVar3) {
                     *plVar2 = lVar5;
                  }

                  lVar4 = plVar3[3];
                  if ((long*)plVar2[1] == plVar3) {
                     plVar2[1] = lVar4;
                  }

                  if (lVar4 != 0) {
                     *(long*)( lVar4 + 0x10 ) = lVar5;
                     lVar5 = plVar3[2];
                  }

                  if (lVar5 != 0) {
                     *(long*)( lVar5 + 0x18 ) = lVar4;
                  }

                  Memory::free_static(plVar3, false);
                  *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }

               if (*(int*)( (long)*(void**)( lVar1 + 0x1d8 ) + 0x10 ) == 0) {
                  Memory::free_static(*(void**)( lVar1 + 0x1d8 ), false);
                  *(undefined8*)( lVar1 + 0x1d8 ) = 0;
               }

               break;
            }

         }

      }

      lVar6 = lVar6 + 1;
      if (*(int*)( this + 0x10 ) <= (int)lVar6) {
         return;
      }

   }
 while ( true );
}
/* GodotJoint2D::~GodotJoint2D() */void GodotJoint2D::~GodotJoint2D(GodotJoint2D *this) {
   ~GodotJoint2D(this)
   ;;
   operator_delete(this, 0x40);
   return;
}
/* GodotPhysicsServer2D::get_class() const */void GodotPhysicsServer2D::get_class(void) {
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
/* GodotPhysicsServer2D::_initialize_classv() */void GodotPhysicsServer2D::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_0010e624;
   if (PhysicsServer2D::initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "PhysicsServer2D";
      local_60 = 0;
      local_40 = 0xf;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
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

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_58;
      if (local_58 == 0) {
         LAB_0010e72e:if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            LAB_0010e73e:PhysicsServer2D::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010e72e;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_0010e73e;
      }

      PhysicsServer2D::initialize_class() {
         StringName::unref();
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

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
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

      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* GodotPhysicsServer2D::is_class(String const&) const */
   undefined8 GodotPhysicsServer2D::is_class(GodotPhysicsServer2D *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_0010e81f;
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

         LAB_0010e81f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010e8d3;
      }

      cVar6 = String::operator ==(param_1, "GodotPhysicsServer2D");
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
                        if (lVar5 == 0) goto LAB_0010e9ab;
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

            LAB_0010e9ab:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0010e8d3;
         }

         cVar6 = String::operator ==(param_1, "PhysicsServer2D");
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
                           if (lVar5 == 0) goto LAB_0010ea8b;
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

               LAB_0010ea8b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

               if (cVar6 != '\0') goto LAB_0010e8d3;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = String::operator ==(param_1, "Object");
               return uVar7;
            }

            goto LAB_0010eb34;
         }

      }

      LAB_0010e8d3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_0010eb34:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* PhysicsServer2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void PhysicsServer2D::_get_property_listv(List *param_1, bool param_2) {
      long *plVar1;
      long lVar2;
      long lVar3;
      undefined1(*pauVar4)[16];
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
      pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_88 = 0;
      local_90 = 0;
      local_78 = "PhysicsServer2D";
      local_70 = 0xf;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "PhysicsServer2D";
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
         LAB_0010eca8:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010eca8;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar6;
            local_68 = local_80;
            goto joined_r0x0010ecc6;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)pLVar6;
      joined_r0x0010ecc6:if (lVar2 == 0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])pLVar6 = pauVar4;
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
      plVar1 = *(long**)pLVar6;
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

      StringName::StringName((StringName*)&local_78, "PhysicsServer2D", false);
      ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* GodotPhysicsServer2D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void GodotPhysicsServer2D::_get_property_listv(GodotPhysicsServer2D *this, List *param_1, bool param_2) {
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
         PhysicsServer2D::_get_property_listv((List*)this, SUB81(param_1, 0));
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "GodotPhysicsServer2D";
      local_70 = 0x14;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "GodotPhysicsServer2D";
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
         LAB_0010f0a8:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_0010f0a8;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x0010f0c5;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x0010f0c5:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "GodotPhysicsServer2D", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            PhysicsServer2D::_get_property_listv((List*)this, SUB81(param_1, 0));
            return;
         }

      }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashSet<GodotSpace2D*, HashMapHasherDefault, HashMapComparatorDefault<GodotSpace2D*>
   >::insert(GodotSpace2D* const&) */
   undefined1[16];
   HashSet<GodotSpace2D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace2D*>>::insert(GodotSpace2D **param_1) {
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
      GodotSpace2D *local_88;
      ulong local_70;
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
      local_88 = (GodotSpace2D*)*in_RSI;
      if (local_88 == (GodotSpace2D*)0x0) {
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
         uVar32 = *(uint*)( in_RSI + 4 );
         lVar34 = *in_RDX;
         local_88 = (GodotSpace2D*)*in_RSI;
         if (local_88 != (GodotSpace2D*)0x0) goto LAB_0010f47f;
      }
 else {
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         lVar34 = *in_RDX;
         LAB_0010f47f:if (uVar44 != 0) {
            uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
            lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
            uVar33 = lVar34 * 0x3ffff - 1;
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
                     if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_0010f921;
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

      if ((float)uVar31 * __LC209 < (float)( uVar44 + 1 )) {
         if (uVar32 == 0x1c) {
            uStack_98 = 0;
            _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
            uVar44 = *(uint*)( (long)in_RSI + 0x24 );
            uVar37 = 0xffffffff;
            local_88 = (GodotSpace2D*)*in_RSI;
            goto LAB_0010f921;
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
         local_88 = (GodotSpace2D*)*in_RSI;
         lVar34 = *in_RDX;
      }

      uVar42 = (ulong)uVar44;
      lVar3 = in_RSI[3];
      *(long*)( local_88 + uVar42 * 8 ) = lVar34;
      uVar33 = lVar34 * 0x3ffff - 1;
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
      lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar43 * lVar36;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      lVar34 = SUB168(auVar15 * auVar27, 8) * 4;
      iVar35 = SUB164(auVar15 * auVar27, 8);
      lVar2 = in_RSI[2];
      puVar1 = (uint*)( lVar3 + lVar34 );
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
         auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar36;
         auVar29._8_8_ = 0;
         auVar29._0_8_ = uVar40;
         uVar32 = SUB164(auVar17 * auVar29, 8);
         if (uVar32 < uVar37) {
            *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
            uVar44 = *puVar1;
            *puVar1 = (uint)uVar43;
            uVar39 = *(uint*)( lVar34 + uVar33 );
            uVar43 = (ulong)uVar44;
            *(uint*)( lVar34 + uVar33 ) = (uint)uVar38;
            uVar42 = (ulong)uVar39;
            uVar38 = uVar42;
            uVar37 = uVar32;
         }

         uVar44 = (uint)uVar38;
         uVar39 = (uint)uVar43;
         uVar37 = uVar37 + 1;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
         auVar30._8_8_ = 0;
         auVar30._0_8_ = uVar40;
         uStack_98 = SUB168(auVar18 * auVar30, 8);
         lVar34 = uStack_98 * 4;
         iVar35 = SUB164(auVar18 * auVar30, 8);
         puVar1 = (uint*)( lVar3 + lVar34 );
         uVar32 = *puVar1;
      }
;
      *puVar1 = uVar39;
      *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
      *(uint*)( uVar33 + lVar34 ) = uVar44;
      uVar37 = *(uint*)( (long)in_RSI + 0x24 );
      uVar44 = uVar37 + 1;
      *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
      LAB_0010f921:*(uint*)( (long)param_1 + 0xc ) = uVar37;
      *param_1 = local_88;
      *(uint*)( param_1 + 1 ) = uVar44;
      auVar45._8_8_ = uStack_98;
      auVar45._0_8_ = param_1;
      return auVar45;
   }

   /* WARNING: Removing unreachable block (ram,0x0010fc10) */
   /* WARNING: Removing unreachable block (ram,0x0010fd40) */
   /* WARNING: Removing unreachable block (ram,0x0010feb9) */
   /* WARNING: Removing unreachable block (ram,0x0010fd4c) */
   /* WARNING: Removing unreachable block (ram,0x0010fd56) */
   /* WARNING: Removing unreachable block (ram,0x0010fe9b) */
   /* WARNING: Removing unreachable block (ram,0x0010fd62) */
   /* WARNING: Removing unreachable block (ram,0x0010fd6c) */
   /* WARNING: Removing unreachable block (ram,0x0010fe7d) */
   /* WARNING: Removing unreachable block (ram,0x0010fd78) */
   /* WARNING: Removing unreachable block (ram,0x0010fd82) */
   /* WARNING: Removing unreachable block (ram,0x0010fe5f) */
   /* WARNING: Removing unreachable block (ram,0x0010fd8e) */
   /* WARNING: Removing unreachable block (ram,0x0010fd98) */
   /* WARNING: Removing unreachable block (ram,0x0010fe41) */
   /* WARNING: Removing unreachable block (ram,0x0010fda4) */
   /* WARNING: Removing unreachable block (ram,0x0010fdae) */
   /* WARNING: Removing unreachable block (ram,0x0010fe23) */
   /* WARNING: Removing unreachable block (ram,0x0010fdb6) */
   /* WARNING: Removing unreachable block (ram,0x0010fdc0) */
   /* WARNING: Removing unreachable block (ram,0x0010fe08) */
   /* WARNING: Removing unreachable block (ram,0x0010fdc8) */
   /* WARNING: Removing unreachable block (ram,0x0010fdde) */
   /* WARNING: Removing unreachable block (ram,0x0010fdea) */
   /* String vformat<unsigned int, char const*>(String const&, unsigned int const, char const* const)
    */
   String *vformat<unsigned_int,char_const*>(String *param_1, uint param_2, char *param_3) {
      Variant *pVVar1;
      Variant *pVVar2;
      char *in_RCX;
      undefined4 in_register_00000034;
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
      Variant::Variant(local_88, (uint)param_3);
      Variant::Variant(local_70, in_RCX);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      Array::Array(local_d8);
      iVar3 = (int)local_d8;
      Array::resize(iVar3);
      pVVar2 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar2, local_88);
      pVVar2 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar2, local_70);
      String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
      *(undefined8*)param_1 = local_d0[0];
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

   /* RID_Alloc<GodotShape2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotShape2D*,true>::~RID_Alloc(RID_Alloc<GodotShape2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_001145d0;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) == (void*)0x0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

      }
 else {
         Memory::free_static(*(void**)( this + 8 ), false);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(*(void**)( this + 0x10 ), false);
            return;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RID_Alloc<GodotSpace2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSpace2D*,true>::~RID_Alloc(RID_Alloc<GodotSpace2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_001145f0;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) == (void*)0x0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

      }
 else {
         Memory::free_static(*(void**)( this + 8 ), false);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(*(void**)( this + 0x10 ), false);
            return;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RID_Alloc<GodotArea2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotArea2D*,true>::~RID_Alloc(RID_Alloc<GodotArea2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_00114610;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) == (void*)0x0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

      }
 else {
         Memory::free_static(*(void**)( this + 8 ), false);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(*(void**)( this + 0x10 ), false);
            return;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RID_Alloc<GodotBody2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotBody2D*,true>::~RID_Alloc(RID_Alloc<GodotBody2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_00114630;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) == (void*)0x0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

      }
 else {
         Memory::free_static(*(void**)( this + 8 ), false);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(*(void**)( this + 0x10 ), false);
            return;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RID_Alloc<GodotJoint2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotJoint2D*,true>::~RID_Alloc(RID_Alloc<GodotJoint2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_00114650;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) == (void*)0x0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

      }
 else {
         Memory::free_static(*(void**)( this + 8 ), false);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(*(void**)( this + 0x10 ), false);
            return;
         }

      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RID_Alloc<GodotShape2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotShape2D*,true>::~RID_Alloc(RID_Alloc<GodotShape2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_001145d0;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 8 ), false);
         Memory::free_static(*(void**)( this + 0x10 ), false);
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      operator_delete(this, 0x58);
      return;
   }

   /* RID_Alloc<GodotSpace2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSpace2D*,true>::~RID_Alloc(RID_Alloc<GodotSpace2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_001145f0;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 8 ), false);
         Memory::free_static(*(void**)( this + 0x10 ), false);
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      operator_delete(this, 0x58);
      return;
   }

   /* RID_Alloc<GodotJoint2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotJoint2D*,true>::~RID_Alloc(RID_Alloc<GodotJoint2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_00114650;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 8 ), false);
         Memory::free_static(*(void**)( this + 0x10 ), false);
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      operator_delete(this, 0x58);
      return;
   }

   /* RID_Alloc<GodotArea2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotArea2D*,true>::~RID_Alloc(RID_Alloc<GodotArea2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_00114610;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 8 ), false);
         Memory::free_static(*(void**)( this + 0x10 ), false);
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      operator_delete(this, 0x58);
      return;
   }

   /* RID_Alloc<GodotBody2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotBody2D*,true>::~RID_Alloc(RID_Alloc<GodotBody2D*,true> *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      char *pcVar5;
      long lVar6;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__RID_Alloc_00114630;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar5 = local_48;
         lVar6 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
               lVar6 = local_50;
            }

         }

         local_50 = lVar6;
         if (lVar6 != 0) {
            LOCK();
            plVar1 = (long*)( lVar6 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1c );
      uVar4 = *(uint*)( this + 0x18 );
      if (uVar4 <= uVar3) {
         lVar6 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 8 ) + lVar6 * 8 ), false);
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x10 ) + lVar2 ), false);
         }
 while ( (uint)lVar6 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 8 ), false);
         Memory::free_static(*(void**)( this + 0x10 ), false);
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      operator_delete(this, 0x58);
      return;
   }

   /* GodotPhysicsServer2D::~GodotPhysicsServer2D() */
   void GodotPhysicsServer2D::~GodotPhysicsServer2D(GodotPhysicsServer2D *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      void *pvVar5;
      char *pcVar6;
      long lVar7;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__initialize_classv_00114670;
      *(undefined***)( this + 0x318 ) = &PTR__RID_Alloc_00114650;
      uVar3 = *(uint*)( this + 0x338 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x334 );
      uVar4 = *(uint*)( this + 0x330 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 800 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x328 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 800 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 800 ), false);
         Memory::free_static(*(void**)( this + 0x328 ), false);
      }

      *(undefined***)( this + 0x2c0 ) = &PTR__RID_Alloc_00114630;
      uVar3 = *(uint*)( this + 0x2e0 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x2dc );
      uVar4 = *(uint*)( this + 0x2d8 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x2c8 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x2d0 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x2c8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x2c8 ), false);
         Memory::free_static(*(void**)( this + 0x2d0 ), false);
      }

      *(undefined***)( this + 0x268 ) = &PTR__RID_Alloc_00114610;
      uVar3 = *(uint*)( this + 0x288 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x284 );
      uVar4 = *(uint*)( this + 0x280 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x270 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x278 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x270 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x270 ), false);
         Memory::free_static(*(void**)( this + 0x278 ), false);
      }

      *(undefined***)( this + 0x210 ) = &PTR__RID_Alloc_001145f0;
      uVar3 = *(uint*)( this + 0x230 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x22c );
      uVar4 = *(uint*)( this + 0x228 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x218 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x220 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x218 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x218 ), false);
         Memory::free_static(*(void**)( this + 0x220 ), false);
      }

      *(undefined***)( this + 0x1b8 ) = &PTR__RID_Alloc_001145d0;
      uVar3 = *(uint*)( this + 0x1d8 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1d4 );
      uVar4 = *(uint*)( this + 0x1d0 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x1c0 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x1c8 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x1c0 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x1c0 ), false);
         Memory::free_static(*(void**)( this + 0x1c8 ), false);
      }

      pvVar5 = *(void**)( this + 400 );
      if (pvVar5 != (void*)0x0) {
         if (*(int*)( this + 0x1b4 ) != 0) {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b0 ) * 4 ) != 0) {
               memset(*(void**)( this + 0x1a8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b0 ) * 4 ) * 4);
            }

            *(undefined4*)( this + 0x1b4 ) = 0;
         }

         Memory::free_static(pvVar5, false);
         Memory::free_static(*(void**)( this + 0x1a0 ), false);
         Memory::free_static(*(void**)( this + 0x198 ), false);
         Memory::free_static(*(void**)( this + 0x1a8 ), false);
      }

      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      PhysicsServer2D::~PhysicsServer2D((PhysicsServer2D*)this);
      return;
   }

   /* GodotPhysicsServer2D::~GodotPhysicsServer2D() */
   void GodotPhysicsServer2D::~GodotPhysicsServer2D(GodotPhysicsServer2D *this) {
      long *plVar1;
      long lVar2;
      uint uVar3;
      uint uVar4;
      void *pvVar5;
      char *pcVar6;
      long lVar7;
      long in_FS_OFFSET;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      *(undefined***)this = &PTR__initialize_classv_00114670;
      *(undefined***)( this + 0x318 ) = &PTR__RID_Alloc_00114650;
      uVar3 = *(uint*)( this + 0x338 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x334 );
      uVar4 = *(uint*)( this + 0x330 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 800 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x328 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 800 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 800 ), false);
         Memory::free_static(*(void**)( this + 0x328 ), false);
      }

      *(undefined***)( this + 0x2c0 ) = &PTR__RID_Alloc_00114630;
      uVar3 = *(uint*)( this + 0x2e0 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x2dc );
      uVar4 = *(uint*)( this + 0x2d8 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x2c8 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x2d0 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x2c8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x2c8 ), false);
         Memory::free_static(*(void**)( this + 0x2d0 ), false);
      }

      *(undefined***)( this + 0x268 ) = &PTR__RID_Alloc_00114610;
      uVar3 = *(uint*)( this + 0x288 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x284 );
      uVar4 = *(uint*)( this + 0x280 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x270 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x278 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x270 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x270 ), false);
         Memory::free_static(*(void**)( this + 0x278 ), false);
      }

      *(undefined***)( this + 0x210 ) = &PTR__RID_Alloc_001145f0;
      uVar3 = *(uint*)( this + 0x230 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x22c );
      uVar4 = *(uint*)( this + 0x228 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x218 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x220 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x218 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x218 ), false);
         Memory::free_static(*(void**)( this + 0x220 ), false);
      }

      *(undefined***)( this + 0x1b8 ) = &PTR__RID_Alloc_001145d0;
      uVar3 = *(uint*)( this + 0x1d8 );
      if (uVar3 != 0) {
         local_50 = 0;
         local_40 = 0x3b;
         local_48 = "ERROR: %d RID allocations of type \'%s\' were leaked at exit.";
         String::parse_latin1((StrRange*)&local_50);
         vformat<unsigned_int,char_const*>((String*)&local_48, (uint)(StrRange*)&local_50, (char*)(ulong)uVar3);
         print_error((String*)&local_48);
         pcVar6 = local_48;
         lVar7 = local_50;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
               lVar7 = local_50;
            }

         }

         local_50 = lVar7;
         if (lVar7 != 0) {
            LOCK();
            plVar1 = (long*)( lVar7 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }

      uVar3 = *(uint*)( this + 0x1d4 );
      uVar4 = *(uint*)( this + 0x1d0 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x1c0 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x1c8 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x1c0 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x1c0 ), false);
         Memory::free_static(*(void**)( this + 0x1c8 ), false);
      }

      pvVar5 = *(void**)( this + 400 );
      if (pvVar5 != (void*)0x0) {
         if (*(int*)( this + 0x1b4 ) != 0) {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b0 ) * 4 ) != 0) {
               memset(*(void**)( this + 0x1a8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1b0 ) * 4 ) * 4);
            }

            *(undefined4*)( this + 0x1b4 ) = 0;
         }

         Memory::free_static(pvVar5, false);
         Memory::free_static(*(void**)( this + 0x1a0 ), false);
         Memory::free_static(*(void**)( this + 0x198 ), false);
         Memory::free_static(*(void**)( this + 0x1a8 ), false);
      }

      PhysicsServer2D::~PhysicsServer2D((PhysicsServer2D*)this);
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      operator_delete(this, 0x380);
      return;
   }

   /* CowData<Vector2>::_realloc(long) */
   undefined8 CowData<Vector2>::_realloc(CowData<Vector2> *this, long param_1) {
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

   /* CowData<RID>::_realloc(long) */
   undefined8 CowData<RID>::_realloc(CowData<RID> *this, long param_1) {
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Error CowData<RID>::resize<false>(long) */
   undefined8 CowData<RID>::resize<false>(CowData<RID> *this, long param_1) {
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
         LAB_001123b0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
      if (lVar7 == 0) goto LAB_001123b0;
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
         LAB_0011231c:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar3 = puVar9[-1];
         if (param_1 <= lVar3) goto LAB_001122b1;
      }
 else {
         if (lVar8 != 0) {
            uVar6 = _realloc(this, lVar7);
            if ((int)uVar6 != 0) {
               return uVar6;
            }

            goto LAB_0011231c;
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
      LAB_001122b1:puVar9[-1] = param_1;
      return 0;
   }

   /* VSet<RID>::insert(RID const&) */
   void VSet<RID>::insert(VSet<RID> *this, RID *param_1) {
      int iVar1;
      code *pcVar2;
      byte bVar3;
      int iVar4;
      int iVar5;
      ulong *puVar6;
      ulong uVar7;
      int iVar8;
      long lVar9;
      long lVar10;
      ulong uVar11;
      puVar6 = *(ulong**)( this + 8 );
      if (puVar6 == (ulong*)0x0) {
         uVar11 = *(ulong*)param_1;
         iVar4 = CowData<RID>::resize<false>((CowData<RID>*)( this + 8 ), 1);
         if (iVar4 != 0) goto LAB_001126b0;
         iVar4 = 0;
         CowData<RID>::_copy_on_write((CowData<RID>*)( this + 8 ));
         lVar9 = *(long*)( this + 8 );
         goto LAB_00112585;
      }

      uVar11 = puVar6[-1];
      iVar5 = (int)uVar11 + -1;
      if ((long)uVar11 < 1) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, uVar11, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      if (iVar5 < 0) {
         _err_print_error("_find", "./core/templates/vset.h", 0x36, "low > high, this may be a bug", 0, 0);
         uVar7 = *puVar6;
         uVar11 = *(ulong*)param_1;
         puVar6 = *(ulong**)( this + 8 );
         if (uVar7 < uVar11) {
            if (puVar6 == (ulong*)0x0) {
               lVar9 = 1;
               lVar10 = 1;
               goto LAB_00112602;
            }

            bVar3 = 0;
            iVar4 = 1;
            lVar10 = 1;
            goto LAB_00112532;
         }

         if (puVar6 != (ulong*)0x0) {
            bVar3 = 0;
            iVar4 = 0;
            lVar10 = 0;
            goto LAB_00112532;
         }

         lVar9 = 1;
         iVar4 = 0;
         uVar7 = 0;
         lVar10 = 0;
      }
 else {
         uVar11 = *(ulong*)param_1;
         iVar8 = 0;
         do {
            while (true) {
               iVar1 = iVar8 + iVar5;
               iVar4 = iVar1 / 2;
               lVar10 = (long)iVar4;
               uVar7 = puVar6[lVar10];
               if (uVar11 < uVar7) break;
               if (uVar11 <= uVar7) {
                  return;
               }

               iVar8 = iVar4 + 1;
               if (iVar5 < iVar8) goto LAB_00112517;
            }
;
            iVar5 = iVar4 + -1;
         }
 while ( iVar8 <= iVar5 );
         LAB_00112517:if (uVar7 < uVar11) {
            iVar4 = iVar4 + 1;
            lVar10 = (long)iVar4;
            bVar3 = ( byte )(iVar4 >> 0x1f) >> 7;
         }
 else {
            bVar3 = ( byte )(iVar1 - ( iVar1 >> 0x1f ) >> 7) >> 7;
         }

         LAB_00112532:uVar7 = puVar6[-1];
         lVar9 = uVar7 + 1;
         if (( lVar9 <= lVar10 ) || ( bVar3 != 0 )) {
            LAB_00112602:_err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, lVar10, lVar9, "p_pos", "new_size", "", false, false);
            return;
         }

      }

      iVar5 = CowData<RID>::resize<false>((CowData<RID>*)( this + 8 ), lVar9);
      if (iVar5 != 0) {
         LAB_001126b0:_err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
         return;
      }

      CowData<RID>::_copy_on_write((CowData<RID>*)( this + 8 ));
      lVar9 = *(long*)( this + 8 );
      if (lVar10 < (long)uVar7) {
         memmove((void*)( lVar9 + 8 + lVar10 * 8 ), (void*)( lVar9 + lVar10 * 8 ), ( uVar7 - lVar10 ) * 8);
      }

      LAB_00112585:*(ulong*)( lVar9 + (long)iVar4 * 8 ) = uVar11;
      return;
   }

   /* CowData<GodotBody2D::Contact>::_realloc(long) */
   undefined8 CowData<GodotBody2D::Contact>::_realloc(CowData<GodotBody2D::Contact> *this, long param_1) {
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

   /* WARNING: Removing unreachable block (ram,0x001128c8) */
   /* WARNING: Removing unreachable block (ram,0x001129f8) */
   /* WARNING: Removing unreachable block (ram,0x00112bc0) */
   /* WARNING: Removing unreachable block (ram,0x00112a04) */
   /* WARNING: Removing unreachable block (ram,0x00112a0e) */
   /* WARNING: Removing unreachable block (ram,0x00112ba0) */
   /* WARNING: Removing unreachable block (ram,0x00112a1a) */
   /* WARNING: Removing unreachable block (ram,0x00112a24) */
   /* WARNING: Removing unreachable block (ram,0x00112b80) */
   /* WARNING: Removing unreachable block (ram,0x00112a30) */
   /* WARNING: Removing unreachable block (ram,0x00112a3a) */
   /* WARNING: Removing unreachable block (ram,0x00112b60) */
   /* WARNING: Removing unreachable block (ram,0x00112a46) */
   /* WARNING: Removing unreachable block (ram,0x00112a50) */
   /* WARNING: Removing unreachable block (ram,0x00112b40) */
   /* WARNING: Removing unreachable block (ram,0x00112a5c) */
   /* WARNING: Removing unreachable block (ram,0x00112a66) */
   /* WARNING: Removing unreachable block (ram,0x00112b20) */
   /* WARNING: Removing unreachable block (ram,0x00112a72) */
   /* WARNING: Removing unreachable block (ram,0x00112a7c) */
   /* WARNING: Removing unreachable block (ram,0x00112b00) */
   /* WARNING: Removing unreachable block (ram,0x00112a84) */
   /* WARNING: Removing unreachable block (ram,0x00112a9a) */
   /* WARNING: Removing unreachable block (ram,0x00112aa6) */
   /* String vformat<String>(String const&, String const) */
   undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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

   /* RID_Alloc<GodotSpace2D*, true>::make_rid(GodotSpace2D* const&) */
   ulong RID_Alloc<GodotSpace2D*,true>::make_rid(RID_Alloc<GodotSpace2D*,true> *this, GodotSpace2D **param_1) {
      pthread_mutex_t *__mutex;
      long *plVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      int iVar6;
      uint uVar7;
      undefined8 uVar8;
      long lVar9;
      uint uVar10;
      uint uVar11;
      undefined8 *puVar12;
      char *pcVar13;
      ulong uVar14;
      ulong uVar15;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      __mutex = (pthread_mutex_t*)( this + 0x30 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar6 = pthread_mutex_lock(__mutex);
      if (iVar6 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar6);
      }

      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == *(uint*)( this + 0x1c )) {
         if (uVar7 != 0) {
            uVar7 = uVar7 / *(uint*)( this + 0x18 );
         }

         if (*(uint*)( this + 0x24 ) != uVar7) {
            lVar3 = *(long*)( this + 8 );
            uVar14 = (ulong)uVar7;
            uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 4, false);
            uVar7 = *(uint*)( this + 0x18 );
            lVar4 = *(long*)( this + 0x10 );
            *(undefined8*)( lVar3 + uVar14 * 8 ) = uVar8;
            uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
            uVar7 = *(uint*)( this + 0x18 );
            *(undefined8*)( uVar14 * 8 + lVar4 ) = uVar8;
            if (uVar7 != 0) {
               lVar3 = *(long*)( *(long*)( this + 8 ) + uVar14 * 8 );
               lVar4 = *(long*)( *(long*)( this + 0x10 ) + uVar14 * 8 );
               lVar9 = 0;
               do {
                  *(undefined4*)( lVar3 + 8 + lVar9 * 0x10 ) = 0xffffffff;
                  *(int*)( lVar4 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
                  uVar7 = *(uint*)( this + 0x18 );
                  lVar9 = lVar9 + 1;
               }
 while ( (uint)lVar9 < uVar7 );
            }

            *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
            uVar7 = *(uint*)( this + 0x20 );
            goto LAB_00112e1b;
         }

         pthread_mutex_unlock(__mutex);
         pcVar13 = *(char**)( this + 0x28 );
         if (pcVar13 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(pcVar13);
            local_58 = pcVar13;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
            pcVar13 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar13 + -0x10, false);
               }

            }

            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

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

         }

         LAB_00113000:uVar15 = 0;
      }
 else {
         LAB_00112e1b:uVar2 = *(uint*)( this + 0x18 );
         uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
         uVar14 = (ulong)uVar7;
         LOCK();
         UNLOCK();
         uVar10 = (int)RID_AllocBase::base_id + 1;
         uVar11 = uVar10 & 0x7fffffff;
         if (uVar11 == 0x7fffffff) {
            RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         uVar15 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
         RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
         *(uint*)( ( uVar14 % (ulong)uVar2 ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / uVar2 ) * 8 ) + 8 ) = uVar11 | 0x80000000;
         *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
         pthread_mutex_unlock(__mutex);
         if (uVar15 == 0) goto LAB_00113000;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_00112ede;
               }

               pcVar13 = "Attempting to initialize the wrong RID";
               uVar8 = 0xfc;
            }
 else {
               pcVar13 = "Initializing already initialized RID";
               uVar8 = 0xf8;
            }

            _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar8, "Method/function failed. Returning: nullptr", pcVar13, 0, 0);
         }

      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      LAB_00112ede:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotShape2D*, true>::make_rid(GodotShape2D* const&) */
   ulong RID_Alloc<GodotShape2D*,true>::make_rid(RID_Alloc<GodotShape2D*,true> *this, GodotShape2D **param_1) {
      pthread_mutex_t *__mutex;
      long *plVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      int iVar6;
      uint uVar7;
      undefined8 uVar8;
      long lVar9;
      uint uVar10;
      uint uVar11;
      undefined8 *puVar12;
      char *pcVar13;
      ulong uVar14;
      ulong uVar15;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      __mutex = (pthread_mutex_t*)( this + 0x30 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar6 = pthread_mutex_lock(__mutex);
      if (iVar6 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar6);
      }

      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == *(uint*)( this + 0x1c )) {
         if (uVar7 != 0) {
            uVar7 = uVar7 / *(uint*)( this + 0x18 );
         }

         if (*(uint*)( this + 0x24 ) != uVar7) {
            lVar3 = *(long*)( this + 8 );
            uVar14 = (ulong)uVar7;
            uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 4, false);
            uVar7 = *(uint*)( this + 0x18 );
            lVar4 = *(long*)( this + 0x10 );
            *(undefined8*)( lVar3 + uVar14 * 8 ) = uVar8;
            uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
            uVar7 = *(uint*)( this + 0x18 );
            *(undefined8*)( uVar14 * 8 + lVar4 ) = uVar8;
            if (uVar7 != 0) {
               lVar3 = *(long*)( *(long*)( this + 8 ) + uVar14 * 8 );
               lVar4 = *(long*)( *(long*)( this + 0x10 ) + uVar14 * 8 );
               lVar9 = 0;
               do {
                  *(undefined4*)( lVar3 + 8 + lVar9 * 0x10 ) = 0xffffffff;
                  *(int*)( lVar4 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
                  uVar7 = *(uint*)( this + 0x18 );
                  lVar9 = lVar9 + 1;
               }
 while ( (uint)lVar9 < uVar7 );
            }

            *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
            uVar7 = *(uint*)( this + 0x20 );
            goto LAB_0011327b;
         }

         pthread_mutex_unlock(__mutex);
         pcVar13 = *(char**)( this + 0x28 );
         if (pcVar13 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(pcVar13);
            local_58 = pcVar13;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
            pcVar13 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar13 + -0x10, false);
               }

            }

            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

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

         }

         LAB_00113460:uVar15 = 0;
      }
 else {
         LAB_0011327b:uVar2 = *(uint*)( this + 0x18 );
         uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
         uVar14 = (ulong)uVar7;
         LOCK();
         UNLOCK();
         uVar10 = (int)RID_AllocBase::base_id + 1;
         uVar11 = uVar10 & 0x7fffffff;
         if (uVar11 == 0x7fffffff) {
            RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         uVar15 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
         RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
         *(uint*)( ( uVar14 % (ulong)uVar2 ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / uVar2 ) * 8 ) + 8 ) = uVar11 | 0x80000000;
         *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
         pthread_mutex_unlock(__mutex);
         if (uVar15 == 0) goto LAB_00113460;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_0011333e;
               }

               pcVar13 = "Attempting to initialize the wrong RID";
               uVar8 = 0xfc;
            }
 else {
               pcVar13 = "Initializing already initialized RID";
               uVar8 = 0xf8;
            }

            _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar8, "Method/function failed. Returning: nullptr", pcVar13, 0, 0);
         }

      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      LAB_0011333e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotArea2D*, true>::make_rid(GodotArea2D* const&) */
   ulong RID_Alloc<GodotArea2D*,true>::make_rid(RID_Alloc<GodotArea2D*,true> *this, GodotArea2D **param_1) {
      pthread_mutex_t *__mutex;
      long *plVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      int iVar6;
      uint uVar7;
      undefined8 uVar8;
      long lVar9;
      uint uVar10;
      uint uVar11;
      undefined8 *puVar12;
      char *pcVar13;
      ulong uVar14;
      ulong uVar15;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      __mutex = (pthread_mutex_t*)( this + 0x30 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar6 = pthread_mutex_lock(__mutex);
      if (iVar6 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar6);
      }

      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == *(uint*)( this + 0x1c )) {
         if (uVar7 != 0) {
            uVar7 = uVar7 / *(uint*)( this + 0x18 );
         }

         if (*(uint*)( this + 0x24 ) != uVar7) {
            lVar3 = *(long*)( this + 8 );
            uVar14 = (ulong)uVar7;
            uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 4, false);
            uVar7 = *(uint*)( this + 0x18 );
            lVar4 = *(long*)( this + 0x10 );
            *(undefined8*)( lVar3 + uVar14 * 8 ) = uVar8;
            uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
            uVar7 = *(uint*)( this + 0x18 );
            *(undefined8*)( uVar14 * 8 + lVar4 ) = uVar8;
            if (uVar7 != 0) {
               lVar3 = *(long*)( *(long*)( this + 8 ) + uVar14 * 8 );
               lVar4 = *(long*)( *(long*)( this + 0x10 ) + uVar14 * 8 );
               lVar9 = 0;
               do {
                  *(undefined4*)( lVar3 + 8 + lVar9 * 0x10 ) = 0xffffffff;
                  *(int*)( lVar4 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
                  uVar7 = *(uint*)( this + 0x18 );
                  lVar9 = lVar9 + 1;
               }
 while ( (uint)lVar9 < uVar7 );
            }

            *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
            uVar7 = *(uint*)( this + 0x20 );
            goto LAB_001136fb;
         }

         pthread_mutex_unlock(__mutex);
         pcVar13 = *(char**)( this + 0x28 );
         if (pcVar13 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(pcVar13);
            local_58 = pcVar13;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
            pcVar13 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar13 + -0x10, false);
               }

            }

            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

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

         }

         LAB_001138e0:uVar15 = 0;
      }
 else {
         LAB_001136fb:uVar2 = *(uint*)( this + 0x18 );
         uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
         uVar14 = (ulong)uVar7;
         LOCK();
         UNLOCK();
         uVar10 = (int)RID_AllocBase::base_id + 1;
         uVar11 = uVar10 & 0x7fffffff;
         if (uVar11 == 0x7fffffff) {
            RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         uVar15 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
         RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
         *(uint*)( ( uVar14 % (ulong)uVar2 ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / uVar2 ) * 8 ) + 8 ) = uVar11 | 0x80000000;
         *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
         pthread_mutex_unlock(__mutex);
         if (uVar15 == 0) goto LAB_001138e0;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_001137be;
               }

               pcVar13 = "Attempting to initialize the wrong RID";
               uVar8 = 0xfc;
            }
 else {
               pcVar13 = "Initializing already initialized RID";
               uVar8 = 0xf8;
            }

            _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar8, "Method/function failed. Returning: nullptr", pcVar13, 0, 0);
         }

      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      LAB_001137be:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotBody2D*, true>::make_rid(GodotBody2D* const&) */
   ulong RID_Alloc<GodotBody2D*,true>::make_rid(RID_Alloc<GodotBody2D*,true> *this, GodotBody2D **param_1) {
      pthread_mutex_t *__mutex;
      long *plVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      int iVar6;
      uint uVar7;
      undefined8 uVar8;
      long lVar9;
      uint uVar10;
      uint uVar11;
      undefined8 *puVar12;
      char *pcVar13;
      ulong uVar14;
      ulong uVar15;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      __mutex = (pthread_mutex_t*)( this + 0x30 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar6 = pthread_mutex_lock(__mutex);
      if (iVar6 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar6);
      }

      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == *(uint*)( this + 0x1c )) {
         if (uVar7 != 0) {
            uVar7 = uVar7 / *(uint*)( this + 0x18 );
         }

         if (*(uint*)( this + 0x24 ) != uVar7) {
            lVar3 = *(long*)( this + 8 );
            uVar14 = (ulong)uVar7;
            uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 4, false);
            uVar7 = *(uint*)( this + 0x18 );
            lVar4 = *(long*)( this + 0x10 );
            *(undefined8*)( lVar3 + uVar14 * 8 ) = uVar8;
            uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
            uVar7 = *(uint*)( this + 0x18 );
            *(undefined8*)( uVar14 * 8 + lVar4 ) = uVar8;
            if (uVar7 != 0) {
               lVar3 = *(long*)( *(long*)( this + 8 ) + uVar14 * 8 );
               lVar4 = *(long*)( *(long*)( this + 0x10 ) + uVar14 * 8 );
               lVar9 = 0;
               do {
                  *(undefined4*)( lVar3 + 8 + lVar9 * 0x10 ) = 0xffffffff;
                  *(int*)( lVar4 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
                  uVar7 = *(uint*)( this + 0x18 );
                  lVar9 = lVar9 + 1;
               }
 while ( (uint)lVar9 < uVar7 );
            }

            *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
            uVar7 = *(uint*)( this + 0x20 );
            goto LAB_00113b5b;
         }

         pthread_mutex_unlock(__mutex);
         pcVar13 = *(char**)( this + 0x28 );
         if (pcVar13 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(pcVar13);
            local_58 = pcVar13;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
            pcVar13 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar13 + -0x10, false);
               }

            }

            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

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

         }

         LAB_00113d40:uVar15 = 0;
      }
 else {
         LAB_00113b5b:uVar2 = *(uint*)( this + 0x18 );
         uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
         uVar14 = (ulong)uVar7;
         LOCK();
         UNLOCK();
         uVar10 = (int)RID_AllocBase::base_id + 1;
         uVar11 = uVar10 & 0x7fffffff;
         if (uVar11 == 0x7fffffff) {
            RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         uVar15 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
         RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
         *(uint*)( ( uVar14 % (ulong)uVar2 ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / uVar2 ) * 8 ) + 8 ) = uVar11 | 0x80000000;
         *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
         pthread_mutex_unlock(__mutex);
         if (uVar15 == 0) goto LAB_00113d40;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_00113c1e;
               }

               pcVar13 = "Attempting to initialize the wrong RID";
               uVar8 = 0xfc;
            }
 else {
               pcVar13 = "Initializing already initialized RID";
               uVar8 = 0xf8;
            }

            _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar8, "Method/function failed. Returning: nullptr", pcVar13, 0, 0);
         }

      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      LAB_00113c1e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotJoint2D*, true>::make_rid(GodotJoint2D* const&) */
   ulong RID_Alloc<GodotJoint2D*,true>::make_rid(RID_Alloc<GodotJoint2D*,true> *this, GodotJoint2D **param_1) {
      pthread_mutex_t *__mutex;
      long *plVar1;
      uint uVar2;
      long lVar3;
      long lVar4;
      code *pcVar5;
      int iVar6;
      uint uVar7;
      undefined8 uVar8;
      long lVar9;
      uint uVar10;
      uint uVar11;
      undefined8 *puVar12;
      char *pcVar13;
      ulong uVar14;
      ulong uVar15;
      long in_FS_OFFSET;
      long local_68;
      long local_60;
      char *local_58;
      size_t local_50;
      long local_40;
      __mutex = (pthread_mutex_t*)( this + 0x30 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar6 = pthread_mutex_lock(__mutex);
      if (iVar6 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar6);
      }

      uVar7 = *(uint*)( this + 0x20 );
      if (uVar7 == *(uint*)( this + 0x1c )) {
         if (uVar7 != 0) {
            uVar7 = uVar7 / *(uint*)( this + 0x18 );
         }

         if (*(uint*)( this + 0x24 ) != uVar7) {
            lVar3 = *(long*)( this + 8 );
            uVar14 = (ulong)uVar7;
            uVar8 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x18 ) << 4, false);
            uVar7 = *(uint*)( this + 0x18 );
            lVar4 = *(long*)( this + 0x10 );
            *(undefined8*)( lVar3 + uVar14 * 8 ) = uVar8;
            uVar8 = Memory::alloc_static((ulong)uVar7 << 2, false);
            uVar7 = *(uint*)( this + 0x18 );
            *(undefined8*)( uVar14 * 8 + lVar4 ) = uVar8;
            if (uVar7 != 0) {
               lVar3 = *(long*)( *(long*)( this + 8 ) + uVar14 * 8 );
               lVar4 = *(long*)( *(long*)( this + 0x10 ) + uVar14 * 8 );
               lVar9 = 0;
               do {
                  *(undefined4*)( lVar3 + 8 + lVar9 * 0x10 ) = 0xffffffff;
                  *(int*)( lVar4 + lVar9 * 4 ) = *(int*)( this + 0x20 ) + (int)lVar9;
                  uVar7 = *(uint*)( this + 0x18 );
                  lVar9 = lVar9 + 1;
               }
 while ( (uint)lVar9 < uVar7 );
            }

            *(uint*)( this + 0x1c ) = uVar7 + *(int*)( this + 0x1c );
            uVar7 = *(uint*)( this + 0x20 );
            goto LAB_00113fbb;
         }

         pthread_mutex_unlock(__mutex);
         pcVar13 = *(char**)( this + 0x28 );
         if (pcVar13 == (char*)0x0) {
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x85, "Method/function failed. Returning: RID()", "Element limit reached.", 0, 0);
         }
 else {
            local_60 = 0;
            local_50 = strlen(pcVar13);
            local_58 = pcVar13;
            String::parse_latin1((StrRange*)&local_60);
            local_50 = 0x2b;
            local_58 = "Element limit for RID of type \'%s\' reached.";
            local_68 = 0;
            String::parse_latin1((StrRange*)&local_68);
            vformat<String>(&local_58, &local_68, (StrRange*)&local_60);
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0x83, "Method/function failed. Returning: RID()", &local_58, 0, 0);
            pcVar13 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar13 + -0x10, false);
               }

            }

            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar1 = (long*)( local_68 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

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

         }

         LAB_001141a0:uVar15 = 0;
      }
 else {
         LAB_00113fbb:uVar2 = *(uint*)( this + 0x18 );
         uVar7 = *(uint*)( *(long*)( *(long*)( this + 0x10 ) + ( (ulong)uVar7 / (ulong)uVar2 ) * 8 ) + ( (ulong)uVar7 % (ulong)uVar2 ) * 4 );
         uVar14 = (ulong)uVar7;
         LOCK();
         UNLOCK();
         uVar10 = (int)RID_AllocBase::base_id + 1;
         uVar11 = uVar10 & 0x7fffffff;
         if (uVar11 == 0x7fffffff) {
            RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
            _err_print_error("_allocate_rid", "./core/templates/rid_owner.h", 0xa9, "FATAL: Condition \"validator == 0x7FFFFFFF\" is true.", "Overflow in RID validator", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         uVar15 = CONCAT44(uVar10, uVar7) & 0x7fffffffffffffff;
         RID_AllocBase::base_id = RID_AllocBase::base_id + 1;
         *(uint*)( ( uVar14 % (ulong)uVar2 ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / uVar2 ) * 8 ) + 8 ) = uVar11 | 0x80000000;
         *(int*)( this + 0x20 ) = *(int*)( this + 0x20 ) + 1;
         pthread_mutex_unlock(__mutex);
         if (uVar15 == 0) goto LAB_001141a0;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_0011407e;
               }

               pcVar13 = "Attempting to initialize the wrong RID";
               uVar8 = 0xfc;
            }
 else {
               pcVar13 = "Initializing already initialized RID";
               uVar8 = 0xf8;
            }

            _err_print_error("get_or_null", "./core/templates/rid_owner.h", uVar8, "Method/function failed. Returning: nullptr", pcVar13, 0, 0);
         }

      }

      _err_print_error("initialize_rid", "./core/templates/rid_owner.h", 0x128, "Parameter \"mem\" is null.", 0, 0);
      LAB_0011407e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* GodotPhysicsServer2D::~GodotPhysicsServer2D() */
   void GodotPhysicsServer2D::~GodotPhysicsServer2D(GodotPhysicsServer2D *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotJoint2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotJoint2D*,true>::~RID_Alloc(RID_Alloc<GodotJoint2D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotBody2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotBody2D*,true>::~RID_Alloc(RID_Alloc<GodotBody2D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotArea2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotArea2D*,true>::~RID_Alloc(RID_Alloc<GodotArea2D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotSpace2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSpace2D*,true>::~RID_Alloc(RID_Alloc<GodotSpace2D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotShape2D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotShape2D*,true>::~RID_Alloc(RID_Alloc<GodotShape2D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* GodotJoint2D::~GodotJoint2D() */
   void GodotJoint2D::~GodotJoint2D(GodotJoint2D *this) {
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


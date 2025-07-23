/* GodotPhysicsServer3D::shape_set_margin(RID, float) */void GodotPhysicsServer3D::shape_set_margin(void) {
   return;
}
/* GodotPhysicsServer3D::shape_get_margin(RID) const */undefined8 GodotPhysicsServer3D::shape_get_margin(void) {
   return 0;
}
/* GodotPhysicsServer3D::set_active(bool) */void GodotPhysicsServer3D::set_active(GodotPhysicsServer3D *this, bool param_1) {
   this[0x171] = (GodotPhysicsServer3D)param_1;
   return;
}
/* GodotPhysicsServer3D::sync() */void GodotPhysicsServer3D::sync(GodotPhysicsServer3D *this) {
   this[0x181] = (GodotPhysicsServer3D)0x1;
   return;
}
/* GodotPhysicsServer3D::end_sync() */void GodotPhysicsServer3D::end_sync(GodotPhysicsServer3D *this) {
   this[0x181] = (GodotPhysicsServer3D)0x0;
   return;
}
/* GodotPhysicsServer3D::get_process_info(PhysicsServer3D::ProcessInfo) */undefined4 GodotPhysicsServer3D::get_process_info(GodotPhysicsServer3D *this, int param_2) {
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
/* GodotPhysicsServer3D::custom_shape_create() */undefined8 GodotPhysicsServer3D::custom_shape_create(void) {
   _err_print_error("custom_shape_create", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x66, "Method/function failed. Returning: RID()", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::shape_set_data(RID, Variant const&) */void GodotPhysicsServer3D::shape_set_data(GodotPhysicsServer3D *this, ulong param_2, undefined8 param_3) {
   int iVar1;
   long *plVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1d4 ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            /* WARNING: Could not recover jumptable at 0x00100126. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *plVar2 + 0x50 ) )(plVar2, param_3);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shape_set_data", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x6b, "Parameter \"shape\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::shape_set_custom_solver_bias(RID, float) */void GodotPhysicsServer3D::shape_set_custom_solver_bias(undefined4 param_1, GodotPhysicsServer3D *this, ulong param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x1d4 ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(undefined4*)( lVar2 + 0x2c ) = param_1;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shape_set_custom_solver_bias", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x71, "Parameter \"shape\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::shape_get_type(RID) const */undefined8 GodotPhysicsServer3D::shape_get_type(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1d4 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            /* WARNING: Could not recover jumptable at 0x001002b0. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar2 = ( **(code**)( *plVar3 + 8 ) )();
            return uVar2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shape_get_type", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x77, "Parameter \"shape\" is null.", 0, 0);
   return 10;
}
/* GodotPhysicsServer3D::shape_get_data(RID) const */undefined4 *GodotPhysicsServer3D::shape_get_data(undefined4 *param_1, long param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   char *pcVar3;
   long *plVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x1d4 ) <= (uint)param_3 )) {
      LAB_001003c8:uVar5 = 0x7d;
      pcVar3 = "Parameter \"shape\" is null.";
   }
 else {
      plVar4 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x1c0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 != (int)( param_3 >> 0x20 )) {
         if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_001003c8;
      }

      plVar4 = (long*)*plVar4;
      if (plVar4 == (long*)0x0) goto LAB_001003c8;
      if ((char)plVar4[5] != '\0') {
         ( **(code**)( *plVar4 + 0x58 ) )();
         goto LAB_00100398;
      }

      uVar5 = 0x7e;
      pcVar3 = "Condition \"!shape->is_configured()\" is true. Returning: Variant()";
   }

   _err_print_error("shape_get_data", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar5, pcVar3, 0, 0);
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   LAB_00100398:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::shape_get_custom_solver_bias(RID) const */undefined4 GodotPhysicsServer3D::shape_get_custom_solver_bias(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x1d4 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x2c );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("shape_get_custom_solver_bias", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x8b, "Parameter \"shape\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::area_get_space(RID) const */undefined8 GodotPhysicsServer3D::area_get_space(GodotPhysicsServer3D *this, ulong param_2) {
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

   _err_print_error("area_get_space", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xf4, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::area_get_transform(RID) const */undefined1(*)[16];GodotPhysicsServer3D::area_get_transform(undefined1 (*param_1)[16], long param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint uVar8;
   long *plVar9;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x284 ) )) {
      plVar9 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar9[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar9;
         if (lVar2 != 0) {
            uVar3 = *(undefined8*)( lVar2 + 0x50 );
            uVar4 = *(undefined8*)( lVar2 + 0x58 );
            uVar5 = *(undefined8*)( lVar2 + 0x60 );
            uVar6 = *(undefined8*)( lVar2 + 0x68 );
            uVar7 = *(undefined8*)( lVar2 + 0x70 );
            *(undefined8*)*param_1 = *(undefined8*)( lVar2 + 0x48 );
            *(undefined8*)( *param_1 + 8 ) = uVar3;
            *(undefined8*)param_1[1] = uVar4;
            *(undefined8*)( param_1[1] + 8 ) = uVar5;
            *(undefined8*)param_1[2] = uVar6;
            *(undefined8*)( param_1[2] + 8 ) = uVar7;
            return param_1;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_get_transform", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x17a, "Parameter \"area\" is null.", 0, 0);
   uVar8 = _LC18;
   *(undefined4*)param_1[2] = 0x3f800000;
   *(undefined8*)( param_1[2] + 4 ) = 0;
   *(undefined4*)( param_1[2] + 0xc ) = 0;
   *param_1 = ZEXT416(uVar8);
   param_1[1] = ZEXT416(uVar8);
   return param_1;
}
/* GodotPhysicsServer3D::area_set_collision_layer(RID, unsigned int) */void GodotPhysicsServer3D::area_set_collision_layer(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
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
               *(undefined4*)( puVar2 + 4 ) = param_3;
               /* WARNING: Could not recover jumptable at 0x00100774. Too many branches */
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

   _err_print_error("area_set_collision_layer", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x181, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_get_collision_layer(RID) const */undefined4 GodotPhysicsServer3D::area_get_collision_layer(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x20 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_get_collision_layer", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x188, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::area_set_collision_mask(RID, unsigned int) */void GodotPhysicsServer3D::area_set_collision_mask(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
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
               *(undefined4*)( (long)puVar2 + 0x24 ) = param_3;
               /* WARNING: Could not recover jumptable at 0x00100914. Too many branches */
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

   _err_print_error("area_set_collision_mask", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 399, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_get_collision_mask(RID) const */undefined4 GodotPhysicsServer3D::area_get_collision_mask(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
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

   _err_print_error("area_get_collision_mask", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x196, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::area_set_ray_pickable(RID, bool) */void GodotPhysicsServer3D::area_set_ray_pickable(GodotPhysicsServer3D *this, ulong param_2, undefined1 param_3) {
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
               *(undefined1*)( lVar2 + 0xd0 ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("area_set_ray_pickable", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1ac, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::space_get_contact_count(RID) const */undefined4 GodotPhysicsServer3D::space_get_contact_count(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x22c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x6120 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("space_get_contact_count", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xd5, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_get_space(RID) const */undefined8 GodotPhysicsServer3D::body_get_space(GodotPhysicsServer3D *this, ulong param_2) {
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

   _err_print_error("body_get_space", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1d5, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_enable_continuous_collision_detection(RID, bool) */void GodotPhysicsServer3D::body_set_enable_continuous_collision_detection(GodotPhysicsServer3D *this, ulong param_2, undefined1 param_3) {
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
               *(undefined1*)( lVar2 + 0x2ba ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_enable_continuous_collision_detection", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x23a, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_is_continuous_collision_detection_enabled(RID) const */undefined1 GodotPhysicsServer3D::body_is_continuous_collision_detection_enabled(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined1*)( lVar2 + 0x2ba );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_is_continuous_collision_detection_enabled", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x241, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_collision_layer(RID, unsigned int) */void GodotPhysicsServer3D::body_set_collision_layer(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
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
               *(undefined4*)( puVar2 + 4 ) = param_3;
               /* WARNING: Could not recover jumptable at 0x00100ed4. Too many branches */
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

   _err_print_error("body_set_collision_layer", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x248, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_get_collision_layer(RID) const */undefined4 GodotPhysicsServer3D::body_get_collision_layer(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x20 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_collision_layer", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x24f, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_collision_mask(RID, unsigned int) */void GodotPhysicsServer3D::body_set_collision_mask(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
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
               *(undefined4*)( (long)puVar2 + 0x24 ) = param_3;
               /* WARNING: Could not recover jumptable at 0x00101074. Too many branches */
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

   _err_print_error("body_set_collision_mask", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x256, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_get_collision_mask(RID) const */undefined4 GodotPhysicsServer3D::body_get_collision_mask(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
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

   _err_print_error("body_get_collision_mask", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x25d, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_collision_priority(RID, float) */void GodotPhysicsServer3D::body_set_collision_priority(float param_1, GodotPhysicsServer3D *this, ulong param_3) {
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
               *(float*)( puVar2 + 5 ) = param_1;
               /* WARNING: Could not recover jumptable at 0x0010121d. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( **(code**)*puVar2 )();
               return;
            }

            _err_print_error("set_collision_priority", "modules/godot_physics_3d/godot_collision_object_3d.h", 0xaa, "Condition \"p_priority <= 0\" is true.", "Priority must be greater than 0.", 0, 0);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_collision_priority", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x264, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_get_collision_priority(RID) const */undefined4 GodotPhysicsServer3D::body_get_collision_priority(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x28 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_collision_priority", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x26b, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_get_object_instance_id(RID) const */undefined8 GodotPhysicsServer3D::body_get_object_instance_id(GodotPhysicsServer3D *this, ulong param_2) {
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

   _err_print_error("body_get_object_instance_id", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x282, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_user_flags(RID, unsigned int) */void GodotPhysicsServer3D::body_set_user_flags(long param_1, ulong param_2) {
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

   _err_print_error("body_set_user_flags", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x289, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_get_user_flags(RID) const */undefined8 GodotPhysicsServer3D::body_get_user_flags(GodotPhysicsServer3D *this, ulong param_2) {
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

   _err_print_error("body_get_user_flags", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x28e, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_get_constant_force(RID) const */undefined1  [16] __thiscallGodotPhysicsServer3D::body_get_constant_force(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   undefined8 local_28;
   undefined4 local_20;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar3 = *plVar4;
         if (lVar3 != 0) {
            local_28 = *(undefined8*)( lVar3 + 0x230 );
            local_20 = *(undefined4*)( lVar3 + 0x238 );
            goto LAB_00101678;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_constant_force", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x310, "Parameter \"body\" is null.", 0, 0);
   local_20 = 0;
   local_28 = 0;
   LAB_00101678:auVar5._8_4_ = local_20;
   auVar5._0_8_ = local_28;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar5._12_4_ = 0;
      return auVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::body_get_constant_torque(RID) const */undefined1  [16] __thiscallGodotPhysicsServer3D::body_get_constant_torque(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined1 auVar5[16];
   undefined8 local_28;
   undefined4 local_20;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar3 = *plVar4;
         if (lVar3 != 0) {
            local_28 = *(undefined8*)( lVar3 + 0x23c );
            local_20 = *(undefined4*)( lVar3 + 0x244 );
            goto LAB_001017a8;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_constant_torque", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 800, "Parameter \"body\" is null.", 0, 0);
   local_20 = 0;
   local_28 = 0;
   LAB_001017a8:auVar5._8_4_ = local_20;
   auVar5._0_8_ = local_28;
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar5._12_4_ = 0;
      return auVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::body_set_contacts_reported_depth_threshold(RID, float) */void GodotPhysicsServer3D::body_set_contacts_reported_depth_threshold(long param_1, ulong param_2) {
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

   _err_print_error("body_set_contacts_reported_depth_threshold", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x35c, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_get_contacts_reported_depth_threshold(RID) const */undefined8 GodotPhysicsServer3D::body_get_contacts_reported_depth_threshold(GodotPhysicsServer3D *this, ulong param_2) {
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

   _err_print_error("body_get_contacts_reported_depth_threshold", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x361, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_omit_force_integration(RID, bool) */void GodotPhysicsServer3D::body_set_omit_force_integration(GodotPhysicsServer3D *this, ulong param_2, undefined1 param_3) {
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
               *(undefined1*)( lVar2 + 0x2b8 ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_omit_force_integration", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x367, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_is_omitting_force_integration(RID) const */undefined1 GodotPhysicsServer3D::body_is_omitting_force_integration(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined1*)( lVar2 + 0x2b8 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_is_omitting_force_integration", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x36e, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_ray_pickable(RID, bool) */void GodotPhysicsServer3D::body_set_ray_pickable(GodotPhysicsServer3D *this, ulong param_2, undefined1 param_3) {
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
               *(undefined1*)( lVar2 + 0xd0 ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_ray_pickable", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x38c, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_attach_object_instance_id(RID, ObjectID) */undefined1  [16] __thiscallGodotPhysicsServer3D::body_attach_object_instance_id(GodotPhysicsServer3D *this, ulong param_2, undefined8 param_3) {
   undefined1 auVar1[16];
   long lVar2;
   int iVar3;
   long *plVar4;
   undefined1 auVar5[16];
   undefined8 uVar6;
   undefined8 uStack_30;
   if (param_2 != 0) {
      iVar3 = (int)( param_2 >> 0x20 );
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         if ((int)plVar4[1] == iVar3) {
            lVar2 = *plVar4;
            if (lVar2 != 0) goto LAB_00101cbe;
         }
 else if ((int)plVar4[1] + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

      if ((uint)param_2 < *(uint*)( this + 0x334 )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
         if ((int)plVar4[1] == iVar3) {
            lVar2 = *plVar4;
            if (lVar2 != 0) {
               LAB_00101cbe:*(undefined8*)( lVar2 + 0x18 ) = param_3;
               auVar5._8_8_ = plVar4;
               auVar5._0_8_ = lVar2;
               return auVar5;
            }

         }
 else if ((int)plVar4[1] + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   uVar6 = 0;
   _err_print_error("body_attach_object_instance_id", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x27d, "Method/function failed.", "Invalid ID.", 0);
   auVar1._8_8_ = uStack_30;
   auVar1._0_8_ = uVar6;
   return auVar1;
}
/* GodotPhysicsServer3D::soft_body_set_space(RID, RID) */void GodotPhysicsServer3D::soft_body_set_space(GodotPhysicsServer3D *this, ulong param_2, ulong param_3) {
   int iVar1;
   long *plVar2;
   long *plVar3;
   long lVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            lVar4 = 0;
            if (param_3 == 0) {
               LAB_00101e42:if (lVar4 != plVar2[8]) {
                  /* WARNING: Could not recover jumptable at 0x00101e5a. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( **(code**)( *plVar2 + 0x28 ) )(plVar2);
                  return;
               }

               return;
            }

            if ((uint)param_3 < *(uint*)( this + 0x22c )) {
               plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
               iVar1 = (int)plVar3[1];
               if (iVar1 == (int)( param_3 >> 0x20 )) {
                  lVar4 = *plVar3;
                  if (lVar4 != 0) goto LAB_00101e42;
               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            _err_print_error("soft_body_set_space", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3c5, "Parameter \"space\" is null.", 0, 0);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_set_space", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3c0, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_get_space(RID) const */undefined8 GodotPhysicsServer3D::soft_body_get_space(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
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

   _err_print_error("soft_body_get_space", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3d1, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_set_collision_layer(RID, unsigned int) */void GodotPhysicsServer3D::soft_body_set_collision_layer(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   undefined8 *puVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x334 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            puVar2 = (undefined8*)*plVar3;
            if (puVar2 != (undefined8*)0x0) {
               *(undefined4*)( puVar2 + 4 ) = param_3;
               /* WARNING: Could not recover jumptable at 0x001020c4. Too many branches */
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

   _err_print_error("soft_body_set_collision_layer", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3dc, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_get_collision_layer(RID) const */undefined4 GodotPhysicsServer3D::soft_body_get_collision_layer(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x20 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_collision_layer", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3e3, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_set_collision_mask(RID, unsigned int) */void GodotPhysicsServer3D::soft_body_set_collision_mask(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   undefined8 *puVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x334 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            puVar2 = (undefined8*)*plVar3;
            if (puVar2 != (undefined8*)0x0) {
               *(undefined4*)( (long)puVar2 + 0x24 ) = param_3;
               /* WARNING: Could not recover jumptable at 0x00102264. Too many branches */
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

   _err_print_error("soft_body_set_collision_mask", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3ea, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_get_collision_mask(RID) const */undefined4 GodotPhysicsServer3D::soft_body_get_collision_mask(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
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

   _err_print_error("soft_body_get_collision_mask", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3f1, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_set_ray_pickable(RID, bool) */void GodotPhysicsServer3D::soft_body_set_ray_pickable(GodotPhysicsServer3D *this, ulong param_2, undefined1 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x334 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               *(undefined1*)( lVar2 + 0xd0 ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("soft_body_set_ray_pickable", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x424, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_get_simulation_precision(RID) const */undefined8 GodotPhysicsServer3D::soft_body_get_simulation_precision(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return CONCAT44((int)( (ulong)lVar2 >> 0x20 ), (int)(float)*(int*)( lVar2 + 0x244 ));
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_simulation_precision", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x432, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_get_total_mass(RID) const */undefined4 GodotPhysicsServer3D::soft_body_get_total_mass(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x23c );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_total_mass", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x440, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_get_linear_stiffness(RID) const */undefined4 GodotPhysicsServer3D::soft_body_get_linear_stiffness(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x248 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_linear_stiffness", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x44e, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_get_pressure_coefficient(RID) const */undefined4 GodotPhysicsServer3D::soft_body_get_pressure_coefficient(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x24c );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_pressure_coefficient", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x45c, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_get_damping_coefficient(RID) const */undefined4 GodotPhysicsServer3D::soft_body_get_damping_coefficient(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x250 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_damping_coefficient", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x46a, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_get_drag_coefficient(RID) const */undefined4 GodotPhysicsServer3D::soft_body_get_drag_coefficient(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x254 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_drag_coefficient", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x478, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::soft_body_get_bounds(RID) const */undefined8 *GodotPhysicsServer3D::soft_body_get_bounds(undefined8 *param_1, long param_2, ulong param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   long *plVar5;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x334 ) )) {
      plVar5 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x330 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar5[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar2 = *plVar5;
         if (lVar2 != 0) {
            uVar4 = *(undefined8*)( lVar2 + 0x228 );
            uVar3 = *(undefined8*)( lVar2 + 0x230 );
            *param_1 = *(undefined8*)( lVar2 + 0x220 );
            param_1[1] = uVar4;
            param_1[2] = uVar3;
            return param_1;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_bounds", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x486, "Parameter \"soft_body\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined4*)( param_1 + 1 ) = 0;
   *(undefined8*)( (long)param_1 + 0xc ) = 0;
   *(undefined4*)( (long)param_1 + 0x14 ) = 0;
   return param_1;
}
/* GodotPhysicsServer3D::pin_joint_set_local_a(RID, Vector3 const&) */void GodotPhysicsServer3D::pin_joint_set_local_a(GodotPhysicsServer3D *this, ulong param_2, long *param_3) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 == 0) {
               plVar3[0x23] = *param_3;
               *(int*)( plVar3 + 0x24 ) = (int)param_3[1];
               return;
            }

            uVar4 = 0x4f2;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true.";
            goto LAB_00102b0a;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x4f1;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00102b0a:_err_print_error("pin_joint_set_local_a", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::pin_joint_get_local_a(RID) const */undefined1  [16] __thiscallGodotPhysicsServer3D::pin_joint_get_local_a(GodotPhysicsServer3D *this, ulong param_2) {
   long lVar1;
   int iVar2;
   char *pcVar3;
   long *plVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 auVar6[16];
   long local_28;
   undefined4 local_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x38c ) <= (uint)param_2 )) {
      LAB_00102c40:uVar5 = 0x4f9;
      pcVar3 = "Parameter \"joint\" is null.";
   }
 else {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar2 = (int)plVar4[1];
      if (iVar2 != (int)( param_2 >> 0x20 )) {
         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00102c40;
      }

      plVar4 = (long*)*plVar4;
      if (plVar4 == (long*)0x0) goto LAB_00102c40;
      iVar2 = ( **(code**)( *plVar4 + 0x38 ) )(plVar4);
      if (iVar2 == 0) {
         local_28 = plVar4[0x23];
         local_20 = (undefined4)plVar4[0x24];
         goto LAB_00102c0a;
      }

      uVar5 = 0x4fa;
      pcVar3 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: Vector3()";
   }

   _err_print_error("pin_joint_get_local_a", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar5, pcVar3, 0, 0);
   local_20 = 0;
   local_28 = 0;
   LAB_00102c0a:auVar6._8_4_ = local_20;
   auVar6._0_8_ = local_28;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar6._12_4_ = 0;
      return auVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::pin_joint_set_local_b(RID, Vector3 const&) */void GodotPhysicsServer3D::pin_joint_set_local_b(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 == 0) {
               *(undefined8*)( (long)plVar3 + 0x124 ) = *param_3;
               *(undefined4*)( (long)plVar3 + 300 ) = *(undefined4*)( param_3 + 1 );
               return;
            }

            uVar4 = 0x502;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true.";
            goto LAB_00102d7a;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x501;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00102d7a:_err_print_error("pin_joint_set_local_b", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::pin_joint_get_local_b(RID) const */undefined1  [16] __thiscallGodotPhysicsServer3D::pin_joint_get_local_b(GodotPhysicsServer3D *this, ulong param_2) {
   long lVar1;
   int iVar2;
   char *pcVar3;
   long *plVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined1 auVar6[16];
   undefined8 local_28;
   undefined4 local_20;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x38c ) <= (uint)param_2 )) {
      LAB_00102eb0:uVar5 = 0x509;
      pcVar3 = "Parameter \"joint\" is null.";
   }
 else {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar2 = (int)plVar4[1];
      if (iVar2 != (int)( param_2 >> 0x20 )) {
         if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

         goto LAB_00102eb0;
      }

      plVar4 = (long*)*plVar4;
      if (plVar4 == (long*)0x0) goto LAB_00102eb0;
      iVar2 = ( **(code**)( *plVar4 + 0x38 ) )(plVar4);
      if (iVar2 == 0) {
         local_28 = *(undefined8*)( (long)plVar4 + 0x124 );
         local_20 = *(undefined4*)( (long)plVar4 + 300 );
         goto LAB_00102e7a;
      }

      uVar5 = 0x50a;
      pcVar3 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: Vector3()";
   }

   _err_print_error("pin_joint_get_local_b", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar5, pcVar3, 0, 0);
   local_20 = 0;
   local_28 = 0;
   LAB_00102e7a:auVar6._8_4_ = local_20;
   auVar6._0_8_ = local_28;
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar6._12_4_ = 0;
      return auVar6;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::joint_set_solver_priority(RID, int) */void GodotPhysicsServer3D::joint_set_solver_priority(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x38c )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               *(undefined4*)( lVar2 + 0x20 ) = param_3;
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("joint_set_solver_priority", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x561, "Parameter \"joint\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::joint_get_solver_priority(RID) const */undefined4 GodotPhysicsServer3D::joint_get_solver_priority(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined4*)( lVar2 + 0x20 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("joint_get_solver_priority", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x567, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::joint_disable_collisions_between_bodies(RID, bool) */void GodotPhysicsServer3D::joint_disable_collisions_between_bodies(GodotPhysicsServer3D *this, ulong param_2, char param_3) {
   int iVar1;
   long lVar2;
   long lVar3;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar4;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x38c )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
         iVar1 = (int)plVar4[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar4;
            if (lVar2 != 0) {
               *(char*)( lVar2 + 0x24 ) = param_3;
               if (*(int*)( lVar2 + 0x10 ) != 2) {
                  return;
               }

               lVar3 = **(long**)( lVar2 + 8 );
               lVar2 = ( *(long**)( lVar2 + 8 ) )[1];
               if (param_3 == '\0') {
                  ( **(code**)( *(long*)this + 0x478 ) )();
                  UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x478 );
               }
 else {
                  ( **(code**)( *(long*)this + 0x470 ) )(this, *(undefined8*)( lVar3 + 0x10 ), *(undefined8*)( lVar2 + 0x10 ));
                  UNRECOVERED_JUMPTABLE = *(code**)( *(long*)this + 0x470 );
               }

               /* WARNING: Could not recover jumptable at 0x0010317e. Too many branches */
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

   _err_print_error("joint_disable_collisions_between_bodies", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x56d, "Parameter \"joint\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::joint_is_disabled_collisions_between_bodies(RID) const */undefined1 GodotPhysicsServer3D::joint_is_disabled_collisions_between_bodies(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            return *(undefined1*)( lVar2 + 0x24 );
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("joint_is_disabled_collisions_between_bodies", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x581, "Parameter \"joint\" is null.", 0, 0);
   return 1;
}
/* GodotPhysicsServer3D::joint_get_type(RID) const */undefined8 GodotPhysicsServer3D::joint_get_type(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            /* WARNING: Could not recover jumptable at 0x00103330. Too many branches */
            /* WARNING: Treating indirect jump as call */
            uVar2 = ( **(code**)( *plVar3 + 0x38 ) )();
            return uVar2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("joint_get_type", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x588, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::area_get_shape_count(RID) const */undefined4 GodotPhysicsServer3D::area_get_shape_count(GodotPhysicsServer3D *this, ulong param_2) {
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

   _err_print_error("area_get_shape_count", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x11b, "Parameter \"area\" is null.", 0, 0);
   return 0xffffffff;
}
/* GodotPhysicsServer3D::body_get_shape_count(RID) const */undefined4 GodotPhysicsServer3D::body_get_shape_count(GodotPhysicsServer3D *this, ulong param_2) {
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

   _err_print_error("body_get_shape_count", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x209, "Parameter \"body\" is null.", 0, 0);
   return 0xffffffff;
}
/* GodotPhysicsServer3D::body_get_max_contacts_reported(RID) const */undefined4 GodotPhysicsServer3D::body_get_max_contacts_reported(GodotPhysicsServer3D *this, ulong param_2) {
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
            lVar2 = *(long*)( lVar2 + 0x338 );
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

   _err_print_error("body_get_max_contacts_reported", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x37a, "Parameter \"body\" is null.", 0, 0);
   return 0xffffffff;
}
/* GodotPhysicsServer3D::space_set_param(RID, PhysicsServer3D::SpaceParameter, float) */void GodotPhysicsServer3D::space_set_param(long param_1, ulong param_2, undefined4 param_3) {
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
               GodotSpace3D::set_param(lVar2, param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("space_set_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xb4, "Parameter \"space\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::space_get_param(RID, PhysicsServer3D::SpaceParameter) const */undefined8 GodotPhysicsServer3D::space_get_param(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
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
               uVar4 = GodotSpace3D::get_param(lVar2, param_3);
               return uVar4;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("space_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xbb, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::space_get_direct_state(RID) */undefined8 GodotPhysicsServer3D::space_get_direct_state(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   char cVar2;
   undefined8 uVar3;
   long *plVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x22c ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar4 != 0) {
            if (( ( this[0x180] == (GodotPhysicsServer3D)0x0 ) || ( this[0x181] != (GodotPhysicsServer3D)0x0 ) ) && ( cVar2 = GodotSpace3D::is_locked() ),cVar2 == '\0') {
               uVar3 = GodotSpace3D::get_direct_state();
               return uVar3;
            }

            _err_print_error("space_get_direct_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xc2, "Condition \"(using_threads && !doing_sync) || space->is_locked()\" is true. Returning: nullptr", "Space state is inaccessible right now, wait for iteration or physics process notification.", 0, 0);
            return 0;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("space_get_direct_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xc1, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::area_add_shape(RID, RID, Transform3D const&, bool) */void GodotPhysicsServer3D::area_add_shape(long param_1, ulong param_2, ulong param_3, bool param_4) {
   int iVar1;
   GodotShape3D *pGVar2;
   Transform3D *pTVar3;
   undefined8 *puVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x284 ) )) {
      puVar4 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
      iVar1 = *(int*)( puVar4 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pGVar2 = (GodotShape3D*)*puVar4;
         if (pGVar2 != (GodotShape3D*)0x0) {
            if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_1 + 0x1d4 ) )) {
               puVar4 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x1c0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x1d0 ) ) * 8 ) );
               iVar1 = *(int*)( puVar4 + 1 );
               if (iVar1 == (int)( param_3 >> 0x20 )) {
                  pTVar3 = (Transform3D*)*puVar4;
                  if (pTVar3 != (Transform3D*)0x0) {
                     GodotCollisionObject3D::add_shape(pGVar2, pTVar3, param_4);
                     return;
                  }

               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            _err_print_error("area_add_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x102, "Parameter \"shape\" is null.", 0, 0);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_add_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xff, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_add_shape(RID, RID, Transform3D const&, bool) */void GodotPhysicsServer3D::body_add_shape(long param_1, ulong param_2, ulong param_3, bool param_4) {
   int iVar1;
   GodotShape3D *pGVar2;
   Transform3D *pTVar3;
   undefined8 *puVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      puVar4 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar4 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pGVar2 = (GodotShape3D*)*puVar4;
         if (pGVar2 != (GodotShape3D*)0x0) {
            if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_1 + 0x1d4 ) )) {
               puVar4 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x1c0 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x1d0 ) ) * 8 ) );
               iVar1 = *(int*)( puVar4 + 1 );
               if (iVar1 == (int)( param_3 >> 0x20 )) {
                  pTVar3 = (Transform3D*)*puVar4;
                  if (pTVar3 != (Transform3D*)0x0) {
                     GodotCollisionObject3D::add_shape(pGVar2, pTVar3, param_4);
                     return;
                  }

               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            _err_print_error("body_add_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1f1, "Parameter \"shape\" is null.", 0, 0);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1ee, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_set_shape(RID, int, RID) */void GodotPhysicsServer3D::area_set_shape(GodotPhysicsServer3D *this, ulong param_2, uint param_3, ulong param_4) {
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
                        if (*(char*)( lVar3 + 0x28 ) != '\0') {
                           GodotCollisionObject3D::set_shape((int)lVar2, (GodotShape3D*)(ulong)param_3);
                           return;
                        }

                        _err_print_error("area_set_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x10d, "Condition \"!shape->is_configured()\" is true.", 0, 0);
                        return;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

               _err_print_error("area_set_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x10c, "Parameter \"shape\" is null.", 0, 0);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("area_set_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x109, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_shape(RID, int, RID) */void GodotPhysicsServer3D::body_set_shape(GodotPhysicsServer3D *this, ulong param_2, uint param_3, ulong param_4) {
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
                        if (*(char*)( lVar3 + 0x28 ) != '\0') {
                           GodotCollisionObject3D::set_shape((int)lVar2, (GodotShape3D*)(ulong)param_3);
                           return;
                        }

                        _err_print_error("body_set_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1fc, "Condition \"!shape->is_configured()\" is true.", 0, 0);
                        return;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

               _err_print_error("body_set_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1fb, "Parameter \"shape\" is null.", 0, 0);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1f8, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_set_shape_transform(RID, int, Transform3D const&) */void GodotPhysicsServer3D::area_set_shape_transform(long param_1, ulong param_2, uint param_3) {
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
               GodotCollisionObject3D::set_shape_transform((int)lVar2, (Transform3D*)(ulong)param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("area_set_shape_transform", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x114, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_shape_transform(RID, int, Transform3D const&) */void GodotPhysicsServer3D::body_set_shape_transform(long param_1, ulong param_2, uint param_3) {
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
               GodotCollisionObject3D::set_shape_transform((int)lVar2, (Transform3D*)(ulong)param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_shape_transform", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x202, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_get_shape(RID, int) const */undefined8 GodotPhysicsServer3D::area_get_shape(GodotPhysicsServer3D *this, ulong param_2, int param_3) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   long lVar6;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x284 ) <= (uint)param_2 )) {
      LAB_001042c0:_err_print_error("area_get_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x122, "Parameter \"area\" is null.", 0, 0);
      return 0;
   }

   plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
   iVar1 = (int)plVar4[1];
   if (iVar1 != (int)( param_2 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_001042c0;
   }

   lVar2 = *plVar4;
   if (lVar2 == 0) goto LAB_001042c0;
   lVar2 = *(long*)( lVar2 + 0x38 );
   lVar5 = (long)param_3;
   if (param_3 < 0) {
      if (lVar2 != 0) {
         lVar6 = *(long*)( lVar2 + -8 );
         goto LAB_0010426d;
      }

   }
 else if (lVar2 != 0) {
      lVar6 = *(long*)( lVar2 + -8 );
      if (lVar5 < lVar6) {
         lVar2 = *(long*)( lVar2 + 0x80 + lVar5 * 0x90 );
         if (lVar2 == 0) {
            _err_print_error("area_get_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x125, "Parameter \"shape\" is null.", 0, 0);
            return 0;
         }

         return *(undefined8*)( lVar2 + 8 );
      }

      goto LAB_0010426d;
   }

   lVar6 = 0;
   LAB_0010426d:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar5, lVar6, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* GodotPhysicsServer3D::body_get_shape(RID, int) const */undefined8 GodotPhysicsServer3D::body_get_shape(GodotPhysicsServer3D *this, ulong param_2, int param_3) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   long lVar6;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x2dc ) <= (uint)param_2 )) {
      LAB_00104470:_err_print_error("body_get_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x210, "Parameter \"body\" is null.", 0, 0);
      return 0;
   }

   plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
   iVar1 = (int)plVar4[1];
   if (iVar1 != (int)( param_2 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00104470;
   }

   lVar2 = *plVar4;
   if (lVar2 == 0) goto LAB_00104470;
   lVar2 = *(long*)( lVar2 + 0x38 );
   lVar5 = (long)param_3;
   if (param_3 < 0) {
      if (lVar2 != 0) {
         lVar6 = *(long*)( lVar2 + -8 );
         goto LAB_0010441d;
      }

   }
 else if (lVar2 != 0) {
      lVar6 = *(long*)( lVar2 + -8 );
      if (lVar5 < lVar6) {
         lVar2 = *(long*)( lVar2 + 0x80 + lVar5 * 0x90 );
         if (lVar2 == 0) {
            _err_print_error("body_get_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x213, "Parameter \"shape\" is null.", 0, 0);
            return 0;
         }

         return *(undefined8*)( lVar2 + 8 );
      }

      goto LAB_0010441d;
   }

   lVar6 = 0;
   LAB_0010441d:_err_print_index_error("get_shape", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x7c, lVar5, lVar6, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* GodotPhysicsServer3D::area_get_shape_transform(RID, int) const */undefined1(*)[16];GodotPhysicsServer3D::area_get_shape_transform(undefined1 (*param_1)[16], long param_2, ulong param_3, int param_4) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   uint uVar9;
   undefined8 *puVar10;
   long *plVar11;
   long lVar12;
   long lVar13;
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x284 ) <= (uint)param_3 )) {
      LAB_0010461c:_err_print_error("area_get_shape_transform", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 300, "Parameter \"area\" is null.", 0, 0);
      uVar9 = _LC18;
      *(undefined4*)param_1[2] = 0x3f800000;
      *(undefined8*)( param_1[2] + 4 ) = 0;
      *(undefined4*)( param_1[2] + 0xc ) = 0;
      *param_1 = ZEXT416(uVar9);
      param_1[1] = ZEXT416(uVar9);
      return param_1;
   }

   plVar11 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x270 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 ) );
   iVar1 = (int)plVar11[1];
   if (iVar1 != (int)( param_3 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_0010461c;
   }

   lVar2 = *plVar11;
   if (lVar2 == 0) goto LAB_0010461c;
   lVar2 = *(long*)( lVar2 + 0x38 );
   lVar12 = (long)param_4;
   if (param_4 < 0) {
      if (lVar2 != 0) {
         lVar13 = *(long*)( lVar2 + -8 );
         goto LAB_001045cd;
      }

   }
 else if (lVar2 != 0) {
      lVar13 = *(long*)( lVar2 + -8 );
      if (lVar12 < lVar13) {
         puVar10 = (undefined8*)( lVar2 + lVar12 * 0x90 );
         uVar4 = puVar10[1];
         uVar5 = puVar10[2];
         uVar6 = puVar10[3];
         uVar7 = puVar10[4];
         uVar8 = puVar10[5];
         *(undefined8*)*param_1 = *puVar10;
         *(undefined8*)( *param_1 + 8 ) = uVar4;
         *(undefined8*)param_1[1] = uVar5;
         *(undefined8*)( param_1[1] + 8 ) = uVar6;
         *(undefined8*)param_1[2] = uVar7;
         *(undefined8*)( param_1[2] + 8 ) = uVar8;
         return param_1;
      }

      goto LAB_001045cd;
   }

   lVar13 = 0;
   LAB_001045cd:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar12, lVar13, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* GodotPhysicsServer3D::body_get_shape_transform(RID, int) const */undefined1(*)[16];GodotPhysicsServer3D::body_get_shape_transform(undefined1 (*param_1)[16], long param_2, ulong param_3, int param_4) {
   int iVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   uint uVar9;
   undefined8 *puVar10;
   long *plVar11;
   long lVar12;
   long lVar13;
   if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x2dc ) <= (uint)param_3 )) {
      LAB_001047bc:_err_print_error("body_get_shape_transform", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x223, "Parameter \"body\" is null.", 0, 0);
      uVar9 = _LC18;
      *(undefined4*)param_1[2] = 0x3f800000;
      *(undefined8*)( param_1[2] + 4 ) = 0;
      *(undefined4*)( param_1[2] + 0xc ) = 0;
      *param_1 = ZEXT416(uVar9);
      param_1[1] = ZEXT416(uVar9);
      return param_1;
   }

   plVar11 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x2d8 ) ) * 8 ) );
   iVar1 = (int)plVar11[1];
   if (iVar1 != (int)( param_3 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_001047bc;
   }

   lVar2 = *plVar11;
   if (lVar2 == 0) goto LAB_001047bc;
   lVar2 = *(long*)( lVar2 + 0x38 );
   lVar12 = (long)param_4;
   if (param_4 < 0) {
      if (lVar2 != 0) {
         lVar13 = *(long*)( lVar2 + -8 );
         goto LAB_0010476d;
      }

   }
 else if (lVar2 != 0) {
      lVar13 = *(long*)( lVar2 + -8 );
      if (lVar12 < lVar13) {
         puVar10 = (undefined8*)( lVar2 + lVar12 * 0x90 );
         uVar4 = puVar10[1];
         uVar5 = puVar10[2];
         uVar6 = puVar10[3];
         uVar7 = puVar10[4];
         uVar8 = puVar10[5];
         *(undefined8*)*param_1 = *puVar10;
         *(undefined8*)( *param_1 + 8 ) = uVar4;
         *(undefined8*)param_1[1] = uVar5;
         *(undefined8*)( param_1[1] + 8 ) = uVar6;
         *(undefined8*)param_1[2] = uVar7;
         *(undefined8*)( param_1[2] + 8 ) = uVar8;
         return param_1;
      }

      goto LAB_0010476d;
   }

   lVar13 = 0;
   LAB_0010476d:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar12, lVar13, "p_index", "shapes.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar3 = (code*)invalidInstructionException();
   ( *pcVar3 )();
}
/* GodotPhysicsServer3D::area_remove_shape(RID, int) */void GodotPhysicsServer3D::area_remove_shape(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            GodotCollisionObject3D::remove_shape((int)lVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_remove_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x133, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_remove_shape(RID, int) */void GodotPhysicsServer3D::body_remove_shape(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            GodotCollisionObject3D::remove_shape((int)lVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_remove_shape", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x22a, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_clear_shapes(RID) */void GodotPhysicsServer3D::area_clear_shapes(GodotPhysicsServer3D *this, ulong param_2) {
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
               GodotCollisionObject3D::remove_shape((int)lVar2);
            }
;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_clear_shapes", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x13a, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_clear_shapes(RID) */void GodotPhysicsServer3D::body_clear_shapes(GodotPhysicsServer3D *this, ulong param_2) {
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
               GodotCollisionObject3D::remove_shape((int)lVar2);
            }
;
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_clear_shapes", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x231, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_set_shape_disabled(RID, int, bool) */undefined8 GodotPhysicsServer3D::area_set_shape_disabled(long param_1, ulong param_2, int param_3) {
   long lVar1;
   undefined8 uVar2;
   long *plVar3;
   int iVar4;
   long lVar5;
   if (( param_2 == 0 ) || ( *(uint*)( param_1 + 0x284 ) <= (uint)param_2 )) {
      LAB_00104ca0:uVar2 = _err_print_error("area_set_shape_disabled", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x143, "Parameter \"area\" is null.", 0, 0);
      return uVar2;
   }

   plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
   iVar4 = (int)plVar3[1];
   if (iVar4 != (int)( param_2 >> 0x20 )) {
      if (iVar4 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00104ca0;
   }

   lVar5 = *plVar3;
   if (lVar5 == 0) goto LAB_00104ca0;
   lVar1 = *(long*)( lVar5 + 0x38 );
   if (param_3 < 0) {
      if (lVar1 != 0) {
         iVar4 = (int)*(undefined8*)( lVar1 + -8 );
         goto LAB_00104c45;
      }

   }
 else if (lVar1 != 0) {
      iVar4 = (int)*(undefined8*)( lVar1 + -8 );
      if (param_3 < iVar4) {
         if (( *(long*)( lVar5 + 0x40 ) != 0 ) && ( *(char*)( param_1 + 0x182 ) != '\0' )) {
            uVar2 = 0;
            _err_print_error("area_set_shape_disabled", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x145, "Condition \"area->get_space() && flushing_queries\" is true.", "Can\'t change this state while flushing queries. Use call_deferred() or set_deferred() to change monitoring state instead.", 0);
            return uVar2;
         }

         uVar2 = GodotCollisionObject3D::set_shape_disabled((int)lVar5, SUB41(param_3, 0));
         return uVar2;
      }

      LAB_00104c45:lVar5 = (long)iVar4;
      goto LAB_00104c48;
   }

   lVar5 = 0;
   LAB_00104c48:uVar2 = _err_print_index_error("area_set_shape_disabled", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x144, (long)param_3, lVar5, "p_shape_idx", "area->get_shape_count()", "", false, false);
   return uVar2;
}
/* GodotPhysicsServer3D::body_set_shape_disabled(RID, int, bool) */undefined8 GodotPhysicsServer3D::body_set_shape_disabled(long param_1, ulong param_2, int param_3) {
   long lVar1;
   undefined8 uVar2;
   long *plVar3;
   int iVar4;
   long lVar5;
   if (( param_2 == 0 ) || ( *(uint*)( param_1 + 0x2dc ) <= (uint)param_2 )) {
      LAB_00104e60:uVar2 = _err_print_error("body_set_shape_disabled", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x21a, "Parameter \"body\" is null.", 0, 0);
      return uVar2;
   }

   plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
   iVar4 = (int)plVar3[1];
   if (iVar4 != (int)( param_2 >> 0x20 )) {
      if (iVar4 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_00104e60;
   }

   lVar5 = *plVar3;
   if (lVar5 == 0) goto LAB_00104e60;
   lVar1 = *(long*)( lVar5 + 0x38 );
   if (param_3 < 0) {
      if (lVar1 != 0) {
         iVar4 = (int)*(undefined8*)( lVar1 + -8 );
         goto LAB_00104e05;
      }

   }
 else if (lVar1 != 0) {
      iVar4 = (int)*(undefined8*)( lVar1 + -8 );
      if (param_3 < iVar4) {
         if (( *(long*)( lVar5 + 0x40 ) != 0 ) && ( *(char*)( param_1 + 0x182 ) != '\0' )) {
            uVar2 = 0;
            _err_print_error("body_set_shape_disabled", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x21c, "Condition \"body->get_space() && flushing_queries\" is true.", "Can\'t change this state while flushing queries. Use call_deferred() or set_deferred() to change monitoring state instead.", 0);
            return uVar2;
         }

         uVar2 = GodotCollisionObject3D::set_shape_disabled((int)lVar5, SUB41(param_3, 0));
         return uVar2;
      }

      LAB_00104e05:lVar5 = (long)iVar4;
      goto LAB_00104e08;
   }

   lVar5 = 0;
   LAB_00104e08:uVar2 = _err_print_index_error("body_set_shape_disabled", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x21b, (long)param_3, lVar5, "p_shape_idx", "body->get_shape_count()", "", false, false);
   return uVar2;
}
/* GodotPhysicsServer3D::area_set_transform(RID, Transform3D const&) */void GodotPhysicsServer3D::area_set_transform(long param_1, ulong param_2) {
   int iVar1;
   Transform3D *pTVar2;
   undefined8 *puVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x284 ) )) {
      puVar3 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
      iVar1 = *(int*)( puVar3 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pTVar2 = (Transform3D*)*puVar3;
         if (pTVar2 != (Transform3D*)0x0) {
            GodotArea3D::set_transform(pTVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_set_transform", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x169, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_set_monitorable(RID, bool) */void GodotPhysicsServer3D::area_set_monitorable(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x284 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x270 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( *(char*)( param_1 + 0x182 ) != '\0' )) {
               _err_print_error("area_set_monitorable", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x19e, "Condition \"area->get_space() && flushing_queries\" is true.", "Can\'t change this state while flushing queries. Use call_deferred() or set_deferred() to change monitoring state instead.", 0, 0);
               return;
            }

            GodotArea3D::set_monitorable(SUB81(lVar2, 0));
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("area_set_monitorable", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x19d, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_set_monitor_callback(RID, Callable const&) */void GodotPhysicsServer3D::area_set_monitor_callback(GodotPhysicsServer3D *this, ulong param_2, Callable *param_3) {
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

               GodotArea3D::set_monitor_callback(pCVar2);
               Callable::~Callable((Callable*)&local_38);
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_00105253;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("area_set_monitor_callback", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1a5, "Parameter \"area\" is null.", 0, 0);
      return;
   }

   LAB_00105253:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer3D::area_set_area_monitor_callback(RID, Callable const&) */void GodotPhysicsServer3D::area_set_area_monitor_callback(GodotPhysicsServer3D *this, ulong param_2, Callable *param_3) {
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

               GodotArea3D::set_area_monitor_callback(pCVar2);
               Callable::~Callable((Callable*)&local_38);
               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("area_set_area_monitor_callback", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1b3, "Parameter \"area\" is null.", 0, 0);
      return;
   }

   LAB_001053b3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer3D::body_set_mode(RID, PhysicsServer3D::BodyMode) */void GodotPhysicsServer3D::body_set_mode(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
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
               GodotBody3D::set_mode(lVar2, param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_mode", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1e0, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_get_mode(RID) const */undefined8 GodotPhysicsServer3D::body_get_mode(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar3 != 0) {
            uVar2 = GodotBody3D::get_mode();
            return uVar2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_mode", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x1e7, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_param(RID, PhysicsServer3D::BodyParameter, Variant const&) */void GodotPhysicsServer3D::body_set_param(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined8 param_4) {
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
               GodotBody3D::set_param(lVar2, param_3, param_4);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x295, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_get_param(RID, PhysicsServer3D::BodyParameter) const */Variant *GodotPhysicsServer3D::body_get_param(Variant *param_1, long param_2, ulong param_3, undefined4 param_4) {
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
            GodotBody3D::get_param(param_1, lVar3, param_4);
            goto LAB_00105696;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x29c, "Parameter \"body\" is null.", 0, 0);
   Variant::Variant(param_1, 0);
   LAB_00105696:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::body_reset_mass_properties(RID) */void GodotPhysicsServer3D::body_reset_mass_properties(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long *plVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar2 != 0) {
            GodotBody3D::reset_mass_properties();
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_reset_mass_properties", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2a3, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_state(RID, PhysicsServer3D::BodyState, Variant const&) */void GodotPhysicsServer3D::body_set_state(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined8 param_4) {
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
               GodotBody3D::set_state(lVar2, param_3, param_4);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2aa, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_get_state(RID, PhysicsServer3D::BodyState) const */undefined4 *GodotPhysicsServer3D::body_get_state(undefined4 *param_1, long param_2, ulong param_3, undefined4 param_4) {
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
            GodotBody3D::get_state(param_1, lVar3, param_4);
            goto LAB_00105936;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_get_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2b1, "Parameter \"body\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   LAB_00105936:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::body_apply_central_force(RID, Vector3 const&) */void GodotPhysicsServer3D::body_apply_central_force(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(ulong*)( lVar2 + 0x218 ) = CONCAT44((float)( ( ulong ) * param_3 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar2 + 0x218 ) >> 0x20 ), (float)*param_3 + (float)*(undefined8*)( lVar2 + 0x218 ));
            *(float*)( lVar2 + 0x220 ) = *(float*)( lVar2 + 0x220 ) + *(float*)( param_3 + 1 );
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_central_force", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2d6, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_apply_force(RID, Vector3 const&, Vector3 const&) */void GodotPhysicsServer3D::body_apply_force(GodotPhysicsServer3D *this, ulong param_2, float *param_3, float *param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   long *plVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar8 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar6 = (int)plVar8[1];
      if (iVar6 == (int)( param_2 >> 0x20 )) {
         lVar7 = *plVar8;
         if (lVar7 != 0) {
            *(float*)( lVar7 + 0x218 ) = *(float*)( lVar7 + 0x218 ) + *param_3;
            fVar1 = *param_4;
            fVar2 = *param_3;
            *(float*)( lVar7 + 0x21c ) = *(float*)( lVar7 + 0x21c ) + param_3[1];
            *(float*)( lVar7 + 0x220 ) = *(float*)( lVar7 + 0x220 ) + param_3[2];
            uVar4 = *(undefined8*)param_4;
            fVar3 = param_3[2];
            fVar12 = (float)*(undefined8*)( lVar7 + 0x1f8 );
            fVar9 = (float)( (ulong)uVar4 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar7 + 0x1f8 ) >> 0x20 );
            fVar11 = param_4[2] - (float)*(undefined8*)( lVar7 + 0x200 );
            uVar5 = *(undefined8*)param_3;
            fVar10 = (float)( (ulong)uVar5 >> 0x20 );
            *(float*)( lVar7 + 0x224 ) = ( fVar9 * fVar3 - fVar10 * fVar11 ) + *(float*)( lVar7 + 0x224 );
            *(ulong*)( lVar7 + 0x228 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar7 + 0x228 ) >> 0x20 ) + ( fVar10 * ( fVar1 - fVar12 ) - fVar2 * fVar9 ), (float)*(undefined8*)( lVar7 + 0x228 ) + ( (float)uVar5 * fVar11 - fVar3 * ( (float)uVar4 - fVar12 ) ));
            if (( *(long*)( lVar7 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar7 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar7, 0));
               return;
            }

            return;
         }

      }
 else if (iVar6 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_force", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2de, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_apply_torque(RID, Vector3 const&) */void GodotPhysicsServer3D::body_apply_torque(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(ulong*)( lVar2 + 0x224 ) = CONCAT44((float)( ( ulong ) * param_3 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar2 + 0x224 ) >> 0x20 ), (float)*param_3 + (float)*(undefined8*)( lVar2 + 0x224 ));
            *(float*)( lVar2 + 0x22c ) = *(float*)( lVar2 + 0x22c ) + *(float*)( param_3 + 1 );
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_torque", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2e6, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_add_constant_central_force(RID, Vector3 const&) */void GodotPhysicsServer3D::body_add_constant_central_force(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(ulong*)( lVar2 + 0x230 ) = CONCAT44((float)( ( ulong ) * param_3 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar2 + 0x230 ) >> 0x20 ), (float)*param_3 + (float)*(undefined8*)( lVar2 + 0x230 ));
            *(float*)( lVar2 + 0x238 ) = *(float*)( lVar2 + 0x238 ) + *(float*)( param_3 + 1 );
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_constant_central_force", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2ee, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_add_constant_force(RID, Vector3 const&, Vector3 const&) */void GodotPhysicsServer3D::body_add_constant_force(GodotPhysicsServer3D *this, ulong param_2, float *param_3, float *param_4) {
   float fVar1;
   float fVar2;
   float fVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   long *plVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar8 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar6 = (int)plVar8[1];
      if (iVar6 == (int)( param_2 >> 0x20 )) {
         lVar7 = *plVar8;
         if (lVar7 != 0) {
            *(float*)( lVar7 + 0x230 ) = *(float*)( lVar7 + 0x230 ) + *param_3;
            fVar1 = *param_4;
            fVar2 = *param_3;
            *(float*)( lVar7 + 0x234 ) = *(float*)( lVar7 + 0x234 ) + param_3[1];
            *(float*)( lVar7 + 0x238 ) = *(float*)( lVar7 + 0x238 ) + param_3[2];
            uVar4 = *(undefined8*)param_4;
            fVar3 = param_3[2];
            fVar12 = (float)*(undefined8*)( lVar7 + 0x1f8 );
            fVar9 = (float)( (ulong)uVar4 >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( lVar7 + 0x1f8 ) >> 0x20 );
            fVar10 = param_4[2] - (float)*(undefined8*)( lVar7 + 0x200 );
            uVar5 = *(undefined8*)param_3;
            fVar11 = (float)( (ulong)uVar5 >> 0x20 );
            *(float*)( lVar7 + 0x23c ) = ( fVar9 * fVar3 - fVar10 * fVar11 ) + *(float*)( lVar7 + 0x23c );
            *(ulong*)( lVar7 + 0x240 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar7 + 0x240 ) >> 0x20 ) + ( ( fVar1 - fVar12 ) * fVar11 - fVar2 * fVar9 ), (float)*(undefined8*)( lVar7 + 0x240 ) + ( fVar10 * (float)uVar5 - fVar3 * ( (float)uVar4 - fVar12 ) ));
            if (( *(long*)( lVar7 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar7 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar7, 0));
               return;
            }

            return;
         }

      }
 else if (iVar6 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_constant_force", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2f6, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_add_constant_torque(RID, Vector3 const&) */void GodotPhysicsServer3D::body_add_constant_torque(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            *(ulong*)( lVar2 + 0x23c ) = CONCAT44((float)( ( ulong ) * param_3 >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar2 + 0x23c ) >> 0x20 ), (float)*param_3 + (float)*(undefined8*)( lVar2 + 0x23c ));
            *(float*)( lVar2 + 0x244 ) = *(float*)( lVar2 + 0x244 ) + *(float*)( param_3 + 1 );
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_constant_torque", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2fe, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_constant_force(RID, Vector3 const&) */void GodotPhysicsServer3D::body_set_constant_force(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
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
            *(undefined8*)( lVar2 + 0x230 ) = *param_3;
            *(undefined4*)( lVar2 + 0x238 ) = *(undefined4*)( param_3 + 1 );
            cVar3 = Vector3::is_zero_approx();
            if (( ( cVar3 == '\0' ) && ( *(long*)( lVar2 + 0x40 ) != 0 ) ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_constant_force", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x306, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_constant_torque(RID, Vector3 const&) */void GodotPhysicsServer3D::body_set_constant_torque(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
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
            *(undefined8*)( lVar2 + 0x23c ) = *param_3;
            *(undefined4*)( lVar2 + 0x244 ) = *(undefined4*)( param_3 + 1 );
            cVar3 = Vector3::is_zero_approx();
            if (( ( cVar3 == '\0' ) && ( *(long*)( lVar2 + 0x40 ) != 0 ) ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_constant_torque", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x316, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_axis_lock(RID, PhysicsServer3D::BodyAxis, bool) */void GodotPhysicsServer3D::body_set_axis_lock(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined1 param_4) {
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
               GodotBody3D::set_axis_lock(lVar2, param_3, param_4);
               if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
                  GodotBody3D::set_active(SUB81(lVar2, 0));
                  return;
               }

               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_set_axis_lock", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x335, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_is_axis_locked(RID, PhysicsServer3D::BodyAxis) const */undefined8 GodotPhysicsServer3D::body_is_axis_locked(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long *plVar4;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x2dc )) {
         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
         iVar1 = (int)plVar4[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar4;
            if (lVar2 != 0) {
               uVar3 = GodotBody3D::is_axis_locked(lVar2, param_3);
               return uVar3;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("body_is_axis_locked", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x33d, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::body_set_state_sync_callback(RID, Callable const&) */void GodotPhysicsServer3D::body_set_state_sync_callback(long param_1, ulong param_2) {
   int iVar1;
   Callable *pCVar2;
   undefined8 *puVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      puVar3 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar3 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pCVar2 = (Callable*)*puVar3;
         if (pCVar2 != (Callable*)0x0) {
            GodotBody3D::set_state_sync_callback(pCVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_state_sync_callback", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x380, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_force_integration_callback(RID, Callable const&, Variant const&)
    */void GodotPhysicsServer3D::body_set_force_integration_callback(long param_1, ulong param_2, Variant *param_3) {
   int iVar1;
   Callable *pCVar2;
   undefined8 *puVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x2dc ) )) {
      puVar3 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar3 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pCVar2 = (Callable*)*puVar3;
         if (pCVar2 != (Callable*)0x0) {
            GodotBody3D::set_force_integration_callback(pCVar2, param_3);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_set_force_integration_callback", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x386, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_update_rendering_server(RID,
   PhysicsServer3DRenderingServerHandler*) */void GodotPhysicsServer3D::soft_body_update_rendering_server(long param_1, ulong param_2) {
   int iVar1;
   PhysicsServer3DRenderingServerHandler *pPVar2;
   undefined8 *puVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x334 ) )) {
      puVar3 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 8 ) );
      iVar1 = *(int*)( puVar3 + 1 );
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         pPVar2 = (PhysicsServer3DRenderingServerHandler*)*puVar3;
         if (pPVar2 != (PhysicsServer3DRenderingServerHandler*)0x0) {
            GodotSoftBody3D::update_rendering_server(pPVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_update_rendering_server", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3b9, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_set_state(RID, PhysicsServer3D::BodyState, Variant const&) */void GodotPhysicsServer3D::soft_body_set_state(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined8 param_4) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x334 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               GodotSoftBody3D::set_state(lVar2, param_3, param_4);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("soft_body_set_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x40f, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_get_state(RID, PhysicsServer3D::BodyState) const */undefined4 *GodotPhysicsServer3D::soft_body_get_state(undefined4 *param_1, long param_2, ulong param_3, undefined4 param_4) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( param_2 + 0x334 ) )) {
      plVar4 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x330 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         lVar3 = *plVar4;
         if (lVar3 != 0) {
            GodotSoftBody3D::get_state(param_1, lVar3, param_4);
            goto LAB_001068e6;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x416, "Parameter \"soft_body\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   LAB_001068e6:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::soft_body_set_transform(RID, Transform3D const&) */void GodotPhysicsServer3D::soft_body_set_transform(GodotPhysicsServer3D *this, ulong param_2, Transform3D *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x334 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               Variant::Variant((Variant*)local_38, param_3);
               GodotSoftBody3D::set_state(lVar2, 0, local_38);
               if (Variant::needs_deinit[local_38[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_00106ad6;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("soft_body_set_transform", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x41d, "Parameter \"soft_body\" is null.", 0, 0);
      return;
   }

   LAB_00106ad6:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer3D::soft_body_set_simulation_precision(RID, int) */void GodotPhysicsServer3D::soft_body_set_simulation_precision(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            GodotSoftBody3D::set_iteration_count((int)lVar2);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_set_simulation_precision", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x42b, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_set_total_mass(RID, float) */void GodotPhysicsServer3D::soft_body_set_total_mass(float param_1, GodotPhysicsServer3D *this, ulong param_3) {
   int iVar1;
   long *plVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         if (*plVar2 != 0) {
            GodotSoftBody3D::set_total_mass(param_1);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_set_total_mass", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x439, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_set_linear_stiffness(RID, float) */void GodotPhysicsServer3D::soft_body_set_linear_stiffness(float param_1, GodotPhysicsServer3D *this, ulong param_3) {
   int iVar1;
   long *plVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         if (*plVar2 != 0) {
            GodotSoftBody3D::set_linear_stiffness(param_1);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_set_linear_stiffness", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x447, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_set_pressure_coefficient(RID, float) */void GodotPhysicsServer3D::soft_body_set_pressure_coefficient(float param_1, GodotPhysicsServer3D *this, ulong param_3) {
   int iVar1;
   long *plVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         if (*plVar2 != 0) {
            GodotSoftBody3D::set_pressure_coefficient(param_1);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_set_pressure_coefficient", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x455, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_set_damping_coefficient(RID, float) */void GodotPhysicsServer3D::soft_body_set_damping_coefficient(float param_1, GodotPhysicsServer3D *this, ulong param_3) {
   int iVar1;
   long *plVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         if (*plVar2 != 0) {
            GodotSoftBody3D::set_damping_coefficient(param_1);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_set_damping_coefficient", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x463, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_set_drag_coefficient(RID, float) */void GodotPhysicsServer3D::soft_body_set_drag_coefficient(float param_1, GodotPhysicsServer3D *this, ulong param_3) {
   int iVar1;
   long *plVar2;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         if (*plVar2 != 0) {
            GodotSoftBody3D::set_drag_coefficient(param_1);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_set_drag_coefficient", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x471, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_set_mesh(RID, RID) */void GodotPhysicsServer3D::soft_body_set_mesh(GodotPhysicsServer3D *this, ulong param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            GodotSoftBody3D::set_mesh(lVar2, param_3);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_set_mesh", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x47f, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_move_point(RID, int, Vector3 const&) */void GodotPhysicsServer3D::soft_body_move_point(long param_1, ulong param_2, uint param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( param_1 + 0x334 )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            lVar2 = *plVar3;
            if (lVar2 != 0) {
               GodotSoftBody3D::set_vertex_position((int)lVar2, (Vector3*)(ulong)param_3);
               return;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   _err_print_error("soft_body_move_point", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x48d, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_get_point_global_position(RID, int) const */undefined8 GodotPhysicsServer3D::soft_body_get_point_global_position(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   long in_FS_OFFSET;
   undefined8 uVar5;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x334 ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar3 = *plVar4;
         if (lVar3 != 0) {
            if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar5 = GodotSoftBody3D::get_vertex_position((int)lVar3);
               return uVar5;
            }

            goto LAB_0010721b;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_get_point_global_position", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x494, "Parameter \"soft_body\" is null.", 0, 0);
   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 0;
   }

   LAB_0010721b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer3D::soft_body_remove_all_pinned_points(RID) */void GodotPhysicsServer3D::soft_body_remove_all_pinned_points(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long *plVar2;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         if (*plVar2 != 0) {
            GodotSoftBody3D::unpin_all_vertices();
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_remove_all_pinned_points", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x49b, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_pin_point(RID, int, bool) */void GodotPhysicsServer3D::soft_body_pin_point(GodotPhysicsServer3D *this, ulong param_2, undefined8 param_3, char param_4) {
   long lVar1;
   long *plVar2;
   int iVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar3 = (int)plVar2[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar2;
         if (lVar1 != 0) {
            iVar3 = (int)lVar1;
            if (param_4 != '\0') {
               GodotSoftBody3D::pin_vertex(iVar3);
               return;
            }

            GodotSoftBody3D::unpin_vertex(iVar3);
            return;
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_pin_point", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x4a2, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_is_point_pinned(RID, int) const */undefined8 GodotPhysicsServer3D::soft_body_is_point_pinned(long param_1, ulong param_2) {
   int iVar1;
   long lVar2;
   undefined8 uVar3;
   long *plVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( param_1 + 0x334 ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 0x10 + *(long*)( *(long*)( param_1 + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( param_1 + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar4;
         if (lVar2 != 0) {
            uVar3 = GodotSoftBody3D::is_vertex_pinned((int)lVar2);
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_is_point_pinned", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x4ad, "Parameter \"soft_body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::pin_joint_set_param(RID, PhysicsServer3D::PinJointParam, float) */void GodotPhysicsServer3D::pin_joint_set_param(undefined4 param_1, GodotPhysicsServer3D *this, ulong param_3, undefined4 param_4) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 == 0) {
               GodotPinJoint3D::set_param(plVar3, param_4);
               return;
            }

            uVar4 = 0x4e2;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true.";
            goto LAB_00107532;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         param_1 = _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x4e1;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00107532:_err_print_error(param_1, "pin_joint_set_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::pin_joint_get_param(RID, PhysicsServer3D::PinJointParam) const */undefined8 GodotPhysicsServer3D::pin_joint_get_param(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long *plVar2;
   undefined8 uVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar2 + 0x38 ) )(plVar2);
            if (iVar1 != 0) {
               _err_print_error("pin_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x4ea, "Condition \"joint->get_type() != JOINT_TYPE_PIN\" is true. Returning: 0", 0, 0);
               return 0;
            }

            uVar3 = GodotPinJoint3D::get_param(plVar2, param_3);
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("pin_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x4e9, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::hinge_joint_set_param(RID, PhysicsServer3D::HingeJointParam, float) */void GodotPhysicsServer3D::hinge_joint_set_param(undefined4 param_1, GodotPhysicsServer3D *this, ulong param_3, undefined4 param_4) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 == 1) {
               GodotHingeJoint3D::set_param(plVar3, param_4);
               return;
            }

            uVar4 = 0x542;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true.";
            goto LAB_00107762;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         param_1 = _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x541;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00107762:_err_print_error(param_1, "hinge_joint_set_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::hinge_joint_get_param(RID, PhysicsServer3D::HingeJointParam) const */undefined8 GodotPhysicsServer3D::hinge_joint_get_param(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long *plVar2;
   undefined8 uVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar2 + 0x38 ) )(plVar2);
            if (iVar1 != 1) {
               _err_print_error("hinge_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x54a, "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true. Returning: 0", 0, 0);
               return 0;
            }

            uVar3 = GodotHingeJoint3D::get_param(plVar2, param_3);
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("hinge_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x549, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::hinge_joint_set_flag(RID, PhysicsServer3D::HingeJointFlag, bool) */void GodotPhysicsServer3D::hinge_joint_set_flag(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined1 param_4) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 == 1) {
               GodotHingeJoint3D::set_flag(plVar3, param_3, param_4);
               return;
            }

            uVar4 = 0x552;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true.";
            goto LAB_00107982;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x551;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00107982:_err_print_error("hinge_joint_set_flag", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::hinge_joint_get_flag(RID, PhysicsServer3D::HingeJointFlag) const */undefined8 GodotPhysicsServer3D::hinge_joint_get_flag(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 != 1) {
               _err_print_error("hinge_joint_get_flag", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x55a, "Condition \"joint->get_type() != JOINT_TYPE_HINGE\" is true. Returning: false", 0, 0);
               return 0;
            }

            uVar2 = GodotHingeJoint3D::get_flag(plVar3, param_3);
            return uVar2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("hinge_joint_get_flag", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x559, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::slider_joint_set_param(RID, PhysicsServer3D::SliderJointParam, float) */void GodotPhysicsServer3D::slider_joint_set_param(undefined4 param_1, GodotPhysicsServer3D *this, ulong param_3, undefined4 param_4) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 == 2) {
               GodotSliderJoint3D::set_param(plVar3, param_4);
               return;
            }

            uVar4 = 0x5a7;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_SLIDER\" is true.";
            goto LAB_00107bb2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         param_1 = _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x5a6;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00107bb2:_err_print_error(param_1, "slider_joint_set_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::slider_joint_get_param(RID, PhysicsServer3D::SliderJointParam) const */undefined8 GodotPhysicsServer3D::slider_joint_get_param(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long *plVar2;
   undefined8 uVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar2 + 0x38 ) )(plVar2);
            if (iVar1 != 3) {
               _err_print_error("slider_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x5af, "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true. Returning: 0", 0, 0);
               return 0;
            }

            uVar3 = GodotSliderJoint3D::get_param(plVar2, param_3);
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("slider_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x5ae, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::cone_twist_joint_set_param(RID, PhysicsServer3D::ConeTwistJointParam,
   float) */void GodotPhysicsServer3D::cone_twist_joint_set_param(undefined4 param_1, GodotPhysicsServer3D *this, ulong param_3, undefined4 param_4) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 == 3) {
               GodotConeTwistJoint3D::set_param(plVar3, param_4);
               return;
            }

            uVar4 = 0x5cf;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true.";
            goto LAB_00107de2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         param_1 = _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x5ce;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00107de2:_err_print_error(param_1, "cone_twist_joint_set_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::cone_twist_joint_get_param(RID, PhysicsServer3D::ConeTwistJointParam) const
    */undefined8 GodotPhysicsServer3D::cone_twist_joint_get_param(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3) {
   int iVar1;
   long *plVar2;
   undefined8 uVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar2 + 0x38 ) )(plVar2);
            if (iVar1 != 3) {
               _err_print_error("cone_twist_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x5d7, "Condition \"joint->get_type() != JOINT_TYPE_CONE_TWIST\" is true. Returning: 0", 0, 0);
               return 0;
            }

            uVar3 = GodotConeTwistJoint3D::get_param(plVar2, param_3);
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("cone_twist_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x5d6, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::generic_6dof_joint_set_param(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam, float) */void GodotPhysicsServer3D::generic_6dof_joint_set_param(undefined4 param_1, GodotPhysicsServer3D *this, ulong param_3, undefined4 param_4, undefined4 param_5) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 == 4) {
               GodotGeneric6DOFJoint3D::set_param(plVar3, param_4, param_5);
               return;
            }

            uVar4 = 0x5f7;
            pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true.";
            goto LAB_00108012;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         param_1 = _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar4 = 0x5f6;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00108012:_err_print_error(param_1, "generic_6dof_joint_set_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::generic_6dof_joint_get_param(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisParam) const */undefined8 GodotPhysicsServer3D::generic_6dof_joint_get_param(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined4 param_4) {
   int iVar1;
   long *plVar2;
   undefined8 uVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar2[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar2 = (long*)*plVar2;
         if (plVar2 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar2 + 0x38 ) )(plVar2);
            if (iVar1 != 4) {
               _err_print_error("generic_6dof_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x5ff, "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true. Returning: 0", 0, 0);
               return 0;
            }

            uVar3 = GodotGeneric6DOFJoint3D::get_param(plVar2, param_3, param_4);
            return uVar3;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("generic_6dof_joint_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x5fe, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::generic_6dof_joint_set_flag(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag, bool) */void GodotPhysicsServer3D::generic_6dof_joint_set_flag(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined4 param_4, undefined1 param_5) {
   int iVar1;
   char *pcVar2;
   long *plVar3;
   undefined8 uVar4;
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x38c )) {
         plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
         iVar1 = (int)plVar3[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            plVar3 = (long*)*plVar3;
            if (plVar3 != (long*)0x0) {
               iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
               if (iVar1 == 4) {
                  GodotGeneric6DOFJoint3D::set_flag(plVar3, param_3, param_4, param_5);
                  return;
               }

               uVar4 = 0x607;
               pcVar2 = "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true.";
               goto LAB_00108242;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   uVar4 = 0x606;
   pcVar2 = "Parameter \"joint\" is null.";
   LAB_00108242:_err_print_error("generic_6dof_joint_set_flag", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar4, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::generic_6dof_joint_get_flag(RID, Vector3::Axis,
   PhysicsServer3D::G6DOFJointAxisFlag) const */undefined8 GodotPhysicsServer3D::generic_6dof_joint_get_flag(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined4 param_4) {
   int iVar1;
   undefined8 uVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x38c ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar3 = (long*)*plVar3;
         if (plVar3 != (long*)0x0) {
            iVar1 = ( **(code**)( *plVar3 + 0x38 ) )(plVar3);
            if (iVar1 != 4) {
               _err_print_error("generic_6dof_joint_get_flag", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x60f, "Condition \"joint->get_type() != JOINT_TYPE_6DOF\" is true. Returning: false", 0, 0);
               return 0;
            }

            uVar2 = GodotGeneric6DOFJoint3D::get_flag(plVar3, param_3, param_4);
            return uVar2;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("generic_6dof_joint_get_flag", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x60e, "Parameter \"joint\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::init() */void GodotPhysicsServer3D::init(GodotPhysicsServer3D *this) {
   GodotStep3D *this_00;
   this_00 = (GodotStep3D*)operator_new(0x40, "");
   GodotStep3D::GodotStep3D(this_00);
   *(GodotStep3D**)( this + 0x188 ) = this_00;
   return;
}
/* GodotPhysicsServer3D::finish() */void GodotPhysicsServer3D::finish(GodotPhysicsServer3D *this) {
   GodotStep3D *this_00;
   this_00 = *(GodotStep3D**)( this + 0x188 );
   GodotStep3D::~GodotStep3D(this_00);
   Memory::free_static(this_00, false);
   return;
}
/* GodotPhysicsServer3D::area_set_space(RID, RID) */void GodotPhysicsServer3D::area_set_space(GodotPhysicsServer3D *this, ulong param_2, ulong param_3) {
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
               LAB_00108494:if (lVar6 != plVar3[8]) {
                  if (( plVar3[0x43] != 0 ) && ( *(int*)( (long)plVar3 + 0x23c ) != 0 )) {
                     if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar3 + 0x47 ) * 4 ) != 0) {
                        memset((void*)plVar3[0x46], 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar3 + 0x47 ) * 4 ) << 2);
                     }

                     *(undefined4*)( (long)plVar3 + 0x23c ) = 0;
                  }

                  /* WARNING: Could not recover jumptable at 0x001084f5. Too many branches */
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
                  if (lVar6 != 0) goto LAB_00108494;
               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            uVar5 = 0xe7;
            pcVar2 = "Parameter \"space\" is null.";
            goto LAB_00108582;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar5 = 0xe2;
   pcVar2 = "Parameter \"area\" is null.";
   LAB_00108582:_err_print_error("area_set_space", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar5, pcVar2, 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_space(RID, RID) */void GodotPhysicsServer3D::body_set_space(GodotPhysicsServer3D *this, ulong param_2, ulong param_3) {
   int iVar1;
   uint uVar2;
   char *pcVar3;
   long *plVar4;
   long *plVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar4[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         plVar4 = (long*)*plVar4;
         if (plVar4 != (long*)0x0) {
            lVar8 = 0;
            if (param_3 == 0) {
               LAB_0010868d:if (lVar8 != plVar4[8]) {
                  if (( plVar4[0x5f] != 0 ) && ( *(int*)( (long)plVar4 + 0x31c ) != 0 )) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar4 + 99 ) * 4 );
                     if (uVar2 != 0) {
                        lVar7 = 0;
                        do {
                           if (*(int*)( plVar4[0x60] + lVar7 ) != 0) {
                              *(int*)( plVar4[0x60] + lVar7 ) = 0;
                              Memory::free_static(*(void**)( plVar4[0x5f] + lVar7 * 2 ), false);
                              *(undefined8*)( plVar4[0x5f] + lVar7 * 2 ) = 0;
                           }

                           lVar7 = lVar7 + 4;
                        }
 while ( lVar7 != (ulong)uVar2 << 2 );
                     }

                     *(undefined4*)( (long)plVar4 + 0x31c ) = 0;
                     *(undefined1(*) [16])( plVar4 + 0x61 ) = (undefined1[16])0x0;
                  }

                  /* WARNING: Could not recover jumptable at 0x0010873d. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( **(code**)( *plVar4 + 0x28 ) )(plVar4, lVar8);
                  return;
               }

               return;
            }

            if ((uint)param_3 < *(uint*)( this + 0x22c )) {
               plVar5 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
               iVar1 = (int)plVar5[1];
               if (iVar1 == (int)( param_3 >> 0x20 )) {
                  lVar8 = *plVar5;
                  if (lVar8 != 0) goto LAB_0010868d;
               }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

            }

            uVar6 = 0x1c8;
            pcVar3 = "Parameter \"space\" is null.";
            goto LAB_001087ca;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar6 = 0x1c3;
   pcVar3 = "Parameter \"body\" is null.";
   LAB_001087ca:_err_print_error("body_set_space", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar6, pcVar3, 0, 0);
   return;
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
/* GodotPhysicsServer3D::soft_body_get_collision_exceptions(RID, List<RID, DefaultAllocator>*) */void GodotPhysicsServer3D::soft_body_get_collision_exceptions(GodotPhysicsServer3D *this, ulong param_2, long *param_3) {
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
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar9 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar9[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar9;
         if (lVar2 != 0) {
            lVar6 = *(long*)( lVar2 + 0x2c8 );
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

                  lVar6 = *(long*)( lVar2 + 0x2c8 );
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

   _err_print_error("soft_body_get_collision_exceptions", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x406, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer3D::flush_queries() */void GodotPhysicsServer3D::flush_queries(GodotPhysicsServer3D *this) {
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
   if (this[0x171] != (GodotPhysicsServer3D)0x0) {
      this[0x182] = (GodotPhysicsServer3D)0x1;
      plVar3 = (long*)OS::get_singleton();
      lVar4 = ( **(code**)( *plVar3 + 0x208 ) )(plVar3);
      iVar8 = *(int*)( this + 0x1b4 );
      if (iVar8 != 0) {
         for (iVar9 = 0; GodotSpace3D::call_queries(),iVar9 + 1 < iVar8; iVar9 = iVar9 + 1) {}
      }

      this[0x182] = (GodotPhysicsServer3D)0x0;
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

            Variant::Variant((Variant*)local_88, (double)*(ulong*)( (long)local_68 + lVar10 * 8 ) / __LC191);
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
         Variant::Variant((Variant*)local_88, (double)( ulong )(lVar10 - lVar4) / __LC191);
         Array::push_back((Variant*)local_98);
         if (Variant::needs_deinit[local_88[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_88, "physics_3d");
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
/* GodotPhysicsServer3D::body_get_collision_exceptions(RID, List<RID, DefaultAllocator>*) */void GodotPhysicsServer3D::body_get_collision_exceptions(GodotPhysicsServer3D *this, ulong param_2, long *param_3) {
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
            lVar6 = *(long*)( lVar2 + 0x2b0 );
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

                  lVar6 = *(long*)( lVar2 + 0x2b0 );
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

   _err_print_error("body_get_collision_exceptions", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x353, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::space_get_contacts(RID) const */long GodotPhysicsServer3D::space_get_contacts(long param_1, long param_2, ulong param_3) {
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
            plVar5 = (long*)( *(long*)( lVar2 + 0x6118 ) + -0x10 );
            if (*(long*)( lVar2 + 0x6118 ) != 0) {
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
                  *(undefined8*)( param_1 + 8 ) = *(undefined8*)( lVar2 + 0x6118 );
               }

            }

            return param_1;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("space_get_contacts", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xcf, "Parameter \"space\" is null.", 0, 0);
   *(undefined8*)( param_1 + 8 ) = 0;
   return param_1;
}
/* GodotPhysicsServer3D::body_get_direct_state(RID) */undefined8 GodotPhysicsServer3D::body_get_direct_state(GodotPhysicsServer3D *this, ulong param_2) {
   pthread_mutex_t *__mutex;
   uint uVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   undefined8 uVar5;
   long *plVar6;
   uint uVar7;
   if (( this[0x180] == (GodotPhysicsServer3D)0x0 ) || ( this[0x181] != (GodotPhysicsServer3D)0x0 )) {
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

                  cVar3 = GodotSpace3D::is_locked();
                  if (cVar3 != '\0') {
                     _err_print_error("body_get_direct_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3a9, "Condition \"body->get_space()->is_locked()\" is true. Returning: nullptr", "Body state is inaccessible right now, wait for iteration or physics process notification.", 0, 0);
                     return 0;
                  }

                  uVar5 = GodotBody3D::get_direct_state();
                  return uVar5;
               }

            }
 else if (uVar1 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

         _err_print_error("body_get_direct_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3a3, "Parameter \"body\" is null.", 0, 0);
      }
 else {
         pthread_mutex_unlock(__mutex);
      }

   }
 else {
      _err_print_error("body_get_direct_state", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x39c, "Condition \"(using_threads && !doing_sync)\" is true. Returning: nullptr", "Body state is inaccessible right now, wait for iteration or physics process notification.", 0, 0);
   }

   return 0;
}
/* GodotPhysicsServer3D::area_attach_object_instance_id(RID, ObjectID) */void GodotPhysicsServer3D::area_attach_object_instance_id(GodotPhysicsServer3D *this, ulong param_2, undefined8 param_3) {
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
         if (uVar4 != ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) goto LAB_0010958f;
         pthread_mutex_unlock(__mutex);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar6 )) {
            LAB_00111202:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         uVar6 = *(uint*)( plVar5 + 1 );
         if (uVar4 != uVar6) {
            if (uVar6 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2 >> 0x20);
            }

            goto LAB_00111202;
         }

         param_2 = *(ulong*)( *(long*)( *plVar5 + 200 ) + 0x10 );
         uVar6 = (uint)param_2;
         if (param_2 == 0) goto LAB_0010966b;
      }

   }
 else {
      LAB_0010958f:pthread_mutex_unlock(__mutex);
      if (param_2 == 0) goto LAB_0010966b;
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

   LAB_0010966b:_err_print_error("area_attach_object_instance_id", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x14f, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_get_object_instance_id(RID) const */undefined8 GodotPhysicsServer3D::area_get_object_instance_id(GodotPhysicsServer3D *this, ulong param_2) {
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
            goto LAB_0010977e;
         }

         pthread_mutex_unlock(__mutex);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar5 )) {
            LAB_00111246:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         uVar5 = *(uint*)( plVar4 + 1 );
         if (uVar6 != uVar5) {
            if (uVar5 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, *(long*)( this + 0x218 ));
            }

            goto LAB_00111246;
         }

         param_2 = *(ulong*)( *(long*)( *plVar4 + 200 ) + 0x10 );
         uVar5 = (uint)param_2;
         if (param_2 == 0) goto LAB_0010983d;
      }

   }
 else {
      pthread_mutex_unlock(__mutex);
      LAB_0010977e:if (param_2 == 0) goto LAB_0010983d;
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

   LAB_0010983d:_err_print_error("area_get_object_instance_id", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x159, "Parameter \"area\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::area_set_param(RID, PhysicsServer3D::AreaParameter, Variant const&) */void GodotPhysicsServer3D::area_set_param(GodotPhysicsServer3D *this, ulong param_2, undefined4 param_3, undefined8 param_4) {
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
         if (uVar4 != ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) goto LAB_00109969;
         pthread_mutex_unlock(__mutex);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar6 )) {
            LAB_0011128a:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         uVar6 = *(uint*)( plVar5 + 1 );
         if (uVar4 != uVar6) {
            if (uVar6 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_2 >> 0x20);
            }

            goto LAB_0011128a;
         }

         param_2 = *(ulong*)( *(long*)( *plVar5 + 200 ) + 0x10 );
         uVar6 = (uint)param_2;
         if (param_2 == 0) goto LAB_00109a48;
      }

   }
 else {
      LAB_00109969:pthread_mutex_unlock(__mutex);
      if (param_2 == 0) goto LAB_00109a48;
   }

   if (uVar6 < *(uint*)( this + 0x284 )) {
      plVar5 = (long*)( ( (ulong)uVar6 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( (ulong)uVar6 / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar3 = (int)plVar5[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar1 = *plVar5;
         if (lVar1 != 0) {
            GodotArea3D::set_param(lVar1, param_3, param_4);
            return;
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   LAB_00109a48:_err_print_error("area_set_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x163, "Parameter \"area\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::area_get_param(RID, PhysicsServer3D::AreaParameter) const */undefined4 *GodotPhysicsServer3D::area_get_param(undefined4 *param_1, long param_2, ulong param_3, undefined4 param_4) {
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
         goto LAB_00109b8e;
      }

      uVar5 = ( uint )(param_3 >> 0x20);
      if (uVar5 != ( *(uint*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) goto LAB_00109b7d;
      pthread_mutex_unlock(__mutex);
      if (( param_3 == 0 ) || ( *(uint*)( param_2 + 0x22c ) <= uVar7 )) {
         LAB_001112ce:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      plVar6 = (long*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x218 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( param_2 + 0x228 ) ) * 8 ) );
      uVar7 = *(uint*)( plVar6 + 1 );
      if (uVar5 != uVar7) {
         if (uVar7 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, param_3 >> 0x20);
         }

         goto LAB_001112ce;
      }

      param_3 = *(ulong*)( *(long*)( *plVar6 + 200 ) + 0x10 );
      uVar7 = (uint)param_3;
      if (param_3 != 0) goto LAB_00109b8e;
   }
 else {
      LAB_00109b7d:pthread_mutex_unlock(__mutex);
      if (param_3 != 0) {
         LAB_00109b8e:if (uVar7 < *(uint*)( param_2 + 0x284 )) {
            plVar6 = (long*)( ( (ulong)uVar7 % ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 0x10 + *(long*)( *(long*)( param_2 + 0x270 ) + ( (ulong)uVar7 / ( ulong ) * (uint*)( param_2 + 0x280 ) ) * 8 ) );
            iVar4 = (int)plVar6[1];
            if (iVar4 == (int)( param_3 >> 0x20 )) {
               lVar2 = *plVar6;
               if (lVar2 != 0) {
                  GodotArea3D::get_param(param_1, lVar2, param_4);
                  goto LAB_00109be0;
               }

            }
 else if (iVar4 + 0x80000000U < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
            }

         }

      }

   }

   _err_print_error("area_get_param", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x173, "Parameter \"area\" is null.", 0, 0);
   *param_1 = 0;
   *(undefined1(*) [16])( param_1 + 2 ) = (undefined1[16])0x0;
   LAB_00109be0:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* GodotPhysicsServer3D::space_is_active(RID) const */undefined8 GodotPhysicsServer3D::space_is_active(GodotPhysicsServer3D *this, ulong param_2) {
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

   _err_print_error("space_is_active", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xad, "Parameter \"space\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::joint_clear(RID) */void GodotPhysicsServer3D::joint_clear(GodotPhysicsServer3D *this, ulong param_2) {
   int iVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x38c ) <= (uint)param_2 )) {
      LAB_0010a090:_err_print_error("joint_clear", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x4bd, "Parameter \"joint\" is null.", 0, 0);
      return;
   }

   puVar5 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
   iVar1 = *(int*)( puVar5 + 1 );
   if (iVar1 != (int)( param_2 >> 0x20 )) {
      if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_0010a090;
   }

   plVar2 = (long*)*puVar5;
   if (plVar2 == (long*)0x0) goto LAB_0010a090;
   iVar4 = ( **(code**)( *plVar2 + 0x38 ) )(plVar2);
   if (iVar4 == 5) {
      return;
   }

   puVar5 = (undefined8*)operator_new(0x38, "");
   puVar5[5] = 0;
   *(undefined4*)( puVar5 + 4 ) = 1;
   *(undefined1*)( (long)puVar5 + 0x24 ) = 1;
   puVar5[1] = 0;
   *(undefined4*)( puVar5 + 2 ) = 0;
   puVar5[3] = 0;
   *puVar5 = &PTR_get_soft_body_ptr_001184d0;
   lVar3 = plVar2[5];
   *(undefined2*)( puVar5 + 6 ) = 0;
   puVar5[5] = lVar3;
   *(int*)( puVar5 + 4 ) = (int)plVar2[4];
   *(undefined1*)( (long)puVar5 + 0x24 ) = *(undefined1*)( (long)plVar2 + 0x24 );
   if ((uint)param_2 < *(uint*)( this + 0x38c )) {
      puVar6 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
      iVar4 = *(int*)( puVar6 + 1 );
      if (iVar1 == iVar4) {
         *puVar6 = puVar5;
         goto LAB_0010a05f;
      }

      if (iVar4 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
   LAB_0010a05f:( **(code**)( *plVar2 + 0x28 ) )(plVar2);
   Memory::free_static(plVar2, false);
   return;
}
/* HashSet<GodotSpace3D*, HashMapHasherDefault, HashMapComparatorDefault<GodotSpace3D*>
   >::erase(GodotSpace3D* const&) [clone .isra.0] */void HashSet<GodotSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace3D*>>::erase(HashSet<GodotSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace3D*>> *this, GodotSpace3D **param_1) {
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
               if (*param_1 == *(GodotSpace3D**)( lVar6 + uVar32 * 8 )) {
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
/* GodotPhysicsServer3D::joint_make_pin(RID, RID, Vector3 const&, RID, Vector3 const&) */void GodotPhysicsServer3D::joint_make_pin(GodotPhysicsServer3D *this, ulong param_2, ulong param_3, Vector3 *param_4, ulong param_5, Vector3 *param_6) {
   int iVar1;
   int iVar2;
   GodotBody3D *pGVar3;
   GodotBody3D *pGVar4;
   long *plVar5;
   GodotPinJoint3D *this_00;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      puVar7 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar7 + 1 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         pGVar3 = (GodotBody3D*)*puVar7;
         if (pGVar3 != (GodotBody3D*)0x0) {
            if (param_5 == 0) {
               if (*(long*)( pGVar3 + 0x40 ) == 0) {
                  uVar8 = 0x4cc;
                  pcVar6 = "Parameter \"body_A->get_space()\" is null.";
                  goto LAB_0010a4a4;
               }

               param_5 = *(ulong*)( *(long*)( pGVar3 + 0x40 ) + 0x6108 );
               if (param_5 != 0) goto LAB_0010a4c8;
            }
 else {
               LAB_0010a4c8:if ((uint)param_5 < *(uint*)( this + 0x2dc )) {
                  puVar7 = (undefined8*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
                  iVar1 = *(int*)( puVar7 + 1 );
                  if (iVar1 == (int)( param_5 >> 0x20 )) {
                     pGVar4 = (GodotBody3D*)*puVar7;
                     if (pGVar4 != (GodotBody3D*)0x0) {
                        if (pGVar3 == pGVar4) {
                           uVar8 = 0x4d3;
                           pcVar6 = "Condition \"body_A == body_B\" is true.";
                        }
 else {
                           if (param_2 != 0) {
                              if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                 puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                 iVar1 = *(int*)( puVar7 + 1 );
                                 if (iVar1 == (int)( param_2 >> 0x20 )) {
                                    plVar5 = (long*)*puVar7;
                                    if (plVar5 != (long*)0x0) {
                                       this_00 = (GodotPinJoint3D*)operator_new(0x130, "");
                                       GodotPinJoint3D::GodotPinJoint3D(this_00, pGVar3, param_4, pGVar4, param_6);
                                       *(long*)( this_00 + 0x28 ) = plVar5[5];
                                       *(int*)( this_00 + 0x20 ) = (int)plVar5[4];
                                       this_00[0x24] = *(GodotPinJoint3D*)( (long)plVar5 + 0x24 );
                                       if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                          puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                          iVar2 = *(int*)( puVar7 + 1 );
                                          if (iVar1 == iVar2) {
                                             *puVar7 = this_00;
                                             goto LAB_0010a5f6;
                                          }

                                          if (iVar2 + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                          }

                                       }

                                       _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                                       LAB_0010a5f6:( **(code**)( *plVar5 + 0x28 ) )(plVar5);
                                       Memory::free_static(plVar5, false);
                                       return;
                                    }

                                 }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                           }

                           uVar8 = 0x4d6;
                           pcVar6 = "Parameter \"prev_joint\" is null.";
                        }

                        goto LAB_0010a4a4;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            uVar8 = 0x4d1;
            pcVar6 = "Parameter \"body_B\" is null.";
            goto LAB_0010a4a4;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x4c9;
   pcVar6 = "Parameter \"body_A\" is null.";
   LAB_0010a4a4:_err_print_error("joint_make_pin", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar8, pcVar6, 0, 0);
   return;
}
/* GodotPhysicsServer3D::joint_make_hinge(RID, RID, Transform3D const&, RID, Transform3D const&) */void GodotPhysicsServer3D::joint_make_hinge(GodotPhysicsServer3D *this, ulong param_2, ulong param_3, Transform3D *param_4, ulong param_5, Transform3D *param_6) {
   int iVar1;
   int iVar2;
   GodotBody3D *pGVar3;
   GodotBody3D *pGVar4;
   long *plVar5;
   GodotHingeJoint3D *this_00;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      puVar7 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar7 + 1 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         pGVar3 = (GodotBody3D*)*puVar7;
         if (pGVar3 != (GodotBody3D*)0x0) {
            if (param_5 == 0) {
               if (*(long*)( pGVar3 + 0x40 ) == 0) {
                  uVar8 = 0x514;
                  pcVar6 = "Parameter \"body_A->get_space()\" is null.";
                  goto LAB_0010a894;
               }

               param_5 = *(ulong*)( *(long*)( pGVar3 + 0x40 ) + 0x6108 );
               if (param_5 != 0) goto LAB_0010a8b8;
            }
 else {
               LAB_0010a8b8:if ((uint)param_5 < *(uint*)( this + 0x2dc )) {
                  puVar7 = (undefined8*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
                  iVar1 = *(int*)( puVar7 + 1 );
                  if (iVar1 == (int)( param_5 >> 0x20 )) {
                     pGVar4 = (GodotBody3D*)*puVar7;
                     if (pGVar4 != (GodotBody3D*)0x0) {
                        if (pGVar3 == pGVar4) {
                           uVar8 = 0x51b;
                           pcVar6 = "Condition \"body_A == body_B\" is true.";
                        }
 else {
                           if (param_2 != 0) {
                              if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                 puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                 iVar1 = *(int*)( puVar7 + 1 );
                                 if (iVar1 == (int)( param_2 >> 0x20 )) {
                                    plVar5 = (long*)*puVar7;
                                    if (plVar5 != (long*)0x0) {
                                       this_00 = (GodotHingeJoint3D*)operator_new(0x260, "");
                                       GodotHingeJoint3D::GodotHingeJoint3D(this_00, pGVar3, pGVar4, param_4, param_6);
                                       *(long*)( this_00 + 0x28 ) = plVar5[5];
                                       *(int*)( this_00 + 0x20 ) = (int)plVar5[4];
                                       this_00[0x24] = *(GodotHingeJoint3D*)( (long)plVar5 + 0x24 );
                                       if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                          puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                          iVar2 = *(int*)( puVar7 + 1 );
                                          if (iVar1 == iVar2) {
                                             *puVar7 = this_00;
                                             goto LAB_0010a9e6;
                                          }

                                          if (iVar2 + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                          }

                                       }

                                       _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                                       LAB_0010a9e6:( **(code**)( *plVar5 + 0x28 ) )(plVar5);
                                       Memory::free_static(plVar5, false);
                                       return;
                                    }

                                 }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                           }

                           uVar8 = 0x51e;
                           pcVar6 = "Parameter \"prev_joint\" is null.";
                        }

                        goto LAB_0010a894;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            uVar8 = 0x519;
            pcVar6 = "Parameter \"body_B\" is null.";
            goto LAB_0010a894;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x511;
   pcVar6 = "Parameter \"body_A\" is null.";
   LAB_0010a894:_err_print_error("joint_make_hinge", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar8, pcVar6, 0, 0);
   return;
}
/* GodotPhysicsServer3D::joint_make_slider(RID, RID, Transform3D const&, RID, Transform3D const&) */void GodotPhysicsServer3D::joint_make_slider(GodotPhysicsServer3D *this, ulong param_2, ulong param_3, Transform3D *param_4, ulong param_5, Transform3D *param_6) {
   int iVar1;
   int iVar2;
   GodotBody3D *pGVar3;
   GodotBody3D *pGVar4;
   long *plVar5;
   GodotSliderJoint3D *this_00;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      puVar7 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar7 + 1 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         pGVar3 = (GodotBody3D*)*puVar7;
         if (pGVar3 != (GodotBody3D*)0x0) {
            if (param_5 == 0) {
               if (*(long*)( pGVar3 + 0x40 ) == 0) {
                  uVar8 = 0x591;
                  pcVar6 = "Parameter \"body_A->get_space()\" is null.";
                  goto LAB_0010ac84;
               }

               param_5 = *(ulong*)( *(long*)( pGVar3 + 0x40 ) + 0x6108 );
               if (param_5 != 0) goto LAB_0010aca8;
            }
 else {
               LAB_0010aca8:if ((uint)param_5 < *(uint*)( this + 0x2dc )) {
                  puVar7 = (undefined8*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
                  iVar1 = *(int*)( puVar7 + 1 );
                  if (iVar1 == (int)( param_5 >> 0x20 )) {
                     pGVar4 = (GodotBody3D*)*puVar7;
                     if (pGVar4 != (GodotBody3D*)0x0) {
                        if (pGVar3 == pGVar4) {
                           uVar8 = 0x598;
                           pcVar6 = "Condition \"body_A == body_B\" is true.";
                        }
 else {
                           if (param_2 != 0) {
                              if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                 puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                 iVar1 = *(int*)( puVar7 + 1 );
                                 if (iVar1 == (int)( param_2 >> 0x20 )) {
                                    plVar5 = (long*)*puVar7;
                                    if (plVar5 != (long*)0x0) {
                                       this_00 = (GodotSliderJoint3D*)operator_new(0x380, "");
                                       GodotSliderJoint3D::GodotSliderJoint3D(this_00, pGVar3, pGVar4, param_4, param_6);
                                       *(long*)( this_00 + 0x28 ) = plVar5[5];
                                       *(int*)( this_00 + 0x20 ) = (int)plVar5[4];
                                       this_00[0x24] = *(GodotSliderJoint3D*)( (long)plVar5 + 0x24 );
                                       if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                          puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                          iVar2 = *(int*)( puVar7 + 1 );
                                          if (iVar1 == iVar2) {
                                             *puVar7 = this_00;
                                             goto LAB_0010add6;
                                          }

                                          if (iVar2 + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                          }

                                       }

                                       _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                                       LAB_0010add6:( **(code**)( *plVar5 + 0x28 ) )(plVar5);
                                       Memory::free_static(plVar5, false);
                                       return;
                                    }

                                 }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                           }

                           uVar8 = 0x59b;
                           pcVar6 = "Parameter \"prev_joint\" is null.";
                        }

                        goto LAB_0010ac84;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            uVar8 = 0x596;
            pcVar6 = "Parameter \"body_B\" is null.";
            goto LAB_0010ac84;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x58e;
   pcVar6 = "Parameter \"body_A\" is null.";
   LAB_0010ac84:_err_print_error("joint_make_slider", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar8, pcVar6, 0, 0);
   return;
}
/* GodotPhysicsServer3D::joint_make_cone_twist(RID, RID, Transform3D const&, RID, Transform3D
   const&) */void GodotPhysicsServer3D::joint_make_cone_twist(GodotPhysicsServer3D *this, ulong param_2, ulong param_3, Transform3D *param_4, ulong param_5, Transform3D *param_6) {
   int iVar1;
   int iVar2;
   GodotBody3D *pGVar3;
   GodotBody3D *pGVar4;
   long *plVar5;
   GodotConeTwistJoint3D *this_00;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      puVar7 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar7 + 1 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         pGVar3 = (GodotBody3D*)*puVar7;
         if (pGVar3 != (GodotBody3D*)0x0) {
            if (param_5 == 0) {
               if (*(long*)( pGVar3 + 0x40 ) == 0) {
                  uVar8 = 0x5b9;
                  pcVar6 = "Parameter \"body_A->get_space()\" is null.";
                  goto LAB_0010b074;
               }

               param_5 = *(ulong*)( *(long*)( pGVar3 + 0x40 ) + 0x6108 );
               if (param_5 != 0) goto LAB_0010b098;
            }
 else {
               LAB_0010b098:if ((uint)param_5 < *(uint*)( this + 0x2dc )) {
                  puVar7 = (undefined8*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
                  iVar1 = *(int*)( puVar7 + 1 );
                  if (iVar1 == (int)( param_5 >> 0x20 )) {
                     pGVar4 = (GodotBody3D*)*puVar7;
                     if (pGVar4 != (GodotBody3D*)0x0) {
                        if (pGVar3 == pGVar4) {
                           uVar8 = 0x5c0;
                           pcVar6 = "Condition \"body_A == body_B\" is true.";
                        }
 else {
                           if (param_2 != 0) {
                              if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                 puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                 iVar1 = *(int*)( puVar7 + 1 );
                                 if (iVar1 == (int)( param_2 >> 0x20 )) {
                                    plVar5 = (long*)*puVar7;
                                    if (plVar5 != (long*)0x0) {
                                       this_00 = (GodotConeTwistJoint3D*)operator_new(0x1c0, "");
                                       GodotConeTwistJoint3D::GodotConeTwistJoint3D(this_00, pGVar3, pGVar4, param_4, param_6);
                                       *(long*)( this_00 + 0x28 ) = plVar5[5];
                                       *(int*)( this_00 + 0x20 ) = (int)plVar5[4];
                                       this_00[0x24] = *(GodotConeTwistJoint3D*)( (long)plVar5 + 0x24 );
                                       if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                          puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                          iVar2 = *(int*)( puVar7 + 1 );
                                          if (iVar1 == iVar2) {
                                             *puVar7 = this_00;
                                             goto LAB_0010b1c6;
                                          }

                                          if (iVar2 + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                          }

                                       }

                                       _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                                       LAB_0010b1c6:( **(code**)( *plVar5 + 0x28 ) )(plVar5);
                                       Memory::free_static(plVar5, false);
                                       return;
                                    }

                                 }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                           }

                           uVar8 = 0x5c3;
                           pcVar6 = "Parameter \"prev_joint\" is null.";
                        }

                        goto LAB_0010b074;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            uVar8 = 0x5be;
            pcVar6 = "Parameter \"body_B\" is null.";
            goto LAB_0010b074;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x5b6;
   pcVar6 = "Parameter \"body_A\" is null.";
   LAB_0010b074:_err_print_error("joint_make_cone_twist", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar8, pcVar6, 0, 0);
   return;
}
/* GodotPhysicsServer3D::joint_make_generic_6dof(RID, RID, Transform3D const&, RID, Transform3D
   const&) */void GodotPhysicsServer3D::joint_make_generic_6dof(GodotPhysicsServer3D *this, ulong param_2, ulong param_3, Transform3D *param_4, ulong param_5, Transform3D *param_6) {
   int iVar1;
   int iVar2;
   GodotBody3D *pGVar3;
   GodotBody3D *pGVar4;
   long *plVar5;
   GodotGeneric6DOFJoint3D *this_00;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      puVar7 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar7 + 1 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         pGVar3 = (GodotBody3D*)*puVar7;
         if (pGVar3 != (GodotBody3D*)0x0) {
            if (param_5 == 0) {
               if (*(long*)( pGVar3 + 0x40 ) == 0) {
                  uVar8 = 0x5e1;
                  pcVar6 = "Parameter \"body_A->get_space()\" is null.";
                  goto LAB_0010b461;
               }

               param_5 = *(ulong*)( *(long*)( pGVar3 + 0x40 ) + 0x6108 );
               if (param_5 != 0) goto LAB_0010b488;
            }
 else {
               LAB_0010b488:if ((uint)param_5 < *(uint*)( this + 0x2dc )) {
                  puVar7 = (undefined8*)( ( ( param_5 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_5 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
                  iVar1 = *(int*)( puVar7 + 1 );
                  if (iVar1 == (int)( param_5 >> 0x20 )) {
                     pGVar4 = (GodotBody3D*)*puVar7;
                     if (pGVar4 != (GodotBody3D*)0x0) {
                        if (pGVar3 == pGVar4) {
                           uVar8 = 0x5e8;
                           pcVar6 = "Condition \"body_A == body_B\" is true.";
                        }
 else {
                           if (param_2 != 0) {
                              if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                 puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                 iVar1 = *(int*)( puVar7 + 1 );
                                 if (iVar1 == (int)( param_2 >> 0x20 )) {
                                    plVar5 = (long*)*puVar7;
                                    if (plVar5 != (long*)0x0) {
                                       this_00 = (GodotGeneric6DOFJoint3D*)operator_new(0x3b8, "");
                                       GodotGeneric6DOFJoint3D::GodotGeneric6DOFJoint3D(this_00, pGVar3, pGVar4, param_4, param_6, true);
                                       *(long*)( this_00 + 0x28 ) = plVar5[5];
                                       *(int*)( this_00 + 0x20 ) = (int)plVar5[4];
                                       this_00[0x24] = *(GodotGeneric6DOFJoint3D*)( (long)plVar5 + 0x24 );
                                       if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                          puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                          iVar2 = *(int*)( puVar7 + 1 );
                                          if (iVar1 == iVar2) {
                                             *puVar7 = this_00;
                                             goto LAB_0010b5c2;
                                          }

                                          if (iVar2 + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                          }

                                       }

                                       _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                                       LAB_0010b5c2:( **(code**)( *plVar5 + 0x28 ) )(plVar5);
                                       Memory::free_static(plVar5, false);
                                       return;
                                    }

                                 }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                           }

                           uVar8 = 0x5eb;
                           pcVar6 = "Parameter \"prev_joint\" is null.";
                        }

                        goto LAB_0010b461;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            uVar8 = 0x5e6;
            pcVar6 = "Parameter \"body_B\" is null.";
            goto LAB_0010b461;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x5de;
   pcVar6 = "Parameter \"body_A\" is null.";
   LAB_0010b461:_err_print_error("joint_make_generic_6dof", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar8, pcVar6, 0, 0);
   return;
}
/* GodotPhysicsServer3D::joint_make_hinge_simple(RID, RID, Vector3 const&, Vector3 const&, RID,
   Vector3 const&, Vector3 const&) */void GodotPhysicsServer3D::joint_make_hinge_simple(GodotPhysicsServer3D *this, ulong param_2, ulong param_3, Vector3 *param_4, Vector3 *param_5, ulong param_6, Vector3 *param_7, Vector3 *param_8) {
   int iVar1;
   int iVar2;
   GodotBody3D *pGVar3;
   GodotBody3D *pGVar4;
   long *plVar5;
   GodotHingeJoint3D *this_00;
   char *pcVar6;
   undefined8 *puVar7;
   undefined8 uVar8;
   if (( param_3 != 0 ) && ( (uint)param_3 < *(uint*)( this + 0x2dc ) )) {
      puVar7 = (undefined8*)( ( ( param_3 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_3 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = *(int*)( puVar7 + 1 );
      if (iVar1 == (int)( param_3 >> 0x20 )) {
         pGVar3 = (GodotBody3D*)*puVar7;
         if (pGVar3 != (GodotBody3D*)0x0) {
            if (param_6 == 0) {
               if (*(long*)( pGVar3 + 0x40 ) == 0) {
                  uVar8 = 0x52c;
                  pcVar6 = "Parameter \"body_A->get_space()\" is null.";
                  goto LAB_0010b86b;
               }

               param_6 = *(ulong*)( *(long*)( pGVar3 + 0x40 ) + 0x6108 );
               if (param_6 != 0) goto LAB_0010b890;
            }
 else {
               LAB_0010b890:if ((uint)param_6 < *(uint*)( this + 0x2dc )) {
                  puVar7 = (undefined8*)( ( ( param_6 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_6 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
                  iVar1 = *(int*)( puVar7 + 1 );
                  if (iVar1 == (int)( param_6 >> 0x20 )) {
                     pGVar4 = (GodotBody3D*)*puVar7;
                     if (pGVar4 != (GodotBody3D*)0x0) {
                        if (pGVar3 == pGVar4) {
                           uVar8 = 0x533;
                           pcVar6 = "Condition \"body_A == body_B\" is true.";
                        }
 else {
                           if (param_2 != 0) {
                              if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                 puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                 iVar1 = *(int*)( puVar7 + 1 );
                                 if (iVar1 == (int)( param_2 >> 0x20 )) {
                                    plVar5 = (long*)*puVar7;
                                    if (plVar5 != (long*)0x0) {
                                       this_00 = (GodotHingeJoint3D*)operator_new(0x260, "");
                                       GodotHingeJoint3D::GodotHingeJoint3D(this_00, pGVar3, pGVar4, param_4, param_7, param_5, param_8);
                                       *(long*)( this_00 + 0x28 ) = plVar5[5];
                                       *(int*)( this_00 + 0x20 ) = (int)plVar5[4];
                                       this_00[0x24] = *(GodotHingeJoint3D*)( (long)plVar5 + 0x24 );
                                       if ((uint)param_2 < *(uint*)( this + 0x38c )) {
                                          puVar7 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) );
                                          iVar2 = *(int*)( puVar7 + 1 );
                                          if (iVar1 == iVar2) {
                                             *puVar7 = this_00;
                                             goto LAB_0010b9e0;
                                          }

                                          if (iVar2 + 0x80000000U < 0x7fffffff) {
                                             _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                          }

                                       }

                                       _err_print_error("replace", "./core/templates/rid_owner.h", 0x1ee, "Parameter \"ptr\" is null.", 0, 0);
                                       LAB_0010b9e0:( **(code**)( *plVar5 + 0x28 ) )(plVar5);
                                       Memory::free_static(plVar5, false);
                                       return;
                                    }

                                 }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                                    _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                                 }

                              }

                           }

                           uVar8 = 0x536;
                           pcVar6 = "Parameter \"prev_joint\" is null.";
                        }

                        goto LAB_0010b86b;
                     }

                  }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
                     _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
                  }

               }

            }

            uVar8 = 0x531;
            pcVar6 = "Parameter \"body_B\" is null.";
            goto LAB_0010b86b;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar8 = 0x529;
   pcVar6 = "Parameter \"body_A\" is null.";
   LAB_0010b86b:_err_print_error("joint_make_hinge_simple", "modules/godot_physics_3d/godot_physics_server_3d.cpp", uVar8, pcVar6, 0, 0);
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
/* GodotPhysicsServer3D::_update_shapes() */void GodotPhysicsServer3D::_update_shapes(GodotPhysicsServer3D *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar3 = *(long*)( this + 0x3c8 );
   if (lVar3 != 0) {
      do {
         ( **(code**)**(undefined8**)( lVar3 + 8 ) )();
         plVar1 = *(long**)( this + 0x3c8 );
         if ((GodotPhysicsServer3D*)*plVar1 == this + 0x3c8) {
            lVar3 = plVar1[2];
            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x18 ) = plVar1[3];
            }

            lVar2 = plVar1[3];
            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x10 ) = lVar3;
               lVar3 = plVar1[2];
            }

            *(long*)( this + 0x3c8 ) = lVar3;
            if (plVar1 == *(long**)( this + 0x3d0 )) {
               *(long*)( this + 0x3d0 ) = lVar2;
            }

            *plVar1 = 0;
            *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
         }
 else {
            _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
            lVar3 = *(long*)( this + 0x3c8 );
         }

      }
 while ( lVar3 != 0 );
      return;
   }

   return;
}
/* GodotPhysicsServer3D::body_apply_central_impulse(RID, Vector3 const&) */void GodotPhysicsServer3D::body_apply_central_impulse(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
   float fVar1;
   undefined8 uVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar5 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar3 = (int)plVar5[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar4 = *plVar5;
         if (lVar4 != 0) {
            _update_shapes(this);
            uVar2 = *param_3;
            fVar1 = *(float*)( lVar4 + 0x170 );
            *(float*)( lVar4 + 0xe0 ) = *(float*)( param_3 + 1 ) * fVar1 + *(float*)( lVar4 + 0xe0 );
            *(ulong*)( lVar4 + 0xd8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar4 + 0xd8 ) >> 0x20 ) + (float)( (ulong)uVar2 >> 0x20 ) * fVar1, (float)*(undefined8*)( lVar4 + 0xd8 ) + (float)uVar2 * fVar1);
            if (( *(long*)( lVar4 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar4 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar4, 0));
               return;
            }

            return;
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_central_impulse", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2b8, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_apply_impulse(RID, Vector3 const&, Vector3 const&) */void GodotPhysicsServer3D::body_apply_impulse(GodotPhysicsServer3D *this, ulong param_2, float *param_3, float *param_4) {
   float fVar1;
   int iVar2;
   long lVar3;
   long *plVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar2 = (int)plVar4[1];
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         lVar3 = *plVar4;
         if (lVar3 != 0) {
            _update_shapes(this);
            fVar6 = param_3[1];
            fVar5 = *(float*)( lVar3 + 0x170 );
            fVar7 = *param_3;
            *(float*)( lVar3 + 0xe0 ) = param_3[2] * fVar5 + *(float*)( lVar3 + 0xe0 );
            fVar9 = param_4[2] - *(float*)( lVar3 + 0x200 );
            *(float*)( lVar3 + 0xdc ) = fVar6 * fVar5 + *(float*)( lVar3 + 0xdc );
            fVar6 = param_3[2];
            fVar1 = param_3[1];
            *(float*)( lVar3 + 0xd8 ) = fVar5 * fVar7 + *(float*)( lVar3 + 0xd8 );
            fVar5 = param_4[1] - *(float*)( lVar3 + 0x1fc );
            fVar8 = *param_4 - *(float*)( lVar3 + 0x1f8 );
            fVar7 = *param_3 * fVar9 - fVar8 * fVar6;
            fVar6 = fVar5 * fVar6 - fVar9 * fVar1;
            fVar5 = fVar8 * fVar1 - fVar5 * *param_3;
            *(float*)( lVar3 + 0xe4 ) = fVar6 * *(float*)( lVar3 + 0x1b0 ) + fVar7 * *(float*)( lVar3 + 0x1b4 ) + fVar5 * *(float*)( lVar3 + 0x1b8 ) + *(float*)( lVar3 + 0xe4 );
            *(ulong*)( lVar3 + 0xe8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0xe8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( lVar3 + 0x1c8 ) >> 0x20 ) * fVar7 + *(float*)( lVar3 + 0x1c8 ) * fVar6 + *(float*)( lVar3 + 0x1d0 ) * fVar5, (float)*(undefined8*)( lVar3 + 0xe8 ) + (float)*(undefined8*)( lVar3 + 0x1c0 ) * fVar7 + *(float*)( lVar3 + 0x1bc ) * fVar6 + *(float*)( lVar3 + 0x1c4 ) * fVar5);
            if (( *(long*)( lVar3 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar3 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar3, 0));
               return;
            }

            return;
         }

      }
 else if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_impulse", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2c2, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_apply_torque_impulse(RID, Vector3 const&) */void GodotPhysicsServer3D::body_apply_torque_impulse(GodotPhysicsServer3D *this, ulong param_2, undefined8 *param_3) {
   float fVar1;
   int iVar2;
   long lVar3;
   long *plVar4;
   float fVar5;
   float fVar6;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar4 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar2 = (int)plVar4[1];
      if (iVar2 == (int)( param_2 >> 0x20 )) {
         lVar3 = *plVar4;
         if (lVar3 != 0) {
            _update_shapes(this);
            fVar1 = *(float*)( param_3 + 1 );
            fVar5 = (float)*param_3;
            fVar6 = (float)( ( ulong ) * param_3 >> 0x20 );
            *(float*)( lVar3 + 0xec ) = *(float*)( lVar3 + 0x1d0 ) * fVar1 + *(float*)( lVar3 + 0x1c8 ) * fVar5 + *(float*)( lVar3 + 0x1cc ) * fVar6 + *(float*)( lVar3 + 0xec );
            *(ulong*)( lVar3 + 0xe4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( lVar3 + 0x1bc ) >> 0x20 ) * fVar6 + fVar5 * *(float*)( lVar3 + 0x1bc ) + *(float*)( lVar3 + 0x1c4 ) * fVar1 + (float)( ( ulong ) * (undefined8*)( lVar3 + 0xe4 ) >> 0x20 ), (float)*(undefined8*)( lVar3 + 0x1b4 ) * fVar6 + fVar5 * *(float*)( lVar3 + 0x1b0 ) + *(float*)( lVar3 + 0x1b8 ) * fVar1 + (float)*(undefined8*)( lVar3 + 0xe4 ));
            if (( *(long*)( lVar3 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar3 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar3, 0));
               return;
            }

            return;
         }

      }
 else if (iVar2 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_apply_torque_impulse", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x2cc, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_axis_velocity(RID, Vector3 const&) */void GodotPhysicsServer3D::body_set_axis_velocity(GodotPhysicsServer3D *this, ulong param_2, ulong *param_3) {
   float fVar1;
   ulong uVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   long in_FS_OFFSET;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   undefined8 uVar13;
   float fVar16;
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   lVar4 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar6 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar3 = (int)plVar6[1];
      if (iVar3 == (int)( param_2 >> 0x20 )) {
         lVar5 = *plVar6;
         if (lVar5 != 0) {
            _update_shapes(this);
            uVar2 = *param_3;
            fVar1 = *(float*)( param_3 + 1 );
            fVar10 = (float)uVar2;
            fVar11 = (float)( uVar2 >> 0x20 );
            fVar8 = (float)*(undefined8*)( lVar5 + 0xd8 );
            fVar9 = (float)( ( ulong ) * (undefined8*)( lVar5 + 0xd8 ) >> 0x20 );
            fVar7 = fVar10 * fVar10 + fVar11 * fVar11 + fVar1 * fVar1;
            uVar13 = 0;
            fVar12 = 0.0;
            if (fVar7 != 0.0) {
               fVar7 = SQRT(fVar7);
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar2;
               fVar12 = fVar1 / fVar7;
               auVar15._4_4_ = fVar7;
               auVar15._0_4_ = fVar7;
               auVar15._8_8_ = _LC233;
               auVar15 = divps(auVar14, auVar15);
               uVar13 = auVar15._0_8_;
            }

            fVar16 = (float)( (ulong)uVar13 >> 0x20 );
            fVar7 = (float)uVar13 * fVar8 + fVar16 * fVar9 + *(float*)( lVar5 + 0xe0 ) * fVar12;
            *(ulong*)( lVar5 + 0xd8 ) = CONCAT44(( fVar9 - fVar7 * fVar16 ) + fVar11, ( fVar8 - fVar7 * (float)uVar13 ) + fVar10);
            *(float*)( lVar5 + 0xe0 ) = ( *(float*)( lVar5 + 0xe0 ) - fVar7 * fVar12 ) + fVar1;
            if (( *(long*)( lVar5 + 0x40 ) == 0 ) || ( *(uint*)( lVar5 + 0xd4 ) < 2 )) {
               if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

            }
 else if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
               GodotBody3D::set_active(SUB81(lVar5, 0));
               return;
            }

            goto LAB_0010c4f3;
         }

      }
 else if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   if (lVar4 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("body_set_axis_velocity", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x327, "Parameter \"body\" is null.", 0, 0);
      return;
   }

   LAB_0010c4f3:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer3D::body_test_motion(RID, PhysicsServer3D::MotionParameters const&,
   PhysicsServer3D::MotionResult*) */undefined8 GodotPhysicsServer3D::body_test_motion(GodotPhysicsServer3D *param_1, ulong param_2, MotionResult *param_3) {
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
               _err_print_error("body_test_motion", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x393, "Parameter \"body->get_space()\" is null.", 0, 0);
               return 0;
            }

            cVar3 = GodotSpace3D::is_locked();
            if (cVar3 != '\0') {
               _err_print_error("body_test_motion", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x394, "Condition \"body->get_space()->is_locked()\" is true. Returning: false", 0, 0);
               return 0;
            }

            _update_shapes(param_1);
            uVar4 = GodotSpace3D::test_body_motion(*(GodotBody3D**)( pMVar2 + 0x40 ), pMVar2, param_3);
            return uVar4;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_test_motion", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x392, "Parameter \"body\" is null.", 0, 0);
   return 0;
}
/* GodotPhysicsServer3D::step(float) */void GodotPhysicsServer3D::step(GodotPhysicsServer3D *this, float param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   if (this[0x171] == (GodotPhysicsServer3D)0x0) {
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
         GodotStep3D::step(*(GodotSpace3D**)( this + 0x188 ), param_1);
         for (int i = 0; i < 3; i++) {
            *(int*)( this + ( 4*i + 372 ) ) = *(int*)( this + ( 4*i + 372 ) ) + *(int*)( lVar3 + ( 4*i + 24828 ) );
         }

         if (iVar1 <= (int)lVar4 + 1) break;
         lVar4 = lVar4 + 1;
      }
;
   }

   return;
}
/* GodotPhysicsServer3D::free(RID) */void GodotPhysicsServer3D::free(GodotPhysicsServer3D *this, ulong param_2) {
   uint uVar1;
   ulong uVar2;
   code *pcVar3;
   int iVar4;
   uint uVar5;
   undefined8 *puVar6;
   long lVar7;
   undefined8 *puVar8;
   GodotSpace3D *this_00;
   pthread_mutex_t *ppVar9;
   uint uVar10;
   ulong uVar11;
   pthread_mutex_t *ppVar12;
   long in_FS_OFFSET;
   GodotSpace3D *local_48;
   long local_40;
   ppVar12 = (pthread_mutex_t*)( this + 0x1e8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _update_shapes(this);
   iVar4 = pthread_mutex_lock(ppVar12);
   if (iVar4 != 0) goto LAB_0010d599;
   uVar10 = (uint)param_2;
   uVar11 = param_2 & 0xffffffff;
   uVar5 = ( uint )(param_2 >> 0x20);
   if (( uVar10 < *(uint*)( this + 0x1d4 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 == ( *(uint*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar12);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x1d4 ) <= uVar10 )) {
            LAB_0010cc08:this_00 = (GodotSpace3D*)0x0;
         }
 else {
            puVar8 = (undefined8*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) );
            uVar1 = *(uint*)( puVar8 + 1 );
            if (uVar5 != uVar1) {
               if (uVar1 + 0x80000000 < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
               }

               goto LAB_0010cc08;
            }

            this_00 = (GodotSpace3D*)*puVar8;
         }

         while (lVar7 = GodotShape3D::get_owners(),*(int*)( lVar7 + 0x2c ) != 0) {
            lVar7 = GodotShape3D::get_owners();
            ( **(code**)( **(long**)( *(long*)( lVar7 + 0x18 ) + 0x10 ) + 8 ) )();
         }
;
         iVar4 = pthread_mutex_lock(ppVar12);
         if (iVar4 != 0) goto LAB_0010d599;
         if (uVar10 < *(uint*)( this + 0x1d4 )) {
            lVar7 = ( uVar11 % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 0x10 + *(long*)( *(long*)( this + 0x1c0 ) + ( uVar11 / *(uint*)( this + 0x1d0 ) ) * 8 );
            uVar1 = *(uint*)( lVar7 + 8 );
            if ((int)uVar1 < 0) {
               pthread_mutex_unlock(ppVar12);
               _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
            }
 else if (uVar5 == uVar1) {
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0x1d8 ) - 1;
               *(uint*)( this + 0x1d8 ) = uVar5;
               *(uint*)( *(long*)( *(long*)( this + 0x1c8 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x1d0 ) ) * 8 ) + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x1d0 ) ) * 4 ) = uVar10;
               pthread_mutex_unlock(ppVar12);
            }
 else {
               pthread_mutex_unlock(ppVar12);
               _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            pthread_mutex_unlock(ppVar12);
            _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         ( **(code**)( *(long*)this_00 + 0x60 ) )(this_00);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010cb81;
         goto LAB_0010cf77;
      }

      pthread_mutex_unlock(ppVar12);
   }
 else {
      pthread_mutex_unlock(ppVar12);
   }

   ppVar12 = (pthread_mutex_t*)( this + 0x2f0 );
   iVar4 = pthread_mutex_lock(ppVar12);
   if (iVar4 != 0) goto LAB_0010d599;
   if (( uVar10 < *(uint*)( this + 0x2dc ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      lVar7 = *(long*)( this + 0x2c8 );
      if (uVar5 != ( *(uint*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( lVar7 + ( uVar11 / *(uint*)( this + 0x2d8 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar12);
         goto LAB_0010c84d;
      }

      pthread_mutex_unlock(ppVar12);
      if (( param_2 == 0 ) || ( *(uint*)( this + 0x2dc ) <= uVar10 )) goto LAB_00111317;
      puVar8 = (undefined8*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( uVar11 / *(uint*)( this + 0x2d8 ) ) * 8 ) );
      uVar1 = *(uint*)( puVar8 + 1 );
      if (uVar5 != uVar1) {
         if (uVar1 + 0x80000000 < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar7);
         }

         goto LAB_00111317;
      }

      this_00 = (GodotSpace3D*)*puVar8;
      ( **(code**)( *(long*)this_00 + 0x28 ) )(this_00);
      lVar7 = *(long*)( this_00 + 0x38 );
      while (( lVar7 != 0 && ( *(int*)( lVar7 + -8 ) != 0 ) )) {
         GodotCollisionObject3D::remove_shape((int)this_00);
         lVar7 = *(long*)( this_00 + 0x38 );
      }
;
      iVar4 = pthread_mutex_lock(ppVar12);
      if (iVar4 != 0) goto LAB_0010d599;
      if (*(uint*)( this + 0x2dc ) <= uVar10) goto LAB_0010d171;
      lVar7 = ( uVar11 % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( uVar11 / *(uint*)( this + 0x2d8 ) ) * 8 );
      uVar5 = *(uint*)( lVar7 + 8 );
      if ((int)uVar5 < 0) {
         LAB_0010d1a3:pthread_mutex_unlock(ppVar12);
         _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
      }
 else if (uVar1 == uVar5) {
         *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
         lVar7 = *(long*)( this + 0x2d0 );
         uVar5 = *(int*)( this + 0x2e0 ) - 1;
         *(uint*)( this + 0x2e0 ) = uVar5;
         uVar11 = (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x2d8 );
         uVar5 = uVar5 % *(uint*)( this + 0x2d8 );
         LAB_0010ccfc:*(uint*)( *(long*)( lVar7 + uVar11 * 8 ) + (ulong)uVar5 * 4 ) = uVar10;
         pthread_mutex_unlock(ppVar12);
      }
 else {
         LAB_0010d1e3:pthread_mutex_unlock(ppVar12);
         _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
      }

      LAB_0010cd0e:( **(code**)( *(long*)this_00 + 0x10 ) )(this_00);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010cb81;
      goto LAB_0010cf77;
   }

   pthread_mutex_unlock(ppVar12);
   LAB_0010c84d:ppVar12 = (pthread_mutex_t*)( this + 0x348 );
   iVar4 = pthread_mutex_lock(ppVar12);
   if (iVar4 != 0) goto LAB_0010d599;
   if (( uVar10 < *(uint*)( this + 0x334 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 == ( *(uint*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( uVar11 / *(uint*)( this + 0x330 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar12);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x334 ) <= uVar10 )) goto LAB_00111317;
         uVar2 = uVar11 / *(uint*)( this + 0x330 );
         puVar8 = (undefined8*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + uVar2 * 8 ) );
         uVar1 = *(uint*)( puVar8 + 1 );
         if (uVar5 != uVar1) {
            if (uVar1 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, uVar2);
            }

            goto LAB_00111317;
         }

         this_00 = (GodotSpace3D*)*puVar8;
         ( **(code**)( *(long*)this_00 + 0x28 ) )(this_00);
         iVar4 = pthread_mutex_lock(ppVar12);
         if (iVar4 != 0) goto LAB_0010d599;
         if (uVar10 < *(uint*)( this + 0x334 )) {
            lVar7 = ( uVar11 % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( uVar11 / *(uint*)( this + 0x330 ) ) * 8 );
            uVar5 = *(uint*)( lVar7 + 8 );
            if ((int)uVar5 < 0) {
               pthread_mutex_unlock(ppVar12);
               _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
            }
 else if (uVar5 == uVar1) {
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0x338 ) - 1;
               *(uint*)( this + 0x338 ) = uVar5;
               *(uint*)( *(long*)( *(long*)( this + 0x328 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x330 ) ) * 4 ) = uVar10;
               pthread_mutex_unlock(ppVar12);
            }
 else {
               pthread_mutex_unlock(ppVar12);
               _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            pthread_mutex_unlock(ppVar12);
            _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         ( **(code**)( *(long*)this_00 + 0x10 ) )(this_00);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010cb81;
         goto LAB_0010cf77;
      }

      pthread_mutex_unlock(ppVar12);
   }
 else {
      pthread_mutex_unlock(ppVar12);
   }

   ppVar12 = (pthread_mutex_t*)( this + 0x298 );
   iVar4 = pthread_mutex_lock(ppVar12);
   if (iVar4 != 0) goto LAB_0010d599;
   if (( uVar10 < *(uint*)( this + 0x284 ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 == ( *(uint*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( uVar11 / *(uint*)( this + 0x280 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar12);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x284 ) <= uVar10 )) {
            LAB_00111317:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar8 = (undefined8*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( uVar11 / *(uint*)( this + 0x280 ) ) * 8 ) );
         uVar1 = *(uint*)( puVar8 + 1 );
         if (uVar5 != uVar1) {
            if (uVar1 + 0x80000000 < 0x7fffffff) {
               _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, this);
            }

            goto LAB_00111317;
         }

         this_00 = (GodotSpace3D*)*puVar8;
         ( **(code**)( *(long*)this_00 + 0x28 ) )(this_00);
         lVar7 = *(long*)( this_00 + 0x38 );
         while (( lVar7 != 0 && ( *(int*)( lVar7 + -8 ) != 0 ) )) {
            GodotCollisionObject3D::remove_shape((int)this_00);
            lVar7 = *(long*)( this_00 + 0x38 );
         }
;
         iVar4 = pthread_mutex_lock(ppVar12);
         if (iVar4 != 0) goto LAB_0010d599;
         if (uVar10 < *(uint*)( this + 0x284 )) {
            lVar7 = ( uVar11 % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( uVar11 / *(uint*)( this + 0x280 ) ) * 8 );
            uVar5 = *(uint*)( lVar7 + 8 );
            if (-1 < (int)uVar5) {
               if (uVar1 != uVar5) goto LAB_0010d1e3;
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               lVar7 = *(long*)( this + 0x278 );
               uVar5 = *(int*)( this + 0x288 ) - 1;
               *(uint*)( this + 0x288 ) = uVar5;
               uVar11 = (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x280 );
               uVar5 = uVar5 % *(uint*)( this + 0x280 );
               goto LAB_0010ccfc;
            }

            goto LAB_0010d1a3;
         }

         LAB_0010d171:pthread_mutex_unlock(ppVar12);
         _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         goto LAB_0010cd0e;
      }

      pthread_mutex_unlock(ppVar12);
   }
 else {
      pthread_mutex_unlock(ppVar12);
   }

   ppVar12 = (pthread_mutex_t*)( this + 0x240 );
   iVar4 = pthread_mutex_lock(ppVar12);
   if (iVar4 != 0) goto LAB_0010d599;
   if (( uVar10 < *(uint*)( this + 0x22c ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      lVar7 = *(long*)( this + 0x218 );
      if (uVar5 == ( *(uint*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( lVar7 + ( uVar11 / *(uint*)( this + 0x228 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         pthread_mutex_unlock(ppVar12);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x22c ) <= uVar10 )) {
            LAB_0010ce5b:local_48 = (GodotSpace3D*)0x0;
            this_00 = local_48;
         }
 else {
            puVar8 = (undefined8*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( uVar11 / *(uint*)( this + 0x228 ) ) * 8 ) );
            uVar1 = *(uint*)( puVar8 + 1 );
            if (uVar5 != uVar1) {
               if (uVar1 + 0x80000000 < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, lVar7);
               }

               goto LAB_0010ce5b;
            }

            local_48 = (GodotSpace3D*)*puVar8;
            this_00 = local_48;
         }

         while (lVar7 = GodotSpace3D::get_objects(),*(int*)( lVar7 + 0x24 ) != 0) {
            puVar6 = (undefined8*)GodotSpace3D::get_objects();
            puVar8 = (undefined8*)&DAT_fffffffffffffff8;
            if (*(int*)( (long)puVar6 + 0x24 ) != 0) {
               puVar8 = (undefined8*)*puVar6;
            }

            ( **(code**)( *(long*)*puVar8 + 0x28 ) )((long*)*puVar8, 0);
         }
;
         HashSet<GodotSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace3D*>>::erase((HashSet<GodotSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace3D*>>*)( this + 400 ), &local_48);
         ( **(code**)( *(long*)this + 0x6e8 ) )(this, *(undefined8*)( *(long*)( this_00 + 200 ) + 0x10 ));
         ( **(code**)( *(long*)this + 0x6e8 ) )(this);
         iVar4 = pthread_mutex_lock(ppVar12);
         if (iVar4 != 0) goto LAB_0010d599;
         if (uVar10 < *(uint*)( this + 0x22c )) {
            lVar7 = ( uVar11 % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( uVar11 / *(uint*)( this + 0x228 ) ) * 8 );
            uVar1 = *(uint*)( lVar7 + 8 );
            if ((int)uVar1 < 0) {
               pthread_mutex_unlock(ppVar12);
               _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
            }
 else if (uVar5 == uVar1) {
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0x230 ) - 1;
               *(uint*)( this + 0x230 ) = uVar5;
               *(uint*)( *(long*)( *(long*)( this + 0x220 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x228 ) ) * 4 ) = uVar10;
               pthread_mutex_unlock(ppVar12);
            }
 else {
               pthread_mutex_unlock(ppVar12);
               _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            pthread_mutex_unlock(ppVar12);
            _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         GodotSpace3D::~GodotSpace3D(this_00);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_0010cb81;
         goto LAB_0010cf77;
      }

      pthread_mutex_unlock(ppVar12);
   }
 else {
      pthread_mutex_unlock(ppVar12);
   }

   ppVar12 = (pthread_mutex_t*)( this + 0x3a0 );
   iVar4 = pthread_mutex_lock(ppVar12);
   if (iVar4 != 0) goto LAB_0010d599;
   if (( uVar10 < *(uint*)( this + 0x38c ) ) && ( param_2 >> 0x20 != 0x7fffffff )) {
      if (uVar5 == ( *(uint*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( uVar11 / *(uint*)( this + 0x388 ) ) * 8 ) + 8 ) & 0x7fffffff )) {
         ppVar9 = ppVar12;
         pthread_mutex_unlock(ppVar12);
         if (( param_2 == 0 ) || ( *(uint*)( this + 0x38c ) <= uVar10 )) {
            LAB_0010d230:this_00 = (GodotSpace3D*)0x0;
         }
 else {
            puVar8 = (undefined8*)( ( uVar11 % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( uVar11 / *(uint*)( this + 0x388 ) ) * 8 ) );
            uVar1 = *(uint*)( puVar8 + 1 );
            if (uVar5 != uVar1) {
               if (uVar1 + 0x80000000 < 0x7fffffff) {
                  _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0, ppVar9);
               }

               goto LAB_0010d230;
            }

            this_00 = (GodotSpace3D*)*puVar8;
         }

         iVar4 = pthread_mutex_lock(ppVar12);
         if (iVar4 != 0) {
            LAB_0010d599:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar4);
         }

         if (uVar10 < *(uint*)( this + 0x38c )) {
            lVar7 = ( uVar11 % ( ulong ) * (uint*)( this + 0x388 ) ) * 0x10 + *(long*)( *(long*)( this + 0x378 ) + ( uVar11 / *(uint*)( this + 0x388 ) ) * 8 );
            uVar1 = *(uint*)( lVar7 + 8 );
            if ((int)uVar1 < 0) {
               pthread_mutex_unlock(ppVar12);
               _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x16c, "Method/function failed.", "Attempted to free an uninitialized or invalid RID", 0, 0);
            }
 else if (uVar5 == uVar1) {
               *(undefined4*)( lVar7 + 8 ) = 0xffffffff;
               uVar5 = *(int*)( this + 0x390 ) - 1;
               *(uint*)( this + 0x390 ) = uVar5;
               *(uint*)( *(long*)( *(long*)( this + 0x380 ) + ( (ulong)uVar5 / ( ulong ) * (uint*)( this + 0x388 ) ) * 8 ) + ( (ulong)uVar5 % ( ulong ) * (uint*)( this + 0x388 ) ) * 4 ) = uVar10;
               pthread_mutex_unlock(ppVar12);
            }
 else {
               pthread_mutex_unlock(ppVar12);
               _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x171, "Method/function failed.", 0, 0);
            }

         }
 else {
            pthread_mutex_unlock(ppVar12);
            _err_print_error(&_LC237, "./core/templates/rid_owner.h", 0x161, "Method/function failed.", 0, 0);
         }

         ( **(code**)( *(long*)this_00 + 0x28 ) )(this_00);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            LAB_0010cb81:Memory::free_static(this_00, false);
            return;
         }

         goto LAB_0010cf77;
      }

      pthread_mutex_unlock(ppVar12);
   }
 else {
      pthread_mutex_unlock(ppVar12);
   }

   _err_print_error(&_LC237, "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x653, "Method/function failed.", "Invalid ID.", 0, 0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010cf77:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer3D::_shape_col_cbk(Vector3 const&, int, Vector3 const&, int, Vector3 const&,
   void*) */void GodotPhysicsServer3D::_shape_col_cbk(Vector3 *param_1, int param_2, Vector3 *param_3, int param_4, Vector3 *param_5, void *param_6) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   int iVar3;
   long lVar4;
   float *pfVar5;
   int iVar6;
   int iVar7;
   float fVar8;
   float fVar9;
   /* WARNING: Load size is inaccurate */
   if (*param_6 != 0) {
      iVar3 = *(int*)( (long)param_6 + 4 );
      if (*param_6 == iVar3) {
         fVar9 = _LC240;
         if (iVar3 < 1) {
            iVar7 = 0;
         }
 else {
            pfVar5 = *(float**)( (long)param_6 + 8 );
            iVar6 = 0;
            iVar7 = 0;
            do {
               fVar8 = ( pfVar5[4] - pfVar5[1] ) * ( pfVar5[4] - pfVar5[1] ) + ( pfVar5[3] - *pfVar5 ) * ( pfVar5[3] - *pfVar5 ) + ( pfVar5[5] - pfVar5[2] ) * ( pfVar5[5] - pfVar5[2] );
               if (fVar8 < fVar9) {
                  fVar9 = fVar8;
                  iVar7 = iVar6;
               }

               iVar6 = iVar6 + 1;
               pfVar5 = pfVar5 + 6;
            }
 while ( iVar3 != iVar6 );
         }

         if (fVar9 <= ( *(float*)param_3 - *(float*)param_1 ) * ( *(float*)param_3 - *(float*)param_1 ) + ( *(float*)( param_3 + 4 ) - *(float*)( param_1 + 4 ) ) * ( *(float*)( param_3 + 4 ) - *(float*)( param_1 + 4 ) ) + ( *(float*)( param_3 + 8 ) - *(float*)( param_1 + 8 ) ) * ( *(float*)( param_3 + 8 ) - *(float*)( param_1 + 8 ) )) {
            lVar4 = *(long*)( (long)param_6 + 8 );
            puVar1 = (undefined8*)( lVar4 + (long)( iVar7 * 2 ) * 0xc );
            *puVar1 = *(undefined8*)param_1;
            *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( param_1 + 8 );
            puVar1 = (undefined8*)( lVar4 + ( (long)( iVar7 * 2 ) * 3 + 3 ) * 4 );
            *puVar1 = *(undefined8*)param_3;
            *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( param_3 + 8 );
            return;
         }

      }
 else {
         puVar1 = (undefined8*)( *(long*)( (long)param_6 + 8 ) + (long)( iVar3 * 2 ) * 0xc );
         puVar2 = (undefined8*)( *(long*)( (long)param_6 + 8 ) + ( (long)( iVar3 * 2 ) * 3 + 3 ) * 4 );
         *puVar1 = *(undefined8*)param_1;
         *(undefined4*)( puVar1 + 1 ) = *(undefined4*)( param_1 + 8 );
         *puVar2 = *(undefined8*)param_3;
         *(undefined4*)( puVar2 + 1 ) = *(undefined4*)( param_3 + 8 );
         *(int*)( (long)param_6 + 4 ) = iVar3 + 1;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotPhysicsServer3D::GodotPhysicsServer3D(bool) */void GodotPhysicsServer3D::GodotPhysicsServer3D(GodotPhysicsServer3D *this, bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   PhysicsServer3D::PhysicsServer3D((PhysicsServer3D*)this);
   uVar1 = _UNK_00118f58;
   uVar2 = __LC242;
   *(undefined1(*) [16])( this + 0x1f8 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__initialize_classv_001185e0;
   *(undefined2*)( this + 0x180 ) = 0;
   this[0x171] = (GodotPhysicsServer3D)0x1;
   *(undefined8*)( this + 0x174 ) = 0;
   *(undefined4*)( this + 0x17c ) = 0;
   this[0x182] = (GodotPhysicsServer3D)0x0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   *(undefined8*)( this + 0x1b0 ) = 2;
   *(undefined***)( this + 0x1b8 ) = &PTR__RID_Alloc_00118520;
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
   *(undefined***)( this + 0x210 ) = &PTR__RID_Alloc_00118540;
   uVar1 = _UNK_00118f58;
   uVar2 = __LC242;
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
   *(undefined***)( this + 0x268 ) = &PTR__RID_Alloc_00118560;
   uVar1 = _UNK_00118f58;
   uVar2 = __LC242;
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
   *(undefined***)( this + 0x2c0 ) = &PTR__RID_Alloc_00118580;
   uVar1 = _UNK_00118f58;
   uVar2 = __LC242;
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
   *(undefined***)( this + 0x318 ) = &PTR__RID_Alloc_001185a0;
   uVar1 = _UNK_00118f58;
   uVar2 = __LC242;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 800 ) ) = 0;
   }

   *(undefined4*)( this + 0x358 ) = 1;
   *(undefined8*)( this + 0x330 ) = uVar2;
   *(undefined8*)( this + 0x338 ) = uVar1;
   *(undefined1(*) [16])( this + 0x348 ) = (undefined1[16])0x0;
   uVar2 = Memory::alloc_static(0x108, false);
   *(undefined8*)( this + 800 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x33c ) << 3, false);
   *(undefined8*)( this + 0x328 ) = uVar2;
   *(undefined1(*) [16])( this + 0x3b0 ) = (undefined1[16])0x0;
   *(undefined***)( this + 0x370 ) = &PTR__RID_Alloc_001185c0;
   uVar1 = _UNK_00118f58;
   uVar2 = __LC242;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 8*i*i + 888 ) ) = 0;
   }

   *(undefined4*)( this + 0x3b0 ) = 1;
   *(undefined1(*) [16])( this + 0x3a0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x388 ) = uVar2;
   *(undefined8*)( this + 0x390 ) = uVar1;
   uVar2 = Memory::alloc_static(0x108, false);
   *(undefined8*)( this + 0x378 ) = uVar2;
   uVar2 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x394 ) << 3, false);
   *(undefined8*)( this + 0x380 ) = uVar2;
   this[0x180] = (GodotPhysicsServer3D)param_1;
   *(undefined1(*) [16])( this + 0x3c8 ) = (undefined1[16])0x0;
   godot_singleton = this;
   GodotBroadPhase3D::create_func = GodotBroadPhase3DBVH::_create;
   return;
}
/* GodotPhysicsServer3D::space_set_active(RID, bool) */void GodotPhysicsServer3D::space_set_active(GodotPhysicsServer3D *this, ulong param_2, char param_3) {
   int iVar1;
   long *plVar2;
   long in_FS_OFFSET;
   GodotSpace3D *local_30;
   GodotSpace3D *local_28[3];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 != 0) {
      if ((uint)param_2 < *(uint*)( this + 0x22c )) {
         plVar2 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x228 ) ) * 0x10 + *(long*)( *(long*)( this + 0x218 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x228 ) ) * 8 ) );
         iVar1 = (int)plVar2[1];
         if (iVar1 == (int)( param_2 >> 0x20 )) {
            local_30 = (GodotSpace3D*)*plVar2;
            if (local_30 != (GodotSpace3D*)0x0) {
               if (param_3 == '\0') {
                  HashSet<GodotSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace3D*>>::erase((HashSet<GodotSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace3D*>>*)( this + 400 ), &local_30);
               }
 else {
                  HashSet<GodotSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace3D*>>::insert(local_28);
               }

               if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_0010dc23;
            }

         }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("space_set_active", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0xa3, "Parameter \"space\" is null.", 0, 0);
      return;
   }

   LAB_0010dc23:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotPhysicsServer3D::space_set_debug_contacts(RID, int) */void GodotPhysicsServer3D::space_set_debug_contacts(GodotPhysicsServer3D *this, ulong param_2, int param_3) {
   code *pcVar1;
   int iVar2;
   ulong uVar3;
   undefined8 *puVar4;
   ulong uVar5;
   char *pcVar6;
   long *plVar7;
   size_t __n;
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
                  lVar10 = *(long*)( lVar14 + 0x6118 );
                  if (lVar10 == 0) {
                     lVar15 = 0;
                     if (lVar9 == 0) {
                        return;
                     }

                     LAB_0010de28:uVar5 = lVar9 * 0xc - 1;
                     uVar5 = uVar5 | uVar5 >> 1;
                     uVar5 = uVar5 >> 2 | uVar5;
                     uVar5 = uVar5 | uVar5 >> 4;
                     uVar5 = uVar5 | uVar5 >> 8;
                     uVar5 = uVar5 | uVar5 >> 0x10;
                     lVar10 = ( uVar5 >> 0x20 | uVar5 ) + 1;
                     if (lVar15 < lVar9) {
                        LAB_0010de90:if (lVar15 != 0) {
                           iVar2 = CowData<Vector3>::_realloc((CowData<Vector3>*)( lVar14 + 0x6118 ), lVar10);
                           if (iVar2 != 0) {
                              return;
                           }

                           LAB_0010dd7f:puVar13 = *(undefined8**)( lVar14 + 0x6118 );
                           if (puVar13 == (undefined8*)0x0) {
                              GodotPhysicsServer3D_space_set_debug_contacts:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
                              ( *pcVar1 )();
                           }

                           lVar14 = puVar13[-1];
                           LAB_0010dd94:if (lVar14 < lVar9) {
                              memset((void*)( (long)puVar13 + lVar14 * 0xc ), 0, ( lVar9 - lVar14 ) * 0xc);
                           }

                           puVar13[-1] = lVar9;
                           return;
                        }

                        puVar4 = (undefined8*)Memory::alloc_static(lVar10 + 0x10, false);
                        if (puVar4 != (undefined8*)0x0) {
                           puVar13 = puVar4 + 2;
                           *puVar4 = 1;
                           puVar4[1] = 0;
                           *(undefined8**)( lVar14 + 0x6118 ) = puVar13;
                           lVar14 = 0;
                           goto LAB_0010dd94;
                        }

                        uVar8 = 0x171;
                        pcVar6 = "Parameter \"mem_new\" is null.";
                        goto LAB_0010df2a;
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
                           *(undefined8*)( lVar14 + 0x6118 ) = 0;
                           return;
                        }

                        lVar9 = *(long*)( lVar14 + 0x6118 );
                        *(undefined8*)( lVar14 + 0x6118 ) = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                        return;
                     }

                     if (1 < *(ulong*)( lVar10 + -0x10 )) {
                        if (*(long*)( lVar14 + 0x6118 ) == 0) goto GodotPhysicsServer3D_space_set_debug_contacts;
                        lVar10 = *(long*)( *(long*)( lVar14 + 0x6118 ) + -8 );
                        uVar5 = 0x10;
                        __n = lVar10 * 0xc;
                        if (__n != 0) {
                           uVar5 = __n - 1 | __n - 1 >> 1;
                           uVar5 = uVar5 | uVar5 >> 2;
                           uVar5 = uVar5 | uVar5 >> 4;
                           uVar5 = uVar5 | uVar5 >> 8;
                           uVar5 = uVar5 | uVar5 >> 0x10;
                           uVar5 = ( uVar5 | uVar5 >> 0x20 ) + 0x11;
                        }

                        puVar4 = (undefined8*)Memory::alloc_static(uVar5, false);
                        if (puVar4 == (undefined8*)0x0) {
                           _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                        }
 else {
                           *puVar4 = 1;
                           puVar4[1] = lVar10;
                           memcpy(puVar4 + 2, *(void**)( lVar14 + 0x6118 ), __n);
                           if (*(long*)( lVar14 + 0x6118 ) != 0) {
                              LOCK();
                              plVar7 = (long*)( *(long*)( lVar14 + 0x6118 ) + -0x10 );
                              *plVar7 = *plVar7 + -1;
                              UNLOCK();
                              if (*plVar7 == 0) {
                                 lVar10 = *(long*)( lVar14 + 0x6118 );
                                 *(undefined8*)( lVar14 + 0x6118 ) = 0;
                                 Memory::free_static((void*)( lVar10 + -0x10 ), false);
                              }

                           }

                           *(undefined8**)( lVar14 + 0x6118 ) = puVar4 + 2;
                        }

                     }

                     uVar5 = lVar9 * 0xc - 1;
                     uVar5 = uVar5 >> 1 | uVar5;
                     uVar5 = uVar5 >> 2 | uVar5;
                     uVar5 = uVar5 >> 4 | uVar5;
                     uVar5 = uVar5 >> 8 | uVar5;
                     uVar5 = uVar5 >> 0x10 | uVar5;
                     uVar5 = uVar5 >> 0x20 | uVar5;
                     lVar10 = uVar5 + 1;
                     if (lVar15 * 0xc == 0) goto LAB_0010de28;
                     uVar3 = lVar15 * 0xc - 1;
                     uVar3 = uVar3 | uVar3 >> 1;
                     uVar3 = uVar3 | uVar3 >> 2;
                     uVar3 = uVar3 | uVar3 >> 4;
                     uVar3 = uVar3 | uVar3 >> 8;
                     uVar3 = uVar3 | uVar3 >> 0x10;
                     uVar3 = uVar3 | uVar3 >> 0x20;
                     if (lVar15 < lVar9) {
                        if (uVar3 != uVar5) goto LAB_0010de90;
                        goto LAB_0010dd7f;
                     }

                     if (uVar3 == uVar5) goto LAB_0010ddf9;
                  }

                  iVar2 = CowData<Vector3>::_realloc((CowData<Vector3>*)( lVar14 + 0x6118 ), lVar10);
                  if (iVar2 != 0) {
                     return;
                  }

                  LAB_0010ddf9:if (*(long*)( lVar14 + 0x6118 ) != 0) {
                     *(long*)( *(long*)( lVar14 + 0x6118 ) + -8 ) = lVar9;
                     return;
                  }

                  FUN_001113b0();
                  return;
               }

               uVar8 = 0x157;
               pcVar6 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
               LAB_0010df2a:pcVar11 = "./core/templates/cowdata.h";
               pcVar12 = "resize";
               goto LAB_0010df00;
            }

         }
 else if (iVar2 + 0x80000000U < 0x7fffffff) {
            _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
         }

      }

   }

   pcVar6 = "Parameter \"space\" is null.";
   uVar8 = 0xc9;
   pcVar11 = "modules/godot_physics_3d/godot_physics_server_3d.cpp";
   pcVar12 = "space_set_debug_contacts";
   LAB_0010df00:_err_print_error(pcVar12, pcVar11, uVar8, pcVar6, 0, 0);
   return;
}
/* VSet<RID>::erase(RID const&) [clone .isra.0] */void VSet<RID>::erase(VSet<RID> *this, RID *param_1) {
   long lVar1;
   RID *pRVar2;
   code *pcVar3;
   int iVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   int iVar8;
   lVar1 = *(long*)( this + 8 );
   if (lVar1 == 0) {
      return;
   }

   lVar7 = *(long*)( lVar1 + -8 );
   iVar5 = (int)lVar7 + -1;
   if (lVar7 < 1) {
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   iVar8 = 0;
   if (-1 < iVar5) {
      do {
         while (true) {
            iVar4 = ( iVar5 + iVar8 ) / 2;
            lVar6 = (long)iVar4;
            pRVar2 = *(RID**)( lVar1 + lVar6 * 8 );
            if (param_1 < pRVar2) break;
            if (param_1 <= pRVar2) {
               if (iVar5 + iVar8 < -1) {
                  return;
               }

               if (lVar7 <= lVar6) {
                  _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar6, lVar7, "p_index", "size()", "", false, false);
                  return;
               }

               CowData<RID>::_copy_on_write((CowData<RID>*)( this + 8 ));
               lVar1 = *(long*)( this + 8 );
               if (lVar1 == 0) {
                  lVar7 = -1;
               }
 else {
                  lVar7 = *(long*)( lVar1 + -8 ) + -1;
                  if (lVar6 < lVar7) {
                     memmove((void*)( lVar1 + lVar6 * 8 ), (void*)( lVar1 + 8 + lVar6 * 8 ), ( lVar7 - lVar6 ) * 8);
                  }

               }

               CowData<RID>::resize<false>((CowData<RID>*)( this + 8 ), lVar7);
               return;
            }

            iVar8 = iVar4 + 1;
            if (iVar5 < iVar8) {
               return;
            }

         }
;
         iVar5 = iVar4 + -1;
      }
 while ( iVar8 <= iVar5 );
   }

   return;
}
/* GodotPhysicsServer3D::soft_body_remove_collision_exception(RID, RID) */void GodotPhysicsServer3D::soft_body_remove_collision_exception(GodotPhysicsServer3D *this, ulong param_2, RID *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            VSet<RID>::erase((VSet<RID>*)( lVar2 + 0x2c0 ), param_3);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_remove_collision_exception", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3ff, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_remove_collision_exception(RID, RID) */void GodotPhysicsServer3D::body_remove_collision_exception(GodotPhysicsServer3D *this, ulong param_2, RID *param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x2dc ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            VSet<RID>::erase((VSet<RID>*)( lVar2 + 0x2a8 ), param_3);
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_remove_collision_exception", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x34b, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_add_collision_exception(RID, RID) */void GodotPhysicsServer3D::body_add_collision_exception(GodotPhysicsServer3D *this, ulong param_2, undefined8 param_3) {
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
            VSet<RID>::insert((VSet<RID>*)( lVar2 + 0x2a8 ), (RID*)&local_10);
            if (( *(long*)( lVar2 + 0x40 ) != 0 ) && ( 1 < *(uint*)( lVar2 + 0xd4 ) )) {
               GodotBody3D::set_active(SUB81(lVar2, 0));
               return;
            }

            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("body_add_collision_exception", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x343, "Parameter \"body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::soft_body_add_collision_exception(RID, RID) */void GodotPhysicsServer3D::soft_body_add_collision_exception(GodotPhysicsServer3D *this, ulong param_2, undefined8 param_3) {
   int iVar1;
   long lVar2;
   long *plVar3;
   undefined8 local_10[2];
   local_10[0] = param_3;
   if (( param_2 != 0 ) && ( (uint)param_2 < *(uint*)( this + 0x334 ) )) {
      plVar3 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x330 ) ) * 0x10 + *(long*)( *(long*)( this + 800 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x330 ) ) * 8 ) );
      iVar1 = (int)plVar3[1];
      if (iVar1 == (int)( param_2 >> 0x20 )) {
         lVar2 = *plVar3;
         if (lVar2 != 0) {
            VSet<RID>::insert((VSet<RID>*)( lVar2 + 0x2c0 ), (RID*)local_10);
            return;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   _err_print_error("soft_body_add_collision_exception", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x3f8, "Parameter \"soft_body\" is null.", 0, 0);
   return;
}
/* GodotPhysicsServer3D::body_set_max_contacts_reported(RID, int) */void GodotPhysicsServer3D::body_set_max_contacts_reported(GodotPhysicsServer3D *this, ulong param_2, int param_3) {
   long lVar1;
   code *pcVar2;
   int iVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   char *pcVar9;
   long *plVar10;
   size_t __n;
   undefined8 uVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   if (( param_2 == 0 ) || ( *(uint*)( this + 0x2dc ) <= (uint)param_2 )) {
      LAB_0010e9b0:_err_print_error("body_set_max_contacts_reported", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x374, "Parameter \"body\" is null.", 0, 0);
      return;
   }

   plVar10 = (long*)( ( ( param_2 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x2d8 ) ) * 0x10 + *(long*)( *(long*)( this + 0x2c8 ) + ( ( param_2 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x2d8 ) ) * 8 ) );
   iVar3 = (int)plVar10[1];
   if (iVar3 != (int)( param_2 >> 0x20 )) {
      if (iVar3 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

      goto LAB_0010e9b0;
   }

   lVar1 = *plVar10;
   if (lVar1 == 0) goto LAB_0010e9b0;
   lVar12 = (long)param_3;
   if (lVar12 < 0) {
      uVar11 = 0x157;
      pcVar9 = "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER";
      LAB_0010e9fa:_err_print_error("resize", "./core/templates/cowdata.h", uVar11, pcVar9, 0, 0);
      LAB_0010e93c:iVar3 = *(int*)( lVar1 + 0xd4 );
      *(undefined4*)( lVar1 + 0x340 ) = 0;
   }
 else {
      lVar13 = *(long*)( lVar1 + 0x338 );
      if (lVar13 == 0) {
         lVar14 = 0;
         if (lVar12 == 0) {
            *(undefined4*)( lVar1 + 0x340 ) = 0;
            return;
         }

         LAB_0010e8d4:uVar7 = lVar12 * 0x68 - 1;
         uVar7 = uVar7 | uVar7 >> 1;
         uVar7 = uVar7 >> 2 | uVar7;
         uVar7 = uVar7 | uVar7 >> 4;
         uVar7 = uVar7 | uVar7 >> 8;
         uVar7 = uVar7 | uVar7 >> 0x10;
         lVar13 = ( uVar7 | uVar7 >> 0x20 ) + 1;
         if (lVar14 < lVar12) {
            LAB_0010e960:if (lVar14 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(lVar13 + 0x10, false);
               if (puVar6 == (undefined8*)0x0) {
                  uVar11 = 0x171;
                  pcVar9 = "Parameter \"mem_new\" is null.";
                  goto LAB_0010e9fa;
               }

               puVar8 = puVar6 + 2;
               *puVar6 = 1;
               puVar6[1] = 0;
               *(undefined8**)( lVar1 + 0x338 ) = puVar8;
               lVar13 = 0;
            }
 else {
               iVar3 = CowData<GodotBody3D::Contact>::_realloc((CowData<GodotBody3D::Contact>*)( lVar1 + 0x338 ), lVar13);
               if (iVar3 != 0) goto LAB_0010e93c;
               LAB_0010e751:puVar8 = *(undefined8**)( lVar1 + 0x338 );
               if (puVar8 == (undefined8*)0x0) {
                  GodotPhysicsServer3D_body_set_max_contacts_reported:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar13 = puVar8[-1];
            }

            if (lVar13 < lVar12) {
               puVar6 = puVar8 + lVar13 * 0xd;
               do {
                  *puVar6 = 0;
                  puVar5 = puVar6 + 0xd;
                  *(undefined4*)( puVar6 + 1 ) = 0;
                  *(undefined8*)( (long)puVar6 + 0xc ) = 0;
                  *(undefined4*)( (long)puVar6 + 0x14 ) = 0;
                  puVar6[3] = 0;
                  *(undefined4*)( puVar6 + 4 ) = 0;
                  *(undefined4*)( (long)puVar6 + 0x24 ) = 0;
                  *(undefined4*)( puVar6 + 5 ) = 0;
                  *(undefined8*)( (long)puVar6 + 0x2c ) = 0;
                  *(undefined4*)( (long)puVar6 + 0x34 ) = 0;
                  *(undefined4*)( puVar6 + 7 ) = 0;
                  *(undefined1(*) [16])( puVar6 + 8 ) = (undefined1[16])0x0;
                  puVar6[10] = 0;
                  *(undefined4*)( puVar6 + 0xb ) = 0;
                  *(undefined8*)( (long)puVar6 + 0x5c ) = 0;
                  *(undefined4*)( (long)puVar6 + 100 ) = 0;
                  puVar6 = puVar5;
               }
 while ( puVar8 + lVar12 * 0xd != puVar5 );
            }

            iVar3 = *(int*)( lVar1 + 0xd4 );
            puVar8[-1] = lVar12;
            *(undefined4*)( lVar1 + 0x340 ) = 0;
            goto joined_r0x0010e820;
         }

         LAB_0010e92c:iVar3 = CowData<GodotBody3D::Contact>::_realloc((CowData<GodotBody3D::Contact>*)( lVar1 + 0x338 ), lVar13);
         if (iVar3 != 0) goto LAB_0010e93c;
      }
 else {
         lVar14 = *(long*)( lVar13 + -8 );
         if (lVar12 == lVar14) {
            *(undefined4*)( lVar1 + 0x340 ) = 0;
            if (*(int*)( lVar1 + 0xd4 ) != 1) {
               return;
            }

            if (param_3 == 0) {
               return;
            }

            goto LAB_0010e822;
         }

         if (lVar12 == 0) {
            LOCK();
            plVar10 = (long*)( lVar13 + -0x10 );
            *plVar10 = *plVar10 + -1;
            UNLOCK();
            if (*plVar10 != 0) {
               *(undefined8*)( lVar1 + 0x338 ) = 0;
               *(undefined4*)( lVar1 + 0x340 ) = 0;
               return;
            }

            lVar12 = *(long*)( lVar1 + 0x338 );
            *(undefined8*)( lVar1 + 0x338 ) = 0;
            Memory::free_static((void*)( lVar12 + -0x10 ), false);
            *(undefined4*)( lVar1 + 0x340 ) = 0;
            return;
         }

         if (1 < *(ulong*)( lVar13 + -0x10 )) {
            if (*(long*)( lVar1 + 0x338 ) == 0) goto GodotPhysicsServer3D_body_set_max_contacts_reported;
            lVar13 = *(long*)( *(long*)( lVar1 + 0x338 ) + -8 );
            uVar7 = 0x10;
            __n = lVar13 * 0x68;
            if (__n != 0) {
               uVar7 = __n - 1 | __n - 1 >> 1;
               uVar7 = uVar7 | uVar7 >> 2;
               uVar7 = uVar7 | uVar7 >> 4;
               uVar7 = uVar7 | uVar7 >> 8;
               uVar7 = uVar7 | uVar7 >> 0x10;
               uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
            }

            puVar6 = (undefined8*)Memory::alloc_static(uVar7, false);
            if (puVar6 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               *puVar6 = 1;
               puVar6[1] = lVar13;
               memcpy(puVar6 + 2, *(void**)( lVar1 + 0x338 ), __n);
               if (*(long*)( lVar1 + 0x338 ) != 0) {
                  LOCK();
                  plVar10 = (long*)( *(long*)( lVar1 + 0x338 ) + -0x10 );
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     lVar13 = *(long*)( lVar1 + 0x338 );
                     *(undefined8*)( lVar1 + 0x338 ) = 0;
                     Memory::free_static((void*)( lVar13 + -0x10 ), false);
                  }

               }

               *(undefined8**)( lVar1 + 0x338 ) = puVar6 + 2;
            }

         }

         uVar7 = lVar12 * 0x68 - 1;
         uVar7 = uVar7 >> 1 | uVar7;
         uVar7 = uVar7 >> 2 | uVar7;
         uVar7 = uVar7 >> 4 | uVar7;
         uVar7 = uVar7 >> 8 | uVar7;
         uVar7 = uVar7 >> 0x10 | uVar7;
         uVar7 = uVar7 >> 0x20 | uVar7;
         lVar13 = uVar7 + 1;
         if (lVar14 * 0x68 == 0) goto LAB_0010e8d4;
         uVar4 = lVar14 * 0x68 - 1;
         uVar4 = uVar4 | uVar4 >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         uVar4 = uVar4 | uVar4 >> 0x20;
         if (lVar14 < lVar12) {
            if (uVar4 != uVar7) goto LAB_0010e960;
            goto LAB_0010e751;
         }

         if (uVar4 != uVar7) goto LAB_0010e92c;
      }

      if (*(long*)( lVar1 + 0x338 ) == 0) {
         FUN_001113c6();
         return;
      }

      iVar3 = *(int*)( lVar1 + 0xd4 );
      *(long*)( *(long*)( lVar1 + 0x338 ) + -8 ) = lVar12;
      *(undefined4*)( lVar1 + 0x340 ) = 0;
   }

   joined_r0x0010e820:if (iVar3 != 1) {
      return;
   }

   LAB_0010e822:GodotBody3D::set_active(SUB81(lVar1, 0));
   return;
}
/* GodotPhysicsServer3D::world_boundary_shape_create() */void GodotPhysicsServer3D::world_boundary_shape_create(GodotPhysicsServer3D *this) {
   GodotWorldBoundaryShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotWorldBoundaryShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotWorldBoundaryShape3D*)operator_new(0x70, "");
   GodotWorldBoundaryShape3D::GodotWorldBoundaryShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::separation_ray_shape_create() */void GodotPhysicsServer3D::separation_ray_shape_create(GodotPhysicsServer3D *this) {
   GodotSeparationRayShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotSeparationRayShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotSeparationRayShape3D*)operator_new(0x68, "");
   GodotSeparationRayShape3D::GodotSeparationRayShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::sphere_shape_create() */void GodotPhysicsServer3D::sphere_shape_create(GodotPhysicsServer3D *this) {
   GodotSphereShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotSphereShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotSphereShape3D*)operator_new(0x68, "");
   GodotSphereShape3D::GodotSphereShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::box_shape_create() */void GodotPhysicsServer3D::box_shape_create(GodotPhysicsServer3D *this) {
   GodotBoxShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotBoxShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotBoxShape3D*)operator_new(0x70, "");
   GodotBoxShape3D::GodotBoxShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::capsule_shape_create() */void GodotPhysicsServer3D::capsule_shape_create(GodotPhysicsServer3D *this) {
   GodotCapsuleShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotCapsuleShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotCapsuleShape3D*)operator_new(0x68, "");
   GodotCapsuleShape3D::GodotCapsuleShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::cylinder_shape_create() */void GodotPhysicsServer3D::cylinder_shape_create(GodotPhysicsServer3D *this) {
   GodotCylinderShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotCylinderShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotCylinderShape3D*)operator_new(0x68, "");
   GodotCylinderShape3D::GodotCylinderShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::convex_polygon_shape_create() */void GodotPhysicsServer3D::convex_polygon_shape_create(GodotPhysicsServer3D *this) {
   GodotConvexPolygonShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotConvexPolygonShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotConvexPolygonShape3D*)operator_new(0xb0, "");
   GodotConvexPolygonShape3D::GodotConvexPolygonShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::concave_polygon_shape_create() */void GodotPhysicsServer3D::concave_polygon_shape_create(GodotPhysicsServer3D *this) {
   GodotConcavePolygonShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotConcavePolygonShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotConcavePolygonShape3D*)operator_new(0x98, "");
   GodotConcavePolygonShape3D::GodotConcavePolygonShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::heightmap_shape_create() */void GodotPhysicsServer3D::heightmap_shape_create(GodotPhysicsServer3D *this) {
   GodotHeightMapShape3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotHeightMapShape3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotHeightMapShape3D*)operator_new(0xa0, "");
   GodotHeightMapShape3D::GodotHeightMapShape3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotShape3D*,true>::make_rid((RID_Alloc<GodotShape3D*,true>*)( this + 0x1b8 ), (GodotShape3D**)&local_28);
   *(undefined8*)( this_00 + 8 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::area_create() */void GodotPhysicsServer3D::area_create(GodotPhysicsServer3D *this) {
   GodotArea3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotArea3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotArea3D*)operator_new(0x240, "");
   GodotArea3D::GodotArea3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotArea3D*,true>::make_rid((RID_Alloc<GodotArea3D*,true>*)( this + 0x268 ), &local_28);
   *(undefined8*)( this_00 + 0x10 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::body_create() */void GodotPhysicsServer3D::body_create(GodotPhysicsServer3D *this) {
   GodotBody3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotBody3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotBody3D*)operator_new(0x370, "");
   GodotBody3D::GodotBody3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotBody3D*,true>::make_rid((RID_Alloc<GodotBody3D*,true>*)( this + 0x2c0 ), &local_28);
   *(undefined8*)( this_00 + 0x10 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::space_create() */undefined8 GodotPhysicsServer3D::space_create(GodotPhysicsServer3D *this) {
   int iVar1;
   long lVar2;
   GodotSpace3D *this_00;
   undefined8 uVar3;
   GodotArea3D *this_01;
   ulong uVar4;
   GodotBody3D *this_02;
   undefined8 uVar5;
   long *plVar6;
   long in_FS_OFFSET;
   GodotSpace3D *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotSpace3D*)operator_new(0x6128, "");
   GodotSpace3D::GodotSpace3D(this_00);
   local_48 = this_00;
   uVar3 = RID_Alloc<GodotSpace3D*,true>::make_rid((RID_Alloc<GodotSpace3D*,true>*)( this + 0x210 ), &local_48);
   *(undefined8*)( this_00 + 0x30 ) = uVar3;
   if (*(code**)( *(long*)this + 0x228 ) == area_create) {
      this_01 = (GodotArea3D*)operator_new(0x240, "");
      GodotArea3D::GodotArea3D(this_01);
      local_48 = (GodotSpace3D*)this_01;
      uVar4 = RID_Alloc<GodotArea3D*,true>::make_rid((RID_Alloc<GodotArea3D*,true>*)( this + 0x268 ), (GodotArea3D**)&local_48);
      *(ulong*)( this_01 + 0x10 ) = uVar4;
   }
 else {
      uVar4 = ( **(code**)( *(long*)this + 0x228 ) )(this);
   }

   if (( uVar4 != 0 ) && ( (uint)uVar4 < *(uint*)( this + 0x284 ) )) {
      plVar6 = (long*)( ( ( uVar4 & 0xffffffff ) % ( ulong ) * (uint*)( this + 0x280 ) ) * 0x10 + *(long*)( *(long*)( this + 0x270 ) + ( ( uVar4 & 0xffffffff ) / ( ulong ) * (uint*)( this + 0x280 ) ) * 8 ) );
      iVar1 = (int)plVar6[1];
      if (iVar1 == (int)( uVar4 >> 0x20 )) {
         plVar6 = (long*)*plVar6;
         if (plVar6 != (long*)0x0) {
            lVar2 = *plVar6;
            *(long**)( this_00 + 200 ) = plVar6;
            ( **(code**)( lVar2 + 0x28 ) )(plVar6, this_00);
            lVar2 = *(long*)this;
            *(undefined4*)( plVar6 + 0x24 ) = 0xffffffff;
            if (*(code**)( lVar2 + 0x2f8 ) == body_create) {
               this_02 = (GodotBody3D*)operator_new(0x370, "");
               GodotBody3D::GodotBody3D(this_02);
               local_48 = (GodotSpace3D*)this_02;
               uVar5 = RID_Alloc<GodotBody3D*,true>::make_rid((RID_Alloc<GodotBody3D*,true>*)( this + 0x2c0 ), (GodotBody3D**)&local_48);
               *(undefined8*)( this_02 + 0x10 ) = uVar5;
            }
 else {
               uVar5 = ( **(code**)( lVar2 + 0x2f8 ) )(this);
            }

            ( **(code**)( *(long*)this + 0x300 ) )(this, uVar5, uVar3);
            ( **(code**)( *(long*)this + 0x310 ) )(this, uVar5, 0);
            *(undefined8*)( this_00 + 0x6108 ) = uVar5;
            goto LAB_0010f23f;
         }

      }
 else if (iVar1 + 0x80000000U < 0x7fffffff) {
         _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
      }

   }

   uVar3 = 0;
   _err_print_error("space_create", "modules/godot_physics_3d/godot_physics_server_3d.cpp", 0x95, "Parameter \"area\" is null.", 0, 0);
   LAB_0010f23f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* GodotPhysicsServer3D::soft_body_create() */void GodotPhysicsServer3D::soft_body_create(GodotPhysicsServer3D *this) {
   GodotSoftBody3D *this_00;
   undefined8 uVar1;
   long in_FS_OFFSET;
   GodotSoftBody3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (GodotSoftBody3D*)operator_new(0x2d8, "");
   GodotSoftBody3D::GodotSoftBody3D(this_00);
   local_28 = this_00;
   uVar1 = RID_Alloc<GodotSoftBody3D*,true>::make_rid((RID_Alloc<GodotSoftBody3D*,true>*)( this + 0x318 ), &local_28);
   *(undefined8*)( this_00 + 0x10 ) = uVar1;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::joint_create() */void GodotPhysicsServer3D::joint_create(GodotPhysicsServer3D *this) {
   GodotJoint3D *pGVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   GodotJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   pGVar1 = (GodotJoint3D*)operator_new(0x38, "");
   *(undefined8*)( pGVar1 + 0x28 ) = 0;
   *(undefined8*)( pGVar1 + 8 ) = 0;
   *(undefined4*)( pGVar1 + 0x10 ) = 0;
   *(undefined8*)( pGVar1 + 0x18 ) = 0;
   *(undefined4*)( pGVar1 + 0x20 ) = 1;
   pGVar1[0x24] = (GodotJoint3D)0x1;
   *(undefined***)pGVar1 = &PTR_get_soft_body_ptr_001184d0;
   *(undefined2*)( pGVar1 + 0x30 ) = 0;
   local_28 = pGVar1;
   uVar2 = RID_Alloc<GodotJoint3D*,true>::make_rid((RID_Alloc<GodotJoint3D*,true>*)( this + 0x370 ), &local_28);
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
/* GodotConstraint3D::get_soft_body_ptr(int) const */undefined8 GodotConstraint3D::get_soft_body_ptr(int param_1) {
   return 0;
}
/* GodotConstraint3D::get_soft_body_count() const */undefined8 GodotConstraint3D::get_soft_body_count(void) {
   return 0;
}
/* GodotJoint3D::setup(float) */undefined8 GodotJoint3D::setup(float param_1) {
   return 0;
}
/* GodotJoint3D::pre_solve(float) */undefined8 GodotJoint3D::pre_solve(float param_1) {
   return 1;
}
/* GodotJoint3D::solve(float) */void GodotJoint3D::solve(float param_1) {
   return;
}
/* GodotJoint3D::get_type() const */undefined8 GodotJoint3D::get_type(void) {
   return 5;
}
/* GodotPhysicsServer3D::is_class_ptr(void*) const */uint GodotPhysicsServer3D::is_class_ptr(GodotPhysicsServer3D *this, void *param_1) {
   return (uint)CONCAT71(0x118d, (undefined4*)param_1 == &PhysicsServer3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x118d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x118d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GodotPhysicsServer3D::_getv(StringName const&, Variant&) const */undefined8 GodotPhysicsServer3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsServer3D::_setv(StringName const&, Variant const&) */undefined8 GodotPhysicsServer3D::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsServer3D::_validate_propertyv(PropertyInfo&) const */void GodotPhysicsServer3D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GodotPhysicsServer3D::_property_can_revertv(StringName const&) const */undefined8 GodotPhysicsServer3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GodotPhysicsServer3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 GodotPhysicsServer3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GodotPhysicsServer3D::_notificationv(int, bool) */void GodotPhysicsServer3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* GodotPhysicsServer3D::is_flushing_queries() const */GodotPhysicsServer3D GodotPhysicsServer3D::is_flushing_queries(GodotPhysicsServer3D *this) {
   return this[0x182];
}
/* CowData<RID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<RID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer3D::area_attach_object_instance_id(RID, ObjectID) [clone .cold] */void GodotPhysicsServer3D::area_attach_object_instance_id(void) {
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
/* GodotPhysicsServer3D::area_get_object_instance_id(RID) const [clone .cold] */void GodotPhysicsServer3D::area_get_object_instance_id(void) {
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
/* GodotPhysicsServer3D::area_set_param(RID, PhysicsServer3D::AreaParameter, Variant const&) [clone
   .cold] */void GodotPhysicsServer3D::area_set_param(void) {
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
/* GodotPhysicsServer3D::area_get_param(RID, PhysicsServer3D::AreaParameter) const [clone .cold] */void GodotPhysicsServer3D::area_get_param(void) {
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
/* GodotPhysicsServer3D::free(RID) [clone .cold] */void GodotPhysicsServer3D::free(void) {
   code *pcVar1;
   int unaff_R15D;
   if (unaff_R15D + 0x80000000U < 0x7fffffff) {
      _err_print_error("get_or_null", "./core/templates/rid_owner.h", 0x103, "Method/function failed. Returning: nullptr", "Attempting to use an uninitialized RID", 0, 0);
   }

   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer3D::space_set_debug_contacts(RID, int) [clone .cold] */void GodotPhysicsServer3D::space_set_debug_contacts(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_001113b0(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GodotPhysicsServer3D::body_set_max_contacts_reported(RID, int) [clone .cold] */void GodotPhysicsServer3D::body_set_max_contacts_reported(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_001113c6(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* HashMap<GodotConstraint3D*, int, HashMapHasherDefault,
   HashMapComparatorDefault<GodotConstraint3D*>,
   DefaultTypedAllocator<HashMapElement<GodotConstraint3D*, int> > >::erase(GodotConstraint3D*
   const&) [clone .isra.0] */void HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase(HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>> *this, GodotConstraint3D **param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
   long *plVar10;
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
   ulong uVar29;
   uint uVar30;
   ulong uVar31;
   ulong uVar32;
   ulong uVar33;
   long *plVar34;
   ulong uVar35;
   uint uVar36;
   uint uVar37;
   uint *puVar38;
   lVar6 = *(long*)( this + 8 );
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      lVar7 = *(long*)( this + 0x10 );
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar35 = CONCAT44(0, uVar5);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar29 = (long)*param_1 * 0x3ffff - 1;
      uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
      uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar32 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
         uVar32 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar32 * lVar8;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar35;
      uVar29 = SUB168(auVar11 * auVar20, 8);
      uVar37 = *(uint*)( lVar7 + uVar29 * 4 );
      uVar33 = (ulong)SUB164(auVar11 * auVar20, 8);
      if (uVar37 != 0) {
         uVar36 = 0;
         do {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )((int)uVar33 + 1) * lVar8;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar35;
            uVar31 = SUB168(auVar14 * auVar23, 8);
            uVar30 = SUB164(auVar14 * auVar23, 8);
            if (( (uint)uVar32 == uVar37 ) && ( *param_1 == *(GodotConstraint3D**)( *(long*)( lVar6 + uVar29 * 8 ) + 0x10 ) )) {
               puVar38 = (uint*)( lVar7 + uVar31 * 4 );
               uVar37 = *puVar38;
               if (( uVar37 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar37 * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar30 + uVar5 ) - SUB164(auVar15 * auVar24, 8)) * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar35,uVar29 = (ulong)uVar30,uVar32 = uVar33,SUB164(auVar16 * auVar25, 8) != 0) {
                  while (true) {
                     uVar33 = uVar29;
                     puVar1 = (uint*)( lVar7 + uVar32 * 4 );
                     *puVar38 = *puVar1;
                     puVar2 = (undefined8*)( lVar6 + uVar31 * 8 );
                     *puVar1 = uVar37;
                     puVar3 = (undefined8*)( lVar6 + uVar32 * 8 );
                     uVar9 = *puVar2;
                     *puVar2 = *puVar3;
                     *puVar3 = uVar9;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = ( ulong )((int)uVar33 + 1) * lVar8;
                     auVar28._8_8_ = 0;
                     auVar28._0_8_ = uVar35;
                     uVar31 = SUB168(auVar19 * auVar28, 8);
                     puVar38 = (uint*)( lVar7 + uVar31 * 4 );
                     uVar37 = *puVar38;
                     if (( uVar37 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar37 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar35,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( SUB164(auVar19 * auVar28, 8) + uVar5 ) - SUB164(auVar17 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar35,SUB164(auVar18 * auVar27, 8) == 0) break;
                     uVar29 = uVar31 & 0xffffffff;
                     uVar32 = uVar33;
                  }
;
               }

               plVar4 = (long*)( lVar6 + uVar33 * 8 );
               *(undefined4*)( lVar7 + uVar33 * 4 ) = 0;
               plVar34 = (long*)*plVar4;
               if (*(long**)( this + 0x18 ) == plVar34) {
                  *(long*)( this + 0x18 ) = *plVar34;
                  plVar34 = (long*)*plVar4;
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_001115c9;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_001115c9:plVar10 = (long*)plVar34[1];
                  goto joined_r0x001115d0;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x001115d0:if (plVar10 != (long*)0x0) {
                  *plVar10 = *plVar34;
                  plVar34 = (long*)*plVar4;
               }

               if (*plVar34 != 0) {
                  *(long*)( *plVar34 + 8 ) = plVar34[1];
                  plVar34 = (long*)*plVar4;
               }

               Memory::free_static(plVar34, false);
               *(undefined8*)( *(long*)( this + 8 ) + uVar33 * 8 ) = 0;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
               return;
            }

            uVar37 = *(uint*)( lVar7 + uVar31 * 4 );
            uVar33 = uVar31 & 0xffffffff;
            uVar36 = uVar36 + 1;
         }
 while ( ( uVar37 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar37 * lVar8,auVar21._8_8_ = 0,auVar21._0_8_ = uVar35,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar5 + uVar30 ) - SUB164(auVar12 * auVar21, 8)) * lVar8,auVar22._8_8_ = 0,auVar22._0_8_ = uVar35,uVar29 = uVar31,uVar36 <= SUB164(auVar13 * auVar22, 8) );
      }

   }

   return;
}
/* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_001184d0;
   if (0 < *(int*)( this + 0x10 )) {
      lVar2 = 0;
      do {
         lVar1 = *(long*)( *(long*)( this + 8 ) + lVar2 * 8 );
         if (lVar1 != 0) {
            local_28 = this;
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
         }

         lVar2 = lVar2 + 1;
      }
 while ( (int)lVar2 < *(int*)( this + 0x10 ) );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::_get_class_namev() const */undefined8 *GodotPhysicsServer3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00111743:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00111743;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GodotPhysicsServer3D");
         goto LAB_001117ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GodotPhysicsServer3D");
   LAB_001117ae:return &_get_class_namev();
}
/* GodotJoint3D::~GodotJoint3D() */void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
   long lVar1;
   long lVar2;
   long in_FS_OFFSET;
   GodotJoint3D *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_get_soft_body_ptr_001184d0;
   if (0 < *(int*)( this + 0x10 )) {
      lVar2 = 0;
      do {
         lVar1 = *(long*)( *(long*)( this + 8 ) + lVar2 * 8 );
         if (lVar1 != 0) {
            local_28 = this;
            HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>::erase((HashMap<GodotConstraint3D*,int,HashMapHasherDefault,HashMapComparatorDefault<GodotConstraint3D*>,DefaultTypedAllocator<HashMapElement<GodotConstraint3D*,int>>>*)( lVar1 + 0x2f0 ), (GodotConstraint3D**)&local_28);
         }

         lVar2 = lVar2 + 1;
      }
 while ( (int)lVar2 < *(int*)( this + 0x10 ) );
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      operator_delete(this, 0x38);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotPhysicsServer3D::get_class() const */void GodotPhysicsServer3D::get_class(void) {
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
/* GodotPhysicsServer3D::_initialize_classv() */void GodotPhysicsServer3D::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_00111ac4;
   if (PhysicsServer3D::initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "PhysicsServer3D";
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
         LAB_00111bce:if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
            LAB_00111bde:PhysicsServer3D::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00111bce;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) goto LAB_00111bde;
      }

      PhysicsServer3D::initialize_class() {
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

   /* GodotPhysicsServer3D::is_class(String const&) const */
   undefined8 GodotPhysicsServer3D::is_class(GodotPhysicsServer3D *this, String *param_1) {
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
                     if (lVar5 == 0) goto LAB_00111cbf;
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

         LAB_00111cbf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00111d73;
      }

      cVar6 = String::operator ==(param_1, "GodotPhysicsServer3D");
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
                        if (lVar5 == 0) goto LAB_00111e4b;
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

            LAB_00111e4b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_00111d73;
         }

         cVar6 = String::operator ==(param_1, "PhysicsServer3D");
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
                           if (lVar5 == 0) goto LAB_00111f2b;
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

               LAB_00111f2b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

               if (cVar6 != '\0') goto LAB_00111d73;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = String::operator ==(param_1, "Object");
               return uVar7;
            }

            goto LAB_00111fd4;
         }

      }

      LAB_00111d73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_00111fd4:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* PhysicsServer3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void PhysicsServer3D::_get_property_listv(List *param_1, bool param_2) {
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
      local_78 = "PhysicsServer3D";
      local_70 = 0xf;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "PhysicsServer3D";
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
         LAB_00112148:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00112148;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar6;
            local_68 = local_80;
            goto joined_r0x00112166;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)pLVar6;
      joined_r0x00112166:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "PhysicsServer3D", false);
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

   /* GodotPhysicsServer3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void GodotPhysicsServer3D::_get_property_listv(GodotPhysicsServer3D *this, List *param_1, bool param_2) {
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
         PhysicsServer3D::_get_property_listv((List*)this, SUB81(param_1, 0));
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "GodotPhysicsServer3D";
      local_70 = 0x14;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "GodotPhysicsServer3D";
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
         LAB_00112548:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_00112548;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x00112565;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x00112565:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "GodotPhysicsServer3D", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            PhysicsServer3D::_get_property_listv((List*)this, SUB81(param_1, 0));
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
   /* HashSet<GodotSpace3D*, HashMapHasherDefault, HashMapComparatorDefault<GodotSpace3D*>
   >::insert(GodotSpace3D* const&) */
   undefined1[16];
   HashSet<GodotSpace3D*,HashMapHasherDefault,HashMapComparatorDefault<GodotSpace3D*>>::insert(GodotSpace3D **param_1) {
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
      GodotSpace3D *local_88;
      ulong local_70;
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
      local_88 = (GodotSpace3D*)*in_RSI;
      if (local_88 == (GodotSpace3D*)0x0) {
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
         local_88 = (GodotSpace3D*)*in_RSI;
         if (local_88 != (GodotSpace3D*)0x0) goto LAB_0011291f;
      }
 else {
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         lVar34 = *in_RDX;
         LAB_0011291f:if (uVar44 != 0) {
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
                     if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_00112dc1;
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

      if ((float)uVar31 * __LC244 < (float)( uVar44 + 1 )) {
         if (uVar32 == 0x1c) {
            uStack_98 = 0;
            _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
            uVar44 = *(uint*)( (long)in_RSI + 0x24 );
            uVar37 = 0xffffffff;
            local_88 = (GodotSpace3D*)*in_RSI;
            goto LAB_00112dc1;
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
         local_88 = (GodotSpace3D*)*in_RSI;
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
      LAB_00112dc1:*(uint*)( (long)param_1 + 0xc ) = uVar37;
      *param_1 = local_88;
      *(uint*)( param_1 + 1 ) = uVar44;
      auVar45._8_8_ = uStack_98;
      auVar45._0_8_ = param_1;
      return auVar45;
   }

   /* WARNING: Removing unreachable block (ram,0x001130b0) */
   /* WARNING: Removing unreachable block (ram,0x001131e0) */
   /* WARNING: Removing unreachable block (ram,0x00113359) */
   /* WARNING: Removing unreachable block (ram,0x001131ec) */
   /* WARNING: Removing unreachable block (ram,0x001131f6) */
   /* WARNING: Removing unreachable block (ram,0x0011333b) */
   /* WARNING: Removing unreachable block (ram,0x00113202) */
   /* WARNING: Removing unreachable block (ram,0x0011320c) */
   /* WARNING: Removing unreachable block (ram,0x0011331d) */
   /* WARNING: Removing unreachable block (ram,0x00113218) */
   /* WARNING: Removing unreachable block (ram,0x00113222) */
   /* WARNING: Removing unreachable block (ram,0x001132ff) */
   /* WARNING: Removing unreachable block (ram,0x0011322e) */
   /* WARNING: Removing unreachable block (ram,0x00113238) */
   /* WARNING: Removing unreachable block (ram,0x001132e1) */
   /* WARNING: Removing unreachable block (ram,0x00113244) */
   /* WARNING: Removing unreachable block (ram,0x0011324e) */
   /* WARNING: Removing unreachable block (ram,0x001132c3) */
   /* WARNING: Removing unreachable block (ram,0x00113256) */
   /* WARNING: Removing unreachable block (ram,0x00113260) */
   /* WARNING: Removing unreachable block (ram,0x001132a8) */
   /* WARNING: Removing unreachable block (ram,0x00113268) */
   /* WARNING: Removing unreachable block (ram,0x0011327e) */
   /* WARNING: Removing unreachable block (ram,0x0011328a) */
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

   /* RID_Alloc<GodotShape3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotShape3D*,true>::~RID_Alloc(RID_Alloc<GodotShape3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_00118520;
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

   /* RID_Alloc<GodotSpace3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSpace3D*,true>::~RID_Alloc(RID_Alloc<GodotSpace3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_00118540;
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

   /* RID_Alloc<GodotArea3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotArea3D*,true>::~RID_Alloc(RID_Alloc<GodotArea3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_00118560;
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

   /* RID_Alloc<GodotBody3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotBody3D*,true>::~RID_Alloc(RID_Alloc<GodotBody3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_00118580;
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

   /* RID_Alloc<GodotSoftBody3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSoftBody3D*,true>::~RID_Alloc(RID_Alloc<GodotSoftBody3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_001185a0;
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

   /* RID_Alloc<GodotJoint3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotJoint3D*,true>::~RID_Alloc(RID_Alloc<GodotJoint3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_001185c0;
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

   /* RID_Alloc<GodotSoftBody3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSoftBody3D*,true>::~RID_Alloc(RID_Alloc<GodotSoftBody3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_001185a0;
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

   /* RID_Alloc<GodotJoint3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotJoint3D*,true>::~RID_Alloc(RID_Alloc<GodotJoint3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_001185c0;
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

   /* RID_Alloc<GodotShape3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotShape3D*,true>::~RID_Alloc(RID_Alloc<GodotShape3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_00118520;
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

   /* RID_Alloc<GodotArea3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotArea3D*,true>::~RID_Alloc(RID_Alloc<GodotArea3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_00118560;
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

   /* RID_Alloc<GodotSpace3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSpace3D*,true>::~RID_Alloc(RID_Alloc<GodotSpace3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_00118540;
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

   /* RID_Alloc<GodotBody3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotBody3D*,true>::~RID_Alloc(RID_Alloc<GodotBody3D*,true> *this) {
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
      *(undefined***)this = &PTR__RID_Alloc_00118580;
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

   /* GodotPhysicsServer3D::~GodotPhysicsServer3D() */
   void GodotPhysicsServer3D::~GodotPhysicsServer3D(GodotPhysicsServer3D *this) {
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
      *(undefined***)this = &PTR__initialize_classv_001185e0;
      *(undefined***)( this + 0x370 ) = &PTR__RID_Alloc_001185c0;
      uVar3 = *(uint*)( this + 0x390 );
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

      uVar3 = *(uint*)( this + 0x38c );
      uVar4 = *(uint*)( this + 0x388 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x378 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x380 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x378 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x378 ), false);
         Memory::free_static(*(void**)( this + 0x380 ), false);
      }

      *(undefined***)( this + 0x318 ) = &PTR__RID_Alloc_001185a0;
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

      *(undefined***)( this + 0x2c0 ) = &PTR__RID_Alloc_00118580;
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

      *(undefined***)( this + 0x268 ) = &PTR__RID_Alloc_00118560;
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

      *(undefined***)( this + 0x210 ) = &PTR__RID_Alloc_00118540;
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

      *(undefined***)( this + 0x1b8 ) = &PTR__RID_Alloc_00118520;
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

      PhysicsServer3D::~PhysicsServer3D((PhysicsServer3D*)this);
      return;
   }

   /* GodotPhysicsServer3D::~GodotPhysicsServer3D() */
   void GodotPhysicsServer3D::~GodotPhysicsServer3D(GodotPhysicsServer3D *this) {
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
      *(undefined***)this = &PTR__initialize_classv_001185e0;
      *(undefined***)( this + 0x370 ) = &PTR__RID_Alloc_001185c0;
      uVar3 = *(uint*)( this + 0x390 );
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

      uVar3 = *(uint*)( this + 0x38c );
      uVar4 = *(uint*)( this + 0x388 );
      if (uVar4 <= uVar3) {
         lVar7 = 0;
         do {
            Memory::free_static(*(void**)( *(long*)( this + 0x378 ) + lVar7 * 8 ), false);
            lVar2 = lVar7 * 8;
            lVar7 = lVar7 + 1;
            Memory::free_static(*(void**)( *(long*)( this + 0x380 ) + lVar2 ), false);
         }
 while ( (uint)lVar7 < uVar3 / uVar4 );
      }

      if (*(void**)( this + 0x378 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 0x378 ), false);
         Memory::free_static(*(void**)( this + 0x380 ), false);
      }

      *(undefined***)( this + 0x318 ) = &PTR__RID_Alloc_001185a0;
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

      *(undefined***)( this + 0x2c0 ) = &PTR__RID_Alloc_00118580;
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

      *(undefined***)( this + 0x268 ) = &PTR__RID_Alloc_00118560;
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

      *(undefined***)( this + 0x210 ) = &PTR__RID_Alloc_00118540;
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

      *(undefined***)( this + 0x1b8 ) = &PTR__RID_Alloc_00118520;
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

      PhysicsServer3D::~PhysicsServer3D((PhysicsServer3D*)this);
      if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      operator_delete(this, 0x3d8);
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
         LAB_00115e90:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
      if (lVar7 == 0) goto LAB_00115e90;
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
         LAB_00115dfc:puVar9 = *(undefined8**)this;
         if (puVar9 == (undefined8*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar3 = puVar9[-1];
         if (param_1 <= lVar3) goto LAB_00115d91;
      }
 else {
         if (lVar8 != 0) {
            uVar6 = _realloc(this, lVar7);
            if ((int)uVar6 != 0) {
               return uVar6;
            }

            goto LAB_00115dfc;
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
      LAB_00115d91:puVar9[-1] = param_1;
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
         if (iVar4 != 0) goto LAB_00116190;
         iVar4 = 0;
         CowData<RID>::_copy_on_write((CowData<RID>*)( this + 8 ));
         lVar9 = *(long*)( this + 8 );
         goto LAB_00116065;
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
               goto LAB_001160e2;
            }

            bVar3 = 0;
            iVar4 = 1;
            lVar10 = 1;
            goto LAB_00116012;
         }

         if (puVar6 != (ulong*)0x0) {
            bVar3 = 0;
            iVar4 = 0;
            lVar10 = 0;
            goto LAB_00116012;
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
               if (iVar5 < iVar8) goto LAB_00115ff7;
            }
;
            iVar5 = iVar4 + -1;
         }
 while ( iVar8 <= iVar5 );
         LAB_00115ff7:if (uVar7 < uVar11) {
            iVar4 = iVar4 + 1;
            lVar10 = (long)iVar4;
            bVar3 = ( byte )(iVar4 >> 0x1f) >> 7;
         }
 else {
            bVar3 = ( byte )(iVar1 - ( iVar1 >> 0x1f ) >> 7) >> 7;
         }

         LAB_00116012:uVar7 = puVar6[-1];
         lVar9 = uVar7 + 1;
         if (( lVar9 <= lVar10 ) || ( bVar3 != 0 )) {
            LAB_001160e2:_err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, lVar10, lVar9, "p_pos", "new_size", "", false, false);
            return;
         }

      }

      iVar5 = CowData<RID>::resize<false>((CowData<RID>*)( this + 8 ), lVar9);
      if (iVar5 != 0) {
         LAB_00116190:_err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
         return;
      }

      CowData<RID>::_copy_on_write((CowData<RID>*)( this + 8 ));
      lVar9 = *(long*)( this + 8 );
      if (lVar10 < (long)uVar7) {
         memmove((void*)( lVar9 + 8 + lVar10 * 8 ), (void*)( lVar9 + lVar10 * 8 ), ( uVar7 - lVar10 ) * 8);
      }

      LAB_00116065:*(ulong*)( lVar9 + (long)iVar4 * 8 ) = uVar11;
      return;
   }

   /* CowData<GodotBody3D::Contact>::_realloc(long) */
   undefined8 CowData<GodotBody3D::Contact>::_realloc(CowData<GodotBody3D::Contact> *this, long param_1) {
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

   /* WARNING: Removing unreachable block (ram,0x001163a8) */
   /* WARNING: Removing unreachable block (ram,0x001164d8) */
   /* WARNING: Removing unreachable block (ram,0x001166a0) */
   /* WARNING: Removing unreachable block (ram,0x001164e4) */
   /* WARNING: Removing unreachable block (ram,0x001164ee) */
   /* WARNING: Removing unreachable block (ram,0x00116680) */
   /* WARNING: Removing unreachable block (ram,0x001164fa) */
   /* WARNING: Removing unreachable block (ram,0x00116504) */
   /* WARNING: Removing unreachable block (ram,0x00116660) */
   /* WARNING: Removing unreachable block (ram,0x00116510) */
   /* WARNING: Removing unreachable block (ram,0x0011651a) */
   /* WARNING: Removing unreachable block (ram,0x00116640) */
   /* WARNING: Removing unreachable block (ram,0x00116526) */
   /* WARNING: Removing unreachable block (ram,0x00116530) */
   /* WARNING: Removing unreachable block (ram,0x00116620) */
   /* WARNING: Removing unreachable block (ram,0x0011653c) */
   /* WARNING: Removing unreachable block (ram,0x00116546) */
   /* WARNING: Removing unreachable block (ram,0x00116600) */
   /* WARNING: Removing unreachable block (ram,0x00116552) */
   /* WARNING: Removing unreachable block (ram,0x0011655c) */
   /* WARNING: Removing unreachable block (ram,0x001165e0) */
   /* WARNING: Removing unreachable block (ram,0x00116564) */
   /* WARNING: Removing unreachable block (ram,0x0011657a) */
   /* WARNING: Removing unreachable block (ram,0x00116586) */
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

   /* RID_Alloc<GodotSpace3D*, true>::make_rid(GodotSpace3D* const&) */
   ulong RID_Alloc<GodotSpace3D*,true>::make_rid(RID_Alloc<GodotSpace3D*,true> *this, GodotSpace3D **param_1) {
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
            goto LAB_001168cb;
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

         LAB_00116ab0:uVar15 = 0;
      }
 else {
         LAB_001168cb:uVar2 = *(uint*)( this + 0x18 );
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
         if (uVar15 == 0) goto LAB_00116ab0;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_0011698e;
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
      LAB_0011698e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotShape3D*, true>::make_rid(GodotShape3D* const&) */
   ulong RID_Alloc<GodotShape3D*,true>::make_rid(RID_Alloc<GodotShape3D*,true> *this, GodotShape3D **param_1) {
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
            goto LAB_00116d2b;
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

         LAB_00116f10:uVar15 = 0;
      }
 else {
         LAB_00116d2b:uVar2 = *(uint*)( this + 0x18 );
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
         if (uVar15 == 0) goto LAB_00116f10;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_00116dee;
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
      LAB_00116dee:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotArea3D*, true>::make_rid(GodotArea3D* const&) */
   ulong RID_Alloc<GodotArea3D*,true>::make_rid(RID_Alloc<GodotArea3D*,true> *this, GodotArea3D **param_1) {
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
            goto LAB_0011718b;
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

         LAB_00117370:uVar15 = 0;
      }
 else {
         LAB_0011718b:uVar2 = *(uint*)( this + 0x18 );
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
         if (uVar15 == 0) goto LAB_00117370;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_0011724e;
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
      LAB_0011724e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotBody3D*, true>::make_rid(GodotBody3D* const&) */
   ulong RID_Alloc<GodotBody3D*,true>::make_rid(RID_Alloc<GodotBody3D*,true> *this, GodotBody3D **param_1) {
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
            goto LAB_001175eb;
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

         LAB_001177d0:uVar15 = 0;
      }
 else {
         LAB_001175eb:uVar2 = *(uint*)( this + 0x18 );
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
         if (uVar15 == 0) goto LAB_001177d0;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_001176ae;
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
      LAB_001176ae:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotSoftBody3D*, true>::make_rid(GodotSoftBody3D* const&) */
   ulong RID_Alloc<GodotSoftBody3D*,true>::make_rid(RID_Alloc<GodotSoftBody3D*,true> *this, GodotSoftBody3D **param_1) {
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
            goto LAB_00117a4b;
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

         LAB_00117c30:uVar15 = 0;
      }
 else {
         LAB_00117a4b:uVar2 = *(uint*)( this + 0x18 );
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
         if (uVar15 == 0) goto LAB_00117c30;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_00117b0e;
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
      LAB_00117b0e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* RID_Alloc<GodotJoint3D*, true>::make_rid(GodotJoint3D* const&) */
   ulong RID_Alloc<GodotJoint3D*,true>::make_rid(RID_Alloc<GodotJoint3D*,true> *this, GodotJoint3D **param_1) {
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
            goto LAB_00117eab;
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

         LAB_00118090:uVar15 = 0;
      }
 else {
         LAB_00117eab:uVar2 = *(uint*)( this + 0x18 );
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
         if (uVar15 == 0) goto LAB_00118090;
         if ((uint)uVar15 < *(uint*)( this + 0x1c )) {
            puVar12 = (undefined8*)( ( uVar14 % ( ulong ) * (uint*)( this + 0x18 ) ) * 0x10 + *(long*)( *(long*)( this + 8 ) + ( uVar14 / *(uint*)( this + 0x18 ) ) * 8 ) );
            if ((int)*(uint*)( puVar12 + 1 ) < 0) {
               uVar7 = *(uint*)( puVar12 + 1 ) & 0x7fffffff;
               if (uVar7 == ( uint )(uVar15 >> 0x20)) {
                  *(uint*)( puVar12 + 1 ) = uVar7;
                  *puVar12 = *param_1;
                  goto LAB_00117f6e;
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
      LAB_00117f6e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar15;
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* GodotPhysicsServer3D::~GodotPhysicsServer3D() */
   void GodotPhysicsServer3D::~GodotPhysicsServer3D(GodotPhysicsServer3D *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotJoint3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotJoint3D*,true>::~RID_Alloc(RID_Alloc<GodotJoint3D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotSoftBody3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSoftBody3D*,true>::~RID_Alloc(RID_Alloc<GodotSoftBody3D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotBody3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotBody3D*,true>::~RID_Alloc(RID_Alloc<GodotBody3D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotArea3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotArea3D*,true>::~RID_Alloc(RID_Alloc<GodotArea3D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotSpace3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotSpace3D*,true>::~RID_Alloc(RID_Alloc<GodotSpace3D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* RID_Alloc<GodotShape3D*, true>::~RID_Alloc() */
   void RID_Alloc<GodotShape3D*,true>::~RID_Alloc(RID_Alloc<GodotShape3D*,true> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* GodotJoint3D::~GodotJoint3D() */
   void GodotJoint3D::~GodotJoint3D(GodotJoint3D *this) {
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


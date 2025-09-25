/* JoltConvexPolygonShape3D::get_data() const */void JoltConvexPolygonShape3D::get_data(void) {
   long in_RSI;
   Variant *in_RDI;
   Variant::Variant(in_RDI, (Vector*)( in_RSI + 0x88 ));
   return;
}
/* JoltConvexPolygonShape3D::set_margin(float) */void JoltConvexPolygonShape3D::set_margin(JoltConvexPolygonShape3D *this, float param_1) {
   if (param_1 != *(float*)( this + 0x98 )) {
      *(float*)( this + 0x98 ) = param_1;
      JoltShape3D::destroy();
      return;
   }

   return;
}
/* JoltConvexPolygonShape3D::_calculate_aabb() const */void JoltConvexPolygonShape3D::_calculate_aabb(void) {
   float *pfVar1;
   float fVar2;
   undefined8 *puVar3;
   long lVar4;
   long in_RSI;
   float *in_RDI;
   float fVar5;
   float fVar6;
   float fVar7;
   float fVar8;
   float fVar9;
   float fVar10;
   puVar3 = *(undefined8**)( in_RSI + 0x90 );
   for (int i = 0; i < 6; i++) {
      in_RDI[i] = 0;
   }

   if (puVar3 != (undefined8*)0x0) {
      lVar4 = 0;
      do {
         while (true) {
            if ((long)puVar3[-1] <= lVar4) {
               return;
            }

            if (lVar4 == 0) break;
            fVar9 = in_RDI[3];
            pfVar1 = (float*)( (long)puVar3 + lVar4 * 0xc );
            if (( ( fVar9 < 0.0 ) || ( in_RDI[4] <= 0.0 && in_RDI[4] != 0.0 ) ) || ( in_RDI[5] <= 0.0 && in_RDI[5] != 0.0 )) {
               _err_print_error("expand_to", "./core/math/aabb.h", 0x158, "AABB size is negative, this is not supported. Use AABB.abs() to get an AABB with a positive size.", 0, 0);
               puVar3 = *(undefined8**)( in_RSI + 0x90 );
            }

            fVar8 = *pfVar1;
            fVar10 = *in_RDI;
            lVar4 = lVar4 + 1;
            fVar5 = pfVar1[1];
            fVar7 = in_RDI[1];
            fVar9 = fVar9 + fVar10;
            fVar2 = in_RDI[2];
            fVar6 = fVar8;
            if (fVar10 <= fVar8) {
               fVar6 = fVar10;
            }

            if (fVar8 <= fVar9) {
               fVar8 = fVar9;
            }

            fVar9 = fVar5;
            if (fVar7 <= fVar5) {
               fVar9 = fVar7;
            }

            if (fVar5 <= in_RDI[4] + fVar7) {
               fVar5 = in_RDI[4] + fVar7;
            }

            fVar10 = pfVar1[2];
            fVar7 = fVar10;
            if (fVar10 <= in_RDI[5] + fVar2) {
               fVar7 = in_RDI[5] + fVar2;
            }

            if (fVar2 <= fVar10) {
               fVar10 = fVar2;
            }

            *in_RDI = fVar6;
            in_RDI[1] = fVar9;
            in_RDI[2] = fVar10;
            in_RDI[3] = fVar8 - fVar6;
            *(ulong*)( in_RDI + 4 ) = CONCAT44(fVar7 - fVar10, fVar5 - fVar9);
            if (puVar3 == (undefined8*)0x0) {
               return;
            }

         }
;
         lVar4 = 1;
         *(undefined8*)in_RDI = *puVar3;
         in_RDI[2] = *(float*)( puVar3 + 1 );
      }
 while ( puVar3 != (undefined8*)0x0 );
   }

   return;
}
/* JoltConvexPolygonShape3D::set_data(Variant const&) */void JoltConvexPolygonShape3D::set_data(JoltConvexPolygonShape3D *this, Variant *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   Variant local_28[8];
   long local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)param_1 == 0x24) {
      Variant::operator_cast_to_Vector(local_28);
      lVar3 = local_20;
      lVar2 = *(long*)( this + 0x90 );
      if (lVar2 == local_20) {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_20 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

      }
 else {
         if (lVar2 != 0) {
            LOCK();
            plVar1 = (long*)( lVar2 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( this + 0x90 );
               *(undefined8*)( this + 0x90 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         *(long*)( this + 0x90 ) = local_20;
      }

      _calculate_aabb();
      *(undefined8*)( this + 0x70 ) = local_48;
      *(undefined8*)( this + 0x78 ) = uStack_40;
      *(undefined8*)( this + 0x80 ) = local_38;
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         JoltShape3D::destroy();
         return;
      }

   }
 else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("set_data", "modules/jolt_physics/shapes/jolt_convex_polygon_shape_3d.cpp", 0x56, "Condition \"p_data.get_type() != Variant::PACKED_VECTOR3_ARRAY\" is true.", 0, 0);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JoltConvexPolygonShape3D::to_string() const */void JoltConvexPolygonShape3D::to_string(void) {
   long *plVar1;
   float fVar2;
   long lVar3;
   long in_RSI;
   String_conflict *in_RDI;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   fVar2 = *(float*)( in_RSI + 0x98 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = "{vertex_count=%d margin=%f}";
   local_40 = 0;
   local_30 = 0x1b;
   String::parse_latin1((StrRange*)&local_40);
   vformat<long,float>(in_RDI, (long)&local_40, fVar2);
   lVar3 = local_40;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* JoltConvexPolygonShape3D::_build() const */undefined8 *JoltConvexPolygonShape3D::_build(void) {
   long *plVar1;
   undefined4 *puVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   undefined4 uVar5;
   code *pcVar6;
   undefined8 uVar7;
   undefined1 auVar8[16];
   char *pcVar9;
   ulong uVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   ulong uVar13;
   long lVar14;
   undefined8 *puVar15;
   undefined4 *puVar16;
   ulong uVar17;
   long in_RSI;
   undefined8 *in_RDI;
   int iVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   float fVar20;
   float fVar21;
   long local_118;
   long local_110;
   long local_108;
   long local_100;
   char *local_f8;
   undefined8 local_f0;
   long *local_e8;
   long local_d8[2];
   char local_c8;
   code *local_b8;
   undefined4 local_b0;
   float local_ac;
   undefined8 local_a8;
   long *local_a0;
   long local_90[2];
   char local_80;
   long *local_78;
   undefined4 local_70;
   undefined1 local_68[16];
   long local_58;
   float local_50;
   undefined8 local_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( in_RSI + 0x90 ) != 0 ) && ( iVar18 = iVar18 != 0 )) {
      if (2 < iVar18) {
         uVar19 = (ulong)iVar18;
         puVar11 = (undefined8*)( *JPH::Reallocate )(0, 0, uVar19 << 4);
         puVar16 = *(undefined4**)( in_RSI + 0x90 );
         if (puVar16 == (undefined4*)0x0) {
            lVar14 = 0;
            LAB_00100963:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar14, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         lVar14 = *(long*)( puVar16 + -2 );
         if (lVar14 < 1) goto LAB_00100963;
         puVar2 = puVar16 + uVar19 * 3;
         uVar10 = 1;
         do {
            uVar17 = uVar10;
            uVar3 = puVar16[2];
            uVar4 = puVar16[1];
            uVar5 = *puVar16;
            uVar13 = uVar19;
            if (uVar19 < uVar17) {
               uVar13 = uVar19 * 2;
               if (uVar19 * 2 < uVar17) {
                  uVar13 = uVar17;
               }

               puVar11 = (undefined8*)( *JPH::Reallocate )(puVar11, uVar19 << 4, uVar13 << 4);
            }

            puVar15 = puVar11 + uVar17 * 2 + -2;
            if (puVar15 != (undefined8*)0x0) {
               *(undefined4*)puVar15 = uVar5;
               *(undefined4*)( (long)puVar15 + 4 ) = uVar4;
               *(undefined4*)( puVar15 + 1 ) = uVar3;
               *(undefined4*)( (long)puVar15 + 0xc ) = uVar3;
            }

            puVar16 = puVar16 + 3;
            uVar10 = uVar17 + 1;
            uVar19 = uVar13;
         }
 while ( puVar2 != puVar16 );
         _calculate_aabb();
         fVar20 = (float)local_a8;
         if (local_ac <= (float)local_a8) {
            fVar20 = local_ac;
         }

         if (fVar20 <= local_a8._4_4_) {
            local_a8._4_4_ = fVar20;
         }

         fVar20 = local_a8._4_4_ * __LC22;
         fVar21 = (float)JoltProjectSettings::get_collision_margin_fraction();
         fVar21 = fVar21 * fVar20;
         local_b0 = 0;
         local_a8 = 0;
         local_80 = '\0';
         local_b8 = JPH::ConvexHullShapeSettings::Create;
         local_78 = (long*)0x0;
         local_70 = 0x447a0000;
         local_50 = *(float*)( in_RSI + 0x98 );
         if (fVar21 <= *(float*)( in_RSI + 0x98 )) {
            local_50 = fVar21;
         }

         local_58 = 0;
         local_68 = (undefined1[16])0x0;
         if (uVar17 * 0x10 != 0) {
            local_58 = ( *JPH::Reallocate )(0, 0);
            local_68._8_8_ = (long)( uVar17 * 0x10 ) >> 4;
            if (puVar11 != puVar11 + uVar17 * 2) {
               puVar12 = (undefined8*)( local_58 + local_68._0_8_ * 0x10 );
               lVar14 = local_68._0_8_;
               puVar15 = puVar11;
               do {
                  lVar14 = lVar14 + 1;
                  local_68._0_8_ = lVar14;
                  if (puVar12 != (undefined8*)0x0) {
                     uVar7 = puVar15[1];
                     *puVar12 = *puVar15;
                     puVar12[1] = uVar7;
                  }

                  puVar15 = puVar15 + 2;
                  puVar12 = puVar12 + 2;
               }
 while ( puVar11 + uVar17 * 2 != puVar15 );
            }

         }

         local_4c = 0x3a83126f3d4ccccd;
         JPH::ConvexHullShapeSettings::Create();
         if (local_c8 == '\x02') {
            JoltShape3D::_owners_to_string();
            String::utf8((char*)&local_110, (int)local_e8);
            to_string();
            local_f8 = "Failed to build Jolt Physics convex polygon shape with %s. It returned the following error: \'%s\'. This shape belongs to %s.";
            local_100 = 0;
            local_f0 = 0x7b;
            String::parse_latin1((StrRange*)&local_100);
            vformat<String,String,String>(&local_f8, (StrRange*)&local_100, &local_118, &local_110, &local_108);
            _err_print_error("_build", "modules/jolt_physics/shapes/jolt_convex_polygon_shape_3d.cpp", 0x3e, "Condition \"shape_result.HasError()\" is true. Returning: nullptr", &local_f8, 0, 0);
            pcVar9 = local_f8;
            if (local_f8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_f8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_f8 = (char*)0x0;
                  Memory::free_static(pcVar9 + -0x10, false);
               }

            }

            lVar14 = local_100;
            if (local_100 != 0) {
               LOCK();
               plVar1 = (long*)( local_100 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_100 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            lVar14 = local_118;
            if (local_118 != 0) {
               LOCK();
               plVar1 = (long*)( local_118 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_118 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            lVar14 = local_110;
            if (local_110 != 0) {
               LOCK();
               plVar1 = (long*)( local_110 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_110 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            lVar14 = local_108;
            if (local_108 != 0) {
               LOCK();
               plVar1 = (long*)( local_108 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_108 = 0;
                  Memory::free_static((void*)( lVar14 + -0x10 ), false);
               }

            }

            *in_RDI = 0;
            LAB_00100658:if (local_c8 == '\x01') {
               if (local_e8 != (long*)0x0) {
                  LOCK();
                  plVar1 = local_e8 + 1;
                  *(int*)plVar1 = (int)*plVar1 + -1;
                  UNLOCK();
                  if ((int)*plVar1 == 0) {
                     ( **(code**)( *local_e8 + 8 ) )();
                  }

               }

            }
 else if (( local_c8 == '\x02' ) && ( local_e8 != local_d8 )) {
               ( *JPH::Free )();
            }

         }
 else {
            *in_RDI = local_e8;
            if (local_e8 != (long*)0x0) {
               LOCK();
               *(int*)( local_e8 + 1 ) = (int)local_e8[1] + 1;
               UNLOCK();
               goto LAB_00100658;
            }

         }

         local_b8 = JPH::ConvexHullShapeSettings::Create;
         if (local_58 != 0) {
            auVar8._8_8_ = 0;
            auVar8._0_8_ = local_68._8_8_;
            local_68 = auVar8 << 0x40;
            ( *JPH::Free )();
         }

         local_b8 = JoltShape3D::_owners_to_string;
         if (local_78 != (long*)0x0) {
            LOCK();
            plVar1 = local_78 + 1;
            *(int*)plVar1 = (int)*plVar1 + -1;
            UNLOCK();
            if ((int)*plVar1 == 0) {
               if (*(code**)( *local_78 + 0x18 ) == JPH::PhysicsMaterial::~PhysicsMaterial) {
                  ( *JPH::Free )();
               }
 else {
                  ( **(code**)( *local_78 + 0x18 ) )();
               }

            }

         }

         local_b8 = _err_print_index_error;
         if (local_80 == '\x01') {
            if (local_a0 != (long*)0x0) {
               LOCK();
               plVar1 = local_a0 + 1;
               *(int*)plVar1 = (int)*plVar1 + -1;
               UNLOCK();
               if ((int)*plVar1 == 0) {
                  ( **(code**)( *local_a0 + 8 ) )();
               }

            }

         }
 else if (( local_80 == '\x02' ) && ( local_a0 != local_90 )) {
            ( *JPH::Free )();
         }

         if (puVar11 != (undefined8*)0x0) {
            ( *JPH::Free )(puVar11);
         }

         goto LAB_0010070a;
      }

      JoltShape3D::_owners_to_string();
      to_string();
      local_f8 = "Failed to build Jolt Physics convex polygon shape with %s. It must have a vertex count of at least 3. This shape belongs to %s.";
      local_100 = 0;
      local_f0 = 0x7f;
      String::parse_latin1((StrRange*)&local_100);
      vformat<String,String>(&local_f8, (StrRange*)&local_100, &local_110, &local_108);
      _err_print_error("_build", "modules/jolt_physics/shapes/jolt_convex_polygon_shape_3d.cpp", 0x2d, "Condition \"vertex_count < 3\" is true. Returning: nullptr", &local_f8, 0, 0);
      pcVar9 = local_f8;
      if (local_f8 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_f8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_f8 = (char*)0x0;
            Memory::free_static(pcVar9 + -0x10, false);
         }

      }

      lVar14 = local_100;
      if (local_100 != 0) {
         LOCK();
         plVar1 = (long*)( local_100 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_100 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      lVar14 = local_110;
      if (local_110 != 0) {
         LOCK();
         plVar1 = (long*)( local_110 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_110 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      lVar14 = local_108;
      if (local_108 != 0) {
         LOCK();
         plVar1 = (long*)( local_108 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

   }

   *in_RDI = 0;
   LAB_0010070a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
}
/* JoltConvexPolygonShape3D::get_type() const */undefined8 JoltConvexPolygonShape3D::get_type(void) {
   return 6;
}
/* JoltConvexPolygonShape3D::is_convex() const */undefined8 JoltConvexPolygonShape3D::is_convex(void) {
   return 1;
}
/* JoltConvexPolygonShape3D::get_margin() const */undefined4 JoltConvexPolygonShape3D::get_margin(JoltConvexPolygonShape3D *this) {
   return *(undefined4*)( this + 0x98 );
}
/* JoltConvexPolygonShape3D::get_aabb() const */void JoltConvexPolygonShape3D::get_aabb(void) {
   undefined8 uVar1;
   undefined8 uVar2;
   long in_RSI;
   undefined8 *in_RDI;
   uVar1 = *(undefined8*)( in_RSI + 0x70 );
   uVar2 = *(undefined8*)( in_RSI + 0x78 );
   in_RDI[2] = *(undefined8*)( in_RSI + 0x80 );
   *in_RDI = uVar1;
   in_RDI[1] = uVar2;
   return;
}
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Could not recover jumptable at 0x00100c54. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( *Free )();
   return;
}
/* JoltConvexPolygonShape3D::~JoltConvexPolygonShape3D() */void JoltConvexPolygonShape3D::~JoltConvexPolygonShape3D(JoltConvexPolygonShape3D *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__build_00101db8;
   if (*(long*)( this + 0x90 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x90 );
         *(undefined8*)( this + 0x90 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         JoltShape3D::~JoltShape3D((JoltShape3D*)this);
         return;
      }

   }

   JoltShape3D::~JoltShape3D((JoltShape3D*)this);
   return;
}
/* JoltConvexPolygonShape3D::~JoltConvexPolygonShape3D() */void JoltConvexPolygonShape3D::~JoltConvexPolygonShape3D(JoltConvexPolygonShape3D *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__build_00101db8;
   if (*(long*)( this + 0x90 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x90 );
         *(undefined8*)( this + 0x90 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   JoltShape3D::~JoltShape3D((JoltShape3D*)this);
   operator_delete(this, 0xa0);
   return;
}
/* WARNING: Removing unreachable block (ram,0x001011d0) *//* WARNING: Removing unreachable block (ram,0x00101300) *//* WARNING: Removing unreachable block (ram,0x00101479) *//* WARNING: Removing unreachable block (ram,0x0010130c) *//* WARNING: Removing unreachable block (ram,0x00101316) *//* WARNING: Removing unreachable block (ram,0x0010145b) *//* WARNING: Removing unreachable block (ram,0x00101322) *//* WARNING: Removing unreachable block (ram,0x0010132c) *//* WARNING: Removing unreachable block (ram,0x0010143d) *//* WARNING: Removing unreachable block (ram,0x00101338) *//* WARNING: Removing unreachable block (ram,0x00101342) *//* WARNING: Removing unreachable block (ram,0x0010141f) *//* WARNING: Removing unreachable block (ram,0x0010134e) *//* WARNING: Removing unreachable block (ram,0x00101358) *//* WARNING: Removing unreachable block (ram,0x00101401) *//* WARNING: Removing unreachable block (ram,0x00101364) *//* WARNING: Removing unreachable block (ram,0x0010136e) *//* WARNING: Removing unreachable block (ram,0x001013e3) *//* WARNING: Removing unreachable block (ram,0x00101376) *//* WARNING: Removing unreachable block (ram,0x00101380) *//* WARNING: Removing unreachable block (ram,0x001013c8) *//* WARNING: Removing unreachable block (ram,0x00101388) *//* WARNING: Removing unreachable block (ram,0x0010139e) *//* WARNING: Removing unreachable block (ram,0x001013aa) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4) {
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
/* WARNING: Removing unreachable block (ram,0x001015f8) *//* WARNING: Removing unreachable block (ram,0x00101728) *//* WARNING: Removing unreachable block (ram,0x001018a0) *//* WARNING: Removing unreachable block (ram,0x00101734) *//* WARNING: Removing unreachable block (ram,0x0010173e) *//* WARNING: Removing unreachable block (ram,0x00101882) *//* WARNING: Removing unreachable block (ram,0x0010174a) *//* WARNING: Removing unreachable block (ram,0x00101754) *//* WARNING: Removing unreachable block (ram,0x00101864) *//* WARNING: Removing unreachable block (ram,0x00101760) *//* WARNING: Removing unreachable block (ram,0x0010176a) *//* WARNING: Removing unreachable block (ram,0x00101846) *//* WARNING: Removing unreachable block (ram,0x00101776) *//* WARNING: Removing unreachable block (ram,0x00101780) *//* WARNING: Removing unreachable block (ram,0x00101828) *//* WARNING: Removing unreachable block (ram,0x0010178c) *//* WARNING: Removing unreachable block (ram,0x00101796) *//* WARNING: Removing unreachable block (ram,0x0010180a) *//* WARNING: Removing unreachable block (ram,0x0010179e) *//* WARNING: Removing unreachable block (ram,0x001017a8) *//* WARNING: Removing unreachable block (ram,0x001017ef) *//* WARNING: Removing unreachable block (ram,0x001017b0) *//* WARNING: Removing unreachable block (ram,0x001017c5) *//* WARNING: Removing unreachable block (ram,0x001017d1) *//* String vformat<String, String, String>(String const&, String const, String const, String const)
    */undefined8 *vformat<String,String,String>(undefined8 *param_1, bool *param_2, String_conflict *param_3, String_conflict *param_4, String_conflict *param_5) {
   Variant *pVVar1;
   int iVar2;
   Variant *pVVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   iVar2 = 0;
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar4 = (int)local_f8;
   Array::resize(iVar4);
   pVVar3 = local_a8;
   do {
      iVar2 = iVar2 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar4);
      Variant::operator =(pVVar1, pVVar3);
      pVVar3 = pVVar3 + 0x18;
   }
 while ( iVar2 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar3 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00101a28) *//* WARNING: Removing unreachable block (ram,0x00101b58) *//* WARNING: Removing unreachable block (ram,0x00101cd1) *//* WARNING: Removing unreachable block (ram,0x00101b64) *//* WARNING: Removing unreachable block (ram,0x00101b6e) *//* WARNING: Removing unreachable block (ram,0x00101cb3) *//* WARNING: Removing unreachable block (ram,0x00101b7a) *//* WARNING: Removing unreachable block (ram,0x00101b84) *//* WARNING: Removing unreachable block (ram,0x00101c95) *//* WARNING: Removing unreachable block (ram,0x00101b90) *//* WARNING: Removing unreachable block (ram,0x00101b9a) *//* WARNING: Removing unreachable block (ram,0x00101c77) *//* WARNING: Removing unreachable block (ram,0x00101ba6) *//* WARNING: Removing unreachable block (ram,0x00101bb0) *//* WARNING: Removing unreachable block (ram,0x00101c59) *//* WARNING: Removing unreachable block (ram,0x00101bbc) *//* WARNING: Removing unreachable block (ram,0x00101bc6) *//* WARNING: Removing unreachable block (ram,0x00101c3b) *//* WARNING: Removing unreachable block (ram,0x00101bce) *//* WARNING: Removing unreachable block (ram,0x00101bd8) *//* WARNING: Removing unreachable block (ram,0x00101c20) *//* WARNING: Removing unreachable block (ram,0x00101be0) *//* WARNING: Removing unreachable block (ram,0x00101bf6) *//* WARNING: Removing unreachable block (ram,0x00101c02) *//* String vformat<long, float>(String const&, long const, float const) */String_conflict *vformat<long,float>(String_conflict *param_1, long param_2, float param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   long in_RDX;
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
   Variant::Variant(local_88, in_RDX);
   Variant::Variant(local_70, param_3);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)param_2);
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
/* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   return;
}
/* JoltConvexPolygonShape3D::_build() const */void JoltConvexPolygonShape3D::_GLOBAL__sub_I__build(void) {
   if (JPH::DVec3::cTrue == '\0') {
      JPH::DVec3::cTrue = '\x01';
      JPH::DVec3::cTrue = _LC27;
   }

   return;
}
/* WARNING: Control flow encountered bad instruction data *//* JoltConvexPolygonShape3D::~JoltConvexPolygonShape3D() */void JoltConvexPolygonShape3D::~JoltConvexPolygonShape3D(JoltConvexPolygonShape3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JPH::PhysicsMaterial::~PhysicsMaterial() */void JPH::PhysicsMaterial::~PhysicsMaterial(PhysicsMaterial *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


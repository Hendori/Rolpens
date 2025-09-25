/* GodotBody3D::~GodotBody3D() */void GodotBody3D::~GodotBody3D(GodotBody3D *this) {
   long *plVar1;
   uint uVar2;
   Callable *this_00;
   Object *pOVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   void *pvVar7;
   this_00 = *(Callable**)( this + 0x358 );
   *(undefined***)this = &PTR__shape_changed_00105938;
   if (this_00 != (Callable*)0x0) {
      if (Variant::needs_deinit[*(int*)( this_00 + 0x10 )] != '\0') {
         Variant::_clear_internal();
      }

      Callable::~Callable(this_00);
      Memory::free_static(this_00, false);
   }

   pOVar3 = *(Object**)( this + 0x360 );
   if (pOVar3 != (Object*)0x0) {
      cVar5 = predelete_handler(pOVar3);
      if (cVar5 != '\0') {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   Callable::~Callable((Callable*)( this + 0x348 ));
   if (*(long*)( this + 0x338 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x338 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar6 = *(long*)( this + 0x338 );
         *(undefined8*)( this + 0x338 ) = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x328 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x328 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar6 = *(long*)( this + 0x328 );
         *(undefined8*)( this + 0x328 ) = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   pvVar7 = *(void**)( this + 0x2f8 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x31c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x318 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x31c ) = 0;
            *(undefined1(*) [16])( this + 0x308 ) = (undefined1[16])0x0;
         }
 else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x300 ) + lVar6 ) != 0) {
                  *(int*)( *(long*)( this + 0x300 ) + lVar6 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar7 + lVar6 * 2 ), false);
                  pvVar7 = *(void**)( this + 0x2f8 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x31c ) = 0;
            *(undefined1(*) [16])( this + 0x308 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0010014f;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x300 ), false);
   }

   LAB_0010014f:if (*(long*)( this + 0x2b0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2b0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar6 = *(long*)( this + 0x2b0 );
         *(undefined8*)( this + 0x2b0 ) = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   for (int i = 0; i < 3; i++) {
      plVar1 = *(long**)( this + ( -32 * i + 648 ) );
      if (plVar1 != (long*)0) {
         lVar6 = *(long*)( this + ( -32 * i + 664 ) );
         if (lVar6 != 0) {
            *(undefined8*)( lVar6 + 24 ) = *(undefined8*)( this + ( -32 * i + 672 ) );
         }

         lVar4 = *(long*)( this + ( -32 * i + 672 ) );
         if (lVar4 != 0) {
            *(long*)( lVar4 + 16 ) = lVar6;
         }

         if (this + ( -32 * i + 648 ) == (GodotBody3D*)*plVar1) {
            *plVar1 = *(long*)( this + ( -32 * i + 664 ) );
         }

         if (this + ( -32 * i + 648 ) == (GodotBody3D*)plVar1[1]) {
            plVar1[1] = lVar4;
         }

      }

   }

   *(code**)this = operator_delete;
   plVar1 = *(long**)( this + 0xb0 );
   if (plVar1 != (long*)0x0) {
      lVar6 = *(long*)( this + 0xc0 );
      if (lVar6 != 0) {
         *(undefined8*)( lVar6 + 0x18 ) = *(undefined8*)( this + 200 );
      }

      lVar4 = *(long*)( this + 200 );
      if (lVar4 != 0) {
         *(long*)( lVar4 + 0x10 ) = lVar6;
      }

      if (this + 0xb0 == (GodotBody3D*)*plVar1) {
         *plVar1 = *(long*)( this + 0xc0 );
      }

      if (this + 0xb0 == (GodotBody3D*)plVar1[1]) {
         plVar1[1] = lVar4;
      }

   }

   if (*(long*)( this + 0x38 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x38 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar6 = *(long*)( this + 0x38 );
         *(undefined8*)( this + 0x38 ) = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* GodotBody3D::~GodotBody3D() */void GodotBody3D::~GodotBody3D(GodotBody3D *this) {
   ~GodotBody3D(this)
   ;;
   ;;
   operator_delete(this, 0x370);
   return;
}
/* GodotBody3D::set_space(GodotSpace3D*) */void GodotBody3D::set_space(GodotSpace3D *param_1) {
   if (*(SelfList**)( param_1 + 0x40 ) != (SelfList*)0x0) {
      if (*(long*)( param_1 + 0x268 ) != 0) {
         GodotSpace3D::body_remove_from_mass_properties_update_list(*(SelfList**)( param_1 + 0x40 ));
      }

      if (*(long*)( param_1 + 0x248 ) != 0) {
         GodotSpace3D::body_remove_from_active_list(*(SelfList**)( param_1 + 0x40 ));
      }

      if (*(long*)( param_1 + 0x288 ) != 0) {
         GodotSpace3D::body_remove_from_state_query_list(*(SelfList**)( param_1 + 0x40 ));
      }

   }

   GodotCollisionObject3D::_set_space(param_1);
   if (*(SelfList**)( param_1 + 0x40 ) != (SelfList*)0x0) {
      if (*(long*)( param_1 + 0x268 ) == 0) {
         GodotSpace3D::body_add_to_mass_properties_update_list(*(SelfList**)( param_1 + 0x40 ));
      }

      if (( param_1[0x2b9] != (GodotSpace3D)0x0 ) && ( *(long*)( param_1 + 0x248 ) == 0 )) {
         GodotSpace3D::body_add_to_active_list(*(SelfList**)( param_1 + 0x40 ));
         return;
      }

   }

   return;
}
/* GodotBody3D::_mass_properties_changed() */void GodotBody3D::_mass_properties_changed(GodotBody3D *this) {
   if (( *(SelfList**)( this + 0x40 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x268 ) == 0 )) {
      GodotSpace3D::body_add_to_mass_properties_update_list(*(SelfList**)( this + 0x40 ));
      return;
   }

   return;
}
/* GodotBody3D::_update_transform_dependent() */void GodotBody3D::_update_transform_dependent(GodotBody3D *this) {
   float fVar1;
   float fVar2;
   float fVar3;
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
   float fVar18;
   float local_68;
   float fStack_64;
   float fStack_60;
   float fStack_5c;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   float local_48;
   undefined1 local_38[8];
   float fStack_30;
   float fStack_2c;
   undefined1 local_28[8];
   float fStack_20;
   float fStack_1c;
   float local_18;
   long local_10;
   fVar7 = *(float*)( this + 0x180 );
   fVar8 = *(float*)( this + 0x48 );
   fVar17 = *(float*)( this + 0x54 );
   fVar11 = *(float*)( this + 0x18c );
   fVar18 = *(float*)( this + 0x4c );
   fVar1 = *(float*)( this + 0x58 );
   fVar2 = *(float*)( this + 0x5c );
   fVar3 = *(float*)( this + 0x50 );
   fVar4 = *(float*)( this + 0x60 );
   fVar5 = *(float*)( this + 100 );
   fVar12 = *(float*)( this + 0x198 );
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   fVar6 = *(float*)( this + 0x68 );
   fVar13 = fVar12 * fVar3 + fVar11 * fVar18 + fVar7 * fVar8;
   fVar14 = *(float*)( this + 0x19c ) * fVar3 + *(float*)( this + 400 ) * fVar18 + *(float*)( this + 0x184 ) * fVar8;
   fVar15 = *(float*)( this + 0x1a0 ) * fVar3 + *(float*)( this + 0x194 ) * fVar18 + *(float*)( this + 0x188 ) * fVar8;
   fVar16 = fVar12 * fVar2 + fVar11 * fVar1 + fVar7 * fVar17;
   *(float*)( this + 0x1d4 ) = fVar13;
   *(float*)( this + 0x1d8 ) = fVar14;
   *(float*)( this + 0x1dc ) = fVar15;
   *(float*)( this + 0x1e0 ) = fVar16;
   fVar9 = *(float*)( this + 0x19c ) * fVar2 + *(float*)( this + 400 ) * fVar1 + *(float*)( this + 0x184 ) * fVar17;
   fVar10 = *(float*)( this + 0x1a0 ) * fVar2 + *(float*)( this + 0x194 ) * fVar1 + *(float*)( this + 0x188 ) * fVar17;
   fVar11 = fVar12 * fVar6 + fVar11 * fVar5 + fVar7 * fVar4;
   fVar12 = *(float*)( this + 0x19c ) * fVar6 + *(float*)( this + 400 ) * fVar5 + *(float*)( this + 0x184 ) * fVar4;
   *(float*)( this + 0x1e4 ) = fVar9;
   *(float*)( this + 0x1e8 ) = fVar10;
   *(float*)( this + 0x1ec ) = fVar11;
   *(float*)( this + 0x1f0 ) = fVar12;
   fVar7 = fVar4 * *(float*)( this + 0x188 ) + *(float*)( this + 0x194 ) * fVar5 + *(float*)( this + 0x1a0 ) * fVar6;
   *(float*)( this + 500 ) = fVar7;
   *(float*)( this + 0x1f8 ) = fVar8 * *(float*)( this + 0x1a4 ) + *(float*)( this + 0x1a8 ) * fVar18 + *(float*)( this + 0x1ac ) * fVar3;
   *(float*)( this + 0x1fc ) = fVar17 * *(float*)( this + 0x1a4 ) + *(float*)( this + 0x1a8 ) * fVar1 + *(float*)( this + 0x1ac ) * fVar2;
   *(float*)( this + 0x200 ) = *(float*)( this + 0x1a4 ) * fVar4 + fVar5 * *(float*)( this + 0x1a8 ) + fVar6 * *(float*)( this + 0x1ac );
   Basis::transposed();
   _local_38 = ZEXT416(_LC4);
   _local_28 = ZEXT416(_LC4);
   local_18 = 1.0;
   Basis::scale((Vector3*)local_38);
   fVar17 = (float)local_28._4_4_ * fVar12 + fVar11 * fStack_30 + local_18 * fVar7;
   fVar18 = fVar12 * (float)local_28._0_4_ + fVar11 * (float)local_38._4_4_ + fVar7 * fStack_1c;
   fVar8 = fVar12 * fStack_2c + fVar11 * (float)local_38._0_4_ + fVar7 * fStack_20;
   *(float*)( this + 0x1d0 ) = fVar8 * fStack_60 + fVar18 * fStack_54 + fVar17 * local_48;
   *(float*)( this + 0x1b0 ) = ( (float)local_28._0_4_ * fVar14 + (float)local_38._4_4_ * fVar13 + fStack_1c * fVar15 ) * fStack_5c + local_68 * ( fStack_20 * fVar15 + fStack_2c * fVar14 + (float)local_38._0_4_ * fVar13 ) + ( fVar13 * fStack_30 + fVar14 * (float)local_28._4_4_ + fVar15 * local_18 ) * fStack_50;
   *(float*)( this + 0x1b4 ) = ( (float)local_28._0_4_ * fVar14 + (float)local_38._4_4_ * fVar13 + fStack_1c * fVar15 ) * local_58 + fStack_64 * ( fStack_20 * fVar15 + fStack_2c * fVar14 + (float)local_38._0_4_ * fVar13 ) + ( fVar13 * fStack_30 + fVar14 * (float)local_28._4_4_ + fVar15 * local_18 ) * fStack_4c;
   *(float*)( this + 0x1b8 ) = ( (float)local_28._0_4_ * fVar14 + (float)local_38._4_4_ * fVar13 + fStack_1c * fVar15 ) * fStack_54 + fStack_60 * ( fStack_20 * fVar15 + fStack_2c * fVar14 + (float)local_38._0_4_ * fVar13 ) + ( fVar13 * fStack_30 + fVar14 * (float)local_28._4_4_ + fVar15 * local_18 ) * local_48;
   *(float*)( this + 0x1bc ) = ( (float)local_28._0_4_ * fVar9 + (float)local_38._4_4_ * fVar16 + fStack_1c * fVar10 ) * fStack_5c + local_68 * ( fStack_20 * fVar10 + fStack_2c * fVar9 + (float)local_38._0_4_ * fVar16 ) + ( fVar16 * fStack_30 + fVar9 * (float)local_28._4_4_ + fVar10 * local_18 ) * fStack_50;
   *(float*)( this + 0x1c0 ) = local_58 * ( fVar9 * (float)local_28._0_4_ + fVar16 * (float)local_38._4_4_ + fVar10 * fStack_1c ) + fStack_64 * ( fVar9 * fStack_2c + fVar16 * (float)local_38._0_4_ + fVar10 * fStack_20 ) + fStack_4c * ( (float)local_28._4_4_ * fVar9 + fVar16 * fStack_30 + local_18 * fVar10 );
   *(float*)( this + 0x1c4 ) = fStack_54 * ( fVar9 * (float)local_28._0_4_ + fVar16 * (float)local_38._4_4_ + fVar10 * fStack_1c ) + fStack_60 * ( fVar9 * fStack_2c + fVar16 * (float)local_38._0_4_ + fVar10 * fStack_20 ) + local_48 * ( (float)local_28._4_4_ * fVar9 + fVar16 * fStack_30 + local_18 * fVar10 );
   *(float*)( this + 0x1c8 ) = fStack_5c * fVar18 + local_68 * fVar8 + fStack_50 * fVar17;
   *(float*)( this + 0x1cc ) = local_58 * ( fVar12 * (float)local_28._0_4_ + fVar11 * (float)local_38._4_4_ + fVar7 * fStack_1c ) + fStack_64 * ( fVar12 * fStack_2c + fVar11 * (float)local_38._0_4_ + fVar7 * fStack_20 ) + fStack_4c * ( (float)local_28._4_4_ * fVar12 + fVar11 * fStack_30 + local_18 * fVar7 );
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotBody3D::update_mass_properties() */void GodotBody3D::update_mass_properties(GodotBody3D *this) {
   long lVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   GodotBody3D GVar4;
   uint uVar5;
   code *pcVar6;
   undefined8 uVar7;
   float fVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   GodotBody3D GVar13;
   long in_FS_OFFSET;
   float fVar14;
   float fVar15;
   float fVar16;
   float fVar17;
   ulong uVar18;
   float fVar23;
   undefined1 auVar19[16];
   float fVar21;
   float fVar22;
   float fVar24;
   float fVar25;
   undefined1 auVar20[16];
   float fVar26;
   float fVar27;
   float fVar29;
   float fVar30;
   float fVar31;
   float fVar32;
   undefined1 auVar28[16];
   float fVar33;
   undefined1 auVar34[16];
   float fVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar40;
   float fVar41;
   float fVar42;
   float fVar43;
   float fVar44;
   float fVar45;
   float fVar46;
   float fVar47;
   float fVar48;
   float fVar49;
   float fVar50;
   float fVar51;
   undefined1 auVar52[12];
   undefined8 local_178;
   undefined8 uStack_170;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined4 local_158;
   undefined1 local_138[8];
   float fStack_130;
   float fStack_12c;
   undefined1 local_128[8];
   float fStack_120;
   float fStack_11c;
   float local_118;
   float local_108;
   float fStack_104;
   float fStack_100;
   float fStack_fc;
   float local_f8;
   float fStack_f4;
   float fStack_f0;
   float fStack_ec;
   float local_e8;
   float local_d8;
   float fStack_d4;
   float fStack_d0;
   float fStack_cc;
   float local_c8;
   float fStack_c4;
   float fStack_c0;
   float fStack_bc;
   float local_b8;
   float local_a8;
   float fStack_a4;
   float fStack_a0;
   float fStack_9c;
   float local_98;
   float fStack_94;
   float fStack_90;
   float fStack_8c;
   float local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined4 local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = *(uint*)( this + 0xd4 );
   if (uVar5 == 2) {
      lVar9 = *(long*)( this + 0x38 );
      lVar12 = 0;
      lVar10 = 0;
      fVar50 = 0.0;
      if (lVar9 == 0) {
         if (this[0x205] != (GodotBody3D)0x0) {
            *(undefined8*)( this + 0x1a4 ) = 0;
            *(undefined4*)( this + 0x1ac ) = 0;
         }

         fVar50 = 0.0;
      }
 else {
         LAB_00100b17:lVar11 = *(long*)( lVar9 + -8 );
         if ((int)lVar10 < (int)lVar11) {
            do {
               if (lVar10 < lVar11) {
                  if (*(char*)( lVar9 + 0x88 + lVar12 ) != '\0') goto LAB_001012e0;
               }
 else {
                  _err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, lVar10, lVar11, "p_idx", "shapes.size()", "", false, false);
                  lVar9 = *(long*)( this + 0x38 );
               }

               if (lVar9 == 0) goto LAB_00101358;
               lVar11 = *(long*)( lVar9 + -8 );
               if (lVar11 <= lVar10) goto LAB_0010135b;
               lVar11 = *(long*)( lVar9 + -8 );
               lVar10 = lVar10 + 1;
               fVar50 = fVar50 + *(float*)( lVar9 + 0x7c + lVar12 );
               lVar12 = lVar12 + 0x90;
               if ((int)lVar11 <= (int)lVar10) break;
            }
 while ( true );
         }

         LAB_00100b70:if (this[0x205] != (GodotBody3D)0x0) {
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined8*)( this + 0x1a4 ) = 0;
            if (fVar50 != 0.0) {
               if (lVar9 == 0) {
                  uVar18 = 0;
                  fVar14 = 0.0;
               }
 else {
                  lVar12 = 0;
                  lVar10 = 0;
                  LAB_00100bb0:lVar11 = *(long*)( lVar9 + -8 );
                  if ((int)lVar10 < (int)lVar11) {
                     do {
                        if (lVar10 < lVar11) {
                           if (*(char*)( lVar9 + 0x88 + lVar12 ) != '\0') goto LAB_001013b0;
                        }
 else {
                           _err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, lVar10, lVar11, "p_idx", "shapes.size()", "", false, false);
                           lVar9 = *(long*)( this + 0x38 );
                        }

                        if (lVar9 == 0) goto LAB_00101358;
                        lVar11 = *(long*)( lVar9 + -8 );
                        if (lVar11 <= lVar10) goto LAB_0010135b;
                        lVar1 = lVar9 + lVar12;
                        lVar11 = *(long*)( lVar9 + -8 );
                        lVar10 = lVar10 + 1;
                        uVar3 = *(undefined8*)( lVar1 + 0x24 );
                        lVar12 = lVar12 + 0x90;
                        fVar14 = ( *(float*)( this + 0x138 ) * *(float*)( lVar1 + 0x7c ) ) / fVar50;
                        *(float*)( this + 0x1ac ) = *(float*)( lVar1 + 0x2c ) * fVar14 + *(float*)( this + 0x1ac );
                        *(ulong*)( this + 0x1a4 ) = CONCAT44(fVar14 * (float)( (ulong)uVar3 >> 0x20 ) + *(float*)( this + 0x1a8 ), fVar14 * (float)uVar3 + *(float*)( this + 0x1a4 ));
                        if ((int)lVar11 <= (int)lVar10) break;
                     }
 while ( true );
                  }

                  LAB_00100c50:uVar18 = *(ulong*)( this + 0x1a4 );
                  fVar14 = *(float*)( this + 0x1ac );
               }

               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar18;
               fVar17 = *(float*)( this + 0x138 );
               auVar34._4_4_ = fVar17;
               auVar34._0_4_ = fVar17;
               auVar34._8_8_ = _LC13;
               auVar19 = divps(auVar19, auVar34);
               *(float*)( this + 0x1ac ) = fVar14 / fVar17;
               *(long*)( this + 0x1a4 ) = auVar19._0_8_;
            }

         }

      }

      GVar4 = this[0x204];
      if (GVar4 != (GodotBody3D)0x0) {
         lVar12 = 0;
         lVar10 = 0;
         GVar13 = (GodotBody3D)0x0;
         local_118 = 0.0;
         _local_138 = (undefined1[16])0x0;
         _local_128 = (undefined1[16])0x0;
         if (lVar9 == 0) {
            LAB_001014db:_local_138 = ZEXT416((uint)_LC4);
            local_118 = _LC4;
            _local_128 = _local_138;
         }
 else {
            LAB_00100ce0:do {
               lVar11 = *(long*)( lVar9 + -8 );
               if ((int)lVar11 <= (int)lVar10) break;
               if (lVar10 < lVar11) {
                  if (*(char*)( lVar9 + 0x88 + lVar12 ) == '\0') goto LAB_00100d05;
               }
 else {
                  _err_print_index_error("is_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x99, lVar10, lVar11, "p_idx", "shapes.size()", "", false, false);
                  lVar9 = *(long*)( this + 0x38 );
                  LAB_00100d05:if (lVar9 == 0) {
                     LAB_00101358:lVar11 = 0;
                     LAB_0010135b:_err_print_index_error("get_shape_area", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x8c, lVar10, lVar11, "p_index", "shapes.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar6 = (code*)invalidInstructionException();
                     ( *pcVar6 )();
                  }

                  lVar11 = *(long*)( lVar9 + -8 );
                  if (lVar11 <= lVar10) goto LAB_0010135b;
                  fVar14 = *(float*)( lVar9 + lVar12 + 0x7c );
                  if (fVar14 == 0.0) {
                     lVar10 = lVar10 + 1;
                     lVar12 = lVar12 + 0x90;
                     goto LAB_00100ce0;
                  }

                  fVar15 = ( fVar14 * *(float*)( this + 0x138 ) ) / fVar50;
                  auVar52 = ( **(code**)( **(long**)( lVar9 + lVar12 + 0x80 ) + 0x48 ) )();
                  local_78 = auVar52._0_8_;
                  uStack_70 = CONCAT44(uStack_70._4_4_, auVar52._8_4_);
                  Basis::from_scale((Vector3*)&local_108);
                  fVar39 = local_e8;
                  fVar8 = fStack_ec;
                  fVar30 = fStack_f0;
                  fVar27 = fStack_f4;
                  fVar33 = local_f8;
                  fVar25 = fStack_fc;
                  fVar22 = fStack_100;
                  fVar17 = fStack_104;
                  fVar14 = local_108;
                  lVar9 = *(long*)( this + 0x38 );
                  if (lVar9 == 0) {
                     lVar11 = 0;
                     LAB_0010149a:_err_print_index_error("get_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x80, lVar10, lVar11, "p_index", "shapes.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar6 = (code*)invalidInstructionException();
                     ( *pcVar6 )();
                  }

                  lVar11 = *(long*)( lVar9 + -8 );
                  if (lVar11 <= lVar10) goto LAB_0010149a;
                  local_78 = *(undefined8*)( lVar9 + lVar12 );
                  uStack_70 = ( (undefined8*)( lVar9 + lVar12 ) )[1];
                  puVar2 = (undefined8*)( lVar9 + 0x10 + lVar12 );
                  local_68 = *puVar2;
                  uStack_60 = puVar2[1];
                  puVar2 = (undefined8*)( lVar9 + 0x20 + lVar12 );
                  uVar3 = *puVar2;
                  uVar7 = puVar2[1];
                  local_58 = (undefined4)uVar3;
                  fStack_54 = (float)( (ulong)uVar3 >> 0x20 );
                  fStack_50 = (float)uVar7;
                  fStack_4c = (float)( (ulong)uVar7 >> 0x20 );
                  Basis::orthonormalized();
                  Basis::transposed();
                  fVar35 = fVar27 * fStack_bc + fVar22 * fStack_c0 + fVar39 * local_b8;
                  fVar45 = fStack_bc * fVar33 + fStack_c0 * fVar17 + local_b8 * fVar8;
                  fVar48 = fStack_bc * fVar25 + fStack_c0 * fVar14 + local_b8 * fVar30;
                  fVar40 = fVar45 * fStack_94;
                  fVar51 = fVar48 * fStack_a0;
                  fVar26 = local_a8 * ( fVar30 * fStack_d0 + fVar25 * fStack_d4 + fVar14 * local_d8 );
                  fVar29 = fStack_a4 * ( fVar30 * fStack_d0 + fVar25 * fStack_d4 + fVar14 * local_d8 );
                  fVar31 = fStack_a0 * ( fVar30 * fStack_d0 + fVar25 * fStack_d4 + fVar14 * local_d8 );
                  fVar32 = local_a8 * ( fVar30 * fStack_c4 + fVar25 * local_c8 + fVar14 * fStack_cc );
                  fVar16 = ( fVar8 * fStack_d0 + fVar33 * fStack_d4 + fVar17 * local_d8 ) * fStack_9c;
                  fVar21 = ( fVar8 * fStack_d0 + fVar33 * fStack_d4 + fVar17 * local_d8 ) * local_98;
                  fVar23 = ( fVar8 * fStack_d0 + fVar33 * fStack_d4 + fVar17 * local_d8 ) * fStack_94;
                  fVar24 = ( fVar8 * fStack_c4 + fVar33 * local_c8 + fVar17 * fStack_cc ) * fStack_9c;
                  fVar41 = fVar35 * local_88;
                  fVar42 = fStack_8c * ( fVar27 * local_c8 + fVar22 * fStack_cc + fVar39 * fStack_c4 );
                  fVar43 = local_88 * ( fVar27 * local_c8 + fVar22 * fStack_cc + fVar39 * fStack_c4 );
                  fVar35 = fStack_90 * fVar35;
                  fVar44 = fStack_8c * ( fVar27 * fStack_bc + fVar22 * fStack_c0 + fVar39 * local_b8 );
                  fVar36 = ( fStack_d0 * fVar39 + local_d8 * fVar22 + fStack_d4 * fVar27 ) * fStack_90;
                  fVar37 = ( fStack_d0 * fVar39 + local_d8 * fVar22 + fStack_d4 * fVar27 ) * fStack_8c;
                  fVar38 = ( fStack_d0 * fVar39 + local_d8 * fVar22 + fStack_d4 * fVar27 ) * local_88;
                  fVar39 = ( fStack_c4 * fVar39 + fStack_cc * fVar22 + local_c8 * fVar27 ) * fStack_90;
                  fVar46 = ( local_c8 * fVar25 + fStack_cc * fVar14 + fStack_c4 * fVar30 ) * fStack_a4;
                  fVar47 = ( local_c8 * fVar25 + fStack_cc * fVar14 + fStack_c4 * fVar30 ) * fStack_a0;
                  fVar48 = fVar48 * local_a8;
                  fVar49 = ( fStack_bc * fVar25 + fStack_c0 * fVar14 + local_b8 * fVar30 ) * fStack_a4;
                  fVar27 = fStack_54 - (float)*(undefined8*)( this + 0x1a4 );
                  fVar30 = fStack_50 - (float)( ( ulong ) * (undefined8*)( this + 0x1a4 ) >> 0x20 );
                  fVar14 = local_98 * ( local_c8 * fVar33 + fStack_cc * fVar17 + fStack_c4 * fVar8 );
                  fVar22 = fStack_94 * ( local_c8 * fVar33 + fStack_cc * fVar17 + fStack_c4 * fVar8 );
                  fVar45 = fStack_9c * fVar45;
                  fVar25 = local_98 * ( fStack_bc * fVar33 + fStack_c0 * fVar17 + local_b8 * fVar8 );
                  fVar17 = fStack_4c - *(float*)( this + 0x1ac );
                  Vector3::outer((Vector3*)&local_a8);
                  lVar9 = *(long*)( this + 0x38 );
                  fVar17 = fVar27 * fVar27 + fVar30 * fVar30 + fVar17 * fVar17;
                  fVar33 = fVar17 * 0.0;
                  local_118 = ( fVar17 - local_88 ) * fVar15 + fVar51 + fVar40 + fVar41 + local_118;
                  local_128._0_4_ = ( fVar17 - local_98 ) * fVar15 + fVar14 + fVar46 + fVar42 + (float)local_128._0_4_;
                  local_128._4_4_ = ( fVar33 - fStack_94 ) * fVar15 + fVar22 + fVar47 + fVar43 + (float)local_128._4_4_;
                  fStack_120 = ( fVar33 - fStack_90 ) * fVar15 + fVar45 + fVar48 + fVar35 + fStack_120;
                  fStack_11c = ( fVar33 - fStack_8c ) * fVar15 + fVar25 + fVar49 + fVar44 + fStack_11c;
                  local_138._4_4_ = ( fVar33 - fStack_a4 ) * fVar15 + fVar21 + fVar29 + fVar37 + (float)local_138._4_4_;
                  local_138._0_4_ = ( fVar17 - local_a8 ) * fVar15 + fVar16 + fVar26 + fVar36 + (float)local_138._0_4_;
                  fStack_130 = ( fVar33 - fStack_a0 ) * fVar15 + fVar23 + fVar31 + fVar38 + fStack_130;
                  fStack_12c = ( fVar33 - fStack_9c ) * fVar15 + fVar24 + fVar32 + fVar39 + fStack_12c;
                  GVar13 = GVar4;
               }

               lVar10 = lVar10 + 1;
               lVar12 = lVar12 + 0x90;
            }
 while ( lVar9 != 0 );
            if (GVar13 == (GodotBody3D)0x0) goto LAB_001014db;
         }

         fVar50 = _LC4;
         if (0.0 < *(float*)( this + 0x144 )) {
            local_138._0_4_ = *(float*)( this + 0x144 );
         }

         if (0.0 < *(float*)( this + 0x148 )) {
            local_128._0_4_ = *(float*)( this + 0x148 );
         }

         if (0.0 < *(float*)( this + 0x14c )) {
            local_118 = *(float*)( this + 0x14c );
         }

         Basis::diagonalize();
         Basis::transposed();
         *(undefined8*)( this + 0x180 ) = local_178;
         *(undefined8*)( this + 0x188 ) = uStack_170;
         uVar18 = _LC13;
         auVar28._0_4_ = SUB164(_local_138, 0);
         auVar28._4_4_ = SUB164(_local_128, 0);
         auVar20._8_8_ = 0;
         auVar20._0_8_ = _LC13;
         *(undefined8*)( this + 400 ) = local_168;
         *(undefined8*)( this + 0x198 ) = uStack_160;
         auVar28._8_8_ = uVar18;
         *(float*)( this + 0x17c ) = fVar50 / local_118;
         auVar19 = divps(auVar20, auVar28);
         *(undefined4*)( this + 0x1a0 ) = local_158;
         *(long*)( this + 0x174 ) = auVar19._0_8_;
      }

      if (*(float*)( this + 0x138 ) != 0.0) {
         *(float*)( this + 0x170 ) = _LC4 / *(float*)( this + 0x138 );
         goto LAB_00100aa3;
      }

   }
 else {
      if (2 < uVar5) {
         if (uVar5 == 3) {
            *(undefined4*)( this + 0x1d0 ) = 0;
            *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
            *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
            *(float*)( this + 0x170 ) = _LC4 / *(float*)( this + 0x138 );
         }

         goto LAB_00100aa3;
      }

      *(undefined8*)( this + 0x174 ) = 0;
      *(undefined4*)( this + 0x17c ) = 0;
   }

   *(undefined4*)( this + 0x170 ) = 0;
   LAB_00100aa3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _update_transform_dependent(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001012e0:if (lVar9 == 0) goto LAB_00100b70;
   lVar10 = lVar10 + 1;
   lVar12 = lVar12 + 0x90;
   goto LAB_00100b17;
   LAB_001013b0:if (lVar9 == 0) goto LAB_00100c50;
   lVar10 = lVar10 + 1;
   lVar12 = lVar12 + 0x90;
   goto LAB_00100bb0;
}
/* GodotBody3D::reset_mass_properties() */void GodotBody3D::reset_mass_properties(GodotBody3D *this) {
   *(undefined2*)( this + 0x204 ) = 0x101;
   if (( *(SelfList**)( this + 0x40 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x268 ) == 0 )) {
      GodotSpace3D::body_add_to_mass_properties_update_list(*(SelfList**)( this + 0x40 ));
      return;
   }

   return;
}
/* GodotBody3D::set_active(bool) */void GodotBody3D::set_active(GodotBody3D *this, bool param_1) {
   if (this[0x2b9] != (GodotBody3D)param_1) {
      this[0x2b9] = (GodotBody3D)param_1;
      if (param_1) {
         if (*(int*)( this + 0xd4 ) == 0) {
            this[0x2b9] = (GodotBody3D)0x0;
            return;
         }

         if (*(SelfList**)( this + 0x40 ) != (SelfList*)0x0) {
            GodotSpace3D::body_add_to_active_list(*(SelfList**)( this + 0x40 ));
            return;
         }

      }
 else if (*(SelfList**)( this + 0x40 ) != (SelfList*)0x0) {
         GodotSpace3D::body_remove_from_active_list(*(SelfList**)( this + 0x40 ));
         return;
      }

   }

   return;
}
/* GodotBody3D::set_param(PhysicsServer3D::BodyParameter, Variant const&) */void GodotBody3D::set_param(GodotBody3D *this, undefined4 param_2, Variant *param_3) {
   ulong uVar1;
   int iVar2;
   float fVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[12];
   switch (param_2) {
      case 0:
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0x13c) = fVar3;
    break;
      case 1:
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0x140) = fVar3;
    break;
      case 2:
    fVar3 = Variant::operator_cast_to_float(param_3);
    if (fVar3 <= 0.0) {
      _err_print_error("set_param","modules/godot_physics_3d/godot_body_3d.cpp",0xcb,
                       "Condition \"mass_value <= 0\" is true.",0,0);
      return;
    }
    *(float *)(this + 0x138) = fVar3;
    if (*(int *)(this + 0xd4) < 2) {
      return;
    }
    goto LAB_0010168e;
      case 3:
    auVar6 = Variant::operator_cast_to_Vector3(param_3);
    *(undefined1 (*) [12])(this + 0x144) = auVar6;
    if (((0.0 < *(float *)(this + 0x144)) && (0.0 < *(float *)(this + 0x148))) &&
       (0.0 < *(float *)(this + 0x14c))) {
      this[0x204] = (GodotBody3D)0x0;
      fVar3 = _LC4;
      if (*(int *)(this + 0xd4) != 2) {
        return;
      }
      auVar4 = ZEXT416((uint)_LC4);
      auVar5._4_4_ = *(float *)(this + 0x148);
      auVar5._0_4_ = *(float *)(this + 0x144);
      *(undefined1 (*) [16])(this + 0x180) = auVar4;
      *(undefined1 (*) [16])(this + 400) = auVar4;
      uVar1 = _LC13;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = _LC13;
      *(float *)(this + 0x1a0) = fVar3;
      auVar5._8_8_ = uVar1;
      auVar4 = divps(auVar4,auVar5);
      *(float *)(this + 0x17c) = fVar3 / *(float *)(this + 0x14c);
      *(long *)(this + 0x174) = auVar4._0_8_;
      _update_transform_dependent(this);
      return;
    }
    this[0x204] = (GodotBody3D)0x1;
    if (*(int *)(this + 0xd4) != 2) {
      return;
    }
LAB_0010168e:
    if ((*(SelfList **)(this + 0x40) != (SelfList *)0x0) && (*(long *)(this + 0x268) == 0)) {
      GodotSpace3D::body_add_to_mass_properties_update_list(*(SelfList **)(this + 0x40));
      return;
    }
    break;
      case 4:
    this[0x205] = (GodotBody3D)0x0;
    auVar6 = Variant::operator_cast_to_Vector3(param_3);
    *(undefined1 (*) [12])(this + 0x1a4) = auVar6;
    _update_transform_dependent(this);
    return;
      case 5:
    if ((((ABS(*(float *)(this + 0x168)) < _LC20) &&
         (*(SelfList **)(this + 0x40) != (SelfList *)0x0)) && (1 < *(uint *)(this + 0xd4))) &&
       (this[0x2b9] == (GodotBody3D)0x0)) {
      this[0x2b9] = (GodotBody3D)0x1;
      GodotSpace3D::body_add_to_active_list(*(SelfList **)(this + 0x40));
    }
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0x168) = fVar3;
    break;
      case 6:
    iVar2 = Variant::operator_cast_to_int(param_3);
    *(int *)(this + 0x150) = iVar2;
    break;
      case 7:
    iVar2 = Variant::operator_cast_to_int(param_3);
    *(int *)(this + 0x154) = iVar2;
    break;
      case 8:
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0x158) = fVar3;
    break;
      case 9:
    fVar3 = Variant::operator_cast_to_float(param_3);
    *(float *)(this + 0x15c) = fVar3;
    break;
      default:
    return;
   }

   return;
}
/* GodotBody3D::get_param(PhysicsServer3D::BodyParameter) const */Variant *GodotBody3D::get_param(Variant *param_1, long param_2, undefined4 param_3) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 local_20;
   float local_18;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_3) {
      case 0:
    Variant::Variant(param_1,*(float *)(param_2 + 0x13c));
    break;
      case 1:
    Variant::Variant(param_1,*(float *)(param_2 + 0x140));
    break;
      case 2:
    Variant::Variant(param_1,*(float *)(param_2 + 0x138));
    break;
      case 3:
    if (*(int *)(param_2 + 0xd4) == 2) {
      local_18 = _LC4 / *(float *)(param_2 + 0x17c);
      auVar1._8_8_ = 0;
      auVar1._0_8_ = _LC13;
      auVar2._8_8_ = _LC13;
      auVar2._0_8_ = *(undefined8 *)(param_2 + 0x174);
      auVar1 = divps(auVar1,auVar2);
      local_20 = auVar1._0_8_;
      Variant::Variant(param_1,(Vector3 *)&local_20);
    }
    else {
      local_18 = 0.0;
      local_20 = 0;
      Variant::Variant(param_1,(Vector3 *)&local_20);
    }
    break;
      case 4:
    Variant::Variant(param_1,(Vector3 *)(param_2 + 0x1a4));
    break;
      case 5:
    Variant::Variant(param_1,*(float *)(param_2 + 0x168));
    break;
      case 6:
    Variant::Variant(param_1,*(int *)(param_2 + 0x150));
    break;
      case 7:
    Variant::Variant(param_1,*(int *)(param_2 + 0x154));
    break;
      case 8:
    Variant::Variant(param_1,*(float *)(param_2 + 0x158));
    break;
      case 9:
    Variant::Variant(param_1,*(float *)(param_2 + 0x15c));
    break;
      default:
    Variant::Variant(param_1,0);
   }

   if (local_10 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* GodotBody3D::set_mode(PhysicsServer3D::BodyMode) */void GodotBody3D::set_mode(GodotBody3D *this, uint param_2) {
   int iVar1;
   long lVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   bool bVar4;
   float fVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   undefined8 local_38;
   undefined8 uStack_30;
   iVar1 = *(int*)( this + 0xd4 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   *(uint*)( this + 0xd4 ) = param_2;
   if (param_2 == 2) {
      if (*(float*)( this + 0x138 ) <= 0.0) {
         fVar5 = 0.0;
      }
 else {
         fVar5 = _LC4 / *(float*)( this + 0x138 );
      }

      *(float*)( this + 0x170 ) = fVar5;
      if (this[0x204] == (GodotBody3D)0x0) {
         auVar6 = ZEXT416((uint)_LC4);
         *(undefined1(*) [16])( this + 0x180 ) = auVar6;
         *(undefined1(*) [16])( this + 400 ) = auVar6;
         fVar5 = _LC4;
         *(float*)( this + 0x1a0 ) = _LC4;
         uVar3 = _LC13;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = _LC13;
         *(float*)( this + 0x17c ) = fVar5 / *(float*)( this + 0x14c );
         auVar7._8_8_ = uVar3;
         auVar7._0_8_ = *(undefined8*)( this + 0x144 );
         auVar6 = divps(auVar6, auVar7);
         *(long*)( this + 0x174 ) = auVar6._0_8_;
         _update_transform_dependent(this);
      }

      if (( *(SelfList**)( this + 0x40 ) != (SelfList*)0x0 ) && ( *(long*)( this + 0x268 ) == 0 )) {
         GodotSpace3D::body_add_to_mass_properties_update_list(*(SelfList**)( this + 0x40 ));
      }

      LAB_00101ad1:GodotCollisionObject3D::_set_static(SUB81(this, 0));
      if (this[0x2b9] == (GodotBody3D)0x0) {
         this[0x2b9] = (GodotBody3D)0x1;
         if (*(int*)( this + 0xd4 ) == 0) {
            this[0x2b9] = (GodotBody3D)0x0;
         }
 else if (*(SelfList**)( this + 0x40 ) != (SelfList*)0x0) {
            if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
               GodotSpace3D::body_add_to_active_list(*(SelfList**)( this + 0x40 ));
               return;
            }

            goto LAB_00101d3b;
         }

      }

   }
 else {
      if (param_2 < 3) {
         Transform3D::affine_inverse();
         *(undefined4*)( this + 0x170 ) = 0;
         *(undefined8*)( this + 0x174 ) = 0;
         *(undefined4*)( this + 0x17c ) = 0;
         *(undefined8*)( this + 0x78 ) = local_58;
         *(undefined8*)( this + 0x80 ) = uStack_50;
         *(undefined8*)( this + 0x88 ) = local_48;
         *(undefined8*)( this + 0x90 ) = uStack_40;
         *(undefined8*)( this + 0x98 ) = local_38;
         *(undefined8*)( this + 0xa0 ) = uStack_30;
         GodotCollisionObject3D::_set_static(SUB81(this, 0));
         bVar4 = false;
         if (( param_2 == 1 ) && ( bVar4 = false * (long*)( this + 0x338 ) != 0 )) {
            bVar4 = *(long*)( *(long*)( this + 0x338 ) + -8 ) != 0;
         }

         set_active(this, bVar4);
         *(undefined8*)( this + 0xd8 ) = 0;
         *(undefined4*)( this + 0xe0 ) = 0;
         *(undefined8*)( this + 0xe4 ) = 0;
         *(undefined4*)( this + 0xec ) = 0;
         if (( *(int*)( this + 0xd4 ) == 1 ) && ( iVar1 != 1 )) {
            this[700] = (GodotBody3D)0x1;
         }

         if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_transform_dependent(this);
            return;
         }

         goto LAB_00101d3b;
      }

      if (param_2 == 3) {
         if (*(float*)( this + 0x138 ) <= 0.0) {
            fVar5 = 0.0;
         }
 else {
            fVar5 = _LC4 / *(float*)( this + 0x138 );
         }

         *(undefined8*)( this + 0x174 ) = 0;
         *(undefined4*)( this + 0x17c ) = 0;
         *(undefined8*)( this + 0xe4 ) = 0;
         *(undefined4*)( this + 0xec ) = 0;
         *(float*)( this + 0x170 ) = fVar5;
         _update_transform_dependent(this);
         goto LAB_00101ad1;
      }

   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00101d3b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotBody3D::get_mode() const */undefined4 GodotBody3D::get_mode(GodotBody3D *this) {
   return *(undefined4*)( this + 0xd4 );
}
/* GodotBody3D::get_state(PhysicsServer3D::BodyState) const */Variant *GodotBody3D::get_state(Variant *param_1, long param_2, undefined4 param_3) {
   switch (param_3) {
      case 0:
    Variant::Variant(param_1,(Transform3D *)(param_2 + 0x48));
    return param_1;
      case 1:
    Variant::Variant(param_1,(Vector3 *)(param_2 + 0xd8));
    return param_1;
      case 2:
    Variant::Variant(param_1,(Vector3 *)(param_2 + 0xe4));
    return param_1;
      case 3:
    Variant::Variant(param_1,(bool)(*(byte *)(param_2 + 0x2b9) ^ 1));
    return param_1;
      case 4:
    Variant::Variant(param_1,*(bool *)(param_2 + 699));
    return param_1;
      default:
    *(undefined4 *)param_1 = 0;
    *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
    return param_1;
   }

}
/* GodotBody3D::set_axis_lock(PhysicsServer3D::BodyAxis, bool) */void GodotBody3D::set_axis_lock(GodotBody3D *this, ushort param_2, char param_3) {
   ushort uVar1;
   uVar1 = ~param_2 & *(ushort*)( this + 0x16c );
   if (param_3 != '\0') {
      uVar1 = *(ushort*)( this + 0x16c ) | param_2;
   }

   *(ushort*)( this + 0x16c ) = uVar1;
   return;
}
/* GodotBody3D::is_axis_locked(PhysicsServer3D::BodyAxis) const */undefined2 GodotBody3D::is_axis_locked(GodotBody3D *this, ushort param_2) {
   return CONCAT11((char)( *(ushort*)( this + 0x16c ) >> 8 ), ( *(ushort*)( this + 0x16c ) & param_2 ) != 0);
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBody3D::integrate_velocities(float) */void GodotBody3D::integrate_velocities(GodotBody3D *this, float param_1) {
   long *plVar1;
   ushort uVar2;
   undefined1 auVar3[16];
   char *pcVar4;
   float fVar5;
   float fVar6;
   float fVar7;
   char cVar8;
   long lVar9;
   SelfList *pSVar10;
   long in_FS_OFFSET;
   float fVar11;
   float fVar12;
   float fVar13;
   float fVar15;
   undefined1 auVar14[16];
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
   float fVar27;
   float fVar28;
   float fVar29;
   long local_e0;
   long local_d8;
   long local_d0;
   char *local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   float local_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   undefined1 local_78[8];
   undefined8 uStack_70;
   undefined1 local_68[8];
   undefined8 uStack_60;
   float local_58;
   undefined4 uStack_54;
   undefined8 uStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0xd4 ) != 0) {
      pSVar10 = *(SelfList**)( this + 0x40 );
      if (pSVar10 == (SelfList*)0x0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _err_print_error("integrate_velocities", "modules/godot_physics_3d/godot_body_3d.cpp", 0x2a7, "Parameter \"get_space()\" is null.", 0, 0);
            return;
         }

         goto LAB_0010295d;
      }

      if (*(long*)( this + 0x358 ) == 0) {
         cVar8 = Callable::is_valid();
         if (cVar8 != '\0') {
            pSVar10 = *(SelfList**)( this + 0x40 );
            goto LAB_00101eac;
         }

      }
 else {
         LAB_00101eac:GodotSpace3D::body_add_to_state_query_list(pSVar10);
      }

      uVar2 = *(ushort*)( this + 0x16c );
      lVar9 = 0;
      do {
         if (( 1 << ( (byte)lVar9 & 0x1f ) & (uint)uVar2 ) != 0) {
            *(undefined4*)( this + lVar9 * 4 + 0xd8 ) = 0;
            *(undefined4*)( this + lVar9 * 4 + 0x120 ) = 0;
            *(undefined4*)( this + lVar9 * 4 + 0x2e4 ) = *(undefined4*)( this + lVar9 * 4 + 0x6c );
         }

         lVar9 = lVar9 + 1;
      }
 while ( lVar9 != 3 );
      if (( uVar2 & 8 ) != 0) {
         *(undefined4*)( this + 0xe4 ) = 0;
         *(undefined4*)( this + 300 ) = 0;
      }

      if (( uVar2 & 0x10 ) != 0) {
         *(undefined4*)( this + 0xe8 ) = 0;
         *(undefined4*)( this + 0x130 ) = 0;
      }

      if (( uVar2 & 0x20 ) != 0) {
         *(undefined4*)( this + 0xec ) = 0;
         *(undefined4*)( this + 0x134 ) = 0;
      }

      if (*(int*)( this + 0xd4 ) == 1) {
         if (__LC23 < (double)( *(float*)( this + 0x2e8 ) * *(float*)( this + 0x2e8 ) + *(float*)( this + 0x2e4 ) * *(float*)( this + 0x2e4 ) + *(float*)( this + 0x2ec ) * *(float*)( this + 0x2ec ) )) {
            local_d0 = 0;
            local_c0 = 0x15;
            local_c8 = "\' units from origin).";
            String::parse_latin1((StrRange*)&local_d0);
            itos((long)&local_e0);
            operator+((char *)&
            local_d8,(String*)"Object went too far away (more than \'";
            String::operator +((String*)&local_c8, (String*)&local_d8);
            _err_print_error("_set_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x5b, "Condition \"p_transform.origin.length_squared() > (3.1622776601683791e+18 * 3.1622776601683791e+18)\" is true.", (String*)&local_c8, 0, 0);
            pcVar4 = local_c8;
            if (local_c8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_c8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c8 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }

            }

            lVar9 = local_d8;
            if (local_d8 != 0) {
               LOCK();
               plVar1 = (long*)( local_d8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d8 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            lVar9 = local_e0;
            if (local_e0 != 0) {
               LOCK();
               plVar1 = (long*)( local_e0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e0 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            lVar9 = local_d0;
            if (local_d0 != 0) {
               LOCK();
               plVar1 = (long*)( local_d0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d0 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

         }
 else {
            for (int i = 0; i < 6; i++) {
               *(undefined8*)( this + ( 8 * i + 72 ) ) = *(undefined8*)( this + ( 8 * i + 704 ) );
            }

         }

         Transform3D::affine_inverse();
         *(undefined1(*) [8])( this + 0x78 ) = local_78;
         *(undefined8*)( this + 0x80 ) = uStack_70;
         *(undefined1(*) [8])( this + 0x88 ) = local_68;
         *(undefined8*)( this + 0x90 ) = uStack_60;
         *(ulong*)( this + 0x98 ) = CONCAT44(uStack_54, local_58);
         *(undefined8*)( this + 0xa0 ) = uStack_50;
         if (( ( ( ( ( *(long*)( this + 0x338 ) == 0 ) || ( *(long*)( *(long*)( this + 0x338 ) + -8 ) == 0 ) ) && ( *(float*)( this + 0xd8 ) == 0.0 ) ) && ( ( *(float*)( this + 0xdc ) == 0.0 && ( *(float*)( this + 0xe0 ) == 0.0 ) ) ) ) && ( ( *(float*)( this + 0xe4 ) == 0.0 && ( ( *(float*)( this + 0xe8 ) == 0.0 && ( *(float*)( this + 0xec ) == 0.0 ) ) ) ) ) ) && ( this[0x2b9] != (GodotBody3D)0x0 )) {
            this[0x2b9] = (GodotBody3D)0x0;
            if (*(SelfList**)( this + 0x40 ) != (SelfList*)0x0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  GodotSpace3D::body_remove_from_active_list(*(SelfList**)( this + 0x40 ));
                  return;
               }

               goto LAB_0010295d;
            }

         }

      }
 else {
         fVar16 = *(float*)( this + 0xec ) + *(float*)( this + 0x134 );
         local_98 = *(undefined8*)( this + 0x58 );
         uStack_90 = *(undefined8*)( this + 0x60 );
         auVar14._0_4_ = (float)*(undefined8*)( this + 300 ) + (float)*(undefined8*)( this + 0xe4 );
         auVar14._4_4_ = (float)( ( ulong ) * (undefined8*)( this + 300 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0xe4 ) >> 0x20 );
         auVar14._8_8_ = 0;
         local_a8 = *(undefined8*)( this + 0x48 );
         uStack_a0 = *(undefined8*)( this + 0x50 );
         local_88 = (float)*(undefined8*)( this + 0x68 );
         fStack_84 = (float)( ( ulong ) * (undefined8*)( this + 0x68 ) >> 0x20 );
         fStack_80 = (float)*(undefined8*)( this + 0x70 );
         fStack_7c = (float)( ( ulong ) * (undefined8*)( this + 0x70 ) >> 0x20 );
         fVar11 = SQRT(auVar14._0_4_ * auVar14._0_4_ + auVar14._4_4_ * auVar14._4_4_ + fVar16 * fVar16);
         if (_LC20 <= ABS(fVar11)) {
            local_b0 = fVar16 / fVar11;
            local_58 = 1.0;
            auVar3._4_4_ = fVar11;
            auVar3._0_4_ = fVar11;
            auVar3._8_4_ = (int)_LC13;
            auVar3._12_4_ = (int)( (ulong)_LC13 >> 0x20 );
            auVar14 = divps(auVar14, auVar3);
            local_b8 = auVar14._0_8_;
            _local_78 = ZEXT416((uint)_LC4);
            _local_68 = _local_78;
            Basis::set_axis_angle((Vector3*)local_78, fVar11 * param_1);
            fVar6 = (float)uStack_a0;
            fVar15 = SUB164(_local_78, 0xc);
            fVar17 = SUB164(_local_78, 0);
            fVar22 = _LC4 - fVar17;
            fVar23 = _UNK_00105a44 - fVar15;
            fVar5 = local_a8._4_4_;
            fVar11 = SUB164(_local_68, 4);
            fVar13 = SUB164(_local_78, 8);
            fVar28 = 0.0 - fVar13;
            fVar29 = 0.0 - fVar11;
            fVar19 = _LC4 - local_58;
            fVar16 = (float)local_a8;
            fVar7 = uStack_a0._4_4_;
            fVar20 = (float)_LC29 - (float)local_78._4_4_;
            fVar21 = _LC29._4_4_ - (float)local_68._0_4_;
            fVar12 = 0.0 - uStack_60._4_4_;
            fVar26 = 0.0 - (float)uStack_60;
            fVar27 = local_98._4_4_ * uStack_60._4_4_;
            fVar24 = (float)*(undefined8*)( this + 0x1a4 );
            fVar25 = (float)( ( ulong ) * (undefined8*)( this + 0x1a4 ) >> 0x20 );
            fVar18 = (float)uStack_a0 * (float)uStack_60;
            fStack_7c = ( fVar12 * local_98._4_4_ + fVar26 * (float)uStack_a0 + fVar19 * local_88 ) * *(float*)( this + 0x1ac ) + ( (float)uStack_90 * fVar19 + uStack_a0._4_4_ * fVar12 + (float)local_a8 * fVar26 ) * fVar24 + ( uStack_90._4_4_ * fVar19 + (float)local_98 * fVar12 + local_a8._4_4_ * fVar26 ) * fVar25 + fStack_7c;
            fVar12 = fVar15 * (float)local_a8;
            fStack_84 = ( (float)local_a8 * fVar22 + uStack_a0._4_4_ * fVar20 + (float)uStack_90 * fVar28 ) * fVar24 + fVar25 * ( local_a8._4_4_ * fVar22 + (float)local_98 * fVar20 + uStack_90._4_4_ * fVar28 ) + ( (float)uStack_a0 * fVar22 + local_98._4_4_ * fVar20 + local_88 * fVar28 ) * *(float*)( this + 0x1ac ) + fStack_84;
            fStack_80 = ( (float)local_a8 * fVar23 + uStack_a0._4_4_ * fVar21 + (float)uStack_90 * fVar29 ) * fVar24 + fVar25 * ( local_a8._4_4_ * fVar23 + (float)local_98 * fVar21 + uStack_90._4_4_ * fVar29 ) + ( (float)uStack_a0 * fVar23 + local_98._4_4_ * fVar21 + local_88 * fVar29 ) * *(float*)( this + 0x1ac ) + fStack_80;
            local_a8 = CONCAT44((float)local_78._4_4_ * (float)local_98 + fVar17 * local_a8._4_4_ + uStack_90._4_4_ * fVar13, (float)local_78._4_4_ * uStack_a0._4_4_ + fVar17 * (float)local_a8 + (float)uStack_90 * fVar13);
            uStack_a0 = CONCAT44((float)local_68._0_4_ * uStack_a0._4_4_ + fVar12 + (float)uStack_90 * fVar11, (float)local_78._4_4_ * local_98._4_4_ + fVar17 * (float)uStack_a0 + local_88 * fVar13);
            fVar12 = uStack_60._4_4_ * (float)local_98;
            local_98 = CONCAT44(fVar15 * fVar6 + (float)local_68._0_4_ * local_98._4_4_ + local_88 * fVar11, fVar15 * fVar5 + (float)local_68._0_4_ * (float)local_98 + uStack_90._4_4_ * fVar11);
            uStack_90 = CONCAT44((float)uStack_60 * fVar5 + fVar12 + uStack_90._4_4_ * local_58, (float)uStack_60 * fVar16 + uStack_60._4_4_ * fVar7 + (float)uStack_90 * local_58);
            local_88 = fVar18 + fVar27 + local_88 * local_58;
            Transform3D::orthonormalize();
         }

         fStack_7c = ( *(float*)( this + 0xe0 ) + *(float*)( this + 0x128 ) ) * param_1 + fStack_7c;
         fStack_84 = ( (float)*(undefined8*)( this + 0xd8 ) + (float)*(undefined8*)( this + 0x120 ) ) * param_1 + fStack_84;
         fStack_80 = ( (float)( ( ulong ) * (undefined8*)( this + 0xd8 ) >> 0x20 ) + (float)( ( ulong ) * (undefined8*)( this + 0x120 ) >> 0x20 ) ) * param_1 + fStack_80;
         if (__LC23 < (double)( fStack_84 * fStack_84 + fStack_80 * fStack_80 + fStack_7c * fStack_7c )) {
            local_d0 = 0;
            local_c0 = 0x15;
            local_c8 = "\' units from origin).";
            String::parse_latin1((StrRange*)&local_d0);
            itos((long)&local_e0);
            operator+((char *)&
            local_d8,(String*)"Object went too far away (more than \'";
            String::operator +((String*)&local_c8, (String*)&local_d8);
            _err_print_error("_set_transform", "modules/godot_physics_3d/godot_collision_object_3d.h", 0x5b, "Condition \"p_transform.origin.length_squared() > (3.1622776601683791e+18 * 3.1622776601683791e+18)\" is true.", (String*)&local_c8, 0, 0);
            pcVar4 = local_c8;
            if (local_c8 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_c8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_c8 = (char*)0x0;
                  Memory::free_static(pcVar4 + -0x10, false);
               }

            }

            lVar9 = local_d8;
            if (local_d8 != 0) {
               LOCK();
               plVar1 = (long*)( local_d8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d8 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            lVar9 = local_e0;
            if (local_e0 != 0) {
               LOCK();
               plVar1 = (long*)( local_e0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e0 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

            lVar9 = local_d0;
            if (local_d0 != 0) {
               LOCK();
               plVar1 = (long*)( local_d0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d0 = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               }

            }

         }
 else {
            *(undefined8*)( this + 0x48 ) = local_a8;
            *(undefined8*)( this + 0x50 ) = uStack_a0;
            *(undefined8*)( this + 0x58 ) = local_98;
            *(undefined8*)( this + 0x60 ) = uStack_90;
            *(ulong*)( this + 0x68 ) = CONCAT44(fStack_84, local_88);
            *(ulong*)( this + 0x70 ) = CONCAT44(fStack_7c, fStack_80);
            GodotCollisionObject3D::_update_shapes();
         }

         Transform3D::inverse();
         *(undefined1(*) [8])( this + 0x78 ) = local_78;
         *(undefined8*)( this + 0x80 ) = uStack_70;
         *(undefined1(*) [8])( this + 0x88 ) = local_68;
         *(undefined8*)( this + 0x90 ) = uStack_60;
         *(ulong*)( this + 0x98 ) = CONCAT44(uStack_54, local_58);
         *(undefined8*)( this + 0xa0 ) = uStack_50;
         _update_transform_dependent(this);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010295d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotBody3D::wakeup_neighbours() */void GodotBody3D::wakeup_neighbours(GodotBody3D *this) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   puVar2 = *(undefined8**)( this + 0x308 );
   do {
      if (puVar2 == (undefined8*)0x0) {
         return;
      }

      iVar1 = *(int*)( puVar2[2] + 0x10 );
      lVar3 = *(long*)( puVar2[2] + 8 );
      if (0 < iVar1) {
         lVar5 = 0;
         LAB_001029b1:do {
            if (( ( *(int*)( puVar2 + 3 ) != (int)lVar5 ) && ( lVar4 = *(long*)( lVar3 + lVar5 * 8 ) ),1 < *(int*)( lVar4 + 0xd4 ) )) &&( *(char*)( lVar4 + 0x2b9 ) == '\0' ) * (undefined1*)( lVar4 + 0x2b9 ) = 1;
            if (*(SelfList**)( lVar4 + 0x40 ) != (SelfList*)0x0) {
               lVar5 = lVar5 + 1;
               GodotSpace3D::body_add_to_active_list(*(SelfList**)( lVar4 + 0x40 ));
               if (lVar5 == iVar1) break;
               goto LAB_001029b1;
            }

         }
 while ( lVar5 != iVar1 );
      }

      puVar2 = (undefined8*)*puVar2;
   }
 while ( true );
}
/* GodotBody3D::_shapes_changed() */void GodotBody3D::_shapes_changed(GodotBody3D *this) {
   SelfList *pSVar1;
   pSVar1 = *(SelfList**)( this + 0x40 );
   if (pSVar1 != (SelfList*)0x0) {
      if (*(long*)( this + 0x268 ) == 0) {
         GodotSpace3D::body_add_to_mass_properties_update_list(pSVar1);
         pSVar1 = *(SelfList**)( this + 0x40 );
         if (pSVar1 == (SelfList*)0x0) goto LAB_00102a34;
      }

      if (( 1 < *(uint*)( this + 0xd4 ) ) && ( this[0x2b9] == (GodotBody3D)0x0 )) {
         this[0x2b9] = (GodotBody3D)0x1;
         GodotSpace3D::body_add_to_active_list(pSVar1);
         wakeup_neighbours(this);
         return;
      }

   }

   LAB_00102a34:wakeup_neighbours(this);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBody3D::set_state(PhysicsServer3D::BodyState, Variant const&) */void GodotBody3D::set_state(undefined8 param_1, undefined4 param_2, GodotBody3D *param_3, undefined4 param_4, Variant *param_5) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   GodotBody3D GVar4;
   bool bVar5;
   char cVar6;
   SelfList *pSVar7;
   long in_FS_OFFSET;
   undefined8 uVar8;
   undefined8 local_108;
   undefined8 uStack_100;
   undefined8 local_f8;
   undefined8 uStack_f0;
   undefined8 local_e8;
   undefined8 uStack_e0;
   long local_d0;
   long local_c8;
   long local_c0;
   char *local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 uStack_a0;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined4 local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined4 local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   switch (param_4) {
      case 0:
    if (*(int *)(param_3 + 0xd4) == 1) {
      Variant::operator_cast_to_Transform3D((Variant *)&local_108);
      *(undefined8 *)(param_3 + 0x2c0) = local_108;
      *(undefined8 *)(param_3 + 0x2c8) = uStack_100;
      *(undefined8 *)(param_3 + 0x2d0) = local_f8;
      *(undefined8 *)(param_3 + 0x2d8) = uStack_f0;
      *(undefined8 *)(param_3 + 0x2e0) = local_e8;
      *(undefined8 *)(param_3 + 0x2e8) = uStack_e0;
      if (param_3[0x2b9] == (GodotBody3D)0x0) {
        param_3[0x2b9] = (GodotBody3D)0x1;
        if (*(int *)(param_3 + 0xd4) == 0) {
          param_3[0x2b9] = (GodotBody3D)0x0;
          goto LAB_00102f38;
        }
        if (*(SelfList **)(param_3 + 0x40) != (SelfList *)0x0) {
          GodotSpace3D::body_add_to_active_list(*(SelfList **)(param_3 + 0x40));
          goto LAB_00102f38;
        }
        if (param_3[700] == (GodotBody3D)0x0) break;
      }
      else {
LAB_00102f38:
        if (param_3[700] == (GodotBody3D)0x0) goto LAB_00102ca3;
      }
      Variant::operator_cast_to_Transform3D((Variant *)&local_78);
      if (__LC23 < (double)(fStack_54 * fStack_54 + fStack_50 * fStack_50 + fStack_4c * fStack_4c))
      {
        local_c0 = 0;
        local_b0 = 0x15;
        local_b8 = "\' units from origin).";
        String::parse_latin1((StrRange *)&local_c0);
        itos((long)&local_d0);
        operator+((char *)&local_c8,(String *)"Object went too far away (more than \'");
        String::operator+((String *)&local_b8,(String *)&local_c8);
        _err_print_error("_set_transform","modules/godot_physics_3d/godot_collision_object_3d.h",
                         0x5b,
                         "Condition \"p_transform.origin.length_squared() > (3.1622776601683791e+18 * 3.1622776601683791e+18)\" is true."
                         ,(String *)&local_b8,0,0);
        pcVar3 = local_b8;
        if (local_b8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar2 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar1 = (long *)(local_d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
      }
      else {
        *(undefined8 *)(param_3 + 0x48) = local_78;
        *(undefined8 *)(param_3 + 0x50) = uStack_70;
        *(undefined8 *)(param_3 + 0x58) = local_68;
        *(undefined8 *)(param_3 + 0x60) = uStack_60;
        *(ulong *)(param_3 + 0x68) = CONCAT44(fStack_54,local_58);
        *(ulong *)(param_3 + 0x70) = CONCAT44(fStack_4c,fStack_50);
        GodotCollisionObject3D::_update_shapes();
      }
      Transform3D::affine_inverse();
      param_3[700] = (GodotBody3D)0x0;
      *(undefined8 *)(param_3 + 0x78) = local_78;
      *(undefined8 *)(param_3 + 0x80) = uStack_70;
      *(undefined8 *)(param_3 + 0x88) = local_68;
      *(undefined8 *)(param_3 + 0x90) = uStack_60;
      *(ulong *)(param_3 + 0x98) = CONCAT44(fStack_54,local_58);
      *(ulong *)(param_3 + 0xa0) = CONCAT44(fStack_4c,fStack_50);
    }
    else if (*(int *)(param_3 + 0xd4) == 0) {
      Variant::operator_cast_to_Transform3D((Variant *)&local_78);
      if (__LC23 < (double)(fStack_54 * fStack_54 + fStack_50 * fStack_50 + fStack_4c * fStack_4c))
      {
        local_c0 = 0;
        local_b0 = 0x15;
        local_b8 = "\' units from origin).";
        String::parse_latin1((StrRange *)&local_c0);
        itos((long)&local_d0);
        operator+((char *)&local_c8,(String *)"Object went too far away (more than \'");
        String::operator+((String *)&local_b8,(String *)&local_c8);
        _err_print_error("_set_transform","modules/godot_physics_3d/godot_collision_object_3d.h",
                         0x5b,
                         "Condition \"p_transform.origin.length_squared() > (3.1622776601683791e+18 * 3.1622776601683791e+18)\" is true."
                         ,(String *)&local_b8,0,0);
        pcVar3 = local_b8;
        if (local_b8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar2 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar1 = (long *)(local_d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
      }
      else {
        *(undefined8 *)(param_3 + 0x48) = local_78;
        *(undefined8 *)(param_3 + 0x50) = uStack_70;
        *(undefined8 *)(param_3 + 0x58) = local_68;
        *(undefined8 *)(param_3 + 0x60) = uStack_60;
        *(ulong *)(param_3 + 0x68) = CONCAT44(fStack_54,local_58);
        *(ulong *)(param_3 + 0x70) = CONCAT44(fStack_4c,fStack_50);
        GodotCollisionObject3D::_update_shapes();
      }
      Transform3D::affine_inverse();
      *(undefined8 *)(param_3 + 0x78) = local_78;
      *(undefined8 *)(param_3 + 0x80) = uStack_70;
      *(undefined8 *)(param_3 + 0x88) = local_68;
      *(undefined8 *)(param_3 + 0x90) = uStack_60;
      *(ulong *)(param_3 + 0x98) = CONCAT44(fStack_54,local_58);
      *(ulong *)(param_3 + 0xa0) = CONCAT44(fStack_4c,fStack_50);
      wakeup_neighbours(param_3);
    }
    else {
      Variant::operator_cast_to_Transform3D((Variant *)&local_a8);
      Transform3D::orthonormalize();
      *(undefined8 *)(param_3 + 0x2c0) = *(undefined8 *)(param_3 + 0x48);
      *(undefined8 *)(param_3 + 0x2c8) = *(undefined8 *)(param_3 + 0x50);
      *(undefined8 *)(param_3 + 0x2d0) = *(undefined8 *)(param_3 + 0x58);
      *(undefined8 *)(param_3 + 0x2d8) = *(undefined8 *)(param_3 + 0x60);
      *(undefined8 *)(param_3 + 0x2e0) = *(undefined8 *)(param_3 + 0x68);
      *(undefined8 *)(param_3 + 0x2e8) = *(undefined8 *)(param_3 + 0x70);
      cVar6 = Transform3D::operator==((Transform3D *)(param_3 + 0x2c0),(Transform3D *)&local_a8);
      if (cVar6 != '\0') break;
      if (__LC23 < (double)(fStack_84 * fStack_84 + fStack_80 * fStack_80 + fStack_7c * fStack_7c))
      {
        local_c0 = 0;
        local_b0 = 0x15;
        local_b8 = "\' units from origin).";
        String::parse_latin1((StrRange *)&local_c0);
        itos((long)&local_d0);
        operator+((char *)&local_c8,(String *)"Object went too far away (more than \'");
        String::operator+((String *)&local_b8,(String *)&local_c8);
        _err_print_error("_set_transform","modules/godot_physics_3d/godot_collision_object_3d.h",
                         0x5b,
                         "Condition \"p_transform.origin.length_squared() > (3.1622776601683791e+18 * 3.1622776601683791e+18)\" is true."
                         ,(String *)&local_b8,0,0);
        pcVar3 = local_b8;
        if (local_b8 != (char *)0x0) {
          LOCK();
          plVar1 = (long *)(local_b8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_b8 = (char *)0x0;
            Memory::free_static(pcVar3 + -0x10,false);
          }
        }
        lVar2 = local_c8;
        if (local_c8 != 0) {
          LOCK();
          plVar1 = (long *)(local_c8 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_d0;
        if (local_d0 != 0) {
          LOCK();
          plVar1 = (long *)(local_d0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_d0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
        lVar2 = local_c0;
        if (local_c0 != 0) {
          LOCK();
          plVar1 = (long *)(local_c0 + -0x10);
          *plVar1 = *plVar1 + -1;
          UNLOCK();
          if (*plVar1 == 0) {
            local_c0 = 0;
            Memory::free_static((void *)(lVar2 + -0x10),false);
          }
        }
      }
      else {
        *(undefined8 *)(param_3 + 0x48) = local_a8;
        *(undefined8 *)(param_3 + 0x50) = uStack_a0;
        *(undefined8 *)(param_3 + 0x58) = local_98;
        *(undefined8 *)(param_3 + 0x60) = uStack_90;
        *(ulong *)(param_3 + 0x68) = CONCAT44(fStack_84,local_88);
        *(ulong *)(param_3 + 0x70) = CONCAT44(fStack_7c,fStack_80);
        GodotCollisionObject3D::_update_shapes();
      }
      Transform3D::inverse();
      *(undefined8 *)(param_3 + 0x78) = local_78;
      *(undefined8 *)(param_3 + 0x80) = uStack_70;
      *(undefined8 *)(param_3 + 0x88) = local_68;
      *(undefined8 *)(param_3 + 0x90) = uStack_60;
      *(ulong *)(param_3 + 0x98) = CONCAT44(fStack_54,local_58);
      *(ulong *)(param_3 + 0xa0) = CONCAT44(fStack_4c,fStack_50);
      _update_transform_dependent(param_3);
    }
    goto LAB_00102ca3;
      case 1:
    uVar8 = Variant::operator_cast_to_Vector3(param_5);
    pSVar7 = *(SelfList **)(param_3 + 0x40);
    *(undefined8 *)(param_3 + 0xd8) = uVar8;
    *(undefined4 *)(param_3 + 0xe0) = param_2;
    *(undefined8 *)(param_3 + 0x108) = uVar8;
    *(undefined4 *)(param_3 + 0x110) = param_2;
    if (pSVar7 == (SelfList *)0x0) break;
    goto LAB_00102cb0;
      case 2:
    uVar8 = Variant::operator_cast_to_Vector3(param_5);
    *(undefined8 *)(param_3 + 0xe4) = uVar8;
    *(undefined4 *)(param_3 + 0xec) = param_2;
    *(undefined8 *)(param_3 + 0x114) = uVar8;
    *(undefined4 *)(param_3 + 0x11c) = param_2;
LAB_00102ca3:
    pSVar7 = *(SelfList **)(param_3 + 0x40);
    if (pSVar7 != (SelfList *)0x0) {
LAB_00102cb0:
      if ((1 < *(uint *)(param_3 + 0xd4)) && (param_3[0x2b9] == (GodotBody3D)0x0)) {
        param_3[0x2b9] = (GodotBody3D)0x1;
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
LAB_00102ce8:
          GodotSpace3D::body_add_to_active_list(pSVar7);
          return;
        }
        goto LAB_00102edb;
      }
    }
    break;
      case 3:
    if (1 < *(uint *)(param_3 + 0xd4)) {
      bVar5 = Variant::operator_cast_to_bool(param_5);
      if (bVar5) {
        *(undefined8 *)(param_3 + 0xd8) = 0;
        *(undefined4 *)(param_3 + 0xe0) = 0;
        *(undefined8 *)(param_3 + 0xe4) = 0;
        *(undefined4 *)(param_3 + 0xec) = 0;
        if (param_3[0x2b9] != (GodotBody3D)0x0) {
          param_3[0x2b9] = (GodotBody3D)0x0;
          if (*(SelfList **)(param_3 + 0x40) != (SelfList *)0x0) {
            if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
              GodotSpace3D::body_remove_from_active_list(*(SelfList **)(param_3 + 0x40));
              return;
            }
            goto LAB_00102edb;
          }
        }
      }
      else if (param_3[0x2b9] == (GodotBody3D)0x0) {
        param_3[0x2b9] = (GodotBody3D)0x1;
        if (*(int *)(param_3 + 0xd4) != 0) goto LAB_00102eb7;
        param_3[0x2b9] = (GodotBody3D)0x0;
      }
    }
    break;
      case 4:
    GVar4 = (GodotBody3D)Variant::operator_cast_to_bool(param_5);
    param_3[699] = GVar4;
    if (((1 < *(int *)(param_3 + 0xd4)) && (param_3[0x2b9] == (GodotBody3D)0x0)) && (!(bool)GVar4))
    {
      param_3[0x2b9] = (GodotBody3D)0x1;
LAB_00102eb7:
      pSVar7 = *(SelfList **)(param_3 + 0x40);
      if (pSVar7 != (SelfList *)0x0) {
        if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) goto LAB_00102ce8;
        goto LAB_00102edb;
      }
    }
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102edb:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GodotBody3D::sleep_test(float) */undefined8 GodotBody3D::sleep_test(GodotBody3D *this, float param_1) {
   float fVar1;
   long lVar3;
   float fVar4;
   float fVar2;
   if (*(uint*)( this + 0xd4 ) < 2) {
      return 1;
   }

   if (this[699] != (GodotBody3D)0x0) {
      lVar3 = *(long*)( this + 0x40 );
      if (lVar3 == 0) {
         _err_print_error("sleep_test", "modules/godot_physics_3d/godot_body_3d.cpp", 0x316, "Parameter \"get_space()\" is null.", 0, 0);
         return 1;
      }

      if (( ABS(SQRT(*(float*)( this + 0xe8 ) * *(float*)( this + 0xe8 ) + *(float*)( this + 0xe4 ) * *(float*)( this + 0xe4 ) + *(float*)( this + 0xec ) * *(float*)( this + 0xec ))) < *(float*)( lVar3 + 0x60ec ) ) && ( ABS(*(float*)( this + 0xd8 ) * *(float*)( this + 0xd8 ) + *(float*)( this + 0xdc ) * *(float*)( this + 0xdc ) + *(float*)( this + 0xe0 ) * *(float*)( this + 0xe0 )) < *(float*)( lVar3 + 0x60e8 ) * *(float*)( lVar3 + 0x60e8 ) )) {
         fVar4 = param_1 + *(float*)( this + 0x214 );
         fVar1 = *(float*)( lVar3 + 0x60f0 );
         fVar2 = *(float*)( lVar3 + 0x60f0 );
         *(float*)( this + 0x214 ) = fVar4;
         return CONCAT71(( int7 )((ulong)lVar3 >> 8), fVar2 <= fVar4 && fVar4 != fVar1);
      }

      *(undefined4*)( this + 0x214 ) = 0;
   }

   return 0;
}
/* GodotBody3D::set_state_sync_callback(Callable const&) */void GodotBody3D::set_state_sync_callback(GodotBody3D *this, Callable *param_1) {
   Callable::operator =((Callable*)( this + 0x348 ), param_1);
   return;
}
/* GodotBody3D::set_force_integration_callback(Callable const&, Variant const&) */void GodotBody3D::set_force_integration_callback(GodotBody3D *this, Callable *param_1, Variant *param_2) {
   char cVar1;
   Callable *pCVar2;
   cVar1 = Callable::is_valid();
   if (cVar1 != '\0') {
      pCVar2 = *(Callable**)( this + 0x358 );
      if (pCVar2 == (Callable*)0x0) {
         pCVar2 = (Callable*)operator_new(0x28, "");
         *(undefined8*)pCVar2 = 0;
         *(undefined8*)( pCVar2 + 8 ) = 0;
         *(undefined4*)( pCVar2 + 0x10 ) = 0;
         *(undefined1(*) [16])( pCVar2 + 0x18 ) = (undefined1[16])0x0;
         *(Callable**)( this + 0x358 ) = pCVar2;
      }

      Callable::operator =(pCVar2, param_1);
      Variant::operator =((Variant*)( *(long*)( this + 0x358 ) + 0x10 ), param_2);
      return;
   }

   pCVar2 = *(Callable**)( this + 0x358 );
   if (pCVar2 != (Callable*)0x0) {
      if (Variant::needs_deinit[*(int*)( pCVar2 + 0x10 )] != '\0') {
         Variant::_clear_internal();
      }

      Callable::~Callable(pCVar2);
      Memory::free_static(pCVar2, false);
      *(undefined8*)( this + 0x358 ) = 0;
   }

   return;
}
/* GodotBody3D::call_queries() */void GodotBody3D::call_queries(GodotBody3D *this) {
   Variant **ppVVar1;
   char cVar2;
   Object *this_00;
   long in_FS_OFFSET;
   undefined4 local_f8;
   undefined4 uStack_f4;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   Variant *local_e8[2];
   int local_d8[8];
   int local_b8[8];
   Variant *local_98;
   undefined1 local_90[16];
   int local_78[2];
   undefined1 local_70[16];
   int local_60[8];
   long local_40;
   this_00 = *(Object**)( this + 0x360 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this_00 == (Object*)0x0) {
      this_00 = (Object*)operator_new(0x180, "");
      PhysicsDirectBodyState3D::PhysicsDirectBodyState3D((PhysicsDirectBodyState3D*)this_00);
      *(undefined8*)( (PhysicsDirectBodyState3D*)this_00 + 0x178 ) = 0;
      *(code**)this_00 = GodotCollisionObject3D::GodotCollisionObject3D;
      postinitialize_handler(this_00);
      *(Object**)( this + 0x360 ) = this_00;
      *(GodotBody3D**)( (PhysicsDirectBodyState3D*)this_00 + 0x178 ) = this;
   }

   Variant::Variant((Variant*)local_d8, this_00);
   if (*(long*)( this + 0x358 ) != 0) {
      cVar2 = Callable::is_valid();
      if (cVar2 == '\0') {
         local_70 = (undefined1[16])0x0;
         local_78[0] = 0;
         local_78[1] = 0;
         local_f8 = 0;
         uStack_f4 = 0;
         uStack_f0 = 0;
         uStack_ec = 0;
         set_force_integration_callback(this, (Callable*)&local_f8, (Variant*)local_78);
         Callable::~Callable((Callable*)&local_f8);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         ppVVar1 = *(Variant***)( this + 0x358 );
         local_f8 = 0;
         local_90._0_8_ = ppVVar1 + 2;
         local_70 = (undefined1[16])0x0;
         uStack_f4 = 0;
         uStack_f0 = 0;
         local_78[0] = 0;
         local_78[1] = 0;
         local_98 = (Variant*)local_d8;
         Callable::callp(ppVVar1, (int)&local_98, (Variant*)( ulong )(2 - ( *(int*)( ppVVar1 + 2 ) == 0 )), (CallError*)local_78);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

   }

   cVar2 = Callable::is_valid();
   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_b8, (Variant*)local_d8);
      Variant::Variant((Variant*)local_78, (Variant*)local_b8);
      Variant::Variant((Variant*)local_60, 0);
      local_98 = (Variant*)( (ulong)local_98 & 0xffffffff00000000 );
      local_f8 = 0;
      uStack_f4 = 0;
      uStack_f0 = 0;
      local_90 = (undefined1[16])0x0;
      local_e8[0] = (Variant*)local_78;
      Callable::callp((Variant**)( this + 0x348 ), (int)local_e8, (Variant*)0x1, (CallError*)&local_98);
      if (Variant::needs_deinit[local_60[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_98] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_b8[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (Variant::needs_deinit[local_d8[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotBody3D::get_direct_state() */PhysicsDirectBodyState3D * __thiscall GodotBody3D::get_direct_state(GodotBody3D *this){
   PhysicsDirectBodyState3D *this_00;
   if (*(PhysicsDirectBodyState3D**)( this + 0x360 ) != (PhysicsDirectBodyState3D*)0x0) {
      return *(PhysicsDirectBodyState3D**)( this + 0x360 );
   }

   this_00 = (PhysicsDirectBodyState3D*)operator_new(0x180, "");
   PhysicsDirectBodyState3D::PhysicsDirectBodyState3D(this_00);
   *(undefined8*)( this_00 + 0x178 ) = 0;
   *(code**)this_00 = GodotCollisionObject3D::GodotCollisionObject3D;
   postinitialize_handler((Object*)this_00);
   *(PhysicsDirectBodyState3D**)( this + 0x360 ) = this_00;
   *(GodotBody3D**)( this_00 + 0x178 ) = this;
   return this_00;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotBody3D::GodotBody3D() */void GodotBody3D::GodotBody3D(GodotBody3D *this) {
   uint uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined1 auVar5[16];
   GodotCollisionObject3D::GodotCollisionObject3D((GodotCollisionObject3D*)this, 1);
   uVar1 = _LC4;
   *(undefined1(*) [16])( this + 0x158 ) = (undefined1[16])0x0;
   *(undefined***)this = &PTR__shape_changed_00105938;
   auVar5 = ZEXT416(_LC4);
   *(undefined2*)( this + 0x16c ) = 0;
   *(undefined1(*) [16])( this + 0x180 ) = auVar5;
   *(undefined4*)( this + 0xd4 ) = 2;
   for (int i = 0; i < 8; i++) {
      *(undefined8*)( this + ( 12 * i + 216 ) ) = 0;
      *(undefined4*)( this + ( 12 * i + 224 ) ) = 0;
   }

   *(undefined8*)( this + 0x138 ) = 0x3f800000;
   *(undefined8*)( this + 0x144 ) = 0;
   *(undefined4*)( this + 0x14c ) = 0;
   *(undefined8*)( this + 0x150 ) = 0;
   *(undefined8*)( this + 0x174 ) = 0;
   *(undefined4*)( this + 0x17c ) = 0;
   *(uint*)( this + 0x140 ) = uVar1;
   *(uint*)( this + 0x168 ) = uVar1;
   *(uint*)( this + 0x170 ) = uVar1;
   *(undefined1(*) [16])( this + 400 ) = auVar5;
   uVar4 = _LC29;
   uVar3 = _UNK_00105a58;
   uVar2 = _LC13;
   *(undefined1(*) [16])( this + 0x1b0 ) = auVar5;
   *(undefined8*)( this + 0x1d0 ) = uVar2;
   *(undefined8*)( this + 0x1d8 ) = uVar3;
   uVar3 = _UNK_00105a68;
   uVar2 = _LC29;
   *(undefined1(*) [16])( this + 0x1c0 ) = auVar5;
   *(undefined8*)( this + 0x1a4 ) = 0;
   *(undefined4*)( this + 0x1ac ) = 0;
   *(undefined8*)( this + 0x1f0 ) = uVar4;
   *(undefined8*)( this + 0x1f8 ) = 0;
   *(undefined4*)( this + 0x200 ) = 0;
   *(undefined2*)( this + 0x204 ) = 0x101;
   *(undefined8*)( this + 0x208 ) = 0;
   *(undefined4*)( this + 0x210 ) = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined4*)( this + ( 12 * i + 532 ) ) = 0;
      *(undefined8*)( this + ( 12 * i + 536 ) ) = 0;
   }

   *(undefined8*)( this + 600 ) = 0;
   *(undefined8*)( this + 0x260 ) = 0;
   *(GodotBody3D**)( this + 0x250 ) = this;
   *(undefined8*)( this + 0x268 ) = 0;
   *(undefined8*)( this + 0x278 ) = 0;
   *(undefined8*)( this + 0x280 ) = 0;
   *(uint*)( this + 0x1a0 ) = uVar1;
   *(undefined8*)( this + 0x1e0 ) = uVar2;
   *(undefined8*)( this + 0x1e8 ) = uVar3;
   *(GodotBody3D**)( this + 0x270 ) = this;
   *(undefined8*)( this + 0x288 ) = 0;
   *(undefined8*)( this + 0x298 ) = 0;
   *(undefined8*)( this + 0x2a0 ) = 0;
   *(GodotBody3D**)( this + 0x290 ) = this;
   *(undefined8*)( this + 0x2b0 ) = 0;
   *(undefined4*)( this + 0x2b8 ) = 0x1000100;
   this[700] = (GodotBody3D)0x0;
   *(undefined8*)( this + 0x2e4 ) = 0;
   *(undefined4*)( this + 0x2ec ) = 0;
   *(undefined8*)( this + 0x318 ) = 2;
   *(undefined8*)( this + 0x328 ) = 0;
   *(undefined8*)( this + 0x338 ) = 0;
   *(undefined4*)( this + 0x340 ) = 0;
   *(undefined8*)( this + 0x348 ) = 0;
   *(undefined8*)( this + 0x350 ) = 0;
   *(undefined8*)( this + 0x368 ) = 0;
   *(undefined1(*) [16])( this + 0x2c0 ) = auVar5;
   *(undefined1(*) [16])( this + 0x2d0 ) = auVar5;
   *(uint*)( this + 0x2e0 ) = uVar1;
   *(undefined1(*) [16])( this + 0x2f8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x308 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x358 ) = (undefined1[16])0x0;
   GodotCollisionObject3D::_set_static(SUB81(this, 0));
   return;
}
/* GodotBody3D::integrate_forces(float) */void GodotBody3D::integrate_forces(GodotBody3D *this, float param_1) {
   float fVar1;
   float fVar2;
   code *pcVar3;
   bool bVar4;
   bool bVar5;
   GodotBody3D GVar6;
   int iVar7;
   char *pcVar8;
   long lVar9;
   undefined8 uVar10;
   long lVar11;
   int iVar12;
   Vector3 *pVVar13;
   long *plVar14;
   long in_FS_OFFSET;
   bool bVar15;
   bool bVar16;
   bool bVar17;
   float fVar18;
   float fVar19;
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   float fVar23;
   float fVar24;
   float fVar25;
   float fVar26;
   undefined1 auVar27[16];
   float fVar28;
   float fVar29;
   float fVar30;
   float local_10c;
   float local_f8;
   float fStack_f4;
   float fStack_f0;
   float fStack_ec;
   float local_e8;
   float fStack_e4;
   float fStack_e0;
   float fStack_dc;
   float local_d8;
   float local_c8;
   float fStack_c4;
   float fStack_c0;
   float fStack_bc;
   float local_b8;
   float fStack_b4;
   float fStack_b0;
   float fStack_ac;
   float local_a8;
   undefined8 local_68;
   float fStack_60;
   float fStack_5c;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   float local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0xd4 ) != 0) {
      lVar9 = *(long*)( this + 0x40 );
      if (lVar9 == 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar10 = 0x1e2;
            pcVar8 = "Parameter \"get_space()\" is null.";
            goto LAB_00104999;
         }

         goto LAB_00104af1;
      }

      if (*(long*)( this + 0x328 ) == 0) {
         *(undefined8*)( this + 0x208 ) = 0;
         *(undefined4*)( this + 0x210 ) = 0;
         *(undefined8*)( this + 0x160 ) = 0;
         LAB_001049e0:pVVar13 = *(Vector3**)( lVar9 + 200 );
         if (pVVar13 == (Vector3*)0x0) {
            LAB_00104a70:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar10 = 0x23a;
               pcVar8 = "Parameter \"default_area\" is null.";
               LAB_00104999:_err_print_error("integrate_forces", "modules/godot_physics_3d/godot_body_3d.cpp", uVar10, pcVar8, 0, 0);
               return;
            }

            goto LAB_00104af1;
         }

         bVar17 = false;
         bVar16 = false;
         LAB_00103e26:local_68 = 0;
         fStack_60 = 0.0;
         GodotArea3D::compute_gravity(pVVar13, (Vector3*)( this + 0x6c ));
         fVar23 = *(float*)( this + 0x210 ) + fStack_60;
         uVar10 = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x208 ) >> 0x20 ) + (float)( local_68 >> 0x20 ), (float)*(undefined8*)( this + 0x208 ) + (float)local_68);
         LAB_00103e71:if (!bVar16) {
            *(float*)( this + 0x160 ) = *(float*)( this + 0x160 ) + *(float*)( pVVar13 + 0xf8 );
         }

         if (!bVar17) {
            *(float*)( this + 0x164 ) = *(float*)( this + 0x164 ) + *(float*)( pVVar13 + 0xfc );
         }

         iVar7 = *(int*)( this + 0x150 );
         if (iVar7 != 0) goto LAB_00103ea7;
         LAB_001042a3:iVar7 = *(int*)( this + 0x154 );
         *(float*)( this + 0x160 ) = *(float*)( this + 0x160 ) + *(float*)( this + 0x158 );
         if (iVar7 == 0) goto LAB_001042c9;
         LAB_00103ebe:if (iVar7 == 1) {
            *(undefined4*)( this + 0x164 ) = *(undefined4*)( this + 0x15c );
         }

      }
 else {
         uVar10 = *(undefined8*)( *(long*)( this + 0x328 ) + -8 );
         *(undefined8*)( this + 0x208 ) = 0;
         *(undefined4*)( this + 0x210 ) = 0;
         *(undefined8*)( this + 0x160 ) = 0;
         iVar7 = (int)uVar10;
         if (iVar7 == 0) {
            pVVar13 = *(Vector3**)( lVar9 + 200 );
            bVar17 = false;
            bVar16 = false;
            if (pVVar13 == (Vector3*)0x0) goto LAB_00104a70;
            goto LAB_00103e26;
         }

         Vector<AreaCMP>::sort_custom<_DefaultComparator<AreaCMP>,true>((Vector<AreaCMP>*)( this + 800 ));
         lVar9 = *(long*)( this + 0x328 );
         if (lVar9 == 0) {
            lVar11 = 0;
            LAB_00104aa3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar11, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar11 = *(long*)( lVar9 + -8 );
         if (lVar11 < 1) goto LAB_00104aa3;
         iVar12 = iVar7 + -1;
         if (iVar12 < 0) {
            lVar9 = *(long*)( this + 0x40 );
            goto LAB_001049e0;
         }

         bVar15 = false;
         bVar17 = false;
         bVar16 = false;
         plVar14 = (long*)( lVar9 + -0x10 + (long)iVar7 * 0x10 );
         do {
            if (bVar15) {
               if (bVar16) {
                  bVar5 = bVar16;
                  bVar15 = bVar16;
                  if (bVar17) goto LAB_00104285;
                  LAB_0010455e:lVar9 = *plVar14;
                  LAB_00104569:GodotArea3D::get_param((Variant*)&local_68, lVar9, 7);
                  iVar7 = Variant::operator_cast_to_int((Variant*)&local_68);
                  if (Variant::needs_deinit[(int)(float)local_68] != '\0') {
                     Variant::_clear_internal();
                  }

                  bVar17 = false;
                  if (iVar7 != 0) {
                     if (iVar7 < 3) {
                        if (0 < iVar7) {
                           bVar17 = iVar7 == 2;
                           *(float*)( this + 0x164 ) = *(float*)( *plVar14 + 0xfc ) + *(float*)( this + 0x164 );
                        }

                     }
 else if (iVar7 - 3U < 2) {
                        bVar17 = iVar7 == 3;
                        *(float*)( this + 0x164 ) = *(float*)( *plVar14 + 0xfc );
                     }

                  }

                  if (!bVar5) goto LAB_001044ec;
                  bVar4 = (bool)( bVar17 ^ 1 );
                  bVar16 = bVar5;
                  bVar5 = bVar17;
               }
 else {
                  LAB_001043f0:GodotArea3D::get_param((Variant*)&local_68, *plVar14, 5);
                  iVar7 = Variant::operator_cast_to_int((Variant*)&local_68);
                  if (Variant::needs_deinit[(int)(float)local_68] != '\0') {
                     Variant::_clear_internal();
                  }

                  bVar16 = bVar17;
                  if (iVar7 != 0) {
                     lVar9 = *plVar14;
                     if (iVar7 < 3) {
                        if (iVar7 < 1) {
                           LAB_001048e8:bVar5 = false;
                           if (bVar17) goto LAB_00104432;
                           goto LAB_00104569;
                        }

                        bVar16 = iVar7 == 2;
                        *(float*)( this + 0x160 ) = *(float*)( lVar9 + 0xf8 ) + *(float*)( this + 0x160 );
                        bVar5 = (bool)( bVar15 & bVar16 );
                     }
 else {
                        if (1 < iVar7 - 3U) goto LAB_001048e8;
                        bVar16 = iVar7 == 3;
                        *(float*)( this + 0x160 ) = *(float*)( lVar9 + 0xf8 );
                        bVar5 = (bool)( bVar15 & bVar16 );
                     }

                     LAB_0010453b:if (!bVar17) goto LAB_0010455e;
                     if (!bVar5) goto LAB_001044ec;
                     goto LAB_00104285;
                  }

                  if (!bVar17) {
                     lVar9 = *plVar14;
                     bVar5 = false;
                     goto LAB_00104569;
                  }

                  LAB_00104432:bVar16 = false;
                  bVar5 = false;
                  bVar4 = bVar17;
               }

            }
 else {
               GodotArea3D::get_param((Variant*)&local_68, *plVar14, 0);
               iVar7 = Variant::operator_cast_to_int((Variant*)&local_68);
               if (Variant::needs_deinit[(int)(float)local_68] != '\0') {
                  Variant::_clear_internal();
               }

               if (iVar7 != 0) {
                  local_68 = 0;
                  fStack_60 = 0.0;
                  GodotArea3D::compute_gravity((Vector3*)*plVar14, (Vector3*)( this + 0x6c ));
                  if (2 < iVar7) {
                     if (iVar7 - 3U < 2) {
                        bVar15 = iVar7 == 3;
                        *(ulong*)( this + 0x208 ) = local_68;
                        *(float*)( this + 0x210 ) = fStack_60;
                        goto LAB_001043d9;
                     }

                     goto LAB_001044ce;
                  }

                  if (iVar7 < 1) goto LAB_001044ce;
                  bVar15 = iVar7 == 2;
                  *(ulong*)( this + 0x208 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x208 ) >> 0x20 ) + (float)( local_68 >> 0x20 ), (float)*(undefined8*)( this + 0x208 ) + (float)local_68);
                  *(float*)( this + 0x210 ) = *(float*)( this + 0x210 ) + fStack_60;
                  LAB_001043d9:bVar5 = bVar15;
                  if (!bVar16) goto LAB_001043f0;
                  goto LAB_0010453b;
               }

               LAB_001044ce:if (!bVar16) goto LAB_001043f0;
               if (!bVar17) {
                  bVar16 = true;
                  bVar5 = false;
                  bVar15 = false;
                  goto LAB_0010455e;
               }

               bVar16 = true;
               bVar17 = true;
               LAB_001044ec:bVar5 = false;
               bVar4 = true;
            }

            plVar14 = plVar14 + -2;
            iVar12 = iVar12 + -1;
         }
 while ( ( -1 < iVar12 ) && ( bVar4 ) );
         if (!bVar5) {
            pVVar13 = *(Vector3**)( *(long*)( this + 0x40 ) + 200 );
            if (pVVar13 == (Vector3*)0x0) goto LAB_00104a70;
            if (!bVar15) goto LAB_00103e26;
            uVar10 = *(undefined8*)( this + 0x208 );
            fVar23 = *(float*)( this + 0x210 );
            goto LAB_00103e71;
         }

         LAB_00104285:iVar7 = *(int*)( this + 0x150 );
         fVar23 = *(float*)( this + 0x210 );
         uVar10 = *(undefined8*)( this + 0x208 );
         if (iVar7 == 0) goto LAB_001042a3;
         LAB_00103ea7:if (iVar7 == 1) {
            *(undefined4*)( this + 0x160 ) = *(undefined4*)( this + 0x158 );
         }

         iVar7 = *(int*)( this + 0x154 );
         if (iVar7 != 0) goto LAB_00103ebe;
         LAB_001042c9:*(float*)( this + 0x164 ) = *(float*)( this + 0x164 ) + *(float*)( this + 0x15c );
      }

      fVar25 = *(float*)( this + 0x168 );
      *(undefined8*)( this + 0xf0 ) = *(undefined8*)( this + 0xd8 );
      fVar18 = fVar25 * (float)uVar10;
      fVar19 = fVar25 * (float)( (ulong)uVar10 >> 0x20 );
      *(undefined4*)( this + 0xf8 ) = *(undefined4*)( this + 0xe0 );
      *(undefined8*)( this + 0xfc ) = *(undefined8*)( this + 0xe4 );
      *(float*)( this + 0x210 ) = fVar25 * fVar23;
      *(undefined4*)( this + 0x104 ) = *(undefined4*)( this + 0xec );
      *(ulong*)( this + 0x208 ) = CONCAT44(fVar19, fVar18);
      if (*(int*)( this + 0xd4 ) == 1) {
         auVar20._0_4_ = (float)*(undefined8*)( this + 0x2e4 ) - (float)*(undefined8*)( this + 0x6c );
         auVar20._4_4_ = (float)( ( ulong ) * (undefined8*)( this + 0x2e4 ) >> 0x20 ) - (float)( ( ulong ) * (undefined8*)( this + 0x6c ) >> 0x20 );
         auVar20._8_8_ = 0;
         auVar21._4_4_ = param_1;
         auVar21._0_4_ = param_1;
         auVar21._8_4_ = (undefined4)_LC13;
         auVar21._12_4_ = _LC13._4_4_;
         auVar21 = divps(auVar20, auVar21);
         *(float*)( this + 0xe0 ) = ( *(float*)( this + 0x2ec ) - *(float*)( this + 0x74 ) ) / param_1 + *(float*)( this + 0x110 );
         *(ulong*)( this + 0xd8 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x108 ) >> 0x20 ) + auVar21._4_4_, (float)*(undefined8*)( this + 0x108 ) + auVar21._0_4_);
         Basis::orthonormalized();
         Basis::transposed();
         Basis::orthonormalized();
         fVar18 = fStack_60;
         fVar19 = fStack_60 * fStack_b0;
         fVar23 = (float)local_68;
         fVar25 = local_68._4_4_;
         local_68 = 0;
         fStack_60 = 0.0;
         local_d8 = local_48 * local_a8 + fVar19 + fStack_54 * fStack_ac;
         local_f8 = fStack_5c * fStack_c4 + fVar23 * local_c8 + fStack_50 * fStack_c0;
         fStack_f4 = local_58 * fStack_c4 + fVar25 * local_c8 + fStack_4c * fStack_c0;
         fStack_f0 = fStack_54 * fStack_c4 + fVar18 * local_c8 + local_48 * fStack_c0;
         fStack_ec = fStack_5c * local_b8 + fVar23 * fStack_bc + fStack_50 * fStack_b4;
         local_e8 = fStack_4c * fStack_b4 + fVar25 * fStack_bc + local_58 * local_b8;
         fStack_e4 = local_48 * fStack_b4 + fVar18 * fStack_bc + fStack_54 * local_b8;
         fStack_e0 = fStack_50 * local_a8 + fVar23 * fStack_b0 + fStack_5c * fStack_ac;
         fStack_dc = fStack_4c * local_a8 + fVar25 * fStack_b0 + local_58 * fStack_ac;
         Basis::get_axis_angle((Vector3*)&local_f8, (float*)&local_68);
         auVar27._8_8_ = 0;
         auVar27._0_8_ = local_68;
         auVar22._12_4_ = _LC13._4_4_;
         auVar22._8_4_ = (undefined4)_LC13;
         fVar23 = (float)( local_68 >> 0x20 );
         fVar23 = (float)local_68 * (float)local_68 + fVar23 * fVar23 + fStack_60 * fStack_60;
         fVar25 = 0.0;
         fVar18 = 0.0;
         fVar19 = 0.0;
         if (fVar23 != 0.0) {
            fVar23 = SQRT(fVar23);
            fVar25 = fStack_60 / fVar23;
            auVar22._4_4_ = fVar23;
            auVar22._0_4_ = fVar23;
            auVar21 = divps(auVar27, auVar22);
            fVar18 = auVar21._0_4_;
            fVar19 = auVar21._4_4_;
         }

         fVar23 = local_10c / param_1;
         *(float*)( this + 0xec ) = fVar25 * fVar23 + *(float*)( this + 0x11c );
         *(ulong*)( this + 0xe4 ) = CONCAT44((float)( ( ulong ) * (undefined8*)( this + 0x114 ) >> 0x20 ) + fVar23 * fVar19, (float)*(undefined8*)( this + 0x114 ) + fVar23 * fVar18);
         LAB_00104175:GVar6 = (GodotBody3D)0x1;
      }
 else {
         if (this[0x2b8] == (GodotBody3D)0x0) {
            fVar1 = *(float*)( this + 0x138 );
            fVar29 = *(float*)( this + 0x22c ) + *(float*)( this + 0x244 );
            fVar30 = *(float*)( this + 0x228 ) + *(float*)( this + 0x240 );
            fVar24 = *(float*)( this + 0x224 ) + *(float*)( this + 0x23c );
            fVar28 = _LC4 - param_1 * *(float*)( this + 0x160 );
            if (fVar28 < 0.0) {
               fVar28 = 0.0;
            }

            fVar26 = _LC4 - param_1 * *(float*)( this + 0x164 );
            if (fVar26 < 0.0) {
               fVar26 = 0.0;
            }

            fVar2 = *(float*)( this + 0x170 );
            *(float*)( this + 0xd8 ) = ( fVar18 * fVar1 + *(float*)( this + 0x218 ) + *(float*)( this + 0x230 ) ) * fVar2 * param_1 + *(float*)( this + 0xd8 ) * fVar28;
            *(float*)( this + 0xdc ) = ( fVar19 * fVar1 + *(float*)( this + 0x21c ) + *(float*)( this + 0x234 ) ) * fVar2 * param_1 + *(float*)( this + 0xdc ) * fVar28;
            *(float*)( this + 0xe0 ) = ( fVar25 * fVar23 * fVar1 + *(float*)( this + 0x220 ) + *(float*)( this + 0x238 ) ) * fVar2 * param_1 + fVar28 * *(float*)( this + 0xe0 );
            *(float*)( this + 0xe4 ) = ( fVar24 * *(float*)( this + 0x1b0 ) + fVar30 * *(float*)( this + 0x1b4 ) + fVar29 * *(float*)( this + 0x1b8 ) ) * param_1 + fVar26 * *(float*)( this + 0xe4 );
            *(ulong*)( this + 0xe8 ) = CONCAT44(( (float)( ( ulong ) * (undefined8*)( this + 0x1c8 ) >> 0x20 ) * fVar30 + *(float*)( this + 0x1c8 ) * fVar24 + *(float*)( this + 0x1d0 ) * fVar29 ) * param_1 + (float)( ( ulong ) * (undefined8*)( this + 0xe8 ) >> 0x20 ) * fVar26, ( (float)*(undefined8*)( this + 0x1c0 ) * fVar30 + *(float*)( this + 0x1bc ) * fVar24 + *(float*)( this + 0x1c4 ) * fVar29 ) * param_1 + (float)*(undefined8*)( this + 0xe8 ) * fVar26);
         }

         GVar6 = this[0x2ba];
         if (GVar6 != (GodotBody3D)0x0) goto LAB_00104175;
      }

      *(undefined8*)( this + 0x218 ) = 0;
      *(undefined4*)( this + 0x220 ) = 0;
      *(undefined8*)( this + 0x224 ) = 0;
      *(undefined4*)( this + 0x22c ) = 0;
      *(undefined8*)( this + 300 ) = 0;
      *(undefined4*)( this + 0x134 ) = 0;
      *(undefined8*)( this + 0x120 ) = 0;
      *(undefined4*)( this + 0x128 ) = 0;
      if (GVar6 != (GodotBody3D)0x0) {
         GodotCollisionObject3D::_update_shapes_with_motion((Vector3*)this);
      }

      *(undefined4*)( this + 0x340 ) = 0;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00104af1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SortArray<AreaCMP, _DefaultComparator<AreaCMP>, true>::introsort(long, long, AreaCMP*, long)
   const [clone .isra.0] */void SortArray<AreaCMP,_DefaultComparator<AreaCMP>,true>::introsort(long param_1, long param_2, AreaCMP *param_3, long param_4) {
   int iVar1;
   bool bVar2;
   long lVar3;
   long lVar4;
   AreaCMP *pAVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   AreaCMP *pAVar9;
   undefined4 uVar10;
   long lVar11;
   long lVar12;
   int iVar13;
   long lVar14;
   AreaCMP *pAVar15;
   long lVar16;
   AreaCMP *pAVar17;
   long lVar18;
   long local_b0;
   undefined4 uStack_70;
   lVar14 = param_2 - param_1;
   if (lVar14 < 0x11) {
      return;
   }

   if (param_4 != 0) {
      lVar18 = param_2;
      local_b0 = param_4;
      LAB_00104bc3:local_b0 = local_b0 + -1;
      lVar16 = *(long*)( param_3 + lVar18 * 0x10 + -0x10 );
      iVar6 = *(int*)( *(long*)( param_3 + param_1 * 0x10 ) + 0x120 );
      iVar13 = *(int*)( lVar16 + 0x120 );
      iVar1 = *(int*)( *(long*)( param_3 + ( ( lVar14 >> 1 ) + param_1 ) * 0x10 ) + 0x120 );
      if (iVar6 < iVar1) {
         if (iVar1 < iVar13) {
            LAB_00104dad:lVar16 = *(long*)( param_3 + ( ( lVar14 >> 1 ) + param_1 ) * 0x10 );
            iVar13 = iVar1;
            goto LAB_00104c18;
         }

         if (iVar6 < iVar13) goto LAB_00104c18;
      }
 else if (iVar13 <= iVar6) {
         if (iVar1 < iVar13) goto LAB_00104c18;
         goto LAB_00104dad;
      }

      lVar16 = *(long*)( param_3 + param_1 * 0x10 );
      iVar13 = iVar6;
      LAB_00104c18:lVar14 = lVar18;
      param_2 = param_1;
      do {
         if (iVar6 < iVar13) {
            if (lVar18 + -1 == param_2) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               iVar13 = *(int*)( lVar16 + 0x120 );
               goto LAB_00104c68;
            }

         }
 else {
            LAB_00104c68:lVar14 = lVar14 + -1;
            pAVar17 = param_3 + lVar14 * 0x10;
            if (iVar13 < *(int*)( *(long*)pAVar17 + 0x120 )) {
               pAVar5 = param_3 + lVar14 * 0x10 + -0x10;
               while (param_1 != lVar14) {
                  lVar14 = lVar14 + -1;
                  pAVar17 = pAVar5;
                  if (*(int*)( *(long*)pAVar5 + 0x120 ) <= iVar13) goto LAB_00104cd0;
                  pAVar5 = pAVar5 + -0x10;
               }
;
               ;;
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
            }

            LAB_00104cd0:if (lVar14 <= param_2) goto LAB_00104d20;
            lVar7 = param_2 * 0x10;
            lVar8 = *(long*)( param_3 + lVar7 );
            lVar3 = *(long*)( param_3 + lVar7 + 8 );
            *(long*)( param_3 + lVar7 ) = *(long*)pAVar17;
            *(undefined4*)( param_3 + lVar7 + 8 ) = *(undefined4*)( pAVar17 + 8 );
            iVar13 = *(int*)( lVar16 + 0x120 );
            *(long*)pAVar17 = lVar8;
            uStack_70 = (undefined4)lVar3;
            *(undefined4*)( pAVar17 + 8 ) = uStack_70;
         }

         iVar6 = *(int*)( *(long*)( param_3 + param_2 * 0x10 + 0x10 ) + 0x120 );
         param_2 = param_2 + 1;
      }
 while ( true );
   }

   LAB_00104f2b:lVar16 = lVar14 + -2 >> 1;
   lVar18 = lVar16 * 2 + 2;
   pAVar17 = param_3 + ( param_1 + lVar16 ) * 0x10;
   do {
      lVar8 = *(long*)pAVar17;
      lVar3 = *(long*)( pAVar17 + 8 );
      lVar12 = lVar16;
      lVar7 = lVar18;
      if (lVar18 < lVar14) {
         do {
            lVar4 = lVar7 + -1;
            pAVar5 = param_3 + ( param_1 + lVar7 + -1 ) * 0x10;
            lVar11 = lVar7;
            if (*(int*)( *(long*)( param_3 + ( param_1 + lVar7 + -1 ) * 0x10 ) + 0x120 ) <= *(int*)( *(long*)( param_3 + ( param_1 + lVar7 ) * 0x10 ) + 0x120 )) {
               lVar11 = lVar7 + 1;
               lVar4 = lVar7;
               pAVar5 = param_3 + ( param_1 + lVar7 ) * 0x10;
            }

            lVar7 = lVar11 * 2;
            *(long*)( param_3 + ( lVar12 + param_1 ) * 0x10 ) = *(long*)pAVar5;
            *(undefined4*)( param_3 + ( lVar12 + param_1 ) * 0x10 + 8 ) = *(undefined4*)( pAVar5 + 8 );
            lVar12 = lVar4;
         }
 while ( lVar14 != lVar7 && SBORROW8(lVar14, lVar7) == lVar14 + lVar11 * -2 < 0 );
         pAVar9 = pAVar5;
         if (lVar14 == lVar7) {
            LAB_00105070:lVar4 = lVar7 + -1;
            pAVar5 = param_3 + ( param_1 + lVar4 ) * 0x10;
            *(long*)pAVar9 = *(long*)pAVar5;
            *(undefined4*)( pAVar9 + 8 ) = *(undefined4*)( pAVar5 + 8 );
         }

         lVar7 = lVar4 + -1;
         if (lVar4 <= lVar16) goto LAB_001050cc;
         iVar6 = *(int*)( lVar8 + 0x120 );
         do {
            lVar12 = lVar7 >> 1;
            pAVar9 = param_3 + ( param_1 + lVar12 ) * 0x10;
            pAVar5 = param_3 + ( lVar4 + param_1 ) * 0x10;
            if (iVar6 <= *(int*)( *(long*)pAVar9 + 0x120 )) break;
            *(long*)pAVar5 = *(long*)pAVar9;
            *(undefined4*)( pAVar5 + 8 ) = *(undefined4*)( pAVar9 + 8 );
            lVar7 = ( lVar12 + -1 ) - ( lVar12 + -1 >> 0x3f );
            pAVar5 = pAVar9;
            lVar4 = lVar12;
         }
 while ( lVar16 < lVar12 );
         *(long*)pAVar5 = lVar8;
         *(int*)( pAVar5 + 8 ) = (int)lVar3;
         if (lVar16 == 0) goto LAB_00104db7;
      }
 else {
         pAVar9 = pAVar17;
         pAVar5 = pAVar17;
         if (lVar18 == lVar14) goto LAB_00105070;
         LAB_001050cc:*(long*)pAVar5 = lVar8;
         *(int*)( pAVar5 + 8 ) = (int)lVar3;
      }

      lVar16 = lVar16 + -1;
      pAVar17 = pAVar17 + -0x10;
      lVar18 = lVar18 + -2;
   }
 while ( true );
   LAB_00104d20:introsort(param_2, lVar18, param_3, local_b0);
   lVar14 = param_2 - param_1;
   if (lVar14 < 0x11) {
      return;
   }

   lVar18 = param_2;
   if (local_b0 == 0) goto LAB_00104f2b;
   goto LAB_00104bc3;
   LAB_00104db7:pAVar5 = param_3 + param_1 * 0x10;
   pAVar17 = param_3 + ( param_2 + -2 ) * 0x10;
   lVar14 = ( param_2 + -1 ) - param_1;
   LAB_00104de0:do {
      lVar18 = *(long*)( pAVar17 + 0x10 );
      lVar16 = *(long*)( pAVar17 + 0x18 );
      *(long*)( pAVar17 + 0x10 ) = *(long*)pAVar5;
      *(undefined4*)( pAVar17 + 0x18 ) = *(undefined4*)( pAVar5 + 8 );
      uVar10 = (undefined4)lVar16;
      if (lVar14 < 3) {
         pAVar9 = pAVar5;
         if (lVar14 != 2) {
            *(long*)pAVar5 = lVar18;
            *(undefined4*)( pAVar5 + 8 ) = uVar10;
            return;
         }

         LAB_001050a0:lVar3 = lVar14 + -1;
         *(long*)pAVar9 = *(long*)pAVar17;
         *(undefined4*)( pAVar9 + 8 ) = *(undefined4*)( pAVar17 + 8 );
         lVar16 = lVar14 + -2;
      }
 else {
         lVar16 = 2;
         lVar8 = 0;
         do {
            lVar3 = lVar16 + -1;
            pAVar9 = param_3 + ( param_1 + lVar16 + -1 ) * 0x10;
            lVar7 = lVar16;
            if (*(int*)( *(long*)( param_3 + ( param_1 + lVar16 + -1 ) * 0x10 ) + 0x120 ) <= *(int*)( *(long*)( param_3 + ( param_1 + lVar16 ) * 0x10 ) + 0x120 )) {
               lVar7 = lVar16 + 1;
               lVar3 = lVar16;
               pAVar9 = param_3 + ( param_1 + lVar16 ) * 0x10;
            }

            lVar16 = lVar7 * 2;
            *(long*)( param_3 + ( lVar8 + param_1 ) * 0x10 ) = *(long*)pAVar9;
            *(undefined4*)( param_3 + ( lVar8 + param_1 ) * 0x10 + 8 ) = *(undefined4*)( pAVar9 + 8 );
            lVar8 = lVar3;
         }
 while ( lVar14 != lVar16 && SBORROW8(lVar14, lVar16) == lVar14 + lVar7 * -2 < 0 );
         if (lVar14 == lVar16) goto LAB_001050a0;
         lVar16 = ( lVar3 + -1 ) - ( lVar3 + -1 >> 0x3f );
         if (lVar3 == 0) {
            lVar14 = lVar14 + -1;
            pAVar17 = pAVar17 + -0x10;
            *(long*)pAVar9 = lVar18;
            *(undefined4*)( pAVar9 + 8 ) = uVar10;
            goto LAB_00104de0;
         }

      }

      iVar6 = *(int*)( lVar18 + 0x120 );
      do {
         lVar8 = lVar16 >> 1;
         pAVar15 = param_3 + ( param_1 + lVar8 ) * 0x10;
         pAVar9 = param_3 + ( lVar3 + param_1 ) * 0x10;
         if (iVar6 <= *(int*)( *(long*)pAVar15 + 0x120 )) break;
         *(long*)pAVar9 = *(long*)pAVar15;
         *(undefined4*)( pAVar9 + 8 ) = *(undefined4*)( pAVar15 + 8 );
         lVar16 = ( lVar8 + -1 ) - ( lVar8 + -1 >> 0x3f );
         pAVar9 = pAVar15;
         lVar3 = lVar8;
      }
 while ( lVar8 != 0 );
      pAVar17 = pAVar17 + -0x10;
      *(long*)pAVar9 = lVar18;
      *(undefined4*)( pAVar9 + 8 ) = uVar10;
      bVar2 = lVar14 < 2;
      lVar14 = lVar14 + -1;
      if (bVar2) {
         return;
      }

   }
 while ( true );
}
/* void Vector<AreaCMP>::sort_custom<_DefaultComparator<AreaCMP>, true>() */void Vector<AreaCMP>::sort_custom<_DefaultComparator<AreaCMP>,true>(Vector<AreaCMP> *this) {
   AreaCMP *pAVar1;
   long *plVar2;
   int iVar3;
   long lVar4;
   code *pcVar5;
   undefined8 *puVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   AreaCMP *pAVar11;
   long lVar12;
   long lVar13;
   AreaCMP *__dest;
   ulong uVar14;
   AreaCMP *pAVar15;
   AreaCMP *pAVar16;
   long lVar17;
   size_t __n;
   undefined4 uStack_70;
   undefined4 uStack_60;
   undefined4 uStack_40;
   lVar17 = *(long*)( this + 8 );
   if (lVar17 == 0) {
      return;
   }

   lVar4 = *(long*)( lVar17 + -8 );
   if (lVar4 == 0) {
      return;
   }

   if (1 < *(ulong*)( lVar17 + -0x10 )) {
      if (*(long*)( this + 8 ) == 0) {
         /* WARNING: Does not return */
         pcVar5 = (code*)invalidInstructionException();
         ( *pcVar5 )();
      }

      lVar17 = *(long*)( *(long*)( this + 8 ) + -8 );
      uVar14 = 0x10;
      __n = lVar17 * 0x10;
      if (__n != 0) {
         uVar14 = __n - 1 | __n - 1 >> 1;
         uVar14 = uVar14 | uVar14 >> 2;
         uVar14 = uVar14 | uVar14 >> 4;
         uVar14 = uVar14 | uVar14 >> 8;
         uVar14 = uVar14 | uVar14 >> 0x10;
         uVar14 = ( uVar14 | uVar14 >> 0x20 ) + 0x11;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar14, false);
      if (puVar6 != (undefined8*)0x0) {
         __dest = (AreaCMP*)( puVar6 + 2 );
         *puVar6 = 1;
         puVar6[1] = lVar17;
         memcpy(__dest, *(void**)( this + 8 ), __n);
         if (*(long*)( this + 8 ) != 0) {
            LOCK();
            plVar2 = (long*)( *(long*)( this + 8 ) + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               lVar17 = *(long*)( this + 8 );
               *(undefined8*)( this + 8 ) = 0;
               Memory::free_static((void*)( lVar17 + -0x10 ), false);
            }

         }

         *(AreaCMP**)( this + 8 ) = __dest;
         goto LAB_00105476;
      }

      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   }

   __dest = *(AreaCMP**)( this + 8 );
   LAB_00105476:if (lVar4 == 1) {
      SortArray<AreaCMP,_DefaultComparator<AreaCMP>,true>::introsort(0, 1, __dest, 0);
      return;
   }

   lVar7 = 0;
   lVar17 = lVar4;
   do {
      lVar17 = lVar17 >> 1;
      lVar7 = lVar7 + 1;
   }
 while ( lVar17 != 1 );
   SortArray<AreaCMP,_DefaultComparator<AreaCMP>,true>::introsort(0, lVar4, __dest, lVar7 * 2);
   pAVar1 = __dest + 0x10;
   lVar17 = 1;
   lVar7 = 1;
   pAVar16 = pAVar1;
   if (0x10 < lVar4) {
      do {
         lVar17 = *(long*)pAVar16;
         iVar3 = *(int*)( *(long*)pAVar16 + 0x120 );
         uStack_40 = ( undefined4 ) * (long*)( pAVar16 + 8 );
         pAVar15 = pAVar16;
         if (iVar3 < *(int*)( *(long*)__dest + 0x120 )) {
            do {
               pAVar11 = pAVar15 + -0x10;
               *(long*)pAVar15 = *(long*)( pAVar15 + -0x10 );
               *(undefined4*)( pAVar15 + 8 ) = *(undefined4*)( pAVar15 + -8 );
               pAVar15 = pAVar11;
            }
 while ( __dest != pAVar11 );
            *(long*)__dest = lVar17;
            *(undefined4*)( __dest + 8 ) = uStack_40;
         }
 else {
            if (iVar3 < *(int*)( *(long*)( pAVar16 + -0x10 ) + 0x120 )) {
               if (lVar7 + -1 != 0) {
                  lVar13 = lVar7 << 4;
                  lVar10 = lVar7 + -1;
                  do {
                     lVar9 = lVar10 + -1;
                     *(undefined8*)( __dest + lVar13 ) = *(undefined8*)( __dest + lVar13 + -0x10 );
                     *(undefined4*)( __dest + lVar13 + 8 ) = *(undefined4*)( __dest + lVar13 + -8 );
                     if (*(int*)( *(long*)( __dest + lVar13 + -0x20 ) + 0x120 ) <= iVar3) {
                        pAVar15 = __dest + lVar10 * 0x10;
                        goto LAB_001056f9;
                     }

                     lVar13 = lVar13 + -0x10;
                     lVar10 = lVar9;
                  }
 while ( lVar9 != 0 );
               }

               _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
               pAVar15 = pAVar1;
            }

            LAB_001056f9:*(long*)pAVar15 = lVar17;
            *(undefined4*)( pAVar15 + 8 ) = uStack_40;
         }

         lVar7 = lVar7 + 1;
         pAVar16 = pAVar16 + 0x10;
      }
 while ( lVar7 != 0x10 );
      pAVar16 = __dest + 0x100;
      lVar7 = -0x100;
      lVar17 = 0x10;
      do {
         lVar10 = *(long*)pAVar16;
         lVar13 = *(long*)( pAVar16 + 8 );
         iVar3 = *(int*)( *(long*)pAVar16 + 0x120 );
         lVar12 = lVar17 << 4;
         lVar9 = lVar17 + -1;
         pAVar15 = pAVar16;
         if (iVar3 < *(int*)( *(long*)( pAVar16 + -0x10 ) + 0x120 )) {
            do {
               lVar8 = lVar9 + -1;
               *(undefined8*)( __dest + lVar12 ) = *(undefined8*)( pAVar16 + lVar12 + lVar7 + -0x10 );
               *(undefined4*)( __dest + lVar12 + 8 ) = *(undefined4*)( pAVar16 + lVar12 + lVar7 + -8 );
               if (*(int*)( *(long*)( __dest + lVar12 + -0x20 ) + 0x120 ) <= iVar3) {
                  pAVar15 = __dest + lVar9 * 0x10;
                  goto LAB_001055c3;
               }

               lVar12 = lVar12 + -0x10;
               lVar9 = lVar8;
            }
 while ( lVar8 != 0 );
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            pAVar15 = pAVar1;
         }

         LAB_001055c3:lVar17 = lVar17 + 1;
         pAVar16 = pAVar16 + 0x10;
         lVar7 = lVar7 + -0x10;
         *(long*)pAVar15 = lVar10;
         uStack_60 = (undefined4)lVar13;
         *(undefined4*)( pAVar15 + 8 ) = uStack_60;
         if (lVar4 == lVar17) {
            return;
         }

      }
 while ( true );
   }

   do {
      lVar7 = *(long*)pAVar16;
      iVar3 = *(int*)( *(long*)pAVar16 + 0x120 );
      uStack_70 = ( undefined4 ) * (long*)( pAVar16 + 8 );
      pAVar15 = pAVar16;
      if (iVar3 < *(int*)( *(long*)__dest + 0x120 )) {
         do {
            pAVar11 = pAVar15 + -0x10;
            *(long*)pAVar15 = *(long*)( pAVar15 + -0x10 );
            *(undefined4*)( pAVar15 + 8 ) = *(undefined4*)( pAVar15 + -8 );
            pAVar15 = pAVar11;
         }
 while ( __dest != pAVar11 );
         *(long*)__dest = lVar7;
         *(undefined4*)( __dest + 8 ) = uStack_70;
      }
 else {
         if (iVar3 < *(int*)( *(long*)( pAVar16 + -0x10 ) + 0x120 )) {
            if (lVar17 + -1 != 0) {
               lVar13 = lVar17 << 4;
               lVar10 = lVar17 + -1;
               do {
                  lVar9 = lVar10 + -1;
                  *(undefined8*)( __dest + lVar13 ) = *(undefined8*)( __dest + lVar13 + -0x10 );
                  *(undefined4*)( __dest + lVar13 + 8 ) = *(undefined4*)( __dest + lVar13 + -8 );
                  if (*(int*)( *(long*)( __dest + lVar13 + -0x20 ) + 0x120 ) <= iVar3) {
                     pAVar15 = __dest + lVar10 * 0x10;
                     goto LAB_0010579d;
                  }

                  lVar13 = lVar13 + -0x10;
                  lVar10 = lVar9;
               }
 while ( lVar9 != 0 );
            }

            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            pAVar15 = pAVar1;
         }

         LAB_0010579d:*(long*)pAVar15 = lVar7;
         *(undefined4*)( pAVar15 + 8 ) = uStack_70;
      }

      lVar17 = lVar17 + 1;
      pAVar16 = pAVar16 + 0x10;
      if (lVar4 == lVar17) {
         return;
      }

   }
 while ( true );
}


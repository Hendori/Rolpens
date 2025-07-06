/* CowData<GodotCollisionObject3D::Shape>::_copy_on_write() [clone .isra.0] */void CowData<GodotCollisionObject3D::Shape>::_copy_on_write(CowData<GodotCollisionObject3D::Shape> *this) {
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
   __n = lVar2 * 0x90;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* GodotCollisionObject3D::_update_shapes() [clone .part.0] */void GodotCollisionObject3D::_update_shapes(GodotCollisionObject3D *this) {
   float fVar1;
   undefined4 uVar2;
   long lVar3;
   long *plVar4;
   undefined8 *puVar5;
   Transform3D *pTVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
   long in_FS_OFFSET;
   float fVar10;
   float fVar11;
   float fVar12;
   float fVar13;
   undefined8 local_d0;
   float local_c8;
   float local_c0[4];
   float local_b0[3];
   undefined1 local_a4[8];
   float local_9c;
   undefined8 local_98;
   float fStack_90;
   float fStack_8c;
   float fStack_88;
   float fStack_84;
   Transform3D local_78[36];
   float local_54[5];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *(long*)( this + 0x38 );
   if (lVar7 != 0) {
      uVar9 = 0;
      do {
         while (true) {
            if (*(long*)( lVar7 + -8 ) <= (long)uVar9) goto LAB_00100390;
            CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
            lVar7 = *(long*)( this + 0x38 );
            lVar8 = uVar9 * 0x90 + lVar7;
            if (*(char*)( lVar8 + 0x88 ) != '\0') break;
            lVar7 = *(long*)( lVar8 + 0x80 );
            local_98 = *(undefined8*)( lVar7 + 0x10 );
            fStack_90 = (float)*(undefined8*)( lVar7 + 0x18 );
            fStack_8c = (float)( ( ulong ) * (undefined8*)( lVar7 + 0x18 ) >> 0x20 );
            fStack_88 = (float)*(undefined8*)( lVar7 + 0x20 );
            fStack_84 = (float)( ( ulong ) * (undefined8*)( lVar7 + 0x20 ) >> 0x20 );
            Transform3D::operator *(local_78, (Transform3D*)( this + 0x48 ));
            lVar7 = 0;
            local_c0[0] = 0.0;
            local_c0[1] = 0.0;
            local_a4 = (undefined1[8])local_98;
            local_c0[2] = 0.0;
            local_9c = fStack_90;
            for (int i = 0; i < 3; i++) {
               local_b0[i] = 0;
            }

            local_d0 = CONCAT44(fStack_88 + (float)( (ulong)local_98 >> 0x20 ), fStack_8c + (float)local_98);
            local_c8 = fStack_90 + fStack_84;
            pTVar6 = local_78;
            do {
               fVar13 = *(float*)( (long)local_54 + lVar7 );
               lVar3 = 0;
               fVar11 = fVar13;
               do {
                  fVar12 = *(float*)( local_a4 + lVar3 ) * *(float*)( pTVar6 + lVar3 );
                  fVar10 = *(float*)( pTVar6 + lVar3 ) * *(float*)( (long)&local_d0 + lVar3 );
                  fVar1 = fVar12;
                  if (fVar12 < fVar10) {
                     fVar1 = fVar10;
                     fVar10 = fVar12;
                  }

                  fVar11 = fVar11 + fVar10;
                  fVar13 = fVar13 + fVar1;
                  lVar3 = lVar3 + 4;
               }
 while ( lVar3 != 0xc );
               *(float*)( (long)local_b0 + lVar7 ) = fVar13;
               pTVar6 = pTVar6 + 0xc;
               *(float*)( (long)local_c0 + lVar7 ) = fVar11;
               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != 0xc );
            fVar13 = (float)( (double)( *(float*)( lVar8 + 0x70 ) + *(float*)( lVar8 + 0x74 ) ) * __LC4 * __LC5 );
            fStack_84 = fVar13 + fVar13;
            fStack_90 = local_c0[2] - fVar13;
            fStack_8c = ( local_b0[0] - local_c0[0] ) + fStack_84;
            fStack_88 = fStack_84 + ( local_b0[1] - local_c0[1] );
            fStack_84 = fStack_84 + ( local_b0[2] - local_c0[2] );
            local_98 = CONCAT44(local_c0[1] - fVar13, local_c0[0] - fVar13);
            *(ulong*)( lVar8 + 0x74 ) = CONCAT44(fStack_84, fStack_88);
            *(undefined8*)( lVar8 + 100 ) = local_98;
            *(ulong*)( lVar8 + 0x6c ) = CONCAT44(fStack_8c, fStack_90);
            _local_a4 = Basis::get_scale();
            fVar13 = (float)( **(code**)**(undefined8**)( lVar8 + 0x80 ) )();
            *(float*)( lVar8 + 0x7c ) = fVar13 * (float)local_a4._0_4_ * (float)local_a4._4_4_ * local_9c;
            if (*(int*)( lVar8 + 0x60 ) == 0) {
               puVar5 = (undefined8*)GodotSpace3D::get_broadphase();
               uVar2 = ( **(code**)*puVar5 )(puVar5, this, uVar9 & 0xffffffff, &local_98, this[0xa8]);
               *(undefined4*)( lVar8 + 0x60 ) = uVar2;
               plVar4 = (long*)GodotSpace3D::get_broadphase();
               ( **(code**)( *plVar4 + 0x10 ) )(plVar4, *(undefined4*)( lVar8 + 0x60 ), this[0xa8]);
            }

            uVar9 = uVar9 + 1;
            plVar4 = (long*)GodotSpace3D::get_broadphase();
            ( **(code**)( *plVar4 + 8 ) )(plVar4, *(undefined4*)( lVar8 + 0x60 ), &local_98);
            lVar7 = *(long*)( this + 0x38 );
            if (lVar7 == 0) goto LAB_00100390;
         }
;
         uVar9 = uVar9 + 1;
      }
 while ( lVar7 != 0 );
   }

   LAB_00100390:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotCollisionObject3D::_shape_changed() */void GodotCollisionObject3D::_shape_changed(GodotCollisionObject3D *this) {
   if (*(long*)( this + 0x40 ) != 0) {
      _update_shapes(this);
   }

   /* WARNING: Could not recover jumptable at 0x0010043f. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *(long*)this + 0x20 ) )(this);
   return;
}
/* GodotCollisionObject3D::set_shape(int, GodotShape3D*) */void GodotCollisionObject3D::set_shape(GodotCollisionObject3D *this, int param_1, GodotShape3D *param_2) {
   GodotCollisionObject3D *pGVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   lVar3 = (long)param_1;
   lVar4 = *(long*)( this + 0x38 );
   if (param_1 < 0) {
      if (lVar4 != 0) {
         lVar5 = *(long*)( lVar4 + -8 );
         goto LAB_001004fd;
      }

   }
 else if (lVar4 != 0) {
      lVar5 = *(long*)( lVar4 + -8 );
      if (lVar3 < lVar5) {
         GodotShape3D::remove_owner(*(GodotShapeOwner3D**)( lVar4 + 0x80 + lVar3 * 0x90 ));
         if (*(long*)( this + 0x38 ) == 0) {
            lVar4 = 0;
         }
 else {
            lVar4 = *(long*)( *(long*)( this + 0x38 ) + -8 );
            if (lVar3 < lVar4) {
               CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
               *(GodotShape3D**)( *(long*)( this + 0x38 ) + 0x80 + lVar3 * 0x90 ) = param_2;
               GodotShape3D::add_owner((GodotShapeOwner3D*)param_2);
               lVar4 = GodotPhysicsServer3D::godot_singleton;
               if (*(long*)( this + 0xb0 ) != 0) {
                  return;
               }

               pGVar1 = this + 0xb0;
               *(long*)( this + 0xb0 ) = GodotPhysicsServer3D::godot_singleton + 0x3c8;
               lVar3 = *(long*)( lVar4 + 0x3c8 );
               *(undefined8*)( this + 200 ) = 0;
               *(long*)( this + 0xc0 ) = lVar3;
               if (lVar3 == 0) {
                  *(GodotCollisionObject3D**)( lVar4 + 0x3d0 ) = pGVar1;
               }
 else {
                  *(GodotCollisionObject3D**)( lVar3 + 0x18 ) = pGVar1;
               }

               *(GodotCollisionObject3D**)( lVar4 + 0x3c8 ) = pGVar1;
               return;
            }

         }

         _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar3, lVar4, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      goto LAB_001004fd;
   }

   lVar5 = 0;
   LAB_001004fd:_err_print_index_error("set_shape", "modules/godot_physics_3d/godot_collision_object_3d.cpp", 0x34, lVar3, lVar5, "p_index", "shapes.size()", "", false, false);
   return;
}
/* GodotCollisionObject3D::set_shape_transform(int, Transform3D const&) */void GodotCollisionObject3D::set_shape_transform(GodotCollisionObject3D *this, int param_1, Transform3D *param_2) {
   GodotCollisionObject3D *pGVar1;
   undefined8 *puVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   undefined8 uStack_40;
   lVar8 = (long)param_1;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *(long*)( this + 0x38 );
   if (param_1 < 0) {
      if (lVar7 == 0) goto LAB_001007f0;
      lVar7 = *(long*)( lVar7 + -8 );
   }
 else if (lVar7 == 0) {
      LAB_001007f0:lVar7 = 0;
   }
 else {
      lVar7 = *(long*)( lVar7 + -8 );
      if (lVar8 < lVar7) {
         lVar6 = lVar8 * 0x90;
         CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
         lVar7 = *(long*)( this + 0x38 );
         uVar5 = *(undefined8*)( param_2 + 8 );
         *(undefined8*)( lVar7 + lVar6 ) = *(undefined8*)param_2;
         ( (undefined8*)( lVar7 + lVar6 ) )[1] = uVar5;
         uVar5 = *(undefined8*)( param_2 + 0x18 );
         puVar2 = (undefined8*)( lVar7 + 0x10 + lVar6 );
         *puVar2 = *(undefined8*)( param_2 + 0x10 );
         puVar2[1] = uVar5;
         uVar5 = *(undefined8*)( param_2 + 0x28 );
         puVar2 = (undefined8*)( lVar7 + 0x20 + lVar6 );
         *puVar2 = *(undefined8*)( param_2 + 0x20 );
         puVar2[1] = uVar5;
         Transform3D::affine_inverse();
         if (*(long*)( this + 0x38 ) == 0) {
            lVar7 = 0;
            LAB_001007ab:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar8, lVar7, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar7 = *(long*)( *(long*)( this + 0x38 ) + -8 );
         if (lVar7 <= lVar8) goto LAB_001007ab;
         CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
         lVar7 = *(long*)( this + 0x38 );
         lVar8 = *(long*)( this + 0xb0 );
         puVar2 = (undefined8*)( lVar7 + 0x30 + lVar6 );
         *puVar2 = local_68;
         puVar2[1] = uStack_60;
         puVar2 = (undefined8*)( lVar7 + 0x40 + lVar6 );
         *puVar2 = local_58;
         puVar2[1] = uStack_50;
         puVar2 = (undefined8*)( lVar7 + 0x50 + lVar6 );
         *puVar2 = local_48;
         puVar2[1] = uStack_40;
         lVar7 = GodotPhysicsServer3D::godot_singleton;
         if (lVar8 == 0) {
            pGVar1 = this + 0xb0;
            *(long*)( this + 0xb0 ) = GodotPhysicsServer3D::godot_singleton + 0x3c8;
            lVar8 = *(long*)( lVar7 + 0x3c8 );
            *(undefined8*)( this + 200 ) = 0;
            *(long*)( this + 0xc0 ) = lVar8;
            if (lVar8 == 0) {
               *(GodotCollisionObject3D**)( lVar7 + 0x3d0 ) = pGVar1;
            }
 else {
               *(GodotCollisionObject3D**)( lVar8 + 0x18 ) = pGVar1;
            }

            *(GodotCollisionObject3D**)( lVar7 + 0x3c8 ) = pGVar1;
         }

         goto LAB_001006e1;
      }

   }

   _err_print_index_error("set_shape_transform", "modules/godot_physics_3d/godot_collision_object_3d.cpp", 0x3f, lVar8, lVar7, "p_index", "shapes.size()", "", false, false);
   LAB_001006e1:if (lVar3 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GodotCollisionObject3D::set_shape_disabled(int, bool) */void GodotCollisionObject3D::set_shape_disabled(GodotCollisionObject3D *this, int param_1, bool param_2) {
   GodotCollisionObject3D *pGVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   lVar3 = (long)param_1;
   lVar4 = *(long*)( this + 0x38 );
   if (param_1 < 0) {
      if (lVar4 != 0) {
         lVar4 = *(long*)( lVar4 + -8 );
         goto LAB_00100919;
      }

   }
 else if (lVar4 != 0) {
      lVar4 = *(long*)( lVar4 + -8 );
      if (lVar3 < lVar4) {
         CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
         lVar4 = lVar3 * 0x90 + *(long*)( this + 0x38 );
         if (( (bool)*(char*)( lVar4 + 0x88 ) != param_2 ) && ( lVar3 = *(long*)( this + 0x40 ) ),*(bool*)( lVar4 + 0x88 ) = param_2,lVar3 != 0) {
            if (param_2) {
               if (*(int*)( lVar4 + 0x60 ) == 0) {
                  return;
               }

               plVar2 = (long*)GodotSpace3D::get_broadphase();
               ( **(code**)( *plVar2 + 0x18 ) )(plVar2, *(undefined4*)( lVar4 + 0x60 ));
               lVar3 = *(long*)( this + 0xb0 );
               *(undefined4*)( lVar4 + 0x60 ) = 0;
               lVar4 = GodotPhysicsServer3D::godot_singleton;
            }
 else {
               if (*(int*)( lVar4 + 0x60 ) != 0) {
                  return;
               }

               lVar3 = *(long*)( this + 0xb0 );
               lVar4 = GodotPhysicsServer3D::godot_singleton;
            }

            GodotPhysicsServer3D::godot_singleton = lVar4;
            if (lVar3 == 0) {
               pGVar1 = this + 0xb0;
               *(long*)( this + 0xb0 ) = lVar4 + 0x3c8;
               lVar3 = *(long*)( lVar4 + 0x3c8 );
               *(undefined8*)( this + 200 ) = 0;
               *(long*)( this + 0xc0 ) = lVar3;
               if (lVar3 == 0) {
                  *(GodotCollisionObject3D**)( lVar4 + 0x3d0 ) = pGVar1;
               }
 else {
                  *(GodotCollisionObject3D**)( lVar3 + 0x18 ) = pGVar1;
               }

               *(GodotCollisionObject3D**)( lVar4 + 0x3c8 ) = pGVar1;
            }

         }

         return;
      }

      goto LAB_00100919;
   }

   lVar4 = 0;
   LAB_00100919:_err_print_index_error("set_shape_disabled", "modules/godot_physics_3d/godot_collision_object_3d.cpp", 0x49, lVar3, lVar4, "p_idx", "shapes.size()", "", false, false);
   return;
}
/* GodotCollisionObject3D::_set_static(bool) */void GodotCollisionObject3D::_set_static(GodotCollisionObject3D *this, bool param_1) {
   code *pcVar1;
   long lVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   if (this[0xa8] == (GodotCollisionObject3D)param_1) {
      return;
   }

   this[0xa8] = (GodotCollisionObject3D)param_1;
   if (( *(long*)( this + 0x40 ) != 0 ) && ( lVar2 = lVar2 != 0 )) {
      lVar4 = 0;
      do {
         while (true) {
            lVar5 = *(long*)( lVar2 + -8 );
            if ((int)lVar5 <= (int)lVar4) {
               return;
            }

            if (lVar5 <= lVar4) {
               _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar5 = lVar4 * 0x90 + lVar2;
            if (*(int*)( lVar5 + 0x60 ) == 0) break;
            lVar4 = lVar4 + 1;
            plVar3 = (long*)GodotSpace3D::get_broadphase();
            ( **(code**)( *plVar3 + 0x10 ) )(plVar3, *(undefined4*)( lVar5 + 0x60 ), this[0xa8]);
            lVar2 = *(long*)( this + 0x38 );
            if (lVar2 == 0) {
               return;
            }

         }
;
         lVar4 = lVar4 + 1;
      }
 while ( lVar2 != 0 );
   }

   return;
}
/* GodotCollisionObject3D::_unregister_shapes() */void GodotCollisionObject3D::_unregister_shapes(GodotCollisionObject3D *this) {
   long lVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   lVar1 = *(long*)( this + 0x38 );
   if (lVar1 == 0) {
      return;
   }

   lVar4 = 0;
   do {
      while (true) {
         if (*(long*)( lVar1 + -8 ) <= lVar4) {
            return;
         }

         CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
         lVar1 = *(long*)( this + 0x38 );
         lVar3 = lVar4 * 0x90 + lVar1;
         if (*(int*)( lVar3 + 0x60 ) != 0) break;
         lVar4 = lVar4 + 1;
         if (lVar1 == 0) {
            return;
         }

      }
;
      lVar4 = lVar4 + 1;
      plVar2 = (long*)GodotSpace3D::get_broadphase();
      ( **(code**)( *plVar2 + 0x18 ) )(plVar2, *(undefined4*)( lVar3 + 0x60 ));
      lVar1 = *(long*)( this + 0x38 );
      *(undefined4*)( lVar3 + 0x60 ) = 0;
   }
 while ( lVar1 != 0 );
   return;
}
/* GodotCollisionObject3D::_update_shapes() */void GodotCollisionObject3D::_update_shapes(GodotCollisionObject3D *this) {
   if (*(long*)( this + 0x40 ) != 0) {
      _update_shapes(this);
      return;
   }

   return;
}
/* GodotCollisionObject3D::_update_shapes_with_motion(Vector3 const&) */void GodotCollisionObject3D::_update_shapes_with_motion(GodotCollisionObject3D *this, Vector3 *param_1) {
   float fVar1;
   undefined4 uVar2;
   long lVar3;
   long *plVar4;
   undefined8 *puVar5;
   Transform3D *this_00;
   long lVar6;
   long lVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   float fVar9;
   float fVar10;
   float fVar11;
   float fVar12;
   undefined8 local_f0;
   float local_e8;
   undefined8 local_e0;
   float local_d8;
   float local_d0[3];
   undefined8 local_c4;
   float local_bc;
   undefined8 local_b8;
   float fStack_b0;
   float fStack_ac;
   float fStack_a8;
   float fStack_a4;
   undefined8 local_98;
   float fStack_90;
   float fStack_8c;
   float fStack_88;
   float fStack_84;
   Transform3D local_78[36];
   float local_54[5];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x40 ) != 0 ) && ( lVar6 = lVar6 != 0 )) {
      uVar8 = 0;
      do {
         while (true) {
            if (*(long*)( lVar6 + -8 ) <= (long)uVar8) goto LAB_00100d98;
            CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
            lVar6 = *(long*)( this + 0x38 );
            lVar7 = uVar8 * 0x90 + lVar6;
            if (*(char*)( lVar7 + 0x88 ) != '\0') break;
            lVar6 = *(long*)( lVar7 + 0x80 );
            this_00 = local_78;
            local_b8 = *(undefined8*)( lVar6 + 0x10 );
            fStack_b0 = (float)*(undefined8*)( lVar6 + 0x18 );
            fStack_ac = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x18 ) >> 0x20 );
            fStack_a8 = (float)*(undefined8*)( lVar6 + 0x20 );
            fStack_a4 = (float)( ( ulong ) * (undefined8*)( lVar6 + 0x20 ) >> 0x20 );
            Transform3D::operator *(this_00, (Transform3D*)( this + 0x48 ));
            lVar6 = 0;
            local_e0 = 0;
            local_c4 = local_b8;
            local_d8 = 0.0;
            local_bc = fStack_b0;
            for (int i = 0; i < 3; i++) {
               local_d0[i] = 0;
            }

            local_f0 = CONCAT44(fStack_a8 + (float)( (ulong)local_b8 >> 0x20 ), fStack_ac + (float)local_b8);
            local_e8 = fStack_b0 + fStack_a4;
            do {
               fVar12 = *(float*)( (long)local_54 + lVar6 );
               lVar3 = 0;
               fVar10 = fVar12;
               do {
                  fVar11 = *(float*)( (long)&local_c4 + lVar3 ) * *(float*)( this_00 + lVar3 );
                  fVar9 = *(float*)( this_00 + lVar3 ) * *(float*)( (long)&local_f0 + lVar3 );
                  fVar1 = fVar11;
                  if (fVar11 < fVar9) {
                     fVar1 = fVar9;
                     fVar9 = fVar11;
                  }

                  fVar10 = fVar10 + fVar9;
                  fVar12 = fVar12 + fVar1;
                  lVar3 = lVar3 + 4;
               }
 while ( lVar3 != 0xc );
               *(float*)( (long)local_d0 + lVar6 ) = fVar12;
               this_00 = this_00 + 0xc;
               *(float*)( (long)&local_e0 + lVar6 ) = fVar10;
               lVar6 = lVar6 + 4;
            }
 while ( lVar6 != 0xc );
            fStack_a4 = local_d0[2] - local_d8;
            fStack_ac = (float)local_d0._0_8_ - (float)local_e0;
            fVar12 = (float)( (ulong)local_e0 >> 0x20 );
            fStack_a8 = SUB84(local_d0._0_8_, 4) - fVar12;
            local_b8 = local_e0;
            fStack_b0 = local_d8;
            fStack_90 = local_d8 + *(float*)( param_1 + 8 );
            local_98 = CONCAT44((float)( ( ulong ) * (undefined8*)param_1 >> 0x20 ) + fVar12, (float)*(undefined8*)param_1 + (float)local_e0);
            fStack_8c = fStack_ac;
            fStack_88 = fStack_a8;
            fStack_84 = fStack_a4;
            AABB::merge_with((AABB*)&local_b8);
            *(ulong*)( lVar7 + 0x74 ) = CONCAT44(fStack_a4, fStack_a8);
            *(undefined8*)( lVar7 + 100 ) = local_b8;
            *(ulong*)( lVar7 + 0x6c ) = CONCAT44(fStack_ac, fStack_b0);
            if (*(int*)( lVar7 + 0x60 ) == 0) {
               puVar5 = (undefined8*)GodotSpace3D::get_broadphase();
               uVar2 = ( **(code**)*puVar5 )(puVar5, this, uVar8 & 0xffffffff, (AABB*)&local_b8, this[0xa8]);
               *(undefined4*)( lVar7 + 0x60 ) = uVar2;
               plVar4 = (long*)GodotSpace3D::get_broadphase();
               ( **(code**)( *plVar4 + 0x10 ) )(plVar4, *(undefined4*)( lVar7 + 0x60 ), this[0xa8]);
            }

            uVar8 = uVar8 + 1;
            plVar4 = (long*)GodotSpace3D::get_broadphase();
            ( **(code**)( *plVar4 + 8 ) )(plVar4, *(undefined4*)( lVar7 + 0x60 ), (AABB*)&local_b8);
            lVar6 = *(long*)( this + 0x38 );
            if (lVar6 == 0) goto LAB_00100d98;
         }
;
         uVar8 = uVar8 + 1;
      }
 while ( lVar6 != 0 );
   }

   LAB_00100d98:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GodotCollisionObject3D::_set_space(GodotSpace3D*) */void GodotCollisionObject3D::_set_space(GodotCollisionObject3D *this, GodotSpace3D *param_1) {
   GodotCollisionObject3D *pGVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   pGVar1 = *(GodotCollisionObject3D**)( this + 0x40 );
   *(GodotSpace3D**)( this + 0x40 ) = param_1;
   if (pGVar1 != (GodotCollisionObject3D*)0x0) {
      GodotSpace3D::remove_object(pGVar1);
      lVar3 = *(long*)( this + 0x38 );
      for (lVar5 = 0; ( lVar3 != 0 && ( lVar5 < *(long*)( lVar3 + -8 ) ) ); lVar5 = lVar5 + 1) {
         CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
         lVar3 = *(long*)( this + 0x38 );
         lVar4 = lVar5 * 0x90 + lVar3;
         if (*(int*)( lVar4 + 0x60 ) != 0) {
            plVar2 = (long*)GodotSpace3D::get_broadphase();
            ( **(code**)( *plVar2 + 0x18 ) )(plVar2, *(undefined4*)( lVar4 + 0x60 ));
            *(undefined4*)( lVar4 + 0x60 ) = 0;
            lVar3 = *(long*)( this + 0x38 );
         }

      }

      param_1 = *(GodotSpace3D**)( this + 0x40 );
   }

   if (( param_1 != (GodotSpace3D*)0x0 ) && ( GodotSpace3D::add_object((GodotCollisionObject3D*)param_1),*(long*)( this + 0x40 ) != 0 )) {
      _update_shapes(this);
      return;
   }

   return;
}
/* GodotCollisionObject3D::GodotCollisionObject3D(GodotCollisionObject3D::Type) */void GodotCollisionObject3D::GodotCollisionObject3D(GodotCollisionObject3D *this, undefined4 param_2) {
   undefined8 uVar1;
   uint uVar2;
   undefined1 auVar3[16];
   uVar2 = _LC20;
   *(undefined8*)( this + 0x6c ) = 0;
   *(undefined***)this = &PTR__shape_changed_00101da8;
   uVar1 = _LC19;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   auVar3 = ZEXT416(_LC20);
   *(undefined8*)( this + 0x20 ) = uVar1;
   *(undefined4*)( this + 0x74 ) = 0;
   *(undefined8*)( this + 0x9c ) = 0;
   *(undefined4*)( this + 0xa4 ) = 0;
   this[0xa8] = (GodotCollisionObject3D)0x1;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(undefined8*)( this + 0xc0 ) = 0;
   *(undefined8*)( this + 200 ) = 0;
   *(GodotCollisionObject3D**)( this + 0xb8 ) = this;
   this[0xd0] = (GodotCollisionObject3D)0x1;
   *(undefined4*)( this + 8 ) = param_2;
   *(uint*)( this + 0x28 ) = uVar2;
   *(undefined1(*) [16])( this + 0x48 ) = auVar3;
   *(undefined1(*) [16])( this + 0x58 ) = auVar3;
   *(uint*)( this + 0x68 ) = uVar2;
   *(undefined1(*) [16])( this + 0x78 ) = auVar3;
   *(undefined1(*) [16])( this + 0x88 ) = auVar3;
   *(uint*)( this + 0x98 ) = uVar2;
   return;
}
/* GodotCollisionObject3D::remove_shape(int) */void GodotCollisionObject3D::remove_shape(GodotCollisionObject3D *this, int param_1) {
   GodotCollisionObject3D *pGVar1;
   code *pcVar2;
   long *plVar3;
   undefined8 *puVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   lVar10 = (long)param_1;
   lVar6 = *(long*)( this + 0x38 );
   if (param_1 < 0) {
      if (lVar6 != 0) {
         lVar9 = *(long*)( lVar6 + -8 );
         goto LAB_0010114d;
      }

   }
 else if (lVar6 != 0) {
      lVar9 = *(long*)( lVar6 + -8 );
      if (lVar9 <= lVar10) goto LAB_0010114d;
      lVar7 = lVar10;
      while (lVar7 < lVar9) {
         lVar8 = lVar7 * 0x90;
         if (*(int*)( lVar6 + 0x60 + lVar8 ) != 0) {
            plVar3 = (long*)GodotSpace3D::get_broadphase();
            lVar6 = *(long*)( this + 0x38 );
            if (lVar6 == 0) {
               lVar9 = 0;
               goto LAB_001010a8;
            }

            lVar9 = *(long*)( lVar6 + -8 );
            if (lVar9 <= lVar7) goto LAB_001010a8;
            ( **(code**)( *plVar3 + 0x18 ) )(plVar3, *(undefined4*)( lVar6 + 0x60 + lVar8 ));
            if (*(long*)( this + 0x38 ) == 0) {
               lVar6 = 0;
               LAB_001010fb:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar7, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar6 = *(long*)( *(long*)( this + 0x38 ) + -8 );
            if (lVar6 <= lVar7) goto LAB_001010fb;
            CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
            lVar6 = *(long*)( this + 0x38 );
            *(undefined4*)( lVar6 + 0x60 + lVar8 ) = 0;
         }

         lVar7 = lVar7 + 1;
         if (lVar6 == 0) {
            lVar9 = 0;
            lVar7 = lVar10;
            goto LAB_001010a8;
         }

         lVar9 = *(long*)( lVar6 + -8 );
      }
;
      lVar7 = lVar10;
      if (lVar9 <= lVar10) {
         LAB_001010a8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar9, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      GodotShape3D::remove_owner(*(GodotShapeOwner3D**)( lVar6 + 0x80 + lVar10 * 0x90 ));
      if (*(long*)( this + 0x38 ) == 0) {
         lVar6 = 0;
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 0x38 ) + -8 );
         if (lVar10 < lVar6) {
            CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
            lVar6 = *(long*)( this + 0x38 );
            if (lVar6 == 0) {
               lVar9 = -1;
            }
 else {
               lVar7 = *(long*)( lVar6 + -8 );
               lVar9 = lVar7 + -1;
               if (lVar10 < lVar9) {
                  puVar4 = (undefined8*)( lVar6 + lVar10 * 0x90 );
                  do {
                     puVar5 = puVar4 + 0x12;
                     puVar4[2] = puVar4[0x14];
                     puVar4[3] = puVar4[0x15];
                     *puVar4 = puVar4[0x12];
                     puVar4[1] = puVar4[0x13];
                     puVar4[4] = puVar4[0x16];
                     puVar4[5] = puVar4[0x17];
                     puVar4[0xe] = puVar4[0x20];
                     puVar4[0xf] = puVar4[0x21];
                     puVar4[6] = puVar4[0x18];
                     puVar4[7] = puVar4[0x19];
                     puVar4[8] = puVar4[0x1a];
                     puVar4[9] = puVar4[0x1b];
                     puVar4[10] = puVar4[0x1c];
                     puVar4[0xb] = puVar4[0x1d];
                     puVar4[0xc] = puVar4[0x1e];
                     puVar4[0xd] = puVar4[0x1f];
                     *(undefined8*)( (long)puVar4 + 0x79 ) = *(undefined8*)( (long)puVar4 + 0x109 );
                     *(undefined8*)( (long)puVar4 + 0x81 ) = *(undefined8*)( (long)puVar4 + 0x111 );
                     puVar4 = puVar5;
                  }
 while ( (undefined8*)( lVar6 + -0x90 + lVar7 * 0x90 ) != puVar5 );
               }

            }

            CowData<GodotCollisionObject3D::Shape>::resize<false>((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ), lVar9);
            goto LAB_0010127d;
         }

      }

      _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar10, lVar6, "p_index", "size()", "", false, false);
      LAB_0010127d:lVar6 = GodotPhysicsServer3D::godot_singleton;
      if (*(long*)( this + 0xb0 ) != 0) {
         return;
      }

      pGVar1 = this + 0xb0;
      *(long*)( this + 0xb0 ) = GodotPhysicsServer3D::godot_singleton + 0x3c8;
      lVar10 = *(long*)( lVar6 + 0x3c8 );
      *(undefined8*)( this + 200 ) = 0;
      *(long*)( this + 0xc0 ) = lVar10;
      if (lVar10 == 0) {
         *(GodotCollisionObject3D**)( lVar6 + 0x3d0 ) = pGVar1;
      }
 else {
         *(GodotCollisionObject3D**)( lVar10 + 0x18 ) = pGVar1;
      }

      *(GodotCollisionObject3D**)( lVar6 + 0x3c8 ) = pGVar1;
      return;
   }

   lVar9 = 0;
   LAB_0010114d:_err_print_index_error("remove_shape", "modules/godot_physics_3d/godot_collision_object_3d.cpp", 0x6f, lVar10, lVar9, "p_index", "shapes.size()", "", false, false);
   return;
}
/* GodotCollisionObject3D::remove_shape(GodotShape3D*) */void GodotCollisionObject3D::remove_shape(GodotCollisionObject3D *this, GodotShape3D *param_1) {
   long lVar1;
   long lVar2;
   int iVar3;
   lVar1 = *(long*)( this + 0x38 );
   if (lVar1 == 0) {
      return;
   }

   iVar3 = 0;
   lVar2 = 0;
   do {
      while (true) {
         if (*(long*)( lVar1 + -8 ) <= lVar2) {
            return;
         }

         lVar2 = (long)iVar3;
         if (*(GodotShape3D**)( lVar1 + 0x80 + lVar2 * 0x90 ) == param_1) break;
         iVar3 = iVar3 + 1;
         lVar2 = (long)iVar3;
         if (lVar1 == 0) {
            return;
         }

      }
;
      remove_shape(this, iVar3);
      lVar1 = *(long*)( this + 0x38 );
   }
 while ( lVar1 != 0 );
   return;
}
/* GodotCollisionObject3D::add_shape(GodotShape3D*, Transform3D const&, bool) */void GodotCollisionObject3D::add_shape(GodotCollisionObject3D *this, GodotShape3D *param_1, Transform3D *param_2, bool param_3) {
   GodotCollisionObject3D *pGVar1;
   long lVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   undefined8 uVar8;
   int iVar9;
   undefined8 *puVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   undefined8 local_188;
   undefined8 uStack_180;
   undefined8 local_178;
   undefined8 uStack_170;
   undefined8 local_168;
   undefined8 uStack_160;
   undefined7 uStack_d7;
   uVar3 = *(undefined8*)param_2;
   uVar4 = *(undefined8*)( param_2 + 8 );
   uVar5 = *(undefined8*)( param_2 + 0x10 );
   uVar6 = *(undefined8*)( param_2 + 0x18 );
   uVar7 = *(undefined8*)( param_2 + 0x20 );
   uVar8 = *(undefined8*)( param_2 + 0x28 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   uStack_d7 = ( undefined7 )((ulong)param_1 >> 8);
   Transform3D::affine_inverse();
   if (*(long*)( this + 0x38 ) == 0) {
      lVar11 = 1;
   }
 else {
      lVar11 = *(long*)( *(long*)( this + 0x38 ) + -8 ) + 1;
   }

   iVar9 = CowData<GodotCollisionObject3D::Shape>::resize<false>((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ), lVar11);
   if (iVar9 == 0) {
      if (*(long*)( this + 0x38 ) == 0) {
         lVar12 = -1;
         lVar11 = 0;
      }
 else {
         lVar11 = *(long*)( *(long*)( this + 0x38 ) + -8 );
         lVar12 = lVar11 + -1;
         if (-1 < lVar12) {
            CowData<GodotCollisionObject3D::Shape>::_copy_on_write((CowData<GodotCollisionObject3D::Shape>*)( this + 0x38 ));
            puVar10 = (undefined8*)( lVar12 * 0x90 + *(long*)( this + 0x38 ) );
            *puVar10 = uVar3;
            puVar10[1] = uVar4;
            puVar10[2] = uVar5;
            puVar10[3] = uVar6;
            puVar10[4] = uVar7;
            puVar10[5] = uVar8;
            puVar10[6] = local_188;
            puVar10[7] = uStack_180;
            puVar10[0xe] = 0;
            puVar10[0xf] = 0;
            puVar10[8] = local_178;
            puVar10[9] = uStack_170;
            puVar10[10] = local_168;
            puVar10[0xb] = uStack_160;
            puVar10[0xc] = 0;
            puVar10[0xd] = 0;
            *(long*)( (long)puVar10 + 0x79 ) = (long)param_1 << 0x38;
            *(ulong*)( (long)puVar10 + 0x81 ) = CONCAT17(param_3, uStack_d7);
            goto LAB_0010160f;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar12, lVar11, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_0010160f:GodotShape3D::add_owner((GodotShapeOwner3D*)param_1);
   lVar11 = GodotPhysicsServer3D::godot_singleton;
   if (*(long*)( this + 0xb0 ) == 0) {
      pGVar1 = this + 0xb0;
      *(long*)( this + 0xb0 ) = GodotPhysicsServer3D::godot_singleton + 0x3c8;
      lVar12 = *(long*)( lVar11 + 0x3c8 );
      *(undefined8*)( this + 200 ) = 0;
      *(long*)( this + 0xc0 ) = lVar12;
      if (lVar12 == 0) {
         *(GodotCollisionObject3D**)( lVar11 + 0x3d0 ) = pGVar1;
      }
 else {
         *(GodotCollisionObject3D**)( lVar12 + 0x18 ) = pGVar1;
      }

      *(GodotCollisionObject3D**)( lVar11 + 0x3c8 ) = pGVar1;
   }

   if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<GodotCollisionObject3D::Shape>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GodotCollisionObject3D::Shape>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<GodotCollisionObject3D::Shape>::_realloc(long) */undefined8 CowData<GodotCollisionObject3D::Shape>::_realloc(CowData<GodotCollisionObject3D::Shape> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<GodotCollisionObject3D::Shape>::resize<false>(long) */undefined8 CowData<GodotCollisionObject3D::Shape>::resize<false>(CowData<GodotCollisionObject3D::Shape> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   uint uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   undefined8 uVar9;
   undefined8 *puVar10;
   long lVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   lVar4 = *(long*)this;
   if (lVar4 == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar12 = 0;
      lVar4 = 0;
   }
 else {
      lVar12 = *(long*)( lVar4 + -8 );
      if (param_1 == lVar12) {
         return 0;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return 0;
         }

         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return 0;
      }

      _copy_on_write(this);
      lVar4 = lVar12 * 0x90;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x90 == 0) {
      LAB_00101cc0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = param_1 * 0x90 - 1;
   uVar5 = uVar5 >> 1 | uVar5;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar11 = uVar5 + 1;
   if (lVar11 == 0) goto LAB_00101cc0;
   if (param_1 <= lVar12) {
      if (( lVar11 != lVar4 ) && ( uVar9 = _realloc(this, lVar11) ),(int)uVar9 != 0) {
         return uVar9;
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

   if (lVar11 == lVar4) {
      LAB_00101c2c:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar10[-1];
      if (param_1 <= lVar4) goto LAB_00101bbf;
   }
 else {
      if (lVar12 != 0) {
         uVar9 = _realloc(this, lVar11);
         if ((int)uVar9 != 0) {
            return uVar9;
         }

         goto LAB_00101c2c;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar10 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar10;
      lVar4 = 0;
   }

   uVar3 = _LC20;
   pauVar7 = (undefined1(*) [16])( puVar10 + lVar4 * 0x12 );
   do {
      *(undefined8*)( (long)pauVar7[2] + 4 ) = 0;
      pauVar8 = pauVar7 + 9;
      *pauVar7 = ZEXT416(uVar3);
      pauVar7[1] = ZEXT416(uVar3);
      *(uint*)pauVar7[2] = uVar3;
      *(undefined4*)( (long)pauVar7[2] + 0xc ) = 0;
      pauVar7[3] = ZEXT416(uVar3);
      pauVar7[4] = ZEXT416(uVar3);
      *(uint*)pauVar7[5] = uVar3;
      *(undefined8*)( (long)pauVar7[5] + 4 ) = 0;
      *(undefined4*)( (long)pauVar7[5] + 0xc ) = 0;
      *(undefined8*)( (long)pauVar7[6] + 4 ) = 0;
      *(undefined4*)( (long)pauVar7[6] + 0xc ) = 0;
      *(undefined8*)pauVar7[7] = 0;
      *(undefined4*)( (long)pauVar7[7] + 8 ) = 0;
      *(undefined4*)( (long)pauVar7[7] + 0xc ) = 0;
      *(undefined8*)pauVar7[8] = 0;
      *(undefined1*)( (long)pauVar7[8] + 8 ) = 0;
      pauVar7 = pauVar8;
   }
 while ( pauVar8 != (undefined1(*) [16])( puVar10 + param_1 * 0x12 ) );
   LAB_00101bbf:puVar10[-1] = param_1;
   return 0;
}


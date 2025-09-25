/* MeshInstance3D::get_blend_shape_count() const */undefined8 MeshInstance3D::get_blend_shape_count(MeshInstance3D *this) {
   undefined8 uVar1;
   if (*(long**)( this + 0x620 ) != (long*)0x0) {
      /* WARNING: Could not recover jumptable at 0x00100013. Too many branches */
      /* WARNING: Treating indirect jump as call */
      uVar1 = ( **(code**)( **(long**)( this + 0x620 ) + 0x218 ) )();
      return uVar1;
   }

   return 0;
}
/* MeshInstance3D::get_aabb() const */void MeshInstance3D::get_aabb(void) {
   long lVar1;
   long in_RSI;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)( in_RSI + 0x620 ) == (long*)0x0) {
      *in_RDI = 0;
      *(undefined4*)( in_RDI + 1 ) = 0;
      *(undefined8*)( (long)in_RDI + 0xc ) = 0;
      *(undefined4*)( (long)in_RDI + 0x14 ) = 0;
   }
 else {
      ( **(code**)( **(long**)( in_RSI + 0x620 ) + 0x230 ) )();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::get_surface_override_material_count() const */undefined4 MeshInstance3D::get_surface_override_material_count(MeshInstance3D *this) {
   if (*(long*)( this + 0x690 ) != 0) {
      return *(undefined4*)( *(long*)( this + 0x690 ) + -8 );
   }

   return 0;
}
/* MeshInstance3D::find_blend_shape_by_name(StringName const&) */int MeshInstance3D::find_blend_shape_by_name(MeshInstance3D *this, StringName *param_1) {
   long lVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   long *plVar5;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   plVar5 = *(long**)( this + 0x620 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar5 != (long*)0x0) {
      iVar4 = 0;
      while (true) {
         iVar3 = ( **(code**)( *plVar5 + 0x218 ) )();
         if (iVar3 <= iVar4) break;
         ( **(code**)( **(long**)( this + 0x620 ) + 0x220 ) )(&local_48, *(long**)( this + 0x620 ), iVar4);
         lVar2 = local_48;
         lVar1 = *(long*)param_1;
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (lVar2 == lVar1) goto LAB_00100164;
         plVar5 = *(long**)( this + 0x620 );
         iVar4 = iVar4 + 1;
      }
;
   }

   iVar4 = -1;
   LAB_00100164:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::get_blend_shape_value(int) const */undefined4 MeshInstance3D::get_blend_shape_value(MeshInstance3D *this, int param_1) {
   uint uVar1;
   code *pcVar2;
   if (*(long*)( this + 0x620 ) == 0) {
      _err_print_error("get_blend_shape_value", "scene/3d/mesh_instance_3d.cpp", 0x9e, "Condition \"mesh.is_null()\" is true. Returning: 0.0", 0, 0);
   }
 else {
      uVar1 = *(uint*)( this + 0x648 );
      if (( -1 < param_1 ) && ( param_1 < (int)uVar1 )) {
         if ((uint)param_1 < uVar1) {
            return *(undefined4*)( *(long*)( this + 0x650 ) + (long)param_1 * 4 );
         }

         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (long)param_1, (ulong)uVar1, "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      _err_print_index_error("get_blend_shape_value", "scene/3d/mesh_instance_3d.cpp", 0x9f, (long)param_1, (long)(int)uVar1, "p_blend_shape", "(int)blend_shape_tracks.size()", "", false, false);
   }

   return 0;
}
/* MeshInstance3D::set_blend_shape_value(int, float) */void MeshInstance3D::set_blend_shape_value(MeshInstance3D *this, int param_1, float param_2) {
   uint uVar1;
   code *UNRECOVERED_JUMPTABLE;
   long *plVar2;
   undefined8 uVar3;
   if (*(long*)( this + 0x620 ) == 0) {
      _err_print_error("set_blend_shape_value", "scene/3d/mesh_instance_3d.cpp", 0xa4, "Condition \"mesh.is_null()\" is true.", 0, 0);
      return;
   }

   uVar1 = *(uint*)( this + 0x648 );
   if (( -1 < param_1 ) && ( param_1 < (int)uVar1 )) {
      if ((uint)param_1 < uVar1) {
         *(float*)( *(long*)( this + 0x650 ) + (long)param_1 * 4 ) = param_2;
         plVar2 = (long*)RenderingServer::get_singleton();
         UNRECOVERED_JUMPTABLE = *(code**)( *plVar2 + 0xd60 );
         uVar3 = VisualInstance3D::get_instance();
         /* WARNING: Could not recover jumptable at 0x00100314. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *UNRECOVERED_JUMPTABLE )(param_2, plVar2, uVar3, param_1);
         return;
      }

      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (long)param_1, (ulong)uVar1, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE = (code*)invalidInstructionException();
      ( *UNRECOVERED_JUMPTABLE )();
   }

   _err_print_index_error("set_blend_shape_value", "scene/3d/mesh_instance_3d.cpp", 0xa5, (long)param_1, (long)(int)uVar1, "p_blend_shape", "(int)blend_shape_tracks.size()", "", false, false);
   return;
}
/* MeshInstance3D::get_skeleton_path() */void MeshInstance3D::get_skeleton_path(void) {
   long in_RSI;
   NodePath *in_RDI;
   NodePath::NodePath(in_RDI, (NodePath*)( in_RSI + 0x640 ));
   return;
}
/* MeshInstance3D::generate_triangle_mesh() const */void MeshInstance3D::generate_triangle_mesh(void) {
   long lVar1;
   long in_RSI;
   undefined8 *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 0x620 ) == 0) {
      *in_RDI = 0;
   }
 else {
      Mesh::generate_triangle_mesh();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::get_skin_reference() const */void MeshInstance3D::get_skin_reference(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x638 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x638 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* MeshInstance3D::get_skin() const */void MeshInstance3D::get_skin(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x628 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x628 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* MeshInstance3D::get_mesh() const */void MeshInstance3D::get_mesh(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x620 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x620 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* Ref<ArrayMesh>::TEMPNAMEPLACEHOLDERVALUE(Ref<ArrayMesh> const&) [clone .isra.0] */void Ref<ArrayMesh>::operator =(Ref<ArrayMesh> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* MeshInstance3D::get_surface_override_material(int) const */long *MeshInstance3D::get_surface_override_material(int param_1) {
   long lVar1;
   char cVar2;
   long lVar3;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   long *plVar4;
   long lVar5;
   plVar4 = (long*)CONCAT44(in_register_0000003c, param_1);
   lVar3 = (long)in_EDX;
   lVar1 = *(long*)( in_RSI + 0x690 );
   if (in_EDX < 0) {
      if (lVar1 != 0) {
         lVar5 = *(long*)( lVar1 + -8 );
         goto LAB_001005f9;
      }

   }
 else if (lVar1 != 0) {
      lVar5 = *(long*)( lVar1 + -8 );
      if (lVar3 < lVar5) {
         *plVar4 = 0;
         lVar1 = *(long*)( lVar1 + lVar3 * 8 );
         if (lVar1 != 0) {
            *plVar4 = lVar1;
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *plVar4 = 0;
            }

         }

         return plVar4;
      }

      goto LAB_001005f9;
   }

   lVar5 = 0;
   LAB_001005f9:_err_print_index_error("get_surface_override_material", "scene/3d/mesh_instance_3d.cpp", 0x16d, lVar3, lVar5, "p_surface", "surface_override_materials.size()", "", false, false);
   *plVar4 = 0;
   return plVar4;
}
/* MeshInstance3D::navmesh_parse_source_geometry(Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*) */void MeshInstance3D::navmesh_parse_source_geometry(undefined8 param_1, undefined8 *param_2, long param_3) {
   Ref *pRVar1;
   Object *pOVar2;
   char cVar3;
   uint uVar4;
   long lVar5;
   long in_FS_OFFSET;
   Object *local_60[8];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0) {
      lVar5 = __dynamic_cast(param_3, &Object::typeinfo, &typeinfo, 0);
      if (lVar5 != 0) {
         uVar4 = NavigationMesh::get_parsed_geometry_type();
         if (( ( uVar4 & 0xfffffffd ) == 0 ) && ( *(Object**)( lVar5 + 0x620 ) != (Object*)0x0 )) {
            local_60[0] = *(Object**)( lVar5 + 0x620 );
            cVar3 = RefCounted::reference();
            if (( cVar3 != '\0' ) && ( local_60[0] != (Object*)0x0 )) {
               pRVar1 = (Ref*)*param_2;
               Node3D::get_global_transform();
               NavigationMeshSourceGeometryData3D::add_mesh(pRVar1, (Transform3D*)local_60);
               if (local_60[0] != (Object*)0x0) {
                  cVar3 = RefCounted::unreference();
                  pOVar2 = local_60[0];
                  if (cVar3 != '\0') {
                     cVar3 = predelete_handler(local_60[0]);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

            }

         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Color>::_copy_on_write() [clone .isra.0] */void CowData<Color>::_copy_on_write(CowData<Color> *this) {
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
   __n = lVar2 * 0x10;
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
/* MeshInstance3D::create_trimesh_collision_node() */Object * __thiscall MeshInstance3D::create_trimesh_collision_node(MeshInstance3D *this){
   long lVar1;
   char cVar2;
   Object *pOVar3;
   CollisionShape3D *this_00;
   Object *pOVar4;
   long in_FS_OFFSET;
   Object *local_30;
   Object *local_28;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar3 = *(Object**)( this + 0x620 );
   if (*(Object**)( this + 0x620 ) != (Object*)0x0) {
      Mesh::create_trimesh_shape();
      pOVar3 = local_30;
      if (local_30 != (Object*)0x0) {
         pOVar3 = (Object*)operator_new(0x648, "");
         StaticBody3D::StaticBody3D((StaticBody3D*)pOVar3, 0);
         postinitialize_handler(pOVar3);
         this_00 = (CollisionShape3D*)operator_new(0x558, "");
         CollisionShape3D::CollisionShape3D(this_00);
         postinitialize_handler((Object*)this_00);
         local_28 = (Object*)0x0;
         if (local_30 != (Object*)0x0) {
            pOVar4 = (Object*)__dynamic_cast(local_30, &Object::typeinfo, &Shape3D::typeinfo, 0);
            if (pOVar4 != (Object*)0x0) {
               cVar2 = RefCounted::reference();
               local_28 = pOVar4;
               if (cVar2 == '\0') {
                  local_28 = (Object*)0x0;
               }

            }

         }

         CollisionShape3D::set_shape((Ref*)this_00);
         if (local_28 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(local_28);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
                  Memory::free_static(local_28, false);
               }

            }

         }

         Node::add_child(pOVar3, this_00, 1, 0);
         if (local_30 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(local_30);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
                  Memory::free_static(local_30, false);
               }

            }

         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pOVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::create_convex_collision_node(bool, bool) */Object *MeshInstance3D::create_convex_collision_node(bool param_1, bool param_2) {
   long lVar1;
   char cVar2;
   Object *pOVar3;
   CollisionShape3D *this;
   Object *pOVar4;
   undefined7 in_register_00000039;
   long in_FS_OFFSET;
   Object *local_30;
   Object *local_28;
   pOVar3 = *(Object**)( CONCAT71(in_register_00000039, param_1) + 0x620 );
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pOVar3 != (Object*)0x0) {
      Mesh::create_convex_shape(true, SUB81(pOVar3, 0));
      pOVar3 = local_30;
      if (local_30 != (Object*)0x0) {
         pOVar3 = (Object*)operator_new(0x648, "");
         StaticBody3D::StaticBody3D((StaticBody3D*)pOVar3, 0);
         postinitialize_handler(pOVar3);
         this(CollisionShape3D * operator_new(0x558, ""));
         CollisionShape3D::CollisionShape3D(this);
         postinitialize_handler((Object*)this);
         local_28 = (Object*)0x0;
         if (local_30 != (Object*)0x0) {
            pOVar4 = (Object*)__dynamic_cast(local_30, &Object::typeinfo, &Shape3D::typeinfo, 0);
            if (pOVar4 != (Object*)0x0) {
               cVar2 = RefCounted::reference();
               local_28 = pOVar4;
               if (cVar2 == '\0') {
                  local_28 = (Object*)0x0;
               }

            }

         }

         CollisionShape3D::set_shape((Ref*)this);
         if (local_28 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(local_28);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
                  Memory::free_static(local_28, false);
               }

            }

         }

         Node::add_child(pOVar3, this, 1, 0);
         if (local_30 != (Object*)0x0) {
            cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(local_30);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
                  Memory::free_static(local_30, false);
               }

            }

         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pOVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0010108a) *//* WARNING: Removing unreachable block (ram,0x0010118b) *//* WARNING: Removing unreachable block (ram,0x0010119b) *//* WARNING: Removing unreachable block (ram,0x001010fe) *//* WARNING: Removing unreachable block (ram,0x00101117) *//* WARNING: Removing unreachable block (ram,0x00101127) *//* WARNING: Removing unreachable block (ram,0x00101147) *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* MeshInstance3D::create_multiple_convex_collisions_node(Ref<MeshConvexDecompositionSettings>
   const&) */Object * __thiscall
MeshInstance3D::create_multiple_convex_collisions_node(MeshInstance3D *this,Ref *param_1){
   Object *pOVar1;
   code *pcVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   Object *pOVar7;
   Ref *this_00;
   RefCounted *this_01;
   Object *pOVar8;
   long lVar9;
   long lVar10;
   RefCounted *pRVar11;
   long in_FS_OFFSET;
   byte bVar12;
   RefCounted *local_60;
   Ref local_58[8];
   Object *local_50;
   long local_40;
   bVar12 = 0;
   pOVar7 = *(Object**)( this + 0x620 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pOVar7 != (Object*)0x0) {
      local_60 = (RefCounted*)0x0;
      pOVar7 = *(Object**)param_1;
      if (pOVar7 == (Object*)0x0) {
         this_01 = (RefCounted*)operator_new(0x1b0, "");
         pRVar11 = this_01;
         for (lVar10 = 0x36; lVar10 != 0; lVar10 = lVar10 + -1) {
            *(undefined8*)pRVar11 = 0;
            pRVar11 = pRVar11 + (ulong)bVar12 * -0x10 + 8;
         }

         RefCounted::RefCounted(this_01);
         uVar4 = _UNK_00120de8;
         uVar3 = __LC49;
         *(undefined***)this_01 = &PTR__initialize_classv_0011feb0;
         *(undefined8*)( this_01 + 0x180 ) = uVar3;
         *(undefined8*)( this_01 + 0x188 ) = uVar4;
         uVar4 = _UNK_00120df8;
         uVar3 = __LC34;
         *(undefined4*)( this_01 + 0x17c ) = 0;
         *(undefined2*)( this_01 + 0x1a0 ) = 0x100;
         *(undefined4*)( this_01 + 0x1a4 ) = 1;
         this_01[0x1a8] = (RefCounted)0x1;
         *(undefined8*)( this_01 + 400 ) = uVar3;
         *(undefined8*)( this_01 + 0x198 ) = uVar4;
         postinitialize_handler((Object*)this_01);
         cVar6 = RefCounted::init_ref();
         if (cVar6 != '\0') {
            pOVar7 = (Object*)0x0;
            if (( this_01 != (RefCounted*)0x0 ) && ( cVar6 = RefCounted::reference() ),pOVar7 = (Object*)this_01,local_60 = this_01,cVar6 == '\0') {
               local_60 = (RefCounted*)0x0;
            }

            cVar6 = RefCounted::unreference();
            if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
               ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
               Memory::free_static(pOVar7, false);
            }

         }

      }
 else {
         cVar6 = RefCounted::reference();
         local_60 = (RefCounted*)pOVar7;
         if (cVar6 == '\0') {
            local_60 = (RefCounted*)0x0;
         }

      }

      Mesh::convex_decompose(local_58);
      pOVar7 = local_50;
      if (local_50 != (Object*)0x0) {
         pOVar7 = (Object*)0x0;
         if (*(long*)( local_50 + -8 ) == 0) {
            LAB_00100e01:pOVar5 = local_50;
            LOCK();
            pOVar8 = local_50 + -0x10;
            *(long*)pOVar8 = *(long*)pOVar8 + -1;
            UNLOCK();
            if (*(long*)pOVar8 == 0) {
               if (local_50 == (Object*)0x0) {
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               lVar10 = *(long*)( local_50 + -8 );
               lVar9 = 0;
               local_50 = (Object*)0x0;
               pOVar8 = pOVar5;
               if (lVar10 != 0) {
                  LAB_00100e45:do {
                     if (( *(long*)pOVar8 != 0 ) && ( cVar6 = cVar6 != '\0' )) {
                        pOVar1 = *(Object**)pOVar8;
                        cVar6 = predelete_handler(pOVar1);
                        if (cVar6 != '\0') {
                           lVar9 = lVar9 + 1;
                           pOVar8 = pOVar8 + 8;
                           ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                           Memory::free_static(pOVar1, false);
                           if (lVar10 == lVar9) break;
                           goto LAB_00100e45;
                        }

                     }

                     lVar9 = lVar9 + 1;
                     pOVar8 = pOVar8 + 8;
                  }
 while ( lVar10 != lVar9 );
               }

               Memory::free_static(pOVar5 + -0x10, false);
            }

         }
 else {
            pOVar7 = (Object*)operator_new(0x648, "");
            StaticBody3D::StaticBody3D((StaticBody3D*)pOVar7);
            postinitialize_handler(pOVar7);
            if (local_50 != (Object*)0x0) {
               lVar10 = 0;
               do {
                  if (*(long*)( local_50 + -8 ) <= lVar10) {
                     if (local_50 != (Object*)0x0) goto LAB_00100e01;
                     break;
                  }

                  this_00 = (Ref*)operator_new(0x558, "");
                  CollisionShape3D::CollisionShape3D((CollisionShape3D*)this_00);
                  postinitialize_handler((Object*)this_00);
                  if (local_50 == (Object*)0x0) {
                     lVar9 = 0;
                     LAB_00100f90:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar9, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar9 = *(long*)( local_50 + -8 );
                  if (lVar9 <= lVar10) goto LAB_00100f90;
                  lVar10 = lVar10 + 1;
                  CollisionShape3D::set_shape(this_00);
                  Node::add_child(pOVar7, this_00, 1, 0);
               }
 while ( local_50 != (Object*)0x0 );
            }

         }

      }

      if (( ( local_60 != (RefCounted*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
      Memory::free_static(local_60, false);
   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pOVar7;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MeshInstance3D::_property_can_revert(StringName const&) const */undefined8 MeshInstance3D::_property_can_revert(MeshInstance3D *this, StringName *param_1) {
   uint uVar1;
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
   uint uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   if (*(long*)( this + 0x660 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x684 ) == 0) {
      return 0;
   }

   uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x680 ) * 4 );
   uVar17 = CONCAT44(0, uVar1);
   lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x680 ) * 8 );
   if (*(long*)param_1 == 0) {
      uVar12 = StringName::get_empty_hash();
   }
 else {
      uVar12 = *(uint*)( *(long*)param_1 + 0x20 );
   }

   if (uVar12 == 0) {
      uVar12 = 1;
   }

   auVar4._8_8_ = 0;
   auVar4._0_8_ = (ulong)uVar12 * lVar2;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar17;
   lVar14 = SUB168(auVar4 * auVar8, 8);
   uVar15 = *(uint*)( *(long*)( this + 0x668 ) + lVar14 * 4 );
   uVar13 = SUB164(auVar4 * auVar8, 8);
   if (uVar15 != 0) {
      uVar16 = 0;
      do {
         if (( uVar12 == uVar15 ) && ( lVar3 = *(long*)( this + 0x660 ) * (long*)( *(long*)( lVar3 + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
            return CONCAT71(( int7 )((ulong)lVar3 >> 8), *(long*)( lVar3 + (ulong)uVar13 * 8 ) != 0);
         }

         uVar16 = uVar16 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar17;
         lVar14 = SUB168(auVar5 * auVar9, 8);
         uVar15 = *(uint*)( *(long*)( this + 0x668 ) + lVar14 * 4 );
         uVar13 = SUB164(auVar5 * auVar9, 8);
      }
 while ( ( uVar15 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar15 * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar6 * auVar10, 8)) * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar17,uVar16 <= SUB164(auVar7 * auVar11, 8) );
   }

   return 0;
}
/* MeshInstance3D::_property_get_revert(StringName const&, Variant&) const */undefined8 MeshInstance3D::_property_get_revert(MeshInstance3D *this, StringName *param_1, Variant *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   undefined8 uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x660 ) != 0 ) && ( *(int*)( this + 0x684 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x680 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x680 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x668 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         while (( uVar15 != uVar11 || ( *(long*)( *(long*)( *(long*)( this + 0x660 ) + lVar14 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x668 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
            if (( uVar15 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,SUB164(auVar6 * auVar10, 8) < uVar16) goto LAB_00101450;
         }
;
         if (*(long*)( *(long*)( this + 0x660 ) + (ulong)uVar13 * 8 ) != 0) {
            Variant::Variant((Variant*)local_58, 0.0);
            if (Variant::needs_deinit[*(int*)param_2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)param_2 = local_58[0];
            uVar12 = 1;
            *(undefined8*)( param_2 + 8 ) = local_50;
            *(undefined8*)( param_2 + 0x10 ) = uStack_48;
            goto LAB_00101452;
         }

      }

   }

   LAB_00101450:uVar12 = 0;
   LAB_00101452:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar12;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::navmesh_parse_init() */void MeshInstance3D::navmesh_parse_init(void) {
   long lVar1;
   CallableCustom *this;
   long *plVar2;
   long in_FS_OFFSET;
   Callable aCStack_38[24];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = NavigationServer3D::get_singleton();
   if (lVar1 == 0) {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("navmesh_parse_init", "scene/3d/mesh_instance_3d.cpp", 0x355, "Parameter \"NavigationServer3D::get_singleton()\" is null.", 0, 0);
         return;
      }

   }
 else if (_navmesh_source_geometry_parser == 0) {
      this(CallableCustom * operator_new(0x30, ""));
      CallableCustom::CallableCustom(this);
      *(undefined**)( this + 0x20 ) = &_LC5;
      *(undefined8*)( this + 0x10 ) = 0;
      *(undefined***)this = &PTR_hash_00120470;
      *(code**)( this + 0x28 ) = navmesh_parse_source_geometry;
      CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
      *(char**)( this + 0x20 ) = "MeshInstance3D::navmesh_parse_source_geometry";
      Callable::Callable(aCStack_38, this);
      Callable::operator =((Callable*)_navmesh_source_geometry_parsing_callback, aCStack_38);
      Callable::~Callable(aCStack_38);
      plVar2 = (long*)NavigationServer3D::get_singleton();
      _navmesh_source_geometry_parser = ( **(code**)( *plVar2 + 0x5f0 ) )(plVar2);
      plVar2 = (long*)NavigationServer3D::get_singleton();
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Could not recover jumptable at 0x001015be. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( **(code**)( *plVar2 + 0x5f8 ) )(plVar2, _navmesh_source_geometry_parser, _navmesh_source_geometry_parsing_callback);
         return;
      }

   }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::MeshInstance3D() */void MeshInstance3D::MeshInstance3D(MeshInstance3D *this) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   GeometryInstance3D::GeometryInstance3D((GeometryInstance3D*)this);
   *(undefined***)this = &PTR__initialize_classv_001201e8;
   *(undefined1(*) [16])( this + 0x620 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x630 ) = (undefined1[16])0x0;
   local_38 = &_LC42;
   local_40 = 0;
   local_30 = 2;
   String::parse_latin1((StrRange*)&local_40);
   NodePath::NodePath((NodePath*)( this + 0x640 ), (String*)&local_40);
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

   *(undefined8*)( this + 0x648 ) = 0;
   *(undefined8*)( this + 0x650 ) = 0;
   *(undefined8*)( this + 0x680 ) = 2;
   *(undefined8*)( this + 0x690 ) = 0;
   this[0x698] = (MeshInstance3D)0x0;
   *(undefined1(*) [16])( this + 0x660 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x670 ) = (undefined1[16])0x0;
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void MeshInstance3D::_get_property_list(MeshInstance3D *this, List *param_1) {
   char *__s;
   long lVar1;
   size_t sVar2;
   int iVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   long lVar6;
   uint uVar7;
   long *plVar8;
   int iVar9;
   long in_FS_OFFSET;
   bool bVar10;
   CowData *local_e8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   size_t local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x648 ) != 0) {
      uVar7 = 0;
      do {
         local_88 = 0;
         local_78 = "-1,1,0.00001";
         local_90 = 0;
         local_70 = 0xc;
         String::parse_latin1((StrRange*)&local_90);
         ( **(code**)( **(long**)( this + 0x620 ) + 0x220 ) )(&local_b0, *(long**)( this + 0x620 ), uVar7);
         if (local_b0 == 0) {
            local_a8 = 0;
         }
 else {
            __s = *(char**)( local_b0 + 8 );
            local_a8 = 0;
            if (__s == (char*)0x0) {
               plVar8 = (long*)( *(long*)( local_b0 + 0x10 ) + -0x10 );
               if (*(long*)( local_b0 + 0x10 ) != 0) {
                  do {
                     lVar1 = *plVar8;
                     if (lVar1 == 0) goto LAB_00101ad9;
                     LOCK();
                     lVar6 = *plVar8;
                     bVar10 = lVar1 == lVar6;
                     if (bVar10) {
                        *plVar8 = lVar1 + 1;
                        lVar6 = lVar1;
                     }

                     UNLOCK();
                  }
 while ( !bVar10 );
                  if (lVar6 != -1) {
                     local_a8 = *(long*)( local_b0 + 0x10 );
                  }

               }

            }
 else {
               local_70 = strlen(__s);
               local_78 = __s;
               String::parse_latin1((StrRange*)&local_a8);
            }

         }

         LAB_00101ad9:local_a0 = 0;
         local_78 = "blend_shapes/%s";
         local_70 = 0xf;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<String>((CowData*)&local_98, (StrRange*)&local_a0, (StrRange*)&local_a8);
         local_78 = (char*)CONCAT44(local_78._4_4_, 3);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 1;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00101b7c:local_50 = 6;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            lVar1 = *(long*)param_1;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_00101b7c;
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

            lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar5;
            *(undefined4*)pauVar5[1] = 0;
            *pauVar5 = (undefined1[16])0x0;
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
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
         }

         StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
         puVar4[6] = local_60;
         if (*(long*)( puVar4 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
         }

         lVar6 = local_58;
         puVar4[10] = local_50;
         plVar8 = *(long**)param_1;
         lVar1 = plVar8[1];
         *(undefined8*)( puVar4 + 0xc ) = 0;
         *(long**)( puVar4 + 0x10 ) = plVar8;
         *(long*)( puVar4 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar4;
         }

         plVar8[1] = (long)puVar4;
         if (*plVar8 == 0) {
            *plVar8 = (long)puVar4;
         }

         *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
         if (local_58 != 0) {
            LOCK();
            plVar8 = (long*)( local_58 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         sVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar8 = (long*)( local_70 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( sVar2 + -0x10 ), false);
            }

         }

         if (local_98 != 0) {
            LOCK();
            plVar8 = (long*)( local_98 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               Memory::free_static((void*)( local_98 + -0x10 ), false);
            }

         }

         lVar1 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar8 = (long*)( local_a0 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         lVar1 = local_a8;
         if (local_a8 != 0) {
            LOCK();
            plVar8 = (long*)( local_a8 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_a8 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
            StringName::unref();
         }

         lVar1 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar8 = (long*)( local_90 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         uVar7 = uVar7 + 1;
      }
 while ( uVar7 < *(uint*)( this + 0x648 ) );
   }

   plVar8 = *(long**)( this + 0x620 );
   iVar9 = 0;
   if (plVar8 != (long*)0x0) {
      for (; iVar3 = ( **(code**)( *plVar8 + 0x1c8 ) )(),iVar9 < iVar3; iVar9 = iVar9 + 1) {
         local_88 = 0;
         local_78 = "BaseMaterial3D,ShaderMaterial";
         local_90 = 0;
         local_70 = 0x1d;
         String::parse_latin1((StrRange*)&local_90);
         local_78 = "%s/%d";
         local_a0 = 0;
         local_70 = 5;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<char_const*,int>((String*)&local_98, (char*)&local_a0, 0x10aa82);
         local_78 = (char*)CONCAT44(local_78._4_4_, 0x18);
         local_70 = 0;
         if (local_98 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
         }

         local_68 = 0;
         local_60 = 0x11;
         local_58 = 0;
         if (local_90 == 0) {
            LAB_00101f42:local_e8 = (CowData*)&local_58;
            local_50 = 6;
            StringName::StringName((StringName*)&local_80, (String*)local_e8, false);
            if (local_68 == local_80) {
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

               goto LAB_00101c85;
            }

            StringName::unref();
            lVar1 = *(long*)param_1;
            local_68 = local_80;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
            local_50 = 6;
            if (local_60 == 0x11) goto LAB_00101f42;
            StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
            LAB_00101c85:lVar1 = *(long*)param_1;
         }

         if (lVar1 == 0) {
            pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])param_1 = pauVar5;
            *(undefined4*)pauVar5[1] = 0;
            *pauVar5 = (undefined1[16])0x0;
         }

         local_e8 = (CowData*)&local_58;
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

         StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
         puVar4[6] = local_60;
         if (*(long*)( puVar4 + 8 ) != local_58) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), local_e8);
         }

         lVar6 = local_58;
         puVar4[10] = local_50;
         plVar8 = *(long**)param_1;
         lVar1 = plVar8[1];
         *(undefined8*)( puVar4 + 0xc ) = 0;
         *(long**)( puVar4 + 0x10 ) = plVar8;
         *(long*)( puVar4 + 0xe ) = lVar1;
         if (lVar1 != 0) {
            *(undefined4**)( lVar1 + 0x30 ) = puVar4;
         }

         plVar8[1] = (long)puVar4;
         if (*plVar8 == 0) {
            *plVar8 = (long)puVar4;
         }

         *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
         if (local_58 != 0) {
            LOCK();
            plVar8 = (long*)( local_58 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         sVar2 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar8 = (long*)( local_70 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( sVar2 + -0x10 ), false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         lVar1 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar8 = (long*)( local_a0 + -0x10 );
            *plVar8 = *plVar8 + -1;
            UNLOCK();
            if (*plVar8 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         plVar8 = *(long**)( this + 0x620 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::_get(StringName const&, Variant&) const */undefined8 MeshInstance3D::_get(MeshInstance3D *this, StringName *param_1, Variant *param_2) {
   uint uVar1;
   long lVar2;
   char *__s;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   char cVar11;
   int iVar12;
   uint uVar13;
   long lVar14;
   undefined8 uVar15;
   uint uVar16;
   uint uVar17;
   uint uVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   float fVar20;
   undefined8 local_70;
   char *local_68;
   size_t local_60;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar14 = VisualInstance3D::get_instance();
   if (lVar14 != 0) {
      lVar14 = *(long*)param_1;
      if (( *(long*)( this + 0x660 ) != 0 ) && ( *(int*)( this + 0x684 ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x680 ) * 4 );
         uVar19 = CONCAT44(0, uVar1);
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x680 ) * 8 );
         if (lVar14 == 0) {
            uVar13 = StringName::get_empty_hash();
         }
 else {
            uVar13 = *(uint*)( lVar14 + 0x20 );
         }

         if (uVar13 == 0) {
            uVar13 = 1;
         }

         uVar18 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar13 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar19;
         lVar14 = SUB168(auVar3 * auVar7, 8);
         uVar17 = *(uint*)( *(long*)( this + 0x668 ) + lVar14 * 4 );
         uVar16 = SUB164(auVar3 * auVar7, 8);
         if (uVar17 != 0) {
            do {
               if (uVar17 == uVar13) {
                  lVar14 = *(long*)( *(long*)( *(long*)( this + 0x660 ) + lVar14 * 8 ) + 0x10 );
                  if (lVar14 == *(long*)param_1) {
                     lVar2 = *(long*)( *(long*)( this + 0x660 ) + (ulong)uVar16 * 8 );
                     if (lVar2 == 0) goto LAB_001021eb;
                     fVar20 = (float)get_blend_shape_value(this, *(int*)( lVar2 + 0x18 ));
                     Variant::Variant((Variant*)local_58, fVar20);
                     if (Variant::needs_deinit[*(int*)param_2] != '\0') {
                        Variant::_clear_internal();
                     }

                     *(int*)param_2 = local_58[0];
                     *(undefined8*)( param_2 + 8 ) = local_50;
                     *(undefined8*)( param_2 + 0x10 ) = uStack_48;
                     goto LAB_001021da;
                  }

               }

               uVar18 = uVar18 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar16 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar19;
               lVar14 = SUB168(auVar4 * auVar8, 8);
               uVar17 = *(uint*)( *(long*)( this + 0x668 ) + lVar14 * 4 );
               uVar16 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar17 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar17 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar19,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar16 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,uVar18 <= SUB164(auVar6 * auVar10, 8) );
         }

         lVar14 = *(long*)param_1;
      }

      LAB_001021eb:if (lVar14 == 0) {
         local_70 = 0;
      }
 else {
         __s = *(char**)( lVar14 + 8 );
         local_70 = 0;
         if (__s == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar14 + 0x10 ));
         }
 else {
            local_60 = strlen(__s);
            local_68 = __s;
            String::parse_latin1((StrRange*)&local_70);
         }

      }

      cVar11 = String::begins_with((char*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (cVar11 != '\0') {
         lVar14 = *(long*)param_1;
         if (lVar14 == 0) {
            local_70 = 0;
         }
 else {
            local_70 = 0;
            if (*(char**)( lVar14 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar14 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_70, *(char**)( lVar14 + 8 ));
            }

         }

         String::get_slicec((wchar32)(CowData<char32_t>*)&local_68, (int)(CowData<char32_t>*)&local_70);
         iVar12 = String::to_int();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         lVar14 = *(long*)( this + 0x690 );
         if (( ( lVar14 != 0 ) && ( (long)iVar12 < *(long*)( lVar14 + -8 ) ) ) && ( -1 < iVar12 )) {
            Variant::Variant((Variant*)local_58, *(Object**)( lVar14 + (long)iVar12 * 8 ));
            Variant::operator =(param_2, (Variant*)local_58);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            LAB_001021da:uVar15 = 1;
            goto LAB_00102087;
         }

      }

   }

   uVar15 = 0;
   LAB_00102087:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar15;
}
/* MeshInstance3D::create_trimesh_collision() */void MeshInstance3D::create_trimesh_collision(MeshInstance3D *this) {
   char *__s;
   long lVar1;
   String *pSVar2;
   Node *pNVar3;
   long in_FS_OFFSET;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = create_trimesh_collision_node(this);
   if (lVar1 != 0) {
      pSVar2 = (String*)__dynamic_cast(lVar1, &Object::typeinfo, &StaticBody3D::typeinfo, 0);
      if (pSVar2 != (String*)0x0) {
         local_60 = 0;
         local_58 = "_col";
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_60);
         Node::get_name();
         if (local_70 == 0) {
            local_68 = 0;
         }
 else {
            __s = *(char**)( local_70 + 8 );
            local_68 = 0;
            if (__s == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( local_70 + 0x10 ));
            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_68);
            }

         }

         String::operator +((String*)&local_58, (String*)&local_68);
         Node::set_name(pSVar2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         Node::add_child(this, pSVar2, 1, 0);
         lVar1 = Node::get_owner();
         if (lVar1 == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else {
            pNVar3 = (Node*)Node::get_child((int)pSVar2, false);
            if (pNVar3 != (Node*)0x0) {
               pNVar3 = (Node*)__dynamic_cast(pNVar3, &Object::typeinfo, &CollisionShape3D::typeinfo, 0);
            }

            Node::get_owner();
            Node::set_owner((Node*)pSVar2);
            Node::get_owner();
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Node::set_owner(pNVar3);
               return;
            }

         }

         goto LAB_00102603;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("create_trimesh_collision", "scene/3d/mesh_instance_3d.cpp", 0xfc, "Parameter \"static_body\" is null.", 0, 0);
      return;
   }

   LAB_00102603:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MeshInstance3D::create_convex_collision(bool, bool) */void MeshInstance3D::create_convex_collision(bool param_1, bool param_2) {
   char *__s;
   long lVar1;
   String *pSVar2;
   Node *pNVar3;
   undefined7 in_register_00000039;
   long in_FS_OFFSET;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = create_convex_collision_node(param_1, param_2);
   if (lVar1 != 0) {
      pSVar2 = (String*)__dynamic_cast(lVar1, &Object::typeinfo, &StaticBody3D::typeinfo, 0);
      if (pSVar2 != (String*)0x0) {
         local_60 = 0;
         local_58 = "_col";
         local_50 = 4;
         String::parse_latin1((StrRange*)&local_60);
         Node::get_name();
         if (local_70 == 0) {
            local_68 = 0;
         }
 else {
            __s = *(char**)( local_70 + 8 );
            local_68 = 0;
            if (__s == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( local_70 + 0x10 ));
            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_68);
            }

         }

         String::operator +((String*)&local_58, (String*)&local_68);
         Node::set_name(pSVar2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         Node::add_child(CONCAT71(in_register_00000039, param_1), pSVar2, 1, 0);
         lVar1 = Node::get_owner();
         if (lVar1 == 0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else {
            pNVar3 = (Node*)Node::get_child((int)pSVar2, false);
            if (pNVar3 != (Node*)0x0) {
               pNVar3 = (Node*)__dynamic_cast(pNVar3, &Object::typeinfo, &CollisionShape3D::typeinfo, 0);
            }

            Node::get_owner();
            Node::set_owner((Node*)pSVar2);
            Node::get_owner();
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Node::set_owner(pNVar3);
               return;
            }

         }

         goto LAB_00102883;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("create_convex_collision", "scene/3d/mesh_instance_3d.cpp", 0x11a, "Parameter \"static_body\" is null.", 0, 0);
      return;
   }

   LAB_00102883:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MeshInstance3D::create_multiple_convex_collisions(Ref<MeshConvexDecompositionSettings> const&) */void MeshInstance3D::create_multiple_convex_collisions(MeshInstance3D *this, Ref *param_1) {
   long *plVar1;
   char *__s;
   int iVar2;
   long lVar3;
   String *pSVar4;
   Node *pNVar5;
   long lVar6;
   int iVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = create_multiple_convex_collisions_node(this, param_1);
   if (( lVar3 == 0 ) || ( pSVar4 = (String*)__dynamic_cast(lVar3, &Object::typeinfo, &StaticBody3D::typeinfo, 0) ),pSVar4 == (String*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("create_multiple_convex_collisions", "scene/3d/mesh_instance_3d.cpp", 0x141, "Parameter \"static_body\" is null.", 0, 0);
         return;
      }

      goto LAB_00102b1b;
   }

   local_60 = 0;
   local_50 = 4;
   local_58 = "_col";
   String::parse_latin1((StrRange*)&local_60);
   Node::get_name();
   if (local_70 == 0) {
      LAB_00102a89:local_68 = 0;
   }
 else {
      __s = *(char**)( local_70 + 8 );
      local_68 = 0;
      if (__s == (char*)0x0) {
         plVar1 = (long*)( *(long*)( local_70 + 0x10 ) + -0x10 );
         if (*(long*)( local_70 + 0x10 ) == 0) goto LAB_00102a89;
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00102a89;
            LOCK();
            lVar6 = *plVar1;
            bVar8 = lVar3 == lVar6;
            if (bVar8) {
               *plVar1 = lVar3 + 1;
               lVar6 = lVar3;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar6 != -1) {
            local_68 = *(undefined8*)( local_70 + 0x10 );
         }

      }
 else {
         local_50 = strlen(__s);
         local_58 = __s;
         String::parse_latin1((StrRange*)&local_68);
      }

   }

   String::operator +((String*)&local_58, (String*)&local_68);
   Node::set_name(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   Node::add_child(this, pSVar4, 1, 0);
   lVar3 = Node::get_owner();
   if (lVar3 != 0) {
      Node::get_owner();
      Node::set_owner((Node*)pSVar4);
      iVar2 = Node::get_child_count(SUB81(pSVar4, 0));
      if (0 < iVar2) {
         iVar7 = 0;
         do {
            pNVar5 = (Node*)Node::get_child((int)pSVar4, SUB41(iVar7, 0));
            if (pNVar5 != (Node*)0x0) {
               pNVar5 = (Node*)__dynamic_cast(pNVar5, &Object::typeinfo, &CollisionShape3D::typeinfo, 0);
            }

            iVar7 = iVar7 + 1;
            Node::get_owner();
            Node::set_owner(pNVar5);
         }
 while ( iVar2 != iVar7 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102b1b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Resource::initialize_class() [clone .part.0] */void Resource::initialize_class(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
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
      if ((code*)PTR__bind_methods_00127008 != RefCounted::_bind_methods) {
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
   local_58 = "Resource";
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
   if ((code*)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
      Resource::_bind_methods();
   }

   initialize_class()::initialized =
   1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MeshInstance3D::get_active_material(int) const */undefined8 *MeshInstance3D::get_active_material(int param_1) {
   long *plVar1;
   char cVar2;
   undefined4 in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   Object *local_48;
   Object *local_40;
   long *local_38;
   long local_30;
   puVar3 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   GeometryInstance3D::get_material_override();
   if (local_48 == (Object*)0x0) {
      get_surface_override_material((int)&local_40);
      if (local_40 == (Object*)0x0) {
         plVar1 = *(long**)( in_RSI + 0x620 );
         if (( plVar1 == (long*)0x0 ) || ( local_38 = plVar1 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
            local_38 = (long*)0x0;
            *puVar3 = 0;
         }
 else {
            ( **(code**)( *plVar1 + 0x210 ) )(puVar3, plVar1, in_EDX);
         }

         Ref<Mesh>::unref((Ref<Mesh>*)&local_38);
      }
 else {
         *puVar3 = local_40;
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *puVar3 = 0;
         }

         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)local_40 + 0x140 ) )(local_40);
            Memory::free_static(local_40, false);
         }

      }

   }
 else {
      *puVar3 = local_48;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *puVar3 = 0;
      }

   }

   if (( ( local_48 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_48 + 0x140 ))(local_48);
   Memory::free_static(local_48, false);
}
if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return puVar3;}/* MeshInstance3D::_resolve_skeleton_path() */void MeshInstance3D::_resolve_skeleton_path(MeshInstance3D *this) {
   code *pcVar1;
   char cVar2;
   long *plVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   long lVar6;
   Object *pOVar7;
   Object *pOVar8;
   Object *pOVar9;
   long in_FS_OFFSET;
   bool bVar10;
   Ref<Skin> local_40[8];
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar2 = NodePath::is_empty();
   if (( ( cVar2 == '\0' ) && ( lVar6 = Node::get_node((NodePath*)this) ),lVar6 != 0 )) {
      if (*(long*)( this + 0x630 ) == 0) {
         Skeleton3D::create_skin_from_rest_transforms();
         Skeleton3D::register_skin((Ref*)&local_38);
         pOVar8 = local_38;
         if (local_38 != (Object*)0x0) {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               pOVar8 = (Object*)0x0;
            }

            if (( ( local_38 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar9 = local_38,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
            Memory::free_static(pOVar9, false);
         }

      }

      Ref<Skin>::unref(local_40);
      SkinReference::get_skin();
      pOVar9 = *(Object**)( this + 0x630 );
      if (local_38 != pOVar9) {
         *(Object**)( this + 0x630 ) = local_38;
         if (( local_38 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
            *(undefined8*)( this + 0x630 ) = 0;
         }

         if (( ( pOVar9 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
         Memory::free_static(pOVar9, false);
      }

   }

   Ref<Skin>::unref((Ref<Skin>*)&local_38);
   Object::notify_property_list_changed();
}
else{Skeleton3D::register_skin((Ref*)&local_38);pOVar8 = local_38;if (local_38 == (Object*)0x0) goto LAB_00102f3a;cVar2 = RefCounted::reference();if (cVar2 == '\0') {
   pOVar8 = (Object*)0x0;
}
if (( ( local_38 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_38 + 0x140 ))(local_38);Memory::free_static(local_38, false);}
    }pOVar9 = *(Object**)( this + 0x638 );pOVar7 = pOVar8;if (pOVar9 == pOVar8) goto LAB_00102f6e;*(Object**)( this + 0x638 ) = pOVar8;if (pOVar8 != (Object*)0x0) {
   cVar2 = RefCounted::reference();
   if (cVar2 == '\0') {
      *(undefined8*)( this + 0x638 ) = 0;
      goto LAB_001030c3;
   }

   if (pOVar9 != (Object*)0x0) goto LAB_00102f57;
   goto LAB_00102f67;
}
LAB_001030c3:if (pOVar9 != (Object*)0x0) goto LAB_00102f57; else {
   LAB_00102f3a:pOVar9 = *(Object**)( this + 0x638 );
   if (pOVar9 == (Object*)0x0) {
      pOVar8 = (Object*)0x0;
   }
 else {
      *(undefined8*)( this + 0x638 ) = 0;
      pOVar8 = (Object*)0x0;
      LAB_00102f57:cVar2 = RefCounted::unreference();
      pOVar7 = pOVar8;
      if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
         ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
         Memory::free_static(pOVar9, false);
      }

      LAB_00102f67:pOVar8 = *(Object**)( this + 0x638 );
      LAB_00102f6e:bVar10 = pOVar8 != (Object*)0x0;
      pOVar8 = pOVar7;
      if (bVar10) {
         plVar3 = (long*)RenderingServer::get_singleton();
         pcVar1 = *(code**)( *plVar3 + 0xd80 );
         uVar4 = SkinReference::get_skeleton();
         uVar5 = VisualInstance3D::get_instance();
         ( *pcVar1 )(plVar3, uVar5, uVar4);
         goto LAB_00102fac;
      }

   }

}
plVar3 = (long*)RenderingServer::get_singleton();pcVar1 = *(code**)( *plVar3 + 0xd80 );uVar4 = VisualInstance3D::get_instance();( *pcVar1 )(plVar3, uVar4, 0);LAB_00102fac:if (( ( pOVar8 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) {
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

}
 else {
   ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Memory::free_static(pOVar8, false);
      return;
   }

}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MeshInstance3D::set_skeleton_path(NodePath const&) */void MeshInstance3D::set_skeleton_path(MeshInstance3D *this, NodePath *param_1) {
   NodePath::operator =((NodePath*)( this + 0x640 ), param_1);
   if (( (byte)this[0x2fa] & 0x40 ) == 0) {
      return;
   }

   _resolve_skeleton_path(this);
   return;
}
/* MeshInstance3D::_notification(int) */void MeshInstance3D::_notification(MeshInstance3D *this, int param_1) {
   if (param_1 == 10) {
      _resolve_skeleton_path(this);
      return;
   }

   if (param_1 != 0x7da) {
      return;
   }

   if (*(long*)( this + 0x620 ) != 0) {
      Object::notification((int)*(long*)( this + 0x620 ), true);
      return;
   }

   return;
}
/* MeshInstance3D::set_skin(Ref<Skin> const&) */void MeshInstance3D::set_skin(MeshInstance3D *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)param_1;
   pOVar3 = *(Object**)( this + 0x630 );
   if (pOVar1 != pOVar3) {
      *(Object**)( this + 0x630 ) = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x630 ) = 0;
         }

      }

      if (pOVar3 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar3);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      pOVar3 = *(Object**)param_1;
   }

   pOVar1 = *(Object**)( this + 0x628 );
   if (pOVar1 != pOVar3) {
      *(Object**)( this + 0x628 ) = pOVar3;
      if (pOVar3 != (Object*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x628 ) = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   if (( (byte)this[0x2fa] & 0x40 ) == 0) {
      return;
   }

   _resolve_skeleton_path(this);
   return;
}
/* MeshInstance3D::_bind_methods() */void MeshInstance3D::_bind_methods(void) {
   Variant *pVVar1;
   char cVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined *puVar6;
   undefined *puVar7;
   MethodBind *pMVar8;
   uint uVar9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   undefined8 local_188;
   undefined8 local_180;
   undefined8 local_178;
   long local_170;
   long local_168;
   long local_160;
   char *local_158;
   undefined8 local_150;
   char *local_148;
   undefined8 local_140;
   char *local_118;
   undefined8 local_110;
   char *local_108;
   char *pcStack_100;
   undefined8 local_f8;
   char *local_e8;
   char *pcStack_e0;
   undefined8 local_d8;
   Variant *local_c8;
   undefined1 auStack_c0[16];
   Variant *local_a8;
   char *pcStack_a0;
   undefined8 local_98;
   Variant **local_88;
   undefined1 auStack_80[16];
   undefined8 local_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   puVar7 = PTR__LC90_00120e40;
   puVar6 = PTR__LC86_00120e38;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_110 = 0;
   local_118 = "mesh";
   uVar9 = ( uint ) & local_c8;
   local_c8 = (Variant*)&local_118;
   D_METHODP((char*)&local_148, (char***)"set_mesh", uVar9);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<Mesh>const&>(set_mesh);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_mesh", 0);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<Mesh>>(get_mesh);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_110 = 0;
   local_118 = "skeleton_path";
   local_c8 = (Variant*)&local_118;
   D_METHODP((char*)&local_148, (char***)"set_skeleton_path", uVar9);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,NodePath_const&>(set_skeleton_path);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_skeleton_path", 0);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,NodePath>(get_skeleton_path);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_110 = 0;
   local_118 = "skin";
   local_c8 = (Variant*)&local_118;
   D_METHODP((char*)&local_148, (char***)"set_skin", uVar9);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<Skin>const&>(set_skin);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_skin", 0);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<Skin>>(get_skin);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_skin_reference", 0);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<SkinReference>>(get_skin_reference);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"get_surface_override_material_count", 0);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,int>(get_surface_override_material_count);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_f8 = 0;
   local_108 = puVar7;
   pcStack_100 = "material";
   auStack_c0._0_8_ = &pcStack_100;
   local_c8 = (Variant*)&local_108;
   D_METHODP((char*)&local_148, (char***)"set_surface_override_material", uVar9);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,int,Ref<Material>const&>(set_surface_override_material);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_100 = (char*)0x0;
   local_108 = "surface";
   local_c8 = (Variant*)&local_108;
   D_METHODP((char*)&local_148, (char***)"get_surface_override_material", uVar9);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<Material>,int>(get_surface_override_material);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_100 = (char*)0x0;
   local_108 = "surface";
   local_c8 = (Variant*)&local_108;
   D_METHODP((char*)&local_148, (char***)"get_active_material", uVar9);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<Material>,int>(get_active_material);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"create_trimesh_collision", 0);
   auStack_c0 = (undefined1[16])0x0;
   local_c8 = (Variant*)0x0;
   pMVar8 = create_method_bind<MeshInstance3D>(create_trimesh_collision);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_c8] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   StringName::StringName((StringName*)&local_148, "create_trimesh_collision", false);
   StringName::StringName((StringName*)&local_158, "MeshInstance3D", false);
   ClassDB::set_method_flags((StringName*)&local_158, (StringName*)&local_148, 1);
   if (StringName::configured != '\0') {
      if (local_158 != (char*)0x0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103be8;
      }

      if (local_148 != (char*)0x0) {
         StringName::unref();
      }

   }

   LAB_00103be8:local_d8 = 0;
   pVVar10 = (Variant*)local_40;
   local_e8 = "clean";
   pcStack_e0 = "simplify";
   local_c8 = (Variant*)&local_e8;
   auStack_c0._0_8_ = &pcStack_e0;
   D_METHODP((char*)&local_148, (char***)"create_convex_collision", uVar9);
   Variant::Variant((Variant*)&local_88, true);
   Variant::Variant((Variant*)&local_70, false);
   local_50 = (undefined1[16])0x0;
   auStack_c0._0_8_ = (Variant*)&local_70;
   local_58 = 0;
   local_c8 = (Variant*)&local_88;
   pMVar8 = create_method_bind<MeshInstance3D,bool,bool>(create_convex_collision);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, &local_c8, 2);
   do {
      pVVar1 = pVVar10 + -0x18;
      pVVar10 = pVVar10 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar10 != (Variant*)&local_88 );
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   StringName::StringName((StringName*)&local_148, "create_convex_collision", false);
   StringName::StringName((StringName*)&local_158, "MeshInstance3D", false);
   ClassDB::set_method_flags((StringName*)&local_158, (StringName*)&local_148, 1);
   if (StringName::configured != '\0') {
      if (local_158 != (char*)0x0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103d35;
      }

      if (local_148 != (char*)0x0) {
         StringName::unref();
      }

   }

   LAB_00103d35:local_c8 = (Variant*)0x10abbf;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = auStack_c0._8_8_;
   auStack_c0 = auVar5 << 0x40;
   uVar9 = (uint)(Variant*)&local_88;
   local_88 = &local_c8;
   D_METHODP((char*)&local_148, (char***)"create_multiple_convex_collisions", uVar9);
   Variant::Variant((Variant*)&local_88, (Object*)0x0);
   local_68 = (undefined1[16])0x0;
   local_70 = 0;
   local_c8 = (Variant*)&local_88;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<MeshConvexDecompositionSettings>const&>(create_multiple_convex_collisions);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, &local_c8, 1);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_88];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_88];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   StringName::StringName((StringName*)&local_148, "create_multiple_convex_collisions", false);
   StringName::StringName((StringName*)&local_158, "MeshInstance3D", false);
   ClassDB::set_method_flags((StringName*)&local_158, (StringName*)&local_148, 1);
   if (( StringName::configured != '\0' ) && ( ( ( local_158 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_148 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   D_METHODP((char*)&local_148, (char***)"get_blend_shape_count", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,int>(get_blend_shape_count);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   auVar3._8_8_ = 0;
   auVar3._0_8_ = auStack_c0._8_8_;
   auStack_c0 = auVar3 << 0x40;
   local_c8 = (Variant*)&_LC106;
   local_88 = &local_c8;
   D_METHODP((char*)&local_148, (char***)"find_blend_shape_by_name", uVar9);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,int,StringName_const&>(find_blend_shape_by_name);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   auVar4._8_8_ = 0;
   auVar4._0_8_ = auStack_c0._8_8_;
   auStack_c0 = auVar4 << 0x40;
   local_c8 = (Variant*)0x10aaed;
   local_88 = &local_c8;
   D_METHODP((char*)&local_148, (char***)"get_blend_shape_value", uVar9);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,float,int>(get_blend_shape_value);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   local_98 = 0;
   local_a8 = (Variant*)puVar6;
   pcStack_a0 = "value";
   auStack_80._0_8_ = &pcStack_a0;
   local_88 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"set_blend_shape_value", uVar9);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar8 = create_method_bind<MeshInstance3D,int,float>(set_blend_shape_value);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   D_METHODP((char*)&local_148, (char***)"create_debug_tangents", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar8 = create_method_bind<MeshInstance3D>(create_debug_tangents);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_a0 = (char*)0x0;
   local_a8 = (Variant*)0x10ac12;
   local_88 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"bake_mesh_from_current_blend_shape_mix", uVar9);
   Variant::Variant((Variant*)&local_88, (Object*)0x0);
   local_68 = (undefined1[16])0x0;
   local_70 = 0;
   local_a8 = (Variant*)&local_88;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<ArrayMesh>,Ref<ArrayMesh>>(bake_mesh_from_current_blend_shape_mix);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, &local_a8, 1);
   if (Variant::needs_deinit[(int)local_70] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_88];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_88];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   pcStack_a0 = (char*)0x0;
   local_a8 = (Variant*)0x10ac12;
   local_88 = &local_a8;
   D_METHODP((char*)&local_148, (char***)"bake_mesh_from_current_skeleton_pose", uVar9);
   Variant::Variant((Variant*)&local_88, (Object*)0x0);
   local_68 = (undefined1[16])0x0;
   local_70 = 0;
   local_a8 = (Variant*)&local_88;
   pMVar8 = create_method_bind<MeshInstance3D,Ref<ArrayMesh>,Ref<ArrayMesh>>(bake_mesh_from_current_skeleton_pose);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)&local_148, &local_a8, 1);
   if (Variant::needs_deinit[(int)local_70] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_148);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "Mesh";
   local_170 = 0;
   local_178 = 0;
   local_140 = 4;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   local_148 = "mesh";
   local_140 = 4;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 0x18, (StrRange*)&local_180, 0x11, (StrRange*)&local_178, 6, &local_170);
   local_158 = "MeshInstance3D";
   local_188 = 0;
   local_150 = 0xe;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, -1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_148 = "";
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_158);
   local_148 = "Skeleton";
   local_160 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_160);
   local_148 = "MeshInstance3D";
   local_168 = 0;
   local_140 = 0xe;
   String::parse_latin1((StrRange*)&local_168);
   StringName::StringName((StringName*)&local_148, (String*)&local_168, false);
   ClassDB::add_property_group((StringName*)&local_148, (String*)&local_160, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "Skin";
   local_170 = 0;
   local_178 = 0;
   local_140 = 4;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "skin";
   local_180 = 0;
   local_140 = 4;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 0x18, (StrRange*)&local_180, 0x11, (StrRange*)&local_178, 6, &local_170);
   local_158 = "MeshInstance3D";
   local_188 = 0;
   local_150 = 0xe;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, -1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   _scs_create((char*)&local_160, true);
   _scs_create((char*)&local_168, true);
   local_148 = "Skeleton3D";
   local_170 = 0;
   local_178 = 0;
   local_140 = 10;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = "skeleton";
   local_180 = 0;
   local_140 = 8;
   String::parse_latin1((StrRange*)&local_180);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_148, 0x16, (StrRange*)&local_180, 0x1a, (StrRange*)&local_178, 6, &local_170);
   local_158 = "MeshInstance3D";
   local_188 = 0;
   local_150 = 0xe;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_158, (String*)&local_188, false);
   ClassDB::add_property((StringName*)&local_158, (PropertyInfo*)&local_148, (StringName*)&local_168, (StringName*)&local_160, -1);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_188);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_148);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_180);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_170 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_168 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   local_158 = (char*)0x0;
   local_148 = "";
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_158);
   local_160 = 0;
   local_148 = "";
   local_140 = 0;
   String::parse_latin1((StrRange*)&local_160);
   local_148 = "MeshInstance3D";
   local_168 = 0;
   local_140 = 0xe;
   String::parse_latin1((StrRange*)&local_168);
   StringName::StringName((StringName*)&local_148, (String*)&local_168, false);
   ClassDB::add_property_group((StringName*)&local_148, (String*)&local_160, (String*)&local_158, 0);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] */void CowData<Vector3>::_copy_on_write(CowData<Vector3> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   size_t __n;
   ulong uVar4;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   __n = lVar1 * 0xc;
   if (__n != 0) {
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      memcpy(puVar3 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<Vector3>::push_back(Vector3) [clone .isra.0] */void Vector<Vector3>::push_back(undefined8 param_1, undefined4 param_2, long param_3) {
   undefined8 *puVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( param_3 + 8 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
   }

   iVar2 = CowData<Vector3>::resize<false>((CowData<Vector3>*)( param_3 + 8 ), lVar3);
   if (iVar2 == 0) {
      if (*(long*)( param_3 + 8 ) == 0) {
         lVar4 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         lVar4 = lVar3 + -1;
         if (-1 < lVar4) {
            CowData<Vector3>::_copy_on_write((CowData<Vector3>*)( param_3 + 8 ));
            puVar1 = (undefined8*)( *(long*)( param_3 + 8 ) + lVar4 * 0xc );
            *puVar1 = param_1;
            *(undefined4*)( puVar1 + 1 ) = param_2;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar4, lVar3, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* CowData<float>::_copy_on_write() [clone .isra.0] */void CowData<float>::_copy_on_write(CowData<float> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   ulong uVar4;
   size_t __n;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar4 = 0x10;
   __n = lVar1 * 4;
   if (__n != 0) {
      uVar4 = __n - 1 | __n - 1 >> 1;
      uVar4 = uVar4 | uVar4 >> 2;
      uVar4 = uVar4 | uVar4 >> 4;
      uVar4 = uVar4 | uVar4 >> 8;
      uVar4 = uVar4 | uVar4 >> 0x10;
      uVar4 = ( uVar4 | uVar4 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar4, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      memcpy(puVar3 + 2, *(void**)this, __n);
      _unref(this);
      *(undefined8**)this = puVar3 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* MeshInstance3D::bake_mesh_from_current_skeleton_pose(Ref<ArrayMesh>) */Ref<ArrayMesh> *MeshInstance3D::bake_mesh_from_current_skeleton_pose(Ref<ArrayMesh> *param_1, long param_2, long *param_3) {
   float *pfVar1;
   float fVar2;
   float fVar3;
   int iVar4;
   uint uVar5;
   Object *pOVar6;
   long lVar7;
   code *pcVar8;
   undefined4 uVar9;
   uint uVar10;
   long lVar11;
   char cVar12;
   uint uVar13;
   int iVar14;
   int iVar15;
   int iVar16;
   Ref *pRVar17;
   long lVar18;
   long *plVar19;
   undefined1(*pauVar20)[16];
   undefined1(*pauVar21)[16];
   ulong uVar22;
   Variant *this;
   long lVar23;
   Variant *pVVar24;
   char *pcVar25;
   uint uVar26;
   long lVar27;
   float *pfVar28;
   int iVar29;
   float *pfVar30;
   ulong uVar31;
   char *pcVar32;
   undefined8 uVar33;
   float *pfVar34;
   uint uVar35;
   long in_FS_OFFSET;
   bool bVar36;
   float fVar37;
   float fVar38;
   float fVar39;
   float fVar41;
   undefined1 auVar40[16];
   float fVar43;
   float fVar44;
   undefined1 auVar42[16];
   float fVar45;
   undefined8 uVar46;
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   float fVar49;
   float fVar50;
   float fVar51;
   Ref *local_2c0;
   float local_2a8;
   float fStack_2a4;
   float local_290;
   long local_288;
   long local_280;
   float local_260;
   float local_25c;
   undefined8 local_258;
   float local_250;
   float fStack_24c;
   long local_228;
   float *local_190;
   Ref *local_178;
   Ref *local_170;
   Array local_168[8];
   Array local_160[8];
   Array local_158[8];
   Dictionary local_150[8];
   Array local_148[8];
   long local_140;
   uint local_138;
   uint local_134;
   undefined1(*local_130)[16];
   Variant local_128[8];
   float *local_120;
   Variant local_118[8];
   float *local_110;
   Variant local_108[8];
   long local_100;
   Variant local_f8[8];
   long local_f0;
   Variant local_e8[8];
   long local_e0;
   Vector local_d8[8];
   float *local_d0;
   Vector local_c8[8];
   float *local_c0;
   Vector local_b8[8];
   long local_b0;
   int local_a8;
   float fStack_a4;
   undefined1 local_a0[16];
   float local_90;
   float local_8c;
   float local_88;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   long local_40;
   pOVar6 = *(Object**)( param_2 + 0x620 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pOVar6 == (Object*)0x0) {
      local_178 = (Ref*)0x0;
   }
 else {
      cVar12 = RefCounted::reference();
      local_178 = (Ref*)0x0;
      if (cVar12 != '\0') {
         pRVar17 = (Ref*)__dynamic_cast(pOVar6, &Object::typeinfo, &ArrayMesh::typeinfo, 0);
         if (( pRVar17 != (Ref*)0x0 ) && ( local_178 = pRVar17 ),cVar12 = RefCounted::reference(),cVar12 == '\0') {
            local_178 = (Ref*)0x0;
         }

         cVar12 = RefCounted::unreference();
         if (cVar12 == '\0') {
            local_2c0 = local_178;
         }
 else {
            cVar12 = predelete_handler(pOVar6);
            local_2c0 = local_178;
            if (cVar12 != '\0') {
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

         if (local_2c0 != (Ref*)0x0) {
            local_170 = (Ref*)0x0;
            pRVar17 = (Ref*)*param_3;
            if (pRVar17 == (Ref*)0x0) {
               Ref<ArrayMesh>::instantiate<>((Ref<ArrayMesh>*)&local_170);
               LAB_00104fb2:if (*(long*)( param_2 + 0x638 ) == 0) {
                  pcVar32 = "The source mesh must have a valid skin.";
                  uVar33 = 0x2b5;
                  pcVar25 = "Condition \"skin_ref.is_null()\" is true. Returning: Ref<ArrayMesh>()";
               }
 else if (*(long*)( param_2 + 0x630 ) == 0) {
                  pcVar32 = "The source mesh must have a valid skin.";
                  uVar33 = 0x2b6;
                  pcVar25 = "Condition \"skin_internal.is_null()\" is true. Returning: Ref<ArrayMesh>()";
               }
 else {
                  lVar18 = SkinReference::get_skeleton();
                  if (lVar18 != 0) {
                     plVar19 = (long*)RenderingServer::get_singleton();
                     uVar13 = ( **(code**)( *plVar19 + 0x490 ) )(plVar19, lVar18);
                     uVar22 = (ulong)uVar13;
                     if ((int)uVar13 < 1) {
                        _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 699, "Condition \"bone_count <= 0\" is true. Returning: Ref<ArrayMesh>()", 0, 0);
                        *(undefined8*)param_1 = 0;
                     }
 else if ((int)uVar13 < *(int*)( *(long*)( param_2 + 0x630 ) + 600 )) {
                        _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 700, "Condition \"bone_count < skin_internal->get_bind_count()\" is true. Returning: Ref<ArrayMesh>()", 0, 0);
                        *(undefined8*)param_1 = 0;
                     }
 else {
                        local_138 = 0;
                        uVar26 = uVar13 - 1 >> 1 | uVar13 - 1;
                        uVar26 = uVar26 >> 2 | uVar26;
                        uVar26 = uVar26 | uVar26 >> 4;
                        uVar26 = uVar26 | uVar26 >> 8;
                        local_134 = ( uVar26 | uVar26 >> 0x10 ) + 1;
                        local_130 = (undefined1(*) [16])Memory::realloc_static((void*)0x0, (ulong)local_134 * 0x30, false);
                        uVar9 = _LC49;
                        if (local_130 == (undefined1(*) [16])0x0) {
                           _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar8 = (code*)invalidInstructionException();
                           ( *pcVar8 )();
                        }

                        auVar48 = ZEXT416(_LC48);
                        pauVar20 = local_130;
                        do {
                           *(undefined8*)( pauVar20[2] + 4 ) = 0;
                           pauVar21 = pauVar20 + 3;
                           *pauVar20 = auVar48;
                           pauVar20[1] = auVar48;
                           *(undefined4*)pauVar20[2] = uVar9;
                           *(undefined4*)( pauVar20[2] + 0xc ) = 0;
                           pauVar20 = pauVar21;
                        }
 while ( pauVar21 != local_130 + uVar22 * 3 );
                        uVar26 = 0;
                        pauVar20 = local_130;
                        local_138 = uVar13;
                        do {
                           plVar19 = (long*)RenderingServer::get_singleton();
                           ( **(code**)( *plVar19 + 0x4a0 ) )(&local_78, plVar19, lVar18, uVar26);
                           pRVar17 = local_170;
                           if (uVar13 == uVar26) {
                              uVar31 = (ulong)(int)uVar13;
                              LAB_00105158:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar22, uVar31, "p_index", "count", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar8 = (code*)invalidInstructionException();
                              ( *pcVar8 )();
                           }

                           uVar26 = uVar26 + 1;
                           *(undefined8*)*pauVar20 = local_78;
                           *(undefined8*)( *pauVar20 + 8 ) = uStack_70;
                           pauVar20[1] = local_68;
                           pauVar20[2] = local_58;
                           pauVar20 = pauVar20 + 3;
                        }
 while ( uVar13 != uVar26 );
                        ArrayMesh::clear_surfaces();
                        iVar14 = ( **(code**)( *(long*)local_2c0 + 0x1c8 ) )();
                        if (iVar14 < 1) {
                           *(undefined8*)param_1 = 0;
                           Ref<ArrayMesh>::operator =(param_1, pRVar17);
                        }
 else {
                           iVar4 = 0;
                           do {
                              iVar15 = ( **(code**)( *(long*)local_2c0 + 0x200 ) )(local_2c0, iVar4);
                              if (iVar15 == 3) {
                                 uVar22 = ( **(code**)( *(long*)local_2c0 + 0x1f8 ) )(local_2c0, iVar4);
                                 if (( uVar22 & 1 ) == 0) {
                                    _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x2cd, "Condition \"0 == (surface_format & Mesh::ARRAY_FORMAT_VERTEX)\" is true. Continuing.", 0, 0);
                                 }
 else if (( uVar22 & 0x400 ) == 0) {
                                    _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x2ce, "Condition \"0 == (surface_format & Mesh::ARRAY_FORMAT_BONES)\" is true. Continuing.", 0, 0);
                                 }
 else if (( uVar22 & 0x800 ) == 0) {
                                    _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x2cf, "Condition \"0 == (surface_format & Mesh::ARRAY_FORMAT_WEIGHTS)\" is true. Continuing.", 0, 0);
                                 }
 else {
                                    uVar13 = ( -(uint)((uVar22 & 0x8000000) == 0) & 0xfffffffc ) + 8;
                                    ( **(code**)( *(long*)local_2c0 + 0x1e0 ) )(local_168, local_2c0, iVar4);
                                    iVar15 = Array::size();
                                    if (iVar15 != 0xd) {
                                       _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x2d8, "Condition \"source_mesh_arrays.size() != RenderingServer::ARRAY_MAX\" is true. Returning: Ref<ArrayMesh>()", 0, 0);
                                       *(undefined8*)param_1 = 0;
                                       pauVar20 = local_130;
                                       LAB_00105eca:Array::~Array(local_168);
                                       goto LAB_00105ed2;
                                    }

                                    iVar15 = (int)local_168;
                                    Array::operator [](iVar15);
                                    Variant::operator_cast_to_Vector(local_128);
                                    Array::operator [](iVar15);
                                    Variant::operator_cast_to_Vector(local_118);
                                    Array::operator [](iVar15);
                                    Variant::operator_cast_to_Vector(local_108);
                                    Array::operator [](iVar15);
                                    Variant::operator_cast_to_Vector(local_f8);
                                    Array::operator [](iVar15);
                                    Variant::operator_cast_to_Vector(local_e8);
                                    if (local_120 == (float*)0x0) {
                                       if (local_f0 != 0) {
                                          uVar22 = 0;
                                          lVar18 = 0;
                                          goto LAB_0010537f;
                                       }

                                       if (local_e0 != 0) {
                                          lVar27 = 0;
                                          uVar22 = 0;
                                          goto LAB_0010539d;
                                       }

                                       uVar22 = 0;
                                       LAB_001053aa:Array::Array(local_160);
                                       iVar29 = (int)local_160;
                                       Array::resize(iVar29);
                                       for (uVar26 = 0; iVar16 = Array::size(),lVar11 = local_e0,lVar27 = local_f0,lVar18 = local_100,pfVar30 = local_110,pfVar28 = local_120,(int)uVar26 < iVar16; uVar26 = uVar26 + 1) {
                                          if (( 1 < uVar26 - 10 ) && ( 2 < uVar26 )) {
                                             pVVar24 = (Variant*)Array::operator [](iVar15);
                                             this(Variant * Array::operator [](iVar29));
                                             Variant::operator =(this, pVVar24);
                                          }

                                       }

                                       if (local_110 == (float*)0x0) {
                                          local_280 = 0;
                                       }
 else {
                                          local_280 = *(long*)( local_110 + -2 );
                                       }

                                       if (local_120 == (float*)0x0) {
                                          if (local_100 == 0) {
                                             local_d0 = (float*)0x0;
                                             local_228 = 0;
                                             local_288 = 0;
                                          }
 else {
                                             local_228 = 0;
                                             lVar7 = *(long*)( local_100 + -8 );
                                             local_d0 = (float*)0x0;
                                             local_288 = lVar7 + 3;
                                             if (-1 < lVar7) {
                                                local_288 = lVar7;
                                             }

                                             local_288 = local_288 >> 2;
                                          }

                                       }
 else {
                                          local_228 = *(long*)( local_120 + -2 );
                                          if (local_100 == 0) {
                                             local_288 = 0;
                                          }
 else {
                                             lVar7 = *(long*)( local_100 + -8 );
                                             local_288 = lVar7 + 3;
                                             if (-1 < lVar7) {
                                                local_288 = lVar7;
                                             }

                                             local_288 = local_288 >> 2;
                                          }

                                          local_d0 = (float*)0x0;
                                          pfVar34 = local_120 + -4;
                                          do {
                                             lVar7 = *(long*)pfVar34;
                                             if (lVar7 == 0) goto LAB_001054be;
                                             LOCK();
                                             lVar23 = *(long*)pfVar34;
                                             bVar36 = lVar7 == lVar23;
                                             if (bVar36) {
                                                *(long*)pfVar34 = lVar7 + 1;
                                                lVar23 = lVar7;
                                             }

                                             UNLOCK();
                                          }
 while ( !bVar36 );
                                          if (lVar23 != -1) {
                                             local_d0 = local_120;
                                          }

                                       }

                                       LAB_001054be:local_c0 = (float*)0x0;
                                       pfVar34 = local_110 + -4;
                                       if (local_110 != (float*)0x0) {
                                          do {
                                             lVar7 = *(long*)pfVar34;
                                             if (lVar7 == 0) goto LAB_001054fc;
                                             LOCK();
                                             lVar23 = *(long*)pfVar34;
                                             bVar36 = lVar7 == lVar23;
                                             if (bVar36) {
                                                *(long*)pfVar34 = lVar7 + 1;
                                                lVar23 = lVar7;
                                             }

                                             UNLOCK();
                                          }
 while ( !bVar36 );
                                          if (lVar23 != -1) {
                                             local_c0 = local_110;
                                          }

                                       }

                                       LAB_001054fc:local_b0 = 0;
                                       if (local_100 != 0) {
                                          plVar19 = (long*)( local_100 + -0x10 );
                                          do {
                                             lVar7 = *plVar19;
                                             if (lVar7 == 0) goto LAB_00105546;
                                             LOCK();
                                             lVar23 = *plVar19;
                                             bVar36 = lVar7 == lVar23;
                                             if (bVar36) {
                                                *plVar19 = lVar7 + 1;
                                                lVar23 = lVar7;
                                             }

                                             UNLOCK();
                                          }
 while ( !bVar36 );
                                          if (lVar23 != -1) {
                                             local_b0 = local_100;
                                          }

                                       }

                                       LAB_00105546:CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_d0);
                                       pfVar34 = local_d0;
                                       CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_c0);
                                       local_190 = local_c0;
                                       CowData<float>::_copy_on_write((CowData<float>*)&local_b0);
                                       lVar7 = local_b0;
                                       if ((int)uVar22 != 0) {
                                          pfVar1 = pfVar28 + uVar22 * 3;
                                          iVar15 = 0;
                                          uVar26 = uVar13;
                                          do {
                                             if (local_280 == local_228) {
                                                uVar33 = *(undefined8*)pfVar30;
                                                fVar37 = *pfVar30;
                                                fVar39 = pfVar30[1];
                                                fVar51 = pfVar30[2];
                                             }
 else {
                                                fVar51 = 0.0;
                                                uVar33 = 0;
                                                fVar37 = 0.0;
                                                fVar39 = 0.0;
                                             }

                                             fVar50 = (float)uVar33;
                                             uVar46 = 0;
                                             fVar49 = 0.0;
                                             fVar43 = (float)( (ulong)uVar33 >> 0x20 );
                                             if (local_228 == local_288) {
                                                fVar49 = *(float*)( lVar18 + ( (long)iVar15 + 2 ) * 4 );
                                                uVar46 = *(undefined8*)( lVar18 + -8 + ( (long)iVar15 + 2 ) * 4 );
                                             }

                                             fVar45 = (float)uVar46;
                                             fVar44 = (float)( (ulong)uVar46 >> 0x20 );
                                             uVar35 = uVar26 - uVar13;
                                             local_250 = 0.0;
                                             fStack_24c = 0.0;
                                             local_258 = 0;
                                             local_25c = 0.0;
                                             local_260 = 0.0;
                                             local_2a8 = 0.0;
                                             fStack_2a4 = 0.0;
                                             local_290 = 0.0;
                                             do {
                                                pauVar20 = local_130;
                                                uVar10 = local_138;
                                                fVar2 = *(float*)( lVar11 + (ulong)uVar35 * 4 );
                                                if (_LC144 <= fVar2) {
                                                   uVar5 = *(uint*)( lVar27 + (ulong)uVar35 * 4 );
                                                   if (local_138 <= uVar5) {
                                                      uVar31 = (ulong)local_138;
                                                      uVar22 = (ulong)uVar5;
                                                      goto LAB_00105158;
                                                   }

                                                   pauVar21 = local_130 + (ulong)uVar5 * 3;
                                                   Basis::orthonormalized();
                                                   if (( (int)uVar5 < 0 ) || ( (int)uVar10 <= (int)uVar5 )) {
                                                      _err_print_index_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x323, (long)(int)uVar5, (long)(int)uVar10, "vertex_bone_index", "static_cast<int>(bone_transforms.size())", "", false, false);
                                                      *(undefined8*)param_1 = 0;
                                                      CowData<float>::_unref((CowData<float>*)&local_b0);
                                                      CowData<Vector3>::_unref((CowData<Vector3>*)&local_c0);
                                                      CowData<Vector3>::_unref((CowData<Vector3>*)&local_d0);
                                                      Array::~Array(local_160);
                                                      CowData<float>::_unref((CowData<float>*)&local_e0);
                                                      CowData<int>::_unref((CowData<int>*)&local_f0);
                                                      CowData<float>::_unref((CowData<float>*)&local_100);
                                                      CowData<Vector3>::_unref((CowData<Vector3>*)&local_110);
                                                      CowData<Vector3>::_unref((CowData<Vector3>*)&local_120);
                                                      goto LAB_00105eca;
                                                   }

                                                   fVar3 = pfVar28[2];
                                                   fVar38 = (float)*(undefined8*)pfVar28;
                                                   fVar41 = (float)( ( ulong ) * (undefined8*)pfVar28 >> 0x20 );
                                                   local_2a8 = local_2a8 + ( ( ( ( (float)*(undefined8*)*pauVar21 * fVar38 + *(float*)( *pauVar21 + 4 ) * fVar41 + (float)*(undefined8*)( *pauVar21 + 8 ) * fVar3 + (float)*(undefined8*)( pauVar21[2] + 4 ) ) - fVar38 ) * fVar2 + fVar38 ) - fVar38 );
                                                   fStack_2a4 = fStack_2a4 + ( ( ( ( (float)( ( ulong ) * (undefined8*)( *pauVar21 + 8 ) >> 0x20 ) * fVar38 + *(float*)pauVar21[1] * fVar41 + (float)( ( ulong ) * (undefined8*)pauVar21[1] >> 0x20 ) * fVar3 + (float)( ( ulong ) * (undefined8*)( pauVar21[2] + 4 ) >> 0x20 ) ) - fVar41 ) * fVar2 + fVar41 ) - fVar41 );
                                                   local_290 = ( ( ( ( *(float*)pauVar21[2] * fVar3 + fVar41 * *(float*)( pauVar21[1] + 0xc ) + *(float*)( pauVar21[1] + 8 ) * *pfVar28 + *(float*)( pauVar21[2] + 0xc ) ) - fVar3 ) * fVar2 + fVar3 ) - fVar3 ) + local_290;
                                                   if (local_280 == local_228) {
                                                      local_258 = CONCAT44((float)( (ulong)local_258 >> 0x20 ) + ( ( ( ( fVar37 * local_a0._4_4_ + (float)local_a0._8_4_ * fVar39 + local_a0._12_4_ * fVar51 ) - fVar43 ) * fVar2 + fVar43 ) - fVar43 ), (float)local_258 + ( ( ( ( fVar37 * (float)_local_a8 + fStack_a4 * fVar39 + local_a0._0_4_ * fVar51 ) - fVar50 ) * fVar2 + fVar50 ) - fVar50 ));
                                                      local_260 = ( ( ( ( fVar50 * local_90 + fVar43 * local_8c + local_88 * fVar51 ) - fVar51 ) * fVar2 + fVar51 ) - fVar51 ) + local_260;
                                                   }

                                                   if (local_228 == local_288) {
                                                      local_250 = local_250 + ( ( ( ( fVar45 * (float)_local_a8 + fStack_a4 * fVar44 + local_a0._0_4_ * fVar49 ) - fVar45 ) * fVar2 + fVar45 ) - fVar45 );
                                                      fStack_24c = fStack_24c + ( ( ( ( fVar45 * local_a0._4_4_ + (float)local_a0._8_4_ * fVar44 + local_a0._12_4_ * fVar49 ) - fVar44 ) * fVar2 + fVar44 ) - fVar44 );
                                                      local_25c = ( ( ( ( fVar45 * local_90 + fVar44 * local_8c + local_88 * fVar49 ) - fVar49 ) * fVar2 + fVar49 ) - fVar49 ) + local_25c;
                                                   }

                                                }

                                                uVar35 = uVar35 + 1;
                                             }
 while ( uVar26 != uVar35 );
                                             pfVar34[2] = local_290 + pfVar34[2];
                                             *(ulong*)pfVar34 = CONCAT44((float)( ( ulong ) * (undefined8*)pfVar34 >> 0x20 ) + fStack_2a4, (float)*(undefined8*)pfVar34 + local_2a8);
                                             if (local_280 == local_228) {
                                                auVar48._0_4_ = fVar50 + (float)local_258;
                                                auVar48._4_4_ = fVar43 + (float)( (ulong)local_258 >> 0x20 );
                                                auVar48._8_8_ = 0;
                                                local_260 = local_260 + fVar51;
                                                fVar37 = auVar48._0_4_ * auVar48._0_4_ + auVar48._4_4_ * auVar48._4_4_ + local_260 * local_260;
                                                fVar39 = 0.0;
                                                uVar33 = 0;
                                                if (fVar37 != 0.0) {
                                                   fVar37 = SQRT(fVar37);
                                                   auVar42._4_4_ = fVar37;
                                                   auVar42._0_4_ = fVar37;
                                                   auVar42._8_8_ = _LC147;
                                                   auVar48 = divps(auVar48, auVar42);
                                                   fVar39 = local_260 / fVar37;
                                                   uVar33 = auVar48._0_8_;
                                                }

                                                *(undefined8*)local_190 = uVar33;
                                                local_190[2] = fVar39;
                                             }

                                             if (local_228 == local_288) {
                                                fVar49 = fVar49 + local_25c;
                                                auVar47._0_4_ = fVar45 + local_250;
                                                auVar47._4_4_ = fVar44 + fStack_24c;
                                                auVar47._8_8_ = 0;
                                                fVar37 = auVar47._0_4_ * auVar47._0_4_ + auVar47._4_4_ * auVar47._4_4_ + fVar49 * fVar49;
                                                fVar39 = 0.0;
                                                uVar33 = 0;
                                                if (fVar37 != 0.0) {
                                                   fVar37 = SQRT(fVar37);
                                                   auVar40._4_4_ = fVar37;
                                                   auVar40._0_4_ = fVar37;
                                                   auVar40._8_8_ = _LC147;
                                                   auVar48 = divps(auVar47, auVar40);
                                                   fVar39 = fVar49 / fVar37;
                                                   uVar33 = auVar48._0_8_;
                                                }

                                                *(undefined8*)( lVar7 + (long)iVar15 * 4 ) = uVar33;
                                                *(float*)( lVar7 + 8 + (long)iVar15 * 4 ) = fVar39;
                                             }

                                             pfVar28 = pfVar28 + 3;
                                             iVar15 = iVar15 + 4;
                                             pfVar34 = pfVar34 + 3;
                                             local_190 = local_190 + 3;
                                             pfVar30 = pfVar30 + 3;
                                             uVar26 = uVar26 + uVar13;
                                          }
 while ( pfVar28 != pfVar1 );
                                       }

                                       Variant::Variant((Variant*)&local_a8, local_d8);
                                       pVVar24 = (Variant*)Array::operator [](iVar29);
                                       Variant::operator =(pVVar24, (Variant*)&local_a8);
                                       if (Variant::needs_deinit[local_a8] != '\0') {
                                          Variant::_clear_internal();
                                       }

                                       if (local_280 == local_228) {
                                          Variant::Variant((Variant*)&local_a8, local_c8);
                                          pVVar24 = (Variant*)Array::operator [](iVar29);
                                          Variant::operator =(pVVar24, (Variant*)&local_a8);
                                          if (Variant::needs_deinit[local_a8] != '\0') {
                                             Variant::_clear_internal();
                                          }

                                       }

                                       if (local_228 == local_288) {
                                          Variant::Variant((Variant*)&local_a8, local_b8);
                                          pVVar24 = (Variant*)Array::operator [](iVar29);
                                          Variant::operator =(pVVar24, (Variant*)&local_a8);
                                          if (Variant::needs_deinit[local_a8] != '\0') {
                                             Variant::_clear_internal();
                                          }

                                       }

                                       Dictionary::Dictionary(local_150);
                                       Array::Array(local_158);
                                       Array::Array(local_148);
                                       _local_a8 = 0;
                                       local_140 = 0;
                                       local_a0 = (undefined1[16])0x0;
                                       Array::set_typed((uint)local_148, (StringName*)0x1c, (Variant*)&local_140);
                                       if (( StringName::configured != '\0' ) && ( local_140 != 0 )) {
                                          StringName::unref();
                                       }

                                       if (Variant::needs_deinit[local_a8] != '\0') {
                                          Variant::_clear_internal();
                                       }

                                       cVar12 = Array::is_same_typed(local_148);
                                       if (cVar12 == '\0') {
                                          Array::assign(local_148);
                                       }
 else {
                                          Array::_ref(local_148);
                                       }

                                       ArrayMesh::add_surface_from_arrays(pRVar17, 3, local_160, local_148);
                                       Array::~Array(local_148);
                                       Array::~Array(local_158);
                                       Dictionary::~Dictionary(local_150);
                                       CowData<float>::_unref((CowData<float>*)&local_b0);
                                       CowData<Vector3>::_unref((CowData<Vector3>*)&local_c0);
                                       CowData<Vector3>::_unref((CowData<Vector3>*)&local_d0);
                                       Array::~Array(local_160);
                                    }
 else {
                                       uVar22 = *(ulong*)( local_120 + -2 ) & 0xffffffff;
                                       lVar18 = (long)(int)( (int)*(ulong*)( local_120 + -2 ) * uVar13 );
                                       if (local_f0 == 0) {
                                          lVar27 = 0;
                                       }
 else {
                                          LAB_0010537f:lVar27 = *(long*)( local_f0 + -8 );
                                       }

                                       if (lVar27 == lVar18) {
                                          if (local_e0 == 0) {
                                             lVar18 = 0;
                                          }
 else {
                                             LAB_0010539d:lVar18 = *(long*)( local_e0 + -8 );
                                          }

                                          if (lVar18 == lVar27) goto LAB_001053aa;
                                          _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x2e3, "Condition \"source_mesh_weights_array.size() != expected_bone_array_size\" is true. Continuing.", 0, 0);
                                       }
 else {
                                          _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x2e2, "Condition \"source_mesh_bones_array.size() != expected_bone_array_size\" is true. Continuing.", 0, 0);
                                       }

                                    }

                                    CowData<float>::_unref((CowData<float>*)&local_e0);
                                    CowData<int>::_unref((CowData<int>*)&local_f0);
                                    CowData<float>::_unref((CowData<float>*)&local_100);
                                    CowData<Vector3>::_unref((CowData<Vector3>*)&local_110);
                                    CowData<Vector3>::_unref((CowData<Vector3>*)&local_120);
                                    Array::~Array(local_168);
                                 }

                              }
 else {
                                 _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x2c9, "Condition \"source_mesh->surface_get_primitive_type(surface_index) != Mesh::PRIMITIVE_TRIANGLES\" is true. Continuing.", 0, 0);
                              }

                              pauVar20 = local_130;
                              iVar4 = iVar4 + 1;
                           }
 while ( iVar14 != iVar4 );
                           *(undefined8*)param_1 = 0;
                           Ref<ArrayMesh>::operator =(param_1, local_170);
                           LAB_00105ed2:if (pauVar20 == (undefined1(*) [16])0x0) goto LAB_00105f00;
                        }

                        LocalVector<Transform3D,unsigned_int,false,false>::resize((LocalVector<Transform3D,unsigned_int,false,false>*)&local_138, 0);
                        if (local_130 != (undefined1(*) [16])0x0) {
                           Memory::free_static(local_130, false);
                        }

                     }

                     LAB_00105f00:Ref<ArrayMesh>::unref((Ref<ArrayMesh>*)&local_170);
                     goto LAB_00104ec8;
                  }

                  pcVar32 = "The source mesh must have its skin registered with a valid skeleton.";
                  uVar33 = 0x2b8;
                  pcVar25 = "Condition \"!skeleton.is_valid()\" is true. Returning: Ref<ArrayMesh>()";
               }

            }
 else {
               if (pRVar17 != local_2c0) {
                  local_170 = pRVar17;
                  cVar12 = RefCounted::reference();
                  if (cVar12 == '\0') {
                     local_170 = (Ref*)0x0;
                  }

                  goto LAB_00104fb2;
               }

               pcVar32 = "The source mesh can not be the same mesh as the existing mesh.";
               uVar33 = 0x2ae;
               pcVar25 = "Condition \"source_mesh == p_existing\" is true. Returning: Ref<ArrayMesh>()";
            }

            _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", uVar33, pcVar25, pcVar32, 0, 0);
            *(undefined8*)param_1 = 0;
            Ref<ArrayMesh>::unref((Ref<ArrayMesh>*)&local_170);
            goto LAB_00104ec8;
         }

      }

   }

   _err_print_error("bake_mesh_from_current_skeleton_pose", "scene/3d/mesh_instance_3d.cpp", 0x2a9, "Condition \"source_mesh.is_null()\" is true. Returning: Ref<ArrayMesh>()", "The source mesh must be a valid ArrayMesh.", 0, 0);
   *(undefined8*)param_1 = 0;
   LAB_00104ec8:Ref<ArrayMesh>::unref((Ref<ArrayMesh>*)&local_178);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* MeshInstance3D::bake_mesh_from_current_blend_shape_mix(Ref<ArrayMesh>) */Ref<ArrayMesh> *MeshInstance3D::bake_mesh_from_current_blend_shape_mix(Ref<ArrayMesh> *param_1, MeshInstance3D *param_2, long *param_3) {
   float *pfVar1;
   float *pfVar2;
   float fVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   Object *pOVar6;
   long lVar7;
   Ref *pRVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   long lVar11;
   undefined8 *puVar12;
   undefined8 *puVar13;
   char cVar14;
   int iVar15;
   int iVar16;
   int iVar17;
   int iVar18;
   int iVar19;
   ulong uVar20;
   Variant *this;
   long lVar21;
   undefined8 *puVar22;
   Variant *pVVar23;
   undefined8 *puVar24;
   long lVar25;
   long *plVar26;
   long lVar27;
   undefined8 *puVar28;
   long lVar29;
   int iVar30;
   undefined8 *puVar31;
   undefined8 *puVar32;
   long lVar33;
   Ref *pRVar34;
   long in_FS_OFFSET;
   bool bVar35;
   float fVar36;
   float fVar37;
   float fVar38;
   undefined1 auVar39[16];
   float local_258;
   float fStack_254;
   float fStack_250;
   float fStack_24c;
   Object *local_240;
   int local_228;
   Array *local_220;
   Dictionary *local_218;
   Variant *local_210;
   long local_1f0;
   long local_1c0;
   Ref *local_120;
   Array local_118[8];
   Array local_110[8];
   Array local_108[8];
   Array local_100[8];
   Variant local_f8[8];
   undefined8 *local_f0;
   Variant local_e8[8];
   undefined8 *local_e0;
   Variant local_d8[8];
   long local_d0;
   Vector local_c8[8];
   undefined8 *local_c0;
   Vector local_b8[8];
   undefined8 *local_b0;
   Vector local_a8[8];
   long local_a0;
   Variant local_98[8];
   undefined8 *local_90;
   Variant local_88[8];
   undefined8 *local_80;
   long local_78;
   long local_70;
   undefined8 local_68;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined1 auStack_50[16];
   long local_40;
   pOVar6 = *(Object**)( param_2 + 0x620 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( pOVar6 != (Object*)0x0 ) && ( cVar14 = cVar14 != '\0' )) {
      local_240 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &ArrayMesh::typeinfo, 0);
      if (( local_240 != (Object*)0x0 ) && ( cVar14 = cVar14 != '\0' )) {
         cVar14 = RefCounted::unreference();
         if (( cVar14 != '\0' ) && ( cVar14 = cVar14 != '\0' )) goto LAB_00107179;
         LAB_00106579:local_120 = (Ref*)0x0;
         pRVar34 = (Ref*)*param_3;
         if (pRVar34 == (Ref*)0x0) {
            Ref<ArrayMesh>::instantiate<>((Ref<ArrayMesh>*)&local_120);
            pRVar34 = local_120;
            LAB_001065c3:iVar15 = ArrayMesh::get_blend_shape_mode();
            iVar16 = ( **(code**)( *(long*)local_240 + 0x1c8 ) )(local_240);
            ArrayMesh::clear_surfaces();
            ArrayMesh::set_blend_shape_mode(pRVar34, iVar15);
            if (iVar16 < 1) {
               *(undefined8*)param_1 = 0;
               Ref<ArrayMesh>::operator =(param_1, pRVar34);
            }
 else {
               local_228 = 0;
               do {
                  uVar20 = ( **(code**)( *(long*)local_240 + 0x1f8 ) )(local_240, local_228);
                  if (( uVar20 & 1 ) != 0) {
                     ( **(code**)( *(long*)local_240 + 0x1e0 ) )(local_118, local_240, local_228);
                     iVar17 = Array::size();
                     if (iVar17 == 0xd) {
                        iVar19 = (int)local_118;
                        Array::operator [](iVar19);
                        Variant::operator_cast_to_Vector(local_f8);
                        Array::operator [](iVar19);
                        Variant::operator_cast_to_Vector(local_e8);
                        Array::operator [](iVar19);
                        Variant::operator_cast_to_Vector(local_d8);
                        Array::Array(local_110);
                        iVar30 = (int)local_110;
                        Array::resize(iVar30);
                        for (iVar17 = 0; iVar18 = Array::size(),lVar11 = local_d0,puVar10 = local_e0,puVar9 = local_f0,iVar17 < iVar18; iVar17 = iVar17 + 1) {
                           if (2 < iVar17) {
                              pVVar23 = (Variant*)Array::operator [](iVar19);
                              this(Variant * Array::operator [](iVar30));
                              Variant::operator =(this, pVVar23);
                           }

                        }

                        if (local_e0 == (undefined8*)0x0) {
                           local_1f0 = 0;
                        }
 else {
                           local_1f0 = local_e0[-1];
                        }

                        if (local_f0 == (undefined8*)0x0) {
                           if (local_d0 == 0) {
                              local_c0 = (undefined8*)0x0;
                              lVar29 = 0;
                              local_1c0 = 0;
                           }
 else {
                              lVar29 = *(long*)( local_d0 + -8 );
                              local_c0 = (undefined8*)0x0;
                              local_1c0 = lVar29 + 3;
                              if (-1 < lVar29) {
                                 local_1c0 = lVar29;
                              }

                              lVar29 = 0;
                              local_1c0 = local_1c0 >> 2;
                           }

                        }
 else {
                           lVar29 = local_f0[-1];
                           if (local_d0 == 0) {
                              local_1c0 = 0;
                           }
 else {
                              lVar7 = *(long*)( local_d0 + -8 );
                              local_1c0 = lVar7 + 3;
                              if (-1 < lVar7) {
                                 local_1c0 = lVar7;
                              }

                              local_1c0 = local_1c0 >> 2;
                           }

                           local_c0 = (undefined8*)0x0;
                           plVar26 = local_f0 + -2;
                           do {
                              lVar7 = *plVar26;
                              if (lVar7 == 0) goto LAB_001067c2;
                              LOCK();
                              lVar21 = *plVar26;
                              bVar35 = lVar7 == lVar21;
                              if (bVar35) {
                                 *plVar26 = lVar7 + 1;
                                 lVar21 = lVar7;
                              }

                              UNLOCK();
                           }
 while ( !bVar35 );
                           if (lVar21 != -1) {
                              local_c0 = local_f0;
                           }

                        }

                        LAB_001067c2:local_b0 = (undefined8*)0x0;
                        plVar26 = local_e0 + -2;
                        if (local_e0 != (undefined8*)0x0) {
                           do {
                              lVar7 = *plVar26;
                              if (lVar7 == 0) goto LAB_00106800;
                              LOCK();
                              lVar21 = *plVar26;
                              bVar35 = lVar7 == lVar21;
                              if (bVar35) {
                                 *plVar26 = lVar7 + 1;
                                 lVar21 = lVar7;
                              }

                              UNLOCK();
                           }
 while ( !bVar35 );
                           if (lVar21 != -1) {
                              local_b0 = local_e0;
                           }

                        }

                        LAB_00106800:local_a0 = 0;
                        if (local_d0 != 0) {
                           plVar26 = (long*)( local_d0 + -0x10 );
                           do {
                              lVar7 = *plVar26;
                              if (lVar7 == 0) goto LAB_0010684a;
                              LOCK();
                              lVar21 = *plVar26;
                              bVar35 = lVar7 == lVar21;
                              if (bVar35) {
                                 *plVar26 = lVar7 + 1;
                                 lVar21 = lVar7;
                              }

                              UNLOCK();
                           }
 while ( !bVar35 );
                           if (lVar21 != -1) {
                              local_a0 = local_d0;
                           }

                        }

                        LAB_0010684a:CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_c0);
                        puVar12 = local_c0;
                        CowData<Vector3>::_copy_on_write((CowData<Vector3>*)&local_b0);
                        puVar13 = local_b0;
                        CowData<float>::_copy_on_write((CowData<float>*)&local_a0);
                        lVar7 = local_a0;
                        ( **(code**)( *(long*)local_240 + 0x1e8 ) )(local_108, local_240, local_228);
                        iVar17 = ( **(code**)( *(long*)local_240 + 0x218 ) )(local_240);
                        iVar19 = Array::size();
                        if (iVar19 == iVar17) {
                           if (0 < iVar19) {
                              iVar19 = 0;
                              do {
                                 fVar36 = (float)get_blend_shape_value(param_2, iVar19);
                                 if (_LC151 < (double)(float)( (uint)fVar36 & __LC150 )) {
                                    Array::operator []((int)local_108);
                                    Variant::operator_cast_to_Array((Variant*)local_100);
                                    iVar18 = (int)(Variant*)local_100;
                                    Array::operator [](iVar18);
                                    Variant::operator_cast_to_Vector(local_98);
                                    Array::operator [](iVar18);
                                    Variant::operator_cast_to_Vector(local_88);
                                    Array::operator [](iVar18);
                                    Variant::operator_cast_to_Vector((Variant*)&local_78);
                                    lVar21 = local_70;
                                    puVar24 = local_80;
                                    puVar22 = local_90;
                                    if (local_f0 != (undefined8*)0x0) {
                                       lVar27 = local_f0[-1];
                                       if (local_90 != (undefined8*)0x0) goto LAB_00106a8b;
                                       lVar33 = 0;
                                       LAB_00106a8f:if (lVar33 == lVar27) goto LAB_00106a98;
                                       _err_print_error("bake_mesh_from_current_blend_shape_mix", "scene/3d/mesh_instance_3d.cpp", 0x255, "Condition \"source_mesh_vertex_array.size() != blendshape_vertex_array.size()\" is true. Returning: Ref<ArrayMesh>()", 0, 0);
                                       LAB_00106e32:*(undefined8*)param_1 = 0;
                                       CowData<float>::_unref((CowData<float>*)&local_70);
                                       CowData<Vector3>::_unref((CowData<Vector3>*)&local_80);
                                       CowData<Vector3>::_unref((CowData<Vector3>*)&local_90);
                                       Array::~Array(local_100);
                                       goto LAB_00106e69;
                                    }

                                    lVar27 = 0;
                                    if (local_90 != (undefined8*)0x0) {
                                       LAB_00106a8b:lVar33 = local_90[-1];
                                       goto LAB_00106a8f;
                                    }

                                    LAB_00106a98:if (local_e0 == (undefined8*)0x0) {
                                       lVar33 = 0;
                                       if (local_80 != (undefined8*)0x0) goto LAB_00106abe;
                                    }
 else {
                                       lVar33 = local_e0[-1];
                                       if (local_80 == (undefined8*)0x0) {
                                          lVar25 = 0;
                                       }
 else {
                                          LAB_00106abe:lVar25 = local_80[-1];
                                       }

                                       if (lVar25 != lVar33) {
                                          _err_print_error("bake_mesh_from_current_blend_shape_mix", "scene/3d/mesh_instance_3d.cpp", 0x256, "Condition \"source_mesh_normal_array.size() != blendshape_normal_array.size()\" is true. Returning: Ref<ArrayMesh>()", 0, 0);
                                          goto LAB_00106e32;
                                       }

                                    }

                                    if (local_d0 == 0) {
                                       lVar33 = 0;
                                       if (local_70 != 0) goto LAB_00106af1;
                                    }
 else {
                                       lVar33 = *(long*)( local_d0 + -8 );
                                       if (local_70 == 0) {
                                          lVar25 = 0;
                                       }
 else {
                                          LAB_00106af1:lVar25 = *(long*)( local_70 + -8 );
                                       }

                                       if (lVar25 != lVar33) {
                                          _err_print_error("bake_mesh_from_current_blend_shape_mix", "scene/3d/mesh_instance_3d.cpp", 599, "Condition \"source_mesh_tangent_array.size() != blendshape_tangent_array.size()\" is true. Returning: Ref<ArrayMesh>()", 0, 0);
                                          goto LAB_00106e32;
                                       }

                                    }

                                    if (iVar15 == 0) {
                                       if (local_f0 != (undefined8*)0x0) {
                                          lVar27 = 0;
                                          lVar33 = 0;
                                          puVar28 = puVar12;
                                          puVar31 = local_f0;
                                          puVar32 = puVar13;
                                          do {
                                             if ((long)puVar31[-1] <= lVar33) break;
                                             fVar3 = *(float*)( (long)puVar9 + lVar27 + 8 );
                                             uVar4 = *(undefined8*)( (long)puVar9 + lVar27 );
                                             uVar5 = *(undefined8*)( (long)puVar22 + lVar27 );
                                             fVar37 = (float)uVar4;
                                             fVar38 = (float)( (ulong)uVar4 >> 0x20 );
                                             *(float*)( puVar28 + 1 ) = ( ( ( *(float*)( (long)puVar22 + lVar27 + 8 ) - fVar3 ) * fVar36 + fVar3 ) - fVar3 ) + *(float*)( puVar28 + 1 );
                                             *puVar28 = CONCAT44(( ( ( (float)( (ulong)uVar5 >> 0x20 ) - fVar38 ) * fVar36 + fVar38 ) - fVar38 ) + (float)( ( ulong ) * puVar28 >> 0x20 ), ( ( ( (float)uVar5 - fVar37 ) * fVar36 + fVar37 ) - fVar37 ) + (float)*puVar28);
                                             if (local_1f0 == lVar29) {
                                                fVar3 = *(float*)( (long)puVar10 + lVar27 + 8 );
                                                uVar4 = *(undefined8*)( (long)puVar10 + lVar27 );
                                                uVar5 = *(undefined8*)( (long)puVar24 + lVar27 );
                                                fVar37 = (float)uVar4;
                                                fVar38 = (float)( (ulong)uVar4 >> 0x20 );
                                                *(float*)( puVar32 + 1 ) = ( ( ( *(float*)( (long)puVar24 + lVar27 + 8 ) - fVar3 ) * fVar36 + fVar3 ) - fVar3 ) + *(float*)( puVar32 + 1 );
                                                *puVar32 = CONCAT44(( ( ( (float)( (ulong)uVar5 >> 0x20 ) - fVar38 ) * fVar36 + fVar38 ) - fVar38 ) + (float)( ( ulong ) * puVar32 >> 0x20 ), ( ( ( (float)uVar5 - fVar37 ) * fVar36 + fVar37 ) - fVar37 ) + (float)*puVar32);
                                             }

                                             if (local_1c0 == lVar29) {
                                                lVar25 = (long)( (int)lVar33 * 4 ) * 4 + 0xc;
                                                puVar31 = (undefined8*)( lVar11 + -0xc + lVar25 );
                                                local_68 = *puVar31;
                                                uStack_60 = puVar31[1];
                                                puVar31 = (undefined8*)( lVar21 + -0xc + lVar25 );
                                                local_58 = *puVar31;
                                                auStack_50._0_8_ = puVar31[1];
                                                auVar39 = Vector4::lerp((Vector4*)&local_68, fVar36);
                                                pfVar2 = (float*)( lVar7 + -0xc + lVar25 );
                                                local_258 = auVar39._0_4_;
                                                fStack_254 = auVar39._4_4_;
                                                fStack_250 = auVar39._8_4_;
                                                fStack_24c = auVar39._12_4_;
                                                *pfVar2 = *pfVar2 + local_258;
                                                pfVar2[1] = pfVar2[1] + fStack_254;
                                                pfVar2[2] = pfVar2[2] + fStack_250;
                                                pfVar2[3] = pfVar2[3] + fStack_24c;
                                                puVar31 = local_f0;
                                             }

                                             lVar33 = lVar33 + 1;
                                             puVar28 = (undefined8*)( (long)puVar28 + 0xc );
                                             puVar32 = (undefined8*)( (long)puVar32 + 0xc );
                                             lVar27 = lVar27 + 0xc;
                                          }
 while ( puVar31 != (undefined8*)0x0 );
                                       }

                                    }
 else if (( iVar15 == 1 ) && ( 0 < lVar27 )) {
                                       iVar18 = 0;
                                       puVar22 = puVar12;
                                       puVar24 = puVar13;
                                       puVar28 = local_90;
                                       puVar31 = local_80;
                                       do {
                                          uVar4 = *puVar28;
                                          *(float*)( puVar22 + 1 ) = *(float*)( puVar28 + 1 ) * fVar36 + *(float*)( puVar22 + 1 );
                                          *puVar22 = CONCAT44((float)( (ulong)uVar4 >> 0x20 ) * fVar36 + (float)( ( ulong ) * puVar22 >> 0x20 ), (float)uVar4 * fVar36 + (float)*puVar22);
                                          if (local_1f0 == lVar29) {
                                             uVar4 = *puVar31;
                                             *(float*)( puVar24 + 1 ) = *(float*)( puVar31 + 1 ) * fVar36 + *(float*)( puVar24 + 1 );
                                             *puVar24 = CONCAT44((float)( (ulong)uVar4 >> 0x20 ) * fVar36 + (float)( ( ulong ) * puVar24 >> 0x20 ), (float)uVar4 * fVar36 + (float)*puVar24);
                                          }

                                          if (local_1c0 == lVar29) {
                                             pfVar2 = (float*)( local_70 + (long)iVar18 * 4 );
                                             fVar3 = pfVar2[1];
                                             fVar37 = pfVar2[2];
                                             fVar38 = pfVar2[3];
                                             pfVar1 = (float*)( lVar7 + (long)iVar18 * 4 );
                                             *pfVar1 = *pfVar2 * fVar36 + *pfVar1;
                                             pfVar1[1] = fVar3 * fVar36 + pfVar1[1];
                                             pfVar1[2] = fVar37 * fVar36 + pfVar1[2];
                                             pfVar1[3] = fVar38 * fVar36 + pfVar1[3];
                                          }

                                          puVar28 = (undefined8*)( (long)puVar28 + 0xc );
                                          puVar22 = (undefined8*)( (long)puVar22 + 0xc );
                                          iVar18 = iVar18 + 4;
                                          puVar31 = (undefined8*)( (long)puVar31 + 0xc );
                                          puVar24 = (undefined8*)( (long)puVar24 + 0xc );
                                       }
 while ( puVar28 != (undefined8*)( (long)local_90 + lVar27 * 0xc ) );
                                    }

                                    CowData<float>::_unref((CowData<float>*)&local_70);
                                    CowData<Vector3>::_unref((CowData<Vector3>*)&local_80);
                                    CowData<Vector3>::_unref((CowData<Vector3>*)&local_90);
                                    Array::~Array(local_100);
                                 }

                                 iVar19 = iVar19 + 1;
                              }
 while ( iVar17 != iVar19 );
                           }

                           local_210 = (Variant*)&local_78;
                           local_218 = (Dictionary*)local_98;
                           local_220 = (Array*)local_88;
                           Variant::Variant((Variant*)&local_58, local_c8);
                           pVVar23 = (Variant*)Array::operator [](iVar30);
                           Variant::operator =(pVVar23, (Variant*)&local_58);
                           if (Variant::needs_deinit[(int)local_58] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (local_1f0 == lVar29) {
                              Variant::Variant((Variant*)&local_58, local_b8);
                              pVVar23 = (Variant*)Array::operator [](iVar30);
                              Variant::operator =(pVVar23, (Variant*)&local_58);
                              if (Variant::needs_deinit[(int)local_58] != '\0') {
                                 Variant::_clear_internal();
                              }

                           }

                           if (local_1c0 == lVar29) {
                              Variant::Variant((Variant*)&local_58, local_a8);
                              pVVar23 = (Variant*)Array::operator [](iVar30);
                              Variant::operator =(pVVar23, (Variant*)&local_58);
                              if (Variant::needs_deinit[(int)local_58] != '\0') {
                                 Variant::_clear_internal();
                              }

                           }

                           Dictionary::Dictionary(local_218);
                           Array::Array(local_100);
                           Array::Array(local_220);
                           local_58 = 0;
                           local_78 = 0;
                           auStack_50 = (undefined1[16])0x0;
                           Array::set_typed((uint)local_220, (StringName*)0x1c, local_210);
                           if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                              StringName::unref();
                           }

                           if (Variant::needs_deinit[(int)local_58] != '\0') {
                              Variant::_clear_internal();
                           }

                           cVar14 = Array::is_same_typed(local_220);
                           if (cVar14 == '\0') {
                              Array::assign(local_220);
                           }
 else {
                              Array::_ref(local_220);
                           }

                           ArrayMesh::add_surface_from_arrays(pRVar34, 3, local_110, local_220);
                           Array::~Array(local_220);
                           Array::~Array(local_100);
                           Dictionary::~Dictionary(local_218);
                           Array::~Array(local_108);
                           CowData<float>::_unref((CowData<float>*)&local_a0);
                           CowData<Vector3>::_unref((CowData<Vector3>*)&local_b0);
                           CowData<Vector3>::_unref((CowData<Vector3>*)&local_c0);
                           Array::~Array(local_110);
                           CowData<float>::_unref((CowData<float>*)&local_d0);
                           CowData<Vector3>::_unref((CowData<Vector3>*)&local_e0);
                           CowData<Vector3>::_unref((CowData<Vector3>*)&local_f0);
                           Array::~Array(local_118);
                           goto LAB_0010736d;
                        }

                        _err_print_error("bake_mesh_from_current_blend_shape_mix", "scene/3d/mesh_instance_3d.cpp", 0x247, "Condition \"blendshapes_mesh_arrays.size() != blend_shape_count\" is true. Returning: Ref<ArrayMesh>()", 0, 0);
                        *(undefined8*)param_1 = 0;
                        LAB_00106e69:Array::~Array(local_108);
                        CowData<float>::_unref((CowData<float>*)&local_a0);
                        CowData<Vector3>::_unref((CowData<Vector3>*)&local_b0);
                        CowData<Vector3>::_unref((CowData<Vector3>*)&local_c0);
                        Array::~Array(local_110);
                        CowData<float>::_unref((CowData<float>*)&local_d0);
                        CowData<Vector3>::_unref((CowData<Vector3>*)&local_e0);
                        CowData<Vector3>::_unref((CowData<Vector3>*)&local_f0);
                     }
 else {
                        _err_print_error("bake_mesh_from_current_blend_shape_mix", "scene/3d/mesh_instance_3d.cpp", 0x227, "Condition \"source_mesh_arrays.size() != RenderingServer::ARRAY_MAX\" is true. Returning: Ref<ArrayMesh>()", 0, 0);
                        *(undefined8*)param_1 = 0;
                     }

                     Array::~Array(local_118);
                     pRVar34 = local_120;
                     goto LAB_00106ed5;
                  }

                  _err_print_error("bake_mesh_from_current_blend_shape_mix", "scene/3d/mesh_instance_3d.cpp", 0x223, "Condition \"0 == (surface_format & Mesh::ARRAY_FORMAT_VERTEX)\" is true. Continuing.", 0, 0);
                  LAB_0010736d:pRVar8 = local_120;
                  local_228 = local_228 + 1;
               }
 while ( iVar16 != local_228 );
               *(undefined8*)param_1 = 0;
               Ref<ArrayMesh>::operator =(param_1, local_120);
               pRVar34 = pRVar8;
               LAB_00106ed5:if (pRVar34 == (Ref*)0x0) goto LAB_00106eea;
            }

            cVar14 = RefCounted::unreference();
            if (( cVar14 != '\0' ) && ( cVar14 = predelete_handler((Object*)pRVar34) ),cVar14 != '\0') {
               ( **(code**)( *(long*)pRVar34 + 0x140 ) )(pRVar34);
               Memory::free_static(pRVar34, false);
            }

         }
 else {
            if (pRVar34 != (Ref*)local_240) {
               local_120 = pRVar34;
               cVar14 = RefCounted::reference();
               if (cVar14 == '\0') {
                  local_120 = (Ref*)0x0;
                  pRVar34 = (Ref*)0x0;
               }

               goto LAB_001065c3;
            }

            _err_print_error("bake_mesh_from_current_blend_shape_mix", "scene/3d/mesh_instance_3d.cpp", 0x213, "Condition \"source_mesh == p_existing\" is true. Returning: Ref<ArrayMesh>()", "The source mesh can not be the same mesh as the existing mesh.", 0, 0);
            *(undefined8*)param_1 = 0;
         }

         LAB_00106eea:cVar14 = RefCounted::unreference();
         if (( cVar14 != '\0' ) && ( cVar14 = cVar14 != '\0' )) {
            ( **(code**)( *(long*)local_240 + 0x140 ) )(local_240);
            Memory::free_static(local_240, false);
         }

         goto LAB_00106d9e;
      }

      cVar14 = RefCounted::unreference();
      if (( cVar14 != '\0' ) && ( cVar14 = cVar14 != '\0' )) {
         local_240 = (Object*)0x0;
         LAB_00107179:( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
         if (local_240 != (Object*)0x0) goto LAB_00106579;
      }

   }

   _err_print_error("bake_mesh_from_current_blend_shape_mix", "scene/3d/mesh_instance_3d.cpp", 0x20d, "Condition \"source_mesh.is_null()\" is true. Returning: Ref<ArrayMesh>()", "The source mesh must be a valid ArrayMesh.", 0, 0);
   *(undefined8*)param_1 = 0;
   LAB_00106d9e:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MeshInstance3D::~MeshInstance3D() */void MeshInstance3D::~MeshInstance3D(MeshInstance3D *this) {
   uint uVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   void *pvVar5;
   bool bVar6;
   *(undefined***)this = &PTR__initialize_classv_001201e8;
   CowData<Ref<Material>>::_unref((CowData<Ref<Material>>*)( this + 0x690 ));
   pvVar5 = *(void**)( this + 0x660 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x684 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x680 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x684 ) = 0;
            *(undefined1(*) [16])( this + 0x670 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x668 ) + lVar4 ) != 0) {
                  bVar6 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x668 ) + lVar4 ) = 0;
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  if (( bVar6 ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x660 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x684 ) = 0;
            *(undefined1(*) [16])( this + 0x670 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010773a;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x668 ), false);
   }

   LAB_0010773a:if (*(void**)( this + 0x650 ) != (void*)0x0) {
      if (*(int*)( this + 0x648 ) != 0) {
         *(undefined4*)( this + 0x648 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x650 ), false);
   }

   NodePath::~NodePath((NodePath*)( this + 0x640 ));
   for (int i = 0; i < 3; i++) {
      if (*(long*)( this + ( -8*i + 1592 ) ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( this + ( -8*i + 1592 ) );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

   }

   if (*(long*)( this + 0x620 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( this + 0x620 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
            GeometryInstance3D::~GeometryInstance3D((GeometryInstance3D*)this);
            return;
         }

      }

   }

   GeometryInstance3D::~GeometryInstance3D((GeometryInstance3D*)this);
   return;
}
/* MeshInstance3D::~MeshInstance3D() */void MeshInstance3D::~MeshInstance3D(MeshInstance3D *this) {
   ~MeshInstance3D(this)
   ;;
   operator_delete(this, 0x6a0);
   return;
}
/* CowData<Ref<Material> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<Material>>::_copy_on_write(CowData<Ref<Material>> *this) {
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
/* MeshInstance3D::set_surface_override_material(int, Ref<Material> const&) */void MeshInstance3D::set_surface_override_material(MeshInstance3D *this, int param_1, Ref *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   code *UNRECOVERED_JUMPTABLE_00;
   char cVar3;
   long lVar4;
   long *plVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   long lVar8;
   long lVar9;
   lVar9 = (long)param_1;
   lVar4 = *(long*)( this + 0x690 );
   if (param_1 < 0) {
      if (lVar4 != 0) {
         lVar4 = *(long*)( lVar4 + -8 );
         goto LAB_00107c41;
      }

   }
 else if (lVar4 != 0) {
      lVar4 = *(long*)( lVar4 + -8 );
      if (lVar4 <= lVar9) goto LAB_00107c41;
      CowData<Ref<Material>>::_copy_on_write((CowData<Ref<Material>>*)( this + 0x690 ));
      lVar4 = *(long*)( this + 0x690 );
      pOVar1 = *(Object**)param_2;
      plVar5 = (long*)( lVar4 + lVar9 * 8 );
      pOVar2 = (Object*)*plVar5;
      if (pOVar1 != pOVar2) {
         *plVar5 = (long)pOVar1;
         if (pOVar1 != (Object*)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *plVar5 = 0;
            }

         }

         if (pOVar2 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

         lVar4 = *(long*)( this + 0x690 );
      }

      if (lVar4 != 0) {
         lVar8 = *(long*)( lVar4 + -8 );
         if (lVar8 <= lVar9) goto LAB_00107bf3;
         if (*(long*)( lVar4 + lVar9 * 8 ) == 0) {
            plVar5 = (long*)RenderingServer::get_singleton();
            UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar5 + 0xd68 );
            uVar6 = VisualInstance3D::get_instance();
            /* WARNING: Could not recover jumptable at 0x00107bb7. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE_00 )(plVar5, uVar6, param_1, 0);
            return;
         }

         plVar5 = (long*)RenderingServer::get_singleton();
         UNRECOVERED_JUMPTABLE_00 = *(code**)( *plVar5 + 0xd68 );
         lVar4 = *(long*)( this + 0x690 );
         if (lVar4 != 0) {
            lVar8 = *(long*)( lVar4 + -8 );
            if (lVar9 < lVar8) {
               uVar6 = ( **(code**)( **(long**)( lVar4 + lVar9 * 8 ) + 0x1c0 ) )();
               uVar7 = VisualInstance3D::get_instance();
               /* WARNING: Could not recover jumptable at 0x00107b7f. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE_00 )(plVar5, uVar7, param_1, uVar6);
               return;
            }

            goto LAB_00107bf3;
         }

      }

      lVar8 = 0;
      LAB_00107bf3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      UNRECOVERED_JUMPTABLE_00 = (code*)invalidInstructionException();
      ( *UNRECOVERED_JUMPTABLE_00 )();
   }

   lVar4 = 0;
   LAB_00107c41:_err_print_index_error("set_surface_override_material", "scene/3d/mesh_instance_3d.cpp", 0x161, lVar9, lVar4, "p_surface", "surface_override_materials.size()", "", false, false);
   return;
}
/* MeshInstance3D::_set(StringName const&, Variant const&) */undefined8 MeshInstance3D::_set(MeshInstance3D *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   int iVar2;
   long lVar3;
   undefined8 uVar4;
   char *pcVar5;
   long in_FS_OFFSET;
   float fVar6;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = VisualInstance3D::get_instance();
   if (lVar3 != 0) {
      local_58 = (char*)( (ulong)local_58 & 0xffffffff00000000 );
      cVar1 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::_lookup_pos((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>*)( this + 0x658 ), param_1, (uint*)&local_58);
      if (( cVar1 != '\0' ) && ( lVar3 = *(long*)( *(long*)( this + 0x660 ) + ( (ulong)local_58 & 0xffffffff ) * 8 ) ),lVar3 != 0) {
         fVar6 = Variant::operator_cast_to_float(param_2);
         set_blend_shape_value(this, *(int*)( lVar3 + 0x18 ), fVar6);
         LAB_00107d3b:uVar4 = 1;
         goto LAB_00107cc7;
      }

      lVar3 = *(long*)param_1;
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

      cVar1 = String::begins_with((char*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar1 != '\0') {
         lVar3 = *(long*)param_1;
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            local_60 = 0;
            if (*(char**)( lVar3 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_60, *(char**)( lVar3 + 8 ));
            }

         }

         String::get_slicec((wchar32)(CowData<char32_t>*)&local_58, (int)(CowData<char32_t>*)&local_60);
         iVar2 = String::to_int();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( ( *(long*)( this + 0x690 ) != 0 ) && ( (long)iVar2 < *(long*)( *(long*)( this + 0x690 ) + -8 ) ) ) && ( -1 < iVar2 )) {
            local_58 = (char*)0x0;
            lVar3 = Variant::get_validated_object();
            if (lVar3 != 0) {
               pcVar5 = (char*)__dynamic_cast(lVar3, &Object::typeinfo, &Material::typeinfo, 0);
               if (pcVar5 != (char*)0x0) {
                  local_58 = pcVar5;
                  cVar1 = RefCounted::reference();
                  if (cVar1 == '\0') {
                     local_58 = (char*)0x0;
                  }

               }

            }

            set_surface_override_material(this, iVar2, (Ref*)&local_58);
            Ref<Material>::unref((Ref<Material>*)&local_58);
            goto LAB_00107d3b;
         }

      }

   }

   uVar4 = 0;
   LAB_00107cc7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* MeshInstance3D::_mesh_changed() */void MeshInstance3D::_mesh_changed(MeshInstance3D *this) {
   CowData<Ref<Material>> *this_00;
   uint uVar1;
   char *__s;
   Object *pOVar2;
   code *pcVar3;
   char cVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   ulong uVar8;
   ulong uVar9;
   uint *puVar10;
   long *plVar11;
   undefined8 uVar12;
   undefined8 uVar13;
   long lVar14;
   long lVar15;
   undefined8 *puVar16;
   long lVar17;
   uint uVar18;
   ulong uVar19;
   ulong uVar20;
   undefined8 *puVar21;
   long in_FS_OFFSET;
   bool bVar22;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)( this + 0x620 ) == (long*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_mesh_changed", "scene/3d/mesh_instance_3d.cpp", 0x186, "Condition \"mesh.is_null()\" is true.", 0, 0);
         return;
      }

      goto LAB_0010870a;
   }

   this_00 = (CowData<Ref<Material>>*)( this + 0x690 );
   iVar5 = ( **(code**)( **(long**)( this + 0x620 ) + 0x1c8 ) )();
   uVar20 = (ulong)iVar5;
   if ((long)uVar20 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else if (*(long*)( this + 0x690 ) == 0) {
      if (uVar20 != 0) {
         uVar19 = 0;
         CowData<Ref<Material>>::_copy_on_write(this_00);
         LAB_00108453:uVar8 = uVar20 * 8 - 1;
         uVar8 = uVar8 | uVar8 >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar17 = ( uVar8 | uVar8 >> 0x20 ) + 1;
         if ((long)uVar19 < (long)uVar20) {
            LAB_00108580:if (uVar19 == 0) {
               puVar16 = (undefined8*)Memory::alloc_static(lVar17 + 0x10, false);
               if (puVar16 == (undefined8*)0x0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               }
 else {
                  puVar21 = puVar16 + 2;
                  *puVar16 = 1;
                  puVar16[1] = 0;
                  *(undefined8**)( this + 0x690 ) = puVar21;
                  lVar17 = 0;
                  LAB_0010804f:if (lVar17 < (long)uVar20) {
                     memset(puVar21 + lVar17, 0, ( uVar20 - lVar17 ) * 8);
                  }

                  puVar21[-1] = uVar20;
               }

            }
 else {
               iVar7 = CowData<Ref<Material>>::_realloc(this_00, lVar17);
               if (iVar7 == 0) {
                  LAB_0010803b:puVar21 = *(undefined8**)( this + 0x690 );
                  if (puVar21 == (undefined8*)0x0) goto LAB_0010bb92;
                  lVar17 = puVar21[-1];
                  goto LAB_0010804f;
               }

            }

         }
 else {
            lVar14 = 0;
            LAB_001084a6:lVar15 = *(long*)( this + 0x690 );
            uVar19 = uVar20;
            if (lVar15 == 0) {
               LAB_0010bb92:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            for (; uVar19 < *(ulong*)( lVar15 + -8 ); uVar19 = uVar19 + 1) {
               while (plVar11 = (long*)( lVar15 + uVar19 * 8 ),*plVar11 != 0) {
                  cVar4 = RefCounted::unreference();
                  if (cVar4 != '\0') {
                     pOVar2 = (Object*)*plVar11;
                     cVar4 = predelete_handler(pOVar2);
                     if (cVar4 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

                  lVar15 = *(long*)( this + 0x690 );
                  uVar19 = uVar19 + 1;
                  if (lVar15 == 0) goto LAB_0010bb92;
                  if (*(ulong*)( lVar15 + -8 ) <= uVar19) goto LAB_001084f8;
               }
;
            }

            LAB_001084f8:if (lVar17 != lVar14) {
               iVar7 = CowData<Ref<Material>>::_realloc(this_00, lVar17);
               if (iVar7 != 0) goto LAB_00108070;
               lVar15 = *(long*)( this + 0x690 );
               if (lVar15 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(ulong*)( lVar15 + -8 ) = uVar20;
         }

      }

   }
 else {
      uVar19 = *(ulong*)( *(long*)( this + 0x690 ) + -8 );
      if (uVar20 != uVar19) {
         if (uVar20 != 0) {
            CowData<Ref<Material>>::_copy_on_write(this_00);
            uVar8 = uVar20 * 8 - 1;
            uVar8 = uVar8 >> 1 | uVar8;
            uVar8 = uVar8 >> 2 | uVar8;
            uVar8 = uVar8 >> 4 | uVar8;
            uVar8 = uVar8 >> 8 | uVar8;
            uVar8 = uVar8 >> 0x10 | uVar8;
            uVar8 = uVar8 >> 0x20 | uVar8;
            lVar17 = uVar8 + 1;
            if (uVar19 * 8 == 0) goto LAB_00108453;
            uVar9 = uVar19 * 8 - 1;
            uVar9 = uVar9 | uVar9 >> 1;
            uVar9 = uVar9 | uVar9 >> 2;
            uVar9 = uVar9 | uVar9 >> 4;
            uVar9 = uVar9 | uVar9 >> 8;
            uVar9 = uVar9 | uVar9 >> 0x10;
            uVar9 = uVar9 | uVar9 >> 0x20;
            lVar14 = uVar9 + 1;
            if ((long)uVar19 < (long)uVar20) {
               if (uVar9 != uVar8) goto LAB_00108580;
               goto LAB_0010803b;
            }

            goto LAB_001084a6;
         }

         CowData<Ref<Material>>::_unref(this_00);
      }

   }

   LAB_00108070:uVar1 = *(uint*)( this + 0x648 );
   uVar6 = ( **(code**)( **(long**)( this + 0x620 ) + 0x218 ) )();
   if (uVar6 < *(uint*)( this + 0x648 )) {
      *(uint*)( this + 0x648 ) = uVar6;
      LAB_001080a3:if (0 < iVar5) {
         if (*(int*)( this + 0x648 ) != 0) {
            LAB_001080bb:uVar19 = 0;
            LAB_00108128:do {
               uVar6 = (uint)uVar19;
               ( **(code**)( **(long**)( this + 0x620 ) + 0x220 ) )(&local_70, *(long**)( this + 0x620 ), uVar19 & 0xffffffff);
               if (local_70 == 0) {
                  local_68 = 0;
               }
 else {
                  __s = *(char**)( local_70 + 8 );
                  local_68 = 0;
                  if (__s == (char*)0x0) {
                     plVar11 = (long*)( *(long*)( local_70 + 0x10 ) + -0x10 );
                     if (*(long*)( local_70 + 0x10 ) != 0) {
                        do {
                           lVar17 = *plVar11;
                           if (lVar17 == 0) goto LAB_00108190;
                           LOCK();
                           lVar14 = *plVar11;
                           bVar22 = lVar17 == lVar14;
                           if (bVar22) {
                              *plVar11 = lVar17 + 1;
                              lVar14 = lVar17;
                           }

                           UNLOCK();
                        }
 while ( !bVar22 );
                        if (lVar14 != -1) {
                           local_68 = *(long*)( local_70 + 0x10 );
                        }

                     }

                  }
 else {
                     local_50 = strlen(__s);
                     local_58 = __s;
                     String::parse_latin1((StrRange*)&local_68);
                  }

               }

               LAB_00108190:operator + ( (char*)&local_60,(String*)"blend_shapes/" );
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               puVar10 = (uint*)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::operator []((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>*)( this + 0x658 ), (StringName*)&local_58);
               bVar22 = StringName::configured != '\0';
               *puVar10 = uVar6;
               if (( bVar22 ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               lVar17 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar11 = (long*)( local_60 + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar17 + -0x10 ), false);
                  }

               }

               lVar17 = local_68;
               if (local_68 != 0) {
                  LOCK();
                  plVar11 = (long*)( local_68 + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     local_68 = 0;
                     Memory::free_static((void*)( lVar17 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
                  StringName::unref();
               }

               if (uVar6 < uVar1) {
                  if (*(uint*)( this + 0x648 ) <= uVar6) {
                     _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar19 & 0xffffffff, ( ulong ) * (uint*)( this + 0x648 ), "p_index", "count", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  lVar17 = uVar19 * 4;
                  uVar19 = uVar19 + 1;
                  set_blend_shape_value(this, uVar6, *(float*)( *(long*)( this + 0x650 ) + lVar17 ));
                  if (*(uint*)( this + 0x648 ) <= (uint)uVar19) break;
                  goto LAB_00108128;
               }

               uVar19 = uVar19 + 1;
               set_blend_shape_value(this, uVar6, 0.0);
            }
 while ( (uint)uVar19 < *(uint*)( this + 0x648 ) );
         }

         uVar19 = 0;
         do {
            lVar17 = *(long*)( this + 0x690 );
            if (lVar17 == 0) {
               LAB_001082fa:lVar14 = 0;
               LAB_001082fd:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar19, lVar14, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar14 = *(long*)( lVar17 + -8 );
            if (lVar14 <= (long)uVar19) goto LAB_001082fd;
            if (*(long*)( lVar17 + uVar19 * 8 ) != 0) {
               plVar11 = (long*)RenderingServer::get_singleton();
               pcVar3 = *(code**)( *plVar11 + 0xd68 );
               lVar17 = *(long*)( this + 0x690 );
               if (lVar17 == 0) goto LAB_001082fa;
               lVar14 = *(long*)( lVar17 + -8 );
               if (lVar14 <= (long)uVar19) goto LAB_001082fd;
               uVar12 = ( **(code**)( **(long**)( lVar17 + uVar19 * 8 ) + 0x1c0 ) )();
               uVar13 = VisualInstance3D::get_instance();
               ( *pcVar3 )(plVar11, uVar13, uVar19 & 0xffffffff, uVar12);
            }

            uVar19 = uVar19 + 1;
         }
 while ( uVar20 != uVar19 );
      }

   }
 else {
      if (uVar6 <= *(uint*)( this + 0x648 )) goto LAB_001080a3;
      if (*(uint*)( this + 0x64c ) < uVar6) {
         uVar18 = uVar6 - 1 >> 1 | uVar6 - 1;
         uVar18 = uVar18 >> 2 | uVar18;
         uVar18 = uVar18 | uVar18 >> 4;
         uVar18 = uVar18 | uVar18 >> 8;
         uVar18 = ( uVar18 | uVar18 >> 0x10 ) + 1;
         *(uint*)( this + 0x64c ) = uVar18;
         lVar17 = Memory::realloc_static(*(void**)( this + 0x650 ), (ulong)uVar18 * 4, false);
         *(long*)( this + 0x650 ) = lVar17;
         if (lVar17 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

      }

      *(uint*)( this + 0x648 ) = uVar6;
      if (0 < iVar5) goto LAB_001080bb;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Node3D::update_gizmos();
      return;
   }

   LAB_0010870a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MeshInstance3D::set_mesh(Ref<Mesh> const&) */void MeshInstance3D::set_mesh(MeshInstance3D *this, Ref *param_1) {
   uint uVar1;
   Callable *pCVar2;
   Callable *pCVar3;
   Object *pOVar4;
   void *pvVar5;
   char cVar6;
   Object *pOVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_58[3];
   long local_40;
   pCVar2 = *(Callable**)( this + 0x620 );
   pCVar3 = *(Callable**)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pCVar3 == pCVar2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      goto LAB_001089ee;
   }

   if (pCVar2 == (Callable*)0x0) {
      *(Callable**)( this + 0x620 ) = pCVar3;
      if (pCVar3 != (Callable*)0x0) {
         cVar6 = RefCounted::reference();
         if (cVar6 != '\0') goto LAB_001087d3;
         *(undefined8*)( this + 0x620 ) = 0;
      }

      LAB_0010889a:if (*(int*)( this + 0x648 ) != 0) {
         *(undefined4*)( this + 0x648 ) = 0;
      }

      if (( *(long*)( this + 0x660 ) != 0 ) && ( *(int*)( this + 0x684 ) != 0 )) {
         lVar8 = 0;
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x680 ) * 4 );
         if (uVar1 != 0) {
            do {
               if (*(int*)( *(long*)( this + 0x668 ) + lVar8 ) != 0) {
                  *(int*)( *(long*)( this + 0x668 ) + lVar8 ) = 0;
                  pvVar5 = *(void**)( *(long*)( this + 0x660 ) + lVar8 * 2 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  *(undefined8*)( *(long*)( this + 0x660 ) + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar1 << 2 );
         }

         *(undefined4*)( this + 0x684 ) = 0;
         *(undefined1(*) [16])( this + 0x670 ) = (undefined1[16])0x0;
      }

      local_58[0] = 0;
      VisualInstance3D::set_base((RID*)this);
      Node3D::update_gizmos();
   }
 else {
      create_custom_callable_function_pointer<MeshInstance3D>((MeshInstance3D*)local_58, (char*)this, (_func_void*)"&MeshInstance3D::_mesh_changed");
      Resource::disconnect_changed(pCVar2);
      Callable::~Callable((Callable*)local_58);
      pOVar4 = *(Object**)param_1;
      pOVar7 = *(Object**)( this + 0x620 );
      if (pOVar4 != pOVar7) {
         *(Object**)( this + 0x620 ) = pOVar4;
         if (pOVar4 == (Object*)0x0) {
            LAB_001087ba:if (pOVar7 == (Object*)0x0) goto LAB_0010889a;
         }
 else {
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
               *(undefined8*)( this + 0x620 ) = 0;
               goto LAB_001087ba;
            }

            if (pOVar7 == (Object*)0x0) goto LAB_001087d3;
         }

         cVar6 = RefCounted::unreference();
         if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
         }

         LAB_001087d3:pOVar7 = *(Object**)( this + 0x620 );
      }

      if (pOVar7 == (Object*)0x0) goto LAB_0010889a;
      local_58[0] = ( **(code**)( *(long*)pOVar7 + 0x1c0 ) )(pOVar7);
      VisualInstance3D::set_base((RID*)this);
      pCVar2 = *(Callable**)( this + 0x620 );
      create_custom_callable_function_pointer<MeshInstance3D>((MeshInstance3D*)local_58, (char*)this, (_func_void*)"&MeshInstance3D::_mesh_changed");
      Resource::connect_changed(pCVar2, (uint)local_58);
      Callable::~Callable((Callable*)local_58);
      _mesh_changed(this);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Object::notify_property_list_changed();
      return;
   }

   LAB_001089ee:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Vector<Color>::push_back(Color) [clone .isra.0] */void Vector<Color>::push_back(undefined8 param_1, undefined8 param_2, long param_3) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   if (*(long*)( param_3 + 8 ) == 0) {
      lVar4 = 1;
   }
 else {
      lVar4 = *(long*)( *(long*)( param_3 + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<Color>::resize<false>((CowData<Color>*)( param_3 + 8 ), lVar4);
   if (iVar1 == 0) {
      if (*(long*)( param_3 + 8 ) == 0) {
         lVar3 = -1;
         lVar4 = 0;
      }
 else {
         lVar4 = *(long*)( *(long*)( param_3 + 8 ) + -8 );
         lVar3 = lVar4 + -1;
         if (-1 < lVar3) {
            CowData<Color>::_copy_on_write((CowData<Color>*)( param_3 + 8 ));
            puVar2 = (undefined8*)( lVar3 * 0x10 + *(long*)( param_3 + 8 ) );
            *puVar2 = param_1;
            puVar2[1] = param_2;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar4, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* MeshInstance3D::create_debug_tangents_node() */MeshInstance3D * __thiscall MeshInstance3D::create_debug_tangents_node(MeshInstance3D *this){
   float fVar1;
   float fVar2;
   float fVar3;
   float fVar4;
   float fVar5;
   long *plVar6;
   code *pcVar7;
   Object *pOVar8;
   char cVar9;
   int iVar10;
   undefined8 *puVar11;
   undefined8 *puVar12;
   Variant *pVVar13;
   MeshInstance3D *this_00;
   long lVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   int iVar18;
   long lVar19;
   long in_FS_OFFSET;
   float fVar20;
   undefined8 uVar21;
   float fVar22;
   float fVar23;
   float fVar25;
   undefined1 auVar24[16];
   undefined8 uVar26;
   undefined8 uVar27;
   float fVar28;
   float fVar29;
   undefined1 auVar30[16];
   float fVar31;
   float fVar32;
   long *local_108;
   Object *local_100;
   long *local_f8;
   Array local_f0[8];
   Vector local_e8[8];
   long local_e0;
   Vector local_d8[8];
   long local_d0;
   Variant local_c8[8];
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   long local_a0[2];
   undefined8 local_90;
   float local_88;
   undefined8 local_80;
   float local_78;
   undefined8 local_70;
   float local_68;
   undefined8 local_64;
   undefined4 local_5c;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   plVar6 = *(long**)( this + 0x620 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e0 = 0;
   local_d0 = 0;
   local_108 = (long*)0x0;
   if (plVar6 != (long*)0x0) {
      local_108 = plVar6;
      cVar9 = RefCounted::reference();
      if (cVar9 == '\0') {
         local_108 = (long*)0x0;
      }
 else {
         for (iVar18 = 0; iVar10 = ( **(code**)( *plVar6 + 0x1c8 ) )(plVar6),iVar18 < iVar10; iVar18 = iVar18 + 1) {
            ( **(code**)( *plVar6 + 0x1e0 ) )(local_f0, plVar6, iVar18);
            iVar10 = Array::size();
            if (iVar10 == 0xd) {
               iVar10 = (int)local_f0;
               Array::operator [](iVar10);
               Variant::operator_cast_to_Vector(local_c8);
               Array::operator [](iVar10);
               Variant::operator_cast_to_Vector((Variant*)&local_b8);
               if (( local_b0 != 0 ) && ( *(long*)( local_b0 + -8 ) != 0 )) {
                  Array::operator [](iVar10);
                  Variant::operator_cast_to_Vector((Variant*)&local_a8);
                  if (( local_a0[0] != 0 ) && ( *(long*)( local_a0[0] + -8 ) != 0 )) {
                     lVar19 = 0;
                     lVar16 = 0xc;
                     for (lVar15 = 0; ( local_c0 != 0 && ( lVar15 < *(long*)( local_c0 + -8 ) ) ); lVar15 = lVar15 + 1) {
                        puVar11 = (undefined8*)( local_c0 + lVar19 * 3 );
                        local_64 = *puVar11;
                        fVar1 = *(float*)( puVar11 + 1 );
                        local_5c = *(undefined4*)( puVar11 + 1 );
                        lVar14 = lVar15;
                        if (local_b0 == 0) {
                           lVar17 = 0;
                           LAB_0010913e:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar14, lVar17, "p_index", "size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar7 = (code*)invalidInstructionException();
                           ( *pcVar7 )();
                        }

                        lVar17 = *(long*)( local_b0 + -8 );
                        if (lVar17 <= lVar15) goto LAB_0010913e;
                        puVar12 = (undefined8*)( local_b0 + lVar19 * 3 );
                        lVar14 = lVar19 + 2;
                        uVar21 = *puVar12;
                        uVar26 = *(undefined8*)( (long)puVar12 + 4 );
                        if (local_a0[0] == 0) {
                           lVar17 = 0;
                           goto LAB_0010913e;
                        }

                        lVar17 = *(long*)( local_a0[0] + -8 );
                        if (lVar17 <= lVar14) goto LAB_0010913e;
                        fVar2 = *(float*)( local_a0[0] + -4 + lVar16 );
                        lVar14 = lVar19 + 1;
                        if (( lVar17 <= lVar19 + 1 ) || ( fVar3 = *(float*)( local_a0[0] + -8 + lVar16 ) ),lVar14 = lVar19,lVar17 <= lVar19) goto LAB_0010913e;
                        fVar4 = *(float*)( local_a0[0] + lVar15 * 0x10 );
                        lVar14 = lVar19 + 3;
                        if (lVar17 <= lVar14) goto LAB_0010913e;
                        fVar25 = (float)( (ulong)uVar26 >> 0x20 );
                        fVar22 = (float)uVar21;
                        fVar23 = (float)( (ulong)uVar21 >> 0x20 );
                        fVar5 = *(float*)( local_a0[0] + lVar16 );
                        auVar24._0_4_ = (float)uVar26 * fVar2 - fVar3 * fVar25;
                        auVar24._4_4_ = fVar25 * fVar4 - fVar22 * fVar2;
                        auVar24._8_4_ = 0;
                        auVar24._12_4_ = 0.0 - fVar23;
                        fVar28 = fVar3 * fVar22 - fVar4 * fVar23;
                        fVar20 = auVar24._0_4_ * auVar24._0_4_ + auVar24._4_4_ * auVar24._4_4_ + fVar28 * fVar28;
                        fVar31 = 0.0;
                        fVar32 = 0.0;
                        fVar29 = 0.0;
                        if (fVar20 != 0.0) {
                           fVar20 = SQRT(fVar20);
                           fVar29 = fVar28 / fVar20;
                           auVar30._4_4_ = fVar20;
                           auVar30._0_4_ = fVar20;
                           auVar30._8_8_ = _LC147;
                           auVar24 = divps(auVar24, auVar30);
                           fVar31 = auVar24._0_4_;
                           fVar32 = auVar24._4_4_;
                        }

                        lVar19 = lVar19 + 4;
                        fVar20 = (float)*puVar11;
                        fVar28 = (float)( ( ulong ) * puVar11 >> 0x20 );
                        uVar26 = CONCAT44(fVar3 * _LC167._4_4_ + fVar28, fVar4 * (float)_LC167 + fVar20);
                        uVar21 = CONCAT44(fVar5 * fVar32 * _LC167._4_4_ + fVar28, fVar5 * fVar31 * (float)_LC167 + fVar20);
                        uVar27 = CONCAT44(fVar28 + fVar23 * _LC167._4_4_, fVar20 + fVar22 * (float)_LC167);
                        Vector<Vector3>::push_back(local_64, local_5c, local_e8);
                        Vector<Color>::push_back(0, 0x3f8000003f800000, local_d8);
                        local_88 = fVar25 * (float)_LC167 + fVar1;
                        local_90 = uVar27;
                        Vector<Vector3>::push_back(uVar27, local_88, local_e8);
                        Vector<Color>::push_back(0, 0x3f8000003f800000, local_d8);
                        Vector<Vector3>::push_back(local_64, local_5c, local_e8);
                        Vector<Color>::push_back(0x3f800000, 0x3f80000000000000, local_d8);
                        local_78 = fVar2 * (float)_LC167 + fVar1;
                        local_80 = uVar26;
                        Vector<Vector3>::push_back(uVar26, local_78, local_e8);
                        Vector<Color>::push_back(0x3f800000, 0x3f80000000000000, local_d8);
                        Vector<Vector3>::push_back(local_64, local_5c, local_e8);
                        Vector<Color>::push_back(0x3f80000000000000, 0x3f80000000000000, local_d8);
                        local_68 = fVar5 * fVar29 * (float)_LC167 + fVar1;
                        local_70 = uVar21;
                        Vector<Vector3>::push_back(uVar21, local_68, local_e8);
                        Vector<Color>::push_back(0x3f80000000000000, 0x3f80000000000000, local_d8);
                        lVar16 = lVar16 + 0x10;
                     }

                  }

                  CowData<float>::_unref((CowData<float>*)local_a0);
               }

               CowData<Vector3>::_unref((CowData<Vector3>*)&local_b0);
               CowData<Vector3>::_unref((CowData<Vector3>*)&local_c0);
            }
 else {
               _err_print_error("create_debug_tangents_node", "scene/3d/mesh_instance_3d.cpp", 0x1ad, "Condition \"arrays.size() != Mesh::ARRAY_MAX\" is true. Continuing.", 0);
            }

            Array::~Array(local_f0);
         }

         if (( local_e0 != 0 ) && ( *(long*)( local_e0 + -8 ) != 0 )) {
            local_100 = (Object*)0x0;
            Ref<StandardMaterial3D>::instantiate<>((Ref<StandardMaterial3D>*)&local_100);
            pOVar8 = local_100;
            BaseMaterial3D::set_shading_mode(local_100, 0);
            BaseMaterial3D::set_flag(pOVar8, 2, 1);
            BaseMaterial3D::set_flag(pOVar8, 1, 1);
            BaseMaterial3D::set_flag(pOVar8, 0x15, 1);
            local_f8 = (long*)0x0;
            Ref<ArrayMesh>::instantiate<>((Ref<ArrayMesh>*)&local_f8);
            Array::Array(local_f0);
            iVar18 = (int)local_f0;
            Array::resize(iVar18);
            Variant::Variant((Variant*)&local_58, local_e8);
            pVVar13 = (Variant*)Array::operator [](iVar18);
            Variant::operator =(pVVar13, (Variant*)&local_58);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)&local_58, local_d8);
            pVVar13 = (Variant*)Array::operator [](iVar18);
            Variant::operator =(pVVar13, (Variant*)&local_58);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            plVar6 = local_f8;
            Dictionary::Dictionary((Dictionary*)&local_b8);
            Array::Array((Array*)local_c8);
            local_58 = 0;
            local_a8 = 0;
            local_50 = (undefined1[16])0x0;
            Array::set_typed((uint)(Array*)local_c8, (StringName*)0x1c, (Variant*)&local_a8);
            if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
               StringName::unref();
            }

            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            ArrayMesh::add_surface_from_arrays(plVar6, 1, local_f0, (Array*)local_c8, (Dictionary*)&local_b8, 0);
            Array::~Array((Array*)local_c8);
            Dictionary::~Dictionary((Dictionary*)&local_b8);
            pcVar7 = *(code**)( *plVar6 + 0x208 );
            local_b8 = 0;
            if (( pOVar8 != (Object*)0x0 ) && ( lVar16 = __dynamic_cast(pOVar8, &Object::typeinfo, &Material::typeinfo, 0) ),lVar16 != 0) {
               local_a8 = 0;
               local_b8 = lVar16;
               cVar9 = RefCounted::reference();
               if (cVar9 == '\0') {
                  local_b8 = 0;
               }

               Ref<Material>::unref((Ref<Material>*)&local_a8);
            }

            ( *pcVar7 )(plVar6, 0, (Dictionary*)&local_b8);
            Ref<Material>::unref((Ref<Material>*)&local_b8);
            this_00 = (MeshInstance3D*)operator_new(0x6a0, "");
            MeshInstance3D(this_00);
            postinitialize_handler((Object*)this_00);
            local_b8 = 0;
            lVar16 = __dynamic_cast(plVar6, &Object::typeinfo, &Mesh::typeinfo, 0);
            if (lVar16 != 0) {
               local_a8 = 0;
               local_b8 = lVar16;
               cVar9 = RefCounted::reference();
               if (cVar9 == '\0') {
                  local_b8 = 0;
               }

               Ref<Mesh>::unref((Ref<Mesh>*)&local_a8);
            }

            set_mesh(this_00, (Ref*)&local_b8);
            Ref<Mesh>::unref((Ref<Mesh>*)&local_b8);
            local_a8 = 0;
            String::parse_latin1((String*)&local_a8, "DebugTangents");
            Node::set_name((String*)this_00);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
            Array::~Array(local_f0);
            Ref<ArrayMesh>::unref((Ref<ArrayMesh>*)&local_f8);
            if (( ( pOVar8 != (Object*)0x0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0' )) &&( cVar9 = cVar9 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
            Memory::free_static(pOVar8, false);
         }

         goto LAB_0010904c;
      }

   }

}
this_00 = (MeshInstance3D*)0x0;LAB_0010904c:Ref<Mesh>::unref((Ref<Mesh>*)&local_108);lVar16 = local_d0;if (local_d0 != 0) {
   LOCK();
   plVar6 = (long*)( local_d0 + -0x10 );
   *plVar6 = *plVar6 + -1;
   UNLOCK();
   if (*plVar6 == 0) {
      local_d0 = 0;
      Memory::free_static((void*)( lVar16 + -0x10 ), false);
   }

}
CowData<Vector3>::_unref((CowData<Vector3>*)&local_e0);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return this_00;}/* MeshInstance3D::create_debug_tangents() */void MeshInstance3D::create_debug_tangents(MeshInstance3D *this) {
   Node *pNVar1;
   MeshInstance3D *pMVar2;
   pNVar1 = (Node*)create_debug_tangents_node(this);
   if (pNVar1 == (Node*)0x0) {
      return;
   }

   Node::add_child(this, pNVar1, 1, 0);
   if (( (byte)this[0x2fa] & 0x40 ) != 0) {
      if (*(long*)( this + 0x240 ) == 0) {
         _err_print_error("get_tree", "./scene/main/node.h", 0x1e5, "Parameter \"data.tree\" is null.", 0, 0);
      }

      pMVar2 = (MeshInstance3D*)SceneTree::get_edited_scene_root();
      if (this == pMVar2) goto LAB_001095ea;
   }

   Node::get_owner();
   LAB_001095ea:Node::set_owner(pNVar1);
   return;
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
   return (uint)CONCAT71(0x120c, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* BaseMaterial3D::_can_do_next_pass() const */undefined8 BaseMaterial3D::_can_do_next_pass(void) {
   return 1;
}
/* BaseMaterial3D::_can_use_render_priority() const */undefined8 BaseMaterial3D::_can_use_render_priority(void) {
   return 1;
}
/* StandardMaterial3D::is_class_ptr(void*) const */uint StandardMaterial3D::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x120b, in_RSI == &BaseMaterial3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, in_RSI == &Material::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, in_RSI == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, in_RSI == &RefCounted::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* StandardMaterial3D::_getv(StringName const&, Variant&) const */undefined8 StandardMaterial3D::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StandardMaterial3D::_property_can_revertv(StringName const&) const */undefined8 StandardMaterial3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* StandardMaterial3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 StandardMaterial3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StandardMaterial3D::_notificationv(int, bool) */void StandardMaterial3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* MeshConvexDecompositionSettings::is_class_ptr(void*) const */uint MeshConvexDecompositionSettings::is_class_ptr(MeshConvexDecompositionSettings *this, void *param_1) {
   return (uint)CONCAT71(0x120b, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120c, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* MeshConvexDecompositionSettings::_getv(StringName const&, Variant&) const */undefined8 MeshConvexDecompositionSettings::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MeshConvexDecompositionSettings::_setv(StringName const&, Variant const&) */undefined8 MeshConvexDecompositionSettings::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MeshConvexDecompositionSettings::_validate_propertyv(PropertyInfo&) const */void MeshConvexDecompositionSettings::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* MeshConvexDecompositionSettings::_property_can_revertv(StringName const&) const */undefined8 MeshConvexDecompositionSettings::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* MeshConvexDecompositionSettings::_property_get_revertv(StringName const&, Variant&) const */undefined8 MeshConvexDecompositionSettings::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MeshConvexDecompositionSettings::_notificationv(int, bool) */void MeshConvexDecompositionSettings::_notificationv(int param_1, bool param_2) {
   return;
}
/* Node3D::set_transform_gizmo_visible(bool) */void Node3D::set_transform_gizmo_visible(Node3D *this, bool param_1) {
   this[0x518] = ( Node3D )((byte)this[0x518] & 0xfb | param_1 * '\x04');
   return;
}
/* Node3D::is_transform_gizmo_visible() const */byte Node3D::is_transform_gizmo_visible(Node3D *this) {
   return (byte)this[0x518] >> 2 & 1;
}
/* MeshInstance3D::is_class_ptr(void*) const */uint MeshInstance3D::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x120b, in_RSI == &GeometryInstance3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, in_RSI == &VisualInstance3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, in_RSI == &Node3D::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* NavigationMeshSourceGeometryData3D::is_class_ptr(void*) const */uint NavigationMeshSourceGeometryData3D::is_class_ptr(NavigationMeshSourceGeometryData3D *this, void *param_1) {
   return (uint)CONCAT71(0x120b, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120b, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x120c, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* NavigationMeshSourceGeometryData3D::_validate_propertyv(PropertyInfo&) const */void NavigationMeshSourceGeometryData3D::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* NavigationMeshSourceGeometryData3D::_property_can_revertv(StringName const&) const */undefined8 NavigationMeshSourceGeometryData3D::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* NavigationMeshSourceGeometryData3D::_property_get_revertv(StringName const&, Variant&) const */undefined8 NavigationMeshSourceGeometryData3D::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* NavigationMeshSourceGeometryData3D::_notificationv(int, bool) */void NavigationMeshSourceGeometryData3D::_notificationv(int param_1, bool param_2) {
   return;
}
/* CallableCustomStaticMethodPointer<void, Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*> *this) {
   return;
}
/* CallableCustomMethodPointer<MeshInstance3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<MeshInstance3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<MeshInstance3D,void> *this) {
   return;
}
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::_gen_argument_type(int) const */undefined8 MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<int, float>::_gen_argument_type(int) const */int MethodBindT<int,float>::_gen_argument_type(MethodBindT<int,float> *this, int param_1) {
   int iVar1;
   iVar1 = 3 - ( uint )(param_1 == 0);
   if (1 < (uint)param_1) {
      iVar1 = 0;
   }

   return iVar1;
}
/* MethodBindT<int, float>::get_argument_meta(int) const */char MethodBindT<int,float>::get_argument_meta(MethodBindT<int,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x03';
   if (param_1 != 0) {
      cVar1 = ( param_1 == 1 ) * '\t';
   }

   return cVar1;
}
/* MethodBindTRC<float, int>::_gen_argument_type(int) const */int MethodBindTRC<float,int>::_gen_argument_type(MethodBindTRC<float,int> *this, int param_1) {
   return 3 - ( uint )(param_1 == 0);
}
/* MethodBindTRC<float, int>::get_argument_meta(int) const */byte MethodBindTRC<float,int>::get_argument_meta(MethodBindTRC<float,int> *this, int param_1) {
   if (-1 < param_1) {
      return -(param_1 == 0) & 3;
   }

   return 9;
}
/* MethodBindTR<int, StringName const&>::_gen_argument_type(int) const */char MethodBindTR<int,StringName_const&>::_gen_argument_type(MethodBindTR<int,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x13U ) + 2;
}
/* MethodBindTR<int, StringName const&>::get_argument_meta(int) const */uint MethodBindTR<int,StringName_const&>::get_argument_meta(MethodBindTR<int,StringName_const&> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::_gen_argument_type(MethodBindT<Ref<MeshConvexDecompositionSettings>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<bool, bool>::_gen_argument_type(int) const */bool MethodBindT<bool,bool>::_gen_argument_type(MethodBindT<bool,bool> *this, int param_1) {
   return (uint)param_1 < 2;
}
/* MethodBindT<bool, bool>::get_argument_meta(int) const */undefined8 MethodBindT<bool,bool>::get_argument_meta(int param_1) {
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
/* MethodBindTRC<Ref<Material>, int>::_gen_argument_type(int) const */int MethodBindTRC<Ref<Material>,int>::_gen_argument_type(MethodBindTRC<Ref<Material>,int> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
}
/* MethodBindTRC<Ref<Material>, int>::get_argument_meta(int) const */byte MethodBindTRC<Ref<Material>,int>::get_argument_meta(MethodBindTRC<Ref<Material>,int> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<int, Ref<Material> const&>::_gen_argument_type(int) const */int MethodBindT<int,Ref<Material>const&>::_gen_argument_type(MethodBindT<int,Ref<Material>const&> *this, int param_1) {
   int iVar1;
   iVar1 = 0;
   if ((uint)param_1 < 2) {
      iVar1 = ( -(uint)(param_1 == 0) & 0xffffffea ) + 0x18;
   }

   return iVar1;
}
/* MethodBindT<int, Ref<Material> const&>::get_argument_meta(int) const */byte MethodBindT<int,Ref<Material>const&>::get_argument_meta(MethodBindT<int,Ref<Material>const&> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTRC<Ref<SkinReference>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<SkinReference>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<SkinReference>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<SkinReference>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Skin>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Skin>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<Skin>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Skin>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<Skin> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<Skin>const&>::_gen_argument_type(MethodBindT<Ref<Skin>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<Skin> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Skin>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<NodePath>::_gen_argument_type(int) const */undefined8 MethodBindTR<NodePath>::_gen_argument_type(int param_1) {
   return 0x16;
}
/* MethodBindTR<NodePath>::get_argument_meta(int) const */undefined8 MethodBindTR<NodePath>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<NodePath const&>::_gen_argument_type(int) const */byte MethodBindT<NodePath_const&>::_gen_argument_type(MethodBindT<NodePath_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x16;
}
/* MethodBindT<NodePath const&>::get_argument_meta(int) const */undefined8 MethodBindT<NodePath_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<Mesh>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<Mesh>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<Mesh>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<Mesh>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Ref<Mesh> const&>::_gen_argument_type(int) const */byte MethodBindT<Ref<Mesh>const&>::_gen_argument_type(MethodBindT<Ref<Mesh>const&> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<Mesh> const&>::get_argument_meta(int) const */undefined8 MethodBindT<Ref<Mesh>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*>::is_valid() const */undefined8 CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*>::is_valid(void) {
   return 1;
}
/* CallableCustomStaticMethodPointer<void, Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*>::get_object() const */undefined8 CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*>::get_object(void) {
   return 0;
}
/* CallableCustomStaticMethodPointer<void, Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*>::get_argument_count(bool&) const */undefined8 CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*>::get_argument_count(CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*> *this, bool *param_1) {
   *param_1 = true;
   return 3;
}
/* CallableCustomMethodPointer<MeshInstance3D, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<MeshInstance3D,void>::get_argument_count(CallableCustomMethodPointer<MeshInstance3D,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* StandardMaterial3D::~StandardMaterial3D() */void StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0011fcb0;
   BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D*)this);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* StandardMaterial3D::~StandardMaterial3D() */void StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this) {
   *(undefined***)this = &PTR__initialize_classv_0011fcb0;
   BaseMaterial3D::~BaseMaterial3D((BaseMaterial3D*)this);
   operator_delete(this, 0x558);
   return;
}
/* CallableCustomMethodPointer<MeshInstance3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<MeshInstance3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<MeshInstance3D,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomStaticMethodPointer<void, Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*> *this) {
   operator_delete(this, 0x30);
   return;
}
/* StandardMaterial3D::_setv(StringName const&, Variant const&) */undefined8 StandardMaterial3D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00127010 != Object::_set) {
      uVar1 = StandardMaterial3D::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011fb50;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011fb50;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings() */void MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings(MeshConvexDecompositionSettings *this) {
   *(undefined***)this = &PTR__initialize_classv_0011fb50;
   Object::~Object((Object*)this);
   return;
}
/* MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings() */void MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings(MeshConvexDecompositionSettings *this) {
   *(undefined***)this = &PTR__initialize_classv_0011fb50;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1b0);
   return;
}
/* NavigationMeshSourceGeometryData3D::_getv(StringName const&, Variant&) const */undefined8 NavigationMeshSourceGeometryData3D::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__get_00127018 != Object::_get) {
      uVar1 = NavigationMeshSourceGeometryData3D::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* NavigationMeshSourceGeometryData3D::_setv(StringName const&, Variant const&) */undefined8 NavigationMeshSourceGeometryData3D::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00127020 != Object::_set) {
      uVar1 = NavigationMeshSourceGeometryData3D::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* MethodBindT<Ref<Mesh> const&>::~MethodBindT() */void MethodBindT<Ref<Mesh>const&>::~MethodBindT(MethodBindT<Ref<Mesh>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120500;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Mesh> const&>::~MethodBindT() */void MethodBindT<Ref<Mesh>const&>::~MethodBindT(MethodBindT<Ref<Mesh>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120500;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */void MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120560;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */void MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120560;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001205c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001205c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<NodePath>::~MethodBindTR() */void MethodBindTR<NodePath>::~MethodBindTR(MethodBindTR<NodePath> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120620;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<NodePath>::~MethodBindTR() */void MethodBindTR<NodePath>::~MethodBindTR(MethodBindTR<NodePath> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120620;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<Skin> const&>::~MethodBindT() */void MethodBindT<Ref<Skin>const&>::~MethodBindT(MethodBindT<Ref<Skin>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120680;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<Skin> const&>::~MethodBindT() */void MethodBindT<Ref<Skin>const&>::~MethodBindT(MethodBindT<Ref<Skin>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120680;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Skin>>::~MethodBindTRC() */void MethodBindTRC<Ref<Skin>>::~MethodBindTRC(MethodBindTRC<Ref<Skin>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001206e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Skin>>::~MethodBindTRC() */void MethodBindTRC<Ref<Skin>>::~MethodBindTRC(MethodBindTRC<Ref<Skin>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001206e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<SkinReference>>::~MethodBindTRC() */void MethodBindTRC<Ref<SkinReference>>::~MethodBindTRC(MethodBindTRC<Ref<SkinReference>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120740;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<SkinReference>>::~MethodBindTRC() */void MethodBindTRC<Ref<SkinReference>>::~MethodBindTRC(MethodBindTRC<Ref<SkinReference>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120740;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, Ref<Material> const&>::~MethodBindT() */void MethodBindT<int,Ref<Material>const&>::~MethodBindT(MethodBindT<int,Ref<Material>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120800;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, Ref<Material> const&>::~MethodBindT() */void MethodBindT<int,Ref<Material>const&>::~MethodBindT(MethodBindT<int,Ref<Material>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120800;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<Material>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Material>,int>::~MethodBindTRC(MethodBindTRC<Ref<Material>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120860;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<Material>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Material>,int>::~MethodBindTRC(MethodBindTRC<Ref<Material>,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120860;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool, bool>::~MethodBindT() */void MethodBindT<bool,bool>::~MethodBindT(MethodBindT<bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120920;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool, bool>::~MethodBindT() */void MethodBindT<bool,bool>::~MethodBindT(MethodBindT<bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120920;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::~MethodBindT() */void MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::~MethodBindT(MethodBindT<Ref<MeshConvexDecompositionSettings>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120980;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::~MethodBindT() */void MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::~MethodBindT(MethodBindT<Ref<MeshConvexDecompositionSettings>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120980;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001207a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001207a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<int, StringName const&>::~MethodBindTR() */void MethodBindTR<int,StringName_const&>::~MethodBindTR(MethodBindTR<int,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001209e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<int, StringName const&>::~MethodBindTR() */void MethodBindTR<int,StringName_const&>::~MethodBindTR(MethodBindTR<int,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001209e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float, int>::~MethodBindTRC() */void MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120a40;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float, int>::~MethodBindTRC() */void MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120a40;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int, float>::~MethodBindT() */void MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120aa0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int, float>::~MethodBindT() */void MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120aa0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001208c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001208c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::~MethodBindTR() */void MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::~MethodBindTR(MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120b00;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::~MethodBindTR() */void MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::~MethodBindTR(MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00120b00;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* CallableCustomMethodPointer<MeshInstance3D, void>::get_object() const */undefined8 CallableCustomMethodPointer<MeshInstance3D,void>::get_object(CallableCustomMethodPointer<MeshInstance3D,void> *this) {
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
         goto LAB_0010b37d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010b37d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010b37d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* StandardMaterial3D::_validate_propertyv(PropertyInfo&) const */void StandardMaterial3D::_validate_propertyv(PropertyInfo *param_1) {
   Material::_validate_property(param_1);
   if ((code*)PTR__validate_property_00127028 == Material::_validate_property) {
      return;
   }

   BaseMaterial3D::_validate_property(param_1);
   return;
}
/* MeshInstance3D::_validate_propertyv(PropertyInfo&) const */void MeshInstance3D::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00127030 == VisualInstance3D::_validate_property) {
      return;
   }

   GeometryInstance3D::_validate_property(param_1);
   return;
}
/* Material::get_save_class() const */Material * __thiscall Material::get_save_class(Material *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Material::get_base_extension() const */Material * __thiscall Material::get_base_extension(Material *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b6d3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b6d3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010b73e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010b73e:return &_get_class_namev();
}
/* MeshInstance3D::_get_class_namev() const */undefined8 *MeshInstance3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b7c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b7c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshInstance3D");
         goto LAB_0010b82e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshInstance3D");
   LAB_0010b82e:return &_get_class_namev();
}
/* MeshConvexDecompositionSettings::_get_class_namev() const */undefined8 *MeshConvexDecompositionSettings::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b8c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b8c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshConvexDecompositionSettings");
         goto LAB_0010b92e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MeshConvexDecompositionSettings");
   LAB_0010b92e:return &_get_class_namev();
}
/* NavigationMeshSourceGeometryData3D::_get_class_namev() const */undefined8 *NavigationMeshSourceGeometryData3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010b9c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010b9c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "NavigationMeshSourceGeometryData3D");
         goto LAB_0010ba2e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "NavigationMeshSourceGeometryData3D");
   LAB_0010ba2e:return &_get_class_namev();
}
/* StandardMaterial3D::_get_class_namev() const */undefined8 *StandardMaterial3D::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010bab3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010bab3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StandardMaterial3D");
         goto LAB_0010bb1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StandardMaterial3D");
   LAB_0010bb1e:return &_get_class_namev();
}
/* CowData<Color>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Color>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MeshInstance3D::create_multiple_convex_collisions_node(Ref<MeshConvexDecompositionSettings>
   const&) [clone .cold] */void MeshInstance3D::create_multiple_convex_collisions_node(Ref *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<float>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<float>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<Material> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<Material>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* MeshInstance3D::_mesh_changed() [clone .cold] */void MeshInstance3D::_mesh_changed(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MeshInstance3D::_property_can_revertv(StringName const&) const */undefined8 MeshInstance3D::_property_can_revertv(MeshInstance3D *this, StringName *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   undefined8 uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   if (( *(long*)( this + 0x660 ) != 0 ) && ( *(int*)( this + 0x684 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x680 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x680 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x668 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         while (( uVar11 != uVar15 || ( *(long*)( *(long*)( *(long*)( this + 0x660 ) + lVar14 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x668 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
            if (( uVar15 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,SUB164(auVar6 * auVar10, 8) < uVar16) goto LAB_0010bca0;
         }
;
         if (*(long*)( *(long*)( this + 0x660 ) + (ulong)uVar13 * 8 ) != 0) {
            return 1;
         }

      }

   }

   LAB_0010bca0:if ((code*)PTR__property_can_revert_00127038 == Object::_property_can_revert) {
      return 0;
   }

   uVar12 = Node3D::_property_can_revert((StringName*)this);
   return uVar12;
}
/* NavigationMeshSourceGeometryData3D::get_class() const */void NavigationMeshSourceGeometryData3D::get_class(void) {
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
/* StandardMaterial3D::get_class() const */void StandardMaterial3D::get_class(void) {
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
/* MeshInstance3D::get_class() const */void MeshInstance3D::get_class(void) {
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
/* MeshConvexDecompositionSettings::get_class() const */void MeshConvexDecompositionSettings::get_class(void) {
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
/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */void NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D(NavigationMeshSourceGeometryData3D *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   *(undefined***)this = &PTR__initialize_classv_00120010;
   NavigationMeshSourceGeometryData3D::clear();
   if (*(long*)( this + 0x2c0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2c0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2c0 );
         if (lVar2 == 0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)( this + 0x2c0 ) = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x20;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x290 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x290 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x290 );
         *(undefined8*)( this + 0x290 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x280 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x280 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x280 );
         *(undefined8*)( this + 0x280 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */void NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D(NavigationMeshSourceGeometryData3D *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   *(undefined***)this = &PTR__initialize_classv_00120010;
   NavigationMeshSourceGeometryData3D::clear();
   if (*(long*)( this + 0x2c0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2c0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2c0 );
         if (lVar2 == 0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)( this + 0x2c0 ) = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x20;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x290 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x290 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x290 );
         *(undefined8*)( this + 0x290 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x280 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x280 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x280 );
         *(undefined8*)( this + 0x280 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2f8);
   return;
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
                  if (lVar5 == 0) goto LAB_0010c3ef;
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

      LAB_0010c3ef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010c4a3;
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
                     if (lVar5 == 0) goto LAB_0010c553;
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

         LAB_0010c553:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_0010c4a3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_0010c4a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshConvexDecompositionSettings::is_class(String const&) const */undefined8 MeshConvexDecompositionSettings::is_class(MeshConvexDecompositionSettings *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010c67f;
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

      LAB_0010c67f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010c733;
   }

   cVar5 = String::operator ==(param_1, "MeshConvexDecompositionSettings");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010c733:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
/* Variant::TEMPNAMEPLACEHOLDERVALUE(Variant&&) */void Variant::operator =(Variant *this, Variant *param_1) {
   undefined8 uVar1;
   if (this != param_1) {
      if (needs_deinit[*(int*)this] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)this = 0;
      *(undefined4*)this = *(undefined4*)param_1;
      uVar1 = *(undefined8*)( param_1 + 0x10 );
      *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
      *(undefined8*)( this + 0x10 ) = uVar1;
      *(undefined4*)param_1 = 0;
      return;
   }

   return;
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
/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010ca7f;
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

      LAB_0010ca7f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010cb33;
   }

   cVar5 = String::operator ==(param_1, "Resource");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010cb33:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* NavigationMeshSourceGeometryData3D::is_class(String const&) const */undefined8 NavigationMeshSourceGeometryData3D::is_class(NavigationMeshSourceGeometryData3D *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010cbff;
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

      LAB_0010cbff:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010ccb3;
   }

   cVar5 = String::operator ==(param_1, "NavigationMeshSourceGeometryData3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Resource::is_class((Resource*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010ccb3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::_property_get_revertv(StringName const&, Variant&) const */void MeshInstance3D::_property_get_revertv(MeshInstance3D *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   cVar1 = _property_get_revert(this, param_1, param_2);
   if (( cVar1 == '\0' ) && ( (code*)PTR__property_get_revert_00127040 != Object::_property_get_revert )) {
      Node3D::_property_get_revert((StringName*)this, (Variant*)param_1);
      return;
   }

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
/* Callable create_custom_callable_function_pointer<MeshInstance3D>(MeshInstance3D*, char const*,
   void (MeshInstance3D::*)()) */MeshInstance3D *create_custom_callable_function_pointer<MeshInstance3D>(MeshInstance3D *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC5;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001203e0;
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
/* void Ref<StandardMaterial3D>::instantiate<>() */void Ref<StandardMaterial3D>::instantiate<>(Ref<StandardMaterial3D> *this) {
   char cVar1;
   BaseMaterial3D *this_00;
   Object *pOVar2;
   Object *pOVar3;
   this_00 = (BaseMaterial3D*)operator_new(0x558, "");
   BaseMaterial3D::BaseMaterial3D(this_00, false);
   *(undefined***)this_00 = &PTR__initialize_classv_0011fcb0;
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar3 = *(Object**)this;
      if (pOVar3 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (BaseMaterial3D*)0x0;
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar3 = *(Object**)this;
      pOVar2 = pOVar3;
      if (this_00 == (BaseMaterial3D*)pOVar3) goto LAB_0010cfa5;
      *(BaseMaterial3D**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar2 = (Object*)this_00;
      if (( ( pOVar3 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_0010cfa5;
   }

   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   pOVar2 = (Object*)this_00;
   if (this_00 == (BaseMaterial3D*)0x0) {
      return;
   }

   LAB_0010cfa5:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
      return;
   }

   return;
}
/* void Ref<ArrayMesh>::instantiate<>() */void Ref<ArrayMesh>::instantiate<>(Ref<ArrayMesh> *this) {
   char cVar1;
   ArrayMesh *this_00;
   Object *pOVar2;
   Object *pOVar3;
   this_00 = (ArrayMesh*)operator_new(0x430, "");
   ArrayMesh::ArrayMesh(this_00);
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar3 = *(Object**)this;
      if (pOVar3 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (ArrayMesh*)0x0;
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar3 = *(Object**)this;
      pOVar2 = pOVar3;
      if (this_00 == (ArrayMesh*)pOVar3) goto LAB_0010d0d5;
      *(ArrayMesh**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar2 = (Object*)this_00;
      if (( ( pOVar3 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_0010d0d5;
   }

   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   pOVar2 = (Object*)this_00;
   if (this_00 == (ArrayMesh*)0x0) {
      return;
   }

   LAB_0010d0d5:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
      return;
   }

   return;
}
/* LocalVector<Transform3D, unsigned int, false, false>::resize(unsigned int) */void LocalVector<Transform3D,unsigned_int,false,false>::resize(LocalVector<Transform3D,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   undefined4 uVar2;
   uint uVar3;
   uint uVar4;
   undefined1(*pauVar5)[16];
   undefined1(*pauVar6)[16];
   long lVar7;
   uint uVar8;
   uVar4 = *(uint*)this;
   if (uVar4 <= param_1) {
      if (param_1 <= uVar4) {
         return;
      }

      uVar8 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar4 = uVar8 >> 1 | uVar8;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = ( uVar4 | uVar4 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar4;
         lVar7 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar4 * 0x30, false);
         *(long*)( this + 8 ) = lVar7;
         if (lVar7 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         uVar4 = *(uint*)this;
         if (param_1 <= uVar4) goto LAB_0010d21d;
      }

      uVar3 = _LC48;
      uVar2 = _LC49;
      lVar7 = *(long*)( this + 8 );
      pauVar5 = (undefined1(*) [16])( (ulong)uVar4 * 0x30 + lVar7 );
      do {
         *(undefined8*)( pauVar5[2] + 4 ) = 0;
         pauVar6 = pauVar5 + 3;
         *pauVar5 = ZEXT416(uVar3);
         pauVar5[1] = ZEXT416(uVar3);
         *(undefined4*)pauVar5[2] = uVar2;
         *(undefined4*)( pauVar5[2] + 0xc ) = 0;
         pauVar5 = pauVar6;
      }
 while ( pauVar6 != (undefined1(*) [16])( lVar7 + 0x30 + ( ( ulong )(uVar8 - uVar4) + (ulong)uVar4 ) * 0x30 ) );
   }

   LAB_0010d21d:*(uint*)this = param_1;
   return;
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
/* MethodBindTR<NodePath>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<NodePath>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar3 = 0x16;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
         }

         goto LAB_0010d3f5;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   LAB_0010d3f5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshConvexDecompositionSettings::_initialize_classv() */void MeshConvexDecompositionSettings::_initialize_classv(void) {
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
         if ((code*)PTR__bind_methods_00127008 != RefCounted::_bind_methods) {
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
      local_58 = "MeshConvexDecompositionSettings";
      local_70 = 0;
      local_50 = 0x1f;
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
      if ((code*)PTR__bind_methods_00127048 != RefCounted::_bind_methods) {
         MeshConvexDecompositionSettings::_bind_methods();
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
/* WARNING: Removing unreachable block (ram,0x0010d888) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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
/* WARNING: Removing unreachable block (ram,0x0010dbc0) *//* String vformat<char const*, int>(String const&, char const* const, int const) */String *vformat<char_const*,int>(String *param_1, char *param_2, int param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   int in_ECX;
   undefined4 in_register_00000014;
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
   Variant::Variant(local_88, (char*)CONCAT44(in_register_00000014, param_3));
   Variant::Variant(local_70, in_ECX);
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
   local_d0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
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
/* MeshInstance3D::_getv(StringName const&, Variant&) const */void MeshInstance3D::_getv(MeshInstance3D *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   cVar1 = _get(this, param_1, param_2);
   if (( cVar1 == '\0' ) && ( (code*)PTR__get_00127050 != Object::_get )) {
      GeometryInstance3D::_get((StringName*)this, (Variant*)param_1);
      return;
   }

   return;
}
/* MethodBindTRC<Ref<SkinReference>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<SkinReference>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "SkinReference";
   local_40 = 0xd;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
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
         goto LAB_0010de6d;
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

   LAB_0010de6d:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Skin>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Skin>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC68;
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
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
         goto LAB_0010e01d;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(undefined**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(undefined**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010e01d:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Mesh>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Mesh>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC69;
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
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
         goto LAB_0010e1cd;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
   if (*(undefined**)( puVar3 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(undefined**)( puVar3 + 4 ) = local_48;
   }

   LAB_0010e1cd:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<MeshInstance3D, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<MeshInstance3D,void>::call(CallableCustomMethodPointer<MeshInstance3D,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010e4af;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010e4af;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010e488. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010e571;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010e4af:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC74, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010e571:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
                  if (lVar5 == 0) goto LAB_0010e5ff;
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

      LAB_0010e5ff:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010e6b3;
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
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010e6b3;
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
                        if (lVar5 == 0) goto LAB_0010e81b;
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

            LAB_0010e81b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_0010e6b3;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

         goto LAB_0010e8c4;
      }

   }

   LAB_0010e6b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010e8c4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BaseMaterial3D::is_class(String const&) const */undefined8 BaseMaterial3D::is_class(BaseMaterial3D *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010e94f;
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

      LAB_0010e94f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010ea03;
   }

   cVar6 = String::operator ==(param_1, "BaseMaterial3D");
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
                     if (lVar5 == 0) goto LAB_0010eabf;
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

         LAB_0010eabf:cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010ea03;
      }

      cVar6 = String::operator ==(param_1, "Material");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Resource::is_class((Resource*)this, param_1);
            return uVar7;
         }

         goto LAB_0010eb31;
      }

   }

   LAB_0010ea03:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010eb31:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* StandardMaterial3D::is_class(String const&) const */undefined8 StandardMaterial3D::is_class(StandardMaterial3D *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010ebaf;
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

      LAB_0010ebaf:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010ec63;
   }

   cVar5 = String::operator ==(param_1, "StandardMaterial3D");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BaseMaterial3D::is_class((BaseMaterial3D*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010ec63:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "RefCounted";
      local_60 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if ((code*)PTR__bind_methods_00127058 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* NavigationMeshSourceGeometryData3D::_initialize_classv() */void NavigationMeshSourceGeometryData3D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_58 = 0;
      local_40 = 8;
      local_48 = "Resource";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "NavigationMeshSourceGeometryData3D";
      local_60 = 0;
      local_40 = 0x22;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if ((code*)PTR__bind_methods_00127060 != Resource::_bind_methods) {
         NavigationMeshSourceGeometryData3D::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StandardMaterial3D::_initialize_classv() */void StandardMaterial3D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BaseMaterial3D::initialize_class() == '\0') {
         if (Material::initialize_class() == '\0') {
            if (Resource::initialize_class() == '\0') {
               Resource::initialize_class();
            }

            local_68 = 0;
            local_50 = 8;
            local_58 = "Resource";
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Material";
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
            if ((code*)_GLOBAL_OFFSET_TABLE_ != Material::_bind_methods) {
               Material::_bind_methods();
            }

            Material::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Material";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BaseMaterial3D";
         local_70 = 0;
         local_50 = 0xe;
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
         if ((code*)PTR__bind_methods_00127068 != Material::_bind_methods) {
            BaseMaterial3D::_bind_methods();
         }

         BaseMaterial3D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BaseMaterial3D";
      local_68 = 0;
      local_50 = 0xe;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "StandardMaterial3D";
      local_70 = 0;
      local_50 = 0x12;
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MeshInstance3D::is_class(String const&) const */undefined8 MeshInstance3D::is_class(MeshInstance3D *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char *pcVar4;
   long lVar5;
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
                  if (lVar3 == 0) goto LAB_0010f32f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar9 );
               if (lVar7 != -1) {
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

      LAB_0010f32f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010f3e3;
   }

   cVar6 = String::operator ==(param_1, "MeshInstance3D");
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
         if (cVar6 != '\0') goto LAB_0010f3e3;
      }

      cVar6 = String::operator ==(param_1, "GeometryInstance3D");
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
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
 else {
                  local_50 = strlen(pcVar4);
                  local_58 = pcVar4;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            cVar6 = String::operator ==(param_1, (String*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar6 != '\0') goto LAB_0010f3e3;
         }

         cVar6 = String::operator ==(param_1, "VisualInstance3D");
         if (cVar6 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar8 = Node3D::is_class((Node3D*)this, param_1);
               return uVar8;
            }

            goto LAB_0010f5ae;
         }

      }

   }

   LAB_0010f3e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010f5ae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
         }

         goto LAB_0010f6b5;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   LAB_0010f6b5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Mesh> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Mesh>const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC69;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x18, (CowData<char32_t>*)&local_80, 0x11, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   char *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_70 = 0;
      local_78 = 0;
      local_68 = "MeshConvexDecompositionSettings";
      local_60 = 0x1f;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x18, (CowData<char32_t>*)&local_80, 0x11, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Skin> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<Skin>const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC68;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x18, (CowData<char32_t>*)&local_80, 0x11, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<NodePath const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<NodePath_const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_70 = 0;
      local_78 = 0;
      local_68 = &_LC5;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x16, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      LAB_0010ffad:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010ffad;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010ffcf;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x0010ffcf:if (lVar2 == 0) {
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
/* MeshConvexDecompositionSettings::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void MeshConvexDecompositionSettings::_get_property_listv(MeshConvexDecompositionSettings *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "MeshConvexDecompositionSettings";
   local_70 = 0x1f;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "MeshConvexDecompositionSettings";
   local_98 = 0;
   local_70 = 0x1f;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_00110301;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110301:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "MeshConvexDecompositionSettings", false);
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
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_001105b1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001105b1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Resource", false);
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
/* Material::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Material::_get_property_listv(Material *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Material";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Material";
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
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_00110861;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110861:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "Material", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BaseMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BaseMaterial3D::_get_property_listv(BaseMaterial3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Material::_get_property_listv((Material*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "BaseMaterial3D";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "BaseMaterial3D";
   local_98 = 0;
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_00110b11;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110b11:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "BaseMaterial3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Material::_get_property_listv((Material*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StandardMaterial3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StandardMaterial3D::_get_property_listv(StandardMaterial3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BaseMaterial3D::_get_property_listv((BaseMaterial3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "StandardMaterial3D";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "StandardMaterial3D";
   local_98 = 0;
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_00110dc1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00110dc1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "StandardMaterial3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BaseMaterial3D::_get_property_listv((BaseMaterial3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* NavigationMeshSourceGeometryData3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */void NavigationMeshSourceGeometryData3D::_get_property_listv(NavigationMeshSourceGeometryData3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "NavigationMeshSourceGeometryData3D";
   local_70 = 0x22;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "NavigationMeshSourceGeometryData3D";
   local_98 = 0;
   local_70 = 0x22;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_00111071;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00111071:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "NavigationMeshSourceGeometryData3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int,float>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined8 uVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC5;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      uVar2 = 2;
   }
 else {
      if (in_EDX != 1) goto LAB_0011120a;
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC5;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      uVar2 = 3;
   }

   local_90 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, uVar2, &local_90, 0, (CowData<char32_t>*)&local_88, 6, &local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   *puVar3 = local_78._0_4_;
   if (*(long*)( puVar3 + 2 ) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar3 + 2 ));
      lVar1 = local_70;
      local_70 = 0;
      *(long*)( puVar3 + 2 ) = lVar1;
   }

   if (*(long*)( puVar3 + 4 ) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long*)( puVar3 + 4 ) = lVar1;
   }

   puVar3[6] = local_60;
   if (*(long*)( puVar3 + 8 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar3 + 8 ));
      lVar1 = local_58;
      local_58 = 0;
      *(long*)( puVar3 + 8 ) = lVar1;
   }

   puVar3[10] = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0011120a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Material> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int,Ref<Material>const&>::_gen_argument_type_info(int param_1) {
   long lVar1;
   undefined8 uVar2;
   int in_EDX;
   undefined8 uVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_88 = 0;
      local_78 = "";
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      uVar2 = 0;
      uVar3 = 2;
   }
 else {
      if (in_EDX != 1) goto LAB_0011143a;
      local_80 = 0;
      local_88 = 0;
      local_78 = "Material";
      local_70 = 8;
      String::parse_latin1((StrRange*)&local_88);
      uVar2 = 0x11;
      uVar3 = 0x18;
   }

   local_90 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, uVar3, &local_90, uVar2, (CowData<char32_t>*)&local_88, 6, &local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   *puVar4 = local_78._0_4_;
   if (*(long*)( puVar4 + 2 ) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
      lVar1 = local_70;
      local_70 = 0;
      *(long*)( puVar4 + 2 ) = lVar1;
   }

   if (*(long*)( puVar4 + 4 ) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long*)( puVar4 + 4 ) = lVar1;
   }

   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
      lVar1 = local_58;
      local_58 = 0;
      *(long*)( puVar4 + 8 ) = lVar1;
   }

   puVar4[10] = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0011143a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node3D::_get_property_listv(Node3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b8;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
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

   local_b0 = (CowData<char32_t>*)&local_70;
   local_b8 = (CowData<char32_t>*)&local_58;
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
      CowData<char32_t>::_ref(local_b0, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref(local_b8, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
         StringName::StringName((StringName*)&local_80, (String*)local_b8, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_0011177f;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0011177f:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b8);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_b0);
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
      CowData<char32_t>::_unref(local_b8);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref(local_b0);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* VisualInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VisualInstance3D::_get_property_listv(VisualInstance3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Node3D::_get_property_listv((Node3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "VisualInstance3D";
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "VisualInstance3D";
   local_98 = 0;
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_00111c71;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00111c71:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "VisualInstance3D", false);
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
/* GeometryInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GeometryInstance3D::_get_property_listv(GeometryInstance3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      VisualInstance3D::_get_property_listv((VisualInstance3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "GeometryInstance3D";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GeometryInstance3D";
   local_98 = 0;
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_00111f21;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00111f21:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GeometryInstance3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_00127070 != Object::_get_property_list) {
      GeometryInstance3D::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         VisualInstance3D::_get_property_listv((VisualInstance3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void MeshInstance3D::_get_property_listv(MeshInstance3D *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
   long local_98;
   long local_90;
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      GeometryInstance3D::_get_property_listv((GeometryInstance3D*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "MeshInstance3D";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "MeshInstance3D";
   local_98 = 0;
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 == 0x11) {
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

         goto LAB_001121f1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001121f1:local_b0 = (CowData<char32_t>*)&local_58;
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_b0);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "MeshInstance3D", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   _get_property_list(this, param_1);
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         GeometryInstance3D::_get_property_listv((GeometryInstance3D*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Material>, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<Material>,int>::_gen_argument_type_info(int param_1) {
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
      goto LAB_001125d4;
   }

   local_a0 = 0;
   local_60 = 8;
   local_68 = "Material";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00112607:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      if (puVar4[6] == 0x11) goto LAB_00112607;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_001125d4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<int, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<int,StringName_const&>::_gen_argument_type_info(int param_1) {
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
      local_68 = &_LC5;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_a8);
      local_b0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x15, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
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
      goto LAB_0011293a;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC5;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_001128ff:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_001128ff;
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

   LAB_0011293a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::_gen_argument_type_info(int param_1) {
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
      local_68 = "ArrayMesh";
      local_60 = 9;
      String::parse_latin1((StrRange*)&local_a8);
      local_b0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x18, (CowData<char32_t>*)&local_b0, 0x11, (StrRange*)&local_a8, 6, &local_a0);
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
      goto LAB_00112c28;
   }

   local_a0 = 0;
   local_60 = 9;
   local_68 = "ArrayMesh";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00112c57:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      if (puVar4[6] == 0x11) goto LAB_00112c57;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_00112c28:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float,int>::_gen_argument_type_info(int param_1) {
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
      local_68 = &_LC5;
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
      goto LAB_00112f8a;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC5;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 3;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00112f4f:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00112f4f;
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

   LAB_00112f8a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Material>::unref() */void Ref<Material>::unref(Ref<Material> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* Ref<ArrayMesh>::unref() */void Ref<ArrayMesh>::unref(Ref<ArrayMesh> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::_lookup_pos(StringName const&,
   unsigned int&) const */undefined8 HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::_lookup_pos(HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>> *this, StringName *param_1, uint *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   uint uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */undefined8 * __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1){
   uint *puVar1;
   undefined8 *puVar2;
   long lVar3;
   void *pvVar4;
   void *__s;
   undefined8 *puVar5;
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
   char cVar30;
   uint uVar31;
   uint uVar32;
   uint uVar33;
   ulong uVar34;
   undefined8 uVar35;
   void *__s_00;
   undefined8 *puVar36;
   long lVar37;
   void *pvVar38;
   ulong uVar39;
   int iVar40;
   long lVar41;
   long lVar42;
   ulong uVar43;
   undefined8 uVar44;
   uint uVar45;
   uint uVar46;
   uint uVar47;
   undefined8 *puVar48;
   long in_FS_OFFSET;
   bool bVar49;
   uint local_6c;
   undefined1 local_68[16];
   long local_58;
   undefined4 local_50;
   long local_40;
   lVar37 = *(long*)( this + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar33);
   if (lVar37 == 0) {
      LAB_00113828:uVar33 = (uint)uVar34;
      uVar39 = uVar34 * 4;
      uVar43 = uVar34 * 8;
      uVar35 = Memory::alloc_static(uVar39, false);
      *(undefined8*)( this + 0x10 ) = uVar35;
      pvVar38 = (void*)Memory::alloc_static(uVar43, false);
      *(void**)( this + 8 ) = pvVar38;
      if (uVar33 != 0) {
         pvVar4 = *(void**)( this + 0x10 );
         if (( pvVar4 < (void*)( (long)pvVar38 + uVar43 ) ) && ( pvVar38 < (void*)( (long)pvVar4 + uVar39 ) )) {
            uVar39 = 0;
            do {
               *(undefined4*)( (long)pvVar4 + uVar39 * 4 ) = 0;
               *(undefined8*)( (long)pvVar38 + uVar39 * 8 ) = 0;
               uVar39 = uVar39 + 1;
            }
 while ( uVar34 != uVar39 );
         }
 else {
            memset(pvVar4, 0, uVar39);
            memset(pvVar38, 0, uVar43);
         }

      }

   }
 else if (*(int*)( this + 0x2c ) != 0) {
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar32 = StringName::get_empty_hash();
         lVar37 = *(long*)( this + 8 );
      }
 else {
         uVar32 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar32 == 0) {
         uVar32 = 1;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar32 * lVar3;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      lVar41 = SUB168(auVar6 * auVar18, 8);
      uVar45 = *(uint*)( *(long*)( this + 0x10 ) + lVar41 * 4 );
      uVar46 = SUB164(auVar6 * auVar18, 8);
      if (uVar45 != 0) {
         uVar47 = 0;
         do {
            if (( uVar32 == uVar45 ) && ( *(long*)( *(long*)( lVar37 + lVar41 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar36 = *(undefined8**)( lVar37 + (ulong)uVar46 * 8 );
               goto LAB_001137a7;
            }

            uVar47 = uVar47 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar46 + 1) * lVar3;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar34;
            lVar41 = SUB168(auVar7 * auVar19, 8);
            uVar45 = *(uint*)( *(long*)( this + 0x10 ) + lVar41 * 4 );
            uVar46 = SUB164(auVar7 * auVar19, 8);
         }
 while ( ( uVar45 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar45 * lVar3,auVar20._8_8_ = 0,auVar20._0_8_ = uVar34,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar46 + uVar33 ) - SUB164(auVar8 * auVar20, 8)) * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar34,uVar47 <= SUB164(auVar9 * auVar21, 8) );
      }

      uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar34 = (ulong)uVar33;
      if (lVar37 == 0) goto LAB_00113828;
   }

   local_6c = 0;
   cVar30 = _lookup_pos(this, param_1, &local_6c);
   if (cVar30 != '\0') {
      puVar36 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)local_6c * 8 );
      *(undefined4*)( puVar36 + 3 ) = 0;
      goto LAB_001137a7;
   }

   if ((float)uVar33 * __LC81 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar33 = *(uint*)( this + 0x28 );
      if (uVar33 == 0x1c) {
         puVar36 = (undefined8*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_001137a7;
      }

      uVar34 = ( ulong )(uVar33 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar33 * 4 );
      if (uVar33 + 1 < 2) {
         uVar34 = 2;
      }

      uVar33 = *(uint*)( hash_table_size_primes + uVar34 * 4 );
      uVar43 = (ulong)uVar33;
      *(int*)( this + 0x28 ) = (int)uVar34;
      pvVar38 = *(void**)( this + 8 );
      uVar34 = uVar43 * 4;
      uVar39 = uVar43 * 8;
      pvVar4 = *(void**)( this + 0x10 );
      uVar35 = Memory::alloc_static(uVar34, false);
      *(undefined8*)( this + 0x10 ) = uVar35;
      __s_00 = (void*)Memory::alloc_static(uVar39, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar33 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar39 ) ) && ( __s_00 < (void*)( (long)__s + uVar34 ) )) {
            uVar34 = 0;
            do {
               *(undefined4*)( (long)__s + uVar34 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar34 * 8 ) = 0;
               uVar34 = uVar34 + 1;
            }
 while ( uVar34 != uVar43 );
         }
 else {
            memset(__s, 0, uVar34);
            memset(__s_00, 0, uVar39);
         }

      }

      if (uVar32 != 0) {
         uVar34 = 0;
         do {
            uVar33 = *(uint*)( (long)pvVar4 + uVar34 * 4 );
            if (uVar33 != 0) {
               lVar37 = *(long*)( this + 0x10 );
               uVar47 = 0;
               uVar45 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar39 = CONCAT44(0, uVar45);
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar33 * lVar3;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar39;
               lVar41 = SUB168(auVar10 * auVar22, 8);
               puVar1 = (uint*)( lVar37 + lVar41 * 4 );
               iVar40 = SUB164(auVar10 * auVar22, 8);
               uVar46 = *puVar1;
               uVar35 = *(undefined8*)( (long)pvVar38 + uVar34 * 8 );
               while (uVar46 != 0) {
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar46 * lVar3;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar39;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(( uVar45 + iVar40 ) - SUB164(auVar11 * auVar23, 8)) * lVar3;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar39;
                  uVar31 = SUB164(auVar12 * auVar24, 8);
                  uVar44 = uVar35;
                  if (uVar31 < uVar47) {
                     *puVar1 = uVar33;
                     puVar36 = (undefined8*)( (long)__s_00 + lVar41 * 8 );
                     uVar44 = *puVar36;
                     *puVar36 = uVar35;
                     uVar33 = uVar46;
                     uVar47 = uVar31;
                  }

                  uVar47 = uVar47 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(iVar40 + 1) * lVar3;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar39;
                  lVar41 = SUB168(auVar13 * auVar25, 8);
                  puVar1 = (uint*)( lVar37 + lVar41 * 4 );
                  iVar40 = SUB164(auVar13 * auVar25, 8);
                  uVar35 = uVar44;
                  uVar46 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar41 * 8 ) = uVar35;
               *puVar1 = uVar33;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar34 = uVar34 + 1;
         }
 while ( uVar32 != uVar34 );
         Memory::free_static(pvVar38, false);
         Memory::free_static(pvVar4, false);
      }

   }

   local_68 = (undefined1[16])0x0;
   StringName::StringName((StringName*)&local_58, param_1);
   local_50 = 0;
   puVar36 = (undefined8*)operator_new(0x20, "");
   *puVar36 = local_68._0_8_;
   puVar36[1] = local_68._8_8_;
   StringName::StringName((StringName*)( puVar36 + 2 ), (StringName*)&local_58);
   bVar49 = StringName::configured != '\0';
   *(undefined4*)( puVar36 + 3 ) = local_50;
   if (( bVar49 ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   puVar5 = *(undefined8**)( this + 0x20 );
   if (puVar5 == (undefined8*)0x0) {
      lVar37 = *(long*)param_1;
      *(undefined8**)( this + 0x18 ) = puVar36;
      *(undefined8**)( this + 0x20 ) = puVar36;
      if (lVar37 == 0) goto LAB_001137fd;
      LAB_00113694:uVar33 = *(uint*)( lVar37 + 0x20 );
   }
 else {
      *puVar5 = puVar36;
      puVar36[1] = puVar5;
      lVar37 = *(long*)param_1;
      *(undefined8**)( this + 0x20 ) = puVar36;
      if (lVar37 != 0) goto LAB_00113694;
      LAB_001137fd:uVar33 = StringName::get_empty_hash();
   }

   if (uVar33 == 0) {
      uVar33 = 1;
   }

   uVar34 = (ulong)uVar33;
   lVar37 = *(long*)( this + 0x10 );
   uVar46 = 0;
   lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar39 = CONCAT44(0, uVar32);
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar34 * lVar3;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar39;
   lVar42 = SUB168(auVar14 * auVar26, 8);
   lVar41 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar37 + lVar42 * 4 );
   iVar40 = SUB164(auVar14 * auVar26, 8);
   uVar45 = *puVar1;
   puVar5 = puVar36;
   while (uVar45 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar45 * lVar3;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(( uVar32 + iVar40 ) - SUB164(auVar15 * auVar27, 8)) * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      uVar33 = SUB164(auVar16 * auVar28, 8);
      puVar48 = puVar5;
      if (uVar33 < uVar46) {
         *puVar1 = (uint)uVar34;
         uVar34 = (ulong)uVar45;
         puVar2 = (undefined8*)( lVar41 + lVar42 * 8 );
         puVar48 = (undefined8*)*puVar2;
         *puVar2 = puVar5;
         uVar46 = uVar33;
      }

      uVar33 = (uint)uVar34;
      uVar46 = uVar46 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(iVar40 + 1) * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar39;
      lVar42 = SUB168(auVar17 * auVar29, 8);
      puVar1 = (uint*)( lVar37 + lVar42 * 4 );
      iVar40 = SUB164(auVar17 * auVar29, 8);
      puVar5 = puVar48;
      uVar45 = *puVar1;
   }
;
   *(undefined8**)( lVar41 + lVar42 * 8 ) = puVar5;
   *puVar1 = uVar33;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_001137a7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar36 + 3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Mesh>::unref() */void Ref<Mesh>::unref(Ref<Mesh> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* Ref<Skin>::unref() */void Ref<Skin>::unref(Ref<Skin> *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)this != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)this;
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            *(undefined8*)this = 0;
            return;
         }

      }

   }

   *(undefined8*)this = 0;
   return;
}
/* MeshInstance3D::_notificationv(int, bool) */void MeshInstance3D::_notificationv(MeshInstance3D *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (!param_2) {
      Node::_notification(iVar1);
      Node3D::_notification(iVar1);
      if ((code*)PTR__notification_00127078 != Node3D::_notification) {
         VisualInstance3D::_notification(iVar1);
      }

      if (param_1 != 10) {
         if (( param_1 == 0x7da ) && ( *(long*)( this + 0x620 ) != 0 )) {
            Object::notification((int)*(long*)( this + 0x620 ), true);
            return;
         }

         return;
      }

      _resolve_skeleton_path(this);
      return;
   }

   if (param_1 == 10) {
      _resolve_skeleton_path(this);
   }
 else if (( param_1 == 0x7da ) && ( *(long*)( this + 0x620 ) != 0 )) {
      Object::notification((int)*(long*)( this + 0x620 ), true);
      if ((code*)PTR__notification_00127078 != Node3D::_notification) {
         VisualInstance3D::_notification(iVar1);
      }

      goto LAB_00113a60;
   }

   if ((code*)PTR__notification_00127078 != Node3D::_notification) {
      VisualInstance3D::_notification(iVar1);
   }

   LAB_00113a60:Node3D::_notification(iVar1);
   Node::_notification(iVar1);
   return;
}
/* MethodBind* create_method_bind<MeshInstance3D, Ref<Mesh> const&>(void
   (MeshInstance3D::*)(Ref<Mesh> const&)) */MethodBind *create_method_bind<MeshInstance3D,Ref<Mesh>const&>(_func_void_Ref_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00120500;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, Ref<Mesh>>(Ref<Mesh> (MeshInstance3D::*)() const)
    */MethodBind *create_method_bind<MeshInstance3D,Ref<Mesh>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00120560;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, NodePath const&>(void (MeshInstance3D::*)(NodePath
   const&)) */MethodBind *create_method_bind<MeshInstance3D,NodePath_const&>(_func_void_NodePath_ptr *param_1) {
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
   *(_func_void_NodePath_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001205c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, NodePath>(NodePath (MeshInstance3D::*)()) */MethodBind *create_method_bind<MeshInstance3D,NodePath>(_func_NodePath *param_1) {
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
   *(_func_NodePath**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120620;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, Ref<Skin> const&>(void
   (MeshInstance3D::*)(Ref<Skin> const&)) */MethodBind *create_method_bind<MeshInstance3D,Ref<Skin>const&>(_func_void_Ref_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00120680;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, Ref<Skin>>(Ref<Skin> (MeshInstance3D::*)() const)
    */MethodBind *create_method_bind<MeshInstance3D,Ref<Skin>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001206e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, Ref<SkinReference>>(Ref<SkinReference>
   (MeshInstance3D::*)() const) */MethodBind *create_method_bind<MeshInstance3D,Ref<SkinReference>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00120740;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, int>(int (MeshInstance3D::*)() const) */MethodBind *create_method_bind<MeshInstance3D,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001207a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, int, Ref<Material> const&>(void
   (MeshInstance3D::*)(int, Ref<Material> const&)) */MethodBind *create_method_bind<MeshInstance3D,int,Ref<Material>const&>(_func_void_int_Ref_ptr *param_1) {
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
   *(_func_void_int_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120800;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, Ref<Material>, int>(Ref<Material>
   (MeshInstance3D::*)(int) const) */MethodBind *create_method_bind<MeshInstance3D,Ref<Material>,int>(_func_Ref_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00120860;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D>(void (MeshInstance3D::*)()) */MethodBind *create_method_bind<MeshInstance3D>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001208c0;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, bool, bool>(void (MeshInstance3D::*)(bool, bool))
    */MethodBind *create_method_bind<MeshInstance3D,bool,bool>(_func_void_bool_bool *param_1) {
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
   *(_func_void_bool_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120920;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, Ref<MeshConvexDecompositionSettings> const&>(void
   (MeshInstance3D::*)(Ref<MeshConvexDecompositionSettings> const&)) */MethodBind *create_method_bind<MeshInstance3D,Ref<MeshConvexDecompositionSettings>const&>(_func_void_Ref_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00120980;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, int, StringName const&>(int
   (MeshInstance3D::*)(StringName const&)) */MethodBind *create_method_bind<MeshInstance3D,int,StringName_const&>(_func_int_StringName_ptr *param_1) {
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
   *(_func_int_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001209e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, float, int>(float (MeshInstance3D::*)(int) const)
    */MethodBind *create_method_bind<MeshInstance3D,float,int>(_func_float_int *param_1) {
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
   *(_func_float_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120a40;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, int, float>(void (MeshInstance3D::*)(int, float))
    */MethodBind *create_method_bind<MeshInstance3D,int,float>(_func_void_int_float *param_1) {
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
   *(_func_void_int_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120aa0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MethodBind* create_method_bind<MeshInstance3D, Ref<ArrayMesh>, Ref<ArrayMesh> >(Ref<ArrayMesh>
   (MeshInstance3D::*)(Ref<ArrayMesh>)) */MethodBind *create_method_bind<MeshInstance3D,Ref<ArrayMesh>,Ref<ArrayMesh>>(_func_Ref_Ref *param_1) {
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
   *(_func_Ref_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00120b00;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "MeshInstance3D";
   local_30 = 0xe;
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
/* MeshInstance3D::_initialize_classv() */void MeshInstance3D::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (GeometryInstance3D::initialize_class() == '\0') {
         if (VisualInstance3D::initialize_class() == '\0') {
            if (Node3D::initialize_class() == '\0') {
               if (Node::initialize_class() == '\0') {
                  Object::initialize_class();
                  local_60 = 0;
                  local_50 = 6;
                  local_58 = "Object";
                  String::parse_latin1((StrRange*)&local_60);
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
                  if ((code*)PTR__bind_methods_00127008 != Node::_bind_methods) {
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
            local_58 = "VisualInstance3D";
            local_70 = 0;
            local_50 = 0x10;
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
            VisualInstance3D::_bind_methods();
            VisualInstance3D::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "VisualInstance3D";
         local_68 = 0;
         local_50 = 0x10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "GeometryInstance3D";
         local_70 = 0;
         local_50 = 0x12;
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
         if ((code*)PTR__bind_methods_00127080 != VisualInstance3D::_bind_methods) {
            GeometryInstance3D::_bind_methods();
         }

         GeometryInstance3D::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "GeometryInstance3D";
      local_68 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "MeshInstance3D";
      local_70 = 0;
      local_50 = 0xe;
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
/* CowData<Vector3>::_unref() */void CowData<Vector3>::_unref(CowData<Vector3> *this) {
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
/* CowData<Vector3>::_realloc(long) */undefined8 CowData<Vector3>::_realloc(CowData<Vector3> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Vector3>::resize<false>(long) */undefined8 CowData<Vector3>::resize<false>(CowData<Vector3> *this, long param_1) {
   code *pcVar1;
   long lVar2;
   ulong uVar3;
   undefined8 *puVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   undefined8 *puVar8;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar7 = 0;
      lVar2 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar2 = lVar7 * 0xc;
      if (lVar2 != 0) {
         uVar3 = lVar2 - 1U | lVar2 - 1U >> 1;
         uVar3 = uVar3 | uVar3 >> 2;
         uVar3 = uVar3 | uVar3 >> 4;
         uVar3 = uVar3 | uVar3 >> 8;
         uVar3 = uVar3 | uVar3 >> 0x10;
         lVar2 = ( uVar3 | uVar3 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0xc == 0) {
      LAB_00115800:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar3 = param_1 * 0xc - 1;
   uVar3 = uVar3 >> 1 | uVar3;
   uVar3 = uVar3 | uVar3 >> 2;
   uVar3 = uVar3 | uVar3 >> 4;
   uVar3 = uVar3 | uVar3 >> 8;
   uVar3 = uVar3 | uVar3 >> 0x10;
   uVar3 = uVar3 | uVar3 >> 0x20;
   lVar6 = uVar3 + 1;
   if (lVar6 == 0) goto LAB_00115800;
   if (param_1 <= lVar7) {
      if (( lVar6 != lVar2 ) && ( uVar5 = _realloc(this, lVar6) ),(int)uVar5 != 0) {
         return uVar5;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   if (lVar6 == lVar2) {
      LAB_0011578c:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar7 = puVar8[-1];
      if (param_1 <= lVar7) goto LAB_0011572f;
   }
 else {
      if (lVar7 != 0) {
         uVar5 = _realloc(this, lVar6);
         if ((int)uVar5 != 0) {
            return uVar5;
         }

         goto LAB_0011578c;
      }

      puVar4 = (undefined8*)Memory::alloc_static(uVar3 + 0x11, false);
      if (puVar4 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar4 + 2;
      *puVar4 = 1;
      puVar4[1] = 0;
      *(undefined8**)this = puVar8;
      lVar7 = 0;
   }

   memset((void*)( (long)puVar8 + lVar7 * 0xc ), 0, ( param_1 - lVar7 ) * 0xc);
   LAB_0011572f:puVar8[-1] = param_1;
   return 0;
}
/* CowData<int>::_unref() */void CowData<int>::_unref(CowData<int> *this) {
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
/* CowData<float>::_unref() */void CowData<float>::_unref(CowData<float> *this) {
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
/* CallableCustomStaticMethodPointer<void, Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*>::call(CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long *plVar1;
   code *pcVar2;
   Variant *pVVar3;
   long lVar4;
   undefined8 uVar5;
   char cVar6;
   Object *pOVar7;
   Object *pOVar8;
   Object *pOVar9;
   long lVar10;
   CowData<float> *pCVar11;
   long lVar12;
   long in_FS_OFFSET;
   Object *local_50;
   Object *local_48;
   long local_40;
   pcVar2 = *(code**)( this + 0x28 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (3 < (uint)param_2) {
      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 3;
      goto LAB_00115937;
   }

   if (param_2 != 3) {
      *(undefined4*)param_4 = 4;
      *(undefined4*)( param_4 + 8 ) = 3;
      goto LAB_00115937;
   }

   pVVar3 = param_1[2];
   *(undefined4*)param_4 = 0;
   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar3, 0x18);
   if (cVar6 == '\0') {
      LAB_00115982:uVar5 = _LC155;
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar5;
   }
 else {
      pVVar3 = param_1[2];
      pOVar7 = Variant::operator_cast_to_Object_(pVVar3);
      pOVar9 = Variant::operator_cast_to_Object_(pVVar3);
      if (( ( pOVar9 == (Object*)0x0 ) || ( lVar10 = __dynamic_cast(pOVar9, &Object::typeinfo, &Node::typeinfo, 0) ),lVar10 == 0 )) goto LAB_00115982;
   }

   pOVar7 = Variant::operator_cast_to_Object_(param_1[2]);
   if (pOVar7 != (Object*)0x0) {
      pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &Node::typeinfo, 0);
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)param_1[1]);
   uVar5 = _LC156;
   if (cVar6 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar5;
   }

   local_50 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar9 = local_50;
   if (pOVar8 != local_50) {
      if (pOVar8 == (Object*)0x0) {
         if (local_50 != (Object*)0x0) {
            local_50 = (Object*)0x0;
            LAB_00115a45:cVar6 = RefCounted::unreference();
            if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
               if (*(code**)( *(long*)pOVar9 + 0x140 ) == NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D) {
                  *(undefined***)pOVar9 = &PTR__initialize_classv_00120010;
                  NavigationMeshSourceGeometryData3D::clear();
                  if (*(long*)( pOVar9 + 0x2c0 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( pOVar9 + 0x2c0 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar10 = *(long*)( pOVar9 + 0x2c0 );
                        if (lVar10 == 0) goto LAB_00115e73;
                        lVar4 = *(long*)( lVar10 + -8 );
                        *(undefined8*)( pOVar9 + 0x2c0 ) = 0;
                        if (lVar4 != 0) {
                           pCVar11 = (CowData<float>*)( lVar10 + 8 );
                           lVar12 = 0;
                           do {
                              lVar12 = lVar12 + 1;
                              CowData<float>::_unref(pCVar11);
                              pCVar11 = pCVar11 + 0x20;
                           }
 while ( lVar4 != lVar12 );
                        }

                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( pOVar9 + 0x290 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( pOVar9 + 0x290 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar10 = *(long*)( pOVar9 + 0x290 );
                        *(undefined8*)( pOVar9 + 0x290 ) = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  CowData<float>::_unref((CowData<float>*)( pOVar9 + 0x280 ));
                  Resource::~Resource((Resource*)pOVar9);
               }
 else {
                  ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
               }

               Memory::free_static(pOVar9, false);
            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &NavigationMeshSourceGeometryData3D::typeinfo, 0);
         if (pOVar9 != pOVar8) {
            local_50 = pOVar8;
            if (( pOVar8 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
               local_50 = (Object*)0x0;
            }

            if (pOVar9 != (Object*)0x0) goto LAB_00115a45;
         }

      }

   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1);
   uVar5 = _LC157;
   if (cVar6 == '\0') {
      *(undefined4*)param_4 = 2;
      *(undefined8*)( param_4 + 4 ) = uVar5;
   }

   local_48 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar9 = local_48;
   if (pOVar8 != local_48) {
      if (pOVar8 == (Object*)0x0) {
         if (local_48 != (Object*)0x0) {
            local_48 = (Object*)0x0;
            LAB_00115adb:cVar6 = RefCounted::unreference();
            if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
               ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
               Memory::free_static(pOVar9, false);
            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &NavigationMesh::typeinfo, 0);
         if (pOVar9 != pOVar8) {
            local_48 = pOVar8;
            if (( pOVar8 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
               local_48 = (Object*)0x0;
            }

            if (pOVar9 != (Object*)0x0) goto LAB_00115adb;
         }

      }

   }

   ( *pcVar2 )(&local_48, &local_50, pOVar7);
   if (( ( local_48 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar7 = local_48,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar7 + 0x140 ))(pOVar7);
   Memory::free_static(pOVar7, false);
}
if (( ( local_50 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar7 = local_50,cVar6 != '\0' )) {
   if (*(code**)( *(long*)pOVar7 + 0x140 ) == NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D) {
      *(undefined***)pOVar7 = &PTR__initialize_classv_00120010;
      NavigationMeshSourceGeometryData3D::clear();
      if (*(long*)( pOVar7 + 0x2c0 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pOVar7 + 0x2c0 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar10 = *(long*)( pOVar7 + 0x2c0 );
            if (lVar10 == 0) {
               LAB_00115e73:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            lVar4 = *(long*)( lVar10 + -8 );
            *(undefined8*)( pOVar7 + 0x2c0 ) = 0;
            if (lVar4 != 0) {
               lVar12 = 0;
               pCVar11 = (CowData<float>*)( lVar10 + 8 );
               do {
                  lVar12 = lVar12 + 1;
                  CowData<float>::_unref(pCVar11);
                  pCVar11 = pCVar11 + 0x20;
               }
 while ( lVar4 != lVar12 );
            }

            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      if (*(long*)( pOVar7 + 0x290 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pOVar7 + 0x290 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar10 = *(long*)( pOVar7 + 0x290 );
            *(undefined8*)( pOVar7 + 0x290 ) = 0;
            Memory::free_static((void*)( lVar10 + -0x10 ), false);
         }

      }

      CowData<float>::_unref((CowData<float>*)( pOVar7 + 0x280 ));
      Resource::~Resource((Resource*)pOVar7);
   }
 else {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
   }

   Memory::free_static(pOVar7, false);
}
LAB_00115937:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CowData<Ref<Material> >::_unref() */void CowData<Ref<Material>>::_unref(CowData<Ref<Material>> *this) {
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
      LAB_00115edd:do {
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
                  goto LAB_00115edd;
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
/* MeshInstance3D::_setv(StringName const&, Variant const&) */void MeshInstance3D::_setv(MeshInstance3D *this, StringName *param_1, Variant *param_2) {
   char cVar1;
   if ((code*)PTR__set_00127088 != Object::_set) {
      cVar1 = GeometryInstance3D::_set((StringName*)this, (Variant*)param_1);
      if (cVar1 != '\0') {
         return;
      }

   }

   _set(this, param_1, param_2);
   return;
}
/* CowData<Ref<Material> >::_realloc(long) */undefined8 CowData<Ref<Material>>::_realloc(CowData<Ref<Material>> *this, long param_1) {
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
/* CowData<Color>::_realloc(long) */undefined8 CowData<Color>::_realloc(CowData<Color> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Color>::resize<false>(long) */undefined8 CowData<Color>::resize<false>(CowData<Color> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
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
      lVar4 = lVar12 * 0x10;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 == 0) {
      LAB_00116300:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = param_1 * 0x10 - 1;
   uVar5 = uVar5 >> 1 | uVar5;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar11 = uVar5 + 1;
   if (lVar11 == 0) goto LAB_00116300;
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
      LAB_0011626c:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar4 = puVar10[-1];
      if (param_1 <= lVar4) goto LAB_00116200;
   }
 else {
      if (lVar12 != 0) {
         uVar9 = _realloc(this, lVar11);
         if ((int)uVar9 != 0) {
            return uVar9;
         }

         goto LAB_0011626c;
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

   uVar3 = _UNK_00120e28;
   uVar9 = __LC163;
   puVar7 = puVar10 + lVar4 * 2;
   puVar6 = puVar7;
   if (( ( param_1 - lVar4 ) * 0x10 & 0x10U ) != 0) {
      *puVar7 = __LC163;
      puVar7[1] = uVar3;
      puVar6 = puVar7 + 2;
      if (puVar7 + ( param_1 - lVar4 ) * 2 == puVar7 + 2) goto LAB_00116200;
   }

   do {
      *puVar6 = uVar9;
      puVar6[1] = uVar3;
      puVar8 = puVar6 + 4;
      puVar6[2] = uVar9;
      puVar6[3] = uVar3;
      puVar6 = puVar8;
   }
 while ( puVar7 + ( param_1 - lVar4 ) * 2 != puVar8 );
   LAB_00116200:puVar10[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00116498) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
   local_c0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c0);
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
/* MethodBindT<int, float>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<int,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00116931;
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
      auVar2._0_4_ = (float)*(double*)( *(long*)( param_3 + 8 ) + 8 );
      /* WARNING: Could not recover jumptable at 0x001167b9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_00116931:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<int, float>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00116b21;
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
      auVar2._4_12_ = SUB1612((undefined1[16])0x0, 4);
      auVar2._0_4_ = (float)**(double**)( (long)param_3 + 8 );
      /* WARNING: Could not recover jumptable at 0x001169a7. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_00116b21:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<float, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<float,int>::validated_call(MethodBindTRC<float,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00116b7e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   *(double*)( param_3 + 8 ) = (double)fVar3;
   LAB_00116b7e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<float, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,int>::ptrcall(MethodBindTRC<float,int> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00116d5c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(double*)param_3 = (double)fVar3;
   LAB_00116d5c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<int, StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<int,StringName_const&>::validated_call(MethodBindTR<int,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00116f3b;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_00116f3b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<int, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<int,StringName_const&>::ptrcall(MethodBindTR<int,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00117118;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(long*)param_3 = (long)iVar1;
   LAB_00117118:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool, bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<bool,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00117491;
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
      /* WARNING: Could not recover jumptable at 0x00117317. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ), *(undefined1*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_00117491:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<bool, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<bool,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00117689;
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
      /* WARNING: Could not recover jumptable at 0x00117511. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0', **(char**)( (long)param_3 + 8 ) != '\0');
      return;
   }

   LAB_00117689:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001177b0;
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

   LAB_001177b0:*(undefined4*)param_1 = 0;
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

         goto LAB_00117b2f;
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
      /* WARNING: Could not recover jumptable at 0x001179d6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00117b2f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00117cef;
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
      /* WARNING: Could not recover jumptable at 0x00117b96. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00117cef:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00117e50;
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

   LAB_00117e50:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00118064;
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
   LAB_00118064:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00118213;
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
   LAB_00118213:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<NodePath>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<NodePath>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118450;
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

         ( *(code*)pVVar2 )((NodePath*)&local_58);
         Variant::Variant((Variant*)local_48, (NodePath*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         NodePath::~NodePath((NodePath*)&local_58);
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

   LAB_00118450:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<NodePath>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<NodePath>::validated_call(MethodBindTR<NodePath> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x116668;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118679;
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

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   NodePath::operator =((NodePath*)( param_3 + 8 ), (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_00118679:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<NodePath>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<NodePath>::ptrcall(MethodBindTR<NodePath> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x116668;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((NodePath*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (NodePath*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011884a;
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

   ( *pcVar1 )((NodePath*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   NodePath::operator =((NodePath*)param_3, (NodePath*)&local_48);
   NodePath::~NodePath((NodePath*)&local_48);
   LAB_0011884a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<NodePath const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<NodePath_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00118b91;
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
      /* WARNING: Could not recover jumptable at 0x00118a1d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00118b91:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<NodePath const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<NodePath_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00118d71;
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
      /* WARNING: Could not recover jumptable at 0x00118bf9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00118d71:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::ptrcall(MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char cVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
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
         local_48 = (Object*)0x116668;
         local_50 = (Object*)0x0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118e82;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   if (( (long*)*param_2 == (long*)0x0 ) || ( local_48 = **param_2 ),local_48 == (Object*)0x0) {
      LAB_00118ded:local_48 = (Object*)0x0;
   }
 else {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') goto LAB_00118ded;
   }

   ( *pcVar6 )(&local_50, param_1 + lVar1, (StringName*)&local_48);
   if (local_50 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != (Object*)0x0) {
         *(undefined8*)param_3 = 0;
         goto LAB_00118eb9;
      }

   }
 else {
      pOVar3 = (Object*)__dynamic_cast(local_50, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != pOVar3) {
         *(Object**)param_3 = pOVar3;
         if (pOVar3 == (Object*)0x0) {
            if (pOVar5 != (Object*)0x0) goto LAB_00118eb9;
         }
 else {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar5 != (Object*)0x0) {
               LAB_00118eb9:cVar2 = RefCounted::unreference();
               if (cVar2 != '\0') {
                  cVar2 = predelete_handler(pOVar5);
                  if (cVar2 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            if (local_50 == (Object*)0x0) goto LAB_00118e6b;
         }

      }

      cVar2 = RefCounted::unreference();
      pOVar5 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_00118e6b:if (local_48 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar5 = local_48;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_48);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_00118e82:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_58 = (Object*)0x116668;
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

         goto LAB_001191c8;
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
            LAB_00119186:cVar3 = RefCounted::unreference();
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
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &MeshConvexDecompositionSettings::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00119186;
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

   LAB_001191c8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x116668;
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

         goto LAB_0011948c;
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
      LAB_00119468:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00119468;
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

   LAB_0011948c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Material>, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Material>,int>::ptrcall(MethodBindTRC<Ref<Material>,int> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x116668;
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

         goto LAB_001196f9;
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
      if (pOVar5 == (Object*)0x0) goto LAB_001196f9;
      *(undefined8*)param_3 = 0;
      goto LAB_00119741;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00119741;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00119741:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_001196f9;
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

   LAB_001196f9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Material> const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindT<int,Ref<Material>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   Variant *pVVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar5 = param_2[0x23];
         if (pVVar5 == (Variant*)0x0) {
            pVVar5 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar5 = param_2[1] + 0x20;
      }

      if (local_68 == (Object*)*(long*)pVVar5) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x116668;
         local_60 = 0x35;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119a29;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( param_3 + 8 ) + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_68;
   if (pOVar4 != local_68) {
      if (pOVar4 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_001199e0:cVar3 = RefCounted::unreference();
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
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Material::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_68 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_68 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_001199e0;
         }

      }

   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )((long*)( (long)param_2 + lVar1 ), *(undefined4*)( *(long*)param_3 + 8 ), (StringName*)&local_68);
   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00119a29:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<int, Ref<Material> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<int,Ref<Material>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x116668;
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

         goto LAB_00119cd8;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar5 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }

   if (( *(long**)( (long)param_3 + 8 ) == (long*)0x0 ) || ( local_48 = (Object*)**(long**)( (long)param_3 + 8 ) ),local_48 == (Object*)0x0) {
      LAB_00119cad:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_00119cad;
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ), **param_3, (StringName*)&local_48);
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

   LAB_00119cd8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<SkinReference>>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Ref<SkinReference>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_58 = (Object*)0x116668;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119f80;
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

   LAB_00119f80:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<SkinReference>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<SkinReference>>::ptrcall(MethodBindTRC<Ref<SkinReference>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x116668;
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

         goto LAB_0011a206;
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
      if (pOVar5 == (Object*)0x0) goto LAB_0011a206;
      *(undefined8*)param_3 = 0;
      goto LAB_0011a249;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011a249;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011a249:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011a206;
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

   LAB_0011a206:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Skin>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Ref<Skin>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_58 = (Object*)0x116668;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a520;
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

   LAB_0011a520:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Skin>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Skin>>::ptrcall(MethodBindTRC<Ref<Skin>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x116668;
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

         goto LAB_0011a7a6;
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
      if (pOVar5 == (Object*)0x0) goto LAB_0011a7a6;
      *(undefined8*)param_3 = 0;
      goto LAB_0011a7e9;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011a7e9;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011a7e9:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011a7a6;
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

   LAB_0011a7a6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Skin> const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<Skin>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_58 = (Object*)0x116668;
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

         goto LAB_0011aaa8;
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
            LAB_0011aa66:cVar3 = RefCounted::unreference();
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
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Skin::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_0011aa66;
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

   LAB_0011aaa8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Skin> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<Skin>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x116668;
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

         goto LAB_0011ad6c;
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
      LAB_0011ad48:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0011ad48;
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

   LAB_0011ad6c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Mesh>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Ref<Mesh>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_58 = (Object*)0x116668;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b030;
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

   LAB_0011b030:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Mesh>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<Mesh>>::ptrcall(MethodBindTRC<Ref<Mesh>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x116668;
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

         goto LAB_0011b2b6;
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
      if (pOVar5 == (Object*)0x0) goto LAB_0011b2b6;
      *(undefined8*)param_3 = 0;
      goto LAB_0011b2f9;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0011b2f9;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_0011b2f9:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_0011b2b6;
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

   LAB_0011b2b6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Mesh> const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<Mesh>const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_58 = (Object*)0x116668;
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

         goto LAB_0011b5b8;
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
            LAB_0011b576:cVar3 = RefCounted::unreference();
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
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Mesh::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_0011b576;
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

   LAB_0011b5b8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Mesh> const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<Mesh>const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x116668;
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

         goto LAB_0011b87c;
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
      LAB_0011b858:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_0011b858;
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

   LAB_0011b87c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_78;
   Object *local_70;
   Object *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_68 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x116668;
         local_70 = (Object*)0x0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011bbe0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011bbd5:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_0011bbe0;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011bc30;
      LAB_0011bc20:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_0011bc30:uVar7 = 4;
         goto LAB_0011bbd5;
      }

      if (in_R8D == 1) goto LAB_0011bc20;
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
   uVar4 = _LC157;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_68 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_68;
   if (pOVar8 != local_68) {
      if (pOVar8 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_0011bd4d:cVar6 = RefCounted::unreference();
            if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &ArrayMesh::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_68 = pOVar8;
            if (( pOVar8 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
               local_68 = (Object*)0x0;
            }

            if (pOVar5 != (Object*)0x0) goto LAB_0011bd4d;
         }

      }

   }

   ( *(code*)pVVar13 )((Ref<ArrayMesh>*)&local_70, (Variant*)( (long)plVar11 + (long)pVVar1 ), (Ref<ArrayMesh>*)&local_68);
   Variant::Variant((Variant*)local_58, local_70);
   if (Variant::needs_deinit[*(int*)param_1] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)param_1 = local_58[0];
   *(undefined8*)( param_1 + 8 ) = local_50;
   *(undefined8*)( param_1 + 0x10 ) = uStack_48;
   Ref<ArrayMesh>::unref((Ref<ArrayMesh>*)&local_70);
   Ref<ArrayMesh>::unref((Ref<ArrayMesh>*)&local_68);
   LAB_0011bbe0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Ref<Material>, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<Ref<Material>,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
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
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (Object*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = (Object*)0x116668;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011bfd0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011c020;
         LAB_0011c010:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011c020:uVar7 = 4;
            goto LAB_0011bfc5;
         }

         if (in_R8D == 1) goto LAB_0011c010;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC179;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      ( *(code*)pVVar12 )((Ref<Material>*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_58, local_68);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      Ref<Material>::unref((Ref<Material>*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_0011bfc5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011bfd0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<float, int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<float,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
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
   float fVar13;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c358;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011c3a0;
         LAB_0011c390:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011c3a0:uVar7 = 4;
            goto LAB_0011c34d;
         }

         if (in_R8D == 1) goto LAB_0011c390;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC179;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(pVVar11);
      fVar13 = (float)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), iVar6);
      Variant::Variant((Variant*)local_48, fVar13);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_0011c34d:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011c358:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<int, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<int,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
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
   bool bVar13;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
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
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c700;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0011c750;
         LAB_0011c740:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011c750:uVar7 = 4;
            goto LAB_0011c6f5;
         }

         if (in_R8D == 1) goto LAB_0011c740;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC180;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar13 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar13 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar7 = 3;
      LAB_0011c6f5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011c700:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_48 = (Object*)0x116668;
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011caf0;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011cae5:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_0011caf0;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011cb40;
      LAB_0011cb30:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_0011cb40:uVar7 = 4;
         goto LAB_0011cae5;
      }

      if (in_R8D == 1) goto LAB_0011cb30;
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
   uVar4 = _LC157;
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
            LAB_0011cc5d:cVar6 = RefCounted::unreference();
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
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &MeshConvexDecompositionSettings::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_48 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_48 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_0011cc5d;
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

   LAB_0011caf0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Skin> const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Ref<Skin>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   Object *pOVar3;
   code *pcVar4;
   undefined8 uVar5;
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
   Object *local_50;
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
         local_48 = (Object*)0x116668;
         local_50 = (Object*)0x0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011cf28;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011cf1d:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_0011cf28;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011cf80;
      LAB_0011cf70:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_0011cf80:uVar7 = 4;
         goto LAB_0011cf1d;
      }

      if (in_R8D == 1) goto LAB_0011cf70;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
   uVar5 = _LC157;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar5;
   }

   local_50 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar3 = local_50;
   if (pOVar8 != local_50) {
      if (pOVar8 == (Object*)0x0) {
         if (local_50 != (Object*)0x0) {
            local_50 = (Object*)0x0;
            local_48 = pOVar3;
            goto LAB_0011cebf;
         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Skin::typeinfo, 0);
         if (pOVar3 != pOVar8) {
            local_48 = pOVar3;
            local_50 = pOVar8;
            if (( pOVar8 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
               local_50 = (Object*)0x0;
            }

            LAB_0011cebf:Ref<Skin>::unref((Ref<Skin>*)&local_48);
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ));
   if (( ( local_50 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar3 = local_50,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
   Memory::free_static(pOVar3, false);
}
LAB_0011cf28:*(undefined4*)param_1 = 0;*(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* MethodBindT<NodePath const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<NodePath_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011d2b0;
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
         if (in_R8D != 1) goto LAB_0011d300;
         LAB_0011d2f0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011d300:uVar6 = 4;
            goto LAB_0011d2a5;
         }

         if (in_R8D == 1) goto LAB_0011d2f0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x16);
      uVar4 = _LC181;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_NodePath((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      NodePath::~NodePath((NodePath*)&local_48);
   }
 else {
      uVar6 = 3;
      LAB_0011d2a5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0011d2b0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<Mesh> const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Ref<Mesh>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   char *pcVar3;
   code *pcVar4;
   undefined8 uVar5;
   char cVar6;
   undefined4 uVar7;
   char *pcVar8;
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
   char *local_50;
   char *local_48;
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

      if (local_48 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (char*)0x0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011d638;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011d62d:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_0011d638;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_0011d690;
      LAB_0011d680:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_0011d690:uVar7 = 4;
         goto LAB_0011d62d;
      }

      if (in_R8D == 1) goto LAB_0011d680;
      lVar10 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar4 = (code*)invalidInstructionException();
         ( *pcVar4 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
   uVar5 = _LC157;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar5;
   }

   local_50 = (char*)0x0;
   pcVar8 = (char*)Variant::get_validated_object();
   pcVar3 = local_50;
   if (pcVar8 != local_50) {
      if (pcVar8 == (char*)0x0) {
         if (local_50 != (char*)0x0) {
            local_50 = (char*)0x0;
            local_48 = pcVar3;
            goto LAB_0011d5ff;
         }

      }
 else {
         pcVar8 = (char*)__dynamic_cast(pcVar8, &Object::typeinfo, &Mesh::typeinfo, 0);
         if (pcVar3 != pcVar8) {
            local_48 = pcVar3;
            local_50 = pcVar8;
            if (( pcVar8 != (char*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
               local_50 = (char*)0x0;
            }

            LAB_0011d5ff:Ref<Mesh>::unref((Ref<Mesh>*)&local_48);
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Ref<Mesh>*)&local_50);
   Ref<Mesh>::unref((Ref<Mesh>*)&local_50);
   LAB_0011d638:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::validated_call(MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   Object *local_68;
   Object *local_60;
   char *local_58;
   Object *local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = (Object*)0x0;
         local_50 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         goto LAB_0011d9df;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *param_2 + 0x10 ));
   local_60 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_60;
   if (pOVar4 != local_60) {
      if (pOVar4 == (Object*)0x0) {
         if (local_60 != (Object*)0x0) {
            local_60 = (Object*)0x0;
            LAB_0011d968:cVar3 = RefCounted::unreference();
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
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &ArrayMesh::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_60 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_60 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_0011d968;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )(&local_68, param_1 + lVar1, &local_60);
   if (local_68 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_58 = *(char**)( local_68 + 0x60 );
      local_50 = local_68;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)local_68 + 0x140 ) )(local_68);
            Memory::free_static(local_68, false);
         }

      }

   }

   if (local_60 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_60;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_60);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_0011d9df:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Material>, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Material>,int>::validated_call(MethodBindTRC<Ref<Material>,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011dcec;
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

   LAB_0011dcec:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<SkinReference>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<SkinReference>>::validated_call(MethodBindTRC<Ref<SkinReference>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x116668;
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

         goto LAB_0011df36;
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

   LAB_0011df36:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Skin>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Skin>>::validated_call(MethodBindTRC<Ref<Skin>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x116668;
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

         goto LAB_0011e166;
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

   LAB_0011e166:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<Mesh>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<Mesh>>::validated_call(MethodBindTRC<Ref<Mesh>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x116668;
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

         goto LAB_0011e396;
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

   LAB_0011e396:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, int, float>(__UnexistingClass*, void
   (__UnexistingClass::*)(int, float), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,int,float>(__UnexistingClass *param_1, _func_void_int_float *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
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
   float fVar12;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar7 = 3;
      goto LAB_0011e675;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar6 = 2 - uVar10;
   if (lVar1 == 0) {
      if (iVar6 == 0) {
         this(Variant * ) * plVar8;
         LAB_0011e6ad:this_00 = (Variant*)plVar8[1];
         goto LAB_0011e5d5;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar11 = (int)lVar2;
      if (iVar6 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar2 <= lVar9) goto LAB_0011e6c8;
            this(Variant * )(lVar1 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011e6ad;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0011e6c8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar9 * 0x18 );
         LAB_0011e5d5:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_int_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 3);
         uVar4 = _LC182;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         fVar12 = Variant::operator_cast_to_float(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar4 = _LC179;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_int(this);
         /* WARNING: Could not recover jumptable at 0x0011e65f. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((int)( param_1 + (long)param_3 ), fVar12);
         return;
      }

   }

   uVar7 = 4;
   LAB_0011e675:*(undefined4*)param_6 = uVar7;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<int, float>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<int,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011e766;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,float>(p_Var2, (_func_void_int_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011e766:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, bool, bool>(__UnexistingClass*, void
   (__UnexistingClass::*)(bool, bool), Variant const**, int, Callable::CallError&, Vector<Variant>
   const&) */void call_with_variant_args_dv<__UnexistingClass,bool,bool>(__UnexistingClass *param_1, _func_void_bool_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   int iVar7;
   undefined4 uVar8;
   undefined4 in_register_0000000c;
   long *plVar9;
   long lVar10;
   Variant *this;
   uint uVar11;
   int iVar12;
   Variant *this_00;
   long in_stack_00000008;
   plVar9 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar11 = (uint)param_5;
   if (2 < uVar11) {
      uVar8 = 3;
      goto LAB_0011ea5d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   iVar7 = 2 - uVar11;
   if (lVar1 == 0) {
      if (iVar7 == 0) {
         this(Variant * ) * plVar9;
         LAB_0011ea8d:this_00 = (Variant*)plVar9[1];
         goto LAB_0011e9c5;
      }

   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      iVar12 = (int)lVar2;
      if (iVar7 <= iVar12) {
         if (uVar11 == 0) {
            lVar10 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar10) goto LAB_0011eaa8;
            this(Variant * )(lVar1 + lVar10 * 0x18);
         }
 else {
            this(Variant * ) * plVar9;
            if (uVar11 == 2) goto LAB_0011ea8d;
         }

         lVar10 = (long)(int)( ( uVar11 ^ 1 ) + ( iVar12 - iVar7 ) );
         if (lVar2 <= lVar10) {
            LAB_0011eaa8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this_00 = (Variant*)( lVar1 + lVar10 * 0x18 );
         LAB_0011e9c5:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_bool_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar5 = Variant::can_convert_strict(*(undefined4*)this_00, 1);
         uVar4 = _LC183;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         Variant::operator_cast_to_bool(this_00);
         cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
         uVar4 = _LC184;
         if (cVar5 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar4;
         }

         bVar6 = Variant::operator_cast_to_bool(this);
         /* WARNING: Could not recover jumptable at 0x0011ea4d. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )(SUB81(param_1 + (long)param_3, 0), bVar6);
         return;
      }

   }

   uVar8 = 4;
   LAB_0011ea5d:*(undefined4*)param_6 = uVar8;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<bool, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<bool,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011eb46;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool,bool>(p_Var2, (_func_void_bool_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011eb46:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0011ef49) *//* WARNING: Removing unreachable block (ram,0x0011ef51) *//* WARNING: Removing unreachable block (ram,0x0011ef61) *//* WARNING: Removing unreachable block (ram,0x0011ef71) *//* void call_with_variant_args_dv<__UnexistingClass, int, Ref<Material> const&>(__UnexistingClass*,
   void (__UnexistingClass::*)(int, Ref<Material> const&), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,int,Ref<Material>const&>(__UnexistingClass *param_1, _func_void_int_Ref_ptr *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long lVar8;
   Object *pOVar9;
   undefined4 in_register_0000000c;
   long *plVar10;
   long lVar11;
   uint uVar12;
   int iVar13;
   Variant *this;
   undefined4 *puVar14;
   long in_FS_OFFSET;
   long in_stack_00000008;
   Object *local_38;
   plVar10 = (long*)CONCAT44(in_register_0000000c, param_4);
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = (uint)param_5;
   if (uVar12 < 3) {
      lVar8 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar12;
      if (lVar8 == 0) {
         if (iVar6 != 0) goto LAB_0011eee0;
         this(Variant * ) * plVar10;
         LAB_0011ef2d:puVar14 = (undefined4*)plVar10[1];
      }
 else {
         lVar2 = *(long*)( lVar8 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar6) {
            LAB_0011eee0:uVar7 = 4;
            goto LAB_0011eee5;
         }

         if (uVar12 == 0) {
            lVar11 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar11) goto LAB_0011ef98;
            this(Variant * )(lVar8 + lVar11 * 0x18);
         }
 else {
            this(Variant * ) * plVar10;
            if (uVar12 == 2) goto LAB_0011ef2d;
         }

         lVar11 = (long)(int)( ( uVar12 ^ 1 ) + ( iVar13 - iVar6 ) );
         if (lVar2 <= lVar11) {
            LAB_0011ef98:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         puVar14 = (undefined4*)( lVar8 + lVar11 * 0x18 );
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_int_Ref_ptr**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*puVar14);
      uVar4 = _LC156;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      local_38 = (Object*)0x0;
      lVar8 = Variant::get_validated_object();
      if (( ( ( lVar8 != 0 ) && ( lVar8 != 0 ) ) && ( pOVar9 = (Object*)__dynamic_cast(lVar8, &Object::typeinfo, &Material::typeinfo, 0) ),pOVar9 != (Object*)0x0 )) {
         local_38 = (Object*)0x0;
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
      uVar4 = _LC179;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      iVar6 = Variant::operator_cast_to_int(this);
      ( *param_2 )((int)( param_1 + (long)param_3 ), (Ref*)iVar6);
      if (( ( local_38 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_38 + 0x140 ))(local_38);
      Memory::free_static(local_38, false);
   }

}
else{uVar7 = 3;LAB_0011eee5:*(undefined4*)param_6 = uVar7;*(undefined4*)( param_6 + 8 ) = 2;}if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* MethodBindT<int, Ref<Material> const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<int,Ref<Material>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC74, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011f036;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int,Ref<Material>const&>(p_Var2, (_func_void_int_Ref_ptr*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011f036:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<bool>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<bool>(int param_1, int *param_2, PropertyInfo *param_3) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   undefined *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar2 = *param_2;
   if (iVar2 == param_1) {
      local_80 = 0;
      local_88 = 0;
      local_78 = &_LC5;
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 1, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      *(undefined4*)param_3 = local_78._0_4_;
      if (*(long*)( param_3 + 8 ) != local_70) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
         lVar1 = local_70;
         local_70 = 0;
         *(long*)( param_3 + 8 ) = lVar1;
      }

      if (*(long*)( param_3 + 0x10 ) != local_68) {
         StringName::unref();
         lVar1 = local_68;
         local_68 = 0;
         *(long*)( param_3 + 0x10 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x18 ) = local_60;
      if (*(long*)( param_3 + 0x20 ) != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( param_3 + 0x20 ) = lVar1;
      }

      *(undefined4*)( param_3 + 0x28 ) = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
      iVar2 = *param_2;
   }

   *param_2 = iVar2 + 1;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<bool, bool>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<bool,bool>::_gen_argument_type_info(int param_1) {
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
   call_get_argument_type_info_helper<bool>(in_EDX, &local_24, pPVar1);
   call_get_argument_type_info_helper<bool>(in_EDX, &local_24, pPVar1);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pPVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MeshInstance3D::_navmesh_source_geometry_parsing_callback */void MeshInstance3D::_GLOBAL__sub_I__navmesh_source_geometry_parsing_callback(void) {
   _navmesh_source_geometry_parsing_callback._0_8_ = 0;
   _navmesh_source_geometry_parsing_callback._8_8_ = 0;
   __cxa_atexit(Callable::~Callable, _navmesh_source_geometry_parsing_callback, &__dso_handle);
   _navmesh_source_geometry_parser = 0;
   return;
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
/* WARNING: Control flow encountered bad instruction data *//* NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D() */void NavigationMeshSourceGeometryData3D::~NavigationMeshSourceGeometryData3D(NavigationMeshSourceGeometryData3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<ArrayMesh>, Ref<ArrayMesh> >::~MethodBindTR() */void MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>>::~MethodBindTR(MethodBindTR<Ref<ArrayMesh>,Ref<ArrayMesh>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, float>::~MethodBindT() */void MethodBindT<int,float>::~MethodBindT(MethodBindT<int,float> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<float, int>::~MethodBindTRC() */void MethodBindTRC<float,int>::~MethodBindTRC(MethodBindTRC<float,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<int, StringName const&>::~MethodBindTR() */void MethodBindTR<int,StringName_const&>::~MethodBindTR(MethodBindTR<int,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<MeshConvexDecompositionSettings> const&>::~MethodBindT() */void MethodBindT<Ref<MeshConvexDecompositionSettings>const&>::~MethodBindT(MethodBindT<Ref<MeshConvexDecompositionSettings>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool, bool>::~MethodBindT() */void MethodBindT<bool,bool>::~MethodBindT(MethodBindT<bool,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Material>, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Material>,int>::~MethodBindTRC(MethodBindTRC<Ref<Material>,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int, Ref<Material> const&>::~MethodBindT() */void MethodBindT<int,Ref<Material>const&>::~MethodBindT(MethodBindT<int,Ref<Material>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<SkinReference>>::~MethodBindTRC() */void MethodBindTRC<Ref<SkinReference>>::~MethodBindTRC(MethodBindTRC<Ref<SkinReference>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Skin>>::~MethodBindTRC() */void MethodBindTRC<Ref<Skin>>::~MethodBindTRC(MethodBindTRC<Ref<Skin>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Skin> const&>::~MethodBindT() */void MethodBindT<Ref<Skin>const&>::~MethodBindT(MethodBindT<Ref<Skin>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<NodePath>::~MethodBindTR() */void MethodBindTR<NodePath>::~MethodBindTR(MethodBindTR<NodePath> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<NodePath const&>::~MethodBindT() */void MethodBindT<NodePath_const&>::~MethodBindT(MethodBindT<NodePath_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<Mesh>>::~MethodBindTRC() */void MethodBindTRC<Ref<Mesh>>::~MethodBindTRC(MethodBindTRC<Ref<Mesh>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<Mesh> const&>::~MethodBindT() */void MethodBindT<Ref<Mesh>const&>::~MethodBindT(MethodBindT<Ref<Mesh>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings() */void MeshConvexDecompositionSettings::~MeshConvexDecompositionSettings(MeshConvexDecompositionSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StandardMaterial3D::~StandardMaterial3D() */void StandardMaterial3D::~StandardMaterial3D(StandardMaterial3D *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<MeshInstance3D, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<MeshInstance3D,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<MeshInstance3D,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomStaticMethodPointer<void, Ref<NavigationMesh> const&,
   Ref<NavigationMeshSourceGeometryData3D>, Node*>::~CallableCustomStaticMethodPointer() */void CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*>::~CallableCustomStaticMethodPointer(CallableCustomStaticMethodPointer<void,Ref<NavigationMesh>const&,Ref<NavigationMeshSourceGeometryData3D>,Node*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


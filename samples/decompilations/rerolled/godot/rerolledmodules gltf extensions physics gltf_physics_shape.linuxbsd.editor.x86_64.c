/* GLTFPhysicsShape::get_size() const */undefined1  [16] __thiscallGLTFPhysicsShape::get_size(GLTFPhysicsShape *this) {
   long in_FS_OFFSET;
   undefined1 auVar1[16];
   if (*(long*)( in_FS_OFFSET + 0x28 ) == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar1._12_4_ = 0;
      auVar1._0_12_ = *(undefined1(*) [12])( this + 0x248 );
      return auVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFPhysicsShape::set_size(Vector3) */void GLTFPhysicsShape::set_size(undefined8 param_1, undefined4 param_2, long param_3) {
   *(undefined8*)( param_3 + 0x248 ) = param_1;
   *(undefined4*)( param_3 + 0x250 ) = param_2;
   return;
}
/* GLTFPhysicsShape::get_radius() const */undefined4 GLTFPhysicsShape::get_radius(GLTFPhysicsShape *this) {
   return *(undefined4*)( this + 0x254 );
}
/* GLTFPhysicsShape::set_radius(float) */void GLTFPhysicsShape::set_radius(GLTFPhysicsShape *this, float param_1) {
   *(float*)( this + 0x254 ) = param_1;
   return;
}
/* GLTFPhysicsShape::get_height() const */undefined4 GLTFPhysicsShape::get_height(GLTFPhysicsShape *this) {
   return *(undefined4*)( this + 600 );
}
/* GLTFPhysicsShape::set_height(float) */void GLTFPhysicsShape::set_height(GLTFPhysicsShape *this, float param_1) {
   *(float*)( this + 600 ) = param_1;
   return;
}
/* GLTFPhysicsShape::get_is_trigger() const */GLTFPhysicsShape GLTFPhysicsShape::get_is_trigger(GLTFPhysicsShape *this) {
   return this[0x25c];
}
/* GLTFPhysicsShape::set_is_trigger(bool) */void GLTFPhysicsShape::set_is_trigger(GLTFPhysicsShape *this, bool param_1) {
   this[0x25c] = (GLTFPhysicsShape)param_1;
   return;
}
/* GLTFPhysicsShape::get_mesh_index() const */undefined4 GLTFPhysicsShape::get_mesh_index(GLTFPhysicsShape *this) {
   return *(undefined4*)( this + 0x260 );
}
/* GLTFPhysicsShape::set_mesh_index(int) */void GLTFPhysicsShape::set_mesh_index(GLTFPhysicsShape *this, int param_1) {
   *(int*)( this + 0x260 ) = param_1;
   return;
}
/* LocalVector<Vector3, unsigned int, false, false>::resize(unsigned int) [clone .part.0] */void LocalVector<Vector3,unsigned_int,false,false>::resize(uint param_1) {
   code *pcVar1;
   _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Ref<Shape3D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Shape3D> const&) [clone .isra.0] */void Ref<Shape3D>::operator =(Ref<Shape3D> *this, Ref *param_1) {
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
/* GLTFPhysicsShape::set_importer_mesh(Ref<ImporterMesh>) */void GLTFPhysicsShape::set_importer_mesh(GLTFPhysicsShape *this, long *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   pOVar1 = (Object*)*param_2;
   pOVar2 = *(Object**)( this + 0x268 );
   if (pOVar1 != pOVar2) {
      *(Object**)( this + 0x268 ) = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this + 0x268 ) = 0;
         }

      }

      if (pOVar2 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
               return;
            }

         }

      }

   }

   return;
}
/* GLTFPhysicsShape::get_importer_mesh() const */void GLTFPhysicsShape::get_importer_mesh(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x268 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x268 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* Ref<ImporterMesh>::TEMPNAMEPLACEHOLDERVALUE(Ref<ImporterMesh> const&) [clone .isra.0] */void Ref<ImporterMesh>::operator =(Ref<ImporterMesh> *this, Ref *param_1) {
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
/* GLTFPhysicsShape::set_shape_type(String) */void GLTFPhysicsShape::set_shape_type(GLTFPhysicsShape *this, CowData *param_2) {
   if (*(long*)( this + 0x240 ) != *(long*)param_2) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x240 ), param_2);
      return;
   }

   return;
}
/* GLTFPhysicsShape::get_shape_type() const */void GLTFPhysicsShape::get_shape_type(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x240 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x240 ));
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
/* GLTFPhysicsShape::to_dictionary() const */void GLTFPhysicsShape::to_dictionary(void) {
   String *this;
   char cVar1;
   Variant *pVVar2;
   long in_RSI;
   char *pcVar3;
   int iVar4;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   Dictionary local_88[8];
   Array local_80[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   this(String * )(in_RSI + 0x240);
   Variant::Variant((Variant*)local_58, this);
   Variant::Variant((Variant*)local_78, "type");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
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

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::Dictionary(local_88);
   cVar1 = String::operator ==(this, "box");
   if (cVar1 == '\0') {
      cVar1 = String::operator ==(this, "capsule");
      if (cVar1 == '\0') {
         cVar1 = String::operator ==(this, "cylinder");
         if (cVar1 == '\0') {
            cVar1 = String::operator ==(this, "sphere");
            if (cVar1 == '\0') {
               cVar1 = String::operator ==(this, "trimesh");
               if (( cVar1 == '\0' ) && ( cVar1 = String::operator ==(this, "convex") ),cVar1 == '\0') goto LAB_00100766;
               Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x260 ));
               pcVar3 = "mesh";
            }
 else {
               Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x254 ));
               pcVar3 = "radius";
            }

         }
 else {
            Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x254 ));
            Variant::Variant((Variant*)local_78, "radius");
            pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_88);
            Variant::operator =(pVVar2, (Variant*)local_58);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 600 ));
            pcVar3 = "height";
         }

         Variant::Variant((Variant*)local_78, pcVar3);
         pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_88);
         Variant::operator =(pVVar2, (Variant*)local_58);
      }
 else {
         Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 0x254 ));
         Variant::Variant((Variant*)local_78, "radius");
         pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_88);
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

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, *(float*)( in_RSI + 600 ));
         Variant::Variant((Variant*)local_78, "height");
         pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_88);
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

      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      Array::Array(local_80);
      iVar4 = (int)local_80;
      Array::resize(iVar4);
      for (int i = 0; i < 3; i++) {
         Variant::Variant((Variant*)local_58, *(float*)( in_RSI + ( 4*i + 584 ) ));
         pVVar2 = (Variant*)Array::operator [](iVar4);
         if (pVVar2 == (Variant*)local_58) {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar2 = 0;
            *(int*)pVVar2 = local_58[0];
            *(undefined8*)( pVVar2 + 8 ) = local_50;
            *(undefined8*)( pVVar2 + 16 ) = uStack_48;
         }

      }

      Variant::Variant((Variant*)local_58, local_80);
      Variant::Variant((Variant*)local_78, "size");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_88);
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

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Array::~Array(local_80);
   }

   LAB_00100766:Variant::Variant((Variant*)local_58, local_88);
   Variant::Variant((Variant*)local_78, this);
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
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

   Dictionary::~Dictionary(local_88);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFPhysicsShape::from_dictionary(Dictionary) */GLTFPhysicsShape * __thiscall
GLTFPhysicsShape::from_dictionary(GLTFPhysicsShape *this,Variant *param_2){
   Object *pOVar1;
   char cVar2;
   Object OVar3;
   int iVar4;
   Variant *pVVar5;
   long in_FS_OFFSET;
   float fVar6;
   float fVar7;
   float fVar8;
   Object *local_90;
   long local_88;
   Dictionary local_80[8];
   String local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, "type");
   cVar2 = Dictionary::has(param_2);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 == '\0') {
      _err_print_error("from_dictionary", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0x10f, "Condition \"!p_dictionary.has(\"type\")\" is true. Returning: Ref<GLTFPhysicsShape>()", "Failed to parse GLTFPhysicsShape, missing required field \'type\'.", 0, 0);
      *(undefined8*)this = 0;
      goto LAB_00100ee4;
   }

   local_90 = (Object*)0x0;
   Ref<GLTFPhysicsShape>::instantiate<>((Ref<GLTFPhysicsShape>*)&local_90);
   Variant::Variant((Variant*)local_58, "type");
   Dictionary::operator [](param_2);
   Variant::operator_cast_to_String((Variant*)&local_88);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   cVar2 = String::operator ==((String*)&local_88, "hull");
   if (cVar2 != '\0') {
      local_60 = 6;
      local_68 = "convex";
      String::parse_latin1((StrRange*)&local_88);
   }

   pOVar1 = local_90;
   if (*(long*)( local_90 + 0x240 ) != local_88) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( local_90 + 0x240 ), (CowData*)&local_88);
   }

   cVar2 = String::operator !=((String*)&local_88, "box");
   if (( ( ( ( cVar2 != '\0' ) && ( cVar2 = String::operator !=((String*)&local_88, "capsule") ),cVar2 != '\0' ) ) && ( cVar2 = String::operator !=((String*)&local_88, "cylinder") ),cVar2 != '\0' )) {
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "\'. Only box, capsule, cylinder, sphere, convex, and trimesh are supported.");
      operator+((char *)
      local_78,(String*)"GLTFPhysicsShape: Error parsing unknown shape type \'";
      String::operator +((String*)&local_68, local_78);
      _err_print_error("from_dictionary", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0x118, (String*)&local_68, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_58, (String*)&local_88);
   cVar2 = Dictionary::has(param_2);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 == '\0') {
      Dictionary::operator =(local_80, (Dictionary*)param_2);
   }
 else {
      Variant::Variant((Variant*)local_58, (String*)&local_88);
      Dictionary::operator [](param_2);
      Variant::operator_cast_to_Dictionary((Variant*)&local_68);
      Dictionary::operator =(local_80, (Dictionary*)&local_68);
      Dictionary::~Dictionary((Dictionary*)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "radius");
   cVar2 = Dictionary::has((Variant*)local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "radius");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_80);
      fVar6 = Variant::operator_cast_to_float(pVVar5);
      *(float*)( pOVar1 + 0x254 ) = fVar6;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "height");
   cVar2 = Dictionary::has((Variant*)local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "height");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_80);
      fVar6 = Variant::operator_cast_to_float(pVVar5);
      *(float*)( pOVar1 + 600 ) = fVar6;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "size");
   cVar2 = Dictionary::has((Variant*)local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "size");
      Dictionary::operator []((Variant*)local_80);
      Variant::operator_cast_to_Array((Variant*)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      iVar4 = Array::size();
      if (iVar4 == 3) {
         iVar4 = (int)(Variant*)&local_68;
         pVVar5 = (Variant*)Array::operator [](iVar4);
         fVar6 = Variant::operator_cast_to_float(pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar4);
         fVar7 = Variant::operator_cast_to_float(pVVar5);
         pVVar5 = (Variant*)Array::operator [](iVar4);
         fVar8 = Variant::operator_cast_to_float(pVVar5);
         *(float*)( pOVar1 + 0x250 ) = fVar6;
         *(ulong*)( pOVar1 + 0x248 ) = CONCAT44(fVar7, fVar8);
      }
 else {
         _err_print_error("from_dictionary", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 299, "GLTFPhysicsShape: Error parsing the size, it must have exactly 3 numbers.", 0, 0);
      }

      Array::~Array((Array*)&local_68);
   }

   Variant::Variant((Variant*)local_58, "isTrigger");
   cVar2 = Dictionary::has((Variant*)local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "isTrigger");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_80);
      OVar3 = (Object)Variant::operator_cast_to_bool(pVVar5);
      pOVar1[0x25c] = OVar3;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "mesh");
   cVar2 = Dictionary::has((Variant*)local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 == '\0') {
      LAB_00100e9a:iVar4 = *(int*)( pOVar1 + 0x260 );
   }
 else {
      Variant::Variant((Variant*)local_58, "mesh");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_80);
      iVar4 = Variant::operator_cast_to_int(pVVar5);
      *(int*)( pOVar1 + 0x260 ) = iVar4;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
         goto LAB_00100e9a;
      }

   }

   if (( iVar4 < 0 ) && ( ( cVar2 = String::operator ==((String*)&local_88, "convex") ),cVar2 != '\0' || ( cVar2 = String::operator ==((String*)&local_88, "trimesh") ),cVar2 != '\0' )) {
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "\' does not have a valid mesh index.");
      operator+((char *)
      local_78,(String*)"Error parsing GLTFPhysicsShape: The mesh-based shape type \'";
      String::operator +((String*)&local_68, local_78);
      _err_print_error("from_dictionary", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0x135, (String*)&local_68, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   *(Object**)this = pOVar1;
   cVar2 = RefCounted::reference();
   if (cVar2 == '\0') {
      *(undefined8*)this = 0;
   }

   Dictionary::~Dictionary(local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   }

   LAB_00100ee4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      if ((code*)PTR__bind_methods_0011a008 != RefCounted::_bind_methods) {
         RefCounted::_bind_methods();
      }

      RefCounted::initialize_class() {
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

   /* GLTFPhysicsShape::_bind_methods() */
   void GLTFPhysicsShape::_bind_methods(void) {
      char cVar1;
      MethodBind *pMVar2;
      uint uVar3;
      long in_FS_OFFSET;
      undefined8 local_f8;
      undefined8 local_f0;
      undefined8 local_e8;
      long local_e0;
      long local_d8;
      long local_d0;
      char *local_c8;
      undefined8 local_c0;
      char *local_b8;
      undefined8 local_b0;
      Variant *local_88;
      undefined8 local_80;
      Variant **local_78;
      undefined1 local_70[16];
      undefined8 local_60;
      undefined1 local_58[16];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_80 = 0;
      local_88 = (Variant*)0x1058e1;
      uVar3 = (uint)(Variant*)&local_78;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"from_node", uVar3);
      StringName::StringName((StringName*)&local_c8, "GLTFPhysicsShape", false);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = (MethodBind*)operator_new(0x60, "");
      MethodBind::MethodBind(pMVar2);
      *(undefined***)pMVar2 = &PTR__gen_argument_type_001151c0;
      *(code**)( pMVar2 + 0x58 ) = from_node;
      MethodBind::_generate_argument_types((int)pMVar2);
      *(undefined4*)( pMVar2 + 0x34 ) = 1;
      MethodBind::_set_static(SUB81(pMVar2, 0));
      MethodBind::_set_returns(SUB81(pMVar2, 0));
      StringName::operator =((StringName*)( pMVar2 + 0x18 ), (StringName*)&local_c8);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x1058f6;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"to_node", uVar3);
      Variant::Variant((Variant*)&local_78, false);
      local_58 = (undefined1[16])0x0;
      local_60 = 0;
      local_88 = (Variant*)&local_78;
      pMVar2 = create_method_bind<GLTFPhysicsShape,CollisionShape3D*,bool>(to_node);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, &local_88, 1);
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

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x10590b;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"from_resource", uVar3);
      StringName::StringName((StringName*)&local_c8, "GLTFPhysicsShape", false);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = (MethodBind*)operator_new(0x60, "");
      MethodBind::MethodBind(pMVar2);
      *(undefined***)pMVar2 = &PTR__gen_argument_type_00115280;
      *(code**)( pMVar2 + 0x58 ) = from_resource;
      MethodBind::_generate_argument_types((int)pMVar2);
      *(undefined4*)( pMVar2 + 0x34 ) = 1;
      MethodBind::_set_static(SUB81(pMVar2, 0));
      MethodBind::_set_returns(SUB81(pMVar2, 0));
      StringName::operator =((StringName*)( pMVar2 + 0x18 ), (StringName*)&local_c8);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x1058f6;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"to_resource", uVar3);
      Variant::Variant((Variant*)&local_78, false);
      local_58 = (undefined1[16])0x0;
      local_60 = 0;
      local_88 = (Variant*)&local_78;
      pMVar2 = create_method_bind<GLTFPhysicsShape,Ref<Shape3D>,bool>(to_resource);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, &local_88, 1);
      if (Variant::needs_deinit[(int)local_60] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x105934;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"from_dictionary", uVar3);
      StringName::StringName((StringName*)&local_c8, "GLTFPhysicsShape", false);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = (MethodBind*)operator_new(0x60, "");
      MethodBind::MethodBind(pMVar2);
      *(undefined***)pMVar2 = &PTR__gen_argument_type_00115340;
      *(code**)( pMVar2 + 0x58 ) = from_dictionary;
      MethodBind::_generate_argument_types((int)pMVar2);
      *(undefined4*)( pMVar2 + 0x34 ) = 1;
      MethodBind::_set_static(SUB81(pMVar2, 0));
      MethodBind::_set_returns(SUB81(pMVar2, 0));
      StringName::operator =((StringName*)( pMVar2 + 0x18 ), (StringName*)&local_c8);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      D_METHODP((char*)&local_b8, (char***)"to_dictionary", 0);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,Dictionary>(to_dictionary);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      D_METHODP((char*)&local_b8, (char***)"get_shape_type", 0);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,String>(get_shape_type);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x10595c;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"set_shape_type", uVar3);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,String>(set_shape_type);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      D_METHODP((char*)&local_b8, (char***)"get_size", 0);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,Vector3>(get_size);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)&_LC17;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"set_size", uVar3);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,Vector3>(set_size);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      D_METHODP((char*)&local_b8, (char***)"get_radius", 0);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,float>(get_radius);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x105890;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"set_radius", uVar3);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,float>(set_radius);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      D_METHODP((char*)&local_b8, (char***)"get_height", 0);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,float>(get_height);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x105897;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"set_height", uVar3);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,float>(set_height);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      D_METHODP((char*)&local_b8, (char***)"get_is_trigger", 0);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,bool>(get_is_trigger);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x1059c3;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"set_is_trigger", uVar3);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,bool>(set_is_trigger);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      D_METHODP((char*)&local_b8, (char***)"get_mesh_index", 0);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,int>(get_mesh_index);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x1059ec;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"set_mesh_index", uVar3);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,int>(set_mesh_index);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      D_METHODP((char*)&local_b8, (char***)"get_importer_mesh", 0);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,Ref<ImporterMesh>>(get_importer_mesh);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      local_80 = 0;
      local_88 = (Variant*)0x105a18;
      local_78 = &local_88;
      D_METHODP((char*)&local_b8, (char***)"set_importer_mesh", uVar3);
      local_70 = (undefined1[16])0x0;
      local_78 = (Variant**)0x0;
      pMVar2 = create_method_bind<GLTFPhysicsShape,Ref<ImporterMesh>>(set_importer_mesh);
      ClassDB::bind_methodfi(1, pMVar2, false, (MethodDefinition*)&local_b8, (Variant**)0x0, 0);
      if (Variant::needs_deinit[(int)local_78] != '\0') {
         Variant::_clear_internal();
      }

      MethodDefinition::~MethodDefinition((MethodDefinition*)&local_b8);
      _scs_create((char*)&local_d0, true);
      _scs_create((char*)&local_d8, true);
      local_b8 = "";
      local_e0 = 0;
      local_e8 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange*)&local_e8);
      local_f0 = 0;
      local_b8 = "shape_type";
      local_b0 = 10;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 4, (StrRange*)&local_f0, 0, (StrRange*)&local_e8, 6, &local_e0);
      local_c8 = "GLTFPhysicsShape";
      local_f8 = 0;
      local_c0 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      StringName::StringName((StringName*)&local_c8, (String*)&local_f8, false);
      ClassDB::add_property((StringName*)&local_c8, (PropertyInfo*)&local_b8, (StringName*)&local_d8, (StringName*)&local_d0, -1);
      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_d0, true);
      _scs_create((char*)&local_d8, true);
      local_b8 = "";
      local_e0 = 0;
      local_e8 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange*)&local_e8);
      local_b8 = "size";
      local_f0 = 0;
      local_b0 = 4;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 9, (StrRange*)&local_f0, 0, (StrRange*)&local_e8, 6, &local_e0);
      local_c8 = "GLTFPhysicsShape";
      local_f8 = 0;
      local_c0 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      StringName::StringName((StringName*)&local_c8, (String*)&local_f8, false);
      ClassDB::add_property((StringName*)&local_c8, (PropertyInfo*)&local_b8, (StringName*)&local_d8, (StringName*)&local_d0, -1);
      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_d0, true);
      _scs_create((char*)&local_d8, true);
      local_b8 = "";
      local_e0 = 0;
      local_e8 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange*)&local_e8);
      local_b8 = "radius";
      local_f0 = 0;
      local_b0 = 6;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 3, (StrRange*)&local_f0, 0, (StrRange*)&local_e8, 6, &local_e0);
      local_c8 = "GLTFPhysicsShape";
      local_f8 = 0;
      local_c0 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      StringName::StringName((StringName*)&local_c8, (String*)&local_f8, false);
      ClassDB::add_property((StringName*)&local_c8, (PropertyInfo*)&local_b8, (StringName*)&local_d8, (StringName*)&local_d0, -1);
      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_d0, true);
      _scs_create((char*)&local_d8, true);
      local_b8 = "";
      local_e0 = 0;
      local_e8 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange*)&local_e8);
      local_b8 = "height";
      local_f0 = 0;
      local_b0 = 6;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 3, (StrRange*)&local_f0, 0, (StrRange*)&local_e8, 6, &local_e0);
      local_c8 = "GLTFPhysicsShape";
      local_f8 = 0;
      local_c0 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      StringName::StringName((StringName*)&local_c8, (String*)&local_f8, false);
      ClassDB::add_property((StringName*)&local_c8, (PropertyInfo*)&local_b8, (StringName*)&local_d8, (StringName*)&local_d0, -1);
      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( ( StringName::configured != '\0' ) && ( ( local_e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_d0 != 0 ) ) )) {
         StringName::unref();
      }

      _scs_create((char*)&local_d0, true);
      _scs_create((char*)&local_d8, true);
      local_b8 = "";
      local_e0 = 0;
      local_e8 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange*)&local_e8);
      local_b8 = "is_trigger";
      local_f0 = 0;
      local_b0 = 10;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 1, (StrRange*)&local_f0, 0, (StrRange*)&local_e8, 6, &local_e0);
      local_c8 = "GLTFPhysicsShape";
      local_f8 = 0;
      local_c0 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      StringName::StringName((StringName*)&local_c8, (String*)&local_f8, false);
      ClassDB::add_property((StringName*)&local_c8, (PropertyInfo*)&local_b8, (StringName*)&local_d8, (StringName*)&local_d0, -1);
      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_d0, true);
      _scs_create((char*)&local_d8, true);
      local_b8 = "";
      local_e0 = 0;
      local_e8 = 0;
      local_b0 = 0;
      String::parse_latin1((StrRange*)&local_e8);
      local_b8 = "mesh_index";
      local_f0 = 0;
      local_b0 = 10;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 2, (StrRange*)&local_f0, 0, (StrRange*)&local_e8, 6, &local_e0);
      local_c8 = "GLTFPhysicsShape";
      local_f8 = 0;
      local_c0 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      StringName::StringName((StringName*)&local_c8, (String*)&local_f8, false);
      ClassDB::add_property((StringName*)&local_c8, (PropertyInfo*)&local_b8, (StringName*)&local_d8, (StringName*)&local_d0, -1);
      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      _scs_create((char*)&local_d0, true);
      _scs_create((char*)&local_d8, true);
      local_b8 = "ImporterMesh";
      local_e0 = 0;
      local_e8 = 0;
      local_b0 = 0xc;
      String::parse_latin1((StrRange*)&local_e8);
      local_b8 = "importer_mesh";
      local_f0 = 0;
      local_b0 = 0xd;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_b8, 0x18, (StrRange*)&local_f0, 0x11, (StrRange*)&local_e8, 6, &local_e0);
      local_c8 = "GLTFPhysicsShape";
      local_f8 = 0;
      local_c0 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      StringName::StringName((StringName*)&local_c8, (String*)&local_f8, false);
      ClassDB::add_property((StringName*)&local_c8, (PropertyInfo*)&local_b8, (StringName*)&local_d8, (StringName*)&local_d0, -1);
      if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( ( ( StringName::configured != '\0' ) && ( ( local_e0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_d8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_d0 != 0 )) {
         StringName::unref();
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* GLTFPhysicsShape::to_resource(bool) */
   Ref<Shape3D> *GLTFPhysicsShape::to_resource(bool param_1) {
      String *this;
      Object *pOVar1;
      char cVar2;
      BoxShape3D *this_00;
      Object *pOVar3;
      CapsuleShape3D *this_01;
      CylinderShape3D *this_02;
      SphereShape3D *pSVar4;
      char in_DL;
      undefined8 uVar5;
      long in_RSI;
      undefined7 in_register_00000039;
      Ref<Shape3D> *this_03;
      char *pcVar6;
      BoxShape3D *pBVar7;
      long in_FS_OFFSET;
      SphereShape3D *local_48;
      SphereShape3D *local_40;
      Object *local_38;
      long local_30;
      this_03 = (Ref<Shape3D>*)CONCAT71(in_register_00000039, param_1);
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      if (( in_DL != '\0' ) && ( *(long*)( in_RSI + 0x270 ) != 0 )) goto LAB_00103004;
      this(String * )(in_RSI + 0x240);
      cVar2 = String::operator ==(this, "box");
      if (cVar2 == '\0') {
         cVar2 = String::operator ==(this, "capsule");
         if (cVar2 != '\0') {
            pBVar7 = (BoxShape3D*)0x0;
            this_01 = (CapsuleShape3D*)operator_new(0x280, "");
            CapsuleShape3D::CapsuleShape3D(this_01);
            postinitialize_handler((Object*)this_01);
            cVar2 = RefCounted::init_ref();
            if (cVar2 != '\0') {
               cVar2 = RefCounted::reference();
               if (cVar2 != '\0') {
                  pBVar7 = (BoxShape3D*)this_01;
               }

               cVar2 = RefCounted::unreference();
               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this_01) ),cVar2 != '\0') {
                  ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
                  Memory::free_static(this_01, false);
               }

            }

            CapsuleShape3D::set_radius(*(float*)( in_RSI + 0x254 ));
            CapsuleShape3D::set_height(*(float*)( in_RSI + 600 ));
            LAB_001031e8:pOVar3 = (Object*)__dynamic_cast(pBVar7, &Object::typeinfo, &Shape3D::typeinfo, 0);
            pOVar1 = *(Object**)( in_RSI + 0x270 );
            if (pOVar1 == pOVar3) goto LAB_00103110;
            *(Object**)( in_RSI + 0x270 ) = pOVar3;
            local_38 = pOVar1;
            if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
               *(undefined8*)( in_RSI + 0x270 ) = 0;
            }

            Ref<Shape3D>::unref((Ref<Shape3D>*)&local_38);
            cVar2 = RefCounted::unreference();
            if (cVar2 == '\0') goto LAB_00103004;
            goto LAB_00103120;
         }

         cVar2 = String::operator ==(this, "cylinder");
         if (cVar2 != '\0') {
            pBVar7 = (BoxShape3D*)0x0;
            this_02 = (CylinderShape3D*)operator_new(0x280, "");
            CylinderShape3D::CylinderShape3D(this_02);
            postinitialize_handler((Object*)this_02);
            cVar2 = RefCounted::init_ref();
            if (cVar2 != '\0') {
               cVar2 = RefCounted::reference();
               if (cVar2 != '\0') {
                  pBVar7 = (BoxShape3D*)this_02;
               }

               cVar2 = RefCounted::unreference();
               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this_02) ),cVar2 != '\0') {
                  ( **(code**)( *(long*)this_02 + 0x140 ) )(this_02);
                  Memory::free_static(this_02, false);
               }

            }

            CylinderShape3D::set_radius(*(float*)( in_RSI + 0x254 ));
            CylinderShape3D::set_height(*(float*)( in_RSI + 600 ));
            goto LAB_001031e8;
         }

         cVar2 = String::operator ==(this, "sphere");
         if (cVar2 == '\0') {
            cVar2 = String::operator ==(this, "convex");
            if (cVar2 == '\0') {
               cVar2 = String::operator ==(this, "trimesh");
               if (cVar2 == '\0') {
                  local_40 = (SphereShape3D*)0x0;
                  String::parse_latin1((String*)&local_40, "\' is unknown.");
                  operator+((char *)&
                  local_48,(String*)"GLTFPhysicsShape: Error converting to a shape resource: Shape type \'";
                  String::operator +((String*)&local_38, (String*)&local_48);
                  _err_print_error("to_resource", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0x108, (String*)&local_38, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
                  goto LAB_00103004;
               }

               if (*(long*)( in_RSI + 0x268 ) == 0) {
                  pcVar6 = "GLTFPhysicsShape: Error converting concave mesh shape to a shape resource: The mesh resource is null.";
                  uVar5 = 0x104;
                  goto LAB_0010381c;
               }

               ImporterMesh::create_trimesh_shape();
               if (local_40 == (SphereShape3D*)0x0) {
                  pOVar1 = *(Object**)( in_RSI + 0x270 );
                  if (pOVar1 == (Object*)0x0) goto LAB_00103004;
                  *(undefined8*)( in_RSI + 0x270 ) = 0;
                  local_38 = pOVar1;
                  LAB_001036bb:Ref<Shape3D>::unref((Ref<Shape3D>*)&local_38);
                  if (local_40 == (SphereShape3D*)0x0) goto LAB_00103004;
               }
 else {
                  pOVar3 = (Object*)__dynamic_cast(local_40, &Object::typeinfo, &Shape3D::typeinfo, 0);
                  pOVar1 = *(Object**)( in_RSI + 0x270 );
                  if (pOVar1 != pOVar3) {
                     *(Object**)( in_RSI + 0x270 ) = pOVar3;
                     local_38 = pOVar1;
                     if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
                        *(undefined8*)( in_RSI + 0x270 ) = 0;
                     }

                     goto LAB_001036bb;
                  }

               }

               cVar2 = RefCounted::unreference();
               pOVar1 = (Object*)local_40;
               if (cVar2 == '\0') goto LAB_00103004;
               cVar2 = predelete_handler((Object*)local_40);
            }
 else {
               if (*(long*)( in_RSI + 0x268 ) == 0) {
                  pcVar6 = "GLTFPhysicsShape: Error converting convex hull shape to a shape resource: The mesh resource is null.";
                  uVar5 = 0x100;
                  LAB_0010381c:_err_print_error("to_resource", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", uVar5, "Condition \"importer_mesh.is_null()\" is true. Returning: _shape_cache", pcVar6, 0, 0);
                  *(undefined8*)this_03 = 0;
                  Ref<Shape3D>::operator =(this_03, *(Ref**)( in_RSI + 0x270 ));
                  goto LAB_00103029;
               }

               local_40 = (SphereShape3D*)0x0;
               ImporterMesh::get_mesh((Ref*)&local_38);
               Mesh::create_convex_shape(SUB81(&local_48, 0), SUB81(local_38, 0));
               if (( ( local_38 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar1 = local_38,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
               Memory::free_static(pOVar1, false);
            }

            if (( ( local_40 != (SphereShape3D*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pSVar4 = local_40,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pSVar4 + 0x140 ))(pSVar4);
            Memory::free_static(pSVar4, false);
         }

         pOVar1 = *(Object**)( in_RSI + 0x270 );
         if (local_48 == (SphereShape3D*)0x0) {
            if (pOVar1 == (Object*)0x0) goto LAB_00103004;
            *(undefined8*)( in_RSI + 0x270 ) = 0;
            local_38 = pOVar1;
            LAB_00103454:Ref<Shape3D>::unref((Ref<Shape3D>*)&local_38);
            if (local_48 == (SphereShape3D*)0x0) goto LAB_00103004;
         }
 else {
            pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &Shape3D::typeinfo, 0);
            if (pOVar3 != pOVar1) {
               *(Object**)( in_RSI + 0x270 ) = pOVar3;
               local_38 = pOVar1;
               if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
                  *(undefined8*)( in_RSI + 0x270 ) = 0;
               }

               goto LAB_00103454;
            }

         }

         cVar2 = RefCounted::unreference();
         pOVar1 = (Object*)local_48;
         if (cVar2 == '\0') goto LAB_00103004;
         cVar2 = predelete_handler((Object*)local_48);
      }

      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   else{local_48 = (SphereShape3D*)0x0;
   pSVar4 = (SphereShape3D*)operator_new(0x278, "");
   SphereShape3D::SphereShape3D(pSVar4);
   postinitialize_handler((Object*)pSVar4);
   local_38 = (Object*)0x0;
   local_40 = pSVar4;
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      local_40 = (SphereShape3D*)0x0;
      pSVar4 = (SphereShape3D*)0x0;
      Ref<SphereShape3D>::unref((Ref<SphereShape3D>*)&local_38);
   }
 else {
      Ref<SphereShape3D>::unref((Ref<SphereShape3D>*)&local_38);
      local_38 = (Object*)0x0;
      local_48 = pSVar4;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         local_48 = (SphereShape3D*)0x0;
         pSVar4 = (SphereShape3D*)0x0;
      }

      Ref<SphereShape3D>::unref((Ref<SphereShape3D>*)&local_38);
   }

   Ref<SphereShape3D>::unref((Ref<SphereShape3D>*)&local_40);
   SphereShape3D::set_radius(*(float*)( in_RSI + 0x254 ));
   pOVar3 = (Object*)__dynamic_cast(pSVar4, &Object::typeinfo, &Shape3D::typeinfo, 0);
   pOVar1 = *(Object**)( in_RSI + 0x270 );
   if (pOVar1 != pOVar3) {
      *(Object**)( in_RSI + 0x270 ) = pOVar3;
      local_38 = pOVar1;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)( in_RSI + 0x270 ) = 0;
      }

      Ref<Shape3D>::unref((Ref<Shape3D>*)&local_38);
   }

   Ref<SphereShape3D>::unref((Ref<SphereShape3D>*)&local_48);
}
}
  else{
   pBVar7 = (BoxShape3D*)0x0;
   this_00 = (BoxShape3D*)operator_new(0x280, "");
   BoxShape3D::BoxShape3D(this_00);
   postinitialize_handler((Object*)this_00);
   cVar2 = RefCounted::init_ref();
   if (cVar2 != '\0') {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
         pBVar7 = this_00;
      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this_00) ),cVar2 != '\0') {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         Memory::free_static(this_00, false);
      }

   }

   BoxShape3D::set_size(pBVar7);
   pOVar3 = (Object*)__dynamic_cast(pBVar7, &Object::typeinfo, &Shape3D::typeinfo, 0);
   pOVar1 = *(Object**)( in_RSI + 0x270 );
   if (pOVar1 != pOVar3) {
      *(Object**)( in_RSI + 0x270 ) = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
         *(undefined8*)( in_RSI + 0x270 ) = 0;
      }

      if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
LAB_00103110:cVar2 = RefCounted::unreference();if (cVar2 != '\0') {
   LAB_00103120:cVar2 = predelete_handler((Object*)pBVar7);
   if (cVar2 != '\0') {
      ( **(code**)( *(long*)pBVar7 + 0x140 ) )(pBVar7);
      Memory::free_static(pBVar7, false);
   }

}
}LAB_00103004:*(undefined8*)this_03 = 0;if (*(long*)( in_RSI + 0x270 ) != 0) {
   *(long*)this_03 = *(long*)( in_RSI + 0x270 );
   cVar2 = RefCounted::reference();
   if (cVar2 == '\0') {
      *(undefined8*)this_03 = 0;
   }

}
LAB_00103029:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return this_03;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* GLTFPhysicsShape::to_node(bool) */CollisionShape3D *GLTFPhysicsShape::to_node(bool param_1) {
   long lVar1;
   char cVar2;
   CollisionShape3D *this;
   long in_FS_OFFSET;
   Object *local_28;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   this(CollisionShape3D * operator_new(0x558, ""));
   CollisionShape3D::CollisionShape3D(this);
   postinitialize_handler((Object*)this);
   to_resource(true);
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

   CollisionShape3D::set_shape((Ref*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* GLTFPhysicsShape::from_resource(Ref<Shape3D> const&) */GLTFPhysicsShape * __thiscall GLTFPhysicsShape::from_resource(GLTFPhysicsShape *this,Ref *param_1){
   Object *pOVar1;
   undefined1 auVar2[12];
   Ref *pRVar3;
   Ref *pRVar4;
   char cVar5;
   long lVar6;
   Object *pOVar7;
   long lVar8;
   Variant *this_00;
   int iVar9;
   long in_FS_OFFSET;
   undefined4 uVar10;
   Ref *local_b0;
   Array local_a8[8];
   Array local_a0[8];
   Array local_98[8];
   Dictionary local_90[8];
   Ref *local_88;
   Ref *local_80;
   Ref *local_78;
   undefined8 local_70;
   undefined1 local_64[12];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   Ref<GLTFPhysicsShape>::instantiate<>((Ref<GLTFPhysicsShape>*)this);
   lVar8 = *(long*)param_1;
   if (lVar8 == 0) {
      _err_print_error("from_resource", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0xbb, "Condition \"p_shape_resource.is_null()\" is true. Returning: gltf_shape", "Tried to create a GLTFPhysicsShape from a Shape3D resource, but the given resource was null.", 0, 0);
      goto LAB_00104426;
   }

   lVar6 = __dynamic_cast(lVar8, &Object::typeinfo, &BoxShape3D::typeinfo, 0);
   if (lVar6 == 0) {
      lVar6 = __dynamic_cast(lVar8, &Object::typeinfo, &CapsuleShape3D::typeinfo, 0);
      if (lVar6 != 0) {
         local_70 = 7;
         local_78 = (Ref*)0x105888;
         String::parse_latin1((StrRange*)( *(long*)this + 0x240 ));
         pOVar7 = *(Object**)param_1;
         if (( ( pOVar7 != (Object*)0x0 ) && ( pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &CapsuleShape3D::typeinfo, 0) ),pOVar7 != (Object*)0x0 )) {
            pOVar7 = (Object*)0x0;
         }

         lVar8 = *(long*)this;
         uVar10 = CapsuleShape3D::get_radius();
         *(undefined4*)( lVar8 + 0x254 ) = uVar10;
         lVar8 = *(long*)this;
         uVar10 = CapsuleShape3D::get_height();
         *(undefined4*)( lVar8 + 600 ) = uVar10;
         cVar5 = RefCounted::unreference();
         auVar2._8_4_ = local_64._8_4_;
         auVar2._0_8_ = local_64._0_8_;
         joined_r0x00104771:if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar7);
            auVar2._8_4_ = local_64._8_4_;
            auVar2._0_8_ = local_64._0_8_;
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
               Memory::free_static(pOVar7, false);
               auVar2._8_4_ = local_64._8_4_;
               auVar2._0_8_ = local_64._0_8_;
            }

         }

         goto LAB_001043e4;
      }

      lVar6 = __dynamic_cast(lVar8, &Object::typeinfo, &CylinderShape3D::typeinfo, 0);
      if (lVar6 != 0) {
         String::parse_latin1((String*)( *(long*)this + 0x240 ), "cylinder");
         pOVar7 = *(Object**)param_1;
         if (( ( pOVar7 != (Object*)0x0 ) && ( pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &CylinderShape3D::typeinfo, 0) ),pOVar7 != (Object*)0x0 )) {
            pOVar7 = (Object*)0x0;
         }

         lVar8 = *(long*)this;
         uVar10 = CylinderShape3D::get_radius();
         *(undefined4*)( lVar8 + 0x254 ) = uVar10;
         lVar8 = *(long*)this;
         uVar10 = CylinderShape3D::get_height();
         *(undefined4*)( lVar8 + 600 ) = uVar10;
         cVar5 = RefCounted::unreference();
         auVar2._8_4_ = local_64._8_4_;
         auVar2._0_8_ = local_64._0_8_;
         goto joined_r0x001045ec;
      }

      lVar6 = __dynamic_cast(lVar8, &Object::typeinfo, &SphereShape3D::typeinfo, 0);
      if (lVar6 != 0) {
         String::parse_latin1((String*)( *(long*)this + 0x240 ), "sphere");
         pOVar7 = *(Object**)param_1;
         if (( ( pOVar7 != (Object*)0x0 ) && ( pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &SphereShape3D::typeinfo, 0) ),pOVar7 != (Object*)0x0 )) {
            pOVar7 = (Object*)0x0;
         }

         lVar8 = *(long*)this;
         uVar10 = SphereShape3D::get_radius();
         *(undefined4*)( lVar8 + 0x254 ) = uVar10;
         cVar5 = RefCounted::unreference();
         auVar2._8_4_ = local_64._8_4_;
         auVar2._0_8_ = local_64._0_8_;
         goto joined_r0x00104771;
      }

      lVar6 = __dynamic_cast(lVar8, &Object::typeinfo, &ConvexPolygonShape3D::typeinfo, 0);
      if (lVar6 == 0) {
         lVar8 = __dynamic_cast(lVar8, &Object::typeinfo, &ConcavePolygonShape3D::typeinfo, 0);
         if (lVar8 != 0) {
            String::parse_latin1((String*)( *(long*)this + 0x240 ), "trimesh");
            pOVar7 = *(Object**)param_1;
            if (( ( pOVar7 != (Object*)0x0 ) && ( pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &ConcavePolygonShape3D::typeinfo, 0) ),pOVar7 != (Object*)0x0 )) {
               pOVar7 = (Object*)0x0;
            }

            local_b0 = (Ref*)0x0;
            Ref<ImporterMesh>::instantiate<>((Ref<ImporterMesh>*)&local_b0);
            Array::Array(local_a8);
            iVar9 = (int)local_a8;
            Array::resize(iVar9);
            ConcavePolygonShape3D::get_faces();
            Variant::Variant((Variant*)&local_58, (Vector*)&local_78);
            this_00 = (Variant*)Array::operator [](iVar9);
            Variant::operator =(this_00, (Variant*)&local_58);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            CowData<Vector3>::_unref((CowData<Vector3>*)&local_70);
            pRVar3 = local_b0;
            local_80 = (Ref*)0x0;
            local_88 = (Ref*)0x0;
            Dictionary::Dictionary(local_90);
            Array::Array(local_a0);
            Array::Array(local_98);
            local_58 = 0;
            local_78 = (Ref*)0x0;
            local_50 = (undefined1[16])0x0;
            Array::set_typed((uint)local_98, (StringName*)0x1c, (Variant*)&local_78);
            if (( StringName::configured != '\0' ) && ( local_78 != (Ref*)0x0 )) {
               StringName::unref();
            }

            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            cVar5 = Array::is_same_typed(local_98);
            if (cVar5 == '\0') {
               Array::assign(local_98);
            }
 else {
               Array::_ref(local_98);
            }

            ImporterMesh::add_surface(pRVar3, 3, local_a8, local_98, local_90, &local_88, (CowData<char32_t>*)&local_80, 0);
            Array::~Array(local_98);
            Array::~Array(local_a0);
            Dictionary::~Dictionary(local_90);
            if (( ( local_88 != (Ref*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pRVar4 = local_88,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pRVar4 + 0x140 ))(pRVar4);
            Memory::free_static(pRVar4, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         lVar8 = *(long*)this;
         local_78 = (Ref*)0x0;
         Ref<ImporterMesh>::operator =((Ref<ImporterMesh>*)&local_78, pRVar3);
         Ref<ImporterMesh>::operator =((Ref<ImporterMesh>*)( lVar8 + 0x268 ), local_78);
         Ref<ImporterMesh>::unref((Ref<ImporterMesh>*)&local_78);
         Array::~Array(local_a8);
         Ref<ImporterMesh>::unref((Ref<ImporterMesh>*)&local_b0);
         cVar5 = RefCounted::unreference();
         auVar2._8_4_ = local_64._8_4_;
         auVar2._0_8_ = local_64._0_8_;
         goto joined_r0x00104771;
      }

      local_80 = (Ref*)0x0;
      String::parse_latin1((String*)&local_80, "\' had an unsupported shape type. Only BoxShape3D, CapsuleShape3D, CylinderShape3D, SphereShape3D, ConcavePolygonShape3D, and ConvexPolygonShape3D are supported.");
      Variant::Variant((Variant*)&local_58, *(Object**)param_1);
      Variant::operator_cast_to_String((Variant*)local_90);
      operator+((char *)&
      local_88,(String*)"Tried to create a GLTFPhysicsShape from a Shape3D, but the given shape \'";
      String::operator +((String*)&local_78, (String*)&local_88);
      _err_print_error("from_resource", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0xe0, (String*)&local_78, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      auVar2._8_4_ = local_64._8_4_;
      auVar2._0_8_ = local_64._0_8_;
      goto LAB_001043e4;
   }

   String::parse_latin1((String*)( *(long*)this + 0x240 ), "convex");
   pOVar7 = *(Object**)param_1;
   if (( ( pOVar7 != (Object*)0x0 ) && ( pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &ConvexPolygonShape3D::typeinfo, 0) ),pOVar7 != (Object*)0x0 )) {
      pOVar7 = (Object*)0x0;
   }

   ConvexPolygonShape3D::get_points();
   _convert_hull_points_to_mesh((Vector*)&local_88);
   if (local_88 != (Ref*)0x0) {
      lVar8 = *(long*)this;
      local_80 = (Ref*)0x0;
      Ref<ImporterMesh>::operator =((Ref<ImporterMesh>*)&local_80, local_88);
      Ref<ImporterMesh>::operator =((Ref<ImporterMesh>*)( lVar8 + 0x268 ), local_80);
      Ref<ImporterMesh>::unref((Ref<ImporterMesh>*)&local_80);
      Ref<ImporterMesh>::unref((Ref<ImporterMesh>*)&local_88);
      CowData<Vector3>::_unref((CowData<Vector3>*)&local_70);
      cVar5 = RefCounted::unreference();
      auVar2._8_4_ = local_64._8_4_;
      auVar2._0_8_ = local_64._0_8_;
      if (cVar5 == '\0') goto LAB_001043e4;
      goto LAB_001045f8;
   }

   _err_print_error("from_resource", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0xd3, "Condition \"importer_mesh.is_null()\" is true. Returning: gltf_shape", "GLTFPhysicsShape: Failed to convert convex hull points to a mesh.", 0, 0);
   Ref<ImporterMesh>::unref((Ref<ImporterMesh>*)&local_88);
   CowData<Vector3>::_unref((CowData<Vector3>*)&local_70);
   cVar5 = RefCounted::unreference();
}
else{local_70 = 3;local_78 = (Ref*)&_LC16;String::parse_latin1((StrRange*)( *(long*)this + 0x240 ));pOVar7 = *(Object**)param_1;if (( ( pOVar7 != (Object*)0x0 ) && ( pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &BoxShape3D::typeinfo, 0) ),pOVar7 != (Object*)0x0 )) {
   pOVar7 = (Object*)0x0;
}
lVar8 = *(long*)this;local_64 = BoxShape3D::get_size();local_58 = local_64._0_8_;local_50._0_4_ = local_64._8_4_;*(undefined1(*) [12])( lVar8 + 0x248 ) = local_64;cVar5 = RefCounted::unreference();auVar2 = local_64;joined_r0x001045ec:if (cVar5 != '\0') {
   LAB_001045f8:local_64 = auVar2;
   cVar5 = predelete_handler(pOVar7);
   auVar2 = local_64;
   if (cVar5 != '\0') {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
      auVar2 = local_64;
   }

}
LAB_001043e4:lVar8 = *(long*)this;pOVar1 = *(Object**)param_1;pOVar7 = *(Object**)( lVar8 + 0x270 );local_64 = auVar2;if (pOVar1 == pOVar7) goto LAB_00104426;*(Object**)( lVar8 + 0x270 ) = pOVar1;if (pOVar1 != (Object*)0x0) {
   cVar5 = RefCounted::reference();
   if (cVar5 == '\0') {
      *(undefined8*)( lVar8 + 0x270 ) = 0;
   }

}
if (pOVar7 == (Object*)0x0) goto LAB_00104426;cVar5 = RefCounted::unreference();}if (cVar5 != '\0') {
   cVar5 = predelete_handler(pOVar7);
   if (cVar5 != '\0') {
      ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
      Memory::free_static(pOVar7, false);
   }

}
LAB_00104426:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return this;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* GLTFPhysicsShape::from_node(CollisionShape3D const*) */GLTFPhysicsShape * __thiscall
GLTFPhysicsShape::from_node(GLTFPhysicsShape *this,CollisionShape3D *param_1){
   Object *pOVar1;
   char cVar2;
   long lVar3;
   long in_FS_OFFSET;
   Object *local_40;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   if (param_1 == (CollisionShape3D*)0x0) {
      _err_print_error("from_node", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0xa5, "Parameter \"p_godot_shape_node\" is null.", "Tried to create a GLTFPhysicsShape from a CollisionShape3D node, but the given node was null.", 0, 0);
      goto LAB_00104d56;
   }

   CollisionShape3D::get_shape();
   if (local_40 == (Object*)0x0) {
      _err_print_error("from_node", "modules/gltf/extensions/physics/gltf_physics_shape.cpp", 0xa7, "Condition \"shape_resource.is_null()\" is true. Returning: gltf_shape", "Tried to create a GLTFPhysicsShape from a CollisionShape3D node, but the given node had a null shape.", 0, 0);
   }
 else {
      from_resource((GLTFPhysicsShape*)&local_38, (Ref*)&local_40);
      pOVar1 = *(Object**)this;
      if (local_38 == pOVar1) {
         LAB_00104cfa:if (local_38 != (Object*)0x0) {
            LAB_00104cff:cVar2 = RefCounted::unreference();
            if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(local_38) ),cVar2 != '\0') {
               ( **(code**)( *(long*)local_38 + 0x140 ) )(local_38);
               Memory::free_static(local_38, false);
            }

         }

      }
 else {
         *(Object**)this = local_38;
         if (local_38 != (Object*)0x0) {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *(undefined8*)this = 0;
            }

            if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) goto LAB_00104ce3;
            goto LAB_00104cff;
         }

         if (( ( pOVar1 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) {
            LAB_00104ce3:( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            goto LAB_00104cfa;
         }

      }

      lVar3 = Node::get_parent();
      if (( lVar3 != 0 ) && ( lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &Area3D::typeinfo, 0) ),lVar3 != 0) {
         *(undefined1*)( *(long*)this + 0x25c ) = 1;
      }

   }

   if (( ( local_40 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_40 + 0x140 ))(local_40);
   Memory::free_static(local_40, false);
}
LAB_00104d56:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return this;}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* GLTFPhysicsShape::is_class_ptr(void*) const */uint GLTFPhysicsShape::is_class_ptr(GLTFPhysicsShape *this, void *param_1) {
   return (uint)CONCAT71(0x1159, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFPhysicsShape::_getv(StringName const&, Variant&) const */undefined8 GLTFPhysicsShape::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFPhysicsShape::_setv(StringName const&, Variant const&) */undefined8 GLTFPhysicsShape::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFPhysicsShape::_validate_propertyv(PropertyInfo&) const */void GLTFPhysicsShape::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFPhysicsShape::_property_can_revertv(StringName const&) const */undefined8 GLTFPhysicsShape::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFPhysicsShape::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFPhysicsShape::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFPhysicsShape::_notificationv(int, bool) */void GLTFPhysicsShape::_notificationv(int param_1, bool param_2) {
   return;
}
/* ImporterMesh::is_class_ptr(void*) const */uint ImporterMesh::is_class_ptr(ImporterMesh *this, void *param_1) {
   return (uint)CONCAT71(0x1159, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1158, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1159, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ImporterMesh::_getv(StringName const&, Variant&) const */undefined8 ImporterMesh::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ImporterMesh::_setv(StringName const&, Variant const&) */undefined8 ImporterMesh::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ImporterMesh::_validate_propertyv(PropertyInfo&) const */void ImporterMesh::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ImporterMesh::_property_can_revertv(StringName const&) const */undefined8 ImporterMesh::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ImporterMesh::_property_get_revertv(StringName const&, Variant&) const */undefined8 ImporterMesh::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ImporterMesh::_notificationv(int, bool) */void ImporterMesh::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindT<Ref<ImporterMesh> >::_gen_argument_type(int) const */byte MethodBindT<Ref<ImporterMesh>>::_gen_argument_type(MethodBindT<Ref<ImporterMesh>> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Ref<ImporterMesh> >::get_argument_meta(int) const */undefined8 MethodBindT<Ref<ImporterMesh>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Ref<ImporterMesh>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Ref<ImporterMesh>>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Ref<ImporterMesh>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Ref<ImporterMesh>>::get_argument_meta(int param_1) {
   return 0;
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
/* MethodBindT<float>::_gen_argument_type(int) const */byte MethodBindT<float>::_gen_argument_type(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 3;
}
/* MethodBindT<float>::get_argument_meta(int) const */byte MethodBindT<float>::get_argument_meta(MethodBindT<float> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* MethodBindTRC<float>::_gen_argument_type(int) const */undefined8 MethodBindTRC<float>::_gen_argument_type(int param_1) {
   return 3;
}
/* MethodBindTRC<float>::get_argument_meta(int) const */uint MethodBindTRC<float>::get_argument_meta(MethodBindTRC<float> *this, int param_1) {
   return param_1 >> 0x1f & 9;
}
/* MethodBindT<Vector3>::_gen_argument_type(int) const */byte MethodBindT<Vector3>::_gen_argument_type(MethodBindT<Vector3> *this, int param_1) {
   return -(param_1 == 0) & 9;
}
/* MethodBindT<Vector3>::get_argument_meta(int) const */undefined8 MethodBindT<Vector3>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector3>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector3>::_gen_argument_type(int param_1) {
   return 9;
}
/* MethodBindTRC<Vector3>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector3>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<String>::_gen_argument_type(int) const */long MethodBindT<String>::_gen_argument_type(MethodBindT<String> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<String>::get_argument_meta(int) const */undefined8 MethodBindT<String>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<String>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTRC<String>::get_argument_meta(int) const */undefined8 MethodBindTRC<String>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1) {
   return 0x1b;
}
/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::_gen_argument_type(int) const */char MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::_gen_argument_type(MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary> *this, int param_1) {
   return ( -(param_1 == 0) & 3U ) + 0x18;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::get_argument_meta(int) const */undefined8 MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Ref<Shape3D>, bool>::_gen_argument_type(int) const */int MethodBindTR<Ref<Shape3D>,bool>::_gen_argument_type(MethodBindTR<Ref<Shape3D>,bool> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe9 ) + 0x18;
}
/* MethodBindTR<Ref<Shape3D>, bool>::get_argument_meta(int) const */undefined8 MethodBindTR<Ref<Shape3D>,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::_gen_argument_type(int) const */undefined8 MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::get_argument_meta(int) const */undefined8 MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<CollisionShape3D*, bool>::_gen_argument_type(int) const */int MethodBindTR<CollisionShape3D*,bool>::_gen_argument_type(MethodBindTR<CollisionShape3D*,bool> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xffffffe9 ) + 0x18;
}
/* MethodBindTR<CollisionShape3D*, bool>::get_argument_meta(int) const */undefined8 MethodBindTR<CollisionShape3D*,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::_gen_argument_type(int) const */undefined8 MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::get_argument_meta(int) const */undefined8 MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001151c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001151c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindTR<CollisionShape3D*, bool>::~MethodBindTR() */void MethodBindTR<CollisionShape3D*,bool>::~MethodBindTR(MethodBindTR<CollisionShape3D*,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115220;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<CollisionShape3D*, bool>::~MethodBindTR() */void MethodBindTR<CollisionShape3D*,bool>::~MethodBindTR(MethodBindTR<CollisionShape3D*,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115220;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115280;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115280;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindTR<Ref<Shape3D>, bool>::~MethodBindTR() */void MethodBindTR<Ref<Shape3D>,bool>::~MethodBindTR(MethodBindTR<Ref<Shape3D>,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001152e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Ref<Shape3D>, bool>::~MethodBindTR() */void MethodBindTR<Ref<Shape3D>,bool>::~MethodBindTR(MethodBindTR<Ref<Shape3D>,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001152e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115340;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115340;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x60);
   return;
}
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */void MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001153a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */void MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001153a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115400;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115400;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String>::~MethodBindT() */void MethodBindT<String>::~MethodBindT(MethodBindT<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115460;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String>::~MethodBindT() */void MethodBindT<String>::~MethodBindT(MethodBindT<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115460;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001154c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001154c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Vector3>::~MethodBindT() */void MethodBindT<Vector3>::~MethodBindT(MethodBindT<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115520;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Vector3>::~MethodBindT() */void MethodBindT<Vector3>::~MethodBindT(MethodBindT<Vector3> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115520;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115580;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<float>::~MethodBindTRC() */void MethodBindTRC<float>::~MethodBindTRC(MethodBindTRC<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115580;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001155e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<float>::~MethodBindT() */void MethodBindT<float>::~MethodBindT(MethodBindT<float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001155e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115640;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115640;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001156a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001156a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115700;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115700;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115760;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115760;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Ref<ImporterMesh>>::~MethodBindTRC() */void MethodBindTRC<Ref<ImporterMesh>>::~MethodBindTRC(MethodBindTRC<Ref<ImporterMesh>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001157c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Ref<ImporterMesh>>::~MethodBindTRC() */void MethodBindTRC<Ref<ImporterMesh>>::~MethodBindTRC(MethodBindTRC<Ref<ImporterMesh>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001157c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Ref<ImporterMesh> >::~MethodBindT() */void MethodBindT<Ref<ImporterMesh>>::~MethodBindT(MethodBindT<Ref<ImporterMesh>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115820;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Ref<ImporterMesh> >::~MethodBindT() */void MethodBindT<Ref<ImporterMesh>>::~MethodBindT(MethodBindT<Ref<ImporterMesh>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115820;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
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
/* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::validated_call(MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   char cVar1;
   long in_FS_OFFSET;
   Object *local_30;
   undefined8 local_28;
   Object *local_20;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_30, *(undefined8*)( *param_2 + 0x10 ), *param_2, 0);
   if (local_30 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_28 = *(undefined8*)( local_30 + 0x60 );
      local_20 = local_30;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_30 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_30);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
            Memory::free_static(local_30, false);
         }

      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::validated_call(MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   char cVar2;
   long in_FS_OFFSET;
   Object *local_48;
   Dictionary local_40[8];
   undefined8 local_38;
   Object *local_30;
   long local_20;
   pcVar1 = *(code**)( this + 0x58 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_40, *param_2 + 8);
   ( *pcVar1 )(&local_48);
   if (local_48 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_38 = *(undefined8*)( local_48 + 0x60 );
      local_30 = local_48;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_48 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_48);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
            Memory::free_static(local_48, false);
         }

      }

   }

   Dictionary::~Dictionary(local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::ptrcall(MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   Object *pOVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( this + 0x58 ) )(&local_28);
   if (local_28 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar3 = *param_3;
      if (pOVar3 == (Object*)0x0) goto LAB_001066b7;
      *(undefined8*)param_3 = 0;
      goto LAB_00106727;
   }

   pOVar2 = (Object*)__dynamic_cast(local_28, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar3 = *param_3;
   if (pOVar3 != pOVar2) {
      *(Object**)param_3 = pOVar2;
      if (pOVar2 == (Object*)0x0) {
         if (pOVar3 != (Object*)0x0) goto LAB_00106727;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar3 != (Object*)0x0) {
            LAB_00106727:cVar1 = RefCounted::unreference();
            if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(pOVar3) ),cVar1 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

         if (local_28 == (Object*)0x0) goto LAB_001066b7;
      }

   }

   cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(local_28) ),cVar1 != '\0') {
      ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
      Memory::free_static(local_28, false);
   }

   LAB_001066b7:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::ptrcall(Object*, void const**, void*) const */void MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::ptrcall(MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   char cVar2;
   Object *pOVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   Object *local_40;
   Dictionary local_38[8];
   long local_30;
   pcVar1 = *(code**)( this + 0x58 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_38, (Dictionary*)*param_2);
   ( *pcVar1 )(&local_40);
   if (local_40 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar4 = *param_3;
      if (pOVar4 == (Object*)0x0) goto LAB_0010680b;
      *(undefined8*)param_3 = 0;
      goto LAB_00106887;
   }

   pOVar3 = (Object*)__dynamic_cast(local_40, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar4 = *param_3;
   if (pOVar4 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar4 != (Object*)0x0) goto LAB_00106887;
      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar4 != (Object*)0x0) {
            LAB_00106887:cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(pOVar4);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }

            }

         }

         if (local_40 == (Object*)0x0) goto LAB_0010680b;
      }

   }

   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_40);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)local_40 + 0x140 ) )(local_40);
         Memory::free_static(local_40, false);
      }

   }

   LAB_0010680b:Dictionary::~Dictionary(local_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::validated_call(MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   Object *local_68;
   Object *local_60;
   undefined8 local_58;
   Object *local_50;
   int local_48[6];
   long local_30;
   pcVar1 = *(code**)( this + 0x58 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_48, *(Object**)( *param_2 + 0x10 ));
   local_60 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_60;
   if (pOVar4 == local_60) goto LAB_00106972;
   if (pOVar4 == (Object*)0x0) {
      if (local_60 == (Object*)0x0) goto LAB_00106972;
      local_60 = (Object*)0x0;
   }
 else {
      pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &Shape3D::typeinfo, 0);
      if (pOVar2 == pOVar4) goto LAB_00106972;
      local_60 = pOVar4;
      if (pOVar4 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_60 = (Object*)0x0;
         }

      }

      if (pOVar2 == (Object*)0x0) goto LAB_00106972;
   }

   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler(pOVar2);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   LAB_00106972:if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar1 )(&local_68);
   if (local_68 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_58 = *(undefined8*)( local_68 + 0x60 );
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::ptrcall(MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   char cVar2;
   Object *pOVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   Object *local_30;
   Object *local_28;
   long local_20;
   pcVar1 = *(code**)( this + 0x58 );
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   /* WARNING: Load size is inaccurate */
   if (( (long*)*param_2 == (long*)0x0 ) || ( local_28 = **param_2 ),local_28 == (Object*)0x0) {
      LAB_00106bd0:local_28 = (Object*)0x0;
   }
 else {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') goto LAB_00106bd0;
   }

   ( *pcVar1 )(&local_30);
   if (local_30 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar4 = *param_3;
      if (pOVar4 == (Object*)0x0) goto LAB_00106b95;
      *(undefined8*)param_3 = 0;
      goto LAB_00106c33;
   }

   pOVar3 = (Object*)__dynamic_cast(local_30, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar4 = *param_3;
   if (pOVar4 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar4 != (Object*)0x0) goto LAB_00106c33;
      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar4 != (Object*)0x0) {
            LAB_00106c33:cVar2 = RefCounted::unreference();
            if (cVar2 != '\0') {
               cVar2 = predelete_handler(pOVar4);
               if (cVar2 != '\0') {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }

            }

         }

         if (local_30 == (Object*)0x0) goto LAB_00106b95;
      }

   }

   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler(local_30);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)local_30 + 0x140 ) )(local_30);
         Memory::free_static(local_30, false);
      }

   }

   LAB_00106b95:if (local_28 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar4 = local_28;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_28);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ImporterMesh::_get_class_namev() const */undefined8 *ImporterMesh::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106cf3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106cf3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImporterMesh");
         goto LAB_00106d5e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImporterMesh");
   LAB_00106d5e:return &_get_class_namev();
}
/* GLTFPhysicsShape::_get_class_namev() const */undefined8 *GLTFPhysicsShape::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106de3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106de3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFPhysicsShape");
         goto LAB_00106e4e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFPhysicsShape");
   LAB_00106e4e:return &_get_class_namev();
}
/* CowData<ImporterMesh::Surface>::_unref() [clone .part.0] */void CowData<ImporterMesh::Surface>::_unref(CowData<ImporterMesh::Surface> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   Array *pAVar6;
   Object *pOVar7;
   code *pcVar8;
   char cVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   Array *this_00;
   long lVar13;
   long lVar14;
   lVar2 = *(long*)this;
   if (lVar2 != 0) {
      lVar3 = *(long*)( lVar2 + -8 );
      *(undefined8*)this = 0;
      if (lVar3 != 0) {
         lVar11 = 0;
         lVar10 = lVar2;
         do {
            if (*(long*)( lVar10 + 0x38 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar10 + 0x38 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( lVar10 + 0x38 );
                  *(undefined8*)( lVar10 + 0x38 ) = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (*(long*)( lVar10 + 0x30 ) != 0) {
               cVar9 = RefCounted::unreference();
               if (cVar9 != '\0') {
                  pOVar7 = *(Object**)( lVar10 + 0x30 );
                  cVar9 = predelete_handler(pOVar7);
                  if (cVar9 != '\0') {
                     ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                     Memory::free_static(pOVar7, false);
                  }

               }

            }

            if (*(long*)( lVar10 + 0x28 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar10 + 0x28 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *(long*)( lVar10 + 0x28 );
                  if (lVar4 == 0) goto LAB_00107050;
                  lVar13 = *(long*)( lVar4 + -8 );
                  *(undefined8*)( lVar10 + 0x28 ) = 0;
                  if (lVar13 != 0) {
                     lVar12 = 0;
                     lVar14 = lVar4;
                     do {
                        if (*(long*)( lVar14 + 8 ) != 0) {
                           LOCK();
                           plVar1 = (long*)( *(long*)( lVar14 + 8 ) + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              lVar5 = *(long*)( lVar14 + 8 );
                              *(undefined8*)( lVar14 + 8 ) = 0;
                              Memory::free_static((void*)( lVar5 + -0x10 ), false);
                           }

                        }

                        lVar12 = lVar12 + 1;
                        lVar14 = lVar14 + 0x18;
                     }
 while ( lVar13 != lVar12 );
                  }

                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            if (*(long*)( lVar10 + 0x18 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar10 + 0x18 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  pAVar6 = *(Array**)( lVar10 + 0x18 );
                  if (pAVar6 == (Array*)0x0) goto LAB_00107050;
                  lVar4 = *(long*)( pAVar6 + -8 );
                  *(undefined8*)( lVar10 + 0x18 ) = 0;
                  if (lVar4 != 0) {
                     lVar13 = 0;
                     this_00 = pAVar6;
                     do {
                        lVar13 = lVar13 + 1;
                        Array::~Array(this_00);
                        this_00 = this_00 + 8;
                     }
 while ( lVar4 != lVar13 );
                  }

                  Memory::free_static(pAVar6 + -0x10, false);
               }

            }

            pAVar6 = (Array*)( lVar10 + 8 );
            lVar11 = lVar11 + 1;
            lVar10 = lVar10 + 0x48;
            Array::~Array(pAVar6);
         }
 while ( lVar3 != lVar11 );
      }

      Memory::free_static((void*)( lVar2 + -0x10 ), false);
      return;
   }

   LAB_00107050:/* WARNING: Does not return */pcVar8 = (code*)invalidInstructionException();
   ( *pcVar8 )();
}
/* String::~String() */void String::~String(String *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   long lVar7;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar8;
   long in_FS_OFFSET;
   Object *local_58;
   Variant local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (in_R8D < 2) {
      pVVar8 = param_2[5];
      if (pVVar8 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00107278;
         LAB_001071f0:pVVar8 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar8 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00107278:uVar6 = 4;
            goto LAB_00107205;
         }

         if (in_R8D == 1) goto LAB_001071f0;
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar8 = pVVar8 + lVar7 * 0x18;
      }

      *in_R9 = 0;
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar8, 0x1b);
      uVar4 = _LC12;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Dictionary(local_50);
      ( *(code*)pVVar1 )(&local_58, local_50);
      Variant::Variant((Variant*)local_48, local_58);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
      if (( ( local_58 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
      Memory::free_static(local_58, false);
   }

   Dictionary::~Dictionary((Dictionary*)local_50);
}
else{uVar6 = 3;LAB_00107205:*in_R9 = uVar6;in_R9[2] = 1;}if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* ImporterMesh::~ImporterMesh() */void ImporterMesh::~ImporterMesh(ImporterMesh *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   Object *pOVar5;
   code *pcVar6;
   char cVar7;
   long *plVar8;
   long lVar9;
   *(undefined***)this = &PTR__initialize_classv_00114fe8;
   if (*(long*)( this + 0x270 ) != 0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
         pOVar5 = *(Object**)( this + 0x270 );
         cVar7 = predelete_handler(pOVar5);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   if (*(long*)( this + 0x268 ) != 0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
         pOVar5 = *(Object**)( this + 0x268 );
         cVar7 = predelete_handler(pOVar5);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   if (*(long*)( this + 600 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 600 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 600 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         lVar3 = plVar1[-1];
         *(undefined8*)( this + 600 ) = 0;
         if (lVar3 != 0) {
            lVar9 = 0;
            plVar8 = plVar1;
            do {
               if (*plVar8 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar8 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar8;
                     *plVar8 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar3 != lVar9 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x248 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x248 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         CowData<ImporterMesh::Surface>::_unref((CowData<ImporterMesh::Surface>*)( this + 0x248 ));
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* ImporterMesh::~ImporterMesh() */void ImporterMesh::~ImporterMesh(ImporterMesh *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   Object *pOVar5;
   code *pcVar6;
   char cVar7;
   long *plVar8;
   long lVar9;
   *(undefined***)this = &PTR__initialize_classv_00114fe8;
   if (*(long*)( this + 0x270 ) != 0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
         pOVar5 = *(Object**)( this + 0x270 );
         cVar7 = predelete_handler(pOVar5);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   if (*(long*)( this + 0x268 ) != 0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
         pOVar5 = *(Object**)( this + 0x268 );
         cVar7 = predelete_handler(pOVar5);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   if (*(long*)( this + 600 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 600 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 600 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         lVar3 = plVar1[-1];
         *(undefined8*)( this + 600 ) = 0;
         if (lVar3 != 0) {
            lVar9 = 0;
            plVar8 = plVar1;
            do {
               if (*plVar8 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar8 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar8;
                     *plVar8 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar3 != lVar9 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x248 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x248 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         CowData<ImporterMesh::Surface>::_unref((CowData<ImporterMesh::Surface>*)( this + 0x248 ));
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x280);
   return;
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   undefined4 uVar5;
   Object *pOVar6;
   Object *pOVar7;
   long lVar8;
   long lVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   Object *local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (1 < in_R8D) {
      uVar5 = 3;
      LAB_00107765:*in_R9 = uVar5;
      in_R9[2] = 1;
      goto LAB_0010776e;
   }

   pVVar10 = param_2[5];
   if (pVVar10 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_001077e0;
      LAB_00107750:pVVar10 = *(Variant**)param_4;
   }
 else {
      lVar8 = *(long*)( pVVar10 + -8 );
      if ((int)lVar8 < (int)( in_R8D ^ 1 )) {
         LAB_001077e0:uVar5 = 4;
         goto LAB_00107765;
      }

      if (in_R8D == 1) goto LAB_00107750;
      lVar9 = (long)( (int)lVar8 + -1 );
      if (lVar8 <= lVar9) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      pVVar10 = pVVar10 + lVar9 * 0x18;
   }

   *in_R9 = 0;
   cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x18);
   if (cVar4 == '\0') {
      LAB_00107681:uVar3 = _LC14;
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar3;
   }
 else {
      pOVar6 = Variant::operator_cast_to_Object_(pVVar10);
      pOVar7 = Variant::operator_cast_to_Object_(pVVar10);
      if (( ( pOVar7 == (Object*)0x0 ) || ( lVar8 = __dynamic_cast(pOVar7, &Object::typeinfo, &CollisionShape3D::typeinfo, 0) ),lVar8 == 0 )) goto LAB_00107681;
   }

   pOVar6 = Variant::operator_cast_to_Object_(pVVar10);
   if (pOVar6 != (Object*)0x0) {
      pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &CollisionShape3D::typeinfo, 0);
   }

   ( *(code*)pVVar1 )(&local_50, pOVar6);
   Variant::Variant((Variant*)local_48, local_50);
   if (Variant::needs_deinit[*(int*)param_1] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)param_1 = local_48[0];
   *(undefined8*)( param_1 + 8 ) = local_40;
   *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   if (( ( local_50 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_50 + 0x140 ))(local_50);
   Memory::free_static(local_50, false);
}
LAB_0010776e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* ImporterMesh::get_class() const */void ImporterMesh::get_class(void) {
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
/* GLTFPhysicsShape::get_class() const */void GLTFPhysicsShape::get_class(void) {
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
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   Object *pOVar8;
   long lVar9;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   Object *local_58;
   Object *local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pVVar1 = param_2[0xb];
   *(undefined4*)param_1 = 0;
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_00107bc5:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_00107bce;
   }

   pVVar10 = param_2[5];
   if (pVVar10 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00107c38;
      LAB_00107bb8:pVVar10 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar10 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00107c38:uVar7 = 4;
         goto LAB_00107bc5;
      }

      if (in_R8D == 1) goto LAB_00107bb8;
      lVar9 = (long)( (int)lVar2 + -1 );
      if (lVar2 <= lVar9) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      pVVar10 = pVVar10 + lVar9 * 0x18;
   }

   *in_R9 = 0;
   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar10);
   uVar4 = _LC14;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_50 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_50;
   if (pOVar8 != local_50) {
      if (pOVar8 == (Object*)0x0) {
         if (local_50 != (Object*)0x0) {
            local_50 = (Object*)0x0;
            LAB_00107b00:cVar6 = RefCounted::unreference();
            if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler(pOVar5) ),cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Shape3D::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_50 = pOVar8;
            if (( pOVar8 != (Object*)0x0 ) && ( cVar6 = RefCounted::reference() ),cVar6 == '\0') {
               local_50 = (Object*)0x0;
            }

            if (pOVar5 != (Object*)0x0) goto LAB_00107b00;
         }

      }

   }

   ( *(code*)pVVar1 )(&local_58, &local_50);
   Variant::Variant((Variant*)local_48, local_58);
   if (Variant::needs_deinit[*(int*)param_1] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)param_1 = local_48[0];
   *(undefined8*)( param_1 + 8 ) = local_40;
   *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   if (( ( local_58 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
   Memory::free_static(local_58, false);
}
if (( ( local_50 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_50,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);Memory::free_static(pOVar5, false);}LAB_00107bce:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* GLTFPhysicsShape::~GLTFPhysicsShape() */void GLTFPhysicsShape::~GLTFPhysicsShape(GLTFPhysicsShape *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_00114e10;
   if (*(long*)( this + 0x270 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x270 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x268 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x268 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFPhysicsShape::~GLTFPhysicsShape() */void GLTFPhysicsShape::~GLTFPhysicsShape(GLTFPhysicsShape *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_00114e10;
   if (*(long*)( this + 0x270 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x270 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x268 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x268 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x278);
   return;
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
                  if (lVar5 == 0) goto LAB_001081ef;
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

      LAB_001081ef:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001082a3;
   }

   cVar6 = String::operator ==((String*)param_1, "RefCounted");
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
                     if (lVar5 == 0) goto LAB_00108353;
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

         LAB_00108353:cVar6 = String::operator ==((String*)param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001082a3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==((String*)param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_001082a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
                  if (lVar4 == 0) goto LAB_0010847f;
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

      LAB_0010847f:cVar5 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00108533;
   }

   cVar5 = String::operator ==((String*)param_1, "Resource");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00108533:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ImporterMesh::is_class(String const&) const */undefined8 ImporterMesh::is_class(ImporterMesh *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001085ff;
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

      LAB_001085ff:cVar5 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_001086b3;
   }

   cVar5 = String::operator ==((String*)param_1, "ImporterMesh");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Resource::is_class((Resource*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_001086b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFPhysicsShape::is_class(String const&) const */undefined8 GLTFPhysicsShape::is_class(GLTFPhysicsShape *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010877f;
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

      LAB_0010877f:cVar5 = String::operator ==((String*)param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00108833;
   }

   cVar5 = String::operator ==((String*)param_1, "GLTFPhysicsShape");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = Resource::is_class((Resource*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00108833:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* void Ref<ImporterMesh>::instantiate<>() */void Ref<ImporterMesh>::instantiate<>(Ref<ImporterMesh> *this) {
   char cVar1;
   Resource *this_00;
   long lVar2;
   Resource *pRVar3;
   Object *pOVar4;
   Object *pOVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (Resource*)operator_new(0x280, "");
   pRVar3 = this_00;
   for (lVar2 = 0x50; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pRVar3 = 0;
      pRVar3 = pRVar3 + (ulong)bVar6 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   *(undefined***)this_00 = &PTR__initialize_classv_00114fe8;
   *(undefined8*)( this_00 + 0x248 ) = 0;
   *(undefined8*)( this_00 + 600 ) = 0;
   *(undefined4*)( this_00 + 0x260 ) = 0;
   *(undefined8*)( this_00 + 0x278 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x268 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar5 = *(Object**)this;
      if (pOVar5 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (Resource*)0x0;
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar5 = *(Object**)this;
      pOVar4 = pOVar5;
      if (this_00 == (Resource*)pOVar5) goto LAB_00108a35;
      *(Resource**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00108a35;
   }

   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (Resource*)0x0) {
      return;
   }

   LAB_00108a35:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(pOVar4) ),cVar1 != '\0') {
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* void Ref<GLTFPhysicsShape>::instantiate<>() */void Ref<GLTFPhysicsShape>::instantiate<>(Ref<GLTFPhysicsShape> *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   Resource *this_00;
   long lVar4;
   Resource *pRVar5;
   Object *pOVar6;
   Object *pOVar7;
   byte bVar8;
   bVar8 = 0;
   this_00 = (Resource*)operator_new(0x278, "");
   pRVar5 = this_00;
   for (lVar4 = 0x4f; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8*)pRVar5 = 0;
      pRVar5 = pRVar5 + (ulong)bVar8 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   uVar2 = _UNK_00115a18;
   uVar1 = __LC29;
   *(undefined***)this_00 = &PTR__initialize_classv_00114e10;
   *(undefined8*)( this_00 + 0x240 ) = 0;
   *(undefined4*)( this_00 + 600 ) = 0x40000000;
   this_00[0x25c] = (Resource)0x0;
   *(undefined4*)( this_00 + 0x260 ) = 0xffffffff;
   *(undefined8*)( this_00 + 0x248 ) = uVar1;
   *(undefined8*)( this_00 + 0x250 ) = uVar2;
   *(undefined1(*) [16])( this_00 + 0x268 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   cVar3 = RefCounted::init_ref();
   if (cVar3 == '\0') {
      pOVar7 = *(Object**)this;
      if (pOVar7 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar3 = RefCounted::unreference();
      if (cVar3 == '\0') {
         return;
      }

      this_00 = (Resource*)0x0;
      cVar3 = predelete_handler(pOVar7);
      if (cVar3 == '\0') {
         return;
      }

   }
 else {
      pOVar7 = *(Object**)this;
      pOVar6 = pOVar7;
      if (this_00 == (Resource*)pOVar7) goto LAB_00108bb5;
      *(Resource**)this = this_00;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar6 = (Object*)this_00;
      if (( ( pOVar7 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) goto LAB_00108bb5;
   }

   ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
   Memory::free_static(pOVar7, false);
   pOVar6 = (Object*)this_00;
   if (this_00 == (Resource*)0x0) {
      return;
   }

   LAB_00108bb5:cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar6) ),cVar3 != '\0') {
      ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
      Memory::free_static(pOVar6, false);
      return;
   }

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
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   pvVar5 = *(void**)( this + 0x18 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar4 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (*(long*)( (long)pvVar5 + 0x38 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x38 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x38 );
                        *(undefined8*)( (long)pvVar5 + 0x38 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  if (*(long*)( (long)pvVar5 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x20 );
                        *(undefined8*)( (long)pvVar5 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar5 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar5 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar3 = *(long*)( (long)pvVar5 + 0x10 );
                        *(undefined8*)( (long)pvVar5 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00108dd4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00108dd4:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* ImporterMesh::_initialize_classv() */void ImporterMesh::_initialize_classv(void) {
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
      local_48 = "ImporterMesh";
      local_60 = 0;
      local_40 = 0xc;
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
      if ((code*)PTR__bind_methods_0011a010 != Resource::_bind_methods) {
         ImporterMesh::_bind_methods();
      }

      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<ImporterMesh>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Ref<ImporterMesh>>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = "ImporterMesh";
   local_40 = 0xc;
   String::parse_latin1((StrRange*)&local_58);
   *puVar1 = 0x18;
   puVar1[6] = 0x11;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] != 0x11) {
         StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
         goto LAB_00109028;
      }

   }

   StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
   if (*(char**)( puVar1 + 4 ) == local_48) {
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(char**)( puVar1 + 4 ) = local_48;
   }

   LAB_00109028:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar1 = 4;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_001091b5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_001091b5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
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
   local_48 = &_LC10;
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

         goto LAB_00109315;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   LAB_00109315:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
/* MethodBindTRC<Vector3>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector3>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar1 = 9;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_001094a5;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_001094a5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
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
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
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
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
         }

         goto LAB_00109605;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   LAB_00109605:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar3 = 0x1b;
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

         goto LAB_001097a5;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   LAB_001097a5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
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
/* MethodBindTRC<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<float>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar1 = 3;
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00109935;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00109935:CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<float>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<float>::_gen_argument_type_info(int param_1) {
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
      local_68 = &_LC10;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 3, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
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
/* MethodBindT<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<String>::_gen_argument_type_info(int param_1) {
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
      local_68 = &_LC10;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 4, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
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
/* MethodBindT<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<bool>::_gen_argument_type_info(int param_1) {
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
      local_68 = &_LC10;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 1, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
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
/* MethodBindT<Vector3>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Vector3>::_gen_argument_type_info(int param_1) {
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
      local_68 = &_LC10;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 9, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
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
/* MethodBindT<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<int>::_gen_argument_type_info(int param_1) {
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
      local_68 = &_LC10;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_78);
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 2, (CowData<char32_t>*)&local_80, 0, (StrRange*)&local_78, 6, &local_70);
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
/* MethodBindT<Ref<ImporterMesh> >::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Ref<ImporterMesh>>::_gen_argument_type_info(int param_1) {
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
      local_68 = "ImporterMesh";
      local_60 = 0xc;
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
      LAB_0010a54d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010a54d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010a56f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x0010a56f:if (lVar2 == 0) {
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

         goto LAB_0010a8a1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010a8a1:local_b0 = (CowData<char32_t>*)&local_58;
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
/* ImporterMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ImporterMesh::_get_property_listv(ImporterMesh *this, List *param_1, bool param_2) {
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
   local_78 = "ImporterMesh";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ImporterMesh";
   local_98 = 0;
   local_70 = 0xc;
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

         goto LAB_0010ab51;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010ab51:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "ImporterMesh", false);
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
/* GLTFPhysicsShape::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFPhysicsShape::_get_property_listv(GLTFPhysicsShape *this, List *param_1, bool param_2) {
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
   local_78 = "GLTFPhysicsShape";
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GLTFPhysicsShape";
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

         goto LAB_0010ae01;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010ae01:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "GLTFPhysicsShape", false);
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
/* MethodBindTR<CollisionShape3D*, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<CollisionShape3D*,bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined8 local_b0;
   undefined8 local_a8;
   long local_a0;
   undefined8 local_98;
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
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 1, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
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
   }
 else {
      local_60 = 0x10;
      local_68 = "CollisionShape3D";
      String::parse_latin1((StrRange*)&local_98);
      StringName::StringName((StringName*)&local_68, (String*)&local_98, false);
      *puVar4 = 0x18;
      *(undefined8*)( puVar4 + 2 ) = 0;
      StringName::StringName((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
      bVar5 = StringName::configured != '\0';
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 6;
      if (( bVar5 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::_gen_argument_type_info(int) const
    */undefined4 *MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::_gen_argument_type_info(int param_1) {
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
      local_70 = 6;
      local_68 = "CollisionShape3D";
      local_78 = 0;
      local_a8 = 0;
      local_60 = 0x10;
      String::parse_latin1((StrRange*)&local_a8);
      StringName::StringName((StringName*)&local_a0, (String*)&local_a8, false);
      local_68 = (char*)CONCAT44(local_68._4_4_, 0x18);
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
      goto LAB_0010b465;
   }

   local_a0 = 0;
   local_60 = 0x10;
   local_68 = "GLTFPhysicsShape";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_0010b497:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      if (puVar4[6] == 0x11) goto LAB_0010b497;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_0010b465:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::_gen_argument_type_info(int param_1) {
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
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 0x1b, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
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
      goto LAB_0010b794;
   }

   local_a0 = 0;
   local_60 = 0x10;
   local_68 = "GLTFPhysicsShape";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_0010b7c7:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      if (puVar4[6] == 0x11) goto LAB_0010b7c7;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_0010b794:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::_gen_argument_type_info(int param_1) {
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
      local_68 = "Shape3D";
      local_60 = 7;
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
      goto LAB_0010bac8;
   }

   local_a0 = 0;
   local_60 = 0x10;
   local_68 = "GLTFPhysicsShape";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_0010baf7:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      if (puVar4[6] == 0x11) goto LAB_0010baf7;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_0010bac8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<Shape3D>, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Ref<Shape3D>,bool>::_gen_argument_type_info(int param_1) {
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
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 1, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
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
      goto LAB_0010bdf4;
   }

   local_a0 = 0;
   local_60 = 7;
   local_68 = "Shape3D";
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 0x18;
   puVar4[6] = 0x11;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_0010be27:StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
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
      if (puVar4[6] == 0x11) goto LAB_0010be27;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_0010bdf4:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<ImporterMesh>::unref() */void Ref<ImporterMesh>::unref(Ref<ImporterMesh> *this) {
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
/* Ref<Shape3D>::unref() */void Ref<Shape3D>::unref(Ref<Shape3D> *this) {
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, CollisionShape3D*, bool>(CollisionShape3D*
   (GLTFPhysicsShape::*)(bool)) */MethodBind *create_method_bind<GLTFPhysicsShape,CollisionShape3D*,bool>(_func_CollisionShape3D_ptr_bool *param_1) {
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
   *(_func_CollisionShape3D_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115220;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, Ref<Shape3D>, bool>(Ref<Shape3D>
   (GLTFPhysicsShape::*)(bool)) */MethodBind *create_method_bind<GLTFPhysicsShape,Ref<Shape3D>,bool>(_func_Ref_bool *param_1) {
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
   *(_func_Ref_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001152e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, Dictionary>(Dictionary (GLTFPhysicsShape::*)()
   const) */MethodBind *create_method_bind<GLTFPhysicsShape,Dictionary>(_func_Dictionary *param_1) {
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
   *(_func_Dictionary**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001153a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, String>(String (GLTFPhysicsShape::*)() const) */MethodBind *create_method_bind<GLTFPhysicsShape,String>(_func_String *param_1) {
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
   *(_func_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115400;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, String>(void (GLTFPhysicsShape::*)(String)) */MethodBind *create_method_bind<GLTFPhysicsShape,String>(_func_void_String *param_1) {
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
   *(_func_void_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115460;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, Vector3>(Vector3 (GLTFPhysicsShape::*)() const)
    */MethodBind *create_method_bind<GLTFPhysicsShape,Vector3>(_func_Vector3 *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001154c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, Vector3>(void (GLTFPhysicsShape::*)(Vector3)) */MethodBind *create_method_bind<GLTFPhysicsShape,Vector3>(_func_void_Vector3 *param_1) {
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
   *(_func_void_Vector3**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115520;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, float>(float (GLTFPhysicsShape::*)() const) */MethodBind *create_method_bind<GLTFPhysicsShape,float>(_func_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115580;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, float>(void (GLTFPhysicsShape::*)(float)) */MethodBind *create_method_bind<GLTFPhysicsShape,float>(_func_void_float *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001155e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, bool>(bool (GLTFPhysicsShape::*)() const) */MethodBind *create_method_bind<GLTFPhysicsShape,bool>(_func_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115640;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, bool>(void (GLTFPhysicsShape::*)(bool)) */MethodBind *create_method_bind<GLTFPhysicsShape,bool>(_func_void_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001156a0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, int>(int (GLTFPhysicsShape::*)() const) */MethodBind *create_method_bind<GLTFPhysicsShape,int>(_func_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115700;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, int>(void (GLTFPhysicsShape::*)(int)) */MethodBind *create_method_bind<GLTFPhysicsShape,int>(_func_void_int *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00115760;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, Ref<ImporterMesh>>(Ref<ImporterMesh>
   (GLTFPhysicsShape::*)() const) */MethodBind *create_method_bind<GLTFPhysicsShape,Ref<ImporterMesh>>(_func_Ref *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_001157c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* MethodBind* create_method_bind<GLTFPhysicsShape, Ref<ImporterMesh> >(void
   (GLTFPhysicsShape::*)(Ref<ImporterMesh>)) */MethodBind *create_method_bind<GLTFPhysicsShape,Ref<ImporterMesh>>(_func_void_Ref *param_1) {
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
   *(_func_void_Ref**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115820;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GLTFPhysicsShape";
   local_30 = 0x10;
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
/* GLTFPhysicsShape::_initialize_classv() */void GLTFPhysicsShape::_initialize_classv(void) {
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
      local_48 = "GLTFPhysicsShape";
      local_60 = 0;
      local_40 = 0x10;
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
      _bind_methods();
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<SphereShape3D>::unref() */void Ref<SphereShape3D>::unref(Ref<SphereShape3D> *this) {
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
/* CowData<Vector3>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Vector3>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
      lVar3 = lVar8 * 0xc;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0xc == 0) {
      LAB_0010d650:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 0xc - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_0010d650;
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
      LAB_0010d5bc:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_0010d54b;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0010d5bc;
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

   memset((void*)( (long)puVar9 + lVar3 * 0xc ), 0, ( param_1 - lVar3 ) * 0xc);
   LAB_0010d54b:puVar9[-1] = param_1;
   return 0;
}
/* LocalVector<Geometry3D::MeshData::Face, unsigned int, false, false>::resize(unsigned int) */void LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize(LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   long lVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   uint uVar5;
   long lVar6;
   uint uVar7;
   uVar7 = *(uint*)this;
   if (param_1 < uVar7) {
      lVar6 = (ulong)param_1 << 5;
      uVar7 = param_1;
      do {
         lVar2 = *(long*)( this + 8 ) + lVar6;
         if (*(void**)( lVar2 + 0x18 ) != (void*)0x0) {
            if (*(int*)( lVar2 + 0x10 ) != 0) {
               *(undefined4*)( lVar2 + 0x10 ) = 0;
            }

            Memory::free_static(*(void**)( lVar2 + 0x18 ), false);
         }

         uVar7 = uVar7 + 1;
         lVar6 = lVar6 + 0x20;
      }
 while ( uVar7 < *(uint*)this );
   }
 else {
      if (param_1 <= uVar7) {
         return;
      }

      uVar5 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar7 = uVar5 >> 1 | uVar5;
         uVar7 = uVar7 >> 2 | uVar7;
         uVar7 = uVar7 >> 4 | uVar7;
         uVar7 = uVar7 | uVar7 >> 8;
         uVar7 = ( uVar7 | uVar7 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar7;
         lVar6 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar7 << 5, false);
         *(long*)( this + 8 ) = lVar6;
         if (lVar6 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         uVar7 = *(uint*)this;
         if (param_1 <= uVar7) goto LAB_0010d71b;
      }

      lVar6 = *(long*)( this + 8 );
      puVar3 = (undefined8*)( (ulong)uVar7 * 0x20 + lVar6 );
      do {
         *puVar3 = 0;
         puVar4 = puVar3 + 4;
         *(undefined4*)( puVar3 + 1 ) = 0;
         *(undefined4*)( (long)puVar3 + 0xc ) = 0;
         puVar3[2] = 0;
         puVar3[3] = 0;
         puVar3 = puVar4;
      }
 while ( puVar4 != (undefined8*)( lVar6 + 0x20 + ( ( ulong )(uVar5 - uVar7) + (ulong)uVar7 ) * 0x20 ) );
   }

   LAB_0010d71b:*(uint*)this = param_1;
   return;
}
/* Geometry3D::MeshData::~MeshData() */void Geometry3D::MeshData::~MeshData(MeshData *this) {
   if (*(void**)( this + 0x28 ) != (void*)0x0) {
      if (*(int*)( this + 0x20 ) != 0) {
         *(undefined4*)( this + 0x20 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x28 ), false);
   }

   if (*(void**)( this + 0x18 ) != (void*)0x0) {
      if (*(int*)( this + 0x10 ) != 0) {
         *(undefined4*)( this + 0x10 ) = 0;
      }

      Memory::free_static(*(void**)( this + 0x18 ), false);
   }

   if (*(long*)( this + 8 ) != 0) {
      LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>::resize((LocalVector<Geometry3D::MeshData::Face,unsigned_int,false,false>*)this, 0);
      if (*(void**)( this + 8 ) != (void*)0x0) {
         Memory::free_static(*(void**)( this + 8 ), false);
         return;
      }

   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x0010da48) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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

         goto LAB_0010ded1;
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
      /* WARNING: Could not recover jumptable at 0x0010dd5c. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0010ded1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0010e0b1;
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
      /* WARNING: Could not recover jumptable at 0x0010df3b. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }

   LAB_0010e0b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010e210;
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

   LAB_0010e210:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0010e424;
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
   LAB_0010e424:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0010e5d3;
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
   LAB_0010e5d3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0010e911;
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
      /* WARNING: Could not recover jumptable at 0x0010e79d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined1*)( *(long*)param_3 + 8 ));
      return;
   }

   LAB_0010e911:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0010eaf9;
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
      /* WARNING: Could not recover jumptable at 0x0010e982. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3 != '\0');
      return;
   }

   LAB_0010eaf9:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ebc0;
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

   LAB_0010ebc0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0010edd2;
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
   LAB_0010edd2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0010ef81;
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
   LAB_0010ef81:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0010f2c9;
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
      /* WARNING: Could not recover jumptable at 0x0010f152. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010f2c9:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0010f4a9;
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
      /* WARNING: Could not recover jumptable at 0x0010f331. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(auVar2._0_8_, (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010f4a9:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f570;
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

   LAB_0010f570:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0010f788;
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
   LAB_0010f788:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0010f947;
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
   LAB_0010f947:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector3>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Vector3>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0010fc99;
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
      /* WARNING: Could not recover jumptable at 0x0010fb23. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( *(long*)param_3 + 8 ), *(undefined4*)( *(long*)param_3 + 0x10 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010fc99:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Vector3>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Vector3>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0010fe79;
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
      /* WARNING: Could not recover jumptable at 0x0010fd02. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(**param_3, *(undefined4*)( *param_3 + 1 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010fe79:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         auVar3._8_4_ = local_54._8_4_;
         auVar3._0_8_ = local_54._0_8_;
         if (( StringName::configured != '\0' ) && ( local_54 = local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ff50;
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
         Variant::Variant((Variant*)local_48, local_54);
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

   LAB_0010ff50:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0011016b;
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
   LAB_0011016b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0011032a;
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
   LAB_0011032a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<String>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   Variant *pVVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar6 = param_2[0x23];
         if (pVVar6 == (Variant*)0x0) {
            pVVar6 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar6 = param_2[1] + 0x20;
      }

      if (local_48 == (char*)*(long*)pVVar6) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110534;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar7 = *(code**)( param_1 + 0x58 );
   lVar2 = *(long*)( param_1 + 0x60 );
   lVar3 = *(long*)param_3;
   if (( (ulong)pcVar7 & 1 ) != 0) {
      pcVar7 = *(code**)( pcVar7 + *(long*)( (long)param_2 + lVar2 ) + -1 );
   }

   local_48 = (char*)0x0;
   lVar4 = *(long*)( lVar3 + 8 );
   plVar1 = (long*)( lVar4 + -0x10 );
   if (lVar4 != 0) {
      do {
         lVar4 = *plVar1;
         if (lVar4 == 0) goto LAB_00110527;
         LOCK();
         lVar5 = *plVar1;
         bVar8 = lVar4 == lVar5;
         if (bVar8) {
            *plVar1 = lVar4 + 1;
            lVar5 = lVar4;
         }

         UNLOCK();
      }
 while ( !bVar8 );
      if (lVar5 != -1) {
         local_48 = *(char**)( lVar3 + 8 );
      }

   }

   LAB_00110527:( *pcVar7 )((long*)( (long)param_2 + lVar2 ), (CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_00110534:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<String>::ptrcall(Object*, void const**, void*) const */void MethodBindT<String>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   bool bVar7;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar5 = (long*)param_2[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar5 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110752;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar2 = *(long*)( param_1 + 0x60 );
   /* WARNING: Load size is inaccurate */
   plVar5 = *param_3;
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar2 ) + -1 );
   }

   local_48 = (char*)0x0;
   lVar3 = *plVar5;
   plVar1 = (long*)( lVar3 + -0x10 );
   if (lVar3 != 0) {
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00110745;
         LOCK();
         lVar4 = *plVar1;
         bVar7 = lVar3 == lVar4;
         if (bVar7) {
            *plVar1 = lVar3 + 1;
            lVar4 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar7 );
      if (lVar4 != -1) {
         local_48 = (char*)*plVar5;
      }

   }

   LAB_00110745:( *pcVar6 )((long*)( (long)param_2 + lVar2 ), (CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_00110752:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001109b0;
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

         ( *(code*)pVVar2 )((CowData<char32_t>*)&local_58);
         Variant::Variant((Variant*)local_48, (String*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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

   LAB_001109b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<String>::validated_call(MethodBindTRC<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x10dc18;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110bec;
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

   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(Variant***)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_00110bec:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String>::ptrcall(MethodBindTRC<String> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x10dc18;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110dbd;
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

   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_00110dbd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Dictionary>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110ff0;
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

         ( *(code*)pVVar2 )((Dictionary*)&local_58);
         Variant::Variant((Variant*)local_48, (Dictionary*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         Dictionary::~Dictionary((Dictionary*)&local_58);
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

   LAB_00110ff0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Dictionary>::validated_call(MethodBindTRC<Dictionary> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x10dc18;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111219;
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

   ( *pcVar1 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_00111219:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Dictionary>::ptrcall(MethodBindTRC<Dictionary> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x10dc18;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001113ea;
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

   ( *pcVar1 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_001113ea:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<ImporterMesh> >::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Ref<ImporterMesh>>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_58 = (Object*)0x10dc18;
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

         goto LAB_00111658;
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
            LAB_00111616:cVar3 = RefCounted::unreference();
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
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &ImporterMesh::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_58 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_58 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00111616;
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

   LAB_00111658:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<ImporterMesh> >::ptrcall(Object*, void const**, void*) const */void MethodBindT<Ref<ImporterMesh>>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x10dc18;
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

         goto LAB_0011191c;
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
      LAB_001118f8:local_48 = (Object*)0x0;
   }
 else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_001118f8;
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

   LAB_0011191c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<ImporterMesh>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTRC<Ref<ImporterMesh>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         local_58 = (Object*)0x10dc18;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111be0;
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

   LAB_00111be0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<ImporterMesh>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Ref<ImporterMesh>>::ptrcall(MethodBindTRC<Ref<ImporterMesh>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x10dc18;
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

         goto LAB_00111e66;
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
      if (pOVar5 == (Object*)0x0) goto LAB_00111e66;
      *(undefined8*)param_3 = 0;
      goto LAB_00111ea9;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00111ea9;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00111ea9:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00111e66;
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

   LAB_00111e66:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<Shape3D>, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Ref<Shape3D>,bool>::ptrcall(MethodBindTR<Ref<Shape3D>,bool> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (Object*)0x10dc18;
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

         goto LAB_00112130;
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
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2 != '\0');
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_00112130;
      *(undefined8*)param_3 = 0;
      goto LAB_00112171;
   }

   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_00112171;
      }
 else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }

         if (pOVar5 != (Object*)0x0) {
            LAB_00112171:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

         if (local_48 == (Object*)0x0) goto LAB_00112130;
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

   LAB_00112130:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<CollisionShape3D*, bool>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTR<CollisionShape3D*,bool>::validated_call(MethodBindTR<CollisionShape3D*,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00112531;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), ( *param_2 )[8]);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Variant::ObjData::ref_pointer((Object*)( param_3 + 8 ));
      return;
   }

   LAB_00112531:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<CollisionShape3D*, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<CollisionShape3D*,bool>::ptrcall(MethodBindTR<CollisionShape3D*,bool> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   undefined8 uVar2;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011258f;
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
   uVar2 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), **param_2 != '\0');
   *(undefined8*)param_3 = uVar2;
   LAB_0011258f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Ref<ImporterMesh> >::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<Ref<ImporterMesh>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112918;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_0011290d:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_00112918;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00112970;
      LAB_00112960:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00112970:uVar7 = 4;
         goto LAB_0011290d;
      }

      if (in_R8D == 1) goto LAB_00112960;
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
   uVar5 = _LC14;
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
            goto LAB_001128df;
         }

      }
 else {
         pcVar8 = (char*)__dynamic_cast(pcVar8, &Object::typeinfo, &ImporterMesh::typeinfo, 0);
         if (pcVar3 != pcVar8) {
            local_48 = pcVar3;
            local_50 = pcVar8;
            if (( pcVar8 != (char*)0x0 ) && ( cVar6 = RefCounted::reference() ),cVar6 == '\0') {
               local_50 = (char*)0x0;
            }

            LAB_001128df:Ref<ImporterMesh>::unref((Ref<ImporterMesh>*)&local_48);
         }

      }

   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Ref<ImporterMesh>*)&local_50);
   Ref<ImporterMesh>::unref((Ref<ImporterMesh>*)&local_50);
   LAB_00112918:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<CollisionShape3D*, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<CollisionShape3D*,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
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
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112cd0;
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
         if (in_R8D != 1) goto LAB_00112d10;
         LAB_00112d00:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00112d10:uVar7 = 4;
            goto LAB_00112cc5;
         }

         if (in_R8D == 1) goto LAB_00112d00;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 1);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      bVar6 = Variant::operator_cast_to_bool(pVVar12);
      pOVar8 = (Object*)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), bVar6);
      Variant::Variant((Variant*)local_48, pOVar8);
      Variant::operator =((Variant*)param_1, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      uVar7 = 3;
      LAB_00112cc5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00112cd0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<Shape3D>, bool>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTR<Ref<Shape3D>,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   bool bVar7;
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
   int local_48[6];
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
         local_58 = (Object*)0x10dc18;
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113050;
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
         if (in_R8D != 1) goto LAB_00113090;
         LAB_00113080:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00113090:uVar8 = 4;
            goto LAB_00113045;
         }

         if (in_R8D == 1) goto LAB_00113080;
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

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 1);
      uVar4 = _LC122;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      bVar7 = Variant::operator_cast_to_bool(pVVar12);
      ( *(code*)pVVar13 )(&local_58, (Variant*)( (long)plVar11 + (long)pVVar1 ), bVar7);
      Variant::Variant((Variant*)local_48, local_58);
      Variant::operator =((Variant*)param_1, (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

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
      LAB_00113045:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_00113050:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Vector3>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Vector3>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined1 auVar12[16];
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001133a0;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_001133f0;
         LAB_001133e0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001133f0:uVar6 = 4;
            goto LAB_00113395;
         }

         if (in_R8D == 1) goto LAB_001133e0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 9);
      uVar4 = _LC123;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      auVar12 = Variant::operator_cast_to_Vector3(pVVar10);
      ( *(code*)pVVar11 )(auVar12._0_8_, auVar12._8_8_ & 0xffffffff, (Variant*)( (long)plVar9 + (long)pVVar1 ));
   }
 else {
      uVar6 = 3;
      LAB_00113395:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001133a0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001136d0;
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
         if (in_R8D != 1) goto LAB_00113720;
         LAB_00113710:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00113720:uVar6 = 4;
            goto LAB_001136c5;
         }

         if (in_R8D == 1) goto LAB_00113710;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 4);
      uVar4 = _LC124;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }
 else {
      uVar6 = 3;
      LAB_001136c5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001136d0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Ref<ImporterMesh>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Ref<ImporterMesh>>::validated_call(MethodBindTRC<Ref<ImporterMesh>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x10dc18;
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

         goto LAB_00113966;
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

   LAB_00113966:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<Shape3D>, bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Ref<Shape3D>,bool>::validated_call(MethodBindTR<Ref<Shape3D>,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00113b9d;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), ( *param_2 )[8]);
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

   LAB_00113b9d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
      goto LAB_00113e5d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00113ec0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00113ec0:uVar6 = 4;
         LAB_00113e5d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_00113ddb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_00113ddb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_int**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC125;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_int(this);
   /* WARNING: Could not recover jumptable at 0x00113e36. Too many branches */
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00113f26;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,int>(p_Var2, (_func_void_int*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00113f26:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_001141ed;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_00114250;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_00114250:uVar6 = 4;
         LAB_001141ed:*(undefined4*)param_6 = uVar6;
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
         goto LAB_0011416b;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0011416b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
   uVar4 = _LC122;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   Variant::operator_cast_to_bool(this);
   /* WARNING: Could not recover jumptable at 0x001141c7. Too many branches */
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_001142b6;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,bool>(p_Var2, (_func_void_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_001142b6:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      goto LAB_0011457d;
   }

   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_001145e0;
   }
 else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_001145e0:uVar6 = 4;
         LAB_0011457d:*(undefined4*)param_6 = uVar6;
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
         goto LAB_001144fb;
      }

   }

   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_001144fb:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_float**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }

   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 3);
   uVar4 = _LC126;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }

   fVar9 = Variant::operator_cast_to_float(this);
   /* WARNING: Could not recover jumptable at 0x00114554. Too many branches */
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
         _err_print_error(&_LC120, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_00114646;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,float>(p_Var2, (_func_void_float*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_00114646:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFPhysicsShape::_bind_methods() */void GLTFPhysicsShape::_GLOBAL__sub_I__bind_methods(void) {
   if (Animation::PARAMETERS_BASE_PATH == '\0') {
      Animation::PARAMETERS_BASE_PATH = '\x01';
      Animation::PARAMETERS_BASE_PATH = 0;
      String::parse_latin1((String*)&Animation::PARAMETERS_BASE_PATH, "parameters/");
      __cxa_atexit(String::~String, &Animation::PARAMETERS_BASE_PATH, &__dso_handle);
   }

   if (AudioStreamRandomizer::base_property_helper != '\0') {
      return;
   }

   AudioStreamRandomizer::base_property_helper = 1;
   AudioStreamRandomizer::base_property_helper._56_8_ = 2;
   AudioStreamRandomizer::base_property_helper._64_8_ = 0;
   AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1[16])0x0;
   AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1[16])0x0;
   AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, AudioStreamRandomizer::base_property_helper, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* Geometry3D::MeshData::~MeshData() */void Geometry3D::MeshData::~MeshData(MeshData *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* GLTFPhysicsShape::~GLTFPhysicsShape() */void GLTFPhysicsShape::~GLTFPhysicsShape(GLTFPhysicsShape *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ImporterMesh::~ImporterMesh() */void ImporterMesh::~ImporterMesh(ImporterMesh *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Ref<ImporterMesh> >::~MethodBindT() */void MethodBindT<Ref<ImporterMesh>>::~MethodBindT(MethodBindT<Ref<ImporterMesh>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Ref<ImporterMesh>>::~MethodBindTRC() */void MethodBindTRC<Ref<ImporterMesh>>::~MethodBindTRC(MethodBindTRC<Ref<ImporterMesh>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<int>::~MethodBindT() */void MethodBindT<int>::~MethodBindT(MethodBindT<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<bool>::~MethodBindT() */void MethodBindT<bool>::~MethodBindT(MethodBindT<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Vector3>::~MethodBindT() */void MethodBindT<Vector3>::~MethodBindT(MethodBindT<Vector3> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector3>::~MethodBindTRC() */void MethodBindTRC<Vector3>::~MethodBindTRC(MethodBindTRC<Vector3> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String>::~MethodBindT() */void MethodBindT<String>::~MethodBindT(MethodBindT<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Dictionary>::~MethodBindTRC() */void MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRS<Ref<GLTFPhysicsShape>, Dictionary>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,Dictionary> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<Shape3D>, bool>::~MethodBindTR() */void MethodBindTR<Ref<Shape3D>,bool>::~MethodBindTR(MethodBindTR<Ref<Shape3D>,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRS<Ref<GLTFPhysicsShape>, Ref<Shape3D> const&>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,Ref<Shape3D>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<CollisionShape3D*, bool>::~MethodBindTR() */void MethodBindTR<CollisionShape3D*,bool>::~MethodBindTR(MethodBindTR<CollisionShape3D*,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRS<Ref<GLTFPhysicsShape>, CollisionShape3D const*>::~MethodBindTRS() */void MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*>::~MethodBindTRS(MethodBindTRS<Ref<GLTFPhysicsShape>,CollisionShape3D_const*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


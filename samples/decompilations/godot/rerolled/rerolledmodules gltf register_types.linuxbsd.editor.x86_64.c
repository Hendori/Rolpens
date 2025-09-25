/* void ClassDB::register_class<GLTFAnimation>(bool) [clone .part.0] */void ClassDB::register_class<GLTFAnimation>(bool param_1) {
   _err_print_error("register_class", "./core/object/class_db.h", 0xd6, "Parameter \"t\" is null.", 0, 0);
   _global_unlock();
   return;
}
/* CowData<void (*)()>::_copy_on_write() [clone .isra.0] */void CowData<void(*)()>::_copy_on_write(CowData<void(*)()> *this) {
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
/* uninitialize_gltf_module(ModuleInitializationLevel) */void uninitialize_gltf_module(int param_1) {
   if (param_1 != 2) {
      return;
   }

   GLTFDocument::unregister_all_gltf_document_extensions();
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   _unref(this);
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
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
      if ((code*)PTR__bind_methods_00118008 != RefCounted::_bind_methods) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* initialize_gltf_module(ModuleInitializationLevel) */void initialize_gltf_module(int param_1) {
   Object *pOVar1;
   Object *pOVar2;
   Object *pOVar3;
   Object *pOVar4;
   char cVar5;
   undefined4 uVar6;
   int iVar7;
   long lVar8;
   bool bVar9;
   long lVar10;
   long in_FS_OFFSET;
   Object *local_98;
   Object *local_90;
   Object *local_88;
   Object *local_80;
   long local_78;
   undefined8 local_70;
   int local_68[8];
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 2) {
      ClassDB::register_class<GLTFAccessor>(false);
      ClassDB::register_class<GLTFAnimation>(false);
      ClassDB::register_class<GLTFBufferView>(false);
      ClassDB::register_class<GLTFCamera>(false);
      ClassDB::register_class<GLTFDocument>(false);
      ClassDB::register_class<GLTFDocumentExtension>(false);
      ClassDB::register_class<GLTFDocumentExtensionConvertImporterMesh>(false);
      ClassDB::register_class<GLTFLight>(false);
      ClassDB::register_class<GLTFMesh>(false);
      ClassDB::register_class<GLTFNode>(false);
      ClassDB::register_class<GLTFObjectModelProperty>(false);
      ClassDB::register_class<GLTFPhysicsBody>(false);
      ClassDB::register_class<GLTFPhysicsShape>(false);
      ClassDB::register_class<GLTFSkeleton>(false);
      ClassDB::register_class<GLTFSkin>(false);
      ClassDB::register_class<GLTFSpecGloss>(false);
      ClassDB::register_class<GLTFState>(false);
      ClassDB::register_class<GLTFTexture>(false);
      ClassDB::register_class<GLTFTextureSampler>(false);
      local_98 = (Object*)0x0;
      Ref<GLTFDocumentExtensionPhysics>::instantiate<>((Ref<GLTFDocumentExtensionPhysics>*)&local_98);
      pOVar1 = local_98;
      local_78 = 0;
      if (( local_98 != (Object*)0x0 ) && ( lVar8 = __dynamic_cast(local_98, &Object::typeinfo, &GLTFDocumentExtension::typeinfo, 0) ),lVar8 != 0) {
         local_70 = 0;
         local_78 = lVar8;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            local_78 = 0;
         }

         Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_70);
      }

      GLTFDocument::register_gltf_document_extension((Ref<GLTFDocumentExtension>*)&local_78);
      Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_78);
      local_90 = (Object*)0x0;
      Ref<GLTFDocumentExtensionTextureKTX>::instantiate<>((Ref<GLTFDocumentExtensionTextureKTX>*)&local_90);
      pOVar2 = local_90;
      local_78 = 0;
      if (( local_90 != (Object*)0x0 ) && ( lVar8 = __dynamic_cast(local_90, &Object::typeinfo, &GLTFDocumentExtension::typeinfo, 0) ),lVar8 != 0) {
         local_70 = 0;
         local_78 = lVar8;
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            local_78 = 0;
         }

         Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_70);
      }

      GLTFDocument::register_gltf_document_extension((Ref<GLTFDocumentExtension>*)&local_78);
      Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_78);
      local_88 = (Object*)0x0;
      Ref<GLTFDocumentExtensionTextureWebP>::instantiate<>((Ref<GLTFDocumentExtensionTextureWebP>*)&local_88);
      pOVar3 = local_88;
      local_78 = 0;
      if (local_88 == (Object*)0x0) {
         GLTFDocument::register_gltf_document_extension((Ref<GLTFDocumentExtension>*)&local_78);
         Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_78);
         lVar8 = Engine::get_singleton();
         if (*(char*)( lVar8 + 0xc0 ) == '\0') goto LAB_00101520;
      }
 else {
         lVar8 = __dynamic_cast(local_88, &Object::typeinfo, &GLTFDocumentExtension::typeinfo, 0);
         if (lVar8 == 0) {
            GLTFDocument::register_gltf_document_extension((Ref<GLTFDocumentExtension>*)&local_78);
            Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_78);
            lVar8 = Engine::get_singleton();
            cVar5 = *(char*)( lVar8 + 0xc0 );
         }
 else {
            local_70 = 0;
            local_78 = lVar8;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
               local_78 = 0;
            }

            Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_70);
            GLTFDocument::register_gltf_document_extension((Ref<GLTFDocumentExtension>*)&local_78);
            Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_78);
            lVar8 = Engine::get_singleton();
            cVar5 = *(char*)( lVar8 + 0xc0 );
         }

         if (cVar5 == '\0') {
            LAB_00101520:local_80 = (Object*)0x0;
            Ref<GLTFDocumentExtensionConvertImporterMesh>::instantiate<>((Ref<GLTFDocumentExtensionConvertImporterMesh>*)&local_80);
            pOVar4 = local_80;
            local_78 = 0;
            if (local_80 == (Object*)0x0) {
               GLTFDocument::register_gltf_document_extension((Ref<GLTFDocumentExtension>*)&local_78);
               Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_78);
            }
 else {
               lVar8 = __dynamic_cast(local_80, &Object::typeinfo, &GLTFDocumentExtension::typeinfo, 0);
               if (lVar8 != 0) {
                  local_70 = 0;
                  local_78 = lVar8;
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') {
                     local_78 = 0;
                  }

                  Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_70);
               }

               GLTFDocument::register_gltf_document_extension((Ref<GLTFDocumentExtension>*)&local_78);
               Ref<GLTFDocumentExtension>::unref((Ref<GLTFDocumentExtension>*)&local_78);
               cVar5 = RefCounted::unreference();
               if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }

            }

            if (pOVar3 == (Object*)0x0) goto LAB_00101256;
         }

         cVar5 = RefCounted::unreference();
         if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

      LAB_00101256:if (( ( pOVar2 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

   if (( ( pOVar1 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Memory::free_static(pOVar1, false);
      return;
   }

   goto LAB_001017ca;
}
}
  elseif (param_1 == 3) {
   uVar6 = ClassDB::get_current_api();
   ClassDB::set_current_api();
   ClassDB::register_class<EditorSceneFormatImporterGLTF>(false);
   lVar8 = (long)(int)EditorPlugins::creation_func_count;
   if ((int)EditorPlugins::creation_func_count < 0x80) {
      EditorPlugins::creation_func_count._0_4_ = (int)EditorPlugins::creation_func_count + 1;
      ( &EditorPlugins::creation_funcs )[lVar8] = EditorPlugins::creator<SceneExporterGLTFPlugin>;
   }
 else {
      _err_print_error("add_create_func", "./editor/plugins/editor_plugin.h", 0x127, "Condition \"creation_func_count >= MAX_CREATE_FUNCS\" is true.", 0, 0);
   }

   Variant::Variant((Variant*)local_68, true);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "filesystem/import/blender/enabled");
   bVar9 = SUB81((Variant*)local_68, 0);
   _GLOBAL_DEF((String*)local_48, (Variant*)&local_70, bVar9, true, false, true);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
   }

   ClassDB::register_class<EditorSceneFormatImporterBlend>(false);
   Variant::Variant((Variant*)local_68, false);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "filesystem/import/blender/enabled.android");
   _GLOBAL_DEF((String*)local_48, (Variant*)&local_70, bVar9, true, false, false);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_68, false);
   local_70 = 0;
   String::parse_latin1((String*)&local_70, "filesystem/import/blender/enabled.web");
   _GLOBAL_DEF((String*)local_48, (Variant*)&local_70, bVar9, true, false, false);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
   }

   ClassDB::set_current_api(uVar6);
   if (__err_print_index_error == 0) {
      lVar8 = 1;
   }
 else {
      lVar8 = *(long*)( __err_print_index_error + -8 ) + 1;
   }

   iVar7 = CowData<void(*)()>::resize<false>((CowData<void(*)()>*)_err_print_index_error, lVar8);
   if (iVar7 != 0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         return;
      }

      goto LAB_001017ca;
   }

   if (__err_print_index_error == 0) {
      lVar10 = -1;
      lVar8 = 0;
   }
 else {
      lVar8 = *(long*)( __err_print_index_error + -8 );
      lVar10 = lVar8 + -1;
      if (-1 < lVar10) {
         CowData<void(*)()>::_copy_on_write((CowData<void(*)()>*)_err_print_index_error);
         *(code**)( __err_print_index_error + lVar10 * 8 ) = _editor_init;
         goto LAB_00100ffe;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar10, lVar8, "p_index", "size()", "", false, false);
}
LAB_00100ffe:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
LAB_001017ca:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* GLTFLight::is_class_ptr(void*) const */uint GLTFLight::is_class_ptr(GLTFLight *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFLight::_getv(StringName const&, Variant&) const */undefined8 GLTFLight::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFLight::_setv(StringName const&, Variant const&) */undefined8 GLTFLight::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFLight::_validate_propertyv(PropertyInfo&) const */void GLTFLight::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFLight::_property_can_revertv(StringName const&) const */undefined8 GLTFLight::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFLight::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFLight::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFLight::_notificationv(int, bool) */void GLTFLight::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFAccessor::is_class_ptr(void*) const */uint GLTFAccessor::is_class_ptr(GLTFAccessor *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFAccessor::_getv(StringName const&, Variant&) const */undefined8 GLTFAccessor::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFAccessor::_setv(StringName const&, Variant const&) */undefined8 GLTFAccessor::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFAccessor::_validate_propertyv(PropertyInfo&) const */void GLTFAccessor::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFAccessor::_property_can_revertv(StringName const&) const */undefined8 GLTFAccessor::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFAccessor::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFAccessor::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFAccessor::_notificationv(int, bool) */void GLTFAccessor::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFBufferView::is_class_ptr(void*) const */uint GLTFBufferView::is_class_ptr(GLTFBufferView *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFBufferView::_getv(StringName const&, Variant&) const */undefined8 GLTFBufferView::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFBufferView::_setv(StringName const&, Variant const&) */undefined8 GLTFBufferView::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFBufferView::_validate_propertyv(PropertyInfo&) const */void GLTFBufferView::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFBufferView::_property_can_revertv(StringName const&) const */undefined8 GLTFBufferView::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFBufferView::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFBufferView::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFBufferView::_notificationv(int, bool) */void GLTFBufferView::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFMesh::is_class_ptr(void*) const */uint GLTFMesh::is_class_ptr(GLTFMesh *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFMesh::_getv(StringName const&, Variant&) const */undefined8 GLTFMesh::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFMesh::_setv(StringName const&, Variant const&) */undefined8 GLTFMesh::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFMesh::_validate_propertyv(PropertyInfo&) const */void GLTFMesh::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFMesh::_property_can_revertv(StringName const&) const */undefined8 GLTFMesh::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFMesh::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFMesh::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFMesh::_notificationv(int, bool) */void GLTFMesh::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFNode::is_class_ptr(void*) const */uint GLTFNode::is_class_ptr(GLTFNode *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFNode::_getv(StringName const&, Variant&) const */undefined8 GLTFNode::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFNode::_setv(StringName const&, Variant const&) */undefined8 GLTFNode::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFNode::_validate_propertyv(PropertyInfo&) const */void GLTFNode::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFNode::_property_can_revertv(StringName const&) const */undefined8 GLTFNode::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFNode::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFNode::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFNode::_notificationv(int, bool) */void GLTFNode::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFObjectModelProperty::is_class_ptr(void*) const */uint GLTFObjectModelProperty::is_class_ptr(GLTFObjectModelProperty *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFObjectModelProperty::_getv(StringName const&, Variant&) const */undefined8 GLTFObjectModelProperty::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFObjectModelProperty::_setv(StringName const&, Variant const&) */undefined8 GLTFObjectModelProperty::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFObjectModelProperty::_validate_propertyv(PropertyInfo&) const */void GLTFObjectModelProperty::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFObjectModelProperty::_property_can_revertv(StringName const&) const */undefined8 GLTFObjectModelProperty::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFObjectModelProperty::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFObjectModelProperty::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFObjectModelProperty::_notificationv(int, bool) */void GLTFObjectModelProperty::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFSkeleton::is_class_ptr(void*) const */uint GLTFSkeleton::is_class_ptr(GLTFSkeleton *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFSkeleton::_getv(StringName const&, Variant&) const */undefined8 GLTFSkeleton::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkeleton::_setv(StringName const&, Variant const&) */undefined8 GLTFSkeleton::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkeleton::_validate_propertyv(PropertyInfo&) const */void GLTFSkeleton::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFSkeleton::_property_can_revertv(StringName const&) const */undefined8 GLTFSkeleton::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFSkeleton::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFSkeleton::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkeleton::_notificationv(int, bool) */void GLTFSkeleton::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFSkin::is_class_ptr(void*) const */uint GLTFSkin::is_class_ptr(GLTFSkin *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFSkin::_getv(StringName const&, Variant&) const */undefined8 GLTFSkin::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkin::_setv(StringName const&, Variant const&) */undefined8 GLTFSkin::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkin::_validate_propertyv(PropertyInfo&) const */void GLTFSkin::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFSkin::_property_can_revertv(StringName const&) const */undefined8 GLTFSkin::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFSkin::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFSkin::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSkin::_notificationv(int, bool) */void GLTFSkin::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFTexture::is_class_ptr(void*) const */uint GLTFTexture::is_class_ptr(GLTFTexture *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFTexture::_getv(StringName const&, Variant&) const */undefined8 GLTFTexture::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFTexture::_setv(StringName const&, Variant const&) */undefined8 GLTFTexture::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFTexture::_validate_propertyv(PropertyInfo&) const */void GLTFTexture::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFTexture::_property_can_revertv(StringName const&) const */undefined8 GLTFTexture::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFTexture::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFTexture::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFTexture::_notificationv(int, bool) */void GLTFTexture::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFTextureSampler::is_class_ptr(void*) const */uint GLTFTextureSampler::is_class_ptr(GLTFTextureSampler *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFTextureSampler::_getv(StringName const&, Variant&) const */undefined8 GLTFTextureSampler::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFTextureSampler::_setv(StringName const&, Variant const&) */undefined8 GLTFTextureSampler::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFTextureSampler::_validate_propertyv(PropertyInfo&) const */void GLTFTextureSampler::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFTextureSampler::_property_can_revertv(StringName const&) const */undefined8 GLTFTextureSampler::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFTextureSampler::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFTextureSampler::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFTextureSampler::_notificationv(int, bool) */void GLTFTextureSampler::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFState::is_class_ptr(void*) const */uint GLTFState::is_class_ptr(GLTFState *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFState::_getv(StringName const&, Variant&) const */undefined8 GLTFState::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFState::_setv(StringName const&, Variant const&) */undefined8 GLTFState::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFState::_validate_propertyv(PropertyInfo&) const */void GLTFState::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFState::_property_can_revertv(StringName const&) const */undefined8 GLTFState::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFState::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFState::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFState::_notificationv(int, bool) */void GLTFState::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFSpecGloss::is_class_ptr(void*) const */uint GLTFSpecGloss::is_class_ptr(GLTFSpecGloss *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFSpecGloss::_getv(StringName const&, Variant&) const */undefined8 GLTFSpecGloss::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSpecGloss::_setv(StringName const&, Variant const&) */undefined8 GLTFSpecGloss::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSpecGloss::_validate_propertyv(PropertyInfo&) const */void GLTFSpecGloss::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFSpecGloss::_property_can_revertv(StringName const&) const */undefined8 GLTFSpecGloss::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFSpecGloss::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFSpecGloss::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFSpecGloss::_notificationv(int, bool) */void GLTFSpecGloss::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFPhysicsBody::is_class_ptr(void*) const */uint GLTFPhysicsBody::is_class_ptr(GLTFPhysicsBody *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GLTFPhysicsBody::_getv(StringName const&, Variant&) const */undefined8 GLTFPhysicsBody::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFPhysicsBody::_setv(StringName const&, Variant const&) */undefined8 GLTFPhysicsBody::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFPhysicsBody::_validate_propertyv(PropertyInfo&) const */void GLTFPhysicsBody::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GLTFPhysicsBody::_property_can_revertv(StringName const&) const */undefined8 GLTFPhysicsBody::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GLTFPhysicsBody::_property_get_revertv(StringName const&, Variant&) const */undefined8 GLTFPhysicsBody::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GLTFPhysicsBody::_notificationv(int, bool) */void GLTFPhysicsBody::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFPhysicsShape::is_class_ptr(void*) const */uint GLTFPhysicsShape::is_class_ptr(GLTFPhysicsShape *this, void *param_1) {
   return (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x112f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001112b8;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_001112b8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* Object* ClassDB::creator<GLTFAccessor>(bool) */Object *ClassDB::creator<GLTFAccessor>(bool param_1) {
   undefined8 uVar1;
   Resource *this;
   this(Resource * operator_new(0x290, ""));
   Resource::Resource(this);
   this[0x24c] = (Resource)0x0;
   *(undefined***)this = &PTR__initialize_classv_001115f0;
   uVar1 = _LC1;
   *(undefined4*)( this + 0x248 ) = 0;
   *(undefined8*)( this + 0x240 ) = uVar1;
   *(undefined8*)( this + 0x250 ) = 0;
   *(undefined8*)( this + 0x260 ) = 0;
   *(undefined8*)( this + 0x270 ) = 0;
   *(undefined8*)( this + 0x278 ) = 0;
   *(undefined8*)( this + 0x280 ) = 0;
   *(undefined8*)( this + 0x288 ) = 0;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Object* ClassDB::creator<GLTFBufferView>(bool) */Object *ClassDB::creator<GLTFBufferView>(bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   Resource *this;
   this(Resource * operator_new(600, ""));
   Resource::Resource(this);
   uVar2 = _UNK_00113148;
   uVar1 = _LC1;
   *(undefined***)this = &PTR__initialize_classv_001117c8;
   *(undefined2*)( this + 0x250 ) = 0;
   *(undefined8*)( this + 0x240 ) = uVar1;
   *(undefined8*)( this + 0x248 ) = uVar2;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Object* ClassDB::creator<GLTFCamera>(bool) */Object *ClassDB::creator<GLTFCamera>(bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   Resource *this;
   this(Resource * operator_new(600, ""));
   Resource::Resource(this);
   uVar2 = _UNK_00113158;
   uVar1 = __LC3;
   *(code**)this = GLTFAnimation::GLTFAnimation;
   this[0x240] = (Resource)0x1;
   *(undefined8*)( this + 0x244 ) = uVar1;
   *(undefined8*)( this + 0x24c ) = uVar2;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Object* ClassDB::creator<GLTFPhysicsBody>(bool) */Object *ClassDB::creator<GLTFPhysicsBody>(bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   Resource *this;
   this(Resource * operator_new(0x288, ""));
   Resource::Resource(this);
   uVar2 = _UNK_00113168;
   uVar1 = __LC4;
   *(undefined***)this = &PTR__initialize_classv_001129c0;
   *(undefined8*)( this + 0x240 ) = 0x3f80000000000003;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 12*i + 584 ) ) = 0;
      *(undefined4*)( this + ( 12*i + 592 ) ) = 0;
   }

   *(undefined8*)( this + 0x278 ) = uVar1;
   *(undefined8*)( this + 0x280 ) = uVar2;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Object* ClassDB::creator<GLTFTexture>(bool) */Object *ClassDB::creator<GLTFTexture>(bool param_1) {
   Resource *this;
   this(Resource * operator_new(0x248, ""));
   Resource::Resource(this);
   *(undefined8*)( this + 0x240 ) = 0xffffffffffffffff;
   *(undefined***)this = &PTR__initialize_classv_00112260;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Object* ClassDB::creator<GLTFTextureSampler>(bool) */Object *ClassDB::creator<GLTFTextureSampler>(bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   Resource *this;
   this(Resource * operator_new(0x250, ""));
   Resource::Resource(this);
   uVar2 = _UNK_00113178;
   uVar1 = __LC6;
   *(undefined***)this = &PTR__initialize_classv_00112438;
   *(undefined8*)( this + 0x240 ) = uVar1;
   *(undefined8*)( this + 0x248 ) = uVar2;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Object* ClassDB::creator<GLTFSkeleton>(bool) */Object *ClassDB::creator<GLTFSkeleton>(bool param_1) {
   undefined8 uVar1;
   Resource *this;
   this(Resource * operator_new(0x2d0, ""));
   Resource::Resource(this);
   *(undefined***)this = &PTR__initialize_classv_00111eb0;
   uVar1 = _LC7;
   *(undefined8*)( this + 0x248 ) = 0;
   *(undefined8*)( this + 0x288 ) = uVar1;
   *(undefined8*)( this + 0x2b8 ) = uVar1;
   *(undefined8*)( this + 0x2c8 ) = 0;
   *(undefined1(*) [16])( this + 600 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x268 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x278 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Object* ClassDB::creator<GLTFSkin>(bool) */Object *ClassDB::creator<GLTFSkin>(bool param_1) {
   undefined8 uVar1;
   Resource *this;
   this(Resource * operator_new(0x308, ""));
   Resource::Resource(this);
   *(undefined***)this = &PTR__initialize_classv_00112088;
   uVar1 = _LC7;
   *(undefined4*)( this + 0x240 ) = 0xffffffff;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 16*i + 592 ) ) = 0;
   }

   *(undefined4*)( this + 0x298 ) = 0xffffffff;
   *(undefined8*)( this + 0x2c8 ) = uVar1;
   *(undefined8*)( this + 0x2f8 ) = uVar1;
   *(undefined8*)( this + 0x300 ) = 0;
   *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2b8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2d8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2e8 ) = (undefined1[16])0x0;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* GLTFBufferView::~GLTFBufferView() */void GLTFBufferView::~GLTFBufferView(GLTFBufferView *this) {
   *(undefined***)this = &PTR__initialize_classv_001117c8;
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFBufferView::~GLTFBufferView() */void GLTFBufferView::~GLTFBufferView(GLTFBufferView *this) {
   *(undefined***)this = &PTR__initialize_classv_001117c8;
   Resource::~Resource((Resource*)this);
   operator_delete(this, 600);
   return;
}
/* GLTFPhysicsBody::~GLTFPhysicsBody() */void GLTFPhysicsBody::~GLTFPhysicsBody(GLTFPhysicsBody *this) {
   *(undefined***)this = &PTR__initialize_classv_001129c0;
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFPhysicsBody::~GLTFPhysicsBody() */void GLTFPhysicsBody::~GLTFPhysicsBody(GLTFPhysicsBody *this) {
   *(undefined***)this = &PTR__initialize_classv_001129c0;
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x288);
   return;
}
/* GLTFTextureSampler::~GLTFTextureSampler() */void GLTFTextureSampler::~GLTFTextureSampler(GLTFTextureSampler *this) {
   *(undefined***)this = &PTR__initialize_classv_00112438;
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFTextureSampler::~GLTFTextureSampler() */void GLTFTextureSampler::~GLTFTextureSampler(GLTFTextureSampler *this) {
   *(undefined***)this = &PTR__initialize_classv_00112438;
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x250);
   return;
}
/* GLTFTexture::~GLTFTexture() */void GLTFTexture::~GLTFTexture(GLTFTexture *this) {
   *(undefined***)this = &PTR__initialize_classv_00112260;
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFTexture::~GLTFTexture() */void GLTFTexture::~GLTFTexture(GLTFTexture *this) {
   *(undefined***)this = &PTR__initialize_classv_00112260;
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x248);
   return;
}
/* Object* ClassDB::creator<GLTFAnimation>(bool) */Object *ClassDB::creator<GLTFAnimation>(bool param_1) {
   GLTFAnimation *this;
   this(GLTFAnimation * operator_new(0x2b8, ""));
   GLTFAnimation::GLTFAnimation(this);
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Object* ClassDB::creator<GLTFLight>(bool) */Object *ClassDB::creator<GLTFLight>(bool param_1) {
   undefined4 uVar1;
   Resource *this;
   this(Resource * operator_new(0x278, ""));
   Resource::Resource(this);
   uVar1 = _LC10;
   *(undefined4*)( this + 0x250 ) = 0x3f800000;
   *(undefined***)this = &PTR__initialize_classv_00111418;
   *(undefined8*)( this + 600 ) = 0;
   *(undefined8*)( this + 0x260 ) = 0x7f800000;
   *(undefined4*)( this + 0x268 ) = 0x3f490fdb;
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( this + ( 4*i + 576 ) ) = uVar1;
   }

   Dictionary::Dictionary((Dictionary*)( this + 0x270 ));
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Object* ClassDB::creator<GLTFNode>(bool) */Object *ClassDB::creator<GLTFNode>(bool param_1) {
   uint uVar1;
   Resource *this;
   this(Resource * operator_new(0x2b8, ""));
   Resource::Resource(this);
   uVar1 = _LC13;
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00111b78;
   *(undefined8*)( this + 0x248 ) = 0xffffffffffffffff;
   *(undefined4*)( this + 0x270 ) = 0x3f800000;
   *(undefined8*)( this + 0x274 ) = 0;
   *(undefined4*)( this + 0x27c ) = 0;
   this[0x290] = (Resource)0x0;
   *(undefined8*)( this + 0x2a0 ) = 0;
   *(undefined4*)( this + 0x2a8 ) = 0xffffffff;
   *(undefined1(*) [16])( this + 0x250 ) = ZEXT416(uVar1);
   *(undefined1(*) [16])( this + 0x260 ) = ZEXT416(uVar1);
   for (int i = 0; i < 4; i++) {
      *(undefined4*)( this + ( 4*i + 640 ) ) = 4294967295;
   }

   Dictionary::Dictionary((Dictionary*)( this + 0x2b0 ));
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Object* ClassDB::creator<GLTFState>(bool) */Object *ClassDB::creator<GLTFState>(bool param_1) {
   undefined8 uVar1;
   Resource *this;
   this(Resource * operator_new(0x558, ""));
   Resource::Resource(this);
   *(undefined***)this = &PTR__initialize_classv_00112610;
   *(undefined1(*) [16])( this + 0x240 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x250 ) = (undefined1[16])0x0;
   Dictionary::Dictionary((Dictionary*)( this + 0x260 ));
   uVar1 = _LC15;
   *(undefined8*)( this + 0x268 ) = 0;
   *(undefined1(*) [16])( this + 0x308 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x288 ) = uVar1;
   *(undefined2*)( this + 0x294 ) = 1;
   uVar1 = _LC7;
   *(undefined1(*) [16])( this + 0x318 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x328 ) = uVar1;
   *(undefined1(*) [16])( this + 0x338 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x370 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 1000 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x3f8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x270 ) = 0;
   *(undefined8*)( this + 0x280 ) = 0;
   *(undefined4*)( this + 0x290 ) = 0;
   this[0x296] = (Resource)0x0;
   *(undefined4*)( this + 0x298 ) = 1;
   *(undefined8*)( this + 0x2a8 ) = 0;
   *(undefined8*)( this + 0x2b8 ) = 0;
   *(undefined8*)( this + 0x2c8 ) = 0;
   *(undefined8*)( this + 0x2d8 ) = 0;
   *(undefined8*)( this + 0x2e8 ) = 0;
   *(undefined8*)( this + 0x2f8 ) = 0;
   *(undefined8*)( this + 0x350 ) = 0;
   *(undefined8*)( this + 0x360 ) = 0;
   *(undefined8*)( this + 0x388 ) = 0;
   *(undefined8*)( this + 0x398 ) = 0;
   *(undefined8*)( this + 0x3a8 ) = 0;
   *(undefined8*)( this + 0x3b8 ) = 0;
   *(undefined8*)( this + 0x3c8 ) = 0;
   *(undefined8*)( this + 0x3d8 ) = 0;
   *(undefined8*)( this + 0x408 ) = 0;
   *(undefined8*)( this + 0x410 ) = uVar1;
   *(undefined8*)( this + 0x438 ) = uVar1;
   *(undefined8*)( this + 0x448 ) = 0;
   *(undefined8*)( this + 0x458 ) = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this + ( 48*i + 1160 ) ) = uVar1;
   }

   *(undefined1(*) [16])( this + 0x418 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x428 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x468 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x478 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x498 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x4a8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x4c8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x4d8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x4f8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x508 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x528 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x538 ) = (undefined1[16])0x0;
   Dictionary::Dictionary((Dictionary*)( this + 0x550 ));
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* EditorPlugin* EditorPlugins::creator<SceneExporterGLTFPlugin>() */EditorPlugin *EditorPlugins::creator<SceneExporterGLTFPlugin>(void) {
   SceneExporterGLTFPlugin *this;
   this(SceneExporterGLTFPlugin * operator_new(0x680, ""));
   SceneExporterGLTFPlugin::SceneExporterGLTFPlugin(this);
   postinitialize_handler((Object*)this);
   return (EditorPlugin*)this;
}
/* Object* ClassDB::creator<GLTFObjectModelProperty>(bool) */Object *ClassDB::creator<GLTFObjectModelProperty>(bool param_1) {
   RefCounted *this;
   long in_FS_OFFSET;
   long local_50;
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this(RefCounted * operator_new(0x1b8, ""));
   RefCounted::RefCounted(this);
   *(undefined***)this = &PTR__initialize_classv_00111d50;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   Array::Array((Array*)( this + 400 ));
   local_48 = 0;
   local_50 = 0;
   local_40 = (undefined1[16])0x0;
   Array::set_typed((uint)(Array*)( this + 400 ), (StringName*)0x16, (Variant*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)( this + 0x198 ) = 0;
   *(undefined8*)( this + 0x1a8 ) = 0;
   *(undefined4*)( this + 0x1b0 ) = 0;
   Object::_initialize();
   if (param_1) {
      Object::_postinitialize();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (Object*)this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<void (*)()>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<void(*)()>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GLTFMesh::_get_class_namev() const */undefined8 *GLTFMesh::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102f93:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102f93;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFMesh");
         goto LAB_00102ffe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFMesh");
   LAB_00102ffe:return &_get_class_namev();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Object* ClassDB::creator<GLTFPhysicsShape>(bool) */Object *ClassDB::creator<GLTFPhysicsShape>(bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   Resource *this;
   this(Resource * operator_new(0x278, ""));
   Resource::Resource(this);
   uVar2 = _UNK_00113198;
   uVar1 = __LC25;
   *(undefined***)this = &PTR__initialize_classv_00112b98;
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined4*)( this + 600 ) = 0x40000000;
   this[0x25c] = (Resource)0x0;
   *(undefined4*)( this + 0x260 ) = 0xffffffff;
   *(undefined8*)( this + 0x248 ) = uVar1;
   *(undefined8*)( this + 0x250 ) = uVar2;
   *(undefined1(*) [16])( this + 0x268 ) = (undefined1[16])0x0;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = StringName::StringName;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* Object* ClassDB::creator<EditorSceneFormatImporterGLTF>(bool) */Object *ClassDB::creator<EditorSceneFormatImporterGLTF>(bool param_1) {
   RefCounted *this;
   this(RefCounted * operator_new(0x1e8, ""));
   RefCounted::RefCounted(this);
   *(undefined8*)( this + 0x180 ) = 0;
   *(undefined**)this = &EditorSceneFormatImporterGLTF::vtable;
   StringName::StringName((StringName*)( this + 0x188 ), "_get_extensions", false);
   this[400] = (RefCounted)0x0;
   *(undefined8*)( this + 0x198 ) = 0;
   StringName::StringName((StringName*)( this + 0x1a0 ), "_import_scene", false);
   this[0x1a8] = (RefCounted)0x0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1b8 ), "_get_import_options", false);
   this[0x1c0] = (RefCounted)0x0;
   *(undefined8*)( this + 0x1c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1d0 ), "_get_option_visibility", false);
   this[0x1d8] = (RefCounted)0x0;
   *(undefined8*)( this + 0x1e0 ) = 0;
   *(code**)this = String::parse_latin1;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Object* ClassDB::creator<EditorSceneFormatImporterBlend>(bool) */Object *ClassDB::creator<EditorSceneFormatImporterBlend>(bool param_1) {
   RefCounted *this;
   this(RefCounted * operator_new(0x1f8, ""));
   RefCounted::RefCounted(this);
   *(undefined8*)( this + 0x180 ) = 0;
   *(undefined**)this = &EditorSceneFormatImporterGLTF::vtable;
   StringName::StringName((StringName*)( this + 0x188 ), "_get_extensions", false);
   this[400] = (RefCounted)0x0;
   *(undefined8*)( this + 0x198 ) = 0;
   StringName::StringName((StringName*)( this + 0x1a0 ), "_import_scene", false);
   this[0x1a8] = (RefCounted)0x0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1b8 ), "_get_import_options", false);
   this[0x1c0] = (RefCounted)0x0;
   *(undefined8*)( this + 0x1c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1d0 ), "_get_option_visibility", false);
   this[0x1d8] = (RefCounted)0x0;
   *(undefined8*)( this + 0x1e0 ) = 0;
   *(undefined**)this = &GLTFDocument::vtable;
   *(undefined8*)( this + 0x1e8 ) = 0xffffffffffffffff;
   *(undefined8*)( this + 0x1f0 ) = 0;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
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
/* Object* ClassDB::creator<GLTFDocument>(bool) */Object *ClassDB::creator<GLTFDocument>(bool param_1) {
   long lVar1;
   undefined8 uVar2;
   Resource *this;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   this(Resource * operator_new(0x278, ""));
   Resource::Resource(this);
   *(code**)this = GLTFDocument::unregister_all_gltf_document_extensions;
   uVar2 = _LC32;
   *(undefined8*)( this + 0x248 ) = 0;
   *(undefined8*)( this + 0x240 ) = uVar2;
   String::parse_latin1((StrRange*)( this + 0x248 ));
   *(undefined4*)( this + 0x250 ) = 0x3f400000;
   *(undefined8*)( this + 600 ) = 0;
   *(undefined4*)( this + 0x260 ) = 0;
   *(undefined8*)( this + 0x270 ) = 0;
   Object::_initialize();
   if (param_1) {
      Object::_postinitialize();
   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (Object*)this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFAccessor::~GLTFAccessor() */void GLTFAccessor::~GLTFAccessor(GLTFAccessor *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001115f0;
   if (*(long*)( this + 0x270 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x270 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x270 );
         *(undefined8*)( this + 0x270 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFAccessor::~GLTFAccessor() */void GLTFAccessor::~GLTFAccessor(GLTFAccessor *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001115f0;
   if (*(long*)( this + 0x270 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x270 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x270 );
         *(undefined8*)( this + 0x270 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x290);
   return;
}
/* GLTFSpecGloss::_get_class_namev() const */undefined8 *GLTFSpecGloss::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103693:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103693;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSpecGloss");
         goto LAB_001036fe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSpecGloss");
   LAB_001036fe:return &_get_class_namev();
}
/* GLTFState::_get_class_namev() const */undefined8 *GLTFState::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103773:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103773;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFState");
         goto LAB_001037de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFState");
   LAB_001037de:return &_get_class_namev();
}
/* GLTFTextureSampler::_get_class_namev() const */undefined8 *GLTFTextureSampler::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103863:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103863;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFTextureSampler");
         goto LAB_001038ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFTextureSampler");
   LAB_001038ce:return &_get_class_namev();
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
         LAB_00103953:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103953;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFPhysicsShape");
         goto LAB_001039be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFPhysicsShape");
   LAB_001039be:return &_get_class_namev();
}
/* GLTFPhysicsBody::_get_class_namev() const */undefined8 *GLTFPhysicsBody::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103a43:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103a43;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFPhysicsBody");
         goto LAB_00103aae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFPhysicsBody");
   LAB_00103aae:return &_get_class_namev();
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
         LAB_00103b23:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103b23;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00103b8e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00103b8e:return &_get_class_namev();
}
/* GLTFTexture::_get_class_namev() const */undefined8 *GLTFTexture::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103c03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103c03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFTexture");
         goto LAB_00103c6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFTexture");
   LAB_00103c6e:return &_get_class_namev();
}
/* GLTFSkin::_get_class_namev() const */undefined8 *GLTFSkin::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103ce3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103ce3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSkin");
         goto LAB_00103d4e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSkin");
   LAB_00103d4e:return &_get_class_namev();
}
/* GLTFNode::_get_class_namev() const */undefined8 *GLTFNode::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103dc3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103dc3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFNode");
         goto LAB_00103e2e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFNode");
   LAB_00103e2e:return &_get_class_namev();
}
/* GLTFObjectModelProperty::_get_class_namev() const */undefined8 *GLTFObjectModelProperty::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103eb3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103eb3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFObjectModelProperty");
         goto LAB_00103f1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFObjectModelProperty");
   LAB_00103f1e:return &_get_class_namev();
}
/* GLTFBufferView::_get_class_namev() const */undefined8 *GLTFBufferView::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103fa3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103fa3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFBufferView");
         goto LAB_0010400e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFBufferView");
   LAB_0010400e:return &_get_class_namev();
}
/* GLTFLight::_get_class_namev() const */undefined8 *GLTFLight::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00104083:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104083;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFLight");
         goto LAB_001040ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFLight");
   LAB_001040ee:return &_get_class_namev();
}
/* GLTFAccessor::_get_class_namev() const */undefined8 *GLTFAccessor::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00104173:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104173;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFAccessor");
         goto LAB_001041de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFAccessor");
   LAB_001041de:return &_get_class_namev();
}
/* GLTFSkeleton::_get_class_namev() const */undefined8 *GLTFSkeleton::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00104263:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00104263;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSkeleton");
         goto LAB_001042ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFSkeleton");
   LAB_001042ce:return &_get_class_namev();
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
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = StringName::StringName;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* GLTFDocumentExtension::GLTFDocumentExtension() */void GLTFDocumentExtension::GLTFDocumentExtension(GLTFDocumentExtension *this) {
   Resource::Resource((Resource*)this);
   *(undefined**)this = &GLTFDocumentExtensionPhysics::vtable;
   StringName::StringName((StringName*)( this + 0x240 ), "_import_preflight", false);
   this[0x248] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x250 ) = 0;
   StringName::StringName((StringName*)( this + 600 ), "_get_supported_extensions", false);
   this[0x260] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x268 ) = 0;
   StringName::StringName((StringName*)( this + 0x270 ), "_parse_node_extensions", false);
   this[0x278] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x280 ) = 0;
   StringName::StringName((StringName*)( this + 0x288 ), "_parse_image_data", false);
   this[0x290] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x298 ) = 0;
   StringName::StringName((StringName*)( this + 0x2a0 ), "_get_image_file_extension", false);
   this[0x2a8] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x2b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2b8 ), "_parse_texture_json", false);
   this[0x2c0] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x2c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x2d0 ), "_import_object_model_property", false);
   this[0x2d8] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x2e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x2e8 ), "_import_post_parse", false);
   this[0x2f0] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x2f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x300 ), "_import_pre_generate", false);
   this[0x308] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x310 ) = 0;
   StringName::StringName((StringName*)( this + 0x318 ), "_generate_scene_node", false);
   this[800] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x328 ) = 0;
   StringName::StringName((StringName*)( this + 0x330 ), "_import_node", false);
   this[0x338] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x340 ) = 0;
   StringName::StringName((StringName*)( this + 0x348 ), "_import_post", false);
   this[0x350] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x358 ) = 0;
   StringName::StringName((StringName*)( this + 0x360 ), "_export_preflight", false);
   this[0x368] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x370 ) = 0;
   StringName::StringName((StringName*)( this + 0x378 ), "_convert_scene_node", false);
   this[0x380] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x388 ) = 0;
   StringName::StringName((StringName*)( this + 0x390 ), "_export_post_convert", false);
   this[0x398] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x3a0 ) = 0;
   StringName::StringName((StringName*)( this + 0x3a8 ), "_export_preserialize", false);
   this[0x3b0] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x3b8 ) = 0;
   StringName::StringName((StringName*)( this + 0x3c0 ), "_export_object_model_property", false);
   this[0x3c8] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x3d0 ) = 0;
   StringName::StringName((StringName*)( this + 0x3d8 ), "_get_saveable_image_formats", false);
   this[0x3e0] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 1000 ) = 0;
   StringName::StringName((StringName*)( this + 0x3f0 ), "_serialize_image_to_bytes", false);
   this[0x3f8] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x400 ) = 0;
   StringName::StringName((StringName*)( this + 0x408 ), "_save_image_at_path", false);
   this[0x410] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x418 ) = 0;
   StringName::StringName((StringName*)( this + 0x420 ), "_serialize_texture_json", false);
   this[0x428] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x430 ) = 0;
   StringName::StringName((StringName*)( this + 0x438 ), "_export_node", false);
   this[0x440] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x448 ) = 0;
   StringName::StringName((StringName*)( this + 0x450 ), "_export_post", false);
   this[0x458] = (GLTFDocumentExtension)0x0;
   *(undefined8*)( this + 0x460 ) = 0;
   return;
}
/* Object* ClassDB::creator<GLTFDocumentExtension>(bool) */Object *ClassDB::creator<GLTFDocumentExtension>(bool param_1) {
   GLTFDocumentExtension *this;
   this(GLTFDocumentExtension * operator_new(0x468, ""));
   GLTFDocumentExtension::GLTFDocumentExtension(this);
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* Object* ClassDB::creator<GLTFDocumentExtensionConvertImporterMesh>(bool) */Object *ClassDB::creator<GLTFDocumentExtensionConvertImporterMesh>(bool param_1) {
   GLTFDocumentExtension *this;
   this(GLTFDocumentExtension * operator_new(0x468, ""));
   GLTFDocumentExtension::GLTFDocumentExtension(this);
   *(code**)this = RefCounted::init_ref;
   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* void Ref<GLTFDocumentExtensionPhysics>::instantiate<>() */void Ref<GLTFDocumentExtensionPhysics>::instantiate<>(Ref<GLTFDocumentExtensionPhysics> *this) {
   char cVar1;
   GLTFDocumentExtension *this_00;
   long lVar2;
   GLTFDocumentExtension *pGVar3;
   Object *pOVar4;
   Object *pOVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (GLTFDocumentExtension*)operator_new(0x468, "");
   pGVar3 = this_00;
   for (lVar2 = 0x8d; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pGVar3 = 0;
      pGVar3 = pGVar3 + (ulong)bVar6 * -0x10 + 8;
   }

   GLTFDocumentExtension::GLTFDocumentExtension(this_00);
   *(code**)this_00 = RefCounted::unreference;
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

      this_00 = (GLTFDocumentExtension*)0x0;
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar5 = *(Object**)this;
      pOVar4 = pOVar5;
      if (this_00 == (GLTFDocumentExtension*)pOVar5) goto LAB_00104ae5;
      *(GLTFDocumentExtension**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00104ae5;
   }

   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (GLTFDocumentExtension*)0x0) {
      return;
   }

   LAB_00104ae5:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      return;
   }

   return;
}
/* void Ref<GLTFDocumentExtensionTextureKTX>::instantiate<>() */void Ref<GLTFDocumentExtensionTextureKTX>::instantiate<>(Ref<GLTFDocumentExtensionTextureKTX> *this) {
   char cVar1;
   GLTFDocumentExtension *this_00;
   long lVar2;
   GLTFDocumentExtension *pGVar3;
   Object *pOVar4;
   Object *pOVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (GLTFDocumentExtension*)operator_new(0x468, "");
   pGVar3 = this_00;
   for (lVar2 = 0x8d; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pGVar3 = 0;
      pGVar3 = pGVar3 + (ulong)bVar6 * -0x10 + 8;
   }

   GLTFDocumentExtension::GLTFDocumentExtension(this_00);
   *(code**)this_00 = StringName::StringName;
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

      this_00 = (GLTFDocumentExtension*)0x0;
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar5 = *(Object**)this;
      pOVar4 = pOVar5;
      if (this_00 == (GLTFDocumentExtension*)pOVar5) goto LAB_00104c25;
      *(GLTFDocumentExtension**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00104c25;
   }

   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (GLTFDocumentExtension*)0x0) {
      return;
   }

   LAB_00104c25:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      return;
   }

   return;
}
/* void Ref<GLTFDocumentExtensionTextureWebP>::instantiate<>() */void Ref<GLTFDocumentExtensionTextureWebP>::instantiate<>(Ref<GLTFDocumentExtensionTextureWebP> *this) {
   char cVar1;
   GLTFDocumentExtension *this_00;
   long lVar2;
   GLTFDocumentExtension *pGVar3;
   Object *pOVar4;
   Object *pOVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (GLTFDocumentExtension*)operator_new(0x468, "");
   pGVar3 = this_00;
   for (lVar2 = 0x8d; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pGVar3 = 0;
      pGVar3 = pGVar3 + (ulong)bVar6 * -0x10 + 8;
   }

   GLTFDocumentExtension::GLTFDocumentExtension(this_00);
   *(code**)this_00 = ClassDB::add_resource_base_extension;
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

      this_00 = (GLTFDocumentExtension*)0x0;
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar5 = *(Object**)this;
      pOVar4 = pOVar5;
      if (this_00 == (GLTFDocumentExtension*)pOVar5) goto LAB_00104d65;
      *(GLTFDocumentExtension**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00104d65;
   }

   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (GLTFDocumentExtension*)0x0) {
      return;
   }

   LAB_00104d65:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
      return;
   }

   return;
}
/* void Ref<GLTFDocumentExtensionConvertImporterMesh>::instantiate<>() */void Ref<GLTFDocumentExtensionConvertImporterMesh>::instantiate<>(Ref<GLTFDocumentExtensionConvertImporterMesh> *this) {
   char cVar1;
   GLTFDocumentExtension *this_00;
   long lVar2;
   GLTFDocumentExtension *pGVar3;
   Object *pOVar4;
   Object *pOVar5;
   byte bVar6;
   bVar6 = 0;
   this_00 = (GLTFDocumentExtension*)operator_new(0x468, "");
   pGVar3 = this_00;
   for (lVar2 = 0x8d; lVar2 != 0; lVar2 = lVar2 + -1) {
      *(undefined8*)pGVar3 = 0;
      pGVar3 = pGVar3 + (ulong)bVar6 * -0x10 + 8;
   }

   GLTFDocumentExtension::GLTFDocumentExtension(this_00);
   *(code**)this_00 = RefCounted::init_ref;
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

      this_00 = (GLTFDocumentExtension*)0x0;
      cVar1 = predelete_handler(pOVar5);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar5 = *(Object**)this;
      pOVar4 = pOVar5;
      if (this_00 == (GLTFDocumentExtension*)pOVar5) goto LAB_00104ea5;
      *(GLTFDocumentExtension**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar5 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00104ea5;
   }

   ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
   Memory::free_static(pOVar5, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (GLTFDocumentExtension*)0x0) {
      return;
   }

   LAB_00104ea5:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
      Memory::free_static(pOVar4, false);
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
/* String::~String() */void String::~String(String *this) {
   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* Resource::register_custom_data_to_otdb() */void Resource::register_custom_data_to_otdb(void) {
   long in_FS_OFFSET;
   undefined8 local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_48 = 0;
   local_38 = "Resource";
   local_30 = 8;
   String::parse_latin1((StrRange*)&local_48);
   StringName::StringName((StringName*)&local_38, (String*)&local_48, false);
   StringName::StringName((StringName*)&local_40, "res", false);
   ClassDB::add_resource_base_extension((StringName*)&local_40, (StringName*)&local_38);
   if (StringName::configured != '\0') {
      if (local_40 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010503c;
      }

      if (local_38 != (char*)0x0) {
         StringName::unref();
      }

   }

   LAB_0010503c:CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFLight::~GLTFLight() */void GLTFLight::~GLTFLight(GLTFLight *this) {
   *(undefined***)this = &PTR__initialize_classv_00111418;
   Dictionary::~Dictionary((Dictionary*)( this + 0x270 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 600 ));
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFNode::~GLTFNode() */void GLTFNode::~GLTFNode(GLTFNode *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00111b78;
   Dictionary::~Dictionary((Dictionary*)( this + 0x2b0 ));
   if (*(long*)( this + 0x2a0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2a0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2a0 );
         *(undefined8*)( this + 0x2a0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFMesh::~GLTFMesh() */void GLTFMesh::~GLTFMesh(GLTFMesh *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_001119a0;
   Dictionary::~Dictionary((Dictionary*)( this + 0x268 ));
   Array::~Array((Array*)( this + 0x260 ));
   if (*(long*)( this + 600 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 600 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 600 );
         *(undefined8*)( this + 600 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x248 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x248 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFPhysicsShape::~GLTFPhysicsShape() */void GLTFPhysicsShape::~GLTFPhysicsShape(GLTFPhysicsShape *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00112b98;
   if (*(long*)( this + 0x270 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x270 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x268 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x268 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   return;
}
/* Object* ClassDB::creator<GLTFMesh>(bool) */Object *ClassDB::creator<GLTFMesh>(bool param_1) {
   Resource *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this(Resource * operator_new(0x270, ""));
   Resource::Resource(this);
   *(undefined8*)( this + 600 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_001119a0;
   *(undefined1(*) [16])( this + 0x240 ) = (undefined1[16])0x0;
   Array::Array((Array*)( this + 0x260 ));
   local_50 = (undefined1[16])0x0;
   local_68 = "Material";
   local_58 = 0;
   local_70 = 0;
   local_60 = 8;
   String::parse_latin1((StrRange*)&local_70);
   StringName::StringName((StringName*)&local_68, (String*)&local_70, false);
   Array::set_typed((uint)(Array*)( this + 0x260 ), (StringName*)0x18, (Variant*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::Dictionary((Dictionary*)( this + 0x268 ));
   Object::_initialize();
   if (param_1) {
      Object::_postinitialize();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return (Object*)this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* GLTFObjectModelProperty::get_class() const */void GLTFObjectModelProperty::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFPhysicsBody::get_class() const */void GLTFPhysicsBody::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFSpecGloss::get_class() const */void GLTFSpecGloss::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFState::get_class() const */void GLTFState::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFTextureSampler::get_class() const */void GLTFTextureSampler::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFTexture::get_class() const */void GLTFTexture::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFSkin::get_class() const */void GLTFSkin::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFSkeleton::get_class() const */void GLTFSkeleton::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFNode::get_class() const */void GLTFNode::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFMesh::get_class() const */void GLTFMesh::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFBufferView::get_class() const */void GLTFBufferView::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFAccessor::get_class() const */void GLTFAccessor::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFLight::get_class() const */void GLTFLight::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* GLTFLight::~GLTFLight() */void GLTFLight::~GLTFLight(GLTFLight *this) {
   *(undefined***)this = &PTR__initialize_classv_00111418;
   Dictionary::~Dictionary((Dictionary*)( this + 0x270 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 600 ));
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x278);
   return;
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   char cVar5;
   undefined8 uVar6;
   long in_FS_OFFSET;
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

      cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010645b;
   }

   cVar5 = String::operator ==(param_1, "RefCounted");
   if (cVar5 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar5 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010645b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_0010645b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0010665b;
   }

   cVar4 = String::operator ==(param_1, "Resource");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010665b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFAccessor::is_class(String const&) const */undefined8 GLTFAccessor::is_class(GLTFAccessor *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_001067ab;
   }

   cVar4 = String::operator ==(param_1, "GLTFAccessor");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001067ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFBufferView::is_class(String const&) const */undefined8 GLTFBufferView::is_class(GLTFBufferView *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_001068fb;
   }

   cVar4 = String::operator ==(param_1, "GLTFBufferView");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001068fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFLight::is_class(String const&) const */undefined8 GLTFLight::is_class(GLTFLight *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_00106a4b;
   }

   cVar4 = String::operator ==(param_1, "GLTFLight");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00106a4b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFMesh::is_class(String const&) const */undefined8 GLTFMesh::is_class(GLTFMesh *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_00106b9b;
   }

   cVar4 = String::operator ==(param_1, "GLTFMesh");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00106b9b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFNode::is_class(String const&) const */undefined8 GLTFNode::is_class(GLTFNode *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_00106ceb;
   }

   cVar4 = String::operator ==(param_1, "GLTFNode");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00106ceb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFPhysicsBody::is_class(String const&) const */undefined8 GLTFPhysicsBody::is_class(GLTFPhysicsBody *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_00106e3b;
   }

   cVar4 = String::operator ==(param_1, "GLTFPhysicsBody");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00106e3b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_00106f8b;
   }

   cVar4 = String::operator ==(param_1, "GLTFPhysicsShape");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00106f8b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFSkeleton::is_class(String const&) const */undefined8 GLTFSkeleton::is_class(GLTFSkeleton *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_001070db;
   }

   cVar4 = String::operator ==(param_1, "GLTFSkeleton");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001070db:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFSkin::is_class(String const&) const */undefined8 GLTFSkin::is_class(GLTFSkin *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0010722b;
   }

   cVar4 = String::operator ==(param_1, "GLTFSkin");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010722b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFSpecGloss::is_class(String const&) const */undefined8 GLTFSpecGloss::is_class(GLTFSpecGloss *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0010737b;
   }

   cVar4 = String::operator ==(param_1, "GLTFSpecGloss");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010737b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFTextureSampler::is_class(String const&) const */undefined8 GLTFTextureSampler::is_class(GLTFTextureSampler *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_001074cb;
   }

   cVar4 = String::operator ==(param_1, "GLTFTextureSampler");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001074cb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFTexture::is_class(String const&) const */undefined8 GLTFTexture::is_class(GLTFTexture *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0010761b;
   }

   cVar4 = String::operator ==(param_1, "GLTFTexture");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010761b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFState::is_class(String const&) const */undefined8 GLTFState::is_class(GLTFState *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_0010776b;
   }

   cVar4 = String::operator ==(param_1, "GLTFState");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010776b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFObjectModelProperty::is_class(String const&) const */undefined8 GLTFObjectModelProperty::is_class(GLTFObjectModelProperty *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_001078bb;
   }

   cVar4 = String::operator ==(param_1, "GLTFObjectModelProperty");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001078bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GLTFPhysicsShape::~GLTFPhysicsShape() */void GLTFPhysicsShape::~GLTFPhysicsShape(GLTFPhysicsShape *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00112b98;
   if (*(long*)( this + 0x270 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x270 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0x268 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x268 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x278);
   return;
}
/* GLTFNode::~GLTFNode() */void GLTFNode::~GLTFNode(GLTFNode *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00111b78;
   Dictionary::~Dictionary((Dictionary*)( this + 0x2b0 ));
   if (*(long*)( this + 0x2a0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2a0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x2a0 );
         *(undefined8*)( this + 0x2a0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2b8);
   return;
}
/* GLTFMesh::~GLTFMesh() */void GLTFMesh::~GLTFMesh(GLTFMesh *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR__initialize_classv_001119a0;
   Dictionary::~Dictionary((Dictionary*)( this + 0x268 ));
   Array::~Array((Array*)( this + 0x260 ));
   if (*(long*)( this + 600 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 600 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 600 );
         *(undefined8*)( this + 600 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x248 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x248 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x240 ));
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x270);
   return;
}
/* GLTFObjectModelProperty::_initialize_classv() */void GLTFObjectModelProperty::_initialize_classv(void) {
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
         if ((code*)PTR__bind_methods_00118008 != RefCounted::_bind_methods) {
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
      local_58 = "GLTFObjectModelProperty";
      local_70 = 0;
      local_50 = 0x17;
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
      if ((code*)PTR__bind_methods_00118010 != RefCounted::_bind_methods) {
         GLTFObjectModelProperty::_bind_methods();
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
      if ((code*)PTR__bind_methods_00118018 != Object::_bind_methods) {
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
/* GLTFNode::_initialize_classv() */void GLTFNode::_initialize_classv(void) {
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
      local_48 = "GLTFNode";
      local_60 = 0;
      local_40 = 8;
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
      if ((code*)PTR__bind_methods_00118020 != Resource::_bind_methods) {
         GLTFNode::_bind_methods();
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
/* GLTFMesh::_initialize_classv() */void GLTFMesh::_initialize_classv(void) {
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
      local_48 = "GLTFMesh";
      local_60 = 0;
      local_40 = 8;
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
      if ((code*)PTR__bind_methods_00118028 != Resource::_bind_methods) {
         GLTFMesh::_bind_methods();
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
/* GLTFAccessor::_initialize_classv() */void GLTFAccessor::_initialize_classv(void) {
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
      local_48 = "GLTFAccessor";
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
      if ((code*)PTR__bind_methods_00118030 != Resource::_bind_methods) {
         GLTFAccessor::_bind_methods();
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
/* GLTFLight::_initialize_classv() */void GLTFLight::_initialize_classv(void) {
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
      local_48 = "GLTFLight";
      local_60 = 0;
      local_40 = 9;
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
      if ((code*)PTR__bind_methods_00118038 != Resource::_bind_methods) {
         GLTFLight::_bind_methods();
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
      if ((code*)PTR__bind_methods_00118040 != Resource::_bind_methods) {
         GLTFPhysicsShape::_bind_methods();
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
/* GLTFTextureSampler::_initialize_classv() */void GLTFTextureSampler::_initialize_classv(void) {
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
      local_48 = "GLTFTextureSampler";
      local_60 = 0;
      local_40 = 0x12;
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
      if ((code*)PTR__bind_methods_00118048 != Resource::_bind_methods) {
         GLTFTextureSampler::_bind_methods();
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
/* GLTFState::_initialize_classv() */void GLTFState::_initialize_classv(void) {
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
      local_48 = "GLTFState";
      local_60 = 0;
      local_40 = 9;
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
      if ((code*)PTR__bind_methods_00118050 != Resource::_bind_methods) {
         GLTFState::_bind_methods();
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
/* GLTFSkin::_initialize_classv() */void GLTFSkin::_initialize_classv(void) {
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
      local_48 = "GLTFSkin";
      local_60 = 0;
      local_40 = 8;
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
      if ((code*)PTR__bind_methods_00118058 != Resource::_bind_methods) {
         GLTFSkin::_bind_methods();
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
/* GLTFSpecGloss::_initialize_classv() */void GLTFSpecGloss::_initialize_classv(void) {
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
      local_48 = "GLTFSpecGloss";
      local_60 = 0;
      local_40 = 0xd;
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
      if ((code*)PTR__bind_methods_00118060 != Resource::_bind_methods) {
         GLTFSpecGloss::_bind_methods();
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
/* GLTFTexture::_initialize_classv() */void GLTFTexture::_initialize_classv(void) {
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
      local_48 = "GLTFTexture";
      local_60 = 0;
      local_40 = 0xb;
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
      if ((code*)PTR__bind_methods_00118068 != Resource::_bind_methods) {
         GLTFTexture::_bind_methods();
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
/* GLTFPhysicsBody::_initialize_classv() */void GLTFPhysicsBody::_initialize_classv(void) {
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
      local_48 = "GLTFPhysicsBody";
      local_60 = 0;
      local_40 = 0xf;
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
      if ((code*)PTR__bind_methods_00118070 != Resource::_bind_methods) {
         GLTFPhysicsBody::_bind_methods();
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
/* GLTFSkeleton::_initialize_classv() */void GLTFSkeleton::_initialize_classv(void) {
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
      local_48 = "GLTFSkeleton";
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
      if ((code*)PTR__bind_methods_00118078 != Resource::_bind_methods) {
         GLTFSkeleton::_bind_methods();
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
/* GLTFBufferView::_initialize_classv() */void GLTFBufferView::_initialize_classv(void) {
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
      local_48 = "GLTFBufferView";
      local_60 = 0;
      local_40 = 0xe;
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
      if ((code*)PTR__bind_methods_00118080 != Resource::_bind_methods) {
         GLTFBufferView::_bind_methods();
      }

      if ((code*)PTR__bind_compatibility_methods_00118088 != Object::_bind_compatibility_methods) {
         GLTFBufferView::_bind_compatibility_methods();
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
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 0x18 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar2 ) != 0) {
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar2 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x38 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x20 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_001090ff;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001090ff:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
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

         goto LAB_001092bc;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001092bc:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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

         goto LAB_00109521;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00109521:local_b0 = (CowData<char32_t>*)&local_58;
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
/* GLTFAccessor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFAccessor::_get_property_listv(GLTFAccessor *this, List *param_1, bool param_2) {
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
   local_78 = "GLTFAccessor";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GLTFAccessor";
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

         goto LAB_001097d1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001097d1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "GLTFAccessor", false);
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
/* GLTFNode::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFNode::_get_property_listv(GLTFNode *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "GLTFNode";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "GLTFNode";
   local_90 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GLTFNode", false);
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
/* GLTFPhysicsBody::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFPhysicsBody::_get_property_listv(GLTFPhysicsBody *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "GLTFPhysicsBody";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "GLTFPhysicsBody";
   local_90 = 0;
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GLTFPhysicsBody", false);
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
/* GLTFSkeleton::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFSkeleton::_get_property_listv(GLTFSkeleton *this, List *param_1, bool param_2) {
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
   local_78 = "GLTFSkeleton";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GLTFSkeleton";
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

         goto LAB_00109e21;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00109e21:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "GLTFSkeleton", false);
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
/* GLTFSkin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFSkin::_get_property_listv(GLTFSkin *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "GLTFSkin";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "GLTFSkin";
   local_90 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GLTFSkin", false);
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
/* GLTFSpecGloss::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFSpecGloss::_get_property_listv(GLTFSpecGloss *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "GLTFSpecGloss";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "GLTFSpecGloss";
   local_90 = 0;
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GLTFSpecGloss", false);
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
/* GLTFTexture::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFTexture::_get_property_listv(GLTFTexture *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "GLTFTexture";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "GLTFTexture";
   local_90 = 0;
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GLTFTexture", false);
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
/* GLTFState::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFState::_get_property_listv(GLTFState *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "GLTFState";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "GLTFState";
   local_90 = 0;
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GLTFState", false);
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
/* GLTFObjectModelProperty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void GLTFObjectModelProperty::_get_property_listv(GLTFObjectModelProperty *this, List *param_1, bool param_2) {
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
   local_78 = "GLTFObjectModelProperty";
   local_70 = 0x17;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GLTFObjectModelProperty";
   local_98 = 0;
   local_70 = 0x17;
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

         goto LAB_0010a811;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010a811:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "GLTFObjectModelProperty", false);
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
/* GLTFLight::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFLight::_get_property_listv(GLTFLight *this, List *param_1, bool param_2) {
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
   local_78 = "GLTFLight";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GLTFLight";
   local_98 = 0;
   local_70 = 9;
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

         goto LAB_0010aac1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010aac1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "GLTFLight", false);
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

         goto LAB_0010ad71;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010ad71:local_b0 = (CowData<char32_t>*)&local_58;
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
/* GLTFBufferView::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFBufferView::_get_property_listv(GLTFBufferView *this, List *param_1, bool param_2) {
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
   local_78 = "GLTFBufferView";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GLTFBufferView";
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

         goto LAB_0010b021;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b021:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "GLTFBufferView", false);
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
/* GLTFMesh::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFMesh::_get_property_listv(GLTFMesh *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "GLTFMesh";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "GLTFMesh";
   local_90 = 0;
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GLTFMesh", false);
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
/* GLTFTextureSampler::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFTextureSampler::_get_property_listv(GLTFTextureSampler *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   long local_68;
   CowData<char32_t> local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_80 = 0;
   local_88 = 0;
   local_78 = "GLTFTextureSampler";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_88);
   local_78 = "GLTFTextureSampler";
   local_90 = 0;
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 0, (StrRange*)&local_90, 0, (StrRange*)&local_88, 0x80, &local_80);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
   CowData<char32_t>::_unref(local_58);
   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_78, "GLTFTextureSampler", false);
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
/* HashMap<StringName, ClassDB::ClassInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ClassDB::ClassInfo> > >::getptr(StringName const&) */long HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr(HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>> *this, StringName *param_1) {
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
   uint uVar15;
   ulong uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
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
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return *(long*)( *(long*)( this + 8 ) + (ulong)uVar12 * 8 ) + 0x18;
            }

            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar15 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* void ClassDB::register_class<GLTFAccessor>(bool) */void ClassDB::register_class<GLTFAccessor>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFAccessor::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFAccessor";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code*)PTR__bind_methods_00118030 != Resource::_bind_methods) {
         GLTFAccessor::_bind_methods();
      }

      GLTFAccessor::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFAccessor";
   local_60 = 0;
   local_50 = 0xc;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFAccessor>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFAccessor::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFAnimation>(bool) */void ClassDB::register_class<GLTFAnimation>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFAnimation::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFAnimation";
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
      if ((code*)PTR__bind_methods_00118090 != Resource::_bind_methods) {
         GLTFAnimation::_bind_methods();
      }

      GLTFAnimation::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFAnimation";
   local_60 = 0;
   local_50 = 0xd;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFAnimation>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFAnimation::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFBufferView>(bool) */void ClassDB::register_class<GLTFBufferView>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFBufferView::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFBufferView";
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
      if ((code*)PTR__bind_methods_00118080 != Resource::_bind_methods) {
         GLTFBufferView::_bind_methods();
      }

      if ((code*)PTR__bind_compatibility_methods_00118088 != Object::_bind_compatibility_methods) {
         GLTFBufferView::_bind_compatibility_methods();
      }

      GLTFBufferView::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFBufferView";
   local_60 = 0;
   local_50 = 0xe;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFBufferView>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFBufferView::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFCamera>(bool) */void ClassDB::register_class<GLTFCamera>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFCamera::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFCamera";
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
      if ((code*)PTR__bind_methods_00118098 != Resource::_bind_methods) {
         GLTFCamera::_bind_methods();
      }

      GLTFCamera::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFCamera";
   local_60 = 0;
   local_50 = 10;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFCamera>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFCamera::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFDocument>(bool) */void ClassDB::register_class<GLTFDocument>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFDocument::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFDocument";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code*)PTR__bind_methods_001180a0 != Resource::_bind_methods) {
         GLTFDocument::_bind_methods();
      }

      GLTFDocument::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFDocument";
   local_60 = 0;
   local_50 = 0xc;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFDocument>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFDocument::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFDocumentExtension>(bool) */void ClassDB::register_class<GLTFDocumentExtension>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFDocumentExtension::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFDocumentExtension";
      local_70 = 0;
      local_50 = 0x15;
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
      if ((code*)PTR__bind_methods_001180a8 != Resource::_bind_methods) {
         GLTFDocumentExtension::_bind_methods();
      }

      GLTFDocumentExtension::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFDocumentExtension";
   local_60 = 0;
   local_50 = 0x15;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFDocumentExtension>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFDocumentExtension::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFDocumentExtensionConvertImporterMesh>(bool) */void ClassDB::register_class<GLTFDocumentExtensionConvertImporterMesh>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFDocumentExtensionConvertImporterMesh::initialize_class() == '\0') {
      if (GLTFDocumentExtension::initialize_class() == '\0') {
         if (Resource::initialize_class() == '\0') {
            Resource::initialize_class();
         }

         local_68 = 0;
         local_50 = 8;
         local_58 = "Resource";
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "GLTFDocumentExtension";
         local_70 = 0;
         local_50 = 0x15;
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
         if ((code*)PTR__bind_methods_001180a8 != Resource::_bind_methods) {
            GLTFDocumentExtension::_bind_methods();
         }

         GLTFDocumentExtension::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "GLTFDocumentExtension";
      local_68 = 0;
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFDocumentExtensionConvertImporterMesh";
      local_70 = 0;
      local_50 = 0x28;
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
      GLTFDocumentExtensionConvertImporterMesh::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFDocumentExtensionConvertImporterMesh";
   local_60 = 0;
   local_50 = 0x28;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFDocumentExtensionConvertImporterMesh>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFDocumentExtensionConvertImporterMesh::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFLight>(bool) */void ClassDB::register_class<GLTFLight>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFLight::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFLight";
      local_70 = 0;
      local_50 = 9;
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
      if ((code*)PTR__bind_methods_00118038 != Resource::_bind_methods) {
         GLTFLight::_bind_methods();
      }

      GLTFLight::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFLight";
   local_60 = 0;
   local_50 = 9;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFLight>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFLight::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFMesh>(bool) */void ClassDB::register_class<GLTFMesh>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFMesh::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFMesh";
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
      if ((code*)PTR__bind_methods_00118028 != Resource::_bind_methods) {
         GLTFMesh::_bind_methods();
      }

      GLTFMesh::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFMesh";
   local_60 = 0;
   local_50 = 8;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFMesh>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFMesh::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFNode>(bool) */void ClassDB::register_class<GLTFNode>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFNode::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFNode";
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
      if ((code*)PTR__bind_methods_00118020 != Resource::_bind_methods) {
         GLTFNode::_bind_methods();
      }

      GLTFNode::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFNode";
   local_60 = 0;
   local_50 = 8;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFNode>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFNode::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFObjectModelProperty>(bool) */void ClassDB::register_class<GLTFObjectModelProperty>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFObjectModelProperty::initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "Object");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "RefCounted");
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
         if ((code*)PTR__bind_methods_00118008 != RefCounted::_bind_methods) {
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
      local_58 = "GLTFObjectModelProperty";
      local_70 = 0;
      local_50 = 0x17;
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
      if ((code*)PTR__bind_methods_00118010 != RefCounted::_bind_methods) {
         GLTFObjectModelProperty::_bind_methods();
      }

      GLTFObjectModelProperty::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFObjectModelProperty";
   local_60 = 0;
   local_50 = 0x17;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFObjectModelProperty>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFObjectModelProperty::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFPhysicsBody>(bool) */void ClassDB::register_class<GLTFPhysicsBody>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFPhysicsBody::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFPhysicsBody";
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
      if ((code*)PTR__bind_methods_00118070 != Resource::_bind_methods) {
         GLTFPhysicsBody::_bind_methods();
      }

      GLTFPhysicsBody::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFPhysicsBody";
   local_60 = 0;
   local_50 = 0xf;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFPhysicsBody>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFPhysicsBody::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFPhysicsShape>(bool) */void ClassDB::register_class<GLTFPhysicsShape>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFPhysicsShape::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFPhysicsShape";
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
      if ((code*)PTR__bind_methods_00118040 != Resource::_bind_methods) {
         GLTFPhysicsShape::_bind_methods();
      }

      GLTFPhysicsShape::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFPhysicsShape";
   local_60 = 0;
   local_50 = 0x10;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFPhysicsShape>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFPhysicsShape::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFSkeleton>(bool) */void ClassDB::register_class<GLTFSkeleton>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFSkeleton::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFSkeleton";
      local_70 = 0;
      local_50 = 0xc;
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
      if ((code*)PTR__bind_methods_00118078 != Resource::_bind_methods) {
         GLTFSkeleton::_bind_methods();
      }

      GLTFSkeleton::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFSkeleton";
   local_60 = 0;
   local_50 = 0xc;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFSkeleton>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFSkeleton::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFSkin>(bool) */void ClassDB::register_class<GLTFSkin>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFSkin::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFSkin";
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
      if ((code*)PTR__bind_methods_00118058 != Resource::_bind_methods) {
         GLTFSkin::_bind_methods();
      }

      GLTFSkin::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFSkin";
   local_60 = 0;
   local_50 = 8;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFSkin>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFSkin::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFSpecGloss>(bool) */void ClassDB::register_class<GLTFSpecGloss>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFSpecGloss::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFSpecGloss";
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
      if ((code*)PTR__bind_methods_00118060 != Resource::_bind_methods) {
         GLTFSpecGloss::_bind_methods();
      }

      GLTFSpecGloss::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFSpecGloss";
   local_60 = 0;
   local_50 = 0xd;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFSpecGloss>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFSpecGloss::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFState>(bool) */void ClassDB::register_class<GLTFState>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFState::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFState";
      local_70 = 0;
      local_50 = 9;
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
      if ((code*)PTR__bind_methods_00118050 != Resource::_bind_methods) {
         GLTFState::_bind_methods();
      }

      GLTFState::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFState";
   local_60 = 0;
   local_50 = 9;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFState>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFState::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFTexture>(bool) */void ClassDB::register_class<GLTFTexture>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFTexture::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFTexture";
      local_70 = 0;
      local_50 = 0xb;
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
      if ((code*)PTR__bind_methods_00118068 != Resource::_bind_methods) {
         GLTFTexture::_bind_methods();
      }

      GLTFTexture::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFTexture";
   local_60 = 0;
   local_50 = 0xb;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFTexture>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFTexture::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<GLTFTextureSampler>(bool) */void ClassDB::register_class<GLTFTextureSampler>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (GLTFTextureSampler::initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
         Resource::initialize_class();
      }

      local_68 = 0;
      local_50 = 8;
      local_58 = "Resource";
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "GLTFTextureSampler";
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
      if ((code*)PTR__bind_methods_00118048 != Resource::_bind_methods) {
         GLTFTextureSampler::_bind_methods();
      }

      GLTFTextureSampler::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "GLTFTextureSampler";
   local_60 = 0;
   local_50 = 0x12;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *(code**)( puVar2 + 0xa4 ) = creator<GLTFTextureSampler>;
      *(undefined4**)( puVar2 + 4 ) = &GLTFTextureSampler::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *puVar2 = uVar1;
      Resource::register_custom_data_to_otdb();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<EditorSceneFormatImporterGLTF>(bool) */void ClassDB::register_class<EditorSceneFormatImporterGLTF>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (EditorSceneFormatImporterGLTF::initialize_class() == '\0') {
      if (EditorSceneFormatImporter::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Object");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "RefCounted");
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
            if ((code*)PTR__bind_methods_00118008 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String*)&local_60, "RefCounted");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "EditorSceneFormatImporter");
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
         if ((code*)PTR__bind_methods_001180b0 != RefCounted::_bind_methods) {
            EditorSceneFormatImporter::_bind_methods();
         }

         EditorSceneFormatImporter::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "EditorSceneFormatImporter";
      local_68 = 0;
      local_50 = 0x19;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "EditorSceneFormatImporterGLTF";
      local_70 = 0;
      local_50 = 0x1d;
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
      EditorSceneFormatImporterGLTF::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "EditorSceneFormatImporterGLTF";
   local_60 = 0;
   local_50 = 0x1d;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *(code**)( puVar2 + 0xa4 ) = creator<EditorSceneFormatImporterGLTF>;
      *(undefined4**)( puVar2 + 4 ) = &EditorSceneFormatImporterGLTF::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *puVar2 = uVar1;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void ClassDB::register_class<EditorSceneFormatImporterBlend>(bool) */void ClassDB::register_class<EditorSceneFormatImporterBlend>(bool param_1) {
   undefined4 uVar1;
   undefined4 *puVar2;
   StrRange *this;
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _global_lock();
   if (EditorSceneFormatImporterBlend::initialize_class() == '\0') {
      if (EditorSceneFormatImporter::initialize_class() == '\0') {
         if (RefCounted::initialize_class() == '\0') {
            Object::initialize_class();
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Object");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "RefCounted");
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
            if ((code*)PTR__bind_methods_00118008 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_60 = 0;
         String::parse_latin1((String*)&local_60, "RefCounted");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         local_70 = 0;
         String::parse_latin1((String*)&local_70, "EditorSceneFormatImporter");
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
         if ((code*)PTR__bind_methods_001180b0 != RefCounted::_bind_methods) {
            EditorSceneFormatImporter::_bind_methods();
         }

         EditorSceneFormatImporter::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "EditorSceneFormatImporter";
      local_68 = 0;
      local_50 = 0x19;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "EditorSceneFormatImporterBlend";
      local_70 = 0;
      local_50 = 0x1e;
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
      EditorSceneFormatImporterBlend::initialize_class()::initialized =
      '\x01';
   }

   this(StrRange * ) & local_60;
   local_58 = "EditorSceneFormatImporterBlend";
   local_60 = 0;
   local_50 = 0x1e;
   String::parse_latin1(this);
   StringName::StringName((StringName*)&local_58, (String*)this, false);
   puVar2 = (undefined4*)HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>::getptr((HashMap<StringName,ClassDB::ClassInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ClassDB::ClassInfo>>>*)&classes, (StringName*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   if (puVar2 == (undefined4*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         register_class<GLTFAnimation>(SUB81(this, 0));
         return;
      }

   }
 else {
      *(bool*)( (long)puVar2 + 0x28b ) = param_1;
      *(code**)( puVar2 + 0xa4 ) = creator<EditorSceneFormatImporterBlend>;
      *(undefined4**)( puVar2 + 4 ) = &EditorSceneFormatImporterBlend::get_class_ptr_static();
      uVar1 = (undefined4)current_api;
      *(undefined1*)( (long)puVar2 + 0x289 ) = 1;
      *puVar2 = uVar1;
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _global_unlock();
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<GLTFDocumentExtension>::unref() */void Ref<GLTFDocumentExtension>::unref(Ref<GLTFDocumentExtension> *this) {
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
/* GLTFSkeleton::~GLTFSkeleton() */void GLTFSkeleton::~GLTFSkeleton(GLTFSkeleton *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR__initialize_classv_00111eb0;
   if (*(long*)( this + 0x2c8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2c8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x2c8 );
         *(undefined8*)( this + 0x2c8 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   pvVar5 = *(void**)( this + 0x298 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 700 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2b8 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 700 ) = 0;
            *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x2a0 ) + lVar4 ) != 0) {
                  *(int*)( *(long*)( this + 0x2a0 ) + lVar4 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar5 + lVar4 * 2 ), false);
                  pvVar5 = *(void**)( this + 0x298 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 700 ) = 0;
            *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010ebb7;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x2a0 ), false);
   }

   LAB_0010ebb7:pvVar5 = *(void**)( this + 0x268 );
   if (pvVar5 == (void*)0x0) goto LAB_0010ec3b;
   if (*(int*)( this + 0x28c ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x280 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) << 2);
         if (*(int*)( this + 0x28c ) == 0) goto LAB_0010ec98;
      }

      lVar4 = 0;
      do {
         lVar2 = lVar4 * 8;
         lVar4 = lVar4 + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + lVar2 ));
         pvVar5 = *(void**)( this + 0x268 );
      }
 while ( (uint)lVar4 < *(uint*)( this + 0x28c ) );
      *(undefined4*)( this + 0x28c ) = 0;
      if (pvVar5 == (void*)0x0) goto LAB_0010ec3b;
   }

   LAB_0010ec98:Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x278 ), false);
   Memory::free_static(*(void**)( this + 0x270 ), false);
   Memory::free_static(*(void**)( this + 0x280 ), false);
   LAB_0010ec3b:CowData<int>::_unref((CowData<int>*)( this + 600 ));
   CowData<int>::_unref((CowData<int>*)( this + 0x248 ));
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFSkin::~GLTFSkin() */void GLTFSkin::~GLTFSkin(GLTFSkin *this) {
   long *plVar1;
   uint uVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   void *pvVar6;
   bool bVar7;
   *(undefined***)this = &PTR__initialize_classv_00112088;
   if (*(long*)( this + 0x300 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x300 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   pvVar6 = *(void**)( this + 0x2d8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x2fc ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2f8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x2fc ) = 0;
            *(undefined1(*) [16])( this + 0x2e8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x2e0 ) + lVar5 ) != 0) {
                  bVar7 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x2e0 ) + lVar5 ) = 0;
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  if (( bVar7 ) && ( *(long*)( (long)pvVar6 + 0x18 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x2d8 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0x2fc ) = 0;
            *(undefined1(*) [16])( this + 0x2e8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010edf2;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x2e0 ), false);
   }

   LAB_0010edf2:pvVar6 = *(void**)( this + 0x2a8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x2cc ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2c8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x2cc ) = 0;
            *(undefined1(*) [16])( this + 0x2b8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x2b0 ) + lVar5 ) != 0) {
                  *(int*)( *(long*)( this + 0x2b0 ) + lVar5 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar6 + lVar5 * 2 ), false);
                  pvVar6 = *(void**)( this + 0x2a8 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x2cc ) = 0;
            *(undefined1(*) [16])( this + 0x2b8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010ee87;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x2b0 ), false);
   }

   LAB_0010ee87:CowData<int>::_unref((CowData<int>*)( this + 0x290 ));
   CowData<int>::_unref((CowData<int>*)( this + 0x280 ));
   CowData<int>::_unref((CowData<int>*)( this + 0x270 ));
   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   CowData<int>::_unref((CowData<int>*)( this + 0x250 ));
   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFSkin::~GLTFSkin() */void GLTFSkin::~GLTFSkin(GLTFSkin *this) {
   ~GLTFSkin(this)
   ;;
   operator_delete(this, 0x308);
   return;
}
/* GLTFSkeleton::~GLTFSkeleton() */void GLTFSkeleton::~GLTFSkeleton(GLTFSkeleton *this) {
   long *plVar1;
   long lVar2;
   uint uVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR__initialize_classv_00111eb0;
   if (*(long*)( this + 0x2c8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2c8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)( this + 0x2c8 );
         *(undefined8*)( this + 0x2c8 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   pvVar5 = *(void**)( this + 0x298 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 700 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2b8 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 700 ) = 0;
            *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x2a0 ) + lVar4 ) != 0) {
                  *(int*)( *(long*)( this + 0x2a0 ) + lVar4 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar5 + lVar4 * 2 ), false);
                  pvVar5 = *(void**)( this + 0x298 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 700 ) = 0;
            *(undefined1(*) [16])( this + 0x2a8 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_0010f097;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x2a0 ), false);
   }

   LAB_0010f097:pvVar5 = *(void**)( this + 0x268 );
   if (pvVar5 == (void*)0x0) goto LAB_0010f11b;
   if (*(int*)( this + 0x28c ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x280 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x288 ) * 4 ) << 2);
         if (*(int*)( this + 0x28c ) == 0) goto LAB_0010f188;
      }

      lVar4 = 0;
      do {
         lVar2 = lVar4 * 8;
         lVar4 = lVar4 + 1;
         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + lVar2 ));
         pvVar5 = *(void**)( this + 0x268 );
      }
 while ( (uint)lVar4 < *(uint*)( this + 0x28c ) );
      *(undefined4*)( this + 0x28c ) = 0;
      if (pvVar5 == (void*)0x0) goto LAB_0010f11b;
   }

   LAB_0010f188:Memory::free_static(pvVar5, false);
   Memory::free_static(*(void**)( this + 0x278 ), false);
   Memory::free_static(*(void**)( this + 0x270 ), false);
   Memory::free_static(*(void**)( this + 0x280 ), false);
   LAB_0010f11b:CowData<int>::_unref((CowData<int>*)( this + 600 ));
   CowData<int>::_unref((CowData<int>*)( this + 0x248 ));
   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2d0);
   return;
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      plVar1 = *(long**)this;
      if (plVar1 != (long*)0x0) {
         lVar3 = plVar1[-1];
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (*plVar6 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar6 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar6;
                     *plVar6 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* GLTFObjectModelProperty::~GLTFObjectModelProperty() */void GLTFObjectModelProperty::~GLTFObjectModelProperty(GLTFObjectModelProperty *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   Object *pOVar4;
   code *pcVar5;
   char cVar6;
   long lVar7;
   CowData<String> *this_00;
   *(undefined***)this = &PTR__initialize_classv_00111d50;
   if (*(long*)( this + 0x1a8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1a8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1a8 );
         if (lVar2 == 0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)( this + 0x1a8 ) = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            this_00 = (CowData<String>*)( lVar2 + 8 );
            do {
               lVar7 = lVar7 + 1;
               CowData<String>::_unref(this_00);
               this_00 = this_00 + 0x10;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Array::~Array((Array*)( this + 400 ));
   if (*(long*)( this + 0x188 ) != 0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         pOVar4 = *(Object**)( this + 0x188 );
         cVar6 = predelete_handler(pOVar4);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   if (*(long*)( this + 0x180 ) != 0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         pOVar4 = *(Object**)( this + 0x180 );
         cVar6 = predelete_handler(pOVar4);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_001112b8;
   Object::~Object((Object*)this);
   return;
}
/* GLTFObjectModelProperty::~GLTFObjectModelProperty() */void GLTFObjectModelProperty::~GLTFObjectModelProperty(GLTFObjectModelProperty *this) {
   ~GLTFObjectModelProperty(this)
   ;;
   operator_delete(this, 0x1b8);
   return;
}
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = StringName::StringName;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
/* GLTFSpecGloss::~GLTFSpecGloss() */void GLTFSpecGloss::~GLTFSpecGloss(GLTFSpecGloss *this) {
   char cVar1;
   *(undefined***)this = &PTR__initialize_classv_001127e8;
   if (*(long*)( this + 0x270 ) != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(*(Image**)( this + 0x270 ));
      }

   }

   if (*(long*)( this + 0x240 ) != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(*(Image**)( this + 0x240 ));
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFSpecGloss::~GLTFSpecGloss() */void GLTFSpecGloss::~GLTFSpecGloss(GLTFSpecGloss *this) {
   char cVar1;
   *(undefined***)this = &PTR__initialize_classv_001127e8;
   if (*(long*)( this + 0x270 ) != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(*(Image**)( this + 0x270 ));
      }

   }

   if (*(long*)( this + 0x240 ) != 0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         memdelete<Image>(*(Image**)( this + 0x240 ));
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x278);
   return;
}
/* Object* ClassDB::creator<GLTFSpecGloss>(bool) */Object *ClassDB::creator<GLTFSpecGloss>(bool param_1) {
   undefined4 uVar1;
   Resource *this;
   this(Resource * operator_new(0x278, ""));
   Resource::Resource(this);
   uVar1 = _LC10;
   *(undefined***)this = &PTR__initialize_classv_001127e8;
   *(undefined8*)( this + 0x240 ) = 0;
   *(undefined4*)( this + 0x268 ) = 0x3f800000;
   *(undefined8*)( this + 0x270 ) = 0;
   for (int i = 0; i < 8; i++) {
      *(undefined4*)( this + ( 4*i + 584 ) ) = uVar1;
   }

   Object::_initialize();
   if (!param_1) {
      return (Object*)this;
   }

   Object::_postinitialize();
   return (Object*)this;
}
/* CowData<void (*)()>::_realloc(long) */undefined8 CowData<void(*)()>::_realloc(CowData<void(*)()> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<void (*)()>::resize<false>(long) */undefined8 CowData<void(*)()>::resize<false>(CowData<void(*)()> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   long lVar8;
   long lVar9;
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
      lVar9 = 0;
      lVar3 = 0;
   }
 else {
      lVar9 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar9) {
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
      lVar3 = lVar9 * 8;
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
      LAB_0010f980:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_0010f980;
   if (lVar9 < param_1) {
      if (lVar8 != lVar3) {
         if (lVar9 == 0) {
            puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
            if (puVar5 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
               return 6;
            }

            puVar7 = puVar5 + 2;
            *puVar5 = 1;
            puVar5[1] = 0;
            *(undefined8**)this = puVar7;
            goto LAB_0010f891;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_0010f891:puVar7[-1] = param_1;
         return 0;
      }

   }
 else {
      if (( lVar8 != lVar3 ) && ( uVar6 = _realloc(this, lVar8) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

   }

   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<Ref<GLTFNode> >::_unref() */void CowData<Ref<GLTFNode>>::_unref(CowData<Ref<GLTFNode>> *this) {
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
      LAB_0010fa3d:do {
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
                  goto LAB_0010fa3d;
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
/* CowData<Ref<GLTFAccessor> >::_unref() */void CowData<Ref<GLTFAccessor>>::_unref(CowData<Ref<GLTFAccessor>> *this) {
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
      LAB_0010fb1d:do {
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
                  goto LAB_0010fb1d;
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
/* CowData<Ref<GLTFMesh> >::_unref() */void CowData<Ref<GLTFMesh>>::_unref(CowData<Ref<GLTFMesh>> *this) {
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
      LAB_0010fbfd:do {
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
                  goto LAB_0010fbfd;
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
/* CowData<Ref<GLTFSkin> >::_unref() */void CowData<Ref<GLTFSkin>>::_unref(CowData<Ref<GLTFSkin>> *this) {
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
      LAB_0010fcdd:do {
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
                  goto LAB_0010fcdd;
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
/* CowData<Ref<GLTFCamera> >::_unref() */void CowData<Ref<GLTFCamera>>::_unref(CowData<Ref<GLTFCamera>> *this) {
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
      LAB_0010fdbd:do {
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
                  goto LAB_0010fdbd;
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
/* CowData<Ref<GLTFLight> >::_unref() */void CowData<Ref<GLTFLight>>::_unref(CowData<Ref<GLTFLight>> *this) {
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
      LAB_0010fe9d:do {
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
                  goto LAB_0010fe9d;
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
/* GLTFState::~GLTFState() */void GLTFState::~GLTFState(GLTFState *this) {
   long *plVar1;
   uint uVar2;
   uint uVar3;
   Image *pIVar4;
   Object *pOVar5;
   long lVar6;
   code *pcVar7;
   char cVar8;
   int *piVar9;
   long lVar10;
   long *plVar11;
   long lVar12;
   void *pvVar13;
   void *pvVar14;
   long lVar15;
   long lVar16;
   *(undefined***)this = &PTR__initialize_classv_00112610;
   Dictionary::~Dictionary((Dictionary*)( this + 0x550 ));
   pvVar14 = *(void**)( this + 0x528 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x54c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x548 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x54c ) = 0;
            *(undefined1(*) [16])( this + 0x538 ) = (undefined1[16])0x0;
         }
 else {
            lVar16 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x530 ) + lVar16 ) != 0) {
                  pvVar14 = *(void**)( (long)pvVar14 + lVar16 * 2 );
                  *(int*)( *(long*)( this + 0x530 ) + lVar16 ) = 0;
                  pvVar13 = *(void**)( (long)pvVar14 + 0x20 );
                  if (pvVar13 != (void*)0x0) {
                     if (*(int*)( (long)pvVar14 + 0x44 ) != 0) {
                        uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar14 + 0x40 ) * 4 );
                        if (uVar3 == 0) {
                           *(undefined4*)( (long)pvVar14 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar14 + 0x30 ) = (undefined1[16])0x0;
                        }
 else {
                           lVar10 = 0;
                           do {
                              piVar9 = (int*)( *(long*)( (long)pvVar14 + 0x28 ) + lVar10 );
                              if (*piVar9 != 0) {
                                 *piVar9 = 0;
                                 Memory::free_static(*(void**)( (long)pvVar13 + lVar10 * 2 ), false);
                                 pvVar13 = *(void**)( (long)pvVar14 + 0x20 );
                                 *(undefined8*)( (long)pvVar13 + lVar10 * 2 ) = 0;
                              }

                              lVar10 = lVar10 + 4;
                           }
 while ( lVar10 != (ulong)uVar3 * 4 );
                           *(undefined4*)( (long)pvVar14 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar14 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar13 == (void*)0x0) goto LAB_00110051;
                        }

                     }

                     Memory::free_static(pvVar13, false);
                     Memory::free_static(*(void**)( (long)pvVar14 + 0x28 ), false);
                  }

                  LAB_00110051:Memory::free_static(pvVar14, false);
                  pvVar14 = *(void**)( this + 0x528 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( lVar16 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x54c ) = 0;
            *(undefined1(*) [16])( this + 0x538 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_0011009a;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x530 ), false);
   }

   LAB_0011009a:pvVar14 = *(void**)( this + 0x4f8 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x51c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x518 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x51c ) = 0;
            *(undefined1(*) [16])( this + 0x508 ) = (undefined1[16])0x0;
         }
 else {
            lVar16 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x500 ) + lVar16 ) != 0) {
                  *(int*)( *(long*)( this + 0x500 ) + lVar16 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar14 + lVar16 * 2 ), false);
                  pvVar14 = *(void**)( this + 0x4f8 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( lVar16 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x51c ) = 0;
            *(undefined1(*) [16])( this + 0x508 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_00110137;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x500 ), false);
   }

   LAB_00110137:pvVar14 = *(void**)( this + 0x4c8 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x4ec ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4e8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x4ec ) = 0;
            *(undefined1(*) [16])( this + 0x4d8 ) = (undefined1[16])0x0;
         }
 else {
            lVar16 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x4d0 ) + lVar16 ) != 0) {
                  pvVar14 = *(void**)( (long)pvVar14 + lVar16 * 2 );
                  *(int*)( *(long*)( this + 0x4d0 ) + lVar16 ) = 0;
                  if (( *(long*)( (long)pvVar14 + 0x18 ) != 0 ) && ( cVar8 = cVar8 != '\0' )) {
                     pOVar5 = *(Object**)( (long)pvVar14 + 0x18 );
                     cVar8 = predelete_handler(pOVar5);
                     if (cVar8 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar14 + 0x10 ));
                  Memory::free_static(pvVar14, false);
                  pvVar14 = *(void**)( this + 0x4c8 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( lVar16 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x4ec ) = 0;
            *(undefined1(*) [16])( this + 0x4d8 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_001101fa;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x4d0 ), false);
   }

   LAB_001101fa:pvVar14 = *(void**)( this + 0x498 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x4bc ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4b8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x4bc ) = 0;
            *(undefined1(*) [16])( this + 0x4a8 ) = (undefined1[16])0x0;
         }
 else {
            lVar16 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x4a0 ) + lVar16 ) != 0) {
                  *(int*)( *(long*)( this + 0x4a0 ) + lVar16 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar14 + lVar16 * 2 ), false);
                  pvVar14 = *(void**)( this + 0x498 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( lVar16 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x4bc ) = 0;
            *(undefined1(*) [16])( this + 0x4a8 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_00110299;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x4a0 ), false);
   }

   LAB_00110299:pvVar14 = *(void**)( this + 0x468 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x48c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x488 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x48c ) = 0;
            *(undefined1(*) [16])( this + 0x478 ) = (undefined1[16])0x0;
         }
 else {
            lVar16 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x470 ) + lVar16 ) != 0) {
                  *(int*)( *(long*)( this + 0x470 ) + lVar16 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar14 + lVar16 * 2 ), false);
                  pvVar14 = *(void**)( this + 0x468 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar16 );
            *(undefined4*)( this + 0x48c ) = 0;
            *(undefined1(*) [16])( this + 0x478 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_00110339;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x470 ), false);
   }

   LAB_00110339:if (*(long*)( this + 0x458 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x458 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x458 );
         if (plVar1 == (long*)0x0) goto LAB_00110ec3;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x458 ) = 0;
         plVar11 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar11 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00110388:lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 1;
                  if (lVar16 == lVar10) goto LAB_001103e0;
               }
;
               pOVar5 = (Object*)*plVar11;
               cVar8 = predelete_handler(pOVar5);
               if (cVar8 == '\0') goto LAB_00110388;
               lVar10 = lVar10 + 1;
               plVar11 = plVar11 + 1;
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_001103e0:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x448 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x448 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x448 );
         if (plVar1 == (long*)0x0) goto LAB_00110ec3;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x448 ) = 0;
         plVar11 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar11 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00110438:lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 1;
                  if (lVar16 == lVar10) goto LAB_00110490;
               }
;
               pOVar5 = (Object*)*plVar11;
               cVar8 = predelete_handler(pOVar5);
               if (cVar8 == '\0') goto LAB_00110438;
               lVar10 = lVar10 + 1;
               plVar11 = plVar11 + 1;
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00110490:Memory::free_static(plVar1 + -2, false);
      }

   }

   pvVar14 = *(void**)( this + 0x418 );
   if (pvVar14 != (void*)0x0) {
      if (( *(int*)( this + 0x43c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x438 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x430 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x438 ) * 4 ) * 4),*(int*)( this + 0x43c ) != 0 ) ) )) {
         lVar16 = 0;
         do {
            lVar10 = lVar16 * 8;
            lVar16 = lVar16 + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar14 + lVar10 ));
            pvVar14 = *(void**)( this + 0x418 );
         }
 while ( (uint)lVar16 < *(uint*)( this + 0x43c ) );
         *(undefined4*)( this + 0x43c ) = 0;
         if (pvVar14 == (void*)0x0) goto LAB_0011052f;
      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x428 ), false);
      Memory::free_static(*(void**)( this + 0x420 ), false);
      Memory::free_static(*(void**)( this + 0x430 ), false);
   }

   LAB_0011052f:pvVar14 = *(void**)( this + 0x3f0 );
   if (pvVar14 != (void*)0x0) {
      if (( *(int*)( this + 0x414 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x410 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x408 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x410 ) * 4 ) * 4),*(int*)( this + 0x414 ) != 0 ) ) )) {
         lVar16 = 0;
         do {
            lVar10 = lVar16 * 8;
            lVar16 = lVar16 + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar14 + lVar10 ));
            pvVar14 = *(void**)( this + 0x3f0 );
         }
 while ( (uint)lVar16 < *(uint*)( this + 0x414 ) );
         *(undefined4*)( this + 0x414 ) = 0;
         if (pvVar14 == (void*)0x0) goto LAB_001105b7;
      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x400 ), false);
      Memory::free_static(*(void**)( this + 0x3f8 ), false);
      Memory::free_static(*(void**)( this + 0x408 ), false);
   }

   LAB_001105b7:CowData<Ref<GLTFLight>>::_unref((CowData<Ref<GLTFLight>>*)( this + 1000 ));
   CowData<Ref<GLTFCamera>>::_unref((CowData<Ref<GLTFCamera>>*)( this + 0x3d8 ));
   CowData<Ref<GLTFSkin>>::_unref((CowData<Ref<GLTFSkin>>*)( this + 0x3c8 ));
   if (*(long*)( this + 0x3b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x3b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x3b8 );
         if (plVar1 == (long*)0x0) goto LAB_00110ec3;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x3b8 ) = 0;
         plVar11 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar11 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 1;
                  if (lVar16 == lVar10) goto LAB_00110658;
               }
;
               pIVar4 = (Image*)*plVar11;
               lVar10 = lVar10 + 1;
               plVar11 = plVar11 + 1;
               memdelete<Image>(pIVar4);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00110658:Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<String>::_unref((CowData<String>*)( this + 0x3a8 ));
   CowData<String>::_unref((CowData<String>*)( this + 0x398 ));
   if (*(long*)( this + 0x388 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x388 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x388 );
         if (plVar1 == (long*)0x0) goto LAB_00110ec3;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x388 ) = 0;
         plVar11 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar11 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_001106c8:lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 1;
                  if (lVar16 == lVar10) goto LAB_00110720;
               }
;
               pOVar5 = (Object*)*plVar11;
               cVar8 = predelete_handler(pOVar5);
               if (cVar8 == '\0') goto LAB_001106c8;
               lVar10 = lVar10 + 1;
               plVar11 = plVar11 + 1;
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00110720:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( *(long*)( this + 0x378 ) != 0 ) && ( cVar8 = cVar8 != '\0' )) {
      pOVar5 = *(Object**)( this + 0x378 );
      cVar8 = predelete_handler(pOVar5);
      if (cVar8 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }

   }

   if (*(long*)( this + 0x370 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x370 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x370 );
         if (plVar1 == (long*)0x0) goto LAB_00110ec3;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x370 ) = 0;
         plVar11 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar11 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00110790:lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 1;
                  if (lVar16 == lVar10) goto LAB_001107e8;
               }
;
               pOVar5 = (Object*)*plVar11;
               cVar8 = predelete_handler(pOVar5);
               if (cVar8 == '\0') goto LAB_00110790;
               lVar10 = lVar10 + 1;
               plVar11 = plVar11 + 1;
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_001107e8:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x360 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x360 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x360 );
         if (plVar1 == (long*)0x0) goto LAB_00110ec3;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x360 ) = 0;
         plVar11 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar11 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00110840:lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 1;
                  if (lVar16 == lVar10) goto LAB_00110898;
               }
;
               pOVar5 = (Object*)*plVar11;
               cVar8 = predelete_handler(pOVar5);
               if (cVar8 == '\0') goto LAB_00110840;
               lVar10 = lVar10 + 1;
               plVar11 = plVar11 + 1;
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00110898:Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<int>::_unref((CowData<int>*)( this + 0x350 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x340 ));
   if (*(long*)( this + 0x338 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x338 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x338 );
         if (plVar1 == (long*)0x0) goto LAB_00110ec3;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x338 ) = 0;
         plVar11 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar11 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00110908:lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 1;
                  if (lVar16 == lVar10) goto LAB_00110960;
               }
;
               pOVar5 = (Object*)*plVar11;
               cVar8 = predelete_handler(pOVar5);
               if (cVar8 == '\0') goto LAB_00110908;
               lVar10 = lVar10 + 1;
               plVar11 = plVar11 + 1;
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00110960:Memory::free_static(plVar1 + -2, false);
      }

   }

   pvVar14 = *(void**)( this + 0x308 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x32c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x328 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x32c ) = 0;
            *(undefined1(*) [16])( this + 0x318 ) = (undefined1[16])0x0;
         }
 else {
            lVar16 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x310 ) + lVar16 ) != 0) {
                  pvVar14 = *(void**)( (long)pvVar14 + lVar16 * 2 );
                  *(int*)( *(long*)( this + 0x310 ) + lVar16 ) = 0;
                  if (( *(long*)( (long)pvVar14 + 0x10 ) != 0 ) && ( cVar8 = cVar8 != '\0' )) {
                     pOVar5 = *(Object**)( (long)pvVar14 + 0x10 );
                     cVar8 = predelete_handler(pOVar5);
                     if (cVar8 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

                  Memory::free_static(pvVar14, false);
                  pvVar14 = *(void**)( this + 0x308 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar16 );
            *(undefined4*)( this + 0x32c ) = 0;
            *(undefined1(*) [16])( this + 0x318 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_00110a25;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x310 ), false);
   }

   LAB_00110a25:if (*(long*)( this + 0x2f8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2f8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = *(long*)( this + 0x2f8 );
         *(undefined8*)( this + 0x2f8 ) = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   CowData<Ref<GLTFMesh>>::_unref((CowData<Ref<GLTFMesh>>*)( this + 0x2e8 ));
   CowData<Ref<GLTFAccessor>>::_unref((CowData<Ref<GLTFAccessor>>*)( this + 0x2d8 ));
   if (*(long*)( this + 0x2c8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2c8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x2c8 );
         if (plVar1 == (long*)0x0) goto LAB_00110ec3;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x2c8 ) = 0;
         plVar11 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar11 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00110aa0:lVar10 = lVar10 + 1;
                  plVar11 = plVar11 + 1;
                  if (lVar16 == lVar10) goto LAB_00110af8;
               }
;
               pOVar5 = (Object*)*plVar11;
               cVar8 = predelete_handler(pOVar5);
               if (cVar8 == '\0') goto LAB_00110aa0;
               lVar10 = lVar10 + 1;
               plVar11 = plVar11 + 1;
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00110af8:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x2b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = *(long*)( this + 0x2b8 );
         if (lVar16 == 0) {
            LAB_00110ec3:/* WARNING: Does not return */pcVar7 = (code*)invalidInstructionException();
            ( *pcVar7 )();
         }

         lVar10 = *(long*)( lVar16 + -8 );
         lVar15 = 0;
         *(undefined8*)( this + 0x2b8 ) = 0;
         lVar12 = lVar16;
         if (lVar10 != 0) {
            do {
               if (*(long*)( lVar12 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar12 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar6 = *(long*)( lVar12 + 8 );
                     *(undefined8*)( lVar12 + 8 ) = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

               lVar15 = lVar15 + 1;
               lVar12 = lVar12 + 0x10;
            }
 while ( lVar10 != lVar15 );
         }

         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   CowData<Ref<GLTFNode>>::_unref((CowData<Ref<GLTFNode>>*)( this + 0x2a8 ));
   if (*(long*)( this + 0x280 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x280 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = *(long*)( this + 0x280 );
         *(undefined8*)( this + 0x280 ) = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x270 ));
   Dictionary::~Dictionary((Dictionary*)( this + 0x260 ));
   for (int i = 0; i < 4; i++) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + ( -8*i + 600 ) ));
   }

   Resource::~Resource((Resource*)this);
   return;
}
/* GLTFState::~GLTFState() */void GLTFState::~GLTFState(GLTFState *this) {
   ~GLTFState(this)
   ;;
   operator_delete(this, 0x558);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFState::~GLTFState() */void GLTFState::~GLTFState(GLTFState *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFSpecGloss::~GLTFSpecGloss() */void GLTFSpecGloss::~GLTFSpecGloss(GLTFSpecGloss *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFObjectModelProperty::~GLTFObjectModelProperty() */void GLTFObjectModelProperty::~GLTFObjectModelProperty(GLTFObjectModelProperty *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFSkin::~GLTFSkin() */void GLTFSkin::~GLTFSkin(GLTFSkin *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFSkeleton::~GLTFSkeleton() */void GLTFSkeleton::~GLTFSkeleton(GLTFSkeleton *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFPhysicsShape::~GLTFPhysicsShape() */void GLTFPhysicsShape::~GLTFPhysicsShape(GLTFPhysicsShape *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFMesh::~GLTFMesh() */void GLTFMesh::~GLTFMesh(GLTFMesh *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFNode::~GLTFNode() */void GLTFNode::~GLTFNode(GLTFNode *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFLight::~GLTFLight() */void GLTFLight::~GLTFLight(GLTFLight *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFDocumentExtension::GLTFDocumentExtension() */void GLTFDocumentExtension::GLTFDocumentExtension(GLTFDocumentExtension *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFAccessor::~GLTFAccessor() */void GLTFAccessor::~GLTFAccessor(GLTFAccessor *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFTexture::~GLTFTexture() */void GLTFTexture::~GLTFTexture(GLTFTexture *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFTextureSampler::~GLTFTextureSampler() */void GLTFTextureSampler::~GLTFTextureSampler(GLTFTextureSampler *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFPhysicsBody::~GLTFPhysicsBody() */void GLTFPhysicsBody::~GLTFPhysicsBody(GLTFPhysicsBody *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFBufferView::~GLTFBufferView() */void GLTFBufferView::~GLTFBufferView(GLTFBufferView *this) {
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


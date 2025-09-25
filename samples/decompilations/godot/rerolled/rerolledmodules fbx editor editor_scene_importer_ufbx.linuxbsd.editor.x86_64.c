/* EditorSceneFormatImporterUFBX::get_option_visibility(String const&, String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) */String *EditorSceneFormatImporterUFBX::get_option_visibility(String *param_1, String *param_2, String *param_3, HashMap *param_4) {
   Variant::Variant((Variant*)param_1, true);
   return param_1;
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
/* EditorSceneFormatImporterUFBX::get_extensions(List<String, DefaultAllocator>*) const */void EditorSceneFormatImporterUFBX::get_extensions(EditorSceneFormatImporterUFBX *this, List *param_1) {
   long *plVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   undefined1(*pauVar3)[16];
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = &_LC18;
   local_30 = 3;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
   }

   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 == 0) {
      *plVar1 = (long)this_00;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* List<ResourceImporter::ImportOption, DefaultAllocator>::push_back(ResourceImporter::ImportOption
   const&) [clone .isra.0] */void List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(List<ResourceImporter::ImportOption,DefaultAllocator> *this, ImportOption *param_1) {
   undefined8 uVar1;
   long *plVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   if (*(long*)this == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar4 + 0xe ) = (undefined1[16])0x0;
   lVar3 = *(long*)( param_1 + 8 );
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   puVar4[0xc] = 0;
   *(undefined8*)( puVar4 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0x12 ) = (undefined1[16])0x0;
   *puVar4 = *(undefined4*)param_1;
   if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar4[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar4 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar4[10] = *(undefined4*)( param_1 + 0x28 );
   Variant::operator =((Variant*)( puVar4 + 0xc ), (Variant*)( param_1 + 0x30 ));
   uVar1 = *(undefined8*)( *(long*)this + 8 );
   *(long*)( puVar4 + 0x16 ) = *(long*)this;
   plVar2 = *(long**)this;
   *(undefined8*)( puVar4 + 0x12 ) = 0;
   *(undefined8*)( puVar4 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar4;
   }

   plVar2[1] = (long)puVar4;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)puVar4;
   return;
}
/* EditorSceneFormatImporterUFBX::get_import_options(String const&,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */void EditorSceneFormatImporterUFBX::get_import_options(EditorSceneFormatImporterUFBX *this, String *param_1, List *param_2) {
   char cVar1;
   long in_FS_OFFSET;
   undefined8 local_f0;
   undefined8 local_e8;
   long local_e0;
   undefined4 local_d8[2];
   CowData local_d0[8];
   StringName local_c8[8];
   undefined4 local_c0;
   CowData local_b8[8];
   undefined4 local_b0;
   int local_a8[8];
   undefined4 local_88[2];
   undefined8 local_80;
   StringName local_78[8];
   undefined4 local_70;
   undefined8 local_68;
   undefined4 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) {
      String::get_extension();
      String::to_lower();
      cVar1 = String::operator ==((String*)local_d8, "fbx");
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      if (cVar1 == '\0') goto LAB_0010045c;
   }

   Variant::Variant((Variant*)local_a8, 0);
   local_e0 = 0;
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "ufbx,FBX2glTF");
   local_f0 = 0;
   String::parse_latin1((String*)&local_f0, "fbx/importer");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_d8, 2, (String*)&local_f0, 2, (String*)&local_e8, 6, (CowData<char32_t>*)&local_e0);
   local_88[0] = local_d8[0];
   local_80 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, local_d0);
   StringName::StringName(local_78, local_c8);
   local_68 = 0;
   local_70 = local_c0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, local_b8);
   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   List<ResourceImporter::ImportOption,DefaultAllocator>::push_back((List<ResourceImporter::ImportOption,DefaultAllocator>*)param_2, (ImportOption*)local_88);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_88);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, false);
   local_e0 = 0;
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "");
   local_f0 = 0;
   String::parse_latin1((String*)&local_f0, "fbx/allow_geometry_helper_nodes");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_d8, 1, (String*)&local_f0, 0, (String*)&local_e8, 6, (CowData<char32_t>*)&local_e0);
   local_80 = 0;
   local_88[0] = local_d8[0];
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, local_d0);
   StringName::StringName(local_78, local_c8);
   local_68 = 0;
   local_70 = local_c0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, local_b8);
   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   List<ResourceImporter::ImportOption,DefaultAllocator>::push_back((List<ResourceImporter::ImportOption,DefaultAllocator>*)param_2, (ImportOption*)local_88);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_88);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, 1);
   local_e0 = 0;
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "Discard All Textures,Extract Textures,Embed as Basis Universal,Embed as Uncompressed");
   local_f0 = 0;
   String::parse_latin1((String*)&local_f0, "fbx/embedded_image_handling");
   PropertyInfo::PropertyInfo((PropertyInfo*)local_d8, 2, (String*)&local_f0, 2, (String*)&local_e8, 0x4006, (CowData<char32_t>*)&local_e0);
   local_80 = 0;
   local_88[0] = local_d8[0];
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, local_d0);
   StringName::StringName(local_78, local_c8);
   local_68 = 0;
   local_70 = local_c0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, local_b8);
   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   List<ResourceImporter::ImportOption,DefaultAllocator>::push_back((List<ResourceImporter::ImportOption,DefaultAllocator>*)param_2, (ImportOption*)local_88);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   PropertyInfo::~PropertyInfo((PropertyInfo*)local_88);
   PropertyInfo::~PropertyInfo((PropertyInfo*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010045c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
      if ((code*)PTR__bind_methods_0010b008 != RefCounted::_bind_methods) {
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
/* EditorSceneFormatImporterUFBX::handle_compatibility_options(HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >&) const */void EditorSceneFormatImporterUFBX::handle_compatibility_options(EditorSceneFormatImporterUFBX *this, HashMap *param_1) {
   char cVar1;
   Variant *pVVar2;
   long in_FS_OFFSET;
   uint local_54;
   long local_50;
   int local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_50, "fbx/importer", false);
   local_54 = 0;
   cVar1 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_1, (StringName*)&local_50, &local_54);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (cVar1 == '\0') {
      Variant::Variant((Variant*)local_48, 1);
      StringName::StringName((StringName*)&local_50, "fbx/importer", false);
      pVVar2 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_1, (StringName*)&local_50);
      if (pVVar2 != (Variant*)local_48) {
         if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar2 = 0;
         *(int*)pVVar2 = local_48[0];
         local_48[0] = 0;
         *(undefined8*)( pVVar2 + 8 ) = local_40;
         *(undefined8*)( pVVar2 + 0x10 ) = uStack_38;
      }

      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorSceneFormatImporterUFBX::import_scene(String const&, unsigned int, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, Error*) */undefined8 EditorSceneFormatImporterUFBX::import_scene(EditorSceneFormatImporterUFBX *this, String *param_1, uint param_2, HashMap *param_3, List *param_4, Error *param_5) {
   code *pcVar1;
   char cVar2;
   int iVar3;
   Resource *this_00;
   Object *pOVar4;
   RefCounted *this_01;
   Variant *pVVar5;
   undefined8 uVar6;
   long lVar7;
   Object *pOVar8;
   Resource *pRVar9;
   Resource *pRVar10;
   long in_FS_OFFSET;
   bool bVar11;
   byte bVar12;
   double dVar13;
   Object *local_80;
   long local_78;
   long local_70;
   undefined8 local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   bVar12 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_70, "fbx/importer", false);
   local_60 = (Object*)( (ulong)local_60._4_4_ << 0x20 );
   cVar2 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_70, (uint*)&local_60);
   if (cVar2 == '\0') {
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::StringName((StringName*)&local_68, "fbx/importer", false);
      pVVar5 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_68);
      iVar3 = Variant::operator_cast_to_int(pVVar5);
      if (iVar3 == 1) {
         ProjectSettings::get_singleton();
         StringName::StringName((StringName*)&local_60, "filesystem/import/fbx2gltf/enabled", false);
         ProjectSettings::get_setting_with_override((StringName*)local_58);
         bVar11 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( ( local_60 == (Object*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) )) goto LAB_001011f9;
      }
 else {
         bVar11 = false;
         if (StringName::configured == '\0') goto LAB_00100d9d;
         LAB_001011f9:if (local_68 != 0) {
            StringName::unref();
         }

         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }

      if (bVar11 != false) {
         this_01 = (RefCounted*)operator_new(0x1e8, "");
         RefCounted::RefCounted(this_01);
         *(undefined8*)( this_01 + 0x180 ) = 0;
         *(undefined**)this_01 = &__dso_handle;
         StringName::StringName((StringName*)( this_01 + 0x188 ), "_get_extensions", false);
         this_01[400] = (RefCounted)0x0;
         *(undefined8*)( this_01 + 0x198 ) = 0;
         StringName::StringName((StringName*)( this_01 + 0x1a0 ), "_import_scene", false);
         this_01[0x1a8] = (RefCounted)0x0;
         *(undefined8*)( this_01 + 0x1b0 ) = 0;
         StringName::StringName((StringName*)( this_01 + 0x1b8 ), "_get_import_options", false);
         this_01[0x1c0] = (RefCounted)0x0;
         *(undefined8*)( this_01 + 0x1c8 ) = 0;
         StringName::StringName((StringName*)( this_01 + 0x1d0 ), "_get_option_visibility", false);
         this_01[0x1d8] = (RefCounted)0x0;
         *(undefined8*)( this_01 + 0x1e0 ) = 0;
         *(code**)this_01 = Variant::operator_cast_to_bool;
         postinitialize_handler((Object*)this_01);
         cVar2 = RefCounted::init_ref();
         if (cVar2 == '\0') {
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         cVar2 = RefCounted::reference();
         pOVar8 = (Object*)0x0;
         if (cVar2 != '\0') {
            pOVar8 = (Object*)this_01;
         }

         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this_01) ),cVar2 != '\0') {
            ( **(code**)( *(long*)this_01 + 0x140 ) )(this_01);
            Memory::free_static(this_01, false);
         }

         uVar6 = ( **(code**)( *(long*)pOVar8 + 0x158 ) )(pOVar8, param_1, param_2, param_3, param_4, param_5);
         if (param_5 == (Error*)0x0) {
            uVar6 = 0;
         }
 else if (*(int*)param_5 != 0) {
            uVar6 = 0;
         }

         cVar2 = RefCounted::unreference();
         if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
            ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
            Memory::free_static(pOVar8, false);
         }

         goto LAB_0010138c;
      }

   }

   LAB_00100d9d:pRVar10 = (Resource*)0x0;
   this_00 = (Resource*)operator_new(0x278, "");
   pRVar9 = this_00;
   for (lVar7 = 0x4f; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8*)pRVar9 = 0;
      pRVar9 = pRVar9 + (ulong)bVar12 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   *(undefined8*)( this_00 + 0x248 ) = 0;
   *(code**)this_00 = is_print_verbose_enabled;
   *(undefined8*)( this_00 + 0x240 ) = _LC38;
   String::parse_latin1((String*)( this_00 + 0x248 ), "PNG");
   *(undefined4*)( this_00 + 0x250 ) = 0x3f400000;
   *(code**)this_00 = stringify_variants;
   *(undefined8*)( this_00 + 600 ) = 0;
   *(undefined4*)( this_00 + 0x260 ) = 0;
   *(undefined8*)( this_00 + 0x270 ) = 0;
   postinitialize_handler((Object*)this_00);
   cVar2 = RefCounted::init_ref();
   if (cVar2 != '\0') {
      cVar2 = RefCounted::reference();
      if (cVar2 != '\0') {
         pRVar10 = this_00;
      }

      cVar2 = RefCounted::unreference();
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)this_00) ),cVar2 != '\0') {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         Memory::free_static(this_00, false);
      }

   }

   local_80 = (Object*)0x0;
   Ref<FBXState>::instantiate<>((Ref<FBXState>*)&local_80);
   cVar2 = is_print_verbose_enabled();
   if (cVar2 != '\0') {
      local_70 = 0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)param_1);
      }

      local_78 = 0;
      String::parse_latin1((String*)&local_78, "FBX path: %s");
      vformat<String>((CowData<char32_t>*)&local_68, (String*)&local_78, (StringName*)&local_70);
      Variant::Variant((Variant*)local_58, (String*)&local_68);
      stringify_variants((Variant*)&local_60);
      __print_line((String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   ProjectSettings::get_singleton();
   ProjectSettings::globalize_path((String*)&local_78);
   StringName::StringName((StringName*)&local_68, "fbx/allow_geometry_helper_nodes", false);
   local_60 = (Object*)( (ulong)local_60 & 0xffffffff00000000 );
   cVar2 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_68, (uint*)&local_60);
   if (cVar2 == '\0') {
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::StringName((StringName*)&local_60, "fbx/allow_geometry_helper_nodes", false);
      pVVar5 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_60);
      bVar11 = Variant::operator_cast_to_bool(pVVar5);
      if (( StringName::configured != '\0' ) && ( ( ( local_60 == (Object*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_68 != 0 ) ) )) {
         StringName::unref();
      }

      if (bVar11) {
         FBXState::set_allow_geometry_helper_nodes(SUB81(local_80, 0));
      }

   }

   StringName::StringName((StringName*)&local_60, "fbx/embedded_image_handling", false);
   local_68 = (ulong)local_68._4_4_ << 0x20;
   cVar2 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_60, (uint*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_60 != (Object*)0x0 )) {
      StringName::unref();
   }

   if (cVar2 != '\0') {
      StringName::StringName((StringName*)&local_60, "fbx/embedded_image_handling", false);
      pVVar5 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_60);
      iVar3 = Variant::operator_cast_to_int(pVVar5);
      if (( StringName::configured != '\0' ) && ( local_60 != (Object*)0x0 )) {
         StringName::unref();
      }

      *(int*)( local_80 + 0x298 ) = iVar3;
   }

   if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
       ::{lambda()
   #1
   (iVar3 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                   ::{lambda()
   #1
   _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                         ::{lambda()
   #1
   __cxa_atexit(StringName::~StringName,
                 &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                  ::{lambda()
   #1
   __cxa_guard_release (&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                         ::{lambda();
   #1
}
local_60 = (Object*)( (ulong)local_60 & 0xffffffff00000000 );cVar2 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
          ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                         *)param_3,
                        (StringName *)
                        &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                         ::{lambda()#1pOVar8 = local_80;if (cVar2 != '\0') {
   if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
         ::{lambda()
   #2
   (iVar3 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                     ::{lambda()
   #2
   _scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                           ::{lambda()
   #2
   __cxa_atexit(StringName::~StringName,
                   &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                    ::{lambda()
   #2
   __cxa_guard_release (&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                           ::{lambda();
   #2
}
pVVar5 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&import_scene(String_const & unsigned_int, HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement < StringName,Variant>> > const, &, List<String,DefaultAllocator>, *, Error * ::operator ()(), ::sname));bVar11 = Variant::operator_cast_to_bool(pVVar5);pOVar8 = local_80;if (bVar11) {
   GLTFState::set_import_as_skeleton_bones(SUB81(local_80, 0));
}
}StringName::StringName((StringName*)&local_60, "animation/fps", false);local_68 = local_68 & 0xffffffff00000000;cVar2 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_60, (uint*)&local_68);if (cVar2 == '\0') {
   _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
dVar13 = Variant::operator_cast_to_double((Variant*)( *(long*)( *(long*)( param_3 + 8 ) + ( local_68 & 0xffffffff ) * 8 ) + 0x18 ));bVar11 = StringName::configured != '\0';*(double*)( pOVar8 + 0x288 ) = dVar13;if (( bVar11 ) && ( local_60 != (Object*)0x0 )) {
   StringName::unref();
}
pcVar1 = *(code**)( *(long*)pRVar10 + 0x1c8 );String::get_base_dir();local_60 = (Object*)0x0;pOVar4 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &GLTFState::typeinfo, 0);if (( pOVar4 != (Object*)0x0 ) && ( local_60 = pOVar4 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
   local_60 = (Object*)0x0;
}
local_68 = 0;if (local_78 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_78);
}
iVar3 = ( *pcVar1 )(pRVar10, (CowData<char32_t>*)&local_68, (Variant*)&local_60, param_2 | 0x10, (StringName*)&local_70);CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);if (( ( local_60 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_60,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))();Memory::free_static(pOVar4, false);}CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);if (iVar3 == 0) {
   pcVar1 = *(code**)( *(long*)pRVar10 + 0x1e0 );
   StringName::StringName((StringName*)&local_68, "animation/trimming", false);
   pVVar5 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_68);
   bVar11 = Variant::operator_cast_to_bool(pVVar5);
   dVar13 = *(double*)( pOVar8 + 0x288 );
   local_60 = (Object*)0x0;
   pOVar4 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &GLTFState::typeinfo, 0);
   if (( pOVar4 != (Object*)0x0 ) && ( local_60 = pOVar4 ),cVar2 = RefCounted::reference(),cVar2 == '\0') {
      local_60 = (Object*)0x0;
   }

   uVar6 = ( *pcVar1 )((float)dVar13, pRVar10, (Variant*)&local_60, bVar11, 0);
   if (( ( local_60 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),pOVar4 = local_60,cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
   StringName::unref();
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);}
  elseif (param_5 == (Error*)0x0) {
   uVar6 = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
}
 else {
   *(undefined4*)param_5 = 1;
   uVar6 = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
}
cVar2 = RefCounted::unreference();if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
   ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
   Memory::free_static(pOVar8, false);
}
cVar2 = RefCounted::unreference();if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)pRVar10) ),cVar2 != '\0') {
   ( **(code**)( *(long*)pRVar10 + 0x140 ) )(pRVar10);
   Memory::free_static(pRVar10, false);
}
LAB_0010138c:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar6;}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1080, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* EditorSceneFormatImporterUFBX::is_class_ptr(void*) const */uint EditorSceneFormatImporterUFBX::is_class_ptr(EditorSceneFormatImporterUFBX *this, void *param_1) {
   return (uint)CONCAT71(0x1080, (undefined4*)param_1 == &EditorSceneFormatImporter::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorSceneFormatImporterUFBX::_getv(StringName const&, Variant&) const */undefined8 EditorSceneFormatImporterUFBX::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSceneFormatImporterUFBX::_setv(StringName const&, Variant const&) */undefined8 EditorSceneFormatImporterUFBX::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSceneFormatImporterUFBX::_validate_propertyv(PropertyInfo&) const */void EditorSceneFormatImporterUFBX::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorSceneFormatImporterUFBX::_property_can_revertv(StringName const&) const */undefined8 EditorSceneFormatImporterUFBX::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorSceneFormatImporterUFBX::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorSceneFormatImporterUFBX::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSceneFormatImporterUFBX::_notificationv(int, bool) */void EditorSceneFormatImporterUFBX::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFState::is_class_ptr(void*) const */uint GLTFState::is_class_ptr(GLTFState *this, void *param_1) {
   return (uint)CONCAT71(0x1080, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* FBXState::is_class_ptr(void*) const */uint FBXState::is_class_ptr(FBXState *this, void *param_1) {
   return (uint)CONCAT71(0x107f, (undefined4*)param_1 == &GLTFState::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* FBXState::_getv(StringName const&, Variant&) const */undefined8 FBXState::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* FBXState::_setv(StringName const&, Variant const&) */undefined8 FBXState::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* FBXState::_validate_propertyv(PropertyInfo&) const */void FBXState::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* FBXState::_property_can_revertv(StringName const&) const */undefined8 FBXState::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* FBXState::_property_get_revertv(StringName const&, Variant&) const */undefined8 FBXState::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* FBXState::_notificationv(int, bool) */void FBXState::_notificationv(int param_1, bool param_2) {
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00107918;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00107918;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
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
/* EditorSceneFormatImporterUFBX::~EditorSceneFormatImporterUFBX() */void EditorSceneFormatImporterUFBX::~EditorSceneFormatImporterUFBX(EditorSceneFormatImporterUFBX *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &__dso_handle;
   if (bVar1) {
      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101dbe;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101dbe;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101dbe;
      }

      if (*(long*)( this + 0x188 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101dbe:*(undefined***)this = &PTR__initialize_classv_00107918;
   Object::~Object((Object*)this);
   return;
}
/* EditorSceneFormatImporterUFBX::~EditorSceneFormatImporterUFBX() */void EditorSceneFormatImporterUFBX::~EditorSceneFormatImporterUFBX(EditorSceneFormatImporterUFBX *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &__dso_handle;
   if (bVar1) {
      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101e6e;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101e6e;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00101e6e;
      }

      if (*(long*)( this + 0x188 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00101e6e:*(undefined***)this = &PTR__initialize_classv_00107918;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1e8);
   return;
}
/* EditorSceneFormatImporterUFBX::_get_class_namev() const */undefined8 *EditorSceneFormatImporterUFBX::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101ee3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101ee3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorSceneFormatImporterUFBX");
         goto LAB_00101f4e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorSceneFormatImporterUFBX");
   LAB_00101f4e:return &_get_class_namev();
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
         LAB_00101fc3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101fc3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFState");
         goto LAB_0010202e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFState");
   LAB_0010202e:return &_get_class_namev();
}
/* FBXState::_get_class_namev() const */undefined8 *FBXState::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001020a3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001020a3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "FBXState");
         goto LAB_0010210e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "FBXState");
   LAB_0010210e:return &_get_class_namev();
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
         LAB_00102183:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102183;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_001021ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_001021ee:return &_get_class_namev();
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
   *(code**)this = Memory::free_static;
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
/* void Ref<FBXState>::instantiate<>() */void Ref<FBXState>::instantiate<>(Ref<FBXState> *this) {
   undefined8 uVar1;
   undefined8 uVar2;
   char cVar3;
   Resource *this_00;
   long lVar4;
   Object *pOVar5;
   Resource *pRVar6;
   Object *pOVar7;
   byte bVar8;
   bVar8 = 0;
   this_00 = (Resource*)operator_new(0x670, "");
   pRVar6 = this_00;
   for (lVar4 = 0xce; lVar4 != 0; lVar4 = lVar4 + -1) {
      *(undefined8*)pRVar6 = 0;
      pRVar6 = pRVar6 + (ulong)bVar8 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   *(undefined***)this_00 = &PTR__initialize_classv_00107a78;
   *(undefined1(*) [16])( this_00 + 0x240 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x250 ) = (undefined1[16])0x0;
   Dictionary::Dictionary((Dictionary*)( this_00 + 0x260 ));
   uVar2 = _LC8;
   uVar1 = _LC6;
   *(undefined1(*) [16])( this_00 + 0x308 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x288 ) = uVar1;
   *(undefined2*)( this_00 + 0x294 ) = 1;
   *(undefined1(*) [16])( this_00 + 0x318 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x338 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x370 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 1000 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x3f8 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x268 ) = 0;
   *(undefined8*)( this_00 + 0x270 ) = 0;
   *(undefined8*)( this_00 + 0x280 ) = 0;
   *(undefined4*)( this_00 + 0x290 ) = 0;
   this_00[0x296] = (Resource)0x0;
   *(undefined4*)( this_00 + 0x298 ) = 1;
   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this_00 + ( 16*i + 680 ) ) = 0;
   }

   *(undefined8*)( this_00 + 0x328 ) = uVar2;
   *(undefined8*)( this_00 + 0x350 ) = 0;
   *(undefined8*)( this_00 + 0x360 ) = 0;
   *(undefined8*)( this_00 + 0x388 ) = 0;
   *(undefined8*)( this_00 + 0x398 ) = 0;
   *(undefined8*)( this_00 + 0x3a8 ) = 0;
   *(undefined8*)( this_00 + 0x3b8 ) = 0;
   *(undefined8*)( this_00 + 0x3c8 ) = 0;
   *(undefined8*)( this_00 + 0x3d8 ) = 0;
   *(undefined8*)( this_00 + 0x408 ) = 0;
   *(undefined8*)( this_00 + 0x410 ) = uVar2;
   *(undefined8*)( this_00 + 0x438 ) = uVar2;
   *(undefined8*)( this_00 + 0x448 ) = 0;
   *(undefined8*)( this_00 + 0x458 ) = 0;
   for (int i = 0; i < 5; i++) {
      *(undefined8*)( this_00 + ( 48*i + 1160 ) ) = uVar2;
   }

   *(undefined1(*) [16])( this_00 + 0x418 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x428 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x468 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x478 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x498 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x4a8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x4c8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x4d8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x4f8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x508 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x528 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x538 ) = (undefined1[16])0x0;
   Dictionary::Dictionary((Dictionary*)( this_00 + 0x550 ));
   *(undefined8*)( this_00 + 0x558 ) = 0;
   *(undefined***)this_00 = &PTR__initialize_classv_00107c50;
   this_00[0x560] = (Resource)0x0;
   *(undefined8*)( this_00 + 0x590 ) = uVar2;
   *(undefined8*)( this_00 + 0x5c0 ) = uVar2;
   *(undefined8*)( this_00 + 0x5d0 ) = 0;
   *(undefined8*)( this_00 + 0x5e0 ) = 0;
   *(undefined8*)( this_00 + 0x610 ) = uVar2;
   *(undefined8*)( this_00 + 0x640 ) = uVar2;
   *(undefined8*)( this_00 + 0x668 ) = uVar2;
   *(undefined1(*) [16])( this_00 + 0x570 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x580 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x5a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x5b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x5f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x600 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x620 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x630 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x648 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x658 ) = (undefined1[16])0x0;
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
      pOVar5 = pOVar7;
      if (this_00 == (Resource*)pOVar7) goto LAB_00102645;
      *(Resource**)this = this_00;
      cVar3 = RefCounted::reference();
      if (cVar3 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar5 = (Object*)this_00;
      if (( ( pOVar7 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) goto LAB_00102645;
   }

   ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
   Memory::free_static(pOVar7, false);
   pOVar5 = (Object*)this_00;
   if (this_00 == (Resource*)0x0) {
      return;
   }

   LAB_00102645:cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
      ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      Memory::free_static(pOVar5, false);
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* EditorSceneFormatImporterUFBX::_initialize_classv() */void EditorSceneFormatImporterUFBX::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
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
            if ((code*)PTR__bind_methods_0010b008 != RefCounted::_bind_methods) {
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
         local_58 = "EditorSceneFormatImporter";
         local_70 = 0;
         local_50 = 0x19;
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
         if ((code*)PTR__bind_methods_0010b010 != RefCounted::_bind_methods) {
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
      local_58 = "EditorSceneFormatImporterUFBX";
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00102c28) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, param_2);
   *param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Array::~Array(local_c0);
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* EditorSceneFormatImporterUFBX::get_class() const */void EditorSceneFormatImporterUFBX::get_class(void) {
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
/* FBXState::get_class() const */void FBXState::get_class(void) {
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

      if (cVar5 != '\0') goto LAB_001034bb;
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
         if (cVar5 != '\0') goto LAB_001034bb;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_001034bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

      if (cVar4 != '\0') goto LAB_001036bb;
   }

   cVar4 = String::operator ==(param_1, "Resource");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001036bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

      if (cVar4 != '\0') goto LAB_0010380b;
   }

   cVar4 = String::operator ==(param_1, "GLTFState");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010380b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorSceneFormatImporterUFBX::is_class(String const&) const */undefined8 EditorSceneFormatImporterUFBX::is_class(EditorSceneFormatImporterUFBX *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010395b;
   }

   cVar5 = String::operator ==(param_1, "EditorSceneFormatImporterUFBX");
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
         if (cVar5 != '\0') goto LAB_0010395b;
      }

      cVar5 = String::operator ==(param_1, "EditorSceneFormatImporter");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar6;
         }

         goto LAB_00103a5e;
      }

   }

   LAB_0010395b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00103a5e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      if ((code*)PTR__bind_methods_0010b018 != Object::_bind_methods) {
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
/* FBXState::_initialize_classv() */void FBXState::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
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
         if ((code*)_GLOBAL_OFFSET_TABLE_ != GLTFState::_bind_methods) {
            GLTFState::_bind_methods();
         }

         GLTFState::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "GLTFState";
      local_68 = 0;
      local_50 = 9;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "FBXState";
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
      if ((code*)PTR__bind_methods_0010b020 != GLTFState::_bind_methods) {
         FBXState::_bind_methods();
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
      if ((code*)PTR__bind_methods_0010b028 != Resource::_bind_methods) {
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
            if (pvVar3 == (void*)0x0) goto LAB_0010404f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010404f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* FBXState::is_class(String const&) const */undefined8 FBXState::is_class(FBXState *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_001041ab;
   }

   cVar5 = String::operator ==(param_1, "FBXState");
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
         if (cVar5 != '\0') goto LAB_001041ab;
      }

      cVar5 = String::operator ==(param_1, "GLTFState");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Resource::is_class((Resource*)this, param_1);
            return uVar6;
         }

         goto LAB_001042ae;
      }

   }

   LAB_001041ab:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001042ae:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0010441c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010441c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

         goto LAB_00104681;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00104681:local_b0 = (CowData<char32_t>*)&local_58;
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
/* GLTFState::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GLTFState::_get_property_listv(GLTFState *this, List *param_1, bool param_2) {
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
   local_78 = "GLTFState";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GLTFState";
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

         goto LAB_00104931;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00104931:local_b0 = (CowData<char32_t>*)&local_58;
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
/* FBXState::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void FBXState::_get_property_listv(FBXState *this, List *param_1, bool param_2) {
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
      GLTFState::_get_property_listv((GLTFState*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "FBXState";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "FBXState";
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

         goto LAB_00104be1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00104be1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "FBXState", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         GLTFState::_get_property_listv((GLTFState*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorSceneFormatImporter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void EditorSceneFormatImporter::_get_property_listv(EditorSceneFormatImporter *this, List *param_1, bool param_2) {
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
   local_78 = "EditorSceneFormatImporter";
   local_70 = 0x19;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorSceneFormatImporter";
   local_98 = 0;
   local_70 = 0x19;
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

         goto LAB_00104e91;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00104e91:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "EditorSceneFormatImporter", false);
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
/* EditorSceneFormatImporterUFBX::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void EditorSceneFormatImporterUFBX::_get_property_listv(EditorSceneFormatImporterUFBX *this, List *param_1, bool param_2) {
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
      EditorSceneFormatImporter::_get_property_listv((EditorSceneFormatImporter*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorSceneFormatImporterUFBX";
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorSceneFormatImporterUFBX";
   local_98 = 0;
   local_70 = 0x1d;
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

         goto LAB_00105141;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00105141:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "EditorSceneFormatImporterUFBX", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorSceneFormatImporter::_get_property_listv((EditorSceneFormatImporter*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_lookup_pos(StringName const&,
   unsigned int&) const */undefined8 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this, StringName *param_1, uint *param_2) {
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
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&)
   const */long HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this, StringName *param_1) {
   code *pcVar1;
   char cVar2;
   long in_FS_OFFSET;
   uint local_14;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_14 = 0;
   cVar2 = _lookup_pos(this, param_1, &local_14);
   if (cVar2 == '\0') {
      _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return *(long*)( *(long*)( this + 8 ) + (ulong)local_14 * 8 ) + 0x18;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */Variant * __thiscallHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2uint uVar3uint uVar4void *pvVar5void *__slong lVar6long lVar7undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]char cVar24uint uVar25uint uVar26ulong uVar27undefined8 uVar28void *__s_00undefined8 *puVar29void *pvVar30int iVar31long lVar32long lVar33ulong uVar34undefined8 uVar35uint uVar36uint uVar37ulong uVar38undefined8 *puVar39long in_FS_OFFSETVariant *local_e0uint local_a0uint local_9cint local_98[2]undefined1 local_90[16]undefined1 local_78[16]long local_68int local_60[8]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_a0 = 0;cVar24 = _lookup_pos(this, param_1, &local_a0);if (cVar24 != '\0') {
   local_e0 = (Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)local_a0 * 8 ) + 0x18 );
   goto LAB_001059f0;
}
local_90 = (undefined1[16])0x0;local_98[0] = 0;local_98[1] = 0;uVar26 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   uVar34 = (ulong)uVar26;
   uVar27 = uVar34 * 4;
   uVar38 = uVar34 * 8;
   uVar28 = Memory::alloc_static(uVar27, false);
   *(undefined8*)( this + 0x10 ) = uVar28;
   pvVar30 = (void*)Memory::alloc_static(uVar38, false);
   *(void**)( this + 8 ) = pvVar30;
   if (uVar26 != 0) {
      pvVar5 = *(void**)( this + 0x10 );
      if (( pvVar5 < (void*)( (long)pvVar30 + uVar38 ) ) && ( pvVar30 < (void*)( (long)pvVar5 + uVar27 ) )) {
         uVar27 = 0;
         do {
            *(undefined4*)( (long)pvVar5 + uVar27 * 4 ) = 0;
            *(undefined8*)( (long)pvVar30 + uVar27 * 8 ) = 0;
            uVar27 = uVar27 + 1;
         }
 while ( uVar34 != uVar27 );
      }
 else {
         memset(pvVar5, 0, uVar27);
         memset(pvVar30, 0, uVar38);
      }

   }

}
local_9c = 0;cVar24 = _lookup_pos(this, param_1, &local_9c);if (cVar24 == '\0') {
   if ((float)uVar26 * __LC28 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar26 = *(uint*)( this + 0x28 );
      if (uVar26 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_e0 = (Variant*)0x18;
         goto LAB_001059db;
      }

      uVar27 = ( ulong )(uVar26 + 1);
      uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar26 * 4 );
      *(undefined4*)( this + 0x2c ) = 0;
      if (uVar26 + 1 < 2) {
         uVar27 = 2;
      }

      uVar26 = *(uint*)( hash_table_size_primes + uVar27 * 4 );
      uVar34 = (ulong)uVar26;
      *(int*)( this + 0x28 ) = (int)uVar27;
      pvVar30 = *(void**)( this + 8 );
      uVar27 = uVar34 * 4;
      uVar38 = uVar34 * 8;
      pvVar5 = *(void**)( this + 0x10 );
      uVar28 = Memory::alloc_static(uVar27, false);
      *(undefined8*)( this + 0x10 ) = uVar28;
      __s_00 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar26 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar27 ) )) {
            uVar27 = 0;
            do {
               *(undefined4*)( (long)__s + uVar27 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar27 * 8 ) = 0;
               uVar27 = uVar27 + 1;
            }
 while ( uVar34 != uVar27 );
         }
 else {
            memset(__s, 0, uVar27);
            memset(__s_00, 0, uVar38);
         }

      }

      if (uVar3 != 0) {
         local_e0 = (Variant*)0x0;
         do {
            uVar26 = *(uint*)( (long)pvVar5 + (long)local_e0 * 4 );
            if (uVar26 != 0) {
               uVar36 = 0;
               lVar6 = *(long*)( this + 0x10 );
               uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar27 = CONCAT44(0, uVar4);
               lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar26 * lVar7;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar27;
               lVar32 = SUB168(auVar8 * auVar16, 8);
               puVar1 = (uint*)( lVar6 + lVar32 * 4 );
               iVar31 = SUB164(auVar8 * auVar16, 8);
               uVar37 = *puVar1;
               uVar28 = *(undefined8*)( (long)pvVar30 + (long)local_e0 * 8 );
               while (uVar37 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar37 * lVar7;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar27;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar4 + iVar31 ) - SUB164(auVar9 * auVar17, 8)) * lVar7;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar27;
                  uVar25 = SUB164(auVar10 * auVar18, 8);
                  uVar35 = uVar28;
                  if (uVar25 < uVar36) {
                     puVar29 = (undefined8*)( (long)__s_00 + lVar32 * 8 );
                     *puVar1 = uVar26;
                     uVar35 = *puVar29;
                     *puVar29 = uVar28;
                     uVar26 = uVar37;
                     uVar36 = uVar25;
                  }

                  uVar36 = uVar36 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar31 + 1) * lVar7;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar27;
                  lVar32 = SUB168(auVar11 * auVar19, 8);
                  puVar1 = (uint*)( lVar6 + lVar32 * 4 );
                  iVar31 = SUB164(auVar11 * auVar19, 8);
                  uVar28 = uVar35;
                  uVar37 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar32 * 8 ) = uVar28;
               *puVar1 = uVar26;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            local_e0 = (Variant*)( (long)local_e0 + 1 );
         }
 while ( (Variant*)(ulong)uVar3 != local_e0 );
         Memory::free_static(pvVar30, false);
         Memory::free_static(pvVar5, false);
      }

   }

   local_78 = (undefined1[16])0x0;
   StringName::StringName((StringName*)&local_68, param_1);
   Variant::Variant((Variant*)local_60, (Variant*)local_98);
   puVar29 = (undefined8*)operator_new(0x30, "");
   *puVar29 = local_78._0_8_;
   puVar29[1] = local_78._8_8_;
   StringName::StringName((StringName*)( puVar29 + 2 ), (StringName*)&local_68);
   local_e0 = (Variant*)( puVar29 + 3 );
   Variant::Variant(local_e0, (Variant*)local_60);
   if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   if (*(undefined8**)( this + 0x20 ) == (undefined8*)0x0) {
      *(undefined8**)( this + 0x18 ) = puVar29;
   }
 else {
      **(undefined8**)( this + 0x20 ) = puVar29;
      puVar29[1] = *(undefined8*)( this + 0x20 );
   }

   *(undefined8**)( this + 0x20 ) = puVar29;
   if (*(long*)param_1 == 0) {
      uVar26 = StringName::get_empty_hash();
   }
 else {
      uVar26 = *(uint*)( *(long*)param_1 + 0x20 );
   }

   if (uVar26 == 0) {
      uVar26 = 1;
   }

   uVar27 = (ulong)uVar26;
   uVar37 = 0;
   lVar6 = *(long*)( this + 0x10 );
   lVar7 = *(long*)( this + 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar38 = CONCAT44(0, uVar3);
   lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar27 * lVar32;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar38;
   lVar33 = SUB168(auVar12 * auVar20, 8);
   puVar1 = (uint*)( lVar6 + lVar33 * 4 );
   iVar31 = SUB164(auVar12 * auVar20, 8);
   uVar4 = *puVar1;
   while (uVar4 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar4 * lVar32;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar38;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar3 + iVar31 ) - SUB164(auVar13 * auVar21, 8)) * lVar32;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar38;
      uVar26 = SUB164(auVar14 * auVar22, 8);
      puVar39 = puVar29;
      if (uVar26 < uVar37) {
         puVar2 = (undefined8*)( lVar7 + lVar33 * 8 );
         *puVar1 = (uint)uVar27;
         uVar27 = (ulong)uVar4;
         puVar39 = (undefined8*)*puVar2;
         *puVar2 = puVar29;
         uVar37 = uVar26;
      }

      uVar26 = (uint)uVar27;
      uVar37 = uVar37 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar31 + 1) * lVar32;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar38;
      lVar33 = SUB168(auVar15 * auVar23, 8);
      puVar1 = (uint*)( lVar6 + lVar33 * 4 );
      iVar31 = SUB164(auVar15 * auVar23, 8);
      puVar29 = puVar39;
      uVar4 = *puVar1;
   }
;
   *(undefined8**)( lVar7 + lVar33 * 8 ) = puVar29;
   *puVar1 = uVar26;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
}
 else {
   uVar27 = (ulong)local_9c;
   Variant::operator =((Variant*)( *(long*)( *(long*)( this + 8 ) + uVar27 * 8 ) + 0x18 ), (Variant*)local_98);
   local_e0 = (Variant*)( *(long*)( *(long*)( this + 8 ) + uVar27 * 8 ) + 0x18 );
}
LAB_001059db:if (Variant::needs_deinit[local_98[0]] != '\0') {
   Variant::_clear_internal();
}
LAB_001059f0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_e0;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorSceneFormatImporterUFBX::import_scene(String const&, unsigned int, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, Error*) [clone .cold] */void EditorSceneFormatImporterUFBX::import_scene(String *param_1, uint param_2, HashMap *param_3, List *param_4, Error *param_5) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* HashMap<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > >,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > > > >
   >::~HashMap() */void HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>::~HashMap(HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement<ObjectID,int>>>>> > *this) {
   uint uVar1;
   uint uVar2;
   int *piVar3;
   long lVar4;
   void *pvVar5;
   void *pvVar6;
   long lVar7;
   pvVar6 = *(void**)( this + 8 );
   if (pvVar6 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar7 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar7 ) != 0) {
               pvVar6 = *(void**)( (long)pvVar6 + lVar7 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar7 ) = 0;
               pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
               if (pvVar5 != (void*)0x0) {
                  if (*(int*)( (long)pvVar6 + 0x44 ) != 0) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar6 + 0x40 ) * 4 );
                     if (uVar2 == 0) {
                        *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar4 = 0;
                        do {
                           piVar3 = (int*)( *(long*)( (long)pvVar6 + 0x28 ) + lVar4 );
                           if (*piVar3 != 0) {
                              *piVar3 = 0;
                              Memory::free_static(*(void**)( (long)pvVar5 + lVar4 * 2 ), false);
                              pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
                              *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
                           }

                           lVar4 = lVar4 + 4;
                        }
 while ( lVar4 != (ulong)uVar2 * 4 );
                        *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                        if (pvVar5 == (void*)0x0) goto LAB_00105ceb;
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  Memory::free_static(*(void**)( (long)pvVar6 + 0x28 ), false);
               }

               LAB_00105ceb:Memory::free_static(pvVar6, false);
               pvVar6 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar6 + lVar7 * 2 ) = 0;
            }

            lVar7 = lVar7 + 4;
         }
 while ( lVar7 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar6 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar6, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
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
      LAB_00105eed:do {
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
                  goto LAB_00105eed;
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
/* CowData<Ref<GLTFBufferView> >::_unref() */void CowData<Ref<GLTFBufferView>>::_unref(CowData<Ref<GLTFBufferView>> *this) {
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
      LAB_00105fcd:do {
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
                  goto LAB_00105fcd;
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
/* CowData<Ref<Texture2D> >::_unref() */void CowData<Ref<Texture2D>>::_unref(CowData<Ref<Texture2D>> *this) {
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
      LAB_001060ad:do {
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
                  goto LAB_001060ad;
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
      LAB_0010618d:do {
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
                  goto LAB_0010618d;
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
   long *plVar2;
   uint uVar3;
   Object *pOVar4;
   long lVar5;
   code *pcVar6;
   char cVar7;
   long lVar8;
   long *plVar9;
   long lVar10;
   void *pvVar11;
   long lVar12;
   long lVar13;
   *(undefined***)this = &PTR__initialize_classv_00107a78;
   Dictionary::~Dictionary((Dictionary*)( this + 0x550 ));
   HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>::~HashMap((HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>*)( this + 0x520 ));
   pvVar11 = *(void**)( this + 0x4f8 );
   if (pvVar11 != (void*)0x0) {
      if (*(int*)( this + 0x51c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x518 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x51c ) = 0;
            *(undefined1(*) [16])( this + 0x508 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x500 ) + lVar8 ) != 0) {
                  *(int*)( *(long*)( this + 0x500 ) + lVar8 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar11 + lVar8 * 2 ), false);
                  pvVar11 = *(void**)( this + 0x4f8 );
                  *(undefined8*)( (long)pvVar11 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x51c ) = 0;
            *(undefined1(*) [16])( this + 0x508 ) = (undefined1[16])0x0;
            if (pvVar11 == (void*)0x0) goto LAB_001062e7;
         }

      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x500 ), false);
   }

   LAB_001062e7:pvVar11 = *(void**)( this + 0x4c8 );
   if (pvVar11 != (void*)0x0) {
      if (*(int*)( this + 0x4ec ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4e8 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x4ec ) = 0;
            *(undefined1(*) [16])( this + 0x4d8 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x4d0 ) + lVar8 ) != 0) {
                  pvVar11 = *(void**)( (long)pvVar11 + lVar8 * 2 );
                  *(int*)( *(long*)( this + 0x4d0 ) + lVar8 ) = 0;
                  if (( *(long*)( (long)pvVar11 + 0x18 ) != 0 ) && ( cVar7 = cVar7 != '\0' )) {
                     pOVar4 = *(Object**)( (long)pvVar11 + 0x18 );
                     cVar7 = predelete_handler(pOVar4);
                     if (cVar7 != '\0') {
                        ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                        Memory::free_static(pOVar4, false);
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar11 + 0x10 ));
                  Memory::free_static(pvVar11, false);
                  pvVar11 = *(void**)( this + 0x4c8 );
                  *(undefined8*)( (long)pvVar11 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x4ec ) = 0;
            *(undefined1(*) [16])( this + 0x4d8 ) = (undefined1[16])0x0;
            if (pvVar11 == (void*)0x0) goto LAB_001063aa;
         }

      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x4d0 ), false);
   }

   LAB_001063aa:pvVar11 = *(void**)( this + 0x498 );
   if (pvVar11 != (void*)0x0) {
      if (*(int*)( this + 0x4bc ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4b8 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x4bc ) = 0;
            *(undefined1(*) [16])( this + 0x4a8 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x4a0 ) + lVar8 ) != 0) {
                  *(int*)( *(long*)( this + 0x4a0 ) + lVar8 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar11 + lVar8 * 2 ), false);
                  pvVar11 = *(void**)( this + 0x498 );
                  *(undefined8*)( (long)pvVar11 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x4bc ) = 0;
            *(undefined1(*) [16])( this + 0x4a8 ) = (undefined1[16])0x0;
            if (pvVar11 == (void*)0x0) goto LAB_00106449;
         }

      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x4a0 ), false);
   }

   LAB_00106449:pvVar11 = *(void**)( this + 0x468 );
   if (pvVar11 != (void*)0x0) {
      if (*(int*)( this + 0x48c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x488 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x48c ) = 0;
            *(undefined1(*) [16])( this + 0x478 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x470 ) + lVar8 ) != 0) {
                  *(int*)( *(long*)( this + 0x470 ) + lVar8 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar11 + lVar8 * 2 ), false);
                  pvVar11 = *(void**)( this + 0x468 );
                  *(undefined8*)( (long)pvVar11 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x48c ) = 0;
            *(undefined1(*) [16])( this + 0x478 ) = (undefined1[16])0x0;
            if (pvVar11 == (void*)0x0) goto LAB_001064e9;
         }

      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x470 ), false);
   }

   LAB_001064e9:if (*(long*)( this + 0x458 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x458 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x458 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x458 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_00106538:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_00106590;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_00106538;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_00106590:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x448 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x448 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x448 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x448 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_001065e8:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_00106640;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_001065e8;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_00106640:Memory::free_static(plVar1 + -2, false);
      }

   }

   pvVar11 = *(void**)( this + 0x418 );
   if (pvVar11 != (void*)0x0) {
      if (( *(int*)( this + 0x43c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x438 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x430 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x438 ) * 4 ) << 2),*(int*)( this + 0x43c ) != 0 ) ) )) {
         lVar8 = 0;
         do {
            lVar12 = lVar8 * 8;
            lVar8 = lVar8 + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar11 + lVar12 ));
            pvVar11 = *(void**)( this + 0x418 );
         }
 while ( (uint)lVar8 < *(uint*)( this + 0x43c ) );
         *(undefined4*)( this + 0x43c ) = 0;
         if (pvVar11 == (void*)0x0) goto LAB_001066cf;
      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x428 ), false);
      Memory::free_static(*(void**)( this + 0x420 ), false);
      Memory::free_static(*(void**)( this + 0x430 ), false);
   }

   LAB_001066cf:pvVar11 = *(void**)( this + 0x3f0 );
   if (pvVar11 != (void*)0x0) {
      if (( *(int*)( this + 0x414 ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x410 ) * 4 ) == 0 || ( memset(*(void**)( this + 0x408 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x410 ) * 4 ) << 2),*(int*)( this + 0x414 ) != 0 ) ) )) {
         lVar8 = 0;
         do {
            lVar12 = lVar8 * 8;
            lVar8 = lVar8 + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar11 + lVar12 ));
            pvVar11 = *(void**)( this + 0x3f0 );
         }
 while ( (uint)lVar8 < *(uint*)( this + 0x414 ) );
         *(undefined4*)( this + 0x414 ) = 0;
         if (pvVar11 == (void*)0x0) goto LAB_0010674f;
      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x400 ), false);
      Memory::free_static(*(void**)( this + 0x3f8 ), false);
      Memory::free_static(*(void**)( this + 0x408 ), false);
   }

   LAB_0010674f:if (*(long*)( this + 1000 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 1000 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 1000 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 1000 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_001067a0:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_001067f8;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_001067a0;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_001067f8:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x3d8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x3d8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x3d8 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x3d8 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_00106850:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_001068a8;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_00106850;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_001068a8:Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<Ref<GLTFSkin>>::_unref((CowData<Ref<GLTFSkin>>*)( this + 0x3c8 ));
   if (*(long*)( this + 0x3b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x3b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x3b8 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x3b8 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_00106910:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_001069a0;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_00106910;
               if (*(code**)( *(long*)pOVar4 + 0x140 ) == Image::~Image) {
                  *(code**)pOVar4 = Memory::free_static;
                  if (*(long*)( pOVar4 + 0x250 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( pOVar4 + 0x250 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar10 = *(long*)( pOVar4 + 0x250 );
                        *(undefined8*)( pOVar4 + 0x250 ) = 0;
                        Memory::free_static((void*)( lVar10 + -0x10 ), false);
                     }

                  }

                  Resource::~Resource((Resource*)pOVar4);
               }
 else {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               }

               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_001069a0:Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<String>::_unref((CowData<String>*)( this + 0x3a8 ));
   CowData<String>::_unref((CowData<String>*)( this + 0x398 ));
   CowData<Ref<Texture2D>>::_unref((CowData<Ref<Texture2D>>*)( this + 0x388 ));
   if (( *(long*)( this + 0x378 ) != 0 ) && ( cVar7 = cVar7 != '\0' )) {
      pOVar4 = *(Object**)( this + 0x378 );
      cVar7 = predelete_handler(pOVar4);
      if (cVar7 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   if (*(long*)( this + 0x370 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x370 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x370 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x370 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_00106a30:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_00106a88;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_00106a30;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_00106a88:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x360 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x360 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x360 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x360 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_00106ae0:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_00106b38;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_00106ae0;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_00106b38:Memory::free_static(plVar1 + -2, false);
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
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x338 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_00106ba8:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_00106c00;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_00106ba8;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_00106c00:Memory::free_static(plVar1 + -2, false);
      }

   }

   pvVar11 = *(void**)( this + 0x308 );
   if (pvVar11 != (void*)0x0) {
      if (*(int*)( this + 0x32c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x328 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x32c ) = 0;
            *(undefined1(*) [16])( this + 0x318 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x310 ) + lVar8 ) != 0) {
                  pvVar11 = *(void**)( (long)pvVar11 + lVar8 * 2 );
                  *(int*)( *(long*)( this + 0x310 ) + lVar8 ) = 0;
                  if (( *(long*)( (long)pvVar11 + 0x10 ) != 0 ) && ( cVar7 = cVar7 != '\0' )) {
                     pOVar4 = *(Object**)( (long)pvVar11 + 0x10 );
                     cVar7 = predelete_handler(pOVar4);
                     if (cVar7 != '\0') {
                        ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                        Memory::free_static(pOVar4, false);
                     }

                  }

                  Memory::free_static(pvVar11, false);
                  pvVar11 = *(void**)( this + 0x308 );
                  *(undefined8*)( (long)pvVar11 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar8 );
            *(undefined4*)( this + 0x32c ) = 0;
            *(undefined1(*) [16])( this + 0x318 ) = (undefined1[16])0x0;
            if (pvVar11 == (void*)0x0) goto LAB_00106cc5;
         }

      }

      Memory::free_static(pvVar11, false);
      Memory::free_static(*(void**)( this + 0x310 ), false);
   }

   LAB_00106cc5:if (*(long*)( this + 0x2f8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2f8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar8 = *(long*)( this + 0x2f8 );
         *(undefined8*)( this + 0x2f8 ) = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x2e8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2e8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x2e8 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x2e8 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_00106d28:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_00106d80;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_00106d28;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_00106d80:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x2d8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2d8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x2d8 );
         if (plVar1 == (long*)0x0) goto LAB_0010720a;
         lVar8 = plVar1[-1];
         lVar12 = 0;
         *(undefined8*)( this + 0x2d8 ) = 0;
         plVar9 = plVar1;
         if (lVar8 != 0) {
            do {
               while (( *plVar9 == 0 || ( cVar7 = RefCounted::unreference() ),cVar7 == '\0' )) {
                  LAB_00106dd8:lVar12 = lVar12 + 1;
                  plVar9 = plVar9 + 1;
                  if (lVar8 == lVar12) goto LAB_00106e30;
               }
;
               pOVar4 = (Object*)*plVar9;
               cVar7 = predelete_handler(pOVar4);
               if (cVar7 == '\0') goto LAB_00106dd8;
               lVar12 = lVar12 + 1;
               plVar9 = plVar9 + 1;
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }
 while ( lVar8 != lVar12 );
         }

         LAB_00106e30:Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<Ref<GLTFBufferView>>::_unref((CowData<Ref<GLTFBufferView>>*)( this + 0x2c8 ));
   if (*(long*)( this + 0x2b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar8 = *(long*)( this + 0x2b8 );
         if (lVar8 == 0) {
            LAB_0010720a:/* WARNING: Does not return */pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         lVar12 = *(long*)( lVar8 + -8 );
         lVar13 = 0;
         *(undefined8*)( this + 0x2b8 ) = 0;
         lVar10 = lVar8;
         if (lVar12 != 0) {
            do {
               if (*(long*)( lVar10 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar10 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar5 = *(long*)( lVar10 + 8 );
                     *(undefined8*)( lVar10 + 8 ) = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               lVar13 = lVar13 + 1;
               lVar10 = lVar10 + 0x10;
            }
 while ( lVar12 != lVar13 );
         }

         Memory::free_static((void*)( lVar8 + -0x10 ), false);
      }

   }

   CowData<Ref<GLTFNode>>::_unref((CowData<Ref<GLTFNode>>*)( this + 0x2a8 ));
   if (*(long*)( this + 0x280 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x280 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar8 = *(long*)( this + 0x280 );
         *(undefined8*)( this + 0x280 ) = 0;
         Memory::free_static((void*)( lVar8 + -0x10 ), false);
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
/* FBXState::~FBXState() */void FBXState::~FBXState(FBXState *this) {
   uint uVar1;
   uint uVar2;
   int *piVar3;
   long lVar4;
   long lVar5;
   void *pvVar6;
   void *pvVar7;
   pvVar7 = *(void**)( this + 0x648 );
   *(undefined***)this = &PTR__initialize_classv_00107c50;
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x66c ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x668 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x660 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x668 ) * 4 ) * 4);
            if (*(int*)( this + 0x66c ) == 0) goto LAB_00107670;
         }

         lVar4 = 0;
         do {
            lVar5 = lVar4 * 8;
            lVar4 = lVar4 + 1;
            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar7 + lVar5 ));
            pvVar7 = *(void**)( this + 0x648 );
         }
 while ( (uint)lVar4 < *(uint*)( this + 0x66c ) );
         *(undefined4*)( this + 0x66c ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_001072ef;
      }

      LAB_00107670:Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x658 ), false);
      Memory::free_static(*(void**)( this + 0x650 ), false);
      Memory::free_static(*(void**)( this + 0x660 ), false);
   }

   LAB_001072ef:pvVar7 = *(void**)( this + 0x620 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x644 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x640 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x644 ) = 0;
            *(undefined1(*) [16])( this + 0x630 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x628 ) + lVar4 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x628 ) + lVar4 ) = 0;
                  pvVar6 = *(void**)( (long)pvVar7 + 0x20 );
                  if (pvVar6 != (void*)0x0) {
                     if (*(int*)( (long)pvVar7 + 0x44 ) != 0) {
                        uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar7 + 0x40 ) * 4 );
                        if (uVar2 == 0) {
                           *(undefined4*)( (long)pvVar7 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar7 + 0x30 ) = (undefined1[16])0x0;
                        }
 else {
                           lVar5 = 0;
                           do {
                              piVar3 = (int*)( *(long*)( (long)pvVar7 + 0x28 ) + lVar5 );
                              if (*piVar3 != 0) {
                                 *piVar3 = 0;
                                 Memory::free_static(*(void**)( (long)pvVar6 + lVar5 * 2 ), false);
                                 pvVar6 = *(void**)( (long)pvVar7 + 0x20 );
                                 *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
                              }

                              lVar5 = lVar5 + 4;
                           }
 while ( (ulong)uVar2 << 2 != lVar5 );
                           *(undefined4*)( (long)pvVar7 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar7 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar6 == (void*)0x0) goto LAB_001073df;
                        }

                     }

                     Memory::free_static(pvVar6, false);
                     Memory::free_static(*(void**)( (long)pvVar7 + 0x28 ), false);
                  }

                  LAB_001073df:Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x620 );
                  *(undefined8*)( (long)pvVar7 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x644 ) = 0;
            *(undefined1(*) [16])( this + 0x630 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00107428;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x628 ), false);
   }

   LAB_00107428:pvVar7 = *(void**)( this + 0x5f0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x614 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x610 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x614 ) = 0;
            *(undefined1(*) [16])( this + 0x600 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x5f8 ) + lVar4 ) != 0) {
                  *(int*)( *(long*)( this + 0x5f8 ) + lVar4 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar7 + lVar4 * 2 ), false);
                  pvVar7 = *(void**)( this + 0x5f0 );
                  *(undefined8*)( (long)pvVar7 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar4 );
            *(undefined4*)( this + 0x614 ) = 0;
            *(undefined1(*) [16])( this + 0x600 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_001074c9;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x5f8 ), false);
   }

   LAB_001074c9:CowData<int>::_unref((CowData<int>*)( this + 0x5e0 ));
   CowData<int>::_unref((CowData<int>*)( this + 0x5d0 ));
   pvVar7 = *(void**)( this + 0x5a0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x5c4 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x5c0 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x5c4 ) = 0;
            *(undefined1(*) [16])( this + 0x5b0 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x5a8 ) + lVar4 ) != 0) {
                  *(int*)( *(long*)( this + 0x5a8 ) + lVar4 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar7 + lVar4 * 2 ), false);
                  pvVar7 = *(void**)( this + 0x5a0 );
                  *(undefined8*)( (long)pvVar7 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x5c4 ) = 0;
            *(undefined1(*) [16])( this + 0x5b0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0010757f;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x5a8 ), false);
   }

   LAB_0010757f:pvVar7 = *(void**)( this + 0x570 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x594 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x590 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x594 ) = 0;
            *(undefined1(*) [16])( this + 0x580 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x578 ) + lVar4 ) != 0) {
                  *(int*)( *(long*)( this + 0x578 ) + lVar4 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar7 + lVar4 * 2 ), false);
                  pvVar7 = *(void**)( this + 0x570 );
                  *(undefined8*)( (long)pvVar7 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar4 );
            *(undefined4*)( this + 0x594 ) = 0;
            *(undefined1(*) [16])( this + 0x580 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00107613;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x578 ), false);
   }

   LAB_00107613:ufbx_free_scene(*(undefined8*)( this + 0x558 ));
   GLTFState::~GLTFState((GLTFState*)this);
   return;
}
/* FBXState::~FBXState() */void FBXState::~FBXState(FBXState *this) {
   ~FBXState(this)
   ;;
   operator_delete(this, 0x670);
   return;
}
/* EditorSceneFormatImporterUFBX::get_extensions(List<String, DefaultAllocator>*) const */void EditorSceneFormatImporterUFBX::_GLOBAL__sub_I_get_extensions(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* FBXState::~FBXState() */void FBXState::~FBXState(FBXState *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GLTFState::~GLTFState() */void GLTFState::~GLTFState(GLTFState *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > >,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, HashMap<ObjectID, int, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID, int> > > > >
   >::~HashMap() */void HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>>>>::~HashMap(HashMap<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,int>>>,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,HashMap<ObjectID,int,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator < HashMapElement<ObjectID,int>>>>> > *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorSceneFormatImporterUFBX::~EditorSceneFormatImporterUFBX() */void EditorSceneFormatImporterUFBX::~EditorSceneFormatImporterUFBX(EditorSceneFormatImporterUFBX *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


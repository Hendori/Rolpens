/* EditorSceneFormatImporterGLTF::get_option_visibility(String const&, String const&, String const&,
   HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&) */String *EditorSceneFormatImporterGLTF::get_option_visibility(String *param_1, String *param_2, String *param_3, HashMap *param_4) {
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
/* EditorSceneFormatImporterGLTF::get_extensions(List<String, DefaultAllocator>*) const */void EditorSceneFormatImporterGLTF::get_extensions(EditorSceneFormatImporterGLTF *this, List *param_1) {
   long *plVar1;
   long lVar2;
   CowData<char32_t> *pCVar3;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_40 = 4;
   local_48 = &_LC11;
   String::parse_latin1((StrRange*)&local_50);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pCVar3 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar3 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar3 + 0x10 ) = (undefined1[16])0x0;
   CowData<char32_t>::_ref(pCVar3, (CowData*)&local_50);
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( pCVar3 + 8 ) = 0;
   *(long**)( pCVar3 + 0x18 ) = plVar1;
   *(long*)( pCVar3 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar3;
   }

   plVar1[1] = (long)pCVar3;
   if (*plVar1 == 0) {
      *plVar1 = (long)pCVar3;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   local_50 = 0;
   local_48 = &_LC12;
   local_40 = 3;
   String::parse_latin1((StrRange*)&local_50);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   pCVar3 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar3 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar3 + 0x10 ) = (undefined1[16])0x0;
   CowData<char32_t>::_ref(pCVar3, (CowData*)&local_50);
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( pCVar3 + 8 ) = 0;
   *(long**)( pCVar3 + 0x18 ) = plVar1;
   *(long*)( pCVar3 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = pCVar3;
   }

   plVar1[1] = (long)pCVar3;
   if (*plVar1 == 0) {
      *plVar1 = (long)pCVar3;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorSceneFormatImporterGLTF::get_import_options(String const&,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */void EditorSceneFormatImporterGLTF::get_import_options(EditorSceneFormatImporterGLTF *this, String *param_1, List *param_2) {
   undefined8 uVar1;
   long *plVar2;
   char cVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   long in_FS_OFFSET;
   String local_f8[8];
   undefined8 local_f0;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   undefined8 local_d0;
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
   String::get_extension();
   String::to_lower();
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (( ( ( *(long*)param_1 == 0 ) || ( *(uint*)( *(long*)param_1 + -8 ) < 2 ) ) || ( cVar3 = String::operator ==(local_f8, "gltf") ),cVar3 != '\0' )) {
      Variant::Variant((Variant*)local_a8, 1);
      local_d8 = "Godot 4.1 or 4.0,Godot 4.2 or later";
      local_e0 = 0;
      local_e8 = 0;
      local_d0 = 0x23;
      String::parse_latin1((StrRange*)&local_e8);
      local_f0 = 0;
      local_d8 = "gltf/naming_version";
      local_d0 = 0x13;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_d8, 2, (StrRange*)&local_f0, 2, (StrRange*)&local_e8, 6, &local_e0);
      local_80 = 0;
      local_88[0] = local_d8._0_4_;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
      StringName::StringName(local_78, local_c8);
      local_68 = 0;
      local_70 = local_c0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, local_b8);
      local_60 = local_b0;
      Variant::Variant((Variant*)local_58, (Variant*)local_a8);
      if (*(long*)param_2 == 0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_2 = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      puVar4 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar4 + 0xe ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar4 + 0x12 ) = (undefined1[16])0x0;
      *puVar4 = 0;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 6;
      puVar4[0xc] = 0;
      *(undefined8*)( puVar4 + 0x16 ) = 0;
      *puVar4 = local_88[0];
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_80);
      StringName::operator =((StringName*)( puVar4 + 4 ), local_78);
      puVar4[6] = local_70;
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_68);
      puVar4[10] = local_60;
      Variant::operator =((Variant*)( puVar4 + 0xc ), (Variant*)local_58);
      uVar1 = *(undefined8*)( *(long*)param_2 + 8 );
      *(long*)( puVar4 + 0x16 ) = *(long*)param_2;
      plVar2 = *(long**)param_2;
      *(undefined8*)( puVar4 + 0x12 ) = 0;
      *(undefined8*)( puVar4 + 0x14 ) = uVar1;
      if (plVar2[1] != 0) {
         *(undefined4**)( plVar2[1] + 0x48 ) = puVar4;
      }

      plVar2[1] = (long)puVar4;
      if (*plVar2 == 0) {
         *plVar2 = (long)puVar4;
      }

      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      PropertyInfo::~PropertyInfo((PropertyInfo*)local_88);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_a8, 1);
      local_d8 = "Discard All Textures,Extract Textures,Embed as Basis Universal,Embed as Uncompressed";
      local_e0 = 0;
      local_e8 = 0;
      local_d0 = 0x54;
      String::parse_latin1((StrRange*)&local_e8);
      local_f0 = 0;
      local_d8 = "gltf/embedded_image_handling";
      local_d0 = 0x1c;
      String::parse_latin1((StrRange*)&local_f0);
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_d8, 2, (StrRange*)&local_f0, 2, (StrRange*)&local_e8, 0x4006, &local_e0);
      local_80 = 0;
      local_88[0] = local_d8._0_4_;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
      StringName::StringName(local_78, local_c8);
      local_68 = 0;
      local_70 = local_c0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, local_b8);
      local_60 = local_b0;
      Variant::Variant((Variant*)local_58, (Variant*)local_a8);
      if (*(long*)param_2 == 0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_2 = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      puVar4 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar4 + 0xe ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( puVar4 + 0x12 ) = (undefined1[16])0x0;
      *puVar4 = 0;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 6;
      puVar4[0xc] = 0;
      *(undefined8*)( puVar4 + 0x16 ) = 0;
      *puVar4 = local_88[0];
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_80);
      StringName::operator =((StringName*)( puVar4 + 4 ), local_78);
      puVar4[6] = local_70;
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_68);
      puVar4[10] = local_60;
      Variant::operator =((Variant*)( puVar4 + 0xc ), (Variant*)local_58);
      uVar1 = *(undefined8*)( *(long*)param_2 + 8 );
      *(long*)( puVar4 + 0x16 ) = *(long*)param_2;
      plVar2 = *(long**)param_2;
      *(undefined8*)( puVar4 + 0x12 ) = 0;
      *(undefined8*)( puVar4 + 0x14 ) = uVar1;
      if (plVar2[1] != 0) {
         *(undefined4**)( plVar2[1] + 0x48 ) = puVar4;
      }

      plVar2[1] = (long)puVar4;
      if (*plVar2 == 0) {
         *plVar2 = (long)puVar4;
      }

      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      PropertyInfo::~PropertyInfo((PropertyInfo*)local_88);
      PropertyInfo::~PropertyInfo((PropertyInfo*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
         StringName::unref();
      }

      if (Variant::needs_deinit[local_a8[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* EditorSceneFormatImporterGLTF::handle_compatibility_options(HashMap<StringName, Variant,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >&) const */void EditorSceneFormatImporterGLTF::handle_compatibility_options(EditorSceneFormatImporterGLTF *this, HashMap *param_1) {
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
   StringName::StringName((StringName*)&local_50, "gltf/naming_version", false);
   local_54 = 0;
   cVar1 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_1, (StringName*)&local_50, &local_54);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (cVar1 == '\0') {
      Variant::Variant((Variant*)local_48, 0);
      StringName::StringName((StringName*)&local_50, "gltf/naming_version", false);
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
/* EditorSceneFormatImporterGLTF::import_scene(String const&, unsigned int, HashMap<StringName,
   Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > > const&, List<String,
   DefaultAllocator>*, Error*) */undefined8 EditorSceneFormatImporterGLTF::import_scene(EditorSceneFormatImporterGLTF *this, String *param_1, uint param_2, HashMap *param_3, List *param_4, Error *param_5) {
   String *pSVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   Resource *this_00;
   undefined8 uVar5;
   Variant *pVVar6;
   long lVar7;
   Resource *pRVar8;
   code *pcVar9;
   Resource *pRVar10;
   long in_FS_OFFSET;
   bool bVar11;
   byte bVar12;
   double dVar13;
   code *local_78;
   String *local_60;
   undefined8 local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   bVar12 = 0;
   pRVar10 = (Resource*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (Resource*)operator_new(0x278, "");
   pRVar8 = this_00;
   for (lVar7 = 0x4f; lVar7 != 0; lVar7 = lVar7 + -1) {
      *(undefined8*)pRVar8 = 0;
      pRVar8 = pRVar8 + (ulong)bVar12 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   *(undefined8*)( this_00 + 0x248 ) = 0;
   *(code**)this_00 = Variant::operator_cast_to_int;
   *(undefined8*)( this_00 + 0x240 ) = _LC26;
   String::parse_latin1((String*)( this_00 + 0x248 ), "PNG");
   *(undefined4*)( this_00 + 0x250 ) = 0x3f400000;
   *(undefined8*)( this_00 + 600 ) = 0;
   *(undefined4*)( this_00 + 0x260 ) = 0;
   *(undefined8*)( this_00 + 0x270 ) = 0;
   postinitialize_handler((Object*)this_00);
   cVar3 = RefCounted::init_ref();
   if (cVar3 != '\0') {
      cVar3 = RefCounted::reference();
      if (cVar3 != '\0') {
         pRVar10 = this_00;
      }

      cVar3 = RefCounted::unreference();
      if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)this_00) ),cVar3 != '\0') {
         ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
         Memory::free_static(this_00, false);
      }

   }

   local_60 = (String*)0x0;
   Ref<GLTFState>::instantiate<>((Ref<GLTFState>*)&local_60);
   StringName::StringName((StringName*)&local_48, "gltf/naming_version", false);
   local_50 = (String*)( (ulong)local_50._4_4_ << 0x20 );
   cVar3 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_48, (uint*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != (String*)0x0 )) {
      StringName::unref();
   }

   if (cVar3 != '\0') {
      StringName::StringName((StringName*)&local_48, "gltf/naming_version", false);
      pVVar6 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_48);
      Variant::operator_cast_to_int(pVVar6);
      if (( StringName::configured != '\0' ) && ( local_48 != (String*)0x0 )) {
         StringName::unref();
      }

      GLTFDocument::set_naming_version((int)pRVar10);
   }

   StringName::StringName((StringName*)&local_48, "gltf/embedded_image_handling", false);
   local_50 = (String*)( (ulong)local_50 & 0xffffffff00000000 );
   cVar3 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_48, (uint*)&local_50);
   if (( StringName::configured != '\0' ) && ( local_48 != (String*)0x0 )) {
      StringName::unref();
   }

   if (cVar3 != '\0') {
      StringName::StringName((StringName*)&local_48, "gltf/embedded_image_handling", false);
      pVVar6 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_48);
      iVar4 = Variant::operator_cast_to_int(pVVar6);
      if (( StringName::configured != '\0' ) && ( local_48 != (String*)0x0 )) {
         StringName::unref();
      }

      *(int*)( local_60 + 0x298 ) = iVar4;
   }

   if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
       ::{lambda()
   #1
   (iVar4 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
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
local_48 = (String*)( (ulong)local_48._4_4_ << 0x20 );cVar3 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
          ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                         *)param_3,
                        (StringName *)
                        &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                         ::{lambda()#1if (cVar3 != '\0') {
   if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
         ::{lambda()
   #2
   (iVar4 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
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
pVVar6 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&import_scene(String_const & unsigned_int, HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement < StringName,Variant>> > const, &, List<String,DefaultAllocator>, *, Error * ::operator ()(), ::sname));bVar11 = Variant::operator_cast_to_bool(pVVar6);if (bVar11) {
   GLTFState::set_import_as_skeleton_bones(SUB81(local_60, 0));
}
}
  if ((import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
       ::{lambda()#3(iVar4 = __cxa_guard_acquire(&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                                   ::{lambda()#3_scs_create((char *)&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                         ::{lambda()#3__cxa_atexit(StringName::~StringName,
                 &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                  ::{lambda()#3__cxa_guard_release (&import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                         ::{lambda()#3}local_48 = (String*)( (ulong)local_48 & 0xffffffff00000000 );cVar3 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
          ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                         *)param_3,
                        (StringName *)
                        &import_scene(String_const&,unsigned_int,HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>const&,List<String,DefaultAllocator>*,Error*)
                         ::{lambda()#3pSVar1 = local_60;if (cVar3 != '\0') {
   StringName::StringName((StringName*)&local_50, "extract_path", false);
   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_50);
   Variant::operator_cast_to_String((Variant*)&local_48);
   GLTFState::set_extract_path(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_50 != (String*)0x0 )) {
      StringName::unref();
   }

}
StringName::StringName((StringName*)&local_48, "animation/fps", false);local_50 = (String*)( (ulong)local_50 & 0xffffffff00000000 );cVar3 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_48, (uint*)&local_50);if (cVar3 == '\0') {
   _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar9 = (code*)invalidInstructionException();
   ( *pcVar9 )();
}
dVar13 = Variant::operator_cast_to_double((Variant*)( *(long*)( *(long*)( param_3 + 8 ) + ( (ulong)local_50 & 0xffffffff ) * 8 ) + 0x18 ));bVar11 = StringName::configured == '\0';*(double*)( pSVar1 + 0x288 ) = dVar13;if (( bVar11 ) || ( local_48 == (String*)0x0 )) {
   local_78 = *(code**)( *(long*)pRVar10 + 0x1c8 );
}
 else {
   StringName::unref();
   local_78 = *(code**)( *(long*)pRVar10 + 0x1c8 );
}
local_48 = (String*)0x0;local_50 = pSVar1;cVar3 = RefCounted::reference();if (cVar3 == '\0') {
   local_50 = (String*)0x0;
}
local_58 = 0;if (*(long*)param_1 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
}
iVar4 = ( *local_78 )(pRVar10, (CowData<char32_t>*)&local_58, (StringName*)&local_50, param_2, (StringName*)&local_48);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);if (( ( local_50 != (String*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = (Object*)local_50,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);Memory::free_static(pOVar2, false);}CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);if (iVar4 != 0) {
   if (param_5 != (Error*)0x0) {
      *(int*)param_5 = iVar4;
   }

   uVar5 = 0;
   goto LAB_00100fd4;
}
StringName::StringName((StringName*)&local_48, "animation/import", false);local_50 = (String*)( (ulong)local_50 & 0xffffffff00000000 );cVar3 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_48, (uint*)&local_50);if (( StringName::configured != '\0' ) && ( local_48 != (String*)0x0 )) {
   StringName::unref();
}
if (cVar3 != '\0') {
   StringName::StringName((StringName*)&local_48, "animation/import", false);
   pVVar6 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_48);
   Variant::operator_cast_to_bool(pVVar6);
   GLTFState::set_create_animations(SUB81(pSVar1, 0));
   if (( StringName::configured != '\0' ) && ( local_48 != (String*)0x0 )) {
      StringName::unref();
   }

}
StringName::StringName((StringName*)&local_50, "animation/trimming", false);local_48 = (String*)( (ulong)local_48 & 0xffffffff00000000 );cVar3 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_50, (uint*)&local_48);if (cVar3 == '\0') {
   bVar11 = false;
   LAB_00100f55:if (StringName::configured == '\0') goto LAB_00101270;
   LAB_00100f5d:if (local_50 == (String*)0x0) goto LAB_00101270;
   StringName::unref();
   pcVar9 = *(code**)( *(long*)pRVar10 + 0x1e0 );
}
 else {
   StringName::StringName((StringName*)&local_48, "animation/trimming", false);
   pVVar6 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_3, (StringName*)&local_48);
   bVar11 = Variant::operator_cast_to_bool(pVVar6);
   if (StringName::configured != '\0') {
      if (local_48 != (String*)0x0) {
         StringName::unref();
         goto LAB_00100f55;
      }

      goto LAB_00100f5d;
   }

   LAB_00101270:pcVar9 = *(code**)( *(long*)pRVar10 + 0x1e0 );
}
local_48 = pSVar1;cVar3 = RefCounted::reference();if (cVar3 == '\0') {
   local_48 = (String*)0x0;
}
uVar5 = ( *pcVar9 )(pRVar10, (StringName*)&local_48, bVar11, 0);if (( ( local_48 != (String*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = (Object*)local_48,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);Memory::free_static(pOVar2, false);}LAB_00100fd4:cVar3 = RefCounted::unreference();if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pSVar1) ),cVar3 != '\0') {
   ( **(code**)( *(long*)pSVar1 + 0x140 ) )(pSVar1);
   Memory::free_static(pSVar1, false);
}
cVar3 = RefCounted::unreference();if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pRVar10) ),cVar3 != '\0') {
   ( **(code**)( *(long*)pRVar10 + 0x140 ) )(pRVar10);
   Memory::free_static(pRVar10, false);
}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar5;}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
   return (uint)CONCAT71(0x1069, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* EditorSceneFormatImporterGLTF::is_class_ptr(void*) const */uint EditorSceneFormatImporterGLTF::is_class_ptr(EditorSceneFormatImporterGLTF *this, void *param_1) {
   return (uint)CONCAT71(0x1069, (undefined4*)param_1 == &EditorSceneFormatImporter::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorSceneFormatImporterGLTF::_getv(StringName const&, Variant&) const */undefined8 EditorSceneFormatImporterGLTF::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSceneFormatImporterGLTF::_setv(StringName const&, Variant const&) */undefined8 EditorSceneFormatImporterGLTF::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSceneFormatImporterGLTF::_validate_propertyv(PropertyInfo&) const */void EditorSceneFormatImporterGLTF::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorSceneFormatImporterGLTF::_property_can_revertv(StringName const&) const */undefined8 EditorSceneFormatImporterGLTF::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorSceneFormatImporterGLTF::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorSceneFormatImporterGLTF::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSceneFormatImporterGLTF::_notificationv(int, bool) */void EditorSceneFormatImporterGLTF::_notificationv(int param_1, bool param_2) {
   return;
}
/* GLTFState::is_class_ptr(void*) const */uint GLTFState::is_class_ptr(GLTFState *this, void *param_1) {
   return (uint)CONCAT71(0x1069, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
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
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00106470;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00106470;
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
/* EditorSceneFormatImporterGLTF::~EditorSceneFormatImporterGLTF() */void EditorSceneFormatImporterGLTF::~EditorSceneFormatImporterGLTF(EditorSceneFormatImporterGLTF *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &__dso_handle;
   if (bVar1) {
      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001018fe;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001018fe;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001018fe;
      }

      if (*(long*)( this + 0x188 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001018fe:*(undefined***)this = &PTR__initialize_classv_00106470;
   Object::~Object((Object*)this);
   return;
}
/* EditorSceneFormatImporterGLTF::~EditorSceneFormatImporterGLTF() */void EditorSceneFormatImporterGLTF::~EditorSceneFormatImporterGLTF(EditorSceneFormatImporterGLTF *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &__dso_handle;
   if (bVar1) {
      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001019ae;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001019ae;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001019ae;
      }

      if (*(long*)( this + 0x188 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001019ae:*(undefined***)this = &PTR__initialize_classv_00106470;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1e8);
   return;
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
         LAB_00101a13:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101a13;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00101a7e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00101a7e:return &_get_class_namev();
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
         LAB_00101af3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101af3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFState");
         goto LAB_00101b5e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GLTFState");
   LAB_00101b5e:return &_get_class_namev();
}
/* EditorSceneFormatImporterGLTF::_get_class_namev() const */undefined8 *EditorSceneFormatImporterGLTF::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00101bf3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00101bf3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorSceneFormatImporterGLTF");
         goto LAB_00101c5e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorSceneFormatImporterGLTF");
   LAB_00101c5e:return &_get_class_namev();
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
/* void Ref<GLTFState>::instantiate<>() */void Ref<GLTFState>::instantiate<>(Ref<GLTFState> *this) {
   undefined8 uVar1;
   char cVar2;
   Resource *this_00;
   long lVar3;
   Object *pOVar4;
   Resource *pRVar5;
   Object *pOVar6;
   byte bVar7;
   bVar7 = 0;
   this_00 = (Resource*)operator_new(0x558, "");
   pRVar5 = this_00;
   for (lVar3 = 0xab; lVar3 != 0; lVar3 = lVar3 + -1) {
      *(undefined8*)pRVar5 = 0;
      pRVar5 = pRVar5 + (ulong)bVar7 * -0x10 + 8;
   }

   Resource::Resource(this_00);
   *(undefined***)this_00 = &PTR__initialize_classv_001065d0;
   *(undefined1(*) [16])( this_00 + 0x240 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x250 ) = (undefined1[16])0x0;
   Dictionary::Dictionary((Dictionary*)( this_00 + 0x260 ));
   uVar1 = _LC5;
   *(undefined8*)( this_00 + 0x268 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x308 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x288 ) = uVar1;
   *(undefined2*)( this_00 + 0x294 ) = 1;
   uVar1 = _LC7;
   *(undefined1(*) [16])( this_00 + 0x318 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x328 ) = uVar1;
   *(undefined1(*) [16])( this_00 + 0x338 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x370 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 1000 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x3f8 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x270 ) = 0;
   *(undefined8*)( this_00 + 0x280 ) = 0;
   *(undefined4*)( this_00 + 0x290 ) = 0;
   this_00[0x296] = (Resource)0x0;
   *(undefined4*)( this_00 + 0x298 ) = 1;
   *(undefined8*)( this_00 + 0x2a8 ) = 0;
   *(undefined8*)( this_00 + 0x2b8 ) = 0;
   *(undefined8*)( this_00 + 0x2c8 ) = 0;
   *(undefined8*)( this_00 + 0x2d8 ) = 0;
   *(undefined8*)( this_00 + 0x2e8 ) = 0;
   *(undefined8*)( this_00 + 0x2f8 ) = 0;
   *(undefined8*)( this_00 + 0x350 ) = 0;
   *(undefined8*)( this_00 + 0x360 ) = 0;
   *(undefined8*)( this_00 + 0x388 ) = 0;
   *(undefined8*)( this_00 + 0x398 ) = 0;
   *(undefined8*)( this_00 + 0x3a8 ) = 0;
   *(undefined8*)( this_00 + 0x3b8 ) = 0;
   *(undefined8*)( this_00 + 0x3c8 ) = 0;
   *(undefined8*)( this_00 + 0x3d8 ) = 0;
   *(undefined8*)( this_00 + 0x408 ) = 0;
   *(undefined8*)( this_00 + 0x410 ) = uVar1;
   *(undefined8*)( this_00 + 0x438 ) = uVar1;
   *(undefined8*)( this_00 + 0x488 ) = uVar1;
   *(undefined8*)( this_00 + 0x4b8 ) = uVar1;
   *(undefined8*)( this_00 + 0x4e8 ) = uVar1;
   *(undefined8*)( this_00 + 0x518 ) = uVar1;
   *(undefined8*)( this_00 + 0x548 ) = uVar1;
   *(undefined8*)( this_00 + 0x448 ) = 0;
   *(undefined8*)( this_00 + 0x458 ) = 0;
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
   postinitialize_handler((Object*)this_00);
   cVar2 = RefCounted::init_ref();
   if (cVar2 == '\0') {
      pOVar6 = *(Object**)this;
      if (pOVar6 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar2 = RefCounted::unreference();
      if (cVar2 == '\0') {
         return;
      }

      this_00 = (Resource*)0x0;
      cVar2 = predelete_handler(pOVar6);
      if (cVar2 == '\0') {
         return;
      }

   }
 else {
      pOVar6 = *(Object**)this;
      pOVar4 = pOVar6;
      if (this_00 == (Resource*)pOVar6) goto LAB_00102015;
      *(Resource**)this = this_00;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar4 = (Object*)this_00;
      if (( ( pOVar6 == (Object*)0x0 ) || ( cVar2 = RefCounted::unreference() ),cVar2 == '\0' )) goto LAB_00102015;
   }

   ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
   Memory::free_static(pOVar6, false);
   pOVar4 = (Object*)this_00;
   if (this_00 == (Resource*)0x0) {
      return;
   }

   LAB_00102015:cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* EditorSceneFormatImporterGLTF::_initialize_classv() */void EditorSceneFormatImporterGLTF::_initialize_classv(void) {
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
            if ((code*)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
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
         if ((code*)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* EditorSceneFormatImporterGLTF::get_class() const */void EditorSceneFormatImporterGLTF::get_class(void) {
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

      if (cVar5 != '\0') goto LAB_00102a2b;
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
         if (cVar5 != '\0') goto LAB_00102a2b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00102a2b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

      if (cVar4 != '\0') goto LAB_00102c2b;
   }

   cVar4 = String::operator ==(param_1, "Resource");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00102c2b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

      if (cVar4 != '\0') goto LAB_00102d7b;
   }

   cVar4 = String::operator ==(param_1, "GLTFState");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Resource::is_class((Resource*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00102d7b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorSceneFormatImporterGLTF::is_class(String const&) const */undefined8 EditorSceneFormatImporterGLTF::is_class(EditorSceneFormatImporterGLTF *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_00102ecb;
   }

   cVar5 = String::operator ==(param_1, "EditorSceneFormatImporterGLTF");
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
         if (cVar5 != '\0') goto LAB_00102ecb;
      }

      cVar5 = String::operator ==(param_1, "EditorSceneFormatImporter");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar6;
         }

         goto LAB_00102fce;
      }

   }

   LAB_00102ecb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00102fce:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      if ((code*)PTR__bind_methods_00109010 != Object::_bind_methods) {
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
/* GLTFState::_initialize_classv() */void GLTFState::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Resource::initialize_class() == '\0') {
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
            if ((code*)PTR__bind_methods_00109008 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_68 = 0;
         local_58 = "RefCounted";
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
         Resource::_bind_methods();
         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
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
      if ((code*)PTR__bind_methods_00109018 != Resource::_bind_methods) {
         GLTFState::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
            if (pvVar3 == (void*)0x0) goto LAB_0010357f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010357f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
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
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
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

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00103991;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00103991:local_b0 = (CowData<char32_t>*)&local_58;
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
/* EditorSceneFormatImporterGLTF::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void EditorSceneFormatImporterGLTF::_get_property_listv(EditorSceneFormatImporterGLTF *this, List *param_1, bool param_2) {
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
   local_78 = "EditorSceneFormatImporterGLTF";
   local_70 = 0x1d;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorSceneFormatImporterGLTF";
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

         goto LAB_00103c41;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00103c41:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "EditorSceneFormatImporterGLTF", false);
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

         goto LAB_00103ef1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00103ef1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_001041a1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001041a1:local_b0 = (CowData<char32_t>*)&local_58;
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
   goto LAB_00104a50;
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
   if ((float)uVar26 * __LC21 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar26 = *(uint*)( this + 0x28 );
      if (uVar26 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_e0 = (Variant*)0x18;
         goto LAB_00104a3b;
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
LAB_00104a3b:if (Variant::needs_deinit[local_98[0]] != '\0') {
   Variant::_clear_internal();
}
LAB_00104a50:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_e0;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
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
      LAB_00104d5d:do {
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
                  goto LAB_00104d5d;
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
/* CowData<Ref<GLTFTexture> >::_unref() */void CowData<Ref<GLTFTexture>>::_unref(CowData<Ref<GLTFTexture>> *this) {
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
      LAB_00104e3d:do {
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
                  goto LAB_00104e3d;
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
/* CowData<Ref<GLTFTextureSampler> >::_unref() */void CowData<Ref<GLTFTextureSampler>>::_unref(CowData<Ref<GLTFTextureSampler>> *this) {
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
      LAB_00104f1d:do {
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
                  goto LAB_00104f1d;
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
      LAB_00104ffd:do {
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
                  goto LAB_00104ffd;
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
      LAB_001050dd:do {
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
                  goto LAB_001050dd;
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
/* CowData<Ref<GLTFSkeleton> >::_unref() */void CowData<Ref<GLTFSkeleton>>::_unref(CowData<Ref<GLTFSkeleton>> *this) {
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
      LAB_001051bd:do {
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
                  goto LAB_001051bd;
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
/* CowData<Ref<GLTFAnimation> >::_unref() */void CowData<Ref<GLTFAnimation>>::_unref(CowData<Ref<GLTFAnimation>> *this) {
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
      LAB_0010529d:do {
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
                  goto LAB_0010529d;
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
   uint uVar4;
   long lVar5;
   Object *pOVar6;
   code *pcVar7;
   char cVar8;
   int *piVar9;
   long lVar10;
   long lVar11;
   long *plVar12;
   void *pvVar13;
   void *pvVar14;
   long lVar15;
   long lVar16;
   *(undefined***)this = &PTR__initialize_classv_001065d0;
   Dictionary::~Dictionary((Dictionary*)( this + 0x550 ));
   pvVar14 = *(void**)( this + 0x528 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x54c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x548 ) * 4 );
         if (uVar3 == 0) {
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
                        uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar14 + 0x40 ) * 4 );
                        if (uVar4 == 0) {
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
 while ( lVar10 != (ulong)uVar4 * 4 );
                           *(undefined4*)( (long)pvVar14 + 0x44 ) = 0;
                           *(undefined1(*) [16])( (long)pvVar14 + 0x30 ) = (undefined1[16])0x0;
                           if (pvVar13 == (void*)0x0) goto LAB_00105451;
                        }

                     }

                     Memory::free_static(pvVar13, false);
                     Memory::free_static(*(void**)( (long)pvVar14 + 0x28 ), false);
                  }

                  LAB_00105451:Memory::free_static(pvVar14, false);
                  pvVar14 = *(void**)( this + 0x528 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( lVar16 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x54c ) = 0;
            *(undefined1(*) [16])( this + 0x538 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_0010549a;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x530 ), false);
   }

   LAB_0010549a:pvVar14 = *(void**)( this + 0x4f8 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x51c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x518 ) * 4 );
         if (uVar3 == 0) {
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
 while ( (ulong)uVar3 << 2 != lVar16 );
            *(undefined4*)( this + 0x51c ) = 0;
            *(undefined1(*) [16])( this + 0x508 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_00105537;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x500 ), false);
   }

   LAB_00105537:pvVar14 = *(void**)( this + 0x4c8 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x4ec ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4e8 ) * 4 );
         if (uVar3 == 0) {
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
                     pOVar6 = *(Object**)( (long)pvVar14 + 0x18 );
                     cVar8 = predelete_handler(pOVar6);
                     if (cVar8 != '\0') {
                        ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                        Memory::free_static(pOVar6, false);
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar14 + 0x10 ));
                  Memory::free_static(pvVar14, false);
                  pvVar14 = *(void**)( this + 0x4c8 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar16 );
            *(undefined4*)( this + 0x4ec ) = 0;
            *(undefined1(*) [16])( this + 0x4d8 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_001055fa;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x4d0 ), false);
   }

   LAB_001055fa:pvVar14 = *(void**)( this + 0x498 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x4bc ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x4b8 ) * 4 );
         if (uVar3 == 0) {
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
 while ( lVar16 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x4bc ) = 0;
            *(undefined1(*) [16])( this + 0x4a8 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_00105699;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x4a0 ), false);
   }

   LAB_00105699:pvVar14 = *(void**)( this + 0x468 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x48c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x488 ) * 4 );
         if (uVar3 == 0) {
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
 while ( lVar16 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x48c ) = 0;
            *(undefined1(*) [16])( this + 0x478 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_00105739;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x470 ), false);
   }

   LAB_00105739:CowData<Ref<GLTFAnimation>>::_unref((CowData<Ref<GLTFAnimation>>*)( this + 0x458 ));
   CowData<Ref<GLTFSkeleton>>::_unref((CowData<Ref<GLTFSkeleton>>*)( this + 0x448 ));
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
         if (pvVar14 == (void*)0x0) goto LAB_001057df;
      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x428 ), false);
      Memory::free_static(*(void**)( this + 0x420 ), false);
      Memory::free_static(*(void**)( this + 0x430 ), false);
   }

   LAB_001057df:pvVar14 = *(void**)( this + 0x3f0 );
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
         if (pvVar14 == (void*)0x0) goto LAB_00105867;
      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x400 ), false);
      Memory::free_static(*(void**)( this + 0x3f8 ), false);
      Memory::free_static(*(void**)( this + 0x408 ), false);
   }

   LAB_00105867:CowData<Ref<GLTFLight>>::_unref((CowData<Ref<GLTFLight>>*)( this + 1000 ));
   if (*(long*)( this + 0x3d8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x3d8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x3d8 );
         if (plVar1 == (long*)0x0) goto LAB_001062e4;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x3d8 ) = 0;
         plVar12 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar12 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_001058c0:lVar10 = lVar10 + 1;
                  plVar12 = plVar12 + 1;
                  if (lVar16 == lVar10) goto LAB_00105918;
               }
;
               pOVar6 = (Object*)*plVar12;
               cVar8 = predelete_handler(pOVar6);
               if (cVar8 == '\0') goto LAB_001058c0;
               lVar10 = lVar10 + 1;
               plVar12 = plVar12 + 1;
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00105918:Memory::free_static(plVar1 + -2, false);
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
         if (plVar1 == (long*)0x0) goto LAB_001062e4;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x3b8 ) = 0;
         plVar12 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar12 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00105980:lVar10 = lVar10 + 1;
                  plVar12 = plVar12 + 1;
                  if (lVar16 == lVar10) goto LAB_00105a10;
               }
;
               pOVar6 = (Object*)*plVar12;
               cVar8 = predelete_handler(pOVar6);
               if (cVar8 == '\0') goto LAB_00105980;
               if (*(code**)( *(long*)pOVar6 + 0x140 ) == Image::~Image) {
                  *(code**)pOVar6 = Memory::free_static;
                  if (*(long*)( pOVar6 + 0x250 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( pOVar6 + 0x250 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar11 = *(long*)( pOVar6 + 0x250 );
                        *(undefined8*)( pOVar6 + 0x250 ) = 0;
                        Memory::free_static((void*)( lVar11 + -0x10 ), false);
                     }

                  }

                  Resource::~Resource((Resource*)pOVar6);
               }
 else {
                  ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               }

               lVar10 = lVar10 + 1;
               plVar12 = plVar12 + 1;
               Memory::free_static(pOVar6, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00105a10:Memory::free_static(plVar1 + -2, false);
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
         if (plVar1 == (long*)0x0) goto LAB_001062e4;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x388 ) = 0;
         plVar12 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar12 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00105a80:lVar10 = lVar10 + 1;
                  plVar12 = plVar12 + 1;
                  if (lVar16 == lVar10) goto LAB_00105ad8;
               }
;
               pOVar6 = (Object*)*plVar12;
               cVar8 = predelete_handler(pOVar6);
               if (cVar8 == '\0') goto LAB_00105a80;
               lVar10 = lVar10 + 1;
               plVar12 = plVar12 + 1;
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00105ad8:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (( *(long*)( this + 0x378 ) != 0 ) && ( cVar8 = cVar8 != '\0' )) {
      pOVar6 = *(Object**)( this + 0x378 );
      cVar8 = predelete_handler(pOVar6);
      if (cVar8 != '\0') {
         ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
         Memory::free_static(pOVar6, false);
      }

   }

   CowData<Ref<GLTFTextureSampler>>::_unref((CowData<Ref<GLTFTextureSampler>>*)( this + 0x370 ));
   CowData<Ref<GLTFTexture>>::_unref((CowData<Ref<GLTFTexture>>*)( this + 0x360 ));
   if (*(long*)( this + 0x350 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x350 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = *(long*)( this + 0x350 );
         *(undefined8*)( this + 0x350 ) = 0;
         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x340 ));
   if (*(long*)( this + 0x338 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x338 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x338 );
         if (plVar1 == (long*)0x0) goto LAB_001062e4;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x338 ) = 0;
         plVar12 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar12 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00105b80:lVar10 = lVar10 + 1;
                  plVar12 = plVar12 + 1;
                  if (lVar16 == lVar10) goto LAB_00105bd8;
               }
;
               pOVar6 = (Object*)*plVar12;
               cVar8 = predelete_handler(pOVar6);
               if (cVar8 == '\0') goto LAB_00105b80;
               lVar10 = lVar10 + 1;
               plVar12 = plVar12 + 1;
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00105bd8:Memory::free_static(plVar1 + -2, false);
      }

   }

   pvVar14 = *(void**)( this + 0x308 );
   if (pvVar14 != (void*)0x0) {
      if (*(int*)( this + 0x32c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x328 ) * 4 );
         if (uVar3 == 0) {
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
                     pOVar6 = *(Object**)( (long)pvVar14 + 0x10 );
                     cVar8 = predelete_handler(pOVar6);
                     if (cVar8 != '\0') {
                        ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                        Memory::free_static(pOVar6, false);
                     }

                  }

                  Memory::free_static(pvVar14, false);
                  pvVar14 = *(void**)( this + 0x308 );
                  *(undefined8*)( (long)pvVar14 + lVar16 * 2 ) = 0;
               }

               lVar16 = lVar16 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar16 );
            *(undefined4*)( this + 0x32c ) = 0;
            *(undefined1(*) [16])( this + 0x318 ) = (undefined1[16])0x0;
            if (pvVar14 == (void*)0x0) goto LAB_00105c9d;
         }

      }

      Memory::free_static(pvVar14, false);
      Memory::free_static(*(void**)( this + 0x310 ), false);
   }

   LAB_00105c9d:if (*(long*)( this + 0x2f8 ) != 0) {
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

   if (*(long*)( this + 0x2e8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2e8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x2e8 );
         if (plVar1 == (long*)0x0) goto LAB_001062e4;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x2e8 ) = 0;
         plVar12 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar12 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00105d00:lVar10 = lVar10 + 1;
                  plVar12 = plVar12 + 1;
                  if (lVar16 == lVar10) goto LAB_00105d58;
               }
;
               pOVar6 = (Object*)*plVar12;
               cVar8 = predelete_handler(pOVar6);
               if (cVar8 == '\0') goto LAB_00105d00;
               lVar10 = lVar10 + 1;
               plVar12 = plVar12 + 1;
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00105d58:Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<Ref<GLTFAccessor>>::_unref((CowData<Ref<GLTFAccessor>>*)( this + 0x2d8 ));
   if (*(long*)( this + 0x2c8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2c8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x2c8 );
         if (plVar1 == (long*)0x0) goto LAB_001062e4;
         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x2c8 ) = 0;
         plVar12 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar12 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00105dc0:lVar10 = lVar10 + 1;
                  plVar12 = plVar12 + 1;
                  if (lVar16 == lVar10) goto LAB_00105e18;
               }
;
               pOVar6 = (Object*)*plVar12;
               cVar8 = predelete_handler(pOVar6);
               if (cVar8 == '\0') goto LAB_00105dc0;
               lVar10 = lVar10 + 1;
               plVar12 = plVar12 + 1;
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00105e18:Memory::free_static(plVar1 + -2, false);
      }

   }

   if (*(long*)( this + 0x2b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar16 = *(long*)( this + 0x2b8 );
         if (lVar16 == 0) goto LAB_001062e4;
         lVar10 = *(long*)( lVar16 + -8 );
         lVar15 = 0;
         *(undefined8*)( this + 0x2b8 ) = 0;
         lVar11 = lVar16;
         if (lVar10 != 0) {
            do {
               if (*(long*)( lVar11 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar11 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar5 = *(long*)( lVar11 + 8 );
                     *(undefined8*)( lVar11 + 8 ) = 0;
                     Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  }

               }

               lVar15 = lVar15 + 1;
               lVar11 = lVar11 + 0x10;
            }
 while ( lVar10 != lVar15 );
         }

         Memory::free_static((void*)( lVar16 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x2a8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x2a8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( this + 0x2a8 );
         if (plVar1 == (long*)0x0) {
            LAB_001062e4:/* WARNING: Does not return */pcVar7 = (code*)invalidInstructionException();
            ( *pcVar7 )();
         }

         lVar16 = plVar1[-1];
         lVar10 = 0;
         *(undefined8*)( this + 0x2a8 ) = 0;
         plVar12 = plVar1;
         if (lVar16 != 0) {
            do {
               while (( *plVar12 == 0 || ( cVar8 = RefCounted::unreference() ),cVar8 == '\0' )) {
                  LAB_00105ef0:lVar10 = lVar10 + 1;
                  plVar12 = plVar12 + 1;
                  if (lVar16 == lVar10) goto LAB_00105f48;
               }
;
               pOVar6 = (Object*)*plVar12;
               cVar8 = predelete_handler(pOVar6);
               if (cVar8 == '\0') goto LAB_00105ef0;
               lVar10 = lVar10 + 1;
               plVar12 = plVar12 + 1;
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }
 while ( lVar16 != lVar10 );
         }

         LAB_00105f48:Memory::free_static(plVar1 + -2, false);
      }

   }

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
/* EditorSceneFormatImporterGLTF::get_extensions(List<String, DefaultAllocator>*) const */void EditorSceneFormatImporterGLTF::_GLOBAL__sub_I_get_extensions(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* GLTFState::~GLTFState() */void GLTFState::~GLTFState(GLTFState *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* EditorSceneFormatImporterGLTF::~EditorSceneFormatImporterGLTF() */void EditorSceneFormatImporterGLTF::~EditorSceneFormatImporterGLTF(EditorSceneFormatImporterGLTF *this) {
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


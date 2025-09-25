/* SectionedInspector::get_current_section() const */SectionedInspector * __thiscall SectionedInspector::get_current_section(SectionedInspector *this){
   long lVar1;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar1 = Tree::get_selected();
   if (lVar1 == 0) {
      *(undefined8*)this = 0;
      String::parse_latin1((StrRange*)this);
   }
 else {
      Tree::get_selected();
      TreeItem::get_metadata((int)local_38);
      Variant::operator_cast_to_String((Variant*)this);
      if (Variant::needs_deinit[local_38[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::register_search_box(LineEdit*) */void SectionedInspector::register_search_box(SectionedInspector *this, LineEdit *param_1) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   Callable aCStack_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(LineEdit**)( this + 0xac0 ) = param_1;
   EditorInspector::register_text_enter(*(Node**)( this + 0xab8 ));
   plVar1 = *(long**)( this + 0xac0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(SectionedInspector**)( this_00 + 0x28 ) = this;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_00 = &PTR_hash_0010aed8;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   uVar3 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_00 + 0x10 ) = 0;
   *(undefined8*)( this_00 + 0x30 ) = uVar3;
   *(code**)( this_00 + 0x38 ) = _search_changed;
   *(undefined**)( this_00 + 0x20 ) = &_LC7;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "SectionedInspector::_search_changed";
   Callable::Callable(aCStack_48, this_00);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x270, aCStack_48, 0);
   Callable::~Callable(aCStack_48);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::get_inspector() */undefined8 SectionedInspector::get_inspector(SectionedInspector *this) {
   return *(undefined8*)( this + 0xab8 );
}
/* SectionedInspector::SectionedInspector() */void SectionedInspector::SectionedInspector(SectionedInspector *this) {
   StringName *pSVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   Tree *this_00;
   Object *this_01;
   EditorInspector *this_02;
   BoxContainer *pBVar5;
   CallableCustom *this_03;
   long in_FS_OFFSET;
   float fVar6;
   long local_60;
   long local_58[2];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   SplitContainer::SplitContainer((SplitContainer*)this, false);
   this[0xa68] = (SectionedInspector)0x1;
   *(undefined***)this = &PTR__initialize_classv_0010ab60;
   *(undefined8*)( this + 0xa70 ) = 0;
   this_00 = (Tree*)operator_new(0xdc8, "");
   Tree::Tree(this_00);
   postinitialize_handler((Object*)this_00);
   *(Tree**)( this + 0xa78 ) = this_00;
   this_01 = (Object*)operator_new(400, "");
   Object::Object(this_01);
   *(undefined***)this_01 = &PTR__initialize_classv_0010aa00;
   this_01[0x188] = (Object)0x0;
   *(undefined1(*) [16])( this_01 + 0x178 ) = (undefined1[16])0x0;
   postinitialize_handler(this_01);
   *(Object**)( this + 0xa80 ) = this_01;
   *(undefined8*)( this + 0xab0 ) = 2;
   *(undefined1(*) [16])( this + 0xa90 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xaa0 ) = (undefined1[16])0x0;
   this_02 = (EditorInspector*)operator_new(0xcb0, "");
   EditorInspector::EditorInspector(this_02);
   postinitialize_handler((Object*)this_02);
   *(EditorInspector**)( this + 0xab8 ) = this_02;
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 8*i + 2752 ) ) = 0;
   }

   this[0xad8] = (SectionedInspector)0x0;
   StringName::StringName((StringName*)local_58, "autohide", false);
   Control::add_theme_constant_override((StringName*)this, (int)(StringName*)local_58);
   if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
      StringName::unref();
   }

   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, true);
   *(undefined***)pBVar5 = &PTR__initialize_classv_0010a688;
   pBVar5[0xa0c] = (BoxContainer)0x1;
   postinitialize_handler((Object*)pBVar5);
   fVar6 = (float)EditorScale::get_scale();
   local_48 = CONCAT44(fVar6 * _LC11._4_4_, fVar6 * (float)_LC11);
   Control::set_custom_minimum_size((Vector2*)pBVar5);
   Node::add_child(this, pBVar5, 0, 0);
   Node::set_auto_translate_mode(*(undefined8*)( this + 0xa78 ), 2);
   Control::set_v_size_flags(*(undefined8*)( this + 0xa78 ), 3);
   Tree::set_hide_root(SUB81(*(undefined8*)( this + 0xa78 ), 0));
   pSVar1 = *(StringName**)( this + 0xa78 );
   StringName::StringName((StringName*)local_58, "TreeSecondary", false);
   Control::set_theme_type_variation(pSVar1);
   if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
      StringName::unref();
   }

   Node::add_child(pBVar5, *(undefined8*)( this + 0xa78 ), 1, 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, true);
   *(undefined***)pBVar5 = &PTR__initialize_classv_0010a688;
   pBVar5[0xa0c] = (BoxContainer)0x1;
   postinitialize_handler((Object*)pBVar5);
   fVar6 = (float)EditorScale::get_scale();
   local_48 = CONCAT44(fVar6 * _LC13._4_4_, fVar6 * (float)_LC13);
   Control::set_custom_minimum_size((Vector2*)pBVar5);
   Control::set_h_size_flags(pBVar5, 3);
   Node::add_child(this, pBVar5, 0, 0);
   Control::set_v_size_flags(*(undefined8*)( this + 0xab8 ), 3);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xab8 ), 1, 0);
   EditorInspector::set_use_doc_hints(SUB81(*(undefined8*)( this + 0xab8 ), 0));
   plVar2 = *(long**)( this + 0xa78 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   this_03 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_03);
   *(SectionedInspector**)( this_03 + 0x28 ) = this;
   *(undefined1(*) [16])( this_03 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_03 = &PTR_hash_0010aff8;
   *(undefined8*)( this_03 + 0x40 ) = 0;
   uVar4 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_03 + 0x10 ) = 0;
   *(undefined8*)( this_03 + 0x30 ) = uVar4;
   *(code**)( this_03 + 0x38 ) = _section_selected;
   *(undefined**)( this_03 + 0x20 ) = &_LC7;
   CallableCustomMethodPointerBase::_setup((uint*)this_03, (int)this_03 + 0x28);
   *(char**)( this_03 + 0x20 ) = "SectionedInspector::_section_selected";
   Callable::Callable((Callable*)local_58, this_03);
   StringName::StringName((StringName*)&local_60, "cell_selected", false);
   ( *pcVar3 )(plVar2, (StringName*)&local_60, (StringName*)local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::~SectionedInspector() */void SectionedInspector::~SectionedInspector(SectionedInspector *this) {
   uint uVar1;
   Object *pOVar2;
   char cVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR__initialize_classv_0010ab60;
   pOVar2 = *(Object**)( this + 0xa80 );
   cVar3 = predelete_handler(pOVar2);
   if (cVar3 != '\0') {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xad0 ));
   pvVar5 = *(void**)( this + 0xa90 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0xab4 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xab0 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xab4 ) = 0;
            *(undefined1(*) [16])( this + 0xaa0 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa98 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0xa98 ) + lVar4 ) = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x10 ));
                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0xa90 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0xab4 ) = 0;
            *(undefined1(*) [16])( this + 0xaa0 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_001006ef;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0xa98 ), false);
   }

   LAB_001006ef:*(undefined***)this = &PTR__initialize_classv_0010a310;
   SplitContainer::~SplitContainer((SplitContainer*)this);
   return;
}
/* SectionedInspector::~SectionedInspector() */void SectionedInspector::~SectionedInspector(SectionedInspector *this) {
   ~SectionedInspector(this)
   ;;
   operator_delete(this, 0xae0);
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
/* SectionedInspector::get_full_item_path(String const&) */String *SectionedInspector::get_full_item_path(String *param_1) {
   CowData *in_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   get_current_section((SectionedInspector*)&local_58);
   if (( local_58 == 0 ) || ( *(uint*)( local_58 + -8 ) < 2 )) {
      *(undefined8*)param_1 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
   }
 else {
      local_50 = 0;
      local_40 = 1;
      local_48 = &_LC24;
      String::parse_latin1((StrRange*)&local_50);
      String::operator +((String*)&local_48, (String*)&local_58);
      String::operator +(param_1, (String*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
   *puVar3 = 0;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   puVar3[10] = 6;
   *(undefined8*)( puVar3 + 0x10 ) = 0;
   *puVar3 = *(undefined4*)param_1;
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar3[6] = *(undefined4*)( param_1 + 0x18 );
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
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
/* SectionedInspector::_section_selected() */void SectionedInspector::_section_selected(SectionedInspector *this) {
   CowData<char32_t> *this_00;
   String *pSVar1;
   undefined *puVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = Tree::get_selected();
   if (lVar3 != 0) {
      this_00 = (CowData<char32_t>*)( this + 0xad0 );
      Tree::get_selected();
      TreeItem::get_metadata((int)local_48);
      Variant::operator_cast_to_String((Variant*)&local_58);
      if (*(undefined**)( this + 0xad0 ) != local_58) {
         CowData<char32_t>::_unref(this_00);
         puVar2 = local_58;
         local_58 = (undefined*)0x0;
         *(undefined**)( this + 0xad0 ) = puVar2;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar3 = *(long*)( this + 0xa80 );
      Tree::get_selected();
      lVar4 = TreeItem::get_first_child();
      CowData<char32_t>::_ref((CowData<char32_t>*)( lVar3 + 0x180 ), (CowData*)this_00);
      *(bool*)( lVar3 + 0x188 ) = lVar4 == 0;
      Object::notify_property_list_changed();
      pSVar1 = *(String**)( this + 0xab8 );
      local_60 = 0;
      local_58 = &_LC24;
      local_50 = 1;
      String::parse_latin1((StrRange*)&local_60);
      String::operator +((String*)&local_58, (String*)this_00);
      EditorInspector::set_property_prefix(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::_bind_methods() */void SectionedInspector::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   long *plVar3;
   MethodBind *pMVar4;
   long *plVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_68[2];
   long *local_58;
   undefined8 local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = (undefined1[16])0x0;
   local_48 = 0;
   pMVar4 = create_method_bind<SectionedInspector>(update_category_list);
   StringName::StringName((StringName*)local_68, "update_category_list", false);
   local_58 = (long*)0x0;
   ClassDB::bind_methodfi(1, pMVar4, false, (MethodDefinition*)local_68, (Variant**)0x0, 0);
   plVar3 = local_58;
   if (local_58 != (long*)0x0) {
      LOCK();
      plVar5 = local_58 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_58 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_58[-1];
         local_58 = (long*)0x0;
         if (lVar1 != 0) {
            lVar6 = 0;
            plVar5 = plVar3;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar5 != 0 )) {
                  StringName::unref();
               }

               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            }
 while ( lVar1 != lVar6 );
         }

         Memory::free_static(plVar3 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::set_current_section(String const&) */void SectionedInspector::set_current_section(SectionedInspector *this, String *param_1) {
   undefined8 uVar1;
   char cVar2;
   undefined8 *puVar3;
   long in_FS_OFFSET;
   uint local_24;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_24 = 0;
   cVar2 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::_lookup_pos((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>*)( this + 0xa88 ), param_1, &local_24);
   if (cVar2 == '\0') {
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      puVar3 = (undefined8*)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::operator []((HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>*)( this + 0xa88 ), param_1);
      uVar1 = *puVar3;
      TreeItem::select((int)uVar1);
      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Tree::scroll_to_item(*(TreeItem**)( this + 0xa78 ), SUB81(uVar1, 0));
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::update_category_list() */void SectionedInspector::update_category_list(SectionedInspector *this) {
   String *this_00;
   HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>> *this_01;
   List *pLVar1;
   void *pvVar2;
   code *pcVar3;
   Object *pOVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 uVar7;
   int iVar8;
   int iVar9;
   undefined8 uVar10;
   undefined8 *puVar11;
   long lVar12;
   undefined8 uVar13;
   long lVar14;
   uint uVar15;
   ulong *puVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   bool bVar18;
   long *local_98;
   ulong local_90;
   long local_88;
   long local_80;
   long local_78;
   Object *local_70;
   ulong local_68;
   CowData *local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Tree::clear();
   uVar15 = ( uint ) * (ulong*)( this + 0xa70 ) & 0xffffff;
   if (uVar15 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar17 = local_68 >> 8;
         local_68 = uVar17 << 8;
         LOCK();
         bVar18 = (char)ObjectDB::spin_lock == '\0';
         if (bVar18) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar18) break;
         local_68 = uVar17 << 8;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0xa70 ) >> 0x18 & 0x7fffffffff ) == ( *puVar16 & 0x7fffffffff )) {
         pLVar1 = (List*)puVar16[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (pLVar1 != (List*)0x0) {
            local_98 = (long*)0x0;
            Object::get_property_list(pLVar1, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_98, 0));
            this_01 = (HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>*)( this + 0xa88 );
            if (( *(long*)( this + 0xa90 ) != 0 ) && ( *(int*)( this + 0xab4 ) != 0 )) {
               lVar14 = 0;
               uVar15 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xab0 ) * 4 );
               if (uVar15 != 0) {
                  do {
                     if (*(int*)( *(long*)( this + 0xa98 ) + lVar14 ) != 0) {
                        *(int*)( *(long*)( this + 0xa98 ) + lVar14 ) = 0;
                        pvVar2 = *(void**)( *(long*)( this + 0xa90 ) + lVar14 * 2 );
                        CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar2 + 0x10 ));
                        Memory::free_static(pvVar2, false);
                        *(undefined8*)( *(long*)( this + 0xa90 ) + lVar14 * 2 ) = 0;
                     }

                     lVar14 = lVar14 + 4;
                  }
 while ( lVar14 != (ulong)uVar15 << 2 );
               }

               *(undefined4*)( this + 0xab4 ) = 0;
               *(undefined1(*) [16])( this + 0xaa0 ) = (undefined1[16])0x0;
            }

            uVar10 = Tree::create_item(*(TreeItem**)( this + 0xa78 ), 0);
            local_68 = 0;
            String::parse_latin1((String*)&local_68, "");
            puVar11 = (undefined8*)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::operator [](this_01, (String*)&local_68);
            *puVar11 = uVar10;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            local_90 = 0;
            if (*(long*)( this + 0xac0 ) != 0) {
               LineEdit::get_text();
               if (local_90 != local_68) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  local_90 = local_68;
                  local_68 = 0;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            }

            uVar6 = EditorPropertyNameProcessor::get_settings_style();
            uVar7 = EditorPropertyNameProcessor::get_tooltip_style(uVar6);
            if (local_98 != (long*)0x0) {
               for (lVar14 = *local_98; lVar14 != 0; lVar14 = *(long*)( lVar14 + 0x30 )) {
                  uVar15 = *(uint*)( lVar14 + 0x28 );
                  if (( ( ( uVar15 & 0x80 ) == 0 ) && ( ( uVar15 & 4 ) != 0 ) ) && ( ( ( local_90 != 0 && ( 1 < *(uint*)( local_90 - 8 ) ) ) || ( ( this[0xad8] == (SectionedInspector)0x0 || ( ( uVar15 & 0x8000000 ) != 0 ) ) ) ) )) {
                     this_00 = (String*)( lVar14 + 8 );
                     iVar8 = String::find_char((wchar32)this_00, 0x3a);
                     if (( iVar8 == -1 ) && ( ( ( ( cVar5 = String::operator ==(this_00, "script") ),cVar5 == '\0' && ( cVar5 = String::operator ==(this_00, "resource_name") ),cVar5 == '\0' ) ) && ( cVar5 = String::operator ==(this_00, "resource_path") ),cVar5 == '\0' )) &&( ( cVar5 = String::operator ==(this_00, "resource_local_to_scene") ),cVar5 == '\0' && ( cVar5 = String::begins_with((char*)this_00) ),cVar5 == '\0' )(( local_90 == 0 ) || ( *(uint*)( local_90 - 8 ) < 2 ));
                     {
                        LAB_00101075:iVar8 = String::find_char((wchar32)this_00, 0x2f);
                        if (iVar8 == -1) {
                           operator+((char *)&
                           local_68,(String*)"global/";
                           if (*(ulong*)( lVar14 + 8 ) != local_68) {
                              CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
                              *(ulong*)( lVar14 + 8 ) = local_68;
                              local_68 = 0;
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        }

                        String::split((char*)&local_68, SUB81(this_00, 0), 0x103a09);
                        local_88 = 0;
                        if (local_60 != (CowData*)0x0) {
                           lVar12 = *(long*)( local_60 + -8 ) + -1;
                           if (2 < lVar12) {
                              lVar12 = 2;
                           }

                           iVar8 = (int)lVar12;
                           if (0 < iVar8) {
                              uVar17 = 0;
                              LAB_001011b3:puVar11 = (undefined8*)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::operator [](this_01, (String*)&local_88);
                              uVar10 = *puVar11;
                              if ((update_category_list()::{lambda()
                              #1
                              ( iVar9 = __cxa_guard_acquire(&update_category_list()::{lambda()#1}::
                                                       operator()()::sname), iVar9 != 0) );
                              {
                                 _scs_create((char *)&update_category_list()::{lambda()
                                 #1
                                 sname,true;
                                 __cxa_atexit(StringName::~StringName, &update_category_list()::, {
                                       lambda()
                                       #1
                                       &__dso_handle;
                                       __cxa_guard_release(&update_category_list()::{lambda()#1}::operator()()::
                                             sname);
                                    }
, Control::get_theme_font((StringName *) & local_70,(StringName*)this;
                                 TreeItem::set_custom_font((int)uVar10, (Ref*)0x0);
                                 if (( ( local_70 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar4 = local_70,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
                                 Memory::free_static(pOVar4, false);
                              }

                              if (uVar17 == 0) {
                                 if (local_60 == (CowData*)0x0) {
                                    lVar12 = 0;
                                 }
 else {
                                    lVar12 = *(long*)( local_60 + -8 );
                                    if (0 < lVar12) {
                                       if (local_88 != *(long*)local_60) {
                                          CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, local_60);
                                       }

                                       goto LAB_0010116f;
                                    }

                                 }

                                 uVar17 = 0;
                                 LAB_001016e7:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar17, lVar12, "p_index", "size()", "", false, true);
                                 _err_flush_stdout();
                                 /* WARNING: Does not return */
                                 pcVar3 = (code*)invalidInstructionException();
                                 ( *pcVar3 )();
                              }

                              if (local_60 != (CowData*)0x0) {
                                 lVar12 = *(long*)( local_60 + -8 );
                                 if (lVar12 <= (long)uVar17) goto LAB_001016e7;
                                 operator+((char *)&
                                 local_70,(String*)&_LC24;
                                 String::operator +=((String*)&local_88, (String*)&local_70);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                                 LAB_0010116f:local_70 = (Object*)( (ulong)local_70 & 0xffffffff00000000 );
                                 cVar5 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::_lookup_pos(this_01, (String*)&local_88, (uint*)&local_70);
                                 if (cVar5 != '\0') {
                                    LAB_00101191:if (iVar8 + -1 == (int)uVar17) {
                                       puVar11 = (undefined8*)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::operator [](this_01, (String*)&local_88);
                                       TreeItem::set_selectable((int)*puVar11, false);
                                    }

                                    bVar18 = iVar8 - 1 == uVar17;
                                    uVar17 = uVar17 + 1;
                                    if (bVar18) goto LAB_00101814;
                                    goto LAB_001011b3;
                                 }

                                 uVar13 = Tree::create_item(*(TreeItem**)( this + 0xa78 ), (int)uVar10);
                                 puVar11 = (undefined8*)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::operator [](this_01, (String*)&local_88);
                                 *puVar11 = uVar13;
                                 uVar10 = EditorPropertyNameProcessor::singleton;
                                 StringName::StringName((StringName*)&local_70, "", false);
                                 if (local_60 == (CowData*)0x0) goto LAB_0010175e;
                                 lVar12 = *(long*)( local_60 + -8 );
                                 if (lVar12 <= (long)uVar17) goto LAB_001016e7;
                                 EditorPropertyNameProcessor::process_name((CowData*)&local_80, uVar10, local_60 + uVar17 * 8, uVar6, this_00, (CowData<char32_t>*)&local_70);
                                 if (( StringName::configured != '\0' ) && ( local_70 != (Object*)0x0 )) {
                                    StringName::unref();
                                 }

                                 uVar10 = EditorPropertyNameProcessor::singleton;
                                 StringName::StringName((StringName*)&local_70, "", false);
                                 if (local_60 != (CowData*)0x0) {
                                    lVar12 = *(long*)( local_60 + -8 );
                                    if ((long)uVar17 < lVar12) {
                                       EditorPropertyNameProcessor::process_name((CowData<char32_t>*)&local_78, uVar10, local_60 + uVar17 * 8, uVar7, this_00, (CowData<char32_t>*)&local_70);
                                       if (( StringName::configured != '\0' ) && ( local_70 != (Object*)0x0 )) {
                                          StringName::unref();
                                       }

                                       local_70 = (Object*)0x0;
                                       if (local_80 != 0) {
                                          CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_80);
                                       }

                                       TreeItem::set_text(uVar13, 0, (CowData<char32_t>*)&local_70);
                                       CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                                       iVar9 = (int)uVar13;
                                       TreeItem::set_tooltip_text(iVar9, (String*)0x0);
                                       Variant::Variant((Variant*)local_58, (String*)&local_88);
                                       TreeItem::set_metadata(iVar9, (Variant*)0x0);
                                       if (Variant::needs_deinit[local_58[0]] != '\0') {
                                          Variant::_clear_internal();
                                       }

                                       TreeItem::set_selectable(iVar9, false);
                                       CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                                       CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                                       goto LAB_00101191;
                                    }

                                    goto LAB_001016e7;
                                 }

                              }

                              LAB_0010175e:lVar12 = 0;
                              goto LAB_001016e7;
                           }

                        }

                        LAB_00101814:CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                     }

                     else{iVar8 = String::findn(this_00, (int)(String*)&local_90);
                     if (iVar8 != -1) goto LAB_00101075;
                     String::split((char*)&local_68, SUB81(this_00, 0), 0x103a09);
                     uVar10 = EditorPropertyNameProcessor::singleton;
                     for (uVar17 = 0; ( EditorPropertyNameProcessor::singleton = uVar10 ),local_60 != (CowData*)0x0 && ( (long)uVar17 < *(long*)( local_60 + -8 ) ); uVar17 = uVar17 + 1) {
                        StringName::StringName((StringName*)&local_78, "", false);
                        if (local_60 == (CowData*)0x0) {
                           lVar12 = 0;
                           goto LAB_001016e7;
                        }

                        lVar12 = *(long*)( local_60 + -8 );
                        if (lVar12 <= (long)uVar17) goto LAB_001016e7;
                        EditorPropertyNameProcessor::process_name((CowData<char32_t>*)&local_70, uVar10, local_60 + uVar17 * 8, uVar6, this_00, (StringName*)&local_78);
                        cVar5 = String::is_subsequence_ofn((String*)&local_90);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                           StringName::unref();
                        }

                        if (cVar5 != '\0') {
                           CowData<String>::_unref((CowData<String>*)&local_60);
                           goto LAB_00101075;
                        }

                        uVar10 = EditorPropertyNameProcessor::singleton;
                     }

                  }

                  CowData<String>::_unref((CowData<String>*)&local_60);
               }

            }

         }

      }

      local_68 = local_68 & 0xffffffff00000000;
      cVar5 = HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::_lookup_pos(this_01, (String*)( this + 0xad0 ), (uint*)&local_68);
      if (cVar5 != '\0') {
         puVar11 = (undefined8*)HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::operator [](this_01, (String*)( this + 0xad0 ));
         TreeItem::select((int)*puVar11);
      }

      EditorInspector::update_tree();
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_98);
   }

}
else{ObjectDB::spin_lock._0_1_ = '\0';};if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* SectionedInspector::edit(Object*) */void SectionedInspector::edit(SectionedInspector *this, Object *param_1) {
   String *pSVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (Object*)0x0) {
      *(undefined8*)( this + 0xa70 ) = 0;
      Tree::clear();
      *(undefined8*)( *(long*)( this + 0xa80 ) + 0x178 ) = 0;
      Object::notify_property_list_changed();
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorInspector::edit(*(Object**)( this + 0xab8 ));
         return;
      }

   }
 else {
      lVar2 = *(long*)( param_1 + 0x60 );
      pSVar1 = *(String**)( this + 0xab8 );
      ( **(code**)( *(long*)param_1 + 0x48 ) )((CowData<char32_t>*)&local_50);
      EditorInspector::set_object_class(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      if (*(long*)( this + 0xa70 ) == lVar2) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            update_category_list(this);
            return;
         }

      }
 else {
         *(long*)( this + 0xa70 ) = lVar2;
         update_category_list(this);
         *(Object**)( *(long*)( this + 0xa80 ) + 0x178 ) = param_1;
         Object::notify_property_list_changed();
         EditorInspector::edit(*(Object**)( this + 0xab8 ));
         lVar2 = Tree::get_root();
         if (lVar2 != 0) {
            while (true) {
               lVar3 = TreeItem::get_first_child();
               if (lVar3 == 0) break;
               lVar2 = TreeItem::get_first_child();
            }
;
            TreeItem::select((int)lVar2);
            TreeItem::get_metadata((int)local_48);
            Variant::operator_cast_to_String((Variant*)&local_50);
            if (*(long*)( this + 0xad0 ) != local_50) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xad0 ));
               lVar2 = local_50;
               local_50 = 0;
               *(long*)( this + 0xad0 ) = lVar2;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (Variant::needs_deinit[local_48[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::_search_changed(String const&) */void SectionedInspector::_search_changed(SectionedInspector *this, String *param_1) {
   String *pSVar1;
   bool bVar2;
   long in_FS_OFFSET;
   undefined8 local_48;
   undefined8 local_40;
   undefined8 local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0xac8 ) != 0) {
      bVar2 = SUB81(*(long*)( this + 0xac8 ), 0);
      if (( *(long*)param_1 == 0 ) || ( *(uint*)( *(long*)param_1 + -8 ) < 2 )) {
         BaseButton::set_pressed_no_signal(bVar2);
         BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xac8 ), 0));
         local_38 = 0;
         Control::set_tooltip_text(*(String**)( this + 0xac8 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
      }
 else {
         BaseButton::set_pressed_no_signal(bVar2);
         BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xac8 ), 0));
         pSVar1 = *(String**)( this + 0xac8 );
         local_40 = 0;
         String::parse_latin1((String*)&local_40, "");
         local_48 = 0;
         String::parse_latin1((String*)&local_48, "Advanced settings are always shown when searching.");
         TTR((String*)&local_38, (String*)&local_48);
         Control::set_tooltip_text(pSVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      update_category_list(this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::_advanced_toggled(bool) */void SectionedInspector::_advanced_toggled(SectionedInspector *this, bool param_1) {
   this[0xad8] = (SectionedInspector)!param_1;
   update_category_list(this);
   EditorInspector::set_restrict_to_basic_settings(SUB81(*(undefined8*)( this + 0xab8 ), 0));
   return;
}
/* SectionedInspector::register_advanced_toggle(CheckButton*) */void SectionedInspector::register_advanced_toggle(SectionedInspector *this, CheckButton *param_1) {
   code *pcVar1;
   undefined8 uVar2;
   byte bVar3;
   CallableCustom *this_00;
   long in_FS_OFFSET;
   Callable aCStack_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(CheckButton**)( this + 0xac8 ) = param_1;
   pcVar1 = *(code**)( *(long*)param_1 + 0x108 );
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(undefined**)( this_00 + 0x20 ) = &_LC7;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined***)this_00 = &PTR_hash_0010af68;
   uVar2 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_00 + 0x10 ) = 0;
   *(undefined8*)( this_00 + 0x30 ) = uVar2;
   *(code**)( this_00 + 0x38 ) = _advanced_toggled;
   *(SectionedInspector**)( this_00 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "SectionedInspector::_advanced_toggled";
   Callable::Callable(aCStack_48, this_00);
   ( *pcVar1 )(param_1, SceneStringNames::singleton + 0x248, aCStack_48, 0);
   Callable::~Callable(aCStack_48);
   bVar3 = BaseButton::is_pressed();
   this[0xad8] = ( SectionedInspector )(bVar3 ^ 1);
   update_category_list(this);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      EditorInspector::set_restrict_to_basic_settings(SUB81(*(undefined8*)( this + 0xab8 ), 0));
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
/* Object::_bind_compatibility_methods() */void Object::_bind_compatibility_methods(void) {
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
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* SectionedInspectorFilter::is_class_ptr(void*) const */uint SectionedInspectorFilter::is_class_ptr(SectionedInspectorFilter *this, void *param_1) {
   return (uint)CONCAT71(0x10b2, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b0, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* SectionedInspectorFilter::_validate_propertyv(PropertyInfo&) const */void SectionedInspectorFilter::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* SectionedInspectorFilter::_notificationv(int, bool) */void SectionedInspectorFilter::_notificationv(int param_1, bool param_2) {
   return;
}
/* CallableCustomMethodPointer<SectionedInspector, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void> *this) {
   return;
}
/* CallableCustomMethodPointer<SectionedInspector, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<SectionedInspector, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void,String_const&> *this) {
   return;
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
/* CallableCustomMethodPointer<SectionedInspector, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SectionedInspector,void>::get_argument_count(CallableCustomMethodPointer<SectionedInspector,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<SectionedInspector, void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SectionedInspector,void,bool>::get_argument_count(CallableCustomMethodPointer<SectionedInspector,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<SectionedInspector, void, String const&>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<SectionedInspector,void,String_const&>::get_argument_count(CallableCustomMethodPointer<SectionedInspector,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<SectionedInspector, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<SectionedInspector, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<SectionedInspector, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b088;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b088;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HSplitContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* SectionedInspector::_property_get_revertv(StringName const&, Variant&) const */undefined8 SectionedInspector::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HSplitContainer::_property_can_revertv(StringName const&) const */undefined8 HSplitContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* SectionedInspector::_property_can_revertv(StringName const&) const */undefined8 SectionedInspector::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010f008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointer<SectionedInspector, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<SectionedInspector,void,String_const&>::get_object(CallableCustomMethodPointer<SectionedInspector,void,String_const&> *this) {
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
         goto LAB_0010221d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010221d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010221d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<SectionedInspector, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<SectionedInspector,void,bool>::get_object(CallableCustomMethodPointer<SectionedInspector,void,bool> *this) {
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
         goto LAB_0010231d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010231d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010231d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<SectionedInspector, void>::get_object() const */undefined8 CallableCustomMethodPointer<SectionedInspector,void>::get_object(CallableCustomMethodPointer<SectionedInspector,void> *this) {
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
         goto LAB_0010241d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010241d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010241d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */void HSplitContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010f010 == Control::_validate_property) {
      return;
   }

   SplitContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010f018 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* SectionedInspector::_validate_propertyv(PropertyInfo&) const */void SectionedInspector::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010f010 == Control::_validate_property) {
      return;
   }

   SplitContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10b2, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HSplitContainer::is_class_ptr(void*) const */uint HSplitContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10b2, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &SplitContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* SectionedInspector::is_class_ptr(void*) const */ulong SectionedInspector::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   if (in_RSI == &HSplitContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static()::ptr) {
      return CONCAT71(0x10b1, in_RSI == &HSplitContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static(), ::ptr);
   }

   return ( ulong )((uint)CONCAT71(0x10b2, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &SplitContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b2, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr));
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010f020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* SectionedInspector::_setv(StringName const&, Variant const&) */undefined8 SectionedInspector::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010f020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* HSplitContainer::_setv(StringName const&, Variant const&) */undefined8 HSplitContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010f020 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00102958) *//* HSplitContainer::_getv(StringName const&, Variant&) const */undefined8 HSplitContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010f028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x001029c8) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010f028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00102a38) *//* SectionedInspector::_getv(StringName const&, Variant&) const */undefined8 SectionedInspector::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010f028 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &SplitContainer::vtable;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102aa0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102aa0:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined**)this = &SplitContainer::vtable;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102b00;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102b00:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(code**)this = predelete_handler;
   if (*(long*)( this + 0xa60 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa60 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa50 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa50 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa48 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa48 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa40 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa40 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(undefined**)this = &SplitContainer::vtable;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102bdf;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102bdf:Control::~Control((Control*)this);
   return;
}
/* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(code**)this = predelete_handler;
   if (*(long*)( this + 0xa60 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa60 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa50 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa50 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa48 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa48 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa40 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa40 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(undefined**)this = &SplitContainer::vtable;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102d8f;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102d8f:Control::~Control((Control*)this);
   operator_delete(this, 0xa70);
   return;
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010f030 != Container::_notification) {
         BoxContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0010f030 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* HSplitContainer::_notificationv(int, bool) */void HSplitContainer::_notificationv(HSplitContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010f038 != Container::_notification) {
         SplitContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0010f038 == Container::_notification) {
      return;
   }

   SplitContainer::_notification(iVar1);
   return;
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
/* VBoxContainer::_get_class_namev() const */undefined8 *VBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103183:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103183;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_001031ee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_001031ee:return &_get_class_namev();
}
/* SectionedInspectorFilter::_get_class_namev() const */undefined8 *SectionedInspectorFilter::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103273:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103273;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SectionedInspectorFilter");
         goto LAB_001032de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SectionedInspectorFilter");
   LAB_001032de:return &_get_class_namev();
}
/* HSplitContainer::_get_class_namev() const */undefined8 *HSplitContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103363:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103363;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
         goto LAB_001033ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
   LAB_001033ce:return &_get_class_namev();
}
/* SectionedInspector::_get_class_namev() const */undefined8 *SectionedInspector::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103453:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103453;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SectionedInspector");
         goto LAB_001034be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SectionedInspector");
   LAB_001034be:return &_get_class_namev();
}
/* SectionedInspector::_notificationv(int, bool) */void SectionedInspector::_notificationv(SectionedInspector *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010f038 != Container::_notification) {
         SplitContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 4; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0010f038 == Container::_notification) {
      return;
   }

   SplitContainer::_notification(iVar1);
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
/* SplitContainer::~SplitContainer() */void SplitContainer::~SplitContainer(SplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(code**)this = predelete_handler;
   if (*(long*)( this + 0xa60 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa60 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa50 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa50 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa48 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa48 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa40 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa40 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(undefined**)this = &vtable;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010373f;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010373f:Control::~Control((Control*)this);
   return;
}
/* SplitContainer::~SplitContainer() */void SplitContainer::~SplitContainer(SplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(code**)this = predelete_handler;
   if (*(long*)( this + 0xa60 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa60 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa50 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa50 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa48 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa48 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (*(long*)( this + 0xa40 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xa40 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   bVar3 = StringName::configured != '\0';
   *(undefined**)this = &vtable;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001038ef;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001038ef:Control::~Control((Control*)this);
   operator_delete(this, 0xa70);
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
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x30 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x38 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar4 = *(long**)this;
   }
 while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}
/* SectionedInspectorFilter::~SectionedInspectorFilter() */void SectionedInspectorFilter::~SectionedInspectorFilter(SectionedInspectorFilter *this) {
   *(undefined***)this = &PTR__initialize_classv_0010aa00;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x180 ));
   Object::~Object((Object*)this);
   return;
}
/* SectionedInspectorFilter::_initialize_classv() */void SectionedInspectorFilter::_initialize_classv(void) {
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
      local_48 = "SectionedInspectorFilter";
      local_60 = 0;
      local_40 = 0x18;
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
/* SectionedInspectorFilter::get_class() const */void SectionedInspectorFilter::get_class(void) {
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
/* VBoxContainer::get_class() const */void VBoxContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "VBoxContainer");
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
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::get_class() const */void SectionedInspector::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "SectionedInspector");
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
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HSplitContainer::get_class() const */void HSplitContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "HSplitContainer");
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
            String::parse_latin1((StrRange*)in_RDI);
         }

      }

   }

   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Object::is_class(String const&) const */ulong Object::is_class(Object *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   uint uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   lVar2 = *(long*)( this + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (lVar2 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = String::operator ==(param_1, "Object");
            return uVar5;
         }

         LAB_001042e7:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_50 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_50 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
         }

      }

      uVar4 = String::operator ==(param_1, (String*)&local_50);
      lVar3 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar1 = (long*)( local_50 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if ((char)uVar4 != '\0') {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (ulong)uVar4;
         }

         goto LAB_001042e7;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* SectionedInspectorFilter::is_class(String const&) const */undefined8 SectionedInspectorFilter::is_class(SectionedInspectorFilter *this, String *param_1) {
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

      if (cVar4 != '\0') goto LAB_001043eb;
   }

   cVar4 = String::operator ==(param_1, "SectionedInspectorFilter");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Object::is_class((Object*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001043eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<SectionedInspector, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<SectionedInspector,void>::call(CallableCustomMethodPointer<SectionedInspector,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   uint uVar3;
   ulong *puVar4;
   code *UNRECOVERED_JUMPTABLE;
   ulong uVar5;
   long in_FS_OFFSET;
   bool bVar6;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar3 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar3 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
         LOCK();
         bVar6 = (char)ObjectDB::spin_lock == '\0';
         if (bVar6) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar6) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      uVar5 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
      if (uVar5 != ( *puVar4 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010462f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010462f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00104608. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_001046e0;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010462f:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC29, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001046e0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<SectionedInspector, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<SectionedInspector,void,bool>::call(CallableCustomMethodPointer<SectionedInspector,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar7;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
         LOCK();
         bVar7 = (char)ObjectDB::spin_lock == '\0';
         if (bVar7) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar7) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001048a9;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_001048a9;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar3 = _LC30;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            bVar7 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00104858. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar7);
               return;
            }

            goto LAB_0010495a;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 1;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 1;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_001048a9:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC29, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010495a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<SectionedInspector, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<SectionedInspector,void,String_const&>::call(CallableCustomMethodPointer<SectionedInspector,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   ulong *puVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   Variant local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (Variant)0x0;
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar6[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar7 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar7 & 1 ) != 0) {
                     pcVar7 = *(code**)( pcVar7 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar3 = _LC31;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  Variant::operator_cast_to_String(local_38);
                  ( *pcVar7 )((long*)( lVar1 + lVar2 ), local_38);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_00104a2e;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_40 = 0;
   String::parse_latin1((String*)&local_40, "\', can\'t call method.");
   uitos((ulong)local_50);
   operator+((char *)
   local_48,(String*)"Invalid Object id \'";
   String::operator +((String*)local_38, (String*)local_48);
   _err_print_error(&_LC29, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_00104a2e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* SectionedInspectorFilter::_property_get_revertv(StringName const&, Variant&) const */undefined8 SectionedInspectorFilter::_property_get_revertv(SectionedInspectorFilter *this, StringName *param_1, Variant *param_2) {
   long lVar1;
   long in_FS_OFFSET;
   bool bVar2;
   long local_88;
   String local_80[8];
   undefined8 local_78;
   undefined8 local_70;
   undefined *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   lVar1 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 == 0) {
      local_78 = 0;
   }
 else {
      local_78 = 0;
      if (*(char**)( lVar1 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar1 + 0x10 ));
      }
 else {
         String::parse_latin1((String*)&local_78, *(char**)( lVar1 + 8 ));
      }

   }

   local_70 = 0;
   local_60 = 1;
   local_68 = &_LC24;
   String::parse_latin1((StrRange*)&local_70);
   String::operator +((String*)&local_68, (String*)( this + 0x180 ));
   String::operator +(local_80, (String*)&local_68);
   StringName::StringName((StringName*)&local_88, local_80, false);
   Object::property_get_revert((StringName*)local_58);
   if (Variant::needs_deinit[*(int*)param_2] != '\0') {
      Variant::_clear_internal();
   }

   bVar2 = StringName::configured != '\0';
   *(undefined4*)param_2 = local_58[0];
   *(undefined8*)( param_2 + 8 ) = local_50;
   *(undefined8*)( param_2 + 0x10 ) = uStack_48;
   if (( bVar2 ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspectorFilter::_property_can_revertv(StringName const&) const */undefined4 SectionedInspectorFilter::_property_can_revertv(SectionedInspectorFilter *this, StringName *param_1) {
   long lVar1;
   StringName *pSVar2;
   undefined4 uVar3;
   long in_FS_OFFSET;
   long local_78;
   String local_70[8];
   undefined8 local_68;
   undefined8 local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   lVar1 = *(long*)param_1;
   pSVar2 = *(StringName**)( this + 0x178 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar1 == 0) {
      local_68 = 0;
   }
 else {
      local_68 = 0;
      if (*(char**)( lVar1 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar1 + 0x10 ));
      }
 else {
         String::parse_latin1((String*)&local_68, *(char**)( lVar1 + 8 ));
      }

   }

   local_60 = 0;
   local_50 = 1;
   local_58 = &_LC24;
   String::parse_latin1((StrRange*)&local_60);
   String::operator +((String*)&local_58, (String*)( this + 0x180 ));
   String::operator +(local_70, (String*)&local_58);
   StringName::StringName((StringName*)&local_78, local_70, false);
   uVar3 = Object::property_can_revert(pSVar2);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspectorFilter::_getv(StringName const&, Variant&) const */String SectionedInspectorFilter::_getv(SectionedInspectorFilter *this, StringName *param_1, Variant *param_2) {
   long lVar1;
   bool *pbVar2;
   String SVar3;
   long in_FS_OFFSET;
   bool bVar4;
   long local_78;
   long local_70;
   String local_68[8];
   long local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x178 ) == 0) {
      SVar3 = (String)0x0;
   }
 else {
      lVar1 = *(long*)param_1;
      if (lVar1 == 0) {
         local_78 = 0;
      }
 else {
         local_78 = 0;
         if (*(char**)( lVar1 + 8 ) == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar1 + 0x10 ));
         }
 else {
            String::parse_latin1((String*)&local_78, *(char**)( lVar1 + 8 ));
         }

      }

      if (( *(long*)( this + 0x180 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0x180 ) + -8 ) )) {
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "/");
         String::operator +(local_68, (String*)( this + 0x180 ));
         String::operator +((String*)&local_70, local_68);
         if (local_78 != local_70) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            local_78 = local_70;
            local_70 = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }

      pbVar2 = *(bool**)( this + 0x178 );
      local_68[0] = (String)0x0;
      StringName::StringName((StringName*)&local_60, (String*)&local_78, false);
      Object::get((StringName*)local_58, pbVar2);
      if (Variant::needs_deinit[*(int*)param_2] != '\0') {
         Variant::_clear_internal();
      }

      bVar4 = StringName::configured != '\0';
      *(undefined4*)param_2 = local_58[0];
      *(undefined8*)( param_2 + 8 ) = local_50;
      *(undefined8*)( param_2 + 0x10 ) = uStack_48;
      if (( bVar4 ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      SVar3 = local_68[0];
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return SVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspectorFilter::~SectionedInspectorFilter() */void SectionedInspectorFilter::~SectionedInspectorFilter(SectionedInspectorFilter *this) {
   *(undefined***)this = &PTR__initialize_classv_0010aa00;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x180 ));
   Object::~Object((Object*)this);
   operator_delete(this, 400);
   return;
}
/* SectionedInspectorFilter::_setv(StringName const&, Variant const&) */String SectionedInspectorFilter::_setv(SectionedInspectorFilter *this, StringName *param_1, Variant *param_2) {
   long lVar1;
   StringName *pSVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   String local_50[8];
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x178 ) == 0) {
      local_50[0] = (String)0x0;
   }
 else {
      lVar1 = *(long*)param_1;
      if (lVar1 == 0) {
         local_60 = 0;
      }
 else {
         local_60 = 0;
         if (*(char**)( lVar1 + 8 ) == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar1 + 0x10 ));
         }
 else {
            String::parse_latin1((String*)&local_60, *(char**)( lVar1 + 8 ));
         }

      }

      if (( *(long*)( this + 0x180 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0x180 ) + -8 ) )) {
         local_48 = 0;
         String::parse_latin1((String*)&local_48, "/");
         String::operator +(local_50, (String*)( this + 0x180 ));
         String::operator +((String*)&local_58, local_50);
         if (local_60 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            local_60 = local_58;
            local_58 = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      }

      pSVar2 = *(StringName**)( this + 0x178 );
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      Object::set(pSVar2, (Variant*)&local_48, (bool*)param_2);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_50[0];
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspectorFilter::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void SectionedInspectorFilter::_get_property_list(SectionedInspectorFilter *this, List *param_1) {
   String *this_00;
   PropertyInfo *pPVar1;
   char cVar2;
   int iVar3;
   long in_FS_OFFSET;
   undefined8 *local_68;
   undefined8 local_60;
   String local_58[8];
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(List**)( this + 0x178 ) != (List*)0x0) {
      local_68 = (undefined8*)0x0;
      Object::get_property_list(*(List**)( this + 0x178 ), SUB81((List<PropertyInfo,DefaultAllocator>*)&local_68, 0));
      if (local_68 != (undefined8*)0x0) {
         for (pPVar1 = (PropertyInfo*)*local_68; pPVar1 != (PropertyInfo*)0x0; pPVar1 = *(PropertyInfo**)( pPVar1 + 0x30 )) {
            this_00 = (String*)( pPVar1 + 8 );
            iVar3 = String::find_char((wchar32)this_00, 0x2f);
            cVar2 = String::operator ==(this_00, "resource_path");
            if (( ( ( cVar2 == '\0' ) && ( cVar2 = String::operator ==(this_00, "resource_name") ),cVar2 == '\0' ) ) && ( cVar2 = String::operator ==(this_00, "resource_local_to_scene") ),cVar2 == '\0') {
               if (iVar3 == -1) {
                  operator+((char *)&
                  local_48,(String*)"global/";
                  if (*(long*)( pPVar1 + 8 ) != local_48) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
                     *(long*)( pPVar1 + 8 ) = local_48;
                     local_48 = 0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "/");
               String::operator +((String*)&local_48, (String*)( this + 0x180 ));
               cVar2 = String::begins_with(this_00);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               if (cVar2 != '\0') {
                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "");
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "/");
                  String::operator +(local_58, (String*)( this + 0x180 ));
                  String::replace_first((String*)&local_48, this_00);
                  if (*(long*)( pPVar1 + 8 ) != local_48) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)this_00);
                     *(long*)( pPVar1 + 8 ) = local_48;
                     local_48 = 0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  if (( this[0x188] != (SectionedInspectorFilter)0x0 ) || ( iVar3 = iVar3 == -1 )) {
                     List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, pPVar1);
                  }

               }

            }

         }

      }

      List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_68);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String *param_1) {
   long lVar1;
   char *pcVar2;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar3 = *(long*)( lVar1 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         }
 else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00105723;
   }

   cVar4 = String::operator ==(param_1, "CanvasItem");
   if (cVar4 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00105723;
      }

      cVar4 = String::operator ==(param_1, "Node");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Object::is_class((Object*)this, param_1);
            return uVar5;
         }

         goto LAB_0010582e;
      }

   }

   LAB_00105723:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010582e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Container::is_class(String const&) const */undefined8 Container::is_class(Container *this, String *param_1) {
   long lVar1;
   char *pcVar2;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar3 = *(long*)( lVar1 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         }
 else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00105923;
   }

   cVar4 = String::operator ==(param_1, "Container");
   if (cVar4 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00105923;
      }

      cVar4 = String::operator ==(param_1, "Control");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = CanvasItem::is_class((CanvasItem*)this, param_1);
            return uVar5;
         }

         goto LAB_00105a2e;
      }

   }

   LAB_00105923:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105a2e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HSplitContainer::is_class(String const&) const */undefined8 HSplitContainer::is_class(HSplitContainer *this, String *param_1) {
   long lVar1;
   char *pcVar2;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar3 = *(long*)( lVar1 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         }
 else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00105b23;
   }

   cVar4 = String::operator ==(param_1, "HSplitContainer");
   if (cVar4 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00105b23;
      }

      cVar4 = String::operator ==(param_1, "SplitContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_00105c2e;
      }

   }

   LAB_00105b23:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105c2e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SectionedInspector::is_class(String const&) const */undefined8 SectionedInspector::is_class(SectionedInspector *this, String *param_1) {
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

      if (cVar4 != '\0') goto LAB_00105d3b;
   }

   cVar4 = String::operator ==(param_1, "SectionedInspector");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = HSplitContainer::is_class((HSplitContainer*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_00105d3b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
   long lVar1;
   char *pcVar2;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar3 = *(long*)( lVar1 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         }
 else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00105e73;
   }

   cVar4 = String::operator ==(param_1, "VBoxContainer");
   if (cVar4 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00105e73;
      }

      cVar4 = String::operator ==(param_1, "BoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_00105f7e;
      }

   }

   LAB_00105e73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105f7e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::_initialize_classv() */void VBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Object");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Node");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     if ((code*)PTR__bind_methods_0010f050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "Node");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "CanvasItem");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0010f040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "CanvasItem");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Control");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Control");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Container");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Container");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "BoxContainer");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if ((code*)PTR__bind_methods_0010f048 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "BoxContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "VBoxContainer");
      StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* HSplitContainer::_initialize_classv() */void HSplitContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (SplitContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Object");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Node");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     if ((code*)PTR__bind_methods_0010f050 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "Node");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "CanvasItem");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0010f040 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "CanvasItem");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Control");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Control");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Container");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Container");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "SplitContainer");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if ((code*)PTR__bind_methods_0010f058 != Container::_bind_methods) {
            SplitContainer::_bind_methods();
         }

         SplitContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "SplitContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "HSplitContainer");
      StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
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
            if (pvVar3 == (void*)0x0) goto LAB_00106bff;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00106bff:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined8 local_70;
   long local_68;
   int local_60;
   undefined8 local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC39;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC39;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
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

   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)CONCAT71(in_register_00000031, param_2), true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspectorFilter::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void SectionedInspectorFilter::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   List<PropertyInfo,DefaultAllocator> *this;
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
   this(List<PropertyInfo,DefaultAllocator> * CONCAT71(in_register_00000031, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "SectionedInspectorFilter";
   local_88 = 0;
   local_90 = 0;
   local_70 = 0x18;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SectionedInspectorFilter";
   local_98 = 0;
   local_70 = 0x18;
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

   List<PropertyInfo,DefaultAllocator>::push_back(this, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "SectionedInspectorFilter", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)this, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _get_property_list((SectionedInspectorFilter*)param_1, (List*)this);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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
   if (!param_2) {
      Node::_get_property_listv((List*)this, SUB81(param_1, 0));
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "CanvasItem";
   local_70 = 10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "CanvasItem";
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010f060 != Object::_get_property_list) {
      CanvasItem::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Node::_get_property_listv((List*)this, SUB81(param_1, 0));
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Control::_get_property_listv(Control *this, List *param_1, bool param_2) {
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
   if (!param_2) {
      CanvasItem::_get_property_listv((CanvasItem*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Control";
   local_70 = 7;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Control";
   local_98 = 0;
   local_70 = 7;
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "Control", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010f068 != CanvasItem::_get_property_list) {
      Control::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CanvasItem::_get_property_listv((CanvasItem*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Container::_get_property_listv(Container *this, List *param_1, bool param_2) {
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
   if (!param_2) {
      Control::_get_property_listv((Control*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Container";
   local_70 = 9;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Container";
   local_98 = 0;
   local_70 = 9;
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "Container", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Control::_get_property_listv((Control*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SplitContainer::_get_property_listv(SplitContainer *this, List *param_1, bool param_2) {
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
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "SplitContainer";
   local_70 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SplitContainer";
   local_98 = 0;
   local_70 = 0xe;
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "SplitContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Container::_get_property_listv((Container*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HSplitContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HSplitContainer::_get_property_listv(HSplitContainer *this, List *param_1, bool param_2) {
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
   if (!param_2) {
      SplitContainer::_get_property_listv((SplitContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "HSplitContainer";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HSplitContainer";
   local_98 = 0;
   local_70 = 0xf;
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "HSplitContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         SplitContainer::_get_property_listv((SplitContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SectionedInspector::_get_property_listv(SectionedInspector *this, List *param_1, bool param_2) {
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
   if (!param_2) {
      HSplitContainer::_get_property_listv((HSplitContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "SectionedInspector";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SectionedInspector";
   local_98 = 0;
   local_70 = 0x12;
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "SectionedInspector", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         HSplitContainer::_get_property_listv((HSplitContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BoxContainer::_get_property_listv(BoxContainer *this, List *param_1, bool param_2) {
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
   if (!param_2) {
      Container::_get_property_listv((Container*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "BoxContainer";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "BoxContainer";
   local_98 = 0;
   local_70 = 0xc;
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "BoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Container::_get_property_listv((Container*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* VBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void VBoxContainer::_get_property_listv(VBoxContainer *this, List *param_1, bool param_2) {
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
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "VBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "VBoxContainer";
   local_98 = 0;
   local_70 = 0xd;
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "VBoxContainer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         BoxContainer::_get_property_listv((BoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBind* create_method_bind<SectionedInspector>(void (SectionedInspector::*)()) */MethodBind *create_method_bind<SectionedInspector>(_func_void *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_void**)( this + 0x58 ) = param_1;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   *(undefined***)this = &PTR__gen_argument_type_0010b088;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SectionedInspector";
   local_30 = 0x12;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SectionedInspector::_bind_methods() [clone .cold] */void SectionedInspector::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SectionedInspector::_initialize_classv() */void SectionedInspector::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (HSplitContainer::initialize_class() == '\0') {
         if (SplitContainer::initialize_class() == '\0') {
            if (Container::initialize_class() == '\0') {
               if (Control::initialize_class() == '\0') {
                  if (CanvasItem::initialize_class() == '\0') {
                     if (Node::initialize_class() == '\0') {
                        Object::initialize_class();
                        local_50 = 0;
                        String::parse_latin1((String*)&local_50, "Object");
                        StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                        local_60 = 0;
                        String::parse_latin1((String*)&local_60, "Node");
                        StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                        ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                        if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                        if ((code*)PTR__bind_methods_0010f050 != Node::_bind_methods) {
                           Node::_bind_methods();
                        }

                        Node::initialize_class()::initialized =
                        '\x01';
                     }

                     local_50 = 0;
                     String::parse_latin1((String*)&local_50, "Node");
                     StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "CanvasItem");
                     StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                     ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                     CanvasItem::_bind_methods();
                     if ((code*)PTR__bind_compatibility_methods_0010f040 != Object::_bind_compatibility_methods) {
                        CanvasItem::_bind_compatibility_methods();
                     }

                     CanvasItem::initialize_class()::initialized =
                     '\x01';
                  }

                  local_50 = 0;
                  String::parse_latin1((String*)&local_50, "CanvasItem");
                  StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Control");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
                  if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
                  Control::_bind_methods();
                  Control::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "Control");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Container");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               Container::_bind_methods();
               Container::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Container");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "SplitContainer");
            StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
            if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if ((code*)PTR__bind_methods_0010f058 != Container::_bind_methods) {
               SplitContainer::_bind_methods();
            }

            SplitContainer::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "SplitContainer");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "HSplitContainer");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         HSplitContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "HSplitContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "SectionedInspector");
      StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
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
/* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::_lookup_pos(String const&, unsigned
   int&) const */undefined8 HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>::_lookup_pos(HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>> *this, String *param_1, uint *param_2) {
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
   uint uVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar11 = String::hash();
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      lVar17 = *(long*)( this + 0x10 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
      uVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         do {
            if (uVar13 == uVar11) {
               uVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar15 * 8 ) + 0x10 ), param_1);
               if ((char)uVar12 != '\0') {
                  *param_2 = uVar14;
                  return uVar12;
               }

               lVar17 = *(long*)( this + 0x10 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
            uVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, TreeItem*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, TreeItem*> > >::operator[](String const&) */undefined1 * __thiscall
HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
::operator[](HashMap<String,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,TreeItem*>>>
             *this,String *param_1){
   undefined8 *puVar1;
   void *pvVar2;
   void *__s;
   long lVar3;
   long lVar4;
   undefined1 auVar5[16];
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
   char cVar21;
   uint uVar22;
   uint uVar23;
   ulong uVar24;
   undefined8 uVar25;
   void *__s_00;
   undefined1(*pauVar26)[16];
   void *pvVar27;
   int iVar28;
   long lVar29;
   long lVar30;
   uint uVar31;
   ulong uVar32;
   undefined8 uVar33;
   uint *puVar34;
   uint uVar35;
   uint uVar36;
   uint uVar37;
   ulong uVar38;
   undefined1(*pauVar39)[16];
   undefined1(*pauVar40)[16];
   long in_FS_OFFSET;
   uint local_70;
   uint local_6c;
   undefined1 local_68[16];
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   cVar21 = _lookup_pos(this, param_1, &local_70);
   if (cVar21 == '\0') {
      uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) {
         uVar32 = (ulong)uVar31;
         uVar24 = uVar32 * 4;
         uVar38 = uVar32 * 8;
         uVar25 = Memory::alloc_static(uVar24, false);
         *(undefined8*)( this + 0x10 ) = uVar25;
         pvVar27 = (void*)Memory::alloc_static(uVar38, false);
         *(void**)( this + 8 ) = pvVar27;
         if (uVar31 != 0) {
            pvVar2 = *(void**)( this + 0x10 );
            if (( pvVar2 < (void*)( (long)pvVar27 + uVar38 ) ) && ( pvVar27 < (void*)( (long)pvVar2 + uVar24 ) )) {
               uVar24 = 0;
               do {
                  *(undefined4*)( (long)pvVar2 + uVar24 * 4 ) = 0;
                  *(undefined8*)( (long)pvVar27 + uVar24 * 8 ) = 0;
                  uVar24 = uVar24 + 1;
               }
 while ( uVar32 != uVar24 );
            }
 else {
               memset(pvVar2, 0, uVar24);
               memset(pvVar27, 0, uVar38);
            }

         }

      }

      local_6c = 0;
      cVar21 = _lookup_pos(this, param_1, &local_6c);
      if (cVar21 == '\0') {
         if ((float)uVar31 * __LC46 < (float)( *(int*)( this + 0x2c ) + 1 )) {
            uVar31 = *(uint*)( this + 0x28 );
            if (uVar31 == 0x1c) {
               pauVar26 = (undefined1(*) [16])0x0;
               _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
               goto LAB_00109390;
            }

            uVar24 = ( ulong )(uVar31 + 1);
            *(undefined4*)( this + 0x2c ) = 0;
            uVar23 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
            if (uVar31 + 1 < 2) {
               uVar24 = 2;
            }

            uVar31 = *(uint*)( hash_table_size_primes + uVar24 * 4 );
            uVar32 = (ulong)uVar31;
            *(int*)( this + 0x28 ) = (int)uVar24;
            pvVar27 = *(void**)( this + 8 );
            uVar24 = uVar32 * 4;
            uVar38 = uVar32 * 8;
            pvVar2 = *(void**)( this + 0x10 );
            uVar25 = Memory::alloc_static(uVar24, false);
            *(undefined8*)( this + 0x10 ) = uVar25;
            __s_00 = (void*)Memory::alloc_static(uVar38, false);
            *(void**)( this + 8 ) = __s_00;
            if (uVar31 != 0) {
               __s = *(void**)( this + 0x10 );
               if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
                  uVar24 = 0;
                  do {
                     *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
                     *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
                     uVar24 = uVar24 + 1;
                  }
 while ( uVar32 != uVar24 );
               }
 else {
                  memset(__s, 0, uVar24);
                  memset(__s_00, 0, uVar38);
               }

            }

            if (uVar23 != 0) {
               uVar24 = 0;
               do {
                  uVar31 = *(uint*)( (long)pvVar2 + uVar24 * 4 );
                  if (uVar31 != 0) {
                     lVar3 = *(long*)( this + 0x10 );
                     uVar36 = 0;
                     uVar35 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                     uVar38 = CONCAT44(0, uVar35);
                     lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = (ulong)uVar31 * lVar4;
                     auVar13._8_8_ = 0;
                     auVar13._0_8_ = uVar38;
                     lVar29 = SUB168(auVar5 * auVar13, 8);
                     puVar34 = (uint*)( lVar3 + lVar29 * 4 );
                     iVar28 = SUB164(auVar5 * auVar13, 8);
                     uVar37 = *puVar34;
                     uVar25 = *(undefined8*)( (long)pvVar27 + uVar24 * 8 );
                     while (uVar37 != 0) {
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = (ulong)uVar37 * lVar4;
                        auVar14._8_8_ = 0;
                        auVar14._0_8_ = uVar38;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = ( ulong )(( iVar28 + uVar35 ) - SUB164(auVar6 * auVar14, 8)) * lVar4;
                        auVar15._8_8_ = 0;
                        auVar15._0_8_ = uVar38;
                        uVar22 = SUB164(auVar7 * auVar15, 8);
                        uVar33 = uVar25;
                        if (uVar22 < uVar36) {
                           *puVar34 = uVar31;
                           puVar1 = (undefined8*)( (long)__s_00 + lVar29 * 8 );
                           uVar33 = *puVar1;
                           *puVar1 = uVar25;
                           uVar31 = uVar37;
                           uVar36 = uVar22;
                        }

                        uVar36 = uVar36 + 1;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = ( ulong )(iVar28 + 1) * lVar4;
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = uVar38;
                        lVar29 = SUB168(auVar8 * auVar16, 8);
                        puVar34 = (uint*)( lVar3 + lVar29 * 4 );
                        iVar28 = SUB164(auVar8 * auVar16, 8);
                        uVar25 = uVar33;
                        uVar37 = *puVar34;
                     }
;
                     *(undefined8*)( (long)__s_00 + lVar29 * 8 ) = uVar25;
                     *puVar34 = uVar31;
                     *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
                  }

                  uVar24 = uVar24 + 1;
               }
 while ( uVar23 != uVar24 );
               Memory::free_static(pvVar27, false);
               Memory::free_static(pvVar2, false);
            }

         }

         local_58[0] = 0;
         local_68 = (undefined1[16])0x0;
         if (*(long*)param_1 == 0) {
            local_58[1] = 0;
            pauVar26 = (undefined1(*) [16])operator_new(0x20, "");
            *(undefined8*)pauVar26[1] = 0;
            *pauVar26 = (undefined1[16])0x0;
         }
 else {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
            lVar3 = local_58[0];
            uVar25 = local_68._0_8_;
            uVar33 = local_68._8_8_;
            local_58[1] = 0;
            pauVar26 = (undefined1(*) [16])operator_new(0x20, "");
            *(undefined8*)pauVar26[1] = 0;
            *(undefined8*)*pauVar26 = uVar25;
            *(undefined8*)( *pauVar26 + 8 ) = uVar33;
            if (lVar3 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar26 + 1 ), (CowData*)local_58);
            }

         }

         *(undefined8*)( pauVar26[1] + 8 ) = 0;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
         puVar1 = *(undefined8**)( this + 0x20 );
         if (puVar1 == (undefined8*)0x0) {
            *(undefined1(**) [16])( this + 0x18 ) = pauVar26;
         }
 else {
            *puVar1 = pauVar26;
            *(undefined8**)( *pauVar26 + 8 ) = puVar1;
         }

         *(undefined1(**) [16])( this + 0x20 ) = pauVar26;
         uVar23 = String::hash();
         lVar3 = *(long*)( this + 0x10 );
         uVar31 = 1;
         if (uVar23 != 0) {
            uVar31 = uVar23;
         }

         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar24 = CONCAT44(0, uVar23);
         auVar9._8_8_ = 0;
         auVar9._0_8_ = (ulong)uVar31 * lVar4;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar24;
         lVar30 = SUB168(auVar9 * auVar17, 8);
         lVar29 = *(long*)( this + 8 );
         puVar34 = (uint*)( lVar3 + lVar30 * 4 );
         iVar28 = SUB164(auVar9 * auVar17, 8);
         uVar35 = *puVar34;
         pauVar40 = pauVar26;
         if (uVar35 != 0) {
            uVar37 = 0;
            pauVar39 = pauVar26;
            do {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar35 * lVar4;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar24;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar23 + iVar28 ) - SUB164(auVar10 * auVar18, 8)) * lVar4;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar24;
               uVar36 = SUB164(auVar11 * auVar19, 8);
               pauVar40 = pauVar39;
               if (uVar36 < uVar37) {
                  *puVar34 = uVar31;
                  puVar1 = (undefined8*)( lVar29 + lVar30 * 8 );
                  pauVar40 = (undefined1(*) [16])*puVar1;
                  *puVar1 = pauVar39;
                  uVar37 = uVar36;
                  uVar31 = uVar35;
               }

               uVar37 = uVar37 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar28 + 1) * lVar4;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar24;
               lVar30 = SUB168(auVar12 * auVar20, 8);
               puVar34 = (uint*)( lVar3 + lVar30 * 4 );
               iVar28 = SUB164(auVar12 * auVar20, 8);
               uVar35 = *puVar34;
               pauVar39 = pauVar40;
            }
 while ( uVar35 != 0 );
         }

         *(undefined1(**) [16])( lVar29 + lVar30 * 8 ) = pauVar40;
         *puVar34 = uVar31;
         *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
      }
 else {
         pauVar26 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_6c * 8 );
         *(undefined8*)( pauVar26[1] + 8 ) = 0;
      }

   }
 else {
      pauVar26 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_70 * 8 );
   }

   LAB_00109390:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pauVar26[1] + 8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_unref() */void CowData<String>::_unref(CowData<String> *this) {
   long *plVar1;
   CowData<char32_t> *pCVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   CowData<char32_t> *this_00;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      pCVar2 = *(CowData<char32_t>**)this;
      if (pCVar2 != (CowData<char32_t>*)0x0) {
         lVar3 = *(long*)( pCVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = pCVar2;
            do {
               lVar5 = lVar5 + 1;
               CowData<char32_t>::_unref(this_00);
               this_00 = this_00 + 8;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static(pCVar2 + -0x10, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* WARNING: Removing unreachable block (ram,0x00109758) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
         _err_print_error(&_LC29, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00109a40;
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

   LAB_00109a40:*(undefined4*)param_1 = 0;
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
   long local_48;
   undefined8 local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar1 = param_2[0x23];
         if (pVVar1 == (Variant*)0x0) {
            pVVar1 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         pVVar1 = param_2[1] + 0x20;
      }

      if (local_38 == *(long*)pVVar1) {
         if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_40 = 0;
         String::parse_latin1((String*)&local_40, "Cannot call method bind \'%s\' on placeholder instance.");
         vformat<StringName>((StringName*)&local_38, (String*)&local_40, &local_48);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00109e3e;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00109cf6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00109e3e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   code *UNRECOVERED_JUMPTABLE;
   long *plVar1;
   long in_FS_OFFSET;
   long local_48;
   undefined8 local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar1 = (long*)param_2[0x23];
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }

      }
 else {
         plVar1 = (long*)( (long)param_2[1] + 0x20 );
      }

      if (local_38 == *plVar1) {
         if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_40 = 0;
         String::parse_latin1((String*)&local_40, "Cannot call method bind \'%s\' on placeholder instance.");
         vformat<StringName>((StringName*)&local_38, (String*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x16b, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00109fee;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00109ea6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00109fee:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SectionedInspector::_bind_methods() */void SectionedInspector::_GLOBAL__sub_I__bind_methods(void) {
   undefined8 uStack_8;
   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (OptionButton::base_property_helper != '\0') {
      return;
   }

   OptionButton::base_property_helper = 1;
   OptionButton::base_property_helper._64_8_ = 0;
   OptionButton::base_property_helper._56_8_ = 2;
   OptionButton::base_property_helper._0_16_ = (undefined1[16])0x0;
   OptionButton::base_property_helper._24_16_ = (undefined1[16])0x0;
   OptionButton::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, OptionButton::base_property_helper, &__dso_handle, uStack_8);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* SectionedInspectorFilter::~SectionedInspectorFilter() */void SectionedInspectorFilter::~SectionedInspectorFilter(SectionedInspectorFilter *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* SplitContainer::~SplitContainer() */void SplitContainer::~SplitContainer(SplitContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<SectionedInspector, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<SectionedInspector, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<SectionedInspector, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SectionedInspector,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SectionedInspector,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


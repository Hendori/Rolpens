/* ImportDefaultsEditor::~ImportDefaultsEditor() */void ImportDefaultsEditor::~ImportDefaultsEditor(ImportDefaultsEditor *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(undefined***)this = &PTR__initialize_classv_0010aba0;
   pOVar1 = *(Object**)( this + 0xa30 );
   cVar2 = predelete_handler(pOVar1);
   if (cVar2 != '\0') {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
   }

   bVar3 = StringName::configured != '\0';
   *(code**)this = predelete_handler;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100089;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00100089:Control::~Control((Control*)this);
   return;
}
/* ImportDefaultsEditor::~ImportDefaultsEditor() */void ImportDefaultsEditor::~ImportDefaultsEditor(ImportDefaultsEditor *this) {
   ~ImportDefaultsEditor(this)
   ;;
   operator_delete(this, 0xa38);
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
/* ImportDefaultsEditor::_notification(int) */void ImportDefaultsEditor::_notification(ImportDefaultsEditor *this, int param_1) {
   if (param_1 != 1) {
      return;
   }

   EditorInspector::edit(*(Object**)( this + 0xa28 ));
   return;
}
/* ImportDefaultsEditor::ImportDefaultsEditor() */void ImportDefaultsEditor::ImportDefaultsEditor(ImportDefaultsEditor *this) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   String_conflict *pSVar4;
   BoxContainer *this_00;
   Label *this_01;
   OptionButton *this_02;
   CallableCustom *this_03;
   Button *pBVar5;
   EditorInspector *this_04;
   CenterContainer *this_05;
   Object *this_06;
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   BoxContainer::BoxContainer((BoxContainer*)this, true);
   this[0xa0c] = (ImportDefaultsEditor)0x1;
   *(undefined***)this = &PTR__initialize_classv_0010aba0;
   *(undefined8*)( this + 0xa30 ) = 0;
   *(undefined1(*) [16])( this + 0xa10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xa20 ) = (undefined1[16])0x0;
   pSVar4 = (String_conflict*)ProjectSettings::get_singleton();
   local_60 = 0;
   local_50 = 0x12;
   local_58 = "importer_defaults/";
   String::parse_latin1((StrRange*)&local_60);
   ProjectSettings::add_hidden_prefix(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, false);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_0010a6c8;
   postinitialize_handler((Object*)this_00);
   this_01 = (Label*)operator_new(0xad8, "");
   local_58 = "";
   local_60 = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "Importer:";
   local_68 = 0;
   local_50 = 9;
   String::parse_latin1((StrRange*)&local_68);
   TTR((String_conflict*)&local_58, (String_conflict*)&local_68);
   Label::Label(this_01, (String_conflict*)&local_58);
   postinitialize_handler((Object*)this_01);
   Node::add_child(this_00, this_01, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   this_02 = (OptionButton*)operator_new(0xd00, "");
   local_58 = (char*)0x0;
   OptionButton::OptionButton(this_02, (String_conflict*)&local_58);
   postinitialize_handler((Object*)this_02);
   *(OptionButton**)( this + 0xa10 ) = this_02;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   Node::add_child(this_00, *(undefined8*)( this + 0xa10 ), 0, 0);
   BoxContainer::add_spacer(SUB81(this_00, 0));
   plVar1 = *(long**)( this + 0xa10 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   this_03 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_03);
   *(undefined1(*) [16])( this_03 + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this_03 + 0x40 ) = 0;
   uVar3 = *(undefined8*)( this + 0x60 );
   *(undefined***)this_03 = &PTR_hash_0010af18;
   *(undefined8*)( this_03 + 0x30 ) = uVar3;
   *(code**)( this_03 + 0x38 ) = _importer_selected;
   *(undefined8*)( this_03 + 0x10 ) = 0;
   *(undefined**)( this_03 + 0x20 ) = &_LC16;
   *(ImportDefaultsEditor**)( this_03 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)this_03, (int)this_03 + 0x28);
   *(char**)( this_03 + 0x20 ) = "ImportDefaultsEditor::_importer_selected";
   Callable::Callable((Callable*)&local_58, this_03);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x260, (String_conflict*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   pBVar5 = (Button*)operator_new(0xc10, "");
   local_58 = (char*)0x0;
   Button::Button(pBVar5, (String_conflict*)&local_58);
   postinitialize_handler((Object*)pBVar5);
   *(Button**)( this + 0xa20 ) = pBVar5;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = "";
   local_60 = 0;
   pSVar4 = *(String_conflict**)( this + 0xa20 );
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "Reset to Defaults";
   local_68 = 0;
   local_50 = 0x11;
   String::parse_latin1((StrRange*)&local_68);
   TTR((String_conflict*)&local_58, (String_conflict*)&local_68);
   Button::set_text(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa20 ), 0));
   plVar1 = *(long**)( this + 0xa20 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<ImportDefaultsEditor>((ImportDefaultsEditor*)&local_58, (char*)this, (_func_void*)"&ImportDefaultsEditor::_reset");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (String_conflict*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(this_00, *(undefined8*)( this + 0xa20 ), 0, 0);
   Node::add_child(this, this_00, 0, 0);
   this_04 = (EditorInspector*)operator_new(0xcb0, "");
   EditorInspector::EditorInspector(this_04);
   postinitialize_handler((Object*)this_04);
   *(EditorInspector**)( this + 0xa28 ) = this_04;
   Node::add_child(this, this_04, 0, 0);
   Control::set_v_size_flags(*(undefined8*)( this + 0xa28 ), 3);
   EditorInspector::set_use_doc_hints(SUB81(*(undefined8*)( this + 0xa28 ), 0));
   this_05 = (CenterContainer*)operator_new(0xa08, "");
   CenterContainer::CenterContainer(this_05);
   postinitialize_handler((Object*)this_05);
   pBVar5 = (Button*)operator_new(0xc10, "");
   local_58 = (char*)0x0;
   Button::Button(pBVar5, (String_conflict*)&local_58);
   postinitialize_handler((Object*)pBVar5);
   *(Button**)( this + 0xa18 ) = pBVar5;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = "";
   local_60 = 0;
   pSVar4 = *(String_conflict**)( this + 0xa18 );
   local_50 = 0;
   String::parse_latin1((StrRange*)&local_60);
   local_58 = "Save";
   local_68 = 0;
   local_50 = 4;
   String::parse_latin1((StrRange*)&local_68);
   TTR((String_conflict*)&local_58, (String_conflict*)&local_68);
   Button::set_text(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   plVar1 = *(long**)( this + 0xa18 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<ImportDefaultsEditor>((ImportDefaultsEditor*)&local_58, (char*)this, (_func_void*)"&ImportDefaultsEditor::_save");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (String_conflict*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   Node::add_child(this_05, *(undefined8*)( this + 0xa18 ), 0, 0);
   Node::add_child(this, this_05, 0, 0);
   this_06 = (Object*)operator_new(0x1e8, "");
   Object::Object(this_06);
   *(undefined***)this_06 = &PTR__initialize_classv_0010aa40;
   uVar3 = _LC30;
   *(undefined8*)( this_06 + 0x178 ) = 0;
   *(undefined8*)( this_06 + 0x1a8 ) = uVar3;
   *(undefined8*)( this_06 + 0x1d8 ) = uVar3;
   *(undefined8*)( this_06 + 0x1e0 ) = 0;
   *(undefined1(*) [16])( this_06 + 0x188 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_06 + 0x198 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_06 + 0x1b8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_06 + 0x1c8 ) = (undefined1[16])0x0;
   postinitialize_handler(this_06);
   *(Object**)( this + 0xa30 ) = this_06;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */void SortArray<String,_DefaultComparator<String>,true>::adjust_heap(long param_1, long param_2, long param_3, CowData *param_4, long param_5) {
   String_conflict *pSVar1;
   char cVar2;
   CowData<char32_t> *this;
   CowData<char32_t> *pCVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   long local_68;
   long local_48;
   long local_40;
   lVar6 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = param_2;
   if (lVar6 < param_3) {
      do {
         this(CowData<char32_t> * )(param_5 + ( lVar6 + -1 + param_1 ) * 8);
         pSVar1 = (String_conflict*)( param_5 + ( param_1 + lVar6 ) * 8 );
         cVar2 = String::operator <(pSVar1, (String_conflict*)this);
         lVar4 = lVar6 + -1;
         lVar5 = lVar6;
         if (cVar2 == '\0') {
            lVar5 = lVar6 + 1;
            this(CowData<char32_t> * pSVar1);
            lVar4 = lVar6;
         }

         pCVar3 = (CowData<char32_t>*)( param_5 + ( local_68 + param_1 ) * 8 );
         if (*(long*)pCVar3 != *(long*)this) {
            CowData<char32_t>::_ref(pCVar3, (CowData*)this);
         }

         lVar6 = lVar5 * 2;
         local_68 = lVar4;
      }
 while ( lVar6 < param_3 );
   }
 else {
      this(CowData<char32_t> * )(param_5 + ( param_2 + param_1 ) * 8);
      lVar4 = param_2;
   }

   pCVar3 = this;
   if (param_3 == lVar6) {
      lVar4 = param_3 + -1;
      pCVar3 = (CowData<char32_t>*)( param_5 + ( param_1 + lVar4 ) * 8 );
      if (*(long*)this != *(long*)pCVar3) {
         CowData<char32_t>::_ref(this, (CowData*)pCVar3);
      }

   }

   local_48 = 0;
   if (*(long*)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, param_4);
   }

   lVar6 = ( lVar4 + -1 ) - ( lVar4 + -1 >> 0x3f );
   while (param_2 < lVar4) {
      lVar5 = lVar6 >> 1;
      pSVar1 = (String_conflict*)( param_5 + ( param_1 + lVar5 ) * 8 );
      cVar2 = String::operator <(pSVar1, (String_conflict*)&local_48);
      pCVar3 = (CowData<char32_t>*)( param_5 + ( param_1 + lVar4 ) * 8 );
      if (cVar2 == '\0') break;
      if (*(long*)pCVar3 != *(long*)pSVar1) {
         CowData<char32_t>::_ref(pCVar3, (CowData*)pSVar1);
      }

      lVar6 = ( lVar5 + -1 ) - ( lVar5 + -1 >> 0x3f );
      pCVar3 = (CowData<char32_t>*)pSVar1;
      lVar4 = lVar5;
   }
;
   if (*(long*)pCVar3 != local_48) {
      CowData<char32_t>::_ref(pCVar3, (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00100fc4) *//* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */void SortArray<String,_DefaultComparator<String>,true>::introsort(long param_1, long param_2, String_conflict *param_3, long param_4) {
   long *plVar1;
   long *plVar2;
   char cVar3;
   String_conflict *pSVar4;
   String_conflict *pSVar5;
   long lVar6;
   long lVar7;
   String_conflict *pSVar8;
   CowData *pCVar9;
   String_conflict *pSVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   bool bVar13;
   long local_80;
   long local_68;
   long local_60;
   long local_48;
   long local_40;
   lVar12 = param_2 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x10 < lVar12) {
      local_80 = param_2;
      if (param_4 != 0) {
         pSVar4 = param_3 + param_1 * 8;
         local_68 = param_2;
         local_60 = param_4;
         LAB_00100b5e:local_60 = local_60 + -1;
         pSVar8 = param_3 + ( ( lVar12 >> 1 ) + param_1 ) * 8;
         pSVar5 = param_3 + local_68 * 8 + -8;
         cVar3 = String::operator <(pSVar4, pSVar8);
         if (cVar3 == '\0') {
            cVar3 = String::operator <(pSVar4, pSVar5);
            pSVar10 = pSVar4;
            if (cVar3 != '\0') goto LAB_00100bbc;
            cVar3 = String::operator <(pSVar8, pSVar5);
         }
 else {
            cVar3 = String::operator <(pSVar8, pSVar5);
            pSVar10 = pSVar8;
            if (cVar3 != '\0') goto LAB_00100bbc;
            cVar3 = String::operator <(pSVar4, pSVar5);
            pSVar8 = pSVar4;
         }

         pSVar10 = pSVar8;
         if (cVar3 != '\0') {
            pSVar10 = pSVar5;
         }

         LAB_00100bbc:local_48 = 0;
         plVar1 = (long*)( *(long*)pSVar10 + -0x10 );
         if (*(long*)pSVar10 != 0) {
            do {
               lVar12 = *plVar1;
               if (lVar12 == 0) goto LAB_00100bf4;
               LOCK();
               lVar11 = *plVar1;
               bVar13 = lVar12 == lVar11;
               if (bVar13) {
                  *plVar1 = lVar12 + 1;
                  lVar11 = lVar12;
               }

               UNLOCK();
            }
 while ( !bVar13 );
            if (lVar11 != -1) {
               local_48 = *(long*)pSVar10;
            }

         }

         LAB_00100bf4:pSVar8 = pSVar4;
         local_80 = param_1;
         lVar12 = local_68;
         do {
            cVar3 = String::operator <(pSVar8, (String_conflict*)&local_48);
            if (cVar3 == '\0') {
               LAB_00100c37:lVar12 = lVar12 + -1;
               pSVar5 = param_3 + lVar12 * 8;
               while (cVar3 = String::operator <((String_conflict*)&local_48, pSVar5),cVar3 != '\0') {
                  if (param_1 == lVar12) {
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
                     break;
                  }

                  lVar12 = lVar12 + -1;
                  pSVar5 = pSVar5 + -8;
               }
;
               if (lVar12 <= local_80) goto LAB_00100cd0;
               lVar11 = *(long*)pSVar8;
               *(undefined8*)pSVar8 = 0;
               if (*(long*)pSVar5 != 0) {
                  *(long*)pSVar8 = *(long*)pSVar5;
                  *(undefined8*)pSVar5 = 0;
               }

               if (lVar11 != 0) {
                  *(long*)pSVar5 = lVar11;
               }

            }
 else if (local_68 + -1 == local_80) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               goto LAB_00100c37;
            }

            pSVar8 = pSVar8 + 8;
            local_80 = local_80 + 1;
         }
 while ( true );
      }

      LAB_00100d9a:lVar11 = lVar12 + -2 >> 1;
      pCVar9 = (CowData*)( param_3 + param_1 * 8 );
      do {
         local_48 = 0;
         plVar1 = (long*)( *(long*)( pCVar9 + lVar11 * 8 ) + -0x10 );
         if (*(long*)( pCVar9 + lVar11 * 8 ) == 0) {
            adjust_heap(param_1, lVar11, lVar12, &local_48, param_3);
         }
 else {
            do {
               lVar6 = *plVar1;
               if (lVar6 == 0) goto LAB_00100dde;
               LOCK();
               lVar7 = *plVar1;
               bVar13 = lVar6 == lVar7;
               if (bVar13) {
                  *plVar1 = lVar6 + 1;
                  lVar7 = lVar6;
               }

               UNLOCK();
            }
 while ( !bVar13 );
            if (lVar7 != -1) {
               local_48 = *(long*)( pCVar9 + lVar11 * 8 );
            }

            LAB_00100dde:lVar6 = local_48;
            adjust_heap(param_1, lVar11, lVar12, &local_48, param_3);
            if (lVar6 != 0) {
               LOCK();
               plVar1 = (long*)( lVar6 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
               }

            }

         }

         if (lVar11 == 0) goto LAB_00100e4b;
         lVar11 = lVar11 + -1;
      }
 while ( true );
   }

   goto LAB_00100d6f;
   LAB_00100cd0:CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   introsort(local_80, local_68, param_3, local_60);
   lVar12 = local_80 - param_1;
   if (lVar12 < 0x11) goto LAB_00100d6f;
   local_68 = local_80;
   if (local_60 == 0) goto LAB_00100d9a;
   goto LAB_00100b5e;
   LAB_00100e4b:pSVar4 = param_3 + local_80 * 8 + -8;
   lVar12 = ( local_80 + -1 ) - param_1;
   do {
      plVar1 = (long*)( *(long*)pSVar4 + -0x10 );
      if (*(long*)pSVar4 == 0) {
         LAB_00100f58:if (*(long*)pCVar9 != *(long*)pSVar4) {
            CowData<char32_t>::_ref((CowData<char32_t>*)pSVar4, pCVar9);
         }

         LAB_00100f78:local_48 = 0;
         adjust_heap(param_1, 0, lVar12, &local_48, param_3);
      }
 else {
         do {
            lVar11 = *plVar1;
            if (lVar11 == 0) goto LAB_00100f58;
            LOCK();
            lVar6 = *plVar1;
            bVar13 = lVar11 == lVar6;
            if (bVar13) {
               *plVar1 = lVar11 + 1;
               lVar6 = lVar11;
            }

            UNLOCK();
         }
 while ( !bVar13 );
         if (lVar6 == -1) goto LAB_00100f58;
         lVar11 = *(long*)pSVar4;
         if (lVar11 != *(long*)pCVar9) {
            CowData<char32_t>::_ref((CowData<char32_t>*)pSVar4, pCVar9);
         }

         local_48 = 0;
         if (lVar11 == 0) goto LAB_00100f78;
         plVar1 = (long*)( lVar11 + -0x10 );
         do {
            lVar6 = *plVar1;
            if (lVar6 == 0) goto LAB_00100f9d;
            LOCK();
            lVar7 = *plVar1;
            bVar13 = lVar6 == lVar7;
            if (bVar13) {
               *plVar1 = lVar6 + 1;
               lVar7 = lVar6;
            }

            UNLOCK();
         }
 while ( !bVar13 );
         if (lVar7 == -1) {
            LAB_00100f9d:adjust_heap(param_1, 0, lVar12, &local_48, param_3);
         }
 else {
            local_48 = lVar11;
            adjust_heap(param_1, 0, lVar12, &local_48, param_3);
            LOCK();
            plVar2 = (long*)( lVar11 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

         LOCK();
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(plVar1, false);
         }

      }

      pSVar4 = (String_conflict*)( (CowData<char32_t>*)pSVar4 + -8 );
      bVar13 = 1 < lVar12;
      lVar12 = lVar12 + -1;
   }
 while ( bVar13 );
   LAB_00100d6f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* ImportDefaultsEditor::_save() */void ImportDefaultsEditor::_save(ImportDefaultsEditor *this) {
   char cVar1;
   int iVar2;
   StringName *pSVar3;
   Variant *pVVar4;
   long lVar5;
   long *plVar6;
   long in_FS_OFFSET;
   Dictionary local_78[8];
   long local_70;
   CowData<char32_t> local_68[8];
   CowData<char32_t> local_60[8];
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( *(long*)( this + 0xa30 ) + 0x1e0 ) != 0) {
      Dictionary::Dictionary(local_78);
      lVar5 = *(long*)( this + 0xa30 );
      plVar6 = *(long**)( lVar5 + 0x198 );
      if (plVar6 != (long*)0x0) {
         while (true) {
            pVVar4 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( lVar5 + 0x1b0 ), (StringName*)( plVar6 + 2 ));
            cVar1 = Variant::operator !=((Variant*)( plVar6 + 3 ), pVVar4);
            if (cVar1 != '\0') {
               Variant::Variant((Variant*)local_58, (StringName*)( plVar6 + 2 ));
               pVVar4 = (Variant*)Dictionary::operator []((Variant*)local_78);
               Variant::operator =(pVVar4, (Variant*)( plVar6 + 3 ));
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            plVar6 = (long*)*plVar6;
            if (plVar6 == (long*)0x0) break;
            lVar5 = *(long*)( this + 0xa30 );
         }
;
      }

      iVar2 = Dictionary::size();
      if (iVar2 == 0) {
         pSVar3 = (StringName*)ProjectSettings::get_singleton();
         local_58[0] = 0;
         local_58[1] = 0;
         local_50 = (undefined1[16])0x0;
      }
 else {
         pSVar3 = (StringName*)ProjectSettings::get_singleton();
         Variant::Variant((Variant*)local_58, local_78);
      }

      ( **(code**)( **(long**)( *(long*)( this + 0xa30 ) + 0x1e0 ) + 0x150 ) )(local_60);
      operator+((char *)
      local_68,(String_conflict*)"importer_defaults/";
      StringName::StringName((StringName*)&local_70, (String_conflict*)local_68, false);
      Object::set(pSVar3, (Variant*)&local_70, (bool*)local_58);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_60);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      ProjectSettings::get_singleton();
      ProjectSettings::save();
      Dictionary::~Dictionary(local_78);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ImportDefaultsEditor::_update_importer() */void ImportDefaultsEditor::_update_importer(ImportDefaultsEditor *this) {
   long *plVar1;
   uint uVar2;
   Object *pOVar3;
   void *pvVar4;
   long lVar5;
   code *pcVar6;
   char cVar7;
   int iVar8;
   int *piVar9;
   String_conflict *pSVar10;
   Variant *this_00;
   undefined4 *puVar11;
   Variant *pVVar12;
   long *plVar13;
   undefined1(*pauVar14)[16];
   long lVar15;
   char *pcVar16;
   undefined4 *puVar17;
   long lVar18;
   long in_FS_OFFSET;
   Object *local_b8;
   StrRange *local_b0;
   long *local_98;
   undefined8 *local_90;
   Dictionary local_88[8];
   CowData<char32_t> local_80[8];
   CowData<char32_t> local_78[8];
   long local_70;
   char *local_68;
   size_t local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = (long*)0x0;
   ResourceFormatImporter::get_importers(ResourceFormatImporter::singleton);
   if (( local_98 != (long*)0x0 ) && ( plVar13 = (long*)*local_98 ),plVar13 != (long*)0x0) {
      do {
         OptionButton::get_selected();
         OptionButton::get_item_text((int)(String_conflict*)&local_68);
         ( **(code**)( *(long*)*plVar13 + 0x158 ) )((String_conflict*)&local_70);
         cVar7 = String::operator ==((String_conflict*)&local_70, (String_conflict*)&local_68);
         lVar15 = local_70;
         if (local_70 != 0) {
            LOCK();
            plVar1 = (long*)( local_70 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_70 = 0;
               Memory::free_static((void*)( lVar15 + -0x10 ), false);
            }

         }

         pcVar16 = local_68;
         if (local_68 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = (char*)0x0;
               Memory::free_static(pcVar16 + -0x10, false);
            }

         }

         if (cVar7 != '\0') {
            pOVar3 = (Object*)*plVar13;
            if (pOVar3 != (Object*)0x0) {
               cVar7 = RefCounted::reference();
               local_b8 = (Object*)0x0;
               if (cVar7 != '\0') {
                  local_b8 = pOVar3;
               }

               goto LAB_001014ab;
            }

            break;
         }

         plVar13 = (long*)plVar13[1];
      }
 while ( plVar13 != (long*)0x0 );
   }

   local_b8 = (Object*)0x0;
   LAB_001014ab:local_b0 = (StrRange*)&local_70;
   lVar15 = *(long*)( this + 0xa30 );
   plVar13 = *(long**)( lVar15 + 0x178 );
   if (plVar13 != (long*)0x0) {
      do {
         pvVar4 = (void*)*plVar13;
         if (pvVar4 == (void*)0x0) {
            lVar15 = *(long*)( this + 0xa30 );
            goto LAB_00101571;
         }

         if (*(long**)( (long)pvVar4 + 0x40 ) == plVar13) {
            lVar18 = *(long*)( (long)pvVar4 + 0x30 );
            lVar5 = *(long*)( (long)pvVar4 + 0x38 );
            *plVar13 = lVar18;
            if (pvVar4 == (void*)plVar13[1]) {
               plVar13[1] = lVar5;
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x30 ) = lVar18;
               lVar18 = *(long*)( (long)pvVar4 + 0x30 );
            }

            if (lVar18 != 0) {
               *(long*)( lVar18 + 0x38 ) = lVar5;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar4 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar4 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar4 + 8 ));
            Memory::free_static(pvVar4, false);
            *(int*)( plVar13 + 2 ) = (int)plVar13[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar13 = *(long**)( lVar15 + 0x178 );
      }
 while ( (int)plVar13[2] != 0 );
      Memory::free_static(plVar13, false);
      *(undefined8*)( lVar15 + 0x178 ) = 0;
      lVar15 = *(long*)( this + 0xa30 );
   }

   LAB_00101571:lVar18 = lVar15;
   if (( *(long*)( lVar15 + 0x188 ) != 0 ) && ( *(int*)( lVar15 + 0x1ac ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar15 + 0x1a8 ) * 4 );
      if (uVar2 != 0) {
         lVar18 = 0;
         do {
            piVar9 = (int*)( *(long*)( lVar15 + 400 ) + lVar18 );
            if (*piVar9 != 0) {
               *piVar9 = 0;
               pvVar4 = *(void**)( *(long*)( lVar15 + 0x188 ) + lVar18 * 2 );
               if (Variant::needs_deinit[*(int*)( (long)pvVar4 + 0x18 )] != '\0') {
                  Variant::_clear_internal();
               }

               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar4 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar4, false);
               *(undefined8*)( *(long*)( lVar15 + 0x188 ) + lVar18 * 2 ) = 0;
            }

            lVar18 = lVar18 + 4;
         }
 while ( lVar18 != (ulong)uVar2 << 2 );
         lVar18 = *(long*)( this + 0xa30 );
      }

      *(undefined4*)( lVar15 + 0x1ac ) = 0;
      *(undefined1(*) [16])( lVar15 + 0x198 ) = (undefined1[16])0x0;
   }

   pOVar3 = *(Object**)( lVar18 + 0x1e0 );
   if (pOVar3 == local_b8) {
      LAB_00101c96:if (local_b8 != (Object*)0x0) goto LAB_001016ac;
      LAB_00101a35:BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa18 ), 0));
      BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa20 ), 0));
   }
 else {
      *(Object**)( lVar18 + 0x1e0 ) = local_b8;
      if (local_b8 == (Object*)0x0) {
         if (( ( pOVar3 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) goto LAB_00101c7f;
         goto LAB_00101a35;
      }

      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
         *(undefined8*)( lVar18 + 0x1e0 ) = 0;
      }

      if (( ( pOVar3 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) {
         LAB_00101c7f:( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
         goto LAB_00101c96;
      }

      LAB_001016ac:local_90 = (undefined8*)0x0;
      pcVar6 = *(code**)( *(long*)local_b8 + 0x1b0 );
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1(local_b0);
      ( *pcVar6 )(local_b8, local_b0, (List<ResourceImporter::ImportOption,DefaultAllocator>*)&local_90, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
      Dictionary::Dictionary(local_88);
      pSVar10 = (String_conflict*)ProjectSettings::get_singleton();
      ( **(code**)( *(long*)local_b8 + 0x150 ) )(local_b0, local_b8);
      operator+((char *)&
      local_68,(String_conflict*)"importer_defaults/";
      cVar7 = ProjectSettings::has_setting(pSVar10);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
      if (cVar7 != '\0') {
         ProjectSettings::get_singleton();
         ( **(code**)( *(long*)local_b8 + 0x150 ) )(local_80, local_b8);
         operator+((char *)
         local_78,(String_conflict*)"importer_defaults/";
         StringName::StringName((StringName*)local_b0, (String_conflict*)local_78, false);
         ProjectSettings::get_setting_with_override((StringName*)local_58);
         Variant::operator_cast_to_Dictionary((Variant*)&local_68);
         Dictionary::operator =(local_88, (Dictionary*)&local_68);
         Dictionary::~Dictionary((Dictionary*)&local_68);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref(local_78);
         CowData<char32_t>::_unref(local_80);
      }

      if (( local_90 != (undefined8*)0x0 ) && ( puVar17 = (undefined4*)*local_90 ),puVar17 != (undefined4*)0x0) {
         do {
            lVar15 = *(long*)( this + 0xa30 );
            if (*(long*)( lVar15 + 0x178 ) == 0) {
               pauVar14 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( lVar15 + 0x178 ) = pauVar14;
               *(undefined4*)pauVar14[1] = 0;
               *pauVar14 = (undefined1[16])0x0;
            }

            pSVar10 = (String_conflict*)( puVar17 + 2 );
            puVar11 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar11 + 8 ) = 0;
            *(undefined1(*) [16])( puVar11 + 2 ) = (undefined1[16])0x0;
            lVar18 = *(long*)( puVar17 + 2 );
            *puVar11 = 0;
            puVar11[6] = 0;
            puVar11[10] = 6;
            *(undefined8*)( puVar11 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar11 + 0xc ) = (undefined1[16])0x0;
            *puVar11 = *puVar17;
            if (lVar18 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 2 ), (CowData*)pSVar10);
            }

            StringName::operator =((StringName*)( puVar11 + 4 ), (StringName*)( puVar17 + 4 ));
            puVar11[6] = puVar17[6];
            if (*(long*)( puVar11 + 8 ) != *(long*)( puVar17 + 8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar11 + 8 ), (CowData*)( puVar17 + 8 ));
            }

            puVar11[10] = puVar17[10];
            plVar13 = *(long**)( lVar15 + 0x178 );
            lVar15 = plVar13[1];
            *(undefined8*)( puVar11 + 0xc ) = 0;
            *(long**)( puVar11 + 0x10 ) = plVar13;
            *(long*)( puVar11 + 0xe ) = lVar15;
            if (lVar15 != 0) {
               *(undefined4**)( lVar15 + 0x30 ) = puVar11;
            }

            plVar13[1] = (long)puVar11;
            if (*plVar13 == 0) {
               *plVar13 = (long)puVar11;
            }

            *(int*)( plVar13 + 2 ) = (int)plVar13[2] + 1;
            Variant::Variant((Variant*)local_58, pSVar10);
            cVar7 = Dictionary::has((Variant*)local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (cVar7 == '\0') {
               lVar15 = *(long*)( this + 0xa30 );
               StringName::StringName((StringName*)&local_68, pSVar10, false);
               pVVar12 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( lVar15 + 0x180 ), (StringName*)&local_68);
               Variant::operator =(pVVar12, (Variant*)( puVar17 + 0xc ));
               if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                  StringName::unref();
               }

            }
 else {
               Variant::Variant((Variant*)local_58, pSVar10);
               pVVar12 = (Variant*)Dictionary::operator []((Variant*)local_88);
               lVar15 = *(long*)( this + 0xa30 );
               StringName::StringName((StringName*)&local_68, pSVar10, false);
               this_00 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( lVar15 + 0x180 ), (StringName*)&local_68);
               Variant::operator =(this_00, pVVar12);
               if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                  StringName::unref();
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            lVar15 = *(long*)( this + 0xa30 );
            StringName::StringName((StringName*)&local_68, pSVar10, false);
            pVVar12 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( lVar15 + 0x1b0 ), (StringName*)&local_68);
            Variant::operator =(pVVar12, (Variant*)( puVar17 + 0xc ));
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

            puVar17 = *(undefined4**)( puVar17 + 0x12 );
         }
 while ( puVar17 != (undefined4*)0x0 );
      }

      BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa18 ), 0));
      BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa20 ), 0));
      Dictionary::~Dictionary(local_88);
      List<ResourceImporter::ImportOption,DefaultAllocator>::~List((List<ResourceImporter::ImportOption,DefaultAllocator>*)&local_90);
   }

   Object::notify_property_list_changed();
   pSVar10 = *(String_conflict**)( this + 0xa28 );
   if (*(long*)( local_b8 + 8 ) == 0) {
      plVar13 = *(long**)( local_b8 + 0x118 );
      if (plVar13 != (long*)0x0) goto LAB_00101a80;
      if (*(code**)( *(long*)local_b8 + 0x40 ) != ResourceImporter::_get_class_namev) {
         plVar13 = (long*)( **(code**)( *(long*)local_b8 + 0x40 ) )(local_b8);
         goto LAB_00101a80;
      }

      if (( ResourceImporter::_get_class_namev():: ) && ( iVar8 = __cxa_guard_acquire(&ResourceImporter::_get_class_namev(), ::_class_name_static) ),iVar8 != 0) {
         ResourceImporter::_get_class_namev()
         __cxa_atexit(StringName::~StringName, &ResourceImporter::_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&ResourceImporter::_get_class_namev(), ::_class_name_static);
      }

      if (ResourceImporter::_get_class_namev() == 0) {
         LAB_00101c2c:StringName::assign_static_unique_class_name((StringName*)&ResourceImporter::_get_class_namev(), ::_class_name_static, "ResourceImporter");
         plVar13= &ResourceImporter::_get_class_namev()::_class_name_static
         ;
         goto LAB_00101a80;
      }

      pcVar16 = *(char**)( ResourceImporter::_get_class_namev():: );
      if (pcVar16 == (char*)0x0) {
         if (( *(long*)( ResourceImporter::_get_class_namev():: ) == 0 ) || ( lVar15 = ResourceImporter::_get_class_namev() * (uint*)( *(long*)( ResourceImporter::_get_class_namev():: ) + -8 ) < 2 )) goto LAB_00101c2c;
         goto LAB_00101db0;
      }

   }
 else {
      plVar13 = (long*)( *(long*)( local_b8 + 8 ) + 0x20 );
      LAB_00101a80:lVar15 = *plVar13;
      if (lVar15 == 0) {
         local_70 = 0;
         goto LAB_00101ac3;
      }

      pcVar16 = *(char**)( lVar15 + 8 );
      if (pcVar16 == (char*)0x0) {
         LAB_00101db0:local_70 = 0;
         if (*(long*)( lVar15 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_b0, (CowData*)( lVar15 + 0x10 ));
         }

         goto LAB_00101ac3;
      }

   }

   local_70 = 0;
   local_60 = strlen(pcVar16);
   local_68 = pcVar16;
   String::parse_latin1(local_b0);
   LAB_00101ac3:EditorInspector::set_object_class(pSVar10);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
   EditorInspector::edit(*(Object**)( this + 0xa28 ));
   cVar7 = RefCounted::unreference();
   if (( cVar7 != '\0' ) && ( cVar7 = cVar7 != '\0' )) {
      ( **(code**)( *(long*)local_b8 + 0x140 ) )(local_b8);
      Memory::free_static(local_b8, false);
   }

   List<Ref<ResourceImporter>,DefaultAllocator>::~List((List<Ref<ResourceImporter>,DefaultAllocator>*)&local_98);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ImportDefaultsEditor::_importer_selected(int) */void ImportDefaultsEditor::_importer_selected(int param_1) {
   undefined4 in_register_0000003c;
   _update_importer((ImportDefaultsEditor*)CONCAT44(in_register_0000003c, param_1));
   return;
}
/* ImportDefaultsEditor::clear() */void ImportDefaultsEditor::clear(ImportDefaultsEditor *this) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   CowData *pCVar9;
   CowData *pCVar10;
   long lVar11;
   CowData<char32_t> *pCVar12;
   CowData<char32_t> *pCVar13;
   undefined8 *puVar14;
   CowData<char32_t> *pCVar15;
   long in_FS_OFFSET;
   bool bVar16;
   CowData<char32_t> *local_a8;
   long local_78;
   long *local_70;
   long local_68;
   long local_60;
   long local_58;
   CowData *local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = 0;
   iVar4 = OptionButton::get_selected();
   if (-1 < iVar4) {
      OptionButton::get_selected();
      OptionButton::get_item_text((int)(CowData<char32_t>*)&local_58);
      if (local_78 != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         local_78 = local_58;
         local_58 = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   }

   OptionButton::clear();
   local_70 = (long*)0x0;
   ResourceFormatImporter::get_importers(ResourceFormatImporter::singleton);
   local_50[0] = (CowData*)0x0;
   if (( local_70 == (long*)0x0 ) || ( puVar14 = (undefined8*)*local_70 ),puVar14 == (undefined8*)0x0) goto LAB_00102588;
   do {
      ( **(code**)( *(long*)*puVar14 + 0x158 ) )((CowData<char32_t>*)&local_68);
      local_60 = 0;
      if (local_68 == 0) {
         LAB_00101f9a:lVar8 = local_68;
         lVar11 = local_68;
         if (local_50[0] == (CowData*)0x0) goto LAB_001020ac;
         LAB_00101fa8:iVar4 = CowData<String>::resize<false>((CowData<String>*)local_50, *(long*)( local_50[0] + -8 ) + 1);
         if (iVar4 != 0) goto LAB_001020c8;
         LAB_00101fc0:if (local_50[0] == (CowData*)0x0) {
            lVar7 = -1;
            lVar11 = 0;
         }
 else {
            lVar11 = *(long*)( local_50[0] + -8 );
            lVar7 = lVar11 + -1;
            if (-1 < lVar7) {
               CowData<String>::_copy_on_write((CowData<String>*)local_50);
               if (*(long*)( local_50[0] + lVar7 * 8 ) != lVar8) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( local_50[0] + lVar7 * 8 ), (CowData*)&local_60);
               }

               goto LAB_00101ffd;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar11, "p_index", "size()", "", false, false);
      }
 else {
         plVar1 = (long*)( local_68 + -0x10 );
         do {
            lVar8 = *plVar1;
            if (lVar8 == 0) goto LAB_00102099;
            LOCK();
            lVar11 = *plVar1;
            bVar16 = lVar8 == lVar11;
            if (bVar16) {
               *plVar1 = lVar8 + 1;
               lVar11 = lVar8;
            }

            UNLOCK();
         }
 while ( !bVar16 );
         if (lVar11 != -1) {
            local_60 = local_68;
            goto LAB_00101f9a;
         }

         LAB_00102099:lVar8 = local_60;
         lVar11 = 0;
         if (local_50[0] != (CowData*)0x0) goto LAB_00101fa8;
         LAB_001020ac:iVar4 = CowData<String>::resize<false>((CowData<String>*)local_50, 1);
         lVar8 = lVar11;
         if (iVar4 == 0) goto LAB_00101fc0;
         LAB_001020c8:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_00101ffd:if (lVar8 != 0) {
         LOCK();
         plVar1 = (long*)( lVar8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

      lVar8 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar8 + -0x10 ), false);
         }

      }

      puVar14 = (undefined8*)puVar14[1];
   }
 while ( puVar14 != (undefined8*)0x0 );
   if (local_50[0] == (CowData*)0x0) goto LAB_00102588;
   lVar8 = *(long*)( local_50[0] + -8 );
   if (lVar8 == 0) {
      lVar8 = 0;
      if (local_78 == 0) goto LAB_00102856;
      pCVar10 = local_50[0];
      pCVar9 = local_50[0];
      if (*(uint*)( local_78 + -8 ) < 2) goto LAB_0010212b;
   }
 else {
      CowData<String>::_copy_on_write((CowData<String>*)local_50);
      pCVar9 = local_50[0];
      if (lVar8 == 1) {
         SortArray<String,_DefaultComparator<String>,true>::introsort(0, 1, (String_conflict*)local_50[0], 0);
         pCVar10 = pCVar9;
      }
 else {
         lVar7 = 0;
         lVar11 = lVar8;
         do {
            lVar11 = lVar11 >> 1;
            lVar7 = lVar7 + 1;
         }
 while ( lVar11 != 1 );
         SortArray<String,_DefaultComparator<String>,true>::introsort(0, lVar8, (String_conflict*)local_50[0], lVar7 * 2);
         pCVar12 = (CowData<char32_t>*)( pCVar9 + 8 );
         if (lVar8 < 0x11) {
            lVar11 = 1;
            pCVar15 = pCVar12;
            do {
               local_60 = 0;
               plVar1 = (long*)( *(long*)pCVar15 + -0x10 );
               if (*(long*)pCVar15 != 0) {
                  do {
                     lVar7 = *plVar1;
                     if (lVar7 == 0) goto LAB_001026e6;
                     LOCK();
                     lVar6 = *plVar1;
                     bVar16 = lVar7 == lVar6;
                     if (bVar16) {
                        *plVar1 = lVar7 + 1;
                        lVar6 = lVar7;
                     }

                     UNLOCK();
                  }
 while ( !bVar16 );
                  if (lVar6 != -1) {
                     local_60 = *(long*)pCVar15;
                  }

               }

               LAB_001026e6:cVar3 = String::operator <((String_conflict*)&local_60, (String_conflict*)pCVar9);
               pCVar10 = (CowData*)pCVar15;
               lVar7 = lVar11;
               if (cVar3 == '\0') {
                  local_68 = 0;
                  if (local_60 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_60);
                  }

                  while (true) {
                     pCVar13 = (CowData<char32_t>*)pCVar10;
                     pCVar10 = (CowData*)( pCVar13 + -8 );
                     cVar3 = String::operator <((String_conflict*)&local_68, (String_conflict*)pCVar10);
                     if (cVar3 == '\0') break;
                     if (pCVar13 == pCVar12) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        break;
                     }

                     if (*(long*)pCVar13 != *(long*)( pCVar13 + -8 )) {
                        CowData<char32_t>::_ref(pCVar13, pCVar10);
                     }

                  }
;
                  if (*(long*)pCVar13 != local_68) {
                     CowData<char32_t>::_ref(pCVar13, (CowData*)&local_68);
                  }

                  lVar7 = local_68;
                  if (local_68 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }

               }
 else {
                  do {
                     if (*(long*)pCVar10 != *(long*)( (CowData<char32_t>*)pCVar10 + -8 )) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)pCVar10, (CowData*)( (CowData<char32_t>*)pCVar10 + -8 ));
                     }

                     lVar7 = lVar7 + -1;
                     pCVar10 = (CowData*)( (CowData<char32_t>*)pCVar10 + -8 );
                  }
 while ( lVar7 != 0 );
                  if (*(long*)pCVar9 != local_60) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)pCVar9, (CowData*)&local_60);
                  }

               }

               lVar7 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }

               }

               lVar11 = lVar11 + 1;
               pCVar15 = pCVar15 + 8;
               pCVar10 = local_50[0];
            }
 while ( lVar8 != lVar11 );
         }
 else {
            lVar11 = 1;
            pCVar15 = pCVar12;
            do {
               local_60 = 0;
               plVar1 = (long*)( *(long*)pCVar15 + -0x10 );
               if (*(long*)pCVar15 != 0) {
                  do {
                     lVar7 = *plVar1;
                     if (lVar7 == 0) goto LAB_001022ce;
                     LOCK();
                     lVar6 = *plVar1;
                     bVar16 = lVar7 == lVar6;
                     if (bVar16) {
                        *plVar1 = lVar7 + 1;
                        lVar6 = lVar7;
                     }

                     UNLOCK();
                  }
 while ( !bVar16 );
                  if (lVar6 != -1) {
                     local_60 = *(long*)pCVar15;
                  }

               }

               LAB_001022ce:cVar3 = String::operator <((String_conflict*)&local_60, (String_conflict*)pCVar9);
               pCVar13 = pCVar15;
               if (cVar3 == '\0') {
                  local_68 = 0;
                  pCVar10 = (CowData*)pCVar15;
                  if (local_60 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_60);
                  }

                  while (true) {
                     pCVar13 = (CowData<char32_t>*)pCVar10;
                     pCVar10 = (CowData*)( pCVar13 + -8 );
                     cVar3 = String::operator <((String_conflict*)&local_68, (String_conflict*)pCVar10);
                     if (cVar3 == '\0') break;
                     if (pCVar13 == pCVar12) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        break;
                     }

                     if (*(long*)pCVar13 != *(long*)( pCVar13 + -8 )) {
                        CowData<char32_t>::_ref(pCVar13, pCVar10);
                     }

                  }
;
                  if (*(long*)pCVar13 != local_68) {
                     CowData<char32_t>::_ref(pCVar13, (CowData*)&local_68);
                  }

                  lVar7 = local_68;
                  if (local_68 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                     }

                  }

               }
 else {
                  do {
                     pCVar10 = (CowData*)( pCVar13 + -8 );
                     if (*(long*)pCVar13 != *(long*)( pCVar13 + -8 )) {
                        CowData<char32_t>::_ref(pCVar13, pCVar10);
                     }

                     pCVar13 = (CowData<char32_t>*)pCVar10;
                  }
 while ( pCVar10 != pCVar9 );
                  if (*(long*)pCVar9 != local_60) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)pCVar9, (CowData*)&local_60);
                  }

               }

               lVar7 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }

               }

               lVar11 = lVar11 + 1;
               pCVar15 = pCVar15 + 8;
            }
 while ( lVar11 != 0x10 );
            local_a8 = (CowData<char32_t>*)( pCVar9 + 0x80 );
            lVar11 = 0x10;
            do {
               local_60 = 0;
               plVar1 = (long*)( *(long*)local_a8 + -0x10 );
               pCVar9 = (CowData*)local_a8;
               lVar7 = lVar11;
               if (*(long*)local_a8 != 0) {
                  do {
                     lVar6 = *plVar1;
                     if (lVar6 == 0) goto LAB_001024cc;
                     LOCK();
                     lVar5 = *plVar1;
                     bVar16 = lVar6 == lVar5;
                     if (bVar16) {
                        *plVar1 = lVar6 + 1;
                        lVar5 = lVar6;
                     }

                     UNLOCK();
                  }
 while ( !bVar16 );
                  if (lVar5 != -1) {
                     local_60 = *(long*)local_a8;
                  }

               }

               LAB_001024cc:pCVar12 = (CowData<char32_t>*)pCVar9;
               lVar7 = lVar7 + -1;
               pCVar9 = (CowData*)( pCVar12 + -8 );
               cVar3 = String::operator <((String_conflict*)&local_60, (String_conflict*)pCVar9);
               if (cVar3 != '\0') {
                  if (lVar7 == 0) {
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     goto LAB_00102509;
                  }

                  if (*(long*)pCVar12 != *(long*)( pCVar12 + -8 )) {
                     CowData<char32_t>::_ref(pCVar12, pCVar9);
                  }

                  goto LAB_001024cc;
               }

               LAB_00102509:if (*(long*)pCVar12 != local_60) {
                  CowData<char32_t>::_ref(pCVar12, (CowData*)&local_60);
               }

               lVar7 = local_60;
               if (local_60 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_60 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_60 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }

               }

               lVar11 = lVar11 + 1;
               local_a8 = local_a8 + 8;
               pCVar10 = local_50[0];
            }
 while ( lVar8 != lVar11 );
         }

      }

      if (( local_78 == 0 ) || ( pCVar9 = pCVar10 * (uint*)( local_78 + -8 ) < 2 )) {
         if (pCVar10 == (CowData*)0x0) goto LAB_00102588;
         LAB_0010212b:lVar8 = *(long*)( pCVar10 + -8 );
         if (lVar8 < 1) {
            LAB_00102856:lVar11 = 0;
            LAB_001025e5:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar8, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         pCVar9 = local_50[0];
         if (*(long*)pCVar10 != local_78) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, pCVar10);
            pCVar9 = local_50[0];
         }

      }

      if (pCVar9 == (CowData*)0x0) goto LAB_00102588;
   }

   for (lVar11 = 0; lVar11 < *(long*)( pCVar9 + -8 ); lVar11 = lVar11 + 1) {
      OptionButton::add_item(*(String_conflict**)( this + 0xa10 ), (int)(String_conflict*)( pCVar9 + lVar11 * 8 ));
      lVar8 = *(long*)( pCVar9 + -8 );
      if (lVar8 <= lVar11) goto LAB_001025e5;
      cVar3 = String::operator ==((String_conflict*)( pCVar9 + lVar11 * 8 ), (String_conflict*)&local_78);
      if (cVar3 != '\0') {
         OptionButton::select((int)*(undefined8*)( this + 0xa10 ));
         _update_importer(this);
      }

   }

   LAB_00102588:CowData<String>::_unref((CowData<String>*)local_50);
   List<Ref<ResourceImporter>,DefaultAllocator>::~List((List<Ref<ResourceImporter>,DefaultAllocator>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ImportDefaultsEditor::_reset() */void ImportDefaultsEditor::_reset(ImportDefaultsEditor *this) {
   long lVar1;
   void *pvVar2;
   uint uVar3;
   int *piVar5;
   long *plVar6;
   uint uVar7;
   long lVar8;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   ulong uVar4;
   lVar1 = *(long*)( this + 0xa30 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( lVar1 + 0x1e0 ) == 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      uVar7 = *(uint*)( lVar1 + 0x1a8 );
      uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar7 * 4 );
      if (( *(int*)( lVar1 + 0x1ac ) != 0 ) && ( *(long*)( lVar1 + 0x188 ) != 0 )) {
         if (uVar3 != 0) {
            lVar8 = 0;
            do {
               piVar5 = (int*)( *(long*)( lVar1 + 400 ) + lVar8 );
               if (*piVar5 != 0) {
                  *piVar5 = 0;
                  pvVar2 = *(void**)( *(long*)( lVar1 + 0x188 ) + lVar8 * 2 );
                  if (Variant::needs_deinit[*(int*)( (long)pvVar2 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar2, false);
                  *(undefined8*)( *(long*)( lVar1 + 0x188 ) + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar3 << 2 );
            uVar7 = *(uint*)( lVar1 + 0x1a8 );
            uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar7 * 4 );
         }

         *(undefined4*)( lVar1 + 0x1ac ) = 0;
         *(undefined1(*) [16])( lVar1 + 0x198 ) = (undefined1[16])0x0;
      }

      if (uVar3 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0x1d8 ) * 4 )) {
         if (uVar7 != 0x1c) {
            uVar4 = (ulong)uVar7;
            do {
               uVar3 = (int)uVar4 + 1;
               uVar4 = (ulong)uVar3;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar1 + 0x1d8 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar4 * 4 )) {
                  if (uVar3 != uVar7) {
                     if (*(long*)( lVar1 + 0x188 ) == 0) {
                        *(uint*)( lVar1 + 0x1a8 ) = uVar3;
                     }
 else {
                        HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_resize_and_rehash((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( lVar1 + 0x180 ), uVar3);
                     }

                  }

                  goto LAB_00102962;
               }

            }
 while ( uVar3 != 0x1c );
         }

         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_00102962:if (( *(long*)( lVar1 + 0x1b8 ) != 0 ) && ( plVar6 = *(long**)( lVar1 + 0x1c8 ) ),plVar6 != (long*)0x0) {
         do {
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::insert(local_48, (Variant*)( lVar1 + 0x180 ), (bool)( (char)plVar6 + '\x10' ));
            plVar6 = (long*)*plVar6;
         }
 while ( plVar6 != (long*)0x0 );
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Object::notify_property_list_changed();
         return;
      }

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
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* ImportDefaultsEditorSettings::is_class_ptr(void*) const */uint ImportDefaultsEditorSettings::is_class_ptr(ImportDefaultsEditorSettings *this, void *param_1) {
   return (uint)CONCAT71(0x10b1, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b0, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* ImportDefaultsEditorSettings::_validate_propertyv(PropertyInfo&) const */void ImportDefaultsEditorSettings::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ImportDefaultsEditorSettings::_property_can_revertv(StringName const&) const */undefined8 ImportDefaultsEditorSettings::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ImportDefaultsEditorSettings::_property_get_revertv(StringName const&, Variant&) const */undefined8 ImportDefaultsEditorSettings::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ImportDefaultsEditorSettings::_notificationv(int, bool) */void ImportDefaultsEditorSettings::_notificationv(int param_1, bool param_2) {
   return;
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ImportDefaultsEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ImportDefaultsEditor,void> *this) {
   return;
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ImportDefaultsEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ImportDefaultsEditor,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ImportDefaultsEditor,void>::get_argument_count(CallableCustomMethodPointer<ImportDefaultsEditor,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ImportDefaultsEditor,void,int>::get_argument_count(CallableCustomMethodPointer<ImportDefaultsEditor,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ImportDefaultsEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ImportDefaultsEditor,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ImportDefaultsEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ImportDefaultsEditor,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ImportDefaultsEditor::_property_get_revertv(StringName const&, Variant&) const */undefined8 ImportDefaultsEditor::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* ImportDefaultsEditor::_property_can_revertv(StringName const&) const */undefined8 ImportDefaultsEditor::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0010e008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* ImportDefaultsEditorSettings::_get_class_namev() const */undefined8 *ImportDefaultsEditorSettings::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102e43:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102e43;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImportDefaultsEditorSettings");
         goto LAB_00102eae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImportDefaultsEditorSettings");
   LAB_00102eae:return &_get_class_namev();
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void>::get_object() const */undefined8 CallableCustomMethodPointer<ImportDefaultsEditor,void>::get_object(CallableCustomMethodPointer<ImportDefaultsEditor,void> *this) {
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
         goto LAB_00102fdd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00102fdd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00102fdd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<ImportDefaultsEditor,void,int>::get_object(CallableCustomMethodPointer<ImportDefaultsEditor,void,int> *this) {
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
         goto LAB_001030dd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001030dd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_001030dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010e010 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* ImportDefaultsEditor::_validate_propertyv(PropertyInfo&) const */void ImportDefaultsEditor::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0010e010 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* ImportDefaultsEditor::_setv(StringName const&, Variant const&) */undefined8 ImportDefaultsEditor::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010e018 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0010e018 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x001033a8) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010e020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00103418) *//* ImportDefaultsEditor::_getv(StringName const&, Variant&) const */undefined8 ImportDefaultsEditor::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0010e020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10b1, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* ImportDefaultsEditor::is_class_ptr(void*) const */ulong ImportDefaultsEditor::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   if (in_RSI == &VBoxContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static()::ptr) {
      return CONCAT71(0x10b1, in_RSI == &VBoxContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static(), ::ptr);
   }

   return ( ulong )((uint)CONCAT71(0x10b1, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10b1, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr));
}
/* ResourceImporter::_get_class_namev() const */undefined8 *ResourceImporter::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103573:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103573;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceImporter");
         goto LAB_001035de;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceImporter");
   LAB_001035de:return &_get_class_namev();
}
/* ImportDefaultsEditor::_get_class_namev() const */undefined8 *ImportDefaultsEditor::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103663:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103663;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImportDefaultsEditor");
         goto LAB_001036ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ImportDefaultsEditor");
   LAB_001036ce:return &_get_class_namev();
}
/* HBoxContainer::_get_class_namev() const */undefined8 *HBoxContainer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103753:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103753;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_001037be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_001037be:return &_get_class_namev();
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = predelete_handler;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00103850;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00103850:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = predelete_handler;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001038b0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001038b0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
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
/* ImportDefaultsEditorSettings::get_class() const */void ImportDefaultsEditorSettings::get_class(void) {
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
/* HBoxContainer::get_class() const */void HBoxContainer::get_class(void) {
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
/* ImportDefaultsEditor::get_class() const */void ImportDefaultsEditor::get_class(void) {
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
/* ImportDefaultsEditorSettings::_getv(StringName const&, Variant&) const */undefined8 ImportDefaultsEditorSettings::_getv(ImportDefaultsEditorSettings *this, StringName *param_1, Variant *param_2) {
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
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   code *pcVar20;
   uint uVar21;
   undefined8 uVar22;
   int iVar23;
   long lVar24;
   uint uVar25;
   ulong uVar26;
   uint uVar27;
   uint uVar28;
   long lVar29;
   long in_FS_OFFSET;
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x188 ) != 0 ) && ( *(int*)( this + 0x1ac ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar21 = StringName::get_empty_hash();
      }
 else {
         uVar21 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar26 = CONCAT44(0, uVar1);
      lVar29 = *(long*)( this + 400 );
      if (uVar21 == 0) {
         uVar21 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar21 * lVar3;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar26;
      lVar24 = SUB168(auVar4 * auVar12, 8);
      uVar25 = *(uint*)( lVar29 + lVar24 * 4 );
      iVar23 = SUB164(auVar4 * auVar12, 8);
      if (uVar25 != 0) {
         uVar27 = 0;
         while (( uVar21 != uVar25 || ( lVar24 = *(long*)( *(long*)( *(long*)( this + 0x188 ) + lVar24 * 8 ) + 0x10 ) ),lVar24 != *(long*)param_1 )) {
            uVar27 = uVar27 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar23 + 1) * lVar3;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar26;
            lVar24 = SUB168(auVar5 * auVar13, 8);
            uVar25 = *(uint*)( lVar29 + lVar24 * 4 );
            iVar23 = SUB164(auVar5 * auVar13, 8);
            if (( uVar25 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar25 * lVar3,auVar14._8_8_ = 0,auVar14._0_8_ = uVar26,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + iVar23 ) - SUB164(auVar6 * auVar14, 8)) * lVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar26,SUB164(auVar7 * auVar15, 8) < uVar27) goto LAB_00103e10;
         }
;
         if (( *(long*)( this + 0x188 ) == 0 ) || ( *(int*)( this + 0x1ac ) == 0 )) goto LAB_00103e68;
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
         uVar26 = CONCAT44(0, uVar1);
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
         if (lVar24 == 0) {
            uVar21 = StringName::get_empty_hash();
            lVar29 = *(long*)( this + 400 );
         }
 else {
            uVar21 = *(uint*)( lVar24 + 0x20 );
         }

         if (uVar21 == 0) {
            uVar21 = 1;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar21 * lVar3;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar26;
         lVar24 = SUB168(auVar8 * auVar16, 8);
         uVar25 = *(uint*)( lVar29 + lVar24 * 4 );
         uVar27 = SUB164(auVar8 * auVar16, 8);
         if (uVar25 == 0) goto LAB_00103e68;
         uVar28 = 0;
         while (( uVar25 != uVar21 || ( *(long*)( *(long*)( *(long*)( this + 0x188 ) + lVar24 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
            uVar28 = uVar28 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar27 + 1) * lVar3;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar26;
            lVar24 = SUB168(auVar9 * auVar17, 8);
            uVar25 = *(uint*)( lVar29 + lVar24 * 4 );
            uVar27 = SUB164(auVar9 * auVar17, 8);
            if (( uVar25 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar25 * lVar3,auVar18._8_8_ = 0,auVar18._0_8_ = uVar26,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar1 + uVar27 ) - SUB164(auVar10 * auVar18, 8)) * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar26,SUB164(auVar11 * auVar19, 8) < uVar28) {
               LAB_00103e68:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar20 = (code*)invalidInstructionException();
               ( *pcVar20 )();
            }

         }
;
         Variant::operator =(param_2, (Variant*)( *(long*)( *(long*)( this + 0x188 ) + (ulong)uVar27 * 8 ) + 0x18 ));
         uVar22 = 1;
         goto LAB_00103e43;
      }

   }

   LAB_00103e10:if (Variant::needs_deinit[*(int*)param_2] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)param_2 = 0;
   uVar22 = 0;
   *(undefined8*)( param_2 + 8 ) = 0;
   *(undefined8*)( param_2 + 0x10 ) = 0;
   LAB_00103e43:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar22;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ImportDefaultsEditorSettings::is_class(String const&) const */undefined8 ImportDefaultsEditorSettings::is_class(ImportDefaultsEditorSettings *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00103fdb;
   }

   cVar5 = String::operator ==(param_1, "ImportDefaultsEditorSettings");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

         if (cVar5 != '\0') goto LAB_00103fdb;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00103fdb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* String::parse_latin1(char const*) */void String::parse_latin1(String_conflict *this, char *param_1) {
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
/* WARNING: Removing unreachable block (ram,0x00104250) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0010e028 != Container::_notification) {
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

   if ((code*)PTR__notification_0010e028 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   if (param_2) {
      BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   return;
}
/* ImportDefaultsEditor::_notificationv(int, bool) */void ImportDefaultsEditor::_notificationv(ImportDefaultsEditor *this, int param_1, bool param_2) {
   if (param_2) {
      if (param_1 == 1) {
         EditorInspector::edit(*(Object**)( this + 0xa28 ));
      }

      BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   if (param_1 != 1) {
      return;
   }

   EditorInspector::edit(*(Object**)( this + 0xa28 ));
   return;
}
/* List<Ref<ResourceImporter>, DefaultAllocator>::~List() */undefined8 List<Ref<ResourceImporter>,DefaultAllocator>::~List(List<Ref<ResourceImporter>,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   undefined8 uVar6;
   long *plVar7;
   undefined8 uStack_28;
   plVar7 = *(long**)this;
   if (plVar7 == (long*)0x0) {
      return uStack_28;
   }

   do {
      plVar1 = (long*)*plVar7;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar7[2] != 0) {
            uVar6 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return uVar6;
         }

         break;
      }

      if ((long*)plVar1[3] == plVar7) {
         lVar5 = plVar1[1];
         lVar2 = plVar1[2];
         *plVar7 = lVar5;
         if (plVar1 == (long*)plVar7[1]) {
            plVar7[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar5;
            lVar5 = plVar1[1];
         }

         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x10 ) = lVar2;
         }

         if (*plVar1 != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               pOVar3 = (Object*)*plVar1;
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         Memory::free_static(plVar1, false);
         *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar7 = *(long**)this;
   }
 while ( (int)plVar7[2] != 0 );
   uVar6 = Memory::free_static(plVar7, false);
   return uVar6;
}
/* Callable create_custom_callable_function_pointer<ImportDefaultsEditor>(ImportDefaultsEditor*,
   char const*, void (ImportDefaultsEditor::*)()) */ImportDefaultsEditor *create_custom_callable_function_pointer<ImportDefaultsEditor>(ImportDefaultsEditor *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC16;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010afa8;
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
/* ImportDefaultsEditor::_initialize_classv() */void ImportDefaultsEditor::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (VBoxContainer::initialize_class() == '\0') {
         if (BoxContainer::initialize_class() == '\0') {
            if (Container::initialize_class() == '\0') {
               if (Control::initialize_class() == '\0') {
                  if (CanvasItem::initialize_class() == '\0') {
                     if (Node::initialize_class() == '\0') {
                        Object::initialize_class();
                        local_60 = 0;
                        String::parse_latin1((String_conflict*)&local_60, "Object");
                        StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                        local_70 = 0;
                        String::parse_latin1((String_conflict*)&local_70, "Node");
                        StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                        ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                        if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if ((code*)PTR__bind_methods_0010e040 != Node::_bind_methods) {
                           Node::_bind_methods();
                        }

                        Node::initialize_class()::initialized =
                        '\x01';
                     }

                     local_60 = 0;
                     String::parse_latin1((String_conflict*)&local_60, "Node");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     CanvasItem::_bind_methods();
                     if ((code*)PTR__bind_compatibility_methods_0010e030 != Object::_bind_compatibility_methods) {
                        CanvasItem::_bind_compatibility_methods();
                     }

                     CanvasItem::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "CanvasItem");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "Control");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  Control::_bind_methods();
                  Control::initialize_class()::initialized =
                  '\x01';
               }

               local_68 = 0;
               local_58 = "Control";
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
               local_58 = "Container";
               local_70 = 0;
               local_50 = 9;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Container::_bind_methods();
               Container::initialize_class()::initialized =
               '\x01';
            }

            local_58 = "Container";
            local_68 = 0;
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
            local_58 = "BoxContainer";
            local_70 = 0;
            local_50 = 0xc;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if ((code*)PTR__bind_methods_0010e038 != Container::_bind_methods) {
               BoxContainer::_bind_methods();
            }

            BoxContainer::initialize_class()::initialized =
            '\x01';
         }

         local_68 = 0;
         local_58 = "BoxContainer";
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
         local_58 = "VBoxContainer";
         local_70 = 0;
         local_50 = 0xd;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         VBoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "VBoxContainer";
      local_68 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "ImportDefaultsEditor";
      local_70 = 0;
      local_50 = 0x14;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* ImportDefaultsEditorSettings::_initialize_classv() */void ImportDefaultsEditorSettings::_initialize_classv(void) {
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
      StringName::StringName((StringName*)&local_50, (String_conflict*)&local_58, false);
      local_48 = "ImportDefaultsEditorSettings";
      local_60 = 0;
      local_40 = 0x1c;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String_conflict*)&local_60, false);
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
            if (pvVar5 == (void*)0x0) goto LAB_001051f4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001051f4:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ImportDefaultsEditor,void>::call(CallableCustomMethodPointer<ImportDefaultsEditor,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010543f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010543f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00105418. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00105501;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010543f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String_conflict*)"Invalid Object id \'";
      String::operator +((String_conflict*)&local_48, (String_conflict*)local_58);
      _err_print_error(&_LC37, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String_conflict*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00105501:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ImportDefaultsEditor, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ImportDefaultsEditor,void,int>::call(CallableCustomMethodPointer<ImportDefaultsEditor,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   uint uVar7;
   ulong *puVar8;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar7 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar7 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar8 = (ulong*)( (ulong)uVar7 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar8 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001056c8;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_001056c8;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC38;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00105677. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
               return;
            }

            goto LAB_0010578a;
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
      LAB_001056c8:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String_conflict*)"Invalid Object id \'";
      String::operator +((String_conflict*)&local_48, (String_conflict*)local_58);
      _err_print_error(&_LC37, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String_conflict*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010578a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010588b;
   }

   cVar5 = String::operator ==(param_1, "CanvasItem");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_0010588b;
      }

      cVar5 = String::operator ==(param_1, "Node");
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

            cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

            if (cVar5 != '\0') goto LAB_0010588b;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = String::operator ==(param_1, "Object");
            return uVar6;
         }

         goto LAB_00105a70;
      }

   }

   LAB_0010588b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105a70:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00105b7b;
   }

   cVar5 = String::operator ==(param_1, "BoxContainer");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar5 != '\0') goto LAB_00105b7b;
      }

      cVar5 = String::operator ==(param_1, "Container");
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

            cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (cVar5 != '\0') goto LAB_00105b7b;
         }

         cVar5 = String::operator ==(param_1, "Control");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = CanvasItem::is_class((CanvasItem*)this, param_1);
               return uVar6;
            }

            goto LAB_00105d45;
         }

      }

   }

   LAB_00105b7b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00105d45:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String_conflict *param_1) {
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
                  if (lVar4 == 0) goto LAB_00105dbf;
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

      LAB_00105dbf:cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00105e73;
   }

   cVar5 = String::operator ==(param_1, "HBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00105e73:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ImportDefaultsEditor::is_class(String const&) const */undefined8 ImportDefaultsEditor::is_class(ImportDefaultsEditor *this, String_conflict *param_1) {
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

      cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00105fcb;
   }

   cVar5 = String::operator ==(param_1, "ImportDefaultsEditor");
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

         cVar5 = String::operator ==(param_1, (String_conflict*)&local_60);
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

         if (cVar5 != '\0') goto LAB_00105fcb;
      }

      cVar5 = String::operator ==(param_1, "VBoxContainer");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = BoxContainer::is_class((BoxContainer*)this, param_1);
            return uVar6;
         }

         goto LAB_00106108;
      }

   }

   LAB_00105fcb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00106108:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (BoxContainer::initialize_class() == '\0') {
         if (Container::initialize_class() == '\0') {
            if (Control::initialize_class() == '\0') {
               if (CanvasItem::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String_conflict*)&local_60, "Object");
                     StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                     local_70 = 0;
                     String::parse_latin1((String_conflict*)&local_70, "Node");
                     StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                     ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                     if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if ((code*)PTR__bind_methods_0010e040 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String_conflict*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String_conflict*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String_conflict*)&local_70, "CanvasItem");
                  StringName::StringName((StringName*)&local_68, (String_conflict*)&local_70, false);
                  ClassDB::_add_class2((StringName*)&local_68, (StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_0010e030 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_70);
               StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
               ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
            local_58 = "Container";
            local_70 = 0;
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_70);
            StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
            ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Container";
         local_68 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
         local_58 = "BoxContainer";
         local_70 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_70);
         StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if ((code*)PTR__bind_methods_0010e038 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String_conflict*)&local_68, false);
      local_58 = "HBoxContainer";
      local_70 = 0;
      local_50 = 0xd;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String_conflict*)&local_70, false);
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
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
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
   undefined *local_78;
   long local_70;
   long local_68;
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = &_LC17;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC17;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001068dd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001068dd;
      StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x001068ff;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x001068ff:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Node", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CanvasItem::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void CanvasItem::_get_property_listv(CanvasItem *this, List *param_1, bool param_2) {
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00106c31;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00106c31:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "CanvasItem", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010e048 != Object::_get_property_list) {
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00106f01;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00106f01:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "Control", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0010e050 != CanvasItem::_get_property_list) {
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_001071d1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001071d1:local_b0 = (CowData<char32_t>*)&local_58;
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
/* BoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void BoxContainer::_get_property_listv(BoxContainer *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_001074ad:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001074ad;
      StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001074cf;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001074cf:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
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
   plVar1 = *(long**)param_1;
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
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
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
   if (local_98 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   }

   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
   if (local_90 == 0) {
      LAB_0010788d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010788d;
      StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001078af;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001078af:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
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
   plVar1 = *(long**)param_1;
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
/* ImportDefaultsEditor::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ImportDefaultsEditor::_get_property_listv(ImportDefaultsEditor *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      VBoxContainer::_get_property_listv((VBoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ImportDefaultsEditor";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ImportDefaultsEditor";
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
      LAB_00107c6d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00107c6d;
      StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00107c8f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00107c8f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
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
   plVar1 = *(long**)param_1;
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

   StringName::StringName((StringName*)&local_78, "ImportDefaultsEditor", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         VBoxContainer::_get_property_listv((VBoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
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
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (!param_2) {
      BoxContainer::_get_property_listv((BoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "HBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HBoxContainer";
   local_98 = 0;
   local_70 = 0xd;
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
      LAB_0010804d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010804d;
      StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010806f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010806f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
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
   plVar1 = *(long**)param_1;
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

   StringName::StringName((StringName*)&local_78, "HBoxContainer", false);
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
/* List<ResourceImporter::ImportOption, DefaultAllocator>::~List() */void List<ResourceImporter::ImportOption,DefaultAllocator>::~List(List<ResourceImporter::ImportOption,DefaultAllocator> *this) {
   void *pvVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)this;
   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*puVar2;
      if (pvVar1 == (void*)0x0) {
         if (*(int*)( puVar2 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( (long)pvVar1 + 0x58 ) == puVar2) {
         *puVar2 = *(undefined8*)( (long)pvVar1 + 0x48 );
         if (pvVar1 == (void*)puVar2[1]) {
            puVar2[1] = *(undefined8*)( (long)pvVar1 + 0x50 );
         }

         if (*(long*)( (long)pvVar1 + 0x50 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar1 + 0x50 ) + 0x48 ) = *(undefined8*)( (long)pvVar1 + 0x48 );
         }

         if (*(long*)( (long)pvVar1 + 0x48 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar1 + 0x48 ) + 0x50 ) = *(undefined8*)( (long)pvVar1 + 0x50 );
         }

         if (Variant::needs_deinit[*(int*)( (long)pvVar1 + 0x30 )] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar2 = *(undefined8**)this;
   }
 while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}
/* ImportDefaultsEditorSettings::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void ImportDefaultsEditorSettings::_get_property_listv(List *param_1, bool param_2) {
   code *pcVar1;
   long lVar2;
   char cVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   undefined7 in_register_00000031;
   List<PropertyInfo,DefaultAllocator> *this;
   undefined4 *puVar6;
   long *plVar7;
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
   this(List<PropertyInfo,DefaultAllocator> * CONCAT71(in_register_00000031, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_78 = "ImportDefaultsEditorSettings";
   local_88 = 0;
   local_90 = 0;
   local_70 = 0x1c;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ImportDefaultsEditorSettings";
   local_98 = 0;
   local_70 = 0x1c;
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
         StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
         if (local_68 == local_80) {
            if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_68 = local_80;
         }

         goto LAB_00108557;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00108557:List<PropertyInfo,DefaultAllocator>::push_back(this, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "ImportDefaultsEditorSettings", false);
   ClassDB::get_property_list((StringName*)&local_78, (List*)this, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
   }

   plVar7 = *(long**)( param_1 + 0x1e0 );
   if (( ( plVar7 != (long*)0x0 ) && ( *(undefined8**)( param_1 + 0x178 ) != (undefined8*)0x0 ) ) && ( puVar6 = (undefined4*)**(undefined8**)( param_1 + 0x178 ) ),puVar6 != (undefined4*)0x0) {
      while (true) {
         pcVar1 = *(code**)( *plVar7 + 0x1b8 );
         local_78 = "";
         local_80 = 0;
         local_70 = 0;
         String::parse_latin1((StrRange*)&local_80);
         cVar3 = ( *pcVar1 )(plVar7, (StrRange*)&local_80, (CowData*)( puVar6 + 2 ), param_1 + 0x180);
         lVar2 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar7 = (long*)( local_80 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (cVar3 == '\0') {
            puVar6 = *(undefined4**)( puVar6 + 0xc );
         }
 else {
            if (*(long*)this == 0) {
               pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])this = pauVar5;
               *(undefined4*)pauVar5[1] = 0;
               *pauVar5 = (undefined1[16])0x0;
            }

            puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar4 + 8 ) = 0;
            *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
            lVar2 = *(long*)( puVar6 + 2 );
            *puVar4 = 0;
            puVar4[6] = 0;
            puVar4[10] = 6;
            *(undefined8*)( puVar4 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
            *puVar4 = *puVar6;
            if (lVar2 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)( puVar6 + 2 ));
            }

            StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)( puVar6 + 4 ));
            puVar4[6] = puVar6[6];
            if (*(long*)( puVar4 + 8 ) != *(long*)( puVar6 + 8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)( puVar6 + 8 ));
            }

            puVar4[10] = puVar6[10];
            plVar7 = *(long**)this;
            lVar2 = plVar7[1];
            *(undefined8*)( puVar4 + 0xc ) = 0;
            *(long**)( puVar4 + 0x10 ) = plVar7;
            *(long*)( puVar4 + 0xe ) = lVar2;
            if (lVar2 != 0) {
               *(undefined4**)( lVar2 + 0x30 ) = puVar4;
            }

            plVar7[1] = (long)puVar4;
            if (*plVar7 == 0) {
               *plVar7 = (long)puVar4;
            }

            puVar6 = *(undefined4**)( puVar6 + 0xc );
            *(int*)( plVar7 + 2 ) = (int)plVar7[2] + 1;
         }

         if (puVar6 == (undefined4*)0x0) break;
         plVar7 = *(long**)( param_1 + 0x1e0 );
      }
;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ImportDefaultsEditorSettings::~ImportDefaultsEditorSettings() */void ImportDefaultsEditorSettings::~ImportDefaultsEditorSettings(ImportDefaultsEditorSettings *this) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   void *pvVar6;
   long *plVar7;
   *(undefined***)this = &PTR__initialize_classv_0010aa40;
   if (*(long*)( this + 0x1e0 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x1e0 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   pvVar6 = *(void**)( this + 0x1b8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x1dc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1dc ) = 0;
            *(undefined1(*) [16])( this + 0x1c8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1c0 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x1c0 ) + lVar5 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar6 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x1b8 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar5 );
            *(undefined4*)( this + 0x1dc ) = 0;
            *(undefined1(*) [16])( this + 0x1c8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010895c;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x1c0 ), false);
   }

   LAB_0010895c:pvVar6 = *(void**)( this + 0x188 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x1ac ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 400 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 400 ) + lVar5 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar6 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x188 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00108a32;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 400 ), false);
   }

   LAB_00108a32:plVar7 = *(long**)( this + 0x178 );
   if (plVar7 != (long*)0x0) {
      do {
         pvVar6 = (void*)*plVar7;
         if (pvVar6 == (void*)0x0) {
            if ((int)plVar7[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00108adf;
            }

            break;
         }

         if (plVar7 == *(long**)( (long)pvVar6 + 0x40 )) {
            lVar5 = *(long*)( (long)pvVar6 + 0x30 );
            lVar2 = *(long*)( (long)pvVar6 + 0x38 );
            *plVar7 = lVar5;
            if (pvVar6 == (void*)plVar7[1]) {
               plVar7[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x30 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar6 + 0x30 );
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x38 ) = lVar2;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 8 ));
            Memory::free_static(pvVar6, false);
            *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar7 = *(long**)( this + 0x178 );
      }
 while ( (int)plVar7[2] != 0 );
      Memory::free_static(plVar7, false);
   }

   LAB_00108adf:Object::~Object((Object*)this);
   return;
}
/* ImportDefaultsEditorSettings::~ImportDefaultsEditorSettings() */void ImportDefaultsEditorSettings::~ImportDefaultsEditorSettings(ImportDefaultsEditorSettings *this) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   void *pvVar6;
   long *plVar7;
   *(undefined***)this = &PTR__initialize_classv_0010aa40;
   if (*(long*)( this + 0x1e0 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x1e0 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   pvVar6 = *(void**)( this + 0x1b8 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x1dc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1dc ) = 0;
            *(undefined1(*) [16])( this + 0x1c8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1c0 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x1c0 ) + lVar5 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar6 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x1b8 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar5 );
            *(undefined4*)( this + 0x1dc ) = 0;
            *(undefined1(*) [16])( this + 0x1c8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00108d4c;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x1c0 ), false);
   }

   LAB_00108d4c:pvVar6 = *(void**)( this + 0x188 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x1ac ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 400 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 400 ) + lVar5 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar6 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x188 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x1ac ) = 0;
            *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00108e22;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 400 ), false);
   }

   LAB_00108e22:plVar7 = *(long**)( this + 0x178 );
   if (plVar7 != (long*)0x0) {
      do {
         pvVar6 = (void*)*plVar7;
         if (pvVar6 == (void*)0x0) {
            if ((int)plVar7[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00108ecf;
            }

            break;
         }

         if (plVar7 == *(long**)( (long)pvVar6 + 0x40 )) {
            lVar5 = *(long*)( (long)pvVar6 + 0x30 );
            lVar2 = *(long*)( (long)pvVar6 + 0x38 );
            *plVar7 = lVar5;
            if (pvVar6 == (void*)plVar7[1]) {
               plVar7[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x30 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar6 + 0x30 );
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x38 ) = lVar2;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x20 ));
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 8 ));
            Memory::free_static(pvVar6, false);
            *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar7 = *(long**)( this + 0x178 );
      }
 while ( (int)plVar7[2] != 0 );
      Memory::free_static(plVar7, false);
   }

   LAB_00108ecf:Object::~Object((Object*)this);
   operator_delete(this, 0x1e8);
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
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long lVar9;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar5 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar5 = lVar4 * 8;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00109470:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar9 = uVar6 + 1;
   if (lVar9 == 0) goto LAB_00109470;
   uVar8 = param_1;
   if (param_1 <= lVar4) {
      while (lVar4 = *(long*)this,lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
            if (lVar9 != lVar5) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
         uVar8 = uVar8 + 1;
      }
;
      goto LAB_001094c6;
   }

   if (lVar9 == lVar5) {
      LAB_001093eb:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_001094c6:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0010935f;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_001093eb;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_0010935f:puVar7[-1] = param_1;
   return 0;
}
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_resize_and_rehash(unsigned int)
    */void HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_resize_and_rehash(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this, uint param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   void *pvVar6;
   void *pvVar7;
   void *__s;
   long lVar8;
   long lVar9;
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined8 uVar18;
   void *__s_00;
   int iVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint local_78;
   *(undefined4*)( this + 0x2c ) = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (param_1 < 2) {
      param_1 = 2;
   }

   *(uint*)( this + 0x28 ) = param_1;
   uVar21 = *(uint*)( hash_table_size_primes + (ulong)param_1 * 4 );
   uVar22 = (ulong)uVar21;
   pvVar6 = *(void**)( this + 8 );
   pvVar7 = *(void**)( this + 0x10 );
   uVar26 = uVar22 * 4;
   uVar25 = uVar22 * 8;
   uVar18 = Memory::alloc_static(uVar26, false);
   *(undefined8*)( this + 0x10 ) = uVar18;
   __s_00 = (void*)Memory::alloc_static(uVar25, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar21 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar26 ) )) {
         uVar26 = 0;
         do {
            *(undefined4*)( (long)__s + uVar26 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar26 * 8 ) = 0;
            uVar26 = uVar26 + 1;
         }
 while ( uVar22 != uVar26 );
      }
 else {
         memset(__s, 0, uVar26);
         memset(__s_00, 0, uVar25);
      }

   }

   if (uVar3 != 0) {
      uVar26 = 0;
      do {
         uVar21 = *(uint*)( (long)pvVar7 + uVar26 * 4 );
         if (uVar21 != 0) {
            uVar24 = 0;
            lVar8 = *(long*)( this + 0x10 );
            uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar25 = CONCAT44(0, uVar4);
            lVar9 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar21 * lVar9;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar25;
            lVar20 = SUB168(auVar10 * auVar14, 8);
            puVar1 = (uint*)( lVar8 + lVar20 * 4 );
            iVar19 = SUB164(auVar10 * auVar14, 8);
            uVar5 = *puVar1;
            uVar18 = *(undefined8*)( (long)pvVar6 + uVar26 * 8 );
            while (uVar5 != 0) {
               auVar11._8_8_ = 0;
               auVar11._0_8_ = (ulong)uVar5 * lVar9;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar25;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(( uVar4 + iVar19 ) - SUB164(auVar11 * auVar15, 8)) * lVar9;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar25;
               local_78 = SUB164(auVar12 * auVar16, 8);
               uVar23 = uVar18;
               if (local_78 < uVar24) {
                  *puVar1 = uVar21;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar20 * 8 );
                  uVar23 = *puVar2;
                  *puVar2 = uVar18;
                  uVar21 = uVar5;
                  uVar24 = local_78;
               }

               uVar24 = uVar24 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar19 + 1) * lVar9;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar25;
               lVar20 = SUB168(auVar13 * auVar17, 8);
               puVar1 = (uint*)( lVar8 + lVar20 * 4 );
               iVar19 = SUB164(auVar13 * auVar17, 8);
               uVar18 = uVar23;
               uVar5 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar26 = uVar26 + 1;
      }
 while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::insert(StringName const&, Variant
   const&, bool) */StringName *
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::insert(StringName *param_1,Variant *param_2,bool param_3){
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   long lVar4;
   void *__s;
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
   ulong uVar21;
   undefined8 *puVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   undefined8 uVar26;
   void *__s_00;
   Variant *in_RCX;
   uint uVar27;
   int iVar28;
   undefined7 in_register_00000011;
   StringName *pSVar29;
   long lVar30;
   long lVar31;
   ulong uVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   undefined8 *puVar36;
   long in_FS_OFFSET;
   undefined8 *local_90;
   long local_68;
   int local_60[8];
   long local_40;
   pSVar29 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar21 = (ulong)uVar23;
      uVar32 = uVar21 * 4;
      uVar34 = uVar21 * 8;
      uVar26 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar21 != uVar32 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_00109802;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_001098f9;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010980e;
      LAB_0010991b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_90 = (undefined8*)0x0;
         goto LAB_00109ad3;
      }

      _resize_and_rehash((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_00109802:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_0010980e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar3);
         lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar29 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar29 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar24 * lVar25;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar32;
         lVar30 = SUB168(auVar5 * auVar13, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
         uVar27 = SUB164(auVar5 * auVar13, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar30 * 8 ) + 0x10 ) == *(long*)pSVar29 )) {
                  Variant::operator =((Variant*)( *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 ) + 0x18 ), in_RCX);
                  local_90 = *(undefined8**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  goto LAB_00109ad3;
               }

               uVar35 = uVar35 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar27 + 1) * lVar25;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar32;
               lVar30 = SUB168(auVar6 * auVar14, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
               uVar27 = SUB164(auVar6 * auVar14, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar33 * lVar25,auVar15._8_8_ = 0,auVar15._0_8_ = uVar32,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar3 + uVar27 ) - SUB164(auVar7 * auVar15, 8)) * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar32,uVar35 <= SUB164(auVar8 * auVar16, 8) );
         }

         iVar28 = *(int*)( param_2 + 0x2c );
      }

      LAB_001098f9:if ((float)uVar23 * __LC50 < (float)( iVar28 + 1 )) goto LAB_0010991b;
   }

   StringName::StringName((StringName*)&local_68, pSVar29);
   Variant::Variant((Variant*)local_60, in_RCX);
   local_90 = (undefined8*)operator_new(0x30, "");
   *local_90 = 0;
   local_90[1] = 0;
   StringName::StringName((StringName*)( local_90 + 2 ), (StringName*)&local_68);
   Variant::Variant((Variant*)( local_90 + 3 ), (Variant*)local_60);
   if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   if (*(undefined8**)( param_2 + 0x20 ) == (undefined8*)0x0) {
      *(undefined8**)( param_2 + 0x18 ) = local_90;
      *(undefined8**)( param_2 + 0x20 ) = local_90;
      LAB_001099f2:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_001099ff;
      LAB_00109b35:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         **(undefined8**)( param_2 + 0x20 ) = local_90;
         local_90[1] = *(undefined8*)( param_2 + 0x20 );
         *(undefined8**)( param_2 + 0x20 ) = local_90;
         goto LAB_001099f2;
      }

      *(undefined8**)( *(long*)( param_2 + 0x18 ) + 8 ) = local_90;
      *local_90 = *(undefined8*)( param_2 + 0x18 );
      lVar25 = *(long*)pSVar29;
      *(undefined8**)( param_2 + 0x18 ) = local_90;
      if (lVar25 == 0) goto LAB_00109b35;
      LAB_001099ff:uVar23 = *(uint*)( lVar25 + 0x20 );
   }

   lVar25 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar32 = (ulong)uVar23;
   uVar33 = 0;
   lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar32 * lVar30;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar34;
   lVar31 = SUB168(auVar9 * auVar17, 8);
   lVar4 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar25 + lVar31 * 4 );
   iVar28 = SUB164(auVar9 * auVar17, 8);
   uVar24 = *puVar1;
   puVar22 = local_90;
   while (uVar24 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar24 * lVar30;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( iVar28 + uVar3 ) - SUB164(auVar10 * auVar18, 8)) * lVar30;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      uVar23 = SUB164(auVar11 * auVar19, 8);
      puVar36 = puVar22;
      if (uVar23 < uVar33) {
         *puVar1 = (uint)uVar32;
         uVar32 = (ulong)uVar24;
         puVar2 = (undefined8*)( lVar4 + lVar31 * 8 );
         puVar36 = (undefined8*)*puVar2;
         *puVar2 = puVar22;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar32;
      uVar33 = uVar33 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar28 + 1) * lVar30;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      lVar31 = SUB168(auVar12 * auVar20, 8);
      puVar1 = (uint*)( lVar25 + lVar31 * 4 );
      iVar28 = SUB164(auVar12 * auVar20, 8);
      puVar22 = puVar36;
      uVar24 = *puVar1;
   }
;
   *(undefined8**)( lVar4 + lVar31 * 8 ) = puVar22;
   *puVar1 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00109ad3:*(undefined8**)param_1 = local_90;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */Variant * __thiscallHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2ulong __nvoid *__sundefined1 auVar3[16]undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]uint uVar27uint uVar28undefined8 *puVar29undefined8 uVar30void *__s_00ulong uVar31int iVar32long lVar33long lVar34long lVar35ulong uVar36uint uVar37uint uVar38uint uVar39long lVar40undefined8 *puVar41long in_FS_OFFSETuint local_c8Variant *local_a8int local_98[2]undefined1 local_90[16]undefined1 local_78[16]long local_68int local_60[8]long local_40lVar40 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar36 = CONCAT44(0, uVar27);if (lVar40 == 0) {
   LAB_0010a1d0:local_90 = (undefined1[16])0x0;
   local_98[0] = 0;
   local_98[1] = 0;
   uVar31 = uVar36 * 4;
   __n = uVar36 * 8;
   uVar30 = Memory::alloc_static(uVar31, false);
   *(undefined8*)( this + 0x10 ) = uVar30;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar36 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
         uVar31 = 0;
         do {
            *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
            uVar31 = uVar31 + 1;
         }
 while ( uVar36 != uVar31 );
      }
 else {
         memset(__s, 0, uVar31);
         memset(__s_00, 0, __n);
      }

      LAB_00109dfe:iVar32 = *(int*)( this + 0x2c );
      if (iVar32 != 0) {
         LAB_00109e0e:uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar31 = CONCAT44(0, uVar27);
         lVar40 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar28 = StringName::get_empty_hash();
         }
 else {
            uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar28 == 0) {
            uVar28 = 1;
         }

         uVar39 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = (ulong)uVar28 * lVar40;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar31;
         lVar34 = SUB168(auVar7 * auVar19, 8);
         uVar38 = SUB164(auVar7 * auVar19, 8);
         uVar37 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
         if (uVar37 != 0) {
            do {
               if (( uVar28 == uVar37 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar34 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  Variant::operator =((Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar38 * 8 ) + 0x18 ), (Variant*)local_98);
                  local_a8 = (Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar38 * 8 ) + 0x18 );
                  goto LAB_0010a130;
               }

               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(uVar38 + 1) * lVar40;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar31;
               lVar34 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
               uVar38 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar37 * lVar40,auVar21._8_8_ = 0,auVar21._0_8_ = uVar31,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar27 + uVar38 ) - SUB164(auVar9 * auVar21, 8)) * lVar40,auVar22._8_8_ = 0,auVar22._0_8_ = uVar31,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

         iVar32 = *(int*)( this + 0x2c );
      }

      goto LAB_00109f35;
   }

   iVar32 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_00109f35;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_00109e0e;
   LAB_00109f57:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_a8 = (Variant*)0x18;
      goto LAB_0010a130;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar28 = StringName::get_empty_hash();
         lVar40 = *(long*)( this + 8 );
      }
 else {
         uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar28 == 0) {
         uVar28 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar34;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar36;
      lVar33 = SUB168(auVar3 * auVar15, 8);
      uVar38 = SUB164(auVar3 * auVar15, 8);
      uVar37 = *(uint*)( *(long*)( this + 0x10 ) + lVar33 * 4 );
      if (uVar37 != 0) {
         uVar39 = 0;
         do {
            if (( uVar28 == uVar37 ) && ( *(long*)( *(long*)( lVar40 + lVar33 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               local_a8 = (Variant*)( *(long*)( lVar40 + (ulong)uVar38 * 8 ) + 0x18 );
               goto LAB_00109da4;
            }

            uVar39 = uVar39 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar38 + 1) * lVar34;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar36;
            lVar33 = SUB168(auVar4 * auVar16, 8);
            uVar37 = *(uint*)( *(long*)( this + 0x10 ) + lVar33 * 4 );
            uVar38 = SUB164(auVar4 * auVar16, 8);
         }
 while ( ( uVar37 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar37 * lVar34,auVar17._8_8_ = 0,auVar17._0_8_ = uVar36,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar38 + uVar27 ) - SUB164(auVar5 * auVar17, 8)) * lVar34,auVar18._8_8_ = 0,auVar18._0_8_ = uVar36,uVar39 <= SUB164(auVar6 * auVar18, 8) );
      }

      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1[16])0x0;
      uVar36 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar40 == 0) goto LAB_0010a1d0;
      goto LAB_00109dfe;
   }

   local_98[0] = 0;
   local_98[1] = 0;
   local_90 = (undefined1[16])0x0;
   iVar32 = 0;
   LAB_00109f35:if ((float)uVar36 * __LC50 < (float)( iVar32 + 1 )) goto LAB_00109f57;
}
local_78 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_68, param_1);Variant::Variant((Variant*)local_60, (Variant*)local_98);puVar29 = (undefined8*)operator_new(0x30, "");*puVar29 = local_78._0_8_;puVar29[1] = local_78._8_8_;StringName::StringName((StringName*)( puVar29 + 2 ), (StringName*)&local_68);local_a8 = (Variant*)( puVar29 + 3 );Variant::Variant(local_a8, (Variant*)local_60);if (Variant::needs_deinit[local_60[0]] != '\0') {
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
*(undefined8**)( this + 0x20 ) = puVar29;if (*(long*)param_1 == 0) {
   uVar27 = StringName::get_empty_hash();
}
 else {
   uVar27 = *(uint*)( *(long*)param_1 + 0x20 );
}
if (uVar27 == 0) {
   uVar27 = 1;
}
uVar36 = (ulong)uVar27;uVar38 = 0;lVar40 = *(long*)( this + 0x10 );lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar31 = CONCAT44(0, uVar28);auVar11._8_8_ = 0;auVar11._0_8_ = uVar36 * lVar34;auVar23._8_8_ = 0;auVar23._0_8_ = uVar31;lVar35 = SUB168(auVar11 * auVar23, 8);lVar33 = *(long*)( this + 8 );puVar1 = (uint*)( lVar40 + lVar35 * 4 );iVar32 = SUB164(auVar11 * auVar23, 8);uVar37 = *puVar1;while (uVar37 != 0) {
   auVar12._8_8_ = 0;
   auVar12._0_8_ = (ulong)uVar37 * lVar34;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar31;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(( uVar28 + iVar32 ) - SUB164(auVar12 * auVar24, 8)) * lVar34;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar31;
   local_c8 = SUB164(auVar13 * auVar25, 8);
   puVar41 = puVar29;
   if (local_c8 < uVar38) {
      puVar2 = (undefined8*)( lVar33 + lVar35 * 8 );
      *puVar1 = (uint)uVar36;
      uVar36 = (ulong)uVar37;
      puVar41 = (undefined8*)*puVar2;
      *puVar2 = puVar29;
      uVar38 = local_c8;
   }

   uVar27 = (uint)uVar36;
   uVar38 = uVar38 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(iVar32 + 1) * lVar34;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar31;
   lVar35 = SUB168(auVar14 * auVar26, 8);
   puVar1 = (uint*)( lVar40 + lVar35 * 4 );
   iVar32 = SUB164(auVar14 * auVar26, 8);
   puVar29 = puVar41;
   uVar37 = *puVar1;
}
;*(undefined8**)( lVar33 + lVar35 * 8 ) = puVar29;*puVar1 = uVar27;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010a130:if (Variant::needs_deinit[local_98[0]] != '\0') {
   Variant::_clear_internal();
}
LAB_00109da4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_a8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* ImportDefaultsEditorSettings::_setv(StringName const&, Variant const&) */undefined8 ImportDefaultsEditorSettings::_setv(ImportDefaultsEditorSettings *this, StringName *param_1, Variant *param_2) {
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
   Variant *this_00;
   int iVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 0x188 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x1ac ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
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
      uVar14 = *(uint*)( *(long*)( this + 400 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x188 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               this_00 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( this + 0x180 ), param_1);
               Variant::operator =(this_00, param_2);
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 400 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* ImportDefaultsEditor::_notification(int) */void ImportDefaultsEditor::_GLOBAL__sub_I__notification(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ImportDefaultsEditor, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ImportDefaultsEditor,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ImportDefaultsEditor,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ImportDefaultsEditor, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ImportDefaultsEditor,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ImportDefaultsEditor,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ImportDefaultsEditorSettings::~ImportDefaultsEditorSettings() */void ImportDefaultsEditorSettings::~ImportDefaultsEditorSettings(ImportDefaultsEditorSettings *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<ResourceImporter::ImportOption, DefaultAllocator>::~List() */void List<ResourceImporter::ImportOption,DefaultAllocator>::~List(List<ResourceImporter::ImportOption,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Ref<ResourceImporter>, DefaultAllocator>::~List() */void List<Ref<ResourceImporter>,DefaultAllocator>::~List(List<Ref<ResourceImporter>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


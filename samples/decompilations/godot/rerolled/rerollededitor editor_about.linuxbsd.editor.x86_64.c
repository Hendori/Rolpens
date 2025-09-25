/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorAbout::_item_list_resized(ItemList*) */void EditorAbout::_item_list_resized(EditorAbout *this, ItemList *param_1) {
   Control::get_size();
   EditorScale::get_scale();
   ItemList::set_fixed_column_width((int)param_1);
   return;
}
/* CowData<ItemList*>::_copy_on_write() [clone .isra.0] */void CowData<ItemList*>::_copy_on_write(CowData<ItemList*> *this) {
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
/* EditorAbout::_notification(int) [clone .part.0] */void EditorAbout::_notification(int param_1) {
   StringName *pSVar1;
   undefined8 uVar2;
   Object *pOVar3;
   char cVar4;
   bool bVar5;
   int iVar6;
   undefined8 *puVar7;
   Ref *pRVar8;
   undefined4 in_register_0000003c;
   StringName *pSVar9;
   undefined8 *puVar10;
   long in_FS_OFFSET;
   Object *local_68;
   Object *local_60;
   undefined8 local_58[3];
   long local_40;
   pSVar9 = (StringName*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((_notification(int)::{lambda()
   #1
   (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #1
   iVar6 != 0))
   {
      _scs_create((char *)&_notification(int)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#1}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
  }
  Window::get_theme_font((StringName *)&local_68,pSVar9);
  if ((_notification(int)::{lambda()#2}::operator()()::sname == '\0') &&
     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()#2}::operator()()::sname),
     iVar6 != 0)), {
            _scs_create((char *)&_notification(int)::{lambda()
            #2
            __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#2}::operator()()::sname,&__dso_handle);__cxa_guard_release(&_notification(int)::{lambda()#2}, ::operator()(), ::sname);}(pSVar9, (StringName*)&_notification(int)::{lambda()#2}, ::operator()(), ::sname), ;
  Control::begin_bulk_theme_override());
            pSVar1 = *(StringName**)( pSVar9 + 0xdc0 );
            StringName::StringName((StringName*)&local_60, "normal_font", false);
            Control::add_theme_font_override(pSVar1, (Ref*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_60 != (Object*)0x0 )) {
               StringName::unref();
            }

            pSVar1 = *(StringName**)( pSVar9 + 0xdc0 );
            StringName::StringName((StringName*)&local_60, "normal_font_size", false);
            iVar6 = (int)(StringName*)&local_60;
            Control::add_theme_font_size_override(pSVar1, iVar6);
            if (( StringName::configured != '\0' ) && ( local_60 != (Object*)0x0 )) {
               StringName::unref();
            }

            pSVar1 = *(StringName**)( pSVar9 + 0xdc0 );
            EditorScale::get_scale();
            Control::add_theme_constant_override(pSVar1, (int)SceneStringNames::singleton + 0x98);
            Control::end_bulk_theme_override();
            Control::begin_bulk_theme_override();
            pSVar1 = *(StringName**)( pSVar9 + 0xdb8 );
            StringName::StringName((StringName*)&local_60, "normal_font", false);
            Control::add_theme_font_override(pSVar1, (Ref*)&local_60);
            if (( StringName::configured != '\0' ) && ( local_60 != (Object*)0x0 )) {
               StringName::unref();
            }

            pSVar1 = *(StringName**)( pSVar9 + 0xdb8 );
            StringName::StringName((StringName*)&local_60, "normal_font_size", false);
            Control::add_theme_font_size_override(pSVar1, iVar6);
            if (( StringName::configured != '\0' ) && ( local_60 != (Object*)0x0 )) {
               StringName::unref();
            }

            pSVar1 = *(StringName**)( pSVar9 + 0xdb8 );
            EditorScale::get_scale();
            Control::add_theme_constant_override(pSVar1, (int)SceneStringNames::singleton + 0x98);
            Control::end_bulk_theme_override();
            pRVar8 = *(Ref**)( pSVar9 + 0xdc8 );
            if ((_notification(int)::{lambda()
            #3
            (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()
            #3
            iVar6 != 0))
            {
               _scs_create((char *)&_notification(int)::{lambda()
               #3
               __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#3}::operator()()::sname,
                 &__dso_handle);
    __cxa_guard_release(&_notification(int)::{lambda()#3}::operator()()::sname);
  }
  Window::get_editor_theme_icon((StringName *)&local_60);, TextureRect::set_texture(pRVar8)(( ( local_60 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_60,cVar4 != '\0' )) && ( cVar4 = predelete_handler(local_60) ), cVar4 != '\0'))(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
               Memory::free_static(pOVar3, false);
            }

            CowData<ItemList*>::_copy_on_write((CowData<ItemList*>*)( pSVar9 + 0xdd8 ));
            puVar10 = *(undefined8**)( pSVar9 + 0xdd8 );
            CowData<ItemList*>::_copy_on_write((CowData<ItemList*>*)( pSVar9 + 0xdd8 ));
            puVar7 = *(undefined8**)( pSVar9 + 0xdd8 );
            if (puVar7 != (undefined8*)0x0) {
               puVar7 = puVar7 + puVar7[-1];
            }

            for (; puVar10 != puVar7; puVar10 = puVar10 + 1) {
               uVar2 = *puVar10;
               pRVar8 = (Ref*)0x0;
               while (true) {
                  iVar6 = ItemList::get_item_count();
                  if (iVar6 <= (int)pRVar8) break;
                  ItemList::get_item_metadata((int)(Variant*)local_58);
                  bVar5 = Variant::operator_cast_to_bool((Variant*)local_58);
                  if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (bVar5) {
                     if ((_notification(int)::{lambda()
                     #4
                     (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()
                     #4
                     iVar6 != 0))
                     {
                        _scs_create((char *)&_notification(int)::{lambda()
                        #4
                        __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
                        #4
                        __cxa_guard_release(&_notification(int)::{lambda()
                        #4
                     }

                     Window::get_theme_icon((StringName*)&local_60, pSVar9);
                     ItemList::set_item_icon((int)uVar2, pRVar8);
                     if (( ( local_60 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_60,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

                  if ((_notification(int)::{lambda()
                  #5
                  (iVar6 = __cxa_guard_acquire(&_notification(int)::{lambda()
                  #5
                  iVar6 != 0))
                  {
                     _scs_create((char *)&_notification(int)::{lambda()
                     #5
                     __cxa_atexit(StringName::~StringName,
                       &_notification(int)::{lambda()
                     #5
                     __cxa_guard_release(&_notification(int)::{lambda()
                     #5
                  }

                  local_58[0] = Window::get_theme_color
                                (pSVar9,(StringName *)
                                        &_notification(int)::{lambda()
                  #5
                  ItemList::set_item_icon_modulate((int)uVar2, (Color*)pRVar8);
               }
;
               pRVar8 = (Ref*)( ulong )((int)pRVar8 + 1);
            }

         }
, if (((local_68 != (Object *) && ( cVar4 = cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_68 + 0x140 ))(local_68);
      Memory::free_static(local_68, false);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAbout::~EditorAbout() */void EditorAbout::~EditorAbout(EditorAbout *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001259a0;
   if (*(long*)( this + 0xdd8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xdd8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xdd8 );
         *(undefined8*)( this + 0xdd8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         AcceptDialog::~AcceptDialog((AcceptDialog*)this);
         return;
      }

   }

   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* EditorAbout::~EditorAbout() */void EditorAbout::~EditorAbout(EditorAbout *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_001259a0;
   if (*(long*)( this + 0xdd8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xdd8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xdd8 );
         *(undefined8*)( this + 0xdd8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xde0);
   return;
}
/* EditorAbout::_notification(int) */void EditorAbout::_notification(EditorAbout *this, int param_1) {
   if (param_1 != 0x20) {
      return;
   }

   _notification((int)this);
   return;
}
/* EditorAbout::_license_tree_selected() */void EditorAbout::_license_tree_selected(EditorAbout *this) {
   String *pSVar1;
   long in_FS_OFFSET;
   Variant local_50[8];
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Tree::get_selected();
   RichTextLabel::scroll_to_line((int)*(undefined8*)( this + 0xdc0 ));
   pSVar1 = *(String**)( this + 0xdc0 );
   TreeItem::get_metadata((int)local_48);
   Variant::operator_cast_to_String(local_50);
   RichTextLabel::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAbout::_item_with_website_selected(int, ItemList*) */void EditorAbout::_item_with_website_selected(int param_1, ItemList *param_2) {
   long *plVar1;
   long in_FS_OFFSET;
   long local_40;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ItemList::get_item_metadata((int)local_38);
   Variant::operator_cast_to_String((Variant*)&local_40);
   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( local_40 != 0 ) && ( 1 < *(uint*)( local_40 + -8 ) )) {
      plVar1 = (long*)OS::get_singleton();
      ( **(code**)( *plVar1 + 0x150 ) )(plVar1, (Variant*)&local_40);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* List<String, DefaultAllocator>::push_back(String const&) [clone .isra.0] */void List<String,DefaultAllocator>::push_back(List<String,DefaultAllocator> *this, String *param_1) {
   long *plVar1;
   long lVar2;
   CowData<char32_t> *this_00;
   undefined1(*pauVar3)[16];
   if (*(long*)this == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   CowData<char32_t>::_ref(this_00, (CowData*)param_1);
   plVar1 = *(long**)this;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 != 0) {
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      return;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   *plVar1 = (long)this_00;
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
/* EditorAbout::_populate_list(String const&, List<String, DefaultAllocator> const&, char const*
   const* const*, int, bool) */ScrollContainer * __thiscall
EditorAbout::_populate_list
          (EditorAbout *this,String *param_1,List *param_2,char ***param_3,int param_4,bool param_5){
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   uint uVar6;
   int iVar7;
   ScrollContainer *this_00;
   BoxContainer *this_01;
   Label *this_02;
   ItemList *this_03;
   HSeparator *this_04;
   CallableCustom *pCVar8;
   Object *pOVar9;
   bool bVar10;
   char **ppcVar11;
   long lVar12;
   bool bVar13;
   int iVar14;
   long lVar15;
   char *pcVar16;
   long in_FS_OFFSET;
   long local_128;
   long local_120;
   Variant *local_118;
   StyleBox *local_d0;
   CowData<char32_t> local_b0[8];
   CowData<char32_t> local_a8[8];
   long local_a0;
   undefined8 local_98;
   String local_90[8];
   undefined8 local_88;
   long local_80;
   long local_78[2];
   Object *local_68[2];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (ScrollContainer*)operator_new(0xa68, "");
   ScrollContainer::ScrollContainer(this_00);
   postinitialize_handler((Object*)this_00);
   Node::set_name((String*)this_00);
   Control::set_v_size_flags(this_00, 2);
   this_01 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_01, true);
   *(undefined***)this_01 = &PTR__initialize_classv_001252b0;
   this_01[0xa0c] = (BoxContainer)0x1;
   postinitialize_handler((Object*)this_01);
   Control::set_h_size_flags(this_01, 3);
   Node::add_child(this_00, this_01, 0, 0);
   local_d0 = (StyleBox*)operator_new(0x2b0, "");
   StyleBox::StyleBox(local_d0);
   *(undefined***)local_d0 = &PTR__initialize_classv_00124d38;
   postinitialize_handler((Object*)local_d0);
   cVar4 = RefCounted::init_ref();
   plVar1 = *(long**)param_2;
   if (cVar4 == '\0') {
      if (( plVar1 == (long*)0x0 ) || ( local_120 = local_120 == 0 )) goto LAB_00101121;
      local_d0 = (StyleBox*)0x0;
      LAB_00100daa:local_128 = 0;
      do {
         ppcVar11 = param_3[local_128];
         if (*ppcVar11 != (char*)0x0) {
            this_02 = (Label*)operator_new(0xad8, "");
            local_68[0] = (Object*)0x0;
            Label::Label(this_02, (String*)local_68);
            postinitialize_handler((Object*)this_02);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
            StringName::StringName((StringName*)local_68, "HeaderSmall", false);
            Control::set_theme_type_variation((StringName*)this_02);
            if (( StringName::configured != '\0' ) && ( local_68[0] != (Object*)0x0 )) {
               StringName::unref();
            }

            Label::set_text((String*)this_02);
            Node::add_child(this_01, this_02, 0, 0);
            this_03 = (ItemList*)operator_new(0xb80, "");
            ItemList::ItemList(this_03);
            postinitialize_handler((Object*)this_03);
            Node::set_auto_translate_mode(this_03, 2);
            Control::set_h_size_flags(this_03, 3);
            ItemList::set_same_column_width(SUB81(this_03, 0));
            ItemList::set_auto_height(SUB81(this_03, 0));
            Control::set_mouse_filter(this_03, 2);
            Control::set_focus_mode(this_03, 0);
            EditorScale::get_scale();
            StringName::StringName((StringName*)local_68, "h_separation", false);
            Control::add_theme_constant_override((StringName*)this_03, (int)(CowData<char32_t>*)local_68);
            if (( StringName::configured != '\0' ) && ( local_68[0] != (Object*)0x0 )) {
               StringName::unref();
            }

            bVar10 = SUB81((CowData<char32_t>*)local_68, 0);
            iVar5 = (int)this_03;
            if (param_5) {
               Control::set_focus_mode(this_03, 1);
               Control::set_mouse_filter(this_03, 1);
               pcVar2 = *(code**)( *(long*)this_03 + 0x108 );
               pCVar8 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(pCVar8);
               *(undefined1(*) [16])( pCVar8 + 0x30 ) = (undefined1[16])0x0;
               *(undefined**)( pCVar8 + 0x20 ) = &_LC55;
               *(undefined***)pCVar8 = &PTR_hash_00125c18;
               *(undefined8*)( pCVar8 + 0x40 ) = 0;
               *(EditorAbout**)( pCVar8 + 0x28 ) = this;
               uVar3 = *(undefined8*)( this + 0x60 );
               *(undefined8*)( pCVar8 + 0x10 ) = 0;
               *(undefined8*)( pCVar8 + 0x30 ) = uVar3;
               *(code**)( pCVar8 + 0x38 ) = _item_with_website_selected;
               CallableCustomMethodPointerBase::_setup((uint*)pCVar8, (int)pCVar8 + 0x28);
               *(char**)( pCVar8 + 0x20 ) = "EditorAbout::_item_with_website_selected";
               Callable::Callable((Callable*)local_78, pCVar8);
               Callable::bind<ItemList*>((ItemList*)local_68);
               StringName::StringName((StringName*)&local_80, "item_activated", false);
               ( *pcVar2 )(this_03, (StringName*)&local_80, (CowData<char32_t>*)local_68, 0);
               if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)local_68);
               Callable::~Callable((Callable*)local_78);
               pcVar2 = *(code**)( *(long*)this_03 + 0x108 );
               pCVar8 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(pCVar8);
               *(undefined1(*) [16])( pCVar8 + 0x30 ) = (undefined1[16])0x0;
               *(undefined***)pCVar8 = &PTR_hash_00125ca8;
               *(undefined**)( pCVar8 + 0x20 ) = &_LC55;
               *(undefined8*)( pCVar8 + 0x40 ) = 0;
               uVar3 = *(undefined8*)( this + 0x60 );
               *(EditorAbout**)( pCVar8 + 0x28 ) = this;
               *(undefined8*)( pCVar8 + 0x30 ) = uVar3;
               *(undefined8*)( pCVar8 + 0x38 ) = 0x100000;
               *(undefined8*)( pCVar8 + 0x10 ) = 0;
               CallableCustomMethodPointerBase::_setup((uint*)pCVar8, (int)pCVar8 + 0x28);
               *(char**)( pCVar8 + 0x20 ) = "EditorAbout::_item_list_resized";
               Callable::Callable((Callable*)local_78, pCVar8);
               Callable::bind<ItemList*>((ItemList*)local_68);
               ( *pcVar2 )(this_03, SceneStringNames::singleton, (CowData<char32_t>*)local_68, 0);
               Callable::~Callable((Callable*)local_68);
               Callable::~Callable((Callable*)local_78);
               pcVar2 = *(code**)( *(long*)this_03 + 0x108 );
               pCVar8 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(pCVar8);
               *(ItemList**)( pCVar8 + 0x28 ) = this_03;
               *(undefined1(*) [16])( pCVar8 + 0x30 ) = (undefined1[16])0x0;
               *(undefined**)( pCVar8 + 0x20 ) = &_LC55;
               *(undefined***)pCVar8 = &PTR_hash_00125d38;
               *(undefined8*)( pCVar8 + 0x40 ) = 0;
               uVar3 = *(undefined8*)( this_03 + 0x60 );
               *(undefined8*)( pCVar8 + 0x10 ) = 0;
               *(undefined8*)( pCVar8 + 0x30 ) = uVar3;
               *(code**)( pCVar8 + 0x38 ) = ItemList::deselect_all;
               CallableCustomMethodPointerBase::_setup((uint*)pCVar8, (int)pCVar8 + 0x28);
               *(char**)( pCVar8 + 0x20 ) = "ItemList::deselect_all";
               Callable::Callable((Callable*)local_68, pCVar8);
               ( *pcVar2 )(this_03, SceneStringNames::singleton + 0xe0, (CowData<char32_t>*)local_68, 0);
               Callable::~Callable((Callable*)local_68);
               local_68[0] = (Object*)0x0;
               if (( ( local_d0 != (StyleBox*)0x0 ) && ( pOVar9 = (Object*)__dynamic_cast(local_d0, &Object::typeinfo, &StyleBox::typeinfo, 0) ),pOVar9 != (Object*)0x0 )) {
                  local_68[0] = (Object*)0x0;
               }

               StringName::StringName((StringName*)local_78, "focus", false);
               Control::add_theme_style_override((StringName*)this_03, (Ref*)local_78);
               if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
                  StringName::unref();
               }

               if (( ( local_68[0] != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar9 = local_68[0],cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
               Memory::free_static(pOVar9, false);
            }

            local_68[0] = (Object*)0x0;
            if (( ( local_d0 != (StyleBox*)0x0 ) && ( pOVar9 = (Object*)__dynamic_cast(local_d0, &Object::typeinfo, &StyleBox::typeinfo, 0) ),pOVar9 != (Object*)0x0 )) {
               local_68[0] = (Object*)0x0;
            }

            StringName::StringName((StringName*)local_78, "selected", false);
            Control::add_theme_style_override((StringName*)this_03, (Ref*)local_78);
            if (( StringName::configured != '\0' ) && ( local_78[0] != 0 )) {
               StringName::unref();
            }

            if (( ( local_68[0] != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar9 = local_68[0],cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
            Memory::free_static(pOVar9, false);
         }

         pcVar16 = *ppcVar11;
         if (pcVar16 != (char*)0x0) {
            do if (( pcVar16 == (char*)0x0 ) && ( iVar7 = iVar7 != -1 )) pcVar16 = *ppcVar11; while ( pcVar16 != (char*)0x0 );
         }

      }
 while ( pcVar16 != (char*)0x0 );
      {
         while (true) {
            ppcVar11 = ppcVar11 + 1;
            local_68[0] = (Object*)0x0;
            String::utf8((char*)local_78, (int)pcVar16);
            ItemList::add_item((String*)this_03, (Ref*)local_78, bVar10);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
            if (( ( local_68[0] != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar9 = local_68[0],cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' );
            pcVar16 = *ppcVar11;
            if (pcVar16 == (char*)0x0) goto LAB_00100ff5;
         }
;
         ( **(code**)( *(long*)pOVar9 + 0x140 ) )(pOVar9);
         Memory::free_static(pOVar9, false);
         pcVar16 = *ppcVar11;
      }

   }

   LAB_00100ff5:ItemList::set_max_columns(iVar5);
   if (*(long*)( this + 0xdd8 ) == 0) {
      lVar15 = 1;
   }
 else {
      lVar15 = *(long*)( *(long*)( this + 0xdd8 ) + -8 ) + 1;
   }

   iVar5 = CowData<ItemList*>::resize<false>((CowData<ItemList*>*)( this + 0xdd8 ), lVar15);
   if (iVar5 == 0) {
      if (*(long*)( this + 0xdd8 ) == 0) {
         lVar12 = -1;
         lVar15 = 0;
      }
 else {
         lVar15 = *(long*)( *(long*)( this + 0xdd8 ) + -8 );
         lVar12 = lVar15 + -1;
         if (-1 < lVar12) {
            CowData<ItemList*>::_copy_on_write((CowData<ItemList*>*)( this + 0xdd8 ));
            *(ItemList**)( *(long*)( this + 0xdd8 ) + lVar12 * 8 ) = this_03;
            goto LAB_00101085;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar12, lVar15, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_00101085:Node::add_child(this_01, this_03, 0, 0);
   this_04 = (HSeparator*)operator_new(0x9e0, "");
   HSeparator::HSeparator(this_04);
   postinitialize_handler((Object*)this_04);
   local_58 = (undefined1[16])0x0;
   CanvasItem::set_modulate((Color*)this_04);
   Node::add_child(this_01, this_04, 0, 0);
}
local_128 = local_128 + 1;local_120 = *(long*)( local_120 + 8 );}while (local_120 != 0) ;;;if (local_d0 == (StyleBox*)0x0) goto LAB_00101121; else if (( plVar1 != (long*)0x0 ) && ( local_120 = local_120 != 0 )) goto LAB_00100daa;cVar4 = RefCounted::unreference();if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)local_d0) ),cVar4 != '\0') {
   ( **(code**)( *(long*)local_d0 + 0x140 ) )(local_d0);
   Memory::free_static(local_d0, false);
}
LAB_00101121:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return this_00;}/* EditorAbout::EditorAbout() */void EditorAbout::EditorAbout(EditorAbout *this) {
   long *plVar1;
   String *pSVar2;
   code *pcVar3;
   long lVar4;
   undefined *puVar5;
   int iVar6;
   BoxContainer *pBVar7;
   BoxContainer *this_00;
   TextureRect *this_01;
   BoxContainer *this_02;
   Control *this_03;
   Object *pOVar8;
   Label *pLVar9;
   TabContainer *this_04;
   undefined8 uVar10;
   RichTextLabel *pRVar11;
   SplitContainer *this_05;
   Tree *this_06;
   undefined8 uVar12;
   undefined8 uVar13;
   undefined8 uVar14;
   undefined8 *puVar15;
   CallableCustom *this_07;
   undefined8 *puVar16;
   undefined **ppuVar17;
   long lVar18;
   undefined **ppuVar19;
   long in_FS_OFFSET;
   float fVar20;
   undefined **local_180;
   undefined8 local_120;
   undefined8 local_118;
   undefined8 local_110;
   long local_108;
   long local_100;
   long local_f8;
   long local_f0;
   long local_e8;
   long local_e0;
   undefined *local_d8;
   undefined8 local_d0;
   undefined8 local_c8[4];
   char **local_a8;
   undefined1 *puStack_a0;
   undefined1 *local_98;
   undefined1 *puStack_90;
   char **local_88;
   undefined1 *puStack_80;
   undefined1 *local_78;
   undefined1 *puStack_70;
   undefined1 *local_68;
   undefined1 *puStack_60;
   undefined1 *local_58;
   undefined1 *puStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AcceptDialog::AcceptDialog((AcceptDialog*)this);
   *(undefined***)this = &PTR__initialize_classv_001259a0;
   *(undefined8*)( this + 0xdd8 ) = 0;
   *(undefined1(*) [16])( this + 0xdb0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xdc0 ) = (undefined1[16])0x0;
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Thanks from the Godot community!");
   TTR((String*)&local_e8, (String*)&local_e0);
   Window::set_title((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   AcceptDialog::set_hide_on_ok(SUB81(this, 0));
   pBVar7 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar7, true);
   pBVar7[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar7 = &PTR__initialize_classv_001252b0;
   postinitialize_handler((Object*)pBVar7);
   Node::add_child(this, pBVar7, 0, 0);
   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, false);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_00124f38;
   postinitialize_handler((Object*)this_00);
   Control::set_h_size_flags(this_00, 3);
   BoxContainer::set_alignment(this_00, 1);
   EditorScale::get_scale();
   StringName::StringName((StringName*)&local_d8, "separation", false);
   Control::add_theme_constant_override((StringName*)this_00, (int)(String*)&local_d8);
   if (( StringName::configured != '\0' ) && ( local_d8 != (undefined*)0x0 )) {
      StringName::unref();
   }

   Node::add_child(pBVar7, this_00, 0, 0);
   this_01 = (TextureRect*)operator_new(0x9e0, "");
   TextureRect::TextureRect(this_01);
   postinitialize_handler((Object*)this_01);
   *(TextureRect**)( this + 0xdc8 ) = this_01;
   TextureRect::set_stretch_mode(this_01, 5);
   Node::add_child(this_00, *(undefined8*)( this + 0xdc8 ), 0, 0);
   this_02 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_02, true);
   this_02[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_02 = &PTR__initialize_classv_001252b0;
   postinitialize_handler((Object*)this_02);
   this_03 = (Control*)operator_new(0x9c8, "");
   Control::Control(this_03);
   postinitialize_handler((Object*)this_03);
   Node::add_child(this_02, this_03, 0, 0);
   pOVar8 = (Object*)operator_new(0xb18, "");
   EditorVersionButton::EditorVersionButton((EditorVersionButton*)pOVar8, 2);
   postinitialize_handler(pOVar8);
   Node::add_child(this_02, pOVar8, 0, 0);
   pLVar9 = (Label*)operator_new(0xad8, "");
   local_d8 = (undefined*)0x0;
   Label::Label(pLVar9, (String*)&local_d8);
   postinitialize_handler((Object*)pLVar9);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   Control::set_v_size_flags(pLVar9, 4);
   String::utf8((char*)&local_d8, 0x1102d0);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, ".");
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "");
   local_f0 = 0;
   String::parse_latin1((String*)&local_f0, "Godot Engine contributors");
   TTR((String*)&local_f8, (String*)&local_f0);
   String::utf8((char*)&local_100, 0x103d61);
   String::operator +((String*)&local_108, (String*)&local_100);
   String::operator +((String*)&local_110, (String*)&local_108);
   String::operator +((String*)&local_118, (String*)&local_110);
   Label::set_text((String*)pLVar9);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   Node::add_child(this_02, pLVar9, 0, 0);
   Node::add_child(this_00, this_02, 0, 0);
   this_04 = (TabContainer*)operator_new(0xb40, "");
   TabContainer::TabContainer(this_04);
   postinitialize_handler((Object*)this_04);
   TabContainer::set_tab_alignment(this_04, 1);
   fVar20 = (float)EditorScale::get_scale();
   local_88 = (char**)CONCAT44(fVar20 * _LC84._4_4_, fVar20 * (float)_LC84);
   Control::set_custom_minimum_size((Vector2*)this_04);
   Control::set_v_size_flags(this_04, 3);
   StringName::StringName((StringName*)&local_d8, "TabContainerOdd", false);
   Control::set_theme_type_variation((StringName*)this_04);
   if (( StringName::configured != '\0' ) && ( local_d8 != (undefined*)0x0 )) {
      StringName::unref();
   }

   Node::add_child(pBVar7, this_04, 0, 0);
   local_120 = 0;
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Project Founders");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_120, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Lead Developer");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_120, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "Job Title");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Project Manager");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_120, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Developers");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_120, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   local_a8 = (char**)AUTHORS_FOUNDERS;
   puStack_a0 = AUTHORS_LEAD_DEVELOPERS;
   local_98 = AUTHORS_PROJECT_MANAGERS;
   puStack_90 = AUTHORS_DEVELOPERS;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Authors");
   TTR((String*)&local_e8, (String*)&local_e0);
   uVar10 = _populate_list(this, (String*)&local_e8, (List*)&local_120, &local_a8, 1, false);
   Node::add_child(this_04, uVar10, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_118 = 0;
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Patrons");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Platinum Sponsors");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Gold Sponsors");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Silver Sponsors");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Diamond Members");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Titanium Members");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Platinum Members");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Gold Members");
   TTR((String*)&local_e8, (String*)&local_e0);
   List<String,DefaultAllocator>::push_back((List<String,DefaultAllocator>*)&local_118, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   local_d8 = (undefined*)0x0;
   local_88 = (char**)DONORS_PATRONS;
   puStack_80 = DONORS_SPONSORS_PLATINUM;
   local_78 = DONORS_SPONSORS_GOLD;
   puStack_70 = DONORS_SPONSORS_SILVER;
   local_68 = DONORS_MEMBERS_DIAMOND;
   puStack_60 = DONORS_MEMBERS_TITANIUM;
   local_58 = DONORS_MEMBERS_PLATINUM;
   puStack_50 = DONORS_MEMBERS_GOLD;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Donors");
   TTR((String*)&local_e8, (String*)&local_e0);
   uVar10 = _populate_list(this, (String*)&local_e8, (List*)&local_118, &local_88, 1, true);
   Node::add_child(this_04, uVar10, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   pRVar11 = (RichTextLabel*)operator_new(0xcf0, "");
   local_d8 = (undefined*)0x0;
   RichTextLabel::RichTextLabel(pRVar11, (String*)&local_d8);
   postinitialize_handler((Object*)pRVar11);
   *(RichTextLabel**)( this + 0xdb8 ) = pRVar11;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   RichTextLabel::set_threaded(SUB81(*(undefined8*)( this + 0xdb8 ), 0));
   local_d8 = (undefined*)0x0;
   pSVar2 = *(String**)( this + 0xdb8 );
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "License");
   TTR((String*)&local_e8, (String*)&local_e0);
   Node::set_name(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   Control::set_h_size_flags(*(undefined8*)( this + 0xdb8 ), 3);
   Control::set_v_size_flags(*(undefined8*)( this + 0xdb8 ), 3);
   pSVar2 = *(String**)( this + 0xdb8 );
   String::utf8((char*)&local_d8, 0x110300);
   RichTextLabel::set_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   Node::add_child(this_04, *(undefined8*)( this + 0xdb8 ), 0, 0);
   pBVar7 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar7, true);
   pBVar7[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar7 = &PTR__initialize_classv_001252b0;
   postinitialize_handler((Object*)pBVar7);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Third-party Licenses");
   TTR((String*)&local_e8, (String*)&local_e0);
   Node::set_name((String*)pBVar7);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   Control::set_h_size_flags(pBVar7, 3);
   Node::add_child(this_04, pBVar7, 0, 0);
   pLVar9 = (Label*)operator_new(0xad8, "");
   local_d8 = (undefined*)0x0;
   Label::Label(pLVar9, (String*)&local_d8);
   postinitialize_handler((Object*)pLVar9);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   Control::set_h_size_flags(pLVar9, 3);
   Label::set_autowrap_mode(pLVar9, 3);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Godot Engine relies on a number of third-party free and open source libraries, all compatible with the terms of its MIT license. The following is an exhaustive list of all such third-party components with their respective copyright statements and license terms.");
   TTR((String*)&local_e8, (String*)&local_e0);
   Label::set_text((String*)pLVar9);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   fVar20 = (float)EditorScale::get_scale();
   local_c8[0] = CONCAT44(fVar20, _LC105 * fVar20);
   Control::set_size((Vector2*)pLVar9, SUB81((Variant*)local_c8, 0));
   Node::add_child(pBVar7, pLVar9, 0, 0);
   this_05 = (SplitContainer*)operator_new(0xa70, "");
   SplitContainer::SplitContainer(this_05, false);
   this_05[0xa68] = (SplitContainer)0x1;
   *(undefined***)this_05 = &PTR__initialize_classv_00125628;
   postinitialize_handler((Object*)this_05);
   Control::set_h_size_flags(this_05, 3);
   Control::set_v_size_flags(this_05, 3);
   EditorScale::get_scale();
   SplitContainer::set_split_offset((int)this_05);
   Node::add_child(pBVar7, this_05, 0, 0);
   this_06 = (Tree*)operator_new(0xdc8, "");
   Tree::Tree(this_06);
   postinitialize_handler((Object*)this_06);
   *(Tree**)( this + 0xdb0 ) = this_06;
   Node::set_auto_translate_mode(this_06, 2);
   Tree::set_hide_root(SUB81(*(undefined8*)( this + 0xdb0 ), 0));
   iVar6 = Tree::create_item(*(TreeItem**)( this + 0xdb0 ), 0);
   uVar10 = Tree::create_item(*(TreeItem**)( this + 0xdb0 ), iVar6);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "All Components");
   TTR((String*)&local_e8, (String*)&local_e0);
   TreeItem::set_text(uVar10, 0, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   uVar12 = Tree::create_item(*(TreeItem**)( this + 0xdb0 ), iVar6);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Components");
   TTR((String*)&local_e8, (String*)&local_e0);
   TreeItem::set_text(uVar12, 0, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   TreeItem::set_selectable((int)uVar12, false);
   uVar13 = Tree::create_item(*(TreeItem**)( this + 0xdb0 ), iVar6);
   local_d8 = (undefined*)0x0;
   String::parse_latin1((String*)&local_d8, "");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "Licenses");
   TTR((String*)&local_e8, (String*)&local_e0);
   TreeItem::set_text(uVar13, 0, (String*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   TreeItem::set_selectable((int)uVar13, false);
   local_110 = 0;
   String::parse_latin1((String*)&local_110, "");
   local_180 = &COPYRIGHT_INFO;
   do {
      uVar14 = Tree::create_item(*(TreeItem**)( this + 0xdb0 ), (int)uVar12);
      String::utf8((char*)&local_108, (int)*local_180);
      local_d8 = (undefined*)0x0;
      if (local_108 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_108);
      }

      TreeItem::set_text(uVar14, 0, (String*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      local_e0 = 0;
      local_d8 = &_LC110;
      local_d0 = 1;
      String::parse_latin1((StrRange*)&local_e0);
      String::operator +((String*)&local_100, (String*)&local_108);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      local_e0 = 0;
      local_d8 = &_LC110;
      local_d0 = 1;
      String::parse_latin1((StrRange*)&local_e0);
      operator+((char *)&
      local_d8,(String*)&_LC111;
      String::operator +((String*)&local_e8, (String*)&local_d8);
      String::operator +=((String*)&local_110, (String*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      if (0 < *(int*)( local_180 + 2 )) {
         puVar16 = (undefined8*)local_180[1];
         puVar15 = puVar16 + (long)*(int*)( local_180 + 2 ) * 4;
         do {
            lVar18 = 0;
            String::operator +=((String*)&local_100, "\n    Files:");
            if (0 < *(int*)( puVar16 + 3 )) {
               do {
                  String::utf8((char*)&local_d8, (int)*(undefined8*)( puVar16[1] + lVar18 * 8 ));
                  operator+((char *)&
                  local_e0,(String*)"\n        ";
                  String::operator +=((String*)&local_100, (String*)&local_e0);
                  lVar4 = local_e0;
                  if (local_e0 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_e0 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_e0 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  puVar5 = local_d8;
                  if (local_d8 != (undefined*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_d8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_d8 = (undefined*)0x0;
                        Memory::free_static(puVar5 + -0x10, false);
                     }

                  }

                  lVar18 = lVar18 + 1;
               }
 while ( (int)lVar18 < *(int*)( puVar16 + 3 ) );
            }

            lVar18 = 0;
            local_f8 = 0;
            if (0 < *(int*)( (long)puVar16 + 0x1c )) {
               do {
                  String::utf8((char*)&local_d8, (int)*(undefined8*)( puVar16[2] + lVar18 * 8 ));
                  String::utf8((char*)&local_e0, 0x103eb7);
                  String::operator +((String*)&local_e8, (String*)&local_e0);
                  String::operator +=((String*)&local_f8, (String*)&local_e8);
                  lVar4 = local_e8;
                  if (local_e8 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_e8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_e8 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  lVar4 = local_e0;
                  if (local_e0 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_e0 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_e0 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  puVar5 = local_d8;
                  if (local_d8 != (undefined*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_d8 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_d8 = (undefined*)0x0;
                        Memory::free_static(puVar5 + -0x10, false);
                     }

                  }

                  lVar18 = lVar18 + 1;
               }
 while ( (int)lVar18 < *(int*)( (long)puVar16 + 0x1c ) );
            }

            String::operator +=((String*)&local_100, (String*)&local_f8);
            String::operator +=((String*)&local_110, (String*)&local_f8);
            local_d8 = &_LC110;
            local_e0 = 0;
            local_d0 = 1;
            String::parse_latin1((StrRange*)&local_e0);
            String::utf8((char*)&local_d8, (int)*puVar16);
            operator+((char *)&
            local_e8,(String*)"\n    License: ";
            String::operator +((String*)&local_f0, (String*)&local_e8);
            lVar18 = local_e8;
            if (local_e8 != 0) {
               LOCK();
               plVar1 = (long*)( local_e8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e8 = 0;
                  Memory::free_static((void*)( lVar18 + -0x10 ), false);
               }

            }

            puVar5 = local_d8;
            if (local_d8 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_d8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d8 = (undefined*)0x0;
                  Memory::free_static(puVar5 + -0x10, false);
               }

            }

            lVar18 = local_e0;
            if (local_e0 != 0) {
               LOCK();
               plVar1 = (long*)( local_e0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e0 = 0;
                  Memory::free_static((void*)( lVar18 + -0x10 ), false);
               }

            }

            String::operator +=((String*)&local_100, (String*)&local_f0);
            local_d8 = &_LC110;
            local_e0 = 0;
            local_d0 = 1;
            String::parse_latin1((StrRange*)&local_e0);
            String::operator +((String*)&local_d8, (String*)&local_f0);
            String::operator +=((String*)&local_110, (String*)&local_d8);
            puVar5 = local_d8;
            if (local_d8 != (undefined*)0x0) {
               LOCK();
               plVar1 = (long*)( local_d8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_d8 = (undefined*)0x0;
                  Memory::free_static(puVar5 + -0x10, false);
               }

            }

            lVar18 = local_e0;
            if (local_e0 != 0) {
               LOCK();
               plVar1 = (long*)( local_e0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_e0 = 0;
                  Memory::free_static((void*)( lVar18 + -0x10 ), false);
               }

            }

            lVar18 = local_f0;
            if (local_f0 != 0) {
               LOCK();
               plVar1 = (long*)( local_f0 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_f0 = 0;
                  Memory::free_static((void*)( lVar18 + -0x10 ), false);
               }

            }

            lVar18 = local_f8;
            if (local_f8 != 0) {
               LOCK();
               plVar1 = (long*)( local_f8 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_f8 = 0;
                  Memory::free_static((void*)( lVar18 + -0x10 ), false);
               }

            }

            puVar16 = puVar16 + 4;
         }
 while ( puVar16 != puVar15 );
      }

      Variant::Variant((Variant*)local_c8, (String*)&local_100);
      TreeItem::set_metadata((int)uVar14, (Variant*)0x0);
      if (Variant::needs_deinit[(int)local_c8[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      local_180 = local_180 + 3;
   }
 while ( local_180 != &COPYRIGHT_PROJECT_PARTS );
   ppuVar17 = &LICENSE_NAMES;
   ppuVar19 = &LICENSE_BODIES;
   do {
      uVar12 = Tree::create_item(*(TreeItem**)( this + 0xdb0 ), (int)uVar13);
      String::utf8((char*)&local_100, (int)*ppuVar17);
      local_d8 = (undefined*)0x0;
      if (local_100 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_100);
      }

      TreeItem::set_text(uVar12, 0, (String*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      local_d8 = &_LC67;
      local_e0 = 0;
      local_d0 = 2;
      String::parse_latin1((StrRange*)&local_e0);
      operator+((char *)&
      local_d8,(String*)&_LC111;
      String::operator +((String*)&local_e8, (String*)&local_d8);
      String::operator +=((String*)&local_110, (String*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      String::utf8((char*)&local_f8, (int)*ppuVar19);
      Variant::Variant((Variant*)local_c8, (String*)&local_f8);
      TreeItem::set_metadata((int)uVar12, (Variant*)0x0);
      if (Variant::needs_deinit[(int)local_c8[0]] != '\0') {
         Variant::_clear_internal();
      }

      ppuVar17 = ppuVar17 + 1;
      ppuVar19 = ppuVar19 + 1;
      local_e0 = 0;
      local_d8 = &_LC67;
      local_d0 = 2;
      String::parse_latin1((StrRange*)&local_e0);
      String::replace((char*)&local_d8, (char*)&local_f8);
      operator+((char *)&
      local_e8,(String*)&_LC117;
      String::operator +((String*)&local_f0, (String*)&local_e8);
      String::operator +=((String*)&local_110, (String*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   }
 while ( ppuVar17 != (undefined**)&DAT_00125fd8 );
   Variant::Variant((Variant*)local_c8, (String*)&local_110);
   TreeItem::set_metadata((int)uVar10, (Variant*)0x0);
   if (Variant::needs_deinit[(int)local_c8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Node::add_child(this_05, *(undefined8*)( this + 0xdb0 ), 0, 0);
   pRVar11 = (RichTextLabel*)operator_new(0xcf0, "");
   local_d8 = (undefined*)0x0;
   RichTextLabel::RichTextLabel(pRVar11, (String*)&local_d8);
   postinitialize_handler((Object*)pRVar11);
   *(RichTextLabel**)( this + 0xdc0 ) = pRVar11;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   RichTextLabel::set_threaded(SUB81(*(undefined8*)( this + 0xdc0 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xdc0 ), 3);
   Control::set_v_size_flags(*(undefined8*)( this + 0xdc0 ), 3);
   Node::add_child(this_05, *(undefined8*)( this + 0xdc0 ), 0, 0);
   plVar1 = *(long**)( this + 0xdb0 );
   pcVar3 = *(code**)( *plVar1 + 0x108 );
   this_07 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_07);
   *(EditorAbout**)( this_07 + 0x28 ) = this;
   *(undefined1(*) [16])( this_07 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( this_07 + 0x20 ) = &_LC55;
   *(undefined***)this_07 = &PTR_hash_00125dc8;
   *(undefined8*)( this_07 + 0x40 ) = 0;
   uVar12 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_07 + 0x10 ) = 0;
   *(undefined8*)( this_07 + 0x30 ) = uVar12;
   *(code**)( this_07 + 0x38 ) = _license_tree_selected;
   CallableCustomMethodPointerBase::_setup((uint*)this_07, (int)this_07 + 0x28);
   *(char**)( this_07 + 0x20 ) = "EditorAbout::_license_tree_selected";
   Callable::Callable((Callable*)&local_d8, this_07);
   ( *pcVar3 )(plVar1, SceneStringNames::singleton + 0x260, (String*)&local_d8, 0);
   Callable::~Callable((Callable*)&local_d8);
   TreeItem::select((int)uVar10);
   pSVar2 = *(String**)( this + 0xdc0 );
   TreeItem::get_metadata((int)(Variant*)local_c8);
   Variant::operator_cast_to_String((Variant*)&local_d8);
   RichTextLabel::set_text(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (Variant::needs_deinit[(int)local_c8[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_118);
   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_120);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}
/* StyleBoxEmpty::is_class_ptr(void*) const */uint StyleBoxEmpty::is_class_ptr(StyleBoxEmpty *this, void *param_1) {
   return (uint)CONCAT71(0x1290, (undefined4*)param_1 == &StyleBox::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1291, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1291, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1291, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* StyleBoxEmpty::_getv(StringName const&, Variant&) const */undefined8 StyleBoxEmpty::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxEmpty::_setv(StringName const&, Variant const&) */undefined8 StyleBoxEmpty::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxEmpty::_validate_propertyv(PropertyInfo&) const */void StyleBoxEmpty::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* StyleBoxEmpty::_property_can_revertv(StringName const&) const */undefined8 StyleBoxEmpty::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* StyleBoxEmpty::_property_get_revertv(StringName const&, Variant&) const */undefined8 StyleBoxEmpty::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* StyleBoxEmpty::_notificationv(int, bool) */void StyleBoxEmpty::_notificationv(int param_1, bool param_2) {
   return;
}
/* StyleBoxEmpty::get_style_margin(Side) const */undefined8 StyleBoxEmpty::get_style_margin(void) {
   return 0;
}
/* StyleBoxEmpty::draw(RID, Rect2 const&) const */void StyleBoxEmpty::draw(void) {
   return;
}
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* Viewport::is_size_2d_override_stretch_enabled() const */undefined8 Viewport::is_size_2d_override_stretch_enabled(void) {
   return 1;
}
/* Viewport::is_sub_viewport() const */undefined8 Viewport::is_sub_viewport(void) {
   return 0;
}
/* Window::_popup_adjust_rect() const */undefined1[16];Window::_popup_adjust_rect(void) {
   return ZEXT816(0);
}
/* AcceptDialog::ok_pressed() */void AcceptDialog::ok_pressed(void) {
   return;
}
/* AcceptDialog::cancel_pressed() */void AcceptDialog::cancel_pressed(void) {
   return;
}
/* AcceptDialog::custom_action(String const&) */void AcceptDialog::custom_action(String *param_1) {
   return;
}
/* EditorAbout::is_class_ptr(void*) const */uint EditorAbout::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x1290, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x128f, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorAbout::_property_can_revertv(StringName const&) const */undefined8 EditorAbout::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorAbout::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorAbout::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<EditorAbout, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void> *this) {
   return;
}
/* CallableCustomMethodPointer<ItemList, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ItemList,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ItemList,void> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorAbout, void, ItemList*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void,ItemList*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void,ItemList*> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorAbout, void, int, ItemList*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void,int,ItemList*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void,int,ItemList*> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorAbout, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorAbout,void>::get_argument_count(CallableCustomMethodPointer<EditorAbout,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<ItemList, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<ItemList,void>::get_argument_count(CallableCustomMethodPointer<ItemList,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<EditorAbout, void, ItemList*>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorAbout,void,ItemList*>::get_argument_count(CallableCustomMethodPointer<EditorAbout,void,ItemList*> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<EditorAbout, void, int, ItemList*>::get_argument_count(bool&) const
    */undefined8 CallableCustomMethodPointer<EditorAbout,void,int,ItemList*>::get_argument_count(CallableCustomMethodPointer<EditorAbout,void,int,ItemList*> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<EditorAbout, void, int, ItemList*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void,int,ItemList*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void,int,ItemList*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<EditorAbout, void, ItemList*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void,ItemList*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void,ItemList*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ItemList, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ItemList,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ItemList,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<EditorAbout, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void> *this) {
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
/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HSplitContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HSplitContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0012d008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0012d008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* HSplitContainer::_property_can_revertv(StringName const&) const */undefined8 HSplitContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_0012d008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* EditorAbout::_getv(StringName const&, Variant&) const */undefined8 EditorAbout::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__get_0012d010 != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* EditorAbout::_setv(StringName const&, Variant const&) */undefined8 EditorAbout::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_0012d018 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CowData<ItemList*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<ItemList*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* StyleBoxEmpty::_get_class_namev() const */undefined8 *StyleBoxEmpty::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001076c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001076c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBoxEmpty");
         goto LAB_0010772e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "StyleBoxEmpty");
   LAB_0010772e:return &_get_class_namev();
}
/* CallableCustomMethodPointer<ItemList, void>::get_object() const */undefined8 CallableCustomMethodPointer<ItemList,void>::get_object(CallableCustomMethodPointer<ItemList,void> *this) {
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
         goto LAB_0010785d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010785d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010785d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<EditorAbout, void>::get_object() const */undefined8 CallableCustomMethodPointer<EditorAbout,void>::get_object(CallableCustomMethodPointer<EditorAbout,void> *this) {
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
         goto LAB_0010795d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010795d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010795d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<EditorAbout, void, ItemList*>::get_object() const */undefined8 CallableCustomMethodPointer<EditorAbout,void,ItemList*>::get_object(CallableCustomMethodPointer<EditorAbout,void,ItemList*> *this) {
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
         goto LAB_00107a5d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00107a5d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00107a5d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<EditorAbout, void, int, ItemList*>::get_object() const */undefined8 CallableCustomMethodPointer<EditorAbout,void,int,ItemList*>::get_object(CallableCustomMethodPointer<EditorAbout,void,int,ItemList*> *this) {
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
         goto LAB_00107b5d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00107b5d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00107b5d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* EditorAbout::_validate_propertyv(PropertyInfo&) const */void EditorAbout::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_0012d020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0012d028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0012d028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HSplitContainer::_validate_propertyv(PropertyInfo&) const */void HSplitContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_0012d030 == Control::_validate_property) {
      return;
   }

   SplitContainer::_validate_property(param_1);
   return;
}
/* HSplitContainer::is_class_ptr(void*) const */uint HSplitContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1290, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x125e, in_RSI == &SplitContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1290, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x1290, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1290, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0012d038 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_0012d038 != CanvasItem::_set) {
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
      if ((code*)PTR__set_0012d038 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x001080f8) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0012d040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00108168) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0012d040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x001081d8) *//* HSplitContainer::_getv(StringName const&, Variant&) const */undefined8 HSplitContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_0012d040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* EditorAbout::_notificationv(int, bool) */void EditorAbout::_notificationv(EditorAbout *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if (param_1 == 0x20) {
         _notification(iVar1);
      }

      if ((code*)PTR__notification_0012d048 != Window::_notification) {
         AcceptDialog::_notification(iVar1);
      }

      for (int i = 0; i < 3; i++) {
         Window::_notification(iVar1);
      }

      return;
   }

   for (int i = 0; i < 3; i++) {
      Node::_notification(iVar1);
   }

   if ((code*)PTR__notification_0012d048 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
   }

   if (param_1 != 0x20) {
      return;
   }

   _notification(iVar1);
   return;
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
         LAB_00108363:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108363;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
         goto LAB_001083ce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HSplitContainer");
   LAB_001083ce:return &_get_class_namev();
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
         LAB_00108453:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108453;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_001084be;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_001084be:return &_get_class_namev();
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
         LAB_00108543:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108543;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_001085ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_001085ae:return &_get_class_namev();
}
/* EditorAbout::_get_class_namev() const */undefined8 *EditorAbout::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00108623:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108623;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorAbout");
         goto LAB_0010868e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorAbout");
   LAB_0010868e:return &_get_class_namev();
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108720;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00108720:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108780;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00108780:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001087e0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001087e0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108850;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00108850:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* StyleBox::get_save_class() const */void StyleBox::get_save_class(void) {
   long lVar1;
   StrRange *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)in_RDI = 0;
   String::parse_latin1(in_RDI);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* StyleBox::get_base_extension() const */StyleBox * __thiscall StyleBox::get_base_extension(StyleBox *this){
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
/* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001089ce;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001089ce;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001089ce;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001089ce:Resource::~Resource((Resource*)this);
   return;
}
/* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Container::_notification;
   if (bVar1) {
      if (*(long*)( this + 0x298 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108a6e;
      }

      if (*(long*)( this + 0x280 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108a6e;
      }

      if (*(long*)( this + 0x268 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108a6e;
      }

      if (*(long*)( this + 0x250 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00108a6e:Resource::~Resource((Resource*)this);
   operator_delete(this, 0x2b0);
   return;
}
/* HBoxContainer::_notificationv(int, bool) */void HBoxContainer::_notificationv(HBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0012d050 != Container::_notification) {
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

   if ((code*)PTR__notification_0012d050 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
   return;
}
/* HSplitContainer::_notificationv(int, bool) */void HSplitContainer::_notificationv(HSplitContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0012d058 != Container::_notification) {
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

   if ((code*)PTR__notification_0012d058 == Container::_notification) {
      return;
   }

   SplitContainer::_notification(iVar1);
   return;
}
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_0012d050 != Container::_notification) {
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

   if ((code*)PTR__notification_0012d050 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
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
/* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(code**)this = Callable::bindp;
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
   *(code**)this = String::parse_latin1;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00108f1f;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00108f1f:Control::~Control((Control*)this);
   return;
}
/* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   Object *pOVar1;
   char cVar2;
   bool bVar3;
   *(code**)this = Callable::bindp;
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
   *(code**)this = String::parse_latin1;
   if (bVar3) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001090cf;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001090cf:Control::~Control((Control*)this);
   operator_delete(this, 0xa70);
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
/* Callable Callable::bind<ItemList*>(ItemList*) const */ItemList *Callable::bind<ItemList*>(ItemList *param_1) {
   char cVar1;
   Object *in_RDX;
   int in_ESI;
   long in_FS_OFFSET;
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, in_RDX);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   Callable::bindp((Variant**)param_1, in_ESI);
   if (Variant::needs_deinit[(int)local_40] == '\0') {
      cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* StyleBoxEmpty::_initialize_classv() */void StyleBoxEmpty::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (StyleBox::initialize_class() == '\0') {
         if (Resource::initialize_class() == '\0') {
            if (RefCounted::initialize_class() == '\0') {
               Object::initialize_class();
               local_50 = 0;
               String::parse_latin1((String*)&local_50, "Object");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "RefCounted");
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
               if ((code*)PTR__bind_methods_0012d068 != RefCounted::_bind_methods) {
                  RefCounted::_bind_methods();
               }

               RefCounted::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "RefCounted");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Resource");
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
            Resource::_bind_methods();
            Resource::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Resource");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "StyleBox");
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
         if ((code*)PTR__bind_methods_0012d060 != Resource::_bind_methods) {
            StyleBox::_bind_methods();
         }

         StyleBox::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "StyleBox");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "StyleBoxEmpty");
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* EditorAbout::get_class() const */void EditorAbout::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "EditorAbout");
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
/* HBoxContainer::get_class() const */void HBoxContainer::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "HBoxContainer");
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
/* StyleBoxEmpty::get_class() const */void StyleBoxEmpty::get_class(void) {
   long lVar1;
   long lVar2;
   char *__s;
   long in_RSI;
   String *in_RDI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( in_RSI + 8 ) == 0) {
      *(undefined8*)in_RDI = 0;
      String::parse_latin1(in_RDI, "StyleBoxEmpty");
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

         LAB_00109c47:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00109c47;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   CowData<char32_t> *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)this;
   if (plVar3 == (long*)0x0) {
      return;
   }

   do {
      this_00 = (CowData<char32_t>*)*plVar3;
      if (this_00 == (CowData<char32_t>*)0x0) {
         if ((int)plVar3[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( this_00 + 0x18 ) == plVar3) {
         lVar2 = *(long*)( this_00 + 8 );
         lVar1 = *(long*)( this_00 + 0x10 );
         *plVar3 = lVar2;
         if (this_00 == (CowData<char32_t>*)plVar3[1]) {
            plVar3[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 8 ) = lVar2;
            lVar2 = *(long*)( this_00 + 8 );
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar1;
         }

         CowData<char32_t>::_unref(this_00);
         Memory::free_static(this_00, false);
         *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar3 = *(long**)this;
   }
 while ( (int)plVar3[2] != 0 );
   Memory::free_static(plVar3, false);
   return;
}
/* CallableCustomMethodPointer<EditorAbout, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<EditorAbout,void>::call(CallableCustomMethodPointer<EditorAbout,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_00109fbf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_00109fbf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00109f98. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010a070;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00109fbf:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a070:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<ItemList, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<ItemList,void>::call(CallableCustomMethodPointer<ItemList,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0010a1cf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0010a1cf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x0010a1a8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_0010a280;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010a1cf:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a280:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorAbout, void, ItemList*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<EditorAbout,void,ItemList*>::call(CallableCustomMethodPointer<EditorAbout,void,ItemList*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   Object *pOVar5;
   Object *pOVar6;
   long lVar7;
   uint uVar8;
   ulong *puVar9;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar10;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_48[0] = (String)0x0;
         LOCK();
         bVar10 = (char)ObjectDB::spin_lock == '\0';
         if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar10) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010a4c5;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] == 0) goto LAB_0010a4c5;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            if (cVar4 == '\0') {
               LAB_0010a3d0:uVar3 = _LC39;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = *param_1;
               pOVar5 = Variant::operator_cast_to_Object_(this_00);
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar6 == (Object*)0x0 ) || ( lVar7 = __dynamic_cast(pOVar6, &Object::typeinfo, &ItemList::typeinfo, 0) ),lVar7 == 0 )) goto LAB_0010a3d0;
            }

            pOVar5 = Variant::operator_cast_to_Object_(*param_1);
            if (pOVar5 != (Object*)0x0) {
               pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &ItemList::typeinfo, 0);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010a437. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar5);
               return;
            }

            goto LAB_0010a576;
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
      LAB_0010a4c5:local_50 = 0;
      String::parse_latin1((String*)&local_50, "\', can\'t call method.");
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +(local_48, (String*)local_58);
      _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a576:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorAbout, void, int, ItemList*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<EditorAbout,void,int,ItemList*>::call(CallableCustomMethodPointer<EditorAbout,void,int,ItemList*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   Object *pOVar6;
   Object *pOVar7;
   long lVar8;
   uint uVar9;
   ulong *puVar10;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_48[0] = (String)0x0;
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010a793;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] == 0) goto LAB_0010a793;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 3) {
         if (param_2 == 2) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 0x18);
            if (cVar4 == '\0') {
               LAB_0010a6cf:uVar3 = _LC40;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = param_1[1];
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               pOVar7 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar7 == (Object*)0x0 ) || ( lVar8 = __dynamic_cast(pOVar7, &Object::typeinfo, &ItemList::typeinfo, 0) ),lVar8 == 0 )) goto LAB_0010a6cf;
            }

            pOVar6 = Variant::operator_cast_to_Object_(param_1[1]);
            if (pOVar6 != (Object*)0x0) {
               pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &ItemList::typeinfo, 0);
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar3 = _LC41;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            iVar5 = Variant::operator_cast_to_int(*param_1);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010a76c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar5, pOVar6);
               return;
            }

            goto LAB_0010a890;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 2;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 2;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010a793:local_50 = 0;
      String::parse_latin1((String*)&local_50, "\', can\'t call method.");
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +(local_48, (String*)local_58);
      _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010a890:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_0010a973;
   }

   cVar4 = String::operator ==(param_1, "Resource");
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
         if (cVar4 != '\0') goto LAB_0010a973;
      }

      cVar4 = String::operator ==(param_1, "RefCounted");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Object::is_class((Object*)this, param_1);
            return uVar5;
         }

         goto LAB_0010aa7e;
      }

   }

   LAB_0010a973:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010aa7e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* StyleBoxEmpty::is_class(String const&) const */undefined8 StyleBoxEmpty::is_class(StyleBoxEmpty *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_0010ab63;
   }

   cVar4 = String::operator ==(param_1, "StyleBoxEmpty");
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
         if (cVar4 != '\0') goto LAB_0010ab63;
      }

      cVar4 = String::operator ==(param_1, "StyleBox");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Resource::is_class((Resource*)this, param_1);
            return uVar5;
         }

         goto LAB_0010ac6e;
      }

   }

   LAB_0010ab63:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010ac6e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
                     if ((code*)PTR__bind_methods_0012d068 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0012d070 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_0012d078 != Container::_bind_methods) {
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
/* EditorAbout::_initialize_classv() */void EditorAbout::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AcceptDialog::initialize_class() == '\0') {
         if (Window::initialize_class() == '\0') {
            if (Viewport::initialize_class() == '\0') {
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
                  if ((code*)PTR__bind_methods_0012d068 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_50 = 0;
               String::parse_latin1((String*)&local_50, "Node");
               StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Viewport");
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
               Viewport::_bind_methods();
               Viewport::initialize_class()::initialized =
               '\x01';
            }

            local_50 = 0;
            String::parse_latin1((String*)&local_50, "Viewport");
            StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
            local_60 = 0;
            String::parse_latin1((String*)&local_60, "Window");
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
            Window::_bind_methods();
            Window::initialize_class()::initialized =
            '\x01';
         }

         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Window");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "AcceptDialog");
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
         if ((code*)PTR__bind_methods_0012d080 != Window::_bind_methods) {
            AcceptDialog::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_0012d088 != Object::_bind_compatibility_methods) {
            AcceptDialog::_bind_compatibility_methods();
         }

         AcceptDialog::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "AcceptDialog");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "EditorAbout");
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
/* HBoxContainer::_initialize_classv() */void HBoxContainer::_initialize_classv(void) {
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
                     if ((code*)PTR__bind_methods_0012d068 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0012d070 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_0012d078 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "BoxContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "HBoxContainer");
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
                     if ((code*)PTR__bind_methods_0012d068 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_0012d070 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_0012d090 != Container::_bind_methods) {
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
            if (pvVar3 == (void*)0x0) goto LAB_0010c3df;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010c3df:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_0010c513;
   }

   cVar4 = String::operator ==(param_1, "Node");
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
         if (cVar4 != '\0') goto LAB_0010c513;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = String::operator ==(param_1, "Object");
         return uVar5;
      }

   }
 else {
      LAB_0010c513:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_0010c6f3;
   }

   cVar4 = String::operator ==(param_1, "Control");
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
         if (cVar4 != '\0') goto LAB_0010c6f3;
      }

      cVar4 = String::operator ==(param_1, "CanvasItem");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Node::is_class((Node*)this, param_1);
            return uVar5;
         }

         goto LAB_0010c7fe;
      }

   }

   LAB_0010c6f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010c7fe:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Container::is_class(String const&) const */undefined8 Container::is_class(Container *this, String *param_1) {
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

      if (cVar4 != '\0') goto LAB_0010c90b;
   }

   cVar4 = String::operator ==(param_1, "Container");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = Control::is_class((Control*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010c90b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      if (cVar4 != '\0') goto LAB_0010ca33;
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
         if (cVar4 != '\0') goto LAB_0010ca33;
      }

      cVar4 = String::operator ==(param_1, "SplitContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_0010cb3e;
      }

   }

   LAB_0010ca33:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010cb3e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Window::is_class(String const&) const */undefined8 Window::is_class(Window *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_0010cc23;
   }

   cVar4 = String::operator ==(param_1, "Window");
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
         if (cVar4 != '\0') goto LAB_0010cc23;
      }

      cVar4 = String::operator ==(param_1, "Viewport");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Node::is_class((Node*)this, param_1);
            return uVar5;
         }

         goto LAB_0010cd2e;
      }

   }

   LAB_0010cc23:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010cd2e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorAbout::is_class(String const&) const */undefined8 EditorAbout::is_class(EditorAbout *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_0010ce13;
   }

   cVar4 = String::operator ==(param_1, "EditorAbout");
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
         if (cVar4 != '\0') goto LAB_0010ce13;
      }

      cVar4 = String::operator ==(param_1, "AcceptDialog");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Window::is_class((Window*)this, param_1);
            return uVar5;
         }

         goto LAB_0010cf1e;
      }

   }

   LAB_0010ce13:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010cf1e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      if (cVar4 != '\0') goto LAB_0010d003;
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
         if (cVar4 != '\0') goto LAB_0010d003;
      }

      cVar4 = String::operator ==(param_1, "BoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_0010d10e;
      }

   }

   LAB_0010d003:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010d10e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
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
      if (cVar4 != '\0') goto LAB_0010d1f3;
   }

   cVar4 = String::operator ==(param_1, "HBoxContainer");
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
         if (cVar4 != '\0') goto LAB_0010d1f3;
      }

      cVar4 = String::operator ==(param_1, "BoxContainer");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Container::is_class((Container*)this, param_1);
            return uVar5;
         }

         goto LAB_0010d2fe;
      }

   }

   LAB_0010d1f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010d2fe:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
   local_78 = &_LC42;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC42;
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
/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Viewport::_get_property_listv(Viewport *this, List *param_1, bool param_2) {
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
   local_78 = "Viewport";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Viewport";
   local_98 = 0;
   local_70 = 8;
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

   StringName::StringName((StringName*)&local_78, "Viewport", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
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
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
/* StyleBox::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StyleBox::_get_property_listv(StyleBox *this, List *param_1, bool param_2) {
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
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "StyleBox";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "StyleBox";
   local_98 = 0;
   local_70 = 8;
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

   StringName::StringName((StringName*)&local_78, "StyleBox", false);
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
/* StyleBoxEmpty::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void StyleBoxEmpty::_get_property_listv(StyleBoxEmpty *this, List *param_1, bool param_2) {
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
      StyleBox::_get_property_listv((StyleBox*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "StyleBoxEmpty";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "StyleBoxEmpty";
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

   StringName::StringName((StringName*)&local_78, "StyleBoxEmpty", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         StyleBox::_get_property_listv((StyleBox*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Window::_get_property_listv(Window *this, List *param_1, bool param_2) {
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
      Viewport::_get_property_listv((Viewport*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Window";
   local_70 = 6;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Window";
   local_98 = 0;
   local_70 = 6;
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

   StringName::StringName((StringName*)&local_78, "Window", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_0012d098 != Object::_get_property_list) {
      Window::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Viewport::_get_property_listv((Viewport*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AcceptDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AcceptDialog::_get_property_listv(AcceptDialog *this, List *param_1, bool param_2) {
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
      Window::_get_property_listv((Window*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "AcceptDialog";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AcceptDialog";
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

   StringName::StringName((StringName*)&local_78, "AcceptDialog", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Window::_get_property_listv((Window*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorAbout::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorAbout::_get_property_listv(EditorAbout *this, List *param_1, bool param_2) {
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
      AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorAbout";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorAbout";
   local_98 = 0;
   local_70 = 0xb;
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

   StringName::StringName((StringName*)&local_78, "EditorAbout", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

   if ((code*)PTR__get_property_list_0012d0a0 != Object::_get_property_list) {
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

   if ((code*)PTR__get_property_list_0012d0a8 != CanvasItem::_get_property_list) {
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
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* Container::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Container::_get_property_listv(List *param_1, bool param_2) {
   char in_DL;
   undefined7 in_register_00000031;
   List *this;
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
   this(List * CONCAT71(in_register_00000031, param_2));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_DL == '\0') {
      Control::_get_property_listv((Control*)param_1, this, false);
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

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)this, (PropertyInfo*)&local_78);
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
   ClassDB::get_property_list((StringName*)&local_78, this, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (in_DL == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Control::_get_property_listv((Control*)param_1, this, true);
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
      Container::_get_property_listv((List*)this, SUB81(param_1, 0));
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
         Container::_get_property_listv((List*)this, SUB81(param_1, 0));
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
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
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
   local_78 = "HBoxContainer";
   local_70 = 0xd;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "HBoxContainer";
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
      Container::_get_property_listv((List*)this, SUB81(param_1, 0));
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
         Container::_get_property_listv((List*)this, SUB81(param_1, 0));
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
/* CowData<ItemList*>::_realloc(long) */undefined8 CowData<ItemList*>::_realloc(CowData<ItemList*> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<ItemList*>::resize<false>(long) */undefined8 CowData<ItemList*>::resize<false>(CowData<ItemList*> *this, long param_1) {
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
      LAB_001101a0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_001101a0;
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
            goto LAB_001100b1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_001100b1:puVar7[-1] = param_1;
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
/* EditorAbout::_notification(int) */void EditorAbout::_GLOBAL__sub_I__notification(void) {
   undefined8 uStack_8;
   if (ItemList::base_property_helper == '\0') {
      ItemList::base_property_helper = '\x01';
      ItemList::base_property_helper._64_8_ = 0;
      ItemList::base_property_helper._0_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._24_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._40_16_ = (undefined1[16])0x0;
      ItemList::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, ItemList::base_property_helper, &__dso_handle);
   }

   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (TabBar::base_property_helper != '\0') {
      return;
   }

   TabBar::base_property_helper = 1;
   TabBar::base_property_helper._64_8_ = 0;
   TabBar::base_property_helper._56_8_ = 2;
   TabBar::base_property_helper._0_16_ = (undefined1[16])0x0;
   TabBar::base_property_helper._24_16_ = (undefined1[16])0x0;
   TabBar::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, TabBar::base_property_helper, &__dso_handle, uStack_8);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<String, DefaultAllocator>::~List() */void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HSplitContainer::~HSplitContainer() */void HSplitContainer::~HSplitContainer(HSplitContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StyleBoxEmpty::~StyleBoxEmpty() */void StyleBoxEmpty::~StyleBoxEmpty(StyleBoxEmpty *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorAbout, void, int, ItemList*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void,int,ItemList*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void,int,ItemList*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorAbout, void, ItemList*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void,ItemList*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void,ItemList*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ItemList, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ItemList,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ItemList,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorAbout, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorAbout,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorAbout,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


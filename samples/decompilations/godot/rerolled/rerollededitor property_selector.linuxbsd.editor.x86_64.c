/* PropertySelector::_hide_requested() */void PropertySelector::_hide_requested(void) {
   AcceptDialog::_cancel_pressed();
   return;
}
/* PropertySelector::_confirmed() */void PropertySelector::_confirmed(PropertySelector *this) {
   int iVar1;
   long lVar2;
   long in_FS_OFFSET;
   Variant *local_98[2];
   int local_88[8];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar2 = Tree::get_selected();
   if (lVar2 == 0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      TreeItem::get_metadata((int)(Variant*)local_88);
      if (_confirmed()::{lambda()
      #1
      iVar1 = __cxa_guard_acquire(&_confirmed()::, {
            lambda()
            #1
            if (iVar1 != 0) {
               _scs_create((char *)&_confirmed()::{lambda()
               #1
               __cxa_atexit(StringName::~StringName, &_confirmed()::, {
                     lambda()
                     #1
                     &__dso_handle;
                     __cxa_guard_release(&_confirmed()::{lambda()#1}::operator()()::sname);
      }
    }, Variant::Variant((Variant*)local_68, (Variant*)local_88));
                     local_50 = 0;
                     local_48 = (undefined1[16])0x0;
                     local_98[0] = (Variant*)local_68;
                     ( **(code**)( *(long*)this + 0xd0 ) )(this, &_confirmed()::, {
                           lambda()
                           #1
                           if (Variant::needs_deinit[(int)local_50] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (Variant::needs_deinit[local_68[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (Variant::needs_deinit[local_88[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                              Window::hide();
                              return;
                           }

                        }
, /* WARNING: Subroutine does not return */, __stack_chk_fail();
                  }
, /* PropertySelector::_sbox_input(Ref<InputEvent> const&) */, void __thiscall PropertySelector::_sbox_input(PropertySelector *this, Ref * param_1);
               {
                  long *plVar1;
                  code *pcVar2;
                  char cVar3;
                  int iVar4;
                  StringName *pSVar5;
                  Object *pOVar6;
                  long lVar7;
                  long in_FS_OFFSET;
                  long local_60;
                  long local_58;
                  long local_50;
                  Object *local_48;
                  long local_40;
                  local_40 = *(long*)( in_FS_OFFSET + 0x28 );
                  if (( ( *(long*)param_1 != 0 ) && ( pSVar5 = (StringName*)__dynamic_cast(*(long*)param_1, &Object::typeinfo, &InputEventKey::typeinfo, 0) ),pSVar5 != (StringName*)0x0 )) {
                     StringName::StringName((StringName*)&local_60, "ui_up", false);
                     cVar3 = InputEvent::is_action(pSVar5, SUB81((StringName*)&local_60, 0));
                     if (cVar3 == '\0') {
                        StringName::StringName((StringName*)&local_58, "ui_down", false);
                        cVar3 = InputEvent::is_action(pSVar5, SUB81((StringName*)&local_58, 0));
                        if (cVar3 == '\0') {
                           StringName::StringName((StringName*)&local_50, "ui_page_up", false);
                           cVar3 = InputEvent::is_action(pSVar5, SUB81((StringName*)&local_50, 0));
                           if (cVar3 == '\0') {
                              StringName::StringName((StringName*)&local_48, "ui_page_down", false);
                              cVar3 = InputEvent::is_action(pSVar5, SUB81((StringName*)&local_48, 0));
                              if (( StringName::configured != '\0' ) && ( ( local_48 == (Object*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) )) goto LAB_001004a0;
                           }
 else {
                              cVar3 = StringName::configured;
                              if (StringName::configured == '\0') goto LAB_00100297;
                              LAB_001004a0:if (( local_50 == 0 ) || ( StringName::unref(),StringName::configured != '\0' )) goto LAB_0010040a;
                           }

                        }
 else {
                           cVar3 = StringName::configured;
                           if (StringName::configured == '\0') goto LAB_00100297;
                           LAB_0010040a:if (local_58 != 0) {
                              StringName::unref();
                           }

                           if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                              StringName::unref();
                           }

                        }

                        if (cVar3 != '\0') goto LAB_00100297;
                        cVar3 = RefCounted::unreference();
                     }
 else {
                        if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                           StringName::unref();
                        }

                        LAB_00100297:plVar1 = *(long**)( this + 0xdc0 );
                        pcVar2 = *(code**)( *plVar1 + 0x308 );
                        local_48 = (Object*)0x0;
                        pOVar6 = (Object*)__dynamic_cast(pSVar5, &Object::typeinfo, &InputEvent::typeinfo, 0);
                        if (( pOVar6 != (Object*)0x0 ) && ( local_48 = pOVar6 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
                           local_48 = (Object*)0x0;
                        }

                        ( *pcVar2 )(plVar1);
                        if (( ( local_48 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar6 = local_48,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
                        Memory::free_static(pOVar6, false);
                     }

                     Control::accept_event();
                     Tree::get_root();
                     lVar7 = TreeItem::get_first_child();
                     if (lVar7 != 0) {
                        iVar4 = Tree::get_selected();
                        while (lVar7 = Tree::get_next_selected(*(TreeItem**)( this + 0xdc0 )),lVar7 != 0) {
                           TreeItem::deselect((int)lVar7);
                        }
;
                        TreeItem::select(iVar4);
                     }

                     cVar3 = RefCounted::unreference();
                  }

                  if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pSVar5) ),cVar3 != '\0') {
                     ( **(code**)( *(long*)pSVar5 + 0x140 ) )(pSVar5);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        Memory::free_static(pSVar5, false);
                        return;
                     }

                     goto LAB_00100559;
                  }

               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               LAB_00100559:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */
            void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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

            /* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */
            void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
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

            /* PropertySelector::set_type_filter(Vector<Variant::Type> const&) */
            void PropertySelector::set_type_filter(PropertySelector *this, Vector *param_1) {
               long lVar1;
               long lVar2;
               long *plVar3;
               bool bVar4;
               lVar1 = *(long*)( this + 0xe10 );
               lVar2 = *(long*)( param_1 + 8 );
               if (lVar1 == lVar2) {
                  return;
               }

               if (lVar1 != 0) {
                  LOCK();
                  plVar3 = (long*)( lVar1 + -0x10 );
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                     lVar1 = *(long*)( this + 0xe10 );
                     *(undefined8*)( this + 0xe10 ) = 0;
                     Memory::free_static((void*)( lVar1 + -0x10 ), false);
                     lVar2 = *(long*)( param_1 + 8 );
                  }
 else {
                     *(undefined8*)( this + 0xe10 ) = 0;
                     lVar2 = *(long*)( param_1 + 8 );
                  }

               }

               if (lVar2 != 0) {
                  plVar3 = (long*)( lVar2 + -0x10 );
                  do {
                     lVar1 = *plVar3;
                     if (lVar1 == 0) {
                        return;
                     }

                     LOCK();
                     lVar2 = *plVar3;
                     bVar4 = lVar1 == lVar2;
                     if (bVar4) {
                        *plVar3 = lVar1 + 1;
                        lVar2 = lVar1;
                     }

                     UNLOCK();
                  }
 while ( !bVar4 );
                  if (lVar2 != -1) {
                     *(undefined8*)( this + 0xe10 ) = *(undefined8*)( param_1 + 8 );
                  }

               }

               return;
            }

            /* PropertySelector::_notification(int) */
            void PropertySelector::_notification(PropertySelector *this, int param_1) {
               code *pcVar1;
               long in_FS_OFFSET;
               PropertySelector aPStack_38[24];
               long local_20;
               local_20 = *(long*)( in_FS_OFFSET + 0x28 );
               if (param_1 == 10) {
                  pcVar1 = *(code**)( *(long*)this + 0x108 );
                  create_custom_callable_function_pointer<PropertySelector>(aPStack_38, (char*)this, (_func_void*)"&PropertySelector::_confirmed");
                  ( *pcVar1 )(this, SceneStringNames::singleton + 0x268, aPStack_38, 0);
                  Callable::~Callable((Callable*)aPStack_38);
               }
 else if (param_1 == 0xb) {
                  pcVar1 = *(code**)( *(long*)this + 0x110 );
                  create_custom_callable_function_pointer<PropertySelector>(aPStack_38, (char*)this, (_func_void*)"&PropertySelector::_confirmed");
                  ( *pcVar1 )(this, SceneStringNames::singleton + 0x268, aPStack_38);
                  Callable::~Callable((Callable*)aPStack_38);
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* PropertySelector::PropertySelector() */
            void PropertySelector::PropertySelector(PropertySelector *this) {
               undefined8 uVar1;
               long *plVar2;
               code *pcVar3;
               BoxContainer *this_00;
               LineEdit *this_01;
               CallableCustom *pCVar4;
               Tree *this_02;
               EditorHelpBit *this_03;
               long in_FS_OFFSET;
               float fVar5;
               float fVar6;
               undefined8 local_68;
               long local_60;
               char *local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               ConfirmationDialog::ConfirmationDialog((ConfirmationDialog*)this);
               *(undefined***)this = &PTR__initialize_classv_0010d6a8;
               *(undefined8*)( this + 0xdc8 ) = 0;
               this[0xdd0] = (PropertySelector)0x0;
               *(undefined8*)( this + 0xdd8 ) = 0;
               *(undefined8*)( this + 0xde8 ) = 0;
               *(undefined8*)( this + 0xdf0 ) = 0;
               *(undefined8*)( this + 0xdf8 ) = 0;
               this[0xe00] = (PropertySelector)0x0;
               *(undefined8*)( this + 0xe10 ) = 0;
               *(undefined1(*) [16])( this + 0xdb8 ) = (undefined1[16])0x0;
               this_00 = (BoxContainer*)operator_new(0xa10, "");
               BoxContainer::BoxContainer(this_00, true);
               this_00[0xa0c] = (BoxContainer)0x1;
               *(undefined***)this_00 = &PTR__initialize_classv_0010d0b8;
               postinitialize_handler((Object*)this_00);
               Node::add_child(this, this_00, 0, 0);
               this_01 = (LineEdit*)operator_new(0xbb0, "");
               local_58 = (char*)0x0;
               LineEdit::LineEdit(this_01, (String*)&local_58);
               postinitialize_handler((Object*)this_01);
               *(LineEdit**)( this + 0xdb8 ) = this_01;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               local_58 = "";
               local_60 = 0;
               uVar1 = *(undefined8*)( this + 0xdb8 );
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_60);
               local_58 = "Search:";
               local_68 = 0;
               local_50 = 7;
               String::parse_latin1((StrRange*)&local_68);
               TTR((String*)&local_58, (String*)&local_68);
               VBoxContainer::add_margin_child((String*)this_00, (Control*)&local_58, SUB81(uVar1, 0));
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               plVar2 = *(long**)( this + 0xdb8 );
               pcVar3 = *(code**)( *plVar2 + 0x108 );
               pCVar4 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(pCVar4);
               *(undefined1(*) [16])( pCVar4 + 0x30 ) = (undefined1[16])0x0;
               *(undefined8*)( pCVar4 + 0x40 ) = 0;
               uVar1 = *(undefined8*)( this + 0x60 );
               *(undefined***)pCVar4 = &PTR_hash_0010da40;
               *(undefined8*)( pCVar4 + 0x30 ) = uVar1;
               *(code**)( pCVar4 + 0x38 ) = _text_changed;
               *(undefined8*)( pCVar4 + 0x10 ) = 0;
               *(undefined**)( pCVar4 + 0x20 ) = &_LC11;
               *(PropertySelector**)( pCVar4 + 0x28 ) = this;
               CallableCustomMethodPointerBase::_setup((uint*)pCVar4, (int)pCVar4 + 0x28);
               *(char**)( pCVar4 + 0x20 ) = "PropertySelector::_text_changed";
               Callable::Callable((Callable*)&local_58, pCVar4);
               ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x270, (CowData<char32_t>*)&local_58, 0);
               Callable::~Callable((Callable*)&local_58);
               plVar2 = *(long**)( this + 0xdb8 );
               pcVar3 = *(code**)( *plVar2 + 0x108 );
               pCVar4 = (CallableCustom*)operator_new(0x48, "");
               CallableCustom::CallableCustom(pCVar4);
               *(undefined1(*) [16])( pCVar4 + 0x30 ) = (undefined1[16])0x0;
               *(undefined8*)( pCVar4 + 0x40 ) = 0;
               uVar1 = *(undefined8*)( this + 0x60 );
               *(undefined***)pCVar4 = &PTR_hash_0010dad0;
               *(undefined8*)( pCVar4 + 0x30 ) = uVar1;
               *(code**)( pCVar4 + 0x38 ) = _sbox_input;
               *(undefined8*)( pCVar4 + 0x10 ) = 0;
               *(undefined**)( pCVar4 + 0x20 ) = &_LC11;
               *(PropertySelector**)( pCVar4 + 0x28 ) = this;
               CallableCustomMethodPointerBase::_setup((uint*)pCVar4, (int)pCVar4 + 0x28);
               *(char**)( pCVar4 + 0x20 ) = "PropertySelector::_sbox_input";
               Callable::Callable((Callable*)&local_58, pCVar4);
               ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x28, (CowData<char32_t>*)&local_58, 0);
               Callable::~Callable((Callable*)&local_58);
               this_02 = (Tree*)operator_new(0xdc8, "");
               Tree::Tree(this_02);
               postinitialize_handler((Object*)this_02);
               *(Tree**)( this + 0xdc0 ) = this_02;
               Node::set_auto_translate_mode(this_02, 2);
               local_58 = "";
               local_60 = 0;
               uVar1 = *(undefined8*)( this + 0xdc0 );
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_60);
               local_58 = "Matches:";
               local_68 = 0;
               local_50 = 8;
               String::parse_latin1((StrRange*)&local_68);
               TTR((String*)&local_58, (String*)&local_68);
               VBoxContainer::add_margin_child((String*)this_00, (Control*)&local_58, SUB81(uVar1, 0));
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               local_58 = "";
               local_60 = 0;
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_60);
               local_58 = "Open";
               local_68 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_68);
               TTR((String*)&local_58, (String*)&local_68);
               AcceptDialog::set_ok_button_text(this, (CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xd88 ), 0));
               AcceptDialog::register_text_enter((LineEdit*)this);
               AcceptDialog::set_hide_on_ok(SUB81(this, 0));
               plVar2 = *(long**)( this + 0xdc0 );
               pcVar3 = *(code**)( *plVar2 + 0x108 );
               create_custom_callable_function_pointer<PropertySelector>((PropertySelector*)&local_58, (char*)this, (_func_void*)"&PropertySelector::_confirmed");
               StringName::StringName((StringName*)&local_60, "item_activated", false);
               ( *pcVar3 )(plVar2, (StrRange*)&local_60, (CowData<char32_t>*)&local_58, 0);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)&local_58);
               plVar2 = *(long**)( this + 0xdc0 );
               pcVar3 = *(code**)( *plVar2 + 0x108 );
               create_custom_callable_function_pointer<PropertySelector>((PropertySelector*)&local_58, (char*)this, (_func_void*)"&PropertySelector::_item_selected");
               StringName::StringName((StringName*)&local_60, "cell_selected", false);
               ( *pcVar3 )(plVar2, (StrRange*)&local_60, (CowData<char32_t>*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)&local_58);
               Tree::set_hide_root(SUB81(*(undefined8*)( this + 0xdc0 ), 0));
               this_03 = (EditorHelpBit*)operator_new(0xab0, "");
               local_58 = (char*)0x0;
               local_60 = 0;
               EditorHelpBit::EditorHelpBit(this_03, (String*)&local_60, (String*)&local_58, false, true);
               postinitialize_handler((Object*)this_03);
               *(EditorHelpBit**)( this + 0xdc8 ) = this_03;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               fVar5 = (float)EditorScale::get_scale();
               fVar5 = _LC27 * fVar5;
               fVar6 = (float)EditorScale::get_scale();
               EditorHelpBit::set_content_height_limits(fVar6 * _LC27, fVar5);
               plVar2 = *(long**)( this + 0xdc8 );
               pcVar3 = *(code**)( *plVar2 + 0x108 );
               create_custom_callable_function_pointer<PropertySelector>((PropertySelector*)&local_58, (char*)this, (_func_void*)"&PropertySelector::_hide_requested");
               StringName::StringName((StringName*)&local_60, "request_hide", false);
               ( *pcVar3 )(plVar2, (StrRange*)&local_60, (CowData<char32_t>*)&local_58, 0);
               if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               Callable::~Callable((Callable*)&local_58);
               local_58 = "";
               local_60 = 0;
               uVar1 = *(undefined8*)( this + 0xdc8 );
               local_50 = 0;
               String::parse_latin1((StrRange*)&local_60);
               local_58 = "Description:";
               local_68 = 0;
               local_50 = 0xc;
               String::parse_latin1((StrRange*)&local_68);
               TTR((String*)&local_58, (String*)&local_68);
               VBoxContainer::add_margin_child((String*)this_00, (Control*)&local_58, SUB81(uVar1, 0));
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* PropertySelector::_create_subproperties(TreeItem*, Variant::Type) */
            void PropertySelector::_create_subproperties(PropertySelector *this, undefined8 param_1, undefined4 param_3) {
               undefined8 uVar1;
               char *pcVar2;
               long in_FS_OFFSET;
               undefined8 local_28;
               long local_20;
               uVar1 = local_28;
               local_20 = *(long*)( in_FS_OFFSET + 0x28 );
               local_28 = 0;
               switch (param_3) {
                  case 5:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    pcVar2 = "y";
    goto LAB_0010111d;
                  case 6:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    uVar1 = 2;
    break;
                  case 7:
    String::parse_latin1((String *)&local_28,"position");
    _create_subproperty(this,param_1,&local_28,5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"size");
    _create_subproperty(this,param_1,&local_28,5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"end");
    uVar1 = 5;
    break;
                  case 8:
    String::parse_latin1((String *)&local_28,"position");
    _create_subproperty(this,param_1,&local_28,6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"size");
    _create_subproperty(this,param_1,&local_28,6);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"end");
    uVar1 = 6;
    break;
                  case 9:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    pcVar2 = "z";
    goto LAB_0010111d;
                  case 10:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"z");
    uVar1 = 2;
    break;
                  case 0xb:
    String::parse_latin1((String *)&local_28,"origin");
    _create_subproperty(this,param_1,&local_28,5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    uVar1 = 5;
    break;
                  case 0xc:
                  case 0xf:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"z");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    pcVar2 = "w";
    goto LAB_0010111d;
                  case 0xd:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"z");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"w");
    uVar1 = 2;
    break;
                  case 0xe:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"z");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"normal");
    _create_subproperty(this,param_1,&local_28,9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    pcVar2 = "d";
    goto LAB_0010111d;
                  case 0x10:
    String::parse_latin1((String *)&local_28,"position");
    _create_subproperty(this,param_1,&local_28,9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"size");
    _create_subproperty(this,param_1,&local_28,9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"end");
    uVar1 = 9;
    break;
                  case 0x11:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    _create_subproperty(this,param_1,&local_28,9);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"z");
    uVar1 = 9;
    break;
                  case 0x12:
    String::parse_latin1((String *)&local_28,"basis");
    _create_subproperty(this,param_1,&local_28,0x11);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"origin");
    uVar1 = 9;
    break;
                  case 0x13:
    String::parse_latin1((String *)&local_28,"x");
    _create_subproperty(this,param_1,&local_28,0xc);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"y");
    _create_subproperty(this,param_1,&local_28,0xc);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"z");
    _create_subproperty(this,param_1,&local_28,0xc);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"w");
    uVar1 = 0xc;
    break;
                  case 0x14:
    String::parse_latin1((String *)&local_28,"r");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"g");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"b");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"a");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"r8");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"g8");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"b8");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"a8");
    _create_subproperty(this,param_1,&local_28,2);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"h");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    local_28 = 0;
    String::parse_latin1((String *)&local_28,"s");
    _create_subproperty(this,param_1,&local_28,3);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_28);
    pcVar2 = "v";
LAB_0010111d:
    local_28 = 0;
    String::parse_latin1((String *)&local_28,pcVar2);
    uVar1 = 3;
    break;
                  default:
    goto switchD_00101077_default;
               }

               _create_subproperty(this, param_1, &local_28, uVar1);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
               uVar1 = local_28;
               switchD_00101077_default:local_28 = uVar1;
               if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

            /* PropertySelector::_create_subproperty(TreeItem*, String const&, Variant::Type) */
            void PropertySelector::_create_subproperty(PropertySelector *this, int param_2_00, CowData *param_2, int param_4) {
               long lVar1;
               Object *pOVar2;
               char cVar3;
               long lVar4;
               undefined8 uVar5;
               long in_FS_OFFSET;
               Variant local_a0[8];
               undefined8 local_98;
               long local_90;
               Object *local_88;
               undefined8 local_80;
               int local_78[8];
               int local_58[6];
               long local_40;
               lVar1 = *(long*)( this + 0xe10 );
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               lVar4 = 0;
               if (lVar1 == 0) {
                  LAB_00101a52:uVar5 = Tree::create_item(*(TreeItem**)( this + 0xdc0 ), param_2_00);
                  local_88 = (Object*)0x0;
                  if (*(long*)param_2 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, param_2);
                  }

                  TreeItem::set_text(uVar5, 0, (CowData<char32_t>*)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  local_88 = (Object*)&_LC55;
                  local_98 = 0;
                  local_80 = 1;
                  String::parse_latin1((StrRange*)&local_98);
                  TreeItem::get_metadata((int)local_78);
                  Variant::operator_cast_to_String(local_a0);
                  String::operator +((String*)&local_90, (String*)local_a0);
                  String::operator +((String*)&local_88, (String*)&local_90);
                  Variant::Variant((Variant*)local_58, (String*)&local_88);
                  TreeItem::set_metadata((int)uVar5, (Variant*)0x0);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                  Variant::get_type_name((StrRange*)&local_98, param_4);
                  StringName::StringName((StringName*)&local_90, (String*)&local_98, false);
                  Control::get_editor_theme_icon((StringName*)&local_88);
                  TreeItem::set_icon((int)uVar5, (Ref*)0x0);
                  if (( ( local_88 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pOVar2 = local_88,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

               if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  _create_subproperties(this, uVar5, param_4);
                  return;
               }

            }

            else{if (0 < *(long *)(lVar1 + -8)) {
      do {
        if (*(int *)(lVar1 + lVar4 * 4) == param_4) goto LAB_00101a52;
        lVar4 = lVar4 + 1;
      } while (*(long *)(lVar1 + -8) != lVar4);
    }
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)){return;}};
            __stack_chk_fail();
         }
, /* PropertySelector::_item_selected() */, void __thiscall PropertySelector::_item_selected(PropertySelector *this);
      {
         long *plVar1;
         char cVar2;
         long lVar3;
         char *pcVar4;
         long in_FS_OFFSET;
         String *local_b0;
         Variant local_a0[8];
         char *local_98;
         undefined8 local_90;
         CowData<char32_t> local_88[8];
         long local_80;
         long local_78;
         char *local_70;
         char *local_68;
         size_t local_60;
         int local_58[6];
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_68 = (char*)0x0;
         local_70 = (char*)0x0;
         local_78 = 0;
         EditorHelpBit::set_custom_text(*(String**)( this + 0xdc8 ), (String*)&local_78, (String*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         lVar3 = Tree::get_selected();
         BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xd88 ), 0));
         if (lVar3 == 0) {
            LAB_00101e71:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            return;
         }

         TreeItem::get_metadata((int)local_58);
         Variant::operator_cast_to_String(local_a0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         local_98 = (char*)0x0;
         if (*(int*)( this + 0xde0 ) == 0) {
            if (( *(long*)( this + 0xde8 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0xde8 ) + -8 ) )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( this + 0xde8 ));
               goto LAB_00101e38;
            }

            if (*(long**)( this + 0xdf8 ) == (long*)0x0) {
               local_90 = 0;
               LAB_00101e56:CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
               goto LAB_00101e71;
            }

            ( **(code**)( **(long**)( this + 0xdf8 ) + 0x48 ) )((CowData<char32_t>*)&local_68);
            if (local_98 != local_68) goto LAB_00101e10;
         }
 else {
            Variant::get_type_name((CowData<char32_t>*)&local_68);
            if (local_98 != local_68) {
               LAB_00101e10:CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               local_98 = local_68;
               local_68 = (char*)0x0;
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         LAB_00101e38:local_90 = 0;
         do {
            if (( local_98 == (char*)0x0 ) || ( *(uint*)( local_98 + -8 ) < 2 )) goto LAB_00101e56;
            if (this[0xdd0] == (PropertySelector)0x0) {
               StringName::StringName((StringName*)&local_68, (String*)local_a0, false);
               StringName::StringName((StringName*)&local_70, (String*)&local_98, false);
               cVar2 = ClassDB::has_method((StringName*)&local_70, (StringName*)&local_68, true);
               if (( StringName::configured != '\0' ) && ( ( ( local_70 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_68 != (char*)0x0 ) ) )) {
                  StringName::unref();
               }

               if (cVar2 != '\0') {
                  local_b0 = *(String**)( this + 0xdc8 );
                  local_68 = (char*)0x0;
                  local_80 = 0;
                  String::parse_latin1((String*)&local_80, "|");
                  pcVar4 = "method|";
                  goto LAB_001020e4;
               }

            }
 else {
               StringName::StringName((StringName*)&local_68, (String*)local_a0, false);
               StringName::StringName((StringName*)&local_70, (String*)&local_98, false);
               cVar2 = ClassDB::has_property((StringName*)&local_70, (StringName*)&local_68, true);
               if (( ( StringName::configured != '\0' ) && ( ( local_70 == (char*)0x0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_68 != (char*)0x0 )) {
                  StringName::unref();
               }

               if (cVar2 != '\0') {
                  local_b0 = *(String**)( this + 0xdc8 );
                  local_68 = (char*)0x0;
                  local_80 = 0;
                  String::parse_latin1((String*)&local_80, "|");
                  pcVar4 = "property|";
                  LAB_001020e4:operator + ( (char*)local_88,(String*)pcVar4 );
                  String::operator +((String*)&local_78, (String*)local_88);
                  String::operator +((String*)&local_70, (String*)&local_78);
                  EditorHelpBit::parse_symbol(local_b0, (String*)&local_70);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  CowData<char32_t>::_unref(local_88);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  goto LAB_00101e56;
               }

            }

            StringName::StringName((StringName*)&local_80, (String*)&local_98, false);
            ClassDB::get_parent_class((StringName*)&local_78);
            if (local_78 == 0) {
               LAB_00102159:local_70 = (char*)0x0;
               if (local_98 != (char*)0x0) {
                  LAB_00102167:pcVar4 = local_98;
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }

                  goto LAB_00101fbd;
               }

            }
 else {
               pcVar4 = *(char**)( local_78 + 8 );
               local_70 = (char*)0x0;
               if (pcVar4 == (char*)0x0) {
                  if (*(long*)( local_78 + 0x10 ) == 0) goto LAB_00102159;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( local_78 + 0x10 ));
               }
 else {
                  local_60 = strlen(pcVar4);
                  local_68 = pcVar4;
                  String::parse_latin1((StrRange*)&local_70);
               }

               pcVar4 = local_70;
               if (local_98 == local_70) {
                  if (local_98 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_98 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_70 = (char*)0x0;
                        Memory::free_static(pcVar4 + -0x10, false);
                     }

                  }

               }
 else {
                  if (local_98 != (char*)0x0) goto LAB_00102167;
                  LAB_00101fbd:local_98 = local_70;
               }

            }

            if (( ( StringName::configured != '\0' ) && ( ( local_78 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_80 != 0 )) {
               StringName::unref();
            }

         }
 while ( true );
      }

      /* List<MethodInfo, DefaultAllocator>::push_back(MethodInfo const&) [clone .isra.0] */
      void List<MethodInfo,DefaultAllocator>::push_back(List<MethodInfo,DefaultAllocator> *this, MethodInfo *param_1) {
         void *pvVar1;
         CowData<char32_t> *this_00;
         undefined1(*pauVar2)[16];
         undefined4 *puVar3;
         long lVar4;
         long lVar5;
         long *plVar6;
         undefined4 *puVar7;
         bool bVar8;
         if (*(long*)this == 0) {
            pauVar2 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])this = pauVar2;
            *(undefined4*)pauVar2[1] = 0;
            *pauVar2 = (undefined1[16])0x0;
         }

         this_00 = (CowData<char32_t>*)operator_new(0x88, DefaultAllocator::alloc);
         *(undefined8*)this_00 = 0;
         *(undefined8*)( this_00 + 0x28 ) = 0;
         *(undefined8*)( this_00 + 0x38 ) = 1;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x68 ) = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x78 ) = (undefined1[16])0x0;
         lVar5 = *(long*)param_1;
         *(undefined4*)( this_00 + 8 ) = 0;
         *(undefined4*)( this_00 + 0x20 ) = 0;
         *(undefined4*)( this_00 + 0x30 ) = 6;
         *(undefined8*)( this_00 + 0x40 ) = 0;
         *(undefined8*)( this_00 + 0x50 ) = 0;
         *(undefined4*)( this_00 + 0x58 ) = 0;
         if (lVar5 != 0) {
            CowData<char32_t>::_ref(this_00, (CowData*)param_1);
         }

         *(undefined4*)( this_00 + 8 ) = *(undefined4*)( param_1 + 8 );
         CowData<char32_t>::_ref(this_00 + 0x10, (CowData*)( param_1 + 0x10 ));
         StringName::operator =((StringName*)( this_00 + 0x18 ), (StringName*)( param_1 + 0x18 ));
         *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
         CowData<char32_t>::_ref(this_00 + 0x28, (CowData*)( param_1 + 0x28 ));
         plVar6 = *(long**)( this_00 + 0x40 );
         *(undefined4*)( this_00 + 0x30 ) = *(undefined4*)( param_1 + 0x30 );
         *(undefined4*)( this_00 + 0x38 ) = *(undefined4*)( param_1 + 0x38 );
         *(undefined4*)( this_00 + 0x3c ) = *(undefined4*)( param_1 + 0x3c );
         if (plVar6 != (long*)0x0) {
            do {
               pvVar1 = (void*)*plVar6;
               if (pvVar1 == (void*)0x0) goto LAB_001023f8;
               if (*(long**)( (long)pvVar1 + 0x40 ) == plVar6) {
                  lVar5 = *(long*)( (long)pvVar1 + 0x30 );
                  lVar4 = *(long*)( (long)pvVar1 + 0x38 );
                  *plVar6 = lVar5;
                  if (pvVar1 == (void*)plVar6[1]) {
                     plVar6[1] = lVar4;
                  }

                  if (lVar4 != 0) {
                     *(long*)( lVar4 + 0x30 ) = lVar5;
                     lVar5 = *(long*)( (long)pvVar1 + 0x30 );
                  }

                  if (lVar5 != 0) {
                     *(long*)( lVar5 + 0x38 ) = lVar4;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
                  Memory::free_static(pvVar1, false);
                  *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }

               plVar6 = *(long**)( this_00 + 0x40 );
            }
 while ( (int)plVar6[2] != 0 );
            Memory::free_static(plVar6, false);
            *(undefined8*)( this_00 + 0x40 ) = 0;
         }

         plVar6 = (long*)0x0;
         LAB_001023f8:if (( *(undefined8**)( param_1 + 0x40 ) != (undefined8*)0x0 ) && ( puVar7 = (undefined4*)**(undefined8**)( param_1 + 0x40 ) ),puVar7 != (undefined4*)0x0) {
            if (plVar6 == (long*)0x0) {
               pauVar2 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( this_00 + 0x40 ) = pauVar2;
               *(undefined4*)pauVar2[1] = 0;
               *pauVar2 = (undefined1[16])0x0;
            }

            do {
               while (true) {
                  puVar3 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
                  *(undefined8*)( puVar3 + 8 ) = 0;
                  *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
                  lVar5 = *(long*)( puVar7 + 2 );
                  *puVar3 = 0;
                  puVar3[6] = 0;
                  puVar3[10] = 6;
                  *(undefined8*)( puVar3 + 0x10 ) = 0;
                  *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
                  *puVar3 = *puVar7;
                  if (lVar5 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( puVar7 + 2 ));
                  }

                  StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( puVar7 + 4 ));
                  puVar3[6] = puVar7[6];
                  if (*(long*)( puVar3 + 8 ) != *(long*)( puVar7 + 8 )) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( puVar7 + 8 ));
                  }

                  puVar3[10] = puVar7[10];
                  plVar6 = *(long**)( this_00 + 0x40 );
                  lVar5 = plVar6[1];
                  *(undefined8*)( puVar3 + 0xc ) = 0;
                  *(long**)( puVar3 + 0x10 ) = plVar6;
                  *(long*)( puVar3 + 0xe ) = lVar5;
                  if (lVar5 != 0) {
                     *(undefined4**)( lVar5 + 0x30 ) = puVar3;
                  }

                  plVar6[1] = (long)puVar3;
                  if (*plVar6 == 0) break;
                  puVar7 = *(undefined4**)( puVar7 + 0xc );
                  *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
                  if (puVar7 == (undefined4*)0x0) goto LAB_0010251e;
               }
;
               puVar7 = *(undefined4**)( puVar7 + 0xc );
               *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
               *plVar6 = (long)puVar3;
            }
 while ( puVar7 != (undefined4*)0x0 );
         }

         LAB_0010251e:if (*(long*)( this_00 + 0x50 ) != *(long*)( param_1 + 0x50 )) {
            CowData<Variant>::_unref((CowData<Variant>*)( this_00 + 0x50 ));
            if (*(long*)( param_1 + 0x50 ) != 0) {
               plVar6 = (long*)( *(long*)( param_1 + 0x50 ) + -0x10 );
               do {
                  lVar5 = *plVar6;
                  if (lVar5 == 0) goto LAB_00102562;
                  LOCK();
                  lVar4 = *plVar6;
                  bVar8 = lVar5 == lVar4;
                  if (bVar8) {
                     *plVar6 = lVar5 + 1;
                     lVar4 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar4 != -1) {
                  *(undefined8*)( this_00 + 0x50 ) = *(undefined8*)( param_1 + 0x50 );
               }

            }

         }

         LAB_00102562:lVar5 = *(long*)( param_1 + 0x68 );
         *(undefined4*)( this_00 + 0x58 ) = *(undefined4*)( param_1 + 0x58 );
         lVar4 = *(long*)( this_00 + 0x68 );
         if (lVar4 != lVar5) {
            if (lVar4 != 0) {
               LOCK();
               plVar6 = (long*)( lVar4 + -0x10 );
               *plVar6 = *plVar6 + -1;
               UNLOCK();
               if (*plVar6 == 0) {
                  lVar5 = *(long*)( this_00 + 0x68 );
                  *(undefined8*)( this_00 + 0x68 ) = 0;
                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
                  lVar5 = *(long*)( param_1 + 0x68 );
               }
 else {
                  *(undefined8*)( this_00 + 0x68 ) = 0;
                  lVar5 = *(long*)( param_1 + 0x68 );
               }

            }

            if (lVar5 != 0) {
               plVar6 = (long*)( lVar5 + -0x10 );
               do {
                  lVar5 = *plVar6;
                  if (lVar5 == 0) goto LAB_001025c2;
                  LOCK();
                  lVar4 = *plVar6;
                  bVar8 = lVar5 == lVar4;
                  if (bVar8) {
                     *plVar6 = lVar5 + 1;
                     lVar4 = lVar5;
                  }

                  UNLOCK();
               }
 while ( !bVar8 );
               if (lVar4 != -1) {
                  *(undefined8*)( this_00 + 0x68 ) = *(undefined8*)( param_1 + 0x68 );
               }

            }

         }

         LAB_001025c2:plVar6 = *(long**)this;
         lVar5 = plVar6[1];
         *(long**)( this_00 + 0x80 ) = plVar6;
         *(undefined8*)( this_00 + 0x70 ) = 0;
         *(long*)( this_00 + 0x78 ) = lVar5;
         if (lVar5 != 0) {
            *(CowData<char32_t>**)( lVar5 + 0x70 ) = this_00;
         }

         plVar6[1] = (long)this_00;
         if (*plVar6 == 0) {
            *plVar6 = (long)this_00;
         }

         *(int*)( plVar6 + 2 ) = (int)plVar6[2] + 1;
         return;
      }

      /* PropertySelector::_bind_methods() */
      void PropertySelector::_bind_methods(void) {
         long in_FS_OFFSET;
         CowData<char32_t> *local_130;
         undefined8 local_120;
         long local_118;
         long local_110;
         long local_108;
         long local_100;
         char *local_f8;
         undefined8 local_f0;
         undefined4 local_e8[2];
         undefined8 local_e0;
         undefined *local_d8;
         int local_d0;
         undefined8 local_c8;
         undefined4 local_c0;
         char *local_b8;
         undefined8 local_b0;
         undefined1 local_a8[16];
         undefined8 local_98;
         undefined8 local_90;
         undefined8 local_88;
         undefined8 local_80;
         undefined8 local_78[2];
         undefined8 local_68;
         undefined8 local_60;
         undefined8 local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         local_108 = 0;
         local_b8 = "";
         local_110 = 0;
         local_b0 = 0;
         String::parse_latin1((StrRange*)&local_110);
         local_b8 = "name";
         local_118 = 0;
         local_b0 = 4;
         String::parse_latin1((StrRange*)&local_118);
         local_e8[0] = 4;
         local_e0 = 0;
         if (local_118 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)&local_118);
         }

         local_d8 = (undefined*)0x0;
         local_d0 = 0;
         local_c8 = 0;
         if (local_110 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
            local_c0 = 6;
            if (local_d0 == 0x11) {
               StringName::StringName((StringName*)&local_b8, (String*)&local_c8, false);
               if (local_d8 == local_b8) {
                  if (( StringName::configured != '\0' ) && ( local_b8 != (undefined*)0x0 )) {
                     StringName::unref();
                  }

               }
 else {
                  StringName::unref();
                  local_d8 = local_b8;
               }

               goto LAB_00102821;
            }

         }

         local_c0 = 6;
         StringName::operator =((StringName*)&local_d8, (StringName*)&local_108);
         LAB_00102821:local_130 = (CowData<char32_t>*)&local_c8;
         local_100 = 0;
         local_b8 = "selected";
         local_b0 = 8;
         String::parse_latin1((StrRange*)&local_100);
         local_b8 = (char*)0x0;
         local_b0 = 0;
         local_98 = 0;
         local_90 = 0;
         local_88 = 6;
         local_80 = 1;
         local_78[0] = 0;
         local_68 = 0;
         local_60 = 0;
         local_50 = 0;
         local_a8 = (undefined1[16])0x0;
         if (local_100 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
         }

         List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)local_e8);
         local_f8 = "PropertySelector";
         local_120 = 0;
         local_f0 = 0x10;
         String::parse_latin1((StrRange*)&local_120);
         StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
         ClassDB::add_signal((StringName*)&local_f8, (MethodInfo*)&local_b8);
         if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
         MethodInfo::~MethodInfo((MethodInfo*)&local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
         CowData<char32_t>::_unref(local_130);
         if (( StringName::configured != '\0' ) && ( local_d8 != (undefined*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
         if (( StringName::configured != '\0' ) && ( local_108 != 0 )) {
            StringName::unref();
         }

         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      /* PropertySelector::_update_search() */
      void PropertySelector::_update_search(PropertySelector *this) {
         CowData<char32_t> *this_00;
         Variant *pVVar1;
         CowData *this_01;
         PropertySelector PVar2;
         MethodInfo *pMVar3;
         ulong uVar4;
         uint uVar5;
         PropertySelector PVar6;
         PropertySelector PVar7;
         String *pSVar8;
         char cVar9;
         int iVar10;
         int iVar11;
         TreeItem *pTVar12;
         long lVar13;
         undefined8 uVar14;
         long lVar15;
         TreeItem *pTVar16;
         ulong *puVar17;
         long *plVar18;
         Object *pOVar19;
         uint uVar20;
         undefined8 *puVar21;
         Object *pOVar22;
         Variant *pVVar23;
         int iVar24;
         wchar32 wVar25;
         char *pcVar26;
         TreeItem *pTVar27;
         int *piVar28;
         String *pSVar29;
         long in_FS_OFFSET;
         bool bVar30;
         bool bVar31;
         Object *local_190;
         List<PropertyInfo,DefaultAllocator> *local_168;
         char local_14a;
         CowData<char32_t> local_148[8];
         long *local_140;
         long local_138;
         Object *local_130;
         Object *local_128;
         long local_120;
         uint local_118;
         undefined4 uStack_114;
         undefined4 local_110;
         undefined4 uStack_10c;
         undefined1 local_108[16];
         undefined8 local_f8;
         undefined8 local_f0;
         undefined8 local_e8;
         undefined8 local_e0;
         undefined8 local_d8;
         undefined8 local_c8;
         undefined8 local_c0;
         undefined8 local_b0;
         Variant *local_a8;
         Variant *pVStack_a0;
         undefined8 local_88;
         undefined1 local_80[16];
         Variant local_70[24];
         Variant local_58[24];
         long local_40[2];
         local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
         if (this[0xdd0] == (PropertySelector)0x0) {
            local_120 = 0;
            if (this[0xe00] == (PropertySelector)0x0) {
               String::parse_latin1((String*)&local_120, "");
               pcVar26 = "Select Method";
            }
 else {
               String::parse_latin1((String*)&local_120, "");
               pcVar26 = "Select Virtual Method";
            }

         }
 else {
            local_120 = 0;
            String::parse_latin1((String*)&local_120, "");
            pcVar26 = "Select Property";
         }

         local_128 = (Object*)0x0;
         String::parse_latin1((String*)&local_128, pcVar26);
         TTR((String*)&local_118, (String*)&local_128);
         Window::set_title((String*)this);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
         Tree::clear();
         local_120 = 0;
         local_118 = 0;
         uStack_114 = 0;
         local_128 = (Object*)0x0;
         EditorHelpBit::set_custom_text(*(String**)( this + 0xdc8 ), (String*)&local_128, (String*)&local_120);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         pTVar12 = (TreeItem*)Tree::create_item(*(TreeItem**)( this + 0xdc0 ), 0);
         LineEdit::get_text();
         String::replace((char*)local_148, (char*)&local_118);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
         PVar2 = this[0xdd0];
         local_140 = (long*)0x0;
         iVar24 = (int)local_148;
         if (PVar2 != (PropertySelector)0x0) {
            if (*(List**)( this + 0xdf8 ) == (List*)0x0) {
               if (*(int*)( this + 0xde0 ) == 0) {
                  uVar20 = ( uint ) * (ulong*)( this + 0xdf0 ) & 0xffffff;
                  if (uVar20 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        uVar5 = local_118 >> 8;
                        local_118 = uVar5 << 8;
                        LOCK();
                        bVar31 = (char)ObjectDB::spin_lock == '\0';
                        if (bVar31) {
                           ObjectDB::spin_lock._0_1_ = '\x01';
                        }

                        UNLOCK();
                        if (bVar31) break;
                        local_118 = uVar5 << 8;
                        do {} while ( (char)ObjectDB::spin_lock != '\0' );
                     }
;
                     puVar17 = (ulong*)( (ulong)uVar20 * 0x10 + ObjectDB::object_slots );
                     if (( *puVar17 & 0x7fffffffff ) == ( *(ulong*)( this + 0xdf0 ) >> 0x18 & 0x7fffffffff )) {
                        uVar4 = puVar17[1];
                        ObjectDB::spin_lock._0_1_ = '\0';
                        if (uVar4 != 0) {
                           lVar15 = __dynamic_cast(uVar4, &Object::typeinfo, &Script::typeinfo, 0);
                           if (lVar15 != 0) {
                              local_120 = 0;
                              local_128 = (Object*)0x0;
                              String::parse_latin1((String*)&local_128, "");
                              local_130 = (Object*)0x0;
                              String::parse_latin1((String*)&local_130, "Script Variables");
                              PropertyInfo::PropertyInfo((PropertyInfo*)&local_118, 0, (String*)&local_130, 0, (String*)&local_128, 0x80, (CowData<char32_t>*)&local_120);
                              List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)&local_140, (PropertyInfo*)&local_118);
                              PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                              if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
                                 StringName::unref();
                              }

                              plVar18 = (long*)__dynamic_cast(uVar4, &Object::typeinfo, &Script::typeinfo, 0);
                              ( **(code**)( *plVar18 + 0x2b8 ) )(plVar18, (List<PropertyInfo,DefaultAllocator>*)&local_140);
                           }

                        }

                     }
 else {
                        ObjectDB::spin_lock._0_1_ = '\0';
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  }

                  local_168 = (List<PropertyInfo,DefaultAllocator>*)&local_140;
                  StringName::StringName((StringName*)&local_138, (String*)( this + 0xde8 ), false);
                  joined_r0x0010414e:if (local_138 != 0) {
                     while (true) {
                        if (( *(long*)( local_138 + 8 ) == 0 ) && ( ( *(long*)( local_138 + 0x10 ) == 0 || ( *(uint*)( *(long*)( local_138 + 0x10 ) + -8 ) < 2 ) ) )) {
                           if (StringName::configured != '\0') {
                              StringName::unref();
                           }

                           goto LAB_00102be1;
                        }

                        local_120 = 0;
                        local_128 = (Object*)0x0;
                        String::parse_latin1((String*)&local_128, "");
                        if (local_138 == 0) {
                           local_130 = (Object*)0x0;
                        }
 else {
                           local_130 = (Object*)0x0;
                           if (*(char**)( local_138 + 8 ) == (char*)0x0) {
                              if (*(long*)( local_138 + 0x10 ) != 0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_130, (CowData*)( local_138 + 0x10 ));
                              }

                           }
 else {
                              String::parse_latin1((String*)&local_130, *(char**)( local_138 + 8 ));
                           }

                        }

                        PropertyInfo::PropertyInfo((PropertyInfo*)&local_118, 0, (String*)&local_130, 0, (String*)&local_128, 0x80, (CowData<char32_t>*)&local_120);
                        List<PropertyInfo,DefaultAllocator>::push_back(local_168, (PropertyInfo*)&local_118);
                        PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                        if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
                           StringName::unref();
                        }

                        ClassDB::get_property_list((StringName*)&local_138, (List*)local_168, true, (Object*)0x0);
                        ClassDB::get_parent_class((StringName*)&local_118);
                        if (local_138 != CONCAT44(uStack_114, local_118)) break;
                        if (StringName::configured == '\0') goto joined_r0x0010414e;
                        if (( local_138 == 0 ) || ( StringName::unref(),local_138 == 0 )) goto LAB_00102be1;
                     }
;
                     StringName::unref();
                     local_138 = CONCAT44(uStack_114, local_118);
                     goto joined_r0x0010414e;
                  }

               }
 else {
                  local_80 = (undefined1[16])0x0;
                  local_88 = 0;
                  local_118 = 0;
                  uStack_114 = 0;
                  local_110 = 0;
                  Variant::construct(*(int*)( this + 0xde0 ), (List*)&local_88, 0, 0, (String*)&local_118);
                  Variant::get_property_list((List*)&local_88);
                  if (Variant::needs_deinit[(int)local_88] != '\0') {
                     Variant::_clear_internal();
                  }

               }

            }
 else {
               Object::get_property_list(*(List**)( this + 0xdf8 ), SUB81(&local_140, 0));
            }

            LAB_00102be1:local_168 = (List<PropertyInfo,DefaultAllocator>*)&local_140;
            if (( local_140 != (long*)0x0 ) && ( piVar28 = (int*)*local_140 ),piVar28 != (int*)0x0) {
               PVar6 = (PropertySelector)0x0;
               pTVar16 = (TreeItem*)0x0;
               do if (( piVar28[10] & 0x1004U ) != 0) {
                  LineEdit::get_text();
                  if (( ( CONCAT44(uStack_114, local_118) == 0 ) || ( *(uint*)( CONCAT44(uStack_114, local_118) + -8 ) < 2 ) ) || ( iVar10 = iVar10 != -1 )) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                     lVar15 = *(long*)( this + 0xe10 );
                     if (lVar15 == 0) {
                        LAB_00102c9a:pTVar27 = pTVar12;
                        if (pTVar16 != (TreeItem*)0x0) {
                           pTVar27 = pTVar16;
                        }

                        uVar14 = Tree::create_item(*(TreeItem**)( this + 0xdc0 ), (int)pTVar27);
                        local_118 = 0;
                        uStack_114 = 0;
                        this_01 = (CowData*)( piVar28 + 2 );
                        if (*(long*)( piVar28 + 2 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, this_01);
                        }

                        TreeItem::set_text(uVar14, 0, (String*)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                        Variant::Variant((Variant*)&local_88, (String*)this_01);
                        iVar10 = (int)uVar14;
                        TreeItem::set_metadata(iVar10, (Variant*)0x0);
                        if (Variant::needs_deinit[(int)local_88] != '\0') {
                           Variant::_clear_internal();
                        }

                        Variant::get_type_name((String*)&local_128, *piVar28);
                        StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
                        Control::get_editor_theme_icon((StringName*)&local_118);
                        TreeItem::set_icon(iVar10, (Ref*)0x0);
                        if (( CONCAT44(uStack_114, local_118) != 0 ) && ( cVar9 = cVar9 != '\0' )) {
                           pOVar19 = (Object*)CONCAT44(uStack_114, local_118);
                           cVar9 = predelete_handler(pOVar19);
                           if (cVar9 != '\0') {
                              ( **(code**)( *(long*)pOVar19 + 0x140 ) )(pOVar19);
                              Memory::free_static(pOVar19, false);
                           }

                        }

                        if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                        PVar7 = PVar2;
                        if (PVar6 == (PropertySelector)0x0) {
                           LineEdit::get_text();
                           if (( CONCAT44(uStack_114, local_118) == 0 ) || ( *(uint*)( CONCAT44(uStack_114, local_118) + -8 ) < 2 )) {
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                              LAB_00103efe:LineEdit::get_text();
                              if (( ( CONCAT44(uStack_114, local_118) != 0 ) && ( 1 < *(uint*)( CONCAT44(uStack_114, local_118) + -8 ) ) ) || ( cVar9 = String::operator ==((String*)this_01, (String*)( this + 0xdd8 )) ),cVar9 == '\0') {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                                 PVar7 = PVar6;
                                 goto LAB_00102dc3;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                           }
 else {
                              iVar11 = String::findn((String*)this_01, iVar24);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                              if (iVar11 == -1) goto LAB_00103efe;
                           }

                           TreeItem::select(iVar10);
                        }

                        LAB_00102dc3:TreeItem::set_selectable(iVar10, false);
                        _create_subproperties(this, uVar14, *piVar28);
                        TreeItem::set_collapsed(SUB81(uVar14, 0));
                        PVar6 = PVar7;
                     }
 else if (0 < *(long*)( lVar15 + -8 )) {
                        lVar13 = 0;
                        do {
                           if (*piVar28 == *(int*)( lVar15 + lVar13 * 4 )) goto LAB_00102c9a;
                           lVar13 = lVar13 + 1;
                        }
 while ( *(long*)( lVar15 + -8 ) != lVar13 );
                     }

                  }
 else {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  }

               }
 while ( piVar28 != (int*)0x0 );
               if (( pTVar16 != (TreeItem*)0x0 ) && ( lVar15 = lVar15 == 0 )) {
                  memdelete<TreeItem>(pTVar16);
               }

               if (PVar6 != (PropertySelector)0x0) {
                  create_custom_callable_function_pointer<Tree,TreeItem*,bool>((Tree*)&local_118, *(char**)( this + 0xdc0 ), (_func_void_TreeItem_ptr_bool*)"&Tree::scroll_to_item");
                  pOVar19 = (Object*)Tree::get_selected();
                  Variant::Variant((Variant*)&local_88, pOVar19);
                  Variant::Variant(local_70, true);
                  Variant::Variant(local_58, 0);
                  pVVar23 = (Variant*)local_40;
                  local_a8 = (Variant*)&local_88;
                  pVStack_a0 = local_70;
                  Callable::call_deferredp((Variant**)&local_118, (int)&local_a8);
                  do {
                     pVVar1 = pVVar23 + -0x18;
                     pVVar23 = pVVar23 + -0x18;
                     if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 while ( pVVar23 != (Variant*)&local_88 );
                  Callable::~Callable((Callable*)&local_118);
               }

            }

            List<PropertyInfo,DefaultAllocator>::~List(local_168);
            goto LAB_00102e27;
         }

         if (*(int*)( this + 0xde0 ) == 0) {
            uVar20 = ( uint ) * (ulong*)( this + 0xdf0 ) & 0xffffff;
            if (uVar20 < (uint)ObjectDB::slot_max) {
               while (true) {
                  uVar5 = local_118 >> 8;
                  local_118 = uVar5 << 8;
                  LOCK();
                  bVar31 = (char)ObjectDB::spin_lock == '\0';
                  if (bVar31) {
                     ObjectDB::spin_lock._0_1_ = '\x01';
                  }

                  UNLOCK();
                  if (bVar31) break;
                  local_118 = uVar5 << 8;
                  do {} while ( (char)ObjectDB::spin_lock != '\0' );
               }
;
               puVar17 = (ulong*)( (ulong)uVar20 * 0x10 + ObjectDB::object_slots );
               if (( *(ulong*)( this + 0xdf0 ) >> 0x18 & 0x7fffffffff ) != ( *puVar17 & 0x7fffffffff )) {
                  ObjectDB::spin_lock._0_1_ = '\0';
                  goto LAB_0010438b;
               }

               uVar4 = puVar17[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (( ( uVar4 == 0 ) || ( pOVar19 = (Object*)__dynamic_cast(uVar4, &Object::typeinfo, &Script::typeinfo, 0) ),pOVar19 == (Object*)0x0 )) goto LAB_0010438b;
               if (( *(long*)( pOVar19 + 0x188 ) == 0 ) || ( *(uint*)( *(long*)( pOVar19 + 0x188 ) + -8 ) < 2 )) {
                  LAB_0010311e:( **(code**)( *(long*)pOVar19 + 0x228 ) )(pOVar19, 1);
               }
 else {
                  iVar10 = String::find((char*)( pOVar19 + 0x188 ), 0x105cb8);
                  if (( iVar10 != -1 ) || ( cVar9 = String::begins_with((char*)( pOVar19 + 0x188 )) ),cVar9 != '\0') goto LAB_0010311e;
               }

               local_128 = (Object*)0x0;
               ( **(code**)( *(long*)pOVar19 + 0x2b0 ) )(pOVar19, (String*)&local_128);
               local_120 = 0;
               String::parse_latin1((String*)&local_120, "*Script Methods");
               local_108 = (undefined1[16])0x0;
               local_118 = 0;
               uStack_114 = 0;
               local_110 = 0;
               uStack_10c = 0;
               local_f8 = 0;
               local_f0 = 0;
               local_e8 = 6;
               local_e0 = 1;
               local_d8 = 0;
               local_c8 = 0;
               local_c0 = 0;
               local_b0 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_120);
               List<MethodInfo,DefaultAllocator>::push_back((List<MethodInfo,DefaultAllocator>*)&local_140, (MethodInfo*)&local_118);
               MethodInfo::~MethodInfo((MethodInfo*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
               if (local_128 != (Object*)0x0) {
                  for (pMVar3 = *(MethodInfo**)local_128; pMVar3 != (MethodInfo*)0x0; pMVar3 = *(MethodInfo**)( pMVar3 + 0x70 )) {
                     cVar9 = String::begins_with((char*)pMVar3);
                     if (cVar9 == '\0') {
                        List<MethodInfo,DefaultAllocator>::push_back((List<MethodInfo,DefaultAllocator>*)&local_140, pMVar3);
                     }

                  }

               }

               List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator>*)&local_128);
               StringName::StringName((StringName*)&local_130, (String*)( this + 0xde8 ), false);
               if (local_130 != (Object*)0x0) goto LAB_00103289;
               LAB_0010340e:cVar9 = RefCounted::unreference();
               if (( cVar9 != '\0' ) && ( cVar9 = cVar9 != '\0' )) {
                  ( **(code**)( *(long*)pOVar19 + 0x140 ) )(pOVar19);
                  Memory::free_static(pOVar19, false);
               }

            }
 else {
               _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               LAB_0010438b:pOVar19 = (Object*)0x0;
               StringName::StringName((StringName*)&local_130, (String*)( this + 0xde8 ), false);
               if (local_130 != (Object*)0x0) {
                  LAB_00103289:local_168 = (List<PropertyInfo,DefaultAllocator>*)&local_140;
                  LAB_001032c6:do {
                     if (*(char**)( local_130 + 8 ) == (char*)0x0) {
                        if (( *(long*)( local_130 + 0x10 ) == 0 ) || ( *(uint*)( *(long*)( local_130 + 0x10 ) + -8 ) < 2 )) {
                           if (StringName::configured != '\0') {
                              StringName::unref();
                           }

                           break;
                        }

                        local_128 = (Object*)0x0;
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)( local_130 + 0x10 ));
                     }
 else {
                        local_128 = (Object*)0x0;
                        String::parse_latin1((String*)&local_128, *(char**)( local_130 + 8 ));
                     }

                     operator+((char *)&
                     local_120,(String*)&_LC94;
                     local_108 = (undefined1[16])0x0;
                     local_118 = 0;
                     uStack_114 = 0;
                     local_110 = 0;
                     uStack_10c = 0;
                     local_f8 = 0;
                     local_f0 = 0;
                     local_e8 = 6;
                     local_e0 = 1;
                     local_d8 = 0;
                     local_c8 = 0;
                     local_c0 = 0;
                     local_b0 = 0;
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_120);
                     List<MethodInfo,DefaultAllocator>::push_back((List<MethodInfo,DefaultAllocator>*)local_168, (MethodInfo*)&local_118);
                     MethodInfo::~MethodInfo((MethodInfo*)&local_118);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                     ClassDB::get_method_list((StringName*)&local_130, (List*)local_168, true, true);
                     ClassDB::get_parent_class((StringName*)&local_118);
                     if (local_130 == (Object*)CONCAT44(uStack_114, local_118)) {
                        if (StringName::configured != '\0') {
                           if (( local_130 == (Object*)0x0 ) || ( StringName::unref(),local_130 == (Object*)0x0 )) break;
                           goto LAB_001032c6;
                        }

                     }
 else {
                        StringName::unref();
                        local_130 = (Object*)CONCAT44(uStack_114, local_118);
                     }

                  }
 while ( local_130 != (Object*)0x0 );
                  if (pOVar19 != (Object*)0x0) goto LAB_0010340e;
               }

            }

         }
 else {
            local_80 = (undefined1[16])0x0;
            local_88 = 0;
            local_118 = 0;
            uStack_114 = 0;
            local_110 = 0;
            Variant::construct(*(int*)( this + 0xde0 ), (List*)&local_88, 0, 0, (String*)&local_118);
            Variant::get_method_list((List*)&local_88);
            if (Variant::needs_deinit[(int)local_88] != '\0') {
               Variant::_clear_internal();
            }

         }

         local_168 = (List<PropertyInfo,DefaultAllocator>*)&local_140;
         if (( local_140 != (long*)0x0 ) && ( pSVar29 = (String*)*local_140 ),pSVar29 != (String*)0x0) {
            bVar31 = false;
            local_190 = (Object*)0x0;
            local_14a = '\0';
            do {
               while (cVar9 = String::begins_with((char*)pSVar29),cVar9 != '\0') {
                  if (( ( local_190 != (Object*)0x0 ) && ( lVar15 = TreeItem::get_first_child() ),lVar15 == 0 )) &&( cVar9 = cVar9 != '\0' )(**(code**)( *(long*)local_190 + 0x140 ))(local_190);
                  Memory::free_static(local_190, false);
               }
;
               local_190 = (Object*)Tree::create_item(*(TreeItem**)( this + 0xdc0 ), (int)pTVar12);
               String::replace_first((char*)&local_118, (char*)pSVar29);
               TreeItem::set_text(local_190, 0, (String*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               TreeItem::set_selectable((int)local_190, false);
               local_130 = (Object*)0x0;
               String::replace((char*)&local_128, (char*)pSVar29);
               local_14a = String::operator ==(pSVar29, "*Script Methods");
               pSVar8 = EditorNode::singleton;
               if (local_14a == '\0') {
                  local_120 = 0;
                  String::parse_latin1((String*)&local_120, "");
                  EditorNode::get_class_icon((String*)&local_118, pSVar8);
                  pOVar22 = local_130;
                  pOVar19 = (Object*)CONCAT44(uStack_114, local_118);
                  if (pOVar19 == local_130) {
                     LAB_00103c51:if (( pOVar22 != (Object*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
                        pOVar19 = (Object*)CONCAT44(uStack_114, local_118);
                        cVar9 = predelete_handler(pOVar19);
                        if (cVar9 != '\0') {
                           ( **(code**)( *(long*)pOVar19 + 0x140 ) )(pOVar19);
                           Memory::free_static(pOVar19, false);
                        }

                     }

                  }
 else {
                     if (pOVar19 != (Object*)0x0) {
                        local_130 = pOVar19;
                        cVar9 = RefCounted::reference();
                        if (cVar9 == '\0') {
                           local_130 = (Object*)0x0;
                        }

                        if (pOVar22 != (Object*)0x0) {
                           cVar9 = RefCounted::unreference();
                           goto joined_r0x00103d7b;
                        }

                        LAB_00103c49:pOVar22 = (Object*)CONCAT44(uStack_114, local_118);
                        goto LAB_00103c51;
                     }

                     bVar30 = local_130 != (Object*)0x0;
                     local_130 = pOVar19;
                     if (bVar30) {
                        cVar9 = RefCounted::unreference();
                        joined_r0x00103d7b:if (( cVar9 != '\0' ) && ( cVar9 = cVar9 != '\0' )) {
                           ( **(code**)( *(long*)pOVar22 + 0x140 ) )(pOVar22);
                           Memory::free_static(pOVar22, false);
                        }

                        goto LAB_00103c49;
                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
               }
 else {
                  if ((_update_search()::{lambda()#2}::operator()()::sname == '\0') &&
             (iVar10 = __cxa_guard_acquire(&_update_search()::{lambda()#2}::operator()()::sname),
             iVar10 != 0))
                  {
                     _scs_create((char *)&_update_search()::{lambda()
                     #2
                     __cxa_atexit(StringName::~StringName, &_update_search()::, {
                           lambda()
                           #2
                           __cxa_guard_release(&_update_search()::{lambda()#2}::operator()()::sname);
          }, Control::get_editor_theme_icon((StringName*)&local_118));
                           pOVar22 = local_130;
                           pOVar19 = (Object*)CONCAT44(uStack_114, local_118);
                           if (pOVar19 != local_130) {
                              if (pOVar19 == (Object*)0x0) {
                                 bVar30 = local_130 != (Object*)0x0;
                                 local_130 = pOVar19;
                                 if (bVar30) {
                                    cVar9 = RefCounted::unreference();
                                    goto joined_r0x00103dc3;
                                 }

                                 goto LAB_001035c0;
                              }

                              local_130 = pOVar19;
                              cVar9 = RefCounted::reference();
                              if (cVar9 == '\0') {
                                 local_130 = (Object*)0x0;
                              }

                              if (pOVar22 != (Object*)0x0) {
                                 cVar9 = RefCounted::unreference();
                                 joined_r0x00103dc3:if (( cVar9 != '\0' ) && ( cVar9 = cVar9 != '\0' )) {
                                    ( **(code**)( *(long*)pOVar22 + 0x140 ) )(pOVar22);
                                    Memory::free_static(pOVar22, false);
                                 }

                              }

                              pOVar22 = (Object*)CONCAT44(uStack_114, local_118);
                           }

                           if (( pOVar22 != (Object*)0x0 ) && ( cVar9 = cVar9 != '\0' )) {
                              pOVar19 = (Object*)CONCAT44(uStack_114, local_118);
                              cVar9 = predelete_handler(pOVar19);
                              if (cVar9 != '\0') {
                                 ( **(code**)( *(long*)pOVar19 + 0x140 ) )(pOVar19);
                                 Memory::free_static(pOVar19, false);
                              }

                           }

                        }
, LAB_001035c0:
        TreeItem::set_icon((int)local_190,(Ref*)0x0;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                     if (( ( local_130 != (Object*)0x0 ) && ( cVar9 = RefCounted::unreference() ),pOVar19 = local_130,cVar9 != '\0' )) &&( cVar9 = cVar9 != '\0' )(**(code**)( *(long*)pOVar19 + 0x140 ))(pOVar19);
                     Memory::free_static(pOVar19, false);
                  }

                  LAB_001035f3:pSVar29 = *(String**)( pSVar29 + 0x70 );
                  if (pSVar29 == (String*)0x0) goto LAB_00103a38;
               }

               wVar25 = (wchar32)pSVar29;
               String::get_slice((char*)&local_138, wVar25);
               if (( local_14a == '\0' ) && ( cVar9 = String::begins_with((char*)&local_138) ),cVar9 != '\0') {
                  if (( (byte)pSVar29[0x38] & 8 ) == 0) goto LAB_00103bc0;
                  if (this[0xe00] != (PropertySelector)0x0) goto LAB_00103663;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
                  goto LAB_001035f3;
               }

               if (this[0xe00] == (PropertySelector)0x0) {
                  if (( *(uint*)( pSVar29 + 0x38 ) & 8 ) != 0) goto LAB_00103bc0;
               }
 else if (( *(uint*)( pSVar29 + 0x38 ) & 8 ) == 0) {
                  LAB_00103bc0:CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
                  goto LAB_001035f3;
               }

               LAB_00103663:LineEdit::get_text();
               if (( ( CONCAT44(uStack_114, local_118) != 0 ) && ( 1 < *(uint*)( CONCAT44(uStack_114, local_118) + -8 ) ) ) && ( iVar10 = iVar10 == -1 )) {
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
                  goto LAB_001035f3;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               pOVar19 = local_190;
               if (local_190 == (Object*)0x0) {
                  pOVar19 = (Object*)pTVar12;
               }

               uVar14 = Tree::create_item(*(TreeItem**)( this + 0xdc0 ), (int)pOVar19);
               local_130 = (Object*)0x0;
               iVar10 = String::find_char(wVar25, 0x3a);
               if (iVar10 == -1) {
                  if (*(int*)( pSVar29 + 8 ) != 0) {
                     Variant::get_type_name((String*)&local_118);
                     if (local_130 != (Object*)CONCAT44(uStack_114, local_118)) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
                        local_130 = (Object*)CONCAT44(uStack_114, local_118);
                        local_118 = 0;
                        uStack_114 = 0;
                     }

                     goto LAB_001037b4;
                  }

                  String::parse_latin1((String*)&local_130, "void");
               }
 else {
                  local_120 = 0;
                  String::parse_latin1((String*)&local_120, " ");
                  String::get_slice((char*)&local_128, wVar25);
                  String::operator +((String*)&local_118, (String*)&local_128);
                  if (local_130 != (Object*)CONCAT44(uStack_114, local_118)) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
                     local_130 = (Object*)CONCAT44(uStack_114, local_118);
                     local_118 = 0;
                     uStack_114 = 0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
                  String::get_slice((char*)&local_118, wVar25);
                  if (*(long*)pSVar29 != CONCAT44(uStack_114, local_118)) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)pSVar29);
                     *(ulong*)pSVar29 = CONCAT44(uStack_114, local_118);
                     local_118 = 0;
                     uStack_114 = 0;
                  }

                  LAB_001037b4:CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               }

               local_120 = 0;
               if (*(long*)pSVar29 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_120, (CowData*)pSVar29);
               }

               local_128 = (Object*)0x0;
               String::parse_latin1((String*)&local_128, " %s(");
               vformat<String>((String*)&local_118, (String*)&local_128, (CowData<char32_t>*)&local_120);
               String::operator +=((String*)&local_130, (String*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
               puVar21 = *(undefined8**)( pSVar29 + 0x40 );
               if (( puVar21 != (undefined8*)0x0 ) && ( piVar28 = (int*)*puVar21 ),piVar28 != (int*)0x0) {
                  do {
                     if (( puVar21 == (undefined8*)0x0 ) || ( piVar28 != (int*)*puVar21 )) {
                        String::operator +=((String*)&local_130, ", ");
                     }

                     this_00 = (CowData<char32_t>*)( piVar28 + 2 );
                     String::operator +=((String*)&local_130, (String*)this_00);
                     if (*piVar28 == 0) {
                        String::operator +=((String*)&local_130, ": Variant");
                        LAB_0010384f:piVar28 = *(int**)( piVar28 + 0xc );
                     }
 else {
                        wVar25 = (wchar32)this_00;
                        iVar10 = String::find_char(wVar25, 0x3a);
                        if (iVar10 == -1) {
                           Variant::get_type_name((String*)&local_128, *piVar28);
                           local_120 = 0;
                           String::parse_latin1((String*)&local_120, ": %s");
                           vformat<String>((String*)&local_118, (CowData<char32_t>*)&local_120, (String*)&local_128);
                           String::operator +=((String*)&local_130, (String*)&local_118);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                           goto LAB_0010384f;
                        }

                        String::get_slice((char*)&local_128, wVar25);
                        local_120 = 0;
                        String::parse_latin1((String*)&local_120, ": %s");
                        vformat<String>((String*)&local_118, (CowData<char32_t>*)&local_120, (String*)&local_128);
                        String::operator +=((String*)&local_130, (String*)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
                        String::get_slice((char*)&local_118, wVar25);
                        if (*(long*)( piVar28 + 2 ) != CONCAT44(uStack_114, local_118)) {
                           CowData<char32_t>::_unref(this_00);
                           *(ulong*)( piVar28 + 2 ) = CONCAT44(uStack_114, local_118);
                           local_118 = 0;
                           uStack_114 = 0;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                        piVar28 = *(int**)( piVar28 + 0xc );
                     }

                     if (piVar28 == (int*)0x0) break;
                     puVar21 = *(undefined8**)( pSVar29 + 0x40 );
                  }
 while ( true );
               }

               String::operator +=((String*)&local_130, ")");
               uVar20 = *(uint*)( pSVar29 + 0x38 );
               if (( uVar20 & 4 ) != 0) {
                  String::operator +=((String*)&local_130, " const");
                  uVar20 = *(uint*)( pSVar29 + 0x38 );
               }

               if (( uVar20 & 8 ) != 0) {
                  String::operator +=((String*)&local_130, " virtual");
               }

               local_118 = 0;
               uStack_114 = 0;
               if (local_130 != (Object*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_130);
               }

               TreeItem::set_text(uVar14, 0, (String*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               Variant::Variant((Variant*)&local_88, (String*)&local_138);
               iVar10 = (int)uVar14;
               TreeItem::set_metadata(iVar10, (Variant*)0x0);
               if (Variant::needs_deinit[(int)local_88] != '\0') {
                  Variant::_clear_internal();
               }

               TreeItem::set_selectable(iVar10, false);
               if (bVar31) {
                  LAB_00103a10:bVar31 = true;
               }
 else {
                  LineEdit::get_text();
                  if (( CONCAT44(uStack_114, local_118) != 0 ) && ( 1 < *(uint*)( CONCAT44(uStack_114, local_118) + -8 ) )) {
                     iVar11 = String::findn((String*)&local_138, iVar24);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                     if (iVar11 == -1) goto LAB_00104627;
                     LAB_00104670:TreeItem::select(iVar10);
                     goto LAB_00103a10;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                  LAB_00104627:LineEdit::get_text();
                  if (( ( CONCAT44(uStack_114, local_118) == 0 ) || ( *(uint*)( CONCAT44(uStack_114, local_118) + -8 ) < 2 ) ) && ( cVar9 = String::operator ==((String*)&local_138, (String*)( this + 0xdd8 )) ),cVar9 != '\0') {
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
                     goto LAB_00104670;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               pSVar29 = *(String**)( pSVar29 + 0x70 );
            }
 while ( pSVar29 != (String*)0x0 );
            LAB_00103a38:if (( local_190 != (Object*)0x0 ) && ( lVar15 = lVar15 == 0 )) {
               memdelete<TreeItem>((TreeItem*)local_190);
            }

            if (bVar31) {
               create_custom_callable_function_pointer<Tree,TreeItem*,bool>((Tree*)&local_118, *(char**)( this + 0xdc0 ), (_func_void_TreeItem_ptr_bool*)"&Tree::scroll_to_item");
               pOVar19 = (Object*)Tree::get_selected();
               Variant::Variant((Variant*)&local_88, pOVar19);
               Variant::Variant(local_70, true);
               Variant::Variant(local_58, 0);
               pVVar23 = (Variant*)local_40;
               local_a8 = (Variant*)&local_88;
               pVStack_a0 = local_70;
               Callable::call_deferredp((Variant**)&local_118, (int)&local_a8);
               do {
                  pVVar1 = pVVar23 + -0x18;
                  pVVar23 = pVVar23 + -0x18;
                  if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 while ( pVVar23 != (Variant*)&local_88 );
               Callable::~Callable((Callable*)&local_118);
               List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator>*)local_168);
               goto LAB_00102e27;
            }

         }

         List<MethodInfo,DefaultAllocator>::~List((List<MethodInfo,DefaultAllocator>*)local_168);
         LAB_00102e27:uVar14 = *(undefined8*)( this + 0xd88 );
         Tree::get_selected();
         BaseButton::set_disabled(SUB81(uVar14, 0));
         CowData<char32_t>::_unref(local_148);
         if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* PropertySelector::_text_changed(String const&) */
      void PropertySelector::_text_changed(String *param_1) {
         _update_search((PropertySelector*)param_1);
         return;
      }

      /* PropertySelector::select_method_from_base_type(String const&, String const&, bool) */
      void PropertySelector::select_method_from_base_type(PropertySelector *this, String *param_1, String *param_2, bool param_3) {
         undefined8 uVar1;
         float fVar2;
         long in_FS_OFFSET;
         undefined8 local_40;
         undefined *local_38;
         undefined8 local_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         if (*(long*)( this + 0xde8 ) != *(long*)param_1) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xde8 ), (CowData*)param_1);
         }

         if (*(long*)( this + 0xdd8 ) != *(long*)param_2) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xdd8 ), (CowData*)param_2);
         }

         this[0xe00] = (PropertySelector)param_3;
         fVar2 = _LC103;
         *(undefined4*)( this + 0xde0 ) = 0;
         *(undefined8*)( this + 0xdf0 ) = 0;
         this[0xdd0] = (PropertySelector)0x0;
         *(undefined8*)( this + 0xdf8 ) = 0;
         Window::popup_centered_ratio(fVar2);
         uVar1 = *(undefined8*)( this + 0xdb8 );
         local_40 = 0;
         local_38 = &_LC11;
         local_30 = 0;
         String::parse_latin1((StrRange*)&local_40);
         LineEdit::set_text(uVar1, (StrRange*)&local_40);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         Control::grab_focus();
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_search(this);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* PropertySelector::select_method_from_script(Ref<Script> const&, String const&) */
      void PropertySelector::select_method_from_script(PropertySelector *this, Ref *param_1, String *param_2) {
         char *__s;
         long lVar1;
         undefined8 uVar2;
         float fVar3;
         long in_FS_OFFSET;
         long local_68;
         long local_60;
         char *local_58;
         size_t local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (*(long**)param_1 == (long*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("select_method_from_script", "editor/property_selector.cpp", 0x214, "Condition \"p_script.is_null()\" is true.", 0, 0);
               return;
            }

            goto LAB_00104d03;
         }

         ( **(code**)( **(long**)param_1 + 0x1f0 ) )(&local_68);
         if (local_68 == 0) {
            LAB_00104c79:local_60 = 0;
         }
 else {
            __s = *(char**)( local_68 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( local_68 + 0x10 ) == 0) goto LAB_00104c79;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         if (*(long*)( this + 0xde8 ) != local_60) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xde8 ));
            lVar1 = local_60;
            local_60 = 0;
            *(long*)( this + 0xde8 ) = lVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         if (*(long*)( this + 0xdd8 ) != *(long*)param_2) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xdd8 ), (CowData*)param_2);
         }

         fVar3 = _LC103;
         lVar1 = *(long*)param_1;
         *(undefined4*)( this + 0xde0 ) = 0;
         uVar2 = *(undefined8*)( lVar1 + 0x60 );
         this[0xdd0] = (PropertySelector)0x0;
         *(undefined8*)( this + 0xdf8 ) = 0;
         *(undefined8*)( this + 0xdf0 ) = uVar2;
         this[0xe00] = (PropertySelector)0x0;
         Window::popup_centered_ratio(fVar3);
         uVar2 = *(undefined8*)( this + 0xdb8 );
         local_60 = 0;
         local_58 = "";
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         LineEdit::set_text(uVar2, (CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         Control::grab_focus();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_search(this);
            return;
         }

         LAB_00104d03:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* PropertySelector::select_method_from_basic_type(Variant::Type, String const&) */
      void PropertySelector::select_method_from_basic_type(PropertySelector *this, int param_2, CowData *param_3) {
         undefined8 uVar1;
         float fVar2;
         long in_FS_OFFSET;
         undefined8 local_50;
         undefined *local_48;
         undefined8 local_40;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (param_2 == 0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("select_method_from_basic_type", "editor/property_selector.cpp", 0x224, "Condition \"p_type == Variant::NIL\" is true.", 0, 0);
               return;
            }

         }
 else {
            local_40 = 0;
            local_48 = &_LC11;
            String::parse_latin1((StrRange*)( this + 0xde8 ));
            if (*(long*)( this + 0xdd8 ) != *(long*)param_3) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xdd8 ), param_3);
            }

            *(int*)( this + 0xde0 ) = param_2;
            fVar2 = _LC103;
            *(undefined8*)( this + 0xdf0 ) = 0;
            this[0xdd0] = (PropertySelector)0x0;
            *(undefined8*)( this + 0xdf8 ) = 0;
            this[0xe00] = (PropertySelector)0x0;
            Window::popup_centered_ratio(fVar2);
            local_48 = &_LC11;
            local_50 = 0;
            uVar1 = *(undefined8*)( this + 0xdb8 );
            local_40 = 0;
            String::parse_latin1((StrRange*)&local_50);
            LineEdit::set_text(uVar1, (StrRange*)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            Control::grab_focus();
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _update_search(this);
               return;
            }

         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* PropertySelector::select_method_from_instance(Object*, String const&) */
      void PropertySelector::select_method_from_instance(PropertySelector *this, Object *param_1, String *param_2) {
         undefined8 uVar1;
         float fVar2;
         undefined *puVar3;
         char cVar4;
         long lVar5;
         Object *pOVar6;
         long in_FS_OFFSET;
         undefined8 local_60;
         undefined *local_58;
         undefined8 local_50;
         int local_48[6];
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         ( **(code**)( *(long*)param_1 + 0x48 ) )((CowData<char32_t>*)&local_58);
         if ((undefined*)*(long*)( this + 0xde8 ) != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xde8 ));
            puVar3 = local_58;
            local_58 = (undefined*)0x0;
            *(undefined**)( this + 0xde8 ) = puVar3;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (*(long*)( this + 0xdd8 ) != *(long*)param_2) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xdd8 ), (CowData*)param_2);
         }

         lVar5 = *(long*)param_1;
         *(undefined4*)( this + 0xde0 ) = 0;
         *(undefined8*)( this + 0xdf0 ) = 0;
         ( **(code**)( lVar5 + 0x98 ) )(local_48, param_1);
         lVar5 = Variant::get_validated_object();
         if (lVar5 != 0) {
            pOVar6 = (Object*)__dynamic_cast(lVar5, &Object::typeinfo, &Script::typeinfo, 0);
            if (pOVar6 == (Object*)0x0) {
               if (Variant::needs_deinit[local_48[0]] != '\0') {
                  Variant::_clear_internal();
               }

               goto LAB_00104fd0;
            }

            cVar4 = RefCounted::reference();
            if (cVar4 != '\0') {
               if (Variant::needs_deinit[local_48[0]] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined8*)( this + 0xdf0 ) = *(undefined8*)( pOVar6 + 0x60 );
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  cVar4 = predelete_handler(pOVar6);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

               }

               goto LAB_00104fd0;
            }

         }

         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

         LAB_00104fd0:this[0xdd0] = (PropertySelector)0x0;
         fVar2 = _LC103;
         *(undefined8*)( this + 0xdf8 ) = 0;
         this[0xe00] = (PropertySelector)0x0;
         Window::popup_centered_ratio(fVar2);
         uVar1 = *(undefined8*)( this + 0xdb8 );
         local_60 = 0;
         local_58 = &_LC11;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         LineEdit::set_text(uVar1, (StrRange*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         Control::grab_focus();
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_search(this);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* PropertySelector::select_property_from_base_type(String const&, String const&) */
      void PropertySelector::select_property_from_base_type(PropertySelector *this, String *param_1, String *param_2) {
         undefined8 uVar1;
         float fVar2;
         long in_FS_OFFSET;
         undefined8 local_40;
         undefined *local_38;
         undefined8 local_30;
         long local_20;
         local_20 = *(long*)( in_FS_OFFSET + 0x28 );
         if (*(long*)( this + 0xde8 ) != *(long*)param_1) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xde8 ), (CowData*)param_1);
         }

         if (*(long*)( this + 0xdd8 ) != *(long*)param_2) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xdd8 ), (CowData*)param_2);
         }

         this[0xdd0] = (PropertySelector)0x1;
         fVar2 = _LC103;
         *(undefined4*)( this + 0xde0 ) = 0;
         *(undefined8*)( this + 0xdf0 ) = 0;
         *(undefined8*)( this + 0xdf8 ) = 0;
         this[0xe00] = (PropertySelector)0x0;
         Window::popup_centered_ratio(fVar2);
         uVar1 = *(undefined8*)( this + 0xdb8 );
         local_40 = 0;
         local_38 = &_LC11;
         local_30 = 0;
         String::parse_latin1((StrRange*)&local_40);
         LineEdit::set_text(uVar1, (StrRange*)&local_40);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         Control::grab_focus();
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_search(this);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* PropertySelector::select_property_from_script(Ref<Script> const&, String const&) */
      void PropertySelector::select_property_from_script(PropertySelector *this, Ref *param_1, String *param_2) {
         char *__s;
         long lVar1;
         undefined8 uVar2;
         float fVar3;
         long in_FS_OFFSET;
         long local_68;
         long local_60;
         char *local_58;
         size_t local_50;
         long local_40;
         local_40 = *(long*)( in_FS_OFFSET + 0x28 );
         if (*(long**)param_1 == (long*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("select_property_from_script", "editor/property_selector.cpp", 600, "Condition \"p_script.is_null()\" is true.", 0, 0);
               return;
            }

            goto LAB_00105433;
         }

         ( **(code**)( **(long**)param_1 + 0x1f0 ) )(&local_68);
         if (local_68 == 0) {
            LAB_001053a9:local_60 = 0;
         }
 else {
            __s = *(char**)( local_68 + 8 );
            local_60 = 0;
            if (__s == (char*)0x0) {
               if (*(long*)( local_68 + 0x10 ) == 0) goto LAB_001053a9;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
            }
 else {
               local_50 = strlen(__s);
               local_58 = __s;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         if (*(long*)( this + 0xde8 ) != local_60) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xde8 ));
            lVar1 = local_60;
            local_60 = 0;
            *(long*)( this + 0xde8 ) = lVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         if (*(long*)( this + 0xdd8 ) != *(long*)param_2) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xdd8 ), (CowData*)param_2);
         }

         fVar3 = _LC103;
         lVar1 = *(long*)param_1;
         *(undefined4*)( this + 0xde0 ) = 0;
         uVar2 = *(undefined8*)( lVar1 + 0x60 );
         this[0xdd0] = (PropertySelector)0x1;
         *(undefined8*)( this + 0xdf8 ) = 0;
         *(undefined8*)( this + 0xdf0 ) = uVar2;
         this[0xe00] = (PropertySelector)0x0;
         Window::popup_centered_ratio(fVar3);
         uVar2 = *(undefined8*)( this + 0xdb8 );
         local_60 = 0;
         local_58 = "";
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_60);
         LineEdit::set_text(uVar2, (CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         Control::grab_focus();
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_search(this);
            return;
         }

         LAB_00105433:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* PropertySelector::select_property_from_basic_type(Variant::Type, String const&) */
      void PropertySelector::select_property_from_basic_type(PropertySelector *this, int param_2, CowData *param_3) {
         undefined8 uVar1;
         float fVar2;
         long in_FS_OFFSET;
         undefined8 local_50;
         undefined *local_48;
         undefined8 local_40;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         if (param_2 == 0) {
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _err_print_error("select_property_from_basic_type", "editor/property_selector.cpp", 0x269, "Condition \"p_type == Variant::NIL\" is true.", 0, 0);
               return;
            }

         }
 else {
            local_40 = 0;
            local_48 = &_LC11;
            String::parse_latin1((StrRange*)( this + 0xde8 ));
            if (*(long*)( this + 0xdd8 ) != *(long*)param_3) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xdd8 ), param_3);
            }

            *(int*)( this + 0xde0 ) = param_2;
            fVar2 = _LC103;
            *(undefined8*)( this + 0xdf0 ) = 0;
            this[0xdd0] = (PropertySelector)0x1;
            *(undefined8*)( this + 0xdf8 ) = 0;
            this[0xe00] = (PropertySelector)0x0;
            Window::popup_centered_ratio(fVar2);
            local_48 = &_LC11;
            local_50 = 0;
            uVar1 = *(undefined8*)( this + 0xdb8 );
            local_40 = 0;
            String::parse_latin1((StrRange*)&local_50);
            LineEdit::set_text(uVar1, (StrRange*)&local_50);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            Control::grab_focus();
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _update_search(this);
               return;
            }

         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* PropertySelector::select_property_from_instance(Object*, String const&) */
      void PropertySelector::select_property_from_instance(PropertySelector *this, Object *param_1, String *param_2) {
         undefined8 uVar1;
         float fVar2;
         long in_FS_OFFSET;
         undefined8 local_50;
         undefined *local_48;
         undefined8 local_40;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         local_48 = &_LC11;
         local_40 = 0;
         String::parse_latin1((StrRange*)( this + 0xde8 ));
         if (*(long*)( this + 0xdd8 ) != *(long*)param_2) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0xdd8 ), (CowData*)param_2);
         }

         *(Object**)( this + 0xdf8 ) = param_1;
         fVar2 = _LC103;
         *(undefined4*)( this + 0xde0 ) = 0;
         *(undefined8*)( this + 0xdf0 ) = 0;
         this[0xdd0] = (PropertySelector)0x1;
         this[0xe00] = (PropertySelector)0x0;
         Window::popup_centered_ratio(fVar2);
         local_48 = &_LC11;
         local_50 = 0;
         uVar1 = *(undefined8*)( this + 0xdb8 );
         local_40 = 0;
         String::parse_latin1((StrRange*)&local_50);
         LineEdit::set_text(uVar1, (StrRange*)&local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         Control::grab_focus();
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            _update_search(this);
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      /* DefaultAllocator::alloc(unsigned long) */
      void DefaultAllocator::alloc(ulong param_1) {
         Memory::alloc_static(param_1, false);
         return;
      }

      /* StringName::~StringName() */
      void StringName::~StringName(StringName *this) {
         if (( configured != '\0' ) && ( *(long*)this != 0 )) {
            StringName::unref();
            return;
         }

         return;
      }

      /* Object::_bind_compatibility_methods() */
      void Object::_bind_compatibility_methods(void) {
         return;
      }

      /* Object::_set(StringName const&, Variant const&) */
      undefined8 Object::_set(StringName *param_1, Variant *param_2) {
         return 0;
      }

      /* Object::_get(StringName const&, Variant&) const */
      undefined8 Object::_get(StringName *param_1, Variant *param_2) {
         return 0;
      }

      /* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */
      void Object::_get_property_list(List *param_1) {
         return;
      }

      /* Object::_validate_property(PropertyInfo&) const */
      void Object::_validate_property(PropertyInfo *param_1) {
         return;
      }

      /* Object::_property_can_revert(StringName const&) const */
      undefined8 Object::_property_can_revert(StringName *param_1) {
         return 0;
      }

      /* Object::_property_get_revert(StringName const&, Variant&) const */
      undefined8 Object::_property_get_revert(StringName *param_1, Variant *param_2) {
         return 0;
      }

      /* Object::_notification(int) */
      void Object::_notification(int param_1) {
         return;
      }

      /* Object::get_save_class() const */
      void Object::get_save_class(void) {
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

      /* Control::_top_level_changed() */
      void Control::_top_level_changed(void) {
         return;
      }

      /* Viewport::is_size_2d_override_stretch_enabled() const */
      undefined8 Viewport::is_size_2d_override_stretch_enabled(void) {
         return 1;
      }

      /* Viewport::is_sub_viewport() const */
      undefined8 Viewport::is_sub_viewport(void) {
         return 0;
      }

      /* Window::_popup_adjust_rect() const */
      undefined1[16];
      Window::_popup_adjust_rect(void) {
         return ZEXT816(0);
      }

      /* AcceptDialog::ok_pressed() */
      void AcceptDialog::ok_pressed(void) {
         return;
      }

      /* AcceptDialog::cancel_pressed() */
      void AcceptDialog::cancel_pressed(void) {
         return;
      }

      /* AcceptDialog::custom_action(String const&) */
      void AcceptDialog::custom_action(String *param_1) {
         return;
      }

      /* ConfirmationDialog::is_class_ptr(void*) const */
      uint ConfirmationDialog::is_class_ptr(void *param_1) {
         undefined4 in_EDX;
         undefined4 *in_RSI;
         return (uint)CONCAT71(0x10dd, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10dd, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10dd, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10dd, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
      }

      /* ConfirmationDialog::_property_can_revertv(StringName const&) const */
      undefined8 ConfirmationDialog::_property_can_revertv(StringName *param_1) {
         return 0;
      }

      /* ConfirmationDialog::_property_get_revertv(StringName const&, Variant&) const */
      undefined8 ConfirmationDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
         return 0;
      }

      /* PropertySelector::_property_can_revertv(StringName const&) const */
      undefined8 PropertySelector::_property_can_revertv(StringName *param_1) {
         return 0;
      }

      /* PropertySelector::_property_get_revertv(StringName const&, Variant&) const */
      undefined8 PropertySelector::_property_get_revertv(StringName *param_1, Variant *param_2) {
         return 0;
      }

      /* CallableCustomMethodPointer<PropertySelector, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */
      void CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&> *this) {
         return;
      }

      /* CallableCustomMethodPointer<PropertySelector, void, String
   const&>::~CallableCustomMethodPointer() */
      void CallableCustomMethodPointer<PropertySelector,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void,String_const&> *this) {
         return;
      }

      /* CallableCustomMethodPointer<PropertySelector, void>::~CallableCustomMethodPointer() */
      void CallableCustomMethodPointer<PropertySelector,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void> *this) {
         return;
      }

      /* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::~CallableCustomMethodPointer() */
      void CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this) {
         return;
      }

      /* CallableCustomMethodPointer<PropertySelector, void, Ref<InputEvent>
   const&>::get_argument_count(bool&) const */
      undefined8 CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&>::get_argument_count(CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&> *this, bool *param_1) {
         *param_1 = true;
         return 1;
      }

      /* CallableCustomMethodPointer<PropertySelector, void, String const&>::get_argument_count(bool&)
   const */
      undefined8 CallableCustomMethodPointer<PropertySelector,void,String_const&>::get_argument_count(CallableCustomMethodPointer<PropertySelector,void,String_const&> *this, bool *param_1) {
         *param_1 = true;
         return 1;
      }

      /* CallableCustomMethodPointer<PropertySelector, void>::get_argument_count(bool&) const */
      undefined8 CallableCustomMethodPointer<PropertySelector,void>::get_argument_count(CallableCustomMethodPointer<PropertySelector,void> *this, bool *param_1) {
         *param_1 = true;
         return 0;
      }

      /* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::get_argument_count(bool&) const */
      undefined8 CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::get_argument_count(CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this, bool *param_1) {
         *param_1 = true;
         return 2;
      }

      /* CallableCustomMethodPointerBase::get_method() const */
      void CallableCustomMethodPointerBase::get_method(void) {
         long in_RSI;
         StringName *in_RDI;
         StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
         return;
      }

      /* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::~CallableCustomMethodPointer() */
      void CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this) {
         operator_delete(this, 0x48);
         return;
      }

      /* CallableCustomMethodPointer<PropertySelector, void>::~CallableCustomMethodPointer() */
      void CallableCustomMethodPointer<PropertySelector,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void> *this) {
         operator_delete(this, 0x48);
         return;
      }

      /* CallableCustomMethodPointer<PropertySelector, void, String
   const&>::~CallableCustomMethodPointer() */
      void CallableCustomMethodPointer<PropertySelector,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void,String_const&> *this) {
         operator_delete(this, 0x48);
         return;
      }

      /* CallableCustomMethodPointer<PropertySelector, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */
      void CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&> *this) {
         operator_delete(this, 0x48);
         return;
      }

      /* ConfirmationDialog::~ConfirmationDialog() */
      void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
         *(undefined***)this = &PTR__initialize_classv_0010d430;
         AcceptDialog::~AcceptDialog((AcceptDialog*)this);
         return;
      }

      /* ConfirmationDialog::~ConfirmationDialog() */
      void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
         *(undefined***)this = &PTR__initialize_classv_0010d430;
         AcceptDialog::~AcceptDialog((AcceptDialog*)this);
         operator_delete(this, 0xdb8);
         return;
      }

      /* ConfirmationDialog::_getv(StringName const&, Variant&) const */
      undefined8 ConfirmationDialog::_getv(StringName *param_1, Variant *param_2) {
         undefined8 uVar1;
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
            uVar1 = Window::_get(param_1, param_2);
            return uVar1;
         }

         return 0;
      }

      /* PropertySelector::_getv(StringName const&, Variant&) const */
      undefined8 PropertySelector::_getv(StringName *param_1, Variant *param_2) {
         undefined8 uVar1;
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
            uVar1 = Window::_get(param_1, param_2);
            return uVar1;
         }

         return 0;
      }

      /* ConfirmationDialog::_setv(StringName const&, Variant const&) */
      undefined8 ConfirmationDialog::_setv(StringName *param_1, Variant *param_2) {
         undefined8 uVar1;
         if ((code*)PTR__set_00111008 != Object::_set) {
            uVar1 = Window::_set(param_1, param_2);
            return uVar1;
         }

         return 0;
      }

      /* PropertySelector::_setv(StringName const&, Variant const&) */
      undefined8 PropertySelector::_setv(StringName *param_1, Variant *param_2) {
         undefined8 uVar1;
         if ((code*)PTR__set_00111008 != Object::_set) {
            uVar1 = Window::_set(param_1, param_2);
            return uVar1;
         }

         return 0;
      }

      /* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */
      undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
         undefined8 uVar1;
         if ((code*)PTR__property_get_revert_00111010 != Object::_property_get_revert) {
            uVar1 = Control::_property_get_revert(param_1, param_2);
            return uVar1;
         }

         return 0;
      }

      /* VBoxContainer::_property_can_revertv(StringName const&) const */
      undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
         undefined8 uVar1;
         if ((code*)PTR__property_can_revert_00111018 != Object::_property_can_revert) {
            uVar1 = Control::_property_can_revert(param_1);
            return uVar1;
         }

         return 0;
      }

      /* CallableCustomMethodPointer<PropertySelector, void>::get_object() const */
      undefined8 CallableCustomMethodPointer<PropertySelector,void>::get_object(CallableCustomMethodPointer<PropertySelector,void> *this) {
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
               goto LAB_00105e6d;
            }

            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar4[1] != 0) {
               uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
               goto LAB_00105e6d;
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

         uVar2 = 0;
         LAB_00105e6d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar2;
      }

      /* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::get_object() const */
      undefined8 CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::get_object(CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this) {
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
               goto LAB_00105f6d;
            }

            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar4[1] != 0) {
               uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
               goto LAB_00105f6d;
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

         uVar2 = 0;
         LAB_00105f6d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar2;
      }

      /* CallableCustomMethodPointer<PropertySelector, void, String const&>::get_object() const */
      undefined8 CallableCustomMethodPointer<PropertySelector,void,String_const&>::get_object(CallableCustomMethodPointer<PropertySelector,void,String_const&> *this) {
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
               goto LAB_0010606d;
            }

            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar4[1] != 0) {
               uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
               goto LAB_0010606d;
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

         uVar2 = 0;
         LAB_0010606d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar2;
      }

      /* CallableCustomMethodPointer<PropertySelector, void, Ref<InputEvent> const&>::get_object() const
    */
      undefined8 CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&>::get_object(CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&> *this) {
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
               goto LAB_0010616d;
            }

            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar4[1] != 0) {
               uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
               goto LAB_0010616d;
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

         uVar2 = 0;
         LAB_0010616d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return uVar2;
      }

      /* PropertySelector::_validate_propertyv(PropertyInfo&) const */
      void PropertySelector::_validate_propertyv(PropertyInfo *param_1) {
         Node::_validate_property(param_1);
         Viewport::_validate_property(param_1);
         if ((code*)PTR__validate_property_00111020 == Viewport::_validate_property) {
            return;
         }

         Window::_validate_property(param_1);
         return;
      }

      /* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */
      void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1) {
         Node::_validate_property(param_1);
         Viewport::_validate_property(param_1);
         if ((code*)PTR__validate_property_00111020 == Viewport::_validate_property) {
            return;
         }

         Window::_validate_property(param_1);
         return;
      }

      /* VBoxContainer::_validate_propertyv(PropertyInfo&) const */
      void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
         for (int i = 0; i < 3; i++) {
            Node::_validate_property(param_1);
         }

         if ((code*)PTR__validate_property_00111028 == Control::_validate_property) {
            return;
         }

         BoxContainer::_validate_property(param_1);
         return;
      }

      /* VBoxContainer::_setv(StringName const&, Variant const&) */
      undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
         undefined8 uVar1;
         uVar1 = CanvasItem::_set(param_1, param_2);
         if ((char)uVar1 == '\0') {
            if ((code*)PTR__set_00111030 != CanvasItem::_set) {
               uVar1 = Control::_set(param_1, param_2);
               return uVar1;
            }

            uVar1 = 0;
         }

         return uVar1;
      }

      /* WARNING: Removing unreachable block (ram,0x00106438) */
      /* VBoxContainer::_getv(StringName const&, Variant&) const */
      undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
         undefined8 uVar1;
         if (( (code*)PTR__get_00111038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
            return uVar1;
         }

         uVar1 = CanvasItem::_get(param_1, param_2);
         return uVar1;
      }

      /* VBoxContainer::is_class_ptr(void*) const */
      uint VBoxContainer::is_class_ptr(void *param_1) {
         uint uVar1;
         undefined4 in_EDX;
         undefined4 *in_RSI;
         uVar1 = 1;
         if (in_RSI != &get_class_ptr_static()::ptr) {
            uVar1 = (uint)CONCAT71(0x10de, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
         }

         return uVar1;
      }

      /* ConfirmationDialog::_notificationv(int, bool) */
      void ConfirmationDialog::_notificationv(ConfirmationDialog *this, int param_1, bool param_2) {
         int iVar1;
         iVar1 = (int)this;
         if (param_2) {
            if ((code*)PTR__notification_00111040 != Window::_notification) {
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

         if ((code*)PTR__notification_00111040 == Window::_notification) {
            return;
         }

         AcceptDialog::_notification(iVar1);
         return;
      }

      /* PropertySelector::is_class_ptr(void*) const */
      uint PropertySelector::is_class_ptr(void *param_1) {
         uint uVar1;
         undefined4 in_EDX;
         undefined4 *in_RSI;
         uVar1 = 1;
         if (in_RSI != &get_class_ptr_static()::ptr) {
            uVar1 = (uint)CONCAT71(0x10dd, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10dd, in_RSI == &ConfirmationDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10dd, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10dd, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10de, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
         }

         return uVar1;
      }

      /* VBoxContainer::_notificationv(int, bool) */
      void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
         int iVar1;
         iVar1 = (int)this;
         if (param_2) {
            if ((code*)PTR__notification_00111048 != Container::_notification) {
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

         if ((code*)PTR__notification_00111048 == Container::_notification) {
            return;
         }

         BoxContainer::_notification(iVar1);
         return;
      }

      /* VBoxContainer::~VBoxContainer() */
      void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
         bool bVar1;
         bVar1 = StringName::configured != '\0';
         *(code**)this = StringName::assign_static_unique_class_name;
         if (bVar1) {
            if (*(long*)( this + 0x9e8 ) != 0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_001067a0;
            }

            if (*(long*)( this + 0x9d0 ) != 0) {
               StringName::unref();
            }

         }

         LAB_001067a0:Control::~Control((Control*)this);
         return;
      }

      /* VBoxContainer::~VBoxContainer() */
      void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
         bool bVar1;
         bVar1 = StringName::configured != '\0';
         *(code**)this = StringName::assign_static_unique_class_name;
         if (bVar1) {
            if (*(long*)( this + 0x9e8 ) != 0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_00106800;
            }

            if (*(long*)( this + 0x9d0 ) != 0) {
               StringName::unref();
            }

         }

         LAB_00106800:Control::~Control((Control*)this);
         operator_delete(this, 0xa10);
         return;
      }

      /* ConfirmationDialog::_get_class_namev() const */
      undefined8 *ConfirmationDialog::_get_class_namev(void) {
         int iVar1;
         if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
            _get_class_namev()
            __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
            __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
         }

         if (_get_class_namev()::_class_name_static != 0) {
            if (*(long*)( _get_class_namev() ) != 0) {
               LAB_00106863:return &_get_class_namev();
            }

            if (*(long*)( _get_class_namev() ) != 0) {
               if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106863;
               StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfirmationDialog");
               goto LAB_001068ce;
            }

         }

         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfirmationDialog");
         LAB_001068ce:return &_get_class_namev();
      }

      /* PropertySelector::_get_class_namev() const */
      undefined8 *PropertySelector::_get_class_namev(void) {
         int iVar1;
         if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
            _get_class_namev()
            __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
            __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
         }

         if (_get_class_namev()::_class_name_static != 0) {
            if (*(long*)( _get_class_namev() ) != 0) {
               LAB_00106953:return &_get_class_namev();
            }

            if (*(long*)( _get_class_namev() ) != 0) {
               if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106953;
               StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PropertySelector");
               goto LAB_001069be;
            }

         }

         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PropertySelector");
         LAB_001069be:return &_get_class_namev();
      }

      /* VBoxContainer::_get_class_namev() const */
      undefined8 *VBoxContainer::_get_class_namev(void) {
         int iVar1;
         if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
            _get_class_namev()
            __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
            __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
         }

         if (_get_class_namev()::_class_name_static != 0) {
            if (*(long*)( _get_class_namev() ) != 0) {
               LAB_00106a43:return &_get_class_namev();
            }

            if (*(long*)( _get_class_namev() ) != 0) {
               if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106a43;
               StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
               goto LAB_00106aae;
            }

         }

         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         LAB_00106aae:return &_get_class_namev();
      }

      /* CallableCustomMethodPointerBase::get_as_text() const */
      void CallableCustomMethodPointerBase::get_as_text(void) {
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

      /* VBoxContainer::get_class() const */
      void VBoxContainer::get_class(void) {
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

      /* ConfirmationDialog::get_class() const */
      void ConfirmationDialog::get_class(void) {
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

      /* String::parse_latin1(char const*) */
      void String::parse_latin1(String *this, char *param_1) {
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

      /* PropertyInfo::~PropertyInfo() */
      void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
   int, StringName const&) */
      void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
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

      /* CowData<char32_t>::_ref(CowData<char32_t> const&) */
      void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
         if (*(long*)this != *(long*)param_1) {
            _ref(this, param_1);
            return;
         }

         return;
      }

      /* PropertySelector::get_class() const */
      void PropertySelector::get_class(void) {
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

      /* void memdelete<TreeItem>(TreeItem*) */
      void memdelete<TreeItem>(TreeItem *param_1) {
         char cVar1;
         cVar1 = predelete_handler((Object*)param_1);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
            Memory::free_static(param_1, false);
            return;
         }

         return;
      }

      /* Callable create_custom_callable_function_pointer<Tree, TreeItem*, bool>(Tree*, char const*, void
   (Tree::*)(TreeItem*, bool)) */
      Tree *create_custom_callable_function_pointer<Tree,TreeItem*,bool>(Tree *param_1, char *param_2, _func_void_TreeItem_ptr_bool *param_3) {
         undefined8 uVar1;
         CallableCustom *this;
         undefined8 in_RCX;
         undefined8 in_R8;
         this(CallableCustom * operator_new(0x48, ""));
         CallableCustom::CallableCustom(this);
         *(undefined**)( this + 0x20 ) = &_LC11;
         *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
         *(undefined8*)( this + 0x40 ) = 0;
         *(undefined***)this = &PTR_hash_0010d920;
         uVar1 = *(undefined8*)( param_2 + 0x60 );
         *(char**)( this + 0x28 ) = param_2;
         *(undefined8*)( this + 0x30 ) = uVar1;
         *(undefined8*)( this + 0x38 ) = in_RCX;
         *(undefined8*)( this + 0x40 ) = in_R8;
         *(undefined8*)( this + 0x10 ) = 0;
         CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
         *(_func_void_TreeItem_ptr_bool**)( this + 0x20 ) = param_3 + 1;
         Callable::Callable((Callable*)param_1, this);
         return param_1;
      }

      /* Callable create_custom_callable_function_pointer<PropertySelector>(PropertySelector*, char
   const*, void (PropertySelector::*)()) */
      PropertySelector *create_custom_callable_function_pointer<PropertySelector>(PropertySelector *param_1, char *param_2, _func_void *param_3) {
         undefined8 uVar1;
         CallableCustom *this;
         undefined8 in_RCX;
         undefined8 in_R8;
         this(CallableCustom * operator_new(0x48, ""));
         CallableCustom::CallableCustom(this);
         *(undefined**)( this + 0x20 ) = &_LC11;
         *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
         *(undefined8*)( this + 0x40 ) = 0;
         *(undefined***)this = &PTR_hash_0010d9b0;
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

      /* PropertySelector::_notificationv(int, bool) */
      void PropertySelector::_notificationv(PropertySelector *this, int param_1, bool param_2) {
         if (param_2) {
            _notification(this, param_1);
            ConfirmationDialog::_notificationv((ConfirmationDialog*)this, param_1, true);
            return;
         }

         ConfirmationDialog::_notificationv((ConfirmationDialog*)this, param_1, false);
         _notification(this, param_1);
         return;
      }

      /* CowData<char32_t>::_unref() */
      void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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

      /* WARNING: Removing unreachable block (ram,0x001073f8) */
      /* String vformat<String>(String const&, String const) */
      undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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

      /* PropertySelector::~PropertySelector() */
      void PropertySelector::~PropertySelector(PropertySelector *this) {
         long *plVar1;
         long lVar2;
         *(undefined***)this = &PTR__initialize_classv_0010d6a8;
         if (*(long*)( this + 0xe10 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( this + 0xe10 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar2 = *(long*)( this + 0xe10 );
               *(undefined8*)( this + 0xe10 ) = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xde8 ));
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

         *(undefined***)this = &PTR__initialize_classv_0010d430;
         AcceptDialog::~AcceptDialog((AcceptDialog*)this);
         return;
      }

      /* CallableCustomMethodPointer<PropertySelector, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
      void CallableCustomMethodPointer<PropertySelector,void>::call(CallableCustomMethodPointer<PropertySelector,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
               goto LAB_001079af;
            }

            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar4[1] == 0) goto LAB_001079af;
            lVar1 = *(long*)( this + 0x28 );
            UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if (param_2 == 0) {
               *(undefined4*)param_4 = 0;
               if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
                  UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
               }

               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Could not recover jumptable at 0x00107988. Too many branches */
                  /* WARNING: Treating indirect jump as call */
                  ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
                  return;
               }

               goto LAB_00107a71;
            }

            *(undefined4*)param_4 = 3;
            *(undefined4*)( param_4 + 8 ) = 0;
         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            LAB_001079af:local_50 = 0;
            local_48 = "\', can\'t call method.";
            local_40 = 0x15;
            String::parse_latin1((StrRange*)&local_50);
            uitos((ulong)local_60);
            operator+((char *)
            local_58,(String*)"Invalid Object id \'";
            String::operator +((String*)&local_48, (String*)local_58);
            _err_print_error(&_LC60, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref(local_58);
            CowData<char32_t>::_unref(local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         LAB_00107a71:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      /* CallableCustomMethodPointer<PropertySelector, void, Ref<InputEvent> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */
      void CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&>::call(CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
         long lVar1;
         long lVar2;
         ulong uVar3;
         undefined8 uVar4;
         Object *pOVar5;
         char cVar6;
         Object *pOVar7;
         uint uVar8;
         ulong *puVar9;
         code *pcVar10;
         long in_FS_OFFSET;
         bool bVar11;
         CowData<char32_t> local_50[8];
         CowData<char32_t> local_48[8];
         undefined8 local_40;
         Object *local_38;
         long local_30;
         local_30 = *(long*)( in_FS_OFFSET + 0x28 );
         uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
         if (uVar8 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar3 = (ulong)local_38 >> 8;
               local_38 = (Object*)( uVar3 << 8 );
               LOCK();
               bVar11 = (char)ObjectDB::spin_lock == '\0';
               if (bVar11) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar11) break;
               local_38 = (Object*)( uVar3 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
            if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
               ObjectDB::spin_lock._0_1_ = '\0';
               if (puVar9[1] != 0) {
                  lVar1 = *(long*)( this + 0x28 );
                  pcVar10 = *(code**)( this + 0x38 );
                  lVar2 = *(long*)( this + 0x40 );
                  if (1 < (uint)param_2) {
                     *(undefined4*)param_4 = 3;
                     *(undefined4*)( param_4 + 8 ) = 1;
                     goto LAB_00107b4e;
                  }

                  if (param_2 == 0) {
                     *(undefined4*)param_4 = 4;
                     *(undefined4*)( param_4 + 8 ) = 1;
                     goto LAB_00107b4e;
                  }

                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar10 & 1 ) != 0) {
                     pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1);
                  uVar4 = _LC61;
                  if (cVar6 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  local_38 = (Object*)0x0;
                  pOVar7 = (Object*)Variant::get_validated_object();
                  pOVar5 = local_38;
                  if (pOVar7 != local_38) {
                     if (pOVar7 == (Object*)0x0) {
                        if (local_38 != (Object*)0x0) {
                           local_38 = (Object*)0x0;
                           LAB_00107c1d:cVar6 = RefCounted::unreference();
                           if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                              ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                              Memory::free_static(pOVar5, false);
                           }

                        }

                     }
 else {
                        pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &InputEvent::typeinfo, 0);
                        if (pOVar5 != pOVar7) {
                           local_38 = pOVar7;
                           if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                              local_38 = (Object*)0x0;
                           }

                           if (pOVar5 != (Object*)0x0) goto LAB_00107c1d;
                        }

                     }

                  }

                  ( *pcVar10 )((long*)( lVar1 + lVar2 ));
                  if (( ( local_38 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_38,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

               goto LAB_00107b4e;
            }

         }
 else {
            ObjectDB::spin_lock._0_1_ = '\0';
         }

      }

      else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_40 = 0;
   String::parse_latin1((String*)&local_40, "\', can\'t call method.");
   uitos((ulong)local_50);
   operator+((char *)
   local_48,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_38, (String*)local_48);
   _err_print_error(&_LC60, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_00107b4e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::call(CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_00108005;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] == 0) goto LAB_00108005;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 3) {
         if (param_2 == 2) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar4 = Variant::can_convert_strict(*(undefined4*)param_1[1], 1);
            uVar3 = _LC62;
            if (cVar4 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }

            bVar10 = Variant::operator_cast_to_bool(param_1[1]);
            cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            if (cVar4 == '\0') {
               LAB_00107f74:uVar3 = _LC61;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar3;
            }
 else {
               this_00 = *param_1;
               pOVar5 = Variant::operator_cast_to_Object_(this_00);
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar6 == (Object*)0x0 ) || ( lVar7 = __dynamic_cast(pOVar6, &Object::typeinfo, &TreeItem::typeinfo, 0) ),lVar7 == 0 )) goto LAB_00107f74;
            }

            pOVar5 = Variant::operator_cast_to_Object_(*param_1);
            if (pOVar5 != (Object*)0x0) {
               pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &TreeItem::typeinfo, 0);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00107fde. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar5, bVar10);
               return;
            }

            goto LAB_00108105;
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
      LAB_00108005:local_50 = 0;
      String::parse_latin1((String*)&local_50, "\', can\'t call method.");
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +(local_48, (String*)local_58);
      _err_print_error(&_LC60, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00108105:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<PropertySelector, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<PropertySelector,void,String_const&>::call(CallableCustomMethodPointer<PropertySelector,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  uVar3 = _LC63;
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

            goto LAB_001081de;
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
   _err_print_error(&_LC60, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_001081de:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* PropertySelector::~PropertySelector() */void PropertySelector::~PropertySelector(PropertySelector *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0010d6a8;
   if (*(long*)( this + 0xe10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xe10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xe10 );
         *(undefined8*)( this + 0xe10 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0xde8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xde8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xde8 );
         *(undefined8*)( this + 0xde8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0xdd8 ));
   *(undefined***)this = &PTR__initialize_classv_0010d430;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xe18);
   return;
}
/* ConfirmationDialog::_initialize_classv() */void ConfirmationDialog::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (AcceptDialog::initialize_class() == '\0') {
         if (Window::initialize_class() == '\0') {
            if (Viewport::initialize_class() == '\0') {
               if (Node::initialize_class() == '\0') {
                  Object::initialize_class();
                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Object");
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
                  if ((code*)PTR__bind_methods_00111060 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Node");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Viewport");
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
               Viewport::_bind_methods();
               Viewport::initialize_class()::initialized =
               '\x01';
            }

            local_58 = "Viewport";
            local_68 = 0;
            local_50 = 8;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Window";
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
            Window::_bind_methods();
            Window::initialize_class()::initialized =
            '\x01';
         }

         local_68 = 0;
         local_58 = "Window";
         local_50 = 6;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "AcceptDialog";
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
         AcceptDialog::_bind_methods();
         if ((code*)PTR__bind_compatibility_methods_00111050 != Object::_bind_compatibility_methods) {
            AcceptDialog::_bind_compatibility_methods();
         }

         AcceptDialog::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "AcceptDialog";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "ConfirmationDialog";
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
      if ((code*)PTR__bind_methods_00111058 != AcceptDialog::_bind_methods) {
         ConfirmationDialog::_bind_methods();
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
/* VBoxContainer::_initialize_classv() */void VBoxContainer::_initialize_classv(void) {
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
                     String::parse_latin1((String*)&local_60, "Object");
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
                     if ((code*)PTR__bind_methods_00111060 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "CanvasItem");
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
                  CanvasItem::_bind_methods();
                  if ((code*)PTR__bind_compatibility_methods_00111068 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "CanvasItem");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Control");
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
               Control::_bind_methods();
               Control::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Control";
            local_50 = 7;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Container";
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
            Container::_bind_methods();
            Container::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Container";
         local_68 = 0;
         local_50 = 9;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "BoxContainer";
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
         if ((code*)PTR__bind_methods_00111070 != Container::_bind_methods) {
            BoxContainer::_bind_methods();
         }

         BoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "BoxContainer";
      local_68 = 0;
      local_50 = 0xc;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "VBoxContainer";
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

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x38 ));
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
            if (pvVar5 == (void*)0x0) goto LAB_00109115;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00109115:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010926b;
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
         if (cVar5 != '\0') goto LAB_0010926b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_0010926b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AcceptDialog::is_class(String const&) const */undefined8 AcceptDialog::is_class(AcceptDialog *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010946b;
   }

   cVar5 = String::operator ==(param_1, "AcceptDialog");
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
         if (cVar5 != '\0') goto LAB_0010946b;
      }

      cVar5 = String::operator ==(param_1, "Window");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar5 != '\0') goto LAB_0010946b;
         }

         cVar5 = String::operator ==(param_1, "Viewport");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = Node::is_class((Node*)this, param_1);
               return uVar6;
            }

            goto LAB_0010960e;
         }

      }

   }

   LAB_0010946b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010960e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ConfirmationDialog::is_class(String const&) const */undefined8 ConfirmationDialog::is_class(ConfirmationDialog *this, String *param_1) {
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

      if (cVar4 != '\0') goto LAB_0010971b;
   }

   cVar4 = String::operator ==(param_1, "ConfirmationDialog");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = AcceptDialog::is_class((AcceptDialog*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_0010971b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Container::is_class(String const&) const */undefined8 Container::is_class(Container *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010986b;
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
         if (cVar5 != '\0') goto LAB_0010986b;
      }

      cVar5 = String::operator ==(param_1, "Control");
      if (cVar5 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_58 = (char*)0x0;
            }
 else {
               local_58 = (char*)0x0;
               if (*(char**)( lVar4 + 8 ) == (char*)0x0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar4 + 0x10 ));
               }
 else {
                  String::parse_latin1((String*)&local_58, *(char**)( lVar4 + 8 ));
               }

            }

            cVar5 = String::operator ==(param_1, (String*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            if (cVar5 != '\0') goto LAB_0010986b;
         }

         cVar5 = String::operator ==(param_1, "CanvasItem");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = Node::is_class((Node*)this, param_1);
               return uVar6;
            }

            goto LAB_00109a0e;
         }

      }

   }

   LAB_0010986b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00109a0e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_00109b1b;
   }

   cVar5 = String::operator ==(param_1, "VBoxContainer");
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
         if (cVar5 != '\0') goto LAB_00109b1b;
      }

      cVar5 = String::operator ==(param_1, "BoxContainer");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Container::is_class((Container*)this, param_1);
            return uVar6;
         }

         goto LAB_00109c1e;
      }

   }

   LAB_00109b1b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00109c1e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PropertySelector::is_class(String const&) const */undefined8 PropertySelector::is_class(PropertySelector *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_00109d2b;
   }

   cVar5 = String::operator ==(param_1, "PropertySelector");
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
         if (cVar5 != '\0') goto LAB_00109d2b;
      }

      cVar5 = String::operator ==(param_1, "ConfirmationDialog");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = AcceptDialog::is_class((AcceptDialog*)this, param_1);
            return uVar6;
         }

         goto LAB_00109e2e;
      }

   }

   LAB_00109d2b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00109e2e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_98;
   long local_90;
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
   local_78 = &_LC68;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC68;
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

         goto LAB_0010a13c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010a13c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Viewport::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Viewport::_get_property_listv(Viewport *this, List *param_1, bool param_2) {
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
   local_78 = "Viewport";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Viewport";
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

         goto LAB_0010a3a1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010a3a1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010a651;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010a651:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00111078 != Object::_get_property_list) {
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

         goto LAB_0010a921;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010a921:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00111080 != CanvasItem::_get_property_list) {
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

         goto LAB_0010abf1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010abf1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010aea1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010aea1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010b151;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b151:local_b0 = (CowData<char32_t>*)&local_58;
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
/* Window::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Window::_get_property_listv(Window *this, List *param_1, bool param_2) {
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

         goto LAB_0010b401;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b401:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "Window", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_00111088 != Object::_get_property_list) {
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

         goto LAB_0010b6d1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b6d1:local_b0 = (CowData<char32_t>*)&local_58;
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
/* ConfirmationDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ConfirmationDialog::_get_property_listv(ConfirmationDialog *this, List *param_1, bool param_2) {
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
      AcceptDialog::_get_property_listv((AcceptDialog*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "ConfirmationDialog";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ConfirmationDialog";
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

         goto LAB_0010b981;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b981:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "ConfirmationDialog", false);
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
/* PropertySelector::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void PropertySelector::_get_property_listv(PropertySelector *this, List *param_1, bool param_2) {
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
      ConfirmationDialog::_get_property_listv((ConfirmationDialog*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "PropertySelector";
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PropertySelector";
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

         goto LAB_0010bc31;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010bc31:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "PropertySelector", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         ConfirmationDialog::_get_property_listv((ConfirmationDialog*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<Texture2D>::unref() */void Ref<Texture2D>::unref(Ref<Texture2D> *this) {
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
/* CowData<Variant>::_unref() */void CowData<Variant>::_unref(CowData<Variant> *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      piVar2 = *(int**)this;
      if (piVar2 != (int*)0x0) {
         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar6 = 0;
            piVar5 = piVar2;
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static(piVar2 + -4, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar4 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar3 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)( this + 0x50 ));
   plVar4 = *(long**)( this + 0x40 );
   if (plVar4 != (long*)0x0) {
      do {
         pvVar1 = (void*)*plVar4;
         if (pvVar1 == (void*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010bf4e;
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

         plVar4 = *(long**)( this + 0x40 );
      }
 while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
   }

   LAB_0010bf4e:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x28 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x10 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* PropertySelector::_initialize_classv() */void PropertySelector::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (ConfirmationDialog::initialize_class() == '\0') {
         if (AcceptDialog::initialize_class() == '\0') {
            if (Window::initialize_class() == '\0') {
               if (Viewport::initialize_class() == '\0') {
                  if (Node::initialize_class() == '\0') {
                     Object::initialize_class();
                     local_60 = 0;
                     String::parse_latin1((String*)&local_60, "Object");
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
                     if ((code*)PTR__bind_methods_00111060 != Node::_bind_methods) {
                        Node::_bind_methods();
                     }

                     Node::initialize_class()::initialized =
                     '\x01';
                  }

                  local_60 = 0;
                  String::parse_latin1((String*)&local_60, "Node");
                  StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
                  local_70 = 0;
                  String::parse_latin1((String*)&local_70, "Viewport");
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
                  Viewport::_bind_methods();
                  Viewport::initialize_class()::initialized =
                  '\x01';
               }

               local_60 = 0;
               String::parse_latin1((String*)&local_60, "Viewport");
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               local_70 = 0;
               String::parse_latin1((String*)&local_70, "Window");
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
               Window::_bind_methods();
               Window::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Window";
            local_50 = 6;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "AcceptDialog";
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
            AcceptDialog::_bind_methods();
            if ((code*)PTR__bind_compatibility_methods_00111050 != Object::_bind_compatibility_methods) {
               AcceptDialog::_bind_compatibility_methods();
            }

            AcceptDialog::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "AcceptDialog";
         local_68 = 0;
         local_50 = 0xc;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "ConfirmationDialog";
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
         if ((code*)PTR__bind_methods_00111058 != AcceptDialog::_bind_methods) {
            ConfirmationDialog::_bind_methods();
         }

         ConfirmationDialog::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "ConfirmationDialog";
      local_68 = 0;
      local_50 = 0x12;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "PropertySelector";
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
/* List<MethodInfo, DefaultAllocator>::~List() */void List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this) {
   MethodInfo *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)this;
   if (plVar3 == (long*)0x0) {
      return;
   }

   do {
      this_00 = (MethodInfo*)*plVar3;
      if (this_00 == (MethodInfo*)0x0) {
         if ((int)plVar3[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( this_00 + 0x80 ) == plVar3) {
         lVar2 = *(long*)( this_00 + 0x70 );
         lVar1 = *(long*)( this_00 + 0x78 );
         *plVar3 = lVar2;
         if (this_00 == (MethodInfo*)plVar3[1]) {
            plVar3[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 0x70 ) = lVar2;
            lVar2 = *(long*)( this_00 + 0x70 );
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x78 ) = lVar1;
         }

         MethodInfo::~MethodInfo(this_00);
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
/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x68 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x60 ));
   if (*(long*)( param_1 + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( param_1 + 0x58 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = plVar1[-1];
         *(undefined8*)( param_1 + 0x58 ) = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (plVar6[4] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[4] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[4];
                     plVar6[4] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (plVar6[2] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[2] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[2];
                     plVar6[2] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (plVar6[1] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[1] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[1];
                     plVar6[1] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

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
               plVar6 = plVar6 + 5;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x48 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x38 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x28 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x20 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x18 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( param_1 + 0x10 ) != 0 )) {
      StringName::unref();
   }

   Memory::free_static(param_1, false);
   return;
}
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */void HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>> *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(*(HashMapElement**)( (long)pvVar3 + lVar2 * 2 ));
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }

            lVar2 = lVar2 + 4;
         }
 while ( lVar2 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar3 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */void HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator < HashMapElement<StringName,EditorHelpBit::HelpData>>>>> > *this) {
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
                              memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(*(HashMapElement**)( (long)pvVar5 + lVar4 * 2 ));
                              pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
                              *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
                           }

                           lVar4 = lVar4 + 4;
                        }
 while ( lVar4 != (ulong)uVar2 * 4 );
                        *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                        if (pvVar5 == (void*)0x0) goto LAB_0010ca79;
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  Memory::free_static(*(void**)( (long)pvVar6 + 0x28 ), false);
               }

               LAB_0010ca79:if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar6, false);
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
/* PropertySelector::_text_changed(String const&) */void PropertySelector::_GLOBAL__sub_I__text_changed(void) {
   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (EditorHelpBit::doc_class_cache == '\0') {
      EditorHelpBit::doc_class_cache = '\x01';
      EditorHelpBit::doc_class_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_class_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_class_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault < StringName>, DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>> > ::~HashMap, EditorHelpBit::doc_class_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_enum_cache == '\0') {
      EditorHelpBit::doc_enum_cache = '\x01';
      EditorHelpBit::doc_enum_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_enum_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_enum_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_enum_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_constant_cache == '\0') {
      EditorHelpBit::doc_constant_cache = '\x01';
      EditorHelpBit::doc_constant_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_constant_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_constant_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_constant_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_property_cache == '\0') {
      EditorHelpBit::doc_property_cache = '\x01';
      EditorHelpBit::doc_property_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_property_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_property_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_property_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_theme_item_cache == '\0') {
      EditorHelpBit::doc_theme_item_cache = '\x01';
      EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_theme_item_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_method_cache == '\0') {
      EditorHelpBit::doc_method_cache = '\x01';
      EditorHelpBit::doc_method_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_method_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_method_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_method_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_signal_cache == '\0') {
      EditorHelpBit::doc_signal_cache = '\x01';
      EditorHelpBit::doc_signal_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_signal_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_signal_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_signal_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_annotation_cache != '\0') {
      return;
   }

   EditorHelpBit::doc_annotation_cache = 1;
   EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1[16])0x0;
   EditorHelpBit::doc_annotation_cache._40_8_ = 2;
   EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_annotation_cache, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* PropertySelector::~PropertySelector() */void PropertySelector::~PropertySelector(PropertySelector *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<Tree, void, TreeItem*, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<Tree,void,TreeItem*,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<Tree,void,TreeItem*,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<PropertySelector, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<PropertySelector,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<PropertySelector, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<PropertySelector,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<PropertySelector, void, Ref<InputEvent>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<PropertySelector,void,Ref<InputEvent>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */void HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator < HashMapElement<StringName,EditorHelpBit::HelpData>>>>> > *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */void HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<MethodInfo, DefaultAllocator>::~List() */void List<MethodInfo,DefaultAllocator>::~List(List<MethodInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


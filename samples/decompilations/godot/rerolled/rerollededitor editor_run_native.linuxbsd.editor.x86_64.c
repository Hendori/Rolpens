/* EditorRunNative::is_deploy_debug_remote_enabled() const */ulong EditorRunNative::is_deploy_debug_remote_enabled(void) {
   bool bVar1;
   String *pSVar2;
   undefined7 extraout_var;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
   char *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pSVar2 = (String*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_78, true);
   local_88 = "run_deploy_remote_debug";
   local_90 = 0;
   local_80 = 0x17;
   String::parse_latin1((StrRange*)&local_90);
   local_88 = "debug_options";
   local_98 = 0;
   local_80 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   EditorSettings::get_project_metadata((String*)local_58, pSVar2, (Variant*)&local_98);
   bVar1 = Variant::operator_cast_to_bool((Variant*)local_58);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT71(extraout_var, bVar1) & 0xffffffff;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorRunNative::EditorRunNative() */void EditorRunNative::EditorRunNative(EditorRunNative *this) {
   StringName *pSVar1;
   code *pcVar2;
   undefined8 uVar3;
   String *pSVar4;
   Vector2 *pVVar5;
   Object *pOVar6;
   char cVar7;
   MenuButton *this_00;
   long *plVar8;
   CallableCustom *pCVar9;
   AcceptDialog *this_01;
   RichTextLabel *this_02;
   ConfirmationDialog *this_03;
   long in_FS_OFFSET;
   float fVar10;
   Object *local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   BoxContainer::BoxContainer((BoxContainer*)this, false);
   this[0xa0c] = (EditorRunNative)0x1;
   *(undefined***)this = &PTR__initialize_classv_001068e0;
   *(undefined8*)( this + 0xa20 ) = 0;
   this[0xa28] = (EditorRunNative)0x0;
   *(undefined8*)( this + 0xa30 ) = 0;
   this[0xa38] = (EditorRunNative)0x1;
   *(undefined4*)( this + 0xa3c ) = 0xffffffff;
   *(undefined1(*) [16])( this + 0xa10 ) = (undefined1[16])0x0;
   local_58 = (Object*)0x0;
   String::parse_latin1((String*)&local_58, "Deploy to First Device in List");
   local_60 = 0;
   String::parse_latin1((String*)&local_60, "remote_deploy/deploy_to_device_1");
   ED_SHORTCUT((StrRange*)&local_68, (String*)&local_60, (String*)&local_58, 0x2400020, 0);
   if (local_68 != (Object*)0x0) {
      cVar7 = RefCounted::unreference();
      if (cVar7 != '\0') {
         cVar7 = predelete_handler(local_68);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)local_68 + 0x140 ) )(local_68);
            Memory::free_static(local_68, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)0x0;
   String::parse_latin1((String*)&local_58, "macos");
   local_60 = 0;
   String::parse_latin1((String*)&local_60, "remote_deploy/deploy_to_device_1");
   ED_SHORTCUT_OVERRIDE((String*)&local_60, (String*)&local_58, 0xa000042, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_60 = 0;
   String::parse_latin1((String*)&local_60, "Deploy to Second Device in List");
   local_58 = (Object*)0x103780;
   local_68 = (Object*)0x0;
   local_50 = 0x20;
   String::parse_latin1((StrRange*)&local_68);
   ED_SHORTCUT((String*)&local_58, (StrRange*)&local_68, (String*)&local_60, 0, 0);
   if (local_58 != (Object*)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_58;
      if (cVar7 != '\0') {
         cVar7 = predelete_handler(local_58);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   local_58 = (Object*)0x0;
   String::parse_latin1((String*)&local_58, "Deploy to Third Device in List");
   local_60 = 0;
   String::parse_latin1((String*)&local_60, "remote_deploy/deploy_to_device_3");
   ED_SHORTCUT((StrRange*)&local_68, (String*)&local_60, (String*)&local_58, 0, 0);
   if (local_68 != (Object*)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_68;
      if (cVar7 != '\0') {
         cVar7 = predelete_handler(local_68);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = (Object*)0x0;
   String::parse_latin1((String*)&local_58, "Deploy to Fourth Device in List");
   local_60 = 0;
   String::parse_latin1((String*)&local_60, "remote_deploy/deploy_to_device_4");
   ED_SHORTCUT((StrRange*)&local_68, (String*)&local_60, (String*)&local_58, 0, 0);
   if (local_68 != (Object*)0x0) {
      cVar7 = RefCounted::unreference();
      pOVar6 = local_68;
      if (cVar7 != '\0') {
         cVar7 = predelete_handler(local_68);
         if (cVar7 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   this_00 = (MenuButton*)operator_new(0xc68, "");
   local_58 = (Object*)0x0;
   MenuButton::MenuButton(this_00, (String*)&local_58);
   postinitialize_handler((Object*)this_00);
   *(MenuButton**)( this + 0xa30 ) = this_00;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   Button::set_flat(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   pSVar1 = *(StringName**)( this + 0xa30 );
   StringName::StringName((StringName*)&local_58, "RunBarButton", false);
   Control::set_theme_type_variation(pSVar1);
   if (( StringName::configured != '\0' ) && ( local_58 != (Object*)0x0 )) {
      StringName::unref();
   }

   plVar8 = (long*)MenuButton::get_popup();
   pcVar2 = *(code**)( *plVar8 + 0x108 );
   pCVar9 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar9);
   *(undefined**)( pCVar9 + 0x20 ) = &_LC4;
   *(EditorRunNative**)( pCVar9 + 0x28 ) = this;
   *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar9 = &PTR_hash_00106c58;
   *(undefined8*)( pCVar9 + 0x40 ) = 0;
   uVar3 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar9 + 0x10 ) = 0;
   *(undefined8*)( pCVar9 + 0x30 ) = uVar3;
   *(code**)( pCVar9 + 0x38 ) = start_run_native;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
   *(char**)( pCVar9 + 0x20 ) = "EditorRunNative::start_run_native";
   Callable::Callable((Callable*)&local_58, pCVar9);
   ( *pcVar2 )(plVar8, SceneStringNames::singleton + 0x240, (String*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   pSVar4 = *(String**)( this + 0xa30 );
   local_58 = (Object*)0x0;
   String::parse_latin1((String*)&local_58, "");
   local_60 = 0;
   String::parse_latin1((String*)&local_60, "Remote Deploy");
   TTR((String*)&local_68, (String*)&local_60);
   Control::set_tooltip_text(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   Node::add_child(this, *(undefined8*)( this + 0xa30 ), 0, 0);
   this_01 = (AcceptDialog*)operator_new(0xdb0, "");
   AcceptDialog::AcceptDialog(this_01);
   postinitialize_handler((Object*)this_01);
   *(AcceptDialog**)( this + 0xa18 ) = this_01;
   local_58 = (Object*)0x0;
   String::parse_latin1((String*)&local_58, "");
   local_60 = 0;
   String::parse_latin1((String*)&local_60, "Project Run");
   TTR((String*)&local_68, (String*)&local_60);
   Window::set_title((String*)this_01);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   this_02 = (RichTextLabel*)operator_new(0xcf0, "");
   local_58 = (Object*)0x0;
   RichTextLabel::RichTextLabel(this_02, (String*)&local_58);
   postinitialize_handler((Object*)this_02);
   *(RichTextLabel**)( this + 0xa10 ) = this_02;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   pVVar5 = *(Vector2**)( this + 0xa10 );
   fVar10 = (float)EditorScale::get_scale();
   local_48 = CONCAT44(fVar10 * _LC26._4_4_, fVar10 * (float)_LC26);
   Control::set_custom_minimum_size(pVVar5);
   Node::add_child(*(undefined8*)( this + 0xa18 ), *(undefined8*)( this + 0xa10 ), 0, 0);
   Node::add_child(this, *(undefined8*)( this + 0xa18 ), 0, 0);
   Window::hide();
   this_03 = (ConfirmationDialog*)operator_new(0xdb8, "");
   ConfirmationDialog::ConfirmationDialog(this_03);
   postinitialize_handler((Object*)this_03);
   *(ConfirmationDialog**)( this + 0xa20 ) = this_03;
   Node::add_child(this, this_03, 0, 0);
   plVar8 = *(long**)( this + 0xa20 );
   pcVar2 = *(code**)( *plVar8 + 0x108 );
   pCVar9 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(pCVar9);
   *(undefined**)( pCVar9 + 0x20 ) = &_LC4;
   *(undefined1(*) [16])( pCVar9 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)pCVar9 = &PTR_hash_00106ce8;
   *(undefined8*)( pCVar9 + 0x40 ) = 0;
   uVar3 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( pCVar9 + 0x10 ) = 0;
   *(undefined8*)( pCVar9 + 0x30 ) = uVar3;
   *(code**)( pCVar9 + 0x38 ) = _confirm_run_native;
   *(EditorRunNative**)( pCVar9 + 0x28 ) = this;
   CallableCustomMethodPointerBase::_setup((uint*)pCVar9, (int)pCVar9 + 0x28);
   *(char**)( pCVar9 + 0x20 ) = "EditorRunNative::_confirm_run_native";
   Callable::Callable((Callable*)&local_58, pCVar9);
   ( *pcVar2 )(plVar8, SceneStringNames::singleton + 0x268, (String*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Node::set_process(SUB81(this, 0));
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorRunNative::_notification(int) */void EditorRunNative::_notification(EditorRunNative *this, int param_1) {
   Object *pOVar1;
   Ref *pRVar2;
   code *pcVar3;
   char cVar4;
   char cVar5;
   int iVar6;
   int iVar7;
   int iVar8;
   int iVar9;
   undefined8 uVar10;
   Object *pOVar11;
   String *pSVar12;
   char *pcVar13;
   int iVar14;
   long in_FS_OFFSET;
   int local_a4;
   Object *local_80;
   Object *local_78;
   undefined8 local_70;
   Object *local_68;
   Object *local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0x11) {
      cVar4 = EditorExport::poll_export_platforms();
      if (( cVar4 != '\0' ) || ( this[0xa38] != (EditorRunNative)0x0 )) {
         uVar10 = MenuButton::get_popup();
         PopupMenu::clear(SUB81(uVar10, 0));
         local_a4 = 1;
         for (iVar9 = 0; iVar6 = EditorExport::get_export_preset_count(),iVar9 < iVar6; iVar9 = iVar9 + 1) {
            iVar6 = 0;
            EditorExport::get_export_preset((int)&local_80);
            EditorExportPreset::get_platform();
            if (local_78 != (Object*)0x0) {
               for (; iVar7 = EditorExport::get_export_platform_count(),iVar6 < iVar7; iVar6 = iVar6 + 1) {
                  EditorExport::get_export_platform((int)(CowData<char32_t>*)&local_60);
                  ( **(code**)( *(long*)local_60 + 0x1e0 ) )((StrRange*)&local_68);
                  ( **(code**)( *(long*)local_78 + 0x1e0 ) )((String*)&local_58);
                  cVar4 = String::operator ==((String*)&local_58, (String*)&local_68);
                  pOVar11 = local_58;
                  if (local_58 != (Object*)0x0) {
                     LOCK();
                     pOVar1 = local_58 + -0x10;
                     *(long*)pOVar1 = *(long*)pOVar1 + -1;
                     UNLOCK();
                     if (*(long*)pOVar1 == 0) {
                        local_58 = (Object*)0x0;
                        Memory::free_static(pOVar11 + -0x10, false);
                     }

                  }

                  pOVar11 = local_68;
                  if (local_68 != (Object*)0x0) {
                     LOCK();
                     pOVar1 = local_68 + -0x10;
                     *(long*)pOVar1 = *(long*)pOVar1 + -1;
                     UNLOCK();
                     if (*(long*)pOVar1 == 0) {
                        local_68 = (Object*)0x0;
                        Memory::free_static(pOVar11 + -0x10, false);
                     }

                  }

                  if (( ( local_60 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar11 = local_60,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
                  Memory::free_static(pOVar11, false);
               }

               if (cVar4 != '\0') goto LAB_00100b7a;
            }

            iVar6 = -1;
            LAB_00100b7a:if (*(code**)( *(long*)local_78 + 0x1f8 ) == EditorExportPlatform::get_options_count) {
               local_70 = 0;
            }
 else {
               iVar7 = ( **(code**)( *(long*)local_78 + 0x1f8 ) )();
               local_70 = 0;
               if (( 0 < iVar7 ) && ( cVar4 = EditorExportPreset::is_runnable() ),cVar4 != '\0') {
                  ( **(code**)( *(long*)local_78 + 0x1e0 ) )((CowData<char32_t>*)&local_60);
                  pcVar3 = *(code**)( *(long*)local_78 + 0x238 );
                  if (pcVar3 == EditorExportPlatform::get_run_icon) {
                     ( **(code**)( *(long*)local_78 + 0x1e8 ) )();
                  }
 else {
                     ( *pcVar3 )((String*)&local_58);
                  }

                  PopupMenu::add_icon_item(uVar10, (String*)&local_58, (CowData<char32_t>*)&local_60, 0xffffffff, 0);
                  if (( ( local_58 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar11 = local_58,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))();
                  Memory::free_static(pOVar11, false);
               }

               iVar8 = 9000;
               if (iVar7 < 0x2329) {
                  iVar8 = iVar7;
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               iVar14 = (int)uVar10;
               PopupMenu::set_item_disabled(iVar14, true);
               iVar7 = 0;
               do if (4 < local_a4) if (iVar8 <= iVar7) goto LAB_00100ba2; while ( iVar7 < iVar8 );
            }

         }

         LAB_00100ba2:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( ( local_78 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar11 = local_78,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
         Memory::free_static(pOVar11, false);
      }

   }

   if (( ( local_80 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar11 = local_80,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar11 + 0x140 ))(pOVar11);
   Memory::free_static(pOVar11, false);
}
}iVar9 = PopupMenu::get_item_count();if (iVar9 == 0) {
   BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   local_60 = (Object*)0x0;
   pSVar12 = *(String**)( this + 0xa30 );
   String::parse_latin1((String*)&local_60, "");
   pcVar13 = "No Remote Deploy export presets configured.";
}
 else {
   BaseButton::set_disabled(SUB81(*(undefined8*)( this + 0xa30 ), 0));
   local_60 = (Object*)0x0;
   pSVar12 = *(String**)( this + 0xa30 );
   String::parse_latin1((String*)&local_60, "");
   pcVar13 = "Remote Deploy";
}
local_58 = (Object*)0x0;String::parse_latin1((String*)&local_58, pcVar13);TTR((String*)&local_68, (String*)&local_58);Control::set_tooltip_text(pSVar12);CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);this[0xa38] = (EditorRunNative)0x0;}
  }
  elseif (param_1 == 0x2d) {
   pRVar2 = *(Ref**)( this + 0xa30 );
   if ((_notification(int)::{lambda()
   #1
   (iVar9 = __cxa_guard_acquire(&_notification(int)::{lambda()
   #1
   iVar9 != 0))
   {
      _scs_create((char *)&_notification(int)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &_notification(int)::{lambda()#1}::operator()()::sname,
                   &__dso_handle);
      __cxa_guard_release(&_notification(int)::{lambda()#1}::operator()()::sname);
    }
    Control::get_editor_theme_icon((StringName *)&local_58);, Button::set_button_icon(pRVar2)(( ( local_58 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar11 = local_58,cVar4 != '\0' )) && ( cVar4 = predelete_handler(local_58) ), cVar4 != '\0'));
      {
         ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
         Memory::free_static(pOVar11, false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
/* EditorRunNative::_bind_methods() */void EditorRunNative::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   int *piVar4;
   int *piVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined8 local_120;
   undefined8 local_118;
   undefined8 local_110;
   long local_108;
   undefined8 local_100;
   char *local_f8;
   undefined8 local_f0;
   undefined4 local_e8[2];
   undefined8 local_e0;
   char *local_d8;
   int local_d0;
   undefined8 local_c8;
   undefined4 local_c0;
   char *local_b8;
   undefined8 local_b0;
   CowData<char32_t> local_a8[8];
   long lStack_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78[2];
   int *local_68;
   undefined8 local_60;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_108 = 0;
   local_b8 = "EditorExportPreset";
   local_110 = 0;
   local_b0 = 0x12;
   String::parse_latin1((StrRange*)&local_110);
   local_b8 = "preset";
   local_118 = 0;
   local_b0 = 6;
   String::parse_latin1((StrRange*)&local_118);
   local_e8[0] = 0x18;
   local_e0 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_e0, (CowData*)&local_118);
   local_d8 = (char*)0x0;
   local_d0 = 0x11;
   local_c8 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_110);
   local_c0 = 6;
   if (local_d0 == 0x11) {
      StringName::StringName((StringName*)&local_b8, (String*)&local_c8, false);
      if (local_d8 == local_b8) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_d8 = local_b8;
      }

   }
 else {
      StringName::operator =((StringName*)&local_d8, (StringName*)&local_108);
   }

   local_100 = 0;
   local_b8 = "native_run";
   local_b0 = 10;
   String::parse_latin1((StrRange*)&local_100);
   _local_a8 = (undefined1[16])0x0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = 0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_100);
   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_78, (PropertyInfo*)local_e8);
   local_f8 = "EditorRunNative";
   local_120 = 0;
   local_f0 = 0xf;
   String::parse_latin1((StrRange*)&local_120);
   StringName::StringName((StringName*)&local_f8, (String*)&local_120, false);
   ClassDB::add_signal((StringName*)&local_f8, (MethodInfo*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_f8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_120);
   lVar2 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   piVar4 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_68 + -2 );
         local_68 = (int*)0x0;
         lVar6 = 0;
         piVar5 = piVar4;
         if (lVar2 != 0) {
            do {
               if (Variant::needs_deinit[*piVar5] != '\0') {
                  Variant::_clear_internal();
               }

               lVar6 = lVar6 + 1;
               piVar5 = piVar5 + 6;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(piVar4 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( lStack_a0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref(local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
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
/* EditorRunNative::start_run_native(int) */undefined4 EditorRunNative::start_run_native(EditorRunNative *this, int param_1) {
   int *piVar1;
   undefined8 uVar2;
   Object *pOVar3;
   char cVar4;
   byte bVar5;
   bool bVar6;
   bool bVar7;
   bool bVar8;
   int iVar9;
   undefined4 uVar10;
   String *pSVar11;
   long lVar12;
   int *piVar13;
   int iVar14;
   long in_FS_OFFSET;
   String *local_f0;
   Object *local_d8;
   Object *local_d0;
   long local_c8;
   undefined8 local_c0;
   String local_b8[8];
   undefined8 local_b0;
   Object *local_a8;
   Object *local_a0;
   Variant *local_98[4];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (-1 < param_1) {
      *(int*)( this + 0xa3c ) = param_1;
      cVar4 = EditorNode::ensure_main_scene(SUB81(EditorNode::singleton, 0));
      if (cVar4 != '\0') {
         EditorExport::get_export_platform((int)&local_d8);
         if (local_d8 == (Object*)0x0) {
            uVar10 = 2;
            _err_print_error("start_run_native", "editor/editor_run_native.cpp", 0x73, "Condition \"eep.is_null()\" is true. Returning: ERR_UNAVAILABLE", 0, 0);
         }
 else {
            local_d0 = (Object*)0x0;
            for (iVar14 = 0; iVar9 = EditorExport::get_export_preset_count(),iVar14 < iVar9; iVar14 = iVar14 + 1) {
               EditorExport::get_export_preset((int)(Ref<EditorExportPreset>*)&local_a8);
               cVar4 = EditorExportPreset::is_runnable();
               if (cVar4 != '\0') {
                  EditorExportPreset::get_platform();
                  if (local_d8 == local_a0) {
                     if (( ( local_a0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_a0,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

                  if (local_a8 != local_d0) {
                     local_a0 = local_d0;
                     local_d0 = local_a8;
                     if (( local_a8 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
                        local_d0 = (Object*)0x0;
                     }

                     Ref<EditorExportPreset>::unref((Ref<EditorExportPreset>*)&local_a0);
                  }

                  Ref<EditorExportPreset>::unref((Ref<EditorExportPreset>*)&local_a8);
                  break;
               }

               if (( ( local_a0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_a0,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))();
               Memory::free_static(pOVar3, false);
            }

         }

         if (( ( local_a8 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_a8,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   pSVar11 = EditorNode::singleton;
   if (local_d0 == (Object*)0x0) {
      local_a0 = (Object*)0x0;
      String::parse_latin1((String*)&local_a0, "");
      local_a8 = (Object*)0x0;
      String::parse_latin1((String*)&local_a8, "Warning!");
      TTR((String*)&local_b0, (String*)&local_a8);
      local_c0 = 0;
      String::parse_latin1((String*)&local_c0, "");
      local_c8 = 0;
      String::parse_latin1((String*)&local_c8, "No runnable export preset found for this platform.\nPlease add a runnable preset in the Export menu or define an existing preset as runnable.");
      TTR(local_b8, (String*)&local_c8);
      EditorNode::show_warning(pSVar11, local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      uVar10 = 2;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   }
 else {
      if (*(code**)( *(long*)local_d8 + 0x220 ) == EditorExportPlatform::get_device_architecture) {
         local_c8 = 0;
         String::parse_latin1((String*)&local_c8, "");
      }
 else {
         ( **(code**)( *(long*)local_d8 + 0x220 ) )(&local_c8, local_d8, param_1 % 10000);
      }

      local_f0 = (String*)&local_c8;
      if (( ( this[0xa28] == (EditorRunNative)0x0 ) && ( local_c8 != 0 ) ) && ( 1 < *(uint*)( local_c8 + -8 ) )) {
         operator+((char *)&
         local_c0,(String*)"architectures/";
         pOVar3 = local_d0;
         StringName::StringName((StringName*)&local_a0, (String*)&local_c0, false);
         Object::get((StringName*)local_78, (bool*)pOVar3);
         bVar6 = Variant::operator_cast_to_bool((Variant*)local_78);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_a0 != (Object*)0x0 )) {
            StringName::unref();
         }

         if (bVar6) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            goto LAB_00101a1c;
         }

         Variant::Variant((Variant*)local_78, local_f0);
         local_a8 = (Object*)0x0;
         String::parse_latin1((String*)&local_a8, "");
         local_b0 = 0;
         String::parse_latin1((String*)&local_b0, "Warning: The CPU architecture \"%s\" is not active in your export preset.\n\n");
         TTR((String*)&local_a0, (String*)&local_b0);
         vformat<Variant>(local_b8, (Ref<EditorExportPreset>*)&local_a0, (StringName*)local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         local_a8 = (Object*)0x0;
         String::parse_latin1((String*)&local_a8, "");
         local_b0 = 0;
         String::parse_latin1((String*)&local_b0, "Run \"Remote Deploy\" anyway?");
         TTR((String*)&local_a0, (String*)&local_b0);
         String::operator +=(local_b8, (String*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         uVar2 = *(undefined8*)( this + 0xa20 );
         local_a0 = (Object*)0x0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)local_b8);
         uVar10 = 0;
         AcceptDialog::set_text(uVar2, (Ref<EditorExportPreset>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         local_78[0] = 0;
         local_78[1] = 0;
         Window::popup_centered(*(Vector2i**)( this + 0xa20 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      }
 else {
         LAB_00101a1c:this[0xa28] = (EditorRunNative)0x0;
         EditorExportPreset::update_value_overrides();
         local_a8 = (Object*)0x0;
         if (local_d0 != (Object*)0x0) {
            local_a0 = (Object*)0x0;
            local_a8 = local_d0;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               local_a8 = (Object*)0x0;
            }

            Ref<EditorExportPreset>::unref((Ref<EditorExportPreset>*)&local_a0);
         }

         if ((start_run_native(int)::{lambda()
         #1
         ( iVar14 = __cxa_guard_acquire(&start_run_native(int)::{lambda()#1}::operator()()::sname), iVar14 != 0) );
         {
            _scs_create((char *)&start_run_native(int)::{lambda()
            #1
            __cxa_atexit(StringName::~StringName,
                           &start_run_native(int)::{lambda()
            #1
            __cxa_guard_release(&start_run_native(int)::{lambda()
            #1
         }

         Variant::Variant((Variant*)local_78, local_a8);
         local_60 = 0;
         local_58 = (undefined1[16])0x0;
         local_98[0] = (Variant*)local_78;
         ( **(code**)( *(long*)this + 0xd0 ) )(this, &start_run_native(int)::{lambda()#1}::operator()()::sname,
                       (Variant *)local_98,1);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
              Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            Ref<EditorExportPreset>::unref((Ref<EditorExportPreset> *)&local_a8);
            bVar5 = is_deploy_debug_remote_enabled();
            pSVar11 = (String *)EditorSettings::get_singleton();
            Variant::Variant((Variant *)local_98,false);
            local_a0 = (Object *)0x0;
            String::parse_latin1((String *)&local_a0,"run_file_server");
            local_a8 = (Object *)0x0;
            String::parse_latin1((String *)&local_a8,"debug_options");
            EditorSettings::get_project_metadata((String *)local_78,pSVar11,(Variant *)&local_a8);
            bVar6 = Variant::operator_cast_to_bool((Variant *)local_78);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            pSVar11 = (String *)EditorSettings::get_singleton();
            Variant::Variant((Variant *)local_98,false);
            local_a0 = (Object *)0x0;
            String::parse_latin1((String *)&local_a0,"run_debug_collisions");
            local_a8 = (Object *)0x0;
            String::parse_latin1((String *)&local_a8,"debug_options");
            EditorSettings::get_project_metadata((String *)local_78,pSVar11,(Variant *)&local_a8);
            bVar7 = Variant::operator_cast_to_bool((Variant *)local_78);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            pSVar11 = (String *)EditorSettings::get_singleton();
            Variant::Variant((Variant *)local_98,false);
            local_a0 = (Object *)0x0;
            String::parse_latin1((String *)&local_a0,"run_debug_navigation");
            local_a8 = (Object *)0x0;
            String::parse_latin1((String *)&local_a8,"debug_options");
            EditorSettings::get_project_metadata((String *)local_78,pSVar11,(Variant *)&local_a8);
            bVar8 = Variant::operator_cast_to_bool((Variant *)local_78);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
              Variant::_clear_internal();
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
            if (Variant::needs_deinit[(int)local_98[0]] != '\0') {
              Variant::_clear_internal();
            }
            lVar12 = *(long *)local_d8;
            if (*(code **)(lVar12 + 0x170) == EditorExportPlatform::clear_messages) {
              if ((*(long *)(local_d8 + 0x188) != 0) &&
                 (*(long *)(*(long *)(local_d8 + 0x188) + -8) != 0)) {
                CowData<EditorExportPlatform::ExportMessage>::_unref
                          ((CowData<EditorExportPlatform::ExportMessage> *)(local_d8 + 0x188));
                lVar12 = *(long *)local_d8;
              }
            }
            else {
              (**(code **)(lVar12 + 0x170))();
              lVar12 = *(long *)local_d8;
            }
            uVar10 = 0;
            if (*(code **)(lVar12 + 0x230) != EditorExportPlatform::run) {
              uVar10 = (**(code **)(lVar12 + 0x230))
                                 (local_d8,&local_d0,param_1 % 10000,
                                  (ulong)bVar8 << 4 |
                                  (ulong)bVar5 * 2 | (ulong)bVar6 | (ulong)bVar7 << 3);
            }
            RichTextLabel::clear();
            cVar4 = (**(code **)(*(long *)local_d8 + 0x1b0))
                              (local_d8,*(undefined8 *)(this + 0xa10),uVar10);
            if (cVar4 != '\0') {
              if (*(code **)(*(long *)local_d8 + 0x1a8) ==
                  EditorExportPlatform::get_worst_message_type) {
                piVar13 = *(int **)(local_d8 + 0x188);
                if ((piVar13 == (int *)0x0) || (lVar12 = *(long *)(piVar13 + -2), lVar12 < 1))
                goto LAB_00101e08;
                iVar14 = 0;
                piVar1 = piVar13 + lVar12 * 6;
                if (((int)lVar12 * 3 & 1U) != 0) {
                  if (0 < *piVar13) {
                    iVar14 = *piVar13;
                  }
                  piVar13 = piVar13 + 6;
                  if (piVar13 == piVar1) goto LAB_00101de8;
                }do{if (iVar14 < *piVar13) {
                    iVar14 = *piVar13;
                  }
                  if (iVar14 < piVar13[6]) {
                    iVar14 = piVar13[6];
                  }piVar13 = piVar13 + 0xc;}(piVar13 != piVar1);}(**(code**)( *(long*)local_d8 + 0x1a8 ))()(2 < iVar14), {
                Window::popup_centered_ratio(_LC66));
      }

   }

}
LAB_00101e08:CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);}if (( ( local_d0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),pOVar3 = local_d0,cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);Memory::free_static(pOVar3, false);}
      }if (( ( local_d8 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_d8 + 0x140 ))(local_d8);Memory::free_static(local_d8, false);}goto LAB_001017af;}
  }uVar10 = 0;LAB_001017af:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar10;}/* EditorRunNative::resume_run_native() */void EditorRunNative::resume_run_native(EditorRunNative *this) {
   start_run_native(this, *(int*)( this + 0xa3c ));
   return;
}
/* EditorRunNative::_confirm_run_native() */void EditorRunNative::_confirm_run_native(EditorRunNative *this) {
   this[0xa28] = (EditorRunNative)0x1;
   start_run_native(this, *(int*)( this + 0xa3c ));
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
/* Control::_top_level_changed() */void Control::_top_level_changed(void) {
   return;
}
/* EditorExportPlatform::get_worst_message_type() const */int EditorExportPlatform::get_worst_message_type(EditorExportPlatform *this) {
   int *piVar1;
   long lVar2;
   int *piVar3;
   int iVar4;
   piVar3 = *(int**)( this + 0x188 );
   if (( piVar3 == (int*)0x0 ) || ( lVar2 = lVar2 < 1 )) {
      return 0;
   }

   iVar4 = 0;
   piVar1 = piVar3 + lVar2 * 6;
   if (( (int)lVar2 * 3 & 1U ) != 0) {
      iVar4 = 0;
      if (0 < *piVar3) {
         iVar4 = *piVar3;
      }

      piVar3 = piVar3 + 6;
      if (piVar1 == piVar3) {
         return iVar4;
      }

   }

   do {
      if (iVar4 < *piVar3) {
         iVar4 = *piVar3;
      }

      if (iVar4 < piVar3[6]) {
         iVar4 = piVar3[6];
      }

      piVar3 = piVar3 + 0xc;
   }
 while ( piVar1 != piVar3 );
   return iVar4;
}
/* EditorExportPlatform::get_options_count() const */undefined8 EditorExportPlatform::get_options_count(void) {
   return 0;
}
/* EditorExportPlatform::run(Ref<EditorExportPreset> const&, int,
   BitField<EditorExportPlatform::DebugFlags>) */undefined8 EditorExportPlatform::run(void) {
   return 0;
}
/* EditorExportPlatform::get_run_icon() const */void EditorExportPlatform::get_run_icon(void) {
   long lVar1;
   long *in_RSI;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *in_RSI + 0x1e8 ) )();
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorRunNative, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorRunNative,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorRunNative,void> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorRunNative, Error, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorRunNative,Error,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorRunNative,Error,int> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorRunNative, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorRunNative,void>::get_argument_count(CallableCustomMethodPointer<EditorRunNative,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<EditorRunNative, Error, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorRunNative,Error,int>::get_argument_count(CallableCustomMethodPointer<EditorRunNative,Error,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<EditorRunNative, Error, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorRunNative,Error,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorRunNative,Error,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<EditorRunNative, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorRunNative,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorRunNative,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* EditorRunNative::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorRunNative::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* EditorRunNative::_property_can_revertv(StringName const&) const */undefined8 EditorRunNative::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00109008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointer<EditorRunNative, Error, int>::get_object() const */undefined8 CallableCustomMethodPointer<EditorRunNative,Error,int>::get_object(CallableCustomMethodPointer<EditorRunNative,Error,int> *this) {
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
         goto LAB_0010277d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010277d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010277d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<EditorRunNative, void>::get_object() const */undefined8 CallableCustomMethodPointer<EditorRunNative,void>::get_object(CallableCustomMethodPointer<EditorRunNative,void> *this) {
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
         goto LAB_0010287d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010287d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010287d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* EditorRunNative::_validate_propertyv(PropertyInfo&) const */void EditorRunNative::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00109010 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* EditorRunNative::_setv(StringName const&, Variant const&) */undefined8 EditorRunNative::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00109018 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x00102a48) *//* EditorRunNative::_getv(StringName const&, Variant&) const */undefined8 EditorRunNative::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00109020 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* EditorRunNative::is_class_ptr(void*) const */ulong EditorRunNative::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   if (in_RSI == &HBoxContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static()::ptr) {
      return CONCAT71(0x106e, in_RSI == &HBoxContainer::get_class_ptr_static() || in_RSI == &get_class_ptr_static(), ::ptr);
   }

   return ( ulong )((uint)CONCAT71(0x106e, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106e, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106e, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106e, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x106e, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr));
}
/* EditorRunNative::~EditorRunNative() */void EditorRunNative::~EditorRunNative(EditorRunNative *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = __cxa_guard_acquire;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102b40;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102b40:Control::~Control((Control*)this);
   return;
}
/* EditorRunNative::~EditorRunNative() */void EditorRunNative::~EditorRunNative(EditorRunNative *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = __cxa_guard_acquire;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00102ba0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00102ba0:Control::~Control((Control*)this);
   operator_delete(this, 0xa40);
   return;
}
/* EditorRunNative::_get_class_namev() const */undefined8 *EditorRunNative::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102c03:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102c03;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorRunNative");
         goto LAB_00102c6e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorRunNative");
   LAB_00102c6e:return &_get_class_namev();
}
/* EditorExportPlatform::get_option_tooltip(int) const */undefined8 EditorExportPlatform::get_option_tooltip(int param_1) {
   long lVar1;
   undefined4 in_register_0000003c;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)CONCAT44(in_register_0000003c, param_1) = 0;
   String::parse_latin1((StrRange*)CONCAT44(in_register_0000003c, param_1));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT44(in_register_0000003c, param_1);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlatform::get_option_label(int) const */undefined8 EditorExportPlatform::get_option_label(int param_1) {
   long lVar1;
   undefined4 in_register_0000003c;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)CONCAT44(in_register_0000003c, param_1) = 0;
   String::parse_latin1((StrRange*)CONCAT44(in_register_0000003c, param_1));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT44(in_register_0000003c, param_1);
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPlatform::get_device_architecture(int) const */undefined8 EditorExportPlatform::get_device_architecture(int param_1) {
   long lVar1;
   undefined4 in_register_0000003c;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)CONCAT44(in_register_0000003c, param_1) = 0;
   String::parse_latin1((StrRange*)CONCAT44(in_register_0000003c, param_1));
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return CONCAT44(in_register_0000003c, param_1);
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
/* WARNING: Removing unreachable block (ram,0x00102f80) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00109028 != Container::_notification) {
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

   if ((code*)PTR__notification_00109028 == Container::_notification) {
      return;
   }

   BoxContainer::_notification(iVar1);
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
/* WARNING: Removing unreachable block (ram,0x001032e8) *//* String vformat<int>(String const&, int const) */String *vformat<int>(String *param_1, int param_2) {
   char cVar1;
   Variant *this;
   int in_EDX;
   undefined4 in_register_00000034;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_EDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_b8[0];
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
/* WARNING: Removing unreachable block (ram,0x00103598) *//* String vformat<Variant>(String const&, Variant const) */undefined8 *vformat<Variant>(undefined8 *param_1, bool *param_2, Variant *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x00103aa0) *//* EditorRunNative::_notificationv(int, bool) */void EditorRunNative::_notificationv(EditorRunNative *this, int param_1, bool param_2) {
   int iVar1;
   if (param_2) {
      _notification(this, param_1);
      iVar1 = (int)this;
      if ((code*)PTR__notification_00109028 != Container::_notification) {
         BoxContainer::_notification(iVar1);
      }

      for (int i = 0; i < 4; i++) {
         Container::_notification(iVar1);
      }

      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   _notification(this, param_1);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* EditorRunNative::get_class() const */void EditorRunNative::get_class(void) {
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

         LAB_00103cf7:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00103cf7;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* CallableCustomMethodPointer<EditorRunNative, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<EditorRunNative,void>::call(CallableCustomMethodPointer<EditorRunNative,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_00103eef;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_00103eef;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00103ec8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00103fa0;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00103eef:local_40 = 0;
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

   LAB_00103fa0:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorRunNative, Error, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<EditorRunNative,Error,int>::call(CallableCustomMethodPointer<EditorRunNative,Error,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   uint uVar6;
   ulong *puVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   CowData<char32_t> aCStack_68[8];
   CowData<char32_t> local_60[8];
   undefined8 local_58;
   String local_50[8];
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_50[0] = (String)0x0;
         LOCK();
         bVar9 = (char)ObjectDB::spin_lock == '\0';
         if (bVar9) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar9) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar7[1] != 0) {
            lVar1 = *(long*)( this + 0x28 );
            pcVar8 = *(code**)( this + 0x38 );
            lVar2 = *(long*)( this + 0x40 );
            if ((uint)param_2 < 2) {
               if (param_2 == 0) {
                  *(undefined4*)param_4 = 4;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
 else {
                  *(undefined4*)param_4 = 0;
                  if (( (ulong)pcVar8 & 1 ) != 0) {
                     pcVar8 = *(code**)( pcVar8 + *(long*)( lVar1 + lVar2 ) + -1 );
                  }

                  cVar4 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
                  uVar3 = _LC39;
                  if (cVar4 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar3;
                  }

                  iVar5 = Variant::operator_cast_to_int(*param_1);
                  iVar5 = ( *pcVar8 )((long*)( lVar1 + lVar2 ), iVar5);
                  Variant::Variant((Variant*)local_48, iVar5);
                  if (Variant::needs_deinit[*(int*)param_3] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)param_3 = local_48[0];
                  *(undefined8*)( param_3 + 8 ) = local_40;
                  *(undefined8*)( param_3 + 0x10 ) = uStack_38;
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0010407e;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_58 = 0;
   String::parse_latin1((String*)&local_58, "\', can\'t call method.");
   uitos((ulong)aCStack_68);
   operator+((char *)
   local_60,(String*)"Invalid Object id \'";
   String::operator +(local_50, (String*)local_60);
   _err_print_error(&_LC38, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_50, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref(aCStack_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   LAB_0010407e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CanvasItem::is_class(String const&) const */undefined8 CanvasItem::is_class(CanvasItem *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010434b;
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
         if (cVar5 != '\0') goto LAB_0010434b;
      }

      cVar5 = String::operator ==(param_1, "Node");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Object::is_class((Object*)this, param_1);
            return uVar6;
         }

         goto LAB_0010444e;
      }

   }

   LAB_0010434b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010444e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

      if (cVar5 != '\0') goto LAB_0010456b;
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
         if (cVar5 != '\0') goto LAB_0010456b;
      }

      cVar5 = String::operator ==(param_1, "Control");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = CanvasItem::is_class((CanvasItem*)this, param_1);
            return uVar6;
         }

         goto LAB_0010466e;
      }

   }

   LAB_0010456b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010466e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorRunNative::is_class(String const&) const */undefined8 EditorRunNative::is_class(EditorRunNative *this, String *param_1) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar4 + 0x10 ));
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

      if (cVar5 != '\0') goto LAB_00104783;
   }

   cVar5 = String::operator ==(param_1, "EditorRunNative");
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
         if (cVar5 != '\0') goto LAB_00104783;
      }

      cVar5 = String::operator ==(param_1, "HBoxContainer");
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
            if (cVar5 != '\0') goto LAB_00104783;
         }

         cVar5 = String::operator ==(param_1, "BoxContainer");
         if (cVar5 == '\0') {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar6 = Container::is_class((Container*)this, param_1);
               return uVar6;
            }

            goto LAB_0010491e;
         }

      }

   }

   LAB_00104783:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010491e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
            if (pvVar3 == (void*)0x0) goto LAB_00104a1f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00104a1f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   long local_98;
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
   local_78 = &_LC41;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC41;
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

   if ((code*)PTR__get_property_list_00109030 != Object::_get_property_list) {
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

   if ((code*)PTR__get_property_list_00109038 != CanvasItem::_get_property_list) {
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
/* EditorRunNative::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorRunNative::_get_property_listv(EditorRunNative *this, List *param_1, bool param_2) {
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
      HBoxContainer::_get_property_listv((HBoxContainer*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorRunNative";
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorRunNative";
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

   StringName::StringName((StringName*)&local_78, "EditorRunNative", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         HBoxContainer::_get_property_listv((HBoxContainer*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorRunNative::_bind_methods() [clone .cold] */void EditorRunNative::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorRunNative::_initialize_classv() */void EditorRunNative::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   undefined8 local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (HBoxContainer::initialize_class() == '\0') {
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
                        if ((code*)PTR__bind_methods_00109050 != Node::_bind_methods) {
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
                     if ((code*)PTR__bind_compatibility_methods_00109040 != Object::_bind_compatibility_methods) {
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
            if ((code*)PTR__bind_methods_00109048 != Container::_bind_methods) {
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
         HBoxContainer::initialize_class()::initialized =
         '\x01';
      }

      local_50 = 0;
      String::parse_latin1((String*)&local_50, "HBoxContainer");
      StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "EditorRunNative");
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
/* Ref<EditorExportPreset>::unref() */void Ref<EditorExportPreset>::unref(Ref<EditorExportPreset> *this) {
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
/* CowData<EditorExportPlatform::ExportMessage>::_unref() */void CowData<EditorExportPlatform::ExportMessage>::_unref(CowData<EditorExportPlatform::ExportMessage> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   CowData<char32_t> *this_00;
   long lVar6;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            this_00 = (CowData<char32_t>*)( lVar2 + 0x10 );
            lVar6 = 0;
            do {
               CowData<char32_t>::_unref(this_00);
               if (*(long*)( this_00 + -8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( this_00 + -8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( this_00 + -8 );
                     *(undefined8*)( this_00 + -8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar6 = lVar6 + 1;
               this_00 = this_00 + 0x18;
            }
 while ( lVar3 != lVar6 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* EditorExportPlatform::clear_messages() */void EditorExportPlatform::clear_messages(EditorExportPlatform *this) {
   if (( *(long*)( this + 0x188 ) != 0 ) && ( *(long*)( *(long*)( this + 0x188 ) + -8 ) != 0 )) {
      CowData<EditorExportPlatform::ExportMessage>::_unref((CowData<EditorExportPlatform::ExportMessage>*)( this + 0x188 ));
      return;
   }

   return;
}
/* EditorRunNative::_notification(int) */void EditorRunNative::_GLOBAL__sub_I__notification(void) {
   undefined8 uStack_18;
   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (MenuButton::base_property_helper == '\0') {
      MenuButton::base_property_helper = '\x01';
      MenuButton::base_property_helper._64_8_ = 0;
      MenuButton::base_property_helper._0_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._24_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._40_16_ = (undefined1[16])0x0;
      MenuButton::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, MenuButton::base_property_helper, &__dso_handle);
   }

   ENV_SCRIPT_ENCRYPTION_KEY = 0;
   String::parse_latin1((String*)&ENV_SCRIPT_ENCRYPTION_KEY, "GODOT_SCRIPT_ENCRYPTION_KEY");
   __cxa_atexit(String::~String, &ENV_SCRIPT_ENCRYPTION_KEY, &__dso_handle);
   if (EditorExport::_export_presets_updated == '\0') {
      EditorExport::_export_presets_updated = '\x01';
      EditorExport::_export_presets_updated = 0;
      __cxa_atexit(StringName::~StringName, &EditorExport::_export_presets_updated, &__dso_handle);
   }

   if (EditorExport::_export_presets_runnable_updated != '\0') {
      return;
   }

   EditorExport::_export_presets_runnable_updated = 1;
   EditorExport::_export_presets_runnable_updated = 0;
   __cxa_atexit(StringName::~StringName, &EditorExport::_export_presets_runnable_updated, &__dso_handle, uStack_18);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorRunNative::~EditorRunNative() */void EditorRunNative::~EditorRunNative(EditorRunNative *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorRunNative, Error, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorRunNative,Error,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorRunNative,Error,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorRunNative, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorRunNative,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorRunNative,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


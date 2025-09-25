/* RenameDialog::_features_toggled(bool) */void RenameDialog::_features_toggled(RenameDialog *this, bool param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1) {
      CanvasItem::show();
   }
 else {
      CanvasItem::hide();
   }

   Window::get_size();
   Window::set_size((Vector2i*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RenameDialog::_update_substitute() */void RenameDialog::_update_substitute(RenameDialog *this) {
   long lVar1;
   lVar1 = Viewport::gui_get_focus_owner();
   if (lVar1 != 0) {
      __dynamic_cast(lVar1, &Object::typeinfo, &LineEdit::typeinfo, 0);
   }

   for (int i = 0; i < 6; i++) {
      BaseButton::set_disabled(SUB81(*(undefined8*)( this + ( 8*i + 3600 ) ), 0));
   }

   for (int i = 0; i < 6; i++) {
      Control::set_focus_mode(*(undefined8*)( this + ( 8*i + 3600 ) ), 0);
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
/* RenameDialog::_is_main_field(LineEdit*) */bool RenameDialog::_is_main_field(RenameDialog *this, LineEdit *param_1) {
   bool bVar1;
   bVar1 = false;
   if (( ( ( param_1 != (LineEdit*)0x0 ) && ( bVar1 = true * (LineEdit**)( this + 0xdc8 ) != param_1 ) ) && ( *(LineEdit**)( this + 0xdd0 ) != param_1 ) ) && ( *(LineEdit**)( this + 0xdd8 ) != param_1 )) {
      bVar1 = *(LineEdit**)( this + 0xde0 ) == param_1;
   }

   return bVar1;
}
/* RenameDialog::_error_handler(void*, char const*, char const*, int, char const*, char const*,
   bool, ErrorHandlerType) */void RenameDialog::_error_handler(undefined8 param_1_00, undefined8 param_2, long param_1, undefined8 param_4, int param_5, undefined8 param_6_00, int param_7, char *param_6) {
   String *pSVar1;
   StringName *pSVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   Object *pOVar7;
   long in_FS_OFFSET;
   CowData<char32_t> local_98[8];
   char *local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined8 local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   String::utf8((char*)local_98, param_5);
   if (( *(char*)( param_1 + 0xea8 ) == '\0' ) && ( iVar6 = iVar6 != -1 )) {
      local_90 = (char*)0x0;
      if (( param_6 == (char*)0x0 ) || ( *param_6 == '\0' )) {
         String::utf8((char*)&local_68, param_7);
      }
 else {
         String::utf8((char*)&local_68, (int)param_6);
      }

      if (local_68 != (char*)0x0) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         local_90 = local_68;
         local_68 = (char*)0x0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      *(undefined1*)( param_1 + 0xea8 ) = 1;
      pSVar1 = *(String**)( param_1 + 0xe68 );
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "Regular Expression Error:";
      local_78 = 0;
      local_60 = 0x19;
      String::parse_latin1((StrRange*)&local_78);
      TTR((String*)&local_68, (String*)&local_78);
      Label::set_text(pSVar1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      pSVar2 = *(StringName**)( param_1 + 0xe70 );
      pOVar7 = *(Object**)( EditorNode::singleton + 0x838 );
      if (pOVar7 == (Object*)0x0) {
         /* WARNING: Does not return */
         pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      cVar5 = RefCounted::reference();
      uVar4 = EditorStringNames::singleton;
      if (cVar5 == '\0') {
         pOVar7 = (Object*)0x0;
      }

      pcVar3 = *(code**)( *(long*)pOVar7 + 0x1e8 );
      if ((_error_handler(void*,char_const*,char_const*,int,char_const*,char_const*,bool,ErrorHandlerType)
         ::{lambda()
      #1
      (iVar6 = __cxa_guard_acquire(&_error_handler(void*,char_const*,char_const*,int,char_const*,char_const*,bool,ErrorHandlerType)
                                     ::{lambda()
      #1
      _scs_create((char *)&_error_handler(void*,char_const*,char_const*,int,char_const*,char_const*,bool,ErrorHandlerType)
                           ::
      {
         lambda()
         #1
         __cxa_atexit(StringName::~StringName,
                   &_error_handler(void*,char_const*,char_const*,int,char_const*,char_const*,bool,ErrorHandlerType)
                    ::
         {
            lambda()
            #1
            __cxa_guard_release (&_error_handler(void*,char_const*,char_const*,int,char_const*,char_const*,bool,ErrorHandlerType)
                           ::{lambda();
            #1
         }

         local_58 = (*pcVar3)(pOVar7,&_error_handler(void*,char_const*,char_const*,int,char_const*,char_const*,bool,ErrorHandlerType)
                                 ::{lambda()
         #1
         local_50 = param_2;
         Control::add_theme_color_override(pSVar2, (Color*)( SceneStringNames::singleton + 0xb0 ));
         cVar5 = RefCounted::unreference();
         if (( cVar5 != '\0' ) && ( cVar5 = cVar5 != '\0' )) {
            ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
            Memory::free_static(pOVar7, false);
         }

         pSVar1 = *(String**)( param_1 + 0xe70 );
         local_70 = 0;
         if (local_90 != (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_90);
         }

         local_80 = 0;
         local_68 = "";
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_80);
         local_68 = "At character %s";
         local_88 = 0;
         local_60 = 0xf;
         String::parse_latin1((StrRange*)&local_88);
         TTR((String*)&local_78, (String*)&local_88);
         vformat<String>((CowData<char32_t>*)&local_68, (StrRange*)&local_78, (StrRange*)&local_70);
         Label::set_text(pSVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      }

      CowData<char32_t>::_unref(local_98);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RenameDialog::_substitute(String const&, Node const*, int) */
   RenameDialog * RenameDialog::_substitute(RenameDialog * this, String * param_1, Node * param_2, int, param_3);
   {
      char *pcVar1;
      long *plVar2;
      long lVar3;
      undefined4 in_register_0000000c;
      long *plVar4;
      long in_FS_OFFSET;
      CowData<char32_t> local_88[8];
      String local_80[8];
      undefined8 local_78;
      long local_70;
      undefined8 local_68;
      undefined8 local_60;
      char *local_58;
      undefined8 local_50;
      long local_40;
      plVar4 = (long*)CONCAT44(in_register_0000000c, param_3);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_78 = 0;
      local_58 = "d";
      local_50 = 1;
      String::parse_latin1((StrRange*)&local_78);
      Range::get_value();
      itos((long)local_88);
      operator+((char *)
      local_80,(String*)&_LC33;
      String::operator +((String*)&local_70, local_80);
      vformat<int>((String*)&local_68, (int)(String*)&local_70);
      local_58 = "${COUNTER}";
      local_60 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange*)&local_60);
      String::replace((String*)this, (String*)param_2);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      CowData<char32_t>::_unref(local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (plVar4 != (long*)0x0) {
         Node::get_name();
         if (local_70 == 0) {
            local_60 = 0;
         }
 else {
            local_60 = 0;
            if (*(char**)( local_70 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_70 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_60, *(char**)( local_70 + 8 ));
            }

         }

         local_68 = 0;
         local_58 = "${NAME}";
         local_50 = 7;
         String::parse_latin1((StrRange*)&local_68);
         String::replace((String*)&local_58, (String*)this);
         if (*(char**)this != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)this);
            pcVar1 = local_58;
            local_58 = (char*)0x0;
            *(char**)this = pcVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         ( **(code**)( *plVar4 + 0x48 ) )((String*)&local_68, plVar4);
         local_58 = "${TYPE}";
         local_60 = 0;
         local_50 = 7;
         String::parse_latin1((StrRange*)&local_60);
         String::replace((String*)&local_58, (String*)this);
         if (*(char**)this != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)this);
            pcVar1 = local_58;
            local_58 = (char*)0x0;
            *(char**)this = pcVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      }

      EditorData::get_edited_scene();
      EditorData::get_scene_title((int)(String*)&local_68, (bool)( (char)EditorNode::singleton + '0' ));
      local_58 = "${SCENE}";
      local_60 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_60);
      String::replace((String*)&local_58, (String*)this);
      if (*(char**)this != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)this);
         pcVar1 = local_58;
         local_58 = (char*)0x0;
         *(char**)this = pcVar1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      plVar2 = (long*)SceneTree::get_edited_scene_root();
      if (plVar2 == (long*)0x0) {
         if (plVar4 == (long*)0x0) goto LAB_00100c08;
         lVar3 = Node::get_parent();
         if (lVar3 == 0) goto LAB_00100c08;
      }
 else {
         Node::get_name();
         if (local_70 == 0) {
            local_60 = 0;
         }
 else {
            local_60 = 0;
            if (*(char**)( local_70 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_70 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_60, *(char**)( local_70 + 8 ));
            }

         }

         local_68 = 0;
         local_58 = "${ROOT}";
         local_50 = 7;
         String::parse_latin1((StrRange*)&local_68);
         String::replace((String*)&local_58, (String*)this);
         if (*(char**)this != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)this);
            pcVar1 = local_58;
            local_58 = (char*)0x0;
            *(char**)this = pcVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         if (plVar4 == (long*)0x0) goto LAB_00100c08;
         lVar3 = Node::get_parent();
         if (lVar3 == 0) goto LAB_00100c08;
         if (plVar4 == plVar2) {
            String::replace((char*)&local_58, (char*)this);
            if (*(char**)this != local_58) {
               CowData<char32_t>::_unref((CowData<char32_t>*)this);
               pcVar1 = local_58;
               local_58 = (char*)0x0;
               *(char**)this = pcVar1;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            goto LAB_00100c08;
         }

      }

      Node::get_name();
      if (local_70 == 0) {
         local_60 = 0;
      }
 else {
         local_60 = 0;
         if (*(char**)( local_70 + 8 ) == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_70 + 0x10 ));
         }
 else {
            String::parse_latin1((String*)&local_60, *(char**)( local_70 + 8 ));
         }

      }

      local_68 = 0;
      local_58 = "${PARENT}";
      local_50 = 9;
      String::parse_latin1((StrRange*)&local_68);
      String::replace((String*)&local_58, (String*)this);
      if (*(char**)this != local_58) {
         CowData<char32_t>::_unref((CowData<char32_t>*)this);
         pcVar1 = local_58;
         local_58 = (char*)0x0;
         *(char**)this = pcVar1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      LAB_00100c08:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return this;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RenameDialog::_bind_methods() */
   void RenameDialog::_bind_methods(void) {
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
      pMVar4 = create_method_bind<RenameDialog>(rename);
      StringName::StringName((StringName*)local_68, "rename", false);
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

   /* RenameDialog::_regex(String const&, String const&, String const&) */
   String *RenameDialog::_regex(String *param_1, String *param_2, String *param_3) {
      bool in_CL;
      int in_R8D;
      long in_FS_OFFSET;
      RegEx aRStack_1c8[408];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      RegEx::RegEx(aRStack_1c8, param_3);
      RegEx::sub(param_1, (String*)aRStack_1c8, in_CL, in_R8D, 1);
      RegEx::~RegEx(aRStack_1c8);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RenameDialog::_postprocess(String const&) */
   String *RenameDialog::_postprocess(String *param_1) {
      long lVar1;
      char cVar2;
      int iVar3;
      int iVar4;
      Variant *pVVar5;
      int iVar6;
      CowData *in_RDX;
      int iVar7;
      long in_FS_OFFSET;
      Array local_218[8];
      undefined8 local_210;
      undefined8 local_208;
      long local_200;
      int local_1f8[8];
      RegEx local_1d8[408];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      iVar3 = OptionButton::get_selected();
      *(undefined8*)param_1 = 0;
      if (*(long*)in_RDX != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)param_1, in_RDX);
      }

      if (iVar3 == 1) {
         String::to_snake_case();
         if (*(long*)param_1 != local_200) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar1 = local_200;
            local_200 = 0;
            *(long*)param_1 = lVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
         local_208 = 0;
         String::parse_latin1((String*)&local_208, "_");
         local_210 = 0;
         String::parse_latin1((String*)&local_210, "_+");
         RegEx::RegEx(local_1d8, (String*)&local_210);
         RegEx::sub((String*)&local_200, (String*)local_1d8, SUB81(param_1, 0), (int)(String*)&local_208, 1);
         RegEx::~RegEx(local_1d8);
         if (*(long*)param_1 != local_200) {
            CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar1 = local_200;
            local_200 = 0;
            *(long*)param_1 = lVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_210);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
      }
 else if (iVar3 == 2) {
         local_200 = 0;
         String::parse_latin1((String*)&local_200, "_+(.?)");
         RegEx::RegEx(local_1d8, (String*)&local_200);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
         iVar6 = (int)param_1;
         RegEx::search_all((String*)&local_200, (int)local_1d8, iVar6);
         Array::Array(local_218, (Array*)&local_200);
         Array::~Array((Array*)&local_200);
         iVar3 = Array::size();
         if (( iVar3 != 0 ) && ( cVar2 = String::operator !=(param_1, "_") ),cVar2 != '\0') {
            iVar3 = 0;
            local_210 = 0;
            while (true) {
               iVar4 = Array::size();
               iVar7 = (int)(String*)&local_200;
               if (iVar4 <= iVar3) break;
               Array::operator []((int)local_218);
               pVVar5 = (Variant*)Variant::get_validated_object();
               if (( ( pVVar5 != (Variant*)0x0 ) && ( pVVar5 = (Variant*)__dynamic_cast(pVVar5, &Object::typeinfo, &RegExMatch::typeinfo, 0) ),pVVar5 != (Variant*)0x0 )) {
                  pVVar5 = (Variant*)0x0;
               }

               Variant::Variant((Variant*)local_1f8, 1);
               RegExMatch::get_start(pVVar5);
               if (Variant::needs_deinit[local_1f8[0]] != '\0') {
                  Variant::_clear_internal();
               }

               cVar2 = RefCounted::unreference();
               if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)pVVar5) ),cVar2 != '\0') {
                  ( **(code**)( *(long*)pVVar5 + 0x140 ) )(pVVar5);
                  Memory::free_static(pVVar5, false);
               }

               iVar3 = iVar3 + 1;
               String::substr(iVar7, iVar6);
               String::operator +=((String*)&local_210, (String*)&local_200);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
               String::substr((int)(CowData<char32_t>*)&local_208, iVar6);
               String::to_upper();
               String::operator +=((String*)&local_210, (String*)&local_200);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
            }
;
            String::substr(iVar7, iVar6);
            String::operator +=((String*)&local_210, (String*)&local_200);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
            String::to_pascal_case();
            if (*(long*)param_1 != local_200) {
               CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
               lVar1 = local_200;
               local_200 = 0;
               *(long*)param_1 = lVar1;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_210);
         }

         Array::~Array(local_218);
         RegEx::~RegEx(local_1d8);
      }

      iVar3 = OptionButton::get_selected();
      if (iVar3 == 1) {
         String::to_lower();
         if (*(long*)param_1 != local_200) {
            LAB_0010114a:CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar1 = local_200;
            local_200 = 0;
            *(long*)param_1 = lVar1;
         }

      }
 else {
         if (iVar3 != 2) goto LAB_00101007;
         String::to_upper();
         if (*(long*)param_1 != local_200) goto LAB_0010114a;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
      LAB_00101007:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* RenameDialog::_apply_rename(Node const*, int) */
   RenameDialog * RenameDialog::_apply_rename(RenameDialog * this, Node * param_1, int, param_2);
   {
      char *pcVar1;
      char cVar2;
      long in_FS_OFFSET;
      char *local_210;
      char *local_208;
      char *local_200;
      char *local_1f8;
      long local_1f0;
      char *local_1e8;
      size_t local_1e0;
      RegEx local_1d8[408];
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      for (int i = 0; i < 4; i++) {
         LineEdit::get_text();
      }

      Node::get_name();
      if (local_1f0 == 0) {
         *(undefined8*)this = 0;
      }
 else {
         pcVar1 = *(char**)( local_1f0 + 8 );
         *(undefined8*)this = 0;
         if (pcVar1 == (char*)0x0) {
            if (*(long*)( local_1f0 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)( local_1f0 + 0x10 ));
               goto LAB_00101547;
            }

            if (StringName::configured == '\0') goto LAB_00101560;
         }
 else {
            local_1e0 = strlen(pcVar1);
            local_1e8 = pcVar1;
            String::parse_latin1((StrRange*)this);
            LAB_00101547:if (( StringName::configured == '\0' ) || ( local_1f0 == 0 )) goto LAB_00101560;
         }

         StringName::unref();
      }

      LAB_00101560:cVar2 = BaseButton::is_pressed();
      if (cVar2 != '\0') {
         _substitute((RenameDialog*)&local_1e8, (String*)param_1, (Node*)&local_210, param_2);
         if (local_210 != local_1e8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_210);
            local_210 = local_1e8;
            local_1e8 = (char*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         _substitute((RenameDialog*)&local_1e8, (String*)param_1, (Node*)&local_208, param_2);
         if (local_208 != local_1e8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
            local_208 = local_1e8;
            local_1e8 = (char*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         _substitute((RenameDialog*)&local_1e8, (String*)param_1, (Node*)&local_200, param_2);
         if (local_200 != local_1e8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
            local_200 = local_1e8;
            local_1e8 = (char*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
         _substitute((RenameDialog*)&local_1e8, (String*)param_1, (Node*)&local_1f8, param_2);
         if (local_1f8 != local_1e8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
            local_1f8 = local_1e8;
            local_1e8 = (char*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
      }

      cVar2 = BaseButton::is_pressed();
      if (cVar2 == '\0') {
         String::replace((String*)&local_1e8, (String*)this);
         if (*(char**)this == local_1e8) goto LAB_001015f1;
      }
 else {
         RegEx::RegEx(local_1d8, (String*)&local_210);
         RegEx::sub((String*)&local_1e8, (String*)local_1d8, SUB81(this, 0), (int)(Node*)&local_208, 1);
         RegEx::~RegEx(local_1d8);
         if (*(char**)this == local_1e8) goto LAB_001015f1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)this);
      pcVar1 = local_1e8;
      local_1e8 = (char*)0x0;
      *(char**)this = pcVar1;
      LAB_001015f1:CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
      String::operator +((String*)&local_1f0, (String*)&local_200);
      String::operator +((String*)&local_1e8, (String*)&local_1f0);
      if (*(char**)this != local_1e8) {
         CowData<char32_t>::_unref((CowData<char32_t>*)this);
         pcVar1 = local_1e8;
         local_1e8 = (char*)0x0;
         *(char**)this = pcVar1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f0);
      cVar2 = BaseButton::is_pressed();
      if (cVar2 != '\0') {
         _postprocess((String*)&local_1e8);
         if (*(char**)this != local_1e8) {
            CowData<char32_t>::_unref((CowData<char32_t>*)this);
            pcVar1 = local_1e8;
            local_1e8 = (char*)0x0;
            *(char**)this = pcVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1f8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_200);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_208);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_210);
      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return this;
   }

   /* RenameDialog::_update_preview(String const&) [clone .part.0] */
   void RenameDialog::_update_preview(String *param_1) {
      String *pSVar1;
      code *pcVar2;
      StringName *pSVar3;
      char cVar4;
      int iVar5;
      Object *pOVar6;
      long in_FS_OFFSET;
      undefined8 uVar7;
      undefined8 uVar8;
      float in_XMM1_Da;
      float fVar10;
      float in_XMM1_Db;
      float fVar11;
      RenameDialog local_80[8];
      undefined8 local_78;
      undefined8 local_70;
      char *local_68;
      undefined8 local_60;
      undefined8 local_58;
      undefined8 uStack_50;
      long local_40;
      float fVar9;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      param_1[0xea8] = (String)0x0;
      add_error_handler((ErrorHandlerList*)( param_1 + 0xe90 ));
      Range::get_value();
      _apply_rename(local_80, (Node*)param_1, (int)*(undefined8*)( param_1 + 0xe80 ));
      if (param_1[0xea8] == (String)0x0) {
         pSVar1 = *(String**)( param_1 + 0xe68 );
         local_70 = 0;
         local_68 = "";
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_70);
         local_68 = "Preview:";
         local_78 = 0;
         local_60 = 8;
         String::parse_latin1((StrRange*)&local_78);
         TTR((String*)&local_68, (String*)&local_78);
         Label::set_text(pSVar1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         Label::set_text(*(String**)( param_1 + 0xe70 ));
         Node::get_name();
         cVar4 = operator == ( (String*)local_80,(StringName*)&local_68 );
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         pOVar6 = *(Object**)( EditorNode::singleton + 0x838 );
         if (cVar4 == '\0') {
            pSVar3 = *(StringName**)( param_1 + 0xe70 );
            if (pOVar6 == (Object*)0x0) goto LAB_00108d14;
            cVar4 = RefCounted::reference();
            uVar7 = EditorStringNames::singleton;
            if (cVar4 == '\0') {
               pOVar6 = (Object*)0x0;
            }

            pcVar2 = *(code**)( *(long*)pOVar6 + 0x1e8 );
            if (_update_preview(String_const&)::{lambda()
            #4
            iVar5 = __cxa_guard_acquire(&_update_preview(String_const & ::sname));
            if (iVar5 != 0) {
               _scs_create((char*)&_update_preview(String_const & ::sname, true));
               __cxa_atexit(StringName::~StringName, &_update_preview(String_const & ::sname, &__dso_handle));
               __cxa_guard_release(&_update_preview(String_const&)::{lambda()
               #4
            }

         }

         local_58 = ( *pcVar2 )(pOVar6, &_update_preview(String_const & ::sname, uVar7));
         uStack_50 = CONCAT44(in_XMM1_Db, in_XMM1_Da);
         Control::add_theme_color_override(pSVar3, (Color*)( SceneStringNames::singleton + 0xb0 ));
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar6);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

      }
 else {
         if (pOVar6 == (Object*)0x0) {
            LAB_00108d14:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         cVar4 = RefCounted::reference();
         uVar7 = EditorStringNames::singleton;
         if (cVar4 == '\0') {
            pOVar6 = (Object*)0x0;
         }

         pcVar2 = *(code**)( *(long*)pOVar6 + 0x1e8 );
         if (_update_preview(String_const&)::{lambda()
         #1
         iVar5 = __cxa_guard_acquire(&_update_preview(String_const & ::sname));
         if (iVar5 != 0) {
            _scs_create((char*)&_update_preview(String_const & ::sname, true));
            __cxa_atexit(StringName::~StringName, &_update_preview(String_const & ::sname, &__dso_handle));
            __cxa_guard_release(&_update_preview(String_const&)::{lambda()
            #1
         }

      }

      uVar7 = ( *pcVar2 )(pOVar6, &_update_preview(String_const & ::sname, uVar7));
      fVar9 = (float)( (ulong)uVar7 >> 0x20 );
      fVar10 = in_XMM1_Da;
      fVar11 = in_XMM1_Db;
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(pOVar6);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
            Memory::free_static(pOVar6, false);
         }

      }

      pOVar6 = *(Object**)( EditorNode::singleton + 0x838 );
      if (pOVar6 == (Object*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         pOVar6 = (Object*)0x0;
      }

      pcVar2 = *(code**)( *(long*)pOVar6 + 0x1e8 );
      if (_update_preview(String_const&)::{lambda()
      #3
      iVar5 = __cxa_guard_acquire(&_update_preview(String_const & ::sname));
      if (iVar5 != 0) {
         _scs_create((char*)&_update_preview(String_const & ::sname, true));
         __cxa_atexit(StringName::~StringName, &_update_preview(String_const & ::sname, &__dso_handle));
         __cxa_guard_release(&_update_preview(String_const&)::{lambda()
         #3
      }

   }

   if (_update_preview(String_const&)::{lambda()
   #2
   iVar5 = __cxa_guard_acquire(&_update_preview(String_const & ::sname));
   if (iVar5 != 0) {
      _scs_create((char*)&_update_preview(String_const & ::sname, true));
      __cxa_atexit(StringName::~StringName, &_update_preview(String_const & ::sname, &__dso_handle));
      __cxa_guard_release(&_update_preview(String_const&)::{lambda()
      #2
   }

}
uVar8 = (*pcVar2)(pOVar6,&_update_preview(String_const&)::{lambda()#2}::operator()()::sname,
                        &_update_preview(String_const&)::{lambda()#3cVar4 = RefCounted::unreference();if (cVar4 != '\0') {
   cVar4 = predelete_handler(pOVar6);
   if (cVar4 != '\0') {
      ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
      Memory::free_static(pOVar6, false);
   }

}
local_58 = CONCAT44(( (float)( (ulong)uVar8 >> 0x20 ) - fVar9 ) * _LC67 + fVar9, ( (float)uVar8 - (float)uVar7 ) * _LC67 + (float)uVar7);uStack_50 = CONCAT44(( fVar11 - in_XMM1_Db ) * _LC67 + in_XMM1_Db, ( fVar10 - in_XMM1_Da ) * _LC67 + in_XMM1_Da);Control::add_theme_color_override(*(StringName**)( param_1 + 0xe70 ), (Color*)( SceneStringNames::singleton + 0xb0 ));}
  }remove_error_handler((ErrorHandlerList*)( param_1 + 0xe90 ));CowData<char32_t>::_unref((CowData<char32_t>*)local_80);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* RenameDialog::_update_preview(String const&) */void RenameDialog::_update_preview(String *param_1) {
   if (( param_1[0xe88] == (String)0x0 ) && ( *(long*)( param_1 + 0xe80 ) != 0 )) {
      _update_preview(param_1);
      return;
   }

   return;
}
/* RenameDialog::_update_preview_int(int) */void RenameDialog::_update_preview_int(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   String *pSVar3;
   long in_FS_OFFSET;
   long local_30;
   undefined *local_28;
   undefined8 local_20;
   long local_10;
   pSVar3 = (String*)CONCAT44(in_register_0000003c, param_1);
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   local_30 = 0;
   local_28 = &_LC7;
   local_20 = 0;
   String::parse_latin1((StrRange*)&local_30);
   if (( pSVar3[0xe88] == (String)0x0 ) && ( *(long*)( pSVar3 + 0xe80 ) != 0 )) {
      _update_preview(pSVar3);
   }

   lVar2 = local_30;
   if (local_30 != 0) {
      LOCK();
      plVar1 = (long*)( local_30 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_30 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RenameDialog::reset() */void RenameDialog::reset(RenameDialog *this) {
   long in_FS_OFFSET;
   undefined8 local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this[0xe88] = (RenameDialog)0x1;
   for (int i = 0; i < 4; i++) {
      LineEdit::clear();
   }

   for (int i = 0; i < 4; i++) {
      BaseButton::set_pressed(SUB81(*(undefined8*)( this + ( 8*i + 3568 ) ), 0));
   }

   for (int i = 0; i < 3; i++) {
      Range::set_value(_LC70);
   }

   OptionButton::select((int)*(undefined8*)( this + 0xe58 ));
   OptionButton::select((int)*(undefined8*)( this + 0xe60 ));
   this[0xe88] = (RenameDialog)0x0;
   local_40 = 0;
   local_38 = &_LC7;
   local_30 = 0;
   String::parse_latin1((StrRange*)&local_40);
   if (( this[0xe88] == (RenameDialog)0x0 ) && ( *(long*)( this + 0xe80 ) != 0 )) {
      _update_preview((String*)this);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RenameDialog::RenameDialog(SceneTreeEditor*) */void RenameDialog::RenameDialog(RenameDialog *this, SceneTreeEditor *param_1) {
   String *pSVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   BoxContainer *this_00;
   GridContainer *pGVar5;
   Label *pLVar6;
   LineEdit *pLVar7;
   Label *pLVar8;
   CheckButton *pCVar9;
   TabContainer *this_01;
   BoxContainer *pBVar10;
   CheckBox *pCVar11;
   Button *pBVar12;
   BoxContainer *pBVar13;
   SpinBox *pSVar14;
   OptionButton *pOVar15;
   HSeparator *this_02;
   long *plVar16;
   CallableCustom *this_03;
   int iVar17;
   long in_FS_OFFSET;
   String local_90[8];
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78[2];
   undefined8 local_68[3];
   undefined8 local_50;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   ConfirmationDialog::ConfirmationDialog((ConfirmationDialog*)this);
   *(SceneTreeEditor**)( this + 0xdb8 ) = param_1;
   *(undefined***)this = &PTR__initialize_classv_0010f198;
   *(undefined4*)( this + 0xdc0 ) = 0;
   this[0xe88] = (RenameDialog)0x0;
   *(undefined8*)( this + 0xe90 ) = 0;
   this[0xea8] = (RenameDialog)0x0;
   for (int i = 0; i < 6; i++) {
      *(undefined1(*) [16])( this + ( 32*i + 3528 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 32*i + 3544 ) ) = (undefined1[16])0;
   }

   *(undefined1(*) [16])( this + 0xe98 ) = (undefined1[16])0x0;
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Batch Rename");
   TTR((String*)&local_80, (String*)local_78);
   Window::set_title((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, true);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_0010eba8;
   postinitialize_handler((Object*)this_00);
   Node::add_child(this, this_00, 0, 0);
   pGVar5 = (GridContainer*)operator_new(0xa10, "");
   GridContainer::GridContainer(pGVar5);
   postinitialize_handler((Object*)pGVar5);
   GridContainer::set_columns((int)pGVar5);
   Control::set_v_size_flags(pGVar5, 3);
   Node::add_child(this_00, pGVar5, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Search:");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pLVar7 = (LineEdit*)operator_new(0xbb0, "");
   local_68[0] = 0;
   LineEdit::LineEdit(pLVar7, (String*)local_68);
   postinitialize_handler((Object*)pLVar7);
   *(LineEdit**)( this + 0xdc8 ) = pLVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xdc8 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "lne_search");
   Node::set_name(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xdc8 ), 3);
   pLVar8 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar8, (String*)local_68);
   postinitialize_handler((Object*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Replace:");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pLVar7 = (LineEdit*)operator_new(0xbb0, "");
   local_68[0] = 0;
   LineEdit::LineEdit(pLVar7, (String*)local_68);
   postinitialize_handler((Object*)pLVar7);
   *(LineEdit**)( this + 0xdd0 ) = pLVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xdd0 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "lne_replace");
   Node::set_name(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xdd0 ), 3);
   Node::add_child(pGVar5, pLVar6, 0, 0);
   Node::add_child(pGVar5, pLVar8, 0, 0);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xdc8 ), 0, 0);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xdd0 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Prefix:");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pLVar7 = (LineEdit*)operator_new(0xbb0, "");
   local_68[0] = 0;
   LineEdit::LineEdit(pLVar7, (String*)local_68);
   postinitialize_handler((Object*)pLVar7);
   *(LineEdit**)( this + 0xdd8 ) = pLVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xdd8 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "lne_prefix");
   Node::set_name(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xdd8 ), 3);
   pLVar8 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar8, (String*)local_68);
   postinitialize_handler((Object*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Suffix:");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pLVar7 = (LineEdit*)operator_new(0xbb0, "");
   local_68[0] = 0;
   LineEdit::LineEdit(pLVar7, (String*)local_68);
   postinitialize_handler((Object*)pLVar7);
   *(LineEdit**)( this + 0xde0 ) = pLVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xde0 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "lne_suffix");
   Node::set_name(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xde0 ), 3);
   Node::add_child(pGVar5, pLVar6, 0, 0);
   Node::add_child(pGVar5, pLVar8, 0, 0);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xdd8 ), 0, 0);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xde0 ), 0, 0);
   pCVar9 = (CheckButton*)operator_new(0xc60, "");
   local_68[0] = 0;
   CheckButton::CheckButton(pCVar9, (String*)local_68);
   postinitialize_handler((Object*)pCVar9);
   *(CheckButton**)( this + 0xdf8 ) = pCVar9;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xdf8 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Use Regular Expressions");
   TTR((String*)&local_80, (String*)local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(this_00, *(undefined8*)( this + 0xdf8 ), 0, 0);
   pCVar9 = (CheckButton*)operator_new(0xc60, "");
   local_68[0] = 0;
   CheckButton::CheckButton(pCVar9, (String*)local_68);
   postinitialize_handler((Object*)pCVar9);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Advanced Options");
   TTR((String*)&local_80, (String*)local_78);
   Button::set_text((String*)pCVar9);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(this_00, pCVar9, 0, 0);
   this_01 = (TabContainer*)operator_new(0xb40, "");
   TabContainer::TabContainer(this_01);
   postinitialize_handler((Object*)this_01);
   *(TabContainer**)( this + 0xde8 ) = this_01;
   TabContainer::set_use_hidden_tabs_for_min_size(SUB81(this_01, 0));
   Node::add_child(this_00, *(undefined8*)( this + 0xde8 ), 0, 0);
   pBVar10 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar10, true);
   pBVar10[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar10 = &PTR__initialize_classv_0010eba8;
   postinitialize_handler((Object*)pBVar10);
   Control::set_h_size_flags(pBVar10, 3);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Substitute");
   TTR((String*)&local_80, (String*)local_78);
   Node::set_name((String*)pBVar10);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(*(undefined8*)( this + 0xde8 ), pBVar10, 0, 0);
   pCVar11 = (CheckBox*)operator_new(0xc60, "");
   local_68[0] = 0;
   CheckBox::CheckBox(pCVar11, (String*)local_68);
   postinitialize_handler((Object*)pCVar11);
   *(CheckBox**)( this + 0xdf0 ) = pCVar11;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xdf0 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Substitute");
   TTR((String*)&local_80, (String*)local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar10, *(undefined8*)( this + 0xdf0 ), 0, 0);
   pGVar5 = (GridContainer*)operator_new(0xa10, "");
   GridContainer::GridContainer(pGVar5);
   postinitialize_handler((Object*)pGVar5);
   GridContainer::set_columns((int)pGVar5);
   Node::add_child(pBVar10, pGVar5, 0, 0);
   pBVar12 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   Button::Button(pBVar12, (String*)local_68);
   postinitialize_handler((Object*)pBVar12);
   *(Button**)( this + 0xe10 ) = pBVar12;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe10 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "NAME");
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe10 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Node name.");
   TTR((String*)&local_80, (String*)local_78);
   local_88 = 0;
   String::parse_latin1((String*)&local_88, "${NAME}\n");
   String::operator +(local_90, (String*)&local_88);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xe10 ), 0);
   plVar2 = *(long**)( this + 0xe10 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_insert_text");
   Callable::bind<char_const*>((char*)local_78);
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (String*)local_78, 0);
   Callable::~Callable((Callable*)local_78);
   Callable::~Callable((Callable*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xe10 ), 3);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xe10 ), 0, 0);
   pBVar12 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   Button::Button(pBVar12, (String*)local_68);
   postinitialize_handler((Object*)pBVar12);
   *(Button**)( this + 0xe18 ) = pBVar12;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe18 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "PARENT");
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe18 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Node\'s parent name, if available.");
   TTR((String*)&local_80, (String*)local_78);
   local_88 = 0;
   String::parse_latin1((String*)&local_88, "${PARENT}\n");
   String::operator +(local_90, (String*)&local_88);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xe18 ), 0);
   plVar2 = *(long**)( this + 0xe18 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_insert_text");
   Callable::bind<char_const*>((char*)local_78);
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (String*)local_78, 0);
   Callable::~Callable((Callable*)local_78);
   Callable::~Callable((Callable*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xe18 ), 3);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xe18 ), 0, 0);
   pBVar12 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   Button::Button(pBVar12, (String*)local_68);
   postinitialize_handler((Object*)pBVar12);
   *(Button**)( this + 0xe20 ) = pBVar12;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe20 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "TYPE");
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe20 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Node type.");
   TTR((String*)&local_80, (String*)local_78);
   local_88 = 0;
   String::parse_latin1((String*)&local_88, "${TYPE}\n");
   String::operator +(local_90, (String*)&local_88);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xe20 ), 0);
   plVar2 = *(long**)( this + 0xe20 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_insert_text");
   Callable::bind<char_const*>((char*)local_78);
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (String*)local_78, 0);
   Callable::~Callable((Callable*)local_78);
   Callable::~Callable((Callable*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xe20 ), 3);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xe20 ), 0, 0);
   pBVar12 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   Button::Button(pBVar12, (String*)local_68);
   postinitialize_handler((Object*)pBVar12);
   *(Button**)( this + 0xe28 ) = pBVar12;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe28 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "SCENE");
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe28 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Current scene name.");
   TTR((String*)&local_80, (String*)local_78);
   local_88 = 0;
   String::parse_latin1((String*)&local_88, "${SCENE}\n");
   String::operator +(local_90, (String*)&local_88);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xe28 ), 0);
   plVar2 = *(long**)( this + 0xe28 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_insert_text");
   Callable::bind<char_const*>((char*)local_78);
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (String*)local_78);
   Callable::~Callable((Callable*)local_78);
   Callable::~Callable((Callable*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xe28 ), 3);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xe28 ), 0, 0);
   pBVar12 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   Button::Button(pBVar12, (String*)local_68);
   postinitialize_handler((Object*)pBVar12);
   *(Button**)( this + 0xe30 ) = pBVar12;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe30 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "ROOT");
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe30 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Root node name.");
   TTR((String*)&local_80, (String*)local_78);
   local_88 = 0;
   String::parse_latin1((String*)&local_88, "${ROOT}\n");
   String::operator +(local_90, (String*)&local_88);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xe30 ), 0);
   plVar2 = *(long**)( this + 0xe30 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_insert_text");
   Callable::bind<char_const*>((char*)local_78);
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (String*)local_78, 0);
   Callable::~Callable((Callable*)local_78);
   Callable::~Callable((Callable*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xe30 ), 3);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xe30 ), 0, 0);
   pBVar12 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   Button::Button(pBVar12, (String*)local_68);
   postinitialize_handler((Object*)pBVar12);
   *(Button**)( this + 0xe38 ) = pBVar12;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe38 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "COUNTER");
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe38 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Sequential integer counter.\nCompare counter options.");
   TTR((String*)&local_80, (String*)local_78);
   local_88 = 0;
   String::parse_latin1((String*)&local_88, "${COUNTER}\n");
   String::operator +(local_90, (String*)&local_88);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Control::set_focus_mode(*(undefined8*)( this + 0xe38 ), 0);
   plVar2 = *(long**)( this + 0xe38 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_insert_text");
   Callable::bind<char_const*>((char*)local_78);
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x238, (String*)local_78);
   Callable::~Callable((Callable*)local_78);
   Callable::~Callable((Callable*)local_68);
   Control::set_h_size_flags(*(undefined8*)( this + 0xe38 ), 3);
   Node::add_child(pGVar5, *(undefined8*)( this + 0xe38 ), 0, 0);
   pCVar11 = (CheckBox*)operator_new(0xc60, "");
   local_68[0] = 0;
   CheckBox::CheckBox(pCVar11, (String*)local_68);
   postinitialize_handler((Object*)pCVar11);
   *(CheckBox**)( this + 0xe08 ) = pCVar11;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe08 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Per-level Counter");
   TTR((String*)&local_80, (String*)local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe08 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "If set, the counter restarts for each group of child nodes.");
   TTR((String*)&local_80, (String*)local_78);
   Control::set_tooltip_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar10, *(undefined8*)( this + 0xe08 ), 0, 0);
   pBVar13 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar13, false);
   pBVar13[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar13 = &PTR__initialize_classv_0010e830;
   postinitialize_handler((Object*)pBVar13);
   Node::add_child(pBVar10, pBVar13, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Start");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Initial value for the counter.");
   TTR((String*)&local_80, (String*)local_78);
   Control::set_tooltip_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar13, pLVar6, 0, 0);
   pSVar14 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(pSVar14);
   postinitialize_handler((Object*)pSVar14);
   *(SpinBox**)( this + 0xe40 ) = pSVar14;
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Initial value for the counter.");
   TTR((String*)&local_80, (String*)local_78);
   Control::set_tooltip_text((String*)pSVar14);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Range::set_step(_LC70);
   Range::set_min(0.0);
   Node::add_child(pBVar13, *(undefined8*)( this + 0xe40 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Step");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Amount by which counter is incremented for each node.");
   TTR((String*)&local_80, (String*)local_78);
   Control::set_tooltip_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar13, pLVar6, 0, 0);
   pSVar14 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(pSVar14);
   postinitialize_handler((Object*)pSVar14);
   *(SpinBox**)( this + 0xe48 ) = pSVar14;
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Amount by which counter is incremented for each node.");
   TTR((String*)&local_80, (String*)local_78);
   Control::set_tooltip_text((String*)pSVar14);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Range::set_step(_LC70);
   Node::add_child(pBVar13, *(undefined8*)( this + 0xe48 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Padding");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Minimum number of digits for the counter.\nMissing digits are padded with leading zeros.");
   TTR((String*)&local_80, (String*)local_78);
   Control::set_tooltip_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar13, pLVar6, 0, 0);
   pSVar14 = (SpinBox*)operator_new(0xba8, "");
   SpinBox::SpinBox(pSVar14);
   postinitialize_handler((Object*)pSVar14);
   *(SpinBox**)( this + 0xe50 ) = pSVar14;
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Minimum number of digits for the counter.\nMissing digits are padded with leading zeros.");
   TTR((String*)&local_80, (String*)local_78);
   Control::set_tooltip_text((String*)pSVar14);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Range::set_step(_LC70);
   Node::add_child(pBVar13, *(undefined8*)( this + 0xe50 ), 0, 0);
   pBVar10 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar10, true);
   pBVar10[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar10 = &PTR__initialize_classv_0010eba8;
   postinitialize_handler((Object*)pBVar10);
   Control::set_h_size_flags(pBVar10, 3);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Post-Process");
   TTR((String*)&local_80, (String*)local_78);
   Node::set_name((String*)pBVar10);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(*(undefined8*)( this + 0xde8 ), pBVar10, 0, 0);
   pCVar11 = (CheckBox*)operator_new(0xc60, "");
   local_68[0] = 0;
   CheckBox::CheckBox(pCVar11, (String*)local_68);
   postinitialize_handler((Object*)pCVar11);
   *(CheckBox**)( this + 0xe00 ) = pCVar11;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe00 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Post-Process");
   TTR((String*)&local_80, (String*)local_78);
   Button::set_text(pSVar1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar10, *(undefined8*)( this + 0xe00 ), 0, 0);
   pBVar13 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar13, false);
   pBVar13[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar13 = &PTR__initialize_classv_0010e830;
   postinitialize_handler((Object*)pBVar13);
   Node::add_child(pBVar10, pBVar13, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Style");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar13, pLVar6, 0, 0);
   pOVar15 = (OptionButton*)operator_new(0xd00, "");
   local_68[0] = 0;
   OptionButton::OptionButton(pOVar15, (String*)local_68);
   postinitialize_handler((Object*)pOVar15);
   *(OptionButton**)( this + 0xe58 ) = pOVar15;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe58 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Keep");
   TTR((String*)&local_80, (String*)local_78);
   iVar17 = (int)(String*)&local_80;
   OptionButton::add_item(pSVar1, iVar17);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe58 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "PascalCase to snake_case");
   TTR((String*)&local_80, (String*)local_78);
   OptionButton::add_item(pSVar1, iVar17);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe58 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "snake_case to PascalCase");
   TTR((String*)&local_80, (String*)local_78);
   OptionButton::add_item(pSVar1, iVar17);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar13, *(undefined8*)( this + 0xe58 ), 0, 0);
   pBVar13 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar13, false);
   pBVar13[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar13 = &PTR__initialize_classv_0010e830;
   postinitialize_handler((Object*)pBVar13);
   Node::add_child(pBVar10, pBVar13, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Case");
   TTR((String*)&local_80, (String*)local_78);
   Label::set_text((String*)pLVar6);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar13, pLVar6, 0, 0);
   pOVar15 = (OptionButton*)operator_new(0xd00, "");
   local_68[0] = 0;
   OptionButton::OptionButton(pOVar15, (String*)local_68);
   postinitialize_handler((Object*)pOVar15);
   *(OptionButton**)( this + 0xe60 ) = pOVar15;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe60 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Keep");
   TTR((String*)&local_80, (String*)local_78);
   OptionButton::add_item(pSVar1, iVar17);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe60 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "To Lowercase");
   TTR((String*)&local_80, (String*)local_78);
   OptionButton::add_item(pSVar1, iVar17);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   pSVar1 = *(String**)( this + 0xe60 );
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "To Uppercase");
   TTR((String*)&local_80, (String*)local_78);
   OptionButton::add_item(pSVar1, iVar17);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar13, *(undefined8*)( this + 0xe60 ), 0, 0);
   this_02 = (HSeparator*)operator_new(0x9e0, "");
   HSeparator::HSeparator(this_02);
   postinitialize_handler((Object*)this_02);
   local_48 = _LC119;
   Control::set_custom_minimum_size((Vector2*)this_02);
   Node::add_child(this_00, this_02, 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   *(Label**)( this + 0xe68 ) = pLVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(this_00, *(undefined8*)( this + 0xe68 ), 0, 0);
   pLVar6 = (Label*)operator_new(0xad8, "");
   local_68[0] = 0;
   Label::Label(pLVar6, (String*)local_68);
   postinitialize_handler((Object*)pLVar6);
   *(Label**)( this + 0xe70 ) = pLVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::set_auto_translate_mode(*(undefined8*)( this + 0xe70 ), 2);
   Label::set_autowrap_mode(*(undefined8*)( this + 0xe70 ), 3);
   Node::add_child(this_00, *(undefined8*)( this + 0xe70 ), 0, 0);
   local_50 = 0x43bf8000;
   local_48 = Vector2::operator_cast_to_Vector2i((Vector2*)&local_50);
   Window::set_min_size((Vector2i*)this);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "Rename");
   TTR((String*)&local_80, (String*)local_78);
   AcceptDialog::set_ok_button_text(this, (String*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   local_68[0] = 0;
   String::parse_latin1((String*)local_68, "");
   local_78[0] = 0;
   String::parse_latin1((String*)local_78, "");
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "Reset");
   TTR((String*)&local_88, (String*)&local_80);
   plVar16 = (long*)AcceptDialog::add_button((String*)this, SUB81((String*)&local_88, 0), (String*)0x0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   *(RenameDialog**)( this + 0xe98 ) = this;
   *(code**)( this + 0xe90 ) = _error_handler;
   pcVar3 = *(code**)( *(long*)pCVar9 + 0x108 );
   this_03 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_03);
   *(RenameDialog**)( this_03 + 0x28 ) = this;
   *(undefined1(*) [16])( this_03 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( this_03 + 0x20 ) = &_LC7;
   *(undefined8*)( this_03 + 0x40 ) = 0;
   uVar4 = *(undefined8*)( this + 0x60 );
   *(undefined***)this_03 = &PTR_hash_0010f4a0;
   *(undefined8*)( this_03 + 0x30 ) = uVar4;
   *(undefined8*)( this_03 + 0x38 ) = 0x100000;
   *(undefined8*)( this_03 + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this_03, (int)this_03 + 0x28);
   *(char**)( this_03 + 0x20 ) = "RenameDialog::_features_toggled";
   Callable::Callable((Callable*)local_68, this_03);
   ( *pcVar3 )(pCVar9, SceneStringNames::singleton + 0x248, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   for (int i = 0; i < 4; i++) {
      plVar2 = *(long**)( this + ( 8*i + 3528 ) );
      pcVar3 = *(code**)( *plVar2 + 264 );
      create_custom_callable_function_pointer<RenameDialog>((RenameDialog*)local_68, (char*)this, (_func_void*)"&RenameDialog::_update_substitute");
      ( *pcVar3 )(plVar2, SceneStringNames::singleton + 216, (String*)local_68, 0);
      Callable::~Callable((Callable*)local_68);
      plVar2 = *(long**)( this + ( 8*i + 3528 ) );
      pcVar3 = *(code**)( *plVar2 + 264 );
      create_custom_callable_function_pointer<RenameDialog>((RenameDialog*)local_68, (char*)this, (_func_void*)"&RenameDialog::_update_substitute");
      ( *pcVar3 )(plVar2, SceneStringNames::singleton + 224, (String*)local_68, 0);
      Callable::~Callable((Callable*)local_68);
   }

   plVar2 = *(long**)( this + 0xdd8 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_update_preview");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x270, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar2 = *(long**)( this + 0xde0 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_update_preview");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x270, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar2 = *(long**)( this + 0xdc8 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_update_preview");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x270, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar2 = *(long**)( this + 0xdd0 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_update_preview");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x270, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar2 = *(long**)( this + 0xe40 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,int>((RenameDialog*)local_68, (char*)this, (_func_void_int*)"&RenameDialog::_update_preview_int");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x280, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar2 = *(long**)( this + 0xe48 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,int>((RenameDialog*)local_68, (char*)this, (_func_void_int*)"&RenameDialog::_update_preview_int");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x280, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar2 = *(long**)( this + 0xe50 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,int>((RenameDialog*)local_68, (char*)this, (_func_void_int*)"&RenameDialog::_update_preview_int");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x280, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar2 = *(long**)( this + 0xe58 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,int>((RenameDialog*)local_68, (char*)this, (_func_void_int*)"&RenameDialog::_update_preview_int");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x260, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   plVar2 = *(long**)( this + 0xe60 );
   pcVar3 = *(code**)( *plVar2 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog,int>((RenameDialog*)local_68, (char*)this, (_func_void_int*)"&RenameDialog::_update_preview_int");
   ( *pcVar3 )(plVar2, SceneStringNames::singleton + 0x260, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   for (int i = 0; i < 3; i++) {
      plVar2 = *(long**)( this + ( 8*i + 3568 ) );
      pcVar3 = *(code**)( *plVar2 + 264 );
      create_custom_callable_function_pointer<RenameDialog,String_const&>((RenameDialog*)local_68, (char*)this, (_func_void_String_ptr*)"&RenameDialog::_update_preview");
      Callable::bind<char_const*>((char*)local_78);
      ( *pcVar3 )(plVar2, SceneStringNames::singleton + 568, (String*)local_78, 0);
      Callable::~Callable((Callable*)local_78);
      Callable::~Callable((Callable*)local_68);
   }

   pcVar3 = *(code**)( *plVar16 + 0x108 );
   create_custom_callable_function_pointer<RenameDialog>((RenameDialog*)local_68, (char*)this, (_func_void*)"&RenameDialog::reset");
   ( *pcVar3 )(plVar16, SceneStringNames::singleton + 0x238, (String*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   reset(this);
   CanvasItem::hide();
   local_48 = Window::get_size();
   local_48 = local_48 & 0xffffffff;
   Window::set_size((Vector2i*)this);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RenameDialog::_post_popup() */void RenameDialog::_post_popup(RenameDialog *this) {
   char cVar1;
   Variant *this_00;
   Object *pOVar2;
   long in_FS_OFFSET;
   Array aAStack_58[8];
   undefined8 local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   AcceptDialog::_post_popup();
   *(undefined8*)( this + 0xe80 ) = 0;
   EditorSelection::get_selected_nodes();
   Array::Array(aAStack_58, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   cVar1 = Array::is_empty();
   if (cVar1 == '\0') {
      this_00 = (Variant*)Array::operator []((int)aAStack_58);
      pOVar2 = Variant::operator_cast_to_Object_(this_00);
      if (pOVar2 != (Object*)0x0) {
         pOVar2 = (Object*)__dynamic_cast(pOVar2, &Object::typeinfo, &Node::typeinfo, 0);
      }

      *(Object**)( this + 0xe80 ) = pOVar2;
      local_48 = &_LC7;
      local_50 = 0;
      local_40 = 0;
      String::parse_latin1((StrRange*)&local_50);
      if (( this[0xe88] == (RenameDialog)0x0 ) && ( *(long*)( this + 0xe80 ) != 0 )) {
         _update_preview((String*)this);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      _update_substitute(this);
      Array::~Array(aAStack_58);
   }
 else {
      _err_print_error("_post_popup", "editor/rename_dialog.cpp", 0x16f, "Condition \"selected_node_list.is_empty()\" is true.", 0, 0);
      Array::~Array(aAStack_58);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RenameDialog::_insert_text(String const&) */void RenameDialog::_insert_text(RenameDialog *this, String *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined8 local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = Viewport::gui_get_focus_owner();
   if (( ( lVar3 != 0 ) && ( lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &LineEdit::typeinfo, 0) ),lVar3 != 0 )) {
      LineEdit::selection_delete();
      local_38 = (undefined*)0x0;
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      if (*(long*)param_1 != 0) {
         do {
            lVar2 = *plVar1;
            if (lVar2 == 0) goto LAB_00104f98;
            LOCK();
            lVar4 = *plVar1;
            bVar5 = lVar2 == lVar4;
            if (bVar5) {
               *plVar1 = lVar2 + 1;
               lVar4 = lVar2;
            }

            UNLOCK();
         }
 while ( !bVar5 );
         if (lVar4 != -1) {
            local_38 = *(undefined**)param_1;
         }

      }

      LAB_00104f98:LineEdit::insert_text_at_caret(lVar3, (CowData<char32_t>*)&local_38);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
      local_40 = 0;
      local_38 = &_LC7;
      local_30 = 0;
      String::parse_latin1((StrRange*)&local_40);
      if (( this[0xe88] == (RenameDialog)0x0 ) && ( *(long*)( this + 0xe80 ) != 0 )) {
         _update_preview((String*)this);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RenameDialog::_iterate_scene(Node const*, Array const&, int*) [clone .part.0] */void RenameDialog::_iterate_scene(RenameDialog *this, Node *param_1, Array *param_2, int *param_3) {
   CowData<char32_t> *this_00;
   long *plVar1;
   long lVar2;
   char cVar3;
   int iVar4;
   Node *pNVar5;
   NodePath *this_01;
   undefined1(*pauVar6)[16];
   int iVar7;
   long in_FS_OFFSET;
   double dVar8;
   long local_78;
   NodePath local_70[8];
   undefined1 local_68[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, (Object*)param_1);
   cVar3 = Array::has((Variant*)param_2);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar3 != '\0') {
      _apply_rename((RenameDialog*)&local_78, (Node*)this, (int)param_1);
      Node::get_name();
      cVar3 = StringName::operator !=((StringName*)local_68, (String*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_68._0_8_ != 0 )) {
         StringName::unref();
      }

      if (cVar3 != '\0') {
         local_68 = (undefined1[16])0x0;
         Node::get_path();
         NodePath::operator =((NodePath*)local_68, local_70);
         NodePath::~NodePath(local_70);
         this_00 = (CowData<char32_t>*)( local_68 + 8 );
         if (local_68._8_8_ != local_78) {
            CowData<char32_t>::_ref(this_00, (CowData*)&local_78);
         }

         if (*(long*)( this + 0xe78 ) == 0) {
            pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined1(**) [16])( this + 0xe78 ) = pauVar6;
            *(undefined4*)pauVar6[1] = 0;
            *pauVar6 = (undefined1[16])0x0;
         }

         this_01 = (NodePath*)operator_new(0x28, DefaultAllocator::alloc);
         *(undefined8*)( this_01 + 0x20 ) = 0;
         *(undefined1(*) [16])this_01 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_01 + 0x10 ) = (undefined1[16])0x0;
         NodePath::operator =(this_01, (NodePath*)local_68);
         CowData<char32_t>::_ref((CowData<char32_t>*)( this_01 + 8 ), (CowData*)this_00);
         plVar1 = *(long**)( this + 0xe78 );
         lVar2 = plVar1[1];
         *(undefined8*)( this_01 + 0x10 ) = 0;
         *(long**)( this_01 + 0x20 ) = plVar1;
         *(long*)( this_01 + 0x18 ) = lVar2;
         if (lVar2 != 0) {
            *(NodePath**)( lVar2 + 0x10 ) = this_01;
         }

         plVar1[1] = (long)this_01;
         if (*plVar1 == 0) {
            *plVar1 = (long)this_01;
         }

         *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         CowData<char32_t>::_unref(this_00);
         NodePath::~NodePath((NodePath*)local_68);
      }

      dVar8 = (double)Range::get_value();
      *param_3 = (int)( (double)*param_3 + dVar8 );
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }

   dVar8 = (double)Range::get_value();
   local_68._0_4_ = (int)dVar8;
   cVar3 = BaseButton::is_pressed();
   if (cVar3 != '\0') {
      param_3 = (int*)local_68;
   }

   iVar7 = 0;
   while (true) {
      iVar4 = Node::get_child_count(SUB81(param_1, 0));
      if (iVar4 <= iVar7) break;
      pNVar5 = (Node*)Node::get_child((int)param_1, SUB41(iVar7, 0));
      if (pNVar5 != (Node*)0x0) {
         _iterate_scene(this, pNVar5, param_2, param_3);
      }

      iVar7 = iVar7 + 1;
   }
;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RenameDialog::_iterate_scene(Node const*, Array const&, int*) */void RenameDialog::_iterate_scene(RenameDialog *this, Node *param_1, Array *param_2, int *param_3) {
   if (param_1 != (Node*)0x0) {
      _iterate_scene(this, param_1, param_2, param_3);
      return;
   }

   return;
}
/* RenameDialog::rename() */void RenameDialog::rename(RenameDialog *this) {
   NodePath *this_00;
   long lVar1;
   NodePath *pNVar2;
   long lVar3;
   undefined8 uVar4;
   String *pSVar5;
   long *plVar6;
   long in_FS_OFFSET;
   double dVar7;
   Array local_70[8];
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorSelection::get_selected_nodes();
   Array::Array(local_70, (Array*)&local_58);
   Array::~Array((Array*)&local_58);
   pNVar2 = (NodePath*)SceneTree::get_edited_scene_root();
   dVar7 = (double)Range::get_value();
   plVar6 = *(long**)( this + 0xe78 );
   *(int*)( this + 0xdc0 ) = (int)dVar7;
   if (plVar6 != (long*)0x0) {
      do {
         this_00 = (NodePath*)*plVar6;
         if (this_00 == (NodePath*)0x0) {
            if (pNVar2 != (NodePath*)0x0) goto LAB_0010541b;
            goto LAB_00105440;
         }

         if (plVar6 == *(long**)( this_00 + 0x20 )) {
            lVar3 = *(long*)( this_00 + 0x10 );
            lVar1 = *(long*)( this_00 + 0x18 );
            *plVar6 = lVar3;
            if (this_00 == (NodePath*)plVar6[1]) {
               plVar6[1] = lVar1;
            }

            if (lVar1 != 0) {
               *(long*)( lVar1 + 0x10 ) = lVar3;
               lVar3 = *(long*)( this_00 + 0x10 );
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x18 ) = lVar1;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( this_00 + 8 ));
            NodePath::~NodePath(this_00);
            Memory::free_static(this_00, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)( this + 0xe78 );
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
      *(undefined8*)( this + 0xe78 ) = 0;
   }

   if (pNVar2 != (NodePath*)0x0) {
      LAB_0010541b:_iterate_scene(this, (Node*)pNVar2, local_70, (int*)( this + 0xdc0 ));
      plVar6 = *(long**)( this + 0xe78 );
      if (plVar6 != (long*)0x0) {
         LAB_00105440:if ((int)plVar6[2] != 0) {
            uVar4 = EditorUndoRedoManager::get_singleton();
            local_58 = "";
            local_60 = 0;
            local_50 = 0;
            String::parse_latin1((StrRange*)&local_60);
            local_68 = 0;
            local_58 = "Batch Rename";
            local_50 = 0xc;
            String::parse_latin1((StrRange*)&local_68);
            TTR((String*)&local_58, (String*)&local_68);
            EditorUndoRedoManager::create_action(uVar4, (Array*)&local_58, 0, pNVar2, 1);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (*(long*)( this + 0xe78 ) != 0) {
               lVar3 = *(long*)( *(long*)( this + 0xe78 ) + 8 );
               joined_r0x0010550e:if (lVar3 != 0) {
                  do {
                     pSVar5 = (String*)Node::get_node(pNVar2);
                     if (pSVar5 == (String*)0x0) {
                        NodePath::get_concatenated_subnames();
                        if (local_68 == 0) {
                           local_60 = 0;
                        }
 else {
                           local_60 = 0;
                           if (*(char**)( local_68 + 8 ) == (char*)0x0) {
                              if (*(long*)( local_68 + 0x10 ) != 0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
                              }

                           }
 else {
                              String::parse_latin1((String*)&local_60, *(char**)( local_68 + 8 ));
                           }

                        }

                        operator+((char *)&
                        local_58,(String*)"Skipping missing node: ";
                        _err_print_error("rename", "editor/rename_dialog.cpp", 0x253, (Array*)&local_58, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                        if (( StringName::configured != '\0' ) && ( local_68 != 0 )) goto code_r0x001055de;
                     }
 else {
                        SceneTreeEditor::rename_node(*(Node**)( this + 0xdb8 ), pSVar5, (TreeItem*)( lVar3 + 8 ));
                     }

                     lVar3 = *(long*)( lVar3 + 0x18 );
                     if (lVar3 == 0) break;
                  }
 while ( true );
               }

            }

            EditorUndoRedoManager::commit_action(SUB81(uVar4, 0));
         }

      }

   }

   Array::~Array(local_70);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x001055de:StringName::unref();
   lVar3 = *(long*)( lVar3 + 0x18 );
   goto joined_r0x0010550e;
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
/* ConfirmationDialog::is_class_ptr(void*) const */uint ConfirmationDialog::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x10f7, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f7, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f7, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f7, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* ConfirmationDialog::_property_can_revertv(StringName const&) const */undefined8 ConfirmationDialog::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ConfirmationDialog::_property_get_revertv(StringName const&, Variant&) const */undefined8 ConfirmationDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* RenameDialog::_property_can_revertv(StringName const&) const */undefined8 RenameDialog::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* RenameDialog::_property_get_revertv(StringName const&, Variant&) const */undefined8 RenameDialog::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* CallableCustomMethodPointer<RenameDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,int> *this) {
   return;
}
/* CallableCustomMethodPointer<RenameDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void> *this) {
   return;
}
/* CallableCustomMethodPointer<RenameDialog, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,bool> *this) {
   return;
}
/* CallableCustomMethodPointer<RenameDialog, void, String const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,String_const&> *this) {
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
/* CallableCustomMethodPointer<RenameDialog, void, int>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RenameDialog,void,int>::get_argument_count(CallableCustomMethodPointer<RenameDialog,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<RenameDialog, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RenameDialog,void>::get_argument_count(CallableCustomMethodPointer<RenameDialog,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<RenameDialog, void, bool>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<RenameDialog,void,bool>::get_argument_count(CallableCustomMethodPointer<RenameDialog,void,bool> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<RenameDialog, void, String const&>::get_argument_count(bool&) const
    */undefined8 CallableCustomMethodPointer<RenameDialog,void,String_const&>::get_argument_count(CallableCustomMethodPointer<RenameDialog,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<RenameDialog, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,bool> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RenameDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RenameDialog, void, String const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<RenameDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void> *this) {
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
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00113008 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00113008 != Object::_property_can_revert) {
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
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010f650;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010f650;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   *(undefined***)this = &PTR__initialize_classv_0010ef20;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   *(undefined***)this = &PTR__initialize_classv_0010ef20;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xdb8);
   return;
}
/* ConfirmationDialog::_getv(StringName const&, Variant&) const */undefined8 ConfirmationDialog::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__get_00113010 != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* RenameDialog::_getv(StringName const&, Variant&) const */undefined8 RenameDialog::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__get_00113010 != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* ConfirmationDialog::_setv(StringName const&, Variant const&) */undefined8 ConfirmationDialog::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00113018 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* RenameDialog::_setv(StringName const&, Variant const&) */undefined8 RenameDialog::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00113018 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* CallableCustomMethodPointer<RenameDialog, void>::get_object() const */undefined8 CallableCustomMethodPointer<RenameDialog,void>::get_object(CallableCustomMethodPointer<RenameDialog,void> *this) {
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
         goto LAB_00105d8d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00105d8d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00105d8d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RenameDialog, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<RenameDialog,void,int>::get_object(CallableCustomMethodPointer<RenameDialog,void,int> *this) {
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
         goto LAB_00105e8d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00105e8d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00105e8d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RenameDialog, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<RenameDialog,void,String_const&>::get_object(CallableCustomMethodPointer<RenameDialog,void,String_const&> *this) {
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
         goto LAB_00105f8d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_00105f8d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_00105f8d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<RenameDialog, void, bool>::get_object() const */undefined8 CallableCustomMethodPointer<RenameDialog,void,bool>::get_object(CallableCustomMethodPointer<RenameDialog,void,bool> *this) {
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
         goto LAB_0010608d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010608d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010608d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* RenameDialog::_validate_propertyv(PropertyInfo&) const */void RenameDialog::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_00113020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* ConfirmationDialog::_validate_propertyv(PropertyInfo&) const */void ConfirmationDialog::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_00113020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00113028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00113028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00113030 != CanvasItem::_set) {
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
      if ((code*)PTR__set_00113030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* ConfirmationDialog::_notificationv(int, bool) */void ConfirmationDialog::_notificationv(ConfirmationDialog *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00113038 != Window::_notification) {
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

   if ((code*)PTR__notification_00113038 == Window::_notification) {
      return;
   }

   AcceptDialog::_notification(iVar1);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00106558) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00113040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x001065c8) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00113040 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10f8, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10f8, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* RenameDialog::is_class_ptr(void*) const */uint RenameDialog::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x10f7, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f7, in_RSI == &ConfirmationDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f7, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f7, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10f8, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* RenameDialog::_notificationv(int, bool) */void RenameDialog::_notificationv(RenameDialog *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00113038 != Window::_notification) {
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

   if ((code*)PTR__notification_00113038 == Window::_notification) {
      return;
   }

   AcceptDialog::_notification(iVar1);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106880;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00106880:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001068e0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001068e0:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00106940;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00106940:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = strlen;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_001069b0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_001069b0:Control::~Control((Control*)this);
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
/* RenameDialog::_get_class_namev() const */undefined8 *RenameDialog::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106a83:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106a83;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RenameDialog");
         goto LAB_00106aee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RenameDialog");
   LAB_00106aee:return &_get_class_namev();
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
         LAB_00106b73:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106b73;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_00106bde;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_00106bde:return &_get_class_namev();
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
         LAB_00106c63:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106c63;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_00106cce;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_00106cce:return &_get_class_namev();
}
/* ConfirmationDialog::_get_class_namev() const */undefined8 *ConfirmationDialog::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106d53:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106d53;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfirmationDialog");
         goto LAB_00106dbe;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ConfirmationDialog");
   LAB_00106dbe:return &_get_class_namev();
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
/* ConfirmationDialog::get_class() const */void ConfirmationDialog::get_class(void) {
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
/* RenameDialog::get_class() const */void RenameDialog::get_class(void) {
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
/* VBoxContainer::get_class() const */void VBoxContainer::get_class(void) {
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
/* WARNING: Removing unreachable block (ram,0x00107280) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00113048 != Container::_notification) {
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

   if ((code*)PTR__notification_00113048 == Container::_notification) {
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
/* VBoxContainer::_notificationv(int, bool) */void VBoxContainer::_notificationv(VBoxContainer *this, int param_1, bool param_2) {
   if (param_2) {
      BoxContainer::_notificationv((BoxContainer*)this, param_1, true);
      return;
   }

   BoxContainer::_notificationv((BoxContainer*)this, param_1, false);
   return;
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* Callable create_custom_callable_function_pointer<RenameDialog, String const&>(RenameDialog*, char
   const*, void (RenameDialog::*)(String const&)) */RenameDialog *create_custom_callable_function_pointer<RenameDialog,String_const&>(RenameDialog *param_1, char *param_2, _func_void_String_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC7;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010f410;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_String_ptr**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable Callable::bind<char const*>(char const*) const */char *Callable::bind<char_const*>(char *param_1) {
   char cVar1;
   char *in_RDX;
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
/* Callable create_custom_callable_function_pointer<RenameDialog>(RenameDialog*, char const*, void
   (RenameDialog::*)()) */RenameDialog *create_custom_callable_function_pointer<RenameDialog>(RenameDialog *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC7;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010f530;
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
/* Callable create_custom_callable_function_pointer<RenameDialog, int>(RenameDialog*, char const*,
   void (RenameDialog::*)(int)) */RenameDialog *create_custom_callable_function_pointer<RenameDialog,int>(RenameDialog *param_1, char *param_2, _func_void_int *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC7;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0010f5c0;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_int**)( this + 0x20 ) = param_3 + 1;
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
/* WARNING: Removing unreachable block (ram,0x00107818) *//* String vformat<int>(String const&, int const) */String *vformat<int>(String *param_1, int param_2) {
   char cVar1;
   Variant *this;
   int in_EDX;
   undefined4 in_register_00000034;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c8[8];
   undefined8 local_c0[9];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, in_EDX);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c8);
   iVar2 = (int)local_c8;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_c0[0];
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
/* WARNING: Removing unreachable block (ram,0x00107b18) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* CallableCustomMethodPointer<RenameDialog, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<RenameDialog,void>::call(CallableCustomMethodPointer<RenameDialog,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_00107edf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_00107edf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00107eb8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00107fa1;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00107edf:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC18, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00107fa1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<RenameDialog, void, int>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<RenameDialog,void,int>::call(CallableCustomMethodPointer<RenameDialog,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_00108168;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_00108168;
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
            uVar4 = _LC19;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00108117. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
               return;
            }

            goto LAB_0010822a;
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
      LAB_00108168:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC18, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010822a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<RenameDialog, void, bool>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<RenameDialog,void,bool>::call(CallableCustomMethodPointer<RenameDialog,void,bool> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ulong *puVar7;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar8;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar6 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar6 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar8 = (char)ObjectDB::spin_lock == '\0';
         if (bVar8) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar8) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar7 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001083e9;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar7[1] == 0) goto LAB_001083e9;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 1);
            uVar4 = _LC20;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            bVar8 = Variant::operator_cast_to_bool(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00108398. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), bVar8);
               return;
            }

            goto LAB_001084ab;
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
      LAB_001083e9:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC18, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001084ab:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<RenameDialog, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<RenameDialog,void,String_const&>::call(CallableCustomMethodPointer<RenameDialog,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  uVar3 = _LC21;
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

            goto LAB_0010857e;
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
   _err_print_error(&_LC18, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
   CowData<char32_t>::_unref(local_48);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   LAB_0010857e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RenameDialog::~RenameDialog() */void RenameDialog::~RenameDialog(RenameDialog *this) {
   NodePath *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)( this + 0xe78 );
   *(undefined***)this = &PTR__initialize_classv_0010f198;
   if (plVar3 != (long*)0x0) {
      do {
         this_00 = (NodePath*)*plVar3;
         if (this_00 == (NodePath*)0x0) {
            if ((int)plVar3[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010883c;
            }

            break;
         }

         if (*(long**)( this_00 + 0x20 ) == plVar3) {
            lVar2 = *(long*)( this_00 + 0x10 );
            lVar1 = *(long*)( this_00 + 0x18 );
            *plVar3 = lVar2;
            if (this_00 == (NodePath*)plVar3[1]) {
               plVar3[1] = lVar1;
            }

            if (lVar1 != 0) {
               *(long*)( lVar1 + 0x10 ) = lVar2;
               lVar2 = *(long*)( this_00 + 0x10 );
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x18 ) = lVar1;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( this_00 + 8 ));
            NodePath::~NodePath(this_00);
            Memory::free_static(this_00, false);
            *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar3 = *(long**)( this + 0xe78 );
      }
 while ( (int)plVar3[2] != 0 );
      Memory::free_static(plVar3, false);
   }

   LAB_0010883c:*(undefined***)this = &PTR__initialize_classv_0010ef20;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* RenameDialog::~RenameDialog() */void RenameDialog::~RenameDialog(RenameDialog *this) {
   NodePath *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)( this + 0xe78 );
   *(undefined***)this = &PTR__initialize_classv_0010f198;
   if (plVar3 != (long*)0x0) {
      do {
         this_00 = (NodePath*)*plVar3;
         if (this_00 == (NodePath*)0x0) {
            if ((int)plVar3[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010896c;
            }

            break;
         }

         if (*(long**)( this_00 + 0x20 ) == plVar3) {
            lVar2 = *(long*)( this_00 + 0x10 );
            lVar1 = *(long*)( this_00 + 0x18 );
            *plVar3 = lVar2;
            if (this_00 == (NodePath*)plVar3[1]) {
               plVar3[1] = lVar1;
            }

            if (lVar1 != 0) {
               *(long*)( lVar1 + 0x10 ) = lVar2;
               lVar2 = *(long*)( this_00 + 0x10 );
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x18 ) = lVar1;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)( this_00 + 8 ));
            NodePath::~NodePath(this_00);
            Memory::free_static(this_00, false);
            *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar3 = *(long**)( this + 0xe78 );
      }
 while ( (int)plVar3[2] != 0 );
      Memory::free_static(plVar3, false);
   }

   LAB_0010896c:*(undefined***)this = &PTR__initialize_classv_0010ef20;
   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xeb0);
   return;
}
/* RenameDialog::_error_handler(void*, char const*, char const*, int, char const*, char const*,
   bool, ErrorHandlerType) [clone .cold] */void RenameDialog::_error_handler(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RenameDialog::_bind_methods() [clone .cold] */void RenameDialog::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RenameDialog::_update_preview(String const&) [clone .part.0] [clone .cold] */void RenameDialog::_update_preview(String *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
                  if ((code*)PTR__bind_methods_00113060 != Node::_bind_methods) {
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
         if ((code*)PTR__bind_compatibility_methods_00113050 != Object::_bind_compatibility_methods) {
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
      if ((code*)PTR__bind_methods_00113058 != AcceptDialog::_bind_methods) {
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
                     if ((code*)PTR__bind_methods_00113060 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_00113068 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_00113070 != Container::_bind_methods) {
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
                     if ((code*)PTR__bind_methods_00113060 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_00113068 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_00113070 != Container::_bind_methods) {
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
      local_58 = "HBoxContainer";
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
            if (pvVar5 == (void*)0x0) goto LAB_0010a035;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010a035:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010a0ff;
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

      LAB_0010a0ff:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010a1b3;
   }

   cVar6 = String::operator ==(param_1, "Node");
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
         if (cVar6 != '\0') goto LAB_0010a1b3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_0010a1b3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Window::is_class(String const&) const */undefined8 Window::is_class(Window *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010a32f;
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

      LAB_0010a32f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010a3e3;
   }

   cVar6 = String::operator ==(param_1, "Window");
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
         if (cVar6 != '\0') goto LAB_0010a3e3;
      }

      cVar6 = String::operator ==(param_1, "Viewport");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Node::is_class((Node*)this, param_1);
            return uVar8;
         }

         goto LAB_0010a4ee;
      }

   }

   LAB_0010a3e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010a4ee:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* ConfirmationDialog::is_class(String const&) const */undefined8 ConfirmationDialog::is_class(ConfirmationDialog *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010a56f;
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

      LAB_0010a56f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010a623;
   }

   cVar6 = String::operator ==(param_1, "ConfirmationDialog");
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
         if (cVar6 != '\0') goto LAB_0010a623;
      }

      cVar6 = String::operator ==(param_1, "AcceptDialog");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Window::is_class((Window*)this, param_1);
            return uVar8;
         }

         goto LAB_0010a72e;
      }

   }

   LAB_0010a623:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010a72e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RenameDialog::is_class(String const&) const */undefined8 RenameDialog::is_class(RenameDialog *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010a7af;
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

      LAB_0010a7af:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010a863;
   }

   cVar5 = String::operator ==(param_1, "RenameDialog");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = ConfirmationDialog::is_class((ConfirmationDialog*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010a863:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010a92f;
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

      LAB_0010a92f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010a9e3;
   }

   cVar6 = String::operator ==(param_1, "Control");
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
         if (cVar6 != '\0') goto LAB_0010a9e3;
      }

      cVar6 = String::operator ==(param_1, "CanvasItem");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Node::is_class((Node*)this, param_1);
            return uVar8;
         }

         goto LAB_0010aaee;
      }

   }

   LAB_0010a9e3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010aaee:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010ab6f;
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

      LAB_0010ab6f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010ac23;
   }

   cVar6 = String::operator ==(param_1, "BoxContainer");
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
         if (cVar6 != '\0') goto LAB_0010ac23;
      }

      cVar6 = String::operator ==(param_1, "Container");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = Control::is_class((Control*)this, param_1);
            return uVar8;
         }

         goto LAB_0010ad2e;
      }

   }

   LAB_0010ac23:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010ad2e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* VBoxContainer::is_class(String const&) const */undefined8 VBoxContainer::is_class(VBoxContainer *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010adaf;
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

      LAB_0010adaf:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010ae63;
   }

   cVar5 = String::operator ==(param_1, "VBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010ae63:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HBoxContainer::is_class(String const&) const */undefined8 HBoxContainer::is_class(HBoxContainer *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010af2f;
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

      LAB_0010af2f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010afe3;
   }

   cVar5 = String::operator ==(param_1, "HBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010afe3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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

         goto LAB_0010b19c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b19c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

         goto LAB_0010b6b1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010b6b1:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00113078 != Object::_get_property_list) {
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
/* RenameDialog::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RenameDialog::_get_property_listv(RenameDialog *this, List *param_1, bool param_2) {
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
   local_78 = "RenameDialog";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "RenameDialog";
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

         goto LAB_0010bee1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010bee1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "RenameDialog", false);
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

         goto LAB_0010c191;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010c191:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00113080 != Object::_get_property_list) {
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

         goto LAB_0010c461;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010c461:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00113088 != CanvasItem::_get_property_list) {
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

         goto LAB_0010c731;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010c731:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010c9e1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010c9e1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_0010cc91;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010cc91:local_b0 = (CowData<char32_t>*)&local_58;
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
/* HBoxContainer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void HBoxContainer::_get_property_listv(HBoxContainer *this, List *param_1, bool param_2) {
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

         goto LAB_0010cf41;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010cf41:local_b0 = (CowData<char32_t>*)&local_58;
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
/* MethodBind* create_method_bind<RenameDialog>(void (RenameDialog::*)()) */MethodBind *create_method_bind<RenameDialog>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0010f650;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "RenameDialog";
   local_30 = 0xc;
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
/* RenameDialog::_initialize_classv() */void RenameDialog::_initialize_classv(void) {
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
                     if ((code*)PTR__bind_methods_00113060 != Node::_bind_methods) {
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
            if ((code*)PTR__bind_compatibility_methods_00113050 != Object::_bind_compatibility_methods) {
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
         if ((code*)PTR__bind_methods_00113058 != AcceptDialog::_bind_methods) {
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
      local_58 = "RenameDialog";
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
/* WARNING: Removing unreachable block (ram,0x0010d8e8) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
         _err_print_error(&_LC18, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010dc20;
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

   LAB_0010dc20:*(undefined4*)param_1 = 0;
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

         goto LAB_0010e02f;
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
      /* WARNING: Could not recover jumptable at 0x0010ded6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010e02f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0010e1ef;
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
      /* WARNING: Could not recover jumptable at 0x0010e096. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0010e1ef:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* RenameDialog::RenameDialog(SceneTreeEditor*) */void RenameDialog::_GLOBAL__sub_I_RenameDialog(void) {
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

   if (OptionButton::base_property_helper == '\0') {
      OptionButton::base_property_helper = '\x01';
      OptionButton::base_property_helper._64_8_ = 0;
      OptionButton::base_property_helper._0_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._24_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._40_16_ = (undefined1[16])0x0;
      OptionButton::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, OptionButton::base_property_helper, &__dso_handle);
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
/* RenameDialog::ok_pressed() */void RenameDialog::ok_pressed(RenameDialog *this) {
   rename(this);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RenameDialog::~RenameDialog() */void RenameDialog::~RenameDialog(RenameDialog *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* ConfirmationDialog::~ConfirmationDialog() */void ConfirmationDialog::~ConfirmationDialog(ConfirmationDialog *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RenameDialog, void, String const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RenameDialog, void, bool>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,bool>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RenameDialog, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<RenameDialog, void, int>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<RenameDialog,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<RenameDialog,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


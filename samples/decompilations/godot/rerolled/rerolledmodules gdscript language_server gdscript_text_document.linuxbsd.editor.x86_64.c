/* GDScriptTextDocument::didClose(Variant const&) */void GDScriptTextDocument::didClose(Variant *param_1) {
   return;
}
/* GDScriptTextDocument::foldingRange(Dictionary const&) */Dictionary *GDScriptTextDocument::foldingRange(Dictionary *param_1) {
   Array::Array((Array*)param_1);
   return param_1;
}
/* GDScriptTextDocument::codeLens(Dictionary const&) */Dictionary *GDScriptTextDocument::codeLens(Dictionary *param_1) {
   Array::Array((Array*)param_1);
   return param_1;
}
/* GDScriptTextDocument::colorPresentation(Dictionary const&) */Dictionary *GDScriptTextDocument::colorPresentation(Dictionary *param_1) {
   Array::Array((Array*)param_1);
   return param_1;
}
/* Ref<GDScriptWorkspace>::TEMPNAMEPLACEHOLDERVALUE(Ref<GDScriptWorkspace> const&) [clone .isra.0]
    */void Ref<GDScriptWorkspace>::operator =(Ref<GDScriptWorkspace> *this, Ref *param_1) {
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
/* GDScriptTextDocument::GDScriptTextDocument() */void GDScriptTextDocument::GDScriptTextDocument(GDScriptTextDocument *this) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined8*)( this + 0x180 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00115128;
   Array::Array((Array*)( this + 0x188 ));
   FileAccess::create(&local_28);
   pOVar1 = *(Object**)( this + 0x180 );
   pOVar3 = pOVar1;
   if (local_28 != pOVar1) {
      *(Object**)( this + 0x180 ) = local_28;
      if (local_28 == (Object*)0x0) {
         if (pOVar1 == (Object*)0x0) goto LAB_00100323;
         cVar2 = RefCounted::unreference();
      }
 else {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)( this + 0x180 ) = 0;
         }

         pOVar3 = local_28;
         if (pOVar1 == (Object*)0x0) goto LAB_00100312;
         cVar2 = RefCounted::unreference();
      }

      pOVar3 = local_28;
      if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),pOVar3 = local_28,cVar2 != '\0') {
         ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
         Memory::free_static(pOVar1, false);
         pOVar3 = local_28;
      }

   }

   LAB_00100312:if (( ( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::unreference() ),cVar2 != '\0' )) &&( cVar2 = cVar2 != '\0' )(**(code**)( *(long*)local_28 + 0x140 ))(local_28);
   Memory::free_static(local_28, false);
}
LAB_00100323:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* GDScriptTextDocument::show_native_symbol_in_editor(String const&) */void GDScriptTextDocument::show_native_symbol_in_editor(GDScriptTextDocument *this, String *param_1) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   CallableCustom *this_00;
   long lVar4;
   long in_FS_OFFSET;
   bool bVar5;
   undefined8 local_90;
   Callable local_88[16];
   Variant *local_78[2];
   int local_68[6];
   int local_50[8];
   long local_30;
   lVar3 = ScriptEditor::script_editor;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_00);
   *(long*)( this_00 + 0x28 ) = lVar3;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   *(undefined***)this_00 = &PTR_hash_001153a8;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   uVar2 = *(undefined8*)( lVar3 + 0x60 );
   *(undefined8*)( this_00 + 0x10 ) = 0;
   *(undefined8*)( this_00 + 0x30 ) = uVar2;
   *(code**)( this_00 + 0x38 ) = ScriptEditor::goto_help;
   *(undefined**)( this_00 + 0x20 ) = &_LC39;
   CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
   *(char**)( this_00 + 0x20 ) = "ScriptEditor::goto_help";
   Callable::Callable(local_88, this_00);
   local_90 = 0;
   if (*(long*)param_1 != 0) {
      plVar1 = (long*)( *(long*)param_1 + -0x10 );
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_0010049b;
         LOCK();
         lVar4 = *plVar1;
         bVar5 = lVar3 == lVar4;
         if (bVar5) {
            *plVar1 = lVar3 + 1;
            lVar4 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar5 );
      if (lVar4 != -1) {
         local_90 = *(undefined8*)param_1;
      }

   }

   LAB_0010049b:Variant::Variant((Variant*)local_68, (String*)&local_90);
   Variant::Variant((Variant*)local_50, 0);
   local_78[0] = (Variant*)local_68;
   Callable::call_deferredp((Variant**)local_88, (int)local_78);
   if (Variant::needs_deinit[local_50[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_68[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   Callable::~Callable(local_88);
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Could not recover jumptable at 0x00100536. Too many branches */
   /* WARNING: Treating indirect jump as call */
   ( **(code**)( *DisplayServer::singleton + 0x5d8 ) )(DisplayServer::singleton, 0);
   return;
}
/* GDScriptTextDocument::notify_client_show_symbol(lsp::DocumentSymbol const*) */void GDScriptTextDocument::notify_client_show_symbol(GDScriptTextDocument *this, DocumentSymbol *param_1) {
   String *pSVar1;
   long in_FS_OFFSET;
   Dictionary aDStack_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   pSVar1 = GDScriptLanguageProtocol::singleton;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == (DocumentSymbol*)0x0) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("notify_client_show_symbol", "modules/gdscript/language_server/gdscript_text_document.cpp", 0x89, "Parameter \"symbol\" is null.", 0, 0);
         return;
      }

   }
 else {
      lsp::DocumentSymbol::to_json(SUB81(aDStack_68, 0));
      Variant::Variant((Variant*)local_48, aDStack_68);
      local_58 = "gdscript/show_native_symbol";
      local_60 = 0;
      local_50 = 0x1b;
      String::parse_latin1((StrRange*)&local_60);
      GDScriptLanguageProtocol::notify_client(pSVar1, (Variant*)&local_60, (int)(Variant*)local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary(aDStack_68);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::sync_script_content(String const&, String const&) */void GDScriptTextDocument::sync_script_content(String *param_1, String *param_2) {
   char cVar1;
   Object *pOVar2;
   String *pSVar3;
   long in_FS_OFFSET;
   String aSStack_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   pOVar2 = *(Object**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pOVar2 != (Object*)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         pOVar2 = (Object*)0x0;
      }

   }

   GDScriptWorkspace::get_file_path(aSStack_38);
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   pSVar3 = *(String**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pSVar3 != (String*)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         pSVar3 = (String*)0x0;
      }

   }

   GDScriptWorkspace::parse_script(pSVar3, aSStack_38);
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler((Object*)pSVar3);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pSVar3 + 0x140 ) )(pSVar3);
         Memory::free_static(pSVar3, false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_38);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::reload_script(Ref<GDScript>) */void GDScriptTextDocument::reload_script(undefined8 param_1, long *param_2) {
   Ref *pRVar1;
   String *pSVar2;
   char cVar3;
   Object *pOVar4;
   long in_FS_OFFSET;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ScriptEditor::reload_scripts(SUB81(ScriptEditor::script_editor, 0));
   pRVar1 = ScriptEditor::script_editor;
   local_28 = (Object*)0x0;
   if (*param_2 != 0) {
      pOVar4 = (Object*)__dynamic_cast(*param_2, &Object::typeinfo, &Script::typeinfo, 0);
      if (pOVar4 != (Object*)0x0) {
         local_28 = pOVar4;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_28 = (Object*)0x0;
         }

      }

   }

   ScriptEditor::update_docs_from_script(pRVar1);
   if (local_28 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar4 = local_28;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_28);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   pSVar2 = (String*)ScriptEditor::script_editor;
   Resource::get_path();
   ScriptEditor::trigger_live_script_reload(pSVar2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::documentLink(Dictionary const&) */Dictionary *GDScriptTextDocument::documentLink(Dictionary *param_1) {
   long lVar1;
   char cVar2;
   Variant *in_RDX;
   String *pSVar3;
   long in_FS_OFFSET;
   long local_90;
   long *local_88;
   Variant local_80[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array((Array*)param_1);
   local_90 = 0;
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_80);
   Variant::Variant((Variant*)local_78, "uri");
   Dictionary::operator [](local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   if ((long*)local_90 != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = (long)local_88;
      local_88 = (long*)0x0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_88 = (long*)0x0;
   pSVar3 = *(String**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (( pSVar3 != (String*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
      pSVar3 = (String*)0x0;
   }

   GDScriptWorkspace::resolve_document_links(pSVar3, (List*)&local_90);
   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler((Object*)pSVar3) ),cVar2 != '\0') {
      ( **(code**)( *(long*)pSVar3 + 0x140 ) )(pSVar3);
      Memory::free_static(pSVar3, false);
   }

   if (local_88 != (long*)0x0) {
      for (lVar1 = *local_88; lVar1 != 0; lVar1 = *(long*)( lVar1 + 0x18 )) {
         lsp::DocumentLink::to_json();
         Variant::Variant((Variant*)local_58, (Dictionary*)local_80);
         Array::push_back((Variant*)param_1);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)local_80);
      }

   }

   List<lsp::DocumentLink,DefaultAllocator>::~List((List<lsp::DocumentLink,DefaultAllocator>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* GDScriptTextDocument::nativeSymbol(Dictionary const&) */Dictionary *GDScriptTextDocument::nativeSymbol(Dictionary *param_1) {
   long lVar1;
   char cVar2;
   DocumentSymbol *pDVar3;
   Variant *in_RDX;
   NativeSymbolInspectParams *pNVar4;
   GDScriptTextDocument *in_RSI;
   long in_FS_OFFSET;
   long local_70;
   undefined1 local_68[16];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   local_68 = (undefined1[16])0x0;
   Variant::Variant((Variant*)local_58, "native_class");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)&local_70);
   if (local_68._0_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      lVar1 = local_70;
      local_70 = 0;
      local_68._0_8_ = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "symbol_name");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String((Variant*)&local_70);
   if (local_68._8_8_ != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( local_68 + 8 ));
      lVar1 = local_70;
      local_70 = 0;
      local_68._8_8_ = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pNVar4 = *(NativeSymbolInspectParams**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pNVar4 != (NativeSymbolInspectParams*)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         pNVar4 = (NativeSymbolInspectParams*)0x0;
      }

   }

   pDVar3 = (DocumentSymbol*)GDScriptWorkspace::resolve_native_symbol(pNVar4);
   cVar2 = RefCounted::unreference();
   if (cVar2 != '\0') {
      cVar2 = predelete_handler((Object*)pNVar4);
      if (cVar2 != '\0') {
         ( **(code**)( *(long*)pNVar4 + 0x140 ) )(pNVar4);
         Memory::free_static(pNVar4, false);
      }

   }

   if (pDVar3 != (DocumentSymbol*)0x0) {
      lsp::DocumentSymbol::to_json(SUB81((Variant*)&local_70, 0));
      Variant::Variant((Variant*)local_58, (Dictionary*)&local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(int*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      Dictionary::~Dictionary((Dictionary*)&local_70);
      notify_client_show_symbol(in_RSI, pDVar3);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( local_68 + 8 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::load_document_item(Variant const&) */Variant *GDScriptTextDocument::load_document_item(Variant *param_1) {
   long in_FS_OFFSET;
   Variant aVStack_58[8];
   Variant local_50[8];
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
   *(undefined4*)( param_1 + 0x10 ) = 0;
   *(undefined8*)( param_1 + 0x18 ) = 0;
   Variant::operator_cast_to_Dictionary(aVStack_58);
   Variant::Variant((Variant*)local_48, "textDocument");
   Dictionary::operator [](aVStack_58);
   Variant::operator_cast_to_Dictionary(local_50);
   lsp::TextDocumentItem::load((TextDocumentItem*)param_1, (Dictionary*)local_50);
   Dictionary::~Dictionary((Dictionary*)local_50);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)aVStack_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::willSaveWaitUntil(Variant const&) */void GDScriptTextDocument::willSaveWaitUntil(Variant *param_1) {
   char cVar1;
   Object *pOVar2;
   long in_FS_OFFSET;
   String local_80[8];
   Object *local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   Variant local_58[8];
   CowData<char32_t> local_50[16];
   CowData<char32_t> local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   load_document_item(local_58);
   pOVar2 = *(Object**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pOVar2 != (Object*)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         pOVar2 = (Object*)0x0;
      }

   }

   GDScriptWorkspace::get_file_path(local_80);
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar2);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
      }

   }

   local_70 = 0;
   local_60 = 0;
   local_68 = (Object*)&_LC39;
   String::parse_latin1((StrRange*)&local_70);
   ResourceLoader::load(&local_68, local_80, (StrRange*)&local_70, 1, 0);
   local_78 = (Object*)0x0;
   if (local_68 != (Object*)0x0) {
      pOVar2 = (Object*)__dynamic_cast(local_68, &Object::typeinfo, &Script::typeinfo, 0);
      if (pOVar2 != (Object*)0x0) {
         local_78 = pOVar2;
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            local_78 = (Object*)0x0;
         }

         if (local_68 == (Object*)0x0) goto LAB_00100f72;
      }

      cVar1 = RefCounted::unreference();
      pOVar2 = local_68;
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_68);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00100f72:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   if (local_78 != (Object*)0x0) {
      ScriptEditor::clear_docs_from_script(ScriptEditor::script_editor);
      if (local_78 != (Object*)0x0) {
         cVar1 = RefCounted::unreference();
         pOVar2 = local_78;
         if (cVar1 != '\0') {
            cVar1 = predelete_handler(local_78);
            if (cVar1 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
   CowData<char32_t>::_unref(local_40);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::didOpen(Variant const&) */void GDScriptTextDocument::didOpen(Variant *param_1) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   CowData<char32_t> local_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   load_document_item((Variant*)&local_48);
   sync_script_content((String*)param_1, (String*)&local_48);
   CowData<char32_t>::_unref(local_30);
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

   lVar2 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::didSave(Variant const&) */void GDScriptTextDocument::didSave(Variant *param_1) {
   undefined8 uVar1;
   code *pcVar2;
   char cVar3;
   String SVar4;
   int iVar5;
   String *pSVar6;
   CallableCustom *this;
   long *plVar7;
   String *pSVar8;
   long lVar9;
   Object *pOVar10;
   long in_FS_OFFSET;
   Variant local_d8[8];
   Variant local_d0[8];
   String local_c8[8];
   undefined8 local_c0;
   String *local_b8;
   undefined8 local_b0;
   Variant local_a8[8];
   CowData<char32_t> local_a0[16];
   CowData<char32_t> local_90[8];
   Variant *local_88[2];
   int local_78[6];
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   load_document_item(local_a8);
   Variant::operator_cast_to_Dictionary(local_d8);
   Variant::Variant((Variant*)local_78, "text");
   Dictionary::operator [](local_d8);
   Variant::operator_cast_to_String(local_d0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   sync_script_content((String*)param_1, (String*)local_a8);
   pOVar10 = *(Object**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (( pOVar10 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
      pOVar10 = (Object*)0x0;
   }

   GDScriptWorkspace::get_file_path(local_c8);
   cVar3 = RefCounted::unreference();
   if (( cVar3 != '\0' ) && ( cVar3 = cVar3 != '\0' )) {
      ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
      Memory::free_static(pOVar10, false);
   }

   local_c0 = 0;
   local_b8 = (String*)&_LC39;
   local_b0 = 0;
   String::parse_latin1((StrRange*)&local_c0);
   ResourceLoader::load((Callable*)&local_b8, local_c8, (StrRange*)&local_c0, 1, 0);
   if (local_b8 == (String*)0x0) {
      LAB_00101502:CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   }
 else {
      pSVar6 = (String*)__dynamic_cast(local_b8, &Object::typeinfo, &GDScript::typeinfo, 0);
      if (pSVar6 == (String*)0x0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 == '\0') goto LAB_00101502;
         LAB_00101640:pSVar6 = (String*)0x0;
         LAB_00101642:pSVar8 = local_b8;
         cVar3 = predelete_handler((Object*)local_b8);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pSVar8 + 0x140 ) )();
            Memory::free_static(pSVar8, false);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         if (pSVar6 == (String*)0x0) goto LAB_0010150a;
      }
 else {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            if (( local_b8 != (String*)0x0 ) && ( cVar3 = cVar3 != '\0' )) goto LAB_00101640;
            goto LAB_00101502;
         }

         if (( local_b8 != (String*)0x0 ) && ( cVar3 = cVar3 != '\0' )) goto LAB_00101642;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
      }

      iVar5 = GDScript::load_source_code(pSVar6);
      if (iVar5 == 0) {
         lVar9 = *(long*)pSVar6;
         if (*(code**)( lVar9 + 0x270 ) == GDScript::is_tool) {
            SVar4 = pSVar6[0x240];
         }
 else {
            SVar4 = ( String )(**(code**)( lVar9 + 0x270 ))(pSVar6);
            lVar9 = *(long*)pSVar6;
         }

         if (SVar4 == (String)0x0) {
            ( **(code**)( lVar9 + 0x228 ) )(pSVar6, 1);
         }
 else {
            plVar7 = (long*)( **(code**)( lVar9 + 0x288 ) )(pSVar6);
            pcVar2 = *(code**)( *plVar7 + 0x2c8 );
            local_b8 = (String*)0x0;
            pSVar8 = (String*)__dynamic_cast(pSVar6, &Object::typeinfo, &Script::typeinfo, 0);
            if (( pSVar8 != (String*)0x0 ) && ( local_b8 = pSVar8 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
               local_b8 = (String*)0x0;
            }

            ( *pcVar2 )(plVar7, (Callable*)&local_b8, 1);
            if (( ( local_b8 != (String*)0x0 ) && ( cVar3 = RefCounted::unreference() ),pSVar8 = local_b8,cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pSVar8 + 0x140 ))(pSVar8);
            Memory::free_static(pSVar8, false);
         }

      }

      ( **(code**)( *(long*)pSVar6 + 0x2a8 ) )(pSVar6);
      if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
         Thread::caller_id();
      }

      if (*(long*)( in_FS_OFFSET + lRam0000000000101382 ) == 1) {
         local_b8 = pSVar6;
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            local_b8 = (String*)0x0;
            reload_script((GDScriptTextDocument*)param_1);
         }
 else {
            reload_script((GDScriptTextDocument*)param_1);
            cVar3 = RefCounted::unreference();
            if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pSVar6) ),cVar3 != '\0') {
               ( **(code**)( *(long*)pSVar6 + 0x140 ) )(pSVar6);
               Memory::free_static(pSVar6, false);
            }

         }

      }
 else {
         this(CallableCustom * operator_new(0x48, ""));
         CallableCustom::CallableCustom(this);
         *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
         *(undefined**)( this + 0x20 ) = &_LC39;
         *(undefined***)this = &PTR_hash_00115288;
         *(undefined8*)( this + 0x40 ) = 0;
         *(Variant**)( this + 0x28 ) = param_1;
         uVar1 = *(undefined8*)( param_1 + 0x60 );
         *(undefined8*)( this + 0x10 ) = 0;
         *(undefined8*)( this + 0x30 ) = uVar1;
         *(code**)( this + 0x38 ) = reload_script;
         CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
         *(char**)( this + 0x20 ) = "GDScriptTextDocument::reload_script";
         Callable::Callable((Callable*)&local_b8, this);
         cVar3 = RefCounted::reference();
         pOVar10 = (Object*)0x0;
         if (cVar3 != '\0') {
            pOVar10 = (Object*)pSVar6;
         }

         Variant::Variant((Variant*)local_78, pOVar10);
         Variant::Variant((Variant*)local_60, 0);
         local_88[0] = (Variant*)local_78;
         Callable::call_deferredp((Variant**)&local_b8, (int)local_88);
         if (Variant::needs_deinit[local_60[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( ( pOVar10 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar10 + 0x140 ))(pOVar10);
         Memory::free_static(pOVar10, false);
      }

      Callable::~Callable((Callable*)&local_b8);
   }

}
cVar3 = RefCounted::unreference();if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler((Object*)pSVar6) ),cVar3 != '\0') {
   ( **(code**)( *(long*)pSVar6 + 0x140 ) )(pSVar6);
   Memory::free_static(pSVar6, false);
}
}LAB_0010150a:CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);Dictionary::~Dictionary((Dictionary*)local_d8);CowData<char32_t>::_unref(local_90);CowData<char32_t>::_unref(local_a0);CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* GDScriptTextDocument::rename(Dictionary const&) */Dictionary *GDScriptTextDocument::rename(Dictionary *param_1) {
   char cVar1;
   int iVar2;
   Variant *pVVar3;
   Variant *in_RDX;
   Object *pOVar4;
   long in_FS_OFFSET;
   long local_98;
   Variant local_90[8];
   long local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_80 = 0;
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_90);
   Variant::Variant((Variant*)local_78, "uri");
   Dictionary::operator [](local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   if (local_88 != local_98) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      local_88 = local_98;
      local_98 = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "position");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_90);
   Variant::Variant((Variant*)local_78, "line");
   pVVar3 = (Variant*)Dictionary::operator [](local_90);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   local_80 = CONCAT44(local_80._4_4_, iVar2);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar3 = (Variant*)Dictionary::operator [](local_90);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   local_80 = CONCAT44(iVar2, (undefined4)local_80);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "newName");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_String(local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pOVar4 = *(Object**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pOVar4 != (Object*)0x0) {
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         pOVar4 = (Object*)0x0;
      }

   }

   GDScriptWorkspace::rename((TextDocumentPositionParams*)param_1, (String*)pOVar4);
   cVar1 = RefCounted::unreference();
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(pOVar4);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::didChange(Variant const&) */void GDScriptTextDocument::didChange(Variant *param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   Variant local_b0[8];
   Variant local_a8[8];
   Variant local_a0[8];
   Variant local_98[8];
   CowData<char32_t> local_90[16];
   long local_80;
   TextDocumentContentChangeEvent local_78[16];
   undefined4 local_68;
   long local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   load_document_item(local_98);
   Variant::operator_cast_to_Dictionary(local_b0);
   Variant::Variant((Variant*)local_58, "contentChanges");
   Dictionary::operator [](local_b0);
   Variant::operator_cast_to_Array(local_a8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   iVar4 = 0;
   while (true) {
      iVar3 = Array::size();
      if (iVar3 <= iVar4) break;
      for (int i = 0; i < 16; i++) {
         local_78[i] = (TextDocumentContentChangeEvent)0;
      }

      local_68 = 0;
      local_60 = 0;
      Array::operator []((int)local_a8);
      Variant::operator_cast_to_Dictionary(local_a0);
      lsp::TextDocumentContentChangeEvent::load(local_78, (Dictionary*)local_a0);
      Dictionary::~Dictionary((Dictionary*)local_a0);
      lVar2 = local_60;
      if (local_80 != local_60) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_60);
      }

      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( local_60 + -0x10 ), false);
         }

      }

      iVar4 = iVar4 + 1;
   }
;
   sync_script_content((String*)param_1, (String*)local_98);
   Array::~Array((Array*)local_a8);
   Dictionary::~Dictionary((Dictionary*)local_b0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref(local_90);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::signatureHelp(Dictionary const&) */Dictionary *GDScriptTextDocument::signatureHelp(Dictionary *param_1) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   code *pcVar6;
   CowData<char32_t> *pCVar7;
   char cVar8;
   int iVar9;
   Variant *pVVar10;
   Variant *in_RDX;
   CowData<char32_t> *pCVar11;
   TextDocumentPositionParams *pTVar12;
   long lVar13;
   long lVar14;
   long *plVar15;
   long in_FS_OFFSET;
   long local_b0;
   long local_a8;
   undefined8 local_a0;
   Variant local_98[8];
   CowData<char32_t> *local_90;
   undefined8 local_88;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   local_a8 = 0;
   local_a0 = 0;
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_98);
   Variant::Variant((Variant*)local_78, "uri");
   Dictionary::operator [](local_98);
   Variant::operator_cast_to_String((Variant*)&local_b0);
   if (local_a8 != local_b0) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      local_a8 = local_b0;
      local_b0 = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "position");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_98);
   Variant::Variant((Variant*)local_78, "line");
   pVVar10 = (Variant*)Dictionary::operator [](local_98);
   iVar9 = Variant::operator_cast_to_int(pVVar10);
   local_a0 = CONCAT44(local_a0._4_4_, iVar9);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar10 = (Variant*)Dictionary::operator [](local_98);
   iVar9 = Variant::operator_cast_to_int(pVVar10);
   local_a0 = CONCAT44(iVar9, (undefined4)local_a0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_90 = (CowData<char32_t>*)0x0;
   local_88 = 0;
   pTVar12 = *(TextDocumentPositionParams**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pTVar12 != (TextDocumentPositionParams*)0x0) {
      cVar8 = RefCounted::reference();
      if (cVar8 == '\0') {
         pTVar12 = (TextDocumentPositionParams*)0x0;
      }

   }

   iVar9 = GDScriptWorkspace::resolve_signature(pTVar12, (SignatureHelp*)&local_a8);
   cVar8 = RefCounted::unreference();
   if (cVar8 != '\0') {
      cVar8 = predelete_handler((Object*)pTVar12);
      if (cVar8 != '\0') {
         ( **(code**)( *(long*)pTVar12 + 0x140 ) )(pTVar12);
         Memory::free_static(pTVar12, false);
      }

   }

   if (iVar9 == 0) {
      lsp::SignatureHelp::to_json();
      Variant::Variant((Variant*)local_58, (Dictionary*)&local_b0);
      Variant::operator =((Variant*)param_1, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)&local_b0);
   }

   pCVar7 = local_90;
   if (local_90 != (CowData<char32_t>*)0x0) {
      LOCK();
      pCVar11 = local_90 + -0x10;
      *(long*)pCVar11 = *(long*)pCVar11 + -1;
      UNLOCK();
      if (*(long*)pCVar11 == 0) {
         if (local_90 == (CowData<char32_t>*)0x0) {
            /* WARNING: Does not return */
            pcVar6 = (code*)invalidInstructionException();
            ( *pcVar6 )();
         }

         lVar3 = *(long*)( local_90 + -8 );
         local_90 = (CowData<char32_t>*)0x0;
         if (lVar3 != 0) {
            lVar13 = 0;
            pCVar11 = pCVar7;
            do {
               if (*(long*)( pCVar11 + 0x20 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pCVar11 + 0x20 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     plVar1 = *(long**)( pCVar11 + 0x20 );
                     if (plVar1 == (long*)0x0) {
                        /* WARNING: Does not return */
                        pcVar6 = (code*)invalidInstructionException();
                        ( *pcVar6 )();
                     }

                     lVar4 = plVar1[-1];
                     *(undefined8*)( pCVar11 + 0x20 ) = 0;
                     if (lVar4 != 0) {
                        lVar14 = 0;
                        plVar15 = plVar1;
                        do {
                           if (plVar15[2] != 0) {
                              LOCK();
                              plVar2 = (long*)( plVar15[2] + -0x10 );
                              *plVar2 = *plVar2 + -1;
                              UNLOCK();
                              if (*plVar2 == 0) {
                                 lVar5 = plVar15[2];
                                 plVar15[2] = 0;
                                 Memory::free_static((void*)( lVar5 + -0x10 ), false);
                              }

                           }

                           if (plVar15[1] != 0) {
                              LOCK();
                              plVar2 = (long*)( plVar15[1] + -0x10 );
                              *plVar2 = *plVar2 + -1;
                              UNLOCK();
                              if (*plVar2 == 0) {
                                 lVar5 = plVar15[1];
                                 plVar15[1] = 0;
                                 Memory::free_static((void*)( lVar5 + -0x10 ), false);
                              }

                           }

                           if (*plVar15 != 0) {
                              LOCK();
                              plVar2 = (long*)( *plVar15 + -0x10 );
                              *plVar2 = *plVar2 + -1;
                              UNLOCK();
                              if (*plVar2 == 0) {
                                 lVar5 = *plVar15;
                                 *plVar15 = 0;
                                 Memory::free_static((void*)( lVar5 + -0x10 ), false);
                              }

                           }

                           lVar14 = lVar14 + 1;
                           plVar15 = plVar15 + 3;
                        }
 while ( lVar4 != lVar14 );
                     }

                     Memory::free_static(plVar1 + -2, false);
                  }

               }

               lVar13 = lVar13 + 1;
               CowData<char32_t>::_unref(pCVar11 + 0x10);
               CowData<char32_t>::_unref(pCVar11 + 8);
               CowData<char32_t>::_unref(pCVar11);
               pCVar11 = pCVar11 + 0x28;
            }
 while ( lVar3 != lVar13 );
         }

         Memory::free_static(pCVar7 + -0x10, false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::references(Dictionary const&) */Dictionary *GDScriptTextDocument::references(Dictionary *param_1) {
   long *plVar1;
   CowData<char32_t> *pCVar2;
   code *pcVar3;
   char cVar4;
   int iVar5;
   Variant *pVVar6;
   long lVar7;
   long lVar8;
   Variant *in_RDX;
   CowData<char32_t> *pCVar9;
   long lVar10;
   String *pSVar11;
   TextDocumentPositionParams *pTVar12;
   long lVar13;
   long in_FS_OFFSET;
   bool bVar14;
   int local_fc;
   Dictionary local_e0[8];
   Dictionary local_d8[8];
   TextDocumentPositionParams *local_d0;
   long local_c8;
   CowData<char32_t> *local_c0;
   long local_b8;
   undefined8 local_b0;
   char local_a8;
   undefined *local_98;
   undefined8 local_90;
   undefined8 uStack_88;
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array((Array*)param_1);
   local_b8 = 0;
   local_b0 = 0;
   local_a8 = '\0';
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary((Variant*)&local_98);
   Variant::Variant((Variant*)local_78, "uri");
   Dictionary::operator []((Variant*)&local_98);
   Variant::operator_cast_to_String((Variant*)&local_c8);
   if (local_b8 != local_c8) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      local_b8 = local_c8;
      local_c8 = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "position");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary((Variant*)&local_98);
   Variant::Variant((Variant*)local_78, "line");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_98);
   iVar5 = Variant::operator_cast_to_int(pVVar6);
   local_b0 = CONCAT44(local_b0._4_4_, iVar5);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_98);
   iVar5 = Variant::operator_cast_to_int(pVVar6);
   local_b0 = CONCAT44(iVar5, (undefined4)local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pTVar12 = *(TextDocumentPositionParams**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (( pTVar12 == (TextDocumentPositionParams*)0x0 ) || ( local_d0 = pTVar12 ),cVar4 = RefCounted::reference(),cVar4 == '\0') {
      local_d0 = (TextDocumentPositionParams*)0x0;
      pTVar12 = (TextDocumentPositionParams*)0x0;
   }

   local_c8 = 0;
   local_98 = &_LC39;
   local_90 = 0;
   String::parse_latin1((StrRange*)&local_c8);
   lVar7 = GDScriptWorkspace::resolve_symbol(pTVar12, (String*)&local_b8, SUB81((Variant*)&local_c8, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_d0);
   if (lVar7 != 0) {
      local_98 = *(undefined**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
      if (( local_98 == (undefined*)0x0 ) || ( cVar4 = cVar4 == '\0' )) {
         local_98 = (undefined*)0x0;
      }

      GDScriptWorkspace::find_all_usages((DocumentSymbol*)&local_c8);
      Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_98);
      lVar13 = 0;
      iVar5 = (int)param_1;
      Array::resize(iVar5);
      local_fc = 0;
      if (local_c0 != (CowData<char32_t>*)0x0) {
         do {
            if (*(long*)( local_c0 + -8 ) <= lVar13) {
               if (0 < local_fc) goto LAB_00102a20;
               goto LAB_00102a42;
            }

            local_98 = (undefined*)0x0;
            pCVar2 = local_c0 + lVar13 * 0x18;
            plVar1 = (long*)( *(long*)pCVar2 + -0x10 );
            if (*(long*)pCVar2 != 0) {
               do {
                  lVar10 = *plVar1;
                  if (lVar10 == 0) goto LAB_0010298f;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar14 = lVar10 == lVar8;
                  if (bVar14) {
                     *plVar1 = lVar10 + 1;
                     lVar8 = lVar10;
                  }

                  UNLOCK();
               }
 while ( !bVar14 );
               if (lVar8 != -1) {
                  local_98 = *(undefined**)pCVar2;
               }

            }

            LAB_0010298f:local_90 = *(long*)( pCVar2 + 8 );
            uStack_88 = *(long*)( pCVar2 + 0x10 );
            if (( ( ( local_a8 == '\0' ) && ( (int)local_90 == *(int*)( lVar7 + 0x28 ) ) ) && ( local_90._4_4_ = (int)( (ulong)local_90 >> 0x20 ) ),local_90._4_4_ == *(int*)( lVar7 + 0x2c ) )) {
               local_fc = local_fc + 1;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            }
 else {
               if (local_c0 == (CowData<char32_t>*)0x0) {
                  lVar10 = 0;
                  LAB_00102aeb:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, lVar10, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               lVar10 = *(long*)( local_c0 + -8 );
               if (lVar10 <= lVar13) goto LAB_00102aeb;
               pSVar11 = (String*)( local_c0 + lVar13 * 0x18 );
               Dictionary::Dictionary(local_e0);
               Variant::Variant((Variant*)local_58, pSVar11);
               Variant::Variant((Variant*)local_78, "uri");
               pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_e0);
               if (pVVar6 != (Variant*)local_58) {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_58[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_50;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
                  local_58[0] = 0;
               }

               if (Variant::needs_deinit[local_78[0]] == '\0') {
                  cVar4 = Variant::needs_deinit[local_58[0]];
               }
 else {
                  Variant::_clear_internal();
                  cVar4 = Variant::needs_deinit[local_58[0]];
               }

               if (cVar4 != '\0') {
                  Variant::_clear_internal();
               }

               Dictionary::Dictionary((Dictionary*)&local_d0);
               Dictionary::Dictionary(local_d8);
               Variant::Variant((Variant*)local_58, *(int*)( pSVar11 + 8 ));
               Variant::Variant((Variant*)local_78, "line");
               pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_d8);
               if (pVVar6 != (Variant*)local_58) {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_58[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_50;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
                  local_58[0] = 0;
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Variant::Variant((Variant*)local_58, *(int*)( pSVar11 + 0xc ));
               Variant::Variant((Variant*)local_78, "character");
               pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_d8);
               if (pVVar6 != (Variant*)local_58) {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_58[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_50;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
                  local_58[0] = 0;
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Variant::Variant((Variant*)local_78, local_d8);
               Variant::Variant((Variant*)local_58, "start");
               pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_d0);
               if (pVVar6 != (Variant*)local_78) {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_78[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_70;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_68;
                  local_78[0] = 0;
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Dictionary::~Dictionary(local_d8);
               Dictionary::Dictionary(local_d8);
               Variant::Variant((Variant*)local_58, *(int*)( pSVar11 + 0x10 ));
               Variant::Variant((Variant*)local_78, "line");
               pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_d8);
               if (pVVar6 != (Variant*)local_58) {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_58[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_50;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
                  local_58[0] = 0;
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Variant::Variant((Variant*)local_58, *(int*)( pSVar11 + 0x14 ));
               Variant::Variant((Variant*)local_78, "character");
               pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_d8);
               if (pVVar6 != (Variant*)local_58) {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_58[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_50;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
                  local_58[0] = 0;
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Variant::Variant((Variant*)local_78, local_d8);
               Variant::Variant((Variant*)local_58, "end");
               pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_d0);
               if (pVVar6 != (Variant*)local_78) {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_78[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_70;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_68;
                  local_78[0] = 0;
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Dictionary::~Dictionary(local_d8);
               Variant::Variant((Variant*)local_58, (Dictionary*)&local_d0);
               Variant::Variant((Variant*)local_78, "range");
               pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_e0);
               if (pVVar6 != (Variant*)local_58) {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_58[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_50;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
                  local_58[0] = 0;
               }

               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Dictionary::~Dictionary((Dictionary*)&local_d0);
               Variant::Variant((Variant*)local_58, local_e0);
               pVVar6 = (Variant*)Array::operator [](iVar5);
               if (pVVar6 == (Variant*)local_58) {
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

               }
 else {
                  if (Variant::needs_deinit[*(int*)pVVar6] != '\0') {
                     Variant::_clear_internal();
                  }

                  *(undefined4*)pVVar6 = 0;
                  *(int*)pVVar6 = local_58[0];
                  *(undefined8*)( pVVar6 + 8 ) = local_50;
                  *(undefined8*)( pVVar6 + 0x10 ) = uStack_48;
               }

               Dictionary::~Dictionary(local_e0);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            }

            lVar13 = lVar13 + 1;
         }
 while ( local_c0 != (CowData<char32_t>*)0x0 );
         if (0 < local_fc) {
            LAB_00102a20:Array::size();
            Array::resize(iVar5);
            LAB_00102a42:pCVar2 = local_c0;
            if (local_c0 != (CowData<char32_t>*)0x0) {
               LOCK();
               pCVar9 = local_c0 + -0x10;
               *(long*)pCVar9 = *(long*)pCVar9 + -1;
               UNLOCK();
               if (*(long*)pCVar9 == 0) {
                  if (local_c0 == (CowData<char32_t>*)0x0) {
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  lVar7 = *(long*)( local_c0 + -8 );
                  lVar13 = 0;
                  local_c0 = (CowData<char32_t>*)0x0;
                  pCVar9 = pCVar2;
                  if (lVar7 != 0) {
                     do {
                        lVar13 = lVar13 + 1;
                        CowData<char32_t>::_unref(pCVar9);
                        pCVar9 = pCVar9 + 0x18;
                     }
 while ( lVar7 != lVar13 );
                  }

                  Memory::free_static(pCVar2 + -0x10, false);
               }

            }

         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::find_symbols(lsp::TextDocumentPositionParams const&,
   List<lsp::DocumentSymbol const*, DefaultAllocator>&) */TextDocumentPositionParams *GDScriptTextDocument::find_symbols(TextDocumentPositionParams *param_1, List *param_2) {
   long *plVar1;
   undefined1 auVar2[16];
   char cVar3;
   long lVar4;
   long *plVar5;
   Variant *pVVar6;
   long *plVar7;
   undefined1(*pauVar8)[16];
   long *in_RCX;
   String *in_RDX;
   TextDocumentPositionParams *pTVar9;
   long in_FS_OFFSET;
   undefined8 *local_b8;
   Dictionary local_b0[8];
   TextDocumentPositionParams *local_a8;
   long local_a0;
   TextDocumentPositionParams *local_98;
   undefined1 local_90[16];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_90._8_8_ = local_90._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array((Array*)param_1);
   pTVar9 = *(TextDocumentPositionParams**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (( pTVar9 == (TextDocumentPositionParams*)0x0 ) || ( local_a8 = pTVar9 ),cVar3 = RefCounted::reference(),cVar3 == '\0') {
      local_a8 = (TextDocumentPositionParams*)0x0;
      pTVar9 = (TextDocumentPositionParams*)0x0;
   }

   local_a0 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_90._8_8_;
   local_90 = auVar2 << 0x40;
   local_98 = (TextDocumentPositionParams*)&_LC39;
   String::parse_latin1((StrRange*)&local_a0);
   lVar4 = GDScriptWorkspace::resolve_symbol(pTVar9, in_RDX, SUB81((StrRange*)&local_a0, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_a8);
   if (lVar4 == 0) {
      cVar3 = GDScriptLanguageProtocol::is_smart_resolve_enabled();
      if (cVar3 != '\0') {
         local_98 = (TextDocumentPositionParams*)0x0;
         local_b8 = (undefined8*)0x0;
         Ref<GDScriptWorkspace>::operator =((Ref<GDScriptWorkspace>*)&local_98, *(Ref**)( GDScriptLanguageProtocol::singleton + 0x1f8 ));
         GDScriptWorkspace::resolve_related_symbols(local_98, (List*)in_RDX);
         Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_98);
         if (local_b8 != (undefined8*)0x0) {
            for (plVar1 = (long*)*local_b8; plVar1 != (long*)0x0; plVar1 = (long*)plVar1[1]) {
               lVar4 = *plVar1;
               if (( ( lVar4 != 0 ) && ( *(long*)( lVar4 + 0x48 ) != 0 ) ) && ( 1 < *(uint*)( *(long*)( lVar4 + 0x48 ) + -8 ) )) {
                  local_90 = (undefined1[16])0x0;
                  local_98 = (TextDocumentPositionParams*)0x0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( lVar4 + 0x48 ));
                  local_90 = *(undefined1(*) [16])( lVar4 + 0x38 );
                  Dictionary::Dictionary(local_b0);
                  Variant::Variant((Variant*)local_58, (String*)&local_98);
                  Variant::Variant((Variant*)local_78, "uri");
                  pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_b0);
                  Variant::operator =(pVVar6, (Variant*)local_58);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Dictionary::Dictionary((Dictionary*)&local_a0);
                  Dictionary::Dictionary((Dictionary*)&local_a8);
                  Variant::Variant((Variant*)local_58, local_90._0_4_);
                  Variant::Variant((Variant*)local_78, "line");
                  pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a8);
                  Variant::operator =(pVVar6, (Variant*)local_58);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Variant::Variant((Variant*)local_58, local_90._4_4_);
                  Variant::Variant((Variant*)local_78, "character");
                  pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a8);
                  Variant::operator =(pVVar6, (Variant*)local_58);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Variant::Variant((Variant*)local_78, (Dictionary*)&local_a8);
                  Variant::Variant((Variant*)local_58, "start");
                  pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
                  Variant::operator =(pVVar6, (Variant*)local_78);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Dictionary::~Dictionary((Dictionary*)&local_a8);
                  Dictionary::Dictionary((Dictionary*)&local_a8);
                  Variant::Variant((Variant*)local_58, local_90._8_4_);
                  Variant::Variant((Variant*)local_78, "line");
                  pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a8);
                  Variant::operator =(pVVar6, (Variant*)local_58);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Variant::Variant((Variant*)local_58, local_90._12_4_);
                  Variant::Variant((Variant*)local_78, "character");
                  pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a8);
                  Variant::operator =(pVVar6, (Variant*)local_58);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Variant::Variant((Variant*)local_78, (Dictionary*)&local_a8);
                  Variant::Variant((Variant*)local_58, "end");
                  pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
                  Variant::operator =(pVVar6, (Variant*)local_78);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Dictionary::~Dictionary((Dictionary*)&local_a8);
                  Variant::Variant((Variant*)local_58, (Dictionary*)&local_a0);
                  Variant::Variant((Variant*)local_78, "range");
                  pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_b0);
                  Variant::operator =(pVVar6, (Variant*)local_58);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Dictionary::~Dictionary((Dictionary*)&local_a0);
                  Variant::Variant((Variant*)local_58, local_b0);
                  Array::push_back((Variant*)param_1);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Dictionary::~Dictionary(local_b0);
                  if (*in_RCX == 0) {
                     pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *in_RCX = (long)pauVar8;
                     *(undefined4*)pauVar8[1] = 0;
                     *pauVar8 = (undefined1[16])0x0;
                  }

                  plVar7 = (long*)operator_new(0x20, DefaultAllocator::alloc);
                  plVar7[1] = 0;
                  plVar5 = (long*)*in_RCX;
                  *plVar7 = lVar4;
                  lVar4 = plVar5[1];
                  plVar7[3] = (long)plVar5;
                  plVar7[2] = lVar4;
                  if (lVar4 != 0) {
                     *(long**)( lVar4 + 8 ) = plVar7;
                  }

                  plVar5[1] = (long)plVar7;
                  if (*plVar5 == 0) {
                     *plVar5 = (long)plVar7;
                  }

                  *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               }

            }

         }

         List<lsp::DocumentSymbol_const*,DefaultAllocator>::~List((List<lsp::DocumentSymbol_const*,DefaultAllocator>*)&local_b8);
      }

   }
 else {
      local_98 = (TextDocumentPositionParams*)0x0;
      local_90 = (undefined1[16])0x0;
      if (*(long*)( lVar4 + 0x48 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( lVar4 + 0x48 ));
      }

      local_90 = *(undefined1(*) [16])( lVar4 + 0x38 );
      local_a0 = *(long*)( GDScriptLanguageProtocol::singleton + 0x1f8 );
      if (( local_a0 == 0 ) || ( cVar3 = cVar3 == '\0' )) {
         local_a0 = 0;
      }

      GDScriptWorkspace::get_file_path((String*)&local_b8);
      Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_a0);
      cVar3 = ( **(code**)( **(long**)( param_2 + 0x180 ) + 0x2e0 ) )(*(long**)( param_2 + 0x180 ), (String*)&local_b8);
      if (cVar3 != '\0') {
         Dictionary::Dictionary(local_b0);
         Variant::Variant((Variant*)local_58, (String*)&local_98);
         Variant::Variant((Variant*)local_78, "uri");
         pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_b0);
         Variant::operator =(pVVar6, (Variant*)local_58);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::Dictionary((Dictionary*)&local_a0);
         Dictionary::Dictionary((Dictionary*)&local_a8);
         Variant::Variant((Variant*)local_58, local_90._0_4_);
         Variant::Variant((Variant*)local_78, "line");
         pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a8);
         Variant::operator =(pVVar6, (Variant*)local_58);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, local_90._4_4_);
         Variant::Variant((Variant*)local_78, "character");
         pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a8);
         Variant::operator =(pVVar6, (Variant*)local_58);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_78, (Dictionary*)&local_a8);
         Variant::Variant((Variant*)local_58, "start");
         pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
         Variant::operator =(pVVar6, (Variant*)local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)&local_a8);
         Dictionary::Dictionary((Dictionary*)&local_a8);
         Variant::Variant((Variant*)local_58, local_90._8_4_);
         Variant::Variant((Variant*)local_78, "line");
         pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a8);
         Variant::operator =(pVVar6, (Variant*)local_58);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_58, local_90._12_4_);
         Variant::Variant((Variant*)local_78, "character");
         pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a8);
         Variant::operator =(pVVar6, (Variant*)local_58);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)local_78, (Dictionary*)&local_a8);
         Variant::Variant((Variant*)local_58, "end");
         pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
         Variant::operator =(pVVar6, (Variant*)local_78);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)&local_a8);
         Variant::Variant((Variant*)local_58, (Dictionary*)&local_a0);
         Variant::Variant((Variant*)local_78, "range");
         pVVar6 = (Variant*)Dictionary::operator []((Variant*)local_b0);
         Variant::operator =(pVVar6, (Variant*)local_58);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary((Dictionary*)&local_a0);
         Variant::Variant((Variant*)local_58, local_b0);
         Array::push_back((Variant*)param_1);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Dictionary::~Dictionary(local_b0);
      }

      if (*in_RCX == 0) {
         pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *in_RCX = (long)pauVar8;
         *(undefined4*)pauVar8[1] = 0;
         *pauVar8 = (undefined1[16])0x0;
      }

      plVar5 = (long*)operator_new(0x20, DefaultAllocator::alloc);
      plVar5[1] = 0;
      plVar1 = (long*)*in_RCX;
      *plVar5 = lVar4;
      lVar4 = plVar1[1];
      plVar5[3] = (long)plVar1;
      plVar5[2] = lVar4;
      if (lVar4 != 0) {
         *(long**)( lVar4 + 8 ) = plVar5;
      }

      plVar1[1] = (long)plVar5;
      if (*plVar1 == 0) {
         *plVar1 = (long)plVar5;
      }

      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::definition(Dictionary const&) */Dictionary *GDScriptTextDocument::definition(Dictionary *param_1) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long *plVar4;
   int iVar5;
   Variant *pVVar6;
   long lVar7;
   Variant *in_RDX;
   List *in_RSI;
   long in_FS_OFFSET;
   long local_98;
   long *local_90;
   long local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_88 = 0;
   local_80 = 0;
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary((Variant*)&local_90);
   Variant::Variant((Variant*)local_78, "uri");
   Dictionary::operator []((Variant*)&local_90);
   Variant::operator_cast_to_String((Variant*)&local_98);
   if (local_88 != local_98) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      local_88 = local_98;
      local_98 = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "position");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary((Variant*)&local_90);
   Variant::Variant((Variant*)local_78, "line");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_90);
   iVar5 = Variant::operator_cast_to_int(pVVar6);
   local_80 = CONCAT44(local_80._4_4_, iVar5);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar6 = (Variant*)Dictionary::operator []((Variant*)&local_90);
   iVar5 = Variant::operator_cast_to_int(pVVar6);
   local_80 = CONCAT44(iVar5, (undefined4)local_80);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_90);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_90 = (long*)0x0;
   find_symbols((TextDocumentPositionParams*)param_1, in_RSI);
   plVar4 = local_90;
   if (local_90 != (long*)0x0) {
      do {
         while (true) {
            pvVar2 = (void*)*plVar4;
            if (pvVar2 == (void*)0x0) {
               if ((int)plVar4[2] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_00103cf5;
               }

               goto LAB_00103ceb;
            }

            if (*(long**)( (long)pvVar2 + 0x18 ) != plVar4) break;
            lVar7 = *(long*)( (long)pvVar2 + 8 );
            lVar3 = *(long*)( (long)pvVar2 + 0x10 );
            *plVar4 = lVar7;
            if (pvVar2 == (void*)plVar4[1]) {
               plVar4[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar7;
               lVar7 = *(long*)( (long)pvVar2 + 8 );
            }

            if (lVar7 != 0) {
               *(long*)( lVar7 + 0x10 ) = lVar3;
            }

            Memory::free_static(pvVar2, false);
            plVar1 = plVar4 + 2;
            *(int*)plVar1 = (int)*plVar1 + -1;
            if ((int)*plVar1 == 0) goto LAB_00103ceb;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( (int)plVar4[2] != 0 );
      LAB_00103ceb:Memory::free_static(plVar4, false);
   }

   LAB_00103cf5:CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x00104039) *//* WARNING: Removing unreachable block (ram,0x001040d0) *//* WARNING: Removing unreachable block (ram,0x001040d8) *//* WARNING: Removing unreachable block (ram,0x00104045) *//* WARNING: Removing unreachable block (ram,0x00104110) *//* WARNING: Removing unreachable block (ram,0x00104141) *//* WARNING: Removing unreachable block (ram,0x0010404f) *//* WARNING: Removing unreachable block (ram,0x00104100) *//* WARNING: Removing unreachable block (ram,0x00104064) *//* WARNING: Removing unreachable block (ram,0x00104069) *//* WARNING: Removing unreachable block (ram,0x00104071) *//* WARNING: Removing unreachable block (ram,0x00104076) *//* WARNING: Removing unreachable block (ram,0x0010407a) *//* WARNING: Removing unreachable block (ram,0x00104088) *//* WARNING: Removing unreachable block (ram,0x0010400f) *//* WARNING: Removing unreachable block (ram,0x0010401b) *//* WARNING: Removing unreachable block (ram,0x00104150) *//* WARNING: Removing unreachable block (ram,0x00104168) *//* WARNING: Removing unreachable block (ram,0x00104172) *//* WARNING: Removing unreachable block (ram,0x001041fd) *//* WARNING: Removing unreachable block (ram,0x00104187) *//* WARNING: Removing unreachable block (ram,0x0010419f) *//* WARNING: Removing unreachable block (ram,0x001044af) *//* WARNING: Removing unreachable block (ram,0x001044f0) *//* WARNING: Removing unreachable block (ram,0x0010446e) *//* WARNING: Removing unreachable block (ram,0x0010420f) *//* WARNING: Removing unreachable block (ram,0x0010442d) *//* WARNING: Removing unreachable block (ram,0x0010424b) *//* WARNING: Removing unreachable block (ram,0x00104295) *//* WARNING: Removing unreachable block (ram,0x001042b3) *//* WARNING: Removing unreachable block (ram,0x00104531) *//* WARNING: Removing unreachable block (ram,0x0010455a) *//* WARNING: Removing unreachable block (ram,0x00104578) *//* WARNING: Removing unreachable block (ram,0x001042e3) *//* WARNING: Removing unreachable block (ram,0x0010439b) *//* WARNING: Removing unreachable block (ram,0x001043aa) *//* WARNING: Removing unreachable block (ram,0x0010459c) *//* WARNING: Removing unreachable block (ram,0x001043f9) *//* WARNING: Removing unreachable block (ram,0x0010458f) *//* WARNING: Removing unreachable block (ram,0x0010440c) *//* WARNING: Recovered jumptable eliminated as dead code *//* GDScriptTextDocument::declaration(Dictionary const&) */Dictionary *GDScriptTextDocument::declaration(Dictionary *param_1) {
   int iVar1;
   Variant *pVVar2;
   Variant *in_RDX;
   List *in_RSI;
   long in_FS_OFFSET;
   TextDocumentPositionParams local_e0[32];
   long local_c0;
   long local_b8;
   undefined8 local_b0;
   Variant local_a8[16];
   int local_98[8];
   int local_78[14];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8 = 0;
   local_b0 = 0;
   Variant::Variant((Variant*)local_78, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_a8);
   Variant::Variant((Variant*)local_98, "uri");
   Dictionary::operator [](local_a8);
   Variant::operator_cast_to_String((Variant*)&local_c0);
   if (local_b8 != local_c0) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      local_b8 = local_c0;
      local_c0 = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_a8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "position");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_a8);
   Variant::Variant((Variant*)local_98, "line");
   pVVar2 = (Variant*)Dictionary::operator [](local_a8);
   iVar1 = Variant::operator_cast_to_int(pVVar2);
   local_b0 = CONCAT44(local_b0._4_4_, iVar1);
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_98, "character");
   pVVar2 = (Variant*)Dictionary::operator [](local_a8);
   iVar1 = Variant::operator_cast_to_int(pVVar2);
   local_b0 = CONCAT44(iVar1, (undefined4)local_b0);
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_a8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   find_symbols(local_e0, in_RSI);
   Array::is_empty();
   Variant::Variant((Variant*)param_1, (Array*)local_e0);
   Array::~Array((Array*)local_e0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* GDScriptTextDocument::_bind_methods() */void GDScriptTextDocument::_bind_methods(void) {
   MethodBind *pMVar1;
   long in_FS_OFFSET;
   MethodDefinition aMStack_58[32];
   undefined8 local_38;
   undefined1 local_30[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   D_METHODP((char*)aMStack_58, (char***)"didOpen", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant_const&>(didOpen);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"didClose", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant_const&>(didClose);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"didChange", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant_const&>(didChange);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"willSaveWaitUntil", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant_const&>(willSaveWaitUntil);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"didSave", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant_const&>(didSave);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"nativeSymbol", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant,Dictionary_const&>(nativeSymbol);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"documentSymbol", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(documentSymbol);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"completion", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(completion);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"resolve", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Dictionary,Dictionary_const&>(resolve);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"rename", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Dictionary,Dictionary_const&>(rename);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"prepareRename", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant,Dictionary_const&>(prepareRename);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"references", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(references);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"foldingRange", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(foldingRange);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"codeLens", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(codeLens);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"documentLink", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(documentLink);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"colorPresentation", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(colorPresentation);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"hover", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant,Dictionary_const&>(hover);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"definition", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(definition);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"declaration", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant,Dictionary_const&>(declaration);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"signatureHelp", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,Variant,Dictionary_const&>(signatureHelp);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   D_METHODP((char*)aMStack_58, (char***)"show_native_symbol_in_editor", 0);
   local_30 = (undefined1[16])0x0;
   local_38 = 0;
   pMVar1 = create_method_bind<GDScriptTextDocument,String_const&>(show_native_symbol_in_editor);
   ClassDB::bind_methodfi(1, pMVar1, false, aMStack_58, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_38] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition(aMStack_58);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* lsp::marked_documentation(String const&) */lsp * __thiscall lsp::marked_documentation(lsp *this,String *param_1){
   long *plVar1;
   long *plVar2;
   long lVar3;
   bool bVar4;
   undefined *puVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   undefined *local_78;
   CowData<char32_t> local_70[8];
   char local_68[8];
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   bVar4 = false;
   lVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   String::strip_edges(SUB81(this, 0), SUB81(param_1, 0));
   String::split(local_68, SUB81(this, 0), 0x10dd11);
   local_58 = &_LC39;
   local_50 = 0;
   String::parse_latin1((StrRange*)this);
   do {
      if (( local_60 == 0 ) || ( *(long*)( local_60 + -8 ) <= lVar8 )) {
         CowData<String>::_unref((CowData<String>*)&local_60);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return this;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_78 = (undefined*)0x0;
      plVar2 = (long*)( local_60 + lVar8 * 8 );
      lVar3 = *plVar2;
      plVar1 = (long*)( lVar3 + -0x10 );
      if (lVar3 != 0) {
         do {
            lVar3 = *plVar1;
            if (lVar3 == 0) goto LAB_00105109;
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
            local_78 = (undefined*)*plVar2;
         }

      }

      LAB_00105109:iVar6 = String::find((char*)&local_78, 0x10dd13);
      if (iVar6 == -1) {
         if (bVar4) {
            String::substr((int)local_70, (int)(StrRange*)&local_78);
            operator+((char *)&
            local_58,(String*)&_LC103;
            if (local_78 != local_58) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               local_78 = local_58;
               local_58 = (undefined*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref(local_70);
            goto LAB_00105030;
         }

         LAB_001051dd:String::strip_edges(SUB81((CowData<char32_t>*)&local_58, 0), SUB81((StrRange*)&local_78, 0));
         if (local_78 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            local_78 = local_58;
            local_58 = (undefined*)0x0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         for (int i = 0; i < 15; i++) {
            String::replace((char*)&local_58, (char*)&local_78);
            if (local_78 != local_58) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               local_78 = local_58;
               local_58 = (undefined*)0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         }

         if (( local_60 != 0 ) && ( lVar8 < *(long*)( local_60 + -8 ) + -1 )) {
            String::operator +=((String*)&local_78, "\n\n");
         }

         bVar4 = false;
      }
 else {
         local_50 = 1;
         local_58 = &_LC101;
         String::parse_latin1((StrRange*)&local_78);
         LAB_00105030:iVar6 = String::find((char*)&local_78, 0x10dd21);
         if (iVar6 != -1) {
            local_50 = 1;
            local_58 = &_LC101;
            String::parse_latin1((StrRange*)&local_78);
            goto LAB_001051dd;
         }

         if (( local_60 != 0 ) && ( lVar8 < *(long*)( local_60 + -8 ) + -1 )) {
            String::operator +=((String*)&local_78, "\n");
         }

         bVar4 = true;
      }

      String::operator +=((String*)this, (String*)&local_78);
      puVar5 = local_78;
      if (local_78 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = (undefined*)0x0;
            Memory::free_static(puVar5 + -0x10, false);
         }

      }

      lVar8 = lVar8 + 1;
   }
 while ( true );
}
/* GDScriptTextDocument::hover(Dictionary const&) */Dictionary *GDScriptTextDocument::hover(Dictionary *param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   char cVar6;
   int iVar7;
   Variant *pVVar8;
   long lVar9;
   Variant *in_RDX;
   TextDocumentPositionParams *pTVar10;
   long in_FS_OFFSET;
   String *local_130;
   Dictionary local_f8[8];
   Array local_f0[8];
   undefined8 *local_e8;
   undefined8 local_e0;
   undefined8 local_d8;
   CowData<char32_t> local_d0[8];
   undefined8 local_c8;
   TextDocumentPositionParams *local_c0;
   long local_b8;
   undefined8 local_b0;
   undefined1 local_a8[16];
   TextDocumentPositionParams *local_98;
   long lStack_90;
   undefined1 local_88[16];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b8 = 0;
   local_b0 = 0;
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary((Variant*)&local_98);
   Variant::Variant((Variant*)local_78, "uri");
   Dictionary::operator []((Variant*)&local_98);
   Variant::operator_cast_to_String((Variant*)local_a8);
   if (local_b8 != local_a8._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
      local_b8 = local_a8._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_a8._8_8_;
      local_a8 = auVar2 << 0x40;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "position");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary((Variant*)&local_98);
   Variant::Variant((Variant*)local_78, "line");
   pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_98);
   iVar7 = Variant::operator_cast_to_int(pVVar8);
   local_b0 = CONCAT44(local_b0._4_4_, iVar7);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_98);
   iVar7 = Variant::operator_cast_to_int(pVVar8);
   local_b0 = CONCAT44(iVar7, (undefined4)local_b0);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_98);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pTVar10 = *(TextDocumentPositionParams**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pTVar10 != (TextDocumentPositionParams*)0x0) {
      local_c0 = pTVar10;
      cVar6 = RefCounted::reference();
      if (cVar6 != '\0') goto LAB_001058d2;
   }

   local_c0 = (TextDocumentPositionParams*)0x0;
   pTVar10 = (TextDocumentPositionParams*)0x0;
   LAB_001058d2:auVar5._8_8_ = 0;
   auVar5._0_8_ = local_a8._8_8_;
   local_a8 = auVar5 << 0x40;
   local_98 = (TextDocumentPositionParams*)&_LC39;
   lStack_90 = 0;
   String::parse_latin1((StrRange*)local_a8);
   lVar9 = GDScriptWorkspace::resolve_symbol(pTVar10, (String*)&local_b8, SUB81((Variant*)local_a8, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_c0);
   if (lVar9 == 0) {
      cVar6 = GDScriptLanguageProtocol::is_smart_resolve_enabled();
      if (cVar6 == '\0') {
         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      }
 else {
         Dictionary::Dictionary(local_f8);
         Array::Array(local_f0);
         local_98 = (TextDocumentPositionParams*)0x0;
         local_e8 = (undefined8*)0x0;
         Ref<GDScriptWorkspace>::operator =((Ref<GDScriptWorkspace>*)&local_98, *(Ref**)( GDScriptLanguageProtocol::singleton + 0x1f8 ));
         GDScriptWorkspace::resolve_related_symbols(local_98, (List*)&local_b8);
         Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_98);
         if (local_e8 != (undefined8*)0x0) {
            for (plVar1 = (long*)*local_e8; plVar1 != (long*)0x0; plVar1 = (long*)plVar1[1]) {
               lVar9 = *plVar1;
               if (lVar9 != 0) {
                  local_98 = (TextDocumentPositionParams*)0x0;
                  lStack_90 = 0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)&lsp::MarkupKind::Markdown);
                  if (( *(long*)( lVar9 + 8 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar9 + 8 ) + -8 ) )) {
                     local_c0 = (TextDocumentPositionParams*)0x0;
                     String::parse_latin1((String*)&local_c0, "\n\n");
                     operator+((char *)&
                     local_c8,(String*)&_LC103;
                     String::operator +((String*)local_a8, (String*)&local_c8);
                     if (lStack_90 != local_a8._0_8_) {
                        CowData<char32_t>::_unref((CowData<char32_t>*)&lStack_90);
                        lStack_90 = local_a8._0_8_;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = local_a8._8_8_;
                        local_a8 = auVar4 << 0x40;
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  }

                  if (( *(long*)( lVar9 + 0x10 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar9 + 0x10 ) + -8 ) )) {
                     local_c0 = (TextDocumentPositionParams*)0x0;
                     String::parse_latin1((String*)&local_c0, "\n\n");
                     lsp::marked_documentation((lsp*)&local_c8, (String*)( lVar9 + 0x10 ));
                     String::operator +((String*)local_a8, (String*)&local_c8);
                     String::operator +=((String*)&lStack_90, (String*)local_a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  }

                  if (( *(long*)( lVar9 + 0x50 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar9 + 0x50 ) + -8 ) )) {
                     local_c0 = (TextDocumentPositionParams*)0x0;
                     String::parse_latin1((String*)&local_c0, ")");
                     local_d8 = 0;
                     String::parse_latin1((String*)&local_d8, "](");
                     operator+((char *)&
                     local_e0,(String*)"Defined in [";
                     String::operator +((String*)local_d0, (String*)&local_e0);
                     String::operator +((String*)&local_c8, (String*)local_d0);
                     String::operator +((String*)local_a8, (String*)&local_c8);
                     String::operator +=((String*)&lStack_90, (String*)local_a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
                     CowData<char32_t>::_unref(local_d0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
                  }

                  Variant::Variant((Variant*)local_58, (String*)&lStack_90);
                  Array::push_back((Variant*)local_f0);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&lStack_90);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
               }

            }

         }

         Variant::Variant((Variant*)local_58, local_f0);
         Variant::Variant((Variant*)local_78, "contents");
         pVVar8 = (Variant*)Dictionary::operator []((Variant*)local_f8);
         Variant::operator =(pVVar8, (Variant*)local_58);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         Variant::Variant((Variant*)param_1, local_f8);
         List<lsp::DocumentSymbol_const*,DefaultAllocator>::~List((List<lsp::DocumentSymbol_const*,DefaultAllocator>*)&local_e8);
         Array::~Array(local_f0);
         Dictionary::~Dictionary(local_f8);
      }

   }
 else {
      local_98 = (TextDocumentPositionParams*)0x0;
      lStack_90 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)&lsp::MarkupKind::Markdown);
      local_88 = (undefined1[16])0x0;
      local_a8 = (undefined1[16])0x0;
      CowData<char32_t>::_ref((CowData<char32_t>*)local_a8, (CowData*)&lsp::MarkupKind::Markdown);
      if (( *(long*)( lVar9 + 8 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar9 + 8 ) + -8 ) )) {
         local_c8 = 0;
         String::parse_latin1((String*)&local_c8, "\n\n");
         operator+((char *)
         local_d0,(String*)&_LC103;
         String::operator +((String*)&local_c0, (String*)local_d0);
         if ((TextDocumentPositionParams*)local_a8._8_8_ != local_c0) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_a8 + 8 ));
            pTVar10 = local_c0;
            local_c0 = (TextDocumentPositionParams*)0x0;
            local_a8._8_8_ = pTVar10;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         CowData<char32_t>::_unref(local_d0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      }

      local_130 = (String*)( local_a8 + 8 );
      if (( *(long*)( lVar9 + 0x10 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar9 + 0x10 ) + -8 ) )) {
         local_c8 = 0;
         String::parse_latin1((String*)&local_c8, "\n\n");
         lsp::marked_documentation((lsp*)local_d0, (String*)( lVar9 + 0x10 ));
         String::operator +((String*)&local_c0, (String*)local_d0);
         String::operator +=(local_130, (String*)&local_c0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         CowData<char32_t>::_unref(local_d0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      }

      if (( *(long*)( lVar9 + 0x50 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar9 + 0x50 ) + -8 ) )) {
         local_c8 = 0;
         String::parse_latin1((String*)&local_c8, ")");
         local_e0 = 0;
         String::parse_latin1((String*)&local_e0, "](");
         operator+((char *)&
         local_e8,(String*)"Defined in [";
         String::operator +((String*)&local_d8, (String*)&local_e8);
         String::operator +((String*)local_d0, (String*)&local_d8);
         String::operator +((String*)&local_c0, (String*)local_d0);
         String::operator +=(local_130, (String*)&local_c0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         CowData<char32_t>::_unref(local_d0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      }

      if (local_98 != (TextDocumentPositionParams*)local_a8._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         local_98 = (TextDocumentPositionParams*)local_a8._0_8_;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_a8._8_8_;
         local_a8 = auVar3 << 0x40;
      }

      if (lStack_90 != local_a8._8_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&lStack_90);
         lStack_90 = local_a8._8_8_;
         local_a8._8_8_ = 0;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      local_88._8_8_ = local_b0;
      local_88._0_8_ = local_b0;
      Dictionary::Dictionary((Dictionary*)&local_c8);
      Dictionary::Dictionary((Dictionary*)local_a8);
      Dictionary::Dictionary((Dictionary*)&local_c0);
      Variant::Variant((Variant*)local_58, local_88._0_4_);
      Variant::Variant((Variant*)local_78, "line");
      pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_c0);
      Variant::operator =(pVVar8, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, local_88._4_4_);
      Variant::Variant((Variant*)local_78, "character");
      pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_c0);
      Variant::operator =(pVVar8, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_78, (Dictionary*)&local_c0);
      Variant::Variant((Variant*)local_58, "start");
      pVVar8 = (Variant*)Dictionary::operator []((Variant*)local_a8);
      Variant::operator =(pVVar8, (Variant*)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)&local_c0);
      Dictionary::Dictionary((Dictionary*)&local_c0);
      Variant::Variant((Variant*)local_58, local_88._8_4_);
      Variant::Variant((Variant*)local_78, "line");
      pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_c0);
      Variant::operator =(pVVar8, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, local_88._12_4_);
      Variant::Variant((Variant*)local_78, "character");
      pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_c0);
      Variant::operator =(pVVar8, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_78, (Dictionary*)&local_c0);
      Variant::Variant((Variant*)local_58, "end");
      pVVar8 = (Variant*)Dictionary::operator []((Variant*)local_a8);
      Variant::operator =(pVVar8, (Variant*)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)&local_c0);
      Variant::Variant((Variant*)local_58, (Dictionary*)local_a8);
      Variant::Variant((Variant*)local_78, "range");
      pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
      Variant::operator =(pVVar8, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)local_a8);
      lsp::MarkupContent::to_json();
      Variant::Variant((Variant*)local_58, (Dictionary*)local_a8);
      Variant::Variant((Variant*)local_78, "contents");
      pVVar8 = (Variant*)Dictionary::operator []((Variant*)&local_c8);
      Variant::operator =(pVVar8, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)local_a8);
      Variant::Variant((Variant*)param_1, (Dictionary*)&local_c8);
      Dictionary::~Dictionary((Dictionary*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&lStack_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::resolve(Dictionary const&) */Dictionary *GDScriptTextDocument::resolve(Dictionary *param_1) {
   String *pSVar1;
   CowData<char32_t> *this;
   uint uVar2;
   undefined1 auVar3[16];
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
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   code *pcVar27;
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined8 uVar31;
   int iVar32;
   char cVar33;
   bool bVar34;
   uint uVar35;
   uint uVar36;
   Variant *pVVar37;
   long lVar38;
   long lVar39;
   uint uVar40;
   Variant *in_RDX;
   long lVar41;
   long lVar42;
   char *pcVar43;
   ulong uVar44;
   uint uVar45;
   long in_FS_OFFSET;
   String *local_228;
   String *local_200;
   CowData<char32_t> *local_1f8;
   Ref<GDScriptWorkspace> *local_1e8;
   String local_1b8[8];
   undefined8 local_1b0;
   long local_1a8;
   undefined8 local_1a0;
   long local_198;
   undefined8 local_190;
   undefined1 local_188[16];
   undefined8 local_178;
   undefined8 local_170;
   int local_168;
   undefined8 local_160;
   int local_158[8];
   int local_138[8];
   int local_118[8];
   undefined8 local_f8;
   int local_f0;
   String local_e8[8];
   long lStack_e0;
   long local_d8;
   undefined2 local_d0;
   undefined1 local_c8[16];
   long local_b8;
   undefined4 local_b0;
   undefined1 local_a8[16];
   undefined8 local_98;
   undefined8 local_88;
   Vector local_80[8];
   undefined1 local_78[16];
   long local_68;
   Array local_60[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   _local_e8 = (undefined1[16])0x0;
   local_f8 = 0;
   local_f0 = 0;
   local_d8 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)( local_e8 + 8 ), (CowData*)&lsp::MarkupKind::Markdown);
   local_a8 = (undefined1[16])0x0;
   local_d0 = 0;
   local_c8 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_b8 = 0;
   local_b0 = 0;
   local_98 = 0;
   local_88 = 0;
   local_68 = 0;
   Array::Array(local_60);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   lsp::CompletionItem::load((CompletionItem*)&local_f8, (Dictionary*)in_RDX);
   local_178 = 0;
   local_170 = 0;
   local_168 = 2;
   local_160 = 0;
   Variant::Variant((Variant*)local_118, "data");
   pVVar37 = (Variant*)Dictionary::operator [](in_RDX);
   Variant::Variant((Variant*)local_158, pVVar37);
   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_158[0] == 0x1b) {
      Variant::Variant((Variant*)local_118, "data");
      Dictionary::operator [](in_RDX);
      Variant::operator_cast_to_Dictionary((Variant*)local_188);
      lsp::CompletionParams::load((CompletionParams*)&local_178, (Dictionary*)local_188);
      Dictionary::~Dictionary((Dictionary*)local_188);
      if (Variant::needs_deinit[local_118[0]] != '\0') {
         Variant::_clear_internal();
      }

      local_228 = (String*)local_188;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = local_188._8_8_;
      local_188 = auVar30 << 0x40;
      Ref<GDScriptWorkspace>::operator =((Ref<GDScriptWorkspace>*)local_228, *(Ref**)( GDScriptLanguageProtocol::singleton + 0x1f8 ));
      lVar38 = GDScriptWorkspace::resolve_symbol((TextDocumentPositionParams*)local_188._0_8_, (String*)&local_178, SUB81((CompletionItem*)&local_f8, 0));
      Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)local_228);
      LAB_00106d4a:local_228 = (String*)local_188;
      if (lVar38 != 0) {
         this(CowData<char32_t> * )(local_188 + 8);
         local_188 = (undefined1[16])0x0;
         CowData<char32_t>::_ref((CowData<char32_t>*)local_228, (CowData*)&lsp::MarkupKind::Markdown);
         if (( *(long*)( lVar38 + 8 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar38 + 8 ) + -8 ) )) {
            local_198 = 0;
            String::parse_latin1((String*)&local_198, "\n\n");
            operator+((char *)&
            local_1a0,(String*)&_LC103;
            String::operator +((String*)&local_190, (String*)&local_1a0);
            CowData<char32_t>::operator =(this, (CowData*)&local_190);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
         }

         if (( *(long*)( lVar38 + 0x10 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar38 + 0x10 ) + -8 ) )) {
            local_198 = 0;
            String::parse_latin1((String*)&local_198, "\n\n");
            lsp::marked_documentation((lsp*)&local_1a0, (String*)( lVar38 + 0x10 ));
            String::operator +((String*)&local_190, (String*)&local_1a0);
            String::operator +=((String*)this, (String*)&local_190);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
         }

         if (( *(long*)( lVar38 + 0x50 ) != 0 ) && ( 1 < *(uint*)( *(long*)( lVar38 + 0x50 ) + -8 ) )) {
            local_198 = 0;
            String::parse_latin1((String*)&local_198, ")");
            local_1b0 = 0;
            String::parse_latin1((String*)&local_1b0, "](");
            operator+((char *)
            local_1b8,(String*)"Defined in [";
            String::operator +((String*)&local_1a8, local_1b8);
            String::operator +((String*)&local_1a0, (String*)&local_1a8);
            String::operator +((String*)&local_190, (String*)&local_1a0);
            String::operator +=((String*)this, (String*)&local_190);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1a8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_1b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_198);
         }

         if (lStack_e0 != local_188._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_e8 + 8 ));
            uVar31 = local_188._0_8_;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = local_188._8_8_;
            local_188 = auVar28 << 0x40;
            lStack_e0 = uVar31;
         }

         if (local_d8 != local_188._8_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
            local_d8 = local_188._8_8_;
            local_188._8_8_ = 0;
         }

         CowData<char32_t>::_unref(this);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
      }

   }
 else if (( local_158[0] == 4 ) || ( local_158[0] == 0x15 )) {
      Variant::operator_cast_to_String((Variant*)&local_1b0);
      String::split(local_188, SUB81((Variant*)&local_1b0, 0), 0x10ddb5);
      if (( (String*)local_188._8_8_ != (String*)0x0 ) && ( 1 < *(long*)( local_188._8_8_ + -8 ) )) {
         StringName::StringName((StringName*)&local_1a8, (String*)local_188._8_8_, false);
         if (local_188._8_8_ == 0) {
            lVar38 = 0;
            lVar39 = -1;
            LAB_00107b7d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar39, lVar38, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar27 = (code*)invalidInstructionException();
            ( *pcVar27 )();
         }

         lVar38 = *(long*)( local_188._8_8_ + -8 );
         lVar39 = lVar38 + -1;
         if (lVar39 < 0) goto LAB_00107b7d;
         local_1a0 = 0;
         pSVar1 = (String*)( local_188._8_8_ + lVar39 * 8 );
         if (2 < lVar38) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_1a0, (CowData*)( local_188._8_8_ + 8 ));
         }

         local_1f8 = (CowData<char32_t>*)&local_1a0;
         local_198 = 0;
         lVar38 = *(long*)( GDScriptLanguageProtocol::singleton + 0x1f8 );
         if (lVar38 != 0) {
            local_190 = 0;
            local_198 = lVar38;
            cVar33 = RefCounted::reference();
            if (cVar33 == '\0') {
               local_198 = 0;
               lVar38 = 0;
            }

            Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_190);
         }

         if (( *(long*)( lVar38 + 0x228 ) != 0 ) && ( *(int*)( lVar38 + 0x24c ) != 0 )) {
            uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar38 + 0x248 ) * 4 );
            lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar38 + 0x248 ) * 8 );
            if (local_1a8 == 0) {
               uVar36 = StringName::get_empty_hash();
            }
 else {
               uVar36 = *(uint*)( local_1a8 + 0x20 );
            }

            uVar44 = CONCAT44(0, uVar2);
            if (uVar36 == 0) {
               uVar36 = 1;
            }

            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar36 * lVar39;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar44;
            lVar41 = SUB168(auVar3 * auVar15, 8);
            uVar35 = *(uint*)( *(long*)( lVar38 + 0x230 ) + lVar41 * 4 );
            uVar40 = SUB164(auVar3 * auVar15, 8);
            if (uVar35 != 0) {
               uVar45 = 0;
               do {
                  if (( uVar35 == uVar36 ) && ( *(long*)( *(long*)( *(long*)( lVar38 + 0x228 ) + lVar41 * 8 ) + 0x10 ) == local_1a8 )) {
                     lVar38 = *(long*)( *(long*)( lVar38 + 0x228 ) + (ulong)uVar40 * 8 );
                     Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_198);
                     if (( *(long*)( lVar38 + 0x20 ) == 0 ) || ( *(int*)( lVar38 + 0x44 ) == 0 )) goto LAB_00107717;
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar38 + 0x40 ) * 4 );
                     lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar38 + 0x40 ) * 8 );
                     uVar35 = String::hash();
                     uVar44 = CONCAT44(0, uVar2);
                     uVar36 = 1;
                     if (uVar35 != 0) {
                        uVar36 = uVar35;
                     }

                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = (ulong)uVar36 * lVar39;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = uVar44;
                     lVar42 = SUB168(auVar7 * auVar19, 8);
                     lVar41 = *(long*)( lVar38 + 0x28 );
                     uVar40 = SUB164(auVar7 * auVar19, 8);
                     uVar35 = *(uint*)( lVar41 + lVar42 * 4 );
                     if (uVar35 == 0) goto LAB_00107717;
                     uVar45 = 0;
                     goto LAB_00107179;
                  }

                  uVar45 = uVar45 + 1;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = ( ulong )(uVar40 + 1) * lVar39;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar44;
                  lVar41 = SUB168(auVar4 * auVar16, 8);
                  uVar35 = *(uint*)( *(long*)( lVar38 + 0x230 ) + lVar41 * 4 );
                  uVar40 = SUB164(auVar4 * auVar16, 8);
               }
 while ( ( uVar35 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar35 * lVar39,auVar17._8_8_ = 0,auVar17._0_8_ = uVar44,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + uVar40 ) - SUB164(auVar5 * auVar17, 8)) * lVar39,auVar18._8_8_ = 0,auVar18._0_8_ = uVar44,uVar45 <= SUB164(auVar6 * auVar18, 8) );
            }

         }

         Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_198);
         LAB_00107717:local_1e8 = (Ref<GDScriptWorkspace>*)&local_198;
         lVar38 = *(long*)( GDScriptLanguageProtocol::singleton + 0x1f8 );
         if (( lVar38 == 0 ) || ( local_198 = lVar38 ),cVar33 = RefCounted::reference(),cVar33 == '\0') {
            local_198 = 0;
            lVar38 = 0;
         }

         if (local_1a8 == 0) {
            local_190 = 0;
         }
 else {
            local_190 = 0;
            if (*(char**)( local_1a8 + 8 ) == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_190, (CowData*)( local_1a8 + 0x10 ));
            }
 else {
               String::parse_latin1((String*)&local_190, *(char**)( local_1a8 + 8 ));
            }

         }

         local_200 = (String*)&local_190;
         if (( *(long*)( lVar38 + 0x1c8 ) != 0 ) && ( *(int*)( lVar38 + 0x1ec ) != 0 )) {
            uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar38 + 0x1e8 ) * 4 );
            lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar38 + 0x1e8 ) * 8 );
            uVar35 = String::hash();
            uVar44 = CONCAT44(0, uVar2);
            uVar36 = 1;
            if (uVar35 != 0) {
               uVar36 = uVar35;
            }

            lVar41 = *(long*)( lVar38 + 0x1d0 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar36 * lVar39;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar44;
            lVar42 = SUB168(auVar11 * auVar23, 8);
            uVar35 = *(uint*)( lVar41 + lVar42 * 4 );
            uVar40 = SUB164(auVar11 * auVar23, 8);
            if (uVar35 != 0) {
               uVar45 = 0;
               do {
                  if (uVar36 == uVar35) {
                     cVar33 = String::operator ==((String*)( *(long*)( *(long*)( lVar38 + 0x1c8 ) + lVar42 * 8 ) + 0x10 ), local_200);
                     if (cVar33 != '\0') {
                        lVar38 = *(long*)( *(long*)( lVar38 + 0x1c8 ) + (ulong)uVar40 * 8 );
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_200);
                        Ref<GDScriptWorkspace>::unref(local_1e8);
                        if (lVar38 == 0) goto LAB_00107a3e;
                        lVar38 = ExtendGDScriptParser::get_member_symbol(*(String**)( lVar38 + 0x18 ), pSVar1);
                        goto LAB_001079d1;
                     }

                     lVar41 = *(long*)( lVar38 + 0x1d0 );
                  }

                  uVar45 = uVar45 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar40 + 1) * lVar39;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar44;
                  lVar42 = SUB168(auVar12 * auVar24, 8);
                  uVar35 = *(uint*)( lVar41 + lVar42 * 4 );
                  uVar40 = SUB164(auVar12 * auVar24, 8);
               }
 while ( ( uVar35 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar35 * lVar39,auVar25._8_8_ = 0,auVar25._0_8_ = uVar44,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar2 + uVar40 ) - SUB164(auVar13 * auVar25, 8)) * lVar39,auVar26._8_8_ = 0,auVar26._0_8_ = uVar44,uVar45 <= SUB164(auVar14 * auVar26, 8) );
            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_200);
         Ref<GDScriptWorkspace>::unref(local_1e8);
         LAB_00107a3e:lVar38 = 0;
         LAB_001079d1:CowData<char32_t>::_unref(local_1f8);
         if (( StringName::configured != '\0' ) && ( local_1a8 != 0 )) {
            StringName::unref();
         }

         CowData<String>::_unref((CowData<String>*)( local_188 + 8 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
         goto LAB_00106d4a;
      }

      CowData<String>::_unref((CowData<String>*)( local_188 + 8 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1b0);
   }

   local_228 = (String*)local_188;
   if (local_f0 == 0x17) {
      if (local_168 != 2) goto LAB_00106825;
      cVar33 = String::operator ==((String*)&local_160, "(");
      if (cVar33 != '\0') {
         auVar29._8_8_ = 0;
         auVar29._0_8_ = local_188._8_8_;
         local_188 = auVar29 << 0x40;
         String::parse_latin1(local_228, "text_editor/completion/use_single_quotes");
         _EDITOR_GET((String*)local_118);
         bVar34 = Variant::operator_cast_to_bool((Variant*)local_118);
         pcVar43 = "\"";
         local_190 = 0;
         if (bVar34) {
            pcVar43 = "\'";
         }

         String::parse_latin1((String*)&local_190, pcVar43);
         if (Variant::needs_deinit[local_118[0]] != '\0') {
            Variant::_clear_internal();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
         String::quote(local_228);
         CowData<char32_t>::operator =((CowData<char32_t>*)&local_b8, (CowData*)local_228);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
      }

   }

   iVar32 = local_168;
   if (( local_f0 == 2 ) && ( ( ( cVar33 = String::operator ==((String*)&local_160, "\"") ),cVar33 != '\0' || ( cVar33 = String::operator ==((String*)&local_160, "\'") ),cVar33 != '\0' ) ) && ( iVar32 == 2 )) {
      cVar33 = String::is_quoted();
      if (cVar33 != '\0') {
         String::unquote();
         CowData<char32_t>::operator =((CowData<char32_t>*)&local_b8, (CowData*)local_228);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_228);
      }

   }

   LAB_00106825:Dictionary::Dictionary(param_1);
   Variant::Variant((Variant*)local_118, (String*)&local_f8);
   Variant::Variant((Variant*)local_138, "label");
   pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar37, (Variant*)local_118);
   if (Variant::needs_deinit[local_138[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_118, local_f0);
   Variant::Variant((Variant*)local_138, "kind");
   pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar37, (Variant*)local_118);
   if (Variant::needs_deinit[local_138[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_118, "data");
   pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar37, (Variant*)&local_58);
   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( local_b8 != 0 ) && ( 1 < *(uint*)( local_b8 + -8 ) )) {
      Variant::Variant((Variant*)local_118, (String*)&local_b8);
      Variant::Variant((Variant*)local_138, "insertText");
      pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar37, (Variant*)local_118);
      if (Variant::needs_deinit[local_138[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_118[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_118, local_e8);
   Variant::Variant((Variant*)local_138, "detail");
   pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar37, (Variant*)local_118);
   if (Variant::needs_deinit[local_138[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   lsp::MarkupContent::to_json();
   Variant::Variant((Variant*)local_118, (Dictionary*)local_228);
   Variant::Variant((Variant*)local_138, "documentation");
   pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar37, (Variant*)local_118);
   if (Variant::needs_deinit[local_138[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_228);
   Variant::Variant((Variant*)local_118, local_d0._0_1_);
   Variant::Variant((Variant*)local_138, "deprecated");
   pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar37, (Variant*)local_118);
   if (Variant::needs_deinit[local_138[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_118, local_d0._1_1_);
   Variant::Variant((Variant*)local_138, "preselect");
   pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
   Variant::operator =(pVVar37, (Variant*)local_118);
   if (Variant::needs_deinit[local_138[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( local_c8._0_8_ != 0 ) && ( 1 < *(uint*)( local_c8._0_8_ + -8 ) )) {
      Variant::Variant((Variant*)local_118, (String*)local_c8);
      Variant::Variant((Variant*)local_138, "sortText");
      pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar37, (Variant*)local_118);
      if (Variant::needs_deinit[local_138[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_118[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( local_c8._8_8_ != 0 ) && ( 1 < *(uint*)( local_c8._8_8_ + -8 ) )) {
      Variant::Variant((Variant*)local_118, (String*)( local_c8 + 8 ));
      Variant::Variant((Variant*)local_138, "filterText");
      pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar37, (Variant*)local_118);
      if (Variant::needs_deinit[local_138[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_118[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( local_78._0_8_ != 0 ) && ( *(long*)( local_78._0_8_ + -8 ) != 0 )) {
      Variant::Variant((Variant*)local_118, local_80);
      Variant::Variant((Variant*)local_138, "commitCharacters");
      pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar37, (Variant*)local_118);
      if (Variant::needs_deinit[local_138[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_118[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( local_68 != 0 ) && ( 1 < *(uint*)( local_68 + -8 ) )) {
      lsp::Command::to_json();
      Variant::Variant((Variant*)local_118, (Dictionary*)local_228);
      Variant::Variant((Variant*)local_138, "command");
      pVVar37 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =(pVVar37, (Variant*)local_118);
      if (Variant::needs_deinit[local_138[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_118[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)local_228);
   }

   if (Variant::needs_deinit[local_158[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_160);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_178);
   lsp::CompletionItem::~CompletionItem((CompletionItem*)&local_f8);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
   LAB_00107179:if (uVar35 == uVar36) {
      cVar33 = String::operator ==((String*)( *(long*)( *(long*)( lVar38 + 0x20 ) + lVar42 * 8 ) + 0x10 ), pSVar1);
      if (cVar33 != '\0') {
         lVar38 = *(long*)( *(long*)( *(long*)( lVar38 + 0x20 ) + (ulong)uVar40 * 8 ) + 0x18 );
         if (lVar38 != 0) goto LAB_001079d1;
         goto LAB_00107717;
      }

      lVar41 = *(long*)( lVar38 + 0x28 );
   }

   uVar45 = uVar45 + 1;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = ( ulong )(uVar40 + 1) * lVar39;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar44;
   lVar42 = SUB168(auVar8 * auVar20, 8);
   uVar35 = *(uint*)( lVar41 + lVar42 * 4 );
   uVar40 = SUB164(auVar8 * auVar20, 8);
   if (( uVar35 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar35 * lVar39,auVar21._8_8_ = 0,auVar21._0_8_ = uVar44,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar40 ) - SUB164(auVar9 * auVar21, 8)) * lVar39,auVar22._8_8_ = 0,auVar22._0_8_ = uVar44,SUB164(auVar10 * auVar22, 8) < uVar45) goto LAB_00107717;
   goto LAB_00107179;
}
/* GDScriptTextDocument::initialize() */void GDScriptTextDocument::initialize(GDScriptTextDocument *this) {
   long *plVar1;
   uint uVar2;
   undefined8 *puVar3;
   long lVar4;
   CowData *pCVar5;
   long lVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   code *pcVar15;
   ulong uVar16;
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   undefined8 uVar19;
   char cVar20;
   uint uVar21;
   Variant *pVVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   char *pcVar26;
   long lVar27;
   long lVar28;
   uint uVar29;
   long in_FS_OFFSET;
   bool bVar30;
   long *local_198;
   long local_160;
   long local_158;
   long local_150;
   char *local_148;
   size_t local_140;
   int local_138[8];
   int local_118[2];
   undefined8 local_110;
   undefined8 uStack_108;
   long local_f8;
   int local_f0;
   undefined1 local_e8[16];
   long local_d8;
   undefined2 local_d0;
   undefined1 local_c8[16];
   long local_b8;
   undefined4 local_b0;
   undefined1 local_a8[16];
   long local_98;
   long local_88;
   undefined1 local_78[16];
   long local_68;
   Array local_60[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar20 = GDScriptLanguageProtocol::is_smart_resolve_enabled();
   if (cVar20 != '\0') {
      pcVar26 = *(char**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
      if (( pcVar26 == (char*)0x0 ) || ( local_148 = pcVar26 ),cVar20 = RefCounted::reference(),cVar20 == '\0') {
         local_148 = (char*)0x0;
         pcVar26 = (char*)0x0;
      }

      Ref<GDScriptWorkspace>::unref((Ref<GDScriptWorkspace>*)&local_148);
      for (puVar3 = *(undefined8**)( pcVar26 + 0x238 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         local_198 = (long*)puVar3[6];
         if (local_198 != (long*)0x0) {
            LAB_00107cb0:if (( puVar3[4] != 0 ) && ( *(int*)( (long)puVar3 + 0x44 ) != 0 )) {
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( puVar3 + 8 ) * 4 );
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( puVar3 + 8 ) * 8 );
               uVar21 = String::hash();
               uVar16 = CONCAT44(0, uVar2);
               lVar28 = puVar3[5];
               uVar23 = 1;
               if (uVar21 != 0) {
                  uVar23 = uVar21;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar23 * lVar4;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = uVar16;
               lVar25 = SUB168(auVar7 * auVar11, 8);
               uVar21 = *(uint*)( lVar28 + lVar25 * 4 );
               uVar24 = SUB164(auVar7 * auVar11, 8);
               if (uVar21 != 0) {
                  uVar29 = 0;
                  do {
                     if (uVar21 == uVar23) {
                        cVar20 = String::operator ==((String*)( *(long*)( puVar3[4] + lVar25 * 8 ) + 0x10 ), (String*)( local_198 + 2 ));
                        if (cVar20 != '\0') goto LAB_00107df6;
                        lVar28 = puVar3[5];
                     }

                     uVar29 = uVar29 + 1;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = ( ulong )(uVar24 + 1) * lVar4;
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = uVar16;
                     lVar25 = SUB168(auVar8 * auVar12, 8);
                     uVar21 = *(uint*)( lVar28 + lVar25 * 4 );
                     uVar24 = SUB164(auVar8 * auVar12, 8);
                     if (( uVar21 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar21 * lVar4,auVar13._8_8_ = 0,auVar13._0_8_ = uVar16,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar24 ) - SUB164(auVar9 * auVar13, 8)) * lVar4,auVar14._8_8_ = 0,auVar14._0_8_ = uVar16,SUB164(auVar10 * auVar14, 8) < uVar29) break;
                  }
 while ( true );
               }

            }

            _err_print_error(&_LC69, "./core/templates/hash_map.h", 0x147, "FATAL: Condition \"!exists\" is true.", "HashMap key not found.", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar15 = (code*)invalidInstructionException();
            ( *pcVar15 )();
         }

         LAB_00108547:;
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_00107df6:local_f8 = 0;
   local_f0 = 0;
   pCVar5 = *(CowData**)( *(long*)( puVar3[4] + (ulong)uVar24 * 8 ) + 0x18 );
   local_d8 = 0;
   local_e8 = (undefined1[16])0x0;
   if (lsp::MarkupKind::Markdown != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( local_e8 + 8 ), (CowData*)&lsp::MarkupKind::Markdown);
   }

   local_d0 = 0;
   local_c8 = (undefined1[16])0x0;
   local_78 = (undefined1[16])0x0;
   local_b8 = 0;
   local_b0 = 0;
   local_98 = 0;
   local_88 = 0;
   local_68 = 0;
   local_a8 = (undefined1[16])0x0;
   Array::Array(local_60);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   if (local_f8 != *(long*)pCVar5) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, pCVar5);
   }

   switch (*(undefined4*)( pCVar5 + 0x20 )) {
      default:
    local_f0 = 1;
    break;
      case 1:
    local_f0 = 0x11;
    break;
      case 5:
    local_f0 = 7;
    break;
      case 6:
      case 0xc:
    local_f0 = 2;
    break;
      case 7:
    local_f0 = 10;
    break;
      case 10:
    local_f0 = 0xd;
    break;
      case 0xd:
    local_f0 = 6;
    break;
      case 0xe:
    local_f0 = 0x15;
    break;
      case 0x18:
    local_f0 = 0x17;
   }

   local_148 = "::";
   local_158 = 0;
   local_140 = 2;
   String::parse_latin1((StrRange*)&local_158);
   lVar4 = puVar3[2];
   if (lVar4 != 0) {
      pcVar26 = *(char**)( lVar4 + 8 );
      local_160 = 0;
      if (pcVar26 != (char*)0x0) {
         local_140 = strlen(pcVar26);
         local_148 = pcVar26;
         String::parse_latin1((StrRange*)&local_160);
         goto LAB_00107fb4;
      }

      plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
      if (*(long*)( lVar4 + 0x10 ) != 0) {
         do {
            lVar28 = *plVar1;
            if (lVar28 == 0) goto LAB_001085a9;
            LOCK();
            lVar25 = *plVar1;
            bVar30 = lVar28 == lVar25;
            if (bVar30) {
               *plVar1 = lVar28 + 1;
               lVar25 = lVar28;
            }

            UNLOCK();
         }
 while ( !bVar30 );
         if (lVar25 != -1) {
            local_160 = *(long*)( lVar4 + 0x10 );
         }

         goto LAB_00107fb4;
      }

   }

   LAB_001085a9:local_160 = 0;
   LAB_00107fb4:String::operator +((String*)&local_150, (String*)&local_160);
   String::operator +((String*)&local_148, (String*)&local_150);
   Variant::Variant((Variant*)local_118, (String*)&local_148);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   pcVar26 = local_148;
   local_58 = CONCAT44(local_58._4_4_, local_118[0]);
   if (local_148 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = (char*)0x0;
         Memory::free_static(pcVar26 + -0x10, false);
      }

   }

   lVar4 = local_150;
   if (local_150 != 0) {
      LOCK();
      plVar1 = (long*)( local_150 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_150 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar1 = (long*)( local_160 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_158;
   if (local_158 != 0) {
      LOCK();
      plVar1 = (long*)( local_158 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_158 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   Dictionary::Dictionary((Dictionary*)&local_148);
   Variant::Variant((Variant*)local_118, (String*)&local_f8);
   Variant::Variant((Variant*)local_138, "label");
   pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_148);
   if (pVVar22 != (Variant*)local_118) {
      if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar22 = 0;
      *(int*)pVVar22 = local_118[0];
      *(undefined8*)( pVVar22 + 8 ) = local_110;
      *(undefined8*)( pVVar22 + 0x10 ) = uStack_108;
      local_118[0] = 0;
   }

   if (Variant::needs_deinit[local_138[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_118, local_f0);
   Variant::Variant((Variant*)local_138, "kind");
   pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_148);
   if (pVVar22 != (Variant*)local_118) {
      if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar22 = 0;
      *(int*)pVVar22 = local_118[0];
      *(undefined8*)( pVVar22 + 8 ) = local_110;
      *(undefined8*)( pVVar22 + 0x10 ) = uStack_108;
      local_118[0] = 0;
   }

   if (Variant::needs_deinit[local_138[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_118, "data");
   pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_148);
   Variant::operator =(pVVar22, (Variant*)&local_58);
   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( local_b8 != 0 ) && ( 1 < *(uint*)( local_b8 + -8 ) )) {
      Variant::Variant((Variant*)local_118, (String*)&local_b8);
      Variant::Variant((Variant*)local_138, "insertText");
      pVVar22 = (Variant*)Dictionary::operator []((Variant*)&local_148);
      if (pVVar22 != (Variant*)local_118) {
         if (Variant::needs_deinit[*(int*)pVVar22] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar22 = 0;
         *(int*)pVVar22 = local_118[0];
         *(undefined8*)( pVVar22 + 8 ) = local_110;
         *(undefined8*)( pVVar22 + 0x10 ) = uStack_108;
         local_118[0] = 0;
      }

      if (Variant::needs_deinit[local_138[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_118[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_118, (Dictionary*)&local_148);
   Array::push_back((Variant*)( this + 0x188 ));
   if (Variant::needs_deinit[local_118[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_148);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   Array::~Array(local_60);
   lVar4 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar1 = (long*)( local_68 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   uVar19 = local_78._8_8_;
   if (local_78._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_78._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78._8_8_ = 0;
         Memory::free_static((void*)( uVar19 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)local_78);
   lVar4 = local_88;
   if (local_88 != 0) {
      LOCK();
      plVar1 = (long*)( local_88 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_88 == 0) {
            /* WARNING: Does not return */
            pcVar15 = (code*)invalidInstructionException();
            ( *pcVar15 )();
         }

         lVar28 = *(long*)( local_88 + -8 );
         lVar27 = 0;
         local_88 = 0;
         lVar25 = lVar4;
         if (lVar28 != 0) {
            do {
               if (*(long*)( lVar25 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar25 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar6 = *(long*)( lVar25 + 0x10 );
                     *(undefined8*)( lVar25 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar6 + -0x10 ), false);
                  }

               }

               lVar27 = lVar27 + 1;
               lVar25 = lVar25 + 0x18;
            }
 while ( lVar28 != lVar27 );
         }

         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   lVar4 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar1 = (long*)( local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   uVar19 = local_c8._8_8_;
   if (local_c8._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_c8._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8._8_8_ = 0;
         Memory::free_static((void*)( uVar19 + -0x10 ), false);
      }

   }

   uVar19 = local_c8._0_8_;
   if (local_c8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_c8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar17._8_8_ = 0;
         auVar17._0_8_ = local_c8._8_8_;
         local_c8 = auVar17 << 0x40;
         Memory::free_static((void*)( uVar19 + -0x10 ), false);
      }

   }

   lVar4 = local_d8;
   if (local_d8 != 0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   uVar19 = local_e8._8_8_;
   if (local_e8._8_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e8._8_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8._8_8_ = 0;
         Memory::free_static((void*)( uVar19 + -0x10 ), false);
      }

   }

   uVar19 = local_e8._0_8_;
   if (local_e8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar18._8_8_ = 0;
         auVar18._0_8_ = local_e8._8_8_;
         local_e8 = auVar18 << 0x40;
         Memory::free_static((void*)( uVar19 + -0x10 ), false);
      }

   }

   lVar4 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   local_198 = (long*)*local_198;
   if (local_198 == (long*)0x0) goto LAB_00108547;
   goto LAB_00107cb0;
}
/* GDScriptTextDocument::completion(Dictionary const&) */Dictionary *GDScriptTextDocument::completion(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   char cVar6;
   Variant *pVVar7;
   Dictionary *in_RDX;
   CompletionParams *pCVar8;
   long lVar9;
   long lVar10;
   undefined4 *puVar11;
   long in_FS_OFFSET;
   Dictionary local_170[8];
   undefined8 *local_168;
   Dictionary local_160[8];
   undefined8 local_158;
   undefined8 local_150;
   undefined4 local_148;
   undefined8 local_140;
   int local_138[8];
   int local_118[2];
   undefined8 local_110;
   undefined8 uStack_108;
   long local_f8;
   int local_f0;
   CowData<char32_t> local_e8[16];
   undefined8 local_d8;
   undefined2 local_d0;
   CowData<char32_t> local_c8[16];
   long local_b8;
   undefined4 local_b0;
   undefined1 local_a8[16];
   undefined8 local_98[2];
   long local_88;
   CowData<String> local_78[8];
   CowData<char32_t> aCStack_70[8];
   undefined8 local_68;
   Array local_60[8];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array((Array*)param_1);
   local_158 = 0;
   local_150 = 0;
   local_148 = 2;
   local_140 = 0;
   lsp::CompletionParams::load((CompletionParams*)&local_158, in_RDX);
   lsp::CompletionParams::to_json();
   local_168 = (undefined8*)0x0;
   pCVar8 = *(CompletionParams**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (( pCVar8 != (CompletionParams*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
      pCVar8 = (CompletionParams*)0x0;
   }

   GDScriptWorkspace::completion(pCVar8, (List*)&local_158);
   cVar6 = RefCounted::unreference();
   if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler((Object*)pCVar8) ),cVar6 != '\0') {
      ( **(code**)( *(long*)pCVar8 + 0x140 ) )(pCVar8);
      Memory::free_static(pCVar8, false);
   }

   if (( local_168 != (undefined8*)0x0 ) && ( *(int*)( local_168 + 2 ) != 0 )) {
      Array::resize((int)param_1);
      if (( local_168 != (undefined8*)0x0 ) && ( puVar11 = (undefined4*)*local_168 ),puVar11 != (undefined4*)0x0) {
         do {
            local_f8 = 0;
            for (int i = 0; i < 16; i++) {
               local_e8[i] = (CowData<char32_t>)0;
            }

            local_f0 = 0;
            local_d8 = 0;
            if (lsp::MarkupKind::Markdown != 0) {
               CowData<char32_t>::_ref(local_e8 + 8, (CowData*)&lsp::MarkupKind::Markdown);
            }

            local_d0 = 0;
            local_a8 = (undefined1[16])0x0;
            local_b8 = 0;
            local_b0 = 0;
            local_98[0] = 0;
            local_88 = 0;
            local_68 = 0;
            for (int i = 0; i < 16; i++) {
               local_c8[i] = (CowData<char32_t>)0;
            }

            _local_78 = (undefined1[16])0x0;
            Array::Array(local_60);
            local_58 = 0;
            local_50 = (undefined1[16])0x0;
            if (local_f8 != *(long*)( puVar11 + 2 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)( puVar11 + 2 ));
            }

            Variant::Variant((Variant*)local_118, local_170);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            local_58 = CONCAT44(local_58._4_4_, local_118[0]);
            if (local_b8 != *(long*)( puVar11 + 4 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)( puVar11 + 4 ));
            }

            switch (*puVar11) {
               case 0:
          local_f0 = 7;
          break;
               case 1:
          local_f0 = 2;
          break;
               case 2:
          local_f0 = 0x17;
          break;
               case 3:
          local_f0 = 6;
          break;
               case 4:
          local_f0 = 10;
          break;
               case 5:
          local_f0 = 0xd;
          break;
               case 6:
          local_f0 = 0x15;
          break;
               case 7:
          local_f0 = 0xf;
          break;
               case 8:
          local_f0 = 0x11;
          break;
               case 9:
          local_f0 = 1;
            }

            Dictionary::Dictionary(local_160);
            Variant::Variant((Variant*)local_118, (String*)&local_f8);
            Variant::Variant((Variant*)local_138, "label");
            pVVar7 = (Variant*)Dictionary::operator []((Variant*)local_160);
            if (pVVar7 != (Variant*)local_118) {
               if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar7 = 0;
               *(int*)pVVar7 = local_118[0];
               *(undefined8*)( pVVar7 + 8 ) = local_110;
               *(undefined8*)( pVVar7 + 0x10 ) = uStack_108;
               local_118[0] = 0;
            }

            if (Variant::needs_deinit[local_138[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_118[0]] != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_118, local_f0);
            Variant::Variant((Variant*)local_138, "kind");
            pVVar7 = (Variant*)Dictionary::operator []((Variant*)local_160);
            if (pVVar7 != (Variant*)local_118) {
               if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar7 = 0;
               *(int*)pVVar7 = local_118[0];
               *(undefined8*)( pVVar7 + 8 ) = local_110;
               *(undefined8*)( pVVar7 + 0x10 ) = uStack_108;
               local_118[0] = 0;
            }

            if (Variant::needs_deinit[local_138[0]] == '\0') {
               cVar6 = Variant::needs_deinit[local_118[0]];
            }
 else {
               Variant::_clear_internal();
               cVar6 = Variant::needs_deinit[local_118[0]];
            }

            if (cVar6 != '\0') {
               Variant::_clear_internal();
            }

            Variant::Variant((Variant*)local_118, "data");
            pVVar7 = (Variant*)Dictionary::operator []((Variant*)local_160);
            Variant::operator =(pVVar7, (Variant*)&local_58);
            if (Variant::needs_deinit[local_118[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (( local_b8 != 0 ) && ( 1 < *(uint*)( local_b8 + -8 ) )) {
               Variant::Variant((Variant*)local_118, (String*)&local_b8);
               Variant::Variant((Variant*)local_138, "insertText");
               pVVar7 = (Variant*)Dictionary::operator []((Variant*)local_160);
               Variant::operator =(pVVar7, (Variant*)local_118);
               if (Variant::needs_deinit[local_138[0]] != '\0') {
                  Variant::_clear_internal();
               }

               if (Variant::needs_deinit[local_118[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }

            Variant::Variant((Variant*)local_118, local_160);
            pVVar7 = (Variant*)Array::operator []((int)param_1);
            if (pVVar7 == (Variant*)local_118) {
               if (Variant::needs_deinit[local_118[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               if (Variant::needs_deinit[*(int*)pVVar7] != '\0') {
                  Variant::_clear_internal();
               }

               *(undefined4*)pVVar7 = 0;
               *(int*)pVVar7 = local_118[0];
               *(undefined8*)( pVVar7 + 8 ) = local_110;
               *(undefined8*)( pVVar7 + 0x10 ) = uStack_108;
            }

            Dictionary::~Dictionary(local_160);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            Array::~Array(local_60);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)( local_78 + 8 ));
            CowData<String>::_unref(local_78);
            lVar5 = local_88;
            if (local_88 != 0) {
               LOCK();
               plVar1 = (long*)( local_88 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  if (local_88 == 0) {
                     /* WARNING: Does not return */
                     pcVar4 = (code*)invalidInstructionException();
                     ( *pcVar4 )();
                  }

                  lVar2 = *(long*)( local_88 + -8 );
                  local_88 = 0;
                  if (lVar2 != 0) {
                     lVar9 = 0;
                     lVar10 = lVar5;
                     do {
                        if (*(long*)( lVar10 + 0x10 ) != 0) {
                           LOCK();
                           plVar1 = (long*)( *(long*)( lVar10 + 0x10 ) + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              lVar3 = *(long*)( lVar10 + 0x10 );
                              *(undefined8*)( lVar10 + 0x10 ) = 0;
                              Memory::free_static((void*)( lVar3 + -0x10 ), false);
                           }

                        }

                        lVar9 = lVar9 + 1;
                        lVar10 = lVar10 + 0x18;
                     }
 while ( lVar2 != lVar9 );
                  }

                  Memory::free_static((void*)( lVar5 + -0x10 ), false);
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            CowData<char32_t>::_unref(local_c8 + 8);
            CowData<char32_t>::_unref(local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
            CowData<char32_t>::_unref(local_e8 + 8);
            CowData<char32_t>::_unref(local_e8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
            puVar11 = *(undefined4**)( puVar11 + 0x20 );
         }
 while ( puVar11 != (undefined4*)0x0 );
      }

   }

   List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::~List((List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>*)&local_168);
   Dictionary::~Dictionary(local_170);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::documentSymbol(Dictionary const&) */Dictionary *GDScriptTextDocument::documentSymbol(Dictionary *param_1) {
   long *plVar1;
   uint uVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   code *pcVar11;
   ulong uVar12;
   char cVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   Variant *in_RDX;
   long lVar17;
   Object *pOVar18;
   long lVar19;
   long lVar20;
   uint uVar21;
   long in_FS_OFFSET;
   bool bVar22;
   Variant local_e8[8];
   Variant local_e0[8];
   String local_d8[8];
   Dictionary local_d0[8];
   undefined8 local_c8;
   undefined8 local_c0;
   undefined8 local_b8;
   undefined8 local_b0;
   undefined4 local_a8;
   undefined2 local_a4;
   undefined8 local_a0;
   undefined8 uStack_98;
   undefined8 local_90;
   undefined8 uStack_88;
   undefined8 local_80;
   undefined8 local_78[2];
   undefined8 local_68[2];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_e8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "uri");
   Dictionary::operator [](local_e8);
   Variant::operator_cast_to_String(local_e0);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   pOVar18 = *(Object**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (( pOVar18 != (Object*)0x0 ) && ( cVar13 = cVar13 == '\0' )) {
      pOVar18 = (Object*)0x0;
   }

   GDScriptWorkspace::get_file_path(local_d8);
   cVar13 = RefCounted::unreference();
   if (( cVar13 != '\0' ) && ( cVar13 = cVar13 != '\0' )) {
      ( **(code**)( *(long*)pOVar18 + 0x140 ) )(pOVar18);
      Memory::free_static(pOVar18, false);
   }

   Array::Array((Array*)param_1);
   pOVar18 = *(Object**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   if (pOVar18 == (Object*)0x0) {
      /* WARNING: Does not return */
      pcVar11 = (code*)invalidInstructionException();
      ( *pcVar11 )();
   }

   cVar13 = RefCounted::reference();
   if (cVar13 == '\0') {
      pOVar18 = (Object*)0x0;
   }

   if (( *(long*)( pOVar18 + 0x1c8 ) != 0 ) && ( *(int*)( pOVar18 + 0x1ec ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pOVar18 + 0x1e8 ) * 4 );
      lVar19 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( pOVar18 + 0x1e8 ) * 8 );
      uVar14 = String::hash();
      uVar12 = CONCAT44(0, uVar2);
      lVar20 = *(long*)( pOVar18 + 0x1d0 );
      uVar15 = 1;
      if (uVar14 != 0) {
         uVar15 = uVar14;
      }

      uVar21 = 0;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar15 * lVar19;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      lVar17 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( lVar20 + lVar17 * 4 );
      uVar16 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         do {
            if (uVar15 == uVar14) {
               cVar13 = String::operator ==((String*)( *(long*)( *(long*)( pOVar18 + 0x1c8 ) + lVar17 * 8 ) + 0x10 ), local_d8);
               if (cVar13 != '\0') {
                  lVar19 = *(long*)( *(long*)( pOVar18 + 0x1c8 ) + (ulong)uVar16 * 8 );
                  cVar13 = RefCounted::unreference();
                  if (( cVar13 == '\0' ) || ( cVar13 = cVar13 == '\0' )) goto LAB_00109367;
                  goto LAB_0010959a;
               }

               lVar20 = *(long*)( pOVar18 + 0x1d0 );
            }

            uVar21 = uVar21 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar16 + 1) * lVar19;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar12;
            lVar17 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( lVar20 + lVar17 * 4 );
            uVar16 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar19,auVar9._8_8_ = 0,auVar9._0_8_ = uVar12,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + uVar16 ) - SUB164(auVar5 * auVar9, 8)) * lVar19,auVar10._8_8_ = 0,auVar10._0_8_ = uVar12,uVar21 <= SUB164(auVar6 * auVar10, 8) );
         cVar13 = RefCounted::unreference();
         goto joined_r0x00109582;
      }

   }

   cVar13 = RefCounted::unreference();
   joined_r0x00109582:if (cVar13 != '\0') {
      lVar19 = 0;
      cVar13 = predelete_handler(pOVar18);
      if (cVar13 != '\0') {
         LAB_0010959a:( **(code**)( *(long*)pOVar18 + 0x140 ) )(pOVar18);
         Memory::free_static(pOVar18, false);
         LAB_00109367:if (lVar19 != 0) {
            lVar19 = *(long*)( lVar19 + 0x18 );
            local_c8 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)( lVar19 + 0xa40 ));
            local_c0 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_c0, (CowData*)( lVar19 + 0xa48 ));
            local_b8 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)( lVar19 + 0xa50 ));
            local_b0 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)( lVar19 + 0xa58 ));
            local_a8 = *(undefined4*)( lVar19 + 0xa60 );
            local_a0 = *(undefined8*)( lVar19 + 0xa68 );
            uStack_98 = *(undefined8*)( lVar19 + 0xa70 );
            local_90 = *(undefined8*)( lVar19 + 0xa78 );
            uStack_88 = *(undefined8*)( lVar19 + 0xa80 );
            local_80 = 0;
            local_a4 = *(undefined2*)( lVar19 + 0xa64 );
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar19 + 0xa88 ));
            local_78[0] = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)local_78, (CowData*)( lVar19 + 0xa90 ));
            local_68[0] = 0;
            if (*(long*)( lVar19 + 0xaa0 ) != 0) {
               CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol>*)local_68);
               if (*(long*)( lVar19 + 0xaa0 ) != 0) {
                  plVar1 = (long*)( *(long*)( lVar19 + 0xaa0 ) + -0x10 );
                  do {
                     lVar20 = *plVar1;
                     if (lVar20 == 0) goto LAB_001094d7;
                     LOCK();
                     lVar17 = *plVar1;
                     bVar22 = lVar20 == lVar17;
                     if (bVar22) {
                        *plVar1 = lVar20 + 1;
                        lVar17 = lVar20;
                     }

                     UNLOCK();
                  }
 while ( !bVar22 );
                  if (lVar17 != -1) {
                     local_68[0] = *(undefined8*)( lVar19 + 0xaa0 );
                  }

               }

            }

            LAB_001094d7:lsp::DocumentSymbol::to_json(SUB81(local_d0, 0));
            Variant::Variant((Variant*)local_58, local_d0);
            Array::push_back((Variant*)param_1);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Dictionary::~Dictionary(local_d0);
            CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol>*)local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         }

      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_e0);
   Dictionary::~Dictionary((Dictionary*)local_e8);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::prepareRename(Dictionary const&) */Dictionary *GDScriptTextDocument::prepareRename(Dictionary *param_1) {
   undefined1 auVar1[16];
   char cVar2;
   char cVar3;
   int iVar4;
   Variant *pVVar5;
   Variant *in_RDX;
   TextDocumentPositionParams *pTVar6;
   long in_FS_OFFSET;
   Dictionary local_118[8];
   Dictionary local_110[8];
   long local_108;
   undefined8 local_100;
   undefined1 local_f8[16];
   Variant local_e8[8];
   CowData<char32_t> aCStack_e0[8];
   CowData<char32_t> local_d8[16];
   undefined4 local_c8;
   undefined2 local_c4;
   undefined1 local_c0[16];
   undefined1 local_b0[16];
   CowData<char32_t> local_a0[24];
   undefined8 local_88[2];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_108 = 0;
   local_100 = 0;
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_e8);
   Variant::Variant((Variant*)local_78, "uri");
   Dictionary::operator [](local_e8);
   Variant::operator_cast_to_String((Variant*)local_f8);
   if (local_108 != local_f8._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
      local_108 = local_f8._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_f8._8_8_;
      local_f8 = auVar1 << 0x40;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_e8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "position");
   Dictionary::operator [](in_RDX);
   Variant::operator_cast_to_Dictionary(local_e8);
   Variant::Variant((Variant*)local_78, "line");
   pVVar5 = (Variant*)Dictionary::operator [](local_e8);
   iVar4 = Variant::operator_cast_to_int(pVVar5);
   local_100 = CONCAT44(local_100._4_4_, iVar4);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar5 = (Variant*)Dictionary::operator [](local_e8);
   iVar4 = Variant::operator_cast_to_int(pVVar5);
   local_100 = CONCAT44(iVar4, (undefined4)local_100);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_e8);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_c8 = 1;
   local_c4 = 0;
   local_88[0] = 0;
   pTVar6 = *(TextDocumentPositionParams**)( GDScriptLanguageProtocol::singleton + 0x1f8 );
   _local_e8 = (undefined1[16])0x0;
   for (int i = 0; i < 16; i++) {
      local_d8[i] = (CowData<char32_t>)0;
   }

   local_c0 = (undefined1[16])0x0;
   local_b0 = (undefined1[16])0x0;
   for (int i = 0; i < 16; i++) {
      local_a0[i] = (CowData<char32_t>)0;
   }

   local_f8 = (undefined1[16])0x0;
   if (pTVar6 != (TextDocumentPositionParams*)0x0) {
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') {
         pTVar6 = (TextDocumentPositionParams*)0x0;
      }

   }

   cVar2 = GDScriptWorkspace::can_rename(pTVar6, (DocumentSymbol*)&local_108, (Range*)local_e8);
   cVar3 = RefCounted::unreference();
   if (cVar3 != '\0') {
      cVar3 = predelete_handler((Object*)pTVar6);
      if (cVar3 != '\0') {
         ( **(code**)( *(long*)pTVar6 + 0x140 ) )(pTVar6);
         Memory::free_static(pTVar6, false);
      }

   }

   if (cVar2 == '\0') {
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   }
 else {
      Dictionary::Dictionary(local_118);
      Dictionary::Dictionary(local_110);
      Variant::Variant((Variant*)local_78, local_f8._0_4_);
      Variant::Variant((Variant*)local_58, "line");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_110);
      Variant::operator =(pVVar5, (Variant*)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_78, local_f8._4_4_);
      Variant::Variant((Variant*)local_58, "character");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_110);
      Variant::operator =(pVVar5, (Variant*)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, local_110);
      Variant::Variant((Variant*)local_78, "start");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_118);
      Variant::operator =(pVVar5, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary(local_110);
      Dictionary::Dictionary(local_110);
      Variant::Variant((Variant*)local_78, local_f8._8_4_);
      Variant::Variant((Variant*)local_58, "line");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_110);
      Variant::operator =(pVVar5, (Variant*)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_78, local_f8._12_4_);
      Variant::Variant((Variant*)local_58, "character");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_110);
      Variant::operator =(pVVar5, (Variant*)local_78);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, local_110);
      Variant::Variant((Variant*)local_78, "end");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_118);
      Variant::operator =(pVVar5, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary(local_110);
      Variant::Variant((Variant*)param_1, local_118);
      Dictionary::~Dictionary(local_118);
   }

   CowData<lsp::DocumentSymbol>::_unref((CowData<lsp::DocumentSymbol>*)local_88);
   CowData<char32_t>::_unref(local_a0 + 8);
   CowData<char32_t>::_unref(local_a0);
   CowData<char32_t>::_unref(local_d8 + 8);
   CowData<char32_t>::_unref(local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)( local_e8 + 8 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x1156, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1156, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* GDScriptTextDocument::is_class_ptr(void*) const */uint GDScriptTextDocument::is_class_ptr(GDScriptTextDocument *this, void *param_1) {
   return (uint)CONCAT71(0x1156, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1156, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1156, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GDScriptTextDocument::_getv(StringName const&, Variant&) const */undefined8 GDScriptTextDocument::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GDScriptTextDocument::_setv(StringName const&, Variant const&) */undefined8 GDScriptTextDocument::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GDScriptTextDocument::_validate_propertyv(PropertyInfo&) const */void GDScriptTextDocument::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GDScriptTextDocument::_property_can_revertv(StringName const&) const */undefined8 GDScriptTextDocument::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GDScriptTextDocument::_property_get_revertv(StringName const&, Variant&) const */undefined8 GDScriptTextDocument::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GDScriptTextDocument::_notificationv(int, bool) */void GDScriptTextDocument::_notificationv(int param_1, bool param_2) {
   return;
}
/* GDScript::is_tool() const */GDScript GDScript::is_tool(GDScript *this) {
   return this[0x240];
}
/* CallableCustomMethodPointer<ScriptEditor, void, String const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptEditor,void,String_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<GDScriptTextDocument, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<GDScriptTextDocument, void, Ref<GDScript>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>> *this) {
   return;
}
/* MethodBindT<String const&>::_gen_argument_type(int) const */long MethodBindT<String_const&>::_gen_argument_type(MethodBindT<String_const&> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}
/* MethodBindT<String const&>::get_argument_meta(int) const */undefined8 MethodBindT<String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Dictionary, Dictionary const&>::_gen_argument_type(int) const */undefined8 MethodBindTR<Dictionary,Dictionary_const&>::_gen_argument_type(int param_1) {
   return 0x1b;
}
/* MethodBindTR<Dictionary, Dictionary const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Dictionary,Dictionary_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Array, Dictionary const&>::_gen_argument_type(int) const */int MethodBindTR<Array,Dictionary_const&>::_gen_argument_type(MethodBindTR<Array,Dictionary_const&> *this, int param_1) {
   return 0x1c - ( uint )(param_1 == 0);
}
/* MethodBindTR<Array, Dictionary const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Array,Dictionary_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Variant, Dictionary const&>::_gen_argument_type(int) const */byte MethodBindTR<Variant,Dictionary_const&>::_gen_argument_type(MethodBindTR<Variant,Dictionary_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x1b;
}
/* MethodBindTR<Variant, Dictionary const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Variant,Dictionary_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Variant const&>::_gen_argument_type(int) const */undefined8 MethodBindT<Variant_const&>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindT<Variant const&>::get_argument_meta(int) const */undefined8 MethodBindT<Variant_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<ScriptEditor, void, String const&>::get_argument_count(bool&) const
    */undefined8 CallableCustomMethodPointer<ScriptEditor,void,String_const&>::get_argument_count(CallableCustomMethodPointer<ScriptEditor,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<GDScriptTextDocument, void, String const&>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&>::get_argument_count(CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<GDScriptTextDocument, void, Ref<GDScript>
   >::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>>::get_argument_count(CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<GDScriptTextDocument, void, Ref<GDScript>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<GDScriptTextDocument, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<ScriptEditor, void, String const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptEditor,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<Variant const&>::~MethodBindT() */void MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115438;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Variant const&>::~MethodBindT() */void MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115438;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Dictionary, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Dictionary,Dictionary_const&>::~MethodBindTR(MethodBindTR<Dictionary,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115558;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Dictionary, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Dictionary,Dictionary_const&>::~MethodBindTR(MethodBindTR<Dictionary,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115558;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Array, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Array,Dictionary_const&>::~MethodBindTR(MethodBindTR<Array,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001154f8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Array, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Array,Dictionary_const&>::~MethodBindTR(MethodBindTR<Array,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001154f8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Variant, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Variant,Dictionary_const&>::~MethodBindTR(MethodBindTR<Variant,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115498;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Variant, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Variant,Dictionary_const&>::~MethodBindTR(MethodBindTR<Variant,Dictionary_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115498;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001155b8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001155b8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00114fc8;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00114fc8;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* ScriptEditor::goto_help(String const&) */void ScriptEditor::goto_help(String *param_1) {
   ScriptEditor::_help_class_goto(param_1);
   return;
}
/* Ref<Shader>::~Ref() */void Ref<Shader>::~Ref(Ref<Shader> *this) {
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
            return;
         }

      }

   }

   return;
}
/* List<Color, DefaultAllocator>::~List() */undefined8 List<Color,DefaultAllocator>::~List(List<Color,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long *plVar5;
   undefined8 uStack_18;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return uStack_18;
   }

   do {
      pvVar1 = (void*)*plVar5;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            uVar4 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return uVar4;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x20 ) == plVar5) {
         lVar3 = *(long*)( (long)pvVar1 + 0x10 );
         lVar2 = *(long*)( (long)pvVar1 + 0x18 );
         *plVar5 = lVar3;
         if (pvVar1 == (void*)plVar5[1]) {
            plVar5[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x10 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x18 ) = lVar2;
         }

         Memory::free_static(pvVar1, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   uVar4 = Memory::free_static(plVar5, false);
   return uVar4;
}
/* CallableCustomMethodPointer<GDScriptTextDocument, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&>::get_object(CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&> *this) {
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
         goto LAB_0010a4dd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a4dd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a4dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<GDScriptTextDocument, void, Ref<GDScript> >::get_object() const */undefined8 CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>>::get_object(CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>> *this) {
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
         goto LAB_0010a5dd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a5dd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a5dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<ScriptEditor, void, String const&>::get_object() const */undefined8 CallableCustomMethodPointer<ScriptEditor,void,String_const&>::get_object(CallableCustomMethodPointer<ScriptEditor,void,String_const&> *this) {
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
         goto LAB_0010a6dd;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010a6dd;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010a6dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* GDScriptTextDocument::~GDScriptTextDocument() */void GDScriptTextDocument::~GDScriptTextDocument(GDScriptTextDocument *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00115128;
   Array::~Array((Array*)( this + 0x188 ));
   if (*(long*)( this + 0x180 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x180 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00114fc8;
   Object::~Object((Object*)this);
   return;
}
/* GDScriptTextDocument::~GDScriptTextDocument() */void GDScriptTextDocument::~GDScriptTextDocument(GDScriptTextDocument *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_00115128;
   Array::~Array((Array*)( this + 0x188 ));
   if (*(long*)( this + 0x180 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x180 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00114fc8;
   Object::~Object((Object*)this);
   operator_delete(this, 400);
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
/* RefCounted::_get_class_namev() const */undefined8 *RefCounted::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010a933:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010a933;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010a99e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010a99e:return &_get_class_namev();
}
/* GDScriptTextDocument::_get_class_namev() const */undefined8 *GDScriptTextDocument::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010aa23:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010aa23;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GDScriptTextDocument");
         goto LAB_0010aa8e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GDScriptTextDocument");
   LAB_0010aa8e:return &_get_class_namev();
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
/* GDScriptTextDocument::get_class() const */void GDScriptTextDocument::get_class(void) {
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
/* lsp::DocumentLink::to_json() const */Dictionary *lsp::DocumentLink::to_json(void) {
   char cVar1;
   Variant *pVVar2;
   int *in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   Dictionary local_88[8];
   Dictionary local_80[8];
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   Dictionary::Dictionary(local_88);
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_78, *in_RSI);
   Variant::Variant((Variant*)local_58, "line");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, in_RSI[1]);
   Variant::Variant((Variant*)local_58, "character");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "start");
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

   Dictionary::~Dictionary(local_80);
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_78, in_RSI[2]);
   Variant::Variant((Variant*)local_58, "line");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, in_RSI[3]);
   Variant::Variant((Variant*)local_58, "character");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "end");
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

   Dictionary::~Dictionary(local_80);
   Variant::Variant((Variant*)local_58, local_88);
   Variant::Variant((Variant*)local_78, "range");
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
   Variant::Variant((Variant*)local_58, (String*)( in_RSI + 4 ));
   Variant::Variant((Variant*)local_78, "target");
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* lsp::Command::to_json() const */void lsp::Command::to_json(void) {
   char cVar1;
   int iVar2;
   Variant *pVVar3;
   String *in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   Variant::Variant((Variant*)local_58, in_RSI);
   Variant::Variant((Variant*)local_78, "title");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
   if (pVVar3 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = local_58[0];
      *(undefined8*)( pVVar3 + 8 ) = local_50;
      *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

   Variant::Variant((Variant*)local_58, in_RSI + 8);
   Variant::Variant((Variant*)local_78, "command");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
   if (pVVar3 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = local_58[0];
      *(undefined8*)( pVVar3 + 8 ) = local_50;
      *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

   iVar2 = Array::size();
   if (iVar2 != 0) {
      Variant::Variant((Variant*)local_58, (Array*)( in_RSI + 0x10 ));
      Variant::Variant((Variant*)local_78, "arguments");
      pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
      if (pVVar3 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar3 = 0;
         *(int*)pVVar3 = local_58[0];
         *(undefined8*)( pVVar3 + 8 ) = local_50;
         *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* lsp::MarkupContent::to_json() const */void lsp::MarkupContent::to_json(void) {
   char cVar1;
   Variant *pVVar2;
   String *in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   Variant::Variant((Variant*)local_58, in_RSI);
   Variant::Variant((Variant*)local_78, "kind");
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

   Variant::Variant((Variant*)local_58, in_RSI + 8);
   Variant::Variant((Variant*)local_78, "value");
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* lsp::DocumentSymbol::to_json(bool) const */Dictionary *lsp::DocumentSymbol::to_json(bool param_1) {
   char cVar1;
   Variant *pVVar2;
   long lVar3;
   long lVar4;
   char in_DL;
   String *in_RSI;
   undefined7 in_register_00000039;
   Dictionary *this;
   long lVar5;
   long in_FS_OFFSET;
   Dictionary local_88[8];
   Dictionary local_80[8];
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   this(Dictionary * CONCAT71(in_register_00000039, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(this);
   Variant::Variant((Variant*)local_58, in_RSI);
   Variant::Variant((Variant*)local_78, "name");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
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

   Variant::Variant((Variant*)local_58, in_RSI + 8);
   Variant::Variant((Variant*)local_78, "detail");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
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

   Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x20 ));
   Variant::Variant((Variant*)local_78, "kind");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
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

   Variant::Variant((Variant*)local_58, (bool)in_RSI[0x24]);
   Variant::Variant((Variant*)local_78, "deprecated");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
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

   Dictionary::Dictionary(local_88);
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0x28 ));
   Variant::Variant((Variant*)local_58, "line");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0x2c ));
   Variant::Variant((Variant*)local_58, "character");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   Variant::operator =(pVVar2, (Variant*)local_78);
   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "start");
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

   Dictionary::~Dictionary(local_80);
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0x30 ));
   Variant::Variant((Variant*)local_58, "line");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0x34 ));
   Variant::Variant((Variant*)local_58, "character");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "end");
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

   Dictionary::~Dictionary(local_80);
   Variant::Variant((Variant*)local_58, local_88);
   Variant::Variant((Variant*)local_78, "range");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
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

   Dictionary::~Dictionary(local_88);
   Dictionary::Dictionary(local_88);
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0x38 ));
   Variant::Variant((Variant*)local_58, "line");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   Variant::operator =(pVVar2, (Variant*)local_78);
   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0x3c ));
   Variant::Variant((Variant*)local_58, "character");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "start");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_88);
   Variant::operator =(pVVar2, (Variant*)local_58);
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

   Dictionary::~Dictionary(local_80);
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0x40 ));
   Variant::Variant((Variant*)local_58, "line");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0x44 ));
   Variant::Variant((Variant*)local_58, "character");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "end");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_88);
   Variant::operator =(pVVar2, (Variant*)local_58);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary(local_80);
   Variant::Variant((Variant*)local_58, local_88);
   Variant::Variant((Variant*)local_78, "selectionRange");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
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
   if (in_DL != '\0') {
      Variant::Variant((Variant*)local_58, in_RSI + 0x10);
      Variant::Variant((Variant*)local_78, "documentation");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
      Variant::operator =(pVVar2, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_58, in_RSI + 0x18);
      Variant::Variant((Variant*)local_78, "native_class");
      pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
      Variant::operator =(pVVar2, (Variant*)local_58);
      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (*(long*)( in_RSI + 0x60 ) != 0) {
      Array::Array((Array*)local_88);
      lVar3 = *(long*)( in_RSI + 0x60 );
      lVar4 = 0;
      lVar5 = 0;
      while (lVar3 != 0) {
         if (*(long*)( lVar3 + -8 ) <= lVar4) {
            Variant::Variant((Variant*)local_58, (Array*)local_88);
            Variant::Variant((Variant*)local_78, "children");
            pVVar2 = (Variant*)Dictionary::operator []((Variant*)this);
            Variant::operator =(pVVar2, (Variant*)local_58);
            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            break;
         }

         if (*(char*)( lVar3 + lVar5 + 0x25 ) == '\0') {
            to_json(SUB81(local_80, 0));
            Variant::Variant((Variant*)local_58, local_80);
            Array::push_back((Variant*)local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Dictionary::~Dictionary(local_80);
            lVar3 = *(long*)( in_RSI + 0x60 );
         }

         lVar4 = lVar4 + 1;
         lVar5 = lVar5 + 0x68;
      }
;
      Array::~Array((Array*)local_88);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* lsp::CompletionParams::to_json() */Dictionary *lsp::CompletionParams::to_json(void) {
   char cVar1;
   Variant *pVVar2;
   String *in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   Dictionary local_90[8];
   Dictionary local_88[8];
   Dictionary local_80[8];
   int local_78[2];
   undefined8 local_70;
   undefined8 uStack_68;
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_90);
   Variant::Variant((Variant*)local_58, in_RSI + 0x18);
   Variant::Variant((Variant*)local_78, "triggerCharacter");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_90);
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

   Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x10 ));
   Variant::Variant((Variant*)local_78, "triggerKind");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_90);
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

   Dictionary::Dictionary(in_RDI);
   Dictionary::Dictionary(local_88);
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_78, in_RSI);
   Variant::Variant((Variant*)local_58, "uri");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "textDocument");
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

   Dictionary::~Dictionary(local_80);
   Dictionary::Dictionary(local_80);
   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 8 ));
   Variant::Variant((Variant*)local_58, "line");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, *(int*)( in_RSI + 0xc ));
   Variant::Variant((Variant*)local_58, "character");
   pVVar2 = (Variant*)Dictionary::operator []((Variant*)local_80);
   if (pVVar2 != (Variant*)local_78) {
      if (Variant::needs_deinit[*(int*)pVVar2] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar2 = 0;
      *(int*)pVVar2 = local_78[0];
      *(undefined8*)( pVVar2 + 8 ) = local_70;
      *(undefined8*)( pVVar2 + 0x10 ) = uStack_68;
      local_78[0] = 0;
   }

   if (Variant::needs_deinit[local_58[0]] == '\0') {
      cVar1 = Variant::needs_deinit[local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[local_78[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "position");
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

   Dictionary::~Dictionary(local_80);
   Dictionary::operator =(in_RDI, local_88);
   Dictionary::~Dictionary(local_88);
   Variant::Variant((Variant*)local_58, local_90);
   Variant::Variant((Variant*)local_78, "context");
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

   Dictionary::~Dictionary(local_90);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return in_RDI;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* lsp::SignatureInformation::to_json() const */Dictionary *lsp::SignatureInformation::to_json(void) {
   char cVar1;
   long lVar2;
   Variant *pVVar3;
   String *in_RSI;
   Dictionary *in_RDI;
   long lVar4;
   long in_FS_OFFSET;
   Array local_90[8];
   Variant local_88[8];
   Dictionary local_80[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   Variant::Variant((Variant*)local_58, in_RSI);
   Variant::Variant((Variant*)local_78, "label");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
   if (pVVar3 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = local_58[0];
      *(undefined8*)( pVVar3 + 8 ) = local_50;
      *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

   MarkupContent::to_json();
   Variant::Variant((Variant*)local_58, local_80);
   Variant::Variant((Variant*)local_78, "documentation");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
   if (pVVar3 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = local_58[0];
      *(undefined8*)( pVVar3 + 8 ) = local_50;
      *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

   Dictionary::~Dictionary(local_80);
   Array::Array(local_90);
   lVar2 = *(long*)( in_RSI + 0x20 );
   for (lVar4 = 0; ( lVar2 != 0 && ( lVar4 < *(long*)( lVar2 + -8 ) ) ); lVar4 = lVar4 + 1) {
      Dictionary::Dictionary((Dictionary*)local_88);
      Variant::Variant((Variant*)local_58, (String*)( lVar2 + lVar4 * 0x18 ));
      Variant::Variant((Variant*)local_78, "label");
      pVVar3 = (Variant*)Dictionary::operator [](local_88);
      if (pVVar3 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar3 = 0;
         *(int*)pVVar3 = local_58[0];
         *(undefined8*)( pVVar3 + 8 ) = local_50;
         *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

      MarkupContent::to_json();
      Variant::Variant((Variant*)local_58, local_80);
      Variant::Variant((Variant*)local_78, "documentation");
      pVVar3 = (Variant*)Dictionary::operator [](local_88);
      if (pVVar3 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar3 = 0;
         *(int*)pVVar3 = local_58[0];
         *(undefined8*)( pVVar3 + 8 ) = local_50;
         *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary(local_80);
      Variant::Variant((Variant*)local_58, (Dictionary*)local_88);
      Array::push_back((Variant*)local_90);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)local_88);
      lVar2 = *(long*)( in_RSI + 0x20 );
   }

   Variant::Variant((Variant*)local_58, local_90);
   Variant::Variant((Variant*)local_78, "parameters");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
   if (pVVar3 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = local_58[0];
      *(undefined8*)( pVVar3 + 8 ) = local_50;
      *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

   Array::~Array(local_90);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
}
/* lsp::SignatureHelp::to_json() const */Dictionary *lsp::SignatureHelp::to_json(void) {
   char cVar1;
   long lVar2;
   Variant *pVVar3;
   long in_RSI;
   Dictionary *in_RDI;
   long lVar4;
   long in_FS_OFFSET;
   Array local_88[8];
   Dictionary local_80[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   Array::Array(local_88);
   lVar2 = *(long*)( in_RSI + 8 );
   for (lVar4 = 0; ( lVar2 != 0 && ( lVar4 < *(long*)( lVar2 + -8 ) ) ); lVar4 = lVar4 + 1) {
      SignatureInformation::to_json();
      Variant::Variant((Variant*)local_58, local_80);
      Array::push_back((Variant*)local_88);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary(local_80);
      lVar2 = *(long*)( in_RSI + 8 );
   }

   Variant::Variant((Variant*)local_58, local_88);
   Variant::Variant((Variant*)local_78, "signatures");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
   if (pVVar3 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = local_58[0];
      *(undefined8*)( pVVar3 + 8 ) = local_50;
      *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

   Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x10 ));
   Variant::Variant((Variant*)local_78, "activeSignature");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
   if (pVVar3 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = local_58[0];
      *(undefined8*)( pVVar3 + 8 ) = local_50;
      *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

   Variant::Variant((Variant*)local_58, *(int*)( in_RSI + 0x14 ));
   Variant::Variant((Variant*)local_78, "activeParameter");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
   if (pVVar3 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar3] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar3 = 0;
      *(int*)pVVar3 = local_58[0];
      *(undefined8*)( pVVar3 + 8 ) = local_50;
      *(undefined8*)( pVVar3 + 0x10 ) = uStack_48;
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

   Array::~Array(local_88);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return in_RDI;
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* CowData<char32_t>::TEMPNAMEPLACEHOLDERVALUE(CowData<char32_t>&&) */void CowData<char32_t>::operator =(CowData<char32_t> *this, CowData *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   lVar2 = *(long*)this;
   lVar3 = *(long*)param_1;
   if (lVar2 != lVar3) {
      if (lVar2 != 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)this;
            *(undefined8*)this = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
            lVar3 = *(long*)param_1;
         }
 else {
            *(undefined8*)this = 0;
            lVar3 = *(long*)param_1;
         }

      }

      *(long*)this = lVar3;
      *(undefined8*)param_1 = 0;
      return;
   }

   return;
}
/* List<lsp::DocumentSymbol const*, DefaultAllocator>::~List() */undefined8 List<lsp::DocumentSymbol_const*,DefaultAllocator>::~List(List<lsp::DocumentSymbol_const*,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long *plVar5;
   undefined8 uStack_18;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return uStack_18;
   }

   do {
      pvVar1 = (void*)*plVar5;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            uVar4 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return uVar4;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x18 ) == plVar5) {
         lVar3 = *(long*)( (long)pvVar1 + 8 );
         lVar2 = *(long*)( (long)pvVar1 + 0x10 );
         *plVar5 = lVar3;
         if (pvVar1 == (void*)plVar5[1]) {
            plVar5[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 8 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         Memory::free_static(pvVar1, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   uVar4 = Memory::free_static(plVar5, false);
   return uVar4;
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
            if (pvVar5 == (void*)0x0) goto LAB_0010e074;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010e074:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>::~List() */undefined8 List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::~List(List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 uStack_28;
   puVar7 = *(undefined8**)this;
   if (puVar7 == (undefined8*)0x0) {
      return uStack_28;
   }

   do {
      pvVar2 = (void*)*puVar7;
      if (pvVar2 == (void*)0x0) {
         if (*(int*)( puVar7 + 2 ) != 0) {
            uVar6 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return uVar6;
         }

         break;
      }

      if (*(undefined8**)( (long)pvVar2 + 0x90 ) == puVar7) {
         *puVar7 = *(undefined8*)( (long)pvVar2 + 0x80 );
         if (pvVar2 == (void*)puVar7[1]) {
            puVar7[1] = *(undefined8*)( (long)pvVar2 + 0x88 );
         }

         if (*(long*)( (long)pvVar2 + 0x88 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar2 + 0x88 ) + 0x80 ) = *(undefined8*)( (long)pvVar2 + 0x80 );
         }

         if (*(long*)( (long)pvVar2 + 0x80 ) != 0) {
            *(undefined8*)( *(long*)( (long)pvVar2 + 0x80 ) + 0x88 ) = *(undefined8*)( (long)pvVar2 + 0x88 );
         }

         Array::~Array((Array*)( (long)pvVar2 + 0x78 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar2 + 0x70 ));
         if (*(long*)( (long)pvVar2 + 0x60 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x60 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( (long)pvVar2 + 0x60 );
               *(undefined8*)( (long)pvVar2 + 0x60 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if (*(long*)( (long)pvVar2 + 0x50 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x50 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( (long)pvVar2 + 0x50 );
               *(undefined8*)( (long)pvVar2 + 0x50 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         if (Variant::needs_deinit[*(int*)( (long)pvVar2 + 0x30 )] != '\0') {
            Variant::_clear_internal();
         }

         if (*(long*)( (long)pvVar2 + 0x28 ) != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar4 = *(Object**)( (long)pvVar2 + 0x28 );
               cVar5 = predelete_handler(pOVar4);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }

            }

         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar2 + 0x10 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar2 + 8 ));
         Memory::free_static(pvVar2, false);
         *(int*)( puVar7 + 2 ) = *(int*)( puVar7 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar7 = *(undefined8**)this;
   }
 while ( *(int*)( puVar7 + 2 ) != 0 );
   uVar6 = Memory::free_static(puVar7, false);
   return uVar6;
}
/* List<lsp::DocumentLink, DefaultAllocator>::~List() */void List<lsp::DocumentLink,DefaultAllocator>::~List(List<lsp::DocumentLink,DefaultAllocator> *this) {
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

      if (*(long**)( (long)pvVar1 + 0x28 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x18 );
         lVar2 = *(long*)( (long)pvVar1 + 0x20 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x18 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x18 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x20 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x10 ));
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
/* CallableCustomMethodPointer<GDScriptTextDocument, void, Ref<GDScript> >::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>>::call(CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
               goto LAB_0010e56e;
            }

            if (param_2 == 0) {
               *(undefined4*)param_4 = 4;
               *(undefined4*)( param_4 + 8 ) = 1;
               goto LAB_0010e56e;
            }

            *(undefined4*)param_4 = 0;
            if (( (ulong)pcVar10 & 1 ) != 0) {
               pcVar10 = *(code**)( pcVar10 + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar6 = Variant::can_convert_strict(*(undefined4*)*param_1);
            uVar4 = _LC50;
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
                     LAB_0010e63d:cVar6 = RefCounted::unreference();
                     if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }
 else {
                  pOVar7 = (Object*)__dynamic_cast(pOVar7, &Object::typeinfo, &GDScript::typeinfo, 0);
                  if (pOVar5 != pOVar7) {
                     local_38 = pOVar7;
                     if (( pOVar7 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                        local_38 = (Object*)0x0;
                     }

                     if (pOVar5 != (Object*)0x0) goto LAB_0010e63d;
                  }

               }

            }

            ( *pcVar10 )((long*)( lVar1 + lVar2 ));
            if (( ( local_38 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_38,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
            Memory::free_static(pOVar5, false);
         }

         goto LAB_0010e56e;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};local_40 = 0;String::parse_latin1((String*)&local_40, "\', can\'t call method.");uitos((ulong)local_50);operator+((char *)local_48,(String *)"Invalid Object id \'");String::operator +((String*)&local_38, (String*)local_48);_err_print_error(&_LC49, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_38, 0, 0);CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);CowData<char32_t>::_unref(local_48);CowData<char32_t>::_unref(local_50);CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);LAB_0010e56e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CallableCustomMethodPointer<GDScriptTextDocument, void, String const&>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&>::call(CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ulong *puVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
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

                  cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar4 = _LC51;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_48);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), (Variant*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0010e8de;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50 = 0;
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC49, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010e8de:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<ScriptEditor, void, String const&>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<ScriptEditor,void,String_const&>::call(CallableCustomMethodPointer<ScriptEditor,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   ulong *puVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
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

                  cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 4);
                  uVar4 = _LC51;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  Variant::operator_cast_to_String((Variant*)&local_48);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), (Variant*)&local_48);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0010eb4e;
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   local_50 = 0;
   local_48 = "\', can\'t call method.";
   local_40 = 0x15;
   String::parse_latin1((StrRange*)&local_50);
   uitos((ulong)local_60);
   operator+((char *)
   local_58,(String*)"Invalid Object id \'";
   String::operator +((String*)&local_48, (String*)local_58);
   _err_print_error(&_LC49, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010eb4e:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                  if (lVar3 == 0) goto LAB_0010ed6f;
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

      LAB_0010ed6f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_0010ee23;
   }

   cVar6 = String::operator ==(param_1, "RefCounted");
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
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }

            }
 else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar6 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar6 != '\0') goto LAB_0010ee23;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_0010ee23:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::is_class(String const&) const */undefined8 GDScriptTextDocument::is_class(GDScriptTextDocument *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010ef9f;
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

      LAB_0010ef9f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010f053;
   }

   cVar5 = String::operator ==(param_1, "GDScriptTextDocument");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010f053:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
      if ((code*)PTR__bind_methods_00119008 != Object::_bind_methods) {
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
/* lsp::TextDocumentItem::load(Dictionary const&) */void lsp::TextDocumentItem::load(TextDocumentItem *this, Dictionary *param_1) {
   long lVar1;
   int iVar2;
   Variant *this_00;
   long in_FS_OFFSET;
   long local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_48, "uri");
   Dictionary::operator []((Variant*)param_1);
   Variant::operator_cast_to_String((Variant*)&local_50);
   if (*(long*)this != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t>*)this);
      lVar1 = local_50;
      local_50 = 0;
      *(long*)this = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "languageId");
   Dictionary::operator []((Variant*)param_1);
   Variant::operator_cast_to_String((Variant*)&local_50);
   if (*(long*)( this + 8 ) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
      lVar1 = local_50;
      local_50 = 0;
      *(long*)( this + 8 ) = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "version");
   this_00 = (Variant*)Dictionary::operator []((Variant*)param_1);
   iVar2 = Variant::operator_cast_to_int(this_00);
   *(int*)( this + 0x10 ) = iVar2;
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, "text");
   Dictionary::operator []((Variant*)param_1);
   Variant::operator_cast_to_String((Variant*)&local_50);
   if (*(long*)( this + 0x18 ) != local_50) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x18 ));
      lVar1 = local_50;
      local_50 = 0;
      *(long*)( this + 0x18 ) = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* lsp::CompletionParams::load(Dictionary const&) */void lsp::CompletionParams::load(CompletionParams *this, Dictionary *param_1) {
   long lVar1;
   int iVar2;
   Variant *pVVar3;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, "textDocument");
   Dictionary::operator []((Variant*)param_1);
   Variant::operator_cast_to_Dictionary((Variant*)&local_80);
   Variant::Variant((Variant*)local_78, "uri");
   Dictionary::operator []((Variant*)&local_80);
   Variant::operator_cast_to_String((Variant*)&local_88);
   if (*(long*)this != local_88) {
      CowData<char32_t>::_unref((CowData<char32_t>*)this);
      lVar1 = local_88;
      local_88 = 0;
      *(long*)this = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "position");
   Dictionary::operator []((Variant*)param_1);
   Variant::operator_cast_to_Dictionary((Variant*)&local_80);
   Variant::Variant((Variant*)local_78, "line");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)&local_80);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   *(int*)( this + 8 ) = iVar2;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)&local_80);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   *(int*)( this + 0xc ) = iVar2;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "context");
   Dictionary::operator []((Variant*)param_1);
   Variant::operator_cast_to_Dictionary((Variant*)&local_88);
   Variant::Variant((Variant*)local_58, "triggerKind");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)&local_88);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   *(int*)( this + 0x10 ) = iVar2;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "triggerCharacter");
   Dictionary::operator []((Variant*)&local_88);
   Variant::operator_cast_to_String((Variant*)&local_80);
   if (*(long*)( this + 0x18 ) != local_80) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x18 ));
      lVar1 = local_80;
      local_80 = 0;
      *(long*)( this + 0x18 ) = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_88);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* lsp::TextDocumentContentChangeEvent::load(Dictionary const&) */void lsp::TextDocumentContentChangeEvent::load(TextDocumentContentChangeEvent *this, Dictionary *param_1) {
   long lVar1;
   int iVar2;
   Variant *pVVar3;
   long in_FS_OFFSET;
   Variant local_a8[8];
   long local_a0;
   int local_98[8];
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, "text");
   Dictionary::operator []((Variant*)param_1);
   Variant::operator_cast_to_String((Variant*)&local_a0);
   if (*(long*)( this + 0x18 ) != local_a0) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x18 ));
      lVar1 = local_a0;
      local_a0 = 0;
      *(long*)( this + 0x18 ) = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "rangeLength");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)param_1);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   *(int*)( this + 0x10 ) = iVar2;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_98, "range");
   Dictionary::operator []((Variant*)param_1);
   Variant::operator_cast_to_Dictionary(local_a8);
   Variant::Variant((Variant*)local_58, "start");
   Dictionary::operator [](local_a8);
   Variant::operator_cast_to_Dictionary((Variant*)&local_a0);
   Variant::Variant((Variant*)local_78, "line");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   *(int*)this = iVar2;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   *(int*)( this + 4 ) = iVar2;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_a0);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_58, "end");
   Dictionary::operator [](local_a8);
   Variant::operator_cast_to_Dictionary((Variant*)&local_a0);
   Variant::Variant((Variant*)local_78, "line");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   *(int*)( this + 8 ) = iVar2;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_78, "character");
   pVVar3 = (Variant*)Dictionary::operator []((Variant*)&local_a0);
   iVar2 = Variant::operator_cast_to_int(pVVar3);
   *(int*)( this + 0xc ) = iVar2;
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)&local_a0);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   Dictionary::~Dictionary((Dictionary*)local_a8);
   if (Variant::needs_deinit[local_98[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::signatureHelp(Dictionary const&) [clone .cold] */void GDScriptTextDocument::signatureHelp(Dictionary *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptTextDocument::references(Dictionary const&) [clone .cold] */void GDScriptTextDocument::references(Dictionary *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptTextDocument::initialize() [clone .cold] */void GDScriptTextDocument::initialize(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptTextDocument::completion(Dictionary const&) [clone .cold] */void GDScriptTextDocument::completion(Dictionary *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptTextDocument::documentSymbol(Dictionary const&) [clone .cold] */void GDScriptTextDocument::documentSymbol(Dictionary *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MethodBindT<String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_0010fad9;
   local_78 = 0;
   local_68 = &_LC39;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 4);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010fbd5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010fbd5;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }

   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }

   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }

   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_0010fad9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar5;
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

         goto LAB_0010fe5c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_0010fe5c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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
/* GDScriptTextDocument::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GDScriptTextDocument::_get_property_listv(GDScriptTextDocument *this, List *param_1, bool param_2) {
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
   local_78 = "GDScriptTextDocument";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GDScriptTextDocument";
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

         goto LAB_001100c1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001100c1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "GDScriptTextDocument", false);
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
/* MethodBindT<Variant const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Variant_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   undefined8 local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar4 = 0;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 6;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_50 = (undefined1[16])0x0;
      local_60 = 0;
      local_68 = 0;
      local_70 = 0;
      local_58 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0x20006;
      StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      *puVar4 = (undefined4)local_58;
      if (*(long*)( puVar4 + 2 ) != local_50._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 2 ));
         uVar2 = local_50._0_8_;
         auVar1._8_8_ = 0;
         auVar1._0_8_ = local_50._8_8_;
         local_50 = auVar1 << 0x40;
         *(undefined8*)( puVar4 + 2 ) = uVar2;
      }

      if (*(long*)( puVar4 + 4 ) != local_50._8_8_) {
         StringName::unref();
         uVar2 = local_50._8_8_;
         local_50._8_8_ = 0;
         *(undefined8*)( puVar4 + 4 ) = uVar2;
      }

      puVar4[6] = (undefined4)local_40;
      if (*(long*)( puVar4 + 8 ) != local_38) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar4 + 8 ));
         lVar3 = local_38;
         local_38 = 0;
         *(long*)( puVar4 + 8 ) = lVar3;
      }

      puVar4[10] = local_30;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
      if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* lsp::CompletionItem::load(Dictionary const&) */void lsp::CompletionItem::load(CompletionItem *this, Dictionary *param_1) {
   long lVar1;
   char cVar2;
   CompletionItem CVar3;
   int iVar4;
   Variant *pVVar5;
   long in_FS_OFFSET;
   Variant local_88[8];
   long local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, "label");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "label");
      Dictionary::operator []((Variant*)param_1);
      Variant::operator_cast_to_String((Variant*)&local_80);
      if (*(long*)this != local_80) {
         CowData<char32_t>::_unref((CowData<char32_t>*)this);
         lVar1 = local_80;
         local_80 = 0;
         *(long*)this = lVar1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "kind");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "kind");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
      iVar4 = Variant::operator_cast_to_int(pVVar5);
      *(int*)( this + 8 ) = iVar4;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "detail");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "detail");
      Dictionary::operator []((Variant*)param_1);
      Variant::operator_cast_to_String((Variant*)&local_80);
      if (*(long*)( this + 0x10 ) != local_80) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x10 ));
         lVar1 = local_80;
         local_80 = 0;
         *(long*)( this + 0x10 ) = lVar1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "documentation");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "documentation");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::Variant((Variant*)local_78, pVVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (( local_78[0] == 4 ) || ( local_78[0] == 0x15 )) {
         Variant::operator_cast_to_String((Variant*)&local_80);
         if (*(long*)( this + 0x20 ) != local_80) {
            CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
            lVar1 = local_80;
            local_80 = 0;
            *(long*)( this + 0x20 ) = lVar1;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         cVar2 = Variant::needs_deinit[local_78[0]];
      }
 else {
         if (local_78[0] == 0x1b) {
            Variant::operator_cast_to_Dictionary(local_88);
            Variant::Variant((Variant*)local_58, "value");
            Dictionary::operator [](local_88);
            Variant::operator_cast_to_String((Variant*)&local_80);
            CowData<char32_t>::operator =((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            Dictionary::~Dictionary((Dictionary*)local_88);
         }

         cVar2 = Variant::needs_deinit[local_78[0]];
      }

      if (cVar2 != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "deprecated");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "deprecated");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
      CVar3 = (CompletionItem)Variant::operator_cast_to_bool(pVVar5);
      this[0x28] = CVar3;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "preselect");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "preselect");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
      CVar3 = (CompletionItem)Variant::operator_cast_to_bool(pVVar5);
      this[0x29] = CVar3;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "sortText");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "sortText");
      Dictionary::operator []((Variant*)param_1);
      Variant::operator_cast_to_String((Variant*)&local_80);
      if (*(long*)( this + 0x30 ) != local_80) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x30 ));
         lVar1 = local_80;
         local_80 = 0;
         *(long*)( this + 0x30 ) = lVar1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "filterText");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "filterText");
      Dictionary::operator []((Variant*)param_1);
      Variant::operator_cast_to_String((Variant*)&local_80);
      if (*(long*)( this + 0x38 ) != local_80) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x38 ));
         lVar1 = local_80;
         local_80 = 0;
         *(long*)( this + 0x38 ) = lVar1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "insertText");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "insertText");
      Dictionary::operator []((Variant*)param_1);
      Variant::operator_cast_to_String((Variant*)&local_80);
      if (*(long*)( this + 0x40 ) != local_80) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x40 ));
         lVar1 = local_80;
         local_80 = 0;
         *(long*)( this + 0x40 ) = lVar1;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   Variant::Variant((Variant*)local_58, "data");
   cVar2 = Dictionary::has((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (cVar2 != '\0') {
      Variant::Variant((Variant*)local_58, "data");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)param_1);
      Variant::operator =((Variant*)( this + 0xa0 ), pVVar5);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Ref<GDScriptWorkspace>::unref() */void Ref<GDScriptWorkspace>::unref(Ref<GDScriptWorkspace> *this) {
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
/* MethodBind* create_method_bind<GDScriptTextDocument, Variant const&>(void
   (GDScriptTextDocument::*)(Variant const&)) */MethodBind *create_method_bind<GDScriptTextDocument,Variant_const&>(_func_void_Variant_ptr *param_1) {
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
   *(_func_void_Variant_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115438;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GDScriptTextDocument";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<GDScriptTextDocument, Variant, Dictionary const&>(Variant
   (GDScriptTextDocument::*)(Dictionary const&)) */MethodBind *create_method_bind<GDScriptTextDocument,Variant,Dictionary_const&>(_func_Variant_Dictionary_ptr *param_1) {
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
   *(_func_Variant_Dictionary_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115498;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GDScriptTextDocument";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<GDScriptTextDocument, Array, Dictionary const&>(Array
   (GDScriptTextDocument::*)(Dictionary const&)) */MethodBind *create_method_bind<GDScriptTextDocument,Array,Dictionary_const&>(_func_Array_Dictionary_ptr *param_1) {
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
   *(_func_Array_Dictionary_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001154f8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GDScriptTextDocument";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<GDScriptTextDocument, Dictionary, Dictionary const&>(Dictionary
   (GDScriptTextDocument::*)(Dictionary const&)) */MethodBind *create_method_bind<GDScriptTextDocument,Dictionary,Dictionary_const&>(_func_Dictionary_Dictionary_ptr *param_1) {
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
   *(_func_Dictionary_Dictionary_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115558;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GDScriptTextDocument";
   local_30 = 0x14;
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
/* MethodBind* create_method_bind<GDScriptTextDocument, String const&>(void
   (GDScriptTextDocument::*)(String const&)) */MethodBind *create_method_bind<GDScriptTextDocument,String_const&>(_func_void_String_ptr *param_1) {
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
   *(_func_void_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001155b8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GDScriptTextDocument";
   local_30 = 0x14;
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
/* GDScriptTextDocument::_initialize_classv() */void GDScriptTextDocument::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   undefined8 local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
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
         if ((code*)PTR__bind_methods_00119008 != Object::_bind_methods) {
            RefCounted::_bind_methods();
         }

         RefCounted::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "RefCounted";
      local_58 = 0;
      local_40 = 10;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "GDScriptTextDocument";
      local_60 = 0;
      local_40 = 0x14;
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

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
/* lsp::CompletionItem::~CompletionItem() */void lsp::CompletionItem::~CompletionItem(CompletionItem *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
   if (Variant::needs_deinit[*(int*)( this + 0xa0 )] != '\0') {
      Variant::_clear_internal();
   }

   Array::~Array((Array*)( this + 0x98 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x90 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x88 ));
   CowData<String>::_unref((CowData<String>*)( this + 0x80 ));
   if (*(long*)( this + 0x70 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x70 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x70 );
         if (lVar2 == 0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)( this + 0x70 ) = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 0x10 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 0x10 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 0x10 );
                     *(undefined8*)( lVar6 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x18;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x60 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x40 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x38 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x30 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x20 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x18 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x10 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* CowData<lsp::DocumentSymbol>::_unref() */void CowData<lsp::DocumentSymbol>::_unref(CowData<lsp::DocumentSymbol> *this) {
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
               _unref((CowData<lsp::DocumentSymbol>*)( plVar6 + 0xc ));
               if (plVar6[10] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[10] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[10];
                     plVar6[10] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (plVar6[9] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[9] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[9];
                     plVar6[9] = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               if (plVar6[3] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[3] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[3];
                     plVar6[3] = 0;
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
               plVar6 = plVar6 + 0xd;
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
/* WARNING: Removing unreachable block (ram,0x00111a18) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindT<String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<String_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00111ea1;
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
      /* WARNING: Could not recover jumptable at 0x00111d2d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }

   LAB_00111ea1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<String_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00112081;
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
      /* WARNING: Could not recover jumptable at 0x00111f09. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00112081:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Dictionary, Dictionary const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTR<Dictionary,Dictionary_const&>::validated_call(MethodBindTR<Dictionary,Dictionary_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001120f1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_001120f1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, Dictionary const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Dictionary,Dictionary_const&>::ptrcall(MethodBindTR<Dictionary,Dictionary_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001122db;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_001122db:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Array, Dictionary const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTR<Array,Dictionary_const&>::validated_call(MethodBindTR<Array,Dictionary_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001124d1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_001124d1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Array, Dictionary const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Array,Dictionary_const&>::ptrcall(MethodBindTR<Array,Dictionary_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001126bb;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_001126bb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Dictionary const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTR<Variant,Dictionary_const&>::validated_call(MethodBindTR<Variant,Dictionary_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
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
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001128bd;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   Variant::operator =(param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_001128bd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Dictionary const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Variant,Dictionary_const&>::ptrcall(MethodBindTR<Variant,Dictionary_const&> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
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
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112acb;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Variant::operator =((Variant*)param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_00112acb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Variant const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Variant_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00112e41;
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
      /* WARNING: Could not recover jumptable at 0x00112cc9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)param_3);
      return;
   }

   LAB_00112e41:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Variant const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Variant_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00113021;
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
      /* WARNING: Could not recover jumptable at 0x00112ea9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }

   LAB_00113021:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<String const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC49, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001131d0;
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
         if (in_R8D != 1) goto LAB_00113220;
         LAB_00113210:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00113220:uVar6 = 4;
            goto LAB_001131c5;
         }

         if (in_R8D == 1) goto LAB_00113210;
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
      uVar4 = _LC51;
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
      LAB_001131c5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001131d0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Dictionary, Dictionary const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Dictionary,Dictionary_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
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
         _err_print_error(&_LC49, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001135d0;
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
         if (in_R8D != 1) goto LAB_00113620;
         LAB_00113610:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00113620:uVar6 = 4;
            goto LAB_001135c5;
         }

         if (in_R8D == 1) goto LAB_00113610;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x1b);
      uVar4 = _LC155;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Dictionary((Variant*)&local_68);
      ( *(code*)pVVar11 )((Dictionary*)&local_70, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, (Dictionary*)&local_70);
      Variant::operator =((Variant*)param_1, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)&local_70);
      Dictionary::~Dictionary((Dictionary*)&local_68);
   }
 else {
      uVar6 = 3;
      LAB_001135c5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001135d0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<Array, Dictionary const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Array,Dictionary_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
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
         _err_print_error(&_LC49, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113980;
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
         if (in_R8D != 1) goto LAB_001139d0;
         LAB_001139c0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001139d0:uVar6 = 4;
            goto LAB_00113975;
         }

         if (in_R8D == 1) goto LAB_001139c0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x1b);
      uVar4 = _LC155;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Dictionary((Variant*)&local_68);
      ( *(code*)pVVar11 )((Array*)&local_70, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, (Array*)&local_70);
      Variant::operator =((Variant*)param_1, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Array::~Array((Array*)&local_70);
      Dictionary::~Dictionary((Dictionary*)&local_68);
   }
 else {
      uVar6 = 3;
      LAB_00113975:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00113980:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTR<Variant, Dictionary const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<Variant,Dictionary_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
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
         _err_print_error(&_LC49, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113d10;
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
         if (in_R8D != 1) goto LAB_00113d60;
         LAB_00113d50:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00113d60:uVar6 = 4;
            goto LAB_00113d05;
         }

         if (in_R8D == 1) goto LAB_00113d50;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x1b);
      uVar4 = _LC155;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_Dictionary((Variant*)&local_68);
      ( *(code*)pVVar11 )((Variant*)local_58, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::operator =((Variant*)param_1, (Variant*)local_58);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      Dictionary::~Dictionary((Dictionary*)&local_68);
   }
 else {
      uVar6 = 3;
      LAB_00113d05:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_00113d10:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindT<Variant const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Variant_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined4 uVar5;
   long *plVar6;
   long lVar7;
   undefined4 in_register_00000014;
   long *plVar8;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar9;
   Variant *pVVar10;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   plVar8 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar8 != (long*)0x0 ) && ( plVar8[1] != 0 ) ) && ( *(char*)( plVar8[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar8[1] == 0) {
         plVar6 = (long*)plVar8[0x23];
         if (plVar6 == (long*)0x0) {
            plVar6 = (long*)( **(code**)( *plVar8 + 0x40 ) )(plVar8);
         }

      }
 else {
         plVar6 = (long*)( plVar8[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar6) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC49, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00114088;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar10 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar9 = param_2[5];
      if (pVVar9 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_001140e0;
         LAB_001140d0:pVVar9 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar9 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001140e0:uVar5 = 4;
            goto LAB_0011407d;
         }

         if (in_R8D == 1) goto LAB_001140d0;
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar9 = pVVar9 + lVar7 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar10 & 1 ) != 0) {
         pVVar10 = *(Variant**)( pVVar10 + *(long*)( (long)plVar8 + (long)pVVar1 ) + -1 );
      }

      cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar9, 0);
      if (cVar4 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = 0;
      }

      Variant::Variant((Variant*)local_48, pVVar9);
      ( *(code*)pVVar10 )((Variant*)( (long)plVar8 + (long)pVVar1 ), (Variant*)local_48);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      uVar5 = 3;
      LAB_0011407d:*in_R9 = uVar5;
      in_R9[2] = 1;
   }

   LAB_00114088:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* void call_get_argument_type_info_helper<Dictionary const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Dictionary_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_001142d7;
   local_78 = 0;
   local_68 = &_LC39;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1b);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001143d5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_001143d5;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68._0_4_;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar5 = *param_2;
   LAB_001142d7:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Dictionary, Dictionary const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Dictionary,Dictionary_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Dictionary_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_001145a8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC39;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 0x1b;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011468f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011468f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_001145a8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Array, Dictionary const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Array,Dictionary_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   undefined8 local_80;
   long local_78;
   ulong local_70;
   undefined *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (undefined*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Dictionary_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar3 = local_60._0_8_;
      uVar4 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar5 = local_68._0_4_;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
      *(undefined8*)( puVar5 + 4 ) = uVar4;
      puVar5[6] = (undefined4)local_50;
      *(undefined8*)( puVar5 + 8 ) = local_48;
      puVar5[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      goto LAB_001147a8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC39;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 0x1c;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011488f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011488f;
      StringName::StringName((StringName*)&local_68, (String*)( puVar5 + 8 ), false);
      if (*(undefined**)( puVar5 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar5 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   LAB_001147a8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Dictionary const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Variant,Dictionary_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_68;
   ulong local_60;
   long local_58;
   undefined1 local_50[16];
   undefined8 local_40;
   undefined8 local_38;
   undefined4 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   if (in_EDX == 0) {
      local_40 = 0;
      local_38 = 0;
      local_30 = 6;
      local_60 = local_60 & 0xffffffff00000000;
      local_50 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Dictionary_const&>(0, (int*)&local_60, (PropertyInfo*)&local_58);
      uVar2 = local_50._0_8_;
      uVar3 = local_50._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_50._8_8_;
      local_50 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_58;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_40;
      *(undefined8*)( puVar4 + 8 ) = local_38;
      puVar4[10] = local_30;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   }
 else {
      *puVar4 = 0;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 0x20006;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      local_60 = 0;
      local_68 = 0;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptTextDocument::_bind_methods() */void GDScriptTextDocument::_GLOBAL__sub_I__bind_methods(void) {
   lsp::MarkupKind::PlainText = 0;
   String::parse_latin1((String*)&lsp::MarkupKind::PlainText, "plaintext");
   __cxa_atexit(String::~String, &lsp::MarkupKind::PlainText, &__dso_handle);
   lsp::MarkupKind::Markdown = 0;
   String::parse_latin1((String*)&lsp::MarkupKind::Markdown, "markdown");
   __cxa_atexit(String::~String, &lsp::MarkupKind::Markdown, &__dso_handle);
   lsp::FoldingRangeKind::Comment = 0;
   String::parse_latin1((String*)&lsp::FoldingRangeKind::Comment, "comment");
   __cxa_atexit(String::~String, &lsp::FoldingRangeKind::Comment, &__dso_handle);
   lsp::FoldingRangeKind::Imports = 0;
   String::parse_latin1((String*)&lsp::FoldingRangeKind::Imports, "imports");
   __cxa_atexit(String::~String, &lsp::FoldingRangeKind::Imports, &__dso_handle);
   lsp::FoldingRangeKind::Region = 0;
   String::parse_latin1((String*)&lsp::FoldingRangeKind::Region, "region");
   __cxa_atexit(String::~String, &lsp::FoldingRangeKind::Region, &__dso_handle);
   if (PopupMenu::base_property_helper == '\0') {
      PopupMenu::base_property_helper = '\x01';
      PopupMenu::base_property_helper._64_8_ = 0;
      PopupMenu::base_property_helper._0_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._24_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._40_16_ = (undefined1[16])0x0;
      PopupMenu::base_property_helper._56_8_ = 2;
      __cxa_atexit(PropertyListHelper::~PropertyListHelper, PopupMenu::base_property_helper, &__dso_handle);
   }

   if (ColorPicker::wheel_shader == '\0') {
      ColorPicker::wheel_shader = '\x01';
      __cxa_atexit(Ref<Shader>::~Ref, &ColorPicker::wheel_shader, &__dso_handle);
   }

   if (ColorPicker::circle_shader == '\0') {
      ColorPicker::circle_shader = '\x01';
      __cxa_atexit(Ref<Shader>::~Ref, &ColorPicker::circle_shader, &__dso_handle);
   }

   if (ColorPicker::circle_ok_color_shader == '\0') {
      ColorPicker::circle_ok_color_shader = '\x01';
      __cxa_atexit(Ref<Shader>::~Ref, &ColorPicker::circle_ok_color_shader, &__dso_handle);
   }

   if (ColorPicker::preset_cache == '\0') {
      ColorPicker::preset_cache = '\x01';
      ColorPicker::preset_cache = 0;
      __cxa_atexit(List<Color,DefaultAllocator>::~List, &ColorPicker::preset_cache, &__dso_handle);
   }

   if (ColorPicker::recent_preset_cache != '\0') {
      return;
   }

   ColorPicker::recent_preset_cache = 1;
   ColorPicker::recent_preset_cache = 0;
   __cxa_atexit(List<Color,DefaultAllocator>::~List, &ColorPicker::recent_preset_cache, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* List<lsp::DocumentLink, DefaultAllocator>::~List() */void List<lsp::DocumentLink,DefaultAllocator>::~List(List<lsp::DocumentLink,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<ScriptLanguage::CodeCompletionOption, DefaultAllocator>::~List() */void List<ScriptLanguage::CodeCompletionOption,DefaultAllocator>::~List(List<ScriptLanguage::CodeCompletionOption,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<lsp::DocumentSymbol const*, DefaultAllocator>::~List() */void List<lsp::DocumentSymbol_const*,DefaultAllocator>::~List(List<lsp::DocumentSymbol_const*,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* String::~String() */void String::~String(String *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptTextDocument::~GDScriptTextDocument() */void GDScriptTextDocument::~GDScriptTextDocument(GDScriptTextDocument *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Color, DefaultAllocator>::~List() */void List<Color,DefaultAllocator>::~List(List<Color,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Ref<Shader>::~Ref() */void Ref<Shader>::~Ref(Ref<Shader> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<String const&>::~MethodBindT() */void MethodBindT<String_const&>::~MethodBindT(MethodBindT<String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Variant, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Variant,Dictionary_const&>::~MethodBindTR(MethodBindTR<Variant,Dictionary_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Array, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Array,Dictionary_const&>::~MethodBindTR(MethodBindTR<Array,Dictionary_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Dictionary, Dictionary const&>::~MethodBindTR() */void MethodBindTR<Dictionary,Dictionary_const&>::~MethodBindTR(MethodBindTR<Dictionary,Dictionary_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Variant const&>::~MethodBindT() */void MethodBindT<Variant_const&>::~MethodBindT(MethodBindT<Variant_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<GDScriptTextDocument, void, Ref<GDScript>
   >::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GDScriptTextDocument,void,Ref<GDScript>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<GDScriptTextDocument, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<GDScriptTextDocument,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<ScriptEditor, void, String const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<ScriptEditor,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<ScriptEditor,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* lsp::CompletionItem::~CompletionItem() */void lsp::CompletionItem::~CompletionItem(CompletionItem *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


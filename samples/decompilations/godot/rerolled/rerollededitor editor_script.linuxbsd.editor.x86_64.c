/* EditorScript::get_editor_interface() const */undefined8 EditorScript::get_editor_interface(void) {
   return EditorInterface::singleton;
}
/* EditorScript::get_scene() const */undefined8 EditorScript::get_scene(void) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   String local_60[8];
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (EditorNode::singleton == 0) {
      local_58 = 0;
      local_40 = 0;
      local_48 = "";
      String::parse_latin1((StrRange*)&local_58);
      local_48 = "Write your logic in the _run() method.";
      local_50 = 0;
      local_40 = 0x26;
      String::parse_latin1((StrRange*)&local_50);
      TTR((String*)&local_48, (String*)&local_50);
      operator+((char *)
      local_60,(String*)"EditorScript::get_scene: ";
      EditorNode::add_io_error(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 0;
      }

   }
 else if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar1 = EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorScript::add_root_node(Node*) */void EditorScript::add_root_node(EditorScript *this, Node *param_1) {
   char cVar1;
   int iVar2;
   long lVar3;
   Object *pOVar4;
   void *pvVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   undefined8 local_70;
   long local_68;
   undefined8 local_60;
   Object *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (EditorNode::singleton == (Node*)0x0) {
      local_68 = 0;
      String::parse_latin1((String*)&local_68, "");
      local_70 = 0;
      String::parse_latin1((String*)&local_70, "Write your logic in the _run() method.");
      TTR((String*)&local_60, (String*)&local_70);
      operator+((char *)&
      local_58,(String*)"EditorScript::add_root_node: ";
      EditorNode::add_io_error((String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      goto LAB_0010023d;
   }

   lVar3 = EditorData::get_edited_scene_root((int)EditorNode::singleton + 0x430);
   if (lVar3 != 0) {
      local_68 = 0;
      local_50 = 0;
      local_58 = (Object*)&_LC2;
      String::parse_latin1((StrRange*)&local_68);
      local_58 = (Object*)0x1018f0;
      local_70 = 0;
      local_50 = 0x2a;
      String::parse_latin1((StrRange*)&local_70);
      TTR((String*)&local_60, (String*)&local_70);
      operator+((char *)&
      local_58,(String*)"EditorScript::add_root_node: ";
      EditorNode::add_io_error((String*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      goto LAB_0010023d;
   }

   Node::get_scene_file_path();
   if (( local_68 != 0 ) && ( 1 < *(uint*)( local_68 + -8 ) )) {
      local_60 = 0;
      String::parse_latin1((String*)&local_60, "");
      ResourceLoader::load((CowData<char32_t>*)&local_58, (CowData<char32_t>*)&local_68, (String*)&local_60, 1, 0);
      if (local_58 == (Object*)0x0) {
         LAB_001004f0:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      }
 else {
         pOVar4 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &PackedScene::typeinfo, 0);
         if (pOVar4 == (Object*)0x0) {
            cVar1 = RefCounted::unreference();
            if (cVar1 == '\0') goto LAB_001004f0;
            LAB_0010051b:pOVar6 = local_58;
            cVar1 = predelete_handler(local_58);
            if (cVar1 != '\0') {
               LAB_0010041d:( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            if (pOVar4 == (Object*)0x0) goto LAB_00100284;
         }
 else {
            cVar1 = RefCounted::reference();
            if (cVar1 == '\0') {
               if (( local_58 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),pOVar6 = local_58,cVar1 != '\0') {
                  pOVar4 = (Object*)0x0;
                  cVar1 = predelete_handler(local_58);
                  if (cVar1 != '\0') goto LAB_0010041d;
               }

               goto LAB_001004f0;
            }

            if (( local_58 != (Object*)0x0 ) && ( cVar1 = cVar1 != '\0' )) goto LAB_0010051b;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         }

         pvVar5 = (void*)PackedScene::instantiate(pOVar4);
         Memory::free_static(pvVar5, false);
         PackedScene::get_state();
         Node::set_scene_inherited_state((Ref*)param_1);
         if (( ( local_58 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)local_58 + 0x140 ))(local_58);
         Memory::free_static(local_58, false);
      }

      local_58 = (Object*)0x0;
      Node::set_scene_file_path((String*)param_1);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      cVar1 = RefCounted::unreference();
      if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
         ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

}
LAB_00100284:EditorNode::set_edited_scene(EditorNode::singleton);iVar2 = EditorUndoRedoManager::get_singleton();EditorData::get_current_edited_scene_history_id();EditorUndoRedoManager::set_history_as_unsaved(iVar2);EditorSceneTabs::update_scene_tabs();CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);LAB_0010023d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
/* EditorScript::run() */void EditorScript::run(EditorScript *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long lVar5;
   long in_FS_OFFSET;
   CowData<char32_t> *local_110;
   undefined8 local_108;
   CowData<char32_t> local_100[8];
   undefined8 local_f8;
   String local_f0[8];
   undefined8 local_e8;
   long local_e0;
   undefined8 local_d8;
   long local_d0;
   int local_c8[4];
   CowData<char32_t> local_b8[8];
   long lStack_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88[2];
   undefined8 local_78;
   undefined8 local_70;
   long local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010075b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x188] == (EditorScript)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         _local_b8 = (undefined1[16])0x0;
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88[0] = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         String::parse_latin1((String*)local_c8, "_run");
         local_90 = CONCAT44(local_90._4_4_, 0x88);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 400 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "EditorScript");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            lVar3 = local_d0;
            if (local_d0 == 0) {
               if (( StringName::configured != '\0' ) && ( lVar5 = local_e0 != 0 )) goto LAB_00100c6b;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_00100c80:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_00100aaa;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ));
               *(undefined8*)( this + 400 ) = uVar2;
            }
 else {
               lVar5 = *(long*)( local_d0 + -8 );
               LOCK();
               plVar4 = (long*)( local_d0 + -0x10 );
               *plVar4 = *plVar4 + -1;
               UNLOCK();
               if (*plVar4 == 0) {
                  local_d0 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_00100c6b:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar5 == 0) goto LAB_00100c80;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x180, uVar1);
            *(undefined8*)( this + 400 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_00100aaa:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 400 );
            plVar4[1] = (long)( this + 0x188 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         lVar3 = local_60;
         this[0x188] = (EditorScript)0x1;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         CowData<Variant>::_unref((CowData<Variant>*)&local_78);
         List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( lStack_b0 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref(local_b8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 400 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001009ac. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001007c6. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x180, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_00100cfa;
      }

      if (_gdvirtual__run_call() != '\0') {
         local_d8 = 0;
         String::parse_latin1((String*)&local_d8, " must be overridden before calling.");
         local_e8 = 0;
         String::parse_latin1((String*)&local_e8, "_run");
         local_f8 = 0;
         String::parse_latin1((String*)&local_f8, "::");
         if (*(code**)( *(long*)this + 0x48 ) == get_class) {
            if (*(long*)( this + 8 ) == 0) {
               local_108 = 0;
               String::parse_latin1((String*)&local_108, "EditorScript");
            }
 else {
               lVar3 = *(long*)( *(long*)( this + 8 ) + 0x20 );
               if (lVar3 == 0) {
                  local_108 = 0;
               }
 else {
                  local_108 = 0;
                  if (*(char**)( lVar3 + 8 ) == (char*)0x0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_108, (CowData*)( lVar3 + 0x10 ));
                  }
 else {
                     String::parse_latin1((String*)&local_108, *(char**)( lVar3 + 8 ));
                  }

               }

            }

         }
 else {
            ( **(code**)( *(long*)this + 0x48 ) )(&local_108, this);
         }

         local_110 = (CowData<char32_t>*)&local_108;
         operator+((char *)
         local_100,(String*)"Required virtual method ";
         String::operator +(local_f0, (String*)local_100);
         String::operator +((String*)&local_e0, local_f0);
         String::operator +((String*)local_c8, (String*)&local_e0);
         _err_print_error("_gdvirtual__run_call", "editor/editor_script.h", 0x2f, (String*)local_c8, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_f0);
         CowData<char32_t>::_unref(local_100);
         CowData<char32_t>::_unref(local_110);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
         _gdvirtual__run_call()::first_print =
         '\0';
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x180, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010075b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00100cfa:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorScript::_bind_methods() */void EditorScript::_bind_methods(void) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   CowData<char32_t> *pCVar4;
   MethodBind *pMVar5;
   long lVar6;
   CowData<char32_t> *pCVar7;
   long in_FS_OFFSET;
   undefined8 local_f0;
   Vector local_e8[8];
   CowData<char32_t> *local_e0;
   char *local_d8;
   undefined8 local_d0;
   long local_c8[2];
   CowData<StringName> local_b8[8];
   long lStack_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88[2];
   undefined8 local_78;
   undefined8 local_70;
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   undefined **local_48;
   undefined1 local_40[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = &_LC21;
   local_48 = &local_58;
   D_METHODP((char*)local_c8, (char***)"add_root_node", ( uint ) & local_48);
   local_40 = (undefined1[16])0x0;
   local_48 = (undefined**)0x0;
   pMVar5 = create_method_bind<EditorScript,Node*>(add_root_node);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref(local_b8);
   if (( StringName::configured != '\0' ) && ( local_c8[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_c8, (char***)"get_scene", 0);
   local_40 = (undefined1[16])0x0;
   local_48 = (undefined**)0x0;
   pMVar5 = create_method_bind<EditorScript,Node*>(get_scene);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref(local_b8);
   if (( StringName::configured != '\0' ) && ( local_c8[0] != 0 )) {
      StringName::unref();
   }

   D_METHODP((char*)local_c8, (char***)"get_editor_interface", 0);
   local_40 = (undefined1[16])0x0;
   local_48 = (undefined**)0x0;
   pMVar5 = create_method_bind<EditorScript,EditorInterface*>(get_editor_interface);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_48] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref(local_b8);
   if (( StringName::configured != '\0' ) && ( local_c8[0] != 0 )) {
      StringName::unref();
   }

   _local_b8 = (undefined1[16])0x0;
   local_d8 = "_run";
   local_e0 = (CowData<char32_t>*)0x0;
   local_c8[0] = 0;
   local_c8[1] = 0;
   local_a8 = 0;
   local_a0 = 0;
   local_98 = 6;
   local_90 = 1;
   local_88[0] = 0;
   local_78 = 0;
   local_70 = 0;
   local_60 = 0;
   local_d0 = 4;
   String::parse_latin1((StrRange*)local_c8);
   local_d8 = "EditorScript";
   local_90 = CONCAT44(local_90._4_4_, 0x88);
   local_f0 = 0;
   local_d0 = 0xc;
   String::parse_latin1((StrRange*)&local_f0);
   StringName::StringName((StringName*)&local_d8, (String*)&local_f0, false);
   ClassDB::add_virtual_method((StringName*)&local_d8, (MethodInfo*)local_c8, true, local_e8, false);
   if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   lVar2 = local_60;
   if (local_60 != 0) {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)&local_78);
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( lStack_b0 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
   pCVar4 = local_e0;
   if (local_e0 != (CowData<char32_t>*)0x0) {
      LOCK();
      pCVar7 = local_e0 + -0x10;
      *(long*)pCVar7 = *(long*)pCVar7 + -1;
      UNLOCK();
      if (*(long*)pCVar7 == 0) {
         if (local_e0 == (CowData<char32_t>*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         lVar2 = *(long*)( local_e0 + -8 );
         local_e0 = (CowData<char32_t>*)0x0;
         if (lVar2 != 0) {
            lVar6 = 0;
            pCVar7 = pCVar4;
            do {
               lVar6 = lVar6 + 1;
               CowData<char32_t>::_unref(pCVar7);
               pCVar7 = pCVar7 + 8;
            }
 while ( lVar2 != lVar6 );
         }

         Memory::free_static(pCVar4 + -0x10, false);
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
   return (uint)CONCAT71(0x104e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x104e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* EditorScript::is_class_ptr(void*) const */uint EditorScript::is_class_ptr(EditorScript *this, void *param_1) {
   return (uint)CONCAT71(0x104e, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x104e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x104e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorScript::_getv(StringName const&, Variant&) const */undefined8 EditorScript::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorScript::_setv(StringName const&, Variant const&) */undefined8 EditorScript::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorScript::_validate_propertyv(PropertyInfo&) const */void EditorScript::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorScript::_property_can_revertv(StringName const&) const */undefined8 EditorScript::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorScript::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorScript::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorScript::_notificationv(int, bool) */void EditorScript::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindTRC<EditorInterface*>::_gen_argument_type(int) const */undefined8 MethodBindTRC<EditorInterface*>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<EditorInterface*>::get_argument_meta(int) const */undefined8 MethodBindTRC<EditorInterface*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Node*>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Node*>::_gen_argument_type(int param_1) {
   return 0x18;
}
/* MethodBindTRC<Node*>::get_argument_meta(int) const */undefined8 MethodBindTRC<Node*>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Node*>::_gen_argument_type(int) const */byte MethodBindT<Node*>::_gen_argument_type(MethodBindT<Node*> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Node*>::get_argument_meta(int) const */undefined8 MethodBindT<Node*>::get_argument_meta(int param_1) {
   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00104a90;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00104a90;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* EditorScript::~EditorScript() */void EditorScript::~EditorScript(EditorScript *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00104bf0;
   if (( bVar1 ) && ( *(long*)( this + 0x180 ) != 0 )) {
      StringName::unref();
   }

   *(undefined***)this = &PTR__initialize_classv_00104a90;
   Object::~Object((Object*)this);
   return;
}
/* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00104d58;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00104d58;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Node*>::~MethodBindTRC() */void MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00104db8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Node*>::~MethodBindTRC() */void MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00104db8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<EditorInterface*>::~MethodBindTRC() */void MethodBindTRC<EditorInterface*>::~MethodBindTRC(MethodBindTRC<EditorInterface*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00104e18;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<EditorInterface*>::~MethodBindTRC() */void MethodBindTRC<EditorInterface*>::~MethodBindTRC(MethodBindTRC<EditorInterface*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00104e18;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* EditorScript::~EditorScript() */void EditorScript::~EditorScript(EditorScript *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00104bf0;
   if (( bVar1 ) && ( *(long*)( this + 0x180 ) != 0 )) {
      StringName::unref();
   }

   *(undefined***)this = &PTR__initialize_classv_00104a90;
   Object::~Object((Object*)this);
   operator_delete(this, 0x198);
   return;
}
/* EditorScript::_get_class_namev() const */undefined8 *EditorScript::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001015e3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001015e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorScript");
         goto LAB_0010164e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorScript");
   LAB_0010164e:return &_get_class_namev();
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
         LAB_001016c3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001016c3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010172e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010172e:return &_get_class_namev();
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* EditorScript::get_class() const */void EditorScript::get_class(void) {
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
/* MethodBindTRC<EditorInterface*>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<EditorInterface*>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0xf;
   local_38 = "EditorInterface";
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   *puVar1 = 0x18;
   *(undefined8*)( puVar1 + 2 ) = 0;
   StringName::StringName((StringName*)( puVar1 + 4 ), (StringName*)&local_38);
   bVar2 = StringName::configured != '\0';
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   puVar1[10] = 6;
   if (( bVar2 ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Node*>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Node*>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_78 = 0;
      local_68 = &_LC8;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_78);
      StringName::StringName((StringName*)&local_70, (String*)&local_78, false);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x18);
      local_60 = 0;
      StringName::StringName((StringName*)&local_58, (StringName*)&local_70);
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
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

      if (cVar5 != '\0') goto LAB_00101ecb;
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
         if (cVar5 != '\0') goto LAB_00101ecb;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00101ecb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorScript::is_class(String const&) const */undefined8 EditorScript::is_class(EditorScript *this, String *param_1) {
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

      if (cVar4 != '\0') goto LAB_001020cb;
   }

   cVar4 = String::operator ==(param_1, "EditorScript");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001020cb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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
/* MethodBindTRC<Node*>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Node*>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   bool bVar2;
   undefined8 local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 4;
   local_38 = &_LC8;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   *puVar1 = 0x18;
   *(undefined8*)( puVar1 + 2 ) = 0;
   StringName::StringName((StringName*)( puVar1 + 4 ), (StringName*)&local_38);
   bVar2 = StringName::configured != '\0';
   puVar1[6] = 0;
   *(undefined8*)( puVar1 + 8 ) = 0;
   puVar1[10] = 6;
   if (( bVar2 ) && ( local_38 != (undefined*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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

         goto LAB_001024ac;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001024ac:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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
/* EditorScript::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorScript::_get_property_listv(EditorScript *this, List *param_1, bool param_2) {
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
   local_78 = "EditorScript";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorScript";
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

         goto LAB_001028b1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001028b1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "EditorScript", false);
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
/* MethodBind* create_method_bind<EditorScript, Node*>(void (EditorScript::*)(Node*)) */MethodBind *create_method_bind<EditorScript,Node*>(_func_void_Node_ptr *param_1) {
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
   *(_func_void_Node_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00104d58;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorScript";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<EditorScript, Node*>(Node* (EditorScript::*)() const) */MethodBind *create_method_bind<EditorScript,Node*>(_func_Node_ptr *param_1) {
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
   *(_func_Node_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00104db8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorScript";
   local_30 = 0xc;
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
/* MethodBind* create_method_bind<EditorScript, EditorInterface*>(EditorInterface*
   (EditorScript::*)() const) */MethodBind *create_method_bind<EditorScript,EditorInterface*>(_func_EditorInterface_ptr *param_1) {
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
   *(_func_EditorInterface_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00104e18;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorScript";
   local_30 = 0xc;
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
/* CowData<StringName>::_unref() */void CowData<StringName>::_unref(CowData<StringName> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
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
         lVar2 = plVar1[-1];
         *(undefined8*)this = 0;
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
         return;
      }

      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* EditorScript::_bind_methods() [clone .cold] */void EditorScript::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorScript::_initialize_classv() */void EditorScript::_initialize_classv(void) {
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
         if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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
      local_48 = "EditorScript";
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
/* WARNING: Removing unreachable block (ram,0x00103238) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTRC<EditorInterface*>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTRC<EditorInterface*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Object *pOVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC35, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00103560;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         pOVar2 = (Object*)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, pOVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_00103560:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Node*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Object *pOVar2;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   int in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   Variant *pVVar3;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC35, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001037f0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D == 0) {
      if (( param_2[5] == (Variant*)0x0 ) || ( -1 < *(int*)( param_2[5] + -8 ) )) {
         *in_R9 = 0;
         if (( (ulong)pVVar3 & 1 ) != 0) {
            pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)pVVar1 ) + -1 );
         }

         pOVar2 = (Object*)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, pOVar2);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
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

   LAB_001037f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorInterface*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<EditorInterface*>::validated_call(MethodBindTRC<EditorInterface*> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00103c0f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Variant::ObjData::ref_pointer((Object*)( param_3 + 8 ));
      return;
   }

   LAB_00103c0f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<EditorInterface*>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<EditorInterface*>::ptrcall(MethodBindTRC<EditorInterface*> *this, Object *param_1, void **param_2, void *param_3) {
   undefined8 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00103c61;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = uVar1;
   LAB_00103c61:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Node*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Node*>::validated_call(MethodBindTRC<Node*> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00103f8f;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ));
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Variant::ObjData::ref_pointer((Object*)( param_3 + 8 ));
      return;
   }

   LAB_00103f8f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTRC<Node*>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Node*>::ptrcall(MethodBindTRC<Node*> *this, Object *param_1, void **param_2, void *param_3) {
   undefined8 uVar1;
   long *plVar3;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   code *pcVar2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar3 = *(long**)( param_1 + 0x118 );
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar3 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00103fe1;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(undefined8*)param_3 = uVar1;
   LAB_00103fe1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Node*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Node*>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00104321;
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
      /* WARNING: Could not recover jumptable at 0x001041ad. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 0x10 ));
      return;
   }

   LAB_00104321:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Node*>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00104509;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   plVar1 = *param_3;
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x00104391. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), plVar1);
      return;
   }

   LAB_00104509:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Node*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   undefined4 uVar5;
   Object *pOVar6;
   long *plVar7;
   Object *pOVar8;
   long lVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar7 = (long*)plVar11[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar7 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC35, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_001046f0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar5 = 3;
      LAB_001046e5:*in_R9 = uVar5;
      in_R9[2] = 1;
      goto LAB_001046f0;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00104740;
      LAB_00104730:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar9 = *(long*)( pVVar12 + -8 );
      if ((int)lVar9 < (int)( in_R8D ^ 1 )) {
         LAB_00104740:uVar5 = 4;
         goto LAB_001046e5;
      }

      if (in_R8D == 1) goto LAB_00104730;
      lVar10 = (long)( (int)lVar9 + -1 );
      if (lVar9 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar9, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
   if (cVar4 == '\0') {
      LAB_00104696:uVar3 = _LC44;
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar3;
   }
 else {
      pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
      pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
      if (( ( pOVar8 == (Object*)0x0 ) || ( lVar9 = __dynamic_cast(pOVar8, &Object::typeinfo, &Node::typeinfo, 0) ),lVar9 == 0 )) goto LAB_00104696;
   }

   pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
   if (pOVar6 != (Object*)0x0) {
      pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Node::typeinfo, 0);
   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), pOVar6);
   LAB_001046f0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<EditorInterface*>::~MethodBindTRC() */void MethodBindTRC<EditorInterface*>::~MethodBindTRC(MethodBindTRC<EditorInterface*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Node*>::~MethodBindTRC() */void MethodBindTRC<Node*>::~MethodBindTRC(MethodBindTRC<Node*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorScript::~EditorScript() */void EditorScript::~EditorScript(EditorScript *this) {
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


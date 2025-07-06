/* EditorImportBlendRunner::_resources_reimported(Vector<String> const&) */void EditorImportBlendRunner::_resources_reimported(Vector *param_1) {
   char cVar1;
   long *plVar2;
   if (*(long*)( param_1 + 0x418 ) == 0) {
      return;
   }
   plVar2 = (long*)OS::get_singleton();
   cVar1 = ( **(code**)( *plVar2 + 0x138 ) )(plVar2, param_1 + 0x418);
   if (cVar1 != '\0') {
      Timer::start(_LC4);
      return;
   }
   return;
}/* EditorImportBlendRunner::_kill_blender() */void EditorImportBlendRunner::_kill_blender(EditorImportBlendRunner *this) {
   char cVar1;
   long *plVar2;
   Timer::stop();
   if (*(long*)( this + 0x418 ) != 0) {
      plVar2 = (long*)OS::get_singleton();
      cVar1 = ( **(code**)( *plVar2 + 0x138 ) )(plVar2, this + 0x418);
      if (cVar1 != '\0') {
         plVar2 = (long*)OS::get_singleton();
         ( **(code**)( *plVar2 + 0x128 ) )(plVar2, this + 0x418);
      }
   }
   *(undefined8*)( this + 0x418 ) = 0;
   return;
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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
      } else {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* EditorImportBlendRunner::connect_blender_rpc(Ref<HTTPClient> const&, int) */void EditorImportBlendRunner::connect_blender_rpc(EditorImportBlendRunner *this, Ref *param_1, int param_2) {
   undefined4 uVar1;
   code *pcVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   int iVar6;
   long *plVar7;
   long in_FS_OFFSET;
   long local_68;
   Object *local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar7 = *(long**)param_1;
   pcVar2 = *(code**)( *plVar7 + 0x158 );
   uVar1 = *(undefined4*)( this + 0x410 );
   local_60 = (Object*)0x0;
   local_68 = 0;
   local_58 = "127.0.0.1";
   local_50 = 9;
   String::parse_latin1((StrRange*)&local_68);
   ( *pcVar2 )(plVar7, (StrRange*)&local_68, uVar1, &local_60);
   lVar3 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar7 = (long*)( local_68 + -0x10 );
      *plVar7 = *plVar7 + -1;
      UNLOCK();
      if (*plVar7 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }
   }
   if (local_60 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_60;
      if (cVar5 != '\0') {
         cVar5 = predelete_handler(local_60);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )();
            Memory::free_static(pOVar4, false);
         }
      }
   }
   ( **(code**)( **(long**)param_1 + 0x178 ) )();
   LAB_00100230:do {
      plVar7 = (long*)OS::get_singleton();
      ( **(code**)( *plVar7 + 0x1f8 ) )(plVar7, 1000);
      iVar6 = ( **(code**)( **(long**)param_1 + 0x178 ) )();
      if (iVar6 != 3) {
         if (iVar6 == 5) goto LAB_00100368;
         if (iVar6 != 1) {
            if (param_2 < 0x3e9) {
               LAB_00100368:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }
               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }
            plVar7 = *(long**)param_1;
            uVar1 = *(undefined4*)( this + 0x410 );
            pcVar2 = *(code**)( *plVar7 + 0x158 );
            local_58 = "127.0.0.1";
            local_60 = (Object*)0x0;
            local_68 = 0;
            local_50 = 9;
            String::parse_latin1((StrRange*)&local_68);
            ( *pcVar2 )(plVar7, (StrRange*)&local_68, uVar1, &local_60);
            lVar3 = local_68;
            if (local_68 != 0) {
               LOCK();
               plVar7 = (long*)( local_68 + -0x10 );
               *plVar7 = *plVar7 + -1;
               UNLOCK();
               if (*plVar7 == 0) {
                  local_68 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }
            }
            if (local_60 != (Object*)0x0) {
               cVar5 = RefCounted::unreference();
               pOVar4 = local_60;
               if (cVar5 != '\0') {
                  cVar5 = predelete_handler(local_60);
                  if (cVar5 != '\0') {
                     ( **(code**)( *(long*)pOVar4 + 0x140 ) )();
                     Memory::free_static(pOVar4, false);
                  }
               }
            }
            goto LAB_00100230;
         }
      }
      ( **(code**)( **(long**)param_1 + 0x1d0 ) )();
   } while ( true );
}/* EditorImportBlendRunner::_extract_error_message_xml(Vector<unsigned char> const&, String&) */ulong EditorImportBlendRunner::_extract_error_message_xml(EditorImportBlendRunner *this, Vector *param_1, String *param_2) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   RefCounted *this_00;
   String *pSVar7;
   ulong uVar8;
   long in_FS_OFFSET;
   long local_40;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (RefCounted*)operator_new(0x1d0, "");
   RefCounted::RefCounted(this_00);
   *(code**)this_00 = RefCounted::init_ref;
   *(undefined8*)( this_00 + 400 ) = 0;
   *(undefined8*)( this_00 + 0x1a8 ) = 0;
   this_00[0x1b0] = (RefCounted)0x0;
   *(undefined4*)( this_00 + 0x1b4 ) = 0;
   *(undefined8*)( this_00 + 0x1b8 ) = 0;
   *(undefined8*)( this_00 + 0x1c8 ) = 0;
   *(undefined1(*) [16])( this_00 + 0x180 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x198 ) = (undefined1[16])0x0;
   postinitialize_handler((Object*)this_00);
   cVar5 = RefCounted::init_ref();
   if (cVar5 == '\0') {
      this_00 = (RefCounted*)0x0;
   }
   pSVar7 = (String*)0x0;
   iVar6 = XMLParser::open_buffer((Vector*)this_00);
   if (iVar6 == 0) {
      if (*(long*)param_2 == 0) goto LAB_00100535;
      LOCK();
      plVar1 = (long*)( *(long*)param_2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)param_2;
         *(undefined8*)param_2 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         *(undefined8*)param_2 = 0;
      } else {
         *(undefined8*)param_2 = 0;
      }
      iVar6 = XMLParser::read();
      lVar3 = local_40;
      while (iVar6 == 0) {
         iVar6 = XMLParser::get_node_type();
         local_40 = lVar3;
         if (iVar6 == 3) {
            pSVar7 = (String*)&local_38;
            XMLParser::get_node_data();
            lVar4 = local_38;
            if (local_38 != 0) {
               uVar2 = *(undefined8*)( local_38 + -8 );
               LOCK();
               plVar1 = (long*)( local_38 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_38 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }
               if ((int)uVar2 != 0) {
                  if (( *(long*)param_2 != 0 ) && ( *(int*)( *(long*)param_2 + -8 ) != 0 )) {
                     String::operator +=(param_2, " ");
                  }
                  XMLParser::get_node_data();
                  String::trim_suffix((char*)pSVar7);
                  String::operator +=(param_2, pSVar7);
                  lVar4 = local_38;
                  if (local_38 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_38 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_38 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }
                  }
                  if (lVar3 != 0) {
                     LOCK();
                     plVar1 = (long*)( lVar3 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_40 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }
                  }
               }
            }
         }
         LAB_00100535:iVar6 = XMLParser::read();
         lVar3 = local_40;
      };
      if (*(long*)param_2 != 0) {
         uVar8 = CONCAT71(( int7 )((ulong)pSVar7 >> 8), *(int*)( *(long*)param_2 + -8 ) != 0);
         cVar5 = RefCounted::unreference();
         goto joined_r0x00100561;
      }
   }
   uVar8 = 0;
   cVar5 = RefCounted::unreference();
   joined_r0x00100561:if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)this_00) ),cVar5 != '\0') {
      ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
      Memory::free_static(this_00, false);
   }
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar8 & 0xffffffff;
}/* EditorImportBlendRunner::_notification(int) */void EditorImportBlendRunner::_notification(EditorImportBlendRunner *this, int param_1) {
   if (param_1 != 1) {
      return;
   }
   _kill_blender(this);
   return;
}/* EditorImportBlendRunner::EditorImportBlendRunner() */void EditorImportBlendRunner::EditorImportBlendRunner(EditorImportBlendRunner *this) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   Timer *this_00;
   CallableCustom *pCVar6;
   long in_FS_OFFSET;
   bool bVar7;
   double dVar8;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Node::Node((Node*)this);
   bVar7 = singleton == (EditorImportBlendRunner*)0x0;
   *(undefined4*)( this + 0x410 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00107738;
   *(undefined8*)( this + 0x418 ) = 0;
   if (bVar7) {
      local_68 = "filesystem/import/blender/rpc_port";
      local_70 = 0;
      local_60 = 0x22;
      singleton = this;
      String::parse_latin1((StrRange*)&local_70);
      _EDITOR_GET((String*)local_58);
      iVar5 = Variant::operator_cast_to_int((Variant*)local_58);
      *(int*)( this + 0x410 ) = iVar5;
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      lVar4 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
      this_00 = (Timer*)operator_new(0x428, "");
      Timer::Timer(this_00);
      postinitialize_handler((Object*)this_00);
      *(Timer**)( this + 0x408 ) = this_00;
      Node::add_child(this, this_00, 0, 0);
      Timer::set_one_shot(SUB81(*(undefined8*)( this + 0x408 ), 0));
      local_68 = "filesystem/import/blender/rpc_server_uptime";
      local_70 = 0;
      local_60 = 0x2b;
      String::parse_latin1((StrRange*)&local_70);
      _EDITOR_GET((String*)local_58);
      dVar8 = Variant::operator_cast_to_double((Variant*)local_58);
      Timer::set_wait_time(dVar8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      lVar4 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }
      }
      plVar1 = *(long**)( this + 0x408 );
      pcVar2 = *(code**)( *plVar1 + 0x108 );
      pCVar6 = (CallableCustom*)operator_new(0x48, "");
      CallableCustom::CallableCustom(pCVar6);
      *(undefined**)( pCVar6 + 0x20 ) = &_LC16;
      *(undefined1(*) [16])( pCVar6 + 0x30 ) = (undefined1[16])0x0;
      *(undefined***)pCVar6 = &PTR_hash_00107900;
      *(undefined8*)( pCVar6 + 0x40 ) = 0;
      uVar3 = *(undefined8*)( this + 0x60 );
      *(undefined8*)( pCVar6 + 0x10 ) = 0;
      *(undefined8*)( pCVar6 + 0x30 ) = uVar3;
      *(code**)( pCVar6 + 0x38 ) = _kill_blender;
      *(EditorImportBlendRunner**)( pCVar6 + 0x28 ) = this;
      CallableCustomMethodPointerBase::_setup((uint*)pCVar6, (int)pCVar6 + 0x28);
      *(char**)( pCVar6 + 0x20 ) = "EditorImportBlendRunner::_kill_blender";
      Callable::Callable((Callable*)&local_68, pCVar6);
      StringName::StringName((StringName*)&local_70, "timeout", false);
      ( *pcVar2 )(plVar1, (StrRange*)&local_70, (Callable*)&local_68, 0);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      Callable::~Callable((Callable*)&local_68);
      plVar1 = EditorFileSystem::singleton;
      pcVar2 = *(code**)( *EditorFileSystem::singleton + 0x108 );
      pCVar6 = (CallableCustom*)operator_new(0x48, "");
      CallableCustom::CallableCustom(pCVar6);
      *(undefined**)( pCVar6 + 0x20 ) = &_LC16;
      *(undefined1(*) [16])( pCVar6 + 0x30 ) = (undefined1[16])0x0;
      *(undefined***)pCVar6 = &PTR_hash_00107990;
      *(undefined8*)( pCVar6 + 0x40 ) = 0;
      uVar3 = *(undefined8*)( this + 0x60 );
      *(undefined8*)( pCVar6 + 0x10 ) = 0;
      *(undefined8*)( pCVar6 + 0x30 ) = uVar3;
      *(undefined8*)( pCVar6 + 0x38 ) = 0x100000;
      *(EditorImportBlendRunner**)( pCVar6 + 0x28 ) = this;
      CallableCustomMethodPointerBase::_setup((uint*)pCVar6, (int)pCVar6 + 0x28);
      *(char**)( pCVar6 + 0x20 ) = "EditorImportBlendRunner::_resources_reimported";
      Callable::Callable((Callable*)&local_68, pCVar6);
      StringName::StringName((StringName*)&local_70, "resources_reimported", false);
      ( *pcVar2 )(plVar1, (StrRange*)&local_70, (Callable*)&local_68, 0);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }
      Callable::~Callable((Callable*)&local_68);
   } else {
      _err_print_error("EditorImportBlendRunner", "modules/gltf/editor/editor_import_blend_runner.cpp", 0x17e, "Condition \"singleton != nullptr\" is true.", "EditorImportBlendRunner already created.", 0, 0);
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* EditorImportBlendRunner::start_blender(String const&, bool) */undefined4 EditorImportBlendRunner::start_blender(EditorImportBlendRunner *this, String *param_1, bool param_2) {
   long lVar1;
   long lVar2;
   undefined4 uVar3;
   undefined4 uVar4;
   CowData<char32_t> *pCVar5;
   long *plVar6;
   long in_FS_OFFSET;
   long local_80;
   undefined1(*local_78)[16];
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = 0;
   local_68 = "filesystem/import/blender/blender_path";
   local_60 = 0x26;
   String::parse_latin1((StrRange*)&local_70);
   _EDITOR_GET((String*)local_58);
   Variant::operator_cast_to_String((Variant*)&local_80);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   lVar1 = local_70;
   if (local_70 != 0) {
      LOCK();
      plVar6 = (long*)( local_70 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }
   }
   local_78 = (undefined1(*) [16])0x0;
   local_70 = 0;
   local_68 = "--background";
   local_60 = 0xc;
   String::parse_latin1((StrRange*)&local_70);
   if (local_78 == (undefined1(*) [16])0x0) {
      local_78 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[1] = 0;
      *local_78 = (undefined1[16])0x0;
   }
   pCVar5 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar5 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar5 + 0x10 ) = (undefined1[16])0x0;
   if (local_70 != 0) {
      CowData<char32_t>::_ref(pCVar5, (CowData*)&local_70);
   }
   lVar2 = local_70;
   lVar1 = *(long*)( *local_78 + 8 );
   *(undefined8*)( pCVar5 + 8 ) = 0;
   *(undefined1(**) [16])( pCVar5 + 0x18 ) = local_78;
   *(long*)( pCVar5 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(CowData<char32_t>**)( lVar1 + 8 ) = pCVar5;
   }
   lVar1 = *(long*)*local_78;
   *(CowData<char32_t>**)( *local_78 + 8 ) = pCVar5;
   if (lVar1 == 0) {
      *(CowData<char32_t>**)*local_78 = pCVar5;
   }
   *(int*)local_78[1] = *(int*)local_78[1] + 1;
   if (local_70 != 0) {
      LOCK();
      plVar6 = (long*)( local_70 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   local_70 = 0;
   local_68 = "--python-expr";
   local_60 = 0xd;
   String::parse_latin1((StrRange*)&local_70);
   if (local_78 == (undefined1(*) [16])0x0) {
      local_78 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[1] = 0;
      *local_78 = (undefined1[16])0x0;
   }
   pCVar5 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar5 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar5 + 0x10 ) = (undefined1[16])0x0;
   if (local_70 != 0) {
      CowData<char32_t>::_ref(pCVar5, (CowData*)&local_70);
   }
   lVar2 = local_70;
   lVar1 = *(long*)( *local_78 + 8 );
   *(undefined8*)( pCVar5 + 8 ) = 0;
   *(undefined1(**) [16])( pCVar5 + 0x18 ) = local_78;
   *(long*)( pCVar5 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(CowData<char32_t>**)( lVar1 + 8 ) = pCVar5;
   }
   lVar1 = *(long*)*local_78;
   *(CowData<char32_t>**)( *local_78 + 8 ) = pCVar5;
   if (lVar1 == 0) {
      *(CowData<char32_t>**)*local_78 = pCVar5;
   }
   *(int*)local_78[1] = *(int*)local_78[1] + 1;
   if (local_70 != 0) {
      LOCK();
      plVar6 = (long*)( local_70 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_70 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
      if (local_78 == (undefined1(*) [16])0x0) {
         local_78 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_78[1] = 0;
         *local_78 = (undefined1[16])0x0;
      }
   }
   pCVar5 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])pCVar5 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pCVar5 + 0x10 ) = (undefined1[16])0x0;
   if (*(long*)param_1 != 0) {
      CowData<char32_t>::_ref(pCVar5, (CowData*)param_1);
   }
   lVar1 = *(long*)( *local_78 + 8 );
   *(undefined8*)( pCVar5 + 8 ) = 0;
   *(undefined1(**) [16])( pCVar5 + 0x18 ) = local_78;
   *(long*)( pCVar5 + 0x10 ) = lVar1;
   if (lVar1 != 0) {
      *(CowData<char32_t>**)( lVar1 + 8 ) = pCVar5;
   }
   lVar1 = *(long*)*local_78;
   *(CowData<char32_t>**)( *local_78 + 8 ) = pCVar5;
   if (lVar1 == 0) {
      *(CowData<char32_t>**)*local_78 = pCVar5;
   }
   *(int*)local_78[1] = *(int*)local_78[1] + 1;
   if (param_2) {
      local_68 = (char*)( (ulong)local_68 & 0xffffffff00000000 );
      plVar6 = (long*)OS::get_singleton();
      uVar3 = ( **(code**)( *plVar6 + 0x108 ) )(plVar6, (Variant*)&local_80, &local_78, 0, &local_68, 0, 0, 0);
      uVar4 = 1;
      if ((int)local_68 == 0) {
         uVar4 = uVar3;
      }
   } else {
      plVar6 = (long*)OS::get_singleton();
      uVar4 = ( **(code**)( *plVar6 + 0x118 ) )(plVar6, (Variant*)&local_80, &local_78, this + 0x418, 0);
   }
   List<String,DefaultAllocator>::~List((List<String,DefaultAllocator>*)&local_78);
   lVar1 = local_80;
   if (local_80 != 0) {
      LOCK();
      plVar6 = (long*)( local_80 + -0x10 );
      *plVar6 = *plVar6 + -1;
      UNLOCK();
      if (*plVar6 == 0) {
         local_80 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar4;
}/* dict_to_python(Dictionary const&) */Dictionary *dict_to_python(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char *pcVar4;
   int iVar5;
   Variant *pVVar6;
   long lVar7;
   int iVar8;
   Variant *in_RSI;
   long in_FS_OFFSET;
   bool bVar9;
   long local_c0;
   Array local_b8[8];
   long local_b0;
   char *local_a8;
   long local_a0;
   long local_98;
   char *local_90;
   char *local_88;
   long local_80;
   uint local_78[8];
   int local_58[6];
   long local_40;
   iVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = 0;
   Dictionary::keys();
   iVar5 = Array::size();
   if (0 < iVar5) {
      do {
         Array::operator []((int)local_b8);
         Variant::operator_cast_to_String((Variant*)&local_b0);
         local_a8 = (char*)0x0;
         Variant::Variant((Variant*)local_58, (String*)&local_b0);
         pVVar6 = (Variant*)Dictionary::operator [](in_RSI);
         Variant::Variant((Variant*)local_78, pVVar6);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (local_78[0] == 0x15) {
            LAB_001012b0:Variant::operator_cast_to_String((Variant*)&local_88);
            pcVar4 = local_88;
            pcVar3 = local_a8;
            if (local_a8 == local_88) {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }
               }
            } else {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               local_a8 = local_88;
            }
            String::c_escape();
            local_88 = "\'%s\'";
            local_90 = (char*)0x0;
            local_80 = 4;
            String::parse_latin1((StrRange*)&local_90);
            vformat<String>((Variant*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98);
            pcVar3 = local_a8;
            if (local_a8 == local_88) {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static(local_88 + -0x10, false);
                  }
               }
            } else {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               local_a8 = local_88;
            }
            pcVar3 = local_90;
            if (local_90 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = (char*)0x0;
                  Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
               }
            }
            lVar2 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
         } else if (local_78[0] < 0x16) {
            if (local_78[0] != 1) {
               if (local_78[0] != 4) goto LAB_001010cf;
               goto LAB_001012b0;
            }
            bVar9 = Variant::operator_cast_to_bool((Variant*)local_78);
            local_80 = 5 - (ulong)bVar9;
            local_88 = "False";
            if (bVar9) {
               local_88 = "True";
            }
            String::parse_latin1((StrRange*)&local_a8);
         } else {
            if (local_78[0] != 0x1b) {
               LAB_001010cf:Variant::get_type_name((StrRange*)&local_98);
               local_88 = "Unhandled Variant type %s for python dictionary";
               local_90 = (char*)0x0;
               local_80 = 0x2f;
               String::parse_latin1((StrRange*)&local_90);
               vformat<String>((Variant*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98);
               _err_print_error("dict_to_python", "modules/gltf/editor/editor_import_blend_runner.cpp", 0x77, "Method/function failed. Returning: \"\"", (Variant*)&local_88, 0, 0);
               pcVar3 = local_88;
               if (local_88 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_88 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               pcVar3 = local_90;
               if (local_90 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_90 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_90 = (char*)0x0;
                     Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
                  }
               }
               lVar2 = local_98;
               if (local_98 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
               local_80 = 0;
               local_88 = "";
               *(undefined8*)param_1 = 0;
               String::parse_latin1((StrRange*)param_1);
               if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               pcVar3 = local_a8;
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               lVar2 = local_b0;
               if (local_b0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b0 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
               goto LAB_0010125c;
            }
            Variant::operator_cast_to_Dictionary((Variant*)&local_90);
            dict_to_python((Dictionary*)&local_88);
            pcVar4 = local_88;
            pcVar3 = local_a8;
            if (local_a8 == local_88) {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }
               }
            } else {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               local_a8 = local_88;
            }
            Dictionary::~Dictionary((Dictionary*)&local_90);
         }
         local_90 = (char*)0x0;
         plVar1 = (long*)( local_a8 + -0x10 );
         if (local_a8 != (char*)0x0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_001013c0;
               LOCK();
               lVar7 = *plVar1;
               bVar9 = lVar2 == lVar7;
               if (bVar9) {
                  *plVar1 = lVar2 + 1;
                  lVar7 = lVar2;
               }
               UNLOCK();
            } while ( !bVar9 );
            if (lVar7 != -1) {
               local_90 = local_a8;
            }
         }
         LAB_001013c0:local_98 = 0;
         plVar1 = (long*)( local_b0 + -0x10 );
         if (local_b0 != 0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_001013fa;
               LOCK();
               lVar7 = *plVar1;
               bVar9 = lVar2 == lVar7;
               if (bVar9) {
                  *plVar1 = lVar2 + 1;
                  lVar7 = lVar2;
               }
               UNLOCK();
            } while ( !bVar9 );
            if (lVar7 != -1) {
               local_98 = local_b0;
            }
         }
         LAB_001013fa:local_a0 = 0;
         local_88 = "\'%s\': %s,";
         local_80 = 9;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<String,String>((Variant*)&local_88, (StrRange*)&local_a0, (StrRange*)&local_98, (StrRange*)&local_90);
         String::operator +=((String*)&local_c0, (String*)&local_88);
         pcVar3 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar2 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         lVar2 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         pcVar3 = local_90;
         if (local_90 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         pcVar3 = local_a8;
         if (local_a8 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar2 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar1 = (long*)( local_b0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         iVar8 = iVar8 + 1;
         iVar5 = Array::size();
      } while ( iVar8 < iVar5 );
   }
   local_90 = (char*)0x0;
   plVar1 = (long*)( local_c0 + -0x10 );
   if (local_c0 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_001015b7;
         LOCK();
         lVar7 = *plVar1;
         bVar9 = lVar2 == lVar7;
         if (bVar9) {
            *plVar1 = lVar2 + 1;
            lVar7 = lVar2;
         }
         UNLOCK();
      } while ( !bVar9 );
      if (lVar7 != -1) {
         local_90 = (char*)local_c0;
      }
   }
   LAB_001015b7:local_98 = 0;
   local_88 = "{%s}";
   local_80 = 4;
   String::parse_latin1((StrRange*)&local_98);
   vformat<String>(param_1, (StrRange*)&local_98, (StrRange*)&local_90);
   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   pcVar3 = local_90;
   if (local_90 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
      }
   }
   LAB_0010125c:Array::~Array(local_b8);
   lVar2 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* EditorImportBlendRunner::do_import_direct(Dictionary const&) */ulong EditorImportBlendRunner::do_import_direct(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   ulong uVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   dict_to_python((Dictionary*)&local_58);
   local_48 = "\nimport bpy, sys\nopts = %s\nif bpy.app.version < (3, 0, 0):\n  print(\'Blender 3.0 or higher is required.\', file=sys.stderr)\nbpy.ops.wm.open_mainfile(filepath=opts[\'path\'])\nif opts[\'unpack_all\']:\n  bpy.ops.file.unpack_all(method=\'USE_LOCAL\')\nbpy.ops.export_scene.gltf(**opts[\'gltf_options\'])\n";
   local_50 = 0;
   local_40 = 0x121;
   String::parse_latin1((StrRange*)&local_50);
   vformat<String>((String*)&local_48, (StrRange*)&local_50, (Dictionary*)&local_58);
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
   lVar2 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   uVar3 = start_blender((EditorImportBlendRunner*)param_1, (String*)&local_48, true);
   if (local_48 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static(local_48 + -0x10, false);
         uVar3 = uVar3 & 0xffffffff;
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar3;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* dict_to_xmlrpc(Dictionary const&) */Dictionary *dict_to_xmlrpc(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   char *pcVar4;
   int iVar5;
   Variant *pVVar6;
   long lVar7;
   int iVar8;
   Variant *in_RSI;
   long in_FS_OFFSET;
   bool bVar9;
   long local_c0;
   Array local_b8[8];
   long local_b0;
   char *local_a8;
   long local_a0;
   long local_98;
   char *local_90;
   char *local_88;
   undefined8 local_80;
   uint local_78[8];
   int local_58[6];
   long local_40;
   iVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_c0 = 0;
   Dictionary::keys();
   iVar5 = Array::size();
   if (0 < iVar5) {
      do {
         Array::operator []((int)local_b8);
         Variant::operator_cast_to_String((Variant*)&local_b0);
         local_a8 = (char*)0x0;
         Variant::Variant((Variant*)local_58, (String*)&local_b0);
         pVVar6 = (Variant*)Dictionary::operator [](in_RSI);
         Variant::Variant((Variant*)local_78, pVVar6);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (local_78[0] == 0x15) {
            LAB_00101cd0:Variant::operator_cast_to_String((Variant*)&local_88);
            pcVar4 = local_88;
            pcVar3 = local_a8;
            if (local_a8 == local_88) {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }
               }
            } else {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               local_a8 = local_88;
            }
            String::xml_escape(SUB81((StrRange*)&local_98, 0));
            local_88 = "<string>%s</string>";
            local_90 = (char*)0x0;
            local_80 = 0x13;
            String::parse_latin1((StrRange*)&local_90);
            vformat<String>((Variant*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98);
            pcVar3 = local_a8;
            if (local_a8 == local_88) {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static(local_88 + -0x10, false);
                  }
               }
            } else {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               local_a8 = local_88;
            }
            pcVar3 = local_90;
            if (local_90 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = (char*)0x0;
                  Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
               }
            }
            lVar2 = local_98;
            if (local_98 != 0) {
               LOCK();
               plVar1 = (long*)( local_98 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_98 = 0;
                  Memory::free_static((void*)( lVar2 + -0x10 ), false);
               }
            }
         } else if (local_78[0] < 0x16) {
            if (local_78[0] != 1) {
               if (local_78[0] != 4) goto LAB_00101aef;
               goto LAB_00101cd0;
            }
            Variant::operator_cast_to_bool((Variant*)local_78);
            local_88 = "<boolean>%d</boolean>";
            local_90 = (char*)0x0;
            local_80 = 0x15;
            String::parse_latin1((StrRange*)&local_90);
            vformat<int>((String*)&local_88, (int)(StrRange*)&local_90);
            pcVar3 = local_a8;
            if (local_a8 == local_88) {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     Memory::free_static(local_88 + -0x10, false);
                  }
               }
            } else {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               local_a8 = local_88;
            }
            pcVar3 = local_90;
            if (local_90 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( (long)local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = (char*)0x0;
                  Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
               }
            }
         } else {
            if (local_78[0] != 0x1b) {
               LAB_00101aef:Variant::get_type_name((StrRange*)&local_98);
               local_88 = "Unhandled Variant type %s for XMLRPC";
               local_90 = (char*)0x0;
               local_80 = 0x24;
               String::parse_latin1((StrRange*)&local_90);
               vformat<String>((Variant*)&local_88, (StrRange*)&local_90, (StrRange*)&local_98);
               _err_print_error("dict_to_xmlrpc", "modules/gltf/editor/editor_import_blend_runner.cpp", 0x98, "Method/function failed. Returning: \"\"", (Variant*)&local_88, 0, 0);
               pcVar3 = local_88;
               if (local_88 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_88 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               pcVar3 = local_90;
               if (local_90 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( (long)local_90 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_90 = (char*)0x0;
                     Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
                  }
               }
               lVar2 = local_98;
               if (local_98 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_98 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_98 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
               local_80 = 0;
               local_88 = "";
               *(undefined8*)param_1 = 0;
               String::parse_latin1((StrRange*)param_1);
               if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               pcVar3 = local_a8;
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               lVar2 = local_b0;
               if (local_b0 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_b0 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_b0 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
               goto LAB_00101c7c;
            }
            Variant::operator_cast_to_Dictionary((Variant*)&local_90);
            dict_to_xmlrpc((Dictionary*)&local_88);
            pcVar4 = local_88;
            pcVar3 = local_a8;
            if (local_a8 == local_88) {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_88 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }
               }
            } else {
               if (local_a8 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_a8 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_a8 = (char*)0x0;
                     Memory::free_static(pcVar3 + -0x10, false);
                  }
               }
               local_a8 = local_88;
            }
            Dictionary::~Dictionary((Dictionary*)&local_90);
         }
         local_90 = (char*)0x0;
         plVar1 = (long*)( local_a8 + -0x10 );
         if (local_a8 != (char*)0x0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_00101f8a;
               LOCK();
               lVar7 = *plVar1;
               bVar9 = lVar2 == lVar7;
               if (bVar9) {
                  *plVar1 = lVar2 + 1;
                  lVar7 = lVar2;
               }
               UNLOCK();
            } while ( !bVar9 );
            if (lVar7 != -1) {
               local_90 = local_a8;
            }
         }
         LAB_00101f8a:local_98 = 0;
         plVar1 = (long*)( local_b0 + -0x10 );
         if (local_b0 != 0) {
            do {
               lVar2 = *plVar1;
               if (lVar2 == 0) goto LAB_00101fc4;
               LOCK();
               lVar7 = *plVar1;
               bVar9 = lVar2 == lVar7;
               if (bVar9) {
                  *plVar1 = lVar2 + 1;
                  lVar7 = lVar2;
               }
               UNLOCK();
            } while ( !bVar9 );
            if (lVar7 != -1) {
               local_98 = local_b0;
            }
         }
         LAB_00101fc4:local_a0 = 0;
         local_88 = "<member><name>%s</name><value>%s</value></member>";
         local_80 = 0x31;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<String,String>((Variant*)&local_88, (StrRange*)&local_a0, (StrRange*)&local_98, (StrRange*)&local_90);
         String::operator +=((String*)&local_c0, (String*)&local_88);
         pcVar3 = local_88;
         if (local_88 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_88 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_88 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar2 = local_a0;
         if (local_a0 != 0) {
            LOCK();
            plVar1 = (long*)( local_a0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         lVar2 = local_98;
         if (local_98 != 0) {
            LOCK();
            plVar1 = (long*)( local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         pcVar3 = local_90;
         if (local_90 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         pcVar3 = local_a8;
         if (local_a8 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_a8 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_a8 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
         lVar2 = local_b0;
         if (local_b0 != 0) {
            LOCK();
            plVar1 = (long*)( local_b0 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_b0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
         iVar8 = iVar8 + 1;
         iVar5 = Array::size();
      } while ( iVar8 < iVar5 );
   }
   local_90 = (char*)0x0;
   plVar1 = (long*)( local_c0 + -0x10 );
   if (local_c0 != 0) {
      do {
         lVar2 = *plVar1;
         if (lVar2 == 0) goto LAB_00102181;
         LOCK();
         lVar7 = *plVar1;
         bVar9 = lVar2 == lVar7;
         if (bVar9) {
            *plVar1 = lVar2 + 1;
            lVar7 = lVar2;
         }
         UNLOCK();
      } while ( !bVar9 );
      if (lVar7 != -1) {
         local_90 = (char*)local_c0;
      }
   }
   LAB_00102181:local_98 = 0;
   local_88 = "<struct>%s</struct>";
   local_80 = 0x13;
   String::parse_latin1((StrRange*)&local_98);
   vformat<String>(param_1, (StrRange*)&local_98, (StrRange*)&local_90);
   lVar2 = local_98;
   if (local_98 != 0) {
      LOCK();
      plVar1 = (long*)( local_98 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_98 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   pcVar3 = local_90;
   if (local_90 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar3 + -0x10 ), false);
      }
   }
   LAB_00101c7c:Array::~Array(local_b8);
   lVar2 = local_c0;
   if (local_c0 != 0) {
      LOCK();
      plVar1 = (long*)( local_c0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c0 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* EditorImportBlendRunner::do_import_rpc(Dictionary const&) */int EditorImportBlendRunner::do_import_rpc(Dictionary *param_1) {
   long lVar1;
   code *pcVar2;
   Object *pOVar3;
   char *pcVar4;
   char *pcVar5;
   char *pcVar6;
   char cVar7;
   int iVar8;
   int iVar9;
   undefined4 uVar10;
   long *plVar11;
   long lVar12;
   undefined8 uVar13;
   long in_FS_OFFSET;
   bool bVar14;
   long local_b0;
   long local_a8;
   Object *local_a0;
   char *local_98;
   char *local_90;
   long local_88;
   char *local_80;
   long local_78;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Timer::stop();
   if (*(long*)( param_1 + 0x418 ) == 0) {
      LAB_001023a8:local_68 = 0;
      local_50 = 0x49e;
      local_58 = "\nimport bpy, sys, threading\nfrom xmlrpc.server import SimpleXMLRPCServer\nreq = threading.Condition()\nres = threading.Condition()\ninfo = None\nexport_err = None\ndef xmlrpc_server():\n  server = SimpleXMLRPCServer((\'127.0.0.1\', %d))\n  server.register_function(export_gltf)\n  server.serve_forever()\ndef export_gltf(opts):\n  with req:\n    global info\n    info = (\'export_gltf\', opts)\n    req.notify()\n  with res:\n    res.wait()\n  if export_err:\n    raise export_err\n  # Important to return a value to prevent the error \'cannot marshal None unless allow_none is enabled\'.\n  return \'BLENDER_GODOT_EXPORT_SUCCESSFUL\'\nif bpy.app.version < (3, 0, 0):\n  print(\'Blender 3.0 or higher is required.\', file=sys.stderr)\nthreading.Thread(target=xmlrpc_server).start()\nwhile True:\n  with req:\n    while info is None:\n      req.wait()\n  method, opts = info\n  if method == \'export_gltf\':\n    try:\n      export_err = None\n      bpy.ops.wm.open_mainfile(filepath=opts[\'path\'])\n      if opts[\'unpack_all\']:\n        bpy.ops.file.unpack_all(method=\'USE_LOCAL\')\n      bpy.ops.export_scene.gltf(**opts[\'gltf_options\'])\n    except Exception as e:\n      export_err = e\n  info = None\n  with res:\n    res.notify()\n";
      String::parse_latin1((StrRange*)&local_68);
      vformat<int>((String*)&local_58, (int)(StrRange*)&local_68);
      lVar1 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar11 = (long*)( local_68 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }
      }
      iVar8 = start_blender((EditorImportBlendRunner*)param_1, (String*)&local_58, false);
      if (( iVar8 != 0 ) || ( *(long*)( param_1 + 0x418 ) == 0 )) {
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar11 = (long*)( local_58 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               Memory::free_static(local_58 + -0x10, false);
            }
         }
         iVar8 = 1;
         goto LAB_00102443;
      }
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar11 = (long*)( local_58 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            Memory::free_static(local_58 + -0x10, false);
         }
      }
   } else {
      plVar11 = (long*)OS::get_singleton();
      cVar7 = ( **(code**)( *plVar11 + 0x138 ) )(plVar11, param_1 + 0x418);
      if (cVar7 == '\0') goto LAB_001023a8;
   }
   dict_to_xmlrpc((Dictionary*)&local_b0);
   local_68 = 0;
   plVar11 = (long*)( local_b0 + -0x10 );
   if (local_b0 != 0) {
      do {
         lVar1 = *plVar11;
         if (lVar1 == 0) goto LAB_001024e1;
         LOCK();
         lVar12 = *plVar11;
         bVar14 = lVar1 == lVar12;
         if (bVar14) {
            *plVar11 = lVar1 + 1;
            lVar12 = lVar1;
         }
         UNLOCK();
      } while ( !bVar14 );
      if (lVar12 != -1) {
         local_68 = local_b0;
      }
   }
   LAB_001024e1:local_78 = 0;
   local_58 = "<?xml version=\"1.0\"?><methodCall><methodName>export_gltf</methodName><params><param><value>%s</value></param></params></methodCall>";
   local_50 = 0x83;
   String::parse_latin1((StrRange*)&local_78);
   vformat<String>(&local_a8, (StrRange*)&local_78, (StrRange*)&local_68);
   lVar1 = local_78;
   if (local_78 != 0) {
      LOCK();
      plVar11 = (long*)( local_78 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }
   }
   lVar1 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar11 = (long*)( local_68 + -0x10 );
      *plVar11 = *plVar11 + -1;
      UNLOCK();
      if (*plVar11 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }
   }
   local_a0 = (Object*)HTTPClient::create(true);
   if (( local_a0 == (Object*)0x0 ) || ( cVar7 = RefCounted::init_ref() ),cVar7 == '\0') {
      local_a0 = (Object*)0x0;
   }
   iVar8 = connect_blender_rpc((EditorImportBlendRunner*)param_1, (Ref*)&local_a0, 1000000);
   if (iVar8 == 5) {
      String::to_utf8_buffer();
      lVar1 = local_70;
      pOVar3 = local_a0;
      pcVar2 = *(code**)( *(long*)local_a0 + 0x150 );
      if (local_70 == 0) {
         uVar10 = 0;
      } else {
         uVar10 = *(undefined4*)( local_70 + -8 );
      }
      local_58 = "/";
      local_60 = 0;
      local_80 = (char*)0x0;
      local_50 = 1;
      String::parse_latin1((StrRange*)&local_80);
      iVar8 = ( *pcVar2 )(pOVar3, 2, (StrRange*)&local_80, (StrRange*)&local_68, lVar1, uVar10);
      pcVar6 = local_80;
      if (local_80 != (char*)0x0) {
         LOCK();
         plVar11 = (long*)( local_80 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_80 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }
      }
      CowData<String>::_unref((CowData<String>*)&local_60);
      if (iVar8 == 0) {
         local_60 = 0;
         while (true) {
            while (iVar9 = ( **(code**)( *(long*)pOVar3 + 0x178 ) )(pOVar3),iVar9 == 6) {
               ( **(code**)( *(long*)pOVar3 + 0x1d0 ) )(pOVar3);
            };
            if (iVar9 != 7) break;
            ( **(code**)( *(long*)pOVar3 + 0x1d0 ) )(pOVar3);
            ( **(code**)( *(long*)pOVar3 + 0x1a8 ) )(&local_58, pOVar3);
            Vector<unsigned_char>::append_array((Vector<unsigned_char>*)&local_68);
            lVar1 = local_50;
            if (local_50 != 0) {
               LOCK();
               plVar11 = (long*)( local_50 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_50 = 0;
                  Memory::free_static((void*)( lVar1 + -0x10 ), false);
               }
            }
         };
         if (iVar9 == 5) {
            local_98 = (char*)0x0;
            local_58 = "No response from Blender.";
            local_50 = 0x19;
            String::parse_latin1((StrRange*)&local_98);
            pcVar6 = local_98;
            if (( local_60 != 0 ) && ( 0 < *(long*)( local_60 + -8 ) )) {
               String::utf8((char*)&local_58, (int)local_60);
               pcVar5 = local_58;
               pcVar4 = local_98;
               if (local_98 == local_58) {
                  pcVar6 = local_98;
                  if (local_98 != (char*)0x0) {
                     LOCK();
                     plVar11 = (long*)( local_98 + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar5 + -0x10, false);
                        pcVar6 = local_98;
                     }
                  }
               } else {
                  pcVar6 = local_58;
                  if (local_98 != (char*)0x0) {
                     LOCK();
                     plVar11 = (long*)( local_98 + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     pcVar6 = local_58;
                     if (*plVar11 == 0) {
                        local_98 = (char*)0x0;
                        Memory::free_static(pcVar4 + -0x10, false);
                        pcVar6 = local_58;
                     }
                  }
               }
            }
            local_98 = pcVar6;
            iVar9 = ( **(code**)( *(long*)pOVar3 + 400 ) )(pOVar3);
            if (iVar9 == 200) {
               iVar9 = String::find((char*)&local_98, 0x105180);
               if (( iVar9 < 0 ) && ( iVar9 = iVar9 < 0 )) {
                  local_90 = (char*)0x0;
                  cVar7 = _extract_error_message_xml((EditorImportBlendRunner*)param_1, (Vector*)&local_68, (String*)&local_90);
                  local_80 = (char*)0x0;
                  if (cVar7 == '\0') {
                     plVar11 = (long*)( local_98 + -0x10 );
                     if (local_98 != (char*)0x0) {
                        do {
                           lVar1 = *plVar11;
                           if (lVar1 == 0) goto LAB_00102fa9;
                           LOCK();
                           lVar12 = *plVar11;
                           bVar14 = lVar1 == lVar12;
                           if (bVar14) {
                              *plVar11 = lVar1 + 1;
                              lVar12 = lVar1;
                           }
                           UNLOCK();
                        } while ( !bVar14 );
                        if (lVar12 != -1) {
                           local_80 = local_98;
                        }
                     }
                     LAB_00102fa9:local_88 = 0;
                     local_58 = "Blender exportation failed: %s";
                     local_50 = 0x1e;
                     String::parse_latin1((StrRange*)&local_88);
                     vformat<String>(&local_58, (StrRange*)&local_88, (StrRange*)&local_80);
                     uVar13 = 0x138;
                  } else {
                     plVar11 = (long*)( local_90 + -0x10 );
                     if (local_90 != (char*)0x0) {
                        do {
                           lVar1 = *plVar11;
                           if (lVar1 == 0) goto LAB_00102e47;
                           LOCK();
                           lVar12 = *plVar11;
                           bVar14 = lVar1 == lVar12;
                           if (bVar14) {
                              *plVar11 = lVar1 + 1;
                              lVar12 = lVar1;
                           }
                           UNLOCK();
                        } while ( !bVar14 );
                        if (lVar12 != -1) {
                           local_80 = local_90;
                        }
                     }
                     LAB_00102e47:local_88 = 0;
                     local_58 = "Blender exportation failed: %s";
                     local_50 = 0x1e;
                     String::parse_latin1((StrRange*)&local_88);
                     vformat<String>(&local_58, (StrRange*)&local_88, (StrRange*)&local_80);
                     uVar13 = 0x136;
                  }
                  _err_print_error("do_import_rpc", "modules/gltf/editor/editor_import_blend_runner.cpp", uVar13, "Method/function failed. Returning: ERR_QUERY_FAILED", &local_58, 0, 0);
                  pcVar6 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar11 = (long*)( local_58 + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }
                  }
                  lVar1 = local_88;
                  if (local_88 != 0) {
                     LOCK();
                     plVar11 = (long*)( local_88 + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_88 = 0;
                        Memory::free_static((void*)( lVar1 + -0x10 ), false);
                     }
                  }
                  pcVar6 = local_80;
                  if (local_80 != (char*)0x0) {
                     LOCK();
                     plVar11 = (long*)( local_80 + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_80 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }
                  }
                  pcVar6 = local_90;
                  if (local_90 != (char*)0x0) {
                     LOCK();
                     plVar11 = (long*)( local_90 + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        local_90 = (char*)0x0;
                        Memory::free_static(pcVar6 + -0x10, false);
                     }
                  }
                  goto LAB_00102b42;
               }
            } else {
               local_80 = (char*)0x0;
               plVar11 = (long*)( local_98 + -0x10 );
               if (local_98 != (char*)0x0) {
                  do {
                     lVar1 = *plVar11;
                     if (lVar1 == 0) goto LAB_00102a83;
                     LOCK();
                     lVar12 = *plVar11;
                     bVar14 = lVar1 == lVar12;
                     if (bVar14) {
                        *plVar11 = lVar1 + 1;
                        lVar12 = lVar1;
                     }
                     UNLOCK();
                  } while ( !bVar14 );
                  if (lVar12 != -1) {
                     local_80 = local_98;
                  }
               }
               LAB_00102a83:uVar10 = ( **(code**)( *(long*)pOVar3 + 400 ) )(pOVar3);
               local_88 = 0;
               local_50 = 0x38;
               local_58 = "Error received from Blender - status code: %s, error: %s";
               String::parse_latin1((StrRange*)&local_88);
               vformat<int,String>(&local_58, (StrRange*)&local_88, uVar10, (StrRange*)&local_80);
               _err_print_error("do_import_rpc", "modules/gltf/editor/editor_import_blend_runner.cpp", 299, "Method/function failed. Returning: ERR_QUERY_FAILED", &local_58, 0, 0);
               pcVar6 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar11 = (long*)( local_58 + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar6 + -0x10, false);
                  }
               }
               lVar1 = local_88;
               if (local_88 != 0) {
                  LOCK();
                  plVar11 = (long*)( local_88 + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     local_88 = 0;
                     Memory::free_static((void*)( lVar1 + -0x10 ), false);
                  }
               }
               pcVar6 = local_80;
               if (local_80 != (char*)0x0) {
                  LOCK();
                  plVar11 = (long*)( local_80 + -0x10 );
                  *plVar11 = *plVar11 + -1;
                  UNLOCK();
                  if (*plVar11 == 0) {
                     local_80 = (char*)0x0;
                     Memory::free_static(pcVar6 + -0x10, false);
                  }
               }
               LAB_00102b42:iVar8 = 0x15;
            }
            pcVar6 = local_98;
            if (local_98 != (char*)0x0) {
               LOCK();
               plVar11 = (long*)( local_98 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_98 = (char*)0x0;
                  Memory::free_static(pcVar6 + -0x10, false);
               }
            }
         } else {
            local_58 = "Unexpected status during RPC response: %d";
            local_80 = (char*)0x0;
            local_50 = 0x29;
            String::parse_latin1((StrRange*)&local_80);
            vformat<HTTPClient::Status>(&local_58, (StrRange*)&local_80, iVar9);
            _err_print_error("do_import_rpc", "modules/gltf/editor/editor_import_blend_runner.cpp", 0x120, "Method/function failed. Returning: ERR_CONNECTION_ERROR", &local_58, 0, 0);
            pcVar6 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar11 = (long*)( local_58 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar6 + -0x10, false);
               }
            }
            pcVar6 = local_80;
            if (local_80 != (char*)0x0) {
               LOCK();
               plVar11 = (long*)( local_80 + -0x10 );
               *plVar11 = *plVar11 + -1;
               UNLOCK();
               if (*plVar11 == 0) {
                  local_80 = (char*)0x0;
                  Memory::free_static(pcVar6 + -0x10, false);
               }
            }
            iVar8 = 0x1b;
         }
         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar11 = (long*)( local_60 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }
         }
      } else {
         local_68 = 0;
         local_58 = "Unable to send RPC request: %d";
         local_50 = 0x1e;
         String::parse_latin1((StrRange*)&local_68);
         vformat<Error>(&local_58, (StrRange*)&local_68, iVar8);
         _err_print_error("do_import_rpc", "modules/gltf/editor/editor_import_blend_runner.cpp", 0x109, "Method/function failed. Returning: err", &local_58, 0, 0);
         pcVar6 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar11 = (long*)( local_58 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar6 + -0x10, false);
            }
         }
         lVar1 = local_68;
         if (local_68 != 0) {
            LOCK();
            plVar11 = (long*)( local_68 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }
         }
      }
      lVar1 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar11 = (long*)( local_70 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }
      }
   } else {
      local_68 = 0;
      local_58 = "Unexpected status during RPC connection: %d";
      local_50 = 0x2b;
      String::parse_latin1((StrRange*)&local_68);
      vformat<HTTPClient::Status>(&local_58, (StrRange*)&local_68, iVar8);
      _err_print_error("do_import_rpc", "modules/gltf/editor/editor_import_blend_runner.cpp", 0x102, "Method/function failed. Returning: ERR_CONNECTION_ERROR", &local_58, 0, 0);
      pcVar6 = local_58;
      if (local_58 != (char*)0x0) {
         LOCK();
         plVar11 = (long*)( local_58 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_58 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }
      }
      lVar1 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar11 = (long*)( local_68 + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }
      }
      iVar8 = 0x1b;
   }
   pOVar3 = local_a0;
   if (( ( local_a0 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
   Memory::free_static(pOVar3, false);
}lVar1 = local_a8;if (local_a8 != 0) {
   LOCK();
   plVar11 = (long*)( local_a8 + -0x10 );
   *plVar11 = *plVar11 + -1;
   UNLOCK();
   if (*plVar11 == 0) {
      local_a8 = 0;
      Memory::free_static((void*)( lVar1 + -0x10 ), false);
   }
}lVar1 = local_b0;if (local_b0 != 0) {
   LOCK();
   plVar11 = (long*)( local_b0 + -0x10 );
   *plVar11 = *plVar11 + -1;
   UNLOCK();
   if (*plVar11 == 0) {
      local_b0 = 0;
      Memory::free_static((void*)( lVar1 + -0x10 ), false);
   }
}LAB_00102443:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}return iVar8;}/* EditorImportBlendRunner::do_import(Dictionary const&) */void EditorImportBlendRunner::do_import(Dictionary *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   int iVar4;
   StringName *pSVar5;
   long in_FS_OFFSET;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( param_1 + 0x410 ) != 0) {
      iVar4 = do_import_rpc(param_1);
      if (iVar4 == 0) {
         LAB_00103083:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }
         goto LAB_001031c8;
      }
      if (iVar4 == 0x1b) {
         local_60 = 0;
         local_50 = 0xe0;
         local_58 = "Failed to connect to Blender via RPC, switching to direct imports of .blend files. Check your proxy and firewall settings, then RPC can be re-enabled by changing the editor setting `filesystem/import/blender/rpc_port` to %d.";
         String::parse_latin1((StrRange*)&local_60);
         vformat<int>((String*)&local_58, (int)(StrRange*)&local_60);
         print_error((String*)&local_58);
         pcVar3 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar3 + -0x10, false);
            }
         }
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
         pSVar5 = (StringName*)EditorSettings::get_singleton();
         Variant::Variant((Variant*)local_48, 0);
         StringName::StringName((StringName*)&local_58, "filesystem/import/blender/rpc_port", false);
         EditorSettings::_set_only(pSVar5, (Variant*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)( param_1 + 0x410 ) = 0;
      } else if (iVar4 == 0x15) goto LAB_00103083;
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      do_import_direct(param_1);
      return;
   }
   LAB_001031c8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* Object::_validate_property(PropertyInfo&) const */void Object::_validate_property(PropertyInfo *param_1) {
   return;
}/* Object::_notification(int) */void Object::_notification(int param_1) {
   return;
}/* Object::get_save_class() const */void Object::get_save_class(void) {
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
}/* EditorImportBlendRunner::is_class_ptr(void*) const */uint EditorImportBlendRunner::is_class_ptr(EditorImportBlendRunner *this, void *param_1) {
   return (uint)CONCAT71(0x1080, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1080, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* EditorImportBlendRunner::_getv(StringName const&, Variant&) const */undefined8 EditorImportBlendRunner::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* EditorImportBlendRunner::_setv(StringName const&, Variant const&) */undefined8 EditorImportBlendRunner::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* EditorImportBlendRunner::_property_can_revertv(StringName const&) const */undefined8 EditorImportBlendRunner::_property_can_revertv(StringName *param_1) {
   return 0;
}/* EditorImportBlendRunner::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorImportBlendRunner::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* CallableCustomMethodPointer<EditorImportBlendRunner, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&> *this) {
   return;
}/* CallableCustomMethodPointer<EditorImportBlendRunner, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorImportBlendRunner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorImportBlendRunner,void> *this) {
   return;
}/* CallableCustomMethodPointer<EditorImportBlendRunner, void, Vector<String>
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&>::get_argument_count(CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}/* CallableCustomMethodPointer<EditorImportBlendRunner, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorImportBlendRunner,void>::get_argument_count(CallableCustomMethodPointer<EditorImportBlendRunner,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}/* CallableCustomMethodPointer<EditorImportBlendRunner, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorImportBlendRunner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorImportBlendRunner,void> *this) {
   operator_delete(this, 0x48);
   return;
}/* CallableCustomMethodPointer<EditorImportBlendRunner, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&> *this) {
   operator_delete(this, 0x48);
   return;
}/* EditorImportBlendRunner::~EditorImportBlendRunner() */void EditorImportBlendRunner::~EditorImportBlendRunner(EditorImportBlendRunner *this) {
   *(undefined***)this = &PTR__initialize_classv_00107738;
   Node::~Node((Node*)this);
   return;
}/* EditorImportBlendRunner::~EditorImportBlendRunner() */void EditorImportBlendRunner::~EditorImportBlendRunner(EditorImportBlendRunner *this) {
   *(undefined***)this = &PTR__initialize_classv_00107738;
   Node::~Node((Node*)this);
   operator_delete(this, 0x420);
   return;
}/* EditorImportBlendRunner::_validate_propertyv(PropertyInfo&) const */void EditorImportBlendRunner::_validate_propertyv(PropertyInfo *param_1) {
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
      Node::_validate_property(param_1);
      return;
   }
   return;
}/* CallableCustomMethodPointer<EditorImportBlendRunner, void, Vector<String> const&>::get_object()
   const */undefined8 CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&>::get_object(CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&> *this) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001034dd;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001034dd;
      }
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }
   uVar2 = 0;
   LAB_001034dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}/* CallableCustomMethodPointer<EditorImportBlendRunner, void>::get_object() const */undefined8 CallableCustomMethodPointer<EditorImportBlendRunner,void>::get_object(CallableCustomMethodPointer<EditorImportBlendRunner,void> *this) {
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
      };
      puVar4 = (ulong*)( (ulong)uVar3 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar4 & 0x7fffffffff )) {
         uVar2 = 0;
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001035dd;
      }
      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_001035dd;
      }
   } else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }
   uVar2 = 0;
   LAB_001035dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return uVar2;
}/* EditorImportBlendRunner::_get_class_namev() const */undefined8 *EditorImportBlendRunner::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001036a3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001036a3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorImportBlendRunner");
         goto LAB_0010370e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorImportBlendRunner");
   LAB_0010370e:return &_get_class_namev();
}/* EditorImportBlendRunner::_notificationv(int, bool) */void EditorImportBlendRunner::_notificationv(EditorImportBlendRunner *this, int param_1, bool param_2) {
   if (param_2) {
      if (param_1 == 1) {
         _kill_blender(this);
         if ((code*)PTR__notification_0010a008 != Object::_notification) goto LAB_00103778;
      } else if ((code*)PTR__notification_0010a008 != Object::_notification) {
         LAB_00103778:Node::_notification((int)this);
         return;
      }
   } else {
      if ((code*)PTR__notification_0010a008 != Object::_notification) {
         Node::_notification((int)this);
      }
      if (param_1 == 1) {
         _kill_blender(this);
         return;
      }
   }
   return;
}/* CallableCustomMethodPointerBase::get_as_text() const */void CallableCustomMethodPointerBase::get_as_text(void) {
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
}/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
   long *plVar1;
   size_t __n;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   ulong uVar5;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }
   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   __n = *(size_t*)( *(long*)this + -8 );
   uVar5 = 0x10;
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
      puVar4[1] = __n;
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
}/* EditorImportBlendRunner::get_class() const */void EditorImportBlendRunner::get_class(void) {
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
   } else {
      lVar2 = *(long*)( *(long*)( in_RSI + 8 ) + 0x20 );
      if (lVar2 == 0) {
         *(undefined8*)in_RDI = 0;
      } else {
         __s = *(char**)( lVar2 + 8 );
         *(undefined8*)in_RDI = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar2 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
            }
         } else {
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
}/* EditorImportBlendRunner::is_class(String const&) const */undefined8 EditorImportBlendRunner::is_class(EditorImportBlendRunner *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   long lVar4;
   long lVar5;
   char cVar6;
   undefined8 uVar7;
   long lVar8;
   long in_FS_OFFSET;
   bool bVar9;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
      lVar4 = *(long*)( lVar2 + 0x20 );
      if (lVar4 == 0) {
         local_60 = 0;
      } else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00103aef;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00103aef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00103ba3;
   }
   cVar6 = String::operator ==(param_1, "EditorImportBlendRunner");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00103c7b;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_00103c7b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00103ba3;
      }
      cVar6 = String::operator ==(param_1, "Node");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            } else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_00103d5b;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar9 = lVar5 == lVar8;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar8 = lVar5;
                        }
                        UNLOCK();
                     } while ( !bVar9 );
                     if (lVar8 != -1) {
                        local_60 = *(long*)( lVar4 + 0x10 );
                     }
                  }
               } else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }
            }
            LAB_00103d5b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
            if (cVar6 != '\0') goto LAB_00103ba3;
         }
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }
         goto LAB_00103e04;
      }
   }
   LAB_00103ba3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_00103e04:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* EditorImportBlendRunner::_initialize_classv() */void EditorImportBlendRunner::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_00103f64;
   if (Node::initialize_class() == '\0') {
      Object::initialize_class();
      local_58 = 0;
      local_40 = 6;
      local_48 = "Object";
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "Node";
      local_60 = 0;
      local_40 = 4;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
         StringName::unref();
      }
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
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }
      lVar2 = local_58;
      if (local_58 == 0) {
         LAB_0010406e:if ((code*)PTR__bind_methods_0010a010 != Object::_bind_methods) {
            LAB_0010407e:Node::_bind_methods();
         }
      } else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010406e;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_0010a010 != Object::_bind_methods) goto LAB_0010407e;
      }
      Node::initialize_class()
      local_40 = 4;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "EditorImportBlendRunner";
      local_60 = 0;
      local_40 = 0x17;
      String::parse_latin1((StrRange*)&local_60);
      StringName::StringName((StringName*)&local_48, (String*)&local_60, false);
      ClassDB::_add_class2((StringName*)&local_48, (StringName*)&local_50);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
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
      if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
         StringName::unref();
      }
      lVar2 = local_58;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* CallableCustomMethodPointer<EditorImportBlendRunner, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */
   void CallableCustomMethodPointer<EditorImportBlendRunner,void>::call(CallableCustomMethodPointer<EditorImportBlendRunner,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
      long *plVar1;
      long lVar2;
      long lVar3;
      char *pcVar4;
      uint uVar5;
      ulong *puVar6;
      code *UNRECOVERED_JUMPTABLE;
      ulong uVar7;
      long in_FS_OFFSET;
      bool bVar8;
      long local_60;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40;
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
      if (uVar5 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar7 = (ulong)local_48 >> 8;
            local_48 = (char*)( uVar7 << 8 );
            LOCK();
            bVar8 = (char)ObjectDB::spin_lock == '\0';
            if (bVar8) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar8) break;
            local_48 = (char*)( uVar7 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         };
         puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
         uVar7 = *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff;
         if (uVar7 != ( *puVar6 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            goto LAB_001042df;
         }
         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar6[1] == 0) goto LAB_001042df;
         lVar2 = *(long*)( this + 0x28 );
         UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
         lVar3 = *(long*)( this + 0x40 );
         if (param_2 == 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar2 + lVar3 ) + -1 );
            }
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x001042b8. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar2 + lVar3 ), uVar7, UNRECOVERED_JUMPTABLE);
               return;
            }
            goto LAB_00104445;
         }
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 0;
      } else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         LAB_001042df:local_50 = 0;
         local_48 = "\', can\'t call method.";
         local_40 = 0x15;
         String::parse_latin1((StrRange*)&local_50);
         uitos(( ulong ) & local_60);
         operator+((char *)&
         local_58,(String*)"Invalid Object id \'";
         String::operator +((String*)&local_48, (String*)&local_58);
         _err_print_error(&_LC14, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
         pcVar4 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }
         }
         lVar2 = local_58;
         if (local_58 != 0) {
            LOCK();
            plVar1 = (long*)( local_58 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_58 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }
         }
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
      }
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      LAB_00104445:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }
   /* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void Node::_get_property_listv(List *param_1, bool param_2) {
      long *plVar1;
      long lVar2;
      long lVar3;
      undefined1(*pauVar4)[16];
      undefined4 *puVar5;
      undefined7 in_register_00000031;
      List *pLVar6;
      long in_FS_OFFSET;
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
      pLVar6 = (List*)CONCAT71(in_register_00000031, param_2);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_88 = 0;
      local_90 = 0;
      local_78 = &_LC8;
      local_70 = 4;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = &_LC8;
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
         LAB_001045b8:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_001045b8;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar6;
            local_68 = local_80;
            goto joined_r0x001045d6;
         }
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }
      }
      lVar2 = *(long*)pLVar6;
      joined_r0x001045d6:if (lVar2 == 0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])pLVar6 = pauVar4;
         *(undefined4*)pauVar4[1] = 0;
         *pauVar4 = (undefined1[16])0x0;
      }
      puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      *puVar5 = 0;
      puVar5[6] = 0;
      puVar5[10] = 6;
      *(undefined8*)( puVar5 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
      *puVar5 = local_78._0_4_;
      if (local_70 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
      }
      StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
      puVar5[6] = local_60;
      if (*(long*)( puVar5 + 8 ) != local_58) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
      }
      lVar3 = local_58;
      puVar5[10] = local_50;
      plVar1 = *(long**)pLVar6;
      lVar2 = plVar1[1];
      *(undefined8*)( puVar5 + 0xc ) = 0;
      *(long**)( puVar5 + 0x10 ) = plVar1;
      *(long*)( puVar5 + 0xe ) = lVar2;
      if (lVar2 != 0) {
         *(undefined4**)( lVar2 + 0x30 ) = puVar5;
      }
      plVar1[1] = (long)puVar5;
      if (*plVar1 == 0) {
         *plVar1 = (long)puVar5;
      }
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }
      StringName::StringName((StringName*)&local_78, "Node", false);
      ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
      if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
         StringName::unref();
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* EditorImportBlendRunner::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */
   void EditorImportBlendRunner::_get_property_listv(EditorImportBlendRunner *this, List *param_1, bool param_2) {
      long *plVar1;
      long lVar2;
      long lVar3;
      undefined1(*pauVar4)[16];
      undefined4 *puVar5;
      long in_FS_OFFSET;
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
         Node::_get_property_listv((List*)this, SUB81(param_1, 0));
      }
      local_88 = 0;
      local_90 = 0;
      local_78 = "EditorImportBlendRunner";
      local_70 = 0x17;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "EditorImportBlendRunner";
      local_98 = 0;
      local_70 = 0x17;
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
         LAB_001049b8:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_001049b8;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x001049d5;
         }
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }
      }
      lVar2 = *(long*)param_1;
      joined_r0x001049d5:if (lVar2 == 0) {
         pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar4;
         *(undefined4*)pauVar4[1] = 0;
         *pauVar4 = (undefined1[16])0x0;
      }
      puVar5 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar5 + 8 ) = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      *puVar5 = 0;
      puVar5[6] = 0;
      puVar5[10] = 6;
      *(undefined8*)( puVar5 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar5 + 0xc ) = (undefined1[16])0x0;
      *puVar5 = local_78._0_4_;
      if (local_70 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_70);
      }
      StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_68);
      puVar5[6] = local_60;
      if (*(long*)( puVar5 + 8 ) != local_58) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_58);
      }
      lVar3 = local_58;
      puVar5[10] = local_50;
      plVar1 = *(long**)param_1;
      lVar2 = plVar1[1];
      *(undefined8*)( puVar5 + 0xc ) = 0;
      *(long**)( puVar5 + 0x10 ) = plVar1;
      *(long*)( puVar5 + 0xe ) = lVar2;
      if (lVar2 != 0) {
         *(undefined4**)( lVar2 + 0x30 ) = puVar5;
      }
      plVar1[1] = (long)puVar5;
      if (*plVar1 == 0) {
         *plVar1 = (long)puVar5;
      }
      *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }
      lVar2 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_98;
      if (local_98 != 0) {
         LOCK();
         plVar1 = (long*)( local_98 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_98 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      lVar2 = local_90;
      if (local_90 != 0) {
         LOCK();
         plVar1 = (long*)( local_90 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_90 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
      if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
         StringName::unref();
      }
      StringName::StringName((StringName*)&local_78, "EditorImportBlendRunner", false);
      ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }
      if (param_2) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Node::_get_property_listv((List*)this, SUB81(param_1, 0));
            return;
         }
      } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   /* List<String, DefaultAllocator>::~List() */
   void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
      long *plVar1;
      long *plVar2;
      long lVar3;
      long lVar4;
      long *plVar5;
      plVar5 = *(long**)this;
      if (plVar5 == (long*)0x0) {
         return;
      }
      do {
         plVar2 = (long*)*plVar5;
         if (plVar2 == (long*)0x0) {
            if ((int)plVar5[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               return;
            }
            break;
         }
         if ((long*)plVar2[3] == plVar5) {
            lVar4 = plVar2[1];
            lVar3 = plVar2[2];
            *plVar5 = lVar4;
            if (plVar2 == (long*)plVar5[1]) {
               plVar5[1] = lVar3;
            }
            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar4;
               lVar4 = plVar2[1];
            }
            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar3;
            }
            if (*plVar2 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar2 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar4 = *plVar2;
                  *plVar2 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }
            }
            Memory::free_static(plVar2, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         } else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }
         plVar5 = *(long**)this;
      } while ( (int)plVar5[2] != 0 );
      Memory::free_static(plVar5, false);
      return;
   }
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00105628) */
   }
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
      Array::~Array(local_c8);
      if (Variant::needs_deinit[(int)local_60] == '\0') {
         cVar1 = Variant::needs_deinit[local_78[0]];
      } else {
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
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00105aa0) */
   }
   undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      int iVar3;
      long in_FS_OFFSET;
      Array local_d8[8];
      undefined8 local_d0[9];
      Variant local_88[24];
      Variant local_70[24];
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40[2];
      local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant(local_88, param_3);
      Variant::Variant(local_70, param_4);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      Array::Array(local_d8);
      iVar3 = (int)local_d8;
      Array::resize(iVar3);
      pVVar2 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar2, local_88);
      pVVar2 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar2, local_70);
      String::sprintf((Array*)local_d0, param_2);
      *param_1 = local_d0[0];
      pVVar2 = (Variant*)local_40;
      Array::~Array(local_d8);
      do {
         pVVar1 = pVVar2 + -0x18;
         pVVar2 = pVVar2 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }
      } while ( pVVar2 != local_88 );
      if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00105e88) */
   }
   String *vformat<int>(String *param_1, int param_2) {
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
      Array::~Array(local_c8);
      if (Variant::needs_deinit[(int)local_60] == '\0') {
         cVar1 = Variant::needs_deinit[local_78[0]];
      } else {
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
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x001062c8) */
   }
   undefined8 *vformat<HTTPClient::Status>(undefined8 *param_1, bool *param_2, int param_3) {
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
      Array::~Array(local_c8);
      if (Variant::needs_deinit[(int)local_60] == '\0') {
         cVar1 = Variant::needs_deinit[local_78[0]];
      } else {
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
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00106708) */
   }
   undefined8 *vformat<Error>(undefined8 *param_1, bool *param_2, int param_3) {
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
      Array::~Array(local_c8);
      if (Variant::needs_deinit[(int)local_60] == '\0') {
         cVar1 = Variant::needs_deinit[local_78[0]];
      } else {
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
   for (int i = 0; i < 25; i++) {
      /* WARNING: Removing unreachable block (ram,0x00106b80) */
   }
   undefined8 *vformat<int,String>(undefined8 *param_1, bool *param_2, int param_3, String *param_4) {
      Variant *pVVar1;
      Variant *pVVar2;
      int iVar3;
      long in_FS_OFFSET;
      Array local_d8[8];
      undefined8 local_d0[9];
      Variant local_88[24];
      Variant local_70[24];
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40[2];
      local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
      Variant::Variant(local_88, param_3);
      Variant::Variant(local_70, param_4);
      local_58 = 0;
      local_50 = (undefined1[16])0x0;
      Array::Array(local_d8);
      iVar3 = (int)local_d8;
      Array::resize(iVar3);
      pVVar2 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar2, local_88);
      pVVar2 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar2, local_70);
      String::sprintf((Array*)local_d0, param_2);
      *param_1 = local_d0[0];
      pVVar2 = (Variant*)local_40;
      Array::~Array(local_d8);
      do {
         pVVar1 = pVVar2 + -0x18;
         pVVar2 = pVVar2 + -0x18;
         if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
            Variant::_clear_internal();
         }
      } while ( pVVar2 != local_88 );
      if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return param_1;
   }
   /* CowData<String>::_unref() */
   void CowData<String>::_unref(CowData<String> *this) {
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
               } while ( lVar3 != lVar7 );
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
   /* CallableCustomMethodPointer<EditorImportBlendRunner, void, Vector<String> const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */
   void CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&>::call(CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
      long *plVar1;
      long lVar2;
      long lVar3;
      ulong uVar4;
      undefined8 uVar5;
      char *pcVar6;
      char cVar7;
      uint uVar8;
      ulong *puVar9;
      code *pcVar10;
      long in_FS_OFFSET;
      bool bVar11;
      long local_60;
      long local_58;
      long local_50;
      char *local_48;
      undefined8 local_40[2];
      long local_30;
      local_30 = *(long*)( in_FS_OFFSET + 0x28 );
      uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
      if (uVar8 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar4 = (ulong)local_48 >> 8;
            local_48 = (char*)( uVar4 << 8 );
            LOCK();
            bVar11 = (char)ObjectDB::spin_lock == '\0';
            if (bVar11) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }
            UNLOCK();
            if (bVar11) break;
            local_48 = (char*)( uVar4 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         };
         puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
         if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) == ( *puVar9 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            if (puVar9[1] != 0) {
               lVar2 = *(long*)( this + 0x28 );
               pcVar10 = *(code**)( this + 0x38 );
               lVar3 = *(long*)( this + 0x40 );
               if ((uint)param_2 < 2) {
                  if (param_2 == 0) {
                     *(undefined4*)param_4 = 4;
                     *(undefined4*)( param_4 + 8 ) = 1;
                  } else {
                     *(undefined4*)param_4 = 0;
                     if (( (ulong)pcVar10 & 1 ) != 0) {
                        pcVar10 = *(code**)( pcVar10 + *(long*)( lVar2 + lVar3 ) + -1 );
                     }
                     cVar7 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x22);
                     uVar5 = _LC56;
                     if (cVar7 == '\0') {
                        *(undefined4*)param_4 = 2;
                        *(undefined8*)( param_4 + 4 ) = uVar5;
                     }
                     Variant::operator_cast_to_Vector((Variant*)&local_48);
                     ( *pcVar10 )((long*)( lVar2 + lVar3 ), (Variant*)&local_48);
                     CowData<String>::_unref((CowData<String>*)local_40);
                  }
               } else {
                  *(undefined4*)param_4 = 3;
                  *(undefined4*)( param_4 + 8 ) = 1;
               }
               goto LAB_00106fce;
            }
         } else {
            ObjectDB::spin_lock._0_1_ = '\0';
         }
      } else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }
      local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40[0] = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos(( ulong ) & local_60);
      operator+((char *)&
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)&local_58);
      _err_print_error(&_LC14, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0);
      pcVar6 = local_48;
      if (local_48 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( local_48 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = (char*)0x0;
            Memory::free_static(pcVar6 + -0x10, false);
         }
      }
      lVar2 = local_58;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }
      }
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
      LAB_00106fce:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }
      return;
   }
   /* CowData<unsigned char>::_realloc(long) */
   undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* Vector<unsigned char>::append_array(Vector<unsigned char>) */
   void Vector<unsigned_char>::append_array(Vector<unsigned_char> *this, long param_2) {
      long *plVar1;
      undefined1 uVar2;
      long lVar3;
      code *pcVar4;
      int iVar5;
      undefined8 *puVar6;
      long lVar7;
      ulong uVar8;
      long lVar9;
      undefined8 *puVar10;
      long lVar11;
      long lVar12;
      CowData<unsigned_char> *local_50;
      if (*(long*)( param_2 + 8 ) == 0) {
         return;
      }
      lVar3 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
      if (lVar3 == 0) {
         return;
      }
      lVar9 = *(long*)( this + 8 );
      if (lVar9 == 0) {
         if (-1 < lVar3) {
            lVar12 = 0;
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 8 ));
            lVar9 = 0;
            lVar7 = lVar3;
            goto LAB_001073ba;
         }
         lVar12 = 0;
      } else {
         lVar12 = *(long*)( lVar9 + -8 );
         lVar7 = lVar3 + lVar12;
         if (-1 < lVar7) {
            if (lVar7 == 0) {
               LOCK();
               plVar1 = (long*)( lVar9 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar9 = *(long*)( this + 8 );
                  *(undefined8*)( this + 8 ) = 0;
                  Memory::free_static((void*)( lVar9 + -0x10 ), false);
               } else {
                  *(undefined8*)( this + 8 ) = 0;
               }
               goto LAB_001074d0;
            }
            CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 8 ));
            lVar9 = lVar12;
            if (lVar12 != 0) {
               uVar8 = lVar12 - 1U | lVar12 - 1U >> 1;
               uVar8 = uVar8 | uVar8 >> 2;
               uVar8 = uVar8 | uVar8 >> 4;
               uVar8 = uVar8 | uVar8 >> 8;
               uVar8 = uVar8 | uVar8 >> 0x10;
               lVar9 = ( uVar8 | uVar8 >> 0x20 ) + 1;
            }
            LAB_001073ba:local_50 = (CowData<unsigned_char>*)( this + 8 );
            uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
            uVar8 = uVar8 | uVar8 >> 2;
            uVar8 = uVar8 | uVar8 >> 4;
            uVar8 = uVar8 | uVar8 >> 8;
            uVar8 = uVar8 | uVar8 >> 0x10;
            uVar8 = uVar8 | uVar8 >> 0x20;
            lVar11 = uVar8 + 1;
            if (lVar7 <= lVar12) {
               if (( lVar11 == lVar9 ) || ( iVar5 = CowData<unsigned_char>::_realloc(local_50, lVar11) ),iVar5 == 0) {
                  if (*(long*)( this + 8 ) == 0) {
                     _DAT_00000000 = 0;
                     /* WARNING: Does not return */
                     pcVar4 = (code*)invalidInstructionException();
                     ( *pcVar4 )();
                  }
                  *(long*)( *(long*)( this + 8 ) + -8 ) = lVar7;
               }
               goto LAB_001074d0;
            }
            if (lVar11 == lVar9) {
               LAB_0010758a:puVar10 = *(undefined8**)( this + 8 );
               if (puVar10 == (undefined8*)0x0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }
            } else {
               if (lVar12 != 0) {
                  iVar5 = CowData<unsigned_char>::_realloc(local_50, lVar11);
                  if (iVar5 != 0) goto LAB_001074d0;
                  goto LAB_0010758a;
               }
               puVar6 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
               if (puVar6 == (undefined8*)0x0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                  goto LAB_001074d0;
               }
               puVar10 = puVar6 + 2;
               *puVar6 = 1;
               puVar6[1] = 0;
               *(undefined8**)( this + 8 ) = puVar10;
            }
            puVar10[-1] = lVar7;
            goto LAB_001074d0;
         }
      }
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      LAB_001074d0:local_50 = (CowData<unsigned_char>*)( this + 8 );
      lVar9 = 0;
      if (0 < lVar3) {
         do {
            lVar7 = *(long*)( param_2 + 8 );
            if (lVar7 == 0) {
               lVar11 = 0;
               LAB_0010751c:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar11, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }
            lVar11 = *(long*)( lVar7 + -8 );
            if (lVar11 <= lVar9) goto LAB_0010751c;
            uVar2 = *(undefined1*)( lVar7 + lVar9 );
            CowData<unsigned_char>::_copy_on_write(local_50);
            *(undefined1*)( *(long*)( this + 8 ) + lVar12 + lVar9 ) = uVar2;
            lVar9 = lVar9 + 1;
         } while ( lVar9 != lVar3 );
      }
      return;
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* List<String, DefaultAllocator>::~List() */
   void List<String,DefaultAllocator>::~List(List<String,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* EditorImportBlendRunner::~EditorImportBlendRunner() */
   void EditorImportBlendRunner::~EditorImportBlendRunner(EditorImportBlendRunner *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<EditorImportBlendRunner, void>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<EditorImportBlendRunner,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorImportBlendRunner,void> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* CallableCustomMethodPointer<EditorImportBlendRunner, void, Vector<String>
   const&>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorImportBlendRunner,void,Vector<String>const&> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
   /* WARNING: Control flow encountered bad instruction data */
   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }
}

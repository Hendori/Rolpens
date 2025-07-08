/* CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write() [clone .isra.0]
    */void CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write(CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame> *this) {
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
/* MultiplayerDebugger::ReplicationProfiler::toggle(bool, Array const&) */void MultiplayerDebugger::ReplicationProfiler::toggle(bool param_1, Array *param_2) {
   uint uVar1;
   int *piVar2;
   long lVar3;
   undefined7 in_register_00000039;
   long lVar4;
   lVar4 = CONCAT71(in_register_00000039, param_1);
   if (*(long*)( lVar4 + 0x1d8 ) != 0) {
      if (*(int*)( lVar4 + 0x1fc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar4 + 0x1f8 ) * 4 );
         if (uVar1 != 0) {
            lVar3 = 0;
            do {
               piVar2 = (int*)( *(long*)( lVar4 + 0x1e0 ) + lVar3 );
               if (*piVar2 != 0) {
                  *piVar2 = 0;
                  Memory::free_static(*(void**)( *(long*)( lVar4 + 0x1d8 ) + lVar3 * 2 ), false);
                  *(undefined8*)( *(long*)( lVar4 + 0x1d8 ) + lVar3 * 2 ) = 0;
               }

               lVar3 = lVar3 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar3 );
         }

         *(undefined4*)( lVar4 + 0x1fc ) = 0;
         *(undefined1(*) [16])( lVar4 + 0x1e8 ) = (undefined1[16])0x0;
      }

      return;
   }

   return;
}
/* MultiplayerDebugger::RPCProfiler::toggle(bool, Array const&) */void MultiplayerDebugger::RPCProfiler::toggle(bool param_1, Array *param_2) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   int *piVar5;
   long lVar6;
   undefined7 in_register_00000039;
   long lVar7;
   lVar7 = CONCAT71(in_register_00000039, param_1);
   if (*(long*)( lVar7 + 0x1d8 ) != 0) {
      if (*(int*)( lVar7 + 0x1fc ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar7 + 0x1f8 ) * 4 );
         if (uVar2 != 0) {
            lVar6 = 0;
            do {
               piVar5 = (int*)( *(long*)( lVar7 + 0x1e0 ) + lVar6 );
               if (*piVar5 != 0) {
                  *piVar5 = 0;
                  pvVar3 = *(void**)( *(long*)( lVar7 + 0x1d8 ) + lVar6 * 2 );
                  if (*(long*)( (long)pvVar3 + 0x20 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x20 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar4 = *(long*)( (long)pvVar3 + 0x20 );
                        *(undefined8*)( (long)pvVar3 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( lVar7 + 0x1d8 ) + lVar6 * 2 ) = 0;
               }

               lVar6 = lVar6 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar6 );
         }

         *(undefined4*)( lVar7 + 0x1fc ) = 0;
         *(undefined1(*) [16])( lVar7 + 0x1e8 ) = (undefined1[16])0x0;
      }

      return;
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
/* MultiplayerDebugger::BandwidthProfiler::add(Array const&) */void MultiplayerDebugger::BandwidthProfiler::add(BandwidthProfiler *this, Array *param_1) {
   long *plVar1;
   code *pcVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   Variant *pVVar6;
   long lVar7;
   CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame> *pCVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = Array::size();
   if (iVar4 < 3) {
      if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error(&_LC12, "modules/multiplayer/multiplayer_debugger.cpp", 0x83, "Condition \"p_data.size() < 3\" is true.", 0, 0);
         return;
      }

      goto LAB_00100629;
   }

   iVar5 = (int)param_1;
   Array::operator [](iVar5);
   Variant::operator_cast_to_String((Variant*)&local_38);
   pVVar6 = (Variant*)Array::operator [](iVar5);
   iVar4 = Variant::operator_cast_to_int(pVVar6);
   pVVar6 = (Variant*)Array::operator [](iVar5);
   iVar5 = Variant::operator_cast_to_int(pVVar6);
   cVar3 = String::operator ==((String*)&local_38, "in");
   if (cVar3 == '\0') {
      cVar3 = String::operator ==((String*)&local_38, "out");
      if (cVar3 == '\0') {
         LAB_00100476:lVar7 = local_38;
         if (local_38 != 0) {
            LOCK();
            plVar1 = (long*)( local_38 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         LAB_00100629:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      lVar10 = (long)*(int*)( this + 0x1e8 );
      lVar7 = *(long*)( this + 0x1f8 );
      if (-1 < lVar10) {
         if (lVar7 != 0) {
            lVar9 = *(long*)( lVar7 + -8 );
            if (lVar9 <= lVar10) goto LAB_00100581;
            pCVar8 = (CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( this + 0x1f8 );
            CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write(pCVar8);
            lVar7 = *(long*)( this + 0x1f8 );
            *(int*)( lVar7 + lVar10 * 8 ) = iVar4;
            lVar10 = (long)*(int*)( this + 0x1e8 );
            if (lVar10 < 0) goto LAB_00100618;
            if (lVar7 != 0) {
               lVar9 = *(long*)( lVar7 + -8 );
               if (lVar9 <= lVar10) goto LAB_00100581;
               CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write(pCVar8);
               lVar7 = *(long*)( this + 0x1f8 );
               *(int*)( lVar7 + 4 + lVar10 * 8 ) = iVar5;
               if (lVar7 == 0) {
                  add((Array*)pCVar8);
                  return;
               }

               *(int*)( this + 0x1e8 ) = (int)( (long)( *(int*)( this + 0x1e8 ) + 1 ) % *(long*)( lVar7 + -8 ) );
               goto LAB_00100476;
            }

         }

         goto LAB_001005c8;
      }

      LAB_00100578:if (lVar7 != 0) {
         LAB_0010057d:lVar9 = *(long*)( lVar7 + -8 );
         goto LAB_00100581;
      }

   }
 else {
      lVar10 = (long)*(int*)( this + 0x1d0 );
      lVar7 = *(long*)( this + 0x1e0 );
      if (lVar10 < 0) goto LAB_00100578;
      if (lVar7 != 0) {
         lVar9 = *(long*)( lVar7 + -8 );
         if (lVar9 <= lVar10) goto LAB_00100581;
         pCVar8 = (CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( this + 0x1e0 );
         CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write(pCVar8);
         lVar7 = *(long*)( this + 0x1e0 );
         *(int*)( lVar7 + lVar10 * 8 ) = iVar4;
         lVar10 = (long)*(int*)( this + 0x1d0 );
         if (-1 < lVar10) {
            if (lVar7 != 0) {
               lVar9 = *(long*)( lVar7 + -8 );
               if (lVar9 <= lVar10) goto LAB_00100581;
               CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write(pCVar8);
               lVar7 = *(long*)( this + 0x1e0 );
               *(int*)( lVar7 + 4 + lVar10 * 8 ) = iVar5;
               if (lVar7 == 0) {
                  add((Array*)pCVar8);
                  return;
               }

               *(int*)( this + 0x1d0 ) = (int)( (long)( *(int*)( this + 0x1d0 ) + 1 ) % *(long*)( lVar7 + -8 ) );
               goto LAB_00100476;
            }

            goto LAB_001005c8;
         }

         LAB_00100618:lVar9 = 0;
         if (lVar7 == 0) goto LAB_00100581;
         goto LAB_0010057d;
      }

   }

   LAB_001005c8:lVar9 = 0;
   LAB_00100581:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar10, lVar9, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* MultiplayerDebugger::_capture(void*, String const&, Array const&, bool&) */undefined8 MultiplayerDebugger::_capture(void *param_1, String *param_2, Array *param_3, bool *param_4) {
   long *plVar1;
   code *pcVar2;
   ulong uVar3;
   char *pcVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   Variant *this;
   undefined8 uVar8;
   uint uVar9;
   ulong *puVar10;
   int iVar11;
   long in_FS_OFFSET;
   bool bVar12;
   Array local_80[8];
   ulong local_78;
   long local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar5 = String::operator ==(param_2, "cache");
   if (cVar5 == '\0') {
      uVar8 = 1;
      _err_print_error("_capture", "modules/multiplayer/multiplayer_debugger.cpp", 0x56, "Method/function failed. Returning: FAILED", 0, 0);
   }
 else {
      Array::Array(local_80);
      for (iVar11 = 0; iVar6 = Array::size(),plVar1 = EngineDebugger::singleton,iVar11 < iVar6; iVar11 = iVar11 + 1) {
         this(Variant * Array::operator []((int)param_3));
         local_78 = Variant::operator_cast_to_ObjectID(this);
         uVar9 = (uint)local_78 & 0xffffff;
         if (uVar9 < (uint)ObjectDB::slot_max) {
            while (true) {
               uVar3 = (ulong)local_68 >> 8;
               local_68 = (char*)( uVar3 << 8 );
               LOCK();
               bVar12 = (char)ObjectDB::spin_lock == '\0';
               if (bVar12) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar12) break;
               local_68 = (char*)( uVar3 << 8 );
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
            if (( local_78 >> 0x18 & 0x7fffffffff ) != ( *puVar10 & 0x7fffffffff )) {
               ObjectDB::spin_lock._0_1_ = '\0';
               goto LAB_001009c0;
            }

            plVar1 = (long*)puVar10[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (plVar1 == (long*)0x0) goto LAB_001009c0;
            lVar7 = __dynamic_cast(plVar1, &Object::typeinfo, &SceneReplicationConfig::typeinfo, 0);
            if (lVar7 == 0) {
               lVar7 = __dynamic_cast(plVar1, &Object::typeinfo, &Node::typeinfo, 0);
               if (lVar7 == 0) {
                  uVar8 = 1;
                  _err_print_error("_capture", "modules/multiplayer/multiplayer_debugger.cpp", 0x50, "Method/function failed. Returning: FAILED", 0, 0);
                  goto LAB_00100a9f;
               }

               Variant::Variant((Variant*)local_58, (ObjectID*)&local_78);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               ( **(code**)( *plVar1 + 0x48 ) )((NodePath*)&local_68, plVar1);
               Variant::Variant((Variant*)local_58, (String*)&local_68);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pcVar4 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }

               }

               Node::get_path();
               NodePath::operator_cast_to_String((NodePath*)&local_70);
               Variant::Variant((Variant*)local_58, (String*)&local_70);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               lVar7 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar7 + -0x10 ), false);
                  }

               }

               NodePath::~NodePath((NodePath*)&local_68);
            }
 else {
               Variant::Variant((Variant*)local_58, (ObjectID*)&local_78);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               ( **(code**)( *plVar1 + 0x48 ) )((NodePath*)&local_68, plVar1);
               Variant::Variant((Variant*)local_58, (String*)&local_68);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pcVar4 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }

               }

               Resource::get_path();
               Variant::Variant((Variant*)local_58, (String*)&local_68);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               pcVar4 = local_68;
               if (local_68 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_68 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_68 = (char*)0x0;
                     Memory::free_static(pcVar4 + -0x10, false);
                  }

               }

            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            LAB_001009c0:_err_print_error("_capture", "modules/multiplayer/multiplayer_debugger.cpp", 0x46, "Condition \"!obj\" is true. Continuing.", 0, 0);
         }

      }

      pcVar2 = *(code**)( *EngineDebugger::singleton + 8 );
      local_70 = 0;
      local_68 = "multiplayer:cache";
      local_60 = 0x11;
      String::parse_latin1((StrRange*)&local_70);
      ( *pcVar2 )(plVar1, (StrRange*)&local_70, local_80);
      lVar7 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      uVar8 = 0;
      LAB_00100a9f:Array::~Array(local_80);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar8;
}
/* MultiplayerDebugger::initialize() */void MultiplayerDebugger::initialize(void) {
   long *plVar1;
   undefined1(*pauVar2)[16];
   undefined8 uVar3;
   char cVar4;
   RefCounted *pRVar5;
   Object *pOVar6;
   undefined1(*pauVar7)[16];
   RefCounted *pRVar8;
   RefCounted *this;
   long lVar9;
   RefCounted *pRVar10;
   RefCounted *pRVar11;
   long in_FS_OFFSET;
   byte bVar12;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   bVar12 = 0;
   pRVar11 = (RefCounted*)0x0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pRVar5 = (RefCounted*)operator_new(0x208, "");
   pRVar10 = pRVar5;
   for (lVar9 = 0x41; lVar9 != 0; lVar9 = lVar9 + -1) {
      *(undefined8*)pRVar10 = 0;
      pRVar10 = pRVar10 + (ulong)bVar12 * -0x10 + 8;
   }

   RefCounted::RefCounted(pRVar5);
   *(undefined8*)( pRVar5 + 0x180 ) = 0;
   *(code**)pRVar5 = RefCounted::init_ref;
   StringName::StringName((StringName*)( pRVar5 + 0x188 ), "_toggle", false);
   pRVar5[400] = (RefCounted)0x0;
   *(undefined8*)( pRVar5 + 0x198 ) = 0;
   StringName::StringName((StringName*)( pRVar5 + 0x1a0 ), "_add_frame", false);
   pRVar5[0x1a8] = (RefCounted)0x0;
   *(undefined8*)( pRVar5 + 0x1b0 ) = 0;
   StringName::StringName((StringName*)( pRVar5 + 0x1b8 ), "_tick", false);
   pRVar5[0x1c0] = (RefCounted)0x0;
   *(undefined***)pRVar5 = &PTR__initialize_classv_00107838;
   *(undefined8*)( pRVar5 + 0x1c8 ) = 0;
   *(undefined4*)( pRVar5 + 0x1d0 ) = 0;
   *(undefined8*)( pRVar5 + 0x1e0 ) = 0;
   *(undefined4*)( pRVar5 + 0x1e8 ) = 0;
   *(undefined8*)( pRVar5 + 0x1f8 ) = 0;
   *(undefined8*)( pRVar5 + 0x200 ) = 0;
   postinitialize_handler((Object*)pRVar5);
   cVar4 = RefCounted::init_ref();
   if (cVar4 != '\0') {
      cVar4 = RefCounted::reference();
      if (cVar4 != '\0') {
         pRVar11 = pRVar5;
      }

      cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)pRVar5) ),cVar4 != '\0') {
         ( **(code**)( *(long*)pRVar5 + 0x140 ) )(pRVar5);
         Memory::free_static(pRVar5, false);
      }

   }

   local_60 = 0;
   local_50 = 0x15;
   local_58 = "multiplayer:bandwidth";
   String::parse_latin1((StrRange*)&local_60);
   EngineProfiler::bind((String*)pRVar11);
   lVar9 = local_60;
   if (local_60 == 0) {
      LAB_00100cec:if (pRVar11 == (RefCounted*)0x0) goto joined_r0x00100fe8;
      LAB_00100cf5:pOVar6 = (Object*)__dynamic_cast(pRVar11, &Object::typeinfo, &EngineProfiler::typeinfo, 0);
      if (( pOVar6 == (Object*)0x0 ) || ( cVar4 = RefCounted::reference() ),cVar4 == '\0') goto joined_r0x00100fe8;
      if (multiplayer_profilers == (undefined1(*) [16])0x0) goto LAB_00100ff0;
      pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
      *pauVar7 = (undefined1[16])0x0;
      pauVar7[1] = (undefined1[16])0x0;
      LAB_00100d5d:*(Object**)*pauVar7 = pOVar6;
      cVar4 = RefCounted::reference();
      if (cVar4 == '\0') {
         *(undefined8*)*pauVar7 = 0;
      }

   }
 else {
      LOCK();
      plVar1 = (long*)( local_60 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 != 0) goto LAB_00100cec;
      local_60 = 0;
      Memory::free_static((void*)( lVar9 + -0x10 ), false);
      if (pRVar11 != (RefCounted*)0x0) goto LAB_00100cf5;
      joined_r0x00100fe8:if (multiplayer_profilers == (undefined1(*) [16])0x0) {
         pOVar6 = (Object*)0x0;
         multiplayer_profilers = (undefined1(*) [16])0x0;
         LAB_00100ff0:multiplayer_profilers = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)multiplayer_profilers[1] = 0;
         *multiplayer_profilers = (undefined1[16])0x0;
         pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
         *pauVar7 = (undefined1[16])0x0;
         pauVar7[1] = (undefined1[16])0x0;
         if (pOVar6 != (Object*)0x0) goto LAB_00100d5d;
      }
 else {
         pOVar6 = (Object*)0x0;
         pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
         *pauVar7 = (undefined1[16])0x0;
         pauVar7[1] = (undefined1[16])0x0;
      }

   }

   pauVar2 = multiplayer_profilers;
   lVar9 = *(long*)( *multiplayer_profilers + 8 );
   *(undefined1(**) [16])( pauVar7[1] + 8 ) = multiplayer_profilers;
   *(undefined8*)( *pauVar7 + 8 ) = 0;
   *(long*)pauVar7[1] = lVar9;
   if (lVar9 != 0) {
      *(undefined1(**) [16])( lVar9 + 8 ) = pauVar7;
   }

   lVar9 = *(long*)*pauVar2;
   *(undefined1(**) [16])( *pauVar2 + 8 ) = pauVar7;
   if (lVar9 == 0) {
      *(undefined1(**) [16])*pauVar2 = pauVar7;
   }

   *(int*)pauVar2[1] = *(int*)pauVar2[1] + 1;
   if (( ( pOVar6 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
   Memory::free_static(pOVar6, false);
}
pRVar5 = (RefCounted*)0x0;pRVar8 = (RefCounted*)operator_new(0x208, "");pRVar10 = pRVar8;for (lVar9 = 0x41; lVar9 != 0; lVar9 = lVar9 + -1) {
   *(undefined8*)pRVar10 = 0;
   pRVar10 = pRVar10 + (ulong)bVar12 * -0x10 + 8;
}
RefCounted::RefCounted(pRVar8);*(undefined8*)( pRVar8 + 0x180 ) = 0;*(code**)pRVar8 = RefCounted::init_ref;StringName::StringName((StringName*)( pRVar8 + 0x188 ), "_toggle", false);pRVar8[400] = (RefCounted)0x0;*(undefined8*)( pRVar8 + 0x198 ) = 0;StringName::StringName((StringName*)( pRVar8 + 0x1a0 ), "_add_frame", false);pRVar8[0x1a8] = (RefCounted)0x0;*(undefined8*)( pRVar8 + 0x1b0 ) = 0;StringName::StringName((StringName*)( pRVar8 + 0x1b8 ), "_tick", false);*(undefined***)pRVar8 = &PTR__initialize_classv_001079b0;uVar3 = _LC35;pRVar8[0x1c0] = (RefCounted)0x0;*(undefined8*)( pRVar8 + 0x1f8 ) = uVar3;*(undefined8*)( pRVar8 + 0x1c8 ) = 0;*(undefined8*)( pRVar8 + 0x200 ) = 0;*(undefined1(*) [16])( pRVar8 + 0x1d8 ) = (undefined1[16])0x0;*(undefined1(*) [16])( pRVar8 + 0x1e8 ) = (undefined1[16])0x0;postinitialize_handler((Object*)pRVar8);cVar4 = RefCounted::init_ref();if (cVar4 != '\0') {
   cVar4 = RefCounted::reference();
   if (cVar4 != '\0') {
      pRVar5 = pRVar8;
   }

   cVar4 = RefCounted::unreference();
   if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)pRVar8) ),cVar4 != '\0') {
      ( **(code**)( *(long*)pRVar8 + 0x140 ) )(pRVar8);
      Memory::free_static(pRVar8, false);
   }

}
local_60 = 0;local_58 = "multiplayer:rpc";local_50 = 0xf;String::parse_latin1((StrRange*)&local_60);EngineProfiler::bind((String*)pRVar5);lVar9 = local_60;if (local_60 != 0) {
   LOCK();
   plVar1 = (long*)( local_60 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void*)( lVar9 + -0x10 ), false);
   }

}
if (( pRVar5 == (RefCounted*)0x0 ) || ( pOVar6 = (Object*)__dynamic_cast(pRVar5, &Object::typeinfo, &EngineProfiler::typeinfo, 0) ),pOVar6 == (Object*)0x0) {
   if (multiplayer_profilers == (undefined1(*) [16])0x0) goto LAB_00100f8a;
   LAB_001014ce:pOVar6 = (Object*)0x0;
   pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
   *pauVar7 = (undefined1[16])0x0;
   pauVar7[1] = (undefined1[16])0x0;
}
 else {
   cVar4 = RefCounted::reference();
   if (cVar4 == '\0') {
      if (multiplayer_profilers != (undefined1(*) [16])0x0) goto LAB_001014ce;
      LAB_00100f8a:pOVar6 = (Object*)0x0;
      LAB_00100f8c:multiplayer_profilers = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)multiplayer_profilers[1] = 0;
      *multiplayer_profilers = (undefined1[16])0x0;
      pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
      *pauVar7 = (undefined1[16])0x0;
      pauVar7[1] = (undefined1[16])0x0;
      if (pOVar6 == (Object*)0x0) goto LAB_001010fa;
   }
 else {
      if (multiplayer_profilers == (undefined1(*) [16])0x0) goto LAB_00100f8c;
      pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
      *pauVar7 = (undefined1[16])0x0;
      pauVar7[1] = (undefined1[16])0x0;
   }

   *(Object**)*pauVar7 = pOVar6;
   cVar4 = RefCounted::reference();
   if (cVar4 == '\0') {
      *(undefined8*)*pauVar7 = 0;
   }

}
LAB_001010fa:pauVar2 = multiplayer_profilers;lVar9 = *(long*)( *multiplayer_profilers + 8 );*(undefined8*)( *pauVar7 + 8 ) = 0;*(undefined1(**) [16])( pauVar7[1] + 8 ) = pauVar2;*(long*)pauVar7[1] = lVar9;if (lVar9 != 0) {
   *(undefined1(**) [16])( lVar9 + 8 ) = pauVar7;
}
lVar9 = *(long*)*pauVar2;*(undefined1(**) [16])( *pauVar2 + 8 ) = pauVar7;if (lVar9 == 0) {
   *(undefined1(**) [16])*pauVar2 = pauVar7;
}
*(int*)pauVar2[1] = *(int*)pauVar2[1] + 1;if (( ( pOVar6 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);Memory::free_static(pOVar6, false);}pRVar10 = (RefCounted*)0x0;this(RefCounted * operator_new(0x208, ""));pRVar8 = this;for (lVar9 = 0x41; lVar9 != 0; lVar9 = lVar9 + -1) {
   *(undefined8*)pRVar8 = 0;
   pRVar8 = pRVar8 + (ulong)bVar12 * -0x10 + 8;
}
RefCounted::RefCounted(this);*(undefined8*)( this + 0x180 ) = 0;*(code**)this = RefCounted::init_ref;StringName::StringName((StringName*)( this + 0x188 ), "_toggle", false);this[400] = (RefCounted)0x0;*(undefined8*)( this + 0x198 ) = 0;StringName::StringName((StringName*)( this + 0x1a0 ), "_add_frame", false);this[0x1a8] = (RefCounted)0x0;*(undefined8*)( this + 0x1b0 ) = 0;StringName::StringName((StringName*)( this + 0x1b8 ), "_tick", false);*(undefined***)this = &PTR__initialize_classv_00107b28;uVar3 = _LC35;this[0x1c0] = (RefCounted)0x0;*(undefined8*)( this + 0x1f8 ) = uVar3;*(undefined8*)( this + 0x1c8 ) = 0;*(undefined8*)( this + 0x200 ) = 0;*(undefined1(*) [16])( this + 0x1d8 ) = (undefined1[16])0x0;*(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;postinitialize_handler((Object*)this);cVar4 = RefCounted::init_ref();if (cVar4 != '\0') {
   cVar4 = RefCounted::reference();
   if (cVar4 != '\0') {
      pRVar10 = this;
   }

   cVar4 = RefCounted::unreference();
   if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler((Object*)this) ),cVar4 != '\0') {
      ( **(code**)( *(long*)this + 0x140 ) )(this);
      Memory::free_static(this, false);
   }

}
local_60 = 0;local_58 = "multiplayer:replication";local_50 = 0x17;String::parse_latin1((StrRange*)&local_60);EngineProfiler::bind((String*)pRVar10);lVar9 = local_60;if (local_60 != 0) {
   LOCK();
   plVar1 = (long*)( local_60 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_60 = 0;
      Memory::free_static((void*)( lVar9 + -0x10 ), false);
   }

}
if (( ( pRVar10 == (RefCounted*)0x0 ) || ( pOVar6 = (Object*)__dynamic_cast(pRVar10, &Object::typeinfo, &EngineProfiler::typeinfo, 0) ),pOVar6 == (Object*)0x0 )) {
   if (multiplayer_profilers != (undefined1(*) [16])0x0) {
      pOVar6 = (Object*)0x0;
      pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
      *pauVar7 = (undefined1[16])0x0;
      pauVar7[1] = (undefined1[16])0x0;
      goto LAB_0010136f;
   }

   pOVar6 = (Object*)0x0;
   multiplayer_profilers = (undefined1(*) [16])0x0;
   LAB_00101313:multiplayer_profilers = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
   *(undefined4*)multiplayer_profilers[1] = 0;
   *multiplayer_profilers = (undefined1[16])0x0;
   pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
   *pauVar7 = (undefined1[16])0x0;
   pauVar7[1] = (undefined1[16])0x0;
   if (pOVar6 == (Object*)0x0) goto LAB_0010136f;
}
 else {
   if (multiplayer_profilers == (undefined1(*) [16])0x0) goto LAB_00101313;
   pauVar7 = (undefined1(*) [16])operator_new(0x20, DefaultAllocator::alloc);
   *pauVar7 = (undefined1[16])0x0;
   pauVar7[1] = (undefined1[16])0x0;
}
*(Object**)*pauVar7 = pOVar6;cVar4 = RefCounted::reference();if (cVar4 == '\0') {
   *(undefined8*)*pauVar7 = 0;
}
LAB_0010136f:pauVar2 = multiplayer_profilers;lVar9 = *(long*)( *multiplayer_profilers + 8 );*(undefined8*)( *pauVar7 + 8 ) = 0;*(undefined1(**) [16])( pauVar7[1] + 8 ) = pauVar2;*(long*)pauVar7[1] = lVar9;if (lVar9 != 0) {
   *(undefined1(**) [16])( lVar9 + 8 ) = pauVar7;
}
lVar9 = *(long*)*pauVar2;*(undefined1(**) [16])( *pauVar2 + 8 ) = pauVar7;if (lVar9 == 0) {
   *(undefined1(**) [16])*pauVar2 = pauVar7;
}
*(int*)pauVar2[1] = *(int*)pauVar2[1] + 1;if (( ( pOVar6 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);Memory::free_static(pOVar6, false);}StringName::StringName((StringName*)&local_58, "multiplayer", false);EngineDebugger::register_message_capture((StringName*)&local_58, _capture, 0);if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
   StringName::unref();
}
if (( ( pRVar10 != (RefCounted*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pRVar10 + 0x140 ))(pRVar10);Memory::free_static(pRVar10, false);}if (( ( pRVar5 != (RefCounted*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pRVar5 + 0x140 ))(pRVar5);Memory::free_static(pRVar5, false);}if (( ( pRVar11 == (RefCounted*)0x0 ) || ( cVar4 = RefCounted::unreference() ),cVar4 == '\0' )) {
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

}
 else {
   ( **(code**)( *(long*)pRVar11 + 0x140 ) )(pRVar11);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Memory::free_static(pRVar11, false);
      return;
   }

}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MultiplayerDebugger::deinitialize() */void MultiplayerDebugger::deinitialize(void) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   long *plVar4;
   char cVar5;
   long lVar6;
   if (multiplayer_profilers != (long*)0x0) {
      do {
         plVar4 = multiplayer_profilers;
         plVar1 = (long*)*multiplayer_profilers;
         if (plVar1 == (long*)0x0) {
            return;
         }

         if ((long*)plVar1[3] == multiplayer_profilers) {
            lVar6 = plVar1[1];
            lVar2 = plVar1[2];
            *multiplayer_profilers = lVar6;
            if (plVar1 == (long*)plVar4[1]) {
               plVar4[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar6;
               lVar6 = plVar1[1];
            }

            if (lVar6 != 0) {
               *(long*)( lVar6 + 0x10 ) = lVar2;
            }

            if (( *plVar1 != 0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0') {
               pOVar3 = (Object*)*plVar1;
               cVar5 = predelete_handler(pOVar3);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

            Memory::free_static(plVar1, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

      }
 while ( (int)multiplayer_profilers[2] != 0 );
      Memory::free_static(multiplayer_profilers, false);
      multiplayer_profilers = (long*)0x0;
   }

   return;
}
/* MultiplayerDebugger::BandwidthProfiler::bandwidth_usage(Vector<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>
   const&, int) */undefined1[16];MultiplayerDebugger::BandwidthProfiler::bandwidth_usage (BandwidthProfiler *this,Vector *param_1,int param_2) {
   uint *puVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   undefined1 auVar6[16];
   long lVar7;
   long lVar8;
   long lVar9;
   ulong uVar10;
   ulong extraout_RDX;
   uint uVar11;
   undefined1 auVar12[16];
   ulong uVar13;
   if (*(long*)( param_1 + 8 ) == 0) {
      _err_print_error("bandwidth_usage", "modules/multiplayer/multiplayer_debugger.cpp", 0x5c, "Condition \"p_buffer.is_empty()\" is true. Returning: 0", 0, 0);
      auVar6._8_8_ = 0;
      auVar6._0_8_ = extraout_RDX;
      return auVar6 << 0x40;
   }

   OS::get_singleton();
   uVar13 = 0x101827;
   lVar7 = OS::get_ticks_msec();
   lVar3 = *(long*)( param_1 + 8 );
   if (lVar3 == 0) {
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   lVar4 = *(long*)( lVar3 + -8 );
   lVar9 = ( (long)param_2 + -1 + lVar4 ) % lVar4;
   if (param_2 != (int)lVar9) {
      lVar8 = (long)(int)lVar9;
      if (( lVar8 < lVar4 ) && ( -1 < lVar8 )) {
         uVar11 = 0;
         do {
            puVar1 = (uint*)( lVar3 + (long)(int)lVar9 * 8 );
            uVar2 = puVar1[1];
            uVar10 = (ulong)uVar2;
            if ((int)uVar2 < 1) {
               if (param_2 != (int)lVar9) goto LAB_001018e4;
               goto LAB_00101922;
            }

            if (( ulong ) * puVar1 < lVar7 - 1000U) goto LAB_001018e4;
            uVar11 = uVar11 + uVar2;
            lVar9 = ( lVar8 + -1 + lVar4 ) % lVar4;
            if (param_2 == (int)lVar9) goto LAB_00101922;
            lVar8 = (long)(int)lVar9;
         }
 while ( ( -1 < lVar8 ) && ( lVar8 < lVar4 ) );
      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar8, lVar4, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   uVar11 = 0;
   LAB_00101922:uVar10 = uVar13;
   _err_print_error("bandwidth_usage", "modules/multiplayer/multiplayer_debugger.cpp", 0x6c, "Condition \"i == p_pointer\" is true. Returning: total_bandwidth", "Reached the end of the bandwidth profiler buffer, values might be inaccurate.", 0, 0);
   LAB_001018e4:auVar12._4_4_ = 0;
   auVar12._0_4_ = uVar11;
   auVar12._8_8_ = uVar10;
   return auVar12;
}
/* MultiplayerDebugger::BandwidthProfiler::tick(double, double, double, double) */void MultiplayerDebugger::BandwidthProfiler::tick(double param_1, double param_2, double param_3, double param_4) {
   long *plVar1;
   code *pcVar2;
   int iVar3;
   int iVar4;
   long lVar5;
   BandwidthProfiler *in_RDI;
   long in_FS_OFFSET;
   Array aAStack_68[8];
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   OS::get_singleton();
   lVar5 = OS::get_ticks_msec();
   if (200 < ( ulong )(lVar5 - *(long*)( in_RDI + 0x200 ))) {
      *(long*)( in_RDI + 0x200 ) = lVar5;
      iVar3 = bandwidth_usage(in_RDI, (Vector*)( in_RDI + 0x1d8 ), *(int*)( in_RDI + 0x1d0 ));
      iVar4 = bandwidth_usage(in_RDI, (Vector*)( in_RDI + 0x1f0 ), *(int*)( in_RDI + 0x1e8 ));
      Array::Array(aAStack_68);
      Variant::Variant((Variant*)local_48, iVar3);
      Array::push_back((Variant*)aAStack_68);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_48, iVar4);
      Array::push_back((Variant*)aAStack_68);
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

      plVar1 = EngineDebugger::singleton;
      local_60 = 0;
      pcVar2 = *(code**)( *EngineDebugger::singleton + 8 );
      local_50 = 0x15;
      local_58 = "multiplayer:bandwidth";
      String::parse_latin1((StrRange*)&local_60);
      ( *pcVar2 )(plVar1, (StrRange*)&local_60, aAStack_68);
      lVar5 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar1 = (long*)( local_60 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
            Array::~Array(aAStack_68);
            goto LAB_001019a1;
         }

      }

      Array::~Array(aAStack_68);
   }

   LAB_001019a1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MultiplayerDebugger::RPCFrame::serialize() */void MultiplayerDebugger::RPCFrame::serialize(void) {
   code *pcVar1;
   long lVar2;
   long in_RSI;
   long lVar3;
   Array *in_RDI;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(in_RDI);
   if (*(long*)( in_RSI + 8 ) == 0) {
      lVar3 = 0;
   }
 else {
      lVar3 = *(long*)( *(long*)( in_RSI + 8 ) + -8 ) * 6;
   }

   Variant::Variant((Variant*)local_58, lVar3);
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar3 = *(long*)( in_RSI + 8 );
   lVar2 = 0;
   while (true) {
      if (( lVar3 == 0 ) || ( *(long*)( lVar3 + -8 ) <= lVar2 )) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return;
      }

      lVar5 = lVar2 * 0x20;
      Variant::Variant((Variant*)local_58, *(ulong*)( lVar3 + lVar5 ));
      Array::push_back((Variant*)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar3 = *(long*)( in_RSI + 8 );
      if (lVar3 == 0) break;
      lVar4 = *(long*)( lVar3 + -8 );
      if (lVar4 <= lVar2) goto LAB_00101d63;
      Variant::Variant((Variant*)local_58, (String*)( lVar3 + 8 + lVar5 ));
      Array::push_back((Variant*)in_RDI);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      lVar3 = *(long*)( in_RSI + 8 );
      for (int i = 0; i < 4; i++) {
         if (lVar3 == 0) break;
         lVar4 = *(long*)( lVar3 + -8 );
         if (lVar4 <= lVar2) goto LAB_00101d63;
         Variant::Variant((Variant*)local_58, *(int*)( lVar3 + ( 4*i + 16 ) + lVar5 ));
         Array::push_back((Variant*)in_RDI);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar3 = *(long*)( in_RSI + 8 );
      }

      lVar2 = lVar2 + 1;
   }
;
   lVar4 = 0;
   LAB_00101d63:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar2, lVar4, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MultiplayerDebugger::SyncInfo::SyncInfo(MultiplayerSynchronizer*) */void MultiplayerDebugger::SyncInfo::SyncInfo(SyncInfo *this, MultiplayerSynchronizer *param_1) {
   long lVar1;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   if (param_1 != (MultiplayerSynchronizer*)0x0) {
      *(undefined8*)this = *(undefined8*)( param_1 + 0x60 );
      lVar1 = MultiplayerSynchronizer::get_replication_config_ptr();
      if (lVar1 != 0) {
         lVar1 = MultiplayerSynchronizer::get_replication_config_ptr();
         *(undefined8*)( this + 8 ) = *(undefined8*)( lVar1 + 0x60 );
      }

      lVar1 = MultiplayerSynchronizer::get_root_node();
      if (lVar1 != 0) {
         lVar1 = MultiplayerSynchronizer::get_root_node();
         *(undefined8*)( this + 0x10 ) = *(undefined8*)( lVar1 + 0x60 );
      }

      return;
   }

   _err_print_error("SyncInfo", "modules/multiplayer/multiplayer_debugger.cpp", 0xf0, "Parameter \"p_sync\" is null.", 0, 0);
   return;
}
/* MultiplayerDebugger::SyncInfo::write_to_array(Array&) const */void MultiplayerDebugger::SyncInfo::write_to_array(SyncInfo *this, Array *param_1) {
   long in_FS_OFFSET;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_48, this);
   Array::push_back((Variant*)param_1);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, this + 8);
   Array::push_back((Variant*)param_1);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_48, this + 0x10);
   Array::push_back((Variant*)param_1);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   for (int i = 0; i < 4; i++) {
      Variant::Variant((Variant*)local_48, *(int*)( this + ( 4*i + 24 ) ));
      Array::push_back((Variant*)param_1);
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
/* MultiplayerDebugger::SyncInfo::read_from_array(Array const&, int) */undefined8 MultiplayerDebugger::SyncInfo::read_from_array(SyncInfo *this, Array *param_1, int param_2) {
   int iVar1;
   Variant *pVVar2;
   long lVar3;
   int iVar4;
   iVar1 = Array::size();
   if (6 < iVar1 - param_2) {
      iVar4 = (int)param_1;
      pVVar2 = (Variant*)Array::operator [](iVar4);
      lVar3 = Variant::operator_cast_to_long(pVVar2);
      *(long*)this = lVar3;
      pVVar2 = (Variant*)Array::operator [](iVar4);
      lVar3 = Variant::operator_cast_to_long(pVVar2);
      *(long*)( this + 8 ) = lVar3;
      pVVar2 = (Variant*)Array::operator [](iVar4);
      lVar3 = Variant::operator_cast_to_long(pVVar2);
      *(long*)( this + 0x10 ) = lVar3;
      for (int i = 0; i < 4; i++) {
         pVVar2 = (Variant*)Array::operator [](iVar4);
         iVar1 = Variant::operator_cast_to_int(pVVar2);
         *(int*)( this + ( 4*i + 24 ) ) = iVar1;
      }

      return 1;
   }

   _err_print_error("read_from_array", "modules/multiplayer/multiplayer_debugger.cpp", 0x105, "Condition \"p_arr.size() - p_offset < 7\" is true. Returning: false", 0, 0);
   return 0;
}
/* MultiplayerDebugger::ReplicationFrame::serialize() */void MultiplayerDebugger::ReplicationFrame::serialize(void) {
   undefined8 *puVar1;
   long in_RSI;
   Array *in_RDI;
   long in_FS_OFFSET;
   int local_38[6];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(in_RDI);
   Variant::Variant((Variant*)local_38, *(int*)( in_RSI + 0x2c ) * 7);
   Array::push_back((Variant*)in_RDI);
   if (Variant::needs_deinit[local_38[0]] != '\0') {
      Variant::_clear_internal();
   }

   for (puVar1 = *(undefined8**)( in_RSI + 0x18 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
      SyncInfo::write_to_array((SyncInfo*)( puVar1 + 3 ), in_RDI);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MultiplayerDebugger::ReplicationFrame::deserialize(Array const&) */undefined8 MultiplayerDebugger::ReplicationFrame::deserialize(ReplicationFrame *this, Array *param_1) {
   char cVar1;
   uint uVar2;
   int iVar3;
   Variant *this_00;
   undefined8 *puVar4;
   undefined8 uVar5;
   uint uVar6;
   long in_FS_OFFSET;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 auStack_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar1 = Array::is_empty();
   if (cVar1 == '\0') {
      this_00 = (Variant*)Array::operator []((int)param_1);
      uVar2 = Variant::operator_cast_to_unsigned_int(this_00);
      if (uVar2 % 7 == 0) {
         iVar3 = Array::size();
         if (iVar3 == uVar2 + 1) {
            iVar3 = 1;
            uVar6 = 0;
            if (6 < uVar2) {
               do {
                  local_68 = (undefined1[16])0x0;
                  local_58 = 0;
                  auStack_50 = (undefined1[16])0x0;
                  cVar1 = SyncInfo::read_from_array((SyncInfo*)local_68, param_1, iVar3);
                  if (cVar1 == '\0') {
                     uVar5 = 0;
                     goto LAB_0010238d;
                  }

                  uVar6 = uVar6 + 1;
                  iVar3 = iVar3 + 7;
                  puVar4 = (undefined8*)HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>::operator []((HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>*)this, (SyncInfo*)local_68);
                  *puVar4 = local_68._0_8_;
                  puVar4[1] = local_68._8_8_;
                  puVar4[4] = auStack_50._8_8_;
                  puVar4[2] = local_58;
                  puVar4[3] = auStack_50._0_8_;
               }
 while ( uVar6 < uVar2 / 7 );
            }

            uVar5 = 1;
         }
 else {
            _err_print_error("deserialize", "modules/multiplayer/multiplayer_debugger.cpp", 0x11d, "Condition \"(uint32_t)p_arr.size() != size + 1\" is true. Returning: false", 0, 0);
            uVar5 = 0;
         }

      }
 else {
         _err_print_error("deserialize", "modules/multiplayer/multiplayer_debugger.cpp", 0x11c, "Condition \"size % 7\" is true. Returning: false", 0, 0);
         uVar5 = 0;
      }

   }
 else {
      _err_print_error("deserialize", "modules/multiplayer/multiplayer_debugger.cpp", 0x11a, "Condition \"p_arr.is_empty()\" is true. Returning: false", 0, 0);
      uVar5 = 0;
   }

   LAB_0010238d:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar5;
}
/* MultiplayerDebugger::ReplicationProfiler::add(Array const&) */void MultiplayerDebugger::ReplicationProfiler::add(ReplicationProfiler *this, Array *param_1) {
   long *plVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   char cVar11;
   int iVar12;
   Variant *pVVar13;
   ulong uVar14;
   MultiplayerSynchronizer *pMVar15;
   ulong uVar16;
   undefined8 *puVar17;
   uint uVar18;
   ulong *puVar19;
   long lVar20;
   uint uVar21;
   ulong uVar22;
   ulong uVar23;
   long in_FS_OFFSET;
   bool bVar24;
   int local_88;
   long local_78;
   ulong local_70;
   SyncInfo local_68;
   undefined7 uStack_67;
   undefined8 uStack_60;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar12 = Array::size();
   if (iVar12 != 3) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error(&_LC12, "modules/multiplayer/multiplayer_debugger.cpp", 0x12f, "Condition \"p_data.size() != 3\" is true.", 0, 0);
         return;
      }

      goto LAB_00102838;
   }

   iVar12 = (int)param_1;
   Array::operator [](iVar12);
   Variant::operator_cast_to_String((Variant*)&local_78);
   pVVar13 = (Variant*)Array::operator [](iVar12);
   local_70 = Variant::operator_cast_to_ObjectID(pVVar13);
   pVVar13 = (Variant*)Array::operator [](iVar12);
   uVar14 = Variant::operator_cast_to_unsigned_long(pVVar13);
   uVar18 = (uint)local_70 & 0xffffff;
   if (uVar18 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_68 = (SyncInfo)0x0;
         LOCK();
         bVar24 = (char)ObjectDB::spin_lock == '\0';
         if (bVar24) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar24) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar19 = (ulong*)( (ulong)uVar18 * 0x10 + ObjectDB::object_slots );
      if (( local_70 >> 0x18 & 0x7fffffffff ) != ( *puVar19 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001027f7;
      }

      uVar16 = puVar19[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (( uVar16 == 0 ) || ( pMVar15 = (MultiplayerSynchronizer*)__dynamic_cast(uVar16, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0) ),pMVar15 == (MultiplayerSynchronizer*)0x0) goto LAB_001027f7;
      if (( *(long*)( this + 0x1d8 ) != 0 ) && ( *(int*)( this + 0x1fc ) != 0 )) {
         uVar22 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1f8 ) * 4 ));
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1f8 ) * 8 );
         uVar16 = local_70 * 0x3ffff - 1;
         uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
         uVar16 = ( uVar16 ^ uVar16 >> 0xb ) * 0x41;
         uVar16 = uVar16 >> 0x16 ^ uVar16;
         uVar23 = uVar16 & 0xffffffff;
         if ((int)uVar16 == 0) {
            uVar23 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = uVar23 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar22;
         lVar20 = SUB168(auVar3 * auVar7, 8);
         uVar18 = *(uint*)( *(long*)( this + 0x1e0 ) + lVar20 * 4 );
         iVar12 = SUB164(auVar3 * auVar7, 8);
         if (uVar18 != 0) {
            uVar21 = 0;
            do {
               if (( uVar18 == (uint)uVar23 ) && ( local_70 == *(ulong*)( *(long*)( *(long*)( this + 0x1d8 ) + lVar20 * 8 ) + 0x10 ) )) goto LAB_001026ed;
               uVar21 = uVar21 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar22;
               lVar20 = SUB168(auVar4 * auVar8, 8);
               uVar18 = *(uint*)( *(long*)( this + 0x1e0 ) + lVar20 * 4 );
               iVar12 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar18 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar18 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar22,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1f8 ) * 4 ) + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar22,uVar21 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      SyncInfo::SyncInfo(&local_68, pMVar15);
      puVar17 = (undefined8*)HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>::operator []((HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>*)( this + 0x1d0 ), (ObjectID*)&local_70);
      *puVar17 = CONCAT71(uStack_67, local_68);
      puVar17[1] = uStack_60;
      puVar17[2] = local_58;
      puVar17[3] = uStack_50;
      puVar17[4] = local_48;
      LAB_001026ed:lVar20 = HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>::operator []((HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>*)( this + 0x1d0 ), (ObjectID*)&local_70);
      cVar11 = String::operator ==((String*)&local_78, "sync_in");
      local_88 = (int)uVar14;
      if (cVar11 == '\0') {
         cVar11 = String::operator ==((String*)&local_78, "sync_out");
         lVar2 = local_78;
         if (cVar11 != '\0') {
            *(int*)( lVar20 + 0x20 ) = *(int*)( lVar20 + 0x20 ) + 1;
            *(int*)( lVar20 + 0x24 ) = *(int*)( lVar20 + 0x24 ) + local_88;
         }

      }
 else {
         *(int*)( lVar20 + 0x18 ) = *(int*)( lVar20 + 0x18 ) + 1;
         *(int*)( lVar20 + 0x1c ) = *(int*)( lVar20 + 0x1c ) + local_88;
         lVar2 = local_78;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_001027f7:_err_print_error(&_LC12, "modules/multiplayer/multiplayer_debugger.cpp", 0x134, "Parameter \"sync\" is null.", 0, 0);
      lVar2 = local_78;
   }

   local_78 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_78 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102838:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MultiplayerDebugger::ReplicationProfiler::tick(double, double, double, double) */void MultiplayerDebugger::ReplicationProfiler::tick(double param_1, double param_2, double param_3, double param_4) {
   undefined8 *puVar1;
   long *plVar2;
   uint uVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   long lVar7;
   undefined8 *puVar8;
   int *piVar9;
   int *piVar10;
   undefined8 *puVar11;
   long in_RDI;
   long in_FS_OFFSET;
   Array aAStack_88[8];
   long local_80;
   char *local_78;
   undefined8 local_70;
   HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>> local_68[8];
   undefined1 local_60[16];
   undefined1 local_50[16];
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   OS::get_singleton();
   lVar7 = OS::get_ticks_msec();
   if (100 < ( ulong )(lVar7 - *(long*)( in_RDI + 0x200 ))) {
      puVar11 = *(undefined8**)( in_RDI + 0x1e8 );
      *(long*)( in_RDI + 0x200 ) = lVar7;
      local_40 = 2;
      local_60 = (undefined1[16])0x0;
      local_50 = (undefined1[16])0x0;
      while (puVar11 != (undefined8*)0x0) {
         puVar8 = (undefined8*)HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>::operator [](local_68, (ObjectID*)( puVar11 + 2 ));
         uVar5 = puVar11[4];
         *puVar8 = puVar11[3];
         puVar8[1] = uVar5;
         uVar5 = puVar11[6];
         puVar8[2] = puVar11[5];
         puVar8[3] = uVar5;
         puVar1 = puVar11 + 7;
         puVar11 = (undefined8*)*puVar11;
         puVar8[4] = *puVar1;
      }
;
      if (( *(long*)( in_RDI + 0x1d8 ) != 0 ) && ( *(int*)( in_RDI + 0x1fc ) != 0 )) {
         lVar7 = 0;
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RDI + 0x1f8 ) * 4 );
         if (uVar3 != 0) {
            do {
               piVar9 = (int*)( *(long*)( in_RDI + 0x1e0 ) + lVar7 );
               if (*piVar9 != 0) {
                  *piVar9 = 0;
                  Memory::free_static(*(void**)( *(long*)( in_RDI + 0x1d8 ) + lVar7 * 2 ), false);
                  *(undefined8*)( *(long*)( in_RDI + 0x1d8 ) + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar7 );
         }

         *(undefined4*)( in_RDI + 0x1fc ) = 0;
         *(undefined1(*) [16])( in_RDI + 0x1e8 ) = (undefined1[16])0x0;
      }

      plVar2 = EngineDebugger::singleton;
      pcVar4 = *(code**)( *EngineDebugger::singleton + 8 );
      ReplicationFrame::serialize();
      local_78 = "multiplayer:syncs";
      local_80 = 0;
      local_70 = 0x11;
      String::parse_latin1((StrRange*)&local_80);
      ( *pcVar4 )(plVar2, (StrRange*)&local_80, aAStack_88);
      lVar7 = local_80;
      if (local_80 != 0) {
         LOCK();
         plVar2 = (long*)( local_80 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 == 0) {
            local_80 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      Array::~Array(aAStack_88);
      uVar5 = local_60._0_8_;
      if ((undefined8*)local_60._0_8_ != (undefined8*)0x0) {
         uVar6 = local_60._8_8_;
         if (( local_40._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_40 & 0xffffffff ) * 4 ) != 0 )) {
            piVar9 = (int*)( local_60._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_40 & 0xffffffff ) * 4 ) * 4 );
            piVar10 = (int*)local_60._8_8_;
            puVar11 = (undefined8*)local_60._0_8_;
            do {
               if (*piVar10 != 0) {
                  *piVar10 = 0;
                  Memory::free_static((void*)*puVar11, false);
                  *puVar11 = 0;
               }

               piVar10 = piVar10 + 1;
               puVar11 = puVar11 + 1;
            }
 while ( piVar9 != piVar10 );
         }

         Memory::free_static((void*)uVar5, false);
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)uVar6, false);
            return;
         }

         goto LAB_00102ac6;
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00102ac6:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Error CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::resize<false>(long) [clone
   .isra.0] */void CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::resize<false>(CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame> *this, long param_1) {
   long *plVar1;
   long lVar2;
   int iVar3;
   CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame> *pCVar4;
   ulong uVar5;
   undefined8 *puVar6;
   char *pcVar7;
   undefined8 *puVar8;
   undefined8 uVar9;
   CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame> *pCVar10;
   CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame> *pCVar11;
   long lVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar2 = *(long*)this;
   if (lVar2 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar12 = 0;
      pCVar4 = (CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)0x0;
   }
 else {
      lVar12 = *(long*)( lVar2 + -8 );
      if (param_1 == lVar12) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
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

      _copy_on_write(this);
      pCVar4 = (CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( lVar12 * 8 );
      if (pCVar4 != (CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)0x0) {
         uVar5 = ( ulong )(pCVar4 + -1) | ( ulong )(pCVar4 + -1) >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         pCVar4 = (CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 8 != 0) {
      uVar5 = param_1 * 8 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar11 = (CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( uVar5 | uVar5 >> 0x20 );
      pCVar10 = pCVar11 + 1;
      if (pCVar10 != (CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)0x0) {
         if (param_1 <= lVar12) {
            if (( pCVar10 != pCVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_00103f94();
            return;
         }

         if (pCVar10 != pCVar4) {
            if (lVar12 == 0) {
               puVar6 = (undefined8*)Memory::alloc_static(( ulong )(pCVar11 + 0x11), false);
               if (puVar6 != (undefined8*)0x0) {
                  puVar8 = puVar6 + 2;
                  *puVar6 = 1;
                  puVar6[1] = 0;
                  *(undefined8**)this = puVar8;
                  goto LAB_00102bf1;
               }

               uVar9 = 0x171;
               pcVar7 = "Parameter \"mem_new\" is null.";
               goto LAB_00102ce2;
            }

            pCVar11 = this;
            iVar3 = _realloc(this, (long)pCVar10);
            if (iVar3 != 0) {
               return;
            }

         }

         puVar8 = *(undefined8**)this;
         if (puVar8 == (undefined8*)0x0) {
            resize<false>((long)pCVar11);
            return;
         }

         LAB_00102bf1:puVar8[-1] = param_1;
         return;
      }

   }

   uVar9 = 0x16a;
   pcVar7 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00102ce2:_err_print_error("resize", "./core/templates/cowdata.h", uVar9, pcVar7, 0, 0);
   return;
}
/* MultiplayerDebugger::BandwidthProfiler::toggle(bool, Array const&) */void MultiplayerDebugger::BandwidthProfiler::toggle(bool param_1, Array *param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined7 in_register_00000039;
   long lVar4;
   lVar4 = CONCAT71(in_register_00000039, param_1);
   if ((char)param_2 != '\0') {
      *(undefined4*)( lVar4 + 0x1d0 ) = 0;
      CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::resize<false>((CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( lVar4 + 0x1e0 ), 0x4000);
      lVar2 = *(long*)( lVar4 + 0x1e0 );
      for (lVar3 = 0; ( lVar2 != 0 && ( lVar3 < *(long*)( lVar2 + -8 ) ) ); lVar3 = lVar3 + 1) {
         CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write((CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( lVar4 + 0x1e0 ));
         lVar2 = *(long*)( lVar4 + 0x1e0 );
         *(undefined4*)( lVar2 + 4 + lVar3 * 8 ) = 0xffffffff;
      }

      *(undefined4*)( lVar4 + 0x1e8 ) = 0;
      CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::resize<false>((CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( lVar4 + 0x1f8 ), 0x4000);
      lVar2 = *(long*)( lVar4 + 0x1f8 );
      if (lVar2 == 0) {
         return;
      }

      lVar3 = 0;
      do {
         if (*(long*)( lVar2 + -8 ) <= lVar3) {
            return;
         }

         CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write((CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>*)( lVar4 + 0x1f8 ));
         lVar2 = *(long*)( lVar4 + 0x1f8 );
         *(undefined4*)( lVar2 + 4 + lVar3 * 8 ) = 0xffffffff;
         lVar3 = lVar3 + 1;
      }
 while ( lVar2 != 0 );
      return;
   }

   lVar2 = *(long*)( lVar4 + 0x1e0 );
   if (( lVar2 != 0 ) && ( *(long*)( lVar2 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( lVar4 + 0x1e0 );
         *(undefined8*)( lVar4 + 0x1e0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         lVar2 = *(long*)( lVar4 + 0x1f8 );
         goto joined_r0x00102d64;
      }

      *(undefined8*)( lVar4 + 0x1e0 ) = 0;
   }

   lVar2 = *(long*)( lVar4 + 0x1f8 );
   joined_r0x00102d64:if (( lVar2 != 0 ) && ( *(long*)( lVar2 + -8 ) != 0 )) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( lVar4 + 0x1f8 );
         *(undefined8*)( lVar4 + 0x1f8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      *(undefined8*)( lVar4 + 0x1f8 ) = 0;
   }

   return;
}
/* CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write() [clone .isra.0] */void CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write(CowData<MultiplayerDebugger::RPCNodeInfo> *this) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   ulong uVar7;
   undefined8 *puVar8;
   long lVar9;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 0x20 != 0) {
      uVar7 = lVar1 * 0x20 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar9 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar1;
      puVar8 = puVar5 + 2;
      if (lVar1 != 0) {
         do {
            puVar6 = (undefined8*)( lVar9 * 0x20 + *(long*)this );
            uVar2 = *puVar6;
            puVar8[1] = 0;
            lVar3 = puVar6[1];
            *puVar8 = uVar2;
            if (lVar3 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 1 ), (CowData*)( puVar6 + 1 ));
            }

            uVar2 = puVar6[3];
            lVar9 = lVar9 + 1;
            puVar8[2] = puVar6[2];
            puVar8[3] = uVar2;
            puVar8 = puVar8 + 4;
         }
 while ( lVar1 != lVar9 );
      }

      _unref(this);
      *(undefined8**)this = puVar5 + 2;
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* MultiplayerDebugger::RPCFrame::deserialize(Array const&) */undefined8 MultiplayerDebugger::RPCFrame::deserialize(RPCFrame *this, Array *param_1) {
   CowData<MultiplayerDebugger::RPCNodeInfo> *this_00;
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   uint uVar5;
   int iVar6;
   Variant *pVVar7;
   ulong uVar8;
   undefined8 uVar9;
   long lVar10;
   int iVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar4 = Array::is_empty();
   if (cVar4 == '\0') {
      iVar11 = (int)param_1;
      pVVar7 = (Variant*)Array::operator [](iVar11);
      uVar5 = Variant::operator_cast_to_unsigned_int(pVVar7);
      if (( uVar5 * -0x55555555 >> 1 | ( uint )(( uVar5 * -0x55555555 & 1 ) != 0) << 0x1f ) < 0x2aaaaaab) {
         iVar6 = Array::size();
         if (iVar6 == uVar5 + 1) {
            this_00 = (CowData<MultiplayerDebugger::RPCNodeInfo>*)( this + 8 );
            CowData<MultiplayerDebugger::RPCNodeInfo>::resize<false>(this_00, ( ulong )(uVar5 / 6));
            if (5 < uVar5) {
               lVar13 = 0;
               do {
                  pVVar7 = (Variant*)Array::operator [](iVar11);
                  uVar8 = Variant::operator_cast_to_unsigned_long(pVVar7);
                  if (*(long*)( this + 8 ) == 0) goto LAB_001032e0;
                  lVar12 = *(long*)( *(long*)( this + 8 ) + -8 );
                  if (lVar12 <= lVar13) goto LAB_001032e3;
                  CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write(this_00);
                  lVar14 = lVar13 * 0x20;
                  *(ulong*)( *(long*)( this + 8 ) + lVar14 ) = uVar8;
                  Array::operator [](iVar11);
                  Variant::operator_cast_to_String((Variant*)&local_48);
                  if (*(long*)( this + 8 ) == 0) {
                     LAB_001032e0:lVar12 = 0;
                     LAB_001032e3:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar13, lVar12, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar12 = *(long*)( *(long*)( this + 8 ) + -8 );
                  if (lVar12 <= lVar13) goto LAB_001032e3;
                  CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write(this_00);
                  lVar3 = local_48;
                  lVar10 = *(long*)( this + 8 ) + lVar14;
                  lVar12 = *(long*)( lVar10 + 8 );
                  if (lVar12 == local_48) {
                     if (lVar12 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar12 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_48 = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                     }

                  }
 else {
                     if (lVar12 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar12 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar12 = *(long*)( lVar10 + 8 );
                           *(undefined8*)( lVar10 + 8 ) = 0;
                           Memory::free_static((void*)( lVar12 + -0x10 ), false);
                           *(long*)( lVar10 + 8 ) = local_48;
                           goto LAB_00103172;
                        }

                     }

                     *(long*)( lVar10 + 8 ) = local_48;
                  }

                  LAB_00103172:pVVar7 = (Variant*)Array::operator [](iVar11);
                  iVar6 = Variant::operator_cast_to_int(pVVar7);
                  if (*(long*)( this + 8 ) == 0) goto LAB_001032e0;
                  lVar12 = *(long*)( *(long*)( this + 8 ) + -8 );
                  if (lVar12 <= lVar13) goto LAB_001032e3;
                  for (int i = 0; i < 3; i++) {
                     CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write(this_00);
                     *(int*)( *(long*)( this + 8 ) + ( 4*i + 16 ) + lVar14 ) = iVar6;
                     pVVar7 = (Variant*)Array::operator [](iVar11);
                     iVar6 = Variant::operator_cast_to_int(pVVar7);
                     if (*(long*)( this + 8 ) == 0) goto LAB_001032e0;
                     lVar12 = *(long*)( *(long*)( this + 8 ) + -8 );
                     if (lVar12 <= lVar13) goto LAB_001032e3;
                  }

                  lVar13 = lVar13 + 1;
                  CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write(this_00);
                  *(int*)( *(long*)( this + 8 ) + 0x1c + lVar14 ) = iVar6;
               }
 while ( (uint)lVar13 < uVar5 / 6 );
            }

            uVar9 = 1;
            goto LAB_00103387;
         }

         _err_print_error("deserialize", "modules/multiplayer/multiplayer_debugger.cpp", 0xb4, "Condition \"(uint32_t)p_arr.size() != size + 1\" is true. Returning: false", 0, 0);
      }
 else {
         _err_print_error("deserialize", "modules/multiplayer/multiplayer_debugger.cpp", 0xb3, "Condition \"size % 6\" is true. Returning: false", 0, 0);
      }

   }
 else {
      _err_print_error("deserialize", "modules/multiplayer/multiplayer_debugger.cpp", 0xb1, "Condition \"p_arr.is_empty()\" is true. Returning: false", 0, 0);
   }

   uVar9 = 0;
   LAB_00103387:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar9;
}
/* MultiplayerDebugger::RPCProfiler::tick(double, double, double, double) */void MultiplayerDebugger::RPCProfiler::tick(double param_1, double param_2, double param_3, double param_4) {
   uint uVar1;
   void *pvVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   long lVar7;
   int *piVar8;
   long lVar9;
   long *plVar10;
   long in_RDI;
   long *plVar11;
   long lVar12;
   long in_FS_OFFSET;
   Array local_88[8];
   long local_80[2];
   long local_70;
   char *local_68;
   long local_60;
   long local_58;
   long lStack_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   OS::get_singleton();
   lVar7 = OS::get_ticks_msec();
   if (100 < ( ulong )(lVar7 - *(long*)( in_RDI + 0x200 ))) {
      plVar11 = *(long**)( in_RDI + 0x1e8 );
      *(long*)( in_RDI + 0x200 ) = lVar7;
      local_70 = 0;
      if (plVar11 != (long*)0x0) {
         do {
            lVar7 = local_70;
            local_68 = (char*)plVar11[3];
            local_60 = 0;
            lVar12 = plVar11[4];
            if (plVar11[4] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( plVar11 + 4 ));
               lVar12 = local_60;
            }

            lVar4 = plVar11[5];
            lVar5 = plVar11[6];
            if (lVar7 == 0) {
               lVar7 = 1;
            }
 else {
               lVar7 = *(long*)( lVar7 + -8 ) + 1;
            }

            local_58 = lVar4;
            lStack_50 = lVar5;
            iVar6 = CowData<MultiplayerDebugger::RPCNodeInfo>::resize<false>((CowData<MultiplayerDebugger::RPCNodeInfo>*)&local_70, lVar7);
            if (iVar6 == 0) {
               if (local_70 == 0) {
                  lVar9 = -1;
                  lVar7 = 0;
               }
 else {
                  lVar7 = *(long*)( local_70 + -8 );
                  lVar9 = lVar7 + -1;
                  if (-1 < lVar9) {
                     CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write((CowData<MultiplayerDebugger::RPCNodeInfo>*)&local_70);
                     plVar10 = (long*)( lVar9 * 0x20 + local_70 );
                     *plVar10 = (long)local_68;
                     if (lVar12 != plVar10[1]) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( plVar10 + 1 ), (CowData*)&local_60);
                     }

                     plVar10[2] = lVar4;
                     plVar10[3] = lVar5;
                     goto LAB_00103544;
                  }

               }

               _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar9, lVar7, "p_index", "size()", "", false, false);
            }
 else {
               _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
            }

            LAB_00103544:if (lVar12 != 0) {
               LOCK();
               plVar10 = (long*)( lVar12 + -0x10 );
               *plVar10 = *plVar10 + -1;
               UNLOCK();
               if (*plVar10 == 0) {
                  Memory::free_static((void*)( local_60 + -0x10 ), false);
               }

            }

            plVar11 = (long*)*plVar11;
         }
 while ( plVar11 != (long*)0x0 );
      }

      if (( *(long*)( in_RDI + 0x1d8 ) != 0 ) && ( *(int*)( in_RDI + 0x1fc ) != 0 )) {
         lVar7 = 0;
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RDI + 0x1f8 ) * 4 );
         if (uVar1 != 0) {
            do {
               piVar8 = (int*)( *(long*)( in_RDI + 0x1e0 ) + lVar7 );
               if (*piVar8 != 0) {
                  *piVar8 = 0;
                  pvVar2 = *(void**)( *(long*)( in_RDI + 0x1d8 ) + lVar7 * 2 );
                  if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
                     LOCK();
                     plVar11 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
                     *plVar11 = *plVar11 + -1;
                     UNLOCK();
                     if (*plVar11 == 0) {
                        lVar12 = *(long*)( (long)pvVar2 + 0x20 );
                        *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar12 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar2, false);
                  *(undefined8*)( *(long*)( in_RDI + 0x1d8 ) + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar1 << 2 );
         }

         *(undefined4*)( in_RDI + 0x1fc ) = 0;
         *(undefined1(*) [16])( in_RDI + 0x1e8 ) = (undefined1[16])0x0;
      }

      plVar11 = EngineDebugger::singleton;
      pcVar3 = *(code**)( *EngineDebugger::singleton + 8 );
      RPCFrame::serialize();
      local_68 = "multiplayer:rpc";
      local_80[0] = 0;
      local_60 = 0xf;
      String::parse_latin1((StrRange*)local_80);
      ( *pcVar3 )(plVar11, (StrRange*)local_80, local_88);
      lVar7 = local_80[0];
      if (local_80[0] != 0) {
         LOCK();
         plVar11 = (long*)( local_80[0] + -0x10 );
         *plVar11 = *plVar11 + -1;
         UNLOCK();
         if (*plVar11 == 0) {
            local_80[0] = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      Array::~Array(local_88);
      CowData<MultiplayerDebugger::RPCNodeInfo>::_unref((CowData<MultiplayerDebugger::RPCNodeInfo>*)&local_70);
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MultiplayerDebugger::RPCProfiler::init_node(ObjectID) */void MultiplayerDebugger::RPCProfiler::init_node(RPCProfiler *this, ulong param_2) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   ulong *puVar11;
   long lVar12;
   uint uVar13;
   int iVar14;
   long lVar15;
   ulong uVar16;
   ulong uVar17;
   uint uVar18;
   HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>> *this_00;
   long in_FS_OFFSET;
   bool bVar19;
   ulong local_80[2];
   NodePath local_70[8];
   ulong local_68[2];
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80[0] = param_2;
   if (( *(long*)( this + 0x1d8 ) != 0 ) && ( *(int*)( this + 0x1fc ) != 0 )) {
      uVar17 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1f8 ) * 4 ));
      lVar12 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1f8 ) * 8 );
      uVar10 = param_2 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar16 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar16 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar16 * lVar12;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar17;
      lVar15 = SUB168(auVar2 * auVar6, 8);
      uVar13 = *(uint*)( *(long*)( this + 0x1e0 ) + lVar15 * 4 );
      iVar14 = SUB164(auVar2 * auVar6, 8);
      if (uVar13 != 0) {
         uVar18 = 0;
         do {
            if (( (uint)uVar16 == uVar13 ) && ( param_2 == *(ulong*)( *(long*)( *(long*)( this + 0x1d8 ) + lVar15 * 8 ) + 0x10 ) )) goto LAB_001038d0;
            uVar18 = uVar18 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar14 + 1) * lVar12;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar17;
            lVar15 = SUB168(auVar3 * auVar7, 8);
            uVar13 = *(uint*)( *(long*)( this + 0x1e0 ) + lVar15 * 4 );
            iVar14 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar13 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar13 * lVar12,auVar8._8_8_ = 0,auVar8._0_8_ = uVar17,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1f8 ) * 4 ) + iVar14 ) - SUB164(auVar4 * auVar8, 8)) * lVar12,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,uVar18 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   this_00 = (HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>*)( this + 0x1d0 );
   local_58 = (undefined1[16])0x0;
   local_68[0] = 0;
   local_68[1] = 0;
   HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>::insert(local_70, (RPCNodeInfo*)this_00, SUB81(local_80, 0));
   puVar11 = (ulong*)HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>::operator [](this_00, (ObjectID*)local_80);
   uVar13 = (uint)param_2 & 0xffffff;
   bVar19 = uVar13 < (uint)ObjectDB::slot_max;
   *puVar11 = local_80[0];
   if (bVar19) {
      while (true) {
         uVar10 = local_68[0] >> 8;
         local_68[0] = uVar10 << 8;
         LOCK();
         bVar19 = (char)ObjectDB::spin_lock == '\0';
         if (bVar19) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar19) break;
         local_68[0] = uVar10 << 8;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar11 = (ulong*)( (ulong)uVar13 * 0x10 + ObjectDB::object_slots );
      if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar11 & 0x7fffffffff )) {
         uVar10 = puVar11[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (uVar10 != 0) {
            __dynamic_cast(uVar10, &Object::typeinfo, &Node::typeinfo, 0);
         }

      }
 else {
         ObjectDB::spin_lock._0_1_ = '\0';
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   Node::get_path();
   NodePath::operator_cast_to_String((NodePath*)local_68);
   lVar12 = HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>::operator [](this_00, (ObjectID*)local_80);
   uVar16 = local_68[0];
   uVar10 = *(ulong*)( lVar12 + 8 );
   if (uVar10 == local_68[0]) {
      if (uVar10 != 0) {
         LOCK();
         plVar1 = (long*)( uVar10 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68[0] = 0;
            Memory::free_static((void*)( uVar16 - 0x10 ), false);
         }

      }

   }
 else {
      if (uVar10 != 0) {
         LOCK();
         plVar1 = (long*)( uVar10 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar15 = *(long*)( lVar12 + 8 );
            *(undefined8*)( lVar12 + 8 ) = 0;
            Memory::free_static((void*)( lVar15 + -0x10 ), false);
         }

      }

      *(ulong*)( lVar12 + 8 ) = local_68[0];
   }

   NodePath::~NodePath(local_70);
   LAB_001038d0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MultiplayerDebugger::RPCProfiler::add(Array const&) */void MultiplayerDebugger::RPCProfiler::add(RPCProfiler *this, Array *param_1) {
   long *plVar1;
   char cVar2;
   int iVar3;
   Variant *pVVar4;
   long lVar5;
   long in_FS_OFFSET;
   long local_30;
   undefined8 local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar3 = Array::size();
   if (iVar3 == 3) {
      iVar3 = (int)param_1;
      Array::operator [](iVar3);
      Variant::operator_cast_to_String((Variant*)&local_30);
      pVVar4 = (Variant*)Array::operator [](iVar3);
      local_28 = Variant::operator_cast_to_ObjectID(pVVar4);
      pVVar4 = (Variant*)Array::operator [](iVar3);
      iVar3 = Variant::operator_cast_to_int(pVVar4);
      init_node(this, local_28);
      lVar5 = HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>::operator []((HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>*)( this + 0x1d0 ), (ObjectID*)&local_28);
      cVar2 = String::operator ==((String*)&local_30, "rpc_in");
      if (cVar2 == '\0') {
         cVar2 = String::operator ==((String*)&local_30, "rpc_out");
         if (cVar2 != '\0') {
            *(ulong*)( lVar5 + 0x18 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( lVar5 + 0x18 ) >> 0x20 ) + iVar3, (int)*(undefined8*)( lVar5 + 0x18 ) + 1);
         }

      }
 else {
         *(ulong*)( lVar5 + 0x10 ) = CONCAT44((int)( ( ulong ) * (undefined8*)( lVar5 + 0x10 ) >> 0x20 ) + iVar3, (int)*(undefined8*)( lVar5 + 0x10 ) + 1);
      }

      lVar5 = local_30;
      if (local_30 != 0) {
         LOCK();
         plVar1 = (long*)( local_30 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_30 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error(&_LC12, "modules/multiplayer/multiplayer_debugger.cpp", 0xd1, "Condition \"p_data.size() != 3\" is true.", 0, 0);
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
/* EngineProfiler::is_class_ptr(void*) const */uint EngineProfiler::is_class_ptr(EngineProfiler *this, void *param_1) {
   return (uint)CONCAT71(0x107c, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107c, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EngineProfiler::_getv(StringName const&, Variant&) const */undefined8 EngineProfiler::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EngineProfiler::_setv(StringName const&, Variant const&) */undefined8 EngineProfiler::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EngineProfiler::_validate_propertyv(PropertyInfo&) const */void EngineProfiler::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EngineProfiler::_property_can_revertv(StringName const&) const */undefined8 EngineProfiler::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EngineProfiler::_property_get_revertv(StringName const&, Variant&) const */undefined8 EngineProfiler::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EngineProfiler::_notificationv(int, bool) */void EngineProfiler::_notificationv(int param_1, bool param_2) {
   return;
}
/* CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write() [clone .isra.0]
   [clone .cold] */void CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MultiplayerDebugger::BandwidthProfiler::add(Array const&) [clone .cold] */void MultiplayerDebugger::BandwidthProfiler::add(Array *param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MultiplayerDebugger::BandwidthProfiler::bandwidth_usage(Vector<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>
   const&, int) [clone .cold] */void MultiplayerDebugger::BandwidthProfiler::bandwidth_usage(Vector *param_1, int param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::resize<false>(long) [clone
   .isra.0] [clone .cold] */void CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00103f94(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<MultiplayerDebugger::RPCNodeInfo>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EngineProfiler::_get_class_namev() const */undefined8 *EngineProfiler::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103ff3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103ff3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EngineProfiler");
         goto LAB_0010405e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EngineProfiler");
   LAB_0010405e:return &_get_class_namev();
}
/* MultiplayerDebugger::ReplicationProfiler::~ReplicationProfiler() */void MultiplayerDebugger::ReplicationProfiler::~ReplicationProfiler(ReplicationProfiler *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   *(undefined***)this = &PTR__initialize_classv_00107b28;
   pvVar3 = *(void**)( this + 0x1d8 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x1fc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1f8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1fc ) = 0;
            *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1e0 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( this + 0x1e0 ) + lVar2 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar3 + lVar2 * 2 ), false);
                  pvVar3 = *(void**)( this + 0x1d8 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x1fc ) = 0;
            *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_00104143;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x1e0 ), false);
      EngineProfiler::~EngineProfiler((EngineProfiler*)this);
      return;
   }

   LAB_00104143:EngineProfiler::~EngineProfiler((EngineProfiler*)this);
   return;
}
/* MultiplayerDebugger::ReplicationProfiler::~ReplicationProfiler() */void MultiplayerDebugger::ReplicationProfiler::~ReplicationProfiler(ReplicationProfiler *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   *(undefined***)this = &PTR__initialize_classv_00107b28;
   pvVar3 = *(void**)( this + 0x1d8 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x1fc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1f8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x1fc ) = 0;
            *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1e0 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( this + 0x1e0 ) + lVar2 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar3 + lVar2 * 2 ), false);
                  pvVar3 = *(void**)( this + 0x1d8 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x1fc ) = 0;
            *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_00104233;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x1e0 ), false);
   }

   LAB_00104233:EngineProfiler::~EngineProfiler((EngineProfiler*)this);
   operator_delete(this, 0x208);
   return;
}
/* List<Ref<EngineProfiler>, DefaultAllocator>::~List() */undefined8 List<Ref<EngineProfiler>,DefaultAllocator>::~List(List<Ref<EngineProfiler>,DefaultAllocator> *this) {
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
/* MultiplayerDebugger::BandwidthProfiler::~BandwidthProfiler() */void MultiplayerDebugger::BandwidthProfiler::~BandwidthProfiler(BandwidthProfiler *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00107838;
   if (*(long*)( this + 0x1f8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1f8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1f8 );
         *(undefined8*)( this + 0x1f8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1e0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1e0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1e0 );
         *(undefined8*)( this + 0x1e0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         EngineProfiler::~EngineProfiler((EngineProfiler*)this);
         return;
      }

   }

   EngineProfiler::~EngineProfiler((EngineProfiler*)this);
   return;
}
/* MultiplayerDebugger::BandwidthProfiler::~BandwidthProfiler() */void MultiplayerDebugger::BandwidthProfiler::~BandwidthProfiler(BandwidthProfiler *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_00107838;
   if (*(long*)( this + 0x1f8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1f8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1f8 );
         *(undefined8*)( this + 0x1f8 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x1e0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1e0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x1e0 );
         *(undefined8*)( this + 0x1e0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   EngineProfiler::~EngineProfiler((EngineProfiler*)this);
   operator_delete(this, 0x208);
   return;
}
/* MultiplayerDebugger::RPCProfiler::~RPCProfiler() */void MultiplayerDebugger::RPCProfiler::~RPCProfiler(RPCProfiler *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR__initialize_classv_001079b0;
   pvVar5 = *(void**)( this + 0x1d8 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x1fc ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1f8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1fc ) = 0;
            *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1e0 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x1e0 ) + lVar4 ) = 0;
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

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x1d8 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x1fc ) = 0;
            *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_00104672;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x1e0 ), false);
      EngineProfiler::~EngineProfiler((EngineProfiler*)this);
      return;
   }

   LAB_00104672:EngineProfiler::~EngineProfiler((EngineProfiler*)this);
   return;
}
/* MultiplayerDebugger::RPCProfiler::~RPCProfiler() */void MultiplayerDebugger::RPCProfiler::~RPCProfiler(RPCProfiler *this) {
   long *plVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   void *pvVar5;
   *(undefined***)this = &PTR__initialize_classv_001079b0;
   pvVar5 = *(void**)( this + 0x1d8 );
   if (pvVar5 != (void*)0x0) {
      if (*(int*)( this + 0x1fc ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1f8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x1fc ) = 0;
            *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
         }
 else {
            lVar4 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1e0 ) + lVar4 ) != 0) {
                  pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                  *(int*)( *(long*)( this + 0x1e0 ) + lVar4 ) = 0;
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

                  Memory::free_static(pvVar5, false);
                  pvVar5 = *(void**)( this + 0x1d8 );
                  *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
               }

               lVar4 = lVar4 + 4;
            }
 while ( lVar4 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x1fc ) = 0;
            *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
            if (pvVar5 == (void*)0x0) goto LAB_001047b2;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x1e0 ), false);
   }

   LAB_001047b2:EngineProfiler::~EngineProfiler((EngineProfiler*)this);
   operator_delete(this, 0x208);
   return;
}
/* EngineProfiler::get_class() const */void EngineProfiler::get_class(void) {
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
/* EngineProfiler::_initialize_classv() */void EngineProfiler::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() != '\0') goto LAB_00104e5b;
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

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_68;
      if (local_68 == 0) {
         LAB_00104f6a:if ((code*)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) {
            LAB_00104f7a:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00104f6a;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_0010a008 != RefCounted::_bind_methods) goto LAB_00104f7a;
      }

      RefCounted::initialize_class() {
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

      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      lVar2 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if ((code*)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
         EngineProfiler::_bind_methods();
      }

      initialize_class() {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   /* EngineProfiler::is_class(String const&) const */
   undefined8 EngineProfiler::is_class(EngineProfiler *this, String *param_1) {
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
         }
 else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_0010505f;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }

                     UNLOCK();
                  }
 while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }

               }

            }
 else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         LAB_0010505f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00105113;
      }

      cVar6 = String::operator ==(param_1, "EngineProfiler");
      if (cVar6 == '\0') {
         for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
            lVar4 = *(long*)( lVar2 + 0x20 );
            if (lVar4 == 0) {
               local_60 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar4 + 8 );
               local_60 = 0;
               if (pcVar3 == (char*)0x0) {
                  plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                  if (*(long*)( lVar4 + 0x10 ) != 0) {
                     do {
                        lVar5 = *plVar1;
                        if (lVar5 == 0) goto LAB_001051eb;
                        LOCK();
                        lVar8 = *plVar1;
                        bVar9 = lVar5 == lVar8;
                        if (bVar9) {
                           *plVar1 = lVar5 + 1;
                           lVar8 = lVar5;
                        }

                        UNLOCK();
                     }
 while ( !bVar9 );
                     if (lVar8 != -1) {
                        local_60 = *(long*)( lVar4 + 0x10 );
                     }

                  }

               }
 else {
                  local_50 = strlen(pcVar3);
                  local_58 = pcVar3;
                  String::parse_latin1((StrRange*)&local_60);
               }

            }

            LAB_001051eb:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_00105113;
         }

         cVar6 = String::operator ==(param_1, "RefCounted");
         if (cVar6 == '\0') {
            for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
               lVar4 = *(long*)( lVar2 + 0x20 );
               if (lVar4 == 0) {
                  local_60 = 0;
               }
 else {
                  pcVar3 = *(char**)( lVar4 + 8 );
                  local_60 = 0;
                  if (pcVar3 == (char*)0x0) {
                     plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
                     if (*(long*)( lVar4 + 0x10 ) != 0) {
                        do {
                           lVar5 = *plVar1;
                           if (lVar5 == 0) goto LAB_001052cb;
                           LOCK();
                           lVar8 = *plVar1;
                           bVar9 = lVar5 == lVar8;
                           if (bVar9) {
                              *plVar1 = lVar5 + 1;
                              lVar8 = lVar5;
                           }

                           UNLOCK();
                        }
 while ( !bVar9 );
                        if (lVar8 != -1) {
                           local_60 = *(long*)( lVar4 + 0x10 );
                        }

                     }

                  }
 else {
                     local_50 = strlen(pcVar3);
                     local_58 = pcVar3;
                     String::parse_latin1((StrRange*)&local_60);
                  }

               }

               LAB_001052cb:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

               if (cVar6 != '\0') goto LAB_00105113;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               uVar7 = String::operator ==(param_1, "Object");
               return uVar7;
            }

            goto LAB_00105374;
         }

      }

      LAB_00105113:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

      LAB_00105374:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   /* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      char *local_78;
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
      local_78 = "RefCounted";
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
      if (local_90 == 0) {
         LAB_001054e8:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_001054e8;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)pLVar6;
            local_68 = local_80;
            goto joined_r0x00105506;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)pLVar6;
      joined_r0x00105506:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "RefCounted", false);
      ClassDB::get_property_list((StringName*)&local_78, pLVar6, true, (Object*)param_1);
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* EngineProfiler::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */
   void EngineProfiler::_get_property_listv(EngineProfiler *this, List *param_1, bool param_2) {
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
         RefCounted::_get_property_listv((List*)this, SUB81(param_1, 0));
      }

      local_88 = 0;
      local_90 = 0;
      local_78 = "EngineProfiler";
      local_70 = 0xe;
      String::parse_latin1((StrRange*)&local_90);
      local_78 = "EngineProfiler";
      local_98 = 0;
      local_70 = 0xe;
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
         LAB_001058e8:local_50 = 0x80;
         StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
         local_50 = 0x80;
         if (local_60 != 0x11) goto LAB_001058e8;
         StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
         if (local_68 != local_80) {
            StringName::unref();
            lVar2 = *(long*)param_1;
            local_68 = local_80;
            goto joined_r0x00105905;
         }

         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }

      lVar2 = *(long*)param_1;
      joined_r0x00105905:if (lVar2 == 0) {
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

      StringName::StringName((StringName*)&local_78, "EngineProfiler", false);
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

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<ObjectID, MultiplayerDebugger::SyncInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::SyncInfo> > >::operator[](ObjectID const&) */
   undefined1[16];
   __thiscall
HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
::operator[](HashMap<ObjectID,MultiplayerDebugger::SyncInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::SyncInfo>>>
             *this,ObjectID *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  undefined1 auVar9 [16];
  undefined1 auVar10 [16];
  undefined1 auVar11 [16];
  undefined1 auVar12 [16];
  undefined1 auVar13 [16];
  undefined1 auVar14 [16];
  undefined1 auVar15 [16];
  undefined1 auVar16 [16];
  undefined1 auVar17 [16];
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  undefined1 auVar23 [16];
  undefined1 auVar24 [16];
  undefined1 auVar25 [16];
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  undefined1 auVar29 [16];
  undefined1 auVar30 [16];
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined1 auVar33 [16];
  undefined1 auVar34 [16];
  undefined1 auVar35 [16];
  undefined1 (*pauVar36) [16];
  uint uVar37;
  ulong uVar38;
  ulong uVar39;
  undefined8 uVar40;
  void *__s_00;
  undefined1 (*pauVar41) [16]
   ;;
   int iVar42;
   uint uVar43;
   long lVar44;
   long lVar45;
   long lVar46;
   uint uVar47;
   undefined8 uVar48;
   uint uVar49;
   uint uVar50;
   ulong uVar51;
   long lVar52;
   uint uVar53;
   ulong uVar54;
   ulong uVar55;
   long lVar56;
   undefined1(*pauVar57)[16];
   undefined1 auVar58[16];
   long lStack_d0;
   void *local_b0;
   local_b0 = *(void**)( this + 8 );
   uVar39 = ( ulong ) * (uint*)( this + 0x28 );
   lVar56 = *(long*)param_1;
   uVar47 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar55 = CONCAT44(0, uVar47);
   if (local_b0 == (void*)0x0) {
      uVar39 = uVar55 * 4;
      uVar38 = uVar55 * 8;
      uVar40 = Memory::alloc_static(uVar39, false);
      *(undefined8*)( this + 0x10 ) = uVar40;
      lStack_d0 = 0x1062c2;
      local_b0 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( this + 8 ) = local_b0;
      if (uVar47 == 0) {
         iVar42 = *(int*)( this + 0x2c );
         lVar56 = *(long*)param_1;
         if (local_b0 == (void*)0x0) goto LAB_00105dd3;
      }
 else {
         pvVar3 = *(void**)( this + 0x10 );
         if (( pvVar3 < (void*)( (long)local_b0 + uVar38 ) ) && ( local_b0 < (void*)( (long)pvVar3 + uVar39 ) )) {
            uVar39 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar39 * 4 ) = 0;
               *(undefined8*)( (long)local_b0 + uVar39 * 8 ) = 0;
               uVar39 = uVar39 + 1;
            }
 while ( uVar55 != uVar39 );
            iVar42 = *(int*)( this + 0x2c );
            lVar56 = *(long*)param_1;
         }
 else {
            memset(pvVar3, 0, uVar39);
            lStack_d0 = 0x10630a;
            memset(local_b0, 0, uVar38);
            iVar42 = *(int*)( this + 0x2c );
            lVar56 = *(long*)param_1;
         }

      }

      if (iVar42 != 0) {
         uVar39 = ( ulong ) * (uint*)( this + 0x28 );
         lVar52 = *(long*)( this + 0x10 );
         goto LAB_00106183;
      }

   }
 else {
      iVar42 = *(int*)( this + 0x2c );
      if (iVar42 != 0) {
         lVar52 = *(long*)( this + 0x10 );
         lVar46 = *(long*)( hash_table_size_primes_inv + uVar39 * 8 );
         uVar38 = lVar56 * 0x3ffff - 1;
         uVar38 = ( uVar38 ^ uVar38 >> 0x1f ) * 0x15;
         uVar38 = ( uVar38 ^ uVar38 >> 0xb ) * 0x41;
         uVar38 = uVar38 >> 0x16 ^ uVar38;
         uVar54 = uVar38 & 0xffffffff;
         if ((int)uVar38 == 0) {
            uVar54 = 1;
         }

         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar54 * lVar46;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar55;
         lVar44 = SUB168(auVar4 * auVar20, 8);
         uVar43 = *(uint*)( lVar52 + lVar44 * 4 );
         uVar53 = SUB164(auVar4 * auVar20, 8);
         if (uVar43 != 0) {
            uVar50 = 0;
            lVar45 = lVar44;
            do {
               if (( (uint)uVar54 == uVar43 ) && ( lVar56 == *(long*)( *(long*)( (long)local_b0 + lVar44 * 8 ) + 0x10 ) )) {
                  pauVar41 = *(undefined1(**) [16])( (long)local_b0 + (ulong)uVar53 * 8 );
                  lStack_d0 = lVar45;
                  goto LAB_00105dbb;
               }

               uVar50 = uVar50 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar53 + 1) * lVar46;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar55;
               lVar44 = SUB168(auVar5 * auVar21, 8);
               uVar43 = *(uint*)( lVar52 + lVar44 * 4 );
               uVar53 = SUB164(auVar5 * auVar21, 8);
            }
 while ( ( uVar43 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar43 * lVar46,auVar22._8_8_ = 0,auVar22._0_8_ = uVar55,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar53 + uVar47 ) - SUB164(auVar6 * auVar22, 8)) * lVar46,auVar23._8_8_ = 0,auVar23._0_8_ = uVar55,lVar45 = SUB168(auVar7 * auVar23, 8),uVar50 <= SUB164(auVar7 * auVar23, 8) );
         }

         LAB_00106183:uVar51 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar39 * 4 ));
         lVar46 = *(long*)( hash_table_size_primes_inv + uVar39 * 8 );
         uVar38 = lVar56 * 0x3ffff - 1;
         uVar38 = ( uVar38 ^ uVar38 >> 0x1f ) * 0x15;
         uVar38 = ( uVar38 ^ uVar38 >> 0xb ) * 0x41;
         uVar38 = uVar38 >> 0x16 ^ uVar38;
         uVar54 = uVar38 & 0xffffffff;
         if ((int)uVar38 == 0) {
            uVar54 = 1;
         }

         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar54 * lVar46;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar51;
         lVar44 = SUB168(auVar16 * auVar32, 8);
         uVar47 = *(uint*)( lVar52 + lVar44 * 4 );
         uVar43 = SUB164(auVar16 * auVar32, 8);
         if (uVar47 != 0) {
            uVar53 = 0;
            lVar45 = lVar44;
            do {
               if (( (uint)uVar54 == uVar47 ) && ( *(long*)( *(long*)( (long)local_b0 + lVar44 * 8 ) + 0x10 ) == lVar56 )) {
                  pauVar41 = *(undefined1(**) [16])( (long)local_b0 + (ulong)uVar43 * 8 );
                  *(undefined1(*) [16])( pauVar41[1] + 8 ) = (undefined1[16])0x0;
                  *(undefined8*)( pauVar41[2] + 8 ) = 0;
                  pauVar41[3] = (undefined1[16])0x0;
                  lStack_d0 = lVar45;
                  goto LAB_00105dbb;
               }

               uVar53 = uVar53 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(uVar43 + 1) * lVar46;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar51;
               lVar44 = SUB168(auVar17 * auVar33, 8);
               uVar47 = *(uint*)( lVar52 + lVar44 * 4 );
               uVar43 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar47 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar47 * lVar46,auVar34._8_8_ = 0,auVar34._0_8_ = uVar51,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar39 * 4 ) + uVar43 ) - SUB164(auVar18 * auVar34, 8)) * lVar46,auVar35._8_8_ = 0,auVar35._0_8_ = uVar51,lVar45 = SUB168(auVar19 * auVar35, 8),uVar53 <= SUB164(auVar19 * auVar35, 8) );
         }

      }

   }

   LAB_00105dd3:if ((float)uVar55 * __LC51 < (float)( iVar42 + 1 )) {
      uVar47 = *(uint*)( this + 0x28 );
      if (uVar47 == 0x1c) {
         pauVar41 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00105dbb;
      }

      uVar39 = ( ulong )(uVar47 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar43 = *(uint*)( hash_table_size_primes + (ulong)uVar47 * 4 );
      if (uVar47 + 1 < 2) {
         uVar39 = 2;
      }

      uVar47 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
      uVar38 = (ulong)uVar47;
      *(int*)( this + 0x28 ) = (int)uVar39;
      pvVar3 = *(void**)( this + 0x10 );
      uVar39 = uVar38 * 4;
      uVar55 = uVar38 * 8;
      uVar40 = Memory::alloc_static(uVar39, false);
      *(undefined8*)( this + 0x10 ) = uVar40;
      __s_00 = (void*)Memory::alloc_static(uVar55, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar47 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar55 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
            uVar39 = 0;
            do {
               *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
               uVar39 = uVar39 + 1;
            }
 while ( uVar38 != uVar39 );
         }
 else {
            memset(__s, 0, uVar39);
            memset(__s_00, 0, uVar55);
         }

      }

      if (uVar43 != 0) {
         uVar39 = 0;
         do {
            uVar47 = *(uint*)( (long)pvVar3 + uVar39 * 4 );
            if (uVar47 != 0) {
               lVar56 = *(long*)( this + 0x10 );
               uVar49 = 0;
               uVar53 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar55 = CONCAT44(0, uVar53);
               lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar47 * lVar52;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar55;
               lVar46 = SUB168(auVar8 * auVar24, 8);
               puVar1 = (uint*)( lVar56 + lVar46 * 4 );
               iVar42 = SUB164(auVar8 * auVar24, 8);
               uVar50 = *puVar1;
               uVar40 = *(undefined8*)( (long)local_b0 + uVar39 * 8 );
               while (uVar50 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar50 * lVar52;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar55;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar53 + iVar42 ) - SUB164(auVar9 * auVar25, 8)) * lVar52;
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uVar55;
                  uVar37 = SUB164(auVar10 * auVar26, 8);
                  uVar48 = uVar40;
                  if (uVar37 < uVar49) {
                     *puVar1 = uVar47;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                     uVar48 = *puVar2;
                     *puVar2 = uVar40;
                     uVar47 = uVar50;
                     uVar49 = uVar37;
                  }

                  uVar49 = uVar49 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar42 + 1) * lVar52;
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uVar55;
                  lVar46 = SUB168(auVar11 * auVar27, 8);
                  puVar1 = (uint*)( lVar56 + lVar46 * 4 );
                  iVar42 = SUB164(auVar11 * auVar27, 8);
                  uVar40 = uVar48;
                  uVar50 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
               *puVar1 = uVar47;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar39 = uVar39 + 1;
         }
 while ( uVar39 != uVar43 );
         Memory::free_static(local_b0, false);
         Memory::free_static(pvVar3, false);
      }

   }

   uVar40 = *(undefined8*)param_1;
   pauVar41 = (undefined1(*) [16])operator_new(0x40, "");
   *pauVar41 = (undefined1[16])0x0;
   *(undefined1(*) [16])( pauVar41[1] + 8 ) = (undefined1[16])0x0;
   *(undefined8*)pauVar41[1] = uVar40;
   puVar2 = *(undefined8**)( this + 0x20 );
   *(undefined8*)( pauVar41[2] + 8 ) = 0;
   pauVar41[3] = (undefined1[16])0x0;
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar41;
   }
 else {
      *puVar2 = pauVar41;
      *(undefined8**)( *pauVar41 + 8 ) = puVar2;
   }

   lVar56 = *(long*)( this + 0x10 );
   *(undefined1(**) [16])( this + 0x20 ) = pauVar41;
   uVar39 = *(long*)param_1 * 0x3ffff - 1;
   uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
   uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
   uVar39 = uVar39 >> 0x16 ^ uVar39;
   uVar55 = uVar39 & 0xffffffff;
   if ((int)uVar39 == 0) {
      uVar55 = 1;
   }

   uVar50 = 0;
   lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar53 = (uint)uVar55;
   uVar47 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar39 = CONCAT44(0, uVar47);
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar55 * lVar52;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar39;
   lStack_d0 = SUB168(auVar12 * auVar28, 8);
   lVar46 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar56 + lStack_d0 * 4 );
   iVar42 = SUB164(auVar12 * auVar28, 8);
   uVar43 = *puVar1;
   pauVar36 = pauVar41;
   while (uVar43 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar43 * lVar52;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar39;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar47 + iVar42 ) - SUB164(auVar13 * auVar29, 8)) * lVar52;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar39;
      uVar53 = SUB164(auVar14 * auVar30, 8);
      pauVar57 = pauVar36;
      if (uVar53 < uVar50) {
         *puVar1 = (uint)uVar55;
         uVar55 = (ulong)uVar43;
         puVar2 = (undefined8*)( lVar46 + lStack_d0 * 8 );
         pauVar57 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar36;
         uVar50 = uVar53;
      }

      uVar53 = (uint)uVar55;
      uVar50 = uVar50 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar42 + 1) * lVar52;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar39;
      lStack_d0 = SUB168(auVar15 * auVar31, 8);
      puVar1 = (uint*)( lVar56 + lStack_d0 * 4 );
      iVar42 = SUB164(auVar15 * auVar31, 8);
      pauVar36 = pauVar57;
      uVar43 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar46 + lStack_d0 * 8 ) = pauVar36;
   *puVar1 = uVar53;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_00105dbb:auVar58._0_8_ = pauVar41[1] + 8;
   auVar58._8_8_ = lStack_d0;
   return auVar58;
}
/* CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_realloc(long) */undefined8 CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame>::_realloc(CowData<MultiplayerDebugger::BandwidthProfiler::BandwidthFrame> *this, long param_1) {
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
/* CowData<MultiplayerDebugger::RPCNodeInfo>::_unref() */void CowData<MultiplayerDebugger::RPCNodeInfo>::_unref(CowData<MultiplayerDebugger::RPCNodeInfo> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long lVar6;
   long lVar7;
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
            lVar7 = 0;
            lVar6 = lVar2;
            do {
               if (*(long*)( lVar6 + 8 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( lVar6 + 8 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar4 = *(long*)( lVar6 + 8 );
                     *(undefined8*)( lVar6 + 8 ) = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar7 = lVar7 + 1;
               lVar6 = lVar6 + 0x20;
            }
 while ( lVar3 != lVar7 );
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
/* CowData<MultiplayerDebugger::RPCNodeInfo>::_realloc(long) */undefined8 CowData<MultiplayerDebugger::RPCNodeInfo>::_realloc(CowData<MultiplayerDebugger::RPCNodeInfo> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<MultiplayerDebugger::RPCNodeInfo>::resize<false>(long) */undefined8 CowData<MultiplayerDebugger::RPCNodeInfo>::resize<false>(CowData<MultiplayerDebugger::RPCNodeInfo> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   undefined8 *puVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar7 = 0;
      lVar9 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar9 = lVar7 * 0x20;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x20 == 0) {
      LAB_00106860:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar10 = param_1 * 0x20 - 1;
   uVar10 = uVar10 >> 1 | uVar10;
   uVar10 = uVar10 | uVar10 >> 2;
   uVar10 = uVar10 | uVar10 >> 4;
   uVar10 = uVar10 | uVar10 >> 8;
   uVar10 = uVar10 | uVar10 >> 0x10;
   uVar10 = uVar10 | uVar10 >> 0x20;
   lVar11 = uVar10 + 1;
   if (lVar11 == 0) goto LAB_00106860;
   if (param_1 <= lVar7) {
      lVar7 = *(long*)this;
      uVar10 = param_1;
      while (lVar7 != 0) {
         if (*(ulong*)( lVar7 + -8 ) <= uVar10) {
            LAB_00106702:if (lVar11 != lVar9) {
               uVar4 = _realloc(this, lVar11);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar7 = *(long*)this;
               if (lVar7 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            *(long*)( lVar7 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            lVar3 = uVar10 * 0x20 + lVar7;
            if (*(long*)( lVar3 + 8 ) != 0) break;
            uVar10 = uVar10 + 1;
            if (*(ulong*)( lVar7 + -8 ) <= uVar10) goto LAB_00106702;
         }
;
         LOCK();
         plVar1 = (long*)( *(long*)( lVar3 + 8 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar7 = *(long*)( lVar3 + 8 );
            *(undefined8*)( lVar3 + 8 ) = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

         uVar10 = uVar10 + 1;
         lVar7 = *(long*)this;
      }
;
      goto LAB_001068b6;
   }

   if (lVar11 == lVar9) {
      LAB_001067d3:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         LAB_001068b6:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar7 = puVar8[-1];
      if (param_1 <= lVar7) goto LAB_001067b4;
   }
 else {
      if (lVar7 != 0) {
         uVar4 = _realloc(this, lVar11);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_001067d3;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar7 = 0;
   }

   puVar5 = puVar8 + lVar7 * 4;
   do {
      *puVar5 = 0;
      puVar6 = puVar5 + 4;
      puVar5[1] = 0;
      *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar8 + param_1 * 4 );
   LAB_001067b4:puVar8[-1] = param_1;
   return 0;
}
/* HashMap<ObjectID, MultiplayerDebugger::RPCNodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::RPCNodeInfo> > >::_resize_and_rehash(unsigned int) */void HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>::_resize_and_rehash(HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, MultiplayerDebugger::RPCNodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::RPCNodeInfo> > >::insert(ObjectID const&, MultiplayerDebugger::RPCNodeInfo
   const&, bool) */ObjectID *
HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>
::insert(ObjectID *param_1,RPCNodeInfo *param_2,bool param_3){
   uint *puVar1;
   uint uVar2;
   long lVar3;
   void *__s;
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
   long lVar20;
   uint uVar21;
   ulong uVar22;
   long *plVar23;
   undefined8 *puVar24;
   undefined8 uVar25;
   void *__s_00;
   long *in_RCX;
   int iVar26;
   undefined7 in_register_00000011;
   long *plVar27;
   long lVar28;
   long lVar29;
   long lVar30;
   uint uVar31;
   char in_R8B;
   uint uVar32;
   ulong uVar33;
   ulong uVar34;
   long *plVar35;
   long in_FS_OFFSET;
   long local_b8;
   long local_58;
   long local_50;
   long lStack_48;
   long local_40;
   plVar27 = (long*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (__s_00 == (void*)0x0) {
      uVar33 = (ulong)uVar2;
      uVar22 = uVar33 * 4;
      uVar34 = uVar33 * 8;
      uVar25 = Memory::alloc_static(uVar22, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar25;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar2 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar22 ) )) {
            uVar22 = 0;
            do {
               *(undefined4*)( (long)__s + uVar22 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar22 * 8 ) = 0;
               uVar22 = uVar22 + 1;
            }
 while ( uVar33 != uVar22 );
            goto LAB_00106b5a;
         }

         memset(__s, 0, uVar22);
         memset(__s_00, 0, uVar34);
         iVar26 = *(int*)( param_2 + 0x2c );
         local_b8 = *plVar27;
         goto LAB_00106b6a;
      }

      iVar26 = *(int*)( param_2 + 0x2c );
      local_b8 = *plVar27;
      if (__s_00 != (void*)0x0) goto LAB_00106b6a;
   }
 else {
      LAB_00106b5a:iVar26 = *(int*)( param_2 + 0x2c );
      local_b8 = *plVar27;
      LAB_00106b6a:if (iVar26 != 0) {
         uVar34 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar22 = local_b8 * 0x3ffff - 1;
         uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
         uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
         uVar22 = uVar22 >> 0x16 ^ uVar22;
         uVar33 = uVar22 & 0xffffffff;
         if ((int)uVar22 == 0) {
            uVar33 = 1;
         }

         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar33 * lVar3;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar34;
         lVar28 = SUB168(auVar4 * auVar12, 8);
         uVar31 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar28 * 4 );
         uVar21 = SUB164(auVar4 * auVar12, 8);
         if (uVar31 != 0) {
            uVar32 = 0;
            do {
               if (( uVar31 == (uint)uVar33 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar28 * 8 ) + 0x10 ) == local_b8 )) {
                  lVar3 = *(long*)( (long)__s_00 + (ulong)uVar21 * 8 );
                  *(long*)( lVar3 + 0x18 ) = *in_RCX;
                  if (*(long*)( lVar3 + 0x20 ) != in_RCX[1]) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar3 + 0x20 ), (CowData*)( in_RCX + 1 ));
                  }

                  lVar30 = in_RCX[3];
                  lVar28 = *(long*)( param_2 + 8 );
                  *(long*)( lVar3 + 0x28 ) = in_RCX[2];
                  *(long*)( lVar3 + 0x30 ) = lVar30;
                  plVar23 = *(long**)( lVar28 + (ulong)uVar21 * 8 );
                  goto LAB_00106f06;
               }

               uVar32 = uVar32 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar21 + 1) * lVar3;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar34;
               lVar28 = SUB168(auVar5 * auVar13, 8);
               uVar31 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar28 * 4 );
               uVar21 = SUB164(auVar5 * auVar13, 8);
            }
 while ( ( uVar31 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar31 * lVar3,auVar14._8_8_ = 0,auVar14._0_8_ = uVar34,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar21 ) - SUB164(auVar6 * auVar14, 8)) * lVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar34,uVar32 <= SUB164(auVar7 * auVar15, 8) );
         }

      }

   }

   if ((float)uVar2 * __LC51 < (float)( iVar26 + 1 )) {
      if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar23 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00106f06;
      }

      _resize_and_rehash((HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }

   local_58 = 0;
   lVar3 = *plVar27;
   lVar28 = *in_RCX;
   lVar30 = in_RCX[1];
   if (in_RCX[1] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( in_RCX + 1 ));
      lVar30 = local_58;
   }

   lVar29 = in_RCX[2];
   lVar20 = in_RCX[3];
   local_50 = lVar29;
   lStack_48 = lVar20;
   plVar23 = (long*)operator_new(0x38, "");
   *plVar23 = 0;
   plVar23[1] = 0;
   plVar23[4] = 0;
   plVar23[2] = lVar3;
   plVar23[3] = lVar28;
   if (lVar30 == 0) {
      plVar23[5] = lVar29;
      plVar23[6] = lVar20;
      LAB_00106db8:puVar24 = *(undefined8**)( param_2 + 0x20 );
      if (puVar24 != (undefined8*)0x0) goto LAB_00106dc5;
      LAB_00106f75:*(long**)( param_2 + 0x18 ) = plVar23;
      *(long**)( param_2 + 0x20 ) = plVar23;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar23 + 4 ), (CowData*)&local_58);
      plVar23[5] = lVar29;
      plVar23[6] = lVar20;
      LOCK();
      plVar35 = (long*)( lVar30 + -0x10 );
      *plVar35 = *plVar35 + -1;
      UNLOCK();
      if (*plVar35 != 0) goto LAB_00106db8;
      Memory::free_static((void*)( local_58 + -0x10 ), false);
      puVar24 = *(undefined8**)( param_2 + 0x20 );
      if (puVar24 == (undefined8*)0x0) goto LAB_00106f75;
      LAB_00106dc5:if (in_R8B == '\0') {
         *puVar24 = plVar23;
         plVar23[1] = (long)puVar24;
         *(long**)( param_2 + 0x20 ) = plVar23;
      }
 else {
         lVar3 = *(long*)( param_2 + 0x18 );
         *(long**)( lVar3 + 8 ) = plVar23;
         *plVar23 = lVar3;
         *(long**)( param_2 + 0x18 ) = plVar23;
      }

   }

   lVar3 = *(long*)( param_2 + 0x10 );
   uVar22 = *plVar27 * 0x3ffff - 1;
   uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
   uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
   uVar22 = uVar22 >> 0x16 ^ uVar22;
   uVar34 = uVar22 & 0xffffffff;
   if ((int)uVar22 == 0) {
      uVar34 = 1;
   }

   uVar32 = 0;
   lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar21 = (uint)uVar34;
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar22 = CONCAT44(0, uVar2);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar34 * lVar28;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar22;
   lVar29 = SUB168(auVar8 * auVar16, 8);
   lVar30 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar3 + lVar29 * 4 );
   iVar26 = SUB164(auVar8 * auVar16, 8);
   uVar31 = *puVar1;
   plVar27 = plVar23;
   while (uVar31 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar31 * lVar28;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar22;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( iVar26 + uVar2 ) - SUB164(auVar9 * auVar17, 8)) * lVar28;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar22;
      uVar21 = SUB164(auVar10 * auVar18, 8);
      plVar35 = plVar27;
      if (uVar21 < uVar32) {
         *puVar1 = (uint)uVar34;
         uVar34 = (ulong)uVar31;
         puVar24 = (undefined8*)( lVar30 + lVar29 * 8 );
         plVar35 = (long*)*puVar24;
         *puVar24 = plVar27;
         uVar32 = uVar21;
      }

      uVar21 = (uint)uVar34;
      uVar32 = uVar32 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar26 + 1) * lVar28;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar22;
      lVar29 = SUB168(auVar11 * auVar19, 8);
      puVar1 = (uint*)( lVar3 + lVar29 * 4 );
      iVar26 = SUB164(auVar11 * auVar19, 8);
      plVar27 = plVar35;
      uVar31 = *puVar1;
   }
;
   *(long**)( lVar30 + lVar29 * 8 ) = plVar27;
   *puVar1 = uVar21;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00106f06:*(long**)param_1 = plVar23;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, MultiplayerDebugger::RPCNodeInfo, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   MultiplayerDebugger::RPCNodeInfo> > >::operator[](ObjectID const&) */undefined1 * __thiscallHashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>>::operator [](HashMap<ObjectID,MultiplayerDebugger::RPCNodeInfo,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,MultiplayerDebugger::RPCNodeInfo>>> * this, ObjectID * param_1) * puVar1 ;long lVar2undefined8 *puVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1(*pauVar28)[16];ulong uVar29undefined1(*pauVar30)[16];ulong uVar31undefined8 uVar32void *__s_00uint uVar33long lVar34int iVar35uint uVar36uint uVar37uint uVar38ulong uVar39long lVar40ulong uVar41ulong uVar42undefined1(*pauVar43)[16];long lVar44long in_FS_OFFSETuint local_c8undefined8 local_90undefined1 local_88[16]undefined8 local_68undefined8 local_60long local_40__s_00 = *(void**)( this + 8 );lVar44 = *(long*)param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar31 = ( ulong ) * (uint*)( this + 0x28 );uVar36 = *(uint*)( hash_table_size_primes + uVar31 * 4 );uVar42 = CONCAT44(0, uVar36);if (__s_00 == (void*)0x0) {
   uVar31 = uVar42 * 4;
   local_88 = (undefined1[16])0x0;
   uVar29 = uVar42 * 8;
   local_90 = 0;
   uVar32 = Memory::alloc_static(uVar31, false);
   *(undefined8*)( this + 0x10 ) = uVar32;
   __s_00 = (void*)Memory::alloc_static(uVar29, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar36 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar29 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
         uVar31 = 0;
         do {
            *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
            uVar31 = uVar31 + 1;
         }
 while ( uVar42 != uVar31 );
         lVar44 = *(long*)param_1;
         iVar35 = *(int*)( this + 0x2c );
      }
 else {
         memset(__s, 0, uVar31);
         memset(__s_00, 0, uVar29);
         lVar44 = *(long*)param_1;
         iVar35 = *(int*)( this + 0x2c );
      }

      LAB_0010766d:if (iVar35 == 0) goto LAB_0010757e;
      uVar31 = ( ulong ) * (uint*)( this + 0x28 );
      lVar40 = *(long*)( this + 0x10 );
      goto LAB_00107247;
   }

   lVar44 = *(long*)param_1;
   iVar35 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_0010766d;
}
 else {
   iVar35 = *(int*)( this + 0x2c );
   if (iVar35 == 0) {
      local_90 = 0;
      local_88 = (undefined1[16])0x0;
      LAB_0010757e:iVar35 = 0;
   }
 else {
      lVar40 = *(long*)( this + 0x10 );
      lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
      uVar29 = lVar44 * 0x3ffff - 1;
      uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
      uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar39 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
         uVar39 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar39 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar42;
      lVar34 = SUB168(auVar4 * auVar16, 8);
      uVar33 = *(uint*)( lVar40 + lVar34 * 4 );
      uVar38 = SUB164(auVar4 * auVar16, 8);
      if (uVar33 != 0) {
         uVar37 = 0;
         do {
            if (( (uint)uVar39 == uVar33 ) && ( lVar44 == *(long*)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) )) {
               pauVar30 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar38 * 8 );
               goto LAB_001071fb;
            }

            uVar37 = uVar37 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar38 + 1) * lVar2;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar42;
            lVar34 = SUB168(auVar5 * auVar17, 8);
            uVar33 = *(uint*)( lVar40 + lVar34 * 4 );
            uVar38 = SUB164(auVar5 * auVar17, 8);
         }
 while ( ( uVar33 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar33 * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar42,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar38 + uVar36 ) - SUB164(auVar6 * auVar18, 8)) * lVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar42,uVar37 <= SUB164(auVar7 * auVar19, 8) );
      }

      local_90 = 0;
      local_88 = (undefined1[16])0x0;
      LAB_00107247:uVar39 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar31 * 4 ));
      lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
      uVar29 = lVar44 * 0x3ffff - 1;
      uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
      uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar41 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
         uVar41 = 1;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar41 * lVar2;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar34 = SUB168(auVar8 * auVar20, 8);
      uVar36 = *(uint*)( lVar40 + lVar34 * 4 );
      uVar33 = SUB164(auVar8 * auVar20, 8);
      if (uVar36 != 0) {
         uVar38 = 0;
         do {
            if (( (uint)uVar41 == uVar36 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) == lVar44 )) {
               lVar44 = *(long*)( (long)__s_00 + (ulong)uVar33 * 8 );
               *(undefined8*)( lVar44 + 0x18 ) = 0;
               if (*(long*)( lVar44 + 0x20 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar44 + 0x20 ), (CowData*)&local_90);
               }

               *(undefined1(*) [16])( lVar44 + 0x28 ) = (undefined1[16])0x0;
               pauVar30 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar33 * 8 );
               goto LAB_001071fb;
            }

            uVar38 = uVar38 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar33 + 1) * lVar2;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar39;
            lVar34 = SUB168(auVar9 * auVar21, 8);
            uVar36 = *(uint*)( lVar40 + lVar34 * 4 );
            uVar33 = SUB164(auVar9 * auVar21, 8);
         }
 while ( ( uVar36 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar36 * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar39,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar31 * 4 ) + uVar33 ) - SUB164(auVar10 * auVar22, 8)) * lVar2,auVar23._8_8_ = 0,auVar23._0_8_ = uVar39,uVar38 <= SUB164(auVar11 * auVar23, 8) );
      }

   }

}
if ((float)uVar42 * __LC51 < (float)( iVar35 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar30 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001071fb;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
local_68 = *(undefined8*)param_1;local_60 = 0;pauVar30 = (undefined1(*) [16])operator_new(0x38, "");*pauVar30 = (undefined1[16])0x0;*(undefined8*)pauVar30[2] = 0;*(undefined8*)pauVar30[1] = local_68;*(undefined1(*) [16])( pauVar30[2] + 8 ) = (undefined1[16])0x0;*(undefined8*)( pauVar30[1] + 8 ) = local_60;puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar30;
}
 else {
   *puVar3 = pauVar30;
   *(undefined8**)( *pauVar30 + 8 ) = puVar3;
}
lVar44 = *(long*)param_1;lVar40 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar30;uVar31 = lVar44 * 0x3ffff - 1;uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;uVar31 = uVar31 >> 0x16 ^ uVar31;uVar42 = uVar31 & 0xffffffff;if ((int)uVar31 == 0) {
   uVar42 = 1;
}
uVar37 = 0;lVar44 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar38 = (uint)uVar42;uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar31 = CONCAT44(0, uVar36);auVar12._8_8_ = 0;auVar12._0_8_ = uVar42 * lVar44;auVar24._8_8_ = 0;auVar24._0_8_ = uVar31;lVar34 = SUB168(auVar12 * auVar24, 8);lVar2 = *(long*)( this + 8 );puVar1 = (uint*)( lVar40 + lVar34 * 4 );iVar35 = SUB164(auVar12 * auVar24, 8);uVar33 = *puVar1;pauVar28 = pauVar30;while (uVar33 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar33 * lVar44;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar31;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( iVar35 + uVar36 ) - SUB164(auVar13 * auVar25, 8)) * lVar44;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar31;
   local_c8 = SUB164(auVar14 * auVar26, 8);
   pauVar43 = pauVar28;
   if (local_c8 < uVar37) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar33;
      puVar3 = (undefined8*)( lVar2 + lVar34 * 8 );
      pauVar43 = (undefined1(*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar37 = local_c8;
   }

   uVar38 = (uint)uVar42;
   uVar37 = uVar37 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar35 + 1) * lVar44;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar31;
   lVar34 = SUB168(auVar15 * auVar27, 8);
   puVar1 = (uint*)( lVar40 + lVar34 * 4 );
   iVar35 = SUB164(auVar15 * auVar27, 8);
   pauVar28 = pauVar43;
   uVar33 = *puVar1;
}
;*(undefined1(**) [16])( lVar2 + lVar34 * 8 ) = pauVar28;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001071fb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar30[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Control flow encountered bad instruction data *//* MultiplayerDebugger::RPCProfiler::~RPCProfiler() */void MultiplayerDebugger::RPCProfiler::~RPCProfiler(RPCProfiler *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MultiplayerDebugger::BandwidthProfiler::~BandwidthProfiler() */void MultiplayerDebugger::BandwidthProfiler::~BandwidthProfiler(BandwidthProfiler *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Ref<EngineProfiler>, DefaultAllocator>::~List() */void List<Ref<EngineProfiler>,DefaultAllocator>::~List(List<Ref<EngineProfiler>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MultiplayerDebugger::ReplicationProfiler::~ReplicationProfiler() */void MultiplayerDebugger::ReplicationProfiler::~ReplicationProfiler(ReplicationProfiler *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


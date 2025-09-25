/* GDScriptFunctionState::is_valid(bool) const */undefined8 GDScriptFunctionState::is_valid(GDScriptFunctionState *this, bool param_1) {
   pthread_mutex_t *__mutex;
   int iVar1;
   undefined8 uVar2;
   if (*(long*)( this + 0x180 ) == 0) {
      return 0;
   }

   if (!param_1) {
      return 1;
   }

   __mutex = (pthread_mutex_t*)( GDScriptLanguage::singleton + 0x208 );
   iVar1 = pthread_mutex_lock(__mutex);
   if (iVar1 == 0) {
      if (( *(long*)( this + 0x1f0 ) == 0 ) || ( ( *(long*)( this + 400 ) != 0 && ( *(long*)( this + 0x210 ) == 0 ) ) )) {
         pthread_mutex_unlock(__mutex);
         uVar2 = 0;
      }
 else {
         pthread_mutex_unlock(__mutex);
         uVar2 = 1;
      }

      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar1);
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
/* GDScriptFunctionState::~GDScriptFunctionState() */void GDScriptFunctionState::~GDScriptFunctionState(GDScriptFunctionState *this) {
   pthread_mutex_t *__mutex;
   GDScriptFunctionState *pGVar1;
   GDScriptFunctionState *pGVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   Object *pOVar6;
   char cVar7;
   int iVar8;
   *(undefined***)this = &PTR__initialize_classv_0010b760;
   __mutex = (pthread_mutex_t*)( GDScriptLanguage::singleton + 0x208 );
   iVar8 = pthread_mutex_lock(__mutex);
   if (iVar8 == 0) {
      plVar3 = *(long**)( this + 0x1f0 );
      pGVar1 = this + 0x1f0;
      if (plVar3 != (long*)0x0) {
         lVar4 = *(long*)( this + 0x200 );
         if (lVar4 != 0) {
            *(undefined8*)( lVar4 + 0x18 ) = *(undefined8*)( this + 0x208 );
         }

         lVar5 = *(long*)( this + 0x208 );
         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x10 ) = lVar4;
         }

         if (pGVar1 == (GDScriptFunctionState*)*plVar3) {
            *plVar3 = *(long*)( this + 0x200 );
         }

         if (pGVar1 == (GDScriptFunctionState*)plVar3[1]) {
            plVar3[1] = lVar5;
         }

         *(undefined8*)( this + 0x1f0 ) = 0;
         *(undefined1(*) [16])( this + 0x200 ) = (undefined1[16])0x0;
      }

      plVar3 = *(long**)( this + 0x210 );
      pGVar2 = this + 0x210;
      if (plVar3 != (long*)0x0) {
         lVar4 = *(long*)( this + 0x220 );
         if (lVar4 != 0) {
            *(undefined8*)( lVar4 + 0x18 ) = *(undefined8*)( this + 0x228 );
         }

         lVar5 = *(long*)( this + 0x228 );
         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x10 ) = lVar4;
         }

         if (pGVar2 == (GDScriptFunctionState*)*plVar3) {
            *plVar3 = *(long*)( this + 0x220 );
         }

         if (pGVar2 == (GDScriptFunctionState*)plVar3[1]) {
            plVar3[1] = lVar5;
         }

         *(undefined8*)( this + 0x210 ) = 0;
         *(undefined1(*) [16])( this + 0x220 ) = (undefined1[16])0x0;
      }

      pthread_mutex_unlock(__mutex);
      plVar3 = *(long**)( this + 0x210 );
      if (plVar3 != (long*)0x0) {
         lVar4 = *(long*)( this + 0x220 );
         if (lVar4 != 0) {
            *(undefined8*)( lVar4 + 0x18 ) = *(undefined8*)( this + 0x228 );
         }

         lVar5 = *(long*)( this + 0x228 );
         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x10 ) = lVar4;
         }

         if (pGVar2 == (GDScriptFunctionState*)*plVar3) {
            *plVar3 = *(long*)( this + 0x220 );
         }

         if (pGVar2 == (GDScriptFunctionState*)plVar3[1]) {
            plVar3[1] = lVar5;
         }

      }

      plVar3 = *(long**)( this + 0x1f0 );
      if (plVar3 != (long*)0x0) {
         lVar4 = *(long*)( this + 0x200 );
         if (lVar4 != 0) {
            *(undefined8*)( lVar4 + 0x18 ) = *(undefined8*)( this + 0x208 );
         }

         lVar5 = *(long*)( this + 0x208 );
         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x10 ) = lVar4;
         }

         if (pGVar1 == (GDScriptFunctionState*)*plVar3) {
            *plVar3 = *(long*)( this + 0x200 );
         }

         if (pGVar1 == (GDScriptFunctionState*)plVar3[1]) {
            plVar3[1] = lVar5;
         }

      }

      if (*(long*)( this + 0x1e8 ) != 0) {
         cVar7 = RefCounted::unreference();
         if (cVar7 != '\0') {
            pOVar6 = *(Object**)( this + 0x1e8 );
            cVar7 = predelete_handler(pOVar6);
            if (cVar7 != '\0') {
               ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
               Memory::free_static(pOVar6, false);
            }

         }

      }

      if (Variant::needs_deinit[*(int*)( this + 0x1d0 )] != '\0') {
         Variant::_clear_internal();
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         LOCK();
         plVar3 = (long*)( *(long*)( this + 0x1b0 ) + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            lVar4 = *(long*)( this + 0x1b0 );
            *(undefined8*)( this + 0x1b0 ) = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         LOCK();
         plVar3 = (long*)( *(long*)( this + 0x1a0 ) + -0x10 );
         *plVar3 = *plVar3 + -1;
         UNLOCK();
         if (*plVar3 == 0) {
            lVar4 = *(long*)( this + 0x1a0 );
            *(undefined8*)( this + 0x1a0 ) = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x198 ) != 0 )) {
         StringName::unref();
      }

      *(undefined***)this = &PTR__initialize_classv_0010b600;
      Object::~Object((Object*)this);
      return;
   }

   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar8);
}
/* GDScriptFunctionState::~GDScriptFunctionState() */void GDScriptFunctionState::~GDScriptFunctionState(GDScriptFunctionState *this) {
   ~GDScriptFunctionState(this)
   ;;
   operator_delete(this, 0x230);
   return;
}
/* GDScriptFunctionState::resume(Variant const&) */Variant *GDScriptFunctionState::resume(Variant *param_1) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   long *plVar2;
   long lVar3;
   char *pcVar4;
   ScriptLanguage *pSVar5;
   char cVar6;
   int iVar7;
   Object *pOVar8;
   long lVar9;
   long lVar10;
   Variant *in_RDX;
   undefined8 uVar11;
   Object *in_RSI;
   Object *pOVar12;
   int *piVar13;
   Object *pOVar14;
   long *in_FS_OFFSET;
   bool bVar15;
   long local_120;
   long local_118;
   long local_110;
   long local_108;
   long local_100;
   long local_f8;
   long local_f0;
   undefined4 local_e8;
   undefined4 uStack_e4;
   undefined4 uStack_e0;
   char *local_d8;
   size_t local_d0;
   Variant *local_c8[2];
   undefined4 local_b8[2];
   undefined8 local_b0;
   undefined8 uStack_a8;
   int local_98[8];
   int local_78[2];
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = in_FS_OFFSET[5];
   if (*(long*)( in_RSI + 0x180 ) == 0) {
      _err_print_error("resume", "modules/gdscript/gdscript_function.cpp", 0xbf, "Parameter \"function\" is null.", 0, 0);
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
      goto LAB_00100811;
   }

   __mutex = (pthread_mutex_t*)( GDScriptLanguage::singleton + 0x208 );
   iVar7 = pthread_mutex_lock(__mutex);
   if (iVar7 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar7);
   }

   plVar1 = *(long**)( in_RSI + 0x1f0 );
   if (plVar1 == (long*)0x0) {
      itos((long)&local_e8);
      local_d8 = ":";
      local_f8 = 0;
      local_d0 = 1;
      String::parse_latin1((StrRange*)&local_f8);
      local_110 = 0;
      local_d8 = "()\' after await, but script is gone. At script: ";
      local_d0 = 0x30;
      String::parse_latin1((StrRange*)&local_110);
      lVar9 = *(long*)( in_RSI + 0x198 );
      if (lVar9 == 0) {
         LAB_00100ff9:local_120 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar9 + 8 );
         local_120 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar9 + 0x10 ) + -0x10 );
            if (*(long*)( lVar9 + 0x10 ) == 0) goto LAB_00100ff9;
            do {
               lVar3 = *plVar1;
               if (lVar3 == 0) goto LAB_00100ff9;
               LOCK();
               lVar10 = *plVar1;
               bVar15 = lVar3 == lVar10;
               if (bVar15) {
                  *plVar1 = lVar3 + 1;
                  lVar10 = lVar3;
               }

               UNLOCK();
            }
 while ( !bVar15 );
            if (lVar10 != -1) {
               local_120 = *(long*)( lVar9 + 0x10 );
            }

         }
 else {
            local_d0 = strlen(pcVar4);
            local_d8 = pcVar4;
            String::parse_latin1((StrRange*)&local_120);
         }

      }

      operator+((char *)&
      local_118,(String*)"Resumed function \'";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_100, (String*)&local_108);
      String::operator +((String*)&local_f0, (String*)&local_100);
      String::operator +((String*)&local_d8, (String*)&local_f0);
      uVar11 = 0xc5;
   }
 else {
      plVar2 = *(long**)( in_RSI + 0x210 );
      if (( *(long*)( in_RSI + 400 ) == 0 ) || ( plVar2 != (long*)0x0 )) {
         lVar9 = *(long*)( in_RSI + 0x200 );
         if (lVar9 != 0) {
            *(long*)( lVar9 + 0x18 ) = *(long*)( in_RSI + 0x208 );
         }

         lVar3 = *(long*)( in_RSI + 0x208 );
         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar9;
         }

         if (in_RSI + 0x1f0 == (Object*)*plVar1) {
            *plVar1 = *(long*)( in_RSI + 0x200 );
            pOVar8 = (Object*)plVar1[1];
         }
 else {
            pOVar8 = (Object*)plVar1[1];
         }

         if (in_RSI + 0x1f0 == pOVar8) {
            plVar1[1] = lVar3;
         }

         *(long*)( in_RSI + 0x1f0 ) = 0;
         *(undefined1(*) [16])( in_RSI + 0x200 ) = (undefined1[16])0x0;
         if (plVar2 != (long*)0x0) {
            lVar9 = *(long*)( in_RSI + 0x220 );
            if (lVar9 != 0) {
               *(long*)( lVar9 + 0x18 ) = *(long*)( in_RSI + 0x228 );
            }

            lVar3 = *(long*)( in_RSI + 0x228 );
            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x10 ) = lVar9;
            }

            if (in_RSI + 0x210 == (Object*)*plVar2) {
               *plVar2 = *(long*)( in_RSI + 0x220 );
            }

            if (in_RSI + 0x210 == (Object*)plVar2[1]) {
               plVar2[1] = lVar3;
            }

            *(long*)( in_RSI + 0x210 ) = 0;
            *(undefined1(*) [16])( in_RSI + 0x220 ) = (undefined1[16])0x0;
         }

         pthread_mutex_unlock(__mutex);
         Variant::operator =((Variant*)( in_RSI + 0x1d0 ), in_RDX);
         local_e8 = 0;
         uStack_e4 = 0;
         uStack_e0 = 0;
         GDScriptFunction::call((GDScriptInstance*)local_b8, *(Variant***)( in_RSI + 0x180 ), 0, (CallError*)0x0, (CallState*)0x0);
         cVar6 = Variant::is_ref_counted();
         if (( ( ( cVar6 == '\0' ) || ( pOVar8 = Variant::operator_cast_to_Object_((Variant*)local_b8) ),pOVar8 == (Object*)0x0 ) ) || ( lVar9 = lVar9 == 0 )) {
            *(long*)( in_RSI + 0x180 ) = 0;
            local_70 = (undefined1[16])0x0;
            if (Variant::needs_deinit[*(int*)( in_RSI + 0x1d0 )] != '\0') {
               Variant::_clear_internal();
            }

            plVar1 = *(long**)( in_RSI + 0x1e8 );
            *(undefined4*)( in_RSI + 0x1d0 ) = 0;
            *(undefined8*)( in_RSI + 0x1d8 ) = local_70._0_8_;
            *(undefined8*)( in_RSI + 0x1e0 ) = local_70._8_8_;
            if (plVar1 == (long*)0x0) {
               Variant::Variant((Variant*)local_98, (Variant*)local_b8);
               if ((resume(Variant_const&)::{lambda()
               #2
               ( iVar7 = __cxa_guard_acquire(&resume(Variant_const & ::sname), iVar7 != 0) );
               {
                  _scs_create((char *)&resume(Variant_const&)::{lambda()
                  #2
                  __cxa_atexit(StringName::~StringName,
                         &resume(Variant_const&)::{lambda()
                  #2
                  __cxa_guard_release(&resume(Variant_const&)::{lambda()
                  #2
               }

               Variant::Variant((Variant*)local_78, (Variant*)local_98);
               local_60 = 0;
               local_58 = (undefined1[16])0x0;
               local_c8[0] = (Variant*)local_78;
               ( **(code**)( *(long*)in_RSI + 0xd0 ) )();
               cVar6 = Variant::needs_deinit[(int)local_60];
            }
 else {
               Variant::Variant((Variant*)local_98, (Variant*)local_b8);
               if ((resume(Variant_const&)::{lambda()
               #1
               ( iVar7 = __cxa_guard_acquire(&resume(Variant_const & ::sname), iVar7 != 0) );
               {
                  _scs_create((char *)&resume(Variant_const&)::{lambda()
                  #1
                  __cxa_atexit(StringName::~StringName,
                         &resume(Variant_const&)::{lambda()
                  #1
                  __cxa_guard_release(&resume(Variant_const&)::{lambda()
                  #1
               }

               Variant::Variant((Variant*)local_78, (Variant*)local_98);
               local_60 = 0;
               local_58 = (undefined1[16])0x0;
               local_c8[0] = (Variant*)local_78;
               (**(code **)(*plVar1 + 0xd0))
                    (plVar1,&resume(Variant_const&)::{lambda()
               #1
               cVar6 = Variant::needs_deinit[(int)local_60];
            }

            if (cVar6 != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_98[0]] != '\0') {
               Variant::_clear_internal();
            }

            lVar9 = GDScriptLanguage::singleton;
            if (( EngineDebugger::singleton != 0 ) && ( EngineDebugger::script_debugger != (ScriptLanguage*)0x0 )) {
               if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
                  ScriptDebugger::lines_left();
               }

               if (( 0 < *(int*)( (long)in_FS_OFFSET + lRam000000000010077e ) ) && ( ScriptDebugger::depth(),pSVar5 = EngineDebugger::script_debugger,-1 < *(int*)( (long)in_FS_OFFSET + lRam0000000000100f68 ) )) {
                  ScriptDebugger::depth();
                  ScriptDebugger::set_depth((int)pSVar5);
               }

               GDScriptLanguage::_call_stack();
               lVar3 = lRam0000000000100795;
               if (*(int*)( (long)in_FS_OFFSET + lRam0000000000100795 + 8 ) == 0) {
                  GDScriptLanguage::_debug_error();
                  local_d8 = "Stack Underflow (Engine Bug)";
                  local_d0 = 0x1c;
                  String::parse_latin1((StrRange*)( lRam0000000000100fb8 + *in_FS_OFFSET ));
                  ScriptDebugger::debug(EngineDebugger::script_debugger, SUB81(lVar9, 0), true);
               }
 else {
                  GDScriptLanguage::_call_stack();
                  piVar13 = (int*)( (long)in_FS_OFFSET + lVar3 + 8 );
                  *piVar13 = *piVar13 + -1;
               }

            }

            if (*(int*)( in_RSI + 0x1b8 ) != 0) {
               iVar7 = 3;
               piVar13 = (int*)( *(long*)( in_RSI + 0x1b0 ) + 0x48 );
               if (3 < *(int*)( in_RSI + 0x1b8 )) {
                  do {
                     if (Variant::needs_deinit[*piVar13] != '\0') {
                        Variant::_clear_internal();
                     }

                     iVar7 = iVar7 + 1;
                     piVar13 = piVar13 + 6;
                  }
 while ( iVar7 < *(int*)( in_RSI + 0x1b8 ) );
               }

               *(undefined4*)( in_RSI + 0x1b8 ) = 0;
            }

         }
 else {
            pOVar8 = *(Object**)( in_RSI + 0x1e8 );
            if (pOVar8 == (Object*)0x0) {
               cVar6 = RefCounted::init_ref();
               if (cVar6 != '\0') {
                  pOVar12 = *(Object**)( lVar9 + 0x1e8 );
                  pOVar8 = in_RSI;
                  pOVar14 = pOVar12;
                  if (in_RSI != pOVar12) goto LAB_001008c5;
                  goto LAB_001008fb;
               }

               LAB_00101120:pOVar12 = *(Object**)( lVar9 + 0x1e8 );
               if (pOVar12 != (Object*)0x0) {
                  *(undefined8*)( lVar9 + 0x1e8 ) = 0;
                  cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     pOVar8 = (Object*)0x0;
                     cVar6 = predelete_handler(pOVar12);
                     if (cVar6 != '\0') goto LAB_0010116c;
                  }

               }

            }
 else {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') goto LAB_00101120;
               pOVar12 = *(Object**)( lVar9 + 0x1e8 );
               pOVar14 = pOVar12;
               if (pOVar8 != pOVar12) {
                  LAB_001008c5:*(Object**)( lVar9 + 0x1e8 ) = pOVar8;
                  cVar6 = RefCounted::reference();
                  if (cVar6 == '\0') {
                     *(undefined8*)( lVar9 + 0x1e8 ) = 0;
                  }

                  pOVar14 = pOVar8;
                  if (( ( pOVar12 == (Object*)0x0 ) || ( cVar6 = RefCounted::unreference() ),cVar6 == '\0' )) goto LAB_001008fb;
                  LAB_0010116c:( **(code**)( *(long*)pOVar12 + 0x140 ) )();
                  Memory::free_static(pOVar12, false);
                  pOVar14 = pOVar8;
                  if (pOVar8 == (Object*)0x0) goto LAB_0010090b;
               }

               LAB_001008fb:cVar6 = RefCounted::unreference();
               if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
                  ( **(code**)( *(long*)pOVar14 + 0x140 ) )(pOVar14);
                  Memory::free_static(pOVar14, false);
               }

            }

            LAB_0010090b:*(long*)( in_RSI + 0x180 ) = 0;
            local_70 = (undefined1[16])0x0;
            if (Variant::needs_deinit[*(int*)( in_RSI + 0x1d0 )] == '\0') {
               *(undefined4*)( in_RSI + 0x1d0 ) = 0;
               *(undefined1(*) [16])( in_RSI + 0x1d8 ) = (undefined1[16])0x0;
            }
 else {
               Variant::_clear_internal();
               *(undefined4*)( in_RSI + 0x1d0 ) = 0;
               *(undefined8*)( in_RSI + 0x1d8 ) = local_70._0_8_;
               *(undefined8*)( in_RSI + 0x1e0 ) = local_70._8_8_;
            }

         }

         *(undefined4*)param_1 = local_b8[0];
         *(undefined8*)( param_1 + 8 ) = local_b0;
         *(undefined8*)( param_1 + 0x10 ) = uStack_a8;
         goto LAB_00100811;
      }

      itos((long)&local_e8);
      local_d8 = ":";
      local_f8 = 0;
      local_d0 = 1;
      String::parse_latin1((StrRange*)&local_f8);
      local_110 = 0;
      local_d8 = "()\' after await, but class instance is gone. At script: ";
      local_d0 = 0x38;
      String::parse_latin1((StrRange*)&local_110);
      lVar9 = *(long*)( in_RSI + 0x198 );
      if (lVar9 == 0) {
         LAB_00101051:local_120 = 0;
      }
 else {
         pcVar4 = *(char**)( lVar9 + 8 );
         local_120 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar9 + 0x10 ) + -0x10 );
            if (*(long*)( lVar9 + 0x10 ) == 0) goto LAB_00101051;
            do {
               lVar3 = *plVar1;
               if (lVar3 == 0) goto LAB_00101051;
               LOCK();
               lVar10 = *plVar1;
               bVar15 = lVar3 == lVar10;
               if (bVar15) {
                  *plVar1 = lVar3 + 1;
                  lVar10 = lVar3;
               }

               UNLOCK();
            }
 while ( !bVar15 );
            if (lVar10 != -1) {
               local_120 = *(long*)( lVar9 + 0x10 );
            }

         }
 else {
            local_d0 = strlen(pcVar4);
            local_d8 = pcVar4;
            String::parse_latin1((StrRange*)&local_120);
         }

      }

      operator+((char *)&
      local_118,(String*)"Resumed function \'";
      String::operator +((String*)&local_108, (String*)&local_118);
      String::operator +((String*)&local_100, (String*)&local_108);
      String::operator +((String*)&local_f0, (String*)&local_100);
      String::operator +((String*)&local_d8, (String*)&local_f0);
      uVar11 = 0xcc;
   }

   _err_print_error("resume", "modules/gdscript/gdscript_function.cpp", uVar11, "Method/function failed. Returning: Variant()", &local_d8, 0, 0);
   pcVar4 = local_d8;
   if (local_d8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_d8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_d8 = (char*)0x0;
         Memory::free_static(pcVar4 + -0x10, false);
      }

   }

   lVar9 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   lVar9 = local_100;
   if (local_100 != 0) {
      LOCK();
      plVar1 = (long*)( local_100 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_100 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   lVar9 = local_108;
   if (local_108 != 0) {
      LOCK();
      plVar1 = (long*)( local_108 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_108 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   lVar9 = local_118;
   if (local_118 != 0) {
      LOCK();
      plVar1 = (long*)( local_118 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_118 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   lVar9 = local_120;
   if (local_120 != 0) {
      LOCK();
      plVar1 = (long*)( local_120 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_120 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   lVar9 = local_110;
   if (local_110 != 0) {
      LOCK();
      plVar1 = (long*)( local_110 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_110 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   lVar9 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar1 = (long*)( local_f8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   if (CONCAT44(uStack_e4, local_e8) != 0) {
      LOCK();
      plVar1 = (long*)( CONCAT44(uStack_e4, local_e8) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar9 = CONCAT44(uStack_e4, local_e8);
         local_e8 = 0;
         uStack_e4 = 0;
         Memory::free_static((void*)( lVar9 + -0x10 ), false);
      }

   }

   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   pthread_mutex_unlock(__mutex);
   LAB_00100811:if (local_40 != in_FS_OFFSET[5]) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* GDScriptFunctionState::_signal_callback(Variant const**, int, Callable::CallError&) */Variant **GDScriptFunctionState::_signal_callback(Variant **param_1, int param_2, CallError *param_3) {
   CallError *pCVar1;
   char cVar2;
   long lVar3;
   Object *pOVar4;
   int in_ECX;
   undefined4 *in_R8;
   long in_FS_OFFSET;
   Array local_80[8];
   int local_78[2];
   undefined1 local_70[16];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *in_R8 = 0;
   local_78[0] = 0;
   local_78[1] = 0;
   local_70 = (undefined1[16])0x0;
   if (in_ECX == 0) {
      *in_R8 = 4;
      in_R8[2] = 1;
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
      goto LAB_001012a3;
   }

   if (in_ECX != 1) {
      if (in_ECX == 2) {
         Variant::operator =((Variant*)local_78, *(Variant**)param_3);
      }
 else {
         Array::Array(local_80);
         if (1 < in_ECX) {
            pCVar1 = param_3 + ( ulong )(in_ECX - 2) * 8 + 8;
            do {
               param_3 = param_3 + 8;
               Array::push_back((Variant*)local_80);
            }
 while ( pCVar1 != param_3 );
         }

         Variant::Variant((Variant*)local_58, local_80);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         local_78[0] = local_58[0];
         local_70._8_8_ = uStack_48;
         local_70._0_8_ = local_50;
         Array::~Array(local_80);
      }

   }

   lVar3 = Variant::get_validated_object();
   if (lVar3 == 0) {
      LAB_001013a2:*in_R8 = 2;
      in_R8[1] = in_ECX + -1;
      in_R8[2] = 0x18;
      *(undefined4*)param_1 = 0;
      *(undefined1(*) [16])( param_1 + 1 ) = (undefined1[16])0x0;
   }
 else {
      pOVar4 = (Object*)__dynamic_cast(lVar3, &Object::typeinfo, &typeinfo, 0);
      if (pOVar4 == (Object*)0x0) goto LAB_001013a2;
      cVar2 = RefCounted::reference();
      if (cVar2 == '\0') goto LAB_001013a2;
      resume((Variant*)param_1);
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(pOVar4);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_001012a3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptFunction::get_constant(int) const */Variant *GDScriptFunction::get_constant(int param_1) {
   long lVar1;
   long lVar2;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   Variant *this;
   long lVar3;
   this(Variant * CONCAT44(in_register_0000003c, param_1));
   lVar2 = (long)in_EDX;
   lVar1 = *(long*)( in_RSI + 0x198 );
   if (in_EDX < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_001014b9;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         Variant::Variant(this, (Variant*)( lVar1 + lVar2 * 0x18 ));
         return this;
      }

      goto LAB_001014b9;
   }

   lVar3 = 0;
   LAB_001014b9:_err_print_index_error("get_constant", "modules/gdscript/gdscript_function.cpp", 0x24, lVar2, lVar3, "p_idx", "constants.size()", "", false, false);
   Variant::Variant(this, "<errconst>");
   return this;
}
/* GDScriptFunction::get_global_name(int) const */StringName *GDScriptFunction::get_global_name(int param_1) {
   long lVar1;
   long lVar2;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   StringName *this;
   long lVar3;
   this(StringName * CONCAT44(in_register_0000003c, param_1));
   lVar2 = (long)in_EDX;
   lVar1 = *(long*)( in_RSI + 0x1a8 );
   if (in_EDX < 0) {
      if (lVar1 != 0) {
         lVar3 = *(long*)( lVar1 + -8 );
         goto LAB_00101551;
      }

   }
 else if (lVar1 != 0) {
      lVar3 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar3) {
         StringName::StringName(this, (StringName*)( lVar1 + lVar2 * 8 ));
         return this;
      }

      goto LAB_00101551;
   }

   lVar3 = 0;
   LAB_00101551:_err_print_index_error("get_global_name", "modules/gdscript/gdscript_function.cpp", 0x29, lVar2, lVar3, "p_idx", "global_names.size()", "", false, false);
   StringName::StringName(this, "<errgname>", false);
   return this;
}
/* GDScriptFunction::GDScriptFunction() */void GDScriptFunction::GDScriptFunction(GDScriptFunction *this) {
   pthread_mutex_t *__mutex;
   GDScriptFunction *pGVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   int iVar5;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xf0 ) = (undefined1[16])0x0;
   this[0x10] = (GDScriptFunction)0x0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x30 ) = 0;
   *(undefined4*)( this + 0x38 ) = 0;
   this[0x3c] = (GDScriptFunction)0x0;
   *(undefined4*)( this + 0x40 ) = 0;
   *(undefined4*)( this + 0x68 ) = 0;
   *(undefined4*)( this + 0x80 ) = 0;
   *(undefined8*)( this + 0x88 ) = 0;
   *(undefined4*)( this + 0x90 ) = 6;
   *(undefined8*)( this + 0x98 ) = 1;
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined8*)( this + 0xb0 ) = 0;
   *(undefined4*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 200 ) = 0;
   *(undefined4*)( this + 0xd0 ) = 0;
   *(undefined8*)( this + 0xe8 ) = 0;
   *(undefined8*)( this + 0x100 ) = 0;
   *(undefined8*)( this + 0x110 ) = 0;
   uVar3 = _LC31;
   *(undefined1(*) [16])( this + 0x128 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x160 ) = uVar3;
   *(undefined1(*) [16])( this + 0x140 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x150 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x280 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x290 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2c8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x118 ) = 0;
   *(GDScriptFunction**)( this + 0x108 ) = this;
   *(undefined4*)( this + 0x120 ) = 0;
   for (int i = 0; i < 18; i++) {
      *(undefined8*)( this + ( 16*i + 360 ) ) = 0;
   }

   *(undefined4*)( this + 0x2c0 ) = 0;
   *(undefined1(*) [16])( this + 0x2d8 ) = (undefined1[16])0x0;
   for (int i = 0; i < 7; i++) {
      *(undefined8*)( this + ( 16*i + 856 ) ) = 0;
   }

   *(undefined1(*) [16])( this + 0x2e8 ) = (undefined1[16])0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 32*i + 760 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 32*i + 776 ) ) = (undefined1[16])0;
   }

   *(undefined1(*) [16])( this + 0x3c8 ) = (undefined1[16])0x0;
   for (int i = 0; i < 6; i++) {
      *(undefined8*)( this + ( 8*i + 984 ) ) = 0;
   }

   *(undefined8*)( this + 0x448 ) = uVar3;
   *(undefined8*)( this + 0x478 ) = uVar3;
   *(undefined8*)( this + 0x418 ) = 0;
   *(undefined1(*) [16])( this + 0x408 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x428 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x438 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x458 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x468 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)&local_28, "<anonymous>", false);
   if (*(long*)this == local_28) {
      if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(long*)this = local_28;
   }

   __mutex = (pthread_mutex_t*)( GDScriptLanguage::singleton + 0x208 );
   iVar5 = pthread_mutex_lock(__mutex);
   lVar4 = GDScriptLanguage::singleton;
   if (iVar5 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar5);
   }

   pGVar1 = this + 0x100;
   if (*(long*)( this + 0x100 ) == 0) {
      *(long*)( this + 0x100 ) = GDScriptLanguage::singleton + 0x240;
      lVar2 = *(long*)( lVar4 + 0x240 );
      *(undefined8*)( this + 0x118 ) = 0;
      *(long*)( this + 0x110 ) = lVar2;
      if (lVar2 == 0) {
         *(GDScriptFunction**)( lVar4 + 0x248 ) = pGVar1;
      }
 else {
         *(GDScriptFunction**)( lVar2 + 0x18 ) = pGVar1;
      }

      *(GDScriptFunction**)( lVar4 + 0x240 ) = pGVar1;
   }
 else {
      _err_print_error(&_LC35, "./core/templates/self_list.h", 0x2e, "Condition \"p_elem->_root\" is true.", 0, 0);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      pthread_mutex_unlock(__mutex);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptFunctionState::_clear_stack() */void GDScriptFunctionState::_clear_stack(GDScriptFunctionState *this) {
   int *piVar1;
   int iVar2;
   if (*(int*)( this + 0x1b8 ) != 0) {
      if (3 < *(int*)( this + 0x1b8 )) {
         piVar1 = (int*)( *(long*)( this + 0x1b0 ) + 0x48 );
         iVar2 = 3;
         do {
            if (Variant::needs_deinit[*piVar1] != '\0') {
               Variant::_clear_internal();
            }

            iVar2 = iVar2 + 1;
            piVar1 = piVar1 + 6;
         }
 while ( iVar2 < *(int*)( this + 0x1b8 ) );
      }

      *(undefined4*)( this + 0x1b8 ) = 0;
      return;
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00101b0a) *//* WARNING: Removing unreachable block (ram,0x00101bb0) *//* WARNING: Removing unreachable block (ram,0x00101bb7) *//* WARNING: Removing unreachable block (ram,0x00101b17) *//* WARNING: Removing unreachable block (ram,0x00101bf0) *//* WARNING: Removing unreachable block (ram,0x00101b21) *//* WARNING: Removing unreachable block (ram,0x00101be0) *//* WARNING: Removing unreachable block (ram,0x00101b37) *//* WARNING: Removing unreachable block (ram,0x00101b3c) *//* WARNING: Removing unreachable block (ram,0x00101b44) *//* WARNING: Removing unreachable block (ram,0x00101b49) *//* WARNING: Removing unreachable block (ram,0x00101b4d) *//* WARNING: Removing unreachable block (ram,0x00101b5f) *//* WARNING: Removing unreachable block (ram,0x00101b65) *//* WARNING: Removing unreachable block (ram,0x00101b6d) *//* WARNING: Removing unreachable block (ram,0x00101b7b) *//* WARNING: Removing unreachable block (ram,0x00101b86) *//* WARNING: Removing unreachable block (ram,0x00101adb) *//* WARNING: Removing unreachable block (ram,0x00101ae8) *//* WARNING: Removing unreachable block (ram,0x00101afd) *//* WARNING: Removing unreachable block (ram,0x00101b01) *//* GDScriptFunctionState::_clear_connections() */void GDScriptFunctionState::_clear_connections(GDScriptFunctionState *this) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 0x100 ) )();
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* GDScriptFunctionState::GDScriptFunctionState() */void GDScriptFunctionState::GDScriptFunctionState(GDScriptFunctionState *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined***)this = &PTR__initialize_classv_0010b760;
   *(undefined8*)( this + 0x1a0 ) = 0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   *(undefined8*)( this + 0x1b8 ) = 0;
   *(undefined8*)( this + 0x1c0 ) = 0;
   *(undefined4*)( this + 0x1c8 ) = 0;
   *(undefined4*)( this + 0x1d0 ) = 0;
   *(undefined8*)( this + 0x200 ) = 0;
   *(undefined8*)( this + 0x208 ) = 0;
   *(GDScriptFunctionState**)( this + 0x1f8 ) = this;
   *(undefined8*)( this + 0x210 ) = 0;
   *(undefined8*)( this + 0x220 ) = 0;
   *(undefined8*)( this + 0x228 ) = 0;
   *(GDScriptFunctionState**)( this + 0x218 ) = this;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1d8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1e8 ) = (undefined1[16])0x0;
   return;
}
/* GDScriptFunction::debug_get_stack_member_state(int, List<Pair<StringName, int>,
   DefaultAllocator>*) const */void GDScriptFunction::debug_get_stack_member_state(GDScriptFunction *this, int param_1, List *param_2) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   undefined4 uVar4;
   long lVar5;
   undefined8 uVar6;
   long *plVar7;
   void *pvVar8;
   void *pvVar9;
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
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   undefined1 auVar32[16];
   undefined1 auVar33[16];
   undefined1 auVar34[16];
   undefined1 auVar35[16];
   undefined1 auVar36[16];
   undefined1 auVar37[16];
   undefined1 auVar38[16];
   undefined1 auVar39[16];
   undefined1 auVar40[16];
   undefined1 auVar41[16];
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   code *pcVar44;
   undefined8 uVar45;
   uint uVar46;
   long lVar47;
   int *piVar48;
   undefined4 *puVar49;
   long *plVar50;
   undefined1(*pauVar51)[16];
   undefined4 *puVar52;
   StringName *this_00;
   undefined1(*pauVar53)[16];
   int iVar54;
   uint uVar55;
   long lVar56;
   ulong uVar57;
   ulong uVar58;
   int *piVar59;
   undefined8 *puVar60;
   uint uVar61;
   ulong uVar62;
   ulong uVar63;
   ulong uVar64;
   uint uVar65;
   uint *puVar66;
   long *plVar67;
   long in_FS_OFFSET;
   int local_c4;
   undefined1(*local_a0)[16];
   ulong local_98;
   ulong local_90;
   undefined4 local_88;
   HashMap<StringName,_GDFKC,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,_GDFKC>>> local_78[8];
   undefined1 local_70[16];
   long *local_60;
   long *plStack_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (undefined1[16])0x0;
   local_50 = 2;
   local_60 = (long*)0x0;
   plStack_58 = (long*)0x0;
   if (( *(undefined8**)( this + 0x168 ) != (undefined8*)0x0 ) && ( piVar59 = (int*)**(undefined8**)( this + 0x168 ) ),piVar59 != (int*)0x0) {
      local_c4 = 0;
      do {
         if (param_1 <= *piVar59) break;
         uVar45 = local_70._0_8_;
         if ((char)piVar59[2] == '\0') {
            if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
               uVar3 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 );
               uVar63 = CONCAT44(0, uVar3);
               lVar47 = *(long*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
               if (*(long*)( piVar59 + 4 ) == 0) {
                  uVar46 = StringName::get_empty_hash();
               }
 else {
                  uVar46 = *(uint*)( *(long*)( piVar59 + 4 ) + 0x20 );
               }

               if (uVar46 == 0) {
                  uVar46 = 1;
               }

               auVar14._8_8_ = 0;
               auVar14._0_8_ = (ulong)uVar46 * lVar47;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar63;
               lVar56 = SUB168(auVar14 * auVar31, 8);
               uVar61 = *(uint*)( local_70._8_8_ + lVar56 * 4 );
               iVar54 = SUB164(auVar14 * auVar31, 8);
               if (uVar61 != 0) {
                  uVar65 = 0;
                  do {
                     if (( uVar61 == uVar46 ) && ( *(long*)( *(long*)( uVar45 + lVar56 * 8 ) + 0x10 ) == *(long*)( piVar59 + 4 ) )) {
                        lVar47 = HashMap<StringName,_GDFKC,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,_GDFKC>>>::operator [](local_78, (StringName*)( piVar59 + 4 ));
                        plVar50 = *(long**)( lVar47 + 8 );
                        if (( plVar50 != (long*)0x0 ) && ( pvVar8 = (void*)plVar50[1] ),pvVar8 != (void*)0x0) {
                           if (plVar50 == *(long**)( (long)pvVar8 + 0x18 )) {
                              lVar56 = *(long*)( (long)pvVar8 + 8 );
                              if (pvVar8 == (void*)*plVar50) {
                                 *plVar50 = lVar56;
                              }

                              lVar5 = *(long*)( (long)pvVar8 + 0x10 );
                              plVar50[1] = lVar5;
                              if (lVar5 != 0) {
                                 *(long*)( lVar5 + 8 ) = lVar56;
                                 lVar56 = *(long*)( (long)pvVar8 + 8 );
                              }

                              if (lVar56 != 0) {
                                 *(long*)( lVar56 + 0x10 ) = lVar5;
                              }

                              Memory::free_static(pvVar8, false);
                              *(int*)( plVar50 + 2 ) = (int)plVar50[2] + -1;
                           }
 else {
                              _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0);
                           }

                           if (*(int*)( (long)*(void**)( lVar47 + 8 ) + 0x10 ) == 0) {
                              Memory::free_static(*(void**)( lVar47 + 8 ), false);
                              *(undefined8*)( lVar47 + 8 ) = 0;
                           }

                        }

                        lVar47 = HashMap<StringName,_GDFKC,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,_GDFKC>>>::operator [](local_78, (StringName*)( piVar59 + 4 ));
                        if (( ( ( *(long*)( lVar47 + 8 ) != 0 ) && ( *(int*)( *(long*)( lVar47 + 8 ) + 0x10 ) != 0 ) ) || ( uVar45 = local_70._0_8_ == 0 ) ) || ( iVar54 = local_50._4_4_ == 0 )) goto LAB_00101ed8;
                        uVar3 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 );
                        lVar47 = *(long*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
                        if (*(long*)( piVar59 + 4 ) == 0) {
                           uVar46 = StringName::get_empty_hash();
                        }
 else {
                           uVar46 = *(uint*)( *(long*)( piVar59 + 4 ) + 0x20 );
                        }

                        uVar63 = CONCAT44(0, uVar3);
                        if (uVar46 == 0) {
                           uVar46 = 1;
                        }

                        auVar18._8_8_ = 0;
                        auVar18._0_8_ = (ulong)uVar46 * lVar47;
                        auVar35._8_8_ = 0;
                        auVar35._0_8_ = uVar63;
                        uVar57 = SUB168(auVar18 * auVar35, 8);
                        uVar61 = *(uint*)( local_70._8_8_ + uVar57 * 4 );
                        uVar62 = (ulong)SUB164(auVar18 * auVar35, 8);
                        if (uVar61 == 0) goto LAB_00101ed8;
                        uVar65 = 0;
                        goto LAB_0010225c;
                     }

                     uVar65 = uVar65 + 1;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = ( ulong )(iVar54 + 1) * lVar47;
                     auVar32._8_8_ = 0;
                     auVar32._0_8_ = uVar63;
                     lVar56 = SUB168(auVar15 * auVar32, 8);
                     uVar61 = *(uint*)( local_70._8_8_ + lVar56 * 4 );
                     iVar54 = SUB164(auVar15 * auVar32, 8);
                  }
 while ( ( uVar61 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar61 * lVar47,auVar33._8_8_ = 0,auVar33._0_8_ = uVar63,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar3 + iVar54 ) - SUB164(auVar16 * auVar33, 8)) * lVar47,auVar34._8_8_ = 0,auVar34._0_8_ = uVar63,uVar65 <= SUB164(auVar17 * auVar34, 8) );
               }

            }

            _err_print_error("debug_get_stack_member_state", "modules/gdscript/gdscript_function.cpp", 0x4f, "Condition \"!sdmap.has(sd.identifier)\" is true. Continuing.", 0, 0);
         }
 else {
            if (( local_70._0_8_ != 0 ) && ( local_50._4_4_ != 0 )) {
               uVar3 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 );
               uVar63 = CONCAT44(0, uVar3);
               lVar47 = *(long*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
               if (*(long*)( piVar59 + 4 ) == 0) {
                  uVar46 = StringName::get_empty_hash();
               }
 else {
                  uVar46 = *(uint*)( *(long*)( piVar59 + 4 ) + 0x20 );
               }

               if (uVar46 == 0) {
                  uVar46 = 1;
               }

               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar46 * lVar47;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar63;
               lVar56 = SUB168(auVar10 * auVar27, 8);
               uVar61 = *(uint*)( local_70._8_8_ + lVar56 * 4 );
               iVar54 = SUB164(auVar10 * auVar27, 8);
               if (uVar61 != 0) {
                  uVar65 = 0;
                  do {
                     if (( uVar61 == uVar46 ) && ( *(long*)( *(long*)( uVar45 + lVar56 * 8 ) + 0x10 ) == *(long*)( piVar59 + 4 ) )) {
                        lVar47 = HashMap<StringName,_GDFKC,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,_GDFKC>>>::operator [](local_78, (StringName*)( piVar59 + 4 ));
                        if (*(long*)( lVar47 + 8 ) == 0) {
                           pauVar53 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                           *(undefined1(**) [16])( lVar47 + 8 ) = pauVar53;
                           *(undefined4*)pauVar53[1] = 0;
                           *pauVar53 = (undefined1[16])0x0;
                        }

                        piVar48 = (int*)operator_new(0x20, DefaultAllocator::alloc);
                        iVar54 = piVar59[1];
                        piVar48[2] = 0;
                        piVar48[3] = 0;
                        *piVar48 = iVar54;
                        plVar50 = *(long**)( lVar47 + 8 );
                        lVar47 = plVar50[1];
                        *(long**)( piVar48 + 6 ) = plVar50;
                        *(long*)( piVar48 + 4 ) = lVar47;
                        if (lVar47 != 0) {
                           *(int**)( lVar47 + 8 ) = piVar48;
                        }

                        plVar50[1] = (long)piVar48;
                        if (*plVar50 == 0) {
                           *plVar50 = (long)piVar48;
                        }

                        *(int*)( plVar50 + 2 ) = (int)plVar50[2] + 1;
                        goto LAB_00101ed8;
                     }

                     uVar65 = uVar65 + 1;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = ( ulong )(iVar54 + 1) * lVar47;
                     auVar28._8_8_ = 0;
                     auVar28._0_8_ = uVar63;
                     lVar56 = SUB168(auVar11 * auVar28, 8);
                     uVar61 = *(uint*)( local_70._8_8_ + lVar56 * 4 );
                     iVar54 = SUB164(auVar11 * auVar28, 8);
                  }
 while ( ( uVar61 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar61 * lVar47,auVar29._8_8_ = 0,auVar29._0_8_ = uVar63,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar3 + iVar54 ) - SUB164(auVar12 * auVar29, 8)) * lVar47,auVar30._8_8_ = 0,auVar30._0_8_ = uVar63,uVar65 <= SUB164(auVar13 * auVar30, 8) );
               }

            }

            pauVar53 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)pauVar53[1] = 0;
            *pauVar53 = (undefined1[16])0x0;
            piVar48 = (int*)operator_new(0x20, DefaultAllocator::alloc);
            iVar54 = piVar59[1];
            piVar48[2] = 0;
            piVar48[3] = 0;
            *piVar48 = iVar54;
            lVar47 = *(long*)( *pauVar53 + 8 );
            *(undefined1(**) [16])( piVar48 + 6 ) = pauVar53;
            *(long*)( piVar48 + 4 ) = lVar47;
            if (lVar47 != 0) {
               *(int**)( lVar47 + 8 ) = piVar48;
            }

            lVar47 = *(long*)*pauVar53;
            *(int**)( *pauVar53 + 8 ) = piVar48;
            if (lVar47 == 0) {
               *(int**)*pauVar53 = piVar48;
            }

            *(int*)pauVar53[1] = *(int*)pauVar53[1] + 1;
            piVar48 = (int*)HashMap<StringName,_GDFKC,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,_GDFKC>>>::operator [](local_78, (StringName*)( piVar59 + 4 ));
            plVar50 = *(long**)( piVar48 + 2 );
            *piVar48 = local_c4;
            if (plVar50 != (long*)0x0) {
               do {
                  pvVar8 = (void*)*plVar50;
                  if (pvVar8 == (void*)0x0) {
                     puVar49 = *(undefined4**)*pauVar53;
                     if (puVar49 == (undefined4*)0x0) goto LAB_00102677;
                     goto LAB_0010257d;
                  }

                  if (*(long**)( (long)pvVar8 + 0x18 ) == plVar50) {
                     lVar47 = *(long*)( (long)pvVar8 + 8 );
                     lVar56 = *(long*)( (long)pvVar8 + 0x10 );
                     *plVar50 = lVar47;
                     if (pvVar8 == (void*)plVar50[1]) {
                        plVar50[1] = lVar56;
                     }

                     if (lVar56 != 0) {
                        *(long*)( lVar56 + 8 ) = lVar47;
                        lVar47 = *(long*)( (long)pvVar8 + 8 );
                     }

                     if (lVar47 != 0) {
                        *(long*)( lVar47 + 0x10 ) = lVar56;
                     }

                     Memory::free_static(pvVar8, false);
                     *(int*)( plVar50 + 2 ) = (int)plVar50[2] + -1;
                  }
 else {
                     _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                  }

                  plVar50 = *(long**)( piVar48 + 2 );
               }
 while ( (int)plVar50[2] != 0 );
               Memory::free_static(plVar50, false);
               piVar48[2] = 0;
               piVar48[3] = 0;
            }

            puVar49 = *(undefined4**)*pauVar53;
            if (puVar49 == (undefined4*)0x0) {
               LAB_00102677:if (*(int*)pauVar53[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  local_c4 = local_c4 + 1;
                  goto LAB_00101ed8;
               }

            }
 else {
               pauVar51 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])( piVar48 + 2 ) = pauVar51;
               *(undefined4*)pauVar51[1] = 0;
               *pauVar51 = (undefined1[16])0x0;
               LAB_0010257d:do {
                  puVar52 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
                  uVar4 = *puVar49;
                  *(undefined8*)( puVar52 + 2 ) = 0;
                  *puVar52 = uVar4;
                  plVar50 = *(long**)( piVar48 + 2 );
                  lVar47 = plVar50[1];
                  *(long**)( puVar52 + 6 ) = plVar50;
                  *(long*)( puVar52 + 4 ) = lVar47;
                  if (lVar47 != 0) {
                     *(undefined4**)( lVar47 + 8 ) = puVar52;
                  }

                  plVar50[1] = (long)puVar52;
                  if (*plVar50 == 0) {
                     puVar49 = *(undefined4**)( puVar49 + 2 );
                     *(int*)( plVar50 + 2 ) = (int)plVar50[2] + 1;
                     *plVar50 = (long)puVar52;
                     if (puVar49 == (undefined4*)0x0) break;
                     goto LAB_0010257d;
                  }

                  puVar49 = *(undefined4**)( puVar49 + 2 );
                  *(int*)( plVar50 + 2 ) = (int)plVar50[2] + 1;
               }
 while ( puVar49 != (undefined4*)0x0 );
               LAB_001025d0:do {
                  pvVar8 = *(void**)*pauVar53;
                  if (pvVar8 == (void*)0x0) goto LAB_00102677;
                  if (pauVar53 == *(undefined1(**) [16])( (long)pvVar8 + 0x18 )) {
                     lVar47 = *(long*)( (long)pvVar8 + 8 );
                     lVar56 = *(long*)( (long)pvVar8 + 0x10 );
                     *(long*)*pauVar53 = lVar47;
                     if (pvVar8 == *(void**)( *pauVar53 + 8 )) {
                        *(long*)( *pauVar53 + 8 ) = lVar56;
                     }

                     if (lVar56 != 0) {
                        *(long*)( lVar56 + 8 ) = lVar47;
                        lVar47 = *(long*)( (long)pvVar8 + 8 );
                     }

                     if (lVar47 != 0) {
                        *(long*)( lVar47 + 0x10 ) = lVar56;
                     }

                     Memory::free_static(pvVar8, false);
                     pauVar51 = pauVar53 + 1;
                     *(int*)*pauVar51 = *(int*)*pauVar51 + -1;
                     if (*(int*)*pauVar51 == 0) break;
                     goto LAB_001025d0;
                  }

                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }
 while ( *(int*)pauVar53[1] != 0 );
            }

            Memory::free_static(pauVar53, false);
            local_c4 = local_c4 + 1;
         }

         LAB_00101ed8:piVar59 = *(int**)( piVar59 + 6 );
      }
 while ( piVar59 != (int*)0x0 );
      local_a0 = (undefined1(*) [16])0x0;
      if (local_60 != (long*)0x0) {
         plVar50 = local_60;
         do {
            local_98 = local_98 & 0xffffffff00000000;
            local_90 = 0;
            local_88 = 0;
            StringName::operator =((StringName*)&local_90, (StringName*)( plVar50 + 2 ));
            local_98 = CONCAT44(local_98._4_4_, (int)plVar50[3]);
            if (plVar50[4] == 0) {
               /* WARNING: Does not return */
               pcVar44 = (code*)invalidInstructionException();
               ( *pcVar44 )();
            }

            local_88 = **(undefined4**)( plVar50[4] + 8 );
            if (local_a0 == (undefined1(*) [16])0x0) {
               local_a0 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_a0[1] = 0;
               *local_a0 = (undefined1[16])0x0;
            }

            pauVar53 = local_a0;
            puVar49 = (undefined4*)operator_new(0x30, DefaultAllocator::alloc);
            *puVar49 = 0;
            *(undefined8*)( puVar49 + 2 ) = 0;
            puVar49[4] = 0;
            *(undefined8*)( puVar49 + 10 ) = 0;
            *(undefined1(*) [16])( puVar49 + 6 ) = (undefined1[16])0x0;
            *puVar49 = (undefined4)local_98;
            StringName::operator =((StringName*)( puVar49 + 2 ), (StringName*)&local_90);
            puVar49[4] = local_88;
            lVar47 = *(long*)( *pauVar53 + 8 );
            *(undefined8*)( puVar49 + 6 ) = 0;
            *(long*)( puVar49 + 8 ) = lVar47;
            *(undefined1(**) [16])( puVar49 + 10 ) = pauVar53;
            if (lVar47 != 0) {
               *(undefined4**)( lVar47 + 0x18 ) = puVar49;
            }

            lVar47 = *(long*)*pauVar53;
            *(undefined4**)( *pauVar53 + 8 ) = puVar49;
            if (lVar47 == 0) {
               *(undefined4**)*pauVar53 = puVar49;
            }

            *(int*)pauVar53[1] = *(int*)pauVar53[1] + 1;
            if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
               StringName::unref();
            }

            plVar50 = (long*)*plVar50;
         }
 while ( plVar50 != (long*)0x0 );
         List<_GDFKCS,DefaultAllocator>::sort_custom<Comparator<_GDFKCS>>((List<_GDFKCS,DefaultAllocator>*)&local_a0);
         for (lVar47 = *(long*)*pauVar53; lVar47 != 0; lVar47 = *(long*)( lVar47 + 0x18 )) {
            local_98 = 0;
            local_90 = local_90 & 0xffffffff00000000;
            StringName::operator =((StringName*)&local_98, (StringName*)( lVar47 + 8 ));
            local_90 = CONCAT44(local_90._4_4_, *(undefined4*)( lVar47 + 0x10 ));
            if (*(long*)param_2 == 0) {
               pauVar53 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined1(**) [16])param_2 = pauVar53;
               *(undefined4*)pauVar53[1] = 0;
               *pauVar53 = (undefined1[16])0x0;
            }

            this_00 = (StringName*)operator_new(0x28, DefaultAllocator::alloc);
            *(undefined8*)this_00 = 0;
            *(undefined4*)( this_00 + 8 ) = 0;
            *(undefined8*)( this_00 + 0x20 ) = 0;
            *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
            StringName::operator =(this_00, (StringName*)&local_98);
            *(undefined4*)( this_00 + 8 ) = (undefined4)local_90;
            plVar50 = *(long**)param_2;
            lVar56 = plVar50[1];
            *(undefined8*)( this_00 + 0x10 ) = 0;
            *(long**)( this_00 + 0x20 ) = plVar50;
            *(long*)( this_00 + 0x18 ) = lVar56;
            if (lVar56 != 0) {
               *(StringName**)( lVar56 + 0x10 ) = this_00;
            }

            plVar50[1] = (long)this_00;
            if (*plVar50 == 0) {
               *plVar50 = (long)this_00;
            }

            *(int*)( plVar50 + 2 ) = (int)plVar50[2] + 1;
            if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
               StringName::unref();
            }

         }

         goto LAB_00102850;
      }

   }

   local_a0 = (undefined1(*) [16])0x0;
   List<_GDFKCS,DefaultAllocator>::sort_custom<Comparator<_GDFKCS>>((List<_GDFKCS,DefaultAllocator>*)&local_a0);
   LAB_00102850:List<_GDFKCS,DefaultAllocator>::~List((List<_GDFKCS,DefaultAllocator>*)&local_a0);
   uVar45 = local_70._0_8_;
   if ((undefined8*)local_70._0_8_ == (undefined8*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      uVar6 = local_70._8_8_;
      if (( local_50._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) != 0 )) {
         piVar59 = (int*)( local_70._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) * 4 );
         piVar48 = (int*)local_70._8_8_;
         puVar60 = (undefined8*)local_70._0_8_;
         do {
            if (*piVar48 != 0) {
               pvVar8 = (void*)*puVar60;
               *piVar48 = 0;
               plVar50 = *(long**)( (long)pvVar8 + 0x20 );
               if (plVar50 != (long*)0x0) {
                  do {
                     pvVar9 = (void*)*plVar50;
                     if (pvVar9 == (void*)0x0) {
                        if ((int)plVar50[2] != 0) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           goto LAB_0010292d;
                        }

                        break;
                     }

                     if (*(long**)( (long)pvVar9 + 0x18 ) == plVar50) {
                        lVar47 = *(long*)( (long)pvVar9 + 8 );
                        lVar56 = *(long*)( (long)pvVar9 + 0x10 );
                        *plVar50 = lVar47;
                        if (pvVar9 == (void*)plVar50[1]) {
                           plVar50[1] = lVar56;
                        }

                        if (lVar56 != 0) {
                           *(long*)( lVar56 + 8 ) = lVar47;
                           lVar47 = *(long*)( (long)pvVar9 + 8 );
                        }

                        if (lVar47 != 0) {
                           *(long*)( lVar47 + 0x10 ) = lVar56;
                        }

                        Memory::free_static(pvVar9, false);
                        *(int*)( plVar50 + 2 ) = (int)plVar50[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     plVar50 = *(long**)( (long)pvVar8 + 0x20 );
                  }
 while ( (int)plVar50[2] != 0 );
                  Memory::free_static(plVar50, false);
               }

               LAB_0010292d:if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar8 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar8, false);
               *puVar60 = 0;
            }

            piVar48 = piVar48 + 1;
            puVar60 = puVar60 + 1;
         }
 while ( piVar48 != piVar59 );
      }

      Memory::free_static((void*)uVar45, false);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static((void*)uVar6, false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_0010225c:auVar21._8_8_ = 0;
   auVar21._0_8_ = ( ulong )((int)uVar62 + 1) * lVar47;
   auVar38._8_8_ = 0;
   auVar38._0_8_ = uVar63;
   uVar58 = SUB168(auVar21 * auVar38, 8);
   uVar55 = SUB164(auVar21 * auVar38, 8);
   if (( uVar61 != uVar46 ) || ( *(long*)( *(long*)( uVar45 + uVar57 * 8 ) + 0x10 ) != *(long*)( piVar59 + 4 ) )) goto LAB_00102220;
   puVar66 = (uint*)( local_70._8_8_ + uVar58 * 4 );
   uVar57 = (ulong)uVar55;
   uVar64 = ( ulong ) * puVar66;
   if (( *puVar66 != 0 ) && ( auVar22._8_8_ = 0 ),auVar22._0_8_ = uVar64 * lVar47,auVar39._8_8_ = 0,auVar39._0_8_ = uVar63,auVar23._8_8_ = 0,auVar23._0_8_ = ( ulong )(( uVar55 + uVar3 ) - SUB164(auVar22 * auVar39, 8)) * lVar47,auVar40._8_8_ = 0,auVar40._0_8_ = uVar63,SUB164(auVar23 * auVar40, 8) != 0) {
      while (true) {
         puVar1 = (uint*)( local_70._8_8_ + uVar62 * 4 );
         *puVar66 = *puVar1;
         puVar60 = (undefined8*)( uVar45 + uVar58 * 8 );
         *puVar1 = (uint)uVar64;
         puVar2 = (undefined8*)( uVar45 + uVar62 * 8 );
         uVar6 = *puVar60;
         *puVar60 = *puVar2;
         *puVar2 = uVar6;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = ( ulong )((int)uVar57 + 1) * lVar47;
         auVar43._8_8_ = 0;
         auVar43._0_8_ = uVar63;
         uVar58 = SUB168(auVar26 * auVar43, 8);
         puVar66 = (uint*)( local_70._8_8_ + uVar58 * 4 );
         uVar64 = ( ulong ) * puVar66;
         uVar62 = uVar57;
         if (( *puVar66 == 0 ) || ( auVar24._8_8_ = 0 ),auVar24._0_8_ = uVar64 * lVar47,auVar41._8_8_ = 0,auVar41._0_8_ = uVar63,auVar25._8_8_ = 0,auVar25._0_8_ = ( ulong )(( SUB164(auVar26 * auVar43, 8) + uVar3 ) - SUB164(auVar24 * auVar41, 8)) * lVar47,auVar42._8_8_ = 0,auVar42._0_8_ = uVar63,SUB164(auVar25 * auVar42, 8) == 0) break;
         uVar57 = uVar58 & 0xffffffff;
      }
;
   }

   puVar60 = (undefined8*)( uVar45 + uVar62 * 8 );
   *(undefined4*)( local_70._8_8_ + uVar62 * 4 ) = 0;
   plVar67 = (long*)*puVar60;
   plVar50 = (long*)*plVar67;
   if (local_60 == plVar67) {
      local_60 = plVar50;
   }

   plVar7 = (long*)plVar67[1];
   if (plVar67 == plStack_58) {
      plStack_58 = plVar7;
   }

   if (plVar7 != (long*)0x0) {
      *plVar7 = (long)plVar50;
      plVar67 = (long*)*puVar60;
      plVar50 = (long*)*plVar67;
   }

   if (plVar50 != (long*)0x0) {
      plVar50[1] = plVar67[1];
      plVar67 = (long*)*puVar60;
   }

   plVar50 = (long*)plVar67[4];
   if (plVar50 != (long*)0x0) {
      do {
         pvVar8 = (void*)*plVar50;
         if (pvVar8 == (void*)0x0) {
            if ((int)plVar50[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_001023fd;
            }

            break;
         }

         if (plVar50 == *(long**)( (long)pvVar8 + 0x18 )) {
            lVar47 = *(long*)( (long)pvVar8 + 8 );
            lVar56 = *(long*)( (long)pvVar8 + 0x10 );
            *plVar50 = lVar47;
            if (pvVar8 == (void*)plVar50[1]) {
               plVar50[1] = lVar56;
            }

            if (lVar56 != 0) {
               *(long*)( lVar56 + 8 ) = lVar47;
               lVar47 = *(long*)( (long)pvVar8 + 8 );
            }

            if (lVar47 != 0) {
               *(long*)( lVar47 + 0x10 ) = lVar56;
            }

            Memory::free_static(pvVar8, false);
            *(int*)( plVar50 + 2 ) = (int)plVar50[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar50 = (long*)plVar67[4];
      }
 while ( (int)plVar50[2] != 0 );
      Memory::free_static(plVar50, false);
   }

   LAB_001023fd:if (( StringName::configured != '\0' ) && ( plVar67[2] != 0 )) {
      StringName::unref();
   }

   Memory::free_static(plVar67, false);
   *puVar60 = 0;
   local_50 = CONCAT44(iVar54 + -1, (undefined4)local_50);
   goto LAB_00101ed8;
   LAB_00102220:uVar61 = *(uint*)( local_70._8_8_ + uVar58 * 4 );
   uVar62 = uVar58 & 0xffffffff;
   uVar65 = uVar65 + 1;
   if (( uVar61 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar61 * lVar47,auVar36._8_8_ = 0,auVar36._0_8_ = uVar63,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar3 + uVar55 ) - SUB164(auVar19 * auVar36, 8)) * lVar47,auVar37._8_8_ = 0,auVar37._0_8_ = uVar63,uVar57 = uVar58,SUB164(auVar20 * auVar37, 8) < uVar65) goto LAB_00101ed8;
   goto LAB_0010225c;
}
/* GDScriptFunction::~GDScriptFunction() */void GDScriptFunction::~GDScriptFunction(GDScriptFunction *this) {
   pthread_mutex_t *__mutex;
   long *plVar1;
   uint *puVar2;
   uint uVar3;
   long lVar4;
   undefined8 uVar5;
   GDScriptFunction *pGVar6;
   Object *pOVar7;
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
   undefined1 auVar27[16];
   code *pcVar28;
   char cVar29;
   int iVar30;
   uint uVar31;
   long lVar32;
   undefined8 *puVar33;
   long lVar34;
   uint uVar35;
   uint uVar36;
   long lVar37;
   ulong uVar38;
   long *plVar39;
   long lVar40;
   long lVar41;
   ulong uVar42;
   void *pvVar43;
   ulong uVar44;
   uint uVar45;
   uint *puVar46;
   Object *pOVar47;
   CowData<GDScriptDataType> *this_00;
   ulong uVar48;
   undefined8 *puVar49;
   bool bVar50;
   long local_58;
   lVar41 = *(long*)( this + 0xe8 );
   if (( *(long*)( lVar41 + 0x338 ) != 0 ) && ( *(int*)( lVar41 + 0x35c ) != 0 )) {
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar41 + 0x358 ) * 4 );
      uVar44 = CONCAT44(0, uVar3);
      lVar40 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar41 + 0x358 ) * 8 );
      if (*(long*)this == 0) {
         uVar31 = StringName::get_empty_hash();
      }
 else {
         uVar31 = *(uint*)( *(long*)this + 0x20 );
      }

      lVar32 = *(long*)( lVar41 + 0x340 );
      if (uVar31 == 0) {
         uVar31 = 1;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar31 * lVar40;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar44;
      lVar37 = SUB168(auVar8 * auVar18, 8);
      uVar36 = *(uint*)( lVar32 + lVar37 * 4 );
      uVar35 = SUB164(auVar8 * auVar18, 8);
      if (uVar36 != 0) {
         uVar45 = 0;
         LAB_00102cf3:uVar42 = (ulong)uVar35;
         if (( uVar36 != uVar31 ) || ( lVar4 = *(long*)( lVar41 + 0x338 ) * (long*)( *(long*)( lVar4 + lVar37 * 8 ) + 0x10 ) != *(long*)this )) goto LAB_00102ca8;
         lVar40 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar41 + 0x358 ) * 8 );
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar41 + 0x358 ) * 4 );
         uVar48 = CONCAT44(0, uVar3);
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(uVar35 + 1) * lVar40;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar48;
         uVar38 = SUB168(auVar12 * auVar22, 8);
         puVar46 = (uint*)( lVar32 + uVar38 * 4 );
         uVar36 = SUB164(auVar12 * auVar22, 8);
         uVar44 = (ulong)uVar36;
         uVar31 = *puVar46;
         if (( uVar31 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar31 * lVar40,auVar23._8_8_ = 0,auVar23._0_8_ = uVar48,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar3 + uVar36 ) - SUB164(auVar13 * auVar23, 8)) * lVar40,auVar24._8_8_ = 0,auVar24._0_8_ = uVar48,SUB164(auVar14 * auVar24, 8) != 0) {
            while (true) {
               puVar2 = (uint*)( lVar32 + uVar42 * 4 );
               *puVar46 = *puVar2;
               puVar49 = (undefined8*)( lVar4 + uVar38 * 8 );
               *puVar2 = uVar31;
               puVar33 = (undefined8*)( lVar4 + uVar42 * 8 );
               uVar5 = *puVar49;
               *puVar49 = *puVar33;
               uVar35 = (uint)uVar44;
               *puVar33 = uVar5;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(uVar35 + 1) * lVar40;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar48;
               uVar38 = SUB168(auVar17 * auVar27, 8);
               puVar46 = (uint*)( lVar32 + uVar38 * 4 );
               uVar31 = *puVar46;
               if (( uVar31 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar31 * lVar40,auVar25._8_8_ = 0,auVar25._0_8_ = uVar48,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( SUB164(auVar17 * auVar27, 8) + uVar3 ) - SUB164(auVar15 * auVar25, 8)) * lVar40,auVar26._8_8_ = 0,auVar26._0_8_ = uVar48,SUB164(auVar16 * auVar26, 8) == 0) break;
               uVar42 = uVar44;
               uVar44 = uVar38 & 0xffffffff;
            }
;
         }

         uVar44 = (ulong)uVar35;
         *(undefined4*)( lVar32 + uVar44 * 4 ) = 0;
         plVar1 = (long*)( lVar4 + uVar44 * 8 );
         plVar39 = (long*)*plVar1;
         if (*(long**)( lVar41 + 0x348 ) == plVar39) {
            *(long*)( lVar41 + 0x348 ) = *plVar39;
            plVar39 = (long*)*plVar1;
         }

         if (plVar39 == *(long**)( lVar41 + 0x350 )) {
            *(long*)( lVar41 + 0x350 ) = plVar39[1];
            plVar39 = (long*)*plVar1;
         }

         if ((long*)plVar39[1] != (long*)0x0) {
            *(long*)plVar39[1] = *plVar39;
            plVar39 = (long*)*plVar1;
         }

         if (*plVar39 != 0) {
            *(long*)( *plVar39 + 8 ) = plVar39[1];
            plVar39 = (long*)*plVar1;
         }

         if (( StringName::configured != '\0' ) && ( plVar39[2] != 0 )) {
            StringName::unref();
         }

         Memory::free_static(plVar39, false);
         *(undefined8*)( *(long*)( lVar41 + 0x338 ) + uVar44 * 8 ) = 0;
         *(int*)( lVar41 + 0x35c ) = *(int*)( lVar41 + 0x35c ) + -1;
      }

   }

   LAB_00102e92:lVar41 = *(long*)( this + 0x278 );
   if (lVar41 != 0) {
      lVar40 = 0;
      do {
         if (*(long*)( lVar41 + -8 ) <= lVar40) break;
         pGVar6 = *(GDScriptFunction**)( lVar41 + lVar40 * 8 );
         lVar40 = lVar40 + 1;
         ~GDScriptFunction(pGVar6)
         ;;
         Memory::free_static(pGVar6, false);
         lVar41 = *(long*)( this + 0x278 );
      }
 while ( lVar41 != 0 );
   }

   puVar49 = *(undefined8**)( this + 0x20 );
   if (puVar49 != (undefined8*)0x0) {
      lVar40 = 0;
      lVar41 = 0;
      LAB_00102ef1:do {
         if ((long)puVar49[-1] <= lVar41) break;
         if ((ulong)puVar49[-2] < 2) {
            puVar49 = *(undefined8**)( this + 0x20 );
            LAB_00102f09:lVar32 = (long)puVar49 + lVar40;
            pOVar47 = *(Object**)( lVar32 + 0x30 );
            if (pOVar47 != (Object*)0x0) goto LAB_00102f16;
         }
 else {
            if (*(long*)( this + 0x20 ) == 0) {
               /* WARNING: Does not return */
               pcVar28 = (code*)invalidInstructionException();
               ( *pcVar28 )();
            }

            lVar32 = *(long*)( *(long*)( this + 0x20 ) + -8 );
            uVar44 = 0x10;
            if (lVar32 * 0x38 != 0) {
               uVar44 = lVar32 * 0x38 - 1;
               uVar44 = uVar44 | uVar44 >> 1;
               uVar44 = uVar44 | uVar44 >> 2;
               uVar44 = uVar44 | uVar44 >> 4;
               uVar44 = uVar44 | uVar44 >> 8;
               uVar44 = uVar44 | uVar44 >> 0x10;
               uVar44 = ( uVar44 | uVar44 >> 0x20 ) + 0x11;
            }

            puVar33 = (undefined8*)Memory::alloc_static(uVar44, false);
            if (puVar33 == (undefined8*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
               puVar49 = *(undefined8**)( this + 0x20 );
               goto LAB_00102f09;
            }

            puVar49 = puVar33 + 2;
            this_00 = (CowData<GDScriptDataType>*)( puVar33 + 3 );
            *puVar33 = 1;
            local_58 = 0;
            puVar33[1] = lVar32;
            if (lVar32 != 0) {
               do if (*(long*)this_00 != *(long*)( this_00 + lVar37 + 8 )) {
                  CowData<GDScriptDataType>::_unref(this_00);
                  if (*(long*)( this_00 + lVar37 + 8 ) != 0) {
                     plVar1 = (long*)( *(long*)( this_00 + lVar37 + 8 ) + -0x10 );
                     do {
                        lVar4 = *plVar1;
                        if (lVar4 == 0) goto LAB_001037ae;
                        LOCK();
                        lVar34 = *plVar1;
                        bVar50 = lVar4 == lVar34;
                        if (bVar50) {
                           *plVar1 = lVar4 + 1;
                           lVar34 = lVar4;
                        }

                        UNLOCK();
                     }
 while ( !bVar50 );
                     if (lVar34 != -1) {
                        *(undefined8*)this_00 = *(undefined8*)( this_00 + lVar37 + 8 );
                     }

                  }

               }
 while ( lVar32 != local_58 );
            }

            CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( this + 0x20 ));
            lVar32 = (long)puVar49 + lVar40;
            *(undefined8**)( this + 0x20 ) = puVar49;
            pOVar47 = *(Object**)( lVar32 + 0x30 );
            if (pOVar47 == (Object*)0x0) {
               lVar41 = lVar41 + 1;
               lVar40 = lVar40 + 0x38;
               goto LAB_00102ef1;
            }

            LAB_00102f16:*(undefined8*)( lVar32 + 0x30 ) = 0;
            cVar29 = RefCounted::unreference();
            if (( cVar29 != '\0' ) && ( cVar29 = cVar29 != '\0' )) {
               ( **(code**)( *(long*)pOVar47 + 0x140 ) )(pOVar47);
               Memory::free_static(pOVar47, false);
            }

            puVar49 = *(undefined8**)( this + 0x20 );
         }

         lVar41 = lVar41 + 1;
         lVar40 = lVar40 + 0x38;
      }
 while ( puVar49 != (undefined8*)0x0 );
   }

   pOVar47 = *(Object**)( this + 0x58 );
   if (pOVar47 != (Object*)0x0) {
      *(undefined8*)( this + 0x58 ) = 0;
      cVar29 = RefCounted::unreference();
      if (( cVar29 != '\0' ) && ( cVar29 = cVar29 != '\0' )) {
         ( **(code**)( *(long*)pOVar47 + 0x140 ) )(pOVar47);
         Memory::free_static(pOVar47, false);
      }

   }

   __mutex = (pthread_mutex_t*)( GDScriptLanguage::singleton + 0x208 );
   iVar30 = pthread_mutex_lock(__mutex);
   lVar41 = GDScriptLanguage::singleton;
   if (iVar30 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar30);
   }

   pGVar6 = this + 0x100;
   if (*(long*)( this + 0x100 ) == GDScriptLanguage::singleton + 0x240) {
      lVar40 = *(long*)( this + 0x110 );
      if (lVar40 != 0) {
         *(undefined8*)( lVar40 + 0x18 ) = *(undefined8*)( this + 0x118 );
      }

      lVar32 = *(long*)( this + 0x118 );
      if (lVar32 != 0) {
         *(long*)( lVar32 + 0x10 ) = lVar40;
      }

      if (pGVar6 == *(GDScriptFunction**)( lVar41 + 0x240 )) {
         *(undefined8*)( lVar41 + 0x240 ) = *(undefined8*)( this + 0x110 );
      }

      if (pGVar6 == *(GDScriptFunction**)( lVar41 + 0x248 )) {
         *(long*)( lVar41 + 0x248 ) = lVar32;
      }

      *(undefined8*)( this + 0x100 ) = 0;
      *(undefined1(*) [16])( this + 0x110 ) = (undefined1[16])0x0;
   }
 else {
      _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
   }

   pthread_mutex_unlock(__mutex);
   pvVar43 = *(void**)( this + 0x458 );
   if (pvVar43 != (void*)0x0) {
      if (*(int*)( this + 0x47c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x478 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x47c ) = 0;
            *(undefined1(*) [16])( this + 0x468 ) = (undefined1[16])0x0;
         }
 else {
            lVar41 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x460 ) + lVar41 ) != 0) {
                  pvVar43 = *(void**)( (long)pvVar43 + lVar41 * 2 );
                  *(int*)( *(long*)( this + 0x460 ) + lVar41 ) = 0;
                  if (*(long*)( (long)pvVar43 + 0x28 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar43 + 0x28 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar40 = *(long*)( (long)pvVar43 + 0x28 );
                        *(undefined8*)( (long)pvVar43 + 0x28 ) = 0;
                        Memory::free_static((void*)( lVar40 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar43 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar43 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar40 = *(long*)( (long)pvVar43 + 0x10 );
                        *(undefined8*)( (long)pvVar43 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar40 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar43, false);
                  pvVar43 = *(void**)( this + 0x458 );
                  *(undefined8*)( (long)pvVar43 + lVar41 * 2 ) = 0;
               }

               lVar41 = lVar41 + 4;
            }
 while ( lVar41 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x47c ) = 0;
            *(undefined1(*) [16])( this + 0x468 ) = (undefined1[16])0x0;
            if (pvVar43 == (void*)0x0) goto LAB_0010310b;
         }

      }

      Memory::free_static(pvVar43, false);
      Memory::free_static(*(void**)( this + 0x460 ), false);
   }

   LAB_0010310b:pvVar43 = *(void**)( this + 0x428 );
   if (pvVar43 != (void*)0x0) {
      if (*(int*)( this + 0x44c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x448 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x44c ) = 0;
            *(undefined1(*) [16])( this + 0x438 ) = (undefined1[16])0x0;
         }
 else {
            lVar41 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x430 ) + lVar41 ) != 0) {
                  pvVar43 = *(void**)( (long)pvVar43 + lVar41 * 2 );
                  *(int*)( *(long*)( this + 0x430 ) + lVar41 ) = 0;
                  if (*(long*)( (long)pvVar43 + 0x28 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar43 + 0x28 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar40 = *(long*)( (long)pvVar43 + 0x28 );
                        *(undefined8*)( (long)pvVar43 + 0x28 ) = 0;
                        Memory::free_static((void*)( lVar40 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar43 + 0x10 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar43 + 0x10 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar40 = *(long*)( (long)pvVar43 + 0x10 );
                        *(undefined8*)( (long)pvVar43 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar40 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar43, false);
                  pvVar43 = *(void**)( this + 0x428 );
                  *(undefined8*)( (long)pvVar43 + lVar41 * 2 ) = 0;
               }

               lVar41 = lVar41 + 4;
            }
 while ( lVar41 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x44c ) = 0;
            *(undefined1(*) [16])( this + 0x438 ) = (undefined1[16])0x0;
            if (pvVar43 == (void*)0x0) goto LAB_00103209;
         }

      }

      Memory::free_static(pvVar43, false);
      Memory::free_static(*(void**)( this + 0x430 ), false);
   }

   LAB_00103209:if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x3d0 ) != 0 )) {
      StringName::unref();
   }

   for (int i = 0; i < 7; i++) {
      CowData<String>::_unref((CowData<String>*)( this + ( -16*i + 968 ) ));
   }

   if (*(long*)( this + 0x350 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x350 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar41 = *(long*)( this + 0x350 );
         *(undefined8*)( this + 0x350 ) = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

   for (int i = 0; i < 6; i++) {
      if (*(long*)( this + ( -32*i + 632 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -32*i + 632 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar41 = *(long*)( this + ( -32*i + 632 ) );
            *(undefined8*)( this + ( -32*i + 632 ) ) = 0;
            Memory::free_static((void*)( lVar41 + -16 ), false);
         }

      }

      if (*(long*)( this + ( -32*i + 616 ) ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + ( -32*i + 616 ) ) + -16 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar41 = *(long*)( this + ( -32*i + 616 ) );
            *(undefined8*)( this + ( -32*i + 616 ) ) = 0;
            Memory::free_static((void*)( lVar41 + -16 ), false);
         }

      }

   }

   if (*(long*)( this + 0x1b8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x1b8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar41 = *(long*)( this + 0x1b8 );
         *(undefined8*)( this + 0x1b8 ) = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

   CowData<StringName>::_unref((CowData<StringName>*)( this + 0x1a8 ));
   CowData<Variant>::_unref((CowData<Variant>*)( this + 0x198 ));
   if (*(long*)( this + 0x188 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar41 = *(long*)( this + 0x188 );
         *(undefined8*)( this + 0x188 ) = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x178 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x178 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar41 = *(long*)( this + 0x178 );
         *(undefined8*)( this + 0x178 ) = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

   List<GDScriptFunction::StackDebug,DefaultAllocator>::~List((List<GDScriptFunction::StackDebug,DefaultAllocator>*)( this + 0x168 ));
   pvVar43 = *(void**)( this + 0x140 );
   if (pvVar43 != (void*)0x0) {
      if (*(int*)( this + 0x164 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x160 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x164 ) = 0;
            *(undefined1(*) [16])( this + 0x150 ) = (undefined1[16])0x0;
         }
 else {
            lVar41 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x148 ) + lVar41 ) != 0) {
                  *(int*)( *(long*)( this + 0x148 ) + lVar41 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar43 + lVar41 * 2 ), false);
                  pvVar43 = *(void**)( this + 0x140 );
                  *(undefined8*)( (long)pvVar43 + lVar41 * 2 ) = 0;
               }

               lVar41 = lVar41 + 4;
            }
 while ( lVar41 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x164 ) = 0;
            *(undefined1(*) [16])( this + 0x150 ) = (undefined1[16])0x0;
            if (pvVar43 == (void*)0x0) goto LAB_001034b7;
         }

      }

      Memory::free_static(pvVar43, false);
      Memory::free_static(*(void**)( this + 0x148 ), false);
   }

   LAB_001034b7:if (Variant::needs_deinit[*(int*)( this + 0x120 )] != '\0') {
      Variant::_clear_internal();
   }

   plVar1 = *(long**)( this + 0x100 );
   if (plVar1 != (long*)0x0) {
      lVar41 = *(long*)( this + 0x110 );
      if (lVar41 != 0) {
         *(undefined8*)( lVar41 + 0x18 ) = *(undefined8*)( this + 0x118 );
      }

      lVar40 = *(long*)( this + 0x118 );
      if (lVar40 != 0) {
         *(long*)( lVar40 + 0x10 ) = lVar41;
      }

      if (pGVar6 == (GDScriptFunction*)*plVar1) {
         *plVar1 = *(long*)( this + 0x110 );
      }

      if (pGVar6 == (GDScriptFunction*)plVar1[1]) {
         plVar1[1] = lVar40;
      }

   }

   if (Variant::needs_deinit[*(int*)( this + 0xd0 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 200 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 200 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar41 = *(long*)( this + 200 );
         *(undefined8*)( this + 200 ) = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)( this + 0xb0 ));
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0xa0 ));
   if (*(long*)( this + 0x88 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x88 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar41 = *(long*)( this + 0x88 );
         *(undefined8*)( this + 0x88 ) = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x78 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x70 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x70 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar41 = *(long*)( this + 0x70 );
         *(undefined8*)( this + 0x70 ) = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x60 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x60 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar41 = *(long*)( this + 0x60 );
         *(undefined8*)( this + 0x60 ) = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

   if (( *(long*)( this + 0x58 ) != 0 ) && ( cVar29 = cVar29 != '\0' )) {
      pOVar47 = *(Object**)( this + 0x58 );
      cVar29 = predelete_handler(pOVar47);
      if (cVar29 != '\0') {
         ( **(code**)( *(long*)pOVar47 + 0x140 ) )(pOVar47);
         Memory::free_static(pOVar47, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x48 ) != 0 )) {
      StringName::unref();
   }

   CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( this + 0x30 ));
   CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( this + 0x20 ));
   if (( StringName::configured != '\0' ) && ( ( ( *(long*)( this + 8 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *(long*)this != 0 ) ) )) {
      StringName::unref();
      return;
   }

   return;
   LAB_00102ca8:uVar45 = uVar45 + 1;
   auVar9._8_8_ = 0;
   auVar9._0_8_ = ( ulong )(uVar35 + 1) * lVar40;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = uVar44;
   lVar37 = SUB168(auVar9 * auVar19, 8);
   uVar36 = *(uint*)( lVar32 + lVar37 * 4 );
   uVar35 = SUB164(auVar9 * auVar19, 8);
   if (( uVar36 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar36 * lVar40,auVar20._8_8_ = 0,auVar20._0_8_ = uVar44,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar3 + uVar35 ) - SUB164(auVar10 * auVar20, 8)) * lVar40,auVar21._8_8_ = 0,auVar21._0_8_ = uVar44,SUB164(auVar11 * auVar21, 8) < uVar45) goto LAB_00102e92;
   goto LAB_00102cf3;
}
/* GDScriptFunctionState::_bind_methods() */void GDScriptFunctionState::_bind_methods(void) {
   long *plVar1;
   char cVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   char *pcVar7;
   undefined8 uVar8;
   MethodBind *pMVar9;
   undefined4 *puVar10;
   uint uVar11;
   long in_FS_OFFSET;
   long local_180;
   long local_178;
   long local_170;
   long local_168;
   long local_160;
   char *local_158;
   undefined8 local_150;
   char *local_148;
   long local_140;
   char *local_138;
   int local_130;
   long local_128;
   undefined4 local_120;
   char *local_118;
   undefined8 local_110;
   undefined1 local_108[16];
   undefined8 local_f8;
   long local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   undefined1(*local_d8[2])[16];
   undefined8 local_c8;
   undefined8 local_c0;
   long local_b0;
   Variant *local_a8;
   undefined8 local_a0;
   Variant *local_98;
   undefined1 local_90[16];
   Variant *local_78[3];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = (Variant*)&_LC69;
   local_90 = (undefined1[16])0x0;
   local_98 = (Variant*)0x0;
   local_a0 = 0;
   uVar11 = (uint)(Variant*)local_78;
   local_78[0] = (Variant*)&local_a8;
   D_METHODP((char*)&local_118, (char***)"resume", uVar11);
   Variant::Variant((Variant*)local_78, (Variant*)&local_98);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_a8 = (Variant*)local_78;
   pMVar9 = create_method_bind<GDScriptFunctionState,Variant,Variant_const&>(resume);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, &local_a8, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_78[0]];
   }
 else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_78[0]];
   }

   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_108);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[(int)local_98] != '\0') {
      Variant::_clear_internal();
   }

   local_98 = (Variant*)0x10712f;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = local_90._8_8_;
   local_90 = auVar6 << 0x40;
   local_78[0] = (Variant*)&local_98;
   D_METHODP((char*)&local_118, (char***)"is_valid", uVar11);
   Variant::Variant((Variant*)local_78, false);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)local_78;
   pMVar9 = create_method_bind<GDScriptFunctionState,bool,bool>(is_valid);
   ClassDB::bind_methodfi(1, pMVar9, false, (MethodDefinition*)&local_118, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[(int)local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<StringName>::_unref((CowData<StringName>*)local_108);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   local_150 = 0;
   local_170 = 0;
   local_118 = "_signal_callback";
   local_110 = 0x10;
   String::parse_latin1((StrRange*)&local_170);
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = (undefined1(*) [16])0x0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_108 = (undefined1[16])0x0;
   if (local_170 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_170);
   }

   StringName::StringName((StringName*)&local_168, "_signal_callback", false);
   _global_lock();
   pMVar9 = (MethodBind*)operator_new(0xd8, "");
   MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::MethodBindVarArgBase((_func_Variant_Variant_ptr_ptr_int_CallError_ptr*)pMVar9, (MethodInfo*)_signal_callback, false);
   *(undefined***)pMVar9 = &PTR__gen_argument_type_0010b9e8;
   local_148 = "GDScriptFunctionState";
   local_160 = 0;
   local_140 = 0x15;
   String::parse_latin1((StrRange*)&local_160);
   StringName::StringName((StringName*)&local_148, (String*)&local_160, false);
   StringName::operator =((StringName*)( pMVar9 + 0x18 ), (StringName*)&local_148);
   if (( StringName::configured != '\0' ) && ( local_148 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar1 = (long*)( local_160 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   ClassDB::_bind_vararg_method(pMVar9, (StringName*)&local_168, (Vector*)&local_158, false);
   _global_unlock();
   if (( StringName::configured != '\0' ) && ( local_168 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)&local_c8);
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_d8);
   lVar3 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_108._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar8 = local_108._0_8_;
   if (local_108._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_108._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_108._8_8_;
         local_108 = auVar5 << 0x40;
         Memory::free_static((void*)( uVar8 + -0x10 ), false);
      }

   }

   pcVar7 = local_118;
   if (local_118 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_118 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_118 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar7 + -0x10 ), false);
      }

   }

   lVar3 = local_170;
   if (local_170 != 0) {
      LOCK();
      plVar1 = (long*)( local_170 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_170 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)&local_150);
   local_118 = "";
   local_168 = 0;
   local_170 = 0;
   local_110 = 0;
   String::parse_latin1((StrRange*)&local_170);
   local_178 = 0;
   local_118 = "result";
   local_110 = 6;
   String::parse_latin1((StrRange*)&local_178);
   local_148 = (char*)( (ulong)local_148 & 0xffffffff00000000 );
   local_140 = 0;
   if (local_178 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)&local_178);
   }

   local_138 = (char*)0x0;
   local_130 = 0;
   local_128 = 0;
   if (local_170 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_170);
      local_120 = 0x20000;
      if (local_130 == 0x11) {
         StringName::StringName((StringName*)&local_118, (String*)&local_128, false);
         if (local_138 == local_118) {
            if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_138 = local_118;
         }

         goto LAB_001043d8;
      }

   }

   local_120 = 0x20000;
   StringName::operator =((StringName*)&local_138, (StringName*)&local_168);
   LAB_001043d8:local_160 = 0;
   local_118 = "completed";
   local_110 = 9;
   String::parse_latin1((StrRange*)&local_160);
   local_118 = (char*)0x0;
   local_110 = 0;
   local_f8 = 0;
   local_f0 = 0;
   local_e8 = 6;
   local_e0 = 1;
   local_d8[0] = (undefined1(*) [16])0x0;
   local_c8 = 0;
   local_c0 = 0;
   local_b0 = 0;
   local_108 = (undefined1[16])0x0;
   if (( local_160 == 0 ) || ( CowData<char32_t>::_ref((CowData<char32_t>*)&local_118, (CowData*)&local_160),local_d8[0] == (undefined1(*) [16])0x0 )) {
      local_d8[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_d8[0][1] = 0;
      *local_d8[0] = (undefined1[16])0x0;
   }

   puVar10 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar10 + 8 ) = 0;
   *(undefined1(*) [16])( puVar10 + 2 ) = (undefined1[16])0x0;
   *puVar10 = 0;
   puVar10[6] = 0;
   puVar10[10] = 6;
   *(undefined8*)( puVar10 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar10 + 0xc ) = (undefined1[16])0x0;
   *puVar10 = local_148._0_4_;
   if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 2 ), (CowData*)&local_140);
   }

   StringName::operator =((StringName*)( puVar10 + 4 ), (StringName*)&local_138);
   puVar10[6] = local_130;
   if (*(long*)( puVar10 + 8 ) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar10 + 8 ), (CowData*)&local_128);
   }

   puVar10[10] = local_120;
   lVar3 = *(long*)( *local_d8[0] + 8 );
   *(undefined8*)( puVar10 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar10 + 0x10 ) = local_d8[0];
   *(long*)( puVar10 + 0xe ) = lVar3;
   if (lVar3 != 0) {
      *(undefined4**)( lVar3 + 0x30 ) = puVar10;
   }

   lVar3 = *(long*)*local_d8[0];
   *(undefined4**)( *local_d8[0] + 8 ) = puVar10;
   if (lVar3 == 0) {
      *(undefined4**)*local_d8[0] = puVar10;
   }

   *(int*)local_d8[0][1] = *(int*)local_d8[0][1] + 1;
   local_158 = "GDScriptFunctionState";
   local_180 = 0;
   local_150 = 0x15;
   String::parse_latin1((StrRange*)&local_180);
   StringName::StringName((StringName*)&local_158, (String*)&local_180, false);
   ClassDB::add_signal((StringName*)&local_158, (MethodInfo*)&local_118);
   if (( StringName::configured != '\0' ) && ( local_158 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_180;
   if (local_180 != 0) {
      LOCK();
      plVar1 = (long*)( local_180 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_180 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)&local_c8);
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_d8);
   lVar3 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar1 = (long*)( local_f0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_108._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar8 = local_108._0_8_;
   if (local_108._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_108._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_108._8_8_;
         local_108 = auVar4 << 0x40;
         Memory::free_static((void*)( uVar8 + -0x10 ), false);
      }

   }

   pcVar7 = local_118;
   if (local_118 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_118 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_118 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar7 + -0x10 ), false);
      }

   }

   lVar3 = local_160;
   if (local_160 != 0) {
      LOCK();
      plVar1 = (long*)( local_160 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_160 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_128;
   if (local_128 != 0) {
      LOCK();
      plVar1 = (long*)( local_128 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_128 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_138 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_140;
   if (local_140 != 0) {
      LOCK();
      plVar1 = (long*)( local_140 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_140 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_178;
   if (local_178 != 0) {
      LOCK();
      plVar1 = (long*)( local_178 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_178 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_170;
   if (local_170 != 0) {
      LOCK();
      plVar1 = (long*)( local_170 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_170 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_168 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
   return (uint)CONCAT71(0x10ba, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ba, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* GDScriptFunctionState::is_class_ptr(void*) const */uint GDScriptFunctionState::is_class_ptr(GDScriptFunctionState *this, void *param_1) {
   return (uint)CONCAT71(0x10ba, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ba, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ba, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* GDScriptFunctionState::_getv(StringName const&, Variant&) const */undefined8 GDScriptFunctionState::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GDScriptFunctionState::_setv(StringName const&, Variant const&) */undefined8 GDScriptFunctionState::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GDScriptFunctionState::_validate_propertyv(PropertyInfo&) const */void GDScriptFunctionState::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* GDScriptFunctionState::_property_can_revertv(StringName const&) const */undefined8 GDScriptFunctionState::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* GDScriptFunctionState::_property_get_revertv(StringName const&, Variant&) const */undefined8 GDScriptFunctionState::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* GDScriptFunctionState::_notificationv(int, bool) */void GDScriptFunctionState::_notificationv(int param_1, bool param_2) {
   return;
}
/* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::get_argument_meta(int) const */undefined8 MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::is_vararg() const */undefined8 MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::is_vararg(void) {
   return 1;
}
/* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::is_const() const */undefined8 MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::is_const(void) {
   return 0;
}
/* MethodBindTRC<bool, bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool,bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool, bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<Variant, Variant const&>::_gen_argument_type(int) const */undefined8 MethodBindTR<Variant,Variant_const&>::_gen_argument_type(int param_1) {
   return 0;
}
/* MethodBindTR<Variant, Variant const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Variant,Variant_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::ptrcall(Object*, void const**, void*) const */void MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   _err_print_error("ptrcall", "./core/object/method_bind.h", 0xb0, "Method/function failed.", "ptrcall can\'t be used with vararg methods. This is a bug.", 0, 0);
   return;
}
/* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   _err_print_error("validated_call", "./core/object/method_bind.h", 0xac, "Method/function failed.", "Validated call can\'t be used with vararg methods. This is a bug.", 0, 0);
   return;
}
/* MethodBindTR<Variant, Variant const&>::~MethodBindTR() */void MethodBindTR<Variant,Variant_const&>::~MethodBindTR(MethodBindTR<Variant,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b8c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Variant, Variant const&>::~MethodBindTR() */void MethodBindTR<Variant,Variant_const&>::~MethodBindTR(MethodBindTR<Variant,Variant_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b8c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, bool>::~MethodBindTRC() */void MethodBindTRC<bool,bool>::~MethodBindTRC(MethodBindTRC<bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b920;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, bool>::~MethodBindTRC() */void MethodBindTRC<bool,bool>::~MethodBindTRC(MethodBindTRC<bool,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010b920;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010b600;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010b600;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* SortArray<List<_GDFKCS, DefaultAllocator>::Element*, List<_GDFKCS,
   DefaultAllocator>::AuxiliaryComparator<Comparator<_GDFKCS> >, true>::introsort(long, long,
   List<_GDFKCS, DefaultAllocator>::Element**, long) const [clone .isra.0] */void SortArray<List<_GDFKCS,DefaultAllocator>::Element*,List<_GDFKCS,DefaultAllocator>::AuxiliaryComparator<Comparator<_GDFKCS>>,true>::introsort(long param_1, long param_2, Element **param_3, long param_4) {
   int iVar1;
   Element *pEVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   Element **ppEVar6;
   int iVar7;
   Element **ppEVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   Element *pEVar12;
   int iVar13;
   Element *pEVar14;
   Element **ppEVar15;
   long lVar16;
   long local_58;
   lVar16 = param_2 - param_1;
   if (lVar16 < 0x11) {
      return;
   }

   if (param_4 == 0) {
      LAB_0010516d:lVar10 = lVar16 + -2 >> 1;
      lVar11 = lVar10 * 2 + 2;
      ppEVar8 = param_3 + param_1 + lVar10;
      pEVar12 = *ppEVar8;
      lVar5 = lVar10;
      lVar9 = lVar11;
      if (lVar16 <= lVar11) goto LAB_00105275;
      LAB_001051b3:do {
         pEVar2 = param_3[param_1 + lVar11];
         pEVar14 = param_3[param_1 + lVar11 + -1];
         lVar3 = lVar11 + -1;
         lVar4 = lVar11;
         ppEVar6 = param_3 + param_1 + lVar11 + -1;
         if (*(int*)pEVar14 <= *(int*)pEVar2) {
            lVar4 = lVar11 + 1;
            lVar3 = lVar11;
            pEVar14 = pEVar2;
            ppEVar6 = param_3 + param_1 + lVar11;
         }

         lVar11 = lVar4 * 2;
         param_3[lVar5 + param_1] = pEVar14;
         lVar5 = lVar3;
      }
 while ( lVar16 != lVar11 && SBORROW8(lVar16, lVar11) == lVar16 + lVar4 * -2 < 0 );
      ppEVar15 = ppEVar6;
      if (lVar16 == lVar11) goto LAB_0010527b;
      do {
         lVar11 = lVar9;
         lVar9 = lVar3 + -1;
         if (lVar3 <= lVar10) goto LAB_001053b1;
         iVar13 = *(int*)pEVar12;
         do {
            lVar5 = lVar9 >> 1;
            pEVar2 = param_3[param_1 + lVar5];
            if (iVar13 <= *(int*)pEVar2) {
               param_3[lVar3 + param_1] = pEVar12;
               goto joined_r0x00105255;
            }

            param_3[lVar3 + param_1] = pEVar2;
            lVar9 = ( lVar5 + -1 ) - ( lVar5 + -1 >> 0x3f );
            lVar3 = lVar5;
         }
 while ( lVar10 < lVar5 );
         param_3[param_1 + lVar5] = pEVar12;
         joined_r0x00105255:if (lVar10 == 0) {
            ppEVar8 = param_3 + param_1;
            lVar16 = ( param_2 + -1 ) - param_1;
            goto LAB_001052b0;
         }

         while (true) {
            ppEVar8 = ppEVar8 + -1;
            lVar11 = lVar11 + -2;
            lVar10 = lVar10 + -1;
            pEVar12 = *ppEVar8;
            lVar5 = lVar10;
            lVar9 = lVar11;
            if (lVar11 < lVar16) goto LAB_001051b3;
            LAB_00105275:lVar9 = lVar11;
            ppEVar15 = ppEVar8;
            ppEVar6 = ppEVar8;
            if (lVar11 == lVar16) break;
            LAB_001053b1:*ppEVar6 = pEVar12;
         }
;
         LAB_0010527b:lVar3 = lVar11 + -1;
         ppEVar6 = param_3 + param_1 + lVar3;
         *ppEVar15 = *ppEVar6;
      }
 while ( true );
   }

   lVar11 = param_2;
   local_58 = param_4;
   LAB_00104fc1:pEVar12 = param_3[lVar11 + -1];
   local_58 = local_58 + -1;
   iVar13 = *(int*)pEVar12;
   iVar7 = *(int*)param_3[param_1];
   iVar1 = *(int*)param_3[( lVar16 >> 1 ) + param_1];
   if (iVar7 < iVar1) {
      if (iVar1 < iVar13) {
         LAB_00105140:pEVar12 = param_3[( lVar16 >> 1 ) + param_1];
         iVar13 = iVar1;
         goto LAB_00104fff;
      }

      if (iVar7 < iVar13) goto LAB_00104fff;
   }
 else if (iVar13 <= iVar7) {
      if (iVar1 < iVar13) goto LAB_00104fff;
      goto LAB_00105140;
   }

   pEVar12 = param_3[param_1];
   iVar13 = iVar7;
   LAB_00104fff:lVar16 = lVar11;
   param_2 = param_1;
   do {
      if (iVar7 < iVar13) {
         if (lVar11 + -1 == param_2) {
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
            iVar13 = *(int*)pEVar12;
            goto LAB_0010503d;
         }

      }
 else {
         LAB_0010503d:lVar9 = lVar16 + -1;
         ppEVar8 = param_3 + lVar9;
         if (iVar13 < *(int*)*ppEVar8) {
            ppEVar6 = param_3 + lVar16 + -2;
            while (param_1 != lVar9) {
               lVar9 = lVar9 + -1;
               ppEVar8 = ppEVar6;
               if (*(int*)*ppEVar6 <= iVar13) goto LAB_0010509c;
               ppEVar6 = ppEVar6 + -1;
            }
;
            _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
         }

         LAB_0010509c:if (lVar9 <= param_2) break;
         pEVar2 = param_3[param_2];
         param_3[param_2] = *ppEVar8;
         iVar13 = *(int*)pEVar12;
         *ppEVar8 = pEVar2;
         lVar16 = lVar9;
      }

      lVar9 = param_2 + 1;
      param_2 = param_2 + 1;
      iVar7 = *(int*)param_3[lVar9];
   }
 while ( true );
   introsort(param_2, lVar11, param_3, local_58);
   lVar16 = param_2 - param_1;
   if (lVar16 < 0x11) {
      return;
   }

   lVar11 = param_2;
   if (local_58 == 0) goto LAB_0010516d;
   goto LAB_00104fc1;
   LAB_001052b0:pEVar12 = ppEVar8[lVar16];
   ppEVar8[lVar16] = *ppEVar8;
   if (lVar16 < 3) {
      if (lVar16 != 2) {
         *ppEVar8 = pEVar12;
         return;
      }

      lVar11 = param_1 + 1;
      lVar9 = 0;
      lVar16 = 1;
      *ppEVar8 = param_3[lVar11];
      LAB_00105338:iVar13 = *(int*)pEVar12;
      while (true) {
         ppEVar6 = param_3 + lVar11;
         pEVar2 = param_3[param_1 + lVar9];
         if (iVar13 <= *(int*)pEVar2) break;
         *ppEVar6 = pEVar2;
         if (lVar9 == 0) {
            param_3[param_1 + lVar9] = pEVar12;
            goto LAB_001052b0;
         }

         lVar11 = param_1 + lVar9;
         lVar9 = ( lVar9 + -1 ) / 2;
      }
;
   }
 else {
      lVar11 = 2;
      lVar9 = 0;
      do {
         pEVar2 = param_3[param_1 + lVar11];
         pEVar14 = param_3[param_1 + lVar11 + -1];
         lVar5 = lVar11 + -1;
         ppEVar6 = param_3 + param_1 + lVar11 + -1;
         lVar10 = lVar11;
         if (*(int*)pEVar14 <= *(int*)pEVar2) {
            lVar10 = lVar11 + 1;
            lVar5 = lVar11;
            ppEVar6 = param_3 + param_1 + lVar11;
            pEVar14 = pEVar2;
         }

         lVar11 = lVar10 * 2;
         param_3[lVar9 + param_1] = pEVar14;
         lVar9 = lVar5;
      }
 while ( lVar16 != lVar11 && SBORROW8(lVar16, lVar11) == lVar16 + lVar10 * -2 < 0 );
      if (lVar16 == lVar11) {
         lVar11 = param_1 + lVar16 + -1;
         lVar9 = lVar16 + -2 >> 1;
         *ppEVar6 = param_3[lVar11];
         lVar16 = lVar16 + -1;
         goto LAB_00105338;
      }

      lVar11 = param_1 + lVar5;
      lVar16 = lVar16 + -1;
      lVar9 = ( lVar5 + -1 ) / 2;
      if (0 < lVar5) goto LAB_00105338;
   }

   *ppEVar6 = pEVar12;
   goto LAB_001052b0;
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
         LAB_00105423:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105423;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010548e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010548e:return &_get_class_namev();
}
/* GDScriptFunctionState::_get_class_namev() const */undefined8 *GDScriptFunctionState::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105513:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105513;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GDScriptFunctionState");
         goto LAB_0010557e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "GDScriptFunctionState");
   LAB_0010557e:return &_get_class_namev();
}
/* GDScriptFunctionState::get_class() const */void GDScriptFunctionState::get_class(void) {
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
/* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::_gen_argument_type(int) const */undefined4 MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::_gen_argument_type(MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true> *this, int param_1) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   undefined4 local_48[2];
   long local_40;
   long local_38;
   long local_28;
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( *(long*)this + 8 ) )(local_48, this, param_1);
   lVar2 = local_28;
   if (local_28 != 0) {
      LOCK();
      plVar1 = (long*)( local_28 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_28 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
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

   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_48[0];
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010589f;
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

      LAB_0010589f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00105953;
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
                     if (lVar5 == 0) goto LAB_00105a03;
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

         LAB_00105a03:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00105953;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00105953:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptFunctionState::is_class(String const&) const */undefined8 GDScriptFunctionState::is_class(GDScriptFunctionState *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_00105b2f;
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

      LAB_00105b2f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00105be3;
   }

   cVar5 = String::operator ==(param_1, "GDScriptFunctionState");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00105be3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_50;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      Object::initialize_class();
      local_48 = 0;
      local_38 = "Object";
      local_30 = 6;
      String::parse_latin1((StrRange*)&local_48);
      StringName::StringName((StringName*)&local_40, (String*)&local_48, false);
      local_38 = "RefCounted";
      local_50 = 0;
      local_30 = 10;
      String::parse_latin1((StrRange*)&local_50);
      StringName::StringName((StringName*)&local_38, (String*)&local_50, false);
      ClassDB::_add_class2((StringName*)&local_38, (StringName*)&local_40);
      if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
         StringName::unref();
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

      if (( StringName::configured != '\0' ) && ( local_40 != 0 )) {
         StringName::unref();
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

      if ((code*)PTR__bind_methods_0010e008 != Object::_bind_methods) {
         RefCounted::_bind_methods();
      }

      initialize_class()::initialized =
      '\x01';
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
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
      LAB_00105f48:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105f48;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00105f66;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00105f66:if (lVar2 == 0) {
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
/* GDScriptFunctionState::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void GDScriptFunctionState::_get_property_listv(GDScriptFunctionState *this, List *param_1, bool param_2) {
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
   local_78 = "GDScriptFunctionState";
   local_70 = 0x15;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "GDScriptFunctionState";
   local_98 = 0;
   local_70 = 0x15;
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
      LAB_00106348:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00106348;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00106365;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00106365:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "GDScriptFunctionState", false);
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
/* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::_gen_argument_type_info(int) const */undefined4 *MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined4 uVar2;
   undefined8 *puVar3;
   long lVar4;
   uint uVar5;
   uint in_EDX;
   undefined4 *puVar6;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   long local_28;
   long local_20;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((int)in_EDX < 0) {
      *puVar7 = 0;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      puVar7[10] = 0x20006;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      local_28 = 0;
      StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_28);
   }
 else {
      puVar3 = *(undefined8**)( in_RSI + 0xa8 );
      if (( puVar3 != (undefined8*)0x0 ) && ( (int)in_EDX < *(int*)( puVar3 + 2 ) )) {
         puVar6 = (undefined4*)*puVar3;
         if (in_EDX != 0) {
            uVar5 = 0;
            if (( in_EDX & 1 ) != 0) {
               puVar6 = *(undefined4**)( puVar6 + 0xc );
               uVar5 = 1;
               if (in_EDX == 1) goto LAB_0010668f;
            }

            do {
               uVar5 = uVar5 + 2;
               puVar6 = *(undefined4**)( *(long*)( puVar6 + 0xc ) + 0x30 );
            }
 while ( in_EDX != uVar5 );
         }

         LAB_0010668f:uVar2 = *puVar6;
         *(undefined8*)( puVar7 + 2 ) = 0;
         lVar4 = *(long*)( puVar6 + 2 );
         *puVar7 = uVar2;
         if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 2 ), (CowData*)( puVar6 + 2 ));
         }

         StringName::StringName((StringName*)( puVar7 + 4 ), (StringName*)( puVar6 + 4 ));
         uVar2 = puVar6[6];
         *(undefined8*)( puVar7 + 8 ) = 0;
         lVar4 = *(long*)( puVar6 + 8 );
         puVar7[6] = uVar2;
         if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)( puVar6 + 8 ));
         }

         puVar7[10] = puVar6[10];
         goto LAB_001066e5;
      }

      local_28 = 0;
      itos((long)&local_38);
      operator+((char *)&
      local_30,(String*)&_LC12;
      *puVar7 = 0;
      *(undefined8*)( puVar7 + 2 ) = 0;
      if (local_30 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 2 ), (CowData*)&local_30);
      }

      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 4 ) = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      puVar7[10] = 0x20006;
      StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_28);
      lVar4 = local_30;
      if (local_30 != 0) {
         LOCK();
         plVar1 = (long*)( local_30 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_30 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

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

   }

   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   LAB_001066e5:if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar7;
}
/* MethodBindTR<Variant, Variant const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Variant,Variant_const&>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   long local_90;
   undefined8 local_88;
   undefined1 local_80[16];
   undefined8 local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined1 local_50[16];
   undefined8 local_40;
   long local_38;
   undefined4 local_30;
   long local_20;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_88 = 0;
      local_70 = 0;
      local_68 = 0;
      local_60 = 6;
      local_90 = 0;
      local_58 = 0;
      local_40 = 0;
      local_38 = 0;
      local_30 = 0x20006;
      local_80 = (undefined1[16])0x0;
      local_50 = (undefined1[16])0x0;
      StringName::operator =((StringName*)( local_50 + 8 ), (StringName*)&local_90);
      if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
         StringName::unref();
      }

      local_88 = CONCAT44(local_88._4_4_, (undefined4)local_58);
      uVar5 = local_80._0_8_;
      if (local_80._0_8_ != local_50._0_8_) {
         if (local_80._0_8_ != 0) {
            LOCK();
            plVar1 = (long*)( local_80._0_8_ + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               auVar2._8_8_ = 0;
               auVar2._0_8_ = local_80._8_8_;
               local_80 = auVar2 << 0x40;
               Memory::free_static((void*)( uVar5 + -0x10 ), false);
            }

         }

         local_80._0_8_ = local_50._0_8_;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_50._8_8_;
         local_50 = auVar4 << 0x40;
      }

      if (local_80._8_8_ != local_50._8_8_) {
         StringName::unref();
         uVar5 = local_50._8_8_;
         local_50._8_8_ = 0;
         local_80._8_8_ = uVar5;
      }

      lVar7 = local_38;
      lVar6 = local_68;
      local_70 = CONCAT44(local_70._4_4_, (undefined4)local_40);
      if (local_68 == local_38) {
         local_60 = local_30;
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_38 = 0;
               Memory::free_static((void*)( lVar7 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_68 != 0) {
            LOCK();
            plVar1 = (long*)( local_68 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_68 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

         local_68 = local_38;
         local_60 = local_30;
      }

      if (( StringName::configured != '\0' ) && ( local_50._8_8_ != 0 )) {
         StringName::unref();
      }

      uVar5 = local_50._0_8_;
      if (local_50._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_50._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_50._8_8_;
            local_50 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar5 + -0x10 ), false);
         }

      }

      *puVar8 = (undefined4)local_88;
      *(undefined8*)( puVar8 + 2 ) = local_80._0_8_;
      *(undefined8*)( puVar8 + 4 ) = local_80._8_8_;
      puVar8[6] = (undefined4)local_70;
      *(long*)( puVar8 + 8 ) = local_68;
      puVar8[10] = local_60;
   }
 else {
      *puVar8 = 0;
      puVar8[6] = 0;
      *(undefined8*)( puVar8 + 8 ) = 0;
      puVar8[10] = 0x20006;
      *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
      local_58 = 0;
      StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_58);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

   }

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return puVar8;
}
/* MethodBindTRC<bool, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   ulong uVar4;
   long lVar5;
   undefined8 uVar6;
   long lVar7;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   long local_b0;
   long local_a8;
   ulong local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_60._8_8_ = local_60._0_8_;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      local_60._0_8_ = 0;
      local_68 = &_LC13;
      String::parse_latin1((StrRange*)&local_a0);
      *puVar8 = 1;
      puVar8[6] = 0;
      *(undefined8*)( puVar8 + 8 ) = 0;
      *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar8[10] = 6;
         LAB_00106d67:StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_98);
         uVar4 = local_a0;
      }
 else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_a0);
         puVar8[10] = 6;
         if (puVar8[6] != 0x11) goto LAB_00106d67;
         StringName::StringName((StringName*)&local_68, (String*)( puVar8 + 8 ), false);
         if (*(undefined**)( puVar8 + 4 ) == local_68) {
            uVar4 = local_a0;
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
               uVar4 = local_a0;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar8 + 4 ) = local_68;
            uVar4 = local_a0;
         }

      }

      local_a0 = uVar4;
      if (uVar4 != 0) {
         LOCK();
         plVar1 = (long*)( uVar4 - 0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( uVar4 - 0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }

      goto LAB_00106d33;
   }

   local_80 = 0;
   local_90 = (undefined1[16])0x0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC13;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60._0_8_ = 0;
   local_60._8_8_ = 0;
   if (local_b0 == 0) {
      LAB_00106db0:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00106db0;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }

   }

   lVar5 = local_b0;
   if (local_b0 != 0) {
      LOCK();
      plVar1 = (long*)( local_b0 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b0 = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }

   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   uVar6 = local_90._0_8_;
   if (local_90._0_8_ != local_60._0_8_) {
      if (local_90._0_8_ != 0) {
         LOCK();
         plVar1 = (long*)( local_90._0_8_ + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            auVar3._8_8_ = 0;
            auVar3._0_8_ = local_90._8_8_;
            local_90 = auVar3 << 0x40;
            Memory::free_static((void*)( uVar6 + -0x10 ), false);
         }

      }

      local_90._0_8_ = local_60._0_8_;
      local_60._0_8_ = 0;
   }

   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      uVar6 = local_60._8_8_;
      local_60._8_8_ = 0;
      local_90._8_8_ = uVar6;
   }

   lVar7 = local_48;
   lVar5 = local_78;
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 == local_48) {
      local_70 = local_40;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_48 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

   }
 else {
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar5 + -0x10 ), false);
         }

      }

      local_78 = local_48;
      local_70 = local_40;
   }

   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar6 = local_60._0_8_;
   if (local_60._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_60._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_60._0_8_ = 0;
         Memory::free_static((void*)( uVar6 + -0x10 ), false);
      }

   }

   *puVar8 = (undefined4)local_98;
   *(undefined8*)( puVar8 + 2 ) = local_90._0_8_;
   *(undefined8*)( puVar8 + 4 ) = local_90._8_8_;
   puVar8[6] = (undefined4)local_80;
   *(long*)( puVar8 + 8 ) = local_78;
   puVar8[10] = local_70;
   LAB_00106d33:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar8;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return;
   }

   do {
      pvVar2 = (void*)*plVar5;
      if (pvVar2 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar2 + 0x40 ) == plVar5) {
         lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         lVar3 = *(long*)( (long)pvVar2 + 0x38 );
         *plVar5 = lVar4;
         if (pvVar2 == (void*)plVar5[1]) {
            plVar5[1] = lVar3;
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x30 ) = lVar4;
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
         }

         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x38 ) = lVar3;
         }

         if (*(long*)( (long)pvVar2 + 0x20 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 0x20 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 0x20 );
               *(undefined8*)( (long)pvVar2 + 0x20 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar2 + 8 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( (long)pvVar2 + 8 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar4 = *(long*)( (long)pvVar2 + 8 );
               *(undefined8*)( (long)pvVar2 + 8 ) = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         Memory::free_static(pvVar2, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   Memory::free_static(plVar5, false);
   return;
}
/* List<int, DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<int, DefaultAllocator> const&) */void List<int,DefaultAllocator>::operator =(List<int,DefaultAllocator> *this, List *param_1) {
   undefined4 uVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   undefined1(*pauVar5)[16];
   undefined4 *puVar6;
   undefined4 *puVar7;
   long *plVar8;
   plVar8 = *(long**)this;
   if (plVar8 != (long*)0x0) {
      do {
         pvVar2 = (void*)*plVar8;
         if (pvVar2 == (void*)0x0) goto LAB_00107540;
         if (*(long**)( (long)pvVar2 + 0x18 ) == plVar8) {
            lVar4 = *(long*)( (long)pvVar2 + 8 );
            lVar3 = *(long*)( (long)pvVar2 + 0x10 );
            *plVar8 = lVar4;
            if (pvVar2 == (void*)plVar8[1]) {
               plVar8[1] = lVar3;
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 8 ) = lVar4;
               lVar4 = *(long*)( (long)pvVar2 + 8 );
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar3;
            }

            Memory::free_static(pvVar2, false);
            *(int*)( plVar8 + 2 ) = (int)plVar8[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar8 = *(long**)this;
      }
 while ( (int)plVar8[2] != 0 );
      Memory::free_static(plVar8, false);
      *(undefined8*)this = 0;
   }

   plVar8 = (long*)0x0;
   LAB_00107540:if (( *(undefined8**)param_1 != (undefined8*)0x0 ) && ( puVar7 = (undefined4*)**(undefined8**)param_1 ),puVar7 != (undefined4*)0x0) {
      if (plVar8 == (long*)0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])this = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            puVar6 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
            uVar1 = *puVar7;
            *(undefined8*)( puVar6 + 2 ) = 0;
            *puVar6 = uVar1;
            plVar8 = *(long**)this;
            lVar4 = plVar8[1];
            *(long**)( puVar6 + 6 ) = plVar8;
            *(long*)( puVar6 + 4 ) = lVar4;
            if (lVar4 != 0) {
               *(undefined4**)( lVar4 + 8 ) = puVar6;
            }

            plVar8[1] = (long)puVar6;
            if (*plVar8 == 0) break;
            puVar7 = *(undefined4**)( puVar7 + 2 );
            *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
            if (puVar7 == (undefined4*)0x0) {
               return;
            }

         }
;
         puVar7 = *(undefined4**)( puVar7 + 2 );
         *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
         *plVar8 = (long)puVar6;
      }
 while ( puVar7 != (undefined4*)0x0 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, _GDFKC, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, _GDFKC> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,_GDFKC,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,_GDFKC>>>::operator [](HashMap<StringName,_GDFKC,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,_GDFKC>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2undefined4 uVar3void *pvVar4void *__slong *plVar5undefined8 *puVar6undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]undefined1 auVar38[16]uint uVar39uint uVar40uint uVar41ulong uVar42undefined8 uVar43void *__s_00undefined8 *puVar44undefined1(*pauVar45)[16];undefined4 *puVar46long lVar47void *pvVar48ulong uVar49int iVar50long lVar51long lVar52long lVar53ulong uVar54undefined8 uVar55uint uVar56uint uVar57uint uVar58undefined4 *puVar59undefined8 *puVar60long in_FS_OFFSETundefined8 local_70undefined1 local_68[16]long local_58undefined8 local_50long *local_48long local_40lVar47 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar42 = CONCAT44(0, uVar40);if (lVar47 == 0) {
   LAB_00107f40:local_70 = 0;
   uVar49 = uVar42 * 4;
   uVar54 = uVar42 * 8;
   uVar43 = Memory::alloc_static(uVar49, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   pvVar48 = (void*)Memory::alloc_static(uVar54, false);
   *(void**)( this + 8 ) = pvVar48;
   if ((int)uVar42 != 0) {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)pvVar48 + uVar54 ) ) && ( pvVar48 < (void*)( (long)pvVar4 + uVar49 ) )) {
         uVar49 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar49 * 4 ) = 0;
            *(undefined8*)( (long)pvVar48 + uVar49 * 8 ) = 0;
            uVar49 = uVar49 + 1;
         }
 while ( uVar42 != uVar49 );
      }
 else {
         memset(pvVar4, 0, uVar49);
         memset(pvVar48, 0, uVar54);
      }

      LAB_00107851:iVar50 = *(int*)( this + 0x2c );
      if (iVar50 != 0) {
         LAB_0010785d:uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar49 = CONCAT44(0, uVar40);
         lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar41 = StringName::get_empty_hash();
         }
 else {
            uVar41 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar41 == 0) {
            uVar41 = 1;
         }

         uVar58 = 0;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar41 * lVar47;
         auVar27._8_8_ = 0;
         auVar27._0_8_ = uVar49;
         lVar52 = SUB168(auVar11 * auVar27, 8);
         uVar56 = *(uint*)( *(long*)( this + 0x10 ) + lVar52 * 4 );
         uVar57 = SUB164(auVar11 * auVar27, 8);
         if (uVar56 != 0) {
            do {
               if (( uVar56 == uVar41 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar52 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  lVar47 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar57 * 8 );
                  *(undefined4*)( lVar47 + 0x18 ) = 0;
                  List<int,DefaultAllocator>::operator =((List<int,DefaultAllocator>*)( lVar47 + 0x20 ), (List*)&local_70);
                  puVar44 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar57 * 8 );
                  goto LAB_001077fc;
               }

               uVar58 = uVar58 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(uVar57 + 1) * lVar47;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar49;
               lVar52 = SUB168(auVar12 * auVar28, 8);
               uVar56 = *(uint*)( *(long*)( this + 0x10 ) + lVar52 * 4 );
               uVar57 = SUB164(auVar12 * auVar28, 8);
            }
 while ( ( uVar56 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar56 * lVar47,auVar29._8_8_ = 0,auVar29._0_8_ = uVar49,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar40 + uVar57 ) - SUB164(auVar13 * auVar29, 8)) * lVar47,auVar30._8_8_ = 0,auVar30._0_8_ = uVar49,uVar58 <= SUB164(auVar14 * auVar30, 8) );
         }

         iVar50 = *(int*)( this + 0x2c );
      }

      goto LAB_00107964;
   }

   iVar50 = *(int*)( this + 0x2c );
   if (pvVar48 == (void*)0x0) goto LAB_00107964;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010785d;
   LAB_0010798a:uVar40 = *(uint*)( this + 0x28 );
   if (uVar40 == 0x1c) {
      puVar44 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001077fc;
   }

   uVar42 = ( ulong )(uVar40 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar41 = *(uint*)( hash_table_size_primes + (ulong)uVar40 * 4 );
   if (uVar40 + 1 < 2) {
      uVar42 = 2;
   }

   uVar40 = *(uint*)( hash_table_size_primes + uVar42 * 4 );
   uVar54 = (ulong)uVar40;
   *(int*)( this + 0x28 ) = (int)uVar42;
   pvVar48 = *(void**)( this + 8 );
   uVar42 = uVar54 * 4;
   uVar49 = uVar54 * 8;
   pvVar4 = *(void**)( this + 0x10 );
   uVar43 = Memory::alloc_static(uVar42, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   __s_00 = (void*)Memory::alloc_static(uVar49, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar40 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar49 ) ) && ( __s_00 < (void*)( (long)__s + uVar42 ) )) {
         uVar42 = 0;
         do {
            *(undefined4*)( (long)__s + uVar42 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar42 * 8 ) = 0;
            uVar42 = uVar42 + 1;
         }
 while ( uVar42 != uVar54 );
      }
 else {
         memset(__s, 0, uVar42);
         memset(__s_00, 0, uVar49);
      }

   }

   if (uVar41 != 0) {
      uVar42 = 0;
      do {
         uVar40 = *(uint*)( (long)pvVar4 + uVar42 * 4 );
         if (uVar40 != 0) {
            lVar47 = *(long*)( this + 0x10 );
            uVar58 = 0;
            uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar49 = CONCAT44(0, uVar56);
            lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)uVar40 * lVar52;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar49;
            lVar51 = SUB168(auVar15 * auVar31, 8);
            puVar1 = (uint*)( lVar47 + lVar51 * 4 );
            iVar50 = SUB164(auVar15 * auVar31, 8);
            uVar57 = *puVar1;
            uVar43 = *(undefined8*)( (long)pvVar48 + uVar42 * 8 );
            while (uVar57 != 0) {
               auVar16._8_8_ = 0;
               auVar16._0_8_ = (ulong)uVar57 * lVar52;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar49;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(( uVar56 + iVar50 ) - SUB164(auVar16 * auVar32, 8)) * lVar52;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar49;
               uVar39 = SUB164(auVar17 * auVar33, 8);
               uVar55 = uVar43;
               if (uVar39 < uVar58) {
                  *puVar1 = uVar40;
                  puVar44 = (undefined8*)( (long)__s_00 + lVar51 * 8 );
                  uVar55 = *puVar44;
                  *puVar44 = uVar43;
                  uVar40 = uVar57;
                  uVar58 = uVar39;
               }

               uVar58 = uVar58 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(iVar50 + 1) * lVar52;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar49;
               lVar51 = SUB168(auVar18 * auVar34, 8);
               puVar1 = (uint*)( lVar47 + lVar51 * 4 );
               iVar50 = SUB164(auVar18 * auVar34, 8);
               uVar43 = uVar55;
               uVar57 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar51 * 8 ) = uVar43;
            *puVar1 = uVar40;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar42 = uVar42 + 1;
      }
 while ( uVar41 != uVar42 );
      Memory::free_static(pvVar48, false);
      Memory::free_static(pvVar4, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar41 = StringName::get_empty_hash();
         lVar47 = *(long*)( this + 8 );
      }
 else {
         uVar41 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar41 == 0) {
         uVar41 = 1;
      }

      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar41 * lVar52;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar42;
      lVar51 = SUB168(auVar7 * auVar23, 8);
      uVar56 = *(uint*)( *(long*)( this + 0x10 ) + lVar51 * 4 );
      uVar57 = SUB164(auVar7 * auVar23, 8);
      if (uVar56 != 0) {
         uVar58 = 0;
         do {
            if (( uVar56 == uVar41 ) && ( *(long*)( *(long*)( lVar47 + lVar51 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar44 = *(undefined8**)( lVar47 + (ulong)uVar57 * 8 );
               goto LAB_001077fc;
            }

            uVar58 = uVar58 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = ( ulong )(uVar57 + 1) * lVar52;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar42;
            lVar51 = SUB168(auVar8 * auVar24, 8);
            uVar56 = *(uint*)( *(long*)( this + 0x10 ) + lVar51 * 4 );
            uVar57 = SUB164(auVar8 * auVar24, 8);
         }
 while ( ( uVar56 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar56 * lVar52,auVar25._8_8_ = 0,auVar25._0_8_ = uVar42,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar57 + uVar40 ) - SUB164(auVar9 * auVar25, 8)) * lVar52,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,uVar58 <= SUB164(auVar10 * auVar26, 8) );
      }

      local_70 = 0;
      uVar42 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar47 == 0) goto LAB_00107f40;
      goto LAB_00107851;
   }

   local_70 = 0;
   iVar50 = 0;
   LAB_00107964:if ((float)uVar42 * __LC44 < (float)( iVar50 + 1 )) goto LAB_0010798a;
}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;local_48 = (long*)0x0;puVar44 = (undefined8*)operator_new(0x28, "");*puVar44 = local_68._0_8_;puVar44[1] = local_68._8_8_;StringName::StringName((StringName*)( puVar44 + 2 ), (StringName*)&local_58);puVar44[4] = 0;*(undefined4*)( puVar44 + 3 ) = (undefined4)local_50;if (local_48 != (long*)0x0) {
   puVar59 = (undefined4*)*local_48;
   if (puVar59 != (undefined4*)0x0) {
      pauVar45 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      puVar44[4] = pauVar45;
      *(undefined4*)pauVar45[1] = 0;
      *pauVar45 = (undefined1[16])0x0;
      do {
         while (true) {
            puVar46 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
            uVar3 = *puVar59;
            *(undefined8*)( puVar46 + 2 ) = 0;
            *puVar46 = uVar3;
            plVar5 = (long*)puVar44[4];
            lVar47 = plVar5[1];
            *(long**)( puVar46 + 6 ) = plVar5;
            *(long*)( puVar46 + 4 ) = lVar47;
            if (lVar47 != 0) {
               *(undefined4**)( lVar47 + 8 ) = puVar46;
            }

            plVar5[1] = (long)puVar46;
            if (*plVar5 != 0) break;
            puVar59 = *(undefined4**)( puVar59 + 2 );
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
            *plVar5 = (long)puVar46;
            if (puVar59 == (undefined4*)0x0) goto LAB_00107c9a;
         }
;
         puVar59 = *(undefined4**)( puVar59 + 2 );
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + 1;
      }
 while ( puVar59 != (undefined4*)0x0 );
   }

   LAB_00107c9a:if (local_48 != (long*)0x0) {
      do {
         plVar5 = local_48;
         pvVar48 = (void*)*local_48;
         if (pvVar48 == (void*)0x0) {
            if ((int)local_48[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00107d0b;
            }

            break;
         }

         if (local_48 == *(long**)( (long)pvVar48 + 0x18 )) {
            lVar47 = *(long*)( (long)pvVar48 + 8 );
            lVar52 = *(long*)( (long)pvVar48 + 0x10 );
            *local_48 = lVar47;
            if (pvVar48 == (void*)local_48[1]) {
               local_48[1] = lVar52;
            }

            if (lVar52 != 0) {
               *(long*)( lVar52 + 8 ) = lVar47;
               lVar47 = *(long*)( (long)pvVar48 + 8 );
            }

            if (lVar47 != 0) {
               *(long*)( lVar47 + 0x10 ) = lVar52;
            }

            Memory::free_static(pvVar48, false);
            *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

      }
 while ( (int)local_48[2] != 0 );
      Memory::free_static(local_48, false);
   }

}
LAB_00107d0b:if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar6 = *(undefined8**)( this + 0x20 );if (puVar6 == (undefined8*)0x0) {
   lVar47 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar44;
   *(undefined8**)( this + 0x20 ) = puVar44;
   if (lVar47 == 0) goto LAB_00107ebd;
   LAB_00107d49:uVar40 = *(uint*)( lVar47 + 0x20 );
}
 else {
   *puVar6 = puVar44;
   puVar44[1] = puVar6;
   lVar47 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar44;
   if (lVar47 != 0) goto LAB_00107d49;
   LAB_00107ebd:uVar40 = StringName::get_empty_hash();
}
if (uVar40 == 0) {
   uVar40 = 1;
}
uVar42 = (ulong)uVar40;lVar47 = *(long*)( this + 0x10 );uVar57 = 0;lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar49 = CONCAT44(0, uVar41);auVar19._8_8_ = 0;auVar19._0_8_ = uVar42 * lVar52;auVar35._8_8_ = 0;auVar35._0_8_ = uVar49;lVar53 = SUB168(auVar19 * auVar35, 8);lVar51 = *(long*)( this + 8 );puVar1 = (uint*)( lVar47 + lVar53 * 4 );iVar50 = SUB164(auVar19 * auVar35, 8);uVar56 = *puVar1;puVar6 = puVar44;while (uVar56 != 0) {
   auVar20._8_8_ = 0;
   auVar20._0_8_ = (ulong)uVar56 * lVar52;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar49;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = ( ulong )(( uVar41 + iVar50 ) - SUB164(auVar20 * auVar36, 8)) * lVar52;
   auVar37._8_8_ = 0;
   auVar37._0_8_ = uVar49;
   uVar40 = SUB164(auVar21 * auVar37, 8);
   puVar60 = puVar6;
   if (uVar40 < uVar57) {
      *puVar1 = (uint)uVar42;
      uVar42 = (ulong)uVar56;
      puVar2 = (undefined8*)( lVar51 + lVar53 * 8 );
      puVar60 = (undefined8*)*puVar2;
      *puVar2 = puVar6;
      uVar57 = uVar40;
   }

   uVar40 = (uint)uVar42;
   uVar57 = uVar57 + 1;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = ( ulong )(iVar50 + 1) * lVar52;
   auVar38._8_8_ = 0;
   auVar38._0_8_ = uVar49;
   lVar53 = SUB168(auVar22 * auVar38, 8);
   puVar1 = (uint*)( lVar47 + lVar53 * 4 );
   iVar50 = SUB164(auVar22 * auVar38, 8);
   puVar6 = puVar60;
   uVar56 = *puVar1;
}
;*(undefined8**)( lVar51 + lVar53 * 8 ) = puVar6;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001077fc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar44 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* List<_GDFKCS, DefaultAllocator>::~List() */void List<_GDFKCS,DefaultAllocator>::~List(List<_GDFKCS,DefaultAllocator> *this) {
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

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 8 ) != 0 )) {
            StringName::unref();
         }

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
/* List<GDScriptFunction::StackDebug, DefaultAllocator>::~List() */void List<GDScriptFunction::StackDebug,DefaultAllocator>::~List(List<GDScriptFunction::StackDebug,DefaultAllocator> *this) {
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

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

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
/* void List<_GDFKCS, DefaultAllocator>::sort_custom<Comparator<_GDFKCS> >() */void List<_GDFKCS,DefaultAllocator>::sort_custom<Comparator<_GDFKCS>>(List<_GDFKCS,DefaultAllocator> *this) {
   size_t __n;
   int iVar1;
   int iVar2;
   undefined8 *puVar3;
   Element *pEVar4;
   Element **__src;
   long lVar5;
   Element *pEVar6;
   Element **ppEVar7;
   Element *pEVar8;
   long lVar9;
   Element *pEVar10;
   Element *pEVar11;
   Element **ppEVar12;
   Element *pEVar13;
   long lVar14;
   Element **local_60;
   if (*(long*)this == 0) {
      return;
   }

   iVar1 = *(int*)( *(long*)this + 0x10 );
   if (iVar1 < 2) {
      return;
   }

   pEVar4 = (Element*)(long)iVar1;
   __src = (Element**)Memory::alloc_static((long)pEVar4 * 8, true);
   if (__src == (Element**)0x0) {
      _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
      local_60 = (Element**)0x8;
   }
 else {
      __src[-1] = pEVar4;
      local_60 = __src + 1;
   }

   if (*(long**)this != (long*)0x0) {
      ppEVar7 = __src;
      for (pEVar13 = (Element*)**(long**)this; pEVar13 != (Element*)0x0; pEVar13 = *(Element**)( pEVar13 + 0x18 )) {
         *ppEVar7 = pEVar13;
         ppEVar7 = ppEVar7 + 1;
      }

   }

   lVar9 = 0;
   pEVar13 = pEVar4;
   do {
      pEVar13 = (Element*)( (long)pEVar13 >> 1 );
      lVar9 = lVar9 + 1;
   }
 while ( pEVar13 != (Element*)0x1 );
   SortArray<List<_GDFKCS,DefaultAllocator>::Element*,List<_GDFKCS,DefaultAllocator>::AuxiliaryComparator<Comparator<_GDFKCS>>,true>::introsort(0, (long)pEVar4, __src, lVar9 * 2);
   if ((long)pEVar4 < 0x11) {
      pEVar13 = (Element*)0x1;
      pEVar8 = *__src;
      do {
         while (true) {
            pEVar6 = __src[(long)pEVar13];
            __n = (long)pEVar13 * 8;
            iVar2 = *(int*)pEVar6;
            if (iVar2 < *(int*)pEVar8) break;
            pEVar8 = __src[(long)( pEVar13 + -1 )];
            ppEVar7 = __src + (long)pEVar13;
            pEVar10 = pEVar13 + -1;
            if (iVar2 < *(int*)pEVar8) {
               do {
                  pEVar11 = pEVar10;
                  if (pEVar11 == (Element*)0x0) {
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     ppEVar7 = local_60;
                     goto LAB_00108653;
                  }

                  __src[(long)( pEVar11 + 1 )] = pEVar8;
                  pEVar8 = __src[(long)( pEVar11 + -1 )];
                  pEVar10 = pEVar11 + -1;
               }
 while ( iVar2 < *(int*)pEVar8 );
               ppEVar7 = __src + (long)pEVar11;
            }

            LAB_00108653:pEVar13 = pEVar13 + 1;
            *ppEVar7 = pEVar6;
            pEVar6 = *__src;
            pEVar8 = pEVar6;
            if (pEVar4 == pEVar13) goto LAB_00108500;
         }
;
         pEVar13 = pEVar13 + 1;
         memmove(__src + 1, __src, __n);
         *__src = pEVar6;
         pEVar8 = pEVar6;
      }
 while ( pEVar4 != pEVar13 );
   }
 else {
      ppEVar7 = __src + 1;
      lVar9 = 1;
      do {
         while (true) {
            lVar14 = lVar9;
            pEVar13 = *ppEVar7;
            iVar2 = *(int*)pEVar13;
            if (iVar2 < *(int*)*__src) break;
            pEVar8 = ppEVar7[-1];
            lVar9 = lVar14 + -1;
            ppEVar12 = ppEVar7;
            if (iVar2 < *(int*)pEVar8) {
               do {
                  lVar5 = lVar9;
                  if (lVar5 == 0) {
                     _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                     ppEVar12 = local_60;
                     goto LAB_0010844f;
                  }

                  __src[lVar5 + 1] = pEVar8;
                  pEVar8 = __src[lVar5 + -1];
                  lVar9 = lVar5 + -1;
               }
 while ( iVar2 < *(int*)pEVar8 );
               ppEVar12 = __src + lVar5;
            }

            LAB_0010844f:*ppEVar12 = pEVar13;
            ppEVar7 = ppEVar7 + 1;
            lVar9 = lVar14 + 1;
            if (lVar14 + 1 == 0x10) goto LAB_00108460;
         }
;
         memmove(__src + 1, __src, lVar14 * 8);
         ppEVar7 = ppEVar7 + 1;
         *__src = pEVar13;
         lVar9 = lVar14 + 1;
      }
 while ( lVar14 + 1 != 0x10 );
      LAB_00108460:pEVar13 = (Element*)( lVar14 + 1 );
      ppEVar7 = __src + 0x10;
      do {
         pEVar6 = *ppEVar7;
         pEVar10 = ppEVar7[-1];
         pEVar8 = pEVar13 + -1;
         iVar2 = *(int*)pEVar6;
         ppEVar12 = ppEVar7;
         if (iVar2 < *(int*)pEVar10) {
            do {
               __src[(long)( pEVar8 + 1 )] = pEVar10;
               pEVar11 = pEVar8 + -1;
               pEVar10 = __src[(long)pEVar11];
               if (*(int*)pEVar10 <= iVar2) {
                  ppEVar12 = __src + (long)pEVar8;
                  goto LAB_001084e3;
               }

               pEVar8 = pEVar11;
            }
 while ( pEVar11 != (Element*)0x0 );
            _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
            ppEVar12 = local_60;
         }

         LAB_001084e3:pEVar13 = pEVar13 + 1;
         *ppEVar12 = pEVar6;
         ppEVar7 = ppEVar7 + 1;
      }
 while ( pEVar4 != pEVar13 );
      pEVar6 = *__src;
   }

   LAB_00108500:puVar3 = *(undefined8**)this;
   *puVar3 = pEVar6;
   *(undefined8*)( pEVar6 + 0x20 ) = 0;
   *(Element**)( *__src + 0x18 ) = __src[1];
   pEVar13 = __src[(long)( pEVar4 + -1 )];
   puVar3[1] = pEVar13;
   *(Element**)( pEVar13 + 0x20 ) = __src[(long)( pEVar4 + -2 )];
   *(undefined8*)( __src[(long)( pEVar4 + -1 )] + 0x18 ) = 0;
   if (iVar1 != 2) {
      ppEVar7 = __src;
      do {
         ppEVar12 = ppEVar7 + 1;
         *(Element**)( ppEVar7[1] + 0x20 ) = *ppEVar7;
         *(Element**)( *ppEVar12 + 0x18 ) = ppEVar7[2];
         ppEVar7 = ppEVar12;
      }
 while ( ppEVar12 != __src + ( iVar1 - 2 ) );
   }

   Memory::free_static(__src, true);
   return;
}
/* GDScriptFunction::debug_get_stack_member_state(int, List<Pair<StringName, int>,
   DefaultAllocator>*) const [clone .cold] */void GDScriptFunction::debug_get_stack_member_state(int param_1, List *param_2) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptFunction::~GDScriptFunction() [clone .cold] */void GDScriptFunction::~GDScriptFunction(GDScriptFunction *this) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MethodBind* create_method_bind<GDScriptFunctionState, Variant, Variant const&>(Variant
   (GDScriptFunctionState::*)(Variant const&)) */MethodBind *create_method_bind<GDScriptFunctionState,Variant,Variant_const&>(_func_Variant_Variant_ptr *param_1) {
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
   *(_func_Variant_Variant_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010b8c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GDScriptFunctionState";
   local_30 = 0x15;
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
/* MethodBind* create_method_bind<GDScriptFunctionState, bool, bool>(bool
   (GDScriptFunctionState::*)(bool) const) */MethodBind *create_method_bind<GDScriptFunctionState,bool,bool>(_func_bool_bool *param_1) {
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
   *(_func_bool_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010b920;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "GDScriptFunctionState";
   local_30 = 0x15;
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
/* MethodBindVarArgTR<GDScriptFunctionState, Variant>::~MethodBindVarArgTR() */void MethodBindVarArgTR<GDScriptFunctionState,Variant>::~MethodBindVarArgTR(MethodBindVarArgTR<GDScriptFunctionState,Variant> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__gen_argument_type_0010b980;
   if (*(long*)( this + 0xd0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xd0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xd0 );
         *(undefined8*)( this + 0xd0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)( this + 0xb8 ));
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0xa8 ));
   if (*(long*)( this + 0x90 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x90 );
         *(undefined8*)( this + 0x90 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x80 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x78 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x78 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x78 );
         *(undefined8*)( this + 0x78 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         MethodBind::~MethodBind((MethodBind*)this);
         return;
      }

   }

   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindVarArgTR<GDScriptFunctionState, Variant>::~MethodBindVarArgTR() */void MethodBindVarArgTR<GDScriptFunctionState,Variant>::~MethodBindVarArgTR(MethodBindVarArgTR<GDScriptFunctionState,Variant> *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__gen_argument_type_0010b980;
   if (*(long*)( this + 0xd0 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0xd0 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0xd0 );
         *(undefined8*)( this + 0xd0 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)( this + 0xb8 ));
   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0xa8 ));
   if (*(long*)( this + 0x90 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x90 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x90 );
         *(undefined8*)( this + 0x90 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x80 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x78 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x78 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x78 );
         *(undefined8*)( this + 0x78 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0xd8);
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
/* CowData<StringName>::_realloc(long) */undefined8 CowData<StringName>::_realloc(CowData<StringName> *this, long param_1) {
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
/* CowData<GDScriptDataType>::_unref() */void CowData<GDScriptDataType>::_unref(CowData<GDScriptDataType> *this) {
   CowData<GDScriptDataType> *this_00;
   long lVar1;
   long lVar2;
   Object *pOVar3;
   code *pcVar4;
   char cVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar6 = (long*)( *(long*)this + -0x10 );
   *plVar6 = *plVar6 + -1;
   UNLOCK();
   if (*plVar6 == 0) {
      lVar1 = *(long*)this;
      if (lVar1 != 0) {
         lVar2 = *(long*)( lVar1 + -8 );
         *(undefined8*)this = 0;
         if (lVar2 != 0) {
            plVar6 = (long*)( lVar1 + 0x20 );
            lVar7 = 0;
            do {
               if (plVar6[2] != 0) {
                  cVar5 = RefCounted::unreference();
                  if (cVar5 != '\0') {
                     pOVar3 = (Object*)plVar6[2];
                     cVar5 = predelete_handler(pOVar3);
                     if (cVar5 != '\0') {
                        ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                        Memory::free_static(pOVar3, false);
                     }

                  }

               }

               if (( StringName::configured != '\0' ) && ( *plVar6 != 0 )) {
                  StringName::unref();
               }

               this_00 = (CowData<GDScriptDataType>*)( plVar6 + -3 );
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 7;
               _unref(this_00);
            }
 while ( lVar2 != lVar7 );
         }

         Memory::free_static((void*)( lVar1 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::MethodBindVarArgBase(Variant (GDScriptFunctionState::*)(Variant const**, int,
   Callable::CallError&), MethodInfo const&, bool) */void MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::MethodBindVarArgBase(_func_Variant_Variant_ptr_ptr_int_CallError_ptr *param_1, MethodInfo *param_2, bool param_3) {
   size_t __n;
   undefined4 uVar1;
   int iVar2;
   undefined8 uVar3;
   long *plVar4;
   code *pcVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1(*pauVar8)[16];
   undefined4 *puVar9;
   long lVar10;
   undefined4 *puVar11;
   ulong uVar12;
   undefined8 *puVar13;
   long lVar14;
   CowData *in_RCX;
   StringName *this;
   undefined7 in_register_00000011;
   long lVar15;
   char in_R8B;
   StringName *pSVar16;
   long in_FS_OFFSET;
   bool bVar17;
   long local_80;
   undefined8 local_78;
   undefined1 local_70[16];
   undefined8 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   MethodBind::MethodBind((MethodBind*)param_1);
   *(MethodInfo**)( param_1 + 0x58 ) = param_2;
   *(undefined8*)( param_1 + 0x68 ) = 0;
   lVar15 = *(long*)in_RCX;
   *(undefined***)param_1 = &PTR__gen_argument_type_0010b980;
   *(ulong*)( param_1 + 0x60 ) = CONCAT71(in_register_00000011, param_3);
   if (lVar15 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x68 ), in_RCX);
   }

   uVar1 = *(undefined4*)( in_RCX + 8 );
   *(undefined8*)( param_1 + 0x78 ) = 0;
   lVar15 = *(long*)( in_RCX + 0x10 );
   *(undefined4*)( param_1 + 0x70 ) = uVar1;
   if (lVar15 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x78 ), in_RCX + 0x10);
   }

   StringName::StringName((StringName*)( param_1 + 0x80 ), (StringName*)( in_RCX + 0x18 ));
   uVar1 = *(undefined4*)( in_RCX + 0x20 );
   *(undefined8*)( param_1 + 0x90 ) = 0;
   lVar15 = *(long*)( in_RCX + 0x28 );
   *(undefined4*)( param_1 + 0x88 ) = uVar1;
   if (lVar15 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x90 ), in_RCX + 0x28);
   }

   *(undefined4*)( param_1 + 0x98 ) = *(undefined4*)( in_RCX + 0x30 );
   uVar3 = *(undefined8*)( in_RCX + 0x38 );
   *(undefined8*)( param_1 + 0xa8 ) = 0;
   *(undefined8*)( param_1 + 0xa0 ) = uVar3;
   if (( *(undefined8**)( in_RCX + 0x40 ) != (undefined8*)0x0 ) && ( puVar11 = (undefined4*)**(undefined8**)( in_RCX + 0x40 ) ),puVar11 != (undefined4*)0x0) {
      pauVar8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( param_1 + 0xa8 ) = pauVar8;
      *(undefined4*)pauVar8[1] = 0;
      *pauVar8 = (undefined1[16])0x0;
      do {
         while (true) {
            puVar9 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar9 + 8 ) = 0;
            *(undefined1(*) [16])( puVar9 + 2 ) = (undefined1[16])0x0;
            lVar15 = *(long*)( puVar11 + 2 );
            *puVar9 = 0;
            puVar9[6] = 0;
            puVar9[10] = 6;
            *(undefined8*)( puVar9 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar9 + 0xc ) = (undefined1[16])0x0;
            *puVar9 = *puVar11;
            if (lVar15 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 2 ), (CowData*)( puVar11 + 2 ));
            }

            StringName::operator =((StringName*)( puVar9 + 4 ), (StringName*)( puVar11 + 4 ));
            puVar9[6] = puVar11[6];
            if (*(long*)( puVar9 + 8 ) != *(long*)( puVar11 + 8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 8 ), (CowData*)( puVar11 + 8 ));
            }

            puVar9[10] = puVar11[10];
            plVar4 = *(long**)( param_1 + 0xa8 );
            lVar15 = plVar4[1];
            *(undefined8*)( puVar9 + 0xc ) = 0;
            *(long**)( puVar9 + 0x10 ) = plVar4;
            *(long*)( puVar9 + 0xe ) = lVar15;
            if (lVar15 != 0) {
               *(undefined4**)( lVar15 + 0x30 ) = puVar9;
            }

            plVar4[1] = (long)puVar9;
            if (*plVar4 != 0) break;
            puVar11 = *(undefined4**)( puVar11 + 0xc );
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
            *plVar4 = (long)puVar9;
            if (puVar11 == (undefined4*)0x0) goto LAB_00109241;
         }
;
         puVar11 = *(undefined4**)( puVar11 + 0xc );
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
      }
 while ( puVar11 != (undefined4*)0x0 );
   }

   LAB_00109241:*(undefined8*)( param_1 + 0xb8 ) = 0;
   if (*(long*)( in_RCX + 0x50 ) != 0) {
      CowData<Variant>::_unref((CowData<Variant>*)( param_1 + 0xb8 ));
      if (*(long*)( in_RCX + 0x50 ) != 0) {
         plVar4 = (long*)( *(long*)( in_RCX + 0x50 ) + -0x10 );
         do {
            lVar15 = *plVar4;
            if (lVar15 == 0) goto LAB_00109293;
            LOCK();
            lVar10 = *plVar4;
            bVar17 = lVar15 == lVar10;
            if (bVar17) {
               *plVar4 = lVar15 + 1;
               lVar10 = lVar15;
            }

            UNLOCK();
         }
 while ( !bVar17 );
         if (lVar10 != -1) {
            *(undefined8*)( param_1 + 0xb8 ) = *(undefined8*)( in_RCX + 0x50 );
         }

      }

   }

   LAB_00109293:uVar1 = *(undefined4*)( in_RCX + 0x58 );
   *(undefined8*)( param_1 + 0xd0 ) = 0;
   *(undefined4*)( param_1 + 0xc0 ) = uVar1;
   plVar4 = (long*)( *(long*)( in_RCX + 0x68 ) + -0x10 );
   if (*(long*)( in_RCX + 0x68 ) != 0) {
      do {
         lVar15 = *plVar4;
         if (lVar15 == 0) goto LAB_001092dd;
         LOCK();
         lVar10 = *plVar4;
         bVar17 = lVar15 == lVar10;
         if (bVar17) {
            *plVar4 = lVar15 + 1;
            lVar10 = lVar15;
         }

         UNLOCK();
      }
 while ( !bVar17 );
      if (lVar10 != -1) {
         *(undefined8*)( param_1 + 0xd0 ) = *(undefined8*)( in_RCX + 0x68 );
      }

   }

   LAB_001092dd:if (*(long*)( param_1 + 0xa8 ) == 0) {
      *(undefined4*)( param_1 + 0x34 ) = 0;
      uVar12 = 4;
      lVar15 = 1;
   }
 else {
      iVar2 = *(int*)( *(long*)( param_1 + 0xa8 ) + 0x10 );
      *(int*)( param_1 + 0x34 ) = iVar2;
      lVar15 = (long)( iVar2 + 1 );
      if (lVar15 == 0) {
         puVar11 = (undefined4*)0x0;
         goto LAB_0010932a;
      }

      uVar12 = lVar15 * 4;
   }

   puVar11 = (undefined4*)Memory::alloc_static(uVar12, true);
   if (puVar11 == (undefined4*)0x0) {
      puVar11 = (undefined4*)0x0;
      _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
   }
 else {
      *(long*)( puVar11 + -2 ) = lVar15;
   }

   LAB_0010932a:local_80 = 0;
   local_78 = 0;
   local_60 = 0;
   local_58 = 0;
   local_50 = 0x20006;
   local_70 = (undefined1[16])0x0;
   StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   lVar15 = local_58;
   *puVar11 = (undefined4)local_78;
   if (local_58 != 0) {
      LOCK();
      plVar4 = (long*)( local_58 + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar15 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar3 = local_70._0_8_;
   if (local_70._0_8_ != 0) {
      LOCK();
      plVar4 = (long*)( local_70._0_8_ + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_70._8_8_;
         local_70 = auVar6 << 0x40;
         Memory::free_static((void*)( uVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( param_1 + 0xa8 ) != 0) {
      iVar2 = *(int*)( *(long*)( param_1 + 0xa8 ) + 0x10 );
      if (iVar2 != 0) {
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_70._8_8_;
         local_70 = auVar7 << 0x40;
         if (iVar2 < 0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         }
 else {
            __n = (long)iVar2 * 8;
            uVar12 = __n - 1;
            uVar12 = uVar12 | uVar12 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            uVar12 = uVar12 | uVar12 >> 0x10;
            puVar13 = (undefined8*)Memory::alloc_static(( uVar12 | uVar12 >> 0x20 ) + 0x11, false);
            if (puVar13 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               *puVar13 = 1;
               local_70._0_8_ = puVar13 + 2;
               memset(puVar13 + 2, 0, __n);
               puVar13[1] = (long)iVar2;
            }

         }

         if (( *(undefined8**)( param_1 + 0xa8 ) != (undefined8*)0x0 ) && ( puVar9 = (undefined4*)**(undefined8**)( param_1 + 0xa8 ) ),puVar9 != (undefined4*)0x0) {
            lVar15 = 0;
            do {
               puVar11[lVar15 + 1] = *puVar9;
               StringName::StringName((StringName*)&local_80, (String*)( puVar9 + 2 ), false);
               if (local_70._0_8_ == 0) {
                  lVar10 = 0;
                  LAB_00109613:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar15, lVar10, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar5 = (code*)invalidInstructionException();
                  ( *pcVar5 )();
               }

               lVar10 = *(long*)( local_70._0_8_ + -8 );
               if (lVar10 <= lVar15) goto LAB_00109613;
               if (*(ulong*)( local_70._0_8_ + -0x10 ) < 2) {
                  LAB_0010958f:pSVar16 = (StringName*)local_70._0_8_;
               }
 else {
                  if (local_70._0_8_ == 0) {
                     /* WARNING: Does not return */
                     pcVar5 = (code*)invalidInstructionException();
                     ( *pcVar5 )();
                  }

                  lVar10 = *(long*)( local_70._0_8_ + -8 );
                  uVar12 = 0x10;
                  if (lVar10 * 8 != 0) {
                     uVar12 = lVar10 * 8 - 1;
                     uVar12 = uVar12 | uVar12 >> 1;
                     uVar12 = uVar12 | uVar12 >> 2;
                     uVar12 = uVar12 | uVar12 >> 4;
                     uVar12 = uVar12 | uVar12 >> 8;
                     uVar12 = uVar12 | uVar12 >> 0x10;
                     uVar12 = ( uVar12 | uVar12 >> 0x20 ) + 0x11;
                  }

                  puVar13 = (undefined8*)Memory::alloc_static(uVar12, false);
                  if (puVar13 == (undefined8*)0x0) {
                     _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                     goto LAB_0010958f;
                  }

                  pSVar16 = (StringName*)( puVar13 + 2 );
                  *puVar13 = 1;
                  puVar13[1] = lVar10;
                  lVar14 = 0;
                  this =
                  pSVar16;
                  if (lVar10 != 0) {
                     do {
                        StringName::StringName(this, (StringName*)( local_70._0_8_ + lVar14 * 8 ));
                        lVar14 = lVar14 + 1;
                        this =
                        this + 8;
                     }
 while ( lVar10 != lVar14 );
                  }

                  CowData<StringName>::_unref((CowData<StringName>*)local_70);
                  local_70._0_8_ = pSVar16;
               }

               if (*(long*)( pSVar16 + lVar15 * 8 ) == local_80) {
                  if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
                     StringName::unref();
                  }

               }
 else {
                  StringName::unref();
                  *(long*)( pSVar16 + lVar15 * 8 ) = local_80;
               }

               puVar9 = *(undefined4**)( puVar9 + 0xc );
               lVar15 = lVar15 + 1;
            }
 while ( puVar9 != (undefined4*)0x0 );
         }

         MethodBind::set_argument_names((Vector*)param_1);
         CowData<StringName>::_unref((CowData<StringName>*)local_70);
      }

   }

   *(undefined4**)( param_1 + 0x40 ) = puVar11;
   if (in_R8B != '\0') {
      *(uint*)( param_1 + 0x98 ) = *(uint*)( param_1 + 0x98 ) | 0x20000;
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   MethodBind::_set_returns(SUB81(param_1, 0));
   return;
}
/* GDScriptFunctionState::_initialize_classv() */void GDScriptFunctionState::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_00109919;
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
         LAB_00109a2a:if ((code*)PTR__bind_methods_0010e008 != Object::_bind_methods) {
            LAB_00109a3a:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00109a2a;
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_0010e008 != Object::_bind_methods) goto LAB_00109a3a;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_48 = "RefCounted";
   local_58 = 0;
   local_40 = 10;
   String::parse_latin1((StrRange*)&local_58);
   StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
   local_48 = "GDScriptFunctionState";
   local_60 = 0;
   local_40 = 0x15;
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

   _bind_methods();
   initialize_class()::initialized =
   '\x01';
   LAB_00109919:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Removing unreachable block (ram,0x00109c38) *//* WARNING: Removing unreachable block (ram,0x00109d68) *//* WARNING: Removing unreachable block (ram,0x00109f30) *//* WARNING: Removing unreachable block (ram,0x00109d74) *//* WARNING: Removing unreachable block (ram,0x00109d7e) *//* WARNING: Removing unreachable block (ram,0x00109f10) *//* WARNING: Removing unreachable block (ram,0x00109d8a) *//* WARNING: Removing unreachable block (ram,0x00109d94) *//* WARNING: Removing unreachable block (ram,0x00109ef0) *//* WARNING: Removing unreachable block (ram,0x00109da0) *//* WARNING: Removing unreachable block (ram,0x00109daa) *//* WARNING: Removing unreachable block (ram,0x00109ed0) *//* WARNING: Removing unreachable block (ram,0x00109db6) *//* WARNING: Removing unreachable block (ram,0x00109dc0) *//* WARNING: Removing unreachable block (ram,0x00109eb0) *//* WARNING: Removing unreachable block (ram,0x00109dcc) *//* WARNING: Removing unreachable block (ram,0x00109dd6) *//* WARNING: Removing unreachable block (ram,0x00109e90) *//* WARNING: Removing unreachable block (ram,0x00109de2) *//* WARNING: Removing unreachable block (ram,0x00109dec) *//* WARNING: Removing unreachable block (ram,0x00109e70) *//* WARNING: Removing unreachable block (ram,0x00109df4) *//* WARNING: Removing unreachable block (ram,0x00109e0a) *//* WARNING: Removing unreachable block (ram,0x00109e16) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindVarArgTR<GDScriptFunctionState, Variant>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindVarArgTR<GDScriptFunctionState,Variant>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long lVar1;
   char *pcVar2;
   Variant *pVVar3;
   long *plVar4;
   undefined4 in_register_00000014;
   long *plVar5;
   undefined4 in_R8D;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar5 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar5 != (long*)0x0 ) && ( plVar5[1] != 0 ) ) && ( *(char*)( plVar5[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar5[1] == 0) {
         plVar4 = (long*)plVar5[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *plVar5 + 0x40 ) )(plVar5);
         }

      }
 else {
         plVar4 = (long*)( plVar5[1] + 0x20 );
      }

      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC82, "./core/object/method_bind.h", 0x10d, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == MethodBind::get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010a08b;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar3 = param_2[0xb];
   if (( (ulong)pVVar3 & 1 ) != 0) {
      pVVar3 = *(Variant**)( pVVar3 + *(long*)( (long)plVar5 + (long)param_2[0xc] ) + -1 );
   }

   ( *(code*)pVVar3 )(param_1, (Variant*)( (long)plVar5 + (long)param_2[0xc] ), param_4, in_R8D);
   LAB_0010a08b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool,bool>::validated_call(MethodBindTRC<bool,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   Variant VVar3;
   code *pcVar4;
   long *plVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a369;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar3 = ( Variant )(*pcVar4)(param_1 + *(long*)( this + 0x60 ), ( *param_2 )[8]);
   param_3[8] = VVar3;
   LAB_0010a369:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,bool>::ptrcall(MethodBindTRC<bool,bool> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   undefined1 uVar3;
   code *pcVar4;
   long *plVar5;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (char*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0);
         pcVar2 = local_48;
         if (local_48 != (char*)0x0) {
            LOCK();
            plVar5 = (long*)( local_48 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_48 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_50;
         if (local_50 != 0) {
            LOCK();
            plVar5 = (long*)( local_50 + -0x10 );
            *plVar5 = *plVar5 + -1;
            UNLOCK();
            if (*plVar5 == 0) {
               local_50 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a58e;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar4 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar4 & 1 ) != 0) {
      pcVar4 = *(code**)( pcVar4 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar3 = ( *pcVar4 )(param_1 + *(long*)( this + 0x60 ), **param_2 != '\0');
   *(undefined1*)param_3 = uVar3;
   LAB_0010a58e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Variant const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTR<Variant,Variant_const&>::validated_call(MethodBindTR<Variant,Variant_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0);
         pcVar2 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_58 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010a7cb;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Variant::operator =(param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010a7cb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Variant const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Variant,Variant_const&>::ptrcall(MethodBindTR<Variant,Variant_const&> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char *pcVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0);
         pcVar2 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar4 = (long*)( local_58 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar2 + -0x10, false);
            }

         }

         lVar1 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar4 = (long*)( local_60 + -0x10 );
            *plVar4 = *plVar4 + -1;
            UNLOCK();
            if (*plVar4 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010aa2b;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar3 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   Variant::operator =((Variant*)param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010aa2b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char *pcVar5;
   char cVar6;
   bool bVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC82, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0);
         pcVar5 = local_58;
         if (local_58 != (char*)0x0) {
            LOCK();
            plVar11 = (long*)( local_58 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_58 = (char*)0x0;
               Memory::free_static(pcVar5 + -0x10, false);
            }

         }

         lVar2 = local_60;
         if (local_60 != 0) {
            LOCK();
            plVar11 = (long*)( local_60 + -0x10 );
            *plVar11 = *plVar11 + -1;
            UNLOCK();
            if (*plVar11 == 0) {
               local_60 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ade0;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar12 = param_2[5];
      if (pVVar12 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010ae20;
         LAB_0010ae10:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010ae20:uVar8 = 4;
            goto LAB_0010add5;
         }

         if (in_R8D == 1) goto LAB_0010ae10;
         lVar10 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar10) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar12 = pVVar12 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 1);
      uVar4 = _LC87;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      bVar7 = Variant::operator_cast_to_bool(pVVar12);
      bVar7 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), bVar7);
      Variant::Variant((Variant*)local_48, bVar7);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar8 = 3;
      LAB_0010add5:*in_R9 = uVar8;
      in_R9[2] = 1;
   }

   LAB_0010ade0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Variant, Variant const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Variant,Variant_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   char *pcVar4;
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
   long local_88;
   long local_80;
   char *local_78;
   undefined8 local_70;
   undefined4 local_68[2];
   undefined8 local_60;
   undefined8 uStack_58;
   int local_48[6];
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }

      }
 else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }

      if (local_78 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = 0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC82, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_78, 0);
         pcVar4 = local_78;
         if (local_78 != (char*)0x0) {
            LOCK();
            plVar9 = (long*)( local_78 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_78 = (char*)0x0;
               Memory::free_static(pcVar4 + -0x10, false);
            }

         }

         lVar2 = local_80;
         if (local_80 != 0) {
            LOCK();
            plVar9 = (long*)( local_80 + -0x10 );
            *plVar9 = *plVar9 + -1;
            UNLOCK();
            if (*plVar9 == 0) {
               local_80 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010b1b0;
      }

      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010b1f0;
         LAB_0010b1e0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0010b1f0:uVar6 = 4;
            goto LAB_0010b1a5;
         }

         if (in_R8D == 1) goto LAB_0010b1e0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0);
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = 0;
      }

      Variant::Variant((Variant*)local_48, pVVar10);
      ( *(code*)pVVar11 )(local_68, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)local_48);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_68[0];
      *(undefined8*)( param_1 + 8 ) = local_60;
      *(undefined8*)( param_1 + 0x10 ) = uStack_58;
      if (Variant::needs_deinit[local_48[0]] != '\0') {
         Variant::_clear_internal();
      }

   }
 else {
      uVar6 = 3;
      LAB_0010b1a5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0010b1b0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState, Variant>, GDScriptFunctionState,
   Variant, true>::MethodBindVarArgBase(Variant (GDScriptFunctionState::*)(Variant const**, int,
   Callable::CallError&), MethodInfo const&, bool) */void MethodBindVarArgBase<MethodBindVarArgTR<GDScriptFunctionState,Variant>,GDScriptFunctionState,Variant,true>::MethodBindVarArgBase(_func_Variant_Variant_ptr_ptr_int_CallError_ptr *param_1, MethodInfo *param_2, bool param_3) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindVarArgTR<GDScriptFunctionState, Variant>::~MethodBindVarArgTR() */void MethodBindVarArgTR<GDScriptFunctionState,Variant>::~MethodBindVarArgTR(MethodBindVarArgTR<GDScriptFunctionState,Variant> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<GDScriptFunction::StackDebug, DefaultAllocator>::~List() */void List<GDScriptFunction::StackDebug,DefaultAllocator>::~List(List<GDScriptFunction::StackDebug,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<_GDFKCS, DefaultAllocator>::~List() */void List<_GDFKCS,DefaultAllocator>::~List(List<_GDFKCS,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, bool>::~MethodBindTRC() */void MethodBindTRC<bool,bool>::~MethodBindTRC(MethodBindTRC<bool,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Variant, Variant const&>::~MethodBindTR() */void MethodBindTR<Variant,Variant_const&>::~MethodBindTR(MethodBindTR<Variant,Variant_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


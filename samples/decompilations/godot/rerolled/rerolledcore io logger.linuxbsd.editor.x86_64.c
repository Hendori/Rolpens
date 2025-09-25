/* CompositeLogger::logv(char const*, __va_list_tag*, bool) */void CompositeLogger::logv(CompositeLogger *this, char *param_1, __va_list_tag *param_2, bool param_3) {
   undefined8 *puVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 uStack_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar3 = (char)CoreGlobals::print_error_enabled;
   if (!param_3) {
      cVar3 = (char)CoreGlobals::print_line_enabled;
   }

   if (( cVar3 != '\0' ) && ( lVar4 = lVar4 != 0 )) {
      lVar5 = 0;
      do {
         if (*(long*)( lVar4 + -8 ) <= lVar5) break;
         local_58 = *(undefined8*)param_2;
         uStack_50 = *(undefined8*)( param_2 + 8 );
         local_48 = *(undefined8*)( param_2 + 0x10 );
         if (lVar4 == 0) {
            lVar6 = 0;
            LAB_001000a8:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar6, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar6 = *(long*)( lVar4 + -8 );
         if (lVar6 <= lVar5) goto LAB_001000a8;
         puVar1 = *(undefined8**)( lVar4 + lVar5 * 8 );
         lVar5 = lVar5 + 1;
         ( **(code**)*puVar1 )(puVar1, param_1, &local_58, param_3);
         lVar4 = *(long*)( this + 0x10 );
      }
 while ( lVar4 != 0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* StdLogger::logv(char const*, __va_list_tag*, bool) */void StdLogger::logv(StdLogger *this, char *param_1, __va_list_tag *param_2, bool param_3) {
   if (param_3) {
      if ((char)CoreGlobals::print_error_enabled != '\0') {
         __vfprintf_chk(_stderr, 2, param_1, param_2);
         return;
      }

      return;
   }

   if ((char)CoreGlobals::print_line_enabled == '\0') {
      return;
   }

   __vfprintf_chk(_stdout, 2, param_1, param_2);
   if (Logger::_flush_stdout_on_print == '\0') {
      return;
   }

   fflush(_stdout);
   return;
}
/* CompositeLogger::log_error(char const*, char const*, int, char const*, char const*, bool,
   Logger::ErrorType) */void CompositeLogger::log_error(CompositeLogger *this, undefined8 param_1, undefined8 param_2, undefined4 param_3, undefined8 param_4, undefined8 param_5, undefined1 param_6, undefined4 param_8) {
   long *plVar1;
   long lVar2;
   long lVar3;
   if (( (char)CoreGlobals::print_error_enabled != '\0' ) && ( lVar2 = lVar2 != 0 )) {
      lVar3 = 0;
      do {
         if (*(long*)( lVar2 + -8 ) <= lVar3) {
            return;
         }

         plVar1 = *(long**)( lVar2 + lVar3 * 8 );
         lVar3 = lVar3 + 1;
         ( **(code**)( *plVar1 + 8 ) )(plVar1, param_1, param_2, param_3, param_4, param_5, param_6, param_8);
         lVar2 = *(long*)( this + 0x10 );
      }
 while ( lVar2 != 0 );
   }

   return;
}
/* CowData<Logger*>::_copy_on_write() [clone .isra.0] */void CowData<Logger*>::_copy_on_write(CowData<Logger*> *this) {
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
/* CompositeLogger::~CompositeLogger() */void CompositeLogger::~CompositeLogger(CompositeLogger *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   *(undefined***)this = &PTR_logv_00103520;
   lVar2 = *(long*)( this + 0x10 );
   if (lVar2 == 0) {
      return;
   }

   lVar3 = 0;
   do {
      if (*(long*)( lVar2 + -8 ) <= lVar3) {
         LOCK();
         plVar1 = (long*)( lVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            return;
         }

         lVar2 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      plVar1 = *(long**)( lVar2 + lVar3 * 8 );
      lVar3 = lVar3 + 1;
      ( **(code**)( *plVar1 + 0x10 ) )(plVar1);
      Memory::free_static(plVar1, false);
      lVar2 = *(long*)( this + 0x10 );
   }
 while ( lVar2 != 0 );
   return;
}
/* CompositeLogger::~CompositeLogger() */void CompositeLogger::~CompositeLogger(CompositeLogger *this) {
   ~CompositeLogger(this)
   ;;
   operator_delete(this, 0x18);
   return;
}
/* RotatedFileLogger::logv(char const*, __va_list_tag*, bool) */void RotatedFileLogger::logv(RotatedFileLogger *this, char *param_1, __va_list_tag *param_2, bool param_3) {
   long *plVar1;
   String *pSVar2;
   code *pcVar3;
   long lVar4;
   undefined *puVar5;
   char cVar6;
   int iVar7;
   undefined1 *puVar8;
   long in_FS_OFFSET;
   long local_288;
   long local_280;
   undefined *local_278;
   undefined8 local_270;
   undefined8 local_260;
   undefined8 uStack_258;
   undefined8 local_250;
   undefined1 local_248[520];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   cVar6 = (char)CoreGlobals::print_error_enabled;
   if (!param_3) {
      cVar6 = (char)CoreGlobals::print_line_enabled;
   }

   if (( cVar6 != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      local_260 = *(undefined8*)param_2;
      uStack_258 = *(undefined8*)( param_2 + 8 );
      puVar8 = local_248;
      local_250 = *(undefined8*)( param_2 + 0x10 );
      iVar7 = __vsnprintf_chk(puVar8, 0x200, 2, 0x200, param_1, param_2);
      if (0x1ff < iVar7) {
         puVar8 = (undefined1*)Memory::alloc_static((long)( iVar7 + 1 ), false);
         __vsnprintf_chk(puVar8, (long)( iVar7 + 1 ), 2, 0xffffffffffffffff, param_1, &local_260);
      }

      plVar1 = *(long**)( this + 0x18 );
      local_280 = 0;
      pSVar2 = *(String**)( this + 0x20 );
      pcVar3 = *(code**)( *plVar1 + 0x2a8 );
      local_270 = 0;
      local_278 = &_LC3;
      String::parse_latin1((StrRange*)&local_280);
      String::utf8((char*)&local_288, (int)puVar8);
      RegEx::sub((String*)&local_278, pSVar2, SUB81(&local_288, 0), (int)(StrRange*)&local_280, 1);
      ( *pcVar3 )(plVar1);
      puVar5 = local_278;
      if (local_278 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_278 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_278 = (undefined*)0x0;
            Memory::free_static(puVar5 + -0x10, false);
         }

      }

      lVar4 = local_288;
      if (local_288 != 0) {
         LOCK();
         plVar1 = (long*)( local_288 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_288 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      lVar4 = local_280;
      if (local_280 != 0) {
         LOCK();
         plVar1 = (long*)( local_280 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_280 = 0;
            Memory::free_static((void*)( lVar4 + -0x10 ), false);
         }

      }

      if (0x1ff < iVar7) {
         Memory::free_static(puVar8, false);
      }

      if (( param_3 ) || ( Logger::_flush_stdout_on_print != '\0' )) {
         ( **(code**)( **(long**)( this + 0x18 ) + 0x260 ) )();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Logger::should_log(bool) */undefined1 Logger::should_log(Logger *this, bool param_1) {
   undefined1 uVar1;
   uVar1 = (undefined1)CoreGlobals::print_error_enabled;
   if (!param_1) {
      uVar1 = (undefined1)CoreGlobals::print_line_enabled;
   }

   return uVar1;
}
/* Logger::set_flush_stdout_on_print(bool) */void Logger::set_flush_stdout_on_print(bool param_1) {
   _flush_stdout_on_print = param_1;
   return;
}
/* Logger::logf(char const*, ...) */void Logger::logf(char *param_1, ...) {
   char in_AL;
   undefined8 in_RCX;
   undefined8 in_RDX;
   undefined8 in_RSI;
   undefined8 in_R8;
   undefined8 in_R9;
   long in_FS_OFFSET;
   undefined8 in_XMM0_Qa;
   undefined8 in_XMM1_Qa;
   undefined8 in_XMM2_Qa;
   undefined8 in_XMM3_Qa;
   undefined8 in_XMM4_Qa;
   undefined8 in_XMM5_Qa;
   undefined8 in_XMM6_Qa;
   undefined8 in_XMM7_Qa;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = in_XMM0_Qa;
      local_78 = in_XMM1_Qa;
      local_68 = in_XMM2_Qa;
      local_58 = in_XMM3_Qa;
      local_48 = in_XMM4_Qa;
      local_38 = in_XMM5_Qa;
      local_28 = in_XMM6_Qa;
      local_18 = in_XMM7_Qa;
   }

   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = in_RDX;
   local_a0 = in_RCX;
   local_98 = in_R8;
   local_90 = in_R9;
   if ((char)CoreGlobals::print_line_enabled != '\0') {
      local_d0 = &stack0x00000008;
      local_d8 = 0x10;
      local_c8 = local_b8;
      local_d4 = 0x30;
      ( *(code*)**(undefined8**)param_1 )(param_1, in_RSI, &local_d8, 0);
   }

   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Logger::logf_error(char const*, ...) */void Logger::logf_error(char *param_1, ...) {
   char in_AL;
   undefined8 in_RCX;
   undefined8 in_RDX;
   undefined8 in_RSI;
   undefined8 in_R8;
   undefined8 in_R9;
   long in_FS_OFFSET;
   undefined8 in_XMM0_Qa;
   undefined8 in_XMM1_Qa;
   undefined8 in_XMM2_Qa;
   undefined8 in_XMM3_Qa;
   undefined8 in_XMM4_Qa;
   undefined8 in_XMM5_Qa;
   undefined8 in_XMM6_Qa;
   undefined8 in_XMM7_Qa;
   undefined4 local_d8;
   undefined4 local_d4;
   undefined1 *local_d0;
   undefined1 *local_c8;
   long local_c0;
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_68;
   undefined8 local_58;
   undefined8 local_48;
   undefined8 local_38;
   undefined8 local_28;
   undefined8 local_18;
   if (in_AL != '\0') {
      local_88 = in_XMM0_Qa;
      local_78 = in_XMM1_Qa;
      local_68 = in_XMM2_Qa;
      local_58 = in_XMM3_Qa;
      local_48 = in_XMM4_Qa;
      local_38 = in_XMM5_Qa;
      local_28 = in_XMM6_Qa;
      local_18 = in_XMM7_Qa;
   }

   local_c0 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a8 = in_RDX;
   local_a0 = in_RCX;
   local_98 = in_R8;
   local_90 = in_R9;
   if ((char)CoreGlobals::print_error_enabled != '\0') {
      local_d0 = &stack0x00000008;
      local_d8 = 0x10;
      local_c8 = local_b8;
      local_d4 = 0x30;
      ( *(code*)**(undefined8**)param_1 )(param_1, in_RSI, &local_d8, 1);
   }

   if (local_c0 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Logger::log_error(char const*, char const*, int, char const*, char const*, bool,
   Logger::ErrorType) */void Logger::log_error(Logger *this, undefined8 param_1, undefined8 param_2, uint param_3, char *param_4, char *param_5, undefined8 param_6, uint param_8) {
   char *pcVar1;
   if ((char)CoreGlobals::print_error_enabled == '\0') {
      return;
   }

   pcVar1 = "SCRIPT ERROR";
   if (param_8 != 2) {
      if (param_8 < 3) {
         pcVar1 = "WARNING";
         if (param_8 != 0) goto joined_r0x001008b5;
      }
 else {
         pcVar1 = "SHADER ERROR";
         if (param_8 == 3) goto joined_r0x001008b5;
         _err_print_error("log_error", "core/io/logger.cpp", 0x4f, "Unknown error type", 0, 0);
      }

      pcVar1 = "ERROR";
   }

   joined_r0x001008b5:if (( param_5 != (char*)0x0 ) && ( *param_5 != '\0' )) {
      param_4 = param_5;
   }

   logf_error((char*)this, "%s: %s\n", pcVar1, param_4);
   logf_error((char*)this, "   at: %s (%s:%i)\n", param_1, param_2, (ulong)param_3);
   return;
}
/* CompositeLogger::CompositeLogger(Vector<Logger*> const&) */void CompositeLogger::CompositeLogger(CompositeLogger *this, Vector *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   bool bVar4;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined***)this = &PTR_logv_00103520;
   plVar1 = (long*)( *(long*)( param_1 + 8 ) + -0x10 );
   if (*(long*)( param_1 + 8 ) != 0) {
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
         *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 8 );
      }

   }

   return;
}
/* RotatedFileLogger::clear_old_backups() */void RotatedFileLogger::clear_old_backups(RotatedFileLogger *this) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   char cVar4;
   Element *pEVar5;
   long lVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   int iVar10;
   long in_FS_OFFSET;
   bool bVar11;
   long local_88;
   long local_80;
   Object *local_78;
   long local_70;
   long local_68;
   long local_60;
   Element *local_58;
   Element *local_50;
   int local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar10 = *(int*)( this + 0x10 );
   String::get_file();
   String::get_basename();
   pEVar8 = local_58;
   if (local_58 != (Element*)0x0) {
      LOCK();
      pEVar5 = local_58 + -0x10;
      *(long*)pEVar5 = *(long*)pEVar5 + -1;
      UNLOCK();
      if (*(long*)pEVar5 == 0) {
         local_58 = (Element*)0x0;
         Memory::free_static(pEVar8 + -0x10, false);
      }

   }

   String::get_extension();
   String::get_base_dir();
   DirAccess::open((String*)&local_78, (RBSet<String,Comparator<String>,DefaultAllocator>*)&local_58);
   pEVar8 = local_58;
   if (local_58 != (Element*)0x0) {
      LOCK();
      pEVar5 = local_58 + -0x10;
      *(long*)pEVar5 = *(long*)pEVar5 + -1;
      UNLOCK();
      if (*(long*)pEVar5 == 0) {
         local_58 = (Element*)0x0;
         Memory::free_static(pEVar8 + -0x10, false);
      }

   }

   if (local_78 != (Object*)0x0) {
      ( **(code**)( *(long*)local_78 + 0x160 ) )();
      ( **(code**)( *(long*)local_78 + 0x168 ) )((String*)&local_70);
      local_58 = (Element*)0x0;
      local_48 = 0;
      local_50 = (Element*)&_GlobalNilClass::_nil;
      LAB_00100ab0:if (local_70 != 0) {
         do {
            if (*(uint*)( local_70 + -8 ) < 2) break;
            cVar4 = ( **(code**)( *(long*)local_78 + 0x170 ) )();
            if (( cVar4 == '\0' ) && ( cVar4 = String::begins_with((String*)&local_70) ),cVar4 != '\0') {
               String::get_extension();
               cVar4 = String::operator ==((String*)&local_68, (String*)&local_80);
               lVar3 = local_68;
               if (cVar4 == '\0') {
                  if (local_68 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

               }
 else {
                  String::get_file();
                  cVar4 = String::operator !=((String*)&local_70, (String*)&local_60);
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

                  lVar3 = local_68;
                  if (local_68 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_68 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_68 = 0;
                        Memory::free_static((void*)( lVar3 + -0x10 ), false);
                     }

                  }

                  if (cVar4 != '\0') {
                     if (local_58 == (Element*)0x0) {
                        local_58 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
                        *(undefined1(*) [16])( local_58 + 0x20 ) = (undefined1[16])0x0;
                        *(undefined8*)( local_58 + 0x30 ) = 0;
                        *(undefined4*)local_58 = 1;
                        for (int i = 0; i < 3; i++) {
                           *(Element**)( local_58 + ( 8*i + 8 ) ) = local_50;
                        }

                        pEVar8 = local_58;
                     }
 else {
                        pEVar5 = *(Element**)( local_58 + 0x10 );
                        pEVar8 = local_58;
                        if (*(Element**)( local_58 + 0x10 ) != local_50) {
                           do {
                              while (true) {
                                 pEVar8 = pEVar5;
                                 cVar4 = String::operator <((String*)&local_70, (String*)( pEVar8 + 0x30 ));
                                 if (cVar4 != '\0') break;
                                 cVar4 = String::operator <((String*)( pEVar8 + 0x30 ), (String*)&local_70);
                                 if (cVar4 == '\0') goto LAB_00100c53;
                                 pEVar5 = *(Element**)( pEVar8 + 8 );
                                 if (local_50 == *(Element**)( pEVar8 + 8 )) goto LAB_00100ef6;
                              }
;
                              pEVar5 = *(Element**)( pEVar8 + 0x10 );
                           }
 while ( local_50 != *(Element**)( pEVar8 + 0x10 ) );
                        }

                     }

                     LAB_00100ef6:pEVar5 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
                     *(undefined1(*) [16])( pEVar5 + 0x20 ) = (undefined1[16])0x0;
                     *(undefined4*)pEVar5 = 0;
                     *(undefined8*)( pEVar5 + 0x30 ) = 0;
                     *(Element**)( pEVar5 + 0x18 ) = pEVar8;
                     *(Element**)( pEVar5 + 8 ) = local_50;
                     *(Element**)( pEVar5 + 0x10 ) = local_50;
                     plVar1 = (long*)( local_70 + -0x10 );
                     if (local_70 != 0) {
                        do {
                           lVar3 = *plVar1;
                           if (lVar3 == 0) goto LAB_00100f5b;
                           LOCK();
                           lVar6 = *plVar1;
                           bVar11 = lVar3 == lVar6;
                           if (bVar11) {
                              *plVar1 = lVar3 + 1;
                              lVar6 = lVar3;
                           }

                           UNLOCK();
                        }
 while ( !bVar11 );
                        if (lVar6 != -1) {
                           *(long*)( pEVar5 + 0x30 ) = local_70;
                        }

                     }

                     LAB_00100f5b:if (( pEVar8 == local_58 ) || ( cVar4 = String::operator <((String*)&local_70, (String*)( pEVar8 + 0x30 )) ),cVar4 != '\0') {
                        *(Element**)( pEVar8 + 0x10 ) = pEVar5;
                     }
 else {
                        *(Element**)( pEVar8 + 8 ) = pEVar5;
                     }

                     pEVar8 = pEVar5;
                     pEVar9 = *(Element**)( pEVar5 + 8 );
                     if (local_50 == *(Element**)( pEVar5 + 8 )) {
                        do {
                           pEVar7 = *(Element**)( pEVar8 + 0x18 );
                           bVar11 = pEVar8 == *(Element**)( pEVar7 + 8 );
                           pEVar8 = pEVar7;
                        }
 while ( bVar11 );
                        if (pEVar7 == local_58) {
                           pEVar7 = (Element*)0x0;
                        }

                     }
 else {
                        do {
                           pEVar8 = pEVar9 + 0x10;
                           pEVar7 = pEVar9;
                           pEVar9 = *(Element**)pEVar8;
                        }
 while ( local_50 != *(Element**)pEVar8 );
                     }

                     *(Element**)( pEVar5 + 0x20 ) = pEVar7;
                     pEVar9 = *(Element**)( pEVar5 + 0x10 );
                     pEVar8 = pEVar5;
                     if (local_50 == *(Element**)( pEVar5 + 0x10 )) {
                        do {
                           pEVar9 = pEVar8;
                           pEVar8 = *(Element**)( pEVar9 + 0x18 );
                        }
 while ( pEVar9 == *(Element**)( pEVar8 + 0x10 ) );
                        if (pEVar9 != local_58) goto LAB_00100fc4;
                        *(undefined8*)( pEVar5 + 0x28 ) = 0;
                        if (pEVar7 != (Element*)0x0) goto LAB_00100fcd;
                     }
 else {
                        do {
                           pEVar8 = pEVar9;
                           pEVar9 = *(Element**)( pEVar8 + 8 );
                        }
 while ( local_50 != *(Element**)( pEVar8 + 8 ) );
                        LAB_00100fc4:*(Element**)( pEVar5 + 0x28 ) = pEVar8;
                        if (pEVar7 != (Element*)0x0) {
                           LAB_00100fcd:*(Element**)( pEVar7 + 0x28 ) = pEVar5;
                           pEVar8 = *(Element**)( pEVar5 + 0x28 );
                           if (pEVar8 == (Element*)0x0) goto LAB_00100fde;
                        }

                        *(Element**)( pEVar8 + 0x20 ) = pEVar5;
                     }

                     LAB_00100fde:local_48 = local_48 + 1;
                     RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_58, pEVar5);
                  }

               }

            }

            LAB_00100c53:( **(code**)( *(long*)local_78 + 0x168 ) )((String*)&local_60);
            lVar6 = local_60;
            lVar3 = local_70;
            if (local_70 == local_60) goto LAB_00100cc0;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            local_70 = local_60;
            if (local_60 == 0) break;
         }
 while ( true );
      }

      LAB_00100ad0:( **(code**)( *(long*)local_78 + 0x180 ) )();
      if (( ( iVar10 + -1 < local_48 ) && ( iVar10 = local_48 - ( iVar10 + -1 ) ),local_58 != (Element*)0x0 )) {
         do {
            pEVar5 = pEVar8;
            pEVar8 = *(Element**)( pEVar5 + 0x10 );
         }
 while ( local_50 != *(Element**)( pEVar5 + 0x10 ) );
         do {
            pcVar2 = *(code**)( *(long*)local_78 + 0x208 );
            local_60 = 0;
            plVar1 = (long*)( *(long*)( pEVar5 + 0x30 ) + -0x10 );
            if (*(long*)( pEVar5 + 0x30 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_00100b6f;
                  LOCK();
                  lVar6 = *plVar1;
                  bVar11 = lVar3 == lVar6;
                  if (bVar11) {
                     *plVar1 = lVar3 + 1;
                     lVar6 = lVar3;
                  }

                  UNLOCK();
               }
 while ( !bVar11 );
               if (lVar6 != -1) {
                  local_60 = *(long*)( pEVar5 + 0x30 );
               }

            }

            LAB_00100b6f:( *pcVar2 )();
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

            pEVar5 = *(Element**)( pEVar5 + 0x20 );
            iVar10 = iVar10 + -1;
         }
 while ( ( pEVar5 != (Element*)0x0 ) && ( 0 < iVar10 ) );
      }

      RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet((RBSet<String,Comparator<String>,DefaultAllocator>*)&local_58);
      lVar3 = local_70;
      if (local_70 != 0) {
         LOCK();
         plVar1 = (long*)( local_70 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      if (( ( local_78 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_78 + 0x140 ))(local_78);
      Memory::free_static(local_78, false);
   }

}
lVar3 = local_80;if (local_80 != 0) {
   LOCK();
   plVar1 = (long*)( local_80 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_80 = 0;
      Memory::free_static((void*)( lVar3 + -0x10 ), false);
   }

}
if (local_88 != 0) {
   LOCK();
   plVar1 = (long*)( local_88 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_88 + -0x10 ), false);
   }

}
if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;LAB_00100cc0:if (local_60 == 0) goto LAB_00100ad0;LOCK();plVar1 = (long*)( local_60 + -0x10 );*plVar1 = *plVar1 + -1;UNLOCK();if (*plVar1 == 0) {
   local_60 = 0;
   Memory::free_static((void*)( lVar6 + -0x10 ), false);
}
goto LAB_00100ab0;}/* RotatedFileLogger::rotate_file() */void RotatedFileLogger::rotate_file(RotatedFileLogger *this) {
   String *pSVar1;
   long *plVar2;
   Object *pOVar3;
   undefined8 uVar4;
   code *pcVar5;
   long lVar6;
   char cVar7;
   bool bVar8;
   Object *pOVar9;
   long in_FS_OFFSET;
   long local_60;
   long local_58;
   Object *local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x18 ) != 0 ) && ( cVar7 = cVar7 != '\0' )) {
      pOVar3 = *(Object**)( this + 0x18 );
      cVar7 = predelete_handler(pOVar3);
      if (cVar7 != '\0') {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   *(undefined8*)( this + 0x18 ) = 0;
   pSVar1 = (String*)( this + 8 );
   cVar7 = FileAccess::exists(pSVar1);
   if (cVar7 == '\0') {
      DirAccess::create(&local_50, 1);
      pOVar3 = local_50;
      if (local_50 != (Object*)0x0) {
         pcVar5 = *(code**)( *(long*)local_50 + 0x1c0 );
         String::get_base_dir();
         ( *pcVar5 )(pOVar3);
         pOVar3 = local_48;
         if (local_48 != (Object*)0x0) {
            LOCK();
            pOVar9 = local_48 + -0x10;
            *(long*)pOVar9 = *(long*)pOVar9 + -1;
            UNLOCK();
            if (*(long*)pOVar9 == 0) {
               local_48 = (Object*)0x0;
               Memory::free_static(pOVar3 + -0x10, false);
            }

         }

         if (( ( local_50 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar3 = local_50,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

}
else if = (1 < *(int*)( this + 0x10 )){
   bVar8 = (bool)Time::get_singleton();
   Time::get_datetime_string_from_system(SUB81((String*)&local_48, 0), bVar8);
   String::replace((char*)&local_60, (char*)&local_48);
   pOVar3 = local_48;
   if (local_48 != (Object*)0x0) {
      LOCK();
      pOVar9 = local_48 + -0x10;
      *(long*)pOVar9 = *(long*)pOVar9 + -1;
      UNLOCK();
      if (*(long*)pOVar9 == 0) {
         local_48 = (Object*)0x0;
         Memory::free_static(pOVar3 + -0x10, false);
      }

   }

   String::get_basename();
   String::operator +((String*)&local_58, (String*)&local_48);
   pOVar3 = local_48;
   if (local_48 != (Object*)0x0) {
      LOCK();
      pOVar9 = local_48 + -0x10;
      *(long*)pOVar9 = *(long*)pOVar9 + -1;
      UNLOCK();
      if (*(long*)pOVar9 == 0) {
         local_48 = (Object*)0x0;
         Memory::free_static(pOVar3 + -0x10, false);
      }

   }

   String::get_extension();
   pOVar3 = local_48;
   if (local_48 != (Object*)0x0) {
      uVar4 = *(undefined8*)( local_48 + -8 );
      if ((int)uVar4 == 0) {
         LOCK();
         pOVar9 = local_48 + -0x10;
         *(long*)pOVar9 = *(long*)pOVar9 + -1;
         UNLOCK();
         if (*(long*)pOVar9 == 0) {
            local_48 = (Object*)0x0;
            Memory::free_static(pOVar3 + -0x10, false);
         }

      }
 else {
         LOCK();
         pOVar9 = local_48 + -0x10;
         *(long*)pOVar9 = *(long*)pOVar9 + -1;
         UNLOCK();
         if (*(long*)pOVar9 == 0) {
            local_48 = (Object*)0x0;
            Memory::free_static(pOVar3 + -0x10, false);
         }

         if ((int)uVar4 != 1) {
            String::get_extension();
            operator+((char *)&
            local_48,(String*)&_LC20;
            String::operator +=((String*)&local_58, (String*)&local_48);
            pOVar3 = local_48;
            if (local_48 != (Object*)0x0) {
               LOCK();
               pOVar9 = local_48 + -0x10;
               *(long*)pOVar9 = *(long*)pOVar9 + -1;
               UNLOCK();
               if (*(long*)pOVar9 == 0) {
                  local_48 = (Object*)0x0;
                  Memory::free_static(pOVar3 + -0x10, false);
               }

            }

            pOVar3 = local_50;
            if (local_50 != (Object*)0x0) {
               LOCK();
               pOVar9 = local_50 + -0x10;
               *(long*)pOVar9 = *(long*)pOVar9 + -1;
               UNLOCK();
               if (*(long*)pOVar9 == 0) {
                  local_50 = (Object*)0x0;
                  Memory::free_static(pOVar3 + -0x10, false);
               }

            }

         }

      }

   }

   String::get_base_dir();
   DirAccess::open((String*)&local_50, (String*)&local_48);
   pOVar3 = local_48;
   if (local_48 != (Object*)0x0) {
      LOCK();
      pOVar9 = local_48 + -0x10;
      *(long*)pOVar9 = *(long*)pOVar9 + -1;
      UNLOCK();
      if (*(long*)pOVar9 == 0) {
         local_48 = (Object*)0x0;
         Memory::free_static(pOVar3 + -0x10, false);
      }

   }

   if (local_50 != (Object*)0x0) {
      ( **(code**)( *(long*)local_50 + 0x1f8 ) )(local_50, pSVar1, (String*)&local_58, 0xffffffff);
   }

   clear_old_backups(this);
   if (( ( local_50 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar3 = local_50,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
   Memory::free_static(pOVar3, false);
}
lVar6 = local_58;if (local_58 != 0) {
   LOCK();
   plVar2 = (long*)( local_58 + -0x10 );
   *plVar2 = *plVar2 + -1;
   UNLOCK();
   if (*plVar2 == 0) {
      local_58 = 0;
      Memory::free_static((void*)( lVar6 + -0x10 ), false);
   }

}
lVar6 = local_60;if (local_60 != 0) {
   LOCK();
   plVar2 = (long*)( local_60 + -0x10 );
   *plVar2 = *plVar2 + -1;
   UNLOCK();
   if (*plVar2 == 0) {
      local_60 = 0;
      Memory::free_static((void*)( lVar6 + -0x10 ), false);
   }

}
}FileAccess::open((String*)&local_48, (int)pSVar1, (Error*)0x2);pOVar3 = *(Object**)( this + 0x18 );pOVar9 = pOVar3;if (local_48 != pOVar3) {
   *(Object**)( this + 0x18 ) = local_48;
   if (local_48 == (Object*)0x0) {
      if (pOVar3 == (Object*)0x0) goto LAB_001011cf;
      cVar7 = RefCounted::unreference();
   }
 else {
      cVar7 = RefCounted::reference();
      if (cVar7 == '\0') {
         *(undefined8*)( this + 0x18 ) = 0;
      }

      pOVar9 = local_48;
      if (pOVar3 == (Object*)0x0) goto LAB_001011b6;
      cVar7 = RefCounted::unreference();
   }

   pOVar9 = local_48;
   if (( cVar7 != '\0' ) && ( cVar7 = predelete_handler(pOVar3) ),pOVar9 = local_48,cVar7 != '\0') {
      ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
      Memory::free_static(pOVar3, false);
      pOVar9 = local_48;
   }

}
LAB_001011b6:if (( ( pOVar9 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar3 = local_48,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);Memory::free_static(pOVar3, false);}LAB_001011cf:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   Object::detach_from_objectdb();
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* RotatedFileLogger::RotatedFileLogger(String const&, int) */void RotatedFileLogger::RotatedFileLogger(RotatedFileLogger *this, String *param_1, int param_2) {
   long *plVar1;
   String *pSVar2;
   long lVar3;
   char cVar4;
   RegEx *this_00;
   Object *pOVar5;
   Object *pOVar6;
   long in_FS_OFFSET;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR_logv_001034c0;
   String::simplify_path();
   if (param_2 < 1) {
      param_2 = 1;
   }

   *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
   *(int*)( this + 0x10 ) = param_2;
   rotate_file(this);
   this_00 = (RegEx*)operator_new(0x198, "");
   RegEx::RegEx(this_00);
   postinitialize_handler((Object*)this_00);
   cVar4 = RefCounted::init_ref();
   if (cVar4 == '\0') {
      pOVar5 = *(Object**)( this + 0x20 );
      if (pOVar5 == (Object*)0x0) goto LAB_0010171b;
      *(undefined8*)( this + 0x20 ) = 0;
      cVar4 = RefCounted::unreference();
      if (cVar4 == '\0') goto LAB_0010171b;
      this_00 = (RegEx*)0x0;
      cVar4 = predelete_handler(pOVar5);
      if (cVar4 == '\0') goto LAB_0010171b;
      LAB_00101873:( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
      Memory::free_static(pOVar5, false);
      pOVar6 = (Object*)this_00;
      if (this_00 == (RegEx*)0x0) goto LAB_0010171b;
   }
 else {
      pOVar5 = *(Object**)( this + 0x20 );
      pOVar6 = pOVar5;
      if (this_00 != (RegEx*)pOVar5) {
         *(RegEx**)( this + 0x20 ) = this_00;
         cVar4 = RefCounted::reference();
         pOVar6 = (Object*)this_00;
         if (cVar4 == '\0') {
            *(undefined8*)( this + 0x20 ) = 0;
            if (pOVar5 != (Object*)0x0) {
               cVar4 = RefCounted::unreference();
               joined_r0x0010184f:if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) goto LAB_00101873;
            }

         }
 else if (pOVar5 != (Object*)0x0) {
            cVar4 = RefCounted::unreference();
            goto joined_r0x0010184f;
         }

      }

   }

   cVar4 = RefCounted::unreference();
   if (( cVar4 != '\0' ) && ( cVar4 = cVar4 != '\0' )) {
      ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
      Memory::free_static(pOVar6, false);
   }

   LAB_0010171b:Object::detach_from_objectdb();
   pSVar2 = *(String**)( this + 0x20 );
   local_48 = &_LC22;
   local_50 = 0;
   local_40 = 0x18;
   String::parse_latin1((StrRange*)&local_50);
   RegEx::compile(pSVar2, SUB81((StrRange*)&local_50, 0));
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CompositeLogger::add_logger(Logger*) */void CompositeLogger::add_logger(CompositeLogger *this, Logger *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 0x10 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 0x10 ) + -8 ) + 1;
   }

   iVar1 = CowData<Logger*>::resize<false>((CowData<Logger*>*)( this + 0x10 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 0x10 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 0x10 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<Logger*>::_copy_on_write((CowData<Logger*>*)( this + 0x10 ));
            *(Logger**)( *(long*)( this + 0x10 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}
/* StdLogger::~StdLogger() */void StdLogger::~StdLogger(StdLogger *this) {
   return;
}
/* StdLogger::~StdLogger() */void StdLogger::~StdLogger(StdLogger *this) {
   operator_delete(this, 8);
   return;
}
/* CowData<Logger*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Logger*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* RotatedFileLogger::~RotatedFileLogger() */void RotatedFileLogger::~RotatedFileLogger(RotatedFileLogger *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR_logv_001034c0;
   if (*(long*)( this + 0x20 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x20 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x18 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x18 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

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
/* RotatedFileLogger::~RotatedFileLogger() */void RotatedFileLogger::~RotatedFileLogger(RotatedFileLogger *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   *(undefined***)this = &PTR_logv_001034c0;
   if (*(long*)( this + 0x20 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x20 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (*(long*)( this + 0x18 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x18 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

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
      }

   }

   operator_delete(this, 0x28);
   return;
}
/* RBSet<String, Comparator<String>, DefaultAllocator>::_cleanup_tree(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) [clone .part.0] */void RBSet<String,Comparator<String>,DefaultAllocator>::_cleanup_tree(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   long *plVar1;
   Element *pEVar2;
   long lVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   pEVar2 = *(Element**)( param_1 + 0x10 );
   pEVar4 = *(Element**)( this + 8 );
   if (pEVar2 != pEVar4) {
      pEVar5 = *(Element**)( pEVar2 + 0x10 );
      if (pEVar4 != pEVar5) {
         pEVar7 = *(Element**)( pEVar5 + 0x10 );
         if (pEVar4 != pEVar7) {
            pEVar8 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar4 != pEVar8) {
               pEVar6 = *(Element**)( pEVar8 + 0x10 );
               if (pEVar4 != pEVar6) {
                  _cleanup_tree(this, pEVar6);
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar6) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x30 );
                     *(undefined8*)( pEVar8 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
               pEVar8 = *(Element**)( this + 8 );
            }

            pEVar4 = *(Element**)( pEVar7 + 8 );
            if (pEVar4 != pEVar8) {
               if (*(Element**)( pEVar4 + 0x10 ) != pEVar8) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 0x10 ));
                  pEVar8 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar4 + 8 ) != pEVar8) {
                  _cleanup_tree(this, *(Element**)( pEVar4 + 8 ));
               }

               if (*(long*)( pEVar4 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar4 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar4 + 0x30 );
                     *(undefined8*)( pEVar4 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar4, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x30 );
                  *(undefined8*)( pEVar7 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
            pEVar7 = *(Element**)( this + 8 );
         }

         pEVar4 = *(Element**)( pEVar5 + 8 );
         if (pEVar4 != pEVar7) {
            pEVar8 = *(Element**)( pEVar4 + 0x10 );
            if (pEVar8 != pEVar7) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x30 );
                     *(undefined8*)( pEVar8 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
               pEVar7 = *(Element**)( this + 8 );
            }

            pEVar8 = *(Element**)( pEVar4 + 8 );
            if (pEVar8 != pEVar7) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar7 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar7) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x30 );
                     *(undefined8*)( pEVar8 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar4 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar4 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar4 + 0x30 );
                  *(undefined8*)( pEVar4 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar4, false);
         }

         if (*(long*)( pEVar5 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar5 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar5 + 0x30 );
               *(undefined8*)( pEVar5 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
               Memory::free_static(pEVar5, false);
               pEVar5 = *(Element**)( this + 8 );
               goto LAB_00101f77;
            }

         }

         Memory::free_static(pEVar5, false);
         pEVar5 = *(Element**)( this + 8 );
      }

      LAB_00101f77:pEVar4 = *(Element**)( pEVar2 + 8 );
      if (pEVar4 != pEVar5) {
         pEVar7 = *(Element**)( pEVar4 + 0x10 );
         if (pEVar7 != pEVar5) {
            pEVar8 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar8 != pEVar5) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x30 );
                     *(undefined8*)( pEVar8 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar8 = *(Element**)( pEVar7 + 8 );
            if (pEVar8 != pEVar5) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x30 );
                     *(undefined8*)( pEVar8 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x30 );
                  *(undefined8*)( pEVar7 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
            pEVar5 = *(Element**)( this + 8 );
         }

         pEVar7 = *(Element**)( pEVar4 + 8 );
         if (pEVar7 != pEVar5) {
            pEVar8 = *(Element**)( pEVar7 + 0x10 );
            if (pEVar8 != pEVar5) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x30 );
                     *(undefined8*)( pEVar8 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
               pEVar5 = *(Element**)( this + 8 );
            }

            pEVar8 = *(Element**)( pEVar7 + 8 );
            if (pEVar8 != pEVar5) {
               if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
                  pEVar5 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
                  _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
               }

               if (*(long*)( pEVar8 + 0x30 ) != 0) {
                  LOCK();
                  plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar3 = *(long*)( pEVar8 + 0x30 );
                     *(undefined8*)( pEVar8 + 0x30 ) = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar7 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar7 + 0x30 );
                  *(undefined8*)( pEVar7 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar7, false);
         }

         if (*(long*)( pEVar4 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar4 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar4 + 0x30 );
               *(undefined8*)( pEVar4 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
               Memory::free_static(pEVar4, false);
               goto LAB_00102203;
            }

         }

         Memory::free_static(pEVar4, false);
      }

      LAB_00102203:if (*(long*)( pEVar2 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar2 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar2 + 0x30 );
            *(undefined8*)( pEVar2 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

      Memory::free_static(pEVar2, false);
      pEVar4 = *(Element**)( this + 8 );
   }

   pEVar2 = *(Element**)( param_1 + 8 );
   if (pEVar2 == pEVar4) goto LAB_001026a5;
   pEVar5 = *(Element**)( pEVar2 + 0x10 );
   if (pEVar5 != pEVar4) {
      pEVar7 = *(Element**)( pEVar5 + 0x10 );
      if (pEVar7 != pEVar4) {
         pEVar8 = *(Element**)( pEVar7 + 0x10 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x30 );
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar7 + 8 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x30 );
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
         }

         if (*(long*)( pEVar7 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar7 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar7 + 0x30 );
               *(undefined8*)( pEVar7 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar7, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar7 = *(Element**)( pEVar5 + 8 );
      if (pEVar7 != pEVar4) {
         pEVar8 = *(Element**)( pEVar7 + 0x10 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x30 );
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar7 + 8 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x30 );
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
         }

         if (*(long*)( pEVar7 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar7 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar7 + 0x30 );
               *(undefined8*)( pEVar7 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar7, false);
      }

      if (*(long*)( pEVar5 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar5 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar5 + 0x30 );
            *(undefined8*)( pEVar5 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar5, false);
            pEVar4 = *(Element**)( this + 8 );
            goto LAB_0010245f;
         }

      }

      Memory::free_static(pEVar5, false);
      pEVar4 = *(Element**)( this + 8 );
   }

   LAB_0010245f:pEVar5 = *(Element**)( pEVar2 + 8 );
   if (pEVar5 != pEVar4) {
      pEVar7 = *(Element**)( pEVar5 + 0x10 );
      if (pEVar7 != pEVar4) {
         pEVar8 = *(Element**)( pEVar7 + 0x10 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x30 );
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar7 + 8 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x30 );
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
         }

         if (*(long*)( pEVar7 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar7 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar7 + 0x30 );
               *(undefined8*)( pEVar7 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar7, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar7 = *(Element**)( pEVar5 + 8 );
      if (pEVar7 != pEVar4) {
         pEVar8 = *(Element**)( pEVar7 + 0x10 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x30 );
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
            pEVar4 = *(Element**)( this + 8 );
         }

         pEVar8 = *(Element**)( pEVar7 + 8 );
         if (pEVar8 != pEVar4) {
            if (*(Element**)( pEVar8 + 0x10 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
               pEVar4 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar8 + 8 ) != pEVar4) {
               _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
            }

            if (*(long*)( pEVar8 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar8 + 0x30 );
                  *(undefined8*)( pEVar8 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar8, false);
         }

         if (*(long*)( pEVar7 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar7 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar7 + 0x30 );
               *(undefined8*)( pEVar7 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar7, false);
      }

      if (*(long*)( pEVar5 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar5 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar5 + 0x30 );
            *(undefined8*)( pEVar5 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar5, false);
            goto LAB_00102673;
         }

      }

      Memory::free_static(pEVar5, false);
   }

   LAB_00102673:if (*(long*)( pEVar2 + 0x30 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( pEVar2 + 0x30 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( pEVar2 + 0x30 );
         *(undefined8*)( pEVar2 + 0x30 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(pEVar2, false);
   LAB_001026a5:if (*(long*)( param_1 + 0x30 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x30 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( param_1 + 0x30 );
         *(undefined8*)( param_1 + 0x30 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(param_1, false);
   return;
}
/* RBSet<String, Comparator<String>, DefaultAllocator>::~RBSet() */void RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet(RBSet<String,Comparator<String>,DefaultAllocator> *this) {
   long *plVar1;
   Element *pEVar2;
   long lVar3;
   Element *pEVar4;
   Element *pEVar5;
   void *pvVar6;
   Element *pEVar7;
   Element *pEVar8;
   Element *pEVar9;
   pvVar6 = *(void**)this;
   if (pvVar6 == (void*)0x0) {
      return;
   }

   pEVar2 = *(Element**)( (long)pvVar6 + 0x10 );
   pEVar4 = *(Element**)( this + 8 );
   if (pEVar2 == pEVar4) goto LAB_00102bec;
   pEVar5 = *(Element**)( pEVar2 + 0x10 );
   if (pEVar4 != pEVar5) {
      pEVar8 = *(Element**)( pEVar5 + 0x10 );
      if (pEVar4 != pEVar8) {
         pEVar9 = *(Element**)( pEVar8 + 0x10 );
         if (pEVar4 != pEVar9) {
            pEVar7 = *(Element**)( pEVar9 + 0x10 );
            if (pEVar4 != pEVar7) {
               _cleanup_tree(this, pEVar7);
               pEVar7 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar9 + 8 ) != pEVar7) {
               _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
            }

            if (*(long*)( pEVar9 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar9 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar9 + 0x30 );
                  *(undefined8*)( pEVar9 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar9, false);
            pEVar9 = *(Element**)( this + 8 );
         }

         if (*(Element**)( pEVar8 + 8 ) != pEVar9) {
            _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
         }

         if (*(long*)( pEVar8 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar8 + 0x30 );
               *(undefined8*)( pEVar8 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar8, false);
         pEVar8 = *(Element**)( this + 8 );
      }

      pEVar4 = *(Element**)( pEVar5 + 8 );
      if (pEVar4 != pEVar8) {
         pEVar9 = *(Element**)( pEVar4 + 0x10 );
         if (pEVar9 != pEVar8) {
            if (*(Element**)( pEVar9 + 0x10 ) != pEVar8) {
               _cleanup_tree(this, *(Element**)( pEVar9 + 0x10 ));
               pEVar8 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar9 + 8 ) != pEVar8) {
               _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
            }

            if (*(long*)( pEVar9 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar9 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar9 + 0x30 );
                  *(undefined8*)( pEVar9 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar9, false);
            pEVar8 = *(Element**)( this + 8 );
         }

         pEVar9 = *(Element**)( pEVar4 + 8 );
         if (pEVar9 != pEVar8) {
            if (*(Element**)( pEVar9 + 0x10 ) != pEVar8) {
               _cleanup_tree(this, *(Element**)( pEVar9 + 0x10 ));
               pEVar8 = *(Element**)( this + 8 );
            }

            if (*(Element**)( pEVar9 + 8 ) != pEVar8) {
               _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
            }

            if (*(long*)( pEVar9 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( pEVar9 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar3 = *(long*)( pEVar9 + 0x30 );
                  *(undefined8*)( pEVar9 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar3 + -0x10 ), false);
               }

            }

            Memory::free_static(pEVar9, false);
         }

         if (*(long*)( pEVar4 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar4 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar4 + 0x30 );
               *(undefined8*)( pEVar4 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar4, false);
      }

      if (*(long*)( pEVar5 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar5 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar5 + 0x30 );
            *(undefined8*)( pEVar5 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar5, false);
            pEVar5 = *(Element**)( this + 8 );
            goto LAB_00102ad5;
         }

      }

      Memory::free_static(pEVar5, false);
      pEVar5 = *(Element**)( this + 8 );
   }

   LAB_00102ad5:pEVar4 = *(Element**)( pEVar2 + 8 );
   if (pEVar4 != pEVar5) {
      pEVar8 = *(Element**)( pEVar4 + 0x10 );
      if (pEVar8 != pEVar5) {
         if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
            pEVar5 = *(Element**)( this + 8 );
         }

         if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
         }

         if (*(long*)( pEVar8 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar8 + 0x30 );
               *(undefined8*)( pEVar8 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar8, false);
         pEVar5 = *(Element**)( this + 8 );
      }

      pEVar8 = *(Element**)( pEVar4 + 8 );
      if (pEVar8 != pEVar5) {
         if (*(Element**)( pEVar8 + 0x10 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar8 + 0x10 ));
            pEVar5 = *(Element**)( this + 8 );
         }

         if (*(Element**)( pEVar8 + 8 ) != pEVar5) {
            _cleanup_tree(this, *(Element**)( pEVar8 + 8 ));
         }

         if (*(long*)( pEVar8 + 0x30 ) != 0) {
            LOCK();
            plVar1 = (long*)( *(long*)( pEVar8 + 0x30 ) + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               lVar3 = *(long*)( pEVar8 + 0x30 );
               *(undefined8*)( pEVar8 + 0x30 ) = 0;
               Memory::free_static((void*)( lVar3 + -0x10 ), false);
            }

         }

         Memory::free_static(pEVar8, false);
      }

      if (*(long*)( pEVar4 + 0x30 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( pEVar4 + 0x30 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar3 = *(long*)( pEVar4 + 0x30 );
            *(undefined8*)( pEVar4 + 0x30 ) = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            Memory::free_static(pEVar4, false);
            goto LAB_00102bca;
         }

      }

      Memory::free_static(pEVar4, false);
   }

   LAB_00102bca:if (*(long*)( pEVar2 + 0x30 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( pEVar2 + 0x30 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( pEVar2 + 0x30 );
         *(undefined8*)( pEVar2 + 0x30 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(pEVar2, false);
   pvVar6 = *(void**)this;
   pEVar4 = *(Element**)( this + 8 );
   LAB_00102bec:*(Element**)( (long)pvVar6 + 0x10 ) = pEVar4;
   lVar3 = *(long*)( (long)pvVar6 + 0x30 );
   *(undefined4*)( this + 0x10 ) = 0;
   if (lVar3 != 0) {
      LOCK();
      plVar1 = (long*)( lVar3 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( (long)pvVar6 + 0x30 );
         *(undefined8*)( (long)pvVar6 + 0x30 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   Memory::free_static(pvVar6, false);
   return;
}
/* RBSet<String, Comparator<String>, DefaultAllocator>::_insert_rb_fix(RBSet<String,
   Comparator<String>, DefaultAllocator>::Element*) */void RBSet<String,Comparator<String>,DefaultAllocator>::_insert_rb_fix(RBSet<String,Comparator<String>,DefaultAllocator> *this, Element *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   iVar1 = *(int*)*(Element**)( param_1 + 0x18 );
   pEVar7 = *(Element**)( param_1 + 0x18 );
   do {
      while (true) {
         pEVar8 = pEVar7;
         if (iVar1 != 0) {
            **(undefined4**)( *(long*)this + 0x10 ) = 1;
            return;
         }

         pEVar5 = *(Element**)( pEVar8 + 0x18 );
         pEVar6 = *(Element**)( pEVar5 + 0x10 );
         pEVar7 = pEVar8;
         if (pEVar6 == pEVar8) break;
         if (*(int*)pEVar6 == 0) goto LAB_00102ddd;
         if (*(Element**)( pEVar8 + 0x10 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 8 );
            *(long*)( pEVar8 + 0x10 ) = lVar3;
            pEVar7 = pEVar5;
            if (lVar2 != lVar3) {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
            }

            *(Element**)( param_1 + 0x18 ) = pEVar7;
            if (pEVar8 == *(Element**)( pEVar7 + 8 )) {
               *(Element**)( pEVar7 + 8 ) = param_1;
            }
 else {
               *(Element**)( pEVar7 + 0x10 ) = param_1;
            }

            *(Element**)( param_1 + 8 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00102f00;
            LAB_00102d86:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00102d86;
            LAB_00102f00:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 8 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 0x10 );
         *(long*)( pEVar5 + 8 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 0x10 )) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 8 ) = lVar2;
         }

         *(Element**)( lVar2 + 0x10 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         LAB_00102dc3:iVar1 = *(int*)pEVar7;
         param_1 = pEVar8;
      }
;
      pEVar6 = *(Element**)( pEVar5 + 8 );
      if (*(int*)pEVar6 != 0) {
         if (*(Element**)( pEVar8 + 8 ) == param_1) {
            lVar2 = *(long*)( this + 8 );
            lVar3 = *(long*)( param_1 + 0x10 );
            *(long*)( pEVar8 + 8 ) = lVar3;
            if (lVar2 == lVar3) {
               *(Element**)( param_1 + 0x18 ) = pEVar5;
               pEVar7 = pEVar5;
               LAB_00102ff2:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_00102ff2;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_00102fc0;
            LAB_00102e50:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_00102e50;
            LAB_00102fc0:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
         }

         lVar2 = *(long*)( pEVar5 + 0x10 );
         lVar3 = *(long*)( this + 8 );
         lVar4 = *(long*)( lVar2 + 8 );
         *(long*)( pEVar5 + 0x10 ) = lVar4;
         if (lVar3 != lVar4) {
            *(Element**)( lVar4 + 0x18 ) = pEVar5;
         }

         lVar3 = *(long*)( pEVar5 + 0x18 );
         *(long*)( lVar2 + 0x18 ) = lVar3;
         if (pEVar5 == *(Element**)( lVar3 + 8 )) {
            *(long*)( lVar3 + 8 ) = lVar2;
         }
 else {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         *(Element**)( lVar2 + 8 ) = pEVar5;
         *(long*)( pEVar5 + 0x18 ) = lVar2;
         goto LAB_00102dc3;
      }

      LAB_00102ddd:pEVar7 = *(Element**)( this + 8 );
      *(int*)pEVar8 = 1;
      *(int*)pEVar6 = 1;
      if (pEVar5 == pEVar7) {
         _err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
      }
 else {
         *(int*)pEVar5 = 0;
      }

      iVar1 = *(int*)*(Element**)( pEVar5 + 0x18 );
      pEVar7 = *(Element**)( pEVar5 + 0x18 );
      param_1 = pEVar5;
   }
 while ( true );
}
/* CowData<Logger*>::_realloc(long) */undefined8 CowData<Logger*>::_realloc(CowData<Logger*> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Logger*>::resize<false>(long) */undefined8 CowData<Logger*>::resize<false>(CowData<Logger*> *this, long param_1) {
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
      LAB_00103350:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00103350;
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
            goto LAB_00103261;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00103261:puVar7[-1] = param_1;
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
/* WARNING: Control flow encountered bad instruction data *//* RBSet<String, Comparator<String>, DefaultAllocator>::~RBSet() */void RBSet<String,Comparator<String>,DefaultAllocator>::~RBSet(RBSet<String,Comparator<String>,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RotatedFileLogger::~RotatedFileLogger() */void RotatedFileLogger::~RotatedFileLogger(RotatedFileLogger *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StdLogger::~StdLogger() */void StdLogger::~StdLogger(StdLogger *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


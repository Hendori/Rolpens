/* CowData<int>::_copy_on_write() [clone .isra.0] */void CowData<int>::_copy_on_write(CowData<int> *this) {
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
   __n = lVar2 * 4;
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
/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   undefined8 *puVar5;
   long lVar6;
   ulong uVar7;
   CowData<char32_t> *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar7 = lVar2 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 != (undefined8*)0x0) {
      lVar6 = 0;
      *puVar5 = 1;
      puVar5[1] = lVar2;
      this_00 = (CowData<char32_t>*)( puVar5 + 2 );
      if (lVar2 != 0) {
         do {
            lVar3 = *(long*)this;
            *(undefined8*)this_00 = 0;
            pCVar1 = (CowData*)( lVar3 + lVar6 * 8 );
            if (*(long*)pCVar1 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar1);
            }

            lVar6 = lVar6 + 1;
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar6 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* Vector<String>::push_back(String) [clone .isra.0] */void Vector<String>::push_back(Vector<String> *this, CowData *param_2) {
   CowData<char32_t> *this_00;
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<String>::resize<false>((CowData<String>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 8 ));
            this_00 = (CowData<char32_t>*)( *(long*)( this + 8 ) + lVar3 * 8 );
            if (*(long*)this_00 == *(long*)param_2) {
               return;
            }

            CowData<char32_t>::_ref(this_00, param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* MainLoop::initialize() */void MainLoop::initialize(MainLoop *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 == (long*)0x0) {
      LAB_0010045b:if (( *(long*)( this + 8 ) != 0 ) && ( this[0x180] == (MainLoop)0x0 )) {
         local_c8[0] = 0;
         local_c8[1] = 0;
         local_b8 = (undefined1[16])0x0;
         local_d8 = "_initialize";
         local_c8[2] = 0;
         local_c8[3] = 0;
         local_a8 = 0;
         local_a0 = 0;
         local_98 = 6;
         local_90 = 1;
         local_88 = 0;
         local_78 = 0;
         local_70 = 0;
         local_60 = 0;
         local_d0 = 0xb;
         String::parse_latin1((StrRange*)local_c8);
         local_90 = CONCAT44(local_90._4_4_, 8);
         uVar1 = MethodInfo::get_compatibility_hash();
         lVar3 = *(long*)( this + 8 );
         *(undefined8*)( this + 0x188 ) = 0;
         UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd8 );
         if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xd0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) {
            local_e8 = 0;
            String::parse_latin1((String*)&local_e8, "MainLoop");
            StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
            ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
            if (local_d0 == 0) {
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_001006b5;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               LAB_001006ca:lVar3 = *(long*)( this + 8 );
               UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 200 );
               if (( ( UNRECOVERED_JUMPTABLE == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( UNRECOVERED_JUMPTABLE = *(code**)( lVar3 + 0xc0 ) ),UNRECOVERED_JUMPTABLE == (code*)0x0) goto LAB_0010060f;
               uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x178);
               *(undefined8*)( this + 0x188 ) = uVar2;
            }
 else {
               lVar3 = *(long*)( local_d0 + -8 );
               CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
               if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
                  LAB_001006b5:StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (lVar3 == 0) goto LAB_001006ca;
            }

            lVar3 = *(long*)( this + 8 );
         }
 else {
            uVar2 = ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x178, uVar1);
            *(undefined8*)( this + 0x188 ) = uVar2;
            lVar3 = *(long*)( this + 8 );
         }

         LAB_0010060f:if (*(char*)( lVar3 + 0x29 ) != '\0') {
            plVar4 = (long*)operator_new(0x18, "");
            *plVar4 = (long)( this + 0x188 );
            plVar4[1] = (long)( this + 0x180 );
            plVar4[2] = *(long*)( this + 0x168 );
            *(long**)( this + 0x168 ) = plVar4;
         }

         this[0x180] = (MainLoop)0x1;
         MethodInfo::~MethodInfo((MethodInfo*)local_c8);
      }

      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x188 );
      if (UNRECOVERED_JUMPTABLE != (code*)0x0) {
         if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010051c. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( this + 0x10 ), 0, 0);
               return;
            }

         }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001004bd. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x178, UNRECOVERED_JUMPTABLE, 0, 0);
            return;
         }

         goto LAB_0010073d;
      }

   }
 else {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(local_58, plVar4, this + 0x178, 0, 0, local_c8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] != 0) goto LAB_0010045b;
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010073d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MainLoop::finalize() */void MainLoop::finalize(MainLoop *this) {
   undefined4 uVar1;
   undefined8 uVar2;
   long lVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   undefined8 local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   int local_c8[4];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_78;
   undefined8 local_70;
   undefined8 local_60;
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40;
   plVar4 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar4 != (long*)0x0) {
      for (int i = 0; i < 3; i++) {
         local_c8[i] = 0;
      }

      ( **(code**)( *plVar4 + 0x60 ) )(&local_58, plVar4, this + 0x1c0, 0, 0, local_c8);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

      if (local_c8[0] == 0) goto LAB_0010085c;
   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1c8] == (MainLoop)0x0 )) {
      local_c8[0] = 0;
      local_c8[1] = 0;
      local_b8 = (undefined1[16])0x0;
      local_d8 = "_finalize";
      local_c8[2] = 0;
      local_c8[3] = 0;
      local_a8 = 0;
      local_a0 = 0;
      local_98 = 6;
      local_90 = 1;
      local_88 = 0;
      local_78 = 0;
      local_70 = 0;
      local_60 = 0;
      local_d0 = 9;
      String::parse_latin1((StrRange*)local_c8);
      local_90 = CONCAT44(local_90._4_4_, 8);
      uVar1 = MethodInfo::get_compatibility_hash();
      lVar3 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1d0 ) = 0;
      pcVar5 = *(code**)( lVar3 + 0xd8 );
      if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xd0 ) ),pcVar5 == (code*)0x0) {
         local_e8 = 0;
         String::parse_latin1((String*)&local_e8, "MainLoop");
         StringName::StringName((StringName*)&local_e0, (String*)&local_e8, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_d8, (StringName*)&local_e0);
         if (local_d0 == 0) {
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
            if (( StringName::configured != '\0' ) && ( lVar3 = local_e0 != 0 )) goto LAB_00100a95;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            LAB_00100aaa:lVar3 = *(long*)( this + 8 );
            pcVar5 = *(code**)( lVar3 + 200 );
            if (( ( pcVar5 == (code*)0x0 ) || ( *(long*)( lVar3 + 0xe0 ) == 0 ) ) && ( pcVar5 = *(code**)( lVar3 + 0xc0 ) ),pcVar5 == (code*)0x0) goto LAB_001009df;
            uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x1c0);
            *(undefined8*)( this + 0x1d0 ) = uVar2;
         }
 else {
            lVar3 = *(long*)( local_d0 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_d0);
            if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
               LAB_00100a95:StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
            if (lVar3 == 0) goto LAB_00100aaa;
         }

         lVar3 = *(long*)( this + 8 );
      }
 else {
         uVar2 = ( *pcVar5 )(*(undefined8*)( lVar3 + 0xa0 ), this + 0x1c0, uVar1);
         *(undefined8*)( this + 0x1d0 ) = uVar2;
         lVar3 = *(long*)( this + 8 );
      }

      LAB_001009df:if (*(char*)( lVar3 + 0x29 ) != '\0') {
         plVar4 = (long*)operator_new(0x18, "");
         *plVar4 = (long)( this + 0x1d0 );
         plVar4[1] = (long)( this + 0x1c8 );
         plVar4[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar4;
      }

      this[0x1c8] = (MainLoop)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)local_c8);
   }

   pcVar5 = *(code**)( this + 0x1d0 );
   if (pcVar5 != (code*)0x0) {
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar5 )(*(undefined8*)( this + 0x10 ), 0, 0);
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1c0, pcVar5, 0, 0);
      }

   }

   LAB_0010085c:if (*(long*)( this + 0x98 ) != 0) {
      local_50 = (undefined1[16])0x0;
      local_58 = 0;
      ( **(code**)( *(long*)this + 0x90 ) )(this, &local_58);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* Vector<int>::push_back(int) [clone .isra.0] */void Vector<int>::push_back(Vector<int> *this, int param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
            *(int*)( *(long*)( this + 8 ) + lVar3 * 4 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* MainLoop::_bind_methods() */void MainLoop::_bind_methods(void) {
   long *plVar1;
   StringName *this;
   int iVar2;
   long lVar3;
   code *pcVar4;
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
   char *pcVar19;
   undefined8 uVar20;
   int *piVar21;
   undefined4 *puVar22;
   long lVar23;
   int *piVar24;
   long in_FS_OFFSET;
   bool bVar25;
   StringName *local_1c8;
   long local_188;
   long local_180;
   long local_178;
   long local_170;
   long local_168;
   long local_160;
   long local_158;
   long local_150;
   long local_148;
   long local_140;
   char *local_138;
   int local_130;
   long local_128;
   undefined4 local_120;
   long local_118;
   long local_110;
   char *local_108;
   int local_100;
   long local_f8;
   undefined4 local_f0;
   char *local_e8;
   undefined1 local_e0[16];
   int local_d0;
   long local_c8;
   undefined4 local_c0;
   char *local_b8;
   undefined8 local_b0;
   undefined1 local_a8[16];
   undefined8 local_98;
   long local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined1(*local_78[2])[16];
   int *local_68;
   ulong local_60;
   Vector<int> local_58[8];
   long local_50;
   long local_40;
   local_e0._8_8_ = local_e0._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_OS_MEMORY_WARNING", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7d9, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_e8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_TRANSLATION_CHANGED", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7da, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( ( StringName::configured != '\0' ) && ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_WM_ABOUT", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7db, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_e8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_CRASH", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7dc, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( ( StringName::configured != '\0' ) && ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_OS_IME_UPDATE", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7dd, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_e8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_APPLICATION_RESUMED", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7de, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( ( StringName::configured != '\0' ) && ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_APPLICATION_PAUSED", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7df, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_e8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_APPLICATION_FOCUS_IN", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7e0, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( ( StringName::configured != '\0' ) && ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_APPLICATION_FOCUS_OUT", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7e1, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_e8 != (char*)0x0 ) ) )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_e8, "NOTIFICATION_TEXT_SERVER_CHANGED", false);
   local_b8 = "MainLoop";
   local_118 = 0;
   local_148 = 0;
   local_b0 = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_b8, (String*)&local_148, false);
   ClassDB::bind_integer_constant((StringName*)&local_b8, (StringName*)&local_118, (StringName*)&local_e8, 0x7e2, false);
   if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( ( StringName::configured != '\0' ) && ( ( local_118 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_158 = 0;
   local_b8 = "";
   local_160 = 0;
   local_b0 = 0;
   String::parse_latin1((StrRange*)&local_160);
   local_168 = 0;
   local_b8 = "granted";
   local_b0 = 7;
   String::parse_latin1((StrRange*)&local_168);
   local_118 = CONCAT44(local_118._4_4_, 1);
   local_110 = 0;
   if (local_168 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_110, (CowData*)&local_168);
   }

   local_108 = (char*)0x0;
   local_100 = 0;
   local_f8 = 0;
   if (local_160 == 0) {
      LAB_001016db:local_f0 = 6;
      StringName::operator =((StringName*)&local_108, (StringName*)&local_158);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_160);
      local_f0 = 6;
      if (local_100 != 0x11) goto LAB_001016db;
      StringName::StringName((StringName*)&local_b8, (String*)&local_f8, false);
      if (local_108 == local_b8) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_108 = local_b8;
      }

   }

   local_1c8 = (StringName*)&local_108;
   local_170 = 0;
   local_b8 = "";
   local_178 = 0;
   local_b0 = 0;
   String::parse_latin1((StrRange*)&local_178);
   local_180 = 0;
   local_b8 = "permission";
   local_b0 = 10;
   String::parse_latin1((StrRange*)&local_180);
   local_148 = CONCAT44(local_148._4_4_, 4);
   local_140 = 0;
   if (local_180 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_140, (CowData*)&local_180);
   }

   local_138 = (char*)0x0;
   local_130 = 0;
   local_128 = 0;
   if (local_178 == 0) {
      LAB_0010183b:local_120 = 6;
      StringName::operator =((StringName*)&local_138, (StringName*)&local_170);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_128, (CowData*)&local_178);
      local_120 = 6;
      if (local_130 != 0x11) goto LAB_0010183b;
      StringName::StringName((StringName*)&local_b8, (String*)&local_128, false);
      if (local_138 == local_b8) {
         if (( StringName::configured != '\0' ) && ( local_b8 != (char*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_138 = local_b8;
      }

   }

   local_150 = 0;
   local_b8 = "on_request_permissions_result";
   local_b0 = 0x1d;
   String::parse_latin1((StrRange*)&local_150);
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_a8 = (undefined1[16])0x0;
   if (local_150 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_150);
   }

   auVar14._8_8_ = 0;
   auVar14._0_8_ = local_e0._8_8_;
   local_e0 = auVar14 << 0x40;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, (undefined4)local_118);
   if (local_110 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_e0, (CowData*)&local_110);
   }

   this(StringName * )(local_e0 + 8);
   StringName::StringName(this, local_1c8);
   local_c8 = 0;
   local_d0 = local_100;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_f8);
   }

   local_c0 = local_f0;
   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar22 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar22 + 8 ) = 0;
   *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
   *puVar22 = 0;
   puVar22[6] = 0;
   puVar22[10] = 6;
   *(undefined8*)( puVar22 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar22 + 0xc ) = (undefined1[16])0x0;
   *puVar22 = (undefined4)local_148;
   if (local_140 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 2 ), (CowData*)&local_140);
   }

   StringName::operator =((StringName*)( puVar22 + 4 ), (StringName*)&local_138);
   puVar22[6] = local_130;
   if (*(long*)( puVar22 + 8 ) != local_128) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 8 ), (CowData*)&local_128);
   }

   puVar22[10] = local_120;
   lVar3 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar22 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar22 + 0x10 ) = local_78[0];
   *(long*)( puVar22 + 0xe ) = lVar3;
   if (lVar3 != 0) {
      *(undefined4**)( lVar3 + 0x30 ) = puVar22;
   }

   iVar2 = *(int*)local_78[0][1];
   *(undefined4**)( *local_78[0] + 8 ) = puVar22;
   if (*(long*)*local_78[0] == 0) {
      *(undefined4**)*local_78[0] = puVar22;
   }

   *(int*)local_78[0][1] = iVar2 + 1;
   puVar22 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar22 + 8 ) = 0;
   *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
   *puVar22 = 0;
   puVar22[6] = 0;
   puVar22[10] = 6;
   *(undefined8*)( puVar22 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar22 + 0xc ) = (undefined1[16])0x0;
   *puVar22 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar22 + 4 ), this);
   puVar22[6] = local_d0;
   if (*(long*)( puVar22 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 8 ), (CowData*)&local_c8);
   }

   puVar22[10] = local_c0;
   lVar3 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar22 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar22 + 0x10 ) = local_78[0];
   *(long*)( puVar22 + 0xe ) = lVar3;
   if (lVar3 != 0) {
      *(undefined4**)( lVar3 + 0x30 ) = puVar22;
   }

   lVar3 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar22;
   if (lVar3 == 0) {
      *(undefined4**)*local_78[0] = puVar22;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar13._8_8_ = 0;
         auVar13._0_8_ = local_e0._8_8_;
         local_e0 = auVar13 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   local_188 = 0;
   local_e8 = "MainLoop";
   local_e0._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_188);
   StringName::StringName((StringName*)&local_e8, (String*)&local_188, false);
   ClassDB::add_signal((StringName*)&local_e8, (MethodInfo*)&local_b8);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_188;
   if (local_188 != 0) {
      LOCK();
      plVar1 = (long*)( local_188 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_188 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

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

   piVar21 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_68 + -2 );
         lVar23 = 0;
         local_68 = (int*)0x0;
         piVar24 = piVar21;
         if (lVar3 != 0) {
            do {
               if (Variant::needs_deinit[*piVar24] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar24 = piVar24 + 6;
            }
 while ( lVar3 != lVar23 );
         }

         Memory::free_static(piVar21 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_a8._0_8_;
   if (local_a8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_a8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = local_a8._8_8_;
         local_a8 = auVar12 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   pcVar19 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar19 + -0x10 ), false);
      }

   }

   lVar3 = local_150;
   if (local_150 != 0) {
      LOCK();
      plVar1 = (long*)( local_150 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_150 = 0;
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

   if (( StringName::configured != '\0' ) && ( local_170 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   if (( StringName::configured != '\0' ) && ( local_108 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_110;
   if (local_110 != 0) {
      LOCK();
      plVar1 = (long*)( local_110 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_110 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_168;
   if (local_168 != 0) {
      LOCK();
      plVar1 = (long*)( local_168 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_168 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
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

   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   local_a8 = (undefined1[16])0x0;
   local_e8 = "_initialize";
   local_110 = 0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0xb;
   String::parse_latin1((StrRange*)&local_b8);
   local_e8 = "MainLoop";
   local_80 = CONCAT44(local_80._4_4_, 8);
   local_148 = 0;
   local_e0._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_e8, (String*)&local_148, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

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

   piVar21 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_68 + -2 );
         local_68 = (int*)0x0;
         lVar23 = 0;
         piVar24 = piVar21;
         if (lVar3 != 0) {
            do {
               if (Variant::needs_deinit[*piVar24] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar24 = piVar24 + 6;
            }
 while ( lVar3 != lVar23 );
         }

         Memory::free_static(piVar21 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_a8._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
   pcVar19 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar19 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_110);
   local_b8 = "delta";
   local_110 = 0;
   local_e8 = (char*)0x0;
   local_b0 = 5;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   plVar1 = (long*)( (long)local_e8 + -0x10 );
   if (local_e8 == (char*)0x0) {
      Vector<String>::push_back((Vector<String>*)&local_118);
   }
 else {
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_0010222f;
         LOCK();
         lVar23 = *plVar1;
         bVar25 = lVar3 == lVar23;
         if (bVar25) {
            *plVar1 = lVar3 + 1;
            lVar23 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar25 );
      if (lVar23 != -1) {
         local_b8 = local_e8;
      }

      LAB_0010222f:pcVar19 = local_b8;
      Vector<String>::push_back((Vector<String>*)&local_118);
      if (pcVar19 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar19 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   pcVar19 = local_e8;
   if (local_e8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar19 + -0x10 ), false);
      }

   }

   local_a8._0_8_ = 0;
   local_a8._8_8_ = 0;
   local_e8 = "_physics_process";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 0x10;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 8);
   local_160 = 0;
   local_158 = 0;
   local_e8 = "";
   auVar15._8_8_ = 0;
   auVar15._0_8_ = local_e0._8_8_;
   local_e0 = auVar15 << 0x40;
   String::parse_latin1((StrRange*)&local_158);
   local_150 = 0;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 1);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_158 == 0) {
      LAB_00103b83:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_160);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_158);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_00103b83;
      StringName::StringName((StringName*)&local_148, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_148) {
         if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_148;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   lVar3 = local_158;
   if (local_158 != 0) {
      LOCK();
      plVar1 = (long*)( local_158 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_158 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8._0_8_ != local_e0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      local_a8._0_8_ = local_e0._0_8_;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = local_e0._8_8_;
      local_e0 = auVar5 << 0x40;
   }

   if (local_a8._8_8_ != local_e0._8_8_) {
      StringName::unref();
      local_a8._8_8_ = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar3 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_e0._8_8_;
         local_e0 = auVar6 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   local_160 = 0;
   local_158 = 0;
   local_e8 = "";
   auVar16._8_8_ = 0;
   auVar16._0_8_ = local_e0._8_8_;
   local_e0 = auVar16 << 0x40;
   String::parse_latin1((StrRange*)&local_158);
   local_150 = 0;
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 3);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_158 == 0) {
      LAB_00103bcb:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_160);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_158);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_00103bcb;
      StringName::StringName((StringName*)&local_148, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_148) {
         if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_148;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   lVar3 = local_158;
   if (local_158 != 0) {
      LOCK();
      plVar1 = (long*)( local_158 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_158 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_160 != 0 )) {
      StringName::unref();
   }

   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar22 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar22 + 8 ) = 0;
   *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
   *puVar22 = 0;
   puVar22[6] = 0;
   puVar22[10] = 6;
   *(undefined8*)( puVar22 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar22 + 0xc ) = (undefined1[16])0x0;
   *puVar22 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar22 + 4 ), this);
   puVar22[6] = local_d0;
   if (*(long*)( puVar22 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 8 ), (CowData*)&local_c8);
   }

   lVar23 = local_c8;
   puVar22[10] = local_c0;
   lVar3 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar22 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar22 + 0x10 ) = local_78[0];
   *(long*)( puVar22 + 0xe ) = lVar3;
   if (lVar3 != 0) {
      *(undefined4**)( lVar3 + 0x30 ) = puVar22;
   }

   lVar3 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar22;
   if (lVar3 == 0) {
      *(undefined4**)*local_78[0] = puVar22;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar23 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_e0._8_8_;
         local_e0 = auVar7 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 10);
   local_e8 = "MainLoop";
   local_148 = 0;
   local_e0._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_e8, (String*)&local_148, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

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

   piVar21 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_68 + -2 );
         lVar23 = 0;
         local_68 = (int*)0x0;
         piVar24 = piVar21;
         if (lVar3 != 0) {
            do {
               if (Variant::needs_deinit[*piVar24] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar24 = piVar24 + 6;
            }
 while ( lVar3 != lVar23 );
         }

         Memory::free_static(piVar21 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_a8._0_8_;
   if (local_a8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_a8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8._0_8_ = 0;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   pcVar19 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar19 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_110);
   local_b8 = "delta";
   local_110 = 0;
   local_e8 = (char*)0x0;
   local_b0 = 5;
   String::parse_latin1((StrRange*)&local_e8);
   local_b8 = (char*)0x0;
   plVar1 = (long*)( (long)local_e8 + -0x10 );
   if (local_e8 == (char*)0x0) {
      Vector<String>::push_back((Vector<String>*)&local_118);
   }
 else {
      do {
         lVar3 = *plVar1;
         if (lVar3 == 0) goto LAB_00102b87;
         LOCK();
         lVar23 = *plVar1;
         bVar25 = lVar3 == lVar23;
         if (bVar25) {
            *plVar1 = lVar3 + 1;
            lVar23 = lVar3;
         }

         UNLOCK();
      }
 while ( !bVar25 );
      if (lVar23 != -1) {
         local_b8 = local_e8;
      }

      LAB_00102b87:pcVar19 = local_b8;
      Vector<String>::push_back((Vector<String>*)&local_118);
      if (pcVar19 != (char*)0x0) {
         LOCK();
         plVar1 = (long*)( (long)pcVar19 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static((void*)( (long)local_b8 + -0x10 ), false);
         }

      }

   }

   pcVar19 = local_e8;
   if (local_e8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_e8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_e8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar19 + -0x10 ), false);
      }

   }

   local_a8._0_8_ = 0;
   local_a8._8_8_ = 0;
   local_e8 = "_process";
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_b8);
   local_80 = CONCAT44(local_80._4_4_, 8);
   local_158 = 0;
   local_150 = 0;
   local_e8 = "";
   auVar17._8_8_ = 0;
   auVar17._0_8_ = local_e0._8_8_;
   local_e0 = auVar17 << 0x40;
   String::parse_latin1((StrRange*)&local_150);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 1);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_150 == 0) {
      LAB_00103bab:local_c0 = 6;
      StringName::operator =(this, (StringName*)&local_158);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_150);
      local_c0 = 6;
      if (local_d0 != 0x11) goto LAB_00103bab;
      StringName::StringName((StringName*)&local_148, (String*)&local_c8, false);
      if (local_e0._8_8_ == local_148) {
         if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_e0._8_8_ = local_148;
      }

   }

   lVar3 = local_150;
   if (local_150 != 0) {
      LOCK();
      plVar1 = (long*)( local_150 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_150 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   local_b0 = CONCAT44(local_b0._4_4_, local_e8._0_4_);
   if (local_a8._0_8_ != local_e0._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      local_a8._0_8_ = local_e0._0_8_;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = local_e0._8_8_;
      local_e0 = auVar8 << 0x40;
   }

   if (local_a8._8_8_ != local_e0._8_8_) {
      StringName::unref();
      local_a8._8_8_ = local_e0._8_8_;
      local_e0._8_8_ = 0;
   }

   lVar3 = local_c8;
   local_98 = CONCAT44(local_98._4_4_, local_d0);
   if (local_90 == local_c8) {
      local_88 = CONCAT44(local_88._4_4_, local_c0);
      if (local_c8 != 0) {
         LOCK();
         plVar1 = (long*)( local_c8 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_c8 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
         }

      }

   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      local_90 = local_c8;
      local_88 = CONCAT44(local_88._4_4_, local_c0);
   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = local_e0._8_8_;
         local_e0 = auVar9 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   local_60 = local_60 & 0xffffffff00000000;
   local_158 = 0;
   local_150 = 0;
   local_e8 = "";
   auVar18._8_8_ = 0;
   auVar18._0_8_ = local_e0._8_8_;
   local_e0 = auVar18 << 0x40;
   String::parse_latin1((StrRange*)&local_150);
   local_e8 = (char*)CONCAT44(local_e8._4_4_, 3);
   local_d0 = 0;
   local_c8 = 0;
   local_e0 = (undefined1[16])0x0;
   if (local_150 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_c8, (CowData*)&local_150);
      local_c0 = 6;
      if (local_d0 == 0x11) {
         StringName::StringName((StringName*)&local_148, (String*)&local_c8, false);
         if (local_e0._8_8_ == local_148) {
            if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_e0._8_8_ = local_148;
         }

         goto LAB_00102fe4;
      }

   }

   local_c0 = 6;
   StringName::operator =(this, (StringName*)&local_158);
   LAB_00102fe4:lVar3 = local_150;
   if (local_150 != 0) {
      LOCK();
      plVar1 = (long*)( local_150 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_150 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
      StringName::unref();
   }

   if (local_78[0] == (undefined1(*) [16])0x0) {
      local_78[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined4*)local_78[0][1] = 0;
      *local_78[0] = (undefined1[16])0x0;
   }

   puVar22 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar22 + 8 ) = 0;
   *(undefined1(*) [16])( puVar22 + 2 ) = (undefined1[16])0x0;
   *puVar22 = 0;
   puVar22[6] = 0;
   puVar22[10] = 6;
   *(undefined8*)( puVar22 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar22 + 0xc ) = (undefined1[16])0x0;
   *puVar22 = local_e8._0_4_;
   if (local_e0._0_8_ != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 2 ), (CowData*)local_e0);
   }

   StringName::operator =((StringName*)( puVar22 + 4 ), this);
   puVar22[6] = local_d0;
   if (*(long*)( puVar22 + 8 ) != local_c8) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar22 + 8 ), (CowData*)&local_c8);
   }

   lVar23 = local_c8;
   puVar22[10] = local_c0;
   lVar3 = *(long*)( *local_78[0] + 8 );
   *(undefined8*)( puVar22 + 0xc ) = 0;
   *(undefined1(**) [16])( puVar22 + 0x10 ) = local_78[0];
   *(long*)( puVar22 + 0xe ) = lVar3;
   if (lVar3 != 0) {
      *(undefined4**)( lVar3 + 0x30 ) = puVar22;
   }

   lVar3 = *(long*)*local_78[0];
   *(undefined4**)( *local_78[0] + 8 ) = puVar22;
   if (lVar3 == 0) {
      *(undefined4**)*local_78[0] = puVar22;
   }

   *(int*)local_78[0][1] = *(int*)local_78[0][1] + 1;
   if (local_c8 != 0) {
      LOCK();
      plVar1 = (long*)( local_c8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_c8 = 0;
         Memory::free_static((void*)( lVar23 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e0._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_e0._0_8_;
   if (local_e0._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_e0._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = local_e0._8_8_;
         local_e0 = auVar10 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   Vector<int>::push_back(local_58, 10);
   local_e8 = "MainLoop";
   local_148 = 0;
   local_e0._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_e8, (String*)&local_148, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

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

   piVar21 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_68 + -2 );
         local_68 = (int*)0x0;
         lVar23 = 0;
         piVar24 = piVar21;
         if (lVar3 != 0) {
            do {
               if (Variant::needs_deinit[*piVar24] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar24 = piVar24 + 6;
            }
 while ( lVar3 != lVar23 );
         }

         Memory::free_static(piVar21 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_a8._0_8_;
   if (local_a8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_a8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_a8._0_8_ = 0;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   pcVar19 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar19 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_110);
   local_a8 = (undefined1[16])0x0;
   local_e8 = "_finalize";
   local_110 = 0;
   local_b8 = (char*)0x0;
   local_b0 = 0;
   local_98 = 0;
   local_90 = 0;
   local_88 = 6;
   local_80 = 1;
   local_78[0] = (undefined1(*) [16])0x0;
   local_68 = (int*)0x0;
   local_60 = 0;
   local_50 = 0;
   local_e0._0_8_ = 9;
   String::parse_latin1((StrRange*)&local_b8);
   local_e8 = "MainLoop";
   local_80 = CONCAT44(local_80._4_4_, 8);
   local_148 = 0;
   local_e0._0_8_ = 8;
   String::parse_latin1((StrRange*)&local_148);
   StringName::StringName((StringName*)&local_e8, (String*)&local_148, false);
   ClassDB::add_virtual_method((StringName*)&local_e8, (MethodInfo*)&local_b8, true, (Vector*)&local_118, false);
   if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
      StringName::unref();
   }

   lVar3 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar1 = (long*)( local_148 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

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

   piVar21 = local_68;
   if (local_68 != (int*)0x0) {
      LOCK();
      plVar1 = (long*)( local_68 + -4 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         if (local_68 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( local_68 + -2 );
         lVar23 = 0;
         local_68 = (int*)0x0;
         piVar24 = piVar21;
         if (lVar3 != 0) {
            do {
               if (Variant::needs_deinit[*piVar24] != '\0') {
                  Variant::_clear_internal();
               }

               lVar23 = lVar23 + 1;
               piVar24 = piVar24 + 6;
            }
 while ( lVar3 != lVar23 );
         }

         Memory::free_static(piVar21 + -4, false);
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_78);
   lVar3 = local_90;
   if (local_90 != 0) {
      LOCK();
      plVar1 = (long*)( local_90 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_90 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_a8._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar20 = local_a8._0_8_;
   if (local_a8._0_8_ != 0) {
      LOCK();
      plVar1 = (long*)( local_a8._0_8_ + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         auVar11._8_8_ = 0;
         auVar11._0_8_ = local_a8._8_8_;
         local_a8 = auVar11 << 0x40;
         Memory::free_static((void*)( uVar20 + -0x10 ), false);
      }

   }

   pcVar19 = local_b8;
   if (local_b8 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_b8 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_b8 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar19 + -0x10 ), false);
      }

   }

   CowData<String>::_unref((CowData<String>*)&local_110);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MainLoop::process(double) */bool MainLoop::process(MainLoop *this, double param_1) {
   undefined1 auVar1[16];
   long lVar2;
   undefined4 uVar3;
   undefined4 *puVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   undefined4 local_110;
   long local_108;
   undefined4 local_100;
   undefined8 local_f8;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   long local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined1(*local_b8)[16];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   undefined8 *local_58[3];
   long local_40;
   plVar7 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar7 != (long*)0x0) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_58, plVar7, this + 0x1a8, &local_80, 1, &local_f8);
      if ((int)local_f8 == 0) {
         bVar9 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103ffd;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x1b0] == (MainLoop)0x0 )) {
      local_e8 = (undefined1[16])0x0;
      local_128 = "_process";
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8 = (undefined1(*) [16])0x0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_120 = 8;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_128);
      uStack_f0 = local_128._0_4_;
      uVar5 = local_e8._0_8_;
      if (local_e8._0_8_ != local_120) {
         if (local_e8._0_8_ != 0) {
            LOCK();
            plVar7 = (long*)( local_e8._0_8_ + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               auVar1._8_8_ = 0;
               auVar1._0_8_ = local_e8._8_8_;
               local_e8 = auVar1 << 0x40;
               Memory::free_static((void*)( uVar5 + -0x10 ), false);
            }

         }

         local_e8._0_8_ = local_120;
         local_120 = 0;
      }

      if (local_e8._8_8_ != local_118) {
         StringName::unref();
         lVar6 = local_118;
         local_118 = 0;
         local_e8._8_8_ = lVar6;
      }

      lVar2 = local_d0;
      lVar6 = local_108;
      local_d8 = CONCAT44(local_d8._4_4_, local_110);
      if (local_d0 == local_108) {
         local_c8 = CONCAT44(local_c8._4_4_, local_100);
         if (local_d0 != 0) {
            LOCK();
            plVar7 = (long*)( local_d0 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_108 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_d0 != 0) {
            LOCK();
            plVar7 = (long*)( local_d0 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_d0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         local_c8 = CONCAT44(local_c8._4_4_, local_100);
         local_d0 = local_108;
      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar6 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar7 = (long*)( local_120 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_128);
      if (local_b8 == (undefined1(*) [16])0x0) {
         local_b8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_b8[1] = 0;
         *local_b8 = (undefined1[16])0x0;
      }

      puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      *puVar4 = 0;
      puVar4[6] = 0;
      puVar4[10] = 6;
      *(undefined8*)( puVar4 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
      *puVar4 = local_128._0_4_;
      if (local_120 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_120);
      }

      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_118);
      puVar4[6] = local_110;
      if (*(long*)( puVar4 + 8 ) != local_108) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_108);
      }

      lVar2 = local_108;
      puVar4[10] = local_100;
      lVar6 = *(long*)( *local_b8 + 8 );
      *(undefined8*)( puVar4 + 0xc ) = 0;
      *(undefined1(**) [16])( puVar4 + 0x10 ) = local_b8;
      *(long*)( puVar4 + 0xe ) = lVar6;
      if (lVar6 != 0) {
         *(undefined4**)( lVar6 + 0x30 ) = puVar4;
      }

      lVar6 = *(long*)*local_b8;
      *(undefined4**)( *local_b8 + 8 ) = puVar4;
      if (lVar6 == 0) {
         *(undefined4**)*local_b8 = puVar4;
      }

      *(int*)local_b8[1] = *(int*)local_b8[1] + 1;
      if (local_108 != 0) {
         LOCK();
         plVar7 = (long*)( local_108 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar6 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar7 = (long*)( local_120 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 10);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1b8 ) = 0;
      pcVar8 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "MainLoop");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_001045af;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         }
 else {
            lVar6 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_001045af:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 != 0) {
               lVar6 = *(long*)( this + 8 );
               goto LAB_001044a4;
            }

         }

         lVar6 = *(long*)( this + 8 );
         pcVar8 = *(code**)( lVar6 + 200 );
         if (( ( pcVar8 != (code*)0x0 ) && ( *(long*)( lVar6 + 0xe0 ) != 0 ) ) || ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 != (code*)0x0) {
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x1a8);
            *(undefined8*)( this + 0x1b8 ) = uVar5;
            lVar6 = *(long*)( this + 8 );
         }

      }
 else {
         uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 0x1a8, uVar3);
         *(undefined8*)( this + 0x1b8 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_001044a4:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x1b8 );
         plVar7[1] = (long)( this + 0x1b0 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x1b0] = (MainLoop)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar8 = *(code**)( this + 0x1b8 );
   bVar9 = false;
   if (pcVar8 != (code*)0x0) {
      local_58[0] = &local_f8;
      local_f8 = param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar8 )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
         bVar9 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 0x1a8, pcVar8, local_58, &local_128);
         bVar9 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
      }

   }

   LAB_00103ffd:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar9;
}
/* MainLoop::physics_process(double) */bool MainLoop::physics_process(MainLoop *this, double param_1) {
   undefined1 auVar1[16];
   long lVar2;
   undefined4 uVar3;
   undefined4 *puVar4;
   undefined8 uVar5;
   long lVar6;
   long *plVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   bool bVar9;
   undefined8 local_138;
   long local_130;
   char *local_128;
   long local_120;
   long local_118;
   undefined4 local_110;
   long local_108;
   undefined4 local_100;
   undefined8 local_f8;
   undefined4 uStack_f0;
   undefined4 uStack_ec;
   undefined1 local_e8[16];
   undefined8 local_d8;
   long local_d0;
   undefined8 local_c8;
   undefined8 local_c0;
   undefined1(*local_b8)[16];
   undefined8 local_a8;
   ulong local_a0;
   Vector<int> local_98[8];
   undefined8 local_90;
   Variant *local_80;
   int local_78[8];
   undefined8 *local_58[3];
   long local_40;
   plVar7 = *(long**)( this + 0x98 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar7 != (long*)0x0) {
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      Variant::Variant((Variant*)local_78, param_1);
      local_80 = (Variant*)local_78;
      ( **(code**)( *plVar7 + 0x60 ) )((Variant*)local_58, plVar7, this + 400, &local_80, 1, &local_f8);
      if ((int)local_f8 == 0) {
         bVar9 = Variant::operator_cast_to_bool((Variant*)local_58);
         if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_001048ed;
      }

      if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   if (( *(long*)( this + 8 ) != 0 ) && ( this[0x198] == (MainLoop)0x0 )) {
      local_e8 = (undefined1[16])0x0;
      local_128 = "_physics_process";
      local_f8._0_4_ = 0;
      local_f8._4_4_ = 0;
      uStack_f0 = 0;
      uStack_ec = 0;
      local_d8 = 0;
      local_d0 = 0;
      local_c8 = 6;
      local_c0 = 1;
      local_b8 = (undefined1(*) [16])0x0;
      local_a8 = 0;
      local_a0 = 0;
      local_90 = 0;
      local_120 = 0x10;
      String::parse_latin1((StrRange*)&local_f8);
      local_c0 = CONCAT44(local_c0._4_4_, 8);
      GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_128);
      uStack_f0 = local_128._0_4_;
      uVar5 = local_e8._0_8_;
      if (local_e8._0_8_ != local_120) {
         if (local_e8._0_8_ != 0) {
            LOCK();
            plVar7 = (long*)( local_e8._0_8_ + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               auVar1._8_8_ = 0;
               auVar1._0_8_ = local_e8._8_8_;
               local_e8 = auVar1 << 0x40;
               Memory::free_static((void*)( uVar5 + -0x10 ), false);
            }

         }

         local_e8._0_8_ = local_120;
         local_120 = 0;
      }

      if (local_e8._8_8_ != local_118) {
         StringName::unref();
         lVar6 = local_118;
         local_118 = 0;
         local_e8._8_8_ = lVar6;
      }

      lVar2 = local_d0;
      lVar6 = local_108;
      local_d8 = CONCAT44(local_d8._4_4_, local_110);
      if (local_d0 == local_108) {
         local_c8 = CONCAT44(local_c8._4_4_, local_100);
         if (local_d0 != 0) {
            LOCK();
            plVar7 = (long*)( local_d0 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_108 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }

         }

      }
 else {
         if (local_d0 != 0) {
            LOCK();
            plVar7 = (long*)( local_d0 + -0x10 );
            *plVar7 = *plVar7 + -1;
            UNLOCK();
            if (*plVar7 == 0) {
               local_d0 = 0;
               Memory::free_static((void*)( lVar2 + -0x10 ), false);
            }

         }

         local_c8 = CONCAT44(local_c8._4_4_, local_100);
         local_d0 = local_108;
      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar6 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar7 = (long*)( local_120 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      local_a0 = local_a0 & 0xffffffff00000000;
      GetTypeInfo<double,void>::get_class_info((GetTypeInfo<double,void>*)&local_128);
      if (local_b8 == (undefined1(*) [16])0x0) {
         local_b8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_b8[1] = 0;
         *local_b8 = (undefined1[16])0x0;
      }

      puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
      *(undefined8*)( puVar4 + 8 ) = 0;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      *puVar4 = 0;
      puVar4[6] = 0;
      puVar4[10] = 6;
      *(undefined8*)( puVar4 + 0x10 ) = 0;
      *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
      *puVar4 = local_128._0_4_;
      if (local_120 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_120);
      }

      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_118);
      puVar4[6] = local_110;
      if (*(long*)( puVar4 + 8 ) != local_108) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_108);
      }

      lVar2 = local_108;
      puVar4[10] = local_100;
      lVar6 = *(long*)( *local_b8 + 8 );
      *(undefined8*)( puVar4 + 0xc ) = 0;
      *(undefined1(**) [16])( puVar4 + 0x10 ) = local_b8;
      *(long*)( puVar4 + 0xe ) = lVar6;
      if (lVar6 != 0) {
         *(undefined4**)( lVar6 + 0x30 ) = puVar4;
      }

      lVar6 = *(long*)*local_b8;
      *(undefined4**)( *local_b8 + 8 ) = puVar4;
      if (lVar6 == 0) {
         *(undefined4**)*local_b8 = puVar4;
      }

      *(int*)local_b8[1] = *(int*)local_b8[1] + 1;
      if (local_108 != 0) {
         LOCK();
         plVar7 = (long*)( local_108 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_108 = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      if (( StringName::configured != '\0' ) && ( local_118 != 0 )) {
         StringName::unref();
      }

      lVar6 = local_120;
      if (local_120 != 0) {
         LOCK();
         plVar7 = (long*)( local_120 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_120 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

      }

      Vector<int>::push_back(local_98, 10);
      uVar3 = MethodInfo::get_compatibility_hash();
      lVar6 = *(long*)( this + 8 );
      *(undefined8*)( this + 0x1a0 ) = 0;
      pcVar8 = *(code**)( lVar6 + 0xd8 );
      if (( ( pcVar8 == (code*)0x0 ) || ( *(long*)( lVar6 + 0xe0 ) == 0 ) ) && ( pcVar8 = *(code**)( lVar6 + 0xd0 ) ),pcVar8 == (code*)0x0) {
         local_138 = 0;
         String::parse_latin1((String*)&local_138, "MainLoop");
         StringName::StringName((StringName*)&local_130, (String*)&local_138, false);
         ClassDB::get_virtual_method_compatibility_hashes((StringName*)&local_128, (StringName*)&local_130);
         if (local_120 == 0) {
            lVar6 = 0;
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') goto LAB_00104e9f;
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
         }
 else {
            lVar6 = *(long*)( local_120 + -8 );
            CowData<unsigned_int>::_unref((CowData<unsigned_int>*)&local_120);
            if (StringName::configured != '\0') {
               LAB_00104e9f:if (local_130 != 0) {
                  StringName::unref();
               }

            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
            if (lVar6 != 0) {
               lVar6 = *(long*)( this + 8 );
               goto LAB_00104d94;
            }

         }

         lVar6 = *(long*)( this + 8 );
         pcVar8 = *(code**)( lVar6 + 200 );
         if (( ( pcVar8 != (code*)0x0 ) && ( *(long*)( lVar6 + 0xe0 ) != 0 ) ) || ( pcVar8 = *(code**)( lVar6 + 0xc0 ) ),pcVar8 != (code*)0x0) {
            uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 400);
            *(undefined8*)( this + 0x1a0 ) = uVar5;
            lVar6 = *(long*)( this + 8 );
         }

      }
 else {
         uVar5 = ( *pcVar8 )(*(undefined8*)( lVar6 + 0xa0 ), this + 400, uVar3);
         *(undefined8*)( this + 0x1a0 ) = uVar5;
         lVar6 = *(long*)( this + 8 );
      }

      LAB_00104d94:if (*(char*)( lVar6 + 0x29 ) != '\0') {
         plVar7 = (long*)operator_new(0x18, "");
         *plVar7 = (long)( this + 0x1a0 );
         plVar7[1] = (long)( this + 0x198 );
         plVar7[2] = *(long*)( this + 0x168 );
         *(long**)( this + 0x168 ) = plVar7;
      }

      this[0x198] = (MainLoop)0x1;
      MethodInfo::~MethodInfo((MethodInfo*)&local_f8);
   }

   pcVar8 = *(code**)( this + 0x1a0 );
   bVar9 = false;
   if (pcVar8 != (code*)0x0) {
      local_58[0] = &local_f8;
      local_f8 = param_1;
      if (*(code**)( *(long*)( this + 8 ) + 0xe0 ) == (code*)0x0) {
         ( *pcVar8 )(*(undefined8*)( this + 0x10 ), local_58, &local_128);
         bVar9 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
      }
 else {
         ( **(code**)( *(long*)( this + 8 ) + 0xe0 ) )(*(undefined8*)( this + 0x10 ), this + 400, pcVar8, local_58, &local_128);
         bVar9 = local_128._0_1_ != (GetTypeInfo<bool,void>)0x0;
      }

   }

   LAB_001048ed:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return bVar9;
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
/* MainLoop::is_class_ptr(void*) const */uint MainLoop::is_class_ptr(MainLoop *this, void *param_1) {
   return (uint)CONCAT71(0x1070, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1070, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* MainLoop::_getv(StringName const&, Variant&) const */undefined8 MainLoop::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MainLoop::_setv(StringName const&, Variant const&) */undefined8 MainLoop::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MainLoop::_validate_propertyv(PropertyInfo&) const */void MainLoop::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* MainLoop::_property_can_revertv(StringName const&) const */undefined8 MainLoop::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* MainLoop::_property_get_revertv(StringName const&, Variant&) const */undefined8 MainLoop::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* MainLoop::_notificationv(int, bool) */void MainLoop::_notificationv(int param_1, bool param_2) {
   return;
}
/* MainLoop::iteration_prepare() */void MainLoop::iteration_prepare(void) {
   return;
}
/* MainLoop::iteration_end() */void MainLoop::iteration_end(void) {
   return;
}
/* MainLoop::~MainLoop() */void MainLoop::~MainLoop(MainLoop *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00106f00;
   if (bVar1) {
      if (*(long*)( this + 0x1c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010525e;
      }

      if (*(long*)( this + 0x1a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010525e;
      }

      if (*(long*)( this + 400 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010525e;
      }

      if (*(long*)( this + 0x178 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010525e:Object::~Object((Object*)this);
   return;
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MainLoop::_bind_methods() [clone .cold] */void MainLoop::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* MainLoop::_get_class_namev() const */undefined8 *MainLoop::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00105413:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00105413;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MainLoop");
         goto LAB_0010547e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "MainLoop");
   LAB_0010547e:return &_get_class_namev();
}
/* MainLoop::~MainLoop() */void MainLoop::~MainLoop(MainLoop *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(undefined***)this = &PTR__initialize_classv_00106f00;
   if (bVar1) {
      if (*(long*)( this + 0x1c0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010554e;
      }

      if (*(long*)( this + 0x1a8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010554e;
      }

      if (*(long*)( this + 400 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010554e;
      }

      if (*(long*)( this + 0x178 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010554e:Object::~Object((Object*)this);
   operator_delete(this, 0x1d8);
   return;
}
/* MainLoop::get_class() const */void MainLoop::get_class(void) {
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
/* MainLoop::is_class(String const&) const */undefined8 MainLoop::is_class(MainLoop *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_001056bf;
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

      LAB_001056bf:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00105773;
   }

   cVar6 = String::operator ==((String*)param_1, "MainLoop");
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
                     if (lVar5 == 0) goto LAB_00105823;
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

         LAB_00105823:cVar6 = String::operator ==((String*)param_1, (StrRange*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00105773;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==((String*)param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00105773:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MainLoop::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void MainLoop::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "MainLoop";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "MainLoop";
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
   if (local_90 == 0) {
      LAB_00105a48:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105a48;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00105a66;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00105a66:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "MainLoop", false);
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
/* GetTypeInfo<bool, void>::get_class_info() */GetTypeInfo<bool,void> * __thiscall
GetTypeInfo<bool,void>::get_class_info(GetTypeInfo<bool,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC6;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 1;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00105e6c;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00105e6c:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<double, void>::get_class_info() */GetTypeInfo<double,void> * __thiscall
GetTypeInfo<double,void>::get_class_info(GetTypeInfo<double,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC6;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *(undefined4*)this = 3;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      *(undefined4*)( this + 0x28 ) = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), (CowData*)&local_58);
      *(undefined4*)( this + 0x28 ) = 6;
      if (*(int*)( this + 0x18 ) == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
         if (*(undefined**)( this + 0x10 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( this + 0x10 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00105fec;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00105fec:local_58 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
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
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   int *piVar2;
   long lVar3;
   code *pcVar4;
   int *piVar5;
   long lVar6;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x50 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x50 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         piVar2 = *(int**)( this + 0x50 );
         if (piVar2 == (int*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar3 = *(long*)( piVar2 + -2 );
         *(undefined8*)( this + 0x50 ) = 0;
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
      }

   }

   List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)( this + 0x40 ));
   if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

   }

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
/* CowData<String>::_realloc(long) */undefined8 CowData<String>::_realloc(CowData<String> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<String>::resize<false>(long) */undefined8 CowData<String>::resize<false>(CowData<String> *this, long param_1) {
   long *plVar1;
   long *plVar2;
   code *pcVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar6 = 0;
      lVar7 = 0;
   }
 else {
      lVar6 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar6) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar6 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00106870:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 8 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_00106870;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_00106749:if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         while (true) {
            plVar2 = (long*)( lVar6 + uVar8 * 8 );
            if (*plVar2 != 0) break;
            uVar8 = uVar8 + 1;
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_00106749;
         }
;
         LOCK();
         plVar1 = (long*)( *plVar2 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar6 = *plVar2;
            *plVar2 = 0;
            Memory::free_static((void*)( lVar6 + -0x10 ), false);
         }

         uVar8 = uVar8 + 1;
         lVar6 = *(long*)this;
      }
;
      goto LAB_001068c6;
   }

   if (lVar10 == lVar7) {
      LAB_001067ef:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_001068c6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_001067da;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_001067ef;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar6 = 0;
   }

   memset(puVar9 + lVar6, 0, ( param_1 - lVar6 ) * 8);
   LAB_001067da:puVar9[-1] = param_1;
   return 0;
}
/* CowData<unsigned int>::_unref() */void CowData<unsigned_int>::_unref(CowData<unsigned_int> *this) {
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
/* CowData<int>::_realloc(long) */undefined8 CowData<int>::_realloc(CowData<int> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<int>::resize<false>(long) */undefined8 CowData<int>::resize<false>(CowData<int> *this, long param_1) {
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
      lVar3 = lVar9 * 4;
      if (lVar3 != 0) {
         uVar4 = lVar3 - 1U | lVar3 - 1U >> 1;
         uVar4 = uVar4 | uVar4 >> 2;
         uVar4 = uVar4 | uVar4 >> 4;
         uVar4 = uVar4 | uVar4 >> 8;
         uVar4 = uVar4 | uVar4 >> 0x10;
         lVar3 = ( uVar4 | uVar4 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 4 == 0) {
      LAB_00106cd0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 4 - 1;
   uVar4 = uVar4 | uVar4 >> 1;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar8 = uVar4 + 1;
   if (lVar8 == 0) goto LAB_00106cd0;
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
            goto LAB_00106be1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00106be1:puVar7[-1] = param_1;
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
/* MainLoop::_initialize_classv() */void MainLoop::_initialize_classv(void) {
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
      local_38 = "MainLoop";
      local_50 = 0;
      local_30 = 8;
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
            _bind_methods();
            initialize_class()::initialized = '\x01';
        goto LAB_00106d55
            ;;
         }

      }

      _bind_methods();
      initialize_class() {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MethodInfo::~MethodInfo() */
   void MethodInfo::~MethodInfo(MethodInfo *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* List<PropertyInfo, DefaultAllocator>::~List() */
   void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
      /* WARNING: Bad instruction - Truncating control flow here */
      halt_baddata();
   }

   /* WARNING: Control flow encountered bad instruction data */
   /* MainLoop::~MainLoop() */
   void MainLoop::~MainLoop(MainLoop *this) {
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


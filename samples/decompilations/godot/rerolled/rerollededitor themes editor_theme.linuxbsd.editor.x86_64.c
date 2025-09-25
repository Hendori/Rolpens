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
/* EditorTheme::get_color(StringName const&, StringName const&) const */undefined1  [16] __thiscallEditorTheme::get_color(EditorTheme *this, StringName *param_1, StringName *param_2) {
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
   code *pcVar43;
   char *pcVar44;
   uint uVar45;
   long lVar46;
   undefined8 uVar47;
   int iVar48;
   long lVar49;
   long lVar50;
   undefined8 uVar51;
   uint uVar52;
   uint uVar53;
   ulong uVar54;
   uint uVar55;
   long in_FS_OFFSET;
   undefined1 auVar56[16];
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 800 ) != 0 ) && ( *(int*)( this + 0x344 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x340 ) * 4 );
      lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x340 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar45 = StringName::get_empty_hash();
      }
 else {
         uVar45 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      uVar54 = CONCAT44(0, uVar2);
      lVar50 = *(long*)( this + 0x328 );
      if (uVar45 == 0) {
         uVar45 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar45 * lVar46;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar54;
      lVar49 = SUB168(auVar3 * auVar23, 8);
      uVar52 = *(uint*)( lVar50 + lVar49 * 4 );
      iVar48 = SUB164(auVar3 * auVar23, 8);
      if (uVar52 != 0) {
         uVar55 = 0;
         do {
            if (( uVar52 == uVar45 ) && ( lVar49 = *(long*)( *(long*)( *(long*)( this + 800 ) + lVar49 * 8 ) + 0x10 ) ),lVar49 == *(long*)param_2) {
               if (( *(long*)( this + 800 ) == 0 ) || ( *(int*)( this + 0x344 ) == 0 )) goto LAB_001006b8;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x340 ) * 4 );
               uVar54 = CONCAT44(0, uVar2);
               lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x340 ) * 8 );
               if (lVar49 == 0) {
                  uVar45 = StringName::get_empty_hash();
                  lVar50 = *(long*)( this + 0x328 );
               }
 else {
                  uVar45 = *(uint*)( lVar49 + 0x20 );
               }

               if (uVar45 == 0) {
                  uVar45 = 1;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar45 * lVar46;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar54;
               lVar49 = SUB168(auVar7 * auVar27, 8);
               uVar52 = *(uint*)( lVar50 + lVar49 * 4 );
               uVar55 = SUB164(auVar7 * auVar27, 8);
               if (uVar52 == 0) goto LAB_001006b8;
               uVar53 = 0;
               goto LAB_0010025a;
            }

            uVar55 = uVar55 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar48 + 1) * lVar46;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar54;
            lVar49 = SUB168(auVar4 * auVar24, 8);
            uVar52 = *(uint*)( lVar50 + lVar49 * 4 );
            iVar48 = SUB164(auVar4 * auVar24, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar52 * lVar46,auVar25._8_8_ = 0,auVar25._0_8_ = uVar54,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar48 ) - SUB164(auVar5 * auVar25, 8)) * lVar46,auVar26._8_8_ = 0,auVar26._0_8_ = uVar54,uVar55 <= SUB164(auVar6 * auVar26, 8) );
      }

   }

   goto LAB_00100558;
   while (true) {
      uVar53 = uVar53 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )(uVar55 + 1) * lVar46;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar54;
      lVar49 = SUB168(auVar8 * auVar28, 8);
      uVar52 = *(uint*)( lVar50 + lVar49 * 4 );
      uVar55 = SUB164(auVar8 * auVar28, 8);
      if (( uVar52 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar52 * lVar46,auVar29._8_8_ = 0,auVar29._0_8_ = uVar54,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar55 ) - SUB164(auVar9 * auVar29, 8)) * lVar46,auVar30._8_8_ = 0,auVar30._0_8_ = uVar54,SUB164(auVar10 * auVar30, 8) < uVar53) break;
      LAB_0010025a:if (( uVar45 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 800 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_2 )) {
         lVar46 = *(long*)( *(long*)( this + 800 ) + (ulong)uVar55 * 8 );
         if (( *(long*)( lVar46 + 0x20 ) == 0 ) || ( *(int*)( lVar46 + 0x44 ) == 0 )) goto LAB_00100558;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar46 + 0x40 ) * 4 );
         uVar54 = CONCAT44(0, uVar2);
         lVar50 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar46 + 0x40 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar45 = StringName::get_empty_hash();
         }
 else {
            uVar45 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar45 == 0) {
            uVar45 = 1;
         }

         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar45 * lVar50;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar54;
         lVar49 = SUB168(auVar11 * auVar31, 8);
         uVar52 = *(uint*)( *(long*)( lVar46 + 0x28 ) + lVar49 * 4 );
         iVar48 = SUB164(auVar11 * auVar31, 8);
         if (uVar52 == 0) goto LAB_00100558;
         uVar55 = 0;
         goto LAB_0010034a;
      }

   }
;
   goto LAB_001006b8;
   LAB_0010043a:if (( uVar45 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 800 ) + lVar50 * 8 ) + 0x10 ) == *(long*)param_2 )) {
      lVar46 = *(long*)( *(long*)( this + 800 ) + (ulong)uVar55 * 8 );
      if (( *(long*)( lVar46 + 0x20 ) != 0 ) && ( *(int*)( lVar46 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar46 + 0x40 ) * 4 );
         uVar54 = CONCAT44(0, uVar2);
         lVar50 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar46 + 0x40 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar45 = StringName::get_empty_hash();
         }
 else {
            uVar45 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar45 == 0) {
            uVar45 = 1;
         }

         auVar19._8_8_ = 0;
         auVar19._0_8_ = (ulong)uVar45 * lVar50;
         auVar39._8_8_ = 0;
         auVar39._0_8_ = uVar54;
         lVar49 = SUB168(auVar19 * auVar39, 8);
         uVar52 = *(uint*)( *(long*)( lVar46 + 0x28 ) + lVar49 * 4 );
         uVar55 = SUB164(auVar19 * auVar39, 8);
         if (uVar52 != 0) {
            uVar53 = 0;
            goto LAB_0010052b;
         }

      }

      goto LAB_001006b8;
   }

   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(uVar55 + 1) * lVar46;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar54;
   lVar50 = SUB168(auVar16 * auVar36, 8);
   uVar52 = *(uint*)( *(long*)( this + 0x328 ) + lVar50 * 4 );
   uVar55 = SUB164(auVar16 * auVar36, 8);
   if (( uVar52 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar52 * lVar46,auVar37._8_8_ = 0,auVar37._0_8_ = uVar54,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar2 + uVar55 ) - SUB164(auVar17 * auVar37, 8)) * lVar46,auVar38._8_8_ = 0,auVar38._0_8_ = uVar54,SUB164(auVar18 * auVar38, 8) < uVar53) goto LAB_001006b8;
   goto LAB_0010043a;
   while (true) {
      uVar55 = uVar55 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar48 + 1) * lVar50;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar54;
      lVar49 = SUB168(auVar12 * auVar32, 8);
      uVar52 = *(uint*)( *(long*)( lVar46 + 0x28 ) + lVar49 * 4 );
      iVar48 = SUB164(auVar12 * auVar32, 8);
      if (( uVar52 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar52 * lVar50,auVar33._8_8_ = 0,auVar33._0_8_ = uVar54,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar2 + iVar48 ) - SUB164(auVar13 * auVar33, 8)) * lVar50,auVar34._8_8_ = 0,auVar34._0_8_ = uVar54,SUB164(auVar14 * auVar34, 8) < uVar55) break;
      LAB_0010034a:if (( uVar45 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( lVar46 + 0x20 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
         if (( *(long*)( this + 800 ) == 0 ) || ( *(int*)( this + 0x344 ) == 0 )) goto LAB_001006b8;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x340 ) * 4 );
         uVar54 = CONCAT44(0, uVar2);
         lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x340 ) * 8 );
         if (*(long*)param_2 == 0) {
            uVar45 = StringName::get_empty_hash();
         }
 else {
            uVar45 = *(uint*)( *(long*)param_2 + 0x20 );
         }

         if (uVar45 == 0) {
            uVar45 = 1;
         }

         auVar15._8_8_ = 0;
         auVar15._0_8_ = (ulong)uVar45 * lVar46;
         auVar35._8_8_ = 0;
         auVar35._0_8_ = uVar54;
         lVar50 = SUB168(auVar15 * auVar35, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x328 ) + lVar50 * 4 );
         uVar55 = SUB164(auVar15 * auVar35, 8);
         if (uVar52 == 0) goto LAB_001006b8;
         uVar53 = 0;
         goto LAB_0010043a;
      }

   }
;
   LAB_00100558:if (( editor_theme_types._8_8_ != 0 ) && ( 0 < *(long*)( editor_theme_types._8_8_ + -8 ) )) {
      lVar46 = 0;
      do {
         if (*(long*)param_2 == *(long*)( editor_theme_types._8_8_ + lVar46 * 8 )) {
            StringName::StringName((StringName*)&local_60, param_2);
            StringName::StringName((StringName*)&local_68, param_1);
            local_58 = "Trying to access a non-existing editor theme color \'%s\' in \'%s\'.";
            local_70 = 0;
            local_50 = 0x40;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName,StringName>(&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
            _err_print_error("get_color", "editor/themes/editor_theme.cpp", 0x2e, &local_58, 0, 1);
            pcVar44 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar44 + -0x10, false);
               }

            }

            lVar46 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar46 + -0x10 ), false);
               }

            }

            if (StringName::configured == '\0') break;
            if (local_68 != 0) {
               StringName::unref();
               if (StringName::configured == '\0') break;
            }

            if (local_60 != 0) {
               StringName::unref();
            }

            break;
         }

         lVar46 = lVar46 + 1;
      }
 while ( *(long*)( editor_theme_types._8_8_ + -8 ) != lVar46 );
   }

   uVar47 = 0x3f80000000000000;
   uVar51 = 0;
   LAB_00100686:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      auVar56._8_8_ = uVar47;
      auVar56._0_8_ = uVar51;
      return auVar56;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   while (true) {
      uVar53 = uVar53 + 1;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = ( ulong )(uVar55 + 1) * lVar50;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar54;
      lVar49 = SUB168(auVar20 * auVar40, 8);
      uVar52 = *(uint*)( *(long*)( lVar46 + 0x28 ) + lVar49 * 4 );
      uVar55 = SUB164(auVar20 * auVar40, 8);
      if (( uVar52 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar52 * lVar50,auVar41._8_8_ = 0,auVar41._0_8_ = uVar54,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( uVar2 + uVar55 ) - SUB164(auVar21 * auVar41, 8)) * lVar50,auVar42._8_8_ = 0,auVar42._0_8_ = uVar54,SUB164(auVar22 * auVar42, 8) < uVar53) break;
      LAB_0010052b:if (( uVar45 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( lVar46 + 0x20 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
         lVar46 = *(long*)( *(long*)( lVar46 + 0x20 ) + (ulong)uVar55 * 8 );
         uVar51 = *(undefined8*)( lVar46 + 0x18 );
         uVar47 = *(undefined8*)( lVar46 + 0x20 );
         goto LAB_00100686;
      }

   }
;
   LAB_001006b8:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar43 = (code*)invalidInstructionException();
   ( *pcVar43 )();
}
/* EditorTheme::get_constant(StringName const&, StringName const&) const */undefined4 EditorTheme::get_constant(EditorTheme *this, StringName *param_1, StringName *param_2) {
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
   code *pcVar43;
   char *pcVar44;
   undefined4 uVar45;
   uint uVar46;
   long lVar47;
   int iVar48;
   long lVar49;
   long lVar50;
   uint uVar51;
   uint uVar52;
   ulong uVar53;
   uint uVar54;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x350 ) != 0 ) && ( *(int*)( this + 0x374 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x370 ) * 4 );
      lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x370 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar46 = StringName::get_empty_hash();
      }
 else {
         uVar46 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      uVar53 = CONCAT44(0, uVar2);
      lVar50 = *(long*)( this + 0x358 );
      if (uVar46 == 0) {
         uVar46 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar46 * lVar47;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar53;
      lVar49 = SUB168(auVar3 * auVar23, 8);
      uVar51 = *(uint*)( lVar50 + lVar49 * 4 );
      iVar48 = SUB164(auVar3 * auVar23, 8);
      if (uVar51 != 0) {
         uVar54 = 0;
         do {
            if (( uVar46 == uVar51 ) && ( lVar49 = *(long*)( *(long*)( *(long*)( this + 0x350 ) + lVar49 * 8 ) + 0x10 ) ),lVar49 == *(long*)param_2) {
               if (( *(long*)( this + 0x350 ) == 0 ) || ( *(int*)( this + 0x374 ) == 0 )) goto LAB_00100db0;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x370 ) * 4 );
               uVar53 = CONCAT44(0, uVar2);
               lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x370 ) * 8 );
               if (lVar49 == 0) {
                  uVar46 = StringName::get_empty_hash();
                  lVar50 = *(long*)( this + 0x358 );
               }
 else {
                  uVar46 = *(uint*)( lVar49 + 0x20 );
               }

               if (uVar46 == 0) {
                  uVar46 = 1;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar46 * lVar47;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar53;
               lVar49 = SUB168(auVar7 * auVar27, 8);
               uVar51 = *(uint*)( lVar50 + lVar49 * 4 );
               uVar54 = SUB164(auVar7 * auVar27, 8);
               if (uVar51 == 0) goto LAB_00100db0;
               uVar52 = 0;
               goto LAB_0010096a;
            }

            uVar54 = uVar54 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar48 + 1) * lVar47;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar53;
            lVar49 = SUB168(auVar4 * auVar24, 8);
            uVar51 = *(uint*)( lVar50 + lVar49 * 4 );
            iVar48 = SUB164(auVar4 * auVar24, 8);
         }
 while ( ( uVar51 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar51 * lVar47,auVar25._8_8_ = 0,auVar25._0_8_ = uVar53,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar48 ) - SUB164(auVar5 * auVar25, 8)) * lVar47,auVar26._8_8_ = 0,auVar26._0_8_ = uVar53,uVar54 <= SUB164(auVar6 * auVar26, 8) );
      }

   }

   goto LAB_00100c60;
   while (true) {
      uVar52 = uVar52 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )(uVar54 + 1) * lVar47;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar53;
      lVar49 = SUB168(auVar8 * auVar28, 8);
      uVar51 = *(uint*)( lVar50 + lVar49 * 4 );
      uVar54 = SUB164(auVar8 * auVar28, 8);
      if (( uVar51 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar51 * lVar47,auVar29._8_8_ = 0,auVar29._0_8_ = uVar53,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar54 ) - SUB164(auVar9 * auVar29, 8)) * lVar47,auVar30._8_8_ = 0,auVar30._0_8_ = uVar53,SUB164(auVar10 * auVar30, 8) < uVar52) break;
      LAB_0010096a:if (( uVar46 == uVar51 ) && ( *(long*)( *(long*)( *(long*)( this + 0x350 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_2 )) {
         lVar47 = *(long*)( *(long*)( this + 0x350 ) + (ulong)uVar54 * 8 );
         if (( *(long*)( lVar47 + 0x20 ) == 0 ) || ( *(int*)( lVar47 + 0x44 ) == 0 )) goto LAB_00100c60;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar47 + 0x40 ) * 4 );
         uVar53 = CONCAT44(0, uVar2);
         lVar50 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar47 + 0x40 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar46 = StringName::get_empty_hash();
         }
 else {
            uVar46 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar46 == 0) {
            uVar46 = 1;
         }

         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar46 * lVar50;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar53;
         lVar49 = SUB168(auVar11 * auVar31, 8);
         uVar51 = *(uint*)( *(long*)( lVar47 + 0x28 ) + lVar49 * 4 );
         iVar48 = SUB164(auVar11 * auVar31, 8);
         if (uVar51 == 0) goto LAB_00100c60;
         uVar54 = 0;
         goto LAB_00100a5a;
      }

   }
;
   goto LAB_00100db0;
   LAB_00100b4a:if (( uVar46 == uVar51 ) && ( *(long*)( *(long*)( *(long*)( this + 0x350 ) + lVar50 * 8 ) + 0x10 ) == *(long*)param_2 )) {
      lVar47 = *(long*)( *(long*)( this + 0x350 ) + (ulong)uVar54 * 8 );
      if (( *(long*)( lVar47 + 0x20 ) != 0 ) && ( *(int*)( lVar47 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar47 + 0x40 ) * 4 );
         uVar53 = CONCAT44(0, uVar2);
         lVar50 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar47 + 0x40 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar46 = StringName::get_empty_hash();
         }
 else {
            uVar46 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar46 == 0) {
            uVar46 = 1;
         }

         auVar19._8_8_ = 0;
         auVar19._0_8_ = (ulong)uVar46 * lVar50;
         auVar39._8_8_ = 0;
         auVar39._0_8_ = uVar53;
         lVar49 = SUB168(auVar19 * auVar39, 8);
         uVar51 = *(uint*)( *(long*)( lVar47 + 0x28 ) + lVar49 * 4 );
         uVar54 = SUB164(auVar19 * auVar39, 8);
         if (uVar51 != 0) {
            uVar52 = 0;
            goto LAB_00100c3b;
         }

      }

      goto LAB_00100db0;
   }

   uVar52 = uVar52 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(uVar54 + 1) * lVar47;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar53;
   lVar50 = SUB168(auVar16 * auVar36, 8);
   uVar51 = *(uint*)( *(long*)( this + 0x358 ) + lVar50 * 4 );
   uVar54 = SUB164(auVar16 * auVar36, 8);
   if (( uVar51 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar51 * lVar47,auVar37._8_8_ = 0,auVar37._0_8_ = uVar53,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar2 + uVar54 ) - SUB164(auVar17 * auVar37, 8)) * lVar47,auVar38._8_8_ = 0,auVar38._0_8_ = uVar53,SUB164(auVar18 * auVar38, 8) < uVar52) goto LAB_00100db0;
   goto LAB_00100b4a;
   while (true) {
      uVar54 = uVar54 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar48 + 1) * lVar50;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar53;
      lVar49 = SUB168(auVar12 * auVar32, 8);
      uVar51 = *(uint*)( *(long*)( lVar47 + 0x28 ) + lVar49 * 4 );
      iVar48 = SUB164(auVar12 * auVar32, 8);
      if (( uVar51 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar51 * lVar50,auVar33._8_8_ = 0,auVar33._0_8_ = uVar53,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar2 + iVar48 ) - SUB164(auVar13 * auVar33, 8)) * lVar50,auVar34._8_8_ = 0,auVar34._0_8_ = uVar53,SUB164(auVar14 * auVar34, 8) < uVar54) break;
      LAB_00100a5a:if (( uVar46 == uVar51 ) && ( *(long*)( *(long*)( *(long*)( lVar47 + 0x20 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
         if (( *(long*)( this + 0x350 ) == 0 ) || ( *(int*)( this + 0x374 ) == 0 )) goto LAB_00100db0;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x370 ) * 4 );
         uVar53 = CONCAT44(0, uVar2);
         lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x370 ) * 8 );
         if (*(long*)param_2 == 0) {
            uVar46 = StringName::get_empty_hash();
         }
 else {
            uVar46 = *(uint*)( *(long*)param_2 + 0x20 );
         }

         if (uVar46 == 0) {
            uVar46 = 1;
         }

         auVar15._8_8_ = 0;
         auVar15._0_8_ = (ulong)uVar46 * lVar47;
         auVar35._8_8_ = 0;
         auVar35._0_8_ = uVar53;
         lVar50 = SUB168(auVar15 * auVar35, 8);
         uVar51 = *(uint*)( *(long*)( this + 0x358 ) + lVar50 * 4 );
         uVar54 = SUB164(auVar15 * auVar35, 8);
         if (uVar51 == 0) goto LAB_00100db0;
         uVar52 = 0;
         goto LAB_00100b4a;
      }

   }
;
   LAB_00100c60:if (( editor_theme_types._8_8_ != 0 ) && ( 0 < *(long*)( editor_theme_types._8_8_ + -8 ) )) {
      lVar47 = 0;
      do {
         if (*(long*)param_2 == *(long*)( editor_theme_types._8_8_ + lVar47 * 8 )) {
            StringName::StringName((StringName*)&local_60, param_2);
            StringName::StringName((StringName*)&local_68, param_1);
            local_58 = "Trying to access a non-existing editor theme constant \'%s\' in \'%s\'.";
            local_70 = 0;
            local_50 = 0x43;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName,StringName>(&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
            _err_print_error("get_constant", "editor/themes/editor_theme.cpp", 0x3a, &local_58, 0, 1);
            pcVar44 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar44 + -0x10, false);
               }

            }

            lVar47 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar47 + -0x10 ), false);
               }

            }

            if (StringName::configured == '\0') break;
            if (local_68 != 0) {
               StringName::unref();
               if (StringName::configured == '\0') break;
            }

            if (local_60 != 0) {
               StringName::unref();
            }

            break;
         }

         lVar47 = lVar47 + 1;
      }
 while ( *(long*)( editor_theme_types._8_8_ + -8 ) != lVar47 );
   }

   uVar45 = 0;
   LAB_00100d84:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar45;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   while (true) {
      uVar52 = uVar52 + 1;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = ( ulong )(uVar54 + 1) * lVar50;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar53;
      lVar49 = SUB168(auVar20 * auVar40, 8);
      uVar51 = *(uint*)( *(long*)( lVar47 + 0x28 ) + lVar49 * 4 );
      uVar54 = SUB164(auVar20 * auVar40, 8);
      if (( uVar51 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar51 * lVar50,auVar41._8_8_ = 0,auVar41._0_8_ = uVar53,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( uVar2 + uVar54 ) - SUB164(auVar21 * auVar41, 8)) * lVar50,auVar42._8_8_ = 0,auVar42._0_8_ = uVar53,SUB164(auVar22 * auVar42, 8) < uVar52) break;
      LAB_00100c3b:if (( uVar46 == uVar51 ) && ( *(long*)( *(long*)( *(long*)( lVar47 + 0x20 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
         uVar45 = *(undefined4*)( *(long*)( *(long*)( lVar47 + 0x20 ) + (ulong)uVar54 * 8 ) + 0x18 );
         goto LAB_00100d84;
      }

   }
;
   LAB_00100db0:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar43 = (code*)invalidInstructionException();
   ( *pcVar43 )();
}
/* EditorTheme::get_font_size(StringName const&, StringName const&) const */ulong EditorTheme::get_font_size(EditorTheme *this, StringName *param_1, StringName *param_2) {
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
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   code *pcVar59;
   char *pcVar60;
   char cVar61;
   uint uVar62;
   long lVar63;
   ulong uVar64;
   int iVar65;
   long lVar66;
   long lVar67;
   uint uVar68;
   uint uVar69;
   uint uVar70;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x2f0 ) != 0 ) && ( *(int*)( this + 0x314 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x310 ) * 4 );
      lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x310 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar62 = StringName::get_empty_hash();
      }
 else {
         uVar62 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      uVar64 = CONCAT44(0, uVar2);
      lVar67 = *(long*)( this + 0x2f8 );
      if (uVar62 == 0) {
         uVar62 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar62 * lVar63;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar64;
      lVar66 = SUB168(auVar3 * auVar31, 8);
      uVar68 = *(uint*)( lVar67 + lVar66 * 4 );
      iVar65 = SUB164(auVar3 * auVar31, 8);
      if (uVar68 != 0) {
         uVar70 = 0;
         do {
            if (( uVar68 == uVar62 ) && ( lVar66 = *(long*)( *(long*)( *(long*)( this + 0x2f0 ) + lVar66 * 8 ) + 0x10 ) ),lVar66 == *(long*)param_2) {
               if (( *(long*)( this + 0x2f0 ) == 0 ) || ( *(int*)( this + 0x314 ) == 0 )) goto LAB_001014d8;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x310 ) * 4 );
               uVar64 = CONCAT44(0, uVar2);
               lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x310 ) * 8 );
               if (lVar66 == 0) {
                  uVar62 = StringName::get_empty_hash();
                  lVar67 = *(long*)( this + 0x2f8 );
               }
 else {
                  uVar62 = *(uint*)( lVar66 + 0x20 );
               }

               if (uVar62 == 0) {
                  uVar62 = 1;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar62 * lVar63;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = uVar64;
               lVar66 = SUB168(auVar7 * auVar35, 8);
               uVar68 = *(uint*)( lVar67 + lVar66 * 4 );
               uVar70 = SUB164(auVar7 * auVar35, 8);
               if (uVar68 == 0) goto LAB_001014d8;
               uVar69 = 0;
               goto LAB_0010105a;
            }

            uVar70 = uVar70 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar65 + 1) * lVar63;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar64;
            lVar66 = SUB168(auVar4 * auVar32, 8);
            uVar68 = *(uint*)( lVar67 + lVar66 * 4 );
            iVar65 = SUB164(auVar4 * auVar32, 8);
         }
 while ( ( uVar68 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar68 * lVar63,auVar33._8_8_ = 0,auVar33._0_8_ = uVar64,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar65 ) - SUB164(auVar5 * auVar33, 8)) * lVar63,auVar34._8_8_ = 0,auVar34._0_8_ = uVar64,uVar70 <= SUB164(auVar6 * auVar34, 8) );
      }

   }

   goto LAB_00101348;
   while (true) {
      uVar69 = uVar69 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )(uVar70 + 1) * lVar63;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar64;
      lVar66 = SUB168(auVar8 * auVar36, 8);
      uVar68 = *(uint*)( lVar67 + lVar66 * 4 );
      uVar70 = SUB164(auVar8 * auVar36, 8);
      if (( uVar68 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar68 * lVar63,auVar37._8_8_ = 0,auVar37._0_8_ = uVar64,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar70 ) - SUB164(auVar9 * auVar37, 8)) * lVar63,auVar38._8_8_ = 0,auVar38._0_8_ = uVar64,SUB164(auVar10 * auVar38, 8) < uVar69) break;
      LAB_0010105a:if (( uVar68 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( this + 0x2f0 ) + lVar66 * 8 ) + 0x10 ) == *(long*)param_2 )) {
         lVar63 = *(long*)( *(long*)( this + 0x2f0 ) + (ulong)uVar70 * 8 );
         if (( *(long*)( lVar63 + 0x20 ) == 0 ) || ( *(int*)( lVar63 + 0x44 ) == 0 )) goto LAB_00101348;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar64 = CONCAT44(0, uVar2);
         lVar67 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar62 * lVar67;
         auVar39._8_8_ = 0;
         auVar39._0_8_ = uVar64;
         lVar66 = SUB168(auVar11 * auVar39, 8);
         uVar68 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar66 * 4 );
         iVar65 = SUB164(auVar11 * auVar39, 8);
         if (uVar68 == 0) goto LAB_00101348;
         uVar70 = 0;
         goto LAB_00101142;
      }

   }
;
   goto LAB_001014d8;
   LAB_0010122a:if (( uVar62 == uVar68 ) && ( *(long*)( *(long*)( *(long*)( this + 0x2f0 ) + lVar67 * 8 ) + 0x10 ) == *(long*)param_2 )) {
      lVar63 = *(long*)( *(long*)( this + 0x2f0 ) + (ulong)uVar70 * 8 );
      if (( *(long*)( lVar63 + 0x20 ) != 0 ) && ( *(int*)( lVar63 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar64 = CONCAT44(0, uVar2);
         lVar67 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar19._8_8_ = 0;
         auVar19._0_8_ = (ulong)uVar62 * lVar67;
         auVar47._8_8_ = 0;
         auVar47._0_8_ = uVar64;
         lVar66 = SUB168(auVar19 * auVar47, 8);
         uVar68 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar66 * 4 );
         uVar70 = SUB164(auVar19 * auVar47, 8);
         if (uVar68 != 0) {
            uVar69 = 0;
            goto LAB_0010131a;
         }

      }

      goto LAB_001014d8;
   }

   uVar69 = uVar69 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(uVar70 + 1) * lVar63;
   auVar44._8_8_ = 0;
   auVar44._0_8_ = uVar64;
   lVar67 = SUB168(auVar16 * auVar44, 8);
   uVar68 = *(uint*)( *(long*)( this + 0x2f8 ) + lVar67 * 4 );
   uVar70 = SUB164(auVar16 * auVar44, 8);
   if (( uVar68 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar68 * lVar63,auVar45._8_8_ = 0,auVar45._0_8_ = uVar64,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar2 + uVar70 ) - SUB164(auVar17 * auVar45, 8)) * lVar63,auVar46._8_8_ = 0,auVar46._0_8_ = uVar64,SUB164(auVar18 * auVar46, 8) < uVar69) goto LAB_001014d8;
   goto LAB_0010122a;
   LAB_0010131a:if (( uVar62 == uVar68 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar66 * 8 ) + 0x10 ) == *(long*)param_1 )) {
      if (*(int*)( *(long*)( *(long*)( lVar63 + 0x20 ) + (ulong)uVar70 * 8 ) + 0x18 ) < 1) goto LAB_00101348;
      if (( *(long*)( this + 0x2f0 ) != 0 ) && ( *(int*)( this + 0x314 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x310 ) * 4 );
         uVar64 = CONCAT44(0, uVar2);
         lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x310 ) * 8 );
         if (*(long*)param_2 == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)param_2 + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar23._8_8_ = 0;
         auVar23._0_8_ = (ulong)uVar62 * lVar63;
         auVar51._8_8_ = 0;
         auVar51._0_8_ = uVar64;
         lVar67 = SUB168(auVar23 * auVar51, 8);
         uVar68 = *(uint*)( *(long*)( this + 0x2f8 ) + lVar67 * 4 );
         uVar70 = SUB164(auVar23 * auVar51, 8);
         if (uVar68 != 0) {
            uVar69 = 0;
            goto LAB_0010177a;
         }

      }

      goto LAB_001014d8;
   }

   uVar69 = uVar69 + 1;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(uVar70 + 1) * lVar67;
   auVar48._8_8_ = 0;
   auVar48._0_8_ = uVar64;
   lVar66 = SUB168(auVar20 * auVar48, 8);
   uVar68 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar66 * 4 );
   uVar70 = SUB164(auVar20 * auVar48, 8);
   if (( uVar68 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar68 * lVar67,auVar49._8_8_ = 0,auVar49._0_8_ = uVar64,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( uVar2 + uVar70 ) - SUB164(auVar21 * auVar49, 8)) * lVar67,auVar50._8_8_ = 0,auVar50._0_8_ = uVar64,SUB164(auVar22 * auVar50, 8) < uVar69) goto LAB_001014d8;
   goto LAB_0010131a;
   LAB_0010177a:if (( uVar62 == uVar68 ) && ( *(long*)( *(long*)( *(long*)( this + 0x2f0 ) + lVar67 * 8 ) + 0x10 ) == *(long*)param_2 )) {
      lVar63 = *(long*)( *(long*)( this + 0x2f0 ) + (ulong)uVar70 * 8 );
      if (( *(long*)( lVar63 + 0x20 ) != 0 ) && ( *(int*)( lVar63 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar64 = CONCAT44(0, uVar2);
         lVar67 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar27._8_8_ = 0;
         auVar27._0_8_ = (ulong)uVar62 * lVar67;
         auVar55._8_8_ = 0;
         auVar55._0_8_ = uVar64;
         lVar66 = SUB168(auVar27 * auVar55, 8);
         uVar68 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar66 * 4 );
         uVar70 = SUB164(auVar27 * auVar55, 8);
         if (uVar68 != 0) {
            uVar69 = 0;
            goto LAB_0010186b;
         }

      }

      goto LAB_001014d8;
   }

   uVar69 = uVar69 + 1;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = ( ulong )(uVar70 + 1) * lVar63;
   auVar52._8_8_ = 0;
   auVar52._0_8_ = uVar64;
   lVar67 = SUB168(auVar24 * auVar52, 8);
   uVar68 = *(uint*)( *(long*)( this + 0x2f8 ) + lVar67 * 4 );
   uVar70 = SUB164(auVar24 * auVar52, 8);
   if (( uVar68 == 0 ) || ( auVar25._8_8_ = 0 ),auVar25._0_8_ = (ulong)uVar68 * lVar63,auVar53._8_8_ = 0,auVar53._0_8_ = uVar64,auVar26._8_8_ = 0,auVar26._0_8_ = ( ulong )(( uVar2 + uVar70 ) - SUB164(auVar25 * auVar53, 8)) * lVar63,auVar54._8_8_ = 0,auVar54._0_8_ = uVar64,SUB164(auVar26 * auVar54, 8) < uVar69) goto LAB_001014d8;
   goto LAB_0010177a;
   while (true) {
      uVar69 = uVar69 + 1;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = ( ulong )(uVar70 + 1) * lVar67;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar64;
      lVar66 = SUB168(auVar28 * auVar56, 8);
      uVar68 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar66 * 4 );
      uVar70 = SUB164(auVar28 * auVar56, 8);
      if (( uVar68 == 0 ) || ( auVar29._8_8_ = 0 ),auVar29._0_8_ = (ulong)uVar68 * lVar67,auVar57._8_8_ = 0,auVar57._0_8_ = uVar64,auVar30._8_8_ = 0,auVar30._0_8_ = ( ulong )(( uVar2 + uVar70 ) - SUB164(auVar29 * auVar57, 8)) * lVar67,auVar58._8_8_ = 0,auVar58._0_8_ = uVar64,SUB164(auVar30 * auVar58, 8) < uVar69) break;
      LAB_0010186b:if (( uVar62 == uVar68 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar66 * 8 ) + 0x10 ) == *(long*)param_1 )) {
         uVar2 = *(uint*)( *(long*)( *(long*)( lVar63 + 0x20 ) + (ulong)uVar70 * 8 ) + 0x18 );
         goto LAB_00101652;
      }

   }
;
   LAB_001014d8:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar59 = (code*)invalidInstructionException();
   ( *pcVar59 )();
   while (true) {
      uVar70 = uVar70 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar65 + 1) * lVar67;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar64;
      lVar66 = SUB168(auVar12 * auVar40, 8);
      uVar68 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar66 * 4 );
      iVar65 = SUB164(auVar12 * auVar40, 8);
      if (( uVar68 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar68 * lVar67,auVar41._8_8_ = 0,auVar41._0_8_ = uVar64,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar2 + iVar65 ) - SUB164(auVar13 * auVar41, 8)) * lVar67,auVar42._8_8_ = 0,auVar42._0_8_ = uVar64,SUB164(auVar14 * auVar42, 8) < uVar70) break;
      LAB_00101142:if (( uVar68 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar66 * 8 ) + 0x10 ) == *(long*)param_1 )) {
         if (( *(long*)( this + 0x2f0 ) == 0 ) || ( *(int*)( this + 0x314 ) == 0 )) goto LAB_001014d8;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x310 ) * 4 );
         uVar64 = CONCAT44(0, uVar2);
         lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x310 ) * 8 );
         if (*(long*)param_2 == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)param_2 + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar15._8_8_ = 0;
         auVar15._0_8_ = (ulong)uVar62 * lVar63;
         auVar43._8_8_ = 0;
         auVar43._0_8_ = uVar64;
         lVar67 = SUB168(auVar15 * auVar43, 8);
         uVar68 = *(uint*)( *(long*)( this + 0x2f8 ) + lVar67 * 4 );
         uVar70 = SUB164(auVar15 * auVar43, 8);
         if (uVar68 == 0) goto LAB_001014d8;
         uVar69 = 0;
         goto LAB_0010122a;
      }

   }
;
   LAB_00101348:cVar61 = Theme::has_default_font_size();
   if (cVar61 == '\0') {
      if (( editor_theme_types._8_8_ != 0 ) && ( 0 < *(long*)( editor_theme_types._8_8_ + -8 ) )) {
         lVar63 = 0;
         do {
            if (*(long*)param_2 == *(long*)( editor_theme_types._8_8_ + lVar63 * 8 )) {
               StringName::StringName((StringName*)&local_60, param_2);
               StringName::StringName((StringName*)&local_68, param_1);
               local_58 = "Trying to access a non-existing editor theme font size \'%s\' in \'%s\'.";
               local_70 = 0;
               local_50 = 0x44;
               String::parse_latin1((StrRange*)&local_70);
               vformat<StringName,StringName>(&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
               _err_print_error("get_font_size", "editor/themes/editor_theme.cpp", 0x5c, &local_58, 0, 1);
               pcVar60 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar60 + -0x10, false);
                  }

               }

               lVar63 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar63 + -0x10 ), false);
                  }

               }

               if (StringName::configured == '\0') break;
               if (local_68 != 0) {
                  StringName::unref();
                  if (StringName::configured == '\0') break;
               }

               if (local_60 != 0) {
                  StringName::unref();
               }

               break;
            }

            lVar63 = lVar63 + 1;
         }
 while ( *(long*)( editor_theme_types._8_8_ + -8 ) != lVar63 );
      }

      ThemeDB::get_singleton();
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar64 = ThemeDB::get_fallback_font_size();
         return uVar64;
      }

   }
 else {
      if (( editor_theme_types._8_8_ != 0 ) && ( 0 < *(long*)( editor_theme_types._8_8_ + -8 ) )) {
         lVar63 = 0;
         do {
            if (*(long*)param_2 == *(long*)( editor_theme_types._8_8_ + lVar63 * 8 )) {
               StringName::StringName((StringName*)&local_60, param_2);
               StringName::StringName((StringName*)&local_68, param_1);
               local_58 = "Trying to access a non-existing editor theme font size \'%s\' in \'%s\'.";
               local_70 = 0;
               local_50 = 0x44;
               String::parse_latin1((StrRange*)&local_70);
               vformat<StringName,StringName>(&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
               _err_print_error("get_font_size", "editor/themes/editor_theme.cpp", 0x57, &local_58, 0, 1);
               pcVar60 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar60 + -0x10, false);
                  }

               }

               lVar63 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar63 + -0x10 ), false);
                  }

               }

               if (StringName::configured == '\0') break;
               if (local_68 != 0) {
                  StringName::unref();
                  if (StringName::configured == '\0') break;
               }

               if (local_60 != 0) {
                  StringName::unref();
               }

               break;
            }

            lVar63 = lVar63 + 1;
         }
 while ( *(long*)( editor_theme_types._8_8_ + -8 ) != lVar63 );
      }

      uVar2 = *(uint*)( this + 0x250 );
      LAB_00101652:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return (ulong)uVar2;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorTheme::get_font(StringName const&, StringName const&) const */StringName *EditorTheme::get_font(StringName *param_1, StringName *param_2) {
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
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   code *pcVar59;
   char *pcVar60;
   char cVar61;
   uint uVar62;
   long lVar63;
   StringName *in_RCX;
   int iVar64;
   StringName *in_RDX;
   long lVar65;
   long lVar66;
   uint uVar67;
   ulong uVar68;
   uint uVar69;
   uint uVar70;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_2 + 0x2c0 ) != 0 ) && ( *(int*)( param_2 + 0x2e4 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x2e0 ) * 4 );
      lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x2e0 ) * 8 );
      if (*(long*)in_RCX == 0) {
         uVar62 = StringName::get_empty_hash();
      }
 else {
         uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
      }

      uVar68 = CONCAT44(0, uVar2);
      lVar66 = *(long*)( param_2 + 0x2c8 );
      if (uVar62 == 0) {
         uVar62 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar62 * lVar63;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar68;
      lVar65 = SUB168(auVar3 * auVar31, 8);
      uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
      iVar64 = SUB164(auVar3 * auVar31, 8);
      if (uVar67 != 0) {
         uVar69 = 0;
         do {
            if (( uVar62 == uVar67 ) && ( lVar65 = *(long*)( *(long*)( *(long*)( param_2 + 0x2c0 ) + lVar65 * 8 ) + 0x10 ) ),lVar65 == *(long*)in_RCX) {
               if (( *(long*)( param_2 + 0x2c0 ) == 0 ) || ( *(int*)( param_2 + 0x2e4 ) == 0 )) goto LAB_001022d0;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x2e0 ) * 4 );
               uVar68 = CONCAT44(0, uVar2);
               lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x2e0 ) * 8 );
               if (lVar65 == 0) {
                  uVar62 = StringName::get_empty_hash();
                  lVar66 = *(long*)( param_2 + 0x2c8 );
               }
 else {
                  uVar62 = *(uint*)( lVar65 + 0x20 );
               }

               if (uVar62 == 0) {
                  uVar62 = 1;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar62 * lVar63;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = uVar68;
               lVar65 = SUB168(auVar7 * auVar35, 8);
               uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
               uVar69 = SUB164(auVar7 * auVar35, 8);
               if (uVar67 == 0) goto LAB_001022d0;
               uVar70 = 0;
               goto LAB_00101aba;
            }

            uVar69 = uVar69 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar64 + 1) * lVar63;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar68;
            lVar65 = SUB168(auVar4 * auVar32, 8);
            uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
            iVar64 = SUB164(auVar4 * auVar32, 8);
         }
 while ( ( uVar67 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar67 * lVar63,auVar33._8_8_ = 0,auVar33._0_8_ = uVar68,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar64 ) - SUB164(auVar5 * auVar33, 8)) * lVar63,auVar34._8_8_ = 0,auVar34._0_8_ = uVar68,uVar69 <= SUB164(auVar6 * auVar34, 8) );
      }

   }

   goto LAB_00101fb0;
   while (true) {
      uVar70 = uVar70 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar68;
      lVar65 = SUB168(auVar8 * auVar36, 8);
      uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
      uVar69 = SUB164(auVar8 * auVar36, 8);
      if (( uVar67 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar67 * lVar63,auVar37._8_8_ = 0,auVar37._0_8_ = uVar68,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar9 * auVar37, 8)) * lVar63,auVar38._8_8_ = 0,auVar38._0_8_ = uVar68,SUB164(auVar10 * auVar38, 8) < uVar70) break;
      LAB_00101aba:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x2c0 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
         lVar63 = *(long*)( *(long*)( param_2 + 0x2c0 ) + (ulong)uVar69 * 8 );
         if (( *(long*)( lVar63 + 0x20 ) == 0 ) || ( *(int*)( lVar63 + 0x44 ) == 0 )) goto LAB_00101fb0;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar62 * lVar66;
         auVar39._8_8_ = 0;
         auVar39._0_8_ = uVar68;
         lVar65 = SUB168(auVar11 * auVar39, 8);
         uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         iVar64 = SUB164(auVar11 * auVar39, 8);
         if (uVar67 == 0) goto LAB_00101fb0;
         uVar69 = 0;
         goto LAB_00101ba2;
      }

   }
;
   goto LAB_001022d0;
   LAB_00101c8a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x2c0 ) + lVar66 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
      lVar63 = *(long*)( *(long*)( param_2 + 0x2c0 ) + (ulong)uVar69 * 8 );
      if (( *(long*)( lVar63 + 0x20 ) != 0 ) && ( *(int*)( lVar63 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar19._8_8_ = 0;
         auVar19._0_8_ = (ulong)uVar62 * lVar66;
         auVar47._8_8_ = 0;
         auVar47._0_8_ = uVar68;
         lVar65 = SUB168(auVar19 * auVar47, 8);
         uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         uVar69 = SUB164(auVar19 * auVar47, 8);
         if (uVar67 != 0) {
            uVar70 = 0;
            goto LAB_00101d7a;
         }

      }

      goto LAB_001022d0;
   }

   uVar70 = uVar70 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
   auVar44._8_8_ = 0;
   auVar44._0_8_ = uVar68;
   lVar66 = SUB168(auVar16 * auVar44, 8);
   uVar67 = *(uint*)( *(long*)( param_2 + 0x2c8 ) + lVar66 * 4 );
   uVar69 = SUB164(auVar16 * auVar44, 8);
   if (( uVar67 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar67 * lVar63,auVar45._8_8_ = 0,auVar45._0_8_ = uVar68,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar17 * auVar45, 8)) * lVar63,auVar46._8_8_ = 0,auVar46._0_8_ = uVar68,SUB164(auVar18 * auVar46, 8) < uVar70) goto LAB_001022d0;
   goto LAB_00101c8a;
   LAB_00101d7a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
      if (*(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + (ulong)uVar69 * 8 ) + 0x18 ) == 0) goto LAB_00101fb0;
      if (( *(long*)( param_2 + 0x2c0 ) != 0 ) && ( *(int*)( param_2 + 0x2e4 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x2e0 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x2e0 ) * 8 );
         if (*(long*)in_RCX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar23._8_8_ = 0;
         auVar23._0_8_ = (ulong)uVar62 * lVar63;
         auVar51._8_8_ = 0;
         auVar51._0_8_ = uVar68;
         lVar66 = SUB168(auVar23 * auVar51, 8);
         uVar67 = *(uint*)( *(long*)( param_2 + 0x2c8 ) + lVar66 * 4 );
         uVar69 = SUB164(auVar23 * auVar51, 8);
         if (uVar67 != 0) {
            uVar70 = 0;
            goto LAB_00101e7a;
         }

      }

      goto LAB_001022d0;
   }

   uVar70 = uVar70 + 1;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(uVar69 + 1) * lVar66;
   auVar48._8_8_ = 0;
   auVar48._0_8_ = uVar68;
   lVar65 = SUB168(auVar20 * auVar48, 8);
   uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
   uVar69 = SUB164(auVar20 * auVar48, 8);
   if (( uVar67 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar67 * lVar66,auVar49._8_8_ = 0,auVar49._0_8_ = uVar68,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar21 * auVar49, 8)) * lVar66,auVar50._8_8_ = 0,auVar50._0_8_ = uVar68,SUB164(auVar22 * auVar50, 8) < uVar70) goto LAB_001022d0;
   goto LAB_00101d7a;
   LAB_00101e7a:if (( uVar62 == uVar67 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x2c0 ) + lVar66 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
      lVar63 = *(long*)( *(long*)( param_2 + 0x2c0 ) + (ulong)uVar69 * 8 );
      if (( *(long*)( lVar63 + 0x20 ) != 0 ) && ( *(int*)( lVar63 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar27._8_8_ = 0;
         auVar27._0_8_ = (ulong)uVar62 * lVar66;
         auVar55._8_8_ = 0;
         auVar55._0_8_ = uVar68;
         lVar65 = SUB168(auVar27 * auVar55, 8);
         uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         uVar69 = SUB164(auVar27 * auVar55, 8);
         if (uVar67 != 0) {
            uVar70 = 0;
            goto LAB_00101f6a;
         }

      }

      goto LAB_001022d0;
   }

   uVar70 = uVar70 + 1;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
   auVar52._8_8_ = 0;
   auVar52._0_8_ = uVar68;
   lVar66 = SUB168(auVar24 * auVar52, 8);
   uVar67 = *(uint*)( *(long*)( param_2 + 0x2c8 ) + lVar66 * 4 );
   uVar69 = SUB164(auVar24 * auVar52, 8);
   if (( uVar67 == 0 ) || ( auVar25._8_8_ = 0 ),auVar25._0_8_ = (ulong)uVar67 * lVar63,auVar53._8_8_ = 0,auVar53._0_8_ = uVar68,auVar26._8_8_ = 0,auVar26._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar25 * auVar53, 8)) * lVar63,auVar54._8_8_ = 0,auVar54._0_8_ = uVar68,SUB164(auVar26 * auVar54, 8) < uVar70) goto LAB_001022d0;
   goto LAB_00101e7a;
   while (true) {
      uVar70 = uVar70 + 1;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = ( ulong )(uVar69 + 1) * lVar66;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar68;
      lVar65 = SUB168(auVar28 * auVar56, 8);
      uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
      uVar69 = SUB164(auVar28 * auVar56, 8);
      if (( uVar67 == 0 ) || ( auVar29._8_8_ = 0 ),auVar29._0_8_ = (ulong)uVar67 * lVar66,auVar57._8_8_ = 0,auVar57._0_8_ = uVar68,auVar30._8_8_ = 0,auVar30._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar29 * auVar57, 8)) * lVar66,auVar58._8_8_ = 0,auVar58._0_8_ = uVar68,SUB164(auVar30 * auVar58, 8) < uVar70) break;
      LAB_00101f6a:if (( uVar62 == uVar67 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
         lVar63 = *(long*)( *(long*)( lVar63 + 0x20 ) + (ulong)uVar69 * 8 );
         *(undefined8*)param_1 = 0;
         lVar63 = *(long*)( lVar63 + 0x18 );
         if (lVar63 == 0) goto LAB_001022a7;
         goto LAB_00102129;
      }

   }
;
   LAB_001022d0:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar59 = (code*)invalidInstructionException();
   ( *pcVar59 )();
   while (true) {
      uVar69 = uVar69 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar64 + 1) * lVar66;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar68;
      lVar65 = SUB168(auVar12 * auVar40, 8);
      uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
      iVar64 = SUB164(auVar12 * auVar40, 8);
      if (( uVar67 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar67 * lVar66,auVar41._8_8_ = 0,auVar41._0_8_ = uVar68,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar2 + iVar64 ) - SUB164(auVar13 * auVar41, 8)) * lVar66,auVar42._8_8_ = 0,auVar42._0_8_ = uVar68,SUB164(auVar14 * auVar42, 8) < uVar69) break;
      LAB_00101ba2:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
         if (( *(long*)( param_2 + 0x2c0 ) == 0 ) || ( *(int*)( param_2 + 0x2e4 ) == 0 )) goto LAB_001022d0;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x2e0 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x2e0 ) * 8 );
         if (*(long*)in_RCX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar15._8_8_ = 0;
         auVar15._0_8_ = (ulong)uVar62 * lVar63;
         auVar43._8_8_ = 0;
         auVar43._0_8_ = uVar68;
         lVar66 = SUB168(auVar15 * auVar43, 8);
         uVar67 = *(uint*)( *(long*)( param_2 + 0x2c8 ) + lVar66 * 4 );
         uVar69 = SUB164(auVar15 * auVar43, 8);
         if (uVar67 == 0) goto LAB_001022d0;
         uVar70 = 0;
         goto LAB_00101c8a;
      }

   }
;
   LAB_00101fb0:cVar61 = Theme::has_default_font();
   if (cVar61 == '\0') {
      if (( editor_theme_types._8_8_ != 0 ) && ( 0 < *(long*)( editor_theme_types._8_8_ + -8 ) )) {
         lVar63 = 0;
         do {
            if (*(long*)in_RCX == *(long*)( editor_theme_types._8_8_ + lVar63 * 8 )) {
               StringName::StringName((StringName*)&local_60, in_RCX);
               StringName::StringName((StringName*)&local_68, in_RDX);
               local_58 = "Trying to access a non-existing editor theme font \'%s\' in \'%s\'.";
               local_70 = 0;
               local_50 = 0x3f;
               String::parse_latin1((StrRange*)&local_70);
               vformat<StringName,StringName>(&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
               _err_print_error("get_font", "editor/themes/editor_theme.cpp", 0x4b, &local_58, 0, 1);
               pcVar60 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar60 + -0x10, false);
                  }

               }

               lVar63 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar63 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( ( ( local_68 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_60 != 0 ) ) )) {
                  StringName::unref();
               }

               break;
            }

            lVar63 = lVar63 + 1;
         }
 while ( *(long*)( editor_theme_types._8_8_ + -8 ) != lVar63 );
      }

      ThemeDB::get_singleton();
      ThemeDB::get_fallback_font();
   }
 else {
      if (( editor_theme_types._8_8_ != 0 ) && ( 0 < *(long*)( editor_theme_types._8_8_ + -8 ) )) {
         lVar63 = 0;
         do {
            if (*(long*)in_RCX == *(long*)( editor_theme_types._8_8_ + lVar63 * 8 )) {
               StringName::StringName((StringName*)&local_60, in_RCX);
               StringName::StringName((StringName*)&local_68, in_RDX);
               local_58 = "Trying to access a non-existing editor theme font \'%s\' in \'%s\'.";
               local_70 = 0;
               local_50 = 0x3f;
               String::parse_latin1((StrRange*)&local_70);
               vformat<StringName,StringName>(&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
               _err_print_error("get_font", "editor/themes/editor_theme.cpp", 0x46, &local_58, 0, 1);
               pcVar60 = local_58;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar1 = (long*)( local_58 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar60 + -0x10, false);
                  }

               }

               lVar63 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar1 = (long*)( local_70 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar63 + -0x10 ), false);
                  }

               }

               if (( ( StringName::configured != '\0' ) && ( ( local_68 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_60 != 0 )) {
                  StringName::unref();
               }

               break;
            }

            lVar63 = lVar63 + 1;
         }
 while ( *(long*)( editor_theme_types._8_8_ + -8 ) != lVar63 );
      }

      *(undefined8*)param_1 = 0;
      lVar63 = *(long*)( param_2 + 0x248 );
      if (lVar63 != 0) {
         LAB_00102129:*(long*)param_1 = lVar63;
         cVar61 = RefCounted::reference();
         if (cVar61 == '\0') {
            *(undefined8*)param_1 = 0;
         }

      }

   }

   LAB_001022a7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorTheme::get_icon(StringName const&, StringName const&) const */StringName *EditorTheme::get_icon(StringName *param_1, StringName *param_2) {
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
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   code *pcVar59;
   char *pcVar60;
   char cVar61;
   uint uVar62;
   long lVar63;
   StringName *in_RCX;
   int iVar64;
   StringName *in_RDX;
   long lVar65;
   long lVar66;
   uint uVar67;
   ulong uVar68;
   uint uVar69;
   uint uVar70;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_2 + 0x260 ) != 0 ) && ( *(int*)( param_2 + 0x284 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x280 ) * 4 );
      lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x280 ) * 8 );
      if (*(long*)in_RCX == 0) {
         uVar62 = StringName::get_empty_hash();
      }
 else {
         uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
      }

      uVar68 = CONCAT44(0, uVar2);
      lVar66 = *(long*)( param_2 + 0x268 );
      if (uVar62 == 0) {
         uVar62 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar62 * lVar63;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar68;
      lVar65 = SUB168(auVar3 * auVar31, 8);
      uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
      iVar64 = SUB164(auVar3 * auVar31, 8);
      if (uVar67 != 0) {
         uVar69 = 0;
         do {
            if (( uVar62 == uVar67 ) && ( lVar65 = *(long*)( *(long*)( *(long*)( param_2 + 0x260 ) + lVar65 * 8 ) + 0x10 ) ),lVar65 == *(long*)in_RCX) {
               if (( *(long*)( param_2 + 0x260 ) == 0 ) || ( *(int*)( param_2 + 0x284 ) == 0 )) goto LAB_00102bd0;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x280 ) * 4 );
               uVar68 = CONCAT44(0, uVar2);
               lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x280 ) * 8 );
               if (lVar65 == 0) {
                  uVar62 = StringName::get_empty_hash();
                  lVar66 = *(long*)( param_2 + 0x268 );
               }
 else {
                  uVar62 = *(uint*)( lVar65 + 0x20 );
               }

               if (uVar62 == 0) {
                  uVar62 = 1;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar62 * lVar63;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = uVar68;
               lVar65 = SUB168(auVar7 * auVar35, 8);
               uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
               uVar69 = SUB164(auVar7 * auVar35, 8);
               if (uVar67 == 0) goto LAB_00102bd0;
               uVar70 = 0;
               goto LAB_0010255a;
            }

            uVar69 = uVar69 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar64 + 1) * lVar63;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar68;
            lVar65 = SUB168(auVar4 * auVar32, 8);
            uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
            iVar64 = SUB164(auVar4 * auVar32, 8);
         }
 while ( ( uVar67 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar67 * lVar63,auVar33._8_8_ = 0,auVar33._0_8_ = uVar68,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar64 ) - SUB164(auVar5 * auVar33, 8)) * lVar63,auVar34._8_8_ = 0,auVar34._0_8_ = uVar68,uVar69 <= SUB164(auVar6 * auVar34, 8) );
      }

   }

   goto LAB_00102a70;
   while (true) {
      uVar70 = uVar70 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar68;
      lVar65 = SUB168(auVar8 * auVar36, 8);
      uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
      uVar69 = SUB164(auVar8 * auVar36, 8);
      if (( uVar67 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar67 * lVar63,auVar37._8_8_ = 0,auVar37._0_8_ = uVar68,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar9 * auVar37, 8)) * lVar63,auVar38._8_8_ = 0,auVar38._0_8_ = uVar68,SUB164(auVar10 * auVar38, 8) < uVar70) break;
      LAB_0010255a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x260 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
         lVar63 = *(long*)( *(long*)( param_2 + 0x260 ) + (ulong)uVar69 * 8 );
         if (( *(long*)( lVar63 + 0x20 ) == 0 ) || ( *(int*)( lVar63 + 0x44 ) == 0 )) goto LAB_00102a70;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar62 * lVar66;
         auVar39._8_8_ = 0;
         auVar39._0_8_ = uVar68;
         lVar65 = SUB168(auVar11 * auVar39, 8);
         uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         iVar64 = SUB164(auVar11 * auVar39, 8);
         if (uVar67 == 0) goto LAB_00102a70;
         uVar69 = 0;
         goto LAB_0010264a;
      }

   }
;
   goto LAB_00102bd0;
   LAB_0010273a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x260 ) + lVar66 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
      lVar63 = *(long*)( *(long*)( param_2 + 0x260 ) + (ulong)uVar69 * 8 );
      if (( *(long*)( lVar63 + 0x20 ) != 0 ) && ( *(int*)( lVar63 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         uVar67 = 1;
         if (uVar62 != 0) {
            uVar67 = uVar62;
         }

         auVar19._8_8_ = 0;
         auVar19._0_8_ = (ulong)uVar67 * lVar66;
         auVar47._8_8_ = 0;
         auVar47._0_8_ = uVar68;
         lVar65 = SUB168(auVar19 * auVar47, 8);
         uVar62 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         uVar69 = SUB164(auVar19 * auVar47, 8);
         if (uVar62 != 0) {
            uVar70 = 0;
            goto LAB_0010282a;
         }

      }

      goto LAB_00102bd0;
   }

   uVar70 = uVar70 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
   auVar44._8_8_ = 0;
   auVar44._0_8_ = uVar68;
   lVar66 = SUB168(auVar16 * auVar44, 8);
   uVar67 = *(uint*)( *(long*)( param_2 + 0x268 ) + lVar66 * 4 );
   uVar69 = SUB164(auVar16 * auVar44, 8);
   if (( uVar67 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar67 * lVar63,auVar45._8_8_ = 0,auVar45._0_8_ = uVar68,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar17 * auVar45, 8)) * lVar63,auVar46._8_8_ = 0,auVar46._0_8_ = uVar68,SUB164(auVar18 * auVar46, 8) < uVar70) goto LAB_00102bd0;
   goto LAB_0010273a;
   LAB_0010282a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
      if (*(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + (ulong)uVar69 * 8 ) + 0x18 ) == 0) goto LAB_00102a70;
      if (( *(long*)( param_2 + 0x260 ) != 0 ) && ( *(int*)( param_2 + 0x284 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x280 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x280 ) * 8 );
         if (*(long*)in_RCX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
         }

         uVar67 = 1;
         if (uVar62 != 0) {
            uVar67 = uVar62;
         }

         auVar23._8_8_ = 0;
         auVar23._0_8_ = (ulong)uVar67 * lVar63;
         auVar51._8_8_ = 0;
         auVar51._0_8_ = uVar68;
         lVar66 = SUB168(auVar23 * auVar51, 8);
         uVar62 = *(uint*)( *(long*)( param_2 + 0x268 ) + lVar66 * 4 );
         uVar69 = SUB164(auVar23 * auVar51, 8);
         if (uVar62 != 0) {
            uVar70 = 0;
            goto LAB_0010292a;
         }

      }

      goto LAB_00102bd0;
   }

   uVar70 = uVar70 + 1;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(uVar69 + 1) * lVar66;
   auVar48._8_8_ = 0;
   auVar48._0_8_ = uVar68;
   lVar65 = SUB168(auVar20 * auVar48, 8);
   uVar62 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
   uVar69 = SUB164(auVar20 * auVar48, 8);
   if (( uVar62 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar62 * lVar66,auVar49._8_8_ = 0,auVar49._0_8_ = uVar68,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar21 * auVar49, 8)) * lVar66,auVar50._8_8_ = 0,auVar50._0_8_ = uVar68,SUB164(auVar22 * auVar50, 8) < uVar70) goto LAB_00102bd0;
   goto LAB_0010282a;
   LAB_0010292a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x260 ) + lVar66 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
      lVar63 = *(long*)( *(long*)( param_2 + 0x260 ) + (ulong)uVar69 * 8 );
      if (( *(long*)( lVar63 + 0x20 ) != 0 ) && ( *(int*)( lVar63 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar27._8_8_ = 0;
         auVar27._0_8_ = (ulong)uVar62 * lVar66;
         auVar55._8_8_ = 0;
         auVar55._0_8_ = uVar68;
         lVar65 = SUB168(auVar27 * auVar55, 8);
         uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         uVar69 = SUB164(auVar27 * auVar55, 8);
         if (uVar67 != 0) {
            uVar70 = 0;
            goto LAB_00102a1a;
         }

      }

      goto LAB_00102bd0;
   }

   uVar70 = uVar70 + 1;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
   auVar52._8_8_ = 0;
   auVar52._0_8_ = uVar68;
   lVar66 = SUB168(auVar24 * auVar52, 8);
   uVar62 = *(uint*)( *(long*)( param_2 + 0x268 ) + lVar66 * 4 );
   uVar69 = SUB164(auVar24 * auVar52, 8);
   if (( uVar62 == 0 ) || ( auVar25._8_8_ = 0 ),auVar25._0_8_ = (ulong)uVar62 * lVar63,auVar53._8_8_ = 0,auVar53._0_8_ = uVar68,auVar26._8_8_ = 0,auVar26._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar25 * auVar53, 8)) * lVar63,auVar54._8_8_ = 0,auVar54._0_8_ = uVar68,SUB164(auVar26 * auVar54, 8) < uVar70) goto LAB_00102bd0;
   goto LAB_0010292a;
   while (true) {
      uVar69 = uVar69 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar64 + 1) * lVar66;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar68;
      lVar65 = SUB168(auVar12 * auVar40, 8);
      uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
      iVar64 = SUB164(auVar12 * auVar40, 8);
      if (( uVar67 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar67 * lVar66,auVar41._8_8_ = 0,auVar41._0_8_ = uVar68,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar2 + iVar64 ) - SUB164(auVar13 * auVar41, 8)) * lVar66,auVar42._8_8_ = 0,auVar42._0_8_ = uVar68,SUB164(auVar14 * auVar42, 8) < uVar69) break;
      LAB_0010264a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
         if (( *(long*)( param_2 + 0x260 ) == 0 ) || ( *(int*)( param_2 + 0x284 ) == 0 )) goto LAB_00102bd0;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x280 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x280 ) * 8 );
         if (*(long*)in_RCX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar15._8_8_ = 0;
         auVar15._0_8_ = (ulong)uVar62 * lVar63;
         auVar43._8_8_ = 0;
         auVar43._0_8_ = uVar68;
         lVar66 = SUB168(auVar15 * auVar43, 8);
         uVar67 = *(uint*)( *(long*)( param_2 + 0x268 ) + lVar66 * 4 );
         uVar69 = SUB164(auVar15 * auVar43, 8);
         if (uVar67 == 0) goto LAB_00102bd0;
         uVar70 = 0;
         goto LAB_0010273a;
      }

   }
;
   LAB_00102a70:if (( editor_theme_types._8_8_ != 0 ) && ( 0 < *(long*)( editor_theme_types._8_8_ + -8 ) )) {
      lVar63 = 0;
      do {
         if (*(long*)in_RCX == *(long*)( editor_theme_types._8_8_ + lVar63 * 8 )) {
            StringName::StringName((StringName*)&local_60, in_RCX);
            StringName::StringName((StringName*)&local_68, in_RDX);
            local_58 = "Trying to access a non-existing editor theme icon \'%s\' in \'%s\'.";
            local_70 = 0;
            local_50 = 0x3f;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName,StringName>(&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
            _err_print_error("get_icon", "editor/themes/editor_theme.cpp", 0x68, &local_58, 0, 1);
            pcVar60 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar60 + -0x10, false);
               }

            }

            lVar63 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar63 + -0x10 ), false);
               }

            }

            if (StringName::configured == '\0') break;
            if (local_68 != 0) {
               StringName::unref();
               if (StringName::configured == '\0') break;
            }

            if (local_60 != 0) {
               StringName::unref();
            }

            break;
         }

         lVar63 = lVar63 + 1;
      }
 while ( *(long*)( editor_theme_types._8_8_ + -8 ) != lVar63 );
   }

   ThemeDB::get_singleton();
   ThemeDB::get_fallback_icon();
   LAB_00102ba5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   while (true) {
      uVar70 = uVar70 + 1;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = ( ulong )(uVar69 + 1) * lVar66;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar68;
      lVar65 = SUB168(auVar28 * auVar56, 8);
      uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
      uVar69 = SUB164(auVar28 * auVar56, 8);
      if (( uVar67 == 0 ) || ( auVar29._8_8_ = 0 ),auVar29._0_8_ = (ulong)uVar67 * lVar66,auVar57._8_8_ = 0,auVar57._0_8_ = uVar68,auVar30._8_8_ = 0,auVar30._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar29 * auVar57, 8)) * lVar66,auVar58._8_8_ = 0,auVar58._0_8_ = uVar68,SUB164(auVar30 * auVar58, 8) < uVar70) break;
      LAB_00102a1a:if (uVar62 == uVar67) {
         if (*(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX) {
            lVar63 = *(long*)( *(long*)( lVar63 + 0x20 ) + (ulong)uVar69 * 8 );
            *(undefined8*)param_1 = 0;
            lVar63 = *(long*)( lVar63 + 0x18 );
            if (lVar63 != 0) {
               *(long*)param_1 = lVar63;
               cVar61 = RefCounted::reference();
               if (cVar61 == '\0') {
                  *(undefined8*)param_1 = 0;
               }

            }

            goto LAB_00102ba5;
         }

      }

   }
;
   LAB_00102bd0:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar59 = (code*)invalidInstructionException();
   ( *pcVar59 )();
}
/* EditorTheme::get_stylebox(StringName const&, StringName const&) const */StringName *EditorTheme::get_stylebox(StringName *param_1, StringName *param_2) {
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
   undefined1 auVar44[16];
   undefined1 auVar45[16];
   undefined1 auVar46[16];
   undefined1 auVar47[16];
   undefined1 auVar48[16];
   undefined1 auVar49[16];
   undefined1 auVar50[16];
   undefined1 auVar51[16];
   undefined1 auVar52[16];
   undefined1 auVar53[16];
   undefined1 auVar54[16];
   undefined1 auVar55[16];
   undefined1 auVar56[16];
   undefined1 auVar57[16];
   undefined1 auVar58[16];
   code *pcVar59;
   char *pcVar60;
   char cVar61;
   uint uVar62;
   long lVar63;
   StringName *in_RCX;
   int iVar64;
   StringName *in_RDX;
   long lVar65;
   long lVar66;
   uint uVar67;
   ulong uVar68;
   uint uVar69;
   uint uVar70;
   long in_FS_OFFSET;
   long local_70;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_2 + 0x290 ) != 0 ) && ( *(int*)( param_2 + 0x2b4 ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x2b0 ) * 4 );
      lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x2b0 ) * 8 );
      if (*(long*)in_RCX == 0) {
         uVar62 = StringName::get_empty_hash();
      }
 else {
         uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
      }

      uVar68 = CONCAT44(0, uVar2);
      lVar66 = *(long*)( param_2 + 0x298 );
      if (uVar62 == 0) {
         uVar62 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar62 * lVar63;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar68;
      lVar65 = SUB168(auVar3 * auVar31, 8);
      uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
      iVar64 = SUB164(auVar3 * auVar31, 8);
      if (uVar67 != 0) {
         uVar69 = 0;
         do {
            if (( uVar62 == uVar67 ) && ( lVar65 = *(long*)( *(long*)( *(long*)( param_2 + 0x290 ) + lVar65 * 8 ) + 0x10 ) ),lVar65 == *(long*)in_RCX) {
               if (( *(long*)( param_2 + 0x290 ) == 0 ) || ( *(int*)( param_2 + 0x2b4 ) == 0 )) goto LAB_00103510;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x2b0 ) * 4 );
               uVar68 = CONCAT44(0, uVar2);
               lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x2b0 ) * 8 );
               if (lVar65 == 0) {
                  uVar62 = StringName::get_empty_hash();
                  lVar66 = *(long*)( param_2 + 0x298 );
               }
 else {
                  uVar62 = *(uint*)( lVar65 + 0x20 );
               }

               if (uVar62 == 0) {
                  uVar62 = 1;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar62 * lVar63;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = uVar68;
               lVar65 = SUB168(auVar7 * auVar35, 8);
               uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
               uVar69 = SUB164(auVar7 * auVar35, 8);
               if (uVar67 == 0) goto LAB_00103510;
               uVar70 = 0;
               goto LAB_00102e9a;
            }

            uVar69 = uVar69 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar64 + 1) * lVar63;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar68;
            lVar65 = SUB168(auVar4 * auVar32, 8);
            uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
            iVar64 = SUB164(auVar4 * auVar32, 8);
         }
 while ( ( uVar67 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar67 * lVar63,auVar33._8_8_ = 0,auVar33._0_8_ = uVar68,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar64 ) - SUB164(auVar5 * auVar33, 8)) * lVar63,auVar34._8_8_ = 0,auVar34._0_8_ = uVar68,uVar69 <= SUB164(auVar6 * auVar34, 8) );
      }

   }

   goto LAB_001033b0;
   while (true) {
      uVar70 = uVar70 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
      auVar36._8_8_ = 0;
      auVar36._0_8_ = uVar68;
      lVar65 = SUB168(auVar8 * auVar36, 8);
      uVar67 = *(uint*)( lVar66 + lVar65 * 4 );
      uVar69 = SUB164(auVar8 * auVar36, 8);
      if (( uVar67 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar67 * lVar63,auVar37._8_8_ = 0,auVar37._0_8_ = uVar68,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar9 * auVar37, 8)) * lVar63,auVar38._8_8_ = 0,auVar38._0_8_ = uVar68,SUB164(auVar10 * auVar38, 8) < uVar70) break;
      LAB_00102e9a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x290 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
         lVar63 = *(long*)( *(long*)( param_2 + 0x290 ) + (ulong)uVar69 * 8 );
         if (( *(long*)( lVar63 + 0x20 ) == 0 ) || ( *(int*)( lVar63 + 0x44 ) == 0 )) goto LAB_001033b0;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar62 * lVar66;
         auVar39._8_8_ = 0;
         auVar39._0_8_ = uVar68;
         lVar65 = SUB168(auVar11 * auVar39, 8);
         uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         iVar64 = SUB164(auVar11 * auVar39, 8);
         if (uVar67 == 0) goto LAB_001033b0;
         uVar69 = 0;
         goto LAB_00102f8a;
      }

   }
;
   goto LAB_00103510;
   LAB_0010307a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x290 ) + lVar66 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
      lVar63 = *(long*)( *(long*)( param_2 + 0x290 ) + (ulong)uVar69 * 8 );
      if (( *(long*)( lVar63 + 0x20 ) != 0 ) && ( *(int*)( lVar63 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         uVar67 = 1;
         if (uVar62 != 0) {
            uVar67 = uVar62;
         }

         auVar19._8_8_ = 0;
         auVar19._0_8_ = (ulong)uVar67 * lVar66;
         auVar47._8_8_ = 0;
         auVar47._0_8_ = uVar68;
         lVar65 = SUB168(auVar19 * auVar47, 8);
         uVar62 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         uVar69 = SUB164(auVar19 * auVar47, 8);
         if (uVar62 != 0) {
            uVar70 = 0;
            goto LAB_0010316a;
         }

      }

      goto LAB_00103510;
   }

   uVar70 = uVar70 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
   auVar44._8_8_ = 0;
   auVar44._0_8_ = uVar68;
   lVar66 = SUB168(auVar16 * auVar44, 8);
   uVar67 = *(uint*)( *(long*)( param_2 + 0x298 ) + lVar66 * 4 );
   uVar69 = SUB164(auVar16 * auVar44, 8);
   if (( uVar67 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar67 * lVar63,auVar45._8_8_ = 0,auVar45._0_8_ = uVar68,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar17 * auVar45, 8)) * lVar63,auVar46._8_8_ = 0,auVar46._0_8_ = uVar68,SUB164(auVar18 * auVar46, 8) < uVar70) goto LAB_00103510;
   goto LAB_0010307a;
   LAB_0010316a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
      if (*(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + (ulong)uVar69 * 8 ) + 0x18 ) == 0) goto LAB_001033b0;
      if (( *(long*)( param_2 + 0x290 ) != 0 ) && ( *(int*)( param_2 + 0x2b4 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x2b0 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x2b0 ) * 8 );
         if (*(long*)in_RCX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
         }

         uVar67 = 1;
         if (uVar62 != 0) {
            uVar67 = uVar62;
         }

         auVar23._8_8_ = 0;
         auVar23._0_8_ = (ulong)uVar67 * lVar63;
         auVar51._8_8_ = 0;
         auVar51._0_8_ = uVar68;
         lVar66 = SUB168(auVar23 * auVar51, 8);
         uVar62 = *(uint*)( *(long*)( param_2 + 0x298 ) + lVar66 * 4 );
         uVar69 = SUB164(auVar23 * auVar51, 8);
         if (uVar62 != 0) {
            uVar70 = 0;
            goto LAB_0010326a;
         }

      }

      goto LAB_00103510;
   }

   uVar70 = uVar70 + 1;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(uVar69 + 1) * lVar66;
   auVar48._8_8_ = 0;
   auVar48._0_8_ = uVar68;
   lVar65 = SUB168(auVar20 * auVar48, 8);
   uVar62 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
   uVar69 = SUB164(auVar20 * auVar48, 8);
   if (( uVar62 == 0 ) || ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar62 * lVar66,auVar49._8_8_ = 0,auVar49._0_8_ = uVar68,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar21 * auVar49, 8)) * lVar66,auVar50._8_8_ = 0,auVar50._0_8_ = uVar68,SUB164(auVar22 * auVar50, 8) < uVar70) goto LAB_00103510;
   goto LAB_0010316a;
   LAB_0010326a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 0x290 ) + lVar66 * 8 ) + 0x10 ) == *(long*)in_RCX )) {
      lVar63 = *(long*)( *(long*)( param_2 + 0x290 ) + (ulong)uVar69 * 8 );
      if (( *(long*)( lVar63 + 0x20 ) != 0 ) && ( *(int*)( lVar63 + 0x44 ) != 0 )) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar66 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar63 + 0x40 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar27._8_8_ = 0;
         auVar27._0_8_ = (ulong)uVar62 * lVar66;
         auVar55._8_8_ = 0;
         auVar55._0_8_ = uVar68;
         lVar65 = SUB168(auVar27 * auVar55, 8);
         uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
         uVar69 = SUB164(auVar27 * auVar55, 8);
         if (uVar67 != 0) {
            uVar70 = 0;
            goto LAB_0010335a;
         }

      }

      goto LAB_00103510;
   }

   uVar70 = uVar70 + 1;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = ( ulong )(uVar69 + 1) * lVar63;
   auVar52._8_8_ = 0;
   auVar52._0_8_ = uVar68;
   lVar66 = SUB168(auVar24 * auVar52, 8);
   uVar62 = *(uint*)( *(long*)( param_2 + 0x298 ) + lVar66 * 4 );
   uVar69 = SUB164(auVar24 * auVar52, 8);
   if (( uVar62 == 0 ) || ( auVar25._8_8_ = 0 ),auVar25._0_8_ = (ulong)uVar62 * lVar63,auVar53._8_8_ = 0,auVar53._0_8_ = uVar68,auVar26._8_8_ = 0,auVar26._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar25 * auVar53, 8)) * lVar63,auVar54._8_8_ = 0,auVar54._0_8_ = uVar68,SUB164(auVar26 * auVar54, 8) < uVar70) goto LAB_00103510;
   goto LAB_0010326a;
   while (true) {
      uVar69 = uVar69 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar64 + 1) * lVar66;
      auVar40._8_8_ = 0;
      auVar40._0_8_ = uVar68;
      lVar65 = SUB168(auVar12 * auVar40, 8);
      uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
      iVar64 = SUB164(auVar12 * auVar40, 8);
      if (( uVar67 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar67 * lVar66,auVar41._8_8_ = 0,auVar41._0_8_ = uVar68,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar2 + iVar64 ) - SUB164(auVar13 * auVar41, 8)) * lVar66,auVar42._8_8_ = 0,auVar42._0_8_ = uVar68,SUB164(auVar14 * auVar42, 8) < uVar69) break;
      LAB_00102f8a:if (( uVar67 == uVar62 ) && ( *(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX )) {
         if (( *(long*)( param_2 + 0x290 ) == 0 ) || ( *(int*)( param_2 + 0x2b4 ) == 0 )) goto LAB_00103510;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x2b0 ) * 4 );
         uVar68 = CONCAT44(0, uVar2);
         lVar63 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x2b0 ) * 8 );
         if (*(long*)in_RCX == 0) {
            uVar62 = StringName::get_empty_hash();
         }
 else {
            uVar62 = *(uint*)( *(long*)in_RCX + 0x20 );
         }

         if (uVar62 == 0) {
            uVar62 = 1;
         }

         auVar15._8_8_ = 0;
         auVar15._0_8_ = (ulong)uVar62 * lVar63;
         auVar43._8_8_ = 0;
         auVar43._0_8_ = uVar68;
         lVar66 = SUB168(auVar15 * auVar43, 8);
         uVar67 = *(uint*)( *(long*)( param_2 + 0x298 ) + lVar66 * 4 );
         uVar69 = SUB164(auVar15 * auVar43, 8);
         if (uVar67 == 0) goto LAB_00103510;
         uVar70 = 0;
         goto LAB_0010307a;
      }

   }
;
   LAB_001033b0:if (( editor_theme_types._8_8_ != 0 ) && ( 0 < *(long*)( editor_theme_types._8_8_ + -8 ) )) {
      lVar63 = 0;
      do {
         if (*(long*)in_RCX == *(long*)( editor_theme_types._8_8_ + lVar63 * 8 )) {
            StringName::StringName((StringName*)&local_60, in_RCX);
            StringName::StringName((StringName*)&local_68, in_RDX);
            local_58 = "Trying to access a non-existing editor theme stylebox \'%s\' in \'%s\'.";
            local_70 = 0;
            local_50 = 0x43;
            String::parse_latin1((StrRange*)&local_70);
            vformat<StringName,StringName>(&local_58, (StrRange*)&local_70, (StringName*)&local_68, (StringName*)&local_60);
            _err_print_error("get_stylebox", "editor/themes/editor_theme.cpp", 0x74, &local_58, 0, 1);
            pcVar60 = local_58;
            if (local_58 != (char*)0x0) {
               LOCK();
               plVar1 = (long*)( local_58 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_58 = (char*)0x0;
                  Memory::free_static(pcVar60 + -0x10, false);
               }

            }

            lVar63 = local_70;
            if (local_70 != 0) {
               LOCK();
               plVar1 = (long*)( local_70 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_70 = 0;
                  Memory::free_static((void*)( lVar63 + -0x10 ), false);
               }

            }

            if (StringName::configured == '\0') break;
            if (local_68 != 0) {
               StringName::unref();
               if (StringName::configured == '\0') break;
            }

            if (local_60 != 0) {
               StringName::unref();
            }

            break;
         }

         lVar63 = lVar63 + 1;
      }
 while ( *(long*)( editor_theme_types._8_8_ + -8 ) != lVar63 );
   }

   ThemeDB::get_singleton();
   ThemeDB::get_fallback_stylebox();
   LAB_001034e5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   while (true) {
      uVar70 = uVar70 + 1;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = ( ulong )(uVar69 + 1) * lVar66;
      auVar56._8_8_ = 0;
      auVar56._0_8_ = uVar68;
      lVar65 = SUB168(auVar28 * auVar56, 8);
      uVar67 = *(uint*)( *(long*)( lVar63 + 0x28 ) + lVar65 * 4 );
      uVar69 = SUB164(auVar28 * auVar56, 8);
      if (( uVar67 == 0 ) || ( auVar29._8_8_ = 0 ),auVar29._0_8_ = (ulong)uVar67 * lVar66,auVar57._8_8_ = 0,auVar57._0_8_ = uVar68,auVar30._8_8_ = 0,auVar30._0_8_ = ( ulong )(( uVar2 + uVar69 ) - SUB164(auVar29 * auVar57, 8)) * lVar66,auVar58._8_8_ = 0,auVar58._0_8_ = uVar68,SUB164(auVar30 * auVar58, 8) < uVar70) break;
      LAB_0010335a:if (uVar62 == uVar67) {
         if (*(long*)( *(long*)( *(long*)( lVar63 + 0x20 ) + lVar65 * 8 ) + 0x10 ) == *(long*)in_RDX) {
            lVar63 = *(long*)( *(long*)( lVar63 + 0x20 ) + (ulong)uVar69 * 8 );
            *(undefined8*)param_1 = 0;
            lVar63 = *(long*)( lVar63 + 0x18 );
            if (lVar63 != 0) {
               *(long*)param_1 = lVar63;
               cVar61 = RefCounted::reference();
               if (cVar61 == '\0') {
                  *(undefined8*)param_1 = 0;
               }

            }

            goto LAB_001034e5;
         }

      }

   }
;
   LAB_00103510:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar59 = (code*)invalidInstructionException();
   ( *pcVar59 )();
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] */void CowData<StringName>::_copy_on_write(CowData<StringName> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   long lVar5;
   ulong uVar6;
   StringName *this_00;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar2 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar2 * 8 != 0) {
      uVar6 = lVar2 * 8 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar5 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar2;
      this_00 = (StringName*)( puVar4 + 2 );
      if (lVar2 != 0) {
         do {
            lVar1 = lVar5 * 8;
            lVar5 = lVar5 + 1;
            StringName::StringName(this_00, (StringName*)( *(long*)this + lVar1 ));
            this_00 = this_00 + 8;
         }
 while ( lVar2 != lVar5 );
      }

      _unref(this);
      *(StringName**)this = (StringName*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* EditorTheme::finalize() */void EditorTheme::finalize(void) {
   if (( editor_theme_types._8_8_ != 0 ) && ( *(long*)( editor_theme_types._8_8_ + -8 ) != 0 )) {
      CowData<StringName>::_unref((CowData<StringName>*)( editor_theme_types + 8 ));
      return;
   }

   return;
}
/* Vector<StringName>::push_back(StringName) [clone .isra.0] */void Vector<StringName>::push_back(Vector<StringName> *this, StringName *param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<StringName>::resize<false>((CowData<StringName>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<StringName>::_copy_on_write((CowData<StringName>*)( this + 8 ));
            StringName::operator =((StringName*)( *(long*)( this + 8 ) + lVar3 * 8 ), param_2);
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* EditorTheme::initialize() */void EditorTheme::initialize(void) {
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, EditorStringNames::singleton);
   Vector<StringName>::push_back((Vector<StringName>*)editor_theme_types, &local_28);
   if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
      StringName::unref();
   }

   for (int i = 0; i < 3; i++) {
      StringName::StringName((StringName*)&local_28, EditorStringNames::singleton + ( 8*i + 8 ));
      Vector<StringName>::push_back((Vector<StringName>*)editor_theme_types, &local_28);
      if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
         StringName::unref();
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* Object::_set(StringName const&, Variant const&) */undefined8 Object::_set(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get(StringName const&, Variant&) const */undefined8 Object::_get(StringName *param_1, Variant *param_2) {
   return 0;
}
/* Object::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void Object::_get_property_list(List *param_1) {
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* WARNING: Unknown calling convention -- yet parameter storage is locked *//* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(ulong param_1) {
   undefined8 in_RSI;
   *(undefined8*)( param_1 + 0x1a0 ) = in_RSI;
   return;
}
/* EditorTheme::is_class_ptr(void*) const */uint EditorTheme::is_class_ptr(EditorTheme *this, void *param_1) {
   return (uint)CONCAT71(0x1069, (undefined4*)param_1 == &Theme::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x1069, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorTheme::_validate_propertyv(PropertyInfo&) const */void EditorTheme::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorTheme::_property_can_revertv(StringName const&) const */undefined8 EditorTheme::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorTheme::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorTheme::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorTheme::_notificationv(int, bool) */void EditorTheme::_notificationv(int param_1, bool param_2) {
   return;
}
/* Vector<StringName>::~Vector() */void Vector<StringName>::~Vector(Vector<StringName> *this) {
   CowData<StringName>::_unref((CowData<StringName>*)( this + 8 ));
   return;
}
/* EditorTheme::~EditorTheme() */void EditorTheme::~EditorTheme(EditorTheme *this) {
   *(undefined***)this = &PTR__initialize_classv_00106720;
   Theme::~Theme((Theme*)this);
   return;
}
/* EditorTheme::~EditorTheme() */void EditorTheme::~EditorTheme(EditorTheme *this) {
   *(undefined***)this = &PTR__initialize_classv_00106720;
   Theme::~Theme((Theme*)this);
   operator_delete(this, 1000);
   return;
}
/* EditorTheme::_getv(StringName const&, Variant&) const */undefined8 EditorTheme::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = Theme::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* EditorTheme::_setv(StringName const&, Variant const&) */undefined8 EditorTheme::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00109008 != Object::_set) {
      uVar1 = Theme::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* EditorTheme::_get_class_namev() const */undefined8 *EditorTheme::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00103bb3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103bb3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorTheme");
         goto LAB_00103c1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorTheme");
   LAB_00103c1e:return &_get_class_namev();
}
/* Theme::get_base_extension() const */Theme * __thiscall Theme::get_base_extension(Theme *this){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)this = 0;
   String::parse_latin1((StrRange*)this);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorTheme::get_class() const */void EditorTheme::get_class(void) {
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
/* EditorTheme::_initialize_classv() */void EditorTheme::_initialize_classv(void) {
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
   if (initialize_class() == '\0') {
      if (Theme::initialize_class() == '\0') {
         if (Resource::initialize_class() == '\0') {
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

               if ((code*)PTR__bind_methods_00109018 != RefCounted::_bind_methods) {
                  RefCounted::_bind_methods();
               }

               RefCounted::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "RefCounted";
            local_50 = 10;
            String::parse_latin1((StrRange*)&local_68);
            StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
            local_58 = "Resource";
            local_70 = 0;
            local_50 = 8;
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

            Resource::_bind_methods();
            Resource::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "Resource";
         local_68 = 0;
         local_50 = 8;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "Theme";
         local_70 = 0;
         local_50 = 5;
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

         if ((code*)PTR__bind_methods_00109010 != Resource::_bind_methods) {
            Theme::_bind_methods();
         }

         Theme::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Theme";
      local_68 = 0;
      local_50 = 5;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "EditorTheme";
      local_70 = 0;
      local_50 = 0xb;
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

      initialize_class()::initialized =
      '\x01';
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      LAB_00104498:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00104498;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x001044b6;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x001044b6:if (lVar2 == 0) {
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
/* Resource::is_class(String const&) const */undefined8 Resource::is_class(Resource *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_0010478f;
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

      LAB_0010478f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00104843;
   }

   cVar6 = String::operator ==(param_1, "Resource");
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
                     if (lVar5 == 0) goto LAB_0010491b;
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

         LAB_0010491b:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00104843;
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
                        if (lVar5 == 0) goto LAB_001049fb;
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

            LAB_001049fb:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

            if (cVar6 != '\0') goto LAB_00104843;
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = String::operator ==(param_1, "Object");
            return uVar7;
         }

         goto LAB_00104aa4;
      }

   }

   LAB_00104843:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00104aa4:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorTheme::is_class(String const&) const */undefined8 EditorTheme::is_class(EditorTheme *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_00104b1f;
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

      LAB_00104b1f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00104bd3;
   }

   cVar6 = String::operator ==(param_1, "EditorTheme");
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
                     if (lVar5 == 0) goto LAB_00104c93;
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

         LAB_00104c93:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00104bd3;
      }

      cVar6 = String::operator ==(param_1, "Theme");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = Resource::is_class((Resource*)this, param_1);
            return uVar7;
         }

         goto LAB_00104d3c;
      }

   }

   LAB_00104bd3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00104d3c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
   local_78 = "Resource";
   local_70 = 8;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Resource";
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
      LAB_00104ec8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00104ec8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00104ee5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00104ee5:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "Resource", false);
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
/* Theme::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Theme::_get_property_listv(Theme *this, List *param_1, bool param_2) {
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
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "Theme";
   local_70 = 5;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "Theme";
   local_98 = 0;
   local_70 = 5;
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
      LAB_00105318:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105318;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00105335;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00105335:if (lVar2 == 0) {
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
   *(long**)( puVar5 + 0x10 ) = plVar1;
   *(undefined8*)( puVar5 + 0xc ) = 0;
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

   StringName::StringName((StringName*)&local_78, "Theme", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if ((code*)PTR__get_property_list_00109020 != Object::_get_property_list) {
      Theme::_get_property_list((List*)this);
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorTheme::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorTheme::_get_property_listv(EditorTheme *this, List *param_1, bool param_2) {
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
      Theme::_get_property_listv((Theme*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "EditorTheme";
   local_70 = 0xb;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorTheme";
   local_98 = 0;
   local_70 = 0xb;
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
      LAB_00105798:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00105798;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x001057b5;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x001057b5:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "EditorTheme", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Theme::_get_property_listv((Theme*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00105c30) *//* WARNING: Removing unreachable block (ram,0x00105d60) *//* WARNING: Removing unreachable block (ram,0x00105ed9) *//* WARNING: Removing unreachable block (ram,0x00105d6c) *//* WARNING: Removing unreachable block (ram,0x00105d76) *//* WARNING: Removing unreachable block (ram,0x00105ebb) *//* WARNING: Removing unreachable block (ram,0x00105d82) *//* WARNING: Removing unreachable block (ram,0x00105d8c) *//* WARNING: Removing unreachable block (ram,0x00105e9d) *//* WARNING: Removing unreachable block (ram,0x00105d98) *//* WARNING: Removing unreachable block (ram,0x00105da2) *//* WARNING: Removing unreachable block (ram,0x00105e7f) *//* WARNING: Removing unreachable block (ram,0x00105dae) *//* WARNING: Removing unreachable block (ram,0x00105db8) *//* WARNING: Removing unreachable block (ram,0x00105e61) *//* WARNING: Removing unreachable block (ram,0x00105dc4) *//* WARNING: Removing unreachable block (ram,0x00105dce) *//* WARNING: Removing unreachable block (ram,0x00105e43) *//* WARNING: Removing unreachable block (ram,0x00105dd6) *//* WARNING: Removing unreachable block (ram,0x00105de0) *//* WARNING: Removing unreachable block (ram,0x00105e28) *//* WARNING: Removing unreachable block (ram,0x00105de8) *//* WARNING: Removing unreachable block (ram,0x00105dfe) *//* WARNING: Removing unreachable block (ram,0x00105e0a) *//* String vformat<StringName, StringName>(String const&, StringName const, StringName const) */undefined8 *vformat<StringName,StringName>(undefined8 *param_1, bool *param_2, StringName *param_3, StringName *param_4) {
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

   }
 while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<StringName>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<StringName>::resize<false>(long) */undefined8 CowData<StringName>::resize<false>(CowData<StringName> *this, long param_1) {
   code *pcVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   long lVar8;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar5 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar5 = lVar4 * 8;
      if (lVar5 != 0) {
         uVar6 = lVar5 - 1U | lVar5 - 1U >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         lVar5 = ( uVar6 | uVar6 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 == 0) {
      LAB_00106650:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar8 = uVar6 + 1;
   if (lVar8 == 0) goto LAB_00106650;
   if (param_1 <= lVar4) {
      lVar4 = *(long*)this;
      uVar6 = param_1;
      while (lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar6) {
            LAB_0010652a:if (lVar8 != lVar5) {
               uVar2 = _realloc(this, lVar8);
               if ((int)uVar2 != 0) {
                  return uVar2;
               }

               lVar4 = *(long*)this;
               if (lVar4 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar4 + -8 ) = param_1;
            return 0;
         }

         while (( StringName::configured == '\0' || ( *(long*)( lVar4 + uVar6 * 8 ) == 0 ) )) {
            uVar6 = uVar6 + 1;
            if (*(ulong*)( lVar4 + -8 ) <= uVar6) goto LAB_0010652a;
         }
;
         StringName::unref();
         uVar6 = uVar6 + 1;
         lVar4 = *(long*)this;
      }
;
      goto LAB_001064f7;
   }

   if (lVar8 == lVar5) {
      LAB_001065cb:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_001064f7:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_001065ab;
   }
 else {
      if (lVar4 != 0) {
         uVar2 = _realloc(this, lVar8);
         if ((int)uVar2 != 0) {
            return uVar2;
         }

         goto LAB_001065cb;
      }

      puVar3 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar3 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar3 + 2;
      *puVar3 = 1;
      puVar3[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_001065ab:puVar7[-1] = param_1;
   return 0;
}
/* EditorTheme::editor_theme_types */void EditorTheme::_GLOBAL__sub_I_editor_theme_types(void) {
   editor_theme_types._8_8_ = 0;
   __cxa_atexit(Vector<StringName>::~Vector, editor_theme_types, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* EditorTheme::~EditorTheme() */void EditorTheme::~EditorTheme(EditorTheme *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Vector<StringName>::~Vector() */void Vector<StringName>::~Vector(Vector<StringName> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


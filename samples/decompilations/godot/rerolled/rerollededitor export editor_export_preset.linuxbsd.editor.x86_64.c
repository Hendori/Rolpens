/* EditorExportPreset::get_customized_files_count() const */undefined4 EditorExportPreset::get_customized_files_count(EditorExportPreset *this) {
   return *(undefined4*)( this + 0x204 );
}
/* EditorExportPreset::is_runnable() const */EditorExportPreset EditorExportPreset::is_runnable(EditorExportPreset *this) {
   return this[0x208];
}
/* EditorExportPreset::are_advanced_options_enabled() const */EditorExportPreset EditorExportPreset::are_advanced_options_enabled(EditorExportPreset *this) {
   return this[0x209];
}
/* EditorExportPreset::is_dedicated_server() const */EditorExportPreset EditorExportPreset::is_dedicated_server(EditorExportPreset *this) {
   return this[0x20a];
}
/* EditorExportPreset::get_export_filter() const */undefined4 EditorExportPreset::get_export_filter(EditorExportPreset *this) {
   return *(undefined4*)( this + 0x188 );
}
/* EditorExportPreset::get_enc_pck() const */EditorExportPreset EditorExportPreset::get_enc_pck(EditorExportPreset *this) {
   return this[0x300];
}
/* EditorExportPreset::get_enc_directory() const */EditorExportPreset EditorExportPreset::get_enc_directory(EditorExportPreset *this) {
   return this[0x301];
}
/* EditorExportPreset::get_script_export_mode() const */undefined4 EditorExportPreset::get_script_export_mode(EditorExportPreset *this) {
   return *(undefined4*)( this + 0x318 );
}
/* EditorExportPreset::get_file_export_mode(String const&, EditorExportPreset::FileExportMode) const
    */undefined4 EditorExportPreset::get_file_export_mode(EditorExportPreset *this, String *param_1, undefined4 param_3) {
   uint uVar1;
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
   uint uVar12;
   uint uVar13;
   uint uVar14;
   long lVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   if (( *(long*)( this + 0x1e0 ) != 0 ) && ( *(int*)( this + 0x204 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x200 ) * 8 );
      uVar12 = String::hash();
      uVar17 = CONCAT44(0, uVar1);
      lVar16 = *(long*)( this + 0x1e8 );
      uVar13 = 1;
      if (uVar12 != 0) {
         uVar13 = uVar12;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar12 = *(uint*)( lVar16 + lVar15 * 4 );
      uVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar12 != 0) {
         uVar18 = 0;
         while (true) {
            if (uVar13 == uVar12) {
               cVar11 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x1e0 ) + lVar15 * 8 ) + 0x10 ), param_1);
               if (cVar11 != '\0') {
                  lVar2 = *(long*)( *(long*)( this + 0x1e0 ) + (ulong)uVar14 * 8 );
                  if (lVar2 == 0) {
                     return param_3;
                  }

                  return *(undefined4*)( lVar2 + 0x18 );
               }

               lVar16 = *(long*)( this + 0x1e8 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar12 = *(uint*)( lVar16 + lVar15 * 4 );
            uVar14 = SUB164(auVar4 * auVar8, 8);
            if (uVar12 == 0) break;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar12 * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar17;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar17;
            if (SUB164(auVar6 * auVar10, 8) < uVar18) {
               return param_3;
            }

         }
;
         return param_3;
      }

   }

   return param_3;
}
/* EditorExportPreset::has_export_file(String const&) */undefined8 EditorExportPreset::has_export_file(EditorExportPreset *this, String *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   undefined8 uVar12;
   uint uVar13;
   int iVar14;
   long lVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   if (( *(long*)( this + 0x1b0 ) != 0 ) && ( *(int*)( this + 0x1d4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1d0 ) * 8 );
      uVar11 = String::hash();
      lVar16 = *(long*)( this + 0x1c8 );
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( lVar16 + lVar15 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         do {
            if (uVar13 == uVar11) {
               uVar12 = String::operator ==((String*)( *(long*)( this + 0x1b0 ) + ( ulong ) * (uint*)( *(long*)( this + 0x1b8 ) + lVar15 * 4 ) * 8 ), param_1);
               if ((char)uVar12 != '\0') {
                  return uVar12;
               }

               lVar16 = *(long*)( this + 0x1c8 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( lVar16 + lVar15 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* EditorExportPreset::get_customized_files() const */void EditorExportPreset::get_customized_files(void) {
   long *plVar1;
   uint uVar2;
   undefined8 *puVar3;
   long lVar4;
   Variant *pVVar5;
   long in_RSI;
   Dictionary *in_RDI;
   long in_FS_OFFSET;
   long local_90;
   char *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(in_RDI);
   puVar3 = *(undefined8**)( in_RSI + 0x1f0 );
   do {
      if (puVar3 == (undefined8*)0x0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      local_90 = 0;
      uVar2 = *(uint*)( puVar3 + 3 );
      if (uVar2 == 2) {
         local_88 = "keep";
         local_80 = 4;
         String::parse_latin1((StrRange*)&local_90);
         LAB_0010039f:Variant::Variant((Variant*)local_58, (String*)&local_90);
         Variant::Variant((Variant*)local_78, (String*)( puVar3 + 2 ));
         pVVar5 = (Variant*)Dictionary::operator []((Variant*)in_RDI);
         if (pVVar5 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar5 = 0;
            *(int*)pVVar5 = local_58[0];
            local_58[0] = 0;
            *(undefined8*)( pVVar5 + 8 ) = local_50;
            *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         lVar4 = local_90;
         if (local_90 != 0) {
            LOCK();
            plVar1 = (long*)( local_90 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_90 = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

      }
 else {
         if (2 < uVar2) {
            if (uVar2 == 3) {
               local_80 = 6;
               local_88 = "remove";
               String::parse_latin1((StrRange*)&local_90);
            }

            goto LAB_0010039f;
         }

         if (uVar2 != 0) {
            local_80 = 5;
            local_88 = "strip";
            String::parse_latin1((StrRange*)&local_90);
            goto LAB_0010039f;
         }

      }

      puVar3 = (undefined8*)*puVar3;
   }
 while ( true );
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
/* EditorExportPreset::get_custom_features() const */void EditorExportPreset::get_custom_features(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x2e8 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x2e8 ));
   }

   return;
}
/* EditorExportPreset::get_script_encryption_key() const */void EditorExportPreset::get_script_encryption_key(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x310 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x310 ));
   }

   return;
}
/* EditorExportPreset::get_exclude_filter() const */void EditorExportPreset::get_exclude_filter(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x198 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x198 ));
   }

   return;
}
/* EditorExportPreset::get_name() const */void EditorExportPreset::get_name(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x2e0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x2e0 ));
   }

   return;
}
/* EditorExportPreset::get_include_filter() const */void EditorExportPreset::get_include_filter(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 400 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 400 ));
   }

   return;
}
/* EditorExportPreset::get_export_path() const */void EditorExportPreset::get_export_path(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x1a0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1a0 ));
   }

   return;
}
/* EditorExportPreset::get_enc_in_filter() const */void EditorExportPreset::get_enc_in_filter(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x2f0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x2f0 ));
   }

   return;
}
/* EditorExportPreset::get_enc_ex_filter() const */void EditorExportPreset::get_enc_ex_filter(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x2f8 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x2f8 ));
   }

   return;
}
/* EditorExportPreset::_get(StringName const&, Variant&) const */undefined8 EditorExportPreset::_get(EditorExportPreset *this, StringName *param_1, Variant *param_2) {
   uint uVar1;
   long lVar2;
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
   code *pcVar35;
   uint uVar36;
   long lVar37;
   int iVar38;
   long lVar39;
   uint uVar40;
   ulong uVar41;
   uint uVar42;
   uint uVar43;
   long lVar44;
   if (( *(long*)( this + 0x288 ) != 0 ) && ( *(int*)( this + 0x2ac ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2a8 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x2a8 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar36 = StringName::get_empty_hash();
      }
 else {
         uVar36 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar41 = CONCAT44(0, uVar1);
      lVar44 = *(long*)( this + 0x290 );
      if (uVar36 == 0) {
         uVar36 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar36 * lVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar41;
      lVar39 = SUB168(auVar3 * auVar19, 8);
      uVar40 = *(uint*)( lVar44 + lVar39 * 4 );
      iVar38 = SUB164(auVar3 * auVar19, 8);
      if (uVar40 != 0) {
         uVar42 = 0;
         do {
            if (( uVar36 == uVar40 ) && ( lVar39 = *(long*)( *(long*)( *(long*)( this + 0x288 ) + lVar39 * 8 ) + 0x10 ) ),lVar39 == *(long*)param_1) {
               if (( *(long*)( this + 0x288 ) == 0 ) || ( *(int*)( this + 0x2ac ) == 0 )) goto LAB_00100b28;
               uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2a8 ) * 4 );
               uVar41 = CONCAT44(0, uVar1);
               lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x2a8 ) * 8 );
               if (lVar39 == 0) {
                  uVar36 = StringName::get_empty_hash();
                  lVar44 = *(long*)( this + 0x290 );
               }
 else {
                  uVar36 = *(uint*)( lVar39 + 0x20 );
               }

               if (uVar36 == 0) {
                  uVar36 = 1;
               }

               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar36 * lVar2;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar41;
               lVar39 = SUB168(auVar7 * auVar23, 8);
               uVar40 = *(uint*)( lVar44 + lVar39 * 4 );
               uVar42 = SUB164(auVar7 * auVar23, 8);
               if (uVar40 == 0) goto LAB_00100b28;
               uVar43 = 0;
               goto LAB_00100902;
            }

            uVar42 = uVar42 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar38 + 1) * lVar2;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar41;
            lVar39 = SUB168(auVar4 * auVar20, 8);
            uVar40 = *(uint*)( lVar44 + lVar39 * 4 );
            iVar38 = SUB164(auVar4 * auVar20, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar40 * lVar2,auVar21._8_8_ = 0,auVar21._0_8_ = uVar41,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar38 ) - SUB164(auVar5 * auVar21, 8)) * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar41,uVar42 <= SUB164(auVar6 * auVar22, 8) );
      }

   }

   if (( *(long*)( this + 600 ) != 0 ) && ( *(int*)( this + 0x27c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x278 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x278 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar36 = StringName::get_empty_hash();
      }
 else {
         uVar36 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar41 = CONCAT44(0, uVar1);
      lVar44 = *(long*)( this + 0x260 );
      if (uVar36 == 0) {
         uVar36 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar2;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar41;
      lVar39 = SUB168(auVar11 * auVar27, 8);
      uVar40 = *(uint*)( lVar44 + lVar39 * 4 );
      iVar38 = SUB164(auVar11 * auVar27, 8);
      if (uVar40 != 0) {
         uVar42 = 0;
         do {
            if (( uVar36 == uVar40 ) && ( lVar39 = *(long*)( *(long*)( *(long*)( this + 600 ) + lVar39 * 8 ) + 0x10 ) ),lVar39 == *(long*)param_1) {
               if (( *(long*)( this + 600 ) != 0 ) && ( *(int*)( this + 0x27c ) != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x278 ) * 4 );
                  uVar41 = CONCAT44(0, uVar1);
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x278 ) * 8 );
                  if (lVar39 == 0) {
                     uVar36 = StringName::get_empty_hash();
                     lVar44 = *(long*)( this + 0x260 );
                  }
 else {
                     uVar36 = *(uint*)( lVar39 + 0x20 );
                  }

                  if (uVar36 == 0) {
                     uVar36 = 1;
                  }

                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = (ulong)uVar36 * lVar2;
                  auVar31._8_8_ = 0;
                  auVar31._0_8_ = uVar41;
                  lVar39 = SUB168(auVar15 * auVar31, 8);
                  uVar40 = *(uint*)( lVar44 + lVar39 * 4 );
                  uVar42 = SUB164(auVar15 * auVar31, 8);
                  if (uVar40 != 0) {
                     uVar43 = 0;
                     do {
                        if (( uVar36 == uVar40 ) && ( lVar37 = *(long*)( this + 600 ) * (long*)( *(long*)( lVar37 + lVar39 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                           LAB_0010091c:Variant::operator =(param_2, (Variant*)( *(long*)( lVar37 + (ulong)uVar42 * 8 ) + 0x18 ));
                           return 1;
                        }

                        uVar43 = uVar43 + 1;
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = ( ulong )(uVar42 + 1) * lVar2;
                        auVar32._8_8_ = 0;
                        auVar32._0_8_ = uVar41;
                        lVar39 = SUB168(auVar16 * auVar32, 8);
                        uVar40 = *(uint*)( lVar44 + lVar39 * 4 );
                        uVar42 = SUB164(auVar16 * auVar32, 8);
                     }
 while ( ( uVar40 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar40 * lVar2,auVar33._8_8_ = 0,auVar33._0_8_ = uVar41,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar1 + uVar42 ) - SUB164(auVar17 * auVar33, 8)) * lVar2,auVar34._8_8_ = 0,auVar34._0_8_ = uVar41,uVar43 <= SUB164(auVar18 * auVar34, 8) );
                  }

               }

               goto LAB_00100b28;
            }

            uVar42 = uVar42 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(iVar38 + 1) * lVar2;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar41;
            lVar39 = SUB168(auVar12 * auVar28, 8);
            uVar40 = *(uint*)( lVar44 + lVar39 * 4 );
            iVar38 = SUB164(auVar12 * auVar28, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar40 * lVar2,auVar29._8_8_ = 0,auVar29._0_8_ = uVar41,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar1 + iVar38 ) - SUB164(auVar13 * auVar29, 8)) * lVar2,auVar30._8_8_ = 0,auVar30._0_8_ = uVar41,uVar42 <= SUB164(auVar14 * auVar30, 8) );
      }

   }

   return 0;
   while (true) {
      uVar43 = uVar43 + 1;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = ( ulong )(uVar42 + 1) * lVar2;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar41;
      lVar39 = SUB168(auVar8 * auVar24, 8);
      uVar40 = *(uint*)( lVar44 + lVar39 * 4 );
      uVar42 = SUB164(auVar8 * auVar24, 8);
      if (( uVar40 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar40 * lVar2,auVar25._8_8_ = 0,auVar25._0_8_ = uVar41,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar42 ) - SUB164(auVar9 * auVar25, 8)) * lVar2,auVar26._8_8_ = 0,auVar26._0_8_ = uVar41,SUB164(auVar10 * auVar26, 8) < uVar43) break;
      LAB_00100902:if (( uVar36 == uVar40 ) && ( lVar37 = *(long*)( this + 0x288 ) * (long*)( *(long*)( lVar37 + lVar39 * 8 ) + 0x10 ) == *(long*)param_1 )) goto LAB_0010091c;
   }
;
   LAB_00100b28:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar35 = (code*)invalidInstructionException();
   ( *pcVar35 )();
}
/* EditorExportPreset::get_platform() const */void EditorExportPreset::get_platform(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0x180 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0x180 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* EditorExportPreset::set_name(String const&) */void EditorExportPreset::set_name(EditorExportPreset *this, String *param_1) {
   if (*(long*)( this + 0x2e0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x2e0 ), (CowData*)param_1);
      EditorExport::save_presets();
      return;
   }

   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_runnable(bool) */void EditorExportPreset::set_runnable(EditorExportPreset *this, bool param_1) {
   this[0x208] = (EditorExportPreset)param_1;
   EditorExport::emit_presets_runnable_changed();
   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_advanced_options_enabled(bool) */void EditorExportPreset::set_advanced_options_enabled(EditorExportPreset *this, bool param_1) {
   if (this[0x209] != (EditorExportPreset)param_1) {
      this[0x209] = (EditorExportPreset)param_1;
      EditorExport::save_presets();
      Object::notify_property_list_changed();
      return;
   }

   return;
}
/* EditorExportPreset::set_dedicated_server(bool) */void EditorExportPreset::set_dedicated_server(EditorExportPreset *this, bool param_1) {
   this[0x20a] = (EditorExportPreset)param_1;
   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_export_filter(EditorExportPreset::ExportFilter) */void EditorExportPreset::set_export_filter(EditorExportPreset *this, undefined4 param_2) {
   *(undefined4*)( this + 0x188 ) = param_2;
   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_include_filter(String const&) */void EditorExportPreset::set_include_filter(EditorExportPreset *this, String *param_1) {
   if (*(long*)( this + 400 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 400 ), (CowData*)param_1);
      EditorExport::save_presets();
      return;
   }

   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_exclude_filter(String const&) */void EditorExportPreset::set_exclude_filter(EditorExportPreset *this, String *param_1) {
   if (*(long*)( this + 0x198 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x198 ), (CowData*)param_1);
      EditorExport::save_presets();
      return;
   }

   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::get_patch(int) */CowData<char32_t> *EditorExportPreset::get_patch(int param_1) {
   CowData *pCVar1;
   long lVar2;
   long lVar3;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   CowData<char32_t> *this;
   long lVar4;
   this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
   lVar3 = (long)in_EDX;
   lVar2 = *(long*)( in_RSI + 0x218 );
   if (in_EDX < 0) {
      if (lVar2 != 0) {
         lVar4 = *(long*)( lVar2 + -8 );
         goto LAB_00100da9;
      }

   }
 else if (lVar2 != 0) {
      lVar4 = *(long*)( lVar2 + -8 );
      if (lVar3 < lVar4) {
         pCVar1 = (CowData*)( lVar2 + lVar3 * 8 );
         *(undefined8*)this = 0;
         if (*(long*)pCVar1 != 0) {
            CowData<char32_t>::_ref(this, pCVar1);
         }

         return this;
      }

      goto LAB_00100da9;
   }

   lVar4 = 0;
   LAB_00100da9:_err_print_index_error("get_patch", "editor/export/editor_export_preset.cpp", 0x199, lVar3, lVar4, "p_index", "patches.size()", "", false, false);
   *(undefined8*)this = 0;
   return this;
}
/* EditorExportPreset::set_custom_features(String const&) */void EditorExportPreset::set_custom_features(EditorExportPreset *this, String *param_1) {
   if (*(long*)( this + 0x2e8 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x2e8 ), (CowData*)param_1);
      EditorExport::save_presets();
      return;
   }

   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_enc_in_filter(String const&) */void EditorExportPreset::set_enc_in_filter(EditorExportPreset *this, String *param_1) {
   if (*(long*)( this + 0x2f0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x2f0 ), (CowData*)param_1);
      EditorExport::save_presets();
      return;
   }

   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_enc_ex_filter(String const&) */void EditorExportPreset::set_enc_ex_filter(EditorExportPreset *this, String *param_1) {
   if (*(long*)( this + 0x2f8 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x2f8 ), (CowData*)param_1);
      EditorExport::save_presets();
      return;
   }

   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_seed(unsigned long) */void EditorExportPreset::set_seed(EditorExportPreset *this, ulong param_1) {
   *(ulong*)( this + 0x308 ) = param_1;
   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::get_seed() const */undefined8 EditorExportPreset::get_seed(EditorExportPreset *this) {
   return *(undefined8*)( this + 0x308 );
}
/* EditorExportPreset::set_enc_pck(bool) */void EditorExportPreset::set_enc_pck(EditorExportPreset *this, bool param_1) {
   this[0x300] = (EditorExportPreset)param_1;
   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_enc_directory(bool) */void EditorExportPreset::set_enc_directory(EditorExportPreset *this, bool param_1) {
   this[0x301] = (EditorExportPreset)param_1;
   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_script_encryption_key(String const&) */void EditorExportPreset::set_script_encryption_key(EditorExportPreset *this, String *param_1) {
   if (*(long*)( this + 0x310 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x310 ), (CowData*)param_1);
      EditorExport::save_presets();
      return;
   }

   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_script_export_mode(int) */void EditorExportPreset::set_script_export_mode(EditorExportPreset *this, int param_1) {
   *(int*)( this + 0x318 ) = param_1;
   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::get_or_env(StringName const&, String const&, bool*) const */StringName *EditorExportPreset::get_or_env(StringName *param_1, String *param_2, bool *param_3) {
   long lVar1;
   long *plVar2;
   undefined1 *in_R8;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   plVar2 = (long*)OS::get_singleton();
   ( **(code**)( *plVar2 + 0x170 ) )(&local_48, plVar2);
   if (( local_48 == 0 ) || ( *(uint*)( local_48 + -8 ) < 2 )) {
      Object::get(param_1, (bool*)param_2);
      lVar1 = local_48;
   }
 else {
      if (in_R8 != (undefined1*)0x0) {
         *in_R8 = 1;
      }

      Variant::Variant((Variant*)param_1, (String*)&local_48);
      lVar1 = local_48;
   }

   local_48 = lVar1;
   if (lVar1 != 0) {
      LOCK();
      plVar2 = (long*)( lVar1 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar1 + -0x10 ), false);
      }

   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorExportPreset::EditorExportPreset() */void EditorExportPreset::EditorExportPreset(EditorExportPreset *this) {
   undefined8 uVar1;
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined***)this = &PTR__initialize_classv_001157b8;
   uVar1 = _LC14;
   *(undefined8*)( this + 0x180 ) = 0;
   *(undefined4*)( this + 0x188 ) = 0;
   *(undefined8*)( this + 0x1d0 ) = uVar1;
   *(undefined8*)( this + 0x200 ) = uVar1;
   *(undefined2*)( this + 0x208 ) = 0;
   this[0x20a] = (EditorExportPreset)0x0;
   *(undefined8*)( this + 0x218 ) = 0;
   for (int i = 0; i < 4; i++) {
      *(undefined8*)( this + ( 48*i + 584 ) ) = uVar1;
   }

   *(undefined2*)( this + 0x300 ) = 0;
   *(undefined8*)( this + 0x308 ) = 0;
   *(undefined8*)( this + 0x310 ) = 0;
   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1a0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1c0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1e0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x228 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x238 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 600 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x268 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x288 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2b8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2c8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2e0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2f0 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x318 ) = 2;
   return;
}
/* EditorExportPreset::add_export_file(String const&) */void EditorExportPreset::add_export_file(String *param_1) {
   long in_FS_OFFSET;
   String aSStack_28[24];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(aSStack_28);
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      EditorExport::save_presets();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<String, EditorExportPreset::FileExportMode, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorExportPreset::FileExportMode> > >::erase(String const&) [clone .isra.0] */ulong HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>::erase(HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>> *this, String *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   undefined8 uVar7;
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
   char cVar28;
   uint uVar29;
   ulong in_RAX;
   ulong uVar30;
   uint uVar31;
   uint uVar32;
   long lVar33;
   long lVar34;
   long *plVar35;
   long lVar36;
   uint *puVar37;
   ulong uVar38;
   uint uVar39;
   if (*(long*)( this + 8 ) == 0) {
      return in_RAX;
   }

   uVar30 = ( ulong ) * (uint*)( this + 0x2c );
   if (*(uint*)( this + 0x2c ) != 0) {
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar38 = CONCAT44(0, uVar5);
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar29 = String::hash();
      lVar36 = *(long*)( this + 0x10 );
      uVar31 = 1;
      if (uVar29 != 0) {
         uVar31 = uVar29;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar31 * lVar6;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      auVar8 = auVar8 * auVar18;
      lVar33 = auVar8._8_8_;
      uVar30 = auVar8._0_8_;
      uVar29 = *(uint*)( lVar36 + lVar33 * 4 );
      uVar32 = auVar8._8_4_;
      if (uVar29 != 0) {
         uVar39 = 0;
         do {
            if (uVar31 == uVar29) {
               cVar28 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar33 * 8 ) + 0x10 ), param_1);
               if (cVar28 != '\0') {
                  lVar6 = *(long*)( this + 0x10 );
                  lVar36 = *(long*)( this + 8 );
                  uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar30 = CONCAT44(0, uVar5);
                  lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar32 + 1) * lVar33;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar30;
                  lVar34 = SUB168(auVar12 * auVar22, 8);
                  puVar37 = (uint*)( lVar6 + lVar34 * 4 );
                  uVar29 = SUB164(auVar12 * auVar22, 8);
                  uVar31 = *puVar37;
                  if (( uVar31 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar31 * lVar33,auVar23._8_8_ = 0,auVar23._0_8_ = uVar30,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar5 + uVar29 ) - SUB164(auVar13 * auVar23, 8)) * lVar33,auVar24._8_8_ = 0,auVar24._0_8_ = uVar30,uVar39 = uVar32,SUB164(auVar14 * auVar24, 8) == 0) goto LAB_001013eb;
                  goto LAB_001013a5;
               }

               lVar36 = *(long*)( this + 0x10 );
            }

            uVar39 = uVar39 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar32 + 1) * lVar6;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            auVar9 = auVar9 * auVar19;
            lVar33 = auVar9._8_8_;
            uVar30 = auVar9._0_8_;
            uVar29 = *(uint*)( lVar36 + lVar33 * 4 );
            uVar32 = auVar9._8_4_;
         }
 while ( ( uVar29 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar29 * lVar6,auVar20._8_8_ = 0,auVar20._0_8_ = uVar38,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar5 + uVar32 ) - SUB164(auVar10 * auVar20, 8)) * lVar6,auVar21._8_8_ = 0,auVar21._0_8_ = uVar38,uVar30 = SUB168(auVar11 * auVar21, 0),uVar39 <= SUB164(auVar11 * auVar21, 8) );
      }

   }

   return uVar30;
   while (auVar15._8_8_ = 0,auVar15._0_8_ = (ulong)uVar31 * lVar33,auVar25._8_8_ = 0,auVar25._0_8_ = uVar30,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar29 + uVar5 ) - SUB164(auVar15 * auVar25, 8)) * lVar33,auVar26._8_8_ = 0,auVar26._0_8_ = uVar30,uVar39 = uVar32,SUB164(auVar16 * auVar26, 8) != 0) {
      LAB_001013a5:uVar32 = uVar29;
      puVar1 = (uint*)( lVar6 + (ulong)uVar39 * 4 );
      *puVar37 = *puVar1;
      puVar2 = (undefined8*)( lVar36 + lVar34 * 8 );
      *puVar1 = uVar31;
      puVar3 = (undefined8*)( lVar36 + (ulong)uVar39 * 8 );
      uVar7 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar7;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(uVar32 + 1) * lVar33;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar30;
      lVar34 = SUB168(auVar17 * auVar27, 8);
      puVar37 = (uint*)( lVar6 + lVar34 * 4 );
      uVar29 = SUB164(auVar17 * auVar27, 8);
      uVar31 = *puVar37;
      if (uVar31 == 0) break;
   }
;
   LAB_001013eb:uVar30 = (ulong)uVar32;
   plVar4 = (long*)( lVar36 + uVar30 * 8 );
   *(undefined4*)( lVar6 + uVar30 * 4 ) = 0;
   plVar35 = (long*)*plVar4;
   if (*(long**)( this + 0x18 ) == plVar35) {
      *(long*)( this + 0x18 ) = *plVar35;
      plVar35 = (long*)*plVar4;
      if (*(long**)( this + 0x20 ) != plVar35) goto LAB_00101409;
   }
 else if (*(long**)( this + 0x20 ) != plVar35) goto LAB_00101409;
   *(long*)( this + 0x20 ) = plVar35[1];
   plVar35 = (long*)*plVar4;
   LAB_00101409:if ((long*)plVar35[1] != (long*)0x0) {
      *(long*)plVar35[1] = *plVar35;
      plVar35 = (long*)*plVar4;
   }

   if (*plVar35 != 0) {
      *(long*)( *plVar35 + 8 ) = plVar35[1];
      plVar35 = (long*)*plVar4;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar35 + 2 ));
   Memory::free_static(plVar35, false);
   uVar38 = *(ulong*)( this + 8 );
   *(undefined8*)( uVar38 + uVar30 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   return uVar38;
}
/* EditorExportPreset::set_file_export_mode(String const&, EditorExportPreset::FileExportMode) */void EditorExportPreset::set_file_export_mode(EditorExportPreset *this, String *param_1, int param_3) {
   long in_FS_OFFSET;
   String local_18[8];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 0) {
      HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>::erase((HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>*)( this + 0x1d8 ), param_1);
   }
 else {
      HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>::insert(local_18, this + 0x1d8, SUB81(param_1, 0));
   }

   EditorExport::save_presets();
   if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPreset::set_customized_files(Dictionary const&) */void EditorExportPreset::set_customized_files(EditorExportPreset *this, Dictionary *param_1) {
   long *plVar1;
   char cVar2;
   long lVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   String local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = Dictionary::next((Variant*)param_1);
   if (lVar3 != 0) {
      do {
         Dictionary::operator []((Variant*)param_1);
         Variant::operator_cast_to_String((Variant*)&local_58);
         cVar2 = String::operator ==((String*)&local_58, "strip");
         if (cVar2 == '\0') {
            cVar2 = String::operator ==((String*)&local_58, "keep");
            if (cVar2 != '\0') {
               Variant::operator_cast_to_String((Variant*)&local_50);
               goto LAB_00101590;
            }

            cVar2 = String::operator ==((String*)&local_58, "remove");
            if (cVar2 != '\0') {
               Variant::operator_cast_to_String((Variant*)&local_50);
               goto LAB_00101590;
            }

            Variant::operator_cast_to_String((Variant*)&local_50);
            HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>::erase((HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>*)( this + 0x1d8 ), (String*)&local_50);
         }
 else {
            Variant::operator_cast_to_String((Variant*)&local_50);
            LAB_00101590:HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>::insert(local_48, (HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>*)( this + 0x1d8 ), SUB81((Variant*)&local_50, 0));
         }

         EditorExport::save_presets();
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

         lVar3 = local_58;
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

         lVar3 = Dictionary::next((Variant*)param_1);
      }
 while ( lVar3 != 0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::erase(String const&)
   [clone .isra.0] */void HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase(HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>> *this, String *param_1) {
   undefined4 *puVar1;
   undefined4 *puVar2;
   CowData<char32_t> *this_00;
   uint *puVar3;
   uint uVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
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
   char cVar28;
   uint uVar29;
   uint uVar30;
   long lVar31;
   uint *puVar32;
   int iVar33;
   long lVar34;
   ulong uVar35;
   ulong uVar36;
   uint *puVar37;
   CowData *this_01;
   uint *puVar38;
   ulong uVar39;
   ulong uVar40;
   long lVar41;
   uint uVar42;
   ulong uVar43;
   if (( *(long*)this != 0 ) && ( *(int*)( this + 0x24 ) != 0 )) {
      uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar29 = String::hash();
      uVar36 = CONCAT44(0, uVar4);
      lVar41 = *(long*)( this + 0x18 );
      uVar30 = 1;
      if (uVar29 != 0) {
         uVar30 = uVar29;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar30 * lVar31;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar36;
      lVar34 = SUB168(auVar8 * auVar18, 8);
      uVar29 = *(uint*)( lVar41 + lVar34 * 4 );
      iVar33 = SUB164(auVar8 * auVar18, 8);
      if (uVar29 != 0) {
         uVar42 = 0;
         do {
            if (uVar30 == uVar29) {
               cVar28 = String::operator ==((String*)( *(long*)this + ( ulong ) * (uint*)( *(long*)( this + 8 ) + lVar34 * 4 ) * 8 ), param_1);
               if (cVar28 != '\0') {
                  lVar41 = *(long*)( this + 8 );
                  lVar6 = *(long*)( this + 0x10 );
                  lVar7 = *(long*)( this + 0x18 );
                  uVar4 = *(uint*)( lVar41 + lVar34 * 4 );
                  uVar40 = (ulong)uVar4;
                  uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
                  uVar43 = CONCAT44(0, uVar30);
                  lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
                  uVar29 = *(uint*)( lVar6 + uVar40 * 4 );
                  uVar36 = (ulong)uVar29;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar29 + 1) * lVar34;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar43;
                  lVar31 = SUB168(auVar12 * auVar22, 8) * 4;
                  uVar42 = SUB164(auVar12 * auVar22, 8);
                  uVar39 = (ulong)uVar42;
                  puVar38 = (uint*)( lVar7 + lVar31 );
                  if (( *puVar38 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = ( ulong ) * puVar38 * lVar34,auVar23._8_8_ = 0,auVar23._0_8_ = uVar43,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar30 + uVar42 ) - SUB164(auVar13 * auVar23, 8)) * lVar34,auVar24._8_8_ = 0,auVar24._0_8_ = uVar43,SUB164(auVar14 * auVar24, 8) == 0) {
                     uVar39 = (ulong)uVar29;
                  }
 else {
                     while (true) {
                        puVar32 = (uint*)( lVar31 + lVar41 );
                        puVar3 = (uint*)( lVar41 + uVar36 * 4 );
                        puVar37 = (uint*)( uVar36 * 4 + lVar7 );
                        puVar1 = (undefined4*)( lVar6 + ( ulong ) * puVar32 * 4 );
                        puVar2 = (undefined4*)( lVar6 + ( ulong ) * puVar3 * 4 );
                        uVar5 = *puVar2;
                        *puVar2 = *puVar1;
                        *puVar1 = uVar5;
                        uVar29 = *puVar38;
                        *puVar38 = *puVar37;
                        *puVar37 = uVar29;
                        uVar29 = *puVar32;
                        *puVar32 = *puVar3;
                        *puVar3 = uVar29;
                        auVar17._8_8_ = 0;
                        auVar17._0_8_ = ( ulong )((int)uVar39 + 1) * lVar34;
                        auVar27._8_8_ = 0;
                        auVar27._0_8_ = uVar43;
                        uVar35 = SUB168(auVar17 * auVar27, 8);
                        lVar31 = uVar35 * 4;
                        puVar38 = (uint*)( lVar7 + lVar31 );
                        if (( *puVar38 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = ( ulong ) * puVar38 * lVar34,auVar25._8_8_ = 0,auVar25._0_8_ = uVar43,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( SUB164(auVar17 * auVar27, 8) + uVar30 ) - SUB164(auVar15 * auVar25, 8)) * lVar34,auVar26._8_8_ = 0,auVar26._0_8_ = uVar43,SUB164(auVar16 * auVar26, 8) == 0) break;
                        uVar36 = uVar39;
                        uVar39 = uVar35 & 0xffffffff;
                     }
;
                  }

                  *(undefined4*)( lVar7 + uVar39 * 4 ) = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)( *(long*)this + uVar40 * 8 ));
                  uVar30 = *(int*)( this + 0x24 ) - 1;
                  *(uint*)( this + 0x24 ) = uVar30;
                  if (uVar30 <= uVar4) {
                     return;
                  }

                  this_00 = (CowData<char32_t>*)( *(long*)this + uVar40 * 8 );
                  this_01 = (CowData*)( *(long*)this + (ulong)uVar30 * 8 );
                  *(undefined8*)this_00 = 0;
                  if (*(long*)this_01 != 0) {
                     CowData<char32_t>::_ref(this_00, this_01);
                     this_01 = (CowData*)( *(long*)this + ( ulong ) * (uint*)( this + 0x24 ) * 8 );
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)this_01);
                  lVar31 = *(long*)( this + 0x10 );
                  *(undefined4*)( lVar31 + uVar40 * 4 ) = *(undefined4*)( lVar31 + ( ulong ) * (uint*)( this + 0x24 ) * 4 );
                  *(uint*)( *(long*)( this + 8 ) + ( ulong ) * (uint*)( lVar31 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar4;
                  return;
               }

               lVar41 = *(long*)( this + 0x18 );
            }

            uVar42 = uVar42 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(iVar33 + 1) * lVar31;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar36;
            lVar34 = SUB168(auVar9 * auVar19, 8);
            uVar29 = *(uint*)( lVar41 + lVar34 * 4 );
            iVar33 = SUB164(auVar9 * auVar19, 8);
         }
 while ( ( uVar29 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar29 * lVar31,auVar20._8_8_ = 0,auVar20._0_8_ = uVar36,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar4 + iVar33 ) - SUB164(auVar10 * auVar20, 8)) * lVar31,auVar21._8_8_ = 0,auVar21._0_8_ = uVar36,uVar42 <= SUB164(auVar11 * auVar21, 8) );
      }

   }

   return;
}
/* EditorExportPreset::remove_export_file(String const&) */void EditorExportPreset::remove_export_file(EditorExportPreset *this, String *param_1) {
   HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>*)( this + 0x1b0 ), param_1);
   EditorExport::save_presets();
   return;
}
/* EditorExportPreset::set_export_path(String const&) */void EditorExportPreset::set_export_path(EditorExportPreset *this, String *param_1) {
   long lVar1;
   char cVar2;
   long *plVar3;
   long in_FS_OFFSET;
   CowData<char32_t> local_30[8];
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x1a0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1a0 ), (CowData*)param_1);
   }

   cVar2 = String::is_absolute_path();
   if (cVar2 != '\0') {
      plVar3 = (long*)OS::get_singleton();
      ( **(code**)( *plVar3 + 0x2b0 ) )(local_30, plVar3);
      String::path_to_file((String*)&local_28);
      lVar1 = local_28;
      if (*(long*)( this + 0x1a0 ) == local_28) {
         if (local_28 != 0) {
            LOCK();
            plVar3 = (long*)( local_28 + -0x10 );
            *plVar3 = *plVar3 + -1;
            UNLOCK();
            if (*plVar3 == 0) {
               local_28 = 0;
               Memory::free_static((void*)( lVar1 + -0x10 ), false);
            }

         }

      }
 else {
         CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1a0 ));
         *(long*)( this + 0x1a0 ) = local_28;
      }

      CowData<char32_t>::_unref(local_30);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      EditorExport::save_presets();
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPreset::_bind_methods() */void EditorExportPreset::_bind_methods(void) {
   char cVar1;
   undefined1 auVar2[16];
   MethodBind *pMVar3;
   uint uVar4;
   long in_FS_OFFSET;
   StringName *local_188;
   undefined8 local_158;
   long local_150;
   long local_148;
   undefined8 local_140;
   undefined8 local_138;
   undefined8 local_130;
   long local_128;
   long local_120;
   char *local_118;
   undefined1 local_110[16];
   undefined8 local_100;
   undefined8 local_f8;
   undefined4 local_f0;
   char *local_e8;
   undefined8 local_e0;
   undefined *local_d8;
   char *pcStack_d0;
   undefined8 local_c8;
   undefined *local_b8;
   char *pcStack_b0;
   undefined8 local_a8;
   Variant *local_98;
   char *pcStack_90;
   undefined8 local_88;
   Variant **local_78;
   undefined1 auStack_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_110._8_8_ = local_110._0_8_;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_e0 = 0;
   local_e8 = "name";
   uVar4 = (uint)(Variant*)&local_78;
   local_78 = (Variant**)&local_e8;
   D_METHODP((char*)&local_118, (char***)"_get_property_warning", uVar4);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String,StringName_const&>(_get_property_warning);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_e0 = 0;
   local_e8 = "property";
   local_78 = (Variant**)&local_e8;
   D_METHODP((char*)&local_118, (char***)&_LC41, uVar4);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,bool,StringName_const&>(has);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_files_to_export", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,Vector<String>>(get_files_to_export);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_customized_files", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,Dictionary>(get_customized_files);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_customized_files_count", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,int>(get_customized_files_count);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_e8 = "path";
   local_e0 = 0;
   local_78 = (Variant**)&local_e8;
   D_METHODP((char*)&local_118, (char***)"has_export_file", uVar4);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,bool,String_const&>(has_export_file);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_88 = 0;
   local_98 = (Variant*)&_LC37;
   pcStack_90 = "default";
   auStack_70._0_8_ = &pcStack_90;
   local_78 = &local_98;
   D_METHODP((char*)&local_118, (char***)"get_file_export_mode", uVar4);
   Variant::Variant((Variant*)&local_78, 0);
   local_58 = (undefined1[16])0x0;
   local_60 = 0;
   local_98 = (Variant*)&local_78;
   pMVar3 = create_method_bind<EditorExportPreset,EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>(get_file_export_mode);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, &local_98, 1);
   if (Variant::needs_deinit[(int)local_60] == '\0') {
      cVar1 = Variant::needs_deinit[(int)local_78];
   }
 else {
      Variant::_clear_internal();
      cVar1 = Variant::needs_deinit[(int)local_78];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_preset_name", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String>(get_name);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"is_runnable", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,bool>(is_runnable);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"are_advanced_options_enabled", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,bool>(are_advanced_options_enabled);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"is_dedicated_server", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,bool>(is_dedicated_server);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_export_filter", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,EditorExportPreset::ExportFilter>(get_export_filter);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_include_filter", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String>(get_include_filter);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_exclude_filter", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String>(get_exclude_filter);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_custom_features", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String>(get_custom_features);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_patches", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,Vector<String>>(get_patches);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_export_path", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String>(get_export_path);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_encryption_in_filter", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String>(get_enc_in_filter);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_encryption_ex_filter", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String>(get_enc_ex_filter);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_encrypt_pck", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,bool>(get_enc_pck);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_encrypt_directory", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,bool>(get_enc_directory);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_encryption_key", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String>(get_script_encryption_key);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   D_METHODP((char*)&local_118, (char***)"get_script_export_mode", 0);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,int>(get_script_export_mode);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_a8 = 0;
   auStack_70._0_8_ = &pcStack_b0;
   local_b8 = &_LC34;
   pcStack_b0 = "env_var";
   local_78 = (Variant**)&local_b8;
   D_METHODP((char*)&local_118, (char***)"get_or_env", uVar4);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,Variant,StringName_const&,String_const&>(_get_or_env);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   local_c8 = 0;
   local_d8 = &_LC34;
   pcStack_d0 = "windows_version";
   auStack_70._0_8_ = &pcStack_d0;
   local_78 = (Variant**)&local_d8;
   D_METHODP((char*)&local_118, (char***)"get_version", uVar4);
   auStack_70 = (undefined1[16])0x0;
   local_78 = (Variant**)0x0;
   pMVar3 = create_method_bind<EditorExportPreset,String,StringName_const&,bool>(get_version);
   ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_118, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_78] != '\0') {
      Variant::_clear_internal();
   }

   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_118);
   StringName::StringName((StringName*)&local_120, "EXPORT_ALL_RESOURCES", false);
   local_118 = "EXPORT_ALL_RESOURCES";
   local_130 = 0;
   local_110._0_8_ = 0x14;
   String::parse_latin1((StrRange*)&local_130);
   GetTypeInfo<EditorExportPreset::ExportFilter,void>::get_class_info((GetTypeInfo<EditorExportPreset::ExportFilter,void>*)&local_118);
   local_128 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_138 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_118, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_128, (StringName*)&local_120, 0, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_120, "EXPORT_SELECTED_SCENES", false);
   local_130 = 0;
   local_118 = "EXPORT_SELECTED_SCENES";
   local_110._0_8_ = 0x16;
   String::parse_latin1((StrRange*)&local_130);
   GetTypeInfo<EditorExportPreset::ExportFilter,void>::get_class_info((GetTypeInfo<EditorExportPreset::ExportFilter,void>*)&local_118);
   local_128 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_138 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_118, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_128, (StringName*)&local_120, 1, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_120, "EXPORT_SELECTED_RESOURCES", false);
   local_130 = 0;
   local_118 = "EXPORT_SELECTED_RESOURCES";
   local_110._0_8_ = 0x19;
   String::parse_latin1((StrRange*)&local_130);
   GetTypeInfo<EditorExportPreset::ExportFilter,void>::get_class_info((GetTypeInfo<EditorExportPreset::ExportFilter,void>*)&local_118);
   local_128 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_138 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_118, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_128, (StringName*)&local_120, 2, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_150, "EXCLUDE_SELECTED_RESOURCES", false);
   local_118 = "EXCLUDE_SELECTED_RESOURCES";
   local_158 = 0;
   local_110._0_8_ = 0x1a;
   String::parse_latin1((StrRange*)&local_158);
   local_118 = "EditorExportPreset::ExportFilter";
   local_138 = 0;
   local_110._0_8_ = 0x20;
   String::parse_latin1((StrRange*)&local_138);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_140, (String*)&local_138);
   StringName::StringName((StringName*)&local_148, (String*)&local_140, false);
   local_130 = 0;
   local_128 = 0;
   local_118 = (char*)CONCAT44(local_118._4_4_, 2);
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_110._8_8_;
   local_110 = auVar2 << 0x40;
   CowData<char32_t>::_ref((CowData<char32_t>*)local_110, (CowData*)&local_128);
   local_110._8_8_ = 0;
   local_100 = (ulong)local_100._4_4_ << 0x20;
   local_f8 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_f8, (CowData*)&local_130);
   local_f0 = 0x10006;
   if ((int)local_100 == 0x11) {
      StringName::StringName((StringName*)&local_120, (String*)&local_f8, false);
      if (local_110._8_8_ == local_120) {
         if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_110._8_8_ = local_120;
      }

   }
 else {
      StringName::operator =((StringName*)( local_110 + 8 ), (StringName*)&local_148);
   }

   local_188 = (StringName*)( local_110 + 8 );
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   local_120 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_128 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_118, (String*)&local_128, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_120, (StringName*)&local_150, 3, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_158);
   if (( StringName::configured != '\0' ) && ( local_150 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_120, "EXPORT_CUSTOMIZED", false);
   local_130 = 0;
   local_118 = "EXPORT_CUSTOMIZED";
   local_110._0_8_ = 0x11;
   String::parse_latin1((StrRange*)&local_130);
   GetTypeInfo<EditorExportPreset::ExportFilter,void>::get_class_info((GetTypeInfo<EditorExportPreset::ExportFilter,void>*)&local_118);
   local_128 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_138 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_118, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_128, (StringName*)&local_120, 4, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_120, "MODE_FILE_NOT_CUSTOMIZED", false);
   local_130 = 0;
   local_118 = "MODE_FILE_NOT_CUSTOMIZED";
   local_110._0_8_ = 0x18;
   String::parse_latin1((StrRange*)&local_130);
   GetTypeInfo<EditorExportPreset::FileExportMode,void>::get_class_info((GetTypeInfo<EditorExportPreset::FileExportMode,void>*)&local_118);
   local_128 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_138 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_118, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_128, (StringName*)&local_120, 0, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_120, "MODE_FILE_STRIP", false);
   local_130 = 0;
   local_118 = "MODE_FILE_STRIP";
   local_110._0_8_ = 0xf;
   String::parse_latin1((StrRange*)&local_130);
   GetTypeInfo<EditorExportPreset::FileExportMode,void>::get_class_info((GetTypeInfo<EditorExportPreset::FileExportMode,void>*)&local_118);
   local_128 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_138 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_118, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_128, (StringName*)&local_120, 1, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_120, "MODE_FILE_KEEP", false);
   local_130 = 0;
   local_118 = "MODE_FILE_KEEP";
   local_110._0_8_ = 0xe;
   String::parse_latin1((StrRange*)&local_130);
   GetTypeInfo<EditorExportPreset::FileExportMode,void>::get_class_info((GetTypeInfo<EditorExportPreset::FileExportMode,void>*)&local_118);
   local_128 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_138 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_118, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_128, (StringName*)&local_120, 2, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_120, "MODE_FILE_REMOVE", false);
   local_130 = 0;
   local_118 = "MODE_FILE_REMOVE";
   local_110._0_8_ = 0x10;
   String::parse_latin1((StrRange*)&local_130);
   GetTypeInfo<EditorExportPreset::FileExportMode,void>::get_class_info((GetTypeInfo<EditorExportPreset::FileExportMode,void>*)&local_118);
   local_128 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_138 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_138);
   StringName::StringName((StringName*)&local_118, (String*)&local_138, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_128, (StringName*)&local_120, 3, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_128 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "MODE_SCRIPT_TEXT", false);
   local_118 = "MODE_SCRIPT_TEXT";
   local_150 = 0;
   local_110._0_8_ = 0x10;
   String::parse_latin1((StrRange*)&local_150);
   local_130 = 0;
   local_118 = "EditorExportPreset::ScriptExportMode";
   local_110._0_8_ = 0x24;
   String::parse_latin1((StrRange*)&local_130);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_128, (String*)&local_130);
   StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
   local_110 = (undefined1[16])0x0;
   local_138 = 0;
   local_140 = 0;
   local_118 = (char*)0x2;
   local_100 = 0;
   local_f8 = 0;
   local_f0 = 0x10006;
   StringName::operator =(local_188, (StringName*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   local_120 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_128 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_118, (String*)&local_128, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_120, (StringName*)&local_148, 0, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "MODE_SCRIPT_BINARY_TOKENS", false);
   local_118 = "MODE_SCRIPT_BINARY_TOKENS";
   local_150 = 0;
   local_110._0_8_ = 0x19;
   String::parse_latin1((StrRange*)&local_150);
   local_130 = 0;
   local_118 = "EditorExportPreset::ScriptExportMode";
   local_110._0_8_ = 0x24;
   String::parse_latin1((StrRange*)&local_130);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_128, (String*)&local_130);
   StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
   local_110 = (undefined1[16])0x0;
   local_138 = 0;
   local_140 = 0;
   local_118 = (char*)0x2;
   local_100 = 0;
   local_f8 = 0;
   local_f0 = 0x10006;
   StringName::operator =(local_188, (StringName*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   local_120 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_128 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_118, (String*)&local_128, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_120, (StringName*)&local_148, 1, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_148, "MODE_SCRIPT_BINARY_TOKENS_COMPRESSED", false);
   local_118 = "MODE_SCRIPT_BINARY_TOKENS_COMPRESSED";
   local_150 = 0;
   local_110._0_8_ = 0x24;
   String::parse_latin1((StrRange*)&local_150);
   local_130 = 0;
   local_118 = "EditorExportPreset::ScriptExportMode";
   local_110._0_8_ = 0x24;
   String::parse_latin1((StrRange*)&local_130);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_128, (String*)&local_130);
   StringName::StringName((StringName*)&local_120, (String*)&local_128, false);
   local_110 = (undefined1[16])0x0;
   local_138 = 0;
   local_140 = 0;
   local_118 = (char*)0x2;
   local_100 = 0;
   local_f8 = 0;
   local_f0 = 0x10006;
   StringName::operator =(local_188, (StringName*)&local_120);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_140);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
   local_120 = local_110._8_8_;
   local_110._8_8_ = 0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_118);
   local_118 = "EditorExportPreset";
   local_128 = 0;
   local_110._0_8_ = 0x12;
   String::parse_latin1((StrRange*)&local_128);
   StringName::StringName((StringName*)&local_118, (String*)&local_128, false);
   ClassDB::bind_integer_constant((StringName*)&local_118, (StringName*)&local_120, (StringName*)&local_148, 2, false);
   if (( StringName::configured != '\0' ) && ( local_118 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
   if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
   if (( StringName::configured != '\0' ) && ( local_148 != 0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPreset::get_version(StringName const&, bool) const */StringName *EditorExportPreset::get_version(StringName *param_1, bool param_2) {
   long lVar1;
   code *pcVar2;
   int *piVar3;
   char in_CL;
   long lVar4;
   int *piVar5;
   undefined7 in_register_00000031;
   CowData *pCVar6;
   char *pcVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80;
   undefined8 local_78;
   long local_70;
   long local_68;
   CowData *local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Object::get((StringName*)local_58, (bool*)CONCAT71(in_register_00000031, param_2));
   Variant::operator_cast_to_String((Variant*)param_1);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) goto LAB_00103e68;
   ProjectSettings::get_singleton();
   StringName::StringName((StringName*)&local_70, "application/config/version", false);
   ProjectSettings::get_setting_with_override((StringName*)local_58);
   Variant::operator_cast_to_String((Variant*)&local_68);
   if (*(long*)param_1 != local_68) {
      CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
      lVar1 = local_68;
      local_68 = 0;
      *(long*)param_1 = lVar1;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
      StringName::unref();
   }

   String::split((char*)&local_68, SUB81(param_1, 0), 0x109c2d);
   if (local_60 == (CowData*)0x0) {
      LAB_00103db0:if (( *(long*)param_1 != 0 ) && ( 1 < *(uint*)( *(long*)param_1 + -8 ) )) {
         local_78 = 0;
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)param_1);
         local_80 = 0;
         String::parse_latin1((String*)&local_80, "Invalid version number \"%s\". The version number can only contain numeric characters (0-9) and non-consecutive periods (.).");
         vformat<String>((StringName*)&local_70, (String*)&local_80, (CowData<char32_t>*)&local_78);
         _err_print_error("get_version", "editor/export/editor_export_preset.cpp", 0x228, (StringName*)&local_70, 0, 1);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      }

      if (in_CL == '\0') {
         String::parse_latin1((String*)param_1, "1.0.0");
      }
 else {
         String::parse_latin1((String*)param_1, "1.0.0.0");
      }

   }
 else {
      lVar1 = *(long*)( local_60 + -8 );
      for (pCVar6 = local_60; local_60 + lVar1 * 8 != pCVar6; pCVar6 = pCVar6 + 8) {
         piVar5 = *(int**)pCVar6;
         if (piVar5 != (int*)0x0) {
            lVar8 = *(long*)( piVar5 + -2 );
            if ((int)lVar8 != 0) {
               lVar4 = 0;
               while ((int)lVar4 < (int)lVar8 + -1) {
                  if (lVar8 == lVar4) {
                     piVar3 = (int*)&String::_null;
                  }
 else {
                     piVar3 = piVar5;
                     if (lVar8 <= lVar4) goto LAB_00103eab;
                  }

                  lVar4 = lVar4 + 1;
                  piVar5 = piVar5 + 1;
                  if (9 < *piVar3 - 0x30U) goto LAB_00103db0;
               }
;
            }

         }

      }

      if (in_CL == '\0') {
         local_78 = 0;
         String::parse_latin1((String*)&local_78, ".");
         String::join((Vector*)&local_70);
         if (*(long*)param_1 != local_70) goto LAB_001040af;
      }
 else {
         if (lVar1 == 1) {
            pcVar7 = ".0.0.0";
         }
 else if (lVar1 == 2) {
            pcVar7 = ".0.0";
         }
 else {
            if (lVar1 != 3) {
               if (lVar1 < 4) {
                  lVar4 = 3;
                  lVar8 = lVar1;
                  goto LAB_00103eab;
               }

               local_78 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, local_60 + 0x18);
               if (local_60 == (CowData*)0x0) {
                  lVar8 = 0;
               }
 else {
                  lVar8 = *(long*)( local_60 + -8 );
                  if (2 < lVar8) {
                     local_80 = 0;
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, local_60 + 0x10);
                     if (local_60 == (CowData*)0x0) {
                        lVar8 = 0;
                     }
 else {
                        lVar8 = *(long*)( local_60 + -8 );
                        if (1 < lVar8) {
                           local_88 = 0;
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, local_60 + 8);
                           if (local_60 == (CowData*)0x0) {
                              lVar8 = 0;
                           }
 else {
                              lVar8 = *(long*)( local_60 + -8 );
                              if (0 < lVar8) {
                                 local_90 = 0;
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, local_60);
                                 local_98 = 0;
                                 String::parse_latin1((String*)&local_98, "%s.%s.%s.%s");
                                 vformat<String,String,String,String>((StringName*)&local_70, (String*)&local_98, (CowData<char32_t>*)&local_90, (CowData<char32_t>*)&local_88, (CowData<char32_t>*)&local_80, (CowData<char32_t>*)&local_78);
                                 lVar1 = local_70;
                                 if (*(long*)param_1 != local_70) {
                                    CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
                                    local_70 = 0;
                                    *(long*)param_1 = lVar1;
                                 }

                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                                 goto LAB_00103e5e;
                              }

                           }

                           lVar4 = 0;
                           goto LAB_00103eab;
                        }

                     }

                     lVar4 = 1;
                     goto LAB_00103eab;
                  }

               }

               lVar4 = 2;
               LAB_00103eab:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar8, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            pcVar7 = ".0";
         }

         local_78 = 0;
         String::parse_latin1((String*)&local_78, pcVar7);
         String::operator +((String*)&local_70, (String*)param_1);
         if (*(long*)param_1 != local_70) {
            LAB_001040af:CowData<char32_t>::_unref((CowData<char32_t>*)param_1);
            lVar1 = local_70;
            local_70 = 0;
            *(long*)param_1 = lVar1;
         }

      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }

   LAB_00103e5e:CowData<String>::_unref((CowData<String>*)&local_60);
   LAB_00103e68:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
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
/* EditorExportPreset::get_patches() const */void EditorExportPreset::get_patches(void) {
   long in_RSI;
   long in_RDI;
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (*(long*)( in_RSI + 0x218 ) != 0) {
      CowData<String>::_ref((CowData<String>*)( in_RDI + 8 ), (CowData*)( in_RSI + 0x218 ));
   }

   return;
}
/* EditorExportPreset::set_patches(Vector<String> const&) */void EditorExportPreset::set_patches(EditorExportPreset *this, Vector *param_1) {
   if (*(long*)( this + 0x218 ) != *(long*)( param_1 + 8 )) {
      CowData<String>::_ref((CowData<String>*)( this + 0x218 ), (CowData*)( param_1 + 8 ));
      return;
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
/* EditorExportPreset::remove_patch(int) */void EditorExportPreset::remove_patch(EditorExportPreset *this, int param_1) {
   long *plVar1;
   long lVar2;
   long *plVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   lVar4 = (long)param_1;
   lVar5 = *(long*)( this + 0x218 );
   if (param_1 < 0) {
      if (lVar5 != 0) {
         lVar5 = *(long*)( lVar5 + -8 );
         goto LAB_001044a9;
      }

   }
 else if (lVar5 != 0) {
      lVar5 = *(long*)( lVar5 + -8 );
      if (lVar4 < lVar5) {
         CowData<String>::_copy_on_write((CowData<String>*)( this + 0x218 ));
         lVar5 = *(long*)( this + 0x218 );
         if (lVar5 == 0) {
            lVar6 = -1;
         }
 else {
            lVar6 = *(long*)( lVar5 + -8 ) + -1;
            if (lVar4 < lVar6) {
               plVar3 = (long*)( lVar5 + lVar4 * 8 );
               do {
                  lVar5 = *plVar3;
                  lVar2 = plVar3[1];
                  if (lVar5 != lVar2) {
                     if (lVar5 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar5 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar5 = *plVar3;
                           *plVar3 = 0;
                           Memory::free_static((void*)( lVar5 + -0x10 ), false);
                        }

                        lVar2 = plVar3[1];
                     }

                     *plVar3 = lVar2;
                     plVar3[1] = 0;
                  }

                  lVar4 = lVar4 + 1;
                  plVar3 = plVar3 + 1;
               }
 while ( lVar6 != lVar4 );
            }

         }

         CowData<String>::resize<false>((CowData<String>*)( this + 0x218 ), lVar6);
         EditorExport::save_presets();
         return;
      }

      goto LAB_001044a9;
   }

   lVar5 = 0;
   LAB_001044a9:_err_print_index_error("remove_patch", "editor/export/editor_export_preset.cpp", 0x19e, lVar4, lVar5, "p_index", "patches.size()", "", false, false);
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
/* EditorExportPreset::add_patch(String const&, int) */void EditorExportPreset::add_patch(EditorExportPreset *this, String *param_1, int param_2) {
   long *plVar1;
   CowData<char32_t> *this_00;
   char cVar2;
   int iVar3;
   long lVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   lVar9 = (long)param_2;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *(long*)( this + 0x218 );
   if (( lVar7 != 0 ) && ( lVar8 = lVar8 != 0 )) {
      lVar5 = 0;
      while (lVar5 < lVar8) {
         cVar2 = String::operator ==((String*)( lVar7 + lVar5 * 8 ), param_1);
         if (cVar2 != '\0') {
            local_50 = 0;
            if (*(long*)param_1 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)param_1);
            }

            local_40 = 0x31;
            local_48 = "Failed to add patch \"%s\". Patches must be unique.";
            local_58 = 0;
            String::parse_latin1((StrRange*)&local_58);
            vformat<String>((CowData<char32_t>*)&local_48, &local_58, (CowData<char32_t>*)&local_50);
            _err_print_error("add_patch", "editor/export/editor_export_preset.cpp", 0x188, "Condition \"patches.has(p_path)\" is true.", (CowData<char32_t>*)&local_48, 1, 0);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            goto LAB_00104929;
         }

         lVar7 = *(long*)( this + 0x218 );
         lVar5 = lVar5 + 1;
         if (lVar7 == 0) break;
         lVar8 = *(long*)( lVar7 + -8 );
      }
;
   }

   if (param_2 < 0) {
      local_48 = (char*)0x0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)param_1);
      }

      Vector<String>::push_back((Vector<String>*)( this + 0x210 ), (CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }
 else {
      local_48 = (char*)0x0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)param_1);
         lVar7 = *(long*)( this + 0x218 );
      }

      if (lVar7 == 0) {
         lVar7 = 1;
         lVar8 = 0;
      }
 else {
         lVar8 = *(long*)( lVar7 + -8 );
         lVar7 = lVar8 + 1;
      }

      if (lVar9 < lVar7) {
         iVar3 = CowData<String>::resize<false>((CowData<String>*)( this + 0x218 ), lVar7);
         if (iVar3 == 0) {
            CowData<String>::_copy_on_write((CowData<String>*)( this + 0x218 ));
            lVar7 = *(long*)( this + 0x218 );
            plVar6 = (long*)( lVar7 + lVar8 * 8 );
            if (lVar9 < lVar8) {
               do {
                  lVar5 = *plVar6;
                  lVar4 = plVar6[-1];
                  if (lVar5 != lVar4) {
                     if (lVar5 != 0) {
                        LOCK();
                        plVar1 = (long*)( lVar5 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           lVar5 = *plVar6;
                           *plVar6 = 0;
                           Memory::free_static((void*)( lVar5 + -0x10 ), false);
                        }

                        lVar4 = plVar6[-1];
                     }

                     *plVar6 = lVar4;
                     plVar6[-1] = 0;
                  }

                  lVar8 = lVar8 + -1;
                  plVar6 = plVar6 + -1;
               }
 while ( lVar9 != lVar8 );
            }

            this_00 = (CowData<char32_t>*)( lVar7 + lVar9 * 8 );
            if (*(char**)this_00 != local_48) {
               CowData<char32_t>::_ref(this_00, (CowData*)&local_48);
            }

         }
 else {
            _err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
         }

      }
 else {
         _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, lVar9, lVar7, "p_pos", "new_size", "", false, false);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      EditorExport::save_presets();
      return;
   }

   LAB_00104929:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorExportPreset::set_patch(int, String const&) */void EditorExportPreset::set_patch(EditorExportPreset *this, int param_1, String *param_2) {
   remove_patch(this, param_1);
   add_patch(this, param_2, param_1);
   return;
}
/* EditorExportPreset::get_files_to_export() const */void EditorExportPreset::get_files_to_export(void) {
   long *plVar1;
   int iVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   long in_RSI;
   long in_RDI;
   long *plVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_48;
   iVar2 = *(int*)( in_RSI + 0x1d4 );
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (iVar2 == 0) {
      LAB_00104a18:if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   plVar7 = *(long**)( in_RSI + 0x1b0 );
   iVar6 = 1;
   do {
      local_48 = 0;
      plVar1 = (long*)( *plVar7 + -0x10 );
      if (*plVar7 == 0) {
         Vector<String>::push_back();
      }
 else {
         do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_001049ec;
            LOCK();
            lVar5 = *plVar1;
            bVar8 = lVar4 == lVar5;
            if (bVar8) {
               *plVar1 = lVar4 + 1;
               lVar5 = lVar4;
            }

            UNLOCK();
         }
 while ( !bVar8 );
         if (lVar5 != -1) {
            local_48 = *plVar7;
         }

         LAB_001049ec:Vector<String>::push_back();
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }

         }

      }

      if (iVar2 <= iVar6) goto LAB_00104a18;
      iVar6 = iVar6 + 1;
      plVar7 = plVar7 + 1;
   }
 while ( true );
}
/* EditorExportPreset::update_files() */void EditorExportPreset::update_files(EditorExportPreset *this) {
   long *plVar1;
   long lVar2;
   int iVar3;
   long lVar4;
   char cVar5;
   long lVar6;
   long *plVar7;
   String *pSVar8;
   int iVar9;
   long in_FS_OFFSET;
   bool bVar10;
   long local_60;
   Vector<String> local_58[8];
   long local_50[2];
   long local_40;
   iVar3 = *(int*)( this + 0x1d4 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50[0] = 0;
   if (iVar3 != 0) {
      pSVar8 = *(String**)( this + 0x1b0 );
      iVar9 = 1;
      do {
         cVar5 = FileAccess::exists(pSVar8);
         if (cVar5 == '\0') {
            local_60 = 0;
            plVar7 = (long*)( *(long*)pSVar8 + -0x10 );
            if (*(long*)pSVar8 == 0) {
               Vector<String>::push_back(local_58, &local_60);
            }
 else {
               do {
                  lVar4 = *plVar7;
                  if (lVar4 == 0) goto LAB_00104b0e;
                  LOCK();
                  lVar6 = *plVar7;
                  bVar10 = lVar4 == lVar6;
                  if (bVar10) {
                     *plVar7 = lVar4 + 1;
                     lVar6 = lVar4;
                  }

                  UNLOCK();
               }
 while ( !bVar10 );
               if (lVar6 != -1) {
                  local_60 = *(long*)pSVar8;
               }

               LAB_00104b0e:lVar4 = local_60;
               Vector<String>::push_back(local_58);
               if (lVar4 != 0) {
                  LOCK();
                  plVar7 = (long*)( lVar4 + -0x10 );
                  *plVar7 = *plVar7 + -1;
                  UNLOCK();
                  if (*plVar7 == 0) {
                     Memory::free_static((void*)( local_60 + -0x10 ), false);
                  }

               }

            }

         }

         lVar4 = local_50[0];
         if (iVar3 <= iVar9) goto code_r0x00104b49;
         iVar9 = iVar9 + 1;
         pSVar8 = pSVar8 + 8;
      }
 while ( true );
   }

   LAB_00104b7f:CowData<String>::_unref((CowData<String>*)local_50);
   plVar7 = *(long**)( this + 0x1f0 );
   local_50[0] = 0;
   if (plVar7 != (long*)0x0) {
      do {
         while (true) {
            cVar5 = FileAccess::exists((String*)( plVar7 + 2 ));
            if (( cVar5 == '\0' ) && ( cVar5 = DirAccess::exists((String*)( plVar7 + 2 )) ),cVar5 == '\0') break;
            LAB_00104bb0:plVar7 = (long*)*plVar7;
            if (plVar7 == (long*)0x0) goto LAB_00104c60;
         }
;
         local_60 = 0;
         plVar1 = (long*)( plVar7[2] + -0x10 );
         if (plVar7[2] == 0) {
            Vector<String>::push_back(local_58, &local_60);
            goto LAB_00104bb0;
         }

         do {
            lVar4 = *plVar1;
            if (lVar4 == 0) goto LAB_00104c1c;
            LOCK();
            lVar6 = *plVar1;
            bVar10 = lVar4 == lVar6;
            if (bVar10) {
               *plVar1 = lVar4 + 1;
               lVar6 = lVar4;
            }

            UNLOCK();
         }
 while ( !bVar10 );
         if (lVar6 != -1) {
            local_60 = plVar7[2];
         }

         LAB_00104c1c:lVar4 = local_60;
         Vector<String>::push_back(local_58);
         if (lVar4 == 0) goto LAB_00104bb0;
         LOCK();
         plVar1 = (long*)( lVar4 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_00104bb0;
         Memory::free_static((void*)( local_60 + -0x10 ), false);
         plVar7 = (long*)*plVar7;
      }
 while ( plVar7 != (long*)0x0 );
      plVar7 = (long*)0x0;
      LAB_00104c60:lVar4 = local_50[0];
      if (( local_50[0] != 0 ) && ( 0 < *(long*)( local_50[0] + -8 ) )) {
         do {
            lVar6 = (long)plVar7 * 8;
            plVar7 = (long*)( (long)plVar7 + 1 );
            HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>::erase((HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>*)( this + 0x1d8 ), (String*)( lVar4 + lVar6 ));
         }
 while ( (long)plVar7 < *(long*)( lVar4 + -8 ) );
      }

   }

   CowData<String>::_unref((CowData<String>*)local_50);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   code_r0x00104b49:if (local_50[0] != 0) {
      lVar6 = 0;
      if (0 < *(long*)( local_50[0] + -8 )) {
         do {
            lVar2 = lVar6 * 8;
            lVar6 = lVar6 + 1;
            HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::erase((HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>*)( this + 0x1b0 ), (String*)( lVar4 + lVar2 ));
         }
 while ( lVar6 < *(long*)( lVar4 + -8 ) );
      }

   }

   goto LAB_00104b7f;
}
/* CowData<Ref<EditorExportPlugin> >::_copy_on_write() [clone .isra.0] */void CowData<Ref<EditorExportPlugin>>::_copy_on_write(CowData<Ref<EditorExportPlugin>> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long lVar8;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar7 = 0x10;
   if (lVar1 * 8 != 0) {
      uVar7 = lVar1 * 8 - 1;
      uVar7 = uVar7 | uVar7 >> 1;
      uVar7 = uVar7 | uVar7 >> 2;
      uVar7 = uVar7 | uVar7 >> 4;
      uVar7 = uVar7 | uVar7 >> 8;
      uVar7 = uVar7 | uVar7 >> 0x10;
      uVar7 = ( uVar7 | uVar7 >> 0x20 ) + 0x11;
   }

   puVar5 = (undefined8*)Memory::alloc_static(uVar7, false);
   if (puVar5 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar8 = 0;
   *puVar5 = 1;
   puVar5[1] = lVar1;
   plVar6 = puVar5 + 2;
   if (lVar1 != 0) {
      do {
         lVar2 = *(long*)this;
         *plVar6 = 0;
         lVar2 = *(long*)( lVar2 + lVar8 * 8 );
         if (lVar2 != 0) {
            *plVar6 = lVar2;
            cVar4 = RefCounted::reference();
            if (cVar4 == '\0') {
               *plVar6 = 0;
            }

         }

         lVar8 = lVar8 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar1 != lVar8 );
   }

   _unref(this);
   *(undefined8**)this = puVar5 + 2;
   return;
}
/* EditorExportPreset::update_value_overrides() */void EditorExportPreset::update_value_overrides(EditorExportPreset *this) {
   int *piVar1;
   int iVar2;
   void *pvVar3;
   Ref *pRVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   EditorExportPreset *pEVar14;
   undefined8 uVar15;
   char cVar16;
   int iVar17;
   uint uVar18;
   uint uVar19;
   Variant *pVVar20;
   long lVar22;
   long lVar23;
   undefined8 *puVar24;
   int *piVar25;
   uint uVar26;
   uint uVar27;
   undefined8 *puVar28;
   ulong uVar29;
   long in_FS_OFFSET;
   long local_130;
   Variant local_f8[8];
   Array local_f0[8];
   long local_e8;
   CowData<char32_t> local_e0[8];
   undefined8 local_d8;
   long local_d0[2];
   undefined8 *local_c0;
   EditorExportPreset *local_b8;
   undefined8 local_b0;
   HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> local_a8[8];
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   ulong uVar21;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   EditorExport::get_export_plugins();
   local_80 = 2;
   local_a0 = (undefined1[16])0x0;
   local_90 = (undefined1[16])0x0;
   puVar24 = local_c0;
   if (*(long*)( this + 0x288 ) == 0) {
      if (local_c0 != (undefined8*)0x0) goto LAB_00104fba;
      uVar19 = 2;
      LAB_00105522:uVar26 = *(uint*)( this + 0x2a8 );
      uVar18 = *(uint*)( hash_table_size_primes + (ulong)uVar26 * 4 );
      if (( *(int*)( this + 0x2ac ) != 0 ) && ( *(long*)( this + 0x288 ) != 0 )) {
         if (uVar18 != 0) {
            lVar23 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x290 ) + lVar23 ) != 0) {
                  *(int*)( *(long*)( this + 0x290 ) + lVar23 ) = 0;
                  pvVar3 = *(void**)( *(long*)( this + 0x288 ) + lVar23 * 2 );
                  if (Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( this + 0x288 ) + lVar23 * 2 ) = 0;
               }

               lVar23 = lVar23 + 4;
            }
 while ( (ulong)uVar18 * 4 - lVar23 != 0 );
            uVar26 = *(uint*)( this + 0x2a8 );
            uVar18 = *(uint*)( hash_table_size_primes + (ulong)uVar26 * 4 );
         }

         *(undefined4*)( this + 0x2ac ) = 0;
         *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
      }

      LAB_00105620:uVar29 = ( ulong ) * (uint*)( hash_table_size_primes + (ulong)uVar19 * 4 );
      if (uVar18 < *(uint*)( hash_table_size_primes + (ulong)uVar19 * 4 )) {
         LAB_00105635:if (uVar26 != 0x1c) {
            uVar21 = (ulong)uVar26;
            do {
               uVar19 = (int)uVar21 + 1;
               uVar21 = (ulong)uVar19;
               if ((uint)uVar29 <= *(uint*)( hash_table_size_primes + uVar21 * 4 )) {
                  if (uVar19 != uVar26) {
                     if (*(long*)( this + 0x288 ) == 0) {
                        *(uint*)( this + 0x2a8 ) = uVar19;
                     }
 else {
                        HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_resize_and_rehash((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( this + 0x280 ), uVar19);
                     }

                  }

                  goto LAB_00105683;
               }

            }
 while ( uVar19 != 0x1c );
         }

         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_00105683:if (puVar24 != (undefined8*)0x0) {
         for (puVar28 = (undefined8*)local_90._0_8_; puVar28 != (undefined8*)0x0; puVar28 = (undefined8*)*puVar28) {
            HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::insert((StringName*)&local_b8, (Variant*)( this + 0x280 ), (bool)( (char)puVar28 + '\x10' ));
         }

         Object::notify_property_list_changed();
         uVar15 = local_a0._8_8_;
         if (( local_80._4_4_ != 0 ) && ( (int)uVar29 != 0 )) {
            piVar1 = (int*)( local_a0._8_8_ + uVar29 * 4 );
            piVar25 = (int*)local_a0._8_8_;
            puVar28 = puVar24;
            do {
               if (*piVar25 != 0) {
                  pvVar3 = (void*)*puVar28;
                  *piVar25 = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  *puVar28 = 0;
               }

               piVar25 = piVar25 + 1;
               puVar28 = puVar28 + 1;
            }
 while ( piVar25 != piVar1 );
         }

         Memory::free_static(puVar24, false);
         Memory::free_static((void*)uVar15, false);
         goto LAB_0010576d;
      }

   }
 else {
      if (*(int*)( this + 0x2ac ) != 0) {
         lVar23 = 0;
         uVar19 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2a8 ) * 4 );
         if (uVar19 != 0) {
            do {
               if (*(int*)( *(long*)( this + 0x290 ) + lVar23 ) != 0) {
                  *(int*)( *(long*)( this + 0x290 ) + lVar23 ) = 0;
                  pvVar3 = *(void**)( *(long*)( this + 0x288 ) + lVar23 * 2 );
                  if (Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( this + 0x288 ) + lVar23 * 2 ) = 0;
               }

               lVar23 = lVar23 + 4;
            }
 while ( (ulong)uVar19 << 2 != lVar23 );
         }

         *(undefined4*)( this + 0x2ac ) = 0;
         *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
         if (local_c0 != (undefined8*)0x0) goto LAB_00104fba;
         uVar26 = *(uint*)( this + 0x2a8 );
         uVar19 = 2;
         uVar18 = *(uint*)( hash_table_size_primes + (ulong)uVar26 * 4 );
         puVar24 = (undefined8*)0x0;
         goto LAB_00105620;
      }

      if (local_c0 != (undefined8*)0x0) {
         LAB_00104fba:local_130 = 0;
         do {
            if ((long)local_c0[-1] <= local_130) break;
            cVar16 = ( **(code**)( *(long*)local_c0[local_130] + 0x1d8 ) )();
            if (cVar16 != '\0') {
               if (local_c0 == (undefined8*)0x0) {
                  lVar23 = 0;
                  LAB_001057a6:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, local_130, lVar23, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar13 = (code*)invalidInstructionException();
                  ( *pcVar13 )();
               }

               lVar23 = local_c0[-1];
               if (lVar23 <= local_130) goto LAB_001057a6;
               CowData<Ref<EditorExportPlugin>>::_copy_on_write((CowData<Ref<EditorExportPlugin>>*)&local_c0);
               pRVar4 = (Ref*)local_c0[local_130];
               local_b8 = this;
               cVar16 = RefCounted::init_ref();
               if (cVar16 == '\0') {
                  local_b8 = (EditorExportPreset*)0x0;
               }

               EditorExportPlugin::set_export_preset(pRVar4);
               if (( ( local_b8 != (EditorExportPreset*)0x0 ) && ( cVar16 = RefCounted::unreference() ),pEVar14 = local_b8,cVar16 != '\0' )) &&( cVar16 = cVar16 != '\0' )(**(code**)( *(long*)pEVar14 + 0x140 ))(pEVar14);
               Memory::free_static(pEVar14, false);
            }

            if (local_c0 == (undefined8*)0x0) {
               LAB_001054cc:lVar23 = 0;
               LAB_001054cf:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, local_130, lVar23, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar13 = (code*)invalidInstructionException();
               ( *pcVar13 )();
            }

            lVar23 = local_c0[-1];
            if (lVar23 <= local_130) goto LAB_001054cf;
            ( **(code**)( *(long*)local_c0[local_130] + 0x1b0 ) )(local_f8, (long*)local_c0[local_130], this + 0x180);
            cVar16 = Dictionary::is_empty();
            if (cVar16 == '\0') {
               Dictionary::keys();
               for (iVar2 = 0; iVar17 = Array::size(),iVar2 < iVar17; iVar2 = iVar2 + 1) {
                  Array::operator []((int)local_f0);
                  Variant::operator_cast_to_StringName((Variant*)&local_e8);
                  Variant::Variant((Variant*)local_58, (StringName*)&local_e8);
                  pVVar20 = (Variant*)Dictionary::operator [](local_f8);
                  Variant::Variant((Variant*)local_78, pVVar20);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  uVar15 = local_a0._0_8_;
                  if (( local_a0._0_8_ != 0 ) && ( local_80._4_4_ != 0 )) {
                     uVar19 = *(uint*)( hash_table_size_primes + ( local_80 & 0xffffffff ) * 4 );
                     uVar29 = CONCAT44(0, uVar19);
                     lVar23 = *(long*)( hash_table_size_primes_inv + ( local_80 & 0xffffffff ) * 8 );
                     if (local_e8 == 0) {
                        uVar18 = StringName::get_empty_hash();
                     }
 else {
                        uVar18 = *(uint*)( local_e8 + 0x20 );
                     }

                     if (uVar18 == 0) {
                        uVar18 = 1;
                     }

                     uVar27 = 0;
                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = (ulong)uVar18 * lVar23;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = uVar29;
                     lVar22 = SUB168(auVar5 * auVar9, 8);
                     uVar26 = *(uint*)( local_a0._8_8_ + lVar22 * 4 );
                     iVar17 = SUB164(auVar5 * auVar9, 8);
                     if (uVar26 != 0) {
                        while (( uVar26 != uVar18 || ( *(long*)( *(long*)( uVar15 + lVar22 * 8 ) + 0x10 ) != local_e8 ) )) {
                           uVar27 = uVar27 + 1;
                           auVar6._8_8_ = 0;
                           auVar6._0_8_ = ( ulong )(iVar17 + 1) * lVar23;
                           auVar10._8_8_ = 0;
                           auVar10._0_8_ = uVar29;
                           lVar22 = SUB168(auVar6 * auVar10, 8);
                           uVar26 = *(uint*)( local_a0._8_8_ + lVar22 * 4 );
                           iVar17 = SUB164(auVar6 * auVar10, 8);
                           if (( uVar26 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar26 * lVar23,auVar11._8_8_ = 0,auVar11._0_8_ = uVar29,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar19 + iVar17 ) - SUB164(auVar7 * auVar11, 8)) * lVar23,auVar12._8_8_ = 0,auVar12._0_8_ = uVar29,SUB164(auVar8 * auVar12, 8) < uVar27) goto LAB_001052d5;
                        }
;
                        pVVar20 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](local_a8, (StringName*)&local_e8);
                        cVar16 = Variant::operator !=(pVVar20, (Variant*)local_78);
                        if (cVar16 != '\0') {
                           StringName::StringName((StringName*)local_d0, (StringName*)&local_e8);
                           if (local_c0 == (undefined8*)0x0) goto LAB_001054cc;
                           lVar23 = local_c0[-1];
                           if (lVar23 <= local_130) goto LAB_001054cf;
                           ( **(code**)( *(long*)local_c0[local_130] + 0x1d0 ) )(local_e0);
                           local_b8 = (EditorExportPreset*)0x108b38;
                           local_d8 = 0;
                           local_b0 = 0x5c;
                           String::parse_latin1((StrRange*)&local_d8);
                           vformat<String,StringName>((CowData<char32_t>*)&local_b8, (StrRange*)&local_d8, local_e0, (StringName*)local_d0);
                           _err_print_error("update_value_overrides", "editor/export/editor_export_preset.cpp", 0xd8, (CowData<char32_t>*)&local_b8);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
                           CowData<char32_t>::_unref(local_e0);
                           if (( StringName::configured != '\0' ) && ( local_d0[0] != 0 )) {
                              StringName::unref();
                           }

                        }

                     }

                  }

                  LAB_001052d5:pVVar20 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](local_a8, (StringName*)&local_e8);
                  Variant::operator =(pVVar20, (Variant*)local_78);
                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
                     StringName::unref();
                  }

               }

               Array::~Array(local_f0);
            }

            Dictionary::~Dictionary((Dictionary*)local_f8);
         }
 while ( local_c0 != (undefined8*)0x0 );
         puVar24 = (undefined8*)local_a0._0_8_;
         uVar19 = (uint)local_80;
         goto LAB_00105522;
      }

      uVar26 = *(uint*)( this + 0x2a8 );
      uVar29 = 0x17;
      if (*(uint*)( hash_table_size_primes + (ulong)uVar26 * 4 ) < 0x17) goto LAB_00105635;
   }

   Object::notify_property_list_changed();
   LAB_0010576d:CowData<Ref<EditorExportPlugin>>::_unref((CowData<Ref<EditorExportPlugin>>*)&local_c0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPreset::_set(StringName const&, Variant const&) */undefined8 EditorExportPreset::_set(EditorExportPreset *this, StringName *param_1, Variant *param_2) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   Variant *this_00;
   char *pcVar12;
   int iVar13;
   long lVar14;
   uint uVar15;
   ulong uVar16;
   uint uVar17;
   this_00 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( this + 0x250 ), param_1);
   Variant::operator =(this_00, param_2);
   EditorExport::save_presets();
   if (( *(long*)( this + 0x2b8 ) != 0 ) && ( *(int*)( this + 0x2dc ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2d8 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x2d8 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar16 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x2c0 ) + lVar14 * 4 );
      iVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar17 = 0;
         do {
            if (( uVar11 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 0x2b8 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               pcVar12 = (char*)HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>::operator []((HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>*)( this + 0x2b0 ), param_1);
               if (*pcVar12 != '\0') {
                  update_value_overrides(this);
                  Object::notify_property_list_changed();
               }

               return 1;
            }

            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x2c0 ) + lVar14 * 4 );
            iVar13 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar17 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* EditorExportPreset::_get_property_list(List<PropertyInfo, DefaultAllocator>*) const */void EditorExportPreset::_get_property_list(EditorExportPreset *this, List *param_1) {
   uint uVar1;
   long *plVar2;
   code *pcVar3;
   Object *pOVar4;
   Ref *pRVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   char cVar14;
   uint uVar15;
   Object *pOVar16;
   undefined4 *puVar17;
   undefined1(*pauVar18)[16];
   int iVar19;
   long lVar20;
   uint uVar21;
   void *pvVar22;
   ulong uVar23;
   long lVar24;
   undefined8 *puVar25;
   uint uVar26;
   long in_FS_OFFSET;
   long local_80;
   long local_78;
   long local_70;
   Object *local_68;
   size_t local_60;
   int local_58[6];
   long local_40;
   puVar25 = *(undefined8**)( this + 0x238 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (puVar25 != (undefined8*)0x0) {
      do {
         pOVar4 = *(Object**)( lVar20 + 8 );
         if (pOVar4 == (Object*)0x0) {
            local_78 = 0;
            if (*(long*)( lVar20 + 0x10 ) == 0) goto LAB_00105ef1;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar20 + 0x10 ));
         }
 else {
            local_78 = 0;
            local_60 = strlen((char*)pOVar4);
            local_68 = pOVar4;
            String::parse_latin1((StrRange*)&local_78);
         }

         lVar20 = local_78;
         if (pcVar3 == EditorExportPlatform::get_export_option_visibility) {
            if (local_78 != 0) {
               LOCK();
               plVar2 = (long*)( local_78 + -0x10 );
               *plVar2 = *plVar2 + -1;
               UNLOCK();
               if (*plVar2 == 0) {
                  local_78 = 0;
                  Memory::free_static((void*)( lVar20 + -0x10 ), false);
               }

            }

            goto LAB_00105c6a;
         }

         LAB_00105f09:cVar14 = ( *pcVar3 )(plVar2, this, &local_78);
         if (local_78 != 0) {
            LOCK();
            plVar2 = (long*)( local_78 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               pvVar22 = (void*)( local_78 + -0x10 );
               local_78 = 0;
               Memory::free_static(pvVar22, false);
            }

         }

         if (cVar14 != '\0') goto LAB_00105c6a;
         puVar25 = (undefined8*)*puVar25;
      }
 while ( puVar25 != (undefined8*)0x0 );
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorExportPreset::_get_property_warning(StringName const&) const */StringName *EditorExportPreset::_get_property_warning(StringName *param_1) {
   uint uVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Ref *pRVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   char cVar14;
   uint uVar15;
   Object *pOVar16;
   int iVar17;
   long *in_RDX;
   long lVar18;
   Object *in_RSI;
   uint uVar19;
   ulong uVar20;
   uint uVar21;
   long lVar22;
   long in_FS_OFFSET;
   long local_90;
   long local_88;
   undefined8 local_80[2];
   long local_70;
   Object *local_68;
   size_t local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( in_RSI + 0x288 ) != 0 ) && ( *(int*)( in_RSI + 0x2ac ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x2a8 ) * 4 );
      lVar22 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x2a8 ) * 8 );
      if (*in_RDX == 0) {
         uVar15 = StringName::get_empty_hash();
      }
 else {
         uVar15 = *(uint*)( *in_RDX + 0x20 );
      }

      uVar20 = CONCAT44(0, uVar1);
      if (uVar15 == 0) {
         uVar15 = 1;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar15 * lVar22;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar20;
      lVar18 = SUB168(auVar6 * auVar10, 8);
      uVar19 = *(uint*)( *(long*)( in_RSI + 0x290 ) + lVar18 * 4 );
      iVar17 = SUB164(auVar6 * auVar10, 8);
      if (uVar19 != 0) {
         uVar21 = 0;
         do {
            if (( uVar19 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( in_RSI + 0x288 ) + lVar18 * 8 ) + 0x10 ) == *in_RDX )) {
               *(undefined8*)param_1 = 0;
               goto LAB_001063f2;
            }

            uVar21 = uVar21 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(iVar17 + 1) * lVar22;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar20;
            lVar18 = SUB168(auVar7 * auVar11, 8);
            uVar19 = *(uint*)( *(long*)( in_RSI + 0x290 ) + lVar18 * 4 );
            iVar17 = SUB164(auVar7 * auVar11, 8);
         }
 while ( ( uVar19 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar19 * lVar22,auVar12._8_8_ = 0,auVar12._0_8_ = uVar20,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar1 + iVar17 ) - SUB164(auVar8 * auVar12, 8)) * lVar22,auVar13._8_8_ = 0,auVar13._0_8_ = uVar20,uVar21 <= SUB164(auVar9 * auVar13, 8) );
      }

   }

   pcVar2 = *(code**)( **(long**)( in_RSI + 0x180 ) + 0x1d0 );
   if (pcVar2 == EditorExportPlatform::get_export_option_warning) {
      local_90 = 0;
   }
 else {
      ( *pcVar2 )((String*)&local_90, *(long**)( in_RSI + 0x180 ), in_RSI, in_RDX);
      if (( local_90 != 0 ) && ( 1 < *(uint*)( local_90 + -8 ) )) {
         String::operator +=((String*)&local_90, "\n");
      }

   }

   lVar22 = 0;
   EditorExport::get_export_plugins();
   lVar18 = local_90;
   do {
      if (( local_70 == 0 ) || ( *(long*)( local_70 + -8 ) <= lVar22 )) {
         local_90 = 0;
         *(long*)param_1 = lVar18;
         CowData<Ref<EditorExportPlugin>>::_unref((CowData<Ref<EditorExportPlugin>>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         LAB_001063f2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      plVar4 = *(long**)( local_70 + lVar22 * 8 );
      local_90 = lVar18;
      cVar14 = ( **(code**)( *plVar4 + 0x1d8 ) )(plVar4, in_RSI + 0x180);
      if (cVar14 != '\0') {
         if (local_70 == 0) {
            lVar18 = 0;
            LAB_00106833:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar22, lVar18, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar18 = *(long*)( local_70 + -8 );
         if (lVar18 <= lVar22) goto LAB_00106833;
         CowData<Ref<EditorExportPlugin>>::_copy_on_write((CowData<Ref<EditorExportPlugin>>*)&local_70);
         pRVar5 = *(Ref**)( local_70 + lVar22 * 8 );
         Variant::Variant((Variant*)local_58, in_RSI);
         local_68 = (Object*)0x0;
         pOVar16 = (Object*)Variant::get_validated_object();
         pOVar3 = local_68;
         if (pOVar16 != local_68) {
            if (pOVar16 == (Object*)0x0) {
               if (local_68 != (Object*)0x0) {
                  local_68 = (Object*)0x0;
                  cVar14 = RefCounted::unreference();
                  joined_r0x001067fc:if (( cVar14 != '\0' ) && ( cVar14 = cVar14 != '\0' )) {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

            }
 else {
               pOVar16 = (Object*)__dynamic_cast(pOVar16, &Object::typeinfo, &typeinfo, 0);
               if (pOVar3 != pOVar16) {
                  local_68 = pOVar16;
                  if (( pOVar16 != (Object*)0x0 ) && ( cVar14 = cVar14 == '\0' )) {
                     local_68 = (Object*)0x0;
                  }

                  if (pOVar3 != (Object*)0x0) {
                     cVar14 = RefCounted::unreference();
                     goto joined_r0x001067fc;
                  }

               }

            }

         }

         EditorExportPlugin::set_export_preset(pRVar5);
         if (( ( local_68 != (Object*)0x0 ) && ( cVar14 = RefCounted::unreference() ),pOVar3 = local_68,cVar14 != '\0' )) &&( cVar14 = cVar14 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))();
         Memory::free_static(pOVar3, false);
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (local_70 == 0) {
         lVar18 = 0;
         LAB_001068a3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar22, lVar18, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar18 = *(long*)( local_70 + -8 );
      if (lVar18 <= lVar22) goto LAB_001068a3;
      plVar4 = *(long**)( local_70 + lVar22 * 8 );
      pcVar2 = *(code**)( *plVar4 + 0x1c8 );
      lVar18 = *in_RDX;
      if (lVar18 == 0) {
         local_80[0] = 0;
      }
 else {
         pOVar3 = *(Object**)( lVar18 + 8 );
         local_80[0] = 0;
         if (pOVar3 == (Object*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)local_80, (CowData*)( lVar18 + 0x10 ));
         }
 else {
            local_60 = strlen((char*)pOVar3);
            local_68 = pOVar3;
            String::parse_latin1((StrRange*)local_80);
         }

      }

      ( *pcVar2 )((CowData<char32_t>*)&local_88, plVar4, in_RSI + 0x180);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      if (( local_88 != 0 ) && ( 1 < *(uint*)( local_88 + -8 ) )) {
         local_80[0] = 0;
         local_68 = (Object*)&_LC112;
         local_60 = 1;
         String::parse_latin1((StrRange*)local_80);
         String::operator +((String*)&local_68, (String*)&local_88);
         String::operator +=((String*)&local_90, (String*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   }
 while ( true );
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
   return (uint)CONCAT71(0x115e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x115e, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* EditorExportPreset::is_class_ptr(void*) const */uint EditorExportPreset::is_class_ptr(EditorExportPreset *this, void *param_1) {
   return (uint)CONCAT71(0x115e, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x115d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x115e, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorExportPreset::_validate_propertyv(PropertyInfo&) const */void EditorExportPreset::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorExportPreset::_property_can_revertv(StringName const&) const */undefined8 EditorExportPreset::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorExportPreset::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorExportPreset::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorExportPreset::_notificationv(int, bool) */void EditorExportPreset::_notificationv(int param_1, bool param_2) {
   return;
}
/* EditorExportPlatform::get_export_option_visibility(EditorExportPreset const*, String const&)
   const */undefined8 EditorExportPlatform::get_export_option_visibility(EditorExportPreset *param_1, String *param_2) {
   return 1;
}
/* EditorExportPlatform::get_export_option_warning(EditorExportPreset const*, StringName const&)
   const */EditorExportPreset *EditorExportPlatform::get_export_option_warning(EditorExportPreset *param_1, StringName *param_2) {
   *(undefined8*)param_1 = 0;
   return param_1;
}
/* MethodBindTRC<String, StringName const&, bool>::_gen_argument_type(int) const */char MethodBindTRC<String,StringName_const&,bool>::_gen_argument_type(MethodBindTRC<String,StringName_const&,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\x04';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x14U ) + 1;
   }

   return cVar1;
}
/* MethodBindTRC<String, StringName const&, bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<String,StringName_const&,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Variant, StringName const&, String const&>::_gen_argument_type(int) const */char MethodBindTRC<Variant,StringName_const&,String_const&>::_gen_argument_type(MethodBindTRC<Variant,StringName_const&,String_const&> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x11U ) + 4;
   }

   return cVar1;
}
/* MethodBindTRC<Variant, StringName const&, String const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<Variant,StringName_const&,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<EditorExportPreset::ExportFilter>::_gen_argument_type(int) const */undefined8 MethodBindTRC<EditorExportPreset::ExportFilter>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<EditorExportPreset::ExportFilter>::get_argument_meta(int) const */undefined8 MethodBindTRC<EditorExportPreset::ExportFilter>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool>::_gen_argument_type(int) const */undefined8 MethodBindTRC<bool>::_gen_argument_type(int param_1) {
   return 1;
}
/* MethodBindTRC<bool>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<String>::_gen_argument_type(int) const */undefined8 MethodBindTRC<String>::_gen_argument_type(int param_1) {
   return 4;
}
/* MethodBindTRC<String>::get_argument_meta(int) const */undefined8 MethodBindTRC<String>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::_gen_argument_type(int) const */char MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::_gen_argument_type(MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}
/* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::get_argument_meta(int) const */undefined8 MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<bool, String const&>::_gen_argument_type(int) const */char MethodBindTR<bool,String_const&>::_gen_argument_type(MethodBindTR<bool,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 3U ) + 1;
}
/* MethodBindTR<bool, String const&>::get_argument_meta(int) const */undefined8 MethodBindTR<bool,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<int>::_gen_argument_type(int) const */undefined8 MethodBindTRC<int>::_gen_argument_type(int param_1) {
   return 2;
}
/* MethodBindTRC<int>::get_argument_meta(int) const */uint MethodBindTRC<int>::get_argument_meta(MethodBindTRC<int> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}
/* MethodBindTRC<Dictionary>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Dictionary>::_gen_argument_type(int param_1) {
   return 0x1b;
}
/* MethodBindTRC<Dictionary>::get_argument_meta(int) const */undefined8 MethodBindTRC<Dictionary>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1) {
   return 0x22;
}
/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<bool,StringName_const&>::_gen_argument_type(MethodBindTRC<bool,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x14U ) + 1;
}
/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<String, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<String,StringName_const&>::_gen_argument_type(MethodBindTRC<String,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x11U ) + 4;
}
/* MethodBindTRC<String, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<String,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<String, StringName const&>::~MethodBindTRC() */void MethodBindTRC<String,StringName_const&>::~MethodBindTRC(MethodBindTRC<String,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115918;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String, StringName const&>::~MethodBindTRC() */void MethodBindTRC<String,StringName_const&>::~MethodBindTRC(MethodBindTRC<String,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115918;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115978;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115978;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */void MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115a38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Dictionary>::~MethodBindTRC() */void MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115a38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<bool, String const&>::~MethodBindTR() */void MethodBindTR<bool,String_const&>::~MethodBindTR(MethodBindTR<bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115af8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<bool, String const&>::~MethodBindTR() */void MethodBindTR<bool,String_const&>::~MethodBindTR(MethodBindTR<bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115af8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::~MethodBindTRC() */void MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::~MethodBindTRC(MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115b58;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::~MethodBindTRC() */void MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::~MethodBindTRC(MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115b58;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<EditorExportPreset::ExportFilter>::~MethodBindTRC() */void MethodBindTRC<EditorExportPreset::ExportFilter>::~MethodBindTRC(MethodBindTRC<EditorExportPreset::ExportFilter> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115c78;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<EditorExportPreset::ExportFilter>::~MethodBindTRC() */void MethodBindTRC<EditorExportPreset::ExportFilter>::~MethodBindTRC(MethodBindTRC<EditorExportPreset::ExportFilter> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115c78;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001159d8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_001159d8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115c18;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115c18;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115bb8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115bb8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115a98;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115a98;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<Variant, StringName const&, String const&>::~MethodBindTRC() */void MethodBindTRC<Variant,StringName_const&,String_const&>::~MethodBindTRC(MethodBindTRC<Variant,StringName_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115cd8;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<Variant, StringName const&, String const&>::~MethodBindTRC() */void MethodBindTRC<Variant,StringName_const&,String_const&>::~MethodBindTRC(MethodBindTRC<Variant,StringName_const&,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115cd8;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<String, StringName const&, bool>::~MethodBindTRC() */void MethodBindTRC<String,StringName_const&,bool>::~MethodBindTRC(MethodBindTRC<String,StringName_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115d38;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<String, StringName const&, bool>::~MethodBindTRC() */void MethodBindTRC<String,StringName_const&,bool>::~MethodBindTRC(MethodBindTRC<String,StringName_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00115d38;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00115658;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00115658;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
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
         LAB_001070b3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001070b3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010711e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010711e:return &_get_class_namev();
}
/* EditorExportPreset::_get_class_namev() const */undefined8 *EditorExportPreset::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001071a3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001071a3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorExportPreset");
         goto LAB_0010720e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorExportPreset");
   LAB_0010720e:return &_get_class_namev();
}
/* EditorExportPreset::has(StringName const&) const */undefined8 EditorExportPreset::has(EditorExportPreset *this, StringName *param_1) {
   uint uVar1;
   long lVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   uint uVar11;
   int iVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 600 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x27c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x278 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x278 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar15 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar15;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x260 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 600 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x260 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
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
/* EditorExportPreset::get_class() const */void EditorExportPreset::get_class(void) {
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
/* MethodBindTRC<int>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<int>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 2;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00107abc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00107abc:local_58 = lVar2;
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
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 4;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00107c3c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00107c3c:local_58 = lVar2;
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
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 1;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00107dbc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00107dbc:local_58 = lVar2;
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
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Dictionary>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Dictionary>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1b;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x00107f3c;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x00107f3c:local_58 = lVar2;
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
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   undefined4 in_register_0000003c;
   undefined4 *puVar3;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar3 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC5;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x22;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }

         goto joined_r0x001080bc;
      }

   }

   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001080bc:local_58 = lVar2;
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
      return puVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
                  if (lVar3 == 0) goto LAB_0010817f;
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

      LAB_0010817f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00108233;
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

         if (cVar6 != '\0') goto LAB_00108233;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }

   }
 else {
      LAB_00108233:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPreset::is_class(String const&) const */undefined8 EditorExportPreset::is_class(EditorExportPreset *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001083df;
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

      LAB_001083df:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00108493;
   }

   cVar5 = String::operator ==(param_1, "EditorExportPreset");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00108493:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
            if (pvVar5 == (void*)0x0) goto LAB_00108644;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00108644:if (*(long*)this != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)this + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

   }

   return;
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
/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   long *plVar1;
   long lVar2;
   if (*(long*)( this + 0x20 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x20 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x20 );
         *(undefined8*)( this + 0x20 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x10 ) != 0 )) {
      StringName::unref();
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
   local_48 = &_LC5;
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

         goto joined_r0x001088ec;
      }

   }

   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x001088ec:local_58 = lVar2;
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
/* EditorExportPreset::_getv(StringName const&, Variant&) const */void EditorExportPreset::_getv(EditorExportPreset *this, StringName *param_1, Variant *param_2) {
   _get(this, param_1, param_2);
   return;
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
/* EditorExportPreset::_get_or_env(StringName const&, String const&) const */EditorExportPreset * __thiscall
EditorExportPreset::_get_or_env(EditorExportPreset *this,StringName *param_1,String *param_2){
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   get_or_env((StringName*)this, (String*)param_1, (bool*)param_2);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, bool, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, bool> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>>::operator [](HashMap<StringName,bool,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,bool>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined1 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_00109400:uVar45 = uVar40 * 4;
   uVar50 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar50, false);
   *(void**)( this + 8 ) = pvVar44;
   if ((int)uVar40 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar44 + uVar50 ) ) && ( pvVar44 < (void*)( (long)pvVar3 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_001092b8;
      }

      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_001092bc:if (iVar46 != 0) {
         LAB_001092c4:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         }
 else {
            uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar39 == 0) {
            uVar39 = 1;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar43;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar45;
         lVar49 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
         uVar53 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar42 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  *(undefined1*)( puVar42 + 3 ) = 0;
                  goto LAB_00108ebc;
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      goto LAB_00108ef3;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00108ef3;
   if (iVar46 != 0) goto LAB_001092c4;
   LAB_00108f19:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00108ebc;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar39 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar50 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar50 * 4;
   uVar45 = uVar50 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar50 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar39 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar43 = *(long*)( this + 0x10 );
            uVar54 = 0;
            uVar52 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar52);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar38 * lVar49;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar45;
            lVar47 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar43 + lVar47 * 4 );
            iVar46 = SUB164(auVar9 * auVar25, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar53 * lVar49;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar45;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar52 + iVar46 ) - SUB164(auVar10 * auVar26, 8)) * lVar49;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar45;
               uVar37 = SUB164(auVar11 * auVar27, 8);
               uVar51 = uVar41;
               if (uVar37 < uVar54) {
                  *puVar1 = uVar38;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar51 = *puVar42;
                  *puVar42 = uVar41;
                  uVar38 = uVar53;
                  uVar54 = uVar37;
               }

               uVar54 = uVar54 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar45;
               lVar47 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar43 + lVar47 * 4 );
               iVar46 = SUB164(auVar12 * auVar28, 8);
               uVar41 = uVar51;
               uVar53 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar49;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21, 8);
      uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
      uVar53 = SUB164(auVar5 * auVar21, 8);
      if (uVar52 != 0) {
         uVar54 = 0;
         do {
            if (( uVar39 == uVar52 ) && ( *(long*)( *(long*)( lVar43 + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar42 = *(undefined8**)( lVar43 + (ulong)uVar53 * 8 );
               goto LAB_00108ebc;
            }

            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         }
 while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }

      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_00109400;
      LAB_001092b8:iVar46 = *(int*)( this + 0x2c );
      goto LAB_001092bc;
   }

   LAB_00108ef3:if ((float)uVar40 * __LC16 < (float)( iVar46 + 1 )) goto LAB_00108f19;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';*(undefined1*)( puVar42 + 3 ) = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_001093c5;
   LAB_001091a2:uVar38 = *(uint*)( lVar43 + 0x20 );
}
 else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_001091a2;
   LAB_001093c5:uVar38 = StringName::get_empty_hash();
}
if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar52 * lVar49;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar45;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar45;
   uVar38 = SUB164(auVar15 * auVar31, 8);
   puVar55 = puVar4;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8*)( lVar47 + lVar48 * 8 );
      puVar55 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar46 + 1) * lVar49;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar45;
   lVar48 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar16 * auVar32, 8);
   puVar4 = puVar55;
   uVar52 = *puVar1;
}
;*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00108ebc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */String *HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(String *param_1) {
   CowData<char32_t> *this;
   void *pvVar1;
   void *pvVar2;
   long lVar3;
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
   char cVar28;
   uint uVar29;
   uint uVar30;
   int iVar31;
   ulong uVar32;
   long lVar33;
   long lVar34;
   long lVar35;
   uint *puVar36;
   int iVar37;
   uint uVar38;
   String *in_RDX;
   ulong uVar39;
   long lVar40;
   long *in_RSI;
   long lVar41;
   ulong uVar42;
   ulong uVar43;
   undefined4 uVar44;
   uint uVar45;
   uint uVar46;
   uint local_88;
   uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (*in_RSI == 0) {
      uVar32 = (ulong)uVar29 * 4;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[3] = lVar33;
      lVar33 = Memory::alloc_static((ulong)uVar29 * 8, false);
      *in_RSI = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[2] = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[1] = lVar33;
      if (uVar29 != 0) {
         memset((void*)in_RSI[3], 0, uVar32);
      }

      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_001095cc;
   }
 else {
      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      LAB_001095cc:if (iVar37 != 0) {
         uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
         lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar45 = String::hash();
         uVar32 = CONCAT44(0, uVar30);
         lVar41 = in_RSI[3];
         uVar38 = 1;
         if (uVar45 != 0) {
            uVar38 = uVar45;
         }

         uVar46 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar38 * lVar33;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar32;
         lVar40 = SUB168(auVar12 * auVar24, 8);
         uVar45 = *(uint*)( lVar41 + lVar40 * 4 );
         iVar37 = SUB164(auVar12 * auVar24, 8);
         if (uVar45 == 0) {
            iVar37 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            do {
               if (uVar38 == uVar45) {
                  cVar28 = String::operator ==((String*)( *in_RSI + ( ulong ) * (uint*)( in_RSI[1] + lVar40 * 4 ) * 8 ), in_RDX);
                  if (cVar28 != '\0') {
                     iVar37 = *(int*)( (long)in_RSI + 0x24 );
                     lVar33 = *in_RSI;
                     iVar31 = *(int*)( in_RSI[1] + lVar40 * 4 );
                     goto LAB_00109949;
                  }

                  lVar41 = in_RSI[3];
               }

               uVar46 = uVar46 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(iVar37 + 1) * lVar33;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar32;
               lVar40 = SUB168(auVar13 * auVar25, 8);
               uVar45 = *(uint*)( lVar41 + lVar40 * 4 );
               iVar37 = SUB164(auVar13 * auVar25, 8);
            }
 while ( ( uVar45 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar45 * lVar33,auVar26._8_8_ = 0,auVar26._0_8_ = uVar32,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar14 * auVar26, 8)) * lVar33,auVar27._8_8_ = 0,auVar27._0_8_ = uVar32,uVar46 <= SUB164(auVar15 * auVar27, 8) );
            iVar37 = *(int*)( (long)in_RSI + 0x24 );
         }

      }

   }

   if ((float)uVar29 * __LC16 < (float)( iVar37 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar37 = *(int*)( (long)in_RSI + 0x24 );
         lVar33 = *in_RSI;
         iVar31 = -1;
         goto LAB_00109949;
      }

      uVar29 = (int)in_RSI[4] + 1;
      uVar32 = (ulong)uVar29;
      if (uVar29 < 2) {
         uVar32 = 2;
      }

      uVar29 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar32;
      pvVar1 = (void*)in_RSI[3];
      uVar32 = (ulong)uVar29 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[3] = lVar33;
      lVar33 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar29 * 8, false);
      *in_RSI = lVar33;
      lVar33 = Memory::alloc_static(uVar32, false);
      in_RSI[2] = lVar33;
      lVar33 = Memory::realloc_static((void*)in_RSI[1], uVar32, false);
      in_RSI[1] = lVar33;
      if (uVar29 != 0) {
         memset((void*)in_RSI[3], 0, uVar32);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar32 = 0;
         lVar41 = in_RSI[3];
         lVar40 = in_RSI[2];
         do {
            uVar43 = uVar32 & 0xffffffff;
            uVar44 = (undefined4)uVar32;
            uVar45 = 0;
            uVar29 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar32 * 4 ) * 4 );
            uVar39 = (ulong)uVar29;
            uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar42 = CONCAT44(0, uVar30);
            lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = uVar39 * lVar34;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar42;
            lVar35 = SUB168(auVar4 * auVar16, 8) * 4;
            iVar37 = SUB164(auVar4 * auVar16, 8);
            puVar36 = (uint*)( lVar41 + lVar35 );
            uVar38 = *puVar36;
            if (uVar38 == 0) {
               lVar34 = uVar32 * 4;
            }
 else {
               do {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar38 * lVar34;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar42;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar5 * auVar17, 8)) * lVar34;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar42;
                  local_88 = SUB164(auVar6 * auVar18, 8);
                  if (local_88 < uVar45) {
                     *(int*)( lVar40 + uVar43 * 4 ) = iVar37;
                     uVar29 = *puVar36;
                     *puVar36 = (uint)uVar39;
                     uVar38 = *(uint*)( lVar35 + lVar33 );
                     uVar39 = (ulong)uVar29;
                     *(uint*)( lVar35 + lVar33 ) = (uint)uVar43;
                     uVar43 = (ulong)uVar38;
                     uVar45 = local_88;
                  }

                  uVar44 = (undefined4)uVar43;
                  uVar29 = (uint)uVar39;
                  uVar45 = uVar45 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar37 + 1) * lVar34;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar42;
                  lVar35 = SUB168(auVar7 * auVar19, 8) * 4;
                  iVar37 = SUB164(auVar7 * auVar19, 8);
                  puVar36 = (uint*)( lVar41 + lVar35 );
                  uVar38 = *puVar36;
               }
 while ( uVar38 != 0 );
               lVar34 = uVar43 << 2;
            }

            *puVar36 = uVar29;
            uVar32 = uVar32 + 1;
            *(int*)( lVar40 + lVar34 ) = iVar37;
            *(undefined4*)( lVar33 + lVar35 ) = uVar44;
         }
 while ( (uint)uVar32 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
   }

   uVar30 = String::hash();
   uVar32 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
   lVar33 = *in_RSI;
   uVar29 = 1;
   if (uVar30 != 0) {
      uVar29 = uVar30;
   }

   this(CowData<char32_t> * )(lVar33 + uVar32 * 8);
   uVar39 = (ulong)uVar29;
   *(undefined8*)this = 0;
   if (*(long*)in_RDX != 0) {
      CowData<char32_t>::_ref(this, (CowData*)in_RDX);
      uVar32 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
      lVar33 = *in_RSI;
   }

   uVar44 = (undefined4)uVar32;
   uVar45 = 0;
   lVar40 = in_RSI[3];
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar43 = CONCAT44(0, uVar30);
   lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar39 * lVar35;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar43;
   lVar41 = SUB168(auVar8 * auVar20, 8) * 4;
   iVar37 = SUB164(auVar8 * auVar20, 8);
   lVar34 = in_RSI[2];
   lVar3 = in_RSI[1];
   puVar36 = (uint*)( lVar40 + lVar41 );
   uVar38 = *puVar36;
   uVar42 = uVar32;
   while (uVar38 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar35;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar43;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar30 + iVar37 ) - SUB164(auVar9 * auVar21, 8)) * lVar35;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar43;
      local_88 = SUB164(auVar10 * auVar22, 8);
      if (local_88 < uVar45) {
         *(int*)( lVar34 + uVar42 * 4 ) = iVar37;
         uVar29 = *puVar36;
         *puVar36 = (uint)uVar39;
         puVar36 = (uint*)( lVar41 + lVar3 );
         uVar38 = *puVar36;
         uVar39 = (ulong)uVar29;
         *puVar36 = (uint)uVar32;
         uVar32 = (ulong)uVar38;
         uVar42 = uVar32;
         uVar45 = local_88;
      }

      uVar44 = (undefined4)uVar32;
      uVar29 = (uint)uVar39;
      uVar45 = uVar45 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar37 + 1) * lVar35;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar43;
      lVar41 = SUB168(auVar11 * auVar23, 8) * 4;
      iVar37 = SUB164(auVar11 * auVar23, 8);
      puVar36 = (uint*)( lVar40 + lVar41 );
      uVar38 = *puVar36;
   }
;
   *puVar36 = uVar29;
   *(int*)( lVar34 + uVar42 * 4 ) = iVar37;
   *(undefined4*)( lVar3 + lVar41 ) = uVar44;
   iVar31 = *(int*)( (long)in_RSI + 0x24 );
   iVar37 = iVar31 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar37;
   LAB_00109949:*(int*)( param_1 + 0xc ) = iVar31;
   *(long*)param_1 = lVar33;
   *(int*)( param_1 + 8 ) = iVar37;
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
/* WARNING: Removing unreachable block (ram,0x00109dc8) *//* WARNING: Removing unreachable block (ram,0x00109f5d) *//* WARNING: Removing unreachable block (ram,0x00109f69) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
   Variant *this;
   int iVar1;
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
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0010a100) *//* WARNING: Removing unreachable block (ram,0x0010a295) *//* WARNING: Removing unreachable block (ram,0x0010a2a1) *//* String vformat<String, StringName>(String const&, String const, StringName const) */undefined8 *vformat<String,StringName>(undefined8 *param_1, bool *param_2, String *param_3, StringName *param_4) {
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
/* WARNING: Removing unreachable block (ram,0x0010a448) *//* WARNING: Removing unreachable block (ram,0x0010a5dd) *//* WARNING: Removing unreachable block (ram,0x0010a5e9) *//* String vformat<String, String, String, String>(String const&, String const, String const, String
   const, String const) */undefined8 *vformat<String,String,String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4, String *param_5, String *param_6) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_108[8];
   undefined8 local_100[9];
   Variant local_b8[24];
   Variant local_a0[24];
   Variant local_88[24];
   Variant local_70[24];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_b8, param_3);
   Variant::Variant(local_a0, param_4);
   iVar4 = 0;
   Variant::Variant(local_88, param_5);
   Variant::Variant(local_70, param_6);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_108);
   iVar3 = (int)local_108;
   Array::resize(iVar3);
   pVVar2 = local_b8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 4 );
   String::sprintf((Array*)local_100, param_2);
   *param_1 = local_100[0];
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_108);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_b8 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, EditorExportPreset::FileExportMode, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorExportPreset::FileExportMode> > >::insert(String const&, EditorExportPreset::FileExportMode
   const&, bool) */String * HashMap<String,EditorExportPreset::FileExportMode,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorExportPreset::FileExportMode>>>
         ::insert(String *param_1,FileExportMode *param_2,bool param_3){
   undefined8 *puVar1;
   void *pvVar2;
   void *__s;
   long lVar3;
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
   char cVar28;
   uint uVar29;
   ulong uVar30;
   undefined8 uVar31;
   void *__s_00;
   void *pvVar32;
   undefined4 *in_RCX;
   int iVar33;
   undefined7 in_register_00000011;
   String *pSVar34;
   long lVar35;
   long lVar36;
   uint uVar37;
   ulong uVar38;
   undefined8 uVar39;
   uint *puVar40;
   uint uVar41;
   char in_R8B;
   uint uVar42;
   uint uVar43;
   ulong uVar44;
   long lVar45;
   undefined4 uVar46;
   uint uVar47;
   undefined1(*pauVar48)[16];
   undefined1(*pauVar49)[16];
   long in_FS_OFFSET;
   undefined1(*pauStack_c0)[16];
   long local_58;
   undefined4 local_50;
   long local_40;
   pSVar34 = (String*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar38 = (ulong)uVar37;
      uVar30 = uVar38 * 4;
      uVar44 = uVar38 * 8;
      uVar31 = Memory::alloc_static(uVar30, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar31;
      pvVar32 = (void*)Memory::alloc_static(uVar44, false);
      *(void**)( param_2 + 8 ) = pvVar32;
      if (uVar37 != 0) {
         pvVar2 = *(void**)( param_2 + 0x10 );
         if (( pvVar2 < (void*)( (long)pvVar32 + uVar44 ) ) && ( pvVar32 < (void*)( (long)pvVar2 + uVar30 ) )) {
            uVar30 = 0;
            do {
               *(undefined4*)( (long)pvVar2 + uVar30 * 4 ) = 0;
               *(undefined8*)( (long)pvVar32 + uVar30 * 8 ) = 0;
               uVar30 = uVar30 + 1;
            }
 while ( uVar38 != uVar30 );
         }
 else {
            memset(pvVar2, 0, uVar30);
            memset(pvVar32, 0, uVar44);
         }

         goto LAB_0010a688;
      }

      iVar33 = *(int*)( param_2 + 0x2c );
      if (pvVar32 == (void*)0x0) goto LAB_0010a697;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010aac8;
      LAB_0010a6bd:uVar37 = *(uint*)( param_2 + 0x28 );
      if (uVar37 == 0x1c) {
         pauStack_c0 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010aa77;
      }

      uVar30 = ( ulong )(uVar37 + 1);
      *(undefined4*)( param_2 + 0x2c ) = 0;
      uVar29 = *(uint*)( hash_table_size_primes + (ulong)uVar37 * 4 );
      if (uVar37 + 1 < 2) {
         uVar30 = 2;
      }

      uVar37 = *(uint*)( hash_table_size_primes + uVar30 * 4 );
      uVar38 = (ulong)uVar37;
      *(int*)( param_2 + 0x28 ) = (int)uVar30;
      pvVar32 = *(void**)( param_2 + 8 );
      uVar30 = uVar38 * 4;
      uVar44 = uVar38 * 8;
      pvVar2 = *(void**)( param_2 + 0x10 );
      uVar31 = Memory::alloc_static(uVar30, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar31;
      __s_00 = (void*)Memory::alloc_static(uVar44, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar37 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar30 ) )) {
            uVar30 = 0;
            do {
               *(undefined4*)( (long)__s + uVar30 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar30 * 8 ) = 0;
               uVar30 = uVar30 + 1;
            }
 while ( uVar30 != uVar38 );
         }
 else {
            memset(__s, 0, uVar30);
            memset(__s_00, 0, uVar44);
         }

      }

      if (uVar29 != 0) {
         uVar30 = 0;
         do {
            uVar37 = *(uint*)( (long)pvVar2 + uVar30 * 4 );
            if (uVar37 != 0) {
               lVar3 = *(long*)( param_2 + 0x10 );
               uVar42 = 0;
               uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar44 = CONCAT44(0, uVar41);
               lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar4._8_8_ = 0;
               auVar4._0_8_ = (ulong)uVar37 * lVar45;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar44;
               lVar35 = SUB168(auVar4 * auVar16, 8);
               puVar40 = (uint*)( lVar3 + lVar35 * 4 );
               iVar33 = SUB164(auVar4 * auVar16, 8);
               uVar43 = *puVar40;
               uVar31 = *(undefined8*)( (long)pvVar32 + uVar30 * 8 );
               while (uVar43 != 0) {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar43 * lVar45;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar44;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar41 + iVar33 ) - SUB164(auVar5 * auVar17, 8)) * lVar45;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar44;
                  uVar47 = SUB164(auVar6 * auVar18, 8);
                  uVar39 = uVar31;
                  if (uVar47 < uVar42) {
                     *puVar40 = uVar37;
                     puVar1 = (undefined8*)( (long)__s_00 + lVar35 * 8 );
                     uVar39 = *puVar1;
                     *puVar1 = uVar31;
                     uVar37 = uVar43;
                     uVar42 = uVar47;
                  }

                  uVar42 = uVar42 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar33 + 1) * lVar45;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar44;
                  lVar35 = SUB168(auVar7 * auVar19, 8);
                  puVar40 = (uint*)( lVar3 + lVar35 * 4 );
                  iVar33 = SUB164(auVar7 * auVar19, 8);
                  uVar31 = uVar39;
                  uVar43 = *puVar40;
               }
;
               *(undefined8*)( (long)__s_00 + lVar35 * 8 ) = uVar31;
               *puVar40 = uVar37;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar30 = uVar30 + 1;
         }
 while ( uVar29 != uVar30 );
         Memory::free_static(pvVar32, false);
         Memory::free_static(pvVar2, false);
      }

   }
 else {
      LAB_0010a688:iVar33 = *(int*)( param_2 + 0x2c );
      if (iVar33 != 0) {
         LAB_0010aac8:uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar30 = CONCAT44(0, uVar29);
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar43 = String::hash();
         lVar45 = *(long*)( param_2 + 0x10 );
         uVar41 = 1;
         if (uVar43 != 0) {
            uVar41 = uVar43;
         }

         uVar47 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar41 * lVar3;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar30;
         lVar35 = SUB168(auVar12 * auVar24, 8);
         uVar43 = *(uint*)( lVar45 + lVar35 * 4 );
         uVar42 = SUB164(auVar12 * auVar24, 8);
         if (uVar43 != 0) {
            do {
               if (uVar41 == uVar43) {
                  cVar28 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar35 * 8 ) + 0x10 ), pSVar34);
                  if (cVar28 != '\0') {
                     pauStack_c0 = *(undefined1(**) [16])( *(long*)( param_2 + 8 ) + (ulong)uVar42 * 8 );
                     *(undefined4*)( pauStack_c0[1] + 8 ) = *in_RCX;
                     goto LAB_0010aa77;
                  }

                  lVar45 = *(long*)( param_2 + 0x10 );
               }

               uVar47 = uVar47 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(uVar42 + 1) * lVar3;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar30;
               lVar35 = SUB168(auVar13 * auVar25, 8);
               uVar43 = *(uint*)( lVar45 + lVar35 * 4 );
               uVar42 = SUB164(auVar13 * auVar25, 8);
            }
 while ( ( uVar43 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar43 * lVar3,auVar26._8_8_ = 0,auVar26._0_8_ = uVar30,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar29 + uVar42 ) - SUB164(auVar14 * auVar26, 8)) * lVar3,auVar27._8_8_ = 0,auVar27._0_8_ = uVar30,uVar47 <= SUB164(auVar15 * auVar27, 8) );
         }

         iVar33 = *(int*)( param_2 + 0x2c );
      }

      LAB_0010a697:if ((float)uVar37 * __LC16 < (float)( iVar33 + 1 )) goto LAB_0010a6bd;
   }

   local_58 = 0;
   if (*(long*)pSVar34 == 0) {
      uVar46 = *in_RCX;
      local_50 = uVar46;
      pauStack_c0 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauStack_c0[1] = 0;
      *pauStack_c0 = (undefined1[16])0x0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)pSVar34);
      lVar3 = local_58;
      uVar46 = *in_RCX;
      local_50 = uVar46;
      pauStack_c0 = (undefined1(*) [16])operator_new(0x20, "");
      *(undefined8*)pauStack_c0[1] = 0;
      *(undefined8*)*pauStack_c0 = 0;
      *(undefined8*)( *pauStack_c0 + 8 ) = 0;
      if (lVar3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauStack_c0 + 1 ), (CowData*)&local_58);
      }

   }

   *(undefined4*)( pauStack_c0[1] + 8 ) = uVar46;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   puVar1 = *(undefined8**)( param_2 + 0x20 );
   if (puVar1 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauStack_c0;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauStack_c0;
   }
 else if (in_R8B == '\0') {
      *puVar1 = pauStack_c0;
      *(undefined8**)( *pauStack_c0 + 8 ) = puVar1;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauStack_c0;
   }
 else {
      lVar3 = *(long*)( param_2 + 0x18 );
      *(undefined1(**) [16])( lVar3 + 8 ) = pauStack_c0;
      *(long*)*pauStack_c0 = lVar3;
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauStack_c0;
   }

   uVar29 = String::hash();
   lVar3 = *(long*)( param_2 + 0x10 );
   uVar37 = 1;
   if (uVar29 != 0) {
      uVar37 = uVar29;
   }

   lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar30 = CONCAT44(0, uVar29);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = (ulong)uVar37 * lVar45;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar30;
   lVar36 = SUB168(auVar8 * auVar20, 8);
   lVar35 = *(long*)( param_2 + 8 );
   puVar40 = (uint*)( lVar3 + lVar36 * 4 );
   iVar33 = SUB164(auVar8 * auVar20, 8);
   uVar41 = *puVar40;
   pauVar49 = pauStack_c0;
   if (uVar41 != 0) {
      uVar43 = 0;
      pauVar48 = pauStack_c0;
      do {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = (ulong)uVar41 * lVar45;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar30;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( ulong )(( uVar29 + iVar33 ) - SUB164(auVar9 * auVar21, 8)) * lVar45;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar30;
         uVar42 = SUB164(auVar10 * auVar22, 8);
         pauVar49 = pauVar48;
         if (uVar42 < uVar43) {
            *puVar40 = uVar37;
            puVar1 = (undefined8*)( lVar35 + lVar36 * 8 );
            pauVar49 = (undefined1(*) [16])*puVar1;
            *puVar1 = pauVar48;
            uVar43 = uVar42;
            uVar37 = uVar41;
         }

         uVar43 = uVar43 + 1;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(iVar33 + 1) * lVar45;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar30;
         lVar36 = SUB168(auVar11 * auVar23, 8);
         puVar40 = (uint*)( lVar3 + lVar36 * 4 );
         iVar33 = SUB164(auVar11 * auVar23, 8);
         uVar41 = *puVar40;
         pauVar48 = pauVar49;
      }
 while ( uVar41 != 0 );
   }

   *(undefined1(**) [16])( lVar35 + lVar36 * 8 ) = pauVar49;
   *puVar40 = uVar37;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010aa77:*(undefined1(**) [16])param_1 = pauStack_c0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_initialize_classv() */void RefCounted::_initialize_classv(void) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_60;
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
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   undefined4 *puVar5;
   undefined7 in_register_00000031;
   List *pLVar6;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   if (local_90 == 0) {
      LAB_0010b058:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010b058;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x0010b07a;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x0010b07a:if (lVar2 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar6 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
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

   StringName::operator =((StringName*)( puVar5 + 4 ), local_a8);
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
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
/* MethodBind* create_method_bind<EditorExportPreset, String, StringName const&>(String
   (EditorExportPreset::*)(StringName const&) const) */MethodBind *create_method_bind<EditorExportPreset,String,StringName_const&>(_func_String_StringName_ptr *param_1) {
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
   *(_func_String_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115918;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, bool, StringName const&>(bool
   (EditorExportPreset::*)(StringName const&) const) */MethodBind *create_method_bind<EditorExportPreset,bool,StringName_const&>(_func_bool_StringName_ptr *param_1) {
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
   *(_func_bool_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115978;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, Vector<String>>(Vector<String>
   (EditorExportPreset::*)() const) */MethodBind *create_method_bind<EditorExportPreset,Vector<String>>(_func_Vector *param_1) {
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
   *(_func_Vector**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_001159d8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, Dictionary>(Dictionary
   (EditorExportPreset::*)() const) */MethodBind *create_method_bind<EditorExportPreset,Dictionary>(_func_Dictionary *param_1) {
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
   *(_func_Dictionary**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115a38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, int>(int (EditorExportPreset::*)() const) */MethodBind *create_method_bind<EditorExportPreset,int>(_func_int *param_1) {
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
   *(_func_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115a98;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, bool, String const&>(bool
   (EditorExportPreset::*)(String const&)) */MethodBind *create_method_bind<EditorExportPreset,bool,String_const&>(_func_bool_String_ptr *param_1) {
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
   *(_func_bool_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115af8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, EditorExportPreset::FileExportMode, String
   const&, EditorExportPreset::FileExportMode>(EditorExportPreset::FileExportMode
   (EditorExportPreset::*)(String const&, EditorExportPreset::FileExportMode) const) */MethodBind *create_method_bind<EditorExportPreset,EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>(_func_FileExportMode_String_ptr_FileExportMode *param_1) {
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
   *(_func_FileExportMode_String_ptr_FileExportMode**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115b58;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, String>(String (EditorExportPreset::*)()
   const) */MethodBind *create_method_bind<EditorExportPreset,String>(_func_String *param_1) {
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
   *(_func_String**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115bb8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, bool>(bool (EditorExportPreset::*)() const) */MethodBind *create_method_bind<EditorExportPreset,bool>(_func_bool *param_1) {
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
   *(_func_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115c18;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset,
   EditorExportPreset::ExportFilter>(EditorExportPreset::ExportFilter (EditorExportPreset::*)()
   const) */MethodBind *create_method_bind<EditorExportPreset,EditorExportPreset::ExportFilter>(_func_ExportFilter *param_1) {
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
   *(_func_ExportFilter**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115c78;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, Variant, StringName const&, String
   const&>(Variant (EditorExportPreset::*)(StringName const&, String const&) const) */MethodBind *create_method_bind<EditorExportPreset,Variant,StringName_const&,String_const&>(_func_Variant_StringName_ptr_String_ptr *param_1) {
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
   *(_func_Variant_StringName_ptr_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115cd8;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* MethodBind* create_method_bind<EditorExportPreset, String, StringName const&, bool>(String
   (EditorExportPreset::*)(StringName const&, bool) const) */MethodBind *create_method_bind<EditorExportPreset,String,StringName_const&,bool>(_func_String_StringName_ptr_bool *param_1) {
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
   *(_func_String_StringName_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00115d38;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "EditorExportPreset";
   local_30 = 0x12;
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
/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   long local_60;
   char local_58[8];
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x10c1aa);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_48 = &_LC22;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar4 = 0;
         lVar3 = -2;
      }
 else {
         lVar4 = *(long*)( local_50 + -8 );
         lVar3 = lVar4 + -2;
         if (-1 < lVar3) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar3 * 8 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_0010c29b;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   local_60 = 0;
   local_48 = &_LC22;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
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

   LAB_0010c29b:CowData<String>::_unref((CowData<String>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<EditorExportPreset::FileExportMode, void>::get_class_info() */GetTypeInfo<EditorExportPreset::FileExportMode,void> * __thiscall
GetTypeInfo<EditorExportPreset::FileExportMode,void>::get_class_info
          (GetTypeInfo<EditorExportPreset::FileExportMode,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "EditorExportPreset::FileExportMode";
   local_40 = 0x22;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<EditorExportPreset::ExportFilter, void>::get_class_info() */GetTypeInfo<EditorExportPreset::ExportFilter,void> * __thiscall
GetTypeInfo<EditorExportPreset::ExportFilter,void>::get_class_info
          (GetTypeInfo<EditorExportPreset::ExportFilter,void> *this){
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "EditorExportPreset::ExportFilter";
   local_40 = 0x20;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
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

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorExportPreset::ExportFilter>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<EditorExportPreset::ExportFilter>::_gen_argument_type_info(int param_1) {
   long *plVar1;
   long lVar2;
   char *pcVar3;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_30 = 0x20;
   local_38 = "EditorExportPreset::ExportFilter";
   String::parse_latin1((StrRange*)&local_40);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_38, (String*)&local_40);
   StringName::StringName((StringName*)&local_48, (String*)&local_38, false);
   *puVar4 = 2;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   puVar4[10] = 0x10006;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
      StringName::unref();
   }

   pcVar3 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static(pcVar3 + -0x10, false);
      }

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
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPreset::_initialize_classv() */void EditorExportPreset::_initialize_classv(void) {
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
      local_48 = "EditorExportPreset";
      local_60 = 0;
      local_40 = 0x12;
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
/* EditorExportPreset::~EditorExportPreset() */void EditorExportPreset::~EditorExportPreset(EditorExportPreset *this) {
   long *plVar1;
   long *plVar2;
   uint uVar3;
   long lVar4;
   Object *pOVar5;
   char cVar6;
   long lVar7;
   void *pvVar8;
   bool bVar9;
   *(undefined***)this = &PTR__initialize_classv_001157b8;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x310 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x2f8 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x2f0 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x2e8 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x2e0 ));
   pvVar8 = *(void**)( this + 0x2b8 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0x2dc ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2d8 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x2dc ) = 0;
            *(undefined1(*) [16])( this + 0x2c8 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x2c0 ) + lVar7 ) != 0) {
                  bVar9 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x2c0 ) + lVar7 ) = 0;
                  pvVar8 = *(void**)( (long)pvVar8 + lVar7 * 2 );
                  if (( bVar9 ) && ( *(long*)( (long)pvVar8 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar8, false);
                  pvVar8 = *(void**)( this + 0x2b8 );
                  *(undefined8*)( (long)pvVar8 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar7 );
            *(undefined4*)( this + 0x2dc ) = 0;
            *(undefined1(*) [16])( this + 0x2c8 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_0010cb0c;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 0x2c0 ), false);
   }

   LAB_0010cb0c:pvVar8 = *(void**)( this + 0x288 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0x2ac ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x2a8 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x2ac ) = 0;
            *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x290 ) + lVar7 ) != 0) {
                  pvVar8 = *(void**)( (long)pvVar8 + lVar7 * 2 );
                  *(int*)( *(long*)( this + 0x290 ) + lVar7 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar8 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar8 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar8, false);
                  pvVar8 = *(void**)( this + 0x288 );
                  *(undefined8*)( (long)pvVar8 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x2ac ) = 0;
            *(undefined1(*) [16])( this + 0x298 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_0010cbe4;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 0x290 ), false);
   }

   LAB_0010cbe4:pvVar8 = *(void**)( this + 600 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0x27c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x278 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x27c ) = 0;
            *(undefined1(*) [16])( this + 0x268 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x260 ) + lVar7 ) != 0) {
                  pvVar8 = *(void**)( (long)pvVar8 + lVar7 * 2 );
                  *(int*)( *(long*)( this + 0x260 ) + lVar7 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar8 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar8 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar8, false);
                  pvVar8 = *(void**)( this + 600 );
                  *(undefined8*)( (long)pvVar8 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar7 );
            *(undefined4*)( this + 0x27c ) = 0;
            *(undefined1(*) [16])( this + 0x268 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_0010ccbc;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 0x260 ), false);
   }

   LAB_0010ccbc:pvVar8 = *(void**)( this + 0x228 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0x24c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x248 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x24c ) = 0;
            *(undefined1(*) [16])( this + 0x238 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x230 ) + lVar7 ) != 0) {
                  pvVar8 = *(void**)( (long)pvVar8 + lVar7 * 2 );
                  *(int*)( *(long*)( this + 0x230 ) + lVar7 ) = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar8 + 0x38 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar8 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar8 + 0x20 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar8 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar8, false);
                  pvVar8 = *(void**)( this + 0x228 );
                  *(undefined8*)( (long)pvVar8 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar3 << 2 );
            *(undefined4*)( this + 0x24c ) = 0;
            *(undefined1(*) [16])( this + 0x238 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_0010cdaf;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 0x230 ), false);
   }

   LAB_0010cdaf:CowData<String>::_unref((CowData<String>*)( this + 0x218 ));
   pvVar8 = *(void**)( this + 0x1e0 );
   if (pvVar8 != (void*)0x0) {
      if (*(int*)( this + 0x204 ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x200 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x204 ) = 0;
            *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x1e8 ) + lVar7 ) != 0) {
                  pvVar8 = *(void**)( (long)pvVar8 + lVar7 * 2 );
                  *(int*)( *(long*)( this + 0x1e8 ) + lVar7 ) = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar8 + 0x10 ));
                  Memory::free_static(pvVar8, false);
                  pvVar8 = *(void**)( this + 0x1e0 );
                  *(undefined8*)( (long)pvVar8 + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar7 );
            *(undefined4*)( this + 0x204 ) = 0;
            *(undefined1(*) [16])( this + 0x1f0 ) = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_0010ce63;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static(*(void**)( this + 0x1e8 ), false);
   }

   LAB_0010ce63:pvVar8 = *(void**)( this + 0x1b0 );
   if (pvVar8 == (void*)0x0) goto LAB_0010cf0f;
   if (*(int*)( this + 0x1d4 ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x1c8 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1d0 ) * 4 ) << 2);
         if (*(int*)( this + 0x1d4 ) == 0) goto LAB_0010cfb8;
      }

      lVar7 = 0;
      do {
         plVar2 = (long*)( (long)pvVar8 + lVar7 * 8 );
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

            pvVar8 = *(void**)( this + 0x1b0 );
         }

         lVar7 = lVar7 + 1;
      }
 while ( (uint)lVar7 < *(uint*)( this + 0x1d4 ) );
      *(undefined4*)( this + 0x1d4 ) = 0;
      if (pvVar8 == (void*)0x0) goto LAB_0010cf0f;
   }

   LAB_0010cfb8:Memory::free_static(pvVar8, false);
   Memory::free_static(*(void**)( this + 0x1c0 ), false);
   Memory::free_static(*(void**)( this + 0x1b8 ), false);
   Memory::free_static(*(void**)( this + 0x1c8 ), false);
   LAB_0010cf0f:CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1a8 ));
   for (int i = 0; i < 3; i++) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( this + ( -8*i + 416 ) ));
   }

   if (*(long*)( this + 0x180 ) != 0) {
      cVar6 = RefCounted::unreference();
      if (cVar6 != '\0') {
         pOVar5 = *(Object**)( this + 0x180 );
         cVar6 = predelete_handler(pOVar5);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   *(undefined***)this = &PTR__initialize_classv_00115658;
   Object::~Object((Object*)this);
   return;
}
/* EditorExportPreset::~EditorExportPreset() */void EditorExportPreset::~EditorExportPreset(EditorExportPreset *this) {
   ~EditorExportPreset(this)
   ;;
   operator_delete(this, 800);
   return;
}
/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Ref<EditorExportPlugin> >::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Ref<EditorExportPlugin>>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
      LAB_0010d510:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar10 == 0) goto LAB_0010d510;
   if (param_1 <= lVar6) {
      lVar6 = *(long*)this;
      uVar8 = param_1;
      while (lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar8) {
            LAB_0010d3e9:if (lVar10 != lVar7) {
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
            if (*(ulong*)( lVar6 + -8 ) <= uVar8) goto LAB_0010d3e9;
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
      goto LAB_0010d566;
   }

   if (lVar10 == lVar7) {
      LAB_0010d48f:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_0010d566:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar6 = puVar9[-1];
      if (param_1 <= lVar6) goto LAB_0010d47a;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0010d48f;
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
   LAB_0010d47a:puVar9[-1] = param_1;
   return 0;
}
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_resize_and_rehash(unsigned int)
    */void HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_resize_and_rehash(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&) */Variant * __thiscallHashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2ulong __nvoid *__sundefined1 auVar3[16]undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]uint uVar27uint uVar28undefined8 *puVar29undefined8 uVar30void *__s_00ulong uVar31int iVar32long lVar33long lVar34long lVar35ulong uVar36uint uVar37uint uVar38uint uVar39long lVar40undefined8 *puVar41long in_FS_OFFSETuint local_c8Variant *local_a8int local_98[2]undefined1 local_90[16]undefined1 local_78[16]long local_68int local_60[8]long local_40lVar40 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar36 = CONCAT44(0, uVar27);if (lVar40 == 0) {
   LAB_0010dcf0:local_90 = (undefined1[16])0x0;
   local_98[0] = 0;
   local_98[1] = 0;
   uVar31 = uVar36 * 4;
   __n = uVar36 * 8;
   uVar30 = Memory::alloc_static(uVar31, false);
   *(undefined8*)( this + 0x10 ) = uVar30;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar36 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
         uVar31 = 0;
         do {
            *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
            uVar31 = uVar31 + 1;
         }
 while ( uVar36 != uVar31 );
      }
 else {
         memset(__s, 0, uVar31);
         memset(__s_00, 0, __n);
      }

      LAB_0010d91e:iVar32 = *(int*)( this + 0x2c );
      if (iVar32 != 0) {
         LAB_0010d92e:uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar31 = CONCAT44(0, uVar27);
         lVar40 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar28 = StringName::get_empty_hash();
         }
 else {
            uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar28 == 0) {
            uVar28 = 1;
         }

         uVar39 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = (ulong)uVar28 * lVar40;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar31;
         lVar34 = SUB168(auVar7 * auVar19, 8);
         uVar38 = SUB164(auVar7 * auVar19, 8);
         uVar37 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
         if (uVar37 != 0) {
            do {
               if (( uVar28 == uVar37 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar34 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  Variant::operator =((Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar38 * 8 ) + 0x18 ), (Variant*)local_98);
                  local_a8 = (Variant*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar38 * 8 ) + 0x18 );
                  goto LAB_0010dc50;
               }

               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(uVar38 + 1) * lVar40;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar31;
               lVar34 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
               uVar38 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar37 * lVar40,auVar21._8_8_ = 0,auVar21._0_8_ = uVar31,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar27 + uVar38 ) - SUB164(auVar9 * auVar21, 8)) * lVar40,auVar22._8_8_ = 0,auVar22._0_8_ = uVar31,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

         iVar32 = *(int*)( this + 0x2c );
      }

      goto LAB_0010da55;
   }

   iVar32 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_0010da55;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010d92e;
   LAB_0010da77:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_a8 = (Variant*)0x18;
      goto LAB_0010dc50;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar28 = StringName::get_empty_hash();
         lVar40 = *(long*)( this + 8 );
      }
 else {
         uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar28 == 0) {
         uVar28 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar28 * lVar34;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar36;
      lVar33 = SUB168(auVar3 * auVar15, 8);
      uVar38 = SUB164(auVar3 * auVar15, 8);
      uVar37 = *(uint*)( *(long*)( this + 0x10 ) + lVar33 * 4 );
      if (uVar37 != 0) {
         uVar39 = 0;
         do {
            if (( uVar28 == uVar37 ) && ( *(long*)( *(long*)( lVar40 + lVar33 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               local_a8 = (Variant*)( *(long*)( lVar40 + (ulong)uVar38 * 8 ) + 0x18 );
               goto LAB_0010d8c4;
            }

            uVar39 = uVar39 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar38 + 1) * lVar34;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar36;
            lVar33 = SUB168(auVar4 * auVar16, 8);
            uVar37 = *(uint*)( *(long*)( this + 0x10 ) + lVar33 * 4 );
            uVar38 = SUB164(auVar4 * auVar16, 8);
         }
 while ( ( uVar37 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar37 * lVar34,auVar17._8_8_ = 0,auVar17._0_8_ = uVar36,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar38 + uVar27 ) - SUB164(auVar5 * auVar17, 8)) * lVar34,auVar18._8_8_ = 0,auVar18._0_8_ = uVar36,uVar39 <= SUB164(auVar6 * auVar18, 8) );
      }

      local_98[0] = 0;
      local_98[1] = 0;
      local_90 = (undefined1[16])0x0;
      uVar36 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar40 == 0) goto LAB_0010dcf0;
      goto LAB_0010d91e;
   }

   local_98[0] = 0;
   local_98[1] = 0;
   local_90 = (undefined1[16])0x0;
   iVar32 = 0;
   LAB_0010da55:if ((float)uVar36 * __LC16 < (float)( iVar32 + 1 )) goto LAB_0010da77;
}
local_78 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_68, param_1);Variant::Variant((Variant*)local_60, (Variant*)local_98);puVar29 = (undefined8*)operator_new(0x30, "");*puVar29 = local_78._0_8_;puVar29[1] = local_78._8_8_;StringName::StringName((StringName*)( puVar29 + 2 ), (StringName*)&local_68);local_a8 = (Variant*)( puVar29 + 3 );Variant::Variant(local_a8, (Variant*)local_60);if (Variant::needs_deinit[local_60[0]] != '\0') {
   Variant::_clear_internal();
}
if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
   StringName::unref();
}
if (*(undefined8**)( this + 0x20 ) == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar29;
}
 else {
   **(undefined8**)( this + 0x20 ) = puVar29;
   puVar29[1] = *(undefined8*)( this + 0x20 );
}
*(undefined8**)( this + 0x20 ) = puVar29;if (*(long*)param_1 == 0) {
   uVar27 = StringName::get_empty_hash();
}
 else {
   uVar27 = *(uint*)( *(long*)param_1 + 0x20 );
}
if (uVar27 == 0) {
   uVar27 = 1;
}
uVar36 = (ulong)uVar27;uVar38 = 0;lVar40 = *(long*)( this + 0x10 );lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar31 = CONCAT44(0, uVar28);auVar11._8_8_ = 0;auVar11._0_8_ = uVar36 * lVar34;auVar23._8_8_ = 0;auVar23._0_8_ = uVar31;lVar35 = SUB168(auVar11 * auVar23, 8);lVar33 = *(long*)( this + 8 );puVar1 = (uint*)( lVar40 + lVar35 * 4 );iVar32 = SUB164(auVar11 * auVar23, 8);uVar37 = *puVar1;while (uVar37 != 0) {
   auVar12._8_8_ = 0;
   auVar12._0_8_ = (ulong)uVar37 * lVar34;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar31;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(( uVar28 + iVar32 ) - SUB164(auVar12 * auVar24, 8)) * lVar34;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar31;
   local_c8 = SUB164(auVar13 * auVar25, 8);
   puVar41 = puVar29;
   if (local_c8 < uVar38) {
      puVar2 = (undefined8*)( lVar33 + lVar35 * 8 );
      *puVar1 = (uint)uVar36;
      uVar36 = (ulong)uVar37;
      puVar41 = (undefined8*)*puVar2;
      *puVar2 = puVar29;
      uVar38 = local_c8;
   }

   uVar27 = (uint)uVar36;
   uVar38 = uVar38 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(iVar32 + 1) * lVar34;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar31;
   lVar35 = SUB168(auVar14 * auVar26, 8);
   puVar1 = (uint*)( lVar40 + lVar35 * 4 );
   iVar32 = SUB164(auVar14 * auVar26, 8);
   puVar29 = puVar41;
   uVar37 = *puVar1;
}
;*(undefined8**)( lVar33 + lVar35 * 8 ) = puVar29;*puVar1 = uVar27;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010dc50:if (Variant::needs_deinit[local_98[0]] != '\0') {
   Variant::_clear_internal();
}
LAB_0010d8c4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_a8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::insert(StringName const&, Variant
   const&, bool) */StringName *
HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
::insert(StringName *param_1,Variant *param_2,bool param_3){
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   long lVar4;
   void *__s;
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
   ulong uVar21;
   undefined8 *puVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   undefined8 uVar26;
   void *__s_00;
   Variant *in_RCX;
   uint uVar27;
   int iVar28;
   undefined7 in_register_00000011;
   StringName *pSVar29;
   long lVar30;
   long lVar31;
   ulong uVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   undefined8 *puVar36;
   long in_FS_OFFSET;
   undefined8 *local_90;
   long local_68;
   int local_60[8];
   long local_40;
   pSVar29 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar21 = (ulong)uVar23;
      uVar32 = uVar21 * 4;
      uVar34 = uVar21 * 8;
      uVar26 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar21 != uVar32 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_0010de62;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_0010df59;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0010de6e;
      LAB_0010df7b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_90 = (undefined8*)0x0;
         goto LAB_0010e133;
      }

      _resize_and_rehash((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0010de62:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_0010de6e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar3);
         lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar29 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar29 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar24 * lVar25;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar32;
         lVar30 = SUB168(auVar5 * auVar13, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
         uVar27 = SUB164(auVar5 * auVar13, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar30 * 8 ) + 0x10 ) == *(long*)pSVar29 )) {
                  Variant::operator =((Variant*)( *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 ) + 0x18 ), in_RCX);
                  local_90 = *(undefined8**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  goto LAB_0010e133;
               }

               uVar35 = uVar35 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar27 + 1) * lVar25;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar32;
               lVar30 = SUB168(auVar6 * auVar14, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
               uVar27 = SUB164(auVar6 * auVar14, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar33 * lVar25,auVar15._8_8_ = 0,auVar15._0_8_ = uVar32,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar3 + uVar27 ) - SUB164(auVar7 * auVar15, 8)) * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar32,uVar35 <= SUB164(auVar8 * auVar16, 8) );
         }

         iVar28 = *(int*)( param_2 + 0x2c );
      }

      LAB_0010df59:if ((float)uVar23 * __LC16 < (float)( iVar28 + 1 )) goto LAB_0010df7b;
   }

   StringName::StringName((StringName*)&local_68, pSVar29);
   Variant::Variant((Variant*)local_60, in_RCX);
   local_90 = (undefined8*)operator_new(0x30, "");
   *local_90 = 0;
   local_90[1] = 0;
   StringName::StringName((StringName*)( local_90 + 2 ), (StringName*)&local_68);
   Variant::Variant((Variant*)( local_90 + 3 ), (Variant*)local_60);
   if (Variant::needs_deinit[local_60[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
      StringName::unref();
   }

   if (*(undefined8**)( param_2 + 0x20 ) == (undefined8*)0x0) {
      *(undefined8**)( param_2 + 0x18 ) = local_90;
      *(undefined8**)( param_2 + 0x20 ) = local_90;
      LAB_0010e052:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_0010e05f;
      LAB_0010e195:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         **(undefined8**)( param_2 + 0x20 ) = local_90;
         local_90[1] = *(undefined8*)( param_2 + 0x20 );
         *(undefined8**)( param_2 + 0x20 ) = local_90;
         goto LAB_0010e052;
      }

      *(undefined8**)( *(long*)( param_2 + 0x18 ) + 8 ) = local_90;
      *local_90 = *(undefined8*)( param_2 + 0x18 );
      lVar25 = *(long*)pSVar29;
      *(undefined8**)( param_2 + 0x18 ) = local_90;
      if (lVar25 == 0) goto LAB_0010e195;
      LAB_0010e05f:uVar23 = *(uint*)( lVar25 + 0x20 );
   }

   lVar25 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar32 = (ulong)uVar23;
   uVar33 = 0;
   lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar32 * lVar30;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar34;
   lVar31 = SUB168(auVar9 * auVar17, 8);
   lVar4 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar25 + lVar31 * 4 );
   iVar28 = SUB164(auVar9 * auVar17, 8);
   uVar24 = *puVar1;
   puVar22 = local_90;
   while (uVar24 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar24 * lVar30;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( iVar28 + uVar3 ) - SUB164(auVar10 * auVar18, 8)) * lVar30;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      uVar23 = SUB164(auVar11 * auVar19, 8);
      puVar36 = puVar22;
      if (uVar23 < uVar33) {
         *puVar1 = (uint)uVar32;
         uVar32 = (ulong)uVar24;
         puVar2 = (undefined8*)( lVar4 + lVar31 * 8 );
         puVar36 = (undefined8*)*puVar2;
         *puVar2 = puVar22;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar32;
      uVar33 = uVar33 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar28 + 1) * lVar30;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      lVar31 = SUB168(auVar12 * auVar20, 8);
      puVar1 = (uint*)( lVar25 + lVar31 * 4 );
      iVar28 = SUB164(auVar12 * auVar20, 8);
      puVar22 = puVar36;
      uVar24 = *puVar1;
   }
;
   *(undefined8**)( lVar4 + lVar31 * 8 ) = puVar22;
   *puVar1 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0010e133:*(undefined8**)param_1 = local_90;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<Ref<EditorExportPlugin> >::_unref() */void CowData<Ref<EditorExportPlugin>>::_unref(CowData<Ref<EditorExportPlugin>> *this) {
   long *plVar1;
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
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) {
      *(undefined8*)this = 0;
      return;
   }

   plVar1 = *(long**)this;
   if (plVar1 == (long*)0x0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar2 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar2 != 0) {
      lVar7 = 0;
      plVar6 = plVar1;
      LAB_0010e34d:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pOVar3 = (Object*)*plVar6;
               cVar5 = predelete_handler(pOVar3);
               if (cVar5 != '\0') {
                  lVar7 = lVar7 + 1;
                  plVar6 = plVar6 + 1;
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
                  if (lVar2 == lVar7) break;
                  goto LAB_0010e34d;
               }

            }

         }

         lVar7 = lVar7 + 1;
         plVar6 = plVar6 + 1;
      }
 while ( lVar2 != lVar7 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* EditorExportPreset::_setv(StringName const&, Variant const&) */void EditorExportPreset::_setv(EditorExportPreset *this, StringName *param_1, Variant *param_2) {
   _set(this, param_1, param_2);
   return;
}
/* EditorExportPreset::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorExportPreset::_get_property_listv(EditorExportPreset *this, List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   long in_FS_OFFSET;
   StringName *local_a8;
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
   local_78 = "EditorExportPreset";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorExportPreset";
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
   if (local_90 == 0) {
      LAB_0010e57d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010e57d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0010e59f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x0010e59f:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar3;
      *(undefined4*)pauVar3[1] = 0;
      *pauVar3 = (undefined1[16])0x0;
   }

   local_a8 = (StringName*)&local_68;
   puVar4 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   *(undefined8*)( puVar4 + 0x10 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0xc ) = (undefined1[16])0x0;
   *puVar4 = local_78._0_4_;
   if (local_70 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_70);
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), local_a8);
   puVar4[6] = local_60;
   if (*(long*)( puVar4 + 8 ) != local_58) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_58);
   }

   puVar4[10] = local_50;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( puVar4 + 0xc ) = 0;
   *(long**)( puVar4 + 0x10 ) = plVar1;
   *(long*)( puVar4 + 0xe ) = lVar2;
   if (lVar2 != 0) {
      *(undefined4**)( lVar2 + 0x30 ) = puVar4;
   }

   plVar1[1] = (long)puVar4;
   if (*plVar1 == 0) {
      *plVar1 = (long)puVar4;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
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

   StringName::StringName((StringName*)&local_78, "EditorExportPreset", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   _get_property_list(this, param_1);
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
/* WARNING: Removing unreachable block (ram,0x0010e8d8) *//* WARNING: Removing unreachable block (ram,0x0010ea6d) *//* WARNING: Removing unreachable block (ram,0x0010ea79) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   Variant *this;
   int iVar1;
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
   iVar1 = (int)local_c8;
   Array::resize(iVar1);
   this(Variant * Array::operator [](iVar1));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_c0, param_2);
   *param_1 = local_c0[0];
   Array::~Array(local_c8);
   if (Variant::needs_deinit[(int)local_60] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<String, StringName const&, bool>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<String,StringName_const&,bool>::validated_call(MethodBindTRC<String,StringName_const&,bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ec2d;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1][8]);
   if (*(char**)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_0010ec2d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, StringName const&, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String,StringName_const&,bool>::ptrcall(MethodBindTRC<String,StringName_const&,bool> *this, Object *param_1, void **param_2, void *param_3) {
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
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010ee2b;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1] != '\0');
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_0010ee2b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Variant, StringName const&, String const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTRC<Variant,StringName_const&,String_const&>::validated_call(MethodBindTRC<Variant,StringName_const&,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f025;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1] + 8);
   Variant::operator =(param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010f025:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Variant, StringName const&, String const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTRC<Variant,StringName_const&,String_const&>::ptrcall(MethodBindTRC<Variant,StringName_const&,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f23d;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((Variant*)local_48, param_1 + *(long*)( this + 0x60 ), *param_2, param_2[1]);
   Variant::operator =((Variant*)param_3, (Variant*)local_48);
   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   LAB_0010f23d:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorExportPreset::ExportFilter>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<EditorExportPreset::ExportFilter>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
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
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f530;
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

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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

   LAB_0010f530:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorExportPreset::ExportFilter>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<EditorExportPreset::ExportFilter>::validated_call(MethodBindTRC<EditorExportPreset::ExportFilter> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010f744;
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
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_0010f744:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorExportPreset::ExportFilter>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<EditorExportPreset::ExportFilter>::ptrcall(MethodBindTRC<EditorExportPreset::ExportFilter> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
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

         goto LAB_0010f8f3;
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
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_0010f8f3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   bool bVar2;
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
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010fb20;
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

         bVar2 = (bool)( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, bVar2);
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

   LAB_0010fb20:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool>::validated_call(MethodBindTRC<bool> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0010fd32;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ));
   param_3[8] = VVar1;
   LAB_0010fd32:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool>::ptrcall(MethodBindTRC<bool> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
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

         goto LAB_0010fee1;
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
   *(undefined1*)param_3 = uVar1;
   LAB_0010fee1:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<String>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110120;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

         ( *(code*)pVVar2 )((CowData<char32_t>*)&local_58);
         Variant::Variant((Variant*)local_48, (String*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
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

   LAB_00110120:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<String>::validated_call(MethodBindTRC<String> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant **ppVVar1;
   Variant **ppVVar2;
   code *pcVar3;
   long *plVar4;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (Variant**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x10eac8;
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

         goto LAB_00110381;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(Variant***)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   ppVVar2 = local_48;
   if (local_48 != (Variant**)0x0) {
      LOCK();
      ppVVar1 = local_48 + -2;
      *ppVVar1 = *ppVVar1 + -1;
      UNLOCK();
      if (*ppVVar1 == (Variant*)0x0) {
         local_48 = (Variant**)0x0;
         Memory::free_static(ppVVar2 + -2, false);
      }

   }

   LAB_00110381:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String>::ptrcall(MethodBindTRC<String> *this, Object *param_1, void **param_2, void *param_3) {
   void **ppvVar1;
   void **ppvVar2;
   code *pcVar3;
   long *plVar4;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_48 == (void**)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x10eac8;
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

         goto LAB_0011056e;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar3 = *(code**)( pcVar3 + (long)param_2 + -1 );
   }

   ( *pcVar3 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   ppvVar2 = local_48;
   if (local_48 != (void**)0x0) {
      LOCK();
      ppvVar1 = local_48 + -2;
      *ppvVar1 = (void*)( (long)*ppvVar1 + -1 );
      UNLOCK();
      if (*ppvVar1 == (void*)0x0) {
         local_48 = (void**)0x0;
         Memory::free_static(ppvVar2 + -2, false);
      }

   }

   LAB_0011056e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::validated_call(MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   uint uVar1;
   code *pcVar2;
   long *plVar3;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110722;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8, *(undefined4*)( param_2[1] + 8 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_00110722:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::ptrcall(MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode> *this, Object *param_1, void **param_2, void *param_3) {
   uint uVar1;
   code *pcVar2;
   long *plVar3;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001108fc;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1]);
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_001108fc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool, String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<bool,String_const&>::validated_call(MethodBindTR<bool,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   code *pcVar2;
   long *plVar3;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110ad9;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   param_3[8] = VVar1;
   LAB_00110ad9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<bool,String_const&>::ptrcall(MethodBindTR<bool,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110cb5;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(undefined1*)param_3 = uVar1;
   LAB_00110cb5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   int iVar2;
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
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00110f00;
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

         iVar2 = ( *(code*)pVVar3 )();
         Variant::Variant((Variant*)local_48, iVar2);
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

   LAB_00110f00:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<int>::validated_call(MethodBindTRC<int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111114;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_00111114:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int>::ptrcall(MethodBindTRC<int> *this, Object *param_1, void **param_2, void *param_3) {
   int iVar1;
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

         goto LAB_001112c3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ));
   *(long*)param_3 = (long)iVar1;
   LAB_001112c3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Dictionary>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Dictionary>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111500;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

         ( *(code*)pVVar2 )((Dictionary*)&local_58);
         Variant::Variant((Variant*)local_48, (Dictionary*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         Dictionary::~Dictionary((Dictionary*)&local_58);
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

   LAB_00111500:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Dictionary>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Dictionary>::validated_call(MethodBindTRC<Dictionary> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
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

      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x10eac8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111729;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Dictionary::operator =((Dictionary*)( param_3 + 8 ), (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_00111729:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Dictionary>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Dictionary>::ptrcall(MethodBindTRC<Dictionary> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
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

      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x10eac8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Dictionary*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Dictionary*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001118fa;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((Dictionary*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Dictionary::operator =((Dictionary*)param_3, (Dictionary*)&local_48);
   Dictionary::~Dictionary((Dictionary*)&local_48);
   LAB_001118fa:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Vector<String>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   long *plVar3;
   undefined4 in_register_00000014;
   long *plVar4;
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
   plVar4 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar4 != (long*)0x0 ) && ( plVar4[1] != 0 ) ) && ( *(char*)( plVar4[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar4[1] == 0) {
         plVar3 = (long*)plVar4[0x23];
         if (plVar3 == (long*)0x0) {
            plVar3 = (long*)( **(code**)( *plVar4 + 0x40 ) )(plVar4);
         }

      }
 else {
         plVar3 = (long*)( plVar4[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar3) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111b40;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
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

         ( *(code*)pVVar2 )((Vector*)&local_58);
         Variant::Variant((Variant*)local_48, (Vector*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         CowData<String>::_unref((CowData<String>*)&local_50);
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

   LAB_00111b40:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Vector<String>>::validated_call(MethodBindTRC<Vector<String>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   Variant **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Variant **local_48;
   long local_40[2];
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

      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (Variant**)0x10eac8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111d87;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(Variant***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( *(long*)( param_3 + 8 ) + 0x18 ) != local_40[0]) {
      CowData<String>::_ref((CowData<String>*)( *(long*)( param_3 + 8 ) + 0x18 ), (CowData*)local_40);
   }

   CowData<String>::_unref((CowData<String>*)local_40);
   LAB_00111d87:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Vector<String>>::ptrcall(MethodBindTRC<Vector<String>> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   void **extraout_RDX;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   void **local_48;
   long local_40[2];
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

      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_48 = (void**)0x10eac8;
         local_40[0] = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00111f63;
      }

      param_2 = local_48;
      if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
         StringName::unref();
         param_2 = extraout_RDX;
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      param_2 = *(void***)( param_1 + *(long*)( this + 0x60 ) );
      pcVar1 = *(code**)( pcVar1 + (long)param_2 + -1 );
   }

   ( *pcVar1 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   if (*(long*)( (long)param_3 + 8 ) != local_40[0]) {
      CowData<String>::_ref((CowData<String>*)( (long)param_3 + 8 ), (CowData*)local_40);
   }

   CowData<String>::_unref((CowData<String>*)local_40);
   LAB_00111f63:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<bool,StringName_const&>::validated_call(MethodBindTRC<bool,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Variant VVar1;
   code *pcVar2;
   long *plVar3;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112109;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   param_3[8] = VVar1;
   LAB_00112109:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,StringName_const&>::ptrcall(MethodBindTRC<bool,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
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
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001122e5;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(undefined1*)param_3 = uVar1;
   LAB_001122e5:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<String,StringName_const&>::validated_call(MethodBindTRC<String,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001124e3;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   if (*(char**)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_001124e3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<String,StringName_const&>::ptrcall(MethodBindTRC<String,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
         vformat<StringName>((CowData<char32_t>*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_001126ce;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_001126ce:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<String,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
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
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_001129b0;
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
         if (in_R8D != 1) goto LAB_00112a00;
         LAB_001129f0:pVVar10 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00112a00:uVar6 = 4;
            goto LAB_001129a5;
         }

         if (in_R8D == 1) goto LAB_001129f0;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC120;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar11 )((CowData<char32_t>*)&local_70, (Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, (String*)&local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar6 = 3;
      LAB_001129a5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_001129b0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<bool, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<bool,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00112d60;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00112db0;
         LAB_00112da0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00112db0:uVar7 = 4;
            goto LAB_00112d55;
         }

         if (in_R8D == 1) goto LAB_00112da0;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC120;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      bVar6 = (bool)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar6 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar6 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar7 = 3;
      LAB_00112d55:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00112d60:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<String, StringName const&, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<String,StringName_const&,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   int iVar7;
   undefined4 uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   Variant *pVVar12;
   int iVar13;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar14;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113170;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar15 = param_2[5];
      iVar7 = 2 - in_R8D;
      if (pVVar15 == (Variant*)0x0) {
         if (iVar7 != 0) goto LAB_001131b8;
         pVVar12 = *(Variant**)param_4;
         LAB_001131cd:pVVar15 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar15 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar7) {
            LAB_001131b8:uVar8 = 4;
            goto LAB_001131a5;
         }

         if (in_R8D == 0) {
            lVar10 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar10) goto LAB_001132a0;
            pVVar12 = pVVar15 + lVar10 * 0x18;
         }
 else {
            pVVar12 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_001131cd;
         }

         lVar10 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar13 - iVar7 ) );
         if (lVar2 <= lVar10) {
            LAB_001132a0:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar15 = pVVar15 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar14 & 1 ) != 0) {
         pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar15, 1);
      uVar4 = _LC121;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      bVar6 = Variant::operator_cast_to_bool(pVVar15);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x15);
      uVar4 = _LC120;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar14 )((CowData<char32_t>*)&local_70, (Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_68, bVar6);
      Variant::Variant((Variant*)local_58, (String*)&local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      uVar8 = 3;
      LAB_001131a5:*in_R9 = uVar8;
      in_R9[2] = 2;
   }

   LAB_00113170:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<bool, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<bool,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113540;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00113590;
         LAB_00113580:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00113590:uVar7 = 4;
            goto LAB_00113535;
         }

         if (in_R8D == 1) goto LAB_00113580;
         lVar9 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar11 = pVVar11 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 4);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      bVar6 = (bool)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_00113535:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_00113540:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<Variant, StringName const&, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<Variant,StringName_const&,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   Variant *pVVar11;
   int iVar12;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar13;
   Variant *pVVar14;
   long in_FS_OFFSET;
   bool bVar15;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }

      }
 else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113941;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar14 = param_2[5];
      iVar6 = 2 - in_R8D;
      if (pVVar14 == (Variant*)0x0) {
         if (iVar6 != 0) goto LAB_00113988;
         pVVar11 = *(Variant**)param_4;
         LAB_0011399d:pVVar14 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar6) {
            LAB_00113988:uVar7 = 4;
            goto LAB_00113975;
         }

         if (in_R8D == 0) {
            lVar9 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar9) goto LAB_00113a70;
            pVVar11 = pVVar14 + lVar9 * 0x18;
         }
 else {
            pVVar11 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_0011399d;
         }

         lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00113a70:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar14 = pVVar14 + lVar9 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar13 & 1 ) != 0) {
         pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar14, 4);
      uVar4 = _LC123;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_70);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC120;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar13 )(local_58, (Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68, (Variant*)&local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      bVar15 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar15 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }
 else {
      uVar7 = 3;
      LAB_00113975:*in_R9 = uVar7;
      in_R9[2] = 2;
   }

   LAB_00113941:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   ulong uVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   Variant *pVVar12;
   int iVar13;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar14;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_68 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC119, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_00113d5a;
      }

      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar15 = param_2[5];
      iVar6 = 2 - in_R8D;
      if (pVVar15 == (Variant*)0x0) {
         if (iVar6 != 0) goto LAB_00113d98;
         pVVar12 = *(Variant**)param_4;
         LAB_00113dad:pVVar15 = *(Variant**)( param_4 + 8 );
      }
 else {
         lVar2 = *(long*)( pVVar15 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar6) {
            LAB_00113d98:uVar7 = 4;
            goto LAB_00113d85;
         }

         if (in_R8D == 0) {
            lVar10 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar10) goto LAB_00113e80;
            pVVar12 = pVVar15 + lVar10 * 0x18;
         }
 else {
            pVVar12 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_00113dad;
         }

         lVar10 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar13 - iVar6 ) );
         if (lVar2 <= lVar10) {
            LAB_00113e80:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         pVVar15 = pVVar15 + lVar10 * 0x18;
      }

      *in_R9 = 0;
      if (( (ulong)pVVar14 & 1 ) != 0) {
         pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar15, 2);
      uVar4 = _LC124;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      uVar8 = Variant::operator_cast_to_long(pVVar15);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 4);
      uVar4 = _LC122;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar14 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_68, uVar8 & 0xffffffff);
      Variant::Variant((Variant*)local_58, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      uVar7 = 3;
      LAB_00113d85:*in_R9 = uVar7;
      in_R9[2] = 2;
   }

   LAB_00113d5a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<StringName_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_00114007;
   local_78 = 0;
   local_68 = &_LC5;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x15);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00114105:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00114105;
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
   LAB_00114007:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTRC<String, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String,StringName_const&>::_gen_argument_type_info(int param_1) {
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
      call_get_argument_type_info_helper<StringName_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
      goto LAB_001142d8;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC5;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 4;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_001143bf:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_001143bf;
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

   LAB_001142d8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, StringName const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,StringName_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_80;
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
      call_get_argument_type_info_helper<StringName_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
      goto LAB_001144d8;
   }

   local_80 = 0;
   local_78 = 0;
   local_68 = &_LC5;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_70 = 0;
   *puVar5 = 1;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_001145bf:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_80);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_001145bf;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   LAB_001144d8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<String, StringName const&, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<String,StringName_const&,bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   ulong local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   long local_60;
   ulong local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      local_a0 = local_a0 & 0xffffffff00000000;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_a0, (PropertyInfo*)&local_98);
      if (in_EDX == (uint)local_a0) {
         GetTypeInfo<bool,void>::get_class_info((GetTypeInfo<bool,void>*)&local_68);
         local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
         if (local_90._0_8_ != local_60) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
            local_90._0_8_ = local_60;
            local_60 = 0;
         }

         if (local_90._8_8_ != local_58) {
            StringName::unref();
            local_90._8_8_ = local_58;
            local_58 = 0;
         }

         local_80 = CONCAT44(local_80._4_4_, local_50);
         if (local_78 != local_48) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            local_78 = local_48;
            local_48 = 0;
         }

         local_70 = local_40;
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      }

      uVar3 = local_90._8_8_;
      uVar2 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(long*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      goto LAB_001147ae;
   }

   local_98 = 0;
   local_a0 = 0;
   local_68 = &_LC5;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 4;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_001147df:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_001147df;
      StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
      if (*(undefined**)( puVar4 + 4 ) == local_68) {
         if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(undefined**)( puVar4 + 4 ) = local_68;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
      StringName::unref();
   }

   LAB_001147ae:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_00114917;
   local_78 = 0;
   local_68 = &_LC5;
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
      LAB_00114a15:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00114a15;
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
   LAB_00114917:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<bool, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<bool,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   undefined8 uVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
   long in_FS_OFFSET;
   long local_80;
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
      call_get_argument_type_info_helper<String_const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
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
      goto LAB_00114be8;
   }

   local_80 = 0;
   local_78 = 0;
   local_68 = &_LC5;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_70 = 0;
   *puVar5 = 1;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_00114ccf:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_80);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_00114ccf;
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

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
      StringName::unref();
   }

   LAB_00114be8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<Variant, StringName const&, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Variant,StringName_const&,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_78;
   ulong local_70;
   long local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_60 = (undefined1[16])0x0;
      local_68 = 0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      call_get_argument_type_info_helper<StringName_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_68;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   }
 else {
      *puVar4 = 0;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 0x20006;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      local_68 = 0;
      local_70 = 0;
      local_78 = 0;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
         StringName::unref();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   long local_b0;
   details local_a8[8];
   ulong local_a0;
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   long local_60;
   ulong local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 2) {
      local_98 = 0;
      local_80 = 0;
      local_78 = 0;
      local_70 = 6;
      local_a0 = local_a0 & 0xffffffff00000000;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_a0, (PropertyInfo*)&local_98);
      if (in_EDX == (uint)local_a0) {
         GetTypeInfo<EditorExportPreset::FileExportMode,void>::get_class_info((GetTypeInfo<EditorExportPreset::FileExportMode,void>*)&local_68);
         local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
         if (local_90._0_8_ != local_60) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
            local_90._0_8_ = local_60;
            local_60 = 0;
         }

         if (local_90._8_8_ != local_58) {
            StringName::unref();
            local_90._8_8_ = local_58;
            local_58 = 0;
         }

         local_80 = CONCAT44(local_80._4_4_, local_50);
         if (local_78 != local_48) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            local_78 = local_48;
            local_48 = 0;
         }

         local_70 = local_40;
         PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
      }

      uVar3 = local_90._8_8_;
      uVar2 = local_90._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_90._8_8_;
      local_90 = auVar1 << 0x40;
      *puVar4 = (undefined4)local_98;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_80;
      *(long*)( puVar4 + 8 ) = local_78;
      puVar4[10] = local_70;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   }
 else {
      local_a0 = 0;
      local_60 = 0x22;
      local_68 = "EditorExportPreset::FileExportMode";
      String::parse_latin1((StrRange*)&local_a0);
      godot::details::enum_qualified_name_to_class_info_name(local_a8, (String*)&local_a0);
      StringName::StringName((StringName*)&local_b0, (String*)local_a8, false);
      *puVar4 = 2;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 0x10006;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      local_98 = 0;
      local_68 = (char*)0x0;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorExportPreset::_set(StringName const&, Variant const&) */void EditorExportPreset::_GLOBAL__sub_I__set(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* EditorExportPreset::~EditorExportPreset() */void EditorExportPreset::~EditorExportPreset(EditorExportPreset *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String, StringName const&, bool>::~MethodBindTRC() */void MethodBindTRC<String,StringName_const&,bool>::~MethodBindTRC(MethodBindTRC<String,StringName_const&,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Variant, StringName const&, String const&>::~MethodBindTRC() */void MethodBindTRC<Variant,StringName_const&,String_const&>::~MethodBindTRC(MethodBindTRC<Variant,StringName_const&,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<int>::~MethodBindTRC() */void MethodBindTRC<int>::~MethodBindTRC(MethodBindTRC<int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String>::~MethodBindTRC() */void MethodBindTRC<String>::~MethodBindTRC(MethodBindTRC<String> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool>::~MethodBindTRC() */void MethodBindTRC<bool>::~MethodBindTRC(MethodBindTRC<bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<EditorExportPreset::ExportFilter>::~MethodBindTRC() */void MethodBindTRC<EditorExportPreset::ExportFilter>::~MethodBindTRC(MethodBindTRC<EditorExportPreset::ExportFilter> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<EditorExportPreset::FileExportMode, String const&,
   EditorExportPreset::FileExportMode>::~MethodBindTRC() */void MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode>::~MethodBindTRC(MethodBindTRC<EditorExportPreset::FileExportMode,String_const&,EditorExportPreset::FileExportMode> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<bool, String const&>::~MethodBindTR() */void MethodBindTR<bool,String_const&>::~MethodBindTR(MethodBindTR<bool,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<Dictionary>::~MethodBindTRC() */void MethodBindTRC<Dictionary>::~MethodBindTRC(MethodBindTRC<Dictionary> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<String, StringName const&>::~MethodBindTRC() */void MethodBindTRC<String,StringName_const&>::~MethodBindTRC(MethodBindTRC<String,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


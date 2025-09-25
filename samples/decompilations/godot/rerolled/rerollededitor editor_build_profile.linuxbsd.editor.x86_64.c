/* EditorBuildProfileManager::_hide_requested() */void EditorBuildProfileManager::_hide_requested(void) {
   AcceptDialog::_cancel_pressed();
   return;
}
/* EditorBuildProfile::is_build_option_disabled(EditorBuildProfile::BuildOption) const */EditorBuildProfile EditorBuildProfile::is_build_option_disabled(EditorBuildProfile *this, uint param_2) {
   if (param_2 < 0xe) {
      return this[(long)(int)param_2 + 0x1d8];
   }

   _err_print_index_error("is_build_option_disabled", "editor/editor_build_profile.cpp", 0x98, (ulong)param_2, 0xe, "p_build_option", "BUILD_OPTION_MAX", "", false, false);
   return (EditorBuildProfile)0x0;
}
/* EditorBuildProfile::set_disable_build_option(EditorBuildProfile::BuildOption, bool) */void EditorBuildProfile::set_disable_build_option(EditorBuildProfile *this, uint param_2, EditorBuildProfile param_3) {
   if (param_2 < 0xe) {
      this[(long)(int)param_2 + 0x1d8] = param_3;
      return;
   }

   _err_print_index_error("set_disable_build_option", "editor/editor_build_profile.cpp", 0x8e, (ulong)param_2, 0xe, "p_build_option", "BUILD_OPTION_MAX", "", false, false);
   return;
}
/* EditorBuildProfile::is_class_disabled(StringName const&) const [clone .part.0] */ulong EditorBuildProfile::is_class_disabled(EditorBuildProfile *this, StringName *param_1) {
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
   ulong uVar12;
   int iVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar12 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar12;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( this + 0x198 ) + lVar14 * 4 );
      iVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar15 = 0;
         do {
            if (( uVar11 == uVar16 ) && ( *(long*)( *(long*)( this + 0x180 ) + ( ulong ) * (uint*)( *(long*)( this + 0x188 ) + lVar14 * 4 ) * 8 ) == *(long*)param_1 )) {
               uVar12 = 1;
               goto LAB_001001f0;
            }

            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar12;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x198 ) + lVar14 * 4 );
            iVar13 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar12,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar12,uVar15 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   ClassDB::get_parent_class_nocheck((StringName*)&local_38);
   uVar12 = 0;
   if (local_38 != 0) {
      uVar12 = is_class_disabled(this, (StringName*)&local_38);
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
         uVar12 = uVar12 & 0xff;
      }

   }

   LAB_001001f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar12;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfile::is_class_disabled(StringName const&) const */ulong EditorBuildProfile::is_class_disabled(EditorBuildProfile *this, StringName *param_1) {
   long lVar1;
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
   ulong uVar12;
   int iVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   lVar1 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar12 = 0;
   if (lVar1 != 0) {
      if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
         uVar12 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ));
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
         uVar11 = *(uint*)( lVar1 + 0x20 );
         if (*(uint*)( lVar1 + 0x20 ) == 0) {
            uVar11 = 1;
         }

         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar11 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar12;
         lVar14 = SUB168(auVar3 * auVar7, 8);
         uVar15 = *(uint*)( *(long*)( this + 0x198 ) + lVar14 * 4 );
         iVar13 = SUB164(auVar3 * auVar7, 8);
         if (uVar15 != 0) {
            uVar16 = 0;
            do {
               if (( uVar15 == uVar11 ) && ( lVar1 == *(long*)( *(long*)( this + 0x180 ) + ( ulong ) * (uint*)( *(long*)( this + 0x188 ) + lVar14 * 4 ) * 8 ) )) {
                  uVar12 = 1;
                  goto LAB_001003a0;
               }

               uVar16 = uVar16 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar13 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar12;
               lVar14 = SUB168(auVar4 * auVar8, 8);
               uVar15 = *(uint*)( *(long*)( this + 0x198 ) + lVar14 * 4 );
               iVar13 = SUB164(auVar4 * auVar8, 8);
            }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar12,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) + iVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar12,uVar16 <= SUB164(auVar6 * auVar10, 8) );
         }

      }

      ClassDB::get_parent_class_nocheck((StringName*)&local_48);
      uVar12 = 0;
      if (( local_48 != 0 ) && ( ( uVar12 = is_class_disabled(this, (StringName*)&local_48) ),StringName::configured != '\0' && ( local_48 != 0 ) )) {
         StringName::unref();
         uVar12 = uVar12 & 0xff;
      }

   }

   LAB_001003a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar12;
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
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::erase(StringName const&) [clone .isra.0] */void HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this, StringName *param_1) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   undefined4 uVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
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
   uint uVar29;
   uint uVar30;
   uint uVar31;
   int iVar32;
   long lVar33;
   ulong uVar34;
   ulong uVar35;
   ulong uVar36;
   uint *puVar37;
   long lVar38;
   uint *puVar39;
   ulong uVar40;
   uint *puVar41;
   uint uVar42;
   ulong uVar43;
   if (( *(long*)this != 0 ) && ( *(int*)( this + 0x24 ) != 0 )) {
      uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar31 = StringName::get_empty_hash();
      }
 else {
         uVar31 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar36 = CONCAT44(0, uVar30);
      uVar29 = 1;
      if (uVar31 != 0) {
         uVar29 = uVar31;
      }

      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar29 * lVar38;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar36;
      lVar33 = SUB168(auVar9 * auVar19, 8);
      lVar5 = *(long*)( this + 0x18 );
      iVar32 = SUB164(auVar9 * auVar19, 8);
      uVar31 = *(uint*)( lVar5 + lVar33 * 4 );
      if (uVar31 != 0) {
         uVar42 = 0;
         do {
            if (uVar29 == uVar31) {
               lVar6 = *(long*)( this + 8 );
               lVar7 = *(long*)this;
               uVar31 = *(uint*)( lVar6 + lVar33 * 4 );
               uVar34 = (ulong)uVar31;
               if (*(long*)( lVar7 + uVar34 * 8 ) == *(long*)param_1) {
                  lVar33 = *(long*)( this + 0x10 );
                  uVar30 = *(uint*)( lVar33 + uVar34 * 4 );
                  uVar36 = (ulong)uVar30;
                  uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
                  uVar43 = CONCAT44(0, uVar29);
                  lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(uVar30 + 1) * lVar8;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar43;
                  lVar38 = SUB168(auVar13 * auVar23, 8) * 4;
                  uVar30 = SUB164(auVar13 * auVar23, 8);
                  puVar37 = (uint*)( lVar5 + lVar38 );
                  if (( *puVar37 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = ( ulong ) * puVar37 * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar43,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar29 + uVar30 ) - SUB164(auVar14 * auVar24, 8)) * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar43,uVar35 = (ulong)uVar30,uVar40 = uVar36,SUB164(auVar15 * auVar25, 8) != 0) {
                     while (true) {
                        uVar36 = uVar35;
                        puVar39 = (uint*)( lVar38 + lVar6 );
                        puVar1 = (uint*)( lVar6 + uVar40 * 4 );
                        puVar41 = (uint*)( uVar40 * 4 + lVar5 );
                        puVar2 = (undefined4*)( lVar33 + ( ulong ) * puVar39 * 4 );
                        puVar3 = (undefined4*)( lVar33 + ( ulong ) * puVar1 * 4 );
                        uVar4 = *puVar3;
                        *puVar3 = *puVar2;
                        *puVar2 = uVar4;
                        uVar30 = *puVar37;
                        *puVar37 = *puVar41;
                        *puVar41 = uVar30;
                        uVar30 = *puVar39;
                        *puVar39 = *puVar1;
                        *puVar1 = uVar30;
                        auVar18._8_8_ = 0;
                        auVar18._0_8_ = ( ulong )((int)uVar36 + 1) * lVar8;
                        auVar28._8_8_ = 0;
                        auVar28._0_8_ = uVar43;
                        uVar35 = SUB168(auVar18 * auVar28, 8);
                        lVar38 = uVar35 * 4;
                        puVar37 = (uint*)( lVar5 + lVar38 );
                        if (( *puVar37 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = ( ulong ) * puVar37 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar43,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( SUB164(auVar18 * auVar28, 8) + uVar29 ) - SUB164(auVar16 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar43,SUB164(auVar17 * auVar27, 8) == 0) break;
                        uVar35 = uVar35 & 0xffffffff;
                        uVar40 = uVar36;
                     }
;
                  }

                  *(undefined4*)( lVar5 + uVar36 * 4 ) = 0;
                  if (( StringName::configured != '\0' ) && ( *(long*)( lVar7 + uVar34 * 8 ) != 0 )) {
                     StringName::unref();
                  }

                  uVar30 = *(int*)( this + 0x24 ) - 1;
                  *(uint*)( this + 0x24 ) = uVar30;
                  if (uVar30 <= uVar31) {
                     return;
                  }

                  StringName::StringName((StringName*)( *(long*)this + uVar34 * 8 ), (StringName*)( *(long*)this + (ulong)uVar30 * 8 ));
                  uVar36 = ( ulong ) * (uint*)( this + 0x24 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( *(long*)this + uVar36 * 8 ) != 0 )) {
                     StringName::unref();
                     uVar36 = ( ulong ) * (uint*)( this + 0x24 );
                  }

                  lVar38 = *(long*)( this + 0x10 );
                  *(undefined4*)( lVar38 + uVar34 * 4 ) = *(undefined4*)( lVar38 + uVar36 * 4 );
                  *(uint*)( *(long*)( this + 8 ) + ( ulong ) * (uint*)( lVar38 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar31;
                  return;
               }

            }

            uVar42 = uVar42 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(iVar32 + 1) * lVar38;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar36;
            lVar33 = SUB168(auVar10 * auVar20, 8);
            uVar31 = *(uint*)( lVar5 + lVar33 * 4 );
            iVar32 = SUB164(auVar10 * auVar20, 8);
         }
 while ( ( uVar31 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar31 * lVar38,auVar21._8_8_ = 0,auVar21._0_8_ = uVar36,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar30 + iVar32 ) - SUB164(auVar11 * auVar21, 8)) * lVar38,auVar22._8_8_ = 0,auVar22._0_8_ = uVar36,uVar42 <= SUB164(auVar12 * auVar22, 8) );
      }

   }

   return;
}
/* EditorBuildProfileManager::_force_detect_classes_changed(String const&) */void EditorBuildProfileManager::_force_detect_classes_changed(String *param_1) {
   long *plVar1;
   long lVar2;
   long in_FS_OFFSET;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1[0xe28] == (String)0x0) {
      lVar2 = *(long*)( param_1 + 0xe20 );
      LineEdit::get_text();
      if (*(long*)( lVar2 + 0x1d0 ) != local_28) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( lVar2 + 0x1d0 ), (CowData*)&local_28);
      }

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

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfile::is_item_collapsed(StringName const&) const */undefined8 EditorBuildProfile::is_item_collapsed(EditorBuildProfile *this, StringName *param_1) {
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
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   if (*(long*)( this + 0x1a8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x1cc ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1c8 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1c8 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar14 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar14;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( this + 0x1c0 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar15 = 0;
         do {
            if (( uVar11 == uVar16 ) && ( *(long*)( *(long*)( this + 0x1a8 ) + ( ulong ) * (uint*)( *(long*)( this + 0x1b0 ) + lVar13 * 4 ) * 8 ) == *(long*)param_1 )) {
               return 1;
            }

            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar14;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x1c0 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar14,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar14,uVar15 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* EditorBuildProfile::clear_disabled_classes() */void EditorBuildProfile::clear_disabled_classes(EditorBuildProfile *this) {
   long lVar1;
   long lVar2;
   lVar2 = *(long*)( this + 0x180 );
   if (( lVar2 != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
      if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0x198 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) << 2),*(int*)( this + 0x1a4 ) != 0 )) {
         lVar1 = 0;
         while (true) {
            if (( StringName::configured != '\0' ) && ( *(long*)( lVar2 + lVar1 * 8 ) != 0 )) {
               StringName::unref();
            }

            lVar1 = lVar1 + 1;
            if (*(uint*)( this + 0x1a4 ) <= (uint)lVar1) break;
            lVar2 = *(long*)( this + 0x180 );
         }
;
      }

      *(undefined4*)( this + 0x1a4 ) = 0;
   }

   lVar2 = *(long*)( this + 0x1a8 );
   if (lVar2 != 0) {
      if (*(int*)( this + 0x1cc ) != 0) {
         if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1c8 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0x1c0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1c8 ) * 4 ) << 2),*(int*)( this + 0x1cc ) != 0 )) {
            lVar1 = 0;
            while (true) {
               if (( StringName::configured != '\0' ) && ( *(long*)( lVar2 + lVar1 * 8 ) != 0 )) {
                  StringName::unref();
               }

               lVar1 = lVar1 + 1;
               if (*(uint*)( this + 0x1cc ) <= (uint)lVar1) break;
               lVar2 = *(long*)( this + 0x1a8 );
            }
;
         }

         *(undefined4*)( this + 0x1cc ) = 0;
         return;
      }

      return;
   }

   return;
}
/* EditorBuildProfile::get_build_option_disable_value(EditorBuildProfile::BuildOption) */undefined1 EditorBuildProfile::get_build_option_disable_value(uint param_1) {
   if (param_1 < 0xe) {
      return ( &build_option_disable_values )[(int)param_1];
   }

   _err_print_index_error("get_build_option_disable_value", "editor/editor_build_profile.cpp", 0x9d, (ulong)param_1, 0xe, "p_build_option", "BUILD_OPTION_MAX", "", false, false);
   return 0;
}
/* EditorBuildProfile::set_force_detect_classes(String const&) */void EditorBuildProfile::set_force_detect_classes(EditorBuildProfile *this, String *param_1) {
   if (*(long*)( this + 0x1d0 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x1d0 ), (CowData*)param_1);
      return;
   }

   return;
}
/* EditorBuildProfile::get_force_detect_classes() const */void EditorBuildProfile::get_force_detect_classes(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x1d0 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x1d0 ));
   }

   return;
}
/* EditorBuildProfile::get_build_option_category(EditorBuildProfile::BuildOption) */undefined4 EditorBuildProfile::get_build_option_category(uint param_1) {
   if (param_1 < 0xe) {
      return ( &build_option_category )[(int)param_1];
   }

   _err_print_index_error("get_build_option_category", "editor/editor_build_profile.cpp", 0xd6, (ulong)param_1, 0xe, "p_build_option", "BUILD_OPTION_MAX", "", false, false);
   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorBuildProfile::EditorBuildProfile() */void EditorBuildProfile::EditorBuildProfile(EditorBuildProfile *this) {
   undefined8 uVar1;
   RefCounted::RefCounted((RefCounted*)this);
   *(undefined8*)( this + 0x1d0 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0011e970;
   uVar1 = _LC32;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x1a0 ) = uVar1;
   *(undefined8*)( this + 0x1c8 ) = uVar1;
   uVar1 = CONCAT26(build_option_disabled_by_default._6_2_, (undefined6)build_option_disabled_by_default);
   *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x1d8 ) = uVar1;
   uVar1 = CONCAT62(_UNK_00111f70, build_option_disabled_by_default._6_2_);
   *(undefined1(*) [16])( this + 0x1a8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x1de ) = uVar1;
   *(undefined1(*) [16])( this + 0x1b8 ) = (undefined1[16])0x0;
   return;
}
/* EditorBuildProfileManager::get_current_profile() */void EditorBuildProfileManager::get_current_profile(void) {
   char cVar1;
   long in_RSI;
   long *in_RDI;
   *in_RDI = 0;
   if (*(long*)( in_RSI + 0xe20 ) != 0) {
      *in_RDI = *(long*)( in_RSI + 0xe20 );
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *in_RDI = 0;
      }

   }

   return;
}
/* EditorBuildProfile::get_build_option_name(EditorBuildProfile::BuildOption) */EditorBuildProfile * __thiscall
EditorBuildProfile::get_build_option_name(EditorBuildProfile *this,uint param_2){
   char *__s;
   size_t sVar1;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 local_c0;
   char *local_b8;
   size_t local_b0;
   char *local_a8[4];
   undefined *local_88;
   char *pcStack_80;
   char *local_78;
   char *pcStack_70;
   char *local_68;
   char *pcStack_60;
   char *local_58;
   char *pcStack_50;
   char *local_48;
   char *pcStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 0xe) {
      local_c0 = 0;
      local_b0 = 0;
      local_a8[0] = "3D Engine";
      local_a8[1] = "2D Physics";
      local_a8[2] = "3D Physics";
      local_a8[3] = "Navigation";
      local_88 = &_LC51;
      pcStack_80 = "RenderingDevice";
      local_78 = "OpenGL";
      pcStack_70 = "Vulkan";
      local_68 = "Text Server: Fallback";
      pcStack_60 = "Text Server: Advanced";
      local_b8 = "";
      local_58 = "TTF, OTF, Type 1, WOFF1 Fonts";
      pcStack_50 = "WOFF2 Fonts";
      local_48 = "SIL Graphite Fonts";
      pcStack_40 = "Multi-channel Signed Distance Field Font Rendering";
      String::parse_latin1((StrRange*)&local_c0);
      __s = local_a8[(int)param_2];
      local_c8 = 0;
      sVar1 = 0;
      if (__s != (char*)0x0) {
         sVar1 = strlen(__s);
      }

      local_b8 = __s;
      local_b0 = sVar1;
      String::parse_latin1((StrRange*)&local_c8);
      TTR((String*)this, (String*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   }
 else {
      _err_print_index_error("get_build_option_name", "editor/editor_build_profile.cpp", 0xaa, (ulong)param_2, 0xe, "p_build_option", "BUILD_OPTION_MAX", "", false, false);
      *(undefined8*)this = 0;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfile::get_build_option_description(EditorBuildProfile::BuildOption) */EditorBuildProfile * __thiscall
EditorBuildProfile::get_build_option_description(EditorBuildProfile *this,uint param_2){
   char *__s;
   size_t sVar1;
   long in_FS_OFFSET;
   undefined8 local_c8;
   undefined8 local_c0;
   char *local_b8;
   size_t local_b0;
   char *local_a8[4];
   char *local_88;
   char *pcStack_80;
   char *local_78;
   char *pcStack_70;
   char *local_68;
   char *pcStack_60;
   char *local_58;
   char *pcStack_50;
   char *local_48;
   char *pcStack_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 0xe) {
      local_c0 = 0;
      local_b0 = 0;
      local_a8[0] = "3D Nodes as well as RenderingServer access to 3D features.";
      local_a8[1] = "2D Physics nodes and PhysicsServer2D.";
      local_a8[2] = "3D Physics nodes and PhysicsServer3D.";
      local_a8[3] = "Navigation, both 2D and 3D.";
      local_88 = "XR (AR and VR).";
      pcStack_80 = "RenderingDevice based rendering (if disabled, the OpenGL back-end is required).";
      local_78 = "OpenGL back-end (if disabled, the RenderingDevice back-end is required).";
      pcStack_70 = "Vulkan back-end of RenderingDevice.";
      local_68 = "Fallback implementation of Text Server\nSupports basic text layouts.";
      pcStack_60 = "Text Server implementation powered by ICU and HarfBuzz libraries.\nSupports complex text layouts, BiDi, and contextual OpenType font features.";
      local_b8 = "";
      local_58 = "TrueType, OpenType, Type 1, and WOFF1 font format support using FreeType library (if disabled, WOFF2 support is also disabled).";
      pcStack_50 = "WOFF2 font format support using FreeType and Brotli libraries.";
      local_48 = "SIL Graphite smart font technology support (supported by Advanced Text Server only).";
      pcStack_40 = "Multi-channel signed distance field font rendering support using msdfgen library (pre-rendered MSDF fonts can be used even if this option disabled).";
      String::parse_latin1((StrRange*)&local_c0);
      __s = local_a8[(int)param_2];
      local_c8 = 0;
      sVar1 = 0;
      if (__s != (char*)0x0) {
         sVar1 = strlen(__s);
      }

      local_b8 = __s;
      local_b0 = sVar1;
      String::parse_latin1((StrRange*)&local_c8);
      TTR((String*)this, (String*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
   }
 else {
      _err_print_index_error("get_build_option_description", "editor/editor_build_profile.cpp", 0xbf, (ulong)param_2, 0xe, "p_build_option", "BUILD_OPTION_MAX", "", false, false);
      *(undefined8*)this = 0;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfile::get_build_option_category_name(EditorBuildProfile::BuildOptionCategory) */EditorBuildProfile * __thiscall
EditorBuildProfile::get_build_option_category_name(EditorBuildProfile *this,uint param_2){
   long *plVar1;
   char *__s;
   long lVar2;
   size_t sVar3;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   char *local_48[3];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 2) {
      local_60 = 0;
      local_50 = 0;
      local_58 = "";
      local_48[0] = "General Features:";
      local_48[1] = "Text Rendering and Font Options:";
      String::parse_latin1((StrRange*)&local_60);
      __s = local_48[(int)param_2];
      local_68 = 0;
      sVar3 = 0;
      if (__s != (char*)0x0) {
         sVar3 = strlen(__s);
      }

      local_58 = __s;
      local_50 = sVar3;
      String::parse_latin1((StrRange*)&local_68);
      TTR((String*)this, (String*)&local_68);
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

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }
 else {
      _err_print_index_error("get_build_option_category_name", "editor/editor_build_profile.cpp", 0xdb, (ulong)param_2, 2, "p_build_option_category", "BUILD_OPTION_CATEGORY_MAX", "", false, false);
      *(undefined8*)this = 0;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfileManager::_class_list_item_selected() */void EditorBuildProfileManager::_class_list_item_selected(EditorBuildProfileManager *this) {
   char cVar1;
   String *pSVar2;
   int iVar3;
   long lVar4;
   long in_FS_OFFSET;
   String local_98[8];
   CowData<char32_t> local_90[8];
   undefined8 local_88;
   CowData<char32_t> local_80[8];
   undefined8 local_78;
   undefined8 local_70;
   undefined *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0xe28] == (EditorBuildProfileManager)0x0 ) && ( lVar4 = lVar4 != 0 )) {
      TreeItem::get_metadata((int)(Variant*)local_58);
      if (( local_58[0] == 4 ) || ( local_58[0] == 0x15 )) {
         pSVar2 = *(String**)( this + 0xdf8 );
         local_70 = 0;
         local_68 = &_LC82;
         local_78 = 0;
         local_60 = 1;
         String::parse_latin1((StrRange*)&local_78);
         Variant::operator_cast_to_String((Variant*)&local_88);
         operator+((char *)
         local_80,(String*)"class|";
         String::operator +((String*)&local_68, (String*)local_80);
         EditorHelpBit::parse_symbol(pSVar2, (String*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref(local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         cVar1 = Variant::needs_deinit[local_58[0]];
      }
 else {
         if (local_58[0] == 2) {
            iVar3 = Variant::operator_cast_to_int((Variant*)local_58);
            EditorBuildProfile::get_build_option_description((EditorBuildProfile*)local_98, iVar3);
            pSVar2 = *(String**)( this + 0xdf8 );
            local_70 = 0;
            String::parse_latin1((String*)&local_70, "");
            TTR((String*)&local_68, local_98);
            local_78 = 0;
            local_88 = 0;
            String::parse_latin1((String*)&local_88, "");
            TreeItem::get_text((int)local_90);
            TTR((String*)local_80, (String*)local_90);
            EditorHelpBit::set_custom_text(pSVar2, (String*)local_80, (String*)&local_78);
            CowData<char32_t>::_unref(local_80);
            CowData<char32_t>::_unref(local_90);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
         }

         cVar1 = Variant::needs_deinit[local_58[0]];
      }

      if (cVar1 != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfile::save_to_file(String const&) */undefined8 EditorBuildProfile::save_to_file(EditorBuildProfile *this, String *param_1) {
   long *plVar1;
   int iVar2;
   long *plVar3;
   char *__s;
   char cVar4;
   Variant *pVVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   StrRange *local_f8;
   Variant *local_e0;
   Dictionary local_b8[8];
   Array local_b0[8];
   Dictionary local_a8[8];
   Object *local_a0;
   CowData<char32_t> local_98[8];
   long local_90;
   char *local_88;
   size_t local_80;
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Dictionary::Dictionary(local_b8);
   Variant::Variant((Variant*)local_58, "build_profile");
   Variant::Variant((Variant*)local_78, "type");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_b8);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
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

   Array::Array(local_b0);
   iVar2 = *(int*)( this + 0x1a4 );
   if (iVar2 != 0) {
      lVar7 = 0;
      plVar3 = *(long**)( this + 0x180 );
      lVar8 = *plVar3;
      if (lVar8 == 0) goto LAB_00101bf6;
      do {
         local_f8 = (StrRange*)&local_90;
         __s = *(char**)( lVar8 + 8 );
         local_90 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar8 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_f8, (CowData*)( lVar8 + 0x10 ));
            }

         }
 else {
            local_80 = strlen(__s);
            local_88 = __s;
            String::parse_latin1(local_f8);
         }

         while (true) {
            local_f8 = (StrRange*)&local_90;
            Variant::Variant((Variant*)local_58, (String*)local_f8);
            Array::push_back((Variant*)local_b0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            lVar8 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar1 = (long*)( local_90 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar8 + -0x10 ), false);
               }

            }

            if (iVar2 <= (int)lVar7 + 1) goto LAB_00101720;
            lVar7 = lVar7 + 1;
            lVar8 = plVar3[lVar7];
            if (lVar8 != 0) break;
            LAB_00101bf6:local_90 = 0;
         }
;
      }
 while ( true );
   }

   LAB_00101720:local_e0 = (Variant*)&local_88;
   local_f8 = (StrRange*)&local_90;
   Array::sort();
   Variant::Variant((Variant*)local_58, local_b0);
   Variant::Variant((Variant*)local_78, "disabled_classes");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_b8);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
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

   lVar8 = 0;
   Dictionary::Dictionary(local_a8);
   do {
      while (this[lVar8 + 0x1d8] == *(EditorBuildProfile*)( (long)&build_option_disabled_by_default + lVar8 )) {
         LAB_00101862:lVar8 = lVar8 + 1;
         if (lVar8 == 0xe) goto LAB_00101950;
      }
;
      if (this[lVar8 + 0x1d8] == (EditorBuildProfile)0x0) {
         Variant::Variant((Variant*)local_58, (bool)( ( &build_option_disable_values )[lVar8] ^ 1 ));
         Variant::Variant((Variant*)local_78, ( &build_option_identifiers )[lVar8]);
         pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_a8);
         if (pVVar5 == (Variant*)local_58) goto LAB_0010183c;
         if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar5 = 0;
         *(int*)pVVar5 = local_58[0];
         *(undefined8*)( pVVar5 + 8 ) = local_50;
         *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
         local_58[0] = 0;
         if (Variant::needs_deinit[local_78[0]] == '\0') goto LAB_0010184f;
         LAB_00101914:Variant::_clear_internal();
         cVar4 = Variant::needs_deinit[local_58[0]];
      }
 else {
         Variant::Variant((Variant*)local_58, (bool)( &build_option_disable_values )[lVar8]);
         Variant::Variant((Variant*)local_78, ( &build_option_identifiers )[lVar8]);
         pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_a8);
         if (pVVar5 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
               Variant::_clear_internal();
            }

            *(undefined4*)pVVar5 = 0;
            *(int*)pVVar5 = local_58[0];
            *(undefined8*)( pVVar5 + 8 ) = local_50;
            *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }

         LAB_0010183c:if (Variant::needs_deinit[local_78[0]] != '\0') goto LAB_00101914;
         LAB_0010184f:cVar4 = Variant::needs_deinit[local_58[0]];
      }

      if (cVar4 == '\0') goto LAB_00101862;
      lVar8 = lVar8 + 1;
      Variant::_clear_internal();
   }
 while ( lVar8 != 0xe );
   LAB_00101950:Variant::Variant((Variant*)local_58, local_a8);
   Variant::Variant((Variant*)local_78, "disabled_build_options");
   pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_b8);
   if (pVVar5 != (Variant*)local_58) {
      if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)pVVar5 = 0;
      *(int*)pVVar5 = local_58[0];
      *(undefined8*)( pVVar5 + 8 ) = local_50;
      *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
      local_58[0] = 0;
   }

   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( *(long*)( this + 0x1d0 ) != 0 ) && ( 1 < *(uint*)( *(long*)( this + 0x1d0 ) + -8 ) )) {
      Variant::Variant((Variant*)local_58, (String*)( this + 0x1d0 ));
      Variant::Variant((Variant*)local_78, "force_detect_classes");
      pVVar5 = (Variant*)Dictionary::operator []((Variant*)local_b8);
      if (pVVar5 != (Variant*)local_58) {
         if (Variant::needs_deinit[*(int*)pVVar5] != '\0') {
            Variant::_clear_internal();
         }

         *(undefined4*)pVVar5 = 0;
         *(int*)pVVar5 = local_58[0];
         *(undefined8*)( pVVar5 + 8 ) = local_50;
         *(undefined8*)( pVVar5 + 0x10 ) = uStack_48;
         local_58[0] = 0;
      }

      if (Variant::needs_deinit[local_78[0]] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

   }

   FileAccess::open((String*)&local_a0, (int)param_1, (Error*)0x2);
   local_90 = 0;
   if (local_a0 == (Object*)0x0) {
      String::parse_latin1((String*)local_f8, "\'.");
      operator+((char *)
      local_98,(String*)"Cannot create file \'";
      String::operator +((String*)local_e0, (String*)local_98);
      _err_print_error("save_to_file", "editor/editor_build_profile.cpp", 0x101, "Condition \"f.is_null()\" is true. Returning: ERR_CANT_CREATE", local_e0, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_e0);
      uVar6 = 0x14;
      CowData<char32_t>::_unref(local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
   }
 else {
      local_80 = 1;
      local_88 = "\t";
      String::parse_latin1(local_f8);
      Variant::Variant((Variant*)local_58, local_b8);
      JSON::stringify(local_e0, (String*)local_58, SUB81(local_f8, 0), true);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
      ( **(code**)( *(long*)local_a0 + 0x2a8 ) )();
      uVar6 = 0;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_e0);
   }

   if (( ( local_a0 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)local_a0 + 0x140 ))(local_a0);
   Memory::free_static(local_a0, false);
}
Dictionary::~Dictionary(local_a8);Array::~Array(local_b0);Dictionary::~Dictionary(local_b8);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return uVar6;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorBuildProfileManager::_profile_action(int) */void EditorBuildProfileManager::_profile_action(EditorBuildProfileManager *this, int param_1) {
   String *pSVar1;
   EditorBuildProfile *this_00;
   int iVar2;
   undefined8 uVar3;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   String local_70[8];
   undefined8 local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(int*)( this + 0xdb0 ) = param_1;
   switch (param_1) {
      case 0:
    uVar3 = *(undefined8 *)(this + 0xdb8);
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Create a new profile?";
    local_50 = 0x15;
    break;
      case 1:
    uVar3 = *(undefined8 *)(this + 0xdb8);
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "Reset the edited profile?";
    local_50 = 0x19;
    break;
      case 2:
    if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
      EditorFileDialog::popup_file_dialog();
      return;
    }
    goto LAB_0010227a;
      case 3:
    LineEdit::get_text();
    if ((local_58 == (char *)0x0) || (uVar3 = *(undefined8 *)(local_58 + -8), (int)uVar3 == 0)) {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    }
    else {
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      if ((int)uVar3 != 1) {
        this_00 = *(EditorBuildProfile **)(this + 0xe20);
        LineEdit::get_text();
        iVar2 = EditorBuildProfile::save_to_file(this_00,(String *)&local_58);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        pSVar1 = EditorNode::singleton;
        if (iVar2 != 0) {
          local_58 = (char *)0x0;
          String::parse_latin1((String *)&local_58,"");
          local_60 = 0;
          String::parse_latin1((String *)&local_60,"Warning!");
          TTR((String *)&local_68,(String *)&local_60);
          local_78 = 0;
          String::parse_latin1((String *)&local_78,"");
          local_80 = 0;
          String::parse_latin1((String *)&local_80,"File saving failed.");
          TTR(local_70,(String *)&local_80);
          EditorNode::show_warning(pSVar1,local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
        }
        goto switchD_00101ef4_default;
      }
    }
    goto LAB_00101fe5;
      case 4:
LAB_00101fe5:
    EditorFileDialog::popup_file_dialog();
    pSVar1 = *(String **)(this + 0xe08);
    LineEdit::get_text();
    EditorFileDialog::set_current_file(pSVar1);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
    goto switchD_00101ef4_default;
      case 5:
    uVar3 = *(undefined8 *)(this + 0xdb8);
    local_60 = 0;
    local_50 = 0;
    local_58 = "";
    String::parse_latin1((StrRange *)&local_60);
    local_58 = "This will scan all files in the current project to detect used classes.";
    local_50 = 0x47;
    break;
      default:
    goto switchD_00101ef4_default;
   }

   local_68 = 0;
   String::parse_latin1((StrRange*)&local_68);
   TTR((String*)&local_58, (String*)&local_68);
   AcceptDialog::set_text(uVar3, (String*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   local_48 = 0;
   Window::popup_centered(*(Vector2i**)( this + 0xdb8 ));
   switchD_00101ef4_default:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010227a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorBuildProfileManager::_export_profile(String const&) */void EditorBuildProfileManager::_export_profile(EditorBuildProfileManager *this, String *param_1) {
   undefined8 uVar1;
   int iVar2;
   String *pSVar3;
   long in_FS_OFFSET;
   undefined8 local_a0;
   undefined8 local_98;
   String local_90[8];
   undefined8 local_88;
   String local_80[8];
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(EditorBuildProfile**)( this + 0xe20 ) == (EditorBuildProfile*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error("_export_profile", "editor/editor_build_profile.cpp", 0x312, "Condition \"edited.is_null()\" is true.", 0, 0);
         return;
      }

   }
 else {
      iVar2 = EditorBuildProfile::save_to_file(*(EditorBuildProfile**)( this + 0xe20 ), param_1);
      pSVar3 = EditorNode::singleton;
      if (iVar2 == 0) {
         uVar1 = *(undefined8*)( this + 0xe10 );
         local_68 = (char*)0x0;
         if (*(long*)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)param_1);
         }

         LineEdit::set_text(uVar1, (CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         pSVar3 = (String*)EditorSettings::get_singleton();
         Variant::Variant((Variant*)local_58, param_1);
         local_68 = "last_file_path";
         local_70 = 0;
         local_60 = 0xe;
         String::parse_latin1((StrRange*)&local_70);
         local_68 = "build_profile";
         local_78 = 0;
         local_60 = 0xd;
         String::parse_latin1((StrRange*)&local_78);
         EditorSettings::set_project_metadata(pSVar3, (String*)&local_78, (Variant*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         local_70 = 0;
         local_68 = "";
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_70);
         local_68 = "Warning!";
         local_78 = 0;
         local_60 = 8;
         String::parse_latin1((StrRange*)&local_78);
         TTR(local_80, (String*)&local_78);
         local_88 = 0;
         if (*(long*)param_1 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)param_1);
         }

         local_68 = "";
         local_98 = 0;
         local_60 = 0;
         String::parse_latin1((StrRange*)&local_98);
         local_68 = "Error saving profile to path: \'%s\'.";
         local_a0 = 0;
         local_60 = 0x23;
         String::parse_latin1((StrRange*)&local_a0);
         TTR(local_90, (String*)&local_a0);
         vformat<String>((CowData<char32_t>*)&local_68, local_90, (CowData<char32_t>*)&local_88);
         EditorNode::show_warning(pSVar3, (String*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfileManager::EditorBuildProfileManager() */void EditorBuildProfileManager::EditorBuildProfileManager(EditorBuildProfileManager *this) {
   long *plVar1;
   code *pcVar2;
   undefined8 uVar3;
   String *pSVar4;
   BoxContainer *this_00;
   BoxContainer *pBVar5;
   LineEdit *pLVar6;
   Button *pBVar7;
   HSeparator *this_01;
   Tree *this_02;
   CallableCustom *this_03;
   EditorHelpBit *this_04;
   ConfirmationDialog *this_05;
   EditorFileDialog *pEVar8;
   long in_FS_OFFSET;
   float fVar9;
   float fVar10;
   undefined8 local_80;
   String local_78[8];
   undefined8 local_70;
   long local_68[2];
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   AcceptDialog::AcceptDialog((AcceptDialog*)this);
   *(undefined4*)( this + 0xdb0 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_0011ead0;
   *(undefined8*)( this + 0xdb8 ) = 0;
   *(undefined8*)( this + 0xe20 ) = 0;
   this[0xe28] = (EditorBuildProfileManager)0x0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( this + ( 16*i + 3568 ) ) = (undefined1[16])0;
   }

   this_00 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(this_00, true);
   this_00[0xa0c] = (BoxContainer)0x1;
   *(undefined***)this_00 = &PTR__initialize_classv_0011e5f8;
   postinitialize_handler((Object*)this_00);
   Node::add_child(this, this_00, 0, 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_0011e280;
   postinitialize_handler((Object*)pBVar5);
   pLVar6 = (LineEdit*)operator_new(0xbb0, "");
   local_58 = (char*)0x0;
   LineEdit::LineEdit(pLVar6, (String*)&local_58);
   postinitialize_handler((Object*)pLVar6);
   *(LineEdit**)( this + 0xe10 ) = pLVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xe10 ), 0, 0);
   LineEdit::set_editable(SUB81(*(undefined8*)( this + 0xe10 ), 0));
   Control::set_h_size_flags(*(undefined8*)( this + 0xe10 ), 3);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)local_68);
   local_58 = "New";
   local_70 = 0;
   local_50 = 3;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::Button(pBVar7, (String*)&local_58);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xdc0 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xdc0 ), 0, 0);
   plVar1 = *(long**)( this + 0xdc0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,int>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_int*)"&EditorBuildProfileManager::_profile_action");
   Callable::bind<EditorBuildProfileManager::Action>((StrRange*)local_68, (CowData<char32_t>*)&local_58, 0);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (StrRange*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Load";
   local_70 = 0;
   local_50 = 4;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::Button(pBVar7, (String*)&local_58);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xdd0 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xdd0 ), 0, 0);
   plVar1 = *(long**)( this + 0xdd0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,int>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_int*)"&EditorBuildProfileManager::_profile_action");
   Callable::bind<EditorBuildProfileManager::Action>((StrRange*)local_68, (CowData<char32_t>*)&local_58, 2);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (StrRange*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Save";
   local_70 = 0;
   local_50 = 4;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::Button(pBVar7, (String*)&local_58);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xdd8 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xdd8 ), 0, 0);
   plVar1 = *(long**)( this + 0xdd8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,int>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_int*)"&EditorBuildProfileManager::_profile_action");
   Callable::bind<EditorBuildProfileManager::Action>((StrRange*)local_68, (CowData<char32_t>*)&local_58, 3);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (StrRange*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Save As";
   local_70 = 0;
   local_50 = 7;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::Button(pBVar7, (String*)&local_58);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xde0 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xde0 ), 0, 0);
   plVar1 = *(long**)( this + 0xde0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,int>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_int*)"&EditorBuildProfileManager::_profile_action");
   Callable::bind<EditorBuildProfileManager::Action>((StrRange*)local_68, (CowData<char32_t>*)&local_58, 4);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (StrRange*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   local_58 = "";
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Profile:";
   local_70 = 0;
   local_50 = 8;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   VBoxContainer::add_margin_child((String*)this_00, (Control*)&local_58, SUB81(pBVar5, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   this_01 = (HSeparator*)operator_new(0x9e0, "");
   HSeparator::HSeparator(this_01);
   postinitialize_handler((Object*)this_01);
   Node::add_child(this_00, this_01, 0, 0);
   pBVar5 = (BoxContainer*)operator_new(0xa10, "");
   BoxContainer::BoxContainer(pBVar5, false);
   pBVar5[0xa0c] = (BoxContainer)0x1;
   *(undefined***)pBVar5 = &PTR__initialize_classv_0011e280;
   postinitialize_handler((Object*)pBVar5);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Reset to Defaults";
   local_70 = 0;
   local_50 = 0x11;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::Button(pBVar7, (String*)&local_58);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xdc8 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xdc8 ), 0, 0);
   plVar1 = *(long**)( this + 0xdc8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,int>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_int*)"&EditorBuildProfileManager::_profile_action");
   Callable::bind<EditorBuildProfileManager::Action>((StrRange*)local_68, (CowData<char32_t>*)&local_58, 1);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (StrRange*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   pBVar7 = (Button*)operator_new(0xc10, "");
   local_68[0] = 0;
   local_50 = 0;
   local_58 = "";
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Detect from Project";
   local_70 = 0;
   local_50 = 0x13;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Button::Button(pBVar7, (String*)&local_58);
   postinitialize_handler((Object*)pBVar7);
   *(Button**)( this + 0xde8 ) = pBVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   Node::add_child(pBVar5, *(undefined8*)( this + 0xde8 ), 0, 0);
   plVar1 = *(long**)( this + 0xde8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,int>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_int*)"&EditorBuildProfileManager::_profile_action");
   Callable::bind<EditorBuildProfileManager::Action>((StrRange*)local_68, (CowData<char32_t>*)&local_58, 5);
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x238, (StrRange*)local_68, 0);
   Callable::~Callable((Callable*)local_68);
   Callable::~Callable((Callable*)&local_58);
   local_58 = "";
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Actions:";
   local_70 = 0;
   local_50 = 8;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   VBoxContainer::add_margin_child((String*)this_00, (Control*)&local_58, SUB81(pBVar5, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   this_02 = (Tree*)operator_new(0xdc8, "");
   Tree::Tree(this_02);
   postinitialize_handler((Object*)this_02);
   *(Tree**)( this + 0xdf0 ) = this_02;
   Node::set_auto_translate_mode(this_02, 2);
   Tree::set_hide_root(SUB81(*(undefined8*)( this + 0xdf0 ), 0));
   Tree::set_edit_checkbox_cell_only_when_checkbox_is_pressed(SUB81(*(undefined8*)( this + 0xdf0 ), 0));
   plVar1 = *(long**)( this + 0xdf0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void*)"&EditorBuildProfileManager::_class_list_item_selected");
   StringName::StringName((StringName*)local_68, "cell_selected", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (CowData<char32_t>*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   plVar1 = *(long**)( this + 0xdf0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void*)"&EditorBuildProfileManager::_class_list_item_edited");
   StringName::StringName((StringName*)local_68, "item_edited", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (CowData<char32_t>*)&local_58, 1);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   plVar1 = *(long**)( this + 0xdf0 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   this_03 = (CallableCustom*)operator_new(0x48, "");
   CallableCustom::CallableCustom(this_03);
   *(EditorBuildProfileManager**)( this_03 + 0x28 ) = this;
   *(undefined1(*) [16])( this_03 + 0x30 ) = (undefined1[16])0x0;
   *(undefined**)( this_03 + 0x20 ) = &_LC3;
   *(undefined***)this_03 = &PTR_hash_0011f040;
   *(undefined8*)( this_03 + 0x40 ) = 0;
   uVar3 = *(undefined8*)( this + 0x60 );
   *(undefined8*)( this_03 + 0x10 ) = 0;
   *(undefined8*)( this_03 + 0x30 ) = uVar3;
   *(code**)( this_03 + 0x38 ) = _class_list_item_collapsed;
   CallableCustomMethodPointerBase::_setup((uint*)this_03, (int)this_03 + 0x28);
   *(char**)( this_03 + 0x20 ) = "EditorBuildProfileManager::_class_list_item_collapsed";
   Callable::Callable((Callable*)&local_58, this_03);
   StringName::StringName((StringName*)local_68, "item_collapsed", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (CowData<char32_t>*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   uVar3 = *(undefined8*)( this + 0xdf0 );
   local_58 = "";
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Configure Engine Compilation Profile:";
   local_70 = 0;
   local_50 = 0x25;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   VBoxContainer::add_margin_child((String*)this_00, (Control*)&local_58, SUB81(uVar3, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   this_04 = (EditorHelpBit*)operator_new(0xab0, "");
   local_58 = (char*)0x0;
   local_68[0] = 0;
   EditorHelpBit::EditorHelpBit(this_04, (String*)local_68, (String*)&local_58, false, true);
   postinitialize_handler((Object*)this_04);
   *(EditorHelpBit**)( this + 0xdf8 ) = this_04;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   fVar9 = (float)EditorScale::get_scale();
   fVar9 = _LC125 * fVar9;
   fVar10 = (float)EditorScale::get_scale();
   EditorHelpBit::set_content_height_limits(fVar10 * _LC125, fVar9);
   plVar1 = *(long**)( this + 0xdf8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void*)"&EditorBuildProfileManager::_hide_requested");
   StringName::StringName((StringName*)local_68, "request_hide", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (CowData<char32_t>*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   local_58 = "";
   uVar3 = *(undefined8*)( this + 0xdf8 );
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Description:";
   local_70 = 0;
   local_50 = 0xc;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   VBoxContainer::add_margin_child((String*)this_00, (Control*)&local_58, SUB81(uVar3, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   this_05 = (ConfirmationDialog*)operator_new(0xdb8, "");
   ConfirmationDialog::ConfirmationDialog(this_05);
   postinitialize_handler((Object*)this_05);
   *(ConfirmationDialog**)( this + 0xdb8 ) = this_05;
   Node::add_child(this, this_05, 0, 0);
   local_58 = "";
   pSVar4 = *(String**)( this + 0xdb8 );
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Please Confirm:";
   local_70 = 0;
   local_50 = 0xf;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Window::set_title(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   plVar1 = *(long**)( this + 0xdb8 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void*)"&EditorBuildProfileManager::_action_confirm");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x268, (CowData<char32_t>*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   pEVar8 = (EditorFileDialog*)operator_new(0x1108, "");
   EditorFileDialog::EditorFileDialog(pEVar8);
   postinitialize_handler((Object*)pEVar8);
   *(EditorFileDialog**)( this + 0xe00 ) = pEVar8;
   Node::add_child(this, pEVar8, 0, 0);
   EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xe00 ), 0);
   local_58 = "";
   pSVar4 = *(String**)( this + 0xe00 );
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Engine Compilation Profile";
   local_70 = 0;
   local_50 = 0x1a;
   String::parse_latin1((StrRange*)&local_70);
   TTR(local_78, (String*)&local_70);
   local_58 = "*.build";
   local_80 = 0;
   local_50 = 7;
   String::parse_latin1((StrRange*)&local_80);
   EditorFileDialog::add_filter(pSVar4, (String*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   plVar1 = *(long**)( this + 0xe00 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,String_const&>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_String_ptr*)"&EditorBuildProfileManager::_import_profile");
   StringName::StringName((StringName*)local_68, "files_selected", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (CowData<char32_t>*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   local_58 = "";
   pSVar4 = *(String**)( this + 0xe00 );
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Load Profile";
   local_70 = 0;
   local_50 = 0xc;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Window::set_title(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   EditorFileDialog::set_access(*(undefined8*)( this + 0xe00 ), 2);
   pEVar8 = (EditorFileDialog*)operator_new(0x1108, "");
   EditorFileDialog::EditorFileDialog(pEVar8);
   postinitialize_handler((Object*)pEVar8);
   *(EditorFileDialog**)( this + 0xe08 ) = pEVar8;
   Node::add_child(this, pEVar8, 0, 0);
   EditorFileDialog::set_file_mode(*(undefined8*)( this + 0xe08 ), 4);
   pSVar4 = *(String**)( this + 0xe08 );
   local_58 = "";
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Engine Compilation Profile";
   local_70 = 0;
   local_50 = 0x1a;
   String::parse_latin1((StrRange*)&local_70);
   TTR(local_78, (String*)&local_70);
   local_58 = "*.build";
   local_80 = 0;
   local_50 = 7;
   String::parse_latin1((StrRange*)&local_80);
   EditorFileDialog::add_filter(pSVar4, (String*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   plVar1 = *(long**)( this + 0xe08 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,String_const&>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_String_ptr*)"&EditorBuildProfileManager::_export_profile");
   StringName::StringName((StringName*)local_68, "file_selected", false);
   ( *pcVar2 )(plVar1, (StrRange*)local_68, (CowData<char32_t>*)&local_58, 0);
   if (( StringName::configured != '\0' ) && ( local_68[0] != 0 )) {
      StringName::unref();
   }

   Callable::~Callable((Callable*)&local_58);
   local_58 = "";
   pSVar4 = *(String**)( this + 0xe08 );
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Export Profile";
   local_70 = 0;
   local_50 = 0xe;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Window::set_title(pSVar4);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   EditorFileDialog::set_access(*(undefined8*)( this + 0xe08 ), 2);
   pLVar6 = (LineEdit*)operator_new(0xbb0, "");
   local_58 = (char*)0x0;
   LineEdit::LineEdit(pLVar6, (String*)&local_58);
   postinitialize_handler((Object*)pLVar6);
   *(LineEdit**)( this + 0xe18 ) = pLVar6;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   local_58 = "";
   uVar3 = *(undefined8*)( this + 0xe18 );
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Forced Classes on Detect:";
   local_70 = 0;
   local_50 = 0x19;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   VBoxContainer::add_margin_child((String*)this_00, (Control*)&local_58, SUB81(uVar3, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   plVar1 = *(long**)( this + 0xe18 );
   pcVar2 = *(code**)( *plVar1 + 0x108 );
   create_custom_callable_function_pointer<EditorBuildProfileManager,String_const&>((EditorBuildProfileManager*)&local_58, (char*)this, (_func_void_String_ptr*)"&EditorBuildProfileManager::_force_detect_classes_changed");
   ( *pcVar2 )(plVar1, SceneStringNames::singleton + 0x270, (CowData<char32_t>*)&local_58, 0);
   Callable::~Callable((Callable*)&local_58);
   local_58 = "";
   local_68[0] = 0;
   local_50 = 0;
   String::parse_latin1((StrRange*)local_68);
   local_58 = "Edit Compilation Configuration Profile";
   local_70 = 0;
   local_50 = 0x26;
   String::parse_latin1((StrRange*)&local_70);
   TTR((String*)&local_58, (String*)&local_70);
   Window::set_title((String*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
   singleton = this;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfile::set_item_collapsed(StringName const&, bool) */void EditorBuildProfile::set_item_collapsed(EditorBuildProfile *this, StringName *param_1, bool param_2) {
   long in_FS_OFFSET;
   StringName aSStack_28[24];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2) {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(aSStack_28);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0x1a8 ), param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* EditorBuildProfile::load_from_file(String const&) */int EditorBuildProfile::load_from_file(EditorBuildProfile *this, String *param_1) {
   char *pcVar1;
   char cVar2;
   int iVar3;
   int iVar4;
   size_t sVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   int local_354;
   String local_350[8];
   String local_348[8];
   undefined8 local_340;
   String local_338[8];
   CowData<char32_t> local_330[8];
   String local_328[8];
   long *local_320;
   String local_318[8];
   long local_310;
   char *local_308;
   size_t local_300;
   int local_2f8[8];
   int local_2d8[8];
   undefined **local_2b8[72];
   undefined8 local_78;
   int local_70[2];
   undefined1 local_68[16];
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   FileAccess::get_file_as_string(local_350, param_1);
   if (local_354 != 0) goto LAB_00103c1e;
   Resource::Resource((Resource*)local_2b8);
   local_78 = 0;
   local_2b8[0] = &PTR__initialize_classv_0011ed48;
   local_70[0] = 0;
   local_58 = 0;
   local_50 = 0;
   local_68 = (undefined1[16])0x0;
   iVar3 = JSON::parse((String*)local_2b8, SUB81(local_350, 0));
   if (iVar3 == 0) {
      Variant::Variant((Variant*)local_2d8, (Variant*)local_70);
      Variant::operator_cast_to_Dictionary((Variant*)local_330);
      if (Variant::needs_deinit[local_2d8[0]] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_2f8, "type");
      cVar2 = Dictionary::has((Variant*)local_330);
      if (cVar2 == '\0') {
         if (Variant::needs_deinit[local_2f8[0]] != '\0') {
            Variant::_clear_internal();
         }

         LAB_00103f81:local_310 = 0;
         String::parse_latin1((String*)&local_310, "\', it\'s not a build profile.");
         operator+((char *)
         local_318,(String*)"Error parsing \'";
         String::operator +((String*)&local_308, local_318);
         _err_print_error("load_from_file", "editor/editor_build_profile.cpp", 0x119, (String*)&local_308, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_318);
         local_354 = 0x2b;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
      }
 else {
         Variant::Variant((Variant*)local_2d8, "type");
         Dictionary::operator []((Variant*)local_330);
         Variant::operator_cast_to_String((Variant*)&local_308);
         cVar2 = String::operator !=((String*)&local_308, "build_profile");
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_2f8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (cVar2 != '\0') goto LAB_00103f81;
         lVar7 = *(long*)( this + 0x180 );
         if (( lVar7 != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
            if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) == 0 ) || ( memset(*(void**)( this + 0x198 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) * 4),*(int*)( this + 0x1a4 ) != 0 )) {
               lVar6 = 0;
               while (true) {
                  if (( StringName::configured != '\0' ) && ( *(long*)( lVar7 + lVar6 * 8 ) != 0 )) {
                     StringName::unref();
                  }

                  lVar6 = lVar6 + 1;
                  if (*(uint*)( this + 0x1a4 ) <= (uint)lVar6) break;
                  lVar7 = *(long*)( this + 0x180 );
               }
;
            }

            *(undefined4*)( this + 0x1a4 ) = 0;
         }

         Variant::Variant((Variant*)local_2d8, "disabled_classes");
         cVar2 = Dictionary::has((Variant*)local_330);
         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (cVar2 != '\0') {
            Variant::Variant((Variant*)local_2d8, "disabled_classes");
            Dictionary::operator []((Variant*)local_330);
            Variant::operator_cast_to_Array((Variant*)local_318);
            if (Variant::needs_deinit[local_2d8[0]] != '\0') {
               Variant::_clear_internal();
            }

            for (iVar3 = 0; iVar4 = Array::size(),iVar3 < iVar4; iVar3 = iVar3 + 1) {
               Array::operator []((int)(Variant*)local_318);
               Variant::operator_cast_to_StringName((Variant*)&local_310);
               HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_308);
               if (( StringName::configured != '\0' ) && ( local_310 != 0 )) {
                  StringName::unref();
               }

            }

            Array::~Array((Array*)local_318);
         }

         *(ulong*)( this + 0x1d8 ) = CONCAT26(build_option_disabled_by_default._6_2_, (undefined6)build_option_disabled_by_default);
         *(ulong*)( this + 0x1de ) = CONCAT62(_UNK_00111f70, build_option_disabled_by_default._6_2_);
         Variant::Variant((Variant*)local_2d8, "disabled_build_options");
         cVar2 = Dictionary::has((Variant*)local_330);
         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (cVar2 != '\0') {
            Variant::Variant((Variant*)local_2d8, "disabled_build_options");
            Dictionary::operator []((Variant*)local_330);
            Variant::operator_cast_to_Dictionary((Variant*)local_328);
            if (Variant::needs_deinit[local_2d8[0]] != '\0') {
               Variant::_clear_internal();
            }

            local_320 = (long*)0x0;
            Dictionary::get_key_list((List*)local_328);
            if (( local_320 != (long*)0x0 ) && ( lVar7 = lVar7 != 0 )) {
               do {
                  lVar6 = 0;
                  Variant::operator_cast_to_String((Variant*)local_318);
                  do {
                     pcVar1 = ( &build_option_identifiers )[lVar6];
                     sVar5 = 0;
                     local_310 = 0;
                     if (pcVar1 != (char*)0x0) {
                        sVar5 = strlen(pcVar1);
                     }

                     local_308 = pcVar1;
                     local_300 = sVar5;
                     String::parse_latin1((StrRange*)&local_310);
                     cVar2 = String::operator ==((String*)&local_310, local_318);
                     if (cVar2 != '\0') {
                        this[(long)(int)lVar6 + 0x1d8] = (EditorBuildProfile)0x1;
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
                        break;
                     }

                     lVar6 = lVar6 + 1;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
                  }
 while ( lVar6 != 0xe );
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_318);
                  lVar7 = *(long*)( lVar7 + 0x18 );
               }
 while ( lVar7 != 0 );
            }

            List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_320);
            Dictionary::~Dictionary((Dictionary*)local_328);
         }

         Variant::Variant((Variant*)local_2d8, "force_detect_classes");
         cVar2 = Dictionary::has((Variant*)local_330);
         if (Variant::needs_deinit[local_2d8[0]] != '\0') {
            Variant::_clear_internal();
         }

         local_354 = 0;
         if (cVar2 != '\0') {
            Variant::Variant((Variant*)local_2d8, "force_detect_classes");
            Dictionary::operator []((Variant*)local_330);
            Variant::operator_cast_to_String((Variant*)&local_308);
            if (*(char**)( this + 0x1d0 ) != local_308) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1d0 ));
               pcVar1 = local_308;
               local_308 = (char*)0x0;
               *(char**)( this + 0x1d0 ) = pcVar1;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
            if (Variant::needs_deinit[local_2d8[0]] != '\0') {
               Variant::_clear_internal();
            }

         }

      }

      Dictionary::~Dictionary((Dictionary*)local_330);
   }
 else {
      local_310 = 0;
      if (local_58 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_310, (CowData*)&local_58);
      }

      local_320 = (long*)0x0;
      local_308 = ": ";
      local_300 = 2;
      String::parse_latin1((StrRange*)&local_320);
      itos((long)local_330);
      local_308 = "\' on line ";
      local_340 = 0;
      local_300 = 10;
      String::parse_latin1((StrRange*)&local_340);
      operator+((char *)
      local_348,(String*)"Error parsing \'";
      String::operator +(local_338, local_348);
      String::operator +(local_328, local_338);
      String::operator +(local_318, local_328);
      String::operator +((String*)&local_308, local_318);
      _err_print_error("load_from_file", "editor/editor_build_profile.cpp", 0x112, (String*)&local_308, 0, 0);
      local_354 = 0x2b;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_318);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_328);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_338);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_348);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_340);
      CowData<char32_t>::_unref(local_330);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_320);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_310);
   }

   local_2b8[0] = &PTR__initialize_classv_0011ed48;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (Variant::needs_deinit[local_70[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   Resource::~Resource((Resource*)local_2b8);
   LAB_00103c1e:CowData<char32_t>::_unref((CowData<char32_t>*)local_350);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_354;
}
/* EditorBuildProfile::set_disable_class(StringName const&, bool) */void EditorBuildProfile::set_disable_class(EditorBuildProfile *this, StringName *param_1, bool param_2) {
   long in_FS_OFFSET;
   StringName aSStack_28[24];
   long local_10;
   local_10 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2) {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(aSStack_28);
      if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( this + 0x180 ), param_1);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfileManager::_class_list_item_collapsed(Object*) */void EditorBuildProfileManager::_class_list_item_collapsed(EditorBuildProfileManager *this, Object *param_1) {
   char cVar1;
   long lVar2;
   long in_FS_OFFSET;
   Variant aVStack_68[8];
   long local_60;
   StringName local_58[16];
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0xe28] != (EditorBuildProfileManager)0x1 ) && ( param_1 != (Object*)0x0 )) {
      lVar2 = __dynamic_cast(param_1, &Object::typeinfo, &TreeItem::typeinfo, 0);
      if (lVar2 != 0) {
         TreeItem::get_metadata((int)local_48);
         if (( local_48[0] == 0x15 ) || ( local_48[0] == 4 )) {
            Variant::operator_cast_to_String(aVStack_68);
            cVar1 = TreeItem::is_collapsed();
            lVar2 = *(long*)( this + 0xe20 );
            StringName::StringName((StringName*)&local_60, (String*)aVStack_68, false);
            if (cVar1 == '\0') {
               HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( lVar2 + 0x1a8 ), (StringName*)&local_60);
            }
 else {
               HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_58);
            }

            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)aVStack_68);
         }

         if (Variant::needs_deinit[local_48[0]] != '\0') {
            Variant::_clear_internal();
         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfileManager::_fill_classes_from(TreeItem*, String const&, String const&) */void EditorBuildProfileManager::_fill_classes_from(TreeItem *param_1, String *param_2, String *param_3) {
   EditorBuildProfile *this;
   StringName *pSVar1;
   long lVar2;
   char *pcVar3;
   String *pSVar4;
   Object *pOVar5;
   char cVar6;
   char cVar7;
   int iVar8;
   int iVar9;
   String *pSVar10;
   String *in_RCX;
   long in_FS_OFFSET;
   undefined8 *local_78;
   ulong local_70;
   Object *local_68;
   size_t local_60;
   undefined8 local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pSVar10 = (String*)Tree::create_item(*(TreeItem**)( param_1 + 0xdf0 ), (int)param_2);
   TreeItem::set_cell_mode(pSVar10, 0, 1);
   pSVar4 = EditorNode::singleton;
   local_70 = 0;
   local_68 = (Object*)&_LC3;
   local_60 = 0;
   String::parse_latin1((StrRange*)&local_70);
   EditorNode::get_class_icon((String*)&local_68, pSVar4);
   iVar8 = (int)pSVar10;
   TreeItem::set_icon(iVar8, (Ref*)0x0);
   if (( ( local_68 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar5 = local_68,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
   Memory::free_static(pOVar5, false);
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);this * (EditorBuildProfile**)( param_1 + 0xe20 ) ;StringName::StringName((StringName*)&local_68, param_3, false);if (local_68 != (Object*)0x0) {
   cVar6 = EditorBuildProfile::is_class_disabled(this, (StringName*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
      StringName::unref();
   }

   if (cVar6 != '\0') {
      pSVar1 = *(StringName**)( param_1 + 0xdf0 );
      if ((_fill_classes_from(TreeItem*,String_const&,String_const&)::{lambda()
      #1
      sname == '\0') &&
         (iVar9 = __cxa_guard_acquire(&_fill_classes_from(TreeItem*,String_const&,String_const&)::
                                       {lambda()
      #1
      _scs_create((char*)&_fill_classes_from(TreeItem * String_const & String_const & sname, true));
      __cxa_atexit(StringName::~StringName, &_fill_classes_from(TreeItem * String_const & String_const & sname, &__dso_handle));
      __cxa_guard_release (&_fill_classes_from(TreeItem*,String_const&,String_const&)::{lambda()#1}
                             ::operator()()::sname);
   }

   local_58[0] = Control::get_theme_color
                              (pSVar1,(StringName *)
                                      &_fill_classes_from(TreeItem*,String_const&,String_const&)::
                                       {lambda()
   #1
   TreeItem::set_custom_color(iVar8, (Color*)0x0);
   goto LAB_00104919;
}
}cVar6 = '\0';LAB_00104919:local_68 = (Object*)0x0;if (*(long*)param_3 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)param_3);
}
TreeItem::set_text(pSVar10, 0, (String*)&local_68);CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);TreeItem::set_editable(iVar8, false);TreeItem::set_selectable(iVar8, false);Variant::Variant((Variant*)local_58, param_3);TreeItem::set_metadata(iVar8, (Variant*)0x0);if (Variant::needs_deinit[(int)local_58[0]] != '\0') {
   Variant::_clear_internal();
}
lVar2 = *(long*)( param_1 + 0xe20 );StringName::StringName((StringName*)&local_68, param_3, false);local_70 = local_70 & 0xffffffff00000000;HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( lVar2 + 0x1a8 ), (StringName*)&local_68, (uint*)&local_70);if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
   StringName::unref();
}
TreeItem::set_collapsed(SUB81(pSVar10, 0));cVar7 = String::operator ==(param_3, in_RCX);if (cVar7 != '\0') {
   TreeItem::select(iVar8);
}
if (cVar6 == '\0') {
   TreeItem::set_checked(iVar8, false);
   local_78 = (undefined8*)0x0;
   StringName::StringName((StringName*)&local_68, param_3, false);
   ClassDB::get_direct_inheriters_from_class((StringName*)&local_68, (List*)&local_78);
   if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
      StringName::unref();
   }

   List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>((List<StringName,DefaultAllocator>*)&local_78);
   if (local_78 != (undefined8*)0x0) {
      for (pSVar1 = (StringName*)*local_78; pSVar1 != (StringName*)0x0; pSVar1 = *(StringName**)( pSVar1 + 8 )) {
         lVar2 = *(long*)pSVar1;
         if (lVar2 == 0) {
            local_70 = 0;
         }
 else {
            pcVar3 = *(char**)( lVar2 + 8 );
            local_70 = 0;
            if (pcVar3 == (char*)0x0) {
               if (*(long*)( lVar2 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar2 + 0x10 ));
               }

            }
 else {
               local_60 = strlen(pcVar3);
               local_68 = (Object*)pcVar3;
               String::parse_latin1((StrRange*)&local_70);
            }

         }

         cVar6 = String::begins_with((char*)&local_70);
         if (( cVar6 == '\0' ) && ( iVar8 = iVar8 == 0 )) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            lVar2 = *(long*)pSVar1;
            if (lVar2 == 0) {
               local_70 = 0;
            }
 else {
               pcVar3 = *(char**)( lVar2 + 8 );
               local_70 = 0;
               if (pcVar3 == (char*)0x0) {
                  if (*(long*)( lVar2 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar2 + 0x10 ));
                  }

               }
 else {
                  local_60 = strlen(pcVar3);
                  local_68 = (Object*)pcVar3;
                  String::parse_latin1((StrRange*)&local_70);
               }

            }

            _fill_classes_from(param_1, pSVar10, (String*)&local_70);
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      }

   }

   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_78);
}
if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorBuildProfileManager::_update_edited_profile() */void EditorBuildProfileManager::_update_edited_profile(EditorBuildProfileManager *this) {
   long *plVar1;
   int *piVar2;
   TreeItem *pTVar3;
   char *pcVar4;
   undefined8 uVar5;
   int iVar6;
   long lVar7;
   undefined8 uVar8;
   undefined8 *puVar9;
   String *pSVar10;
   int *piVar11;
   int iVar12;
   int iVar13;
   long in_FS_OFFSET;
   Variant *local_e8;
   HashMap<EditorBuildProfile::BuildOptionCategory,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<EditorBuildProfile::BuildOptionCategory>,DefaultTypedAllocator<HashMapElement<EditorBuildProfile::BuildOptionCategory,TreeItem*>>> *local_e0;
   int local_cc;
   CowData<char32_t> *local_c0;
   long local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   long local_88;
   undefined1 local_80[16];
   undefined1 local_70[16];
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b0 = 0;
   lVar7 = Tree::get_selected();
   if (lVar7 == 0) {
      local_cc = -1;
   }
 else {
      Tree::get_selected();
      TreeItem::get_metadata((int)(Variant*)local_58);
      lVar7 = (long)local_58[0];
      if (( local_58[0] == 0x15 ) || ( local_58[0] == 4 )) {
         Variant::operator_cast_to_String((Variant*)&local_88);
         if (local_b0 != local_88) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            local_b0 = local_88;
            local_88 = 0;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         local_cc = -1;
         lVar7 = (long)local_58[0];
      }
 else if (local_58[0] == 2) {
         local_cc = Variant::operator_cast_to_int((Variant*)local_58);
         lVar7 = (long)local_58[0];
      }
 else {
         local_cc = -1;
      }

      if (Variant::needs_deinit[lVar7] != '\0') {
         Variant::_clear_internal();
      }

   }

   local_c0 = (CowData<char32_t>*)&local_b0;
   local_e0 = (HashMap<EditorBuildProfile::BuildOptionCategory,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<EditorBuildProfile::BuildOptionCategory>,DefaultTypedAllocator<HashMapElement<EditorBuildProfile::BuildOptionCategory,TreeItem*>>>*)&local_88;
   local_e8 = (Variant*)local_58;
   iVar13 = 0;
   Tree::clear();
   this[0xe28] = (EditorBuildProfileManager)0x1;
   iVar6 = Tree::create_item(*(TreeItem**)( this + 0xdf0 ), 0);
   local_60 = 2;
   local_80 = (undefined1[16])0x0;
   local_70 = (undefined1[16])0x0;
   while (true) {
      uVar8 = Tree::create_item(*(TreeItem**)( this + 0xdf0 ), iVar6);
      EditorBuildProfile::get_build_option_category_name((EditorBuildProfile*)&local_98, iVar13);
      TreeItem::set_text(uVar8, 0, (CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      local_98 = (char*)CONCAT44(local_98._4_4_, iVar13);
      puVar9 = (undefined8*)HashMap<EditorBuildProfile::BuildOptionCategory,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<EditorBuildProfile::BuildOptionCategory>,DefaultTypedAllocator<HashMapElement<EditorBuildProfile::BuildOptionCategory,TreeItem*>>>::operator [](local_e0, (CowData<char32_t>*)&local_98);
      *puVar9 = uVar8;
      if (iVar13 != 0) break;
      iVar13 = 1;
   }
;
   lVar7 = 0;
   do {
      while (true) {
         iVar13 = (int)lVar7;
         pTVar3 = *(TreeItem**)( this + 0xdf0 );
         local_98 = (char*)CONCAT44(local_98._4_4_, ( &EditorBuildProfile::build_option_category )[lVar7]);
         puVar9 = (undefined8*)HashMap<EditorBuildProfile::BuildOptionCategory,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<EditorBuildProfile::BuildOptionCategory>,DefaultTypedAllocator<HashMapElement<EditorBuildProfile::BuildOptionCategory,TreeItem*>>>::operator [](local_e0, (CowData<char32_t>*)&local_98);
         uVar8 = Tree::create_item(pTVar3, (int)*puVar9);
         TreeItem::set_cell_mode(uVar8, 0, 1);
         EditorBuildProfile::get_build_option_name((EditorBuildProfile*)&local_98);
         TreeItem::set_text(uVar8, 0, (CowData<char32_t>*)&local_98);
         pcVar4 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar1 = (long*)( (long)local_98 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static((void*)( (long)pcVar4 + -0x10 ), false);
            }

         }

         iVar12 = (int)uVar8;
         TreeItem::set_selectable(iVar12, false);
         TreeItem::set_editable(iVar12, false);
         Variant::Variant(local_e8, iVar13);
         TreeItem::set_metadata(iVar12, (Variant*)0x0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (*(char*)( *(long*)( this + 0xe20 ) + 0x1d8 + (long)iVar13 ) == '\0') break;
         if (local_cc != iVar13) goto LAB_00104e6b;
         LAB_00104f79:lVar7 = lVar7 + 1;
         TreeItem::select(iVar12);
         if (lVar7 == 0xe) goto LAB_00104f98;
      }
;
      TreeItem::set_checked(iVar12, false);
      if (local_cc == iVar13) goto LAB_00104f79;
      LAB_00104e6b:lVar7 = lVar7 + 1;
   }
 while ( lVar7 != 0xe );
   LAB_00104f98:pSVar10 = (String*)Tree::create_item(*(TreeItem**)( this + 0xdf0 ), iVar6);
   local_a0 = 0;
   local_90 = 0;
   local_98 = "";
   String::parse_latin1((StrRange*)&local_a0);
   local_98 = "Nodes and Classes:";
   local_a8 = 0;
   local_90 = 0x12;
   String::parse_latin1((StrRange*)&local_a8);
   TTR((String*)&local_98, (String*)&local_a8);
   TreeItem::set_text(pSVar10, 0, (CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_98 = "Node";
   local_a0 = 0;
   local_90 = 4;
   String::parse_latin1((StrRange*)&local_a0);
   _fill_classes_from((TreeItem*)this, pSVar10, (String*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_98 = "Resource";
   local_a0 = 0;
   local_90 = 8;
   String::parse_latin1((StrRange*)&local_a0);
   _fill_classes_from((TreeItem*)this, pSVar10, (String*)&local_a0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   local_98 = (char*)0x0;
   uVar8 = *(undefined8*)( this + 0xe18 );
   if (*(long*)( *(long*)( this + 0xe20 ) + 0x1d0 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_98, (CowData*)( *(long*)( this + 0xe20 ) + 0x1d0 ));
   }

   LineEdit::set_text(uVar8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   this[0xe28] = (EditorBuildProfileManager)0x0;
   _class_list_item_selected(this);
   uVar8 = local_80._0_8_;
   if ((undefined8*)local_80._0_8_ != (undefined8*)0x0) {
      uVar5 = local_80._8_8_;
      if (( local_60._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_60 & 0xffffffff ) * 4 ) != 0 )) {
         piVar2 = (int*)( local_80._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_60 & 0xffffffff ) * 4 ) * 4 );
         piVar11 = (int*)local_80._8_8_;
         puVar9 = (undefined8*)local_80._0_8_;
         do {
            if (*piVar11 != 0) {
               *piVar11 = 0;
               Memory::free_static((void*)*puVar9, false);
               *puVar9 = 0;
            }

            piVar11 = piVar11 + 1;
            puVar9 = puVar9 + 1;
         }
 while ( piVar11 != piVar2 );
      }

      Memory::free_static((void*)uVar8, false);
      Memory::free_static((void*)uVar5, false);
   }

   CowData<char32_t>::_unref(local_c0);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfileManager::_class_list_item_edited() */void EditorBuildProfileManager::_class_list_item_edited(EditorBuildProfileManager *this) {
   char cVar1;
   byte bVar2;
   uint uVar3;
   long lVar4;
   long in_FS_OFFSET;
   Variant aVStack_78[8];
   long local_70;
   StringName local_68[16];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( this[0xe28] == (EditorBuildProfileManager)0x0 ) && ( lVar4 = lVar4 != 0 )) {
      bVar2 = TreeItem::is_checked((int)lVar4);
      TreeItem::get_metadata((int)(Variant*)local_58);
      lVar4 = (long)local_58[0];
      if (( local_58[0] == 4 ) || ( local_58[0] == 0x15 )) {
         Variant::operator_cast_to_String(aVStack_78);
         lVar4 = *(long*)( this + 0xe20 );
         StringName::StringName((StringName*)&local_70, (String*)aVStack_78, false);
         if (bVar2 == 0) {
            HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(local_68);
         }
 else {
            HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::erase((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)( lVar4 + 0x180 ), (StringName*)&local_70);
         }

         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }

         _update_edited_profile(this);
         CowData<char32_t>::_unref((CowData<char32_t>*)aVStack_78);
         cVar1 = Variant::needs_deinit[local_58[0]];
      }
 else {
         if (local_58[0] == 2) {
            uVar3 = Variant::operator_cast_to_int((Variant*)local_58);
            if (uVar3 < 0xe) {
               *(byte*)( *(long*)( this + 0xe20 ) + 0x1d8 + (long)(int)uVar3 ) = bVar2 ^ 1;
               lVar4 = (long)local_58[0];
            }
 else {
               _err_print_index_error("set_disable_build_option", "editor/editor_build_profile.cpp", 0x8e, (ulong)uVar3, 0xe, "p_build_option", "BUILD_OPTION_MAX", "", false, false);
               lVar4 = (long)local_58[0];
            }

         }

         cVar1 = Variant::needs_deinit[lVar4];
      }

      if (cVar1 != '\0') {
         Variant::_clear_internal();
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfileManager::_import_profile(String const&) */void EditorBuildProfileManager::_import_profile(EditorBuildProfileManager *this, String *param_1) {
   undefined8 uVar1;
   Object *pOVar2;
   EditorBuildProfile *pEVar3;
   char cVar4;
   int iVar5;
   String *pSVar6;
   long in_FS_OFFSET;
   EditorBuildProfile *local_b0;
   long local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   String local_90[8];
   undefined8 local_88;
   String local_80[8];
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_b0 = (EditorBuildProfile*)0x0;
   Ref<EditorBuildProfile>::instantiate<>((Ref<EditorBuildProfile>*)&local_b0);
   pEVar3 = local_b0;
   iVar5 = EditorBuildProfile::load_from_file(local_b0, param_1);
   String::get_file();
   pSVar6 = EditorNode::singleton;
   if (iVar5 == 0) {
      uVar1 = *(undefined8*)( this + 0xe10 );
      local_68 = (char*)0x0;
      if (*(long*)param_1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)param_1);
      }

      LineEdit::set_text(uVar1, (CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      pSVar6 = (String*)EditorSettings::get_singleton();
      Variant::Variant((Variant*)local_58, param_1);
      local_68 = "last_file_path";
      local_70 = 0;
      local_60 = 0xe;
      String::parse_latin1((StrRange*)&local_70);
      local_68 = "build_profile";
      local_78 = 0;
      local_60 = 0xd;
      String::parse_latin1((StrRange*)&local_78);
      EditorSettings::set_project_metadata(pSVar6, (String*)&local_78, (Variant*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }

      pOVar2 = *(Object**)( this + 0xe20 );
      if (pEVar3 != (EditorBuildProfile*)pOVar2) {
         *(EditorBuildProfile**)( this + 0xe20 ) = pEVar3;
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( this + 0xe20 ) = 0;
         }

         if (pOVar2 != (Object*)0x0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               cVar4 = predelete_handler(pOVar2);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }

      _update_edited_profile(this);
   }
 else {
      local_70 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_70);
      local_78 = 0;
      local_68 = "Warning!";
      local_60 = 8;
      String::parse_latin1((StrRange*)&local_78);
      TTR(local_80, (String*)&local_78);
      local_88 = 0;
      if (local_a8 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_a8);
      }

      local_68 = "";
      local_98 = 0;
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_98);
      local_68 = "File \'%s\' format is invalid, import aborted.";
      local_a0 = 0;
      local_60 = 0x2c;
      String::parse_latin1((StrRange*)&local_a0);
      TTR(local_90, (String*)&local_a0);
      vformat<String>((CowData<char32_t>*)&local_68, local_90, (CowData<char32_t>*)&local_88);
      EditorNode::show_warning(pSVar6, (String*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   cVar4 = RefCounted::unreference();
   if (cVar4 != '\0') {
      cVar4 = predelete_handler((Object*)pEVar3);
      if (cVar4 != '\0') {
         ( **(code**)( *(long*)pEVar3 + 0x140 ) )(pEVar3);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static(pEVar3, false);
            return;
         }

         goto LAB_001058ef;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001058ef:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorBuildProfileManager::_notification(int) [clone .part.0] */void EditorBuildProfileManager::_notification(int param_1) {
   String *pSVar1;
   undefined4 in_register_0000003c;
   EditorBuildProfileManager *this;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
   char *local_88;
   undefined8 local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   this(EditorBuildProfileManager * CONCAT44(in_register_0000003c, param_1));
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   pSVar1 = (String*)EditorSettings::get_singleton();
   Variant::Variant((Variant*)local_78, "");
   local_88 = "last_file_path";
   local_90 = 0;
   local_80 = 0xe;
   String::parse_latin1((StrRange*)&local_90);
   local_88 = "build_profile";
   local_98 = 0;
   local_80 = 0xd;
   String::parse_latin1((StrRange*)&local_98);
   EditorSettings::get_project_metadata((String*)local_58, pSVar1, (Variant*)&local_98);
   Variant::operator_cast_to_String((Variant*)&local_88);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (Variant::needs_deinit[local_78[0]] != '\0') {
      Variant::_clear_internal();
   }

   if (( local_88 != (char*)0x0 ) && ( 1 < *(uint*)( local_88 + -8 ) )) {
      _import_profile(this, (String*)&local_88);
   }

   if (*(long*)( this + 0xe20 ) == 0) {
      Ref<EditorBuildProfile>::instantiate<>((Ref<EditorBuildProfile>*)( this + 0xe20 ));
      _update_edited_profile(this);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfileManager::_notification(int) */void EditorBuildProfileManager::_notification(EditorBuildProfileManager *this, int param_1) {
   if (param_1 != 0xd) {
      return;
   }

   _notification((int)this);
   return;
}
/* EditorBuildProfileManager::_bind_methods() */void EditorBuildProfileManager::_bind_methods(void) {
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
   pMVar4 = create_method_bind<EditorBuildProfileManager>(_update_edited_profile);
   StringName::StringName((StringName*)local_68, "_update_selected_profile", false);
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
/* EditorBuildProfile::_bind_methods() */void EditorBuildProfile::_bind_methods(void) {
   long lVar1;
   code *pcVar2;
   undefined *puVar3;
   long *plVar4;
   MethodBind *pMVar5;
   uint uVar6;
   long lVar7;
   long *plVar8;
   long in_FS_OFFSET;
   undefined8 local_100;
   long local_f8;
   undefined8 local_f0;
   undefined8 local_e8;
   undefined8 local_e0;
   long local_d8;
   long *local_d0;
   char *local_c8;
   undefined8 local_c0;
   long *local_b8;
   char *local_98;
   char *pcStack_90;
   undefined8 local_88;
   char *local_78;
   char *pcStack_70;
   undefined8 local_68;
   char **local_58;
   undefined1 auStack_50[16];
   long local_40;
   puVar3 = PTR__LC172_0011fa10;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = 0;
   local_78 = PTR__LC173_0011fa18;
   pcStack_70 = "disable";
   auStack_50._8_8_ = auStack_50._0_8_;
   auStack_50._0_8_ = &pcStack_70;
   uVar6 = ( uint ) & local_58;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"set_disable_class", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<EditorBuildProfile,StringName_const&,bool>(set_disable_class);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar8 = local_b8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar8 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "class_name";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"is_class_disabled", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<EditorBuildProfile,bool,StringName_const&>(is_class_disabled);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar8 = local_b8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar8 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_88 = 0;
   auStack_50._0_8_ = &pcStack_90;
   local_98 = puVar3;
   pcStack_90 = "disable";
   local_58 = &local_98;
   D_METHODP((char*)&local_c8, (char***)"set_disable_build_option", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<EditorBuildProfile,EditorBuildProfile::BuildOption,bool>(set_disable_build_option);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar8 = local_b8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar8 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "build_option";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"is_build_option_disabled", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<EditorBuildProfile,bool,EditorBuildProfile::BuildOption>(is_build_option_disabled);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar8 = local_b8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar8 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "build_option";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"get_build_option_name", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<EditorBuildProfile,String,EditorBuildProfile::BuildOption>(_get_build_option_name);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar8 = local_b8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar8 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "path";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"save_to_file", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<EditorBuildProfile,Error,String_const&>(save_to_file);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar8 = local_b8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar8 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   local_78 = "path";
   pcStack_70 = (char*)0x0;
   local_58 = &local_78;
   D_METHODP((char*)&local_c8, (char***)"load_from_file", uVar6);
   auStack_50 = (undefined1[16])0x0;
   local_58 = (char**)0x0;
   pMVar5 = create_method_bind<EditorBuildProfile,Error,String_const&>(load_from_file);
   ClassDB::bind_methodfi(1, pMVar5, false, (MethodDefinition*)&local_c8, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_58] != '\0') {
      Variant::_clear_internal();
   }

   plVar4 = local_b8;
   if (local_b8 != (long*)0x0) {
      LOCK();
      plVar8 = local_b8 + -2;
      *plVar8 = *plVar8 + -1;
      UNLOCK();
      if (*plVar8 == 0) {
         if (local_b8 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         lVar1 = local_b8[-1];
         local_b8 = (long*)0x0;
         if (lVar1 != 0) {
            lVar7 = 0;
            plVar8 = plVar4;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar8 != 0 )) {
                  StringName::unref();
               }

               lVar7 = lVar7 + 1;
               plVar8 = plVar8 + 1;
            }
 while ( lVar1 != lVar7 );
         }

         Memory::free_static(plVar4 + -2, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_c8, "BUILD_OPTION_3D", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_3D");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_d0, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_d0, (StringName*)&local_d8, (StringName*)&local_c8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "BUILD_OPTION_PHYSICS_2D", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_PHYSICS_2D");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_c8 = "EditorBuildProfile";
   local_e8 = 0;
   local_c0 = 0x12;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 1, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "BUILD_OPTION_PHYSICS_3D", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_PHYSICS_3D");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_c8 = "EditorBuildProfile";
   local_e8 = 0;
   local_c0 = 0x12;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 2, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "BUILD_OPTION_NAVIGATION", false);
   local_c8 = "BUILD_OPTION_NAVIGATION";
   local_e0 = 0;
   local_c0 = 0x17;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 3, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "BUILD_OPTION_XR", false);
   local_c8 = "BUILD_OPTION_XR";
   local_e0 = 0;
   local_c0 = 0xf;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 4, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "BUILD_OPTION_RENDERING_DEVICE", false);
   local_c8 = "BUILD_OPTION_RENDERING_DEVICE";
   local_e0 = 0;
   local_c0 = 0x1d;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 5, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_c8, "BUILD_OPTION_OPENGL", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_OPENGL");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_d0, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_d0, (StringName*)&local_d8, (StringName*)&local_c8, 6, false);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_c8, "BUILD_OPTION_VULKAN", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_VULKAN");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_d0, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_d0, (StringName*)&local_d8, (StringName*)&local_c8, 7, false);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_c8, "BUILD_OPTION_TEXT_SERVER_FALLBACK", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_TEXT_SERVER_FALLBACK");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_d0, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_d0, (StringName*)&local_d8, (StringName*)&local_c8, 8, false);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "BUILD_OPTION_TEXT_SERVER_ADVANCED", false);
   local_c8 = "BUILD_OPTION_TEXT_SERVER_ADVANCED";
   local_e0 = 0;
   local_c0 = 0x21;
   String::parse_latin1((StrRange*)&local_e0);
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 9, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_c8, "BUILD_OPTION_DYNAMIC_FONTS", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_DYNAMIC_FONTS");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_d0, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_d0, (StringName*)&local_d8, (StringName*)&local_c8, 10, false);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_c8, "BUILD_OPTION_WOFF2_FONTS", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_WOFF2_FONTS");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_d0, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_d0, (StringName*)&local_d8, (StringName*)&local_c8, 0xb, false);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_c8, "BUILD_OPTION_GRAPHITE_FONTS", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_GRAPHITE_FONTS");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_e8 = 0;
   String::parse_latin1((String*)&local_e8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_d0, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_d0, (StringName*)&local_d8, (StringName*)&local_c8, 0xc, false);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "BUILD_OPTION_MSDFGEN", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_MSDFGEN");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_c8 = "EditorBuildProfile";
   local_e8 = 0;
   local_c0 = 0x12;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0xd, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_d0, "BUILD_OPTION_MAX", false);
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "BUILD_OPTION_MAX");
   __constant_get_enum_name<EditorBuildProfile::BuildOption>((details*)&local_d8);
   local_c8 = "EditorBuildProfile";
   local_e8 = 0;
   local_c0 = 0x12;
   String::parse_latin1((StrRange*)&local_e8);
   StringName::StringName((StringName*)&local_c8, (String*)&local_e8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d8, (StringName*)&local_d0, 0xe, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d8 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "BUILD_OPTION_CATEGORY_GENERAL", false);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "BUILD_OPTION_CATEGORY_GENERAL");
   local_e0 = 0;
   String::parse_latin1((String*)&local_e0, "EditorBuildProfile::BuildOptionCategory");
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_d8, (String*)&local_e0);
   StringName::StringName((StringName*)&local_d0, (String*)&local_d8, false);
   local_e8 = 0;
   local_f0 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (CowData<char32_t>*)&local_f0, 0, (String*)&local_e8, 0x10006, (StringName*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   local_d0 = local_b8;
   local_b8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_c8, (String*)&local_d8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d0, (StringName*)&local_f8, 0, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "BUILD_OPTION_CATEGORY_TEXT_SERVER", false);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "BUILD_OPTION_CATEGORY_TEXT_SERVER");
   local_c8 = "EditorBuildProfile::BuildOptionCategory";
   local_e0 = 0;
   local_c0 = 0x27;
   String::parse_latin1((StrRange*)&local_e0);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_d8, (String*)&local_e0);
   StringName::StringName((StringName*)&local_d0, (String*)&local_d8, false);
   local_e8 = 0;
   local_f0 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (CowData<char32_t>*)&local_f0, 0, (String*)&local_e8, 0x10006, (StringName*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   local_d0 = local_b8;
   local_b8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_c8, (String*)&local_d8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d0, (StringName*)&local_f8, 1, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
      StringName::unref();
   }

   StringName::StringName((StringName*)&local_f8, "BUILD_OPTION_CATEGORY_MAX", false);
   local_100 = 0;
   String::parse_latin1((String*)&local_100, "BUILD_OPTION_CATEGORY_MAX");
   local_c8 = "EditorBuildProfile::BuildOptionCategory";
   local_e0 = 0;
   local_c0 = 0x27;
   String::parse_latin1((StrRange*)&local_e0);
   godot::details::enum_qualified_name_to_class_info_name((details*)&local_d8, (String*)&local_e0);
   StringName::StringName((StringName*)&local_d0, (String*)&local_d8, false);
   local_e8 = 0;
   local_f0 = 0;
   PropertyInfo::PropertyInfo((PropertyInfo*)&local_c8, 2, (CowData<char32_t>*)&local_f0, 0, (String*)&local_e8, 0x10006, (StringName*)&local_d0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_e0);
   local_d0 = local_b8;
   local_b8 = (long*)0x0;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_c8);
   local_d8 = 0;
   String::parse_latin1((String*)&local_d8, "EditorBuildProfile");
   StringName::StringName((StringName*)&local_c8, (String*)&local_d8, false);
   ClassDB::bind_integer_constant((StringName*)&local_c8, (StringName*)&local_d0, (StringName*)&local_f8, 2, false);
   if (( StringName::configured != '\0' ) && ( local_c8 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
   if (( StringName::configured != '\0' ) && ( local_d0 != (long*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
      StringName::unref();
   }

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* EditorBuildProfileManager::_find_files(EditorFileSystemDirectory*, HashMap<String,
   EditorBuildProfileManager::DetectedFile, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, EditorBuildProfileManager::DetectedFile> > > const&,
   HashMap<String, EditorBuildProfileManager::DetectedFile, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorBuildProfileManager::DetectedFile> > >&) [clone .part.0] */void EditorBuildProfileManager::_find_files(EditorBuildProfileManager *this, EditorFileSystemDirectory *param_1, HashMap *param_2, HashMap *param_3) {
   long *plVar1;
   CowData<char32_t> *this_00;
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
   code *pcVar19;
   ulong uVar20;
   undefined1 auVar21[16];
   undefined8 uVar22;
   char cVar23;
   int iVar24;
   uint uVar25;
   int iVar26;
   EditorFileSystemDirectory *pEVar27;
   long lVar28;
   bool bVar29;
   uint uVar30;
   long lVar31;
   long lVar32;
   uint uVar33;
   char *pcVar34;
   long lVar35;
   uint uVar36;
   void *pvVar37;
   long in_FS_OFFSET;
   bool bVar38;
   String *local_f8;
   int local_ec;
   CowData<char32_t> *local_e8;
   ulong local_d0;
   String local_b0[8];
   char *local_a8;
   long local_a0;
   char *local_98;
   size_t local_90;
   undefined4 local_88;
   char *local_80[2];
   long local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_ec = 0;
   iVar24 = EditorFileSystemDirectory::get_file_count();
   if (iVar24 < 1) {
      LAB_00107cc4:iVar26 = 0;
      iVar24 = EditorFileSystemDirectory::get_subdir_count();
      if (0 < iVar24) {
         do {
            pEVar27 = (EditorFileSystemDirectory*)EditorFileSystemDirectory::get_subdir((int)param_1);
            if (pEVar27 != (EditorFileSystemDirectory*)0x0) {
               _find_files(this, pEVar27, param_2, param_3);
            }

            iVar26 = iVar26 + 1;
            iVar24 = EditorFileSystemDirectory::get_subdir_count();
         }
 while ( iVar26 < iVar24 );
      }

      if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   LAB_00107998:EditorFileSystemDirectory::get_file_path((int)local_b0);
   local_a8 = (char*)0x0;
   bVar29 = SUB81(local_b0, 0);
   if (( *(long*)( param_2 + 8 ) != 0 ) && ( *(int*)( param_2 + 0x2c ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
      lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
      uVar25 = String::hash();
      uVar20 = CONCAT44(0, uVar2);
      lVar32 = *(long*)( param_2 + 0x10 );
      uVar30 = 1;
      if (uVar25 != 0) {
         uVar30 = uVar25;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar30 * lVar35;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar20;
      lVar31 = SUB168(auVar3 * auVar11, 8);
      uVar25 = *(uint*)( lVar32 + lVar31 * 4 );
      iVar24 = SUB164(auVar3 * auVar11, 8);
      if (uVar25 != 0) {
         uVar33 = 0;
         do {
            if (uVar30 == uVar25) {
               cVar23 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ), local_b0);
               if (cVar23 != '\0') {
                  if (( *(long*)( param_2 + 8 ) == 0 ) || ( *(int*)( param_2 + 0x2c ) == 0 )) goto LAB_00107bc0;
                  uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
                  lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
                  uVar25 = String::hash();
                  uVar20 = CONCAT44(0, uVar2);
                  lVar32 = *(long*)( param_2 + 0x10 );
                  uVar30 = 1;
                  if (uVar25 != 0) {
                     uVar30 = uVar25;
                  }

                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar30 * lVar35;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar20;
                  lVar31 = SUB168(auVar7 * auVar15, 8);
                  uVar25 = *(uint*)( lVar32 + lVar31 * 4 );
                  uVar33 = SUB164(auVar7 * auVar15, 8);
                  if (uVar25 == 0) goto LAB_00107bc0;
                  uVar36 = 0;
                  goto LAB_00107b88;
               }

               lVar32 = *(long*)( param_2 + 0x10 );
            }

            uVar33 = uVar33 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar24 + 1) * lVar35;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar20;
            lVar31 = SUB168(auVar4 * auVar12, 8);
            uVar25 = *(uint*)( lVar32 + lVar31 * 4 );
            iVar24 = SUB164(auVar4 * auVar12, 8);
         }
 while ( ( uVar25 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar25 * lVar35,auVar13._8_8_ = 0,auVar13._0_8_ = uVar20,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar2 + iVar24 ) - SUB164(auVar5 * auVar13, 8)) * lVar35,auVar14._8_8_ = 0,auVar14._0_8_ = uVar20,uVar33 <= SUB164(auVar6 * auVar14, 8) );
      }

   }

   local_d0 = 0;
   goto LAB_00107d62;
   LAB_00107b88:if (uVar30 == uVar25) {
      cVar23 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ), local_b0);
      if (cVar23 != '\0') goto LAB_00107bec;
      lVar32 = *(long*)( param_2 + 0x10 );
   }

   uVar36 = uVar36 + 1;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = ( ulong )(uVar33 + 1) * lVar35;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar20;
   lVar31 = SUB168(auVar8 * auVar16, 8);
   uVar25 = *(uint*)( lVar32 + lVar31 * 4 );
   uVar33 = SUB164(auVar8 * auVar16, 8);
   if (( uVar25 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar25 * lVar35,auVar17._8_8_ = 0,auVar17._0_8_ = uVar20,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar33 ) - SUB164(auVar9 * auVar17, 8)) * lVar35,auVar18._8_8_ = 0,auVar18._0_8_ = uVar20,SUB164(auVar10 * auVar18, 8) < uVar36) {
      LAB_00107bc0:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar19 = (code*)invalidInstructionException();
      ( *pcVar19 )();
   }

   goto LAB_00107b88;
   LAB_00107bec:lVar35 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar33 * 8 );
   local_d0 = FileAccess::get_modified_time(local_b0);
   if (local_d0 != *(uint*)( lVar35 + 0x18 )) {
      FileAccess::get_md5((String*)local_68);
      if (local_a8 != (char*)local_68._0_8_) {
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         local_a8 = (char*)local_68._0_8_;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = local_68._8_8_;
         local_68 = auVar21 << 0x40;
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
      cVar23 = String::operator !=((String*)&local_a8, (String*)( lVar35 + 0x20 ));
      if (cVar23 != '\0') {
         LAB_00107d62:local_e8 = (CowData<char32_t>*)&local_a8;
         local_88 = 0;
         local_80[0] = (char*)0x0;
         local_70 = 0;
         local_48 = _LC32;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         ResourceLoader::get_classes_used(local_b0, (HashSet*)local_68);
         iVar24 = local_48._4_4_;
         if (local_48._4_4_ != 0) {
            uVar22 = local_68._0_8_;
            lVar32 = 0;
            lVar35 = *(long*)local_68._0_8_;
            if (lVar35 == 0) goto LAB_00108031;
            LAB_00107df0:pcVar34 = *(char**)( lVar35 + 8 );
            local_a0 = 0;
            if (pcVar34 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar35 + 0x10 ) + -0x10 );
               if (*(long*)( lVar35 + 0x10 ) != 0) {
                  do {
                     lVar31 = *plVar1;
                     if (lVar31 == 0) goto LAB_00107e26;
                     LOCK();
                     lVar28 = *plVar1;
                     bVar38 = lVar31 == lVar28;
                     if (bVar38) {
                        *plVar1 = lVar31 + 1;
                        lVar28 = lVar31;
                     }

                     UNLOCK();
                  }
 while ( !bVar38 );
                  if (lVar28 != -1) {
                     local_a0 = *(long*)( lVar35 + 0x10 );
                  }

               }

            }
 else {
               local_90 = strlen(pcVar34);
               local_98 = pcVar34;
               String::parse_latin1((StrRange*)&local_a0);
            }

            LAB_00107e26:if (local_70 == 0) goto LAB_0010804b;
            LAB_00107e37:iVar26 = CowData<String>::resize<false>((CowData<String>*)&local_70, *(long*)( local_70 + -8 ) + 1);
            if (iVar26 != 0) goto LAB_00108060;
            do {
               if (local_70 == 0) {
                  lVar31 = -1;
                  lVar35 = 0;
                  LAB_001080da:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar31, lVar35, "p_index", "size()", "", false, false);
               }
 else {
                  lVar35 = *(long*)( local_70 + -8 );
                  lVar31 = lVar35 + -1;
                  if (lVar31 < 0) goto LAB_001080da;
                  CowData<String>::_copy_on_write((CowData<String>*)&local_70);
                  this_00 = (CowData<char32_t>*)( local_70 + lVar31 * 8 );
                  if (*(long*)this_00 != local_a0) {
                     CowData<char32_t>::_ref(this_00, (CowData*)&local_a0);
                  }

               }

               while (true) {
                  lVar35 = local_a0;
                  if (local_a0 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_a0 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_a0 = 0;
                        Memory::free_static((void*)( lVar35 + -0x10 ), false);
                     }

                  }

                  pcVar34 = local_80[0];
                  if (iVar24 <= (int)lVar32 + 1) goto LAB_00107eda;
                  lVar32 = lVar32 + 1;
                  lVar35 = *(long*)( uVar22 + lVar32 * 8 );
                  if (lVar35 != 0) goto LAB_00107df0;
                  LAB_00108031:local_a0 = 0;
                  if (local_70 != 0) goto LAB_00107e37;
                  LAB_0010804b:iVar26 = CowData<String>::resize<false>((CowData<String>*)&local_70, 1);
                  if (iVar26 == 0) break;
                  LAB_00108060:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
               }
;
            }
 while ( true );
         }

         pcVar34 = (char*)0x0;
         LAB_00107eda:local_f8 = (String*)&local_98;
         if (( local_a8 == (char*)0x0 ) || ( *(uint*)( local_a8 + -8 ) < 2 )) {
            local_88 = FileAccess::get_modified_time(local_b0);
            FileAccess::get_md5(local_f8);
            if (local_98 != pcVar34) {
               CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
               local_80[0] = local_98;
               local_98 = (char*)0x0;
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_f8);
         }
 else {
            local_88 = (undefined4)local_d0;
            if (local_a8 != pcVar34) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_80, (CowData*)local_e8);
            }

         }

         HashMap<String,EditorBuildProfileManager::DetectedFile,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorBuildProfileManager::DetectedFile>>>::insert(local_f8, (DetectedFile*)param_3, bVar29);
         pvVar37 = (void*)local_68._0_8_;
         if ((void*)local_68._0_8_ != (void*)0x0) {
            if (local_48._4_4_ != 0) {
               if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
                  memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) * 4);
                  if (local_48._4_4_ == 0) goto LAB_00108120;
               }

               lVar35 = 0;
               do {
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar37 + lVar35 * 8 ) != 0 )) {
                     StringName::unref();
                     pvVar37 = (void*)local_68._0_8_;
                  }

                  lVar35 = lVar35 + 1;
               }
 while ( (uint)lVar35 < local_48._4_4_ );
               local_48 = local_48 & 0xffffffff;
               if (pvVar37 == (void*)0x0) goto LAB_00107ff2;
            }

            LAB_00108120:Memory::free_static(pvVar37, false);
            Memory::free_static((void*)local_58._0_8_, false);
            Memory::free_static((void*)local_68._8_8_, false);
            Memory::free_static((void*)local_58._8_8_, false);
         }

         LAB_00107ff2:CowData<String>::_unref((CowData<String>*)&local_70);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
         CowData<char32_t>::_unref(local_e8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
         goto LAB_00107cab;
      }

   }

   local_e8 = (CowData<char32_t>*)&local_a8;
   HashMap<String,EditorBuildProfileManager::DetectedFile,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorBuildProfileManager::DetectedFile>>>::insert((String*)local_68, (DetectedFile*)param_3, bVar29);
   CowData<char32_t>::_unref(local_e8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b0);
   LAB_00107cab:local_ec = local_ec + 1;
   iVar24 = EditorFileSystemDirectory::get_file_count();
   if (iVar24 <= local_ec) goto LAB_00107cc4;
   goto LAB_00107998;
}
/* EditorBuildProfileManager::_find_files(EditorFileSystemDirectory*, HashMap<String,
   EditorBuildProfileManager::DetectedFile, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, EditorBuildProfileManager::DetectedFile> > > const&,
   HashMap<String, EditorBuildProfileManager::DetectedFile, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorBuildProfileManager::DetectedFile> > >&) */void EditorBuildProfileManager::_find_files(EditorBuildProfileManager *this, EditorFileSystemDirectory *param_1, HashMap *param_2, HashMap *param_3) {
   if (param_1 != (EditorFileSystemDirectory*)0x0) {
      _find_files(this, param_1, param_2, param_3);
      return;
   }

   return;
}
/* EditorBuildProfileManager::_detect_classes() */void EditorBuildProfileManager::_detect_classes(EditorBuildProfileManager *this) {
   long *plVar1;
   long *plVar2;
   uint uVar3;
   uint uVar4;
   uint uVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   code *pcVar14;
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   undefined1 auVar17[16];
   undefined1 auVar18[16];
   Object *pOVar19;
   undefined8 uVar20;
   undefined8 uVar21;
   char cVar22;
   undefined4 uVar23;
   uint uVar24;
   EditorFileSystemDirectory *pEVar25;
   long lVar26;
   long *plVar27;
   StringName *pSVar28;
   ulong uVar29;
   ulong uVar30;
   void *pvVar31;
   uint uVar32;
   long lVar33;
   int iVar34;
   undefined1 auVar35[8];
   long lVar36;
   long in_FS_OFFSET;
   bool bVar37;
   long *local_1a8;
   List *local_178;
   Object *local_160;
   String local_158[8];
   undefined8 local_150;
   String local_148[8];
   CowData<char32_t> local_140[8];
   undefined8 *local_138;
   ulong local_130;
   long local_128;
   long local_120;
   ulong local_118[2];
   undefined1 local_108[16];
   undefined1 local_f8[16];
   undefined8 local_e8;
   undefined1 local_d8[8];
   undefined8 uStack_d0;
   undefined1 local_c8[16];
   undefined8 local_b8;
   DetectedFile local_a8[8];
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined8 local_80;
   char *local_78;
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_70._8_8_ = local_70._0_8_;
   uStack_d0 = (void*)local_d8;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_a0 = (undefined1[16])0x0;
   local_90 = (undefined1[16])0x0;
   local_80 = _LC32;
   EditorPaths::get_project_settings_dir();
   local_78 = "used_class_cache";
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uStack_d0;
   _local_d8 = auVar17 << 0x40;
   local_70._0_8_ = 0x10;
   String::parse_latin1((StrRange*)local_d8);
   String::path_join((String*)&local_78);
   FileAccess::open((String*)&local_160, (int)(String*)&local_78, (Error*)0x1);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_108);
   if (local_160 != (Object*)0x0) {
      while (cVar22 = ( **(code**)( *(long*)local_160 + 0x1d8 ) )(),cVar22 == '\0') {
         ( **(code**)( *(long*)local_160 + 0x228 ) )((CowData<char32_t>*)local_118);
         String::split((char*)local_108, SUB81((CowData<char32_t>*)local_118, 0), 0x1179ea);
         auVar17 = local_108;
         if (( local_108._8_8_ != 0 ) && ( *(long*)( local_108._8_8_ + -8 ) == 4 )) {
            auVar15._8_8_ = 0;
            auVar15._0_8_ = local_70._8_8_;
            local_70 = auVar15 << 0x40;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = local_60._8_8_;
            local_60 = auVar16 << 0x40;
            uVar23 = String::to_int();
            local_78 = (char*)CONCAT44(local_78._4_4_, uVar23);
            if (local_108._8_8_ == 0) {
               lVar33 = 0;
            }
 else {
               lVar33 = *(long*)( local_108._8_8_ + -8 );
               if (2 < lVar33) {
                  if (*(long*)( local_108._8_8_ + 0x10 ) == 0) {
                     LAB_001083ea:if (3 < lVar33) {
                        String::split((char*)local_d8, (bool)( (char)local_108._8_8_ + '\x18' ), 0x10a556);
                        if ((void*)local_60._0_8_ != uStack_d0) {
                           CowData<String>::_unref((CowData<String>*)local_60);
                           uVar20 = uStack_d0;
                           uStack_d0 = (void*)0x0;
                           local_60._0_8_ = uVar20;
                        }

                        CowData<String>::_unref((CowData<String>*)( local_d8 + 8 ));
                        HashMap<String,EditorBuildProfileManager::DetectedFile,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorBuildProfileManager::DetectedFile>>>::insert((String*)local_d8, local_a8, auVar17[8]);
                        CowData<String>::_unref((CowData<String>*)local_60);
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
                        goto LAB_00108310;
                     }

                  }
 else {
                     CowData<char32_t>::_ref((CowData<char32_t>*)local_70, (CowData*)( local_108._8_8_ + 0x10 ));
                     if (local_108._8_8_ != 0) {
                        lVar33 = *(long*)( local_108._8_8_ + -8 );
                        goto LAB_001083ea;
                     }

                     lVar33 = 0;
                  }

                  lVar26 = 3;
                  goto LAB_00109312;
               }

            }

            lVar26 = 2;
            LAB_00109312:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar26, lVar33, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar14 = (code*)invalidInstructionException();
            ( *pcVar14 )();
         }

         LAB_00108310:CowData<String>::_unref((CowData<String>*)( local_108 + 8 ));
         CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      }
;
      if (( ( local_160 != (Object*)0x0 ) && ( cVar22 = RefCounted::unreference() ),cVar22 != '\0' )) &&( cVar22 = cVar22 != '\0' )(**(code**)( *(long*)local_160 + 0x140 ))(local_160);
      Memory::free_static(local_160, false);
   }

   local_160 = (Object*)0x0;
}
local_70 = (undefined1[16])0x0;local_50 = _LC32;local_60 = (undefined1[16])0x0;pEVar25 = (EditorFileSystemDirectory*)EditorFileSystem::get_filesystem();if (pEVar25 != (EditorFileSystemDirectory*)0x0) {
   _find_files(this, pEVar25, (HashMap*)local_a8, (HashMap*)&local_78);
}
local_108 = (undefined1[16])0x0;local_f8 = (undefined1[16])0x0;local_e8 = _LC32;EditorPaths::get_project_settings_dir();local_128 = 0;uStack_d0 = (void*)0x10;local_d8 = (undefined1[8])"used_class_cache";String::parse_latin1((StrRange*)&local_128);String::path_join((String*)local_118);FileAccess::open((String*)local_d8, (int)(CowData<char32_t>*)local_118, (Error*)0x2);pOVar19 = local_160;auVar35 = (undefined1[8])local_160;if (local_d8 == (undefined1[8])local_160) {
   LAB_001085dd:if (( auVar35 != (undefined1[8])0x0 ) && ( cVar22 = cVar22 != '\0' )) {
      auVar35 = local_d8;
      cVar22 = predelete_handler((Object*)local_d8);
      if (cVar22 != '\0') {
         ( **(code**)( *(long*)auVar35 + 0x140 ) )(auVar35);
         Memory::free_static((void*)auVar35, false);
      }

   }

}
 else {
   local_160 = (Object*)local_d8;
   if (local_d8 != (undefined1[8])0x0) {
      cVar22 = RefCounted::reference();
      if (cVar22 == '\0') {
         local_160 = (Object*)0x0;
      }

      if (pOVar19 != (Object*)0x0) {
         cVar22 = RefCounted::unreference();
         goto joined_r0x001085cf;
      }

      LAB_001085d5:auVar35 = local_d8;
      goto LAB_001085dd;
   }

   if (pOVar19 != (Object*)0x0) {
      cVar22 = RefCounted::unreference();
      joined_r0x001085cf:if (( cVar22 != '\0' ) && ( cVar22 = cVar22 != '\0' )) {
         ( **(code**)( *(long*)pOVar19 + 0x140 ) )(pOVar19);
         Memory::free_static(pOVar19, false);
      }

      goto LAB_001085d5;
   }

}
CowData<char32_t>::_unref((CowData<char32_t>*)local_118);CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);if ((long*)local_60._0_8_ != (long*)0x0) {
   plVar27 = (long*)local_60._0_8_;
   do {
      local_118[0] = 0;
      local_d8 = ( undefined1[8] ) & _LC164;
      uStack_d0 = (void*)0x2;
      String::parse_latin1((StrRange*)local_118);
      local_130 = 0;
      local_d8 = ( undefined1[8] ) & _LC164;
      uStack_d0 = (void*)0x2;
      String::parse_latin1((StrRange*)&local_130);
      itos((long)local_140);
      local_150 = 0;
      uStack_d0 = (void*)0x2;
      local_d8 = ( undefined1[8] ) & _LC164;
      String::parse_latin1((StrRange*)&local_150);
      String::operator +(local_148, (String*)( plVar27 + 2 ));
      String::operator +((String*)&local_138, local_148);
      String::operator +((String*)&local_128, (String*)&local_138);
      String::operator +((String*)local_d8, (String*)&local_128);
      String::operator +(local_158, (String*)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_148);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_150);
      CowData<char32_t>::_unref(local_140);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_118);
      lVar33 = plVar27[6];
      for (lVar26 = 0; ( lVar33 != 0 && ( lVar26 < *(long*)( lVar33 + -8 ) ) ); lVar26 = lVar26 + 1) {
         local_128 = 0;
         plVar2 = (long*)( lVar33 + lVar26 * 8 );
         lVar33 = *plVar2;
         plVar1 = (long*)( lVar33 + -0x10 );
         if (lVar33 != 0) {
            do {
               lVar33 = *plVar1;
               if (lVar33 == 0) goto LAB_0010888b;
               LOCK();
               lVar36 = *plVar1;
               bVar37 = lVar33 == lVar36;
               if (bVar37) {
                  *plVar1 = lVar33 + 1;
                  lVar36 = lVar33;
               }

               UNLOCK();
            }
 while ( !bVar37 );
            if (lVar36 != -1) {
               local_128 = *plVar2;
            }

         }

         LAB_0010888b:if (lVar26 != 0) {
            String::operator +=(local_158, ",");
         }

         String::operator +=(local_158, (String*)&local_128);
         StringName::StringName((StringName*)local_118, (String*)&local_128, false);
         HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_d8);
         if (( StringName::configured != '\0' ) && ( local_118[0] != 0 )) {
            StringName::unref();
         }

         lVar33 = local_128;
         if (local_128 != 0) {
            LOCK();
            plVar1 = (long*)( local_128 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_128 = 0;
               Memory::free_static((void*)( lVar33 + -0x10 ), false);
            }

         }

         lVar33 = plVar27[6];
      }

      ( **(code**)( *(long*)local_160 + 0x2b0 ) )();
      CowData<char32_t>::_unref((CowData<char32_t>*)local_158);
      plVar27 = (long*)*plVar27;
   }
 while ( plVar27 != (long*)0x0 );
}
local_178 = (List*)&local_138;if (local_160 != (Object*)0x0) {
   cVar22 = RefCounted::unreference();
   pOVar19 = local_160;
   if (cVar22 != '\0') {
      cVar22 = predelete_handler(local_160);
      if (cVar22 != '\0') {
         ( **(code**)( *(long*)pOVar19 + 0x140 ) )(pOVar19);
         Memory::free_static(pOVar19, false);
      }

   }

}
local_160 = (Object*)0x0;auVar18._8_8_ = 0;auVar18._0_8_ = uStack_d0;_local_d8 = auVar18 << 0x40;if (*(long*)( *(long*)( this + 0xe20 ) + 0x1d0 ) != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_d8, (CowData*)( *(long*)( this + 0xe20 ) + 0x1d0 ));
}
String::split((char*)&local_128, SUB81((StrRange*)local_d8, 0), 0x10a556);CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);for (lVar33 = 0; ( local_120 != 0 && ( lVar33 < *(long*)( local_120 + -8 ) ) ); lVar33 = lVar33 + 1) {
   String::strip_edges(SUB81((CowData<char32_t>*)&local_130, 0), (bool)( (char)local_120 + (char)lVar33 * '\b' ));
   if (( local_130 != 0 ) && ( 1 < *(uint*)( local_130 - 8 ) )) {
      StringName::StringName((StringName*)local_118, (String*)&local_130, false);
      HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_d8);
      if (( StringName::configured != '\0' ) && ( local_118[0] != 0 )) {
         StringName::unref();
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
}
local_e8._4_4_ = ( uint )(local_e8 >> 0x20);uVar5 = local_e8._4_4_;_local_d8 = (undefined1[16])0x0;uVar20 = local_108._0_8_;local_c8 = (undefined1[16])0x0;local_b8 = _LC32;if (local_e8._4_4_ != 0) {
   iVar34 = 0;
   pSVar28 = (StringName*)local_108._0_8_;
   do {
      StringName::StringName((StringName*)&local_130, pSVar28);
      cVar22 = ClassDB::class_exists((StringName*)&local_130);
      if (cVar22 != '\0') goto LAB_001091e0;
      ClassDB::get_compatibility_class((StringName*)local_118);
      if (local_130 == local_118[0]) {
         if (StringName::configured == '\0') goto LAB_001091ac;
         if (local_130 != 0) {
            StringName::unref();
            goto LAB_001091ac;
         }

      }
 else {
         StringName::unref();
         local_130 = local_118[0];
         LAB_001091ac:if (local_130 != 0) {
            if (( *(long*)( local_130 + 8 ) == 0 ) && ( ( *(long*)( local_130 + 0x10 ) == 0 || ( *(uint*)( *(long*)( local_130 + 0x10 ) + -8 ) < 2 ) ) )) {
               LAB_0010924f:if (StringName::configured != '\0') {
                  StringName::unref();
               }

            }
 else {
               do {
                  if (( *(long*)( local_130 + 8 ) == 0 ) && ( ( *(long*)( local_130 + 0x10 ) == 0 || ( *(uint*)( *(long*)( local_130 + 0x10 ) + -8 ) < 2 ) ) )) goto LAB_0010924f;
                  HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_118);
                  ClassDB::get_parent_class((StringName*)local_118);
                  if (local_130 == local_118[0]) {
                     if (StringName::configured != '\0') {
                        if (local_130 == 0) break;
                        StringName::unref();
                     }

                  }
 else {
                     StringName::unref();
                     local_130 = local_118[0];
                  }

                  LAB_001091e0:;
               }
 while ( local_130 != 0 );
            }

         }

      }

      iVar34 = iVar34 + 1;
      if ((int)uVar5 <= iVar34) goto code_r0x00109269;
      pSVar28 = pSVar28 + 8;
   }
 while ( true );
}
local_1a8 = (long*)0x0;LAB_00108a48:lVar33 = *(long*)( this + 0xe20 );lVar26 = *(long*)( lVar33 + 0x180 );if (( lVar26 != 0 ) && ( *(int*)( lVar33 + 0x1a4 ) != 0 )) {
   if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar33 + 0x1a0 ) * 4 ) == 0 ) || ( memset(*(void**)( lVar33 + 0x198 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar33 + 0x1a0 ) * 4 ) * 4),*(int*)( lVar33 + 0x1a4 ) != 0 )) {
      lVar36 = 0;
      while (true) {
         if (( StringName::configured != '\0' ) && ( *(long*)( lVar26 + lVar36 * 8 ) != 0 )) {
            StringName::unref();
         }

         lVar36 = lVar36 + 1;
         if (*(uint*)( lVar33 + 0x1a4 ) <= (uint)lVar36) break;
         lVar26 = *(long*)( lVar33 + 0x180 );
      }
;
   }

   *(undefined4*)( lVar33 + 0x1a4 ) = 0;
}
lVar26 = *(long*)( lVar33 + 0x1a8 );if (( lVar26 != 0 ) && ( *(int*)( lVar33 + 0x1cc ) != 0 )) {
   if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar33 + 0x1c8 ) * 4 ) == 0 ) || ( memset(*(void**)( lVar33 + 0x1c0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar33 + 0x1c8 ) * 4 ) * 4),*(int*)( lVar33 + 0x1cc ) != 0 )) {
      lVar36 = 0;
      while (true) {
         if (( StringName::configured != '\0' ) && ( *(long*)( lVar26 + lVar36 * 8 ) != 0 )) {
            StringName::unref();
         }

         lVar36 = lVar36 + 1;
         if (*(uint*)( lVar33 + 0x1cc ) <= (uint)lVar36) break;
         lVar26 = *(long*)( lVar33 + 0x1a8 );
      }
;
   }

   *(undefined4*)( lVar33 + 0x1cc ) = 0;
}
local_138 = (undefined8*)0x0;ClassDB::get_class_list(local_178);if (local_138 != (undefined8*)0x0) {
   for (plVar27 = (long*)*local_138; plVar27 != (long*)0x0; plVar27 = (long*)plVar27[1]) {
      if (local_1a8 != (long*)0x0) {
         while (local_b8._4_4_ != 0) {
            uVar3 = *(uint*)( hash_table_size_primes + ( local_b8 & 0xffffffff ) * 4 );
            lVar33 = *(long*)( hash_table_size_primes_inv + ( local_b8 & 0xffffffff ) * 8 );
            if (*plVar27 == 0) {
               uVar24 = StringName::get_empty_hash();
            }
 else {
               uVar24 = *(uint*)( *plVar27 + 0x20 );
            }

            uVar29 = CONCAT44(0, uVar3);
            if (uVar24 == 0) {
               uVar24 = 1;
            }

            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar24 * lVar33;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar29;
            lVar26 = SUB168(auVar6 * auVar10, 8);
            uVar32 = *(uint*)( local_c8._8_8_ + lVar26 * 4 );
            uVar30 = (ulong)uVar32;
            iVar34 = SUB164(auVar6 * auVar10, 8);
            if (uVar32 == 0) break;
            uVar32 = 0;
            while (( (uint)uVar30 != uVar24 || ( local_1a8[*(uint*)( (long)uStack_d0 + lVar26 * 4 )] != *plVar27 ) )) {
               uVar32 = uVar32 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar34 + 1) * lVar33;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = uVar29;
               lVar26 = SUB168(auVar7 * auVar11, 8);
               uVar4 = *(uint*)( local_c8._8_8_ + lVar26 * 4 );
               uVar30 = (ulong)uVar4;
               iVar34 = SUB164(auVar7 * auVar11, 8);
               if (( uVar4 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar30 * lVar33,auVar12._8_8_ = 0,auVar12._0_8_ = uVar29,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + iVar34 ) - SUB164(auVar8 * auVar12, 8)) * lVar33,auVar13._8_8_ = 0,auVar13._0_8_ = uVar29,SUB164(auVar9 * auVar13, 8) < uVar32) goto LAB_00109080;
            }
;
            plVar27 = (long*)plVar27[1];
            if (plVar27 == (long*)0x0) goto LAB_00108ce5;
         }
;
      }

      LAB_00109080:ClassDB::get_parent_class((StringName*)&local_130);
      if (( local_130 == 0 ) || ( ( *(long*)( local_130 + 8 ) == 0 && ( ( *(long*)( local_130 + 0x10 ) == 0 || ( *(uint*)( *(long*)( local_130 + 0x10 ) + -8 ) < 2 ) ) ) ) )) {
         LAB_001090c8:HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)local_118);
      }
 else {
         local_118[0] = local_118[0] & 0xffffffff00000000;
         cVar22 = HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos((HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>*)local_d8, (StringName*)&local_130, (uint*)local_118);
         if (cVar22 != '\0') goto LAB_001090c8;
      }

      if (( StringName::configured != '\0' ) && ( local_130 != 0 )) {
         StringName::unref();
      }

   }

}
LAB_00108ce5:List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)local_178);if (local_1a8 != (long*)0x0) {
   uVar29 = (ulong)local_b8._4_4_;
   uVar21 = local_c8._8_8_;
   if (local_b8._4_4_ != 0) {
      if (*(uint*)( hash_table_size_primes + ( local_b8 & 0xffffffff ) * 4 ) != 0) {
         memset((void*)local_c8._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_b8 & 0xffffffff ) * 4 ) * 4);
      }

      plVar27 = local_1a8;
      do {
         if (( StringName::configured != '\0' ) && ( *plVar27 != 0 )) {
            StringName::unref();
         }

         plVar27 = plVar27 + 1;
      }
 while ( local_1a8 + uVar29 != plVar27 );
   }

   Memory::free_static(local_1a8, false);
   Memory::free_static((void*)local_c8._0_8_, false);
   Memory::free_static(uStack_d0, false);
   Memory::free_static((void*)uVar21, false);
}
CowData<String>::_unref((CowData<String>*)&local_120);if ((StringName*)uVar20 != (StringName*)0x0) {
   uVar21 = local_f8._8_8_;
   if (uVar5 != 0) {
      if (*(uint*)( hash_table_size_primes + ( local_e8 & 0xffffffff ) * 4 ) != 0) {
         memset((void*)local_f8._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_e8 & 0xffffffff ) * 4 ) * 4);
      }

      pSVar28 = (StringName*)uVar20;
      do {
         if (( StringName::configured != '\0' ) && ( *(long*)pSVar28 != 0 )) {
            StringName::unref();
         }

         pSVar28 = pSVar28 + 8;
      }
 while ( (StringName*)( uVar20 + (ulong)uVar5 * 8 ) != pSVar28 );
   }

   Memory::free_static((void*)uVar20, false);
   Memory::free_static((void*)local_f8._0_8_, false);
   Memory::free_static((void*)local_108._8_8_, false);
   Memory::free_static((void*)uVar21, false);
}
if ((void*)local_70._0_8_ != (void*)0x0) {
   pvVar31 = (void*)local_70._0_8_;
   if (local_50._4_4_ != 0) {
      uVar5 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 );
      if (uVar5 == 0) {
         local_50 = local_50 & 0xffffffff;
         local_60 = (undefined1[16])0x0;
      }
 else {
         lVar33 = 0;
         do {
            if (*(int*)( local_70._8_8_ + lVar33 ) != 0) {
               pvVar31 = *(void**)( (long)pvVar31 + lVar33 * 2 );
               *(int*)( local_70._8_8_ + lVar33 ) = 0;
               CowData<String>::_unref((CowData<String>*)( (long)pvVar31 + 0x30 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x20 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x10 ));
               Memory::free_static(pvVar31, false);
               *(undefined8*)( local_70._0_8_ + lVar33 * 2 ) = 0;
               pvVar31 = (void*)local_70._0_8_;
            }

            lVar33 = lVar33 + 4;
         }
 while ( lVar33 != (ulong)uVar5 * 4 );
         local_50 = local_50 & 0xffffffff;
         local_60 = (undefined1[16])0x0;
         if (pvVar31 == (void*)0x0) goto LAB_00108f19;
      }

   }

   Memory::free_static(pvVar31, false);
   Memory::free_static((void*)local_70._8_8_, false);
}
LAB_00108f19:if (( ( local_160 != (Object*)0x0 ) && ( cVar22 = RefCounted::unreference() ),pOVar19 = local_160,cVar22 != '\0' )) &&( cVar22 = cVar22 != '\0' )(**(code**)( *(long*)pOVar19 + 0x140 ))(pOVar19);Memory::free_static(pOVar19, false);}if ((void*)local_a0._0_8_ != (void*)0x0) {
   pvVar31 = (void*)local_a0._0_8_;
   if (local_80._4_4_ != 0) {
      uVar5 = *(uint*)( hash_table_size_primes + ( local_80 & 0xffffffff ) * 4 );
      if (uVar5 == 0) {
         local_80 = local_80 & 0xffffffff;
         local_90 = (undefined1[16])0x0;
      }
 else {
         lVar33 = 0;
         do {
            if (*(int*)( local_a0._8_8_ + lVar33 ) != 0) {
               pvVar31 = *(void**)( (long)pvVar31 + lVar33 * 2 );
               *(int*)( local_a0._8_8_ + lVar33 ) = 0;
               CowData<String>::_unref((CowData<String>*)( (long)pvVar31 + 0x30 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x20 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar31 + 0x10 ));
               Memory::free_static(pvVar31, false);
               *(undefined8*)( local_a0._0_8_ + lVar33 * 2 ) = 0;
               pvVar31 = (void*)local_a0._0_8_;
            }

            lVar33 = lVar33 + 4;
         }
 while ( (ulong)uVar5 * 4 - lVar33 != 0 );
         local_80 = local_80 & 0xffffffff;
         local_90 = (undefined1[16])0x0;
         if (pvVar31 == (void*)0x0) goto LAB_00108fed;
      }

   }

   Memory::free_static(pvVar31, false);
   Memory::free_static((void*)local_a0._8_8_, false);
}
LAB_00108fed:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();code_r0x00109269:local_1a8 = (long*)local_d8;goto LAB_00108a48;}/* EditorBuildProfileManager::_action_confirm() */void EditorBuildProfileManager::_action_confirm(EditorBuildProfileManager *this) {
   int iVar1;
   undefined8 uVar2;
   long in_FS_OFFSET;
   undefined8 local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar1 = *(int*)( this + 0xdb0 );
   if (iVar1 != 1) {
      if (iVar1 == 5) {
         _detect_classes(this);
         if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00109535;
         goto LAB_0010950f;
      }

      if (iVar1 != 0) {
         if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_00109535;
      }

      uVar2 = *(undefined8*)( this + 0xe10 );
      local_40 = 0;
      local_30 = 0;
      local_38 = &_LC3;
      String::parse_latin1((StrRange*)&local_40);
      LineEdit::set_text(uVar2, (StrRange*)&local_40);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   Ref<EditorBuildProfile>::instantiate<>((Ref<EditorBuildProfile>*)( this + 0xe20 ));
   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      LAB_00109535:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   LAB_0010950f:_update_edited_profile(this);
   return;
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x11f8, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}
/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
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
/* EditorBuildProfile::is_class_ptr(void*) const */uint EditorBuildProfile::is_class_ptr(EditorBuildProfile *this, void *param_1) {
   return (uint)CONCAT71(0x11f7, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f5, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f8, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorBuildProfile::_getv(StringName const&, Variant&) const */undefined8 EditorBuildProfile::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorBuildProfile::_setv(StringName const&, Variant const&) */undefined8 EditorBuildProfile::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorBuildProfile::_validate_propertyv(PropertyInfo&) const */void EditorBuildProfile::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorBuildProfile::_property_can_revertv(StringName const&) const */undefined8 EditorBuildProfile::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorBuildProfile::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorBuildProfile::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorBuildProfile::_notificationv(int, bool) */void EditorBuildProfile::_notificationv(int param_1, bool param_2) {
   return;
}
/* EditorBuildProfileManager::is_class_ptr(void*) const */uint EditorBuildProfileManager::is_class_ptr(void *param_1) {
   undefined4 in_EDX;
   undefined4 *in_RSI;
   return (uint)CONCAT71(0x11f7, in_RSI == &AcceptDialog::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f4, in_RSI == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &Window::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &Viewport::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
}
/* EditorBuildProfileManager::_property_can_revertv(StringName const&) const */undefined8 EditorBuildProfileManager::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorBuildProfileManager::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorBuildProfileManager::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::is_class_ptr(void*) const */uint JSON::is_class_ptr(JSON *this, void *param_1) {
   return (uint)CONCAT71(0x11f7, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f4, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f8, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* JSON::_getv(StringName const&, Variant&) const */undefined8 JSON::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_setv(StringName const&, Variant const&) */undefined8 JSON::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_validate_propertyv(PropertyInfo&) const */void JSON::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* JSON::_property_can_revertv(StringName const&) const */undefined8 JSON::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* JSON::_property_get_revertv(StringName const&, Variant&) const */undefined8 JSON::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* JSON::_notificationv(int, bool) */void JSON::_notificationv(int param_1, bool param_2) {
   return;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void,
   Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<EditorBuildProfileManager,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,int> *this) {
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
/* MethodBindTR<Error, String const&>::_gen_argument_type(int) const */char MethodBindTR<Error,String_const&>::_gen_argument_type(MethodBindTR<Error,String_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 2U ) + 2;
}
/* MethodBindTR<Error, String const&>::get_argument_meta(int) const */undefined8 MethodBindTR<Error,String_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTR<String, EditorBuildProfile::BuildOption>::_gen_argument_type(int) const */int MethodBindTR<String,EditorBuildProfile::BuildOption>::_gen_argument_type(MethodBindTR<String,EditorBuildProfile::BuildOption> *this, int param_1) {
   return ( -(uint)(param_1 == 0) & 0xfffffffe ) + 4;
}
/* MethodBindTR<String, EditorBuildProfile::BuildOption>::get_argument_meta(int) const */undefined8 MethodBindTR<String,EditorBuildProfile::BuildOption>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::_gen_argument_type(int) const */char MethodBindTRC<bool,EditorBuildProfile::BuildOption>::_gen_argument_type(MethodBindTRC<bool,EditorBuildProfile::BuildOption> *this, int param_1) {
   return ( param_1 == 0 ) + '\x01';
}
/* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,EditorBuildProfile::BuildOption>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<EditorBuildProfile::BuildOption, bool>::_gen_argument_type(int) const */char MethodBindT<EditorBuildProfile::BuildOption,bool>::_gen_argument_type(MethodBindT<EditorBuildProfile::BuildOption,bool> *this, int param_1) {
   char cVar1;
   cVar1 = ( param_1 == 0 ) + '\x01';
   if (1 < (uint)param_1) {
      cVar1 = '\0';
   }

   return cVar1;
}
/* MethodBindT<EditorBuildProfile::BuildOption, bool>::get_argument_meta(int) const */undefined8 MethodBindT<EditorBuildProfile::BuildOption,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<bool,StringName_const&>::_gen_argument_type(MethodBindTRC<bool,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x14U ) + 1;
}
/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<StringName const&, bool>::_gen_argument_type(int) const */char MethodBindT<StringName_const&,bool>::_gen_argument_type(MethodBindT<StringName_const&,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x14U ) + 1;
   }

   return cVar1;
}
/* MethodBindT<StringName const&, bool>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&,bool>::get_argument_meta(int param_1) {
   return 0;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, String
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&>::get_argument_count(CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, Object*>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*>::get_argument_count(CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorBuildProfileManager,void>::get_argument_count(CallableCustomMethodPointer<EditorBuildProfileManager,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, int>::get_argument_count(bool&)
   const */undefined8 CallableCustomMethodPointer<EditorBuildProfileManager,void,int>::get_argument_count(CallableCustomMethodPointer<EditorBuildProfileManager,void,int> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<EditorBuildProfileManager,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,int> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void,
   Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* MethodBindT<StringName const&, bool>::~MethodBindT() */void MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f160;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<StringName const&, bool>::~MethodBindT() */void MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f160;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f1c0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f1c0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<EditorBuildProfile::BuildOption, bool>::~MethodBindT() */void MethodBindT<EditorBuildProfile::BuildOption,bool>::~MethodBindT(MethodBindT<EditorBuildProfile::BuildOption,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f220;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<EditorBuildProfile::BuildOption, bool>::~MethodBindT() */void MethodBindT<EditorBuildProfile::BuildOption,bool>::~MethodBindT(MethodBindT<EditorBuildProfile::BuildOption,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f220;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::~MethodBindTRC() */void MethodBindTRC<bool,EditorBuildProfile::BuildOption>::~MethodBindTRC(MethodBindTRC<bool,EditorBuildProfile::BuildOption> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f280;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::~MethodBindTRC() */void MethodBindTRC<bool,EditorBuildProfile::BuildOption>::~MethodBindTRC(MethodBindTRC<bool,EditorBuildProfile::BuildOption> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f280;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<String, EditorBuildProfile::BuildOption>::~MethodBindTR() */void MethodBindTR<String,EditorBuildProfile::BuildOption>::~MethodBindTR(MethodBindTR<String,EditorBuildProfile::BuildOption> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f2e0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<String, EditorBuildProfile::BuildOption>::~MethodBindTR() */void MethodBindTR<String,EditorBuildProfile::BuildOption>::~MethodBindTR(MethodBindTR<String,EditorBuildProfile::BuildOption> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f2e0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<Error, String const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f340;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<Error, String const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f340;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f3a0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011f3a0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011e120;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0011e120;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* EditorBuildProfileManager::_getv(StringName const&, Variant&) const */undefined8 EditorBuildProfileManager::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_get) {
      uVar1 = Window::_get(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* EditorBuildProfileManager::_setv(StringName const&, Variant const&) */undefined8 EditorBuildProfileManager::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__set_00125008 != Object::_set) {
      uVar1 = Window::_set(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 HBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_00125010 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_get_revertv(StringName const&, Variant&) const */undefined8 VBoxContainer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if ((code*)PTR__property_get_revert_00125010 != Object::_property_get_revert) {
      uVar1 = Control::_property_get_revert(param_1, param_2);
      return uVar1;
   }

   return 0;
}
/* HBoxContainer::_property_can_revertv(StringName const&) const */undefined8 HBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00125018 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* VBoxContainer::_property_can_revertv(StringName const&) const */undefined8 VBoxContainer::_property_can_revertv(StringName *param_1) {
   undefined8 uVar1;
   if ((code*)PTR__property_can_revert_00125018 != Object::_property_can_revert) {
      uVar1 = Control::_property_can_revert(param_1);
      return uVar1;
   }

   return 0;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::adjust_heap(long, long,
   long, List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::adjust_heap(long param_1, long param_2, long param_3, Element *param_4, Element **param_5) {
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   uint uVar4;
   byte bVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   Element **ppEVar9;
   long lVar10;
   Element *pEVar11;
   long lVar12;
   long lVar13;
   byte *pbVar14;
   byte *pbVar15;
   long lVar16;
   lVar12 = param_2 * 2 + 2;
   lVar16 = param_2;
   if (lVar12 < param_3) {
      do {
         lVar10 = lVar12 + -1;
         ppEVar9 = param_5 + lVar10 + param_1;
         pEVar11 = *ppEVar9;
         pEVar3 = param_5[param_1 + lVar12];
         lVar13 = *(long*)pEVar11;
         lVar6 = *(long*)pEVar3;
         if (lVar6 == 0) {
            if (lVar13 != 0) {
               pbVar14 = *(byte**)( lVar13 + 8 );
               uVar8 = 0;
               pbVar15 = &_LC3;
               LAB_0010b024:if (pbVar14 == (byte*)0x0) {
                  lVar6 = 0;
                  uVar4 = **(uint**)( lVar13 + 0x10 );
                  if (uVar4 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_0010afd0;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_0010afd0;
                        if (uVar4 < uVar8) break;
                        uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                        uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar6 + 1];
                        lVar6 = lVar6 + 1;
                     }
 while ( uVar8 != 0 || uVar4 != 0 );
                  }

               }
 else {
                  uVar4 = (uint)(char)*pbVar14;
                  bVar5 = (byte)uVar8 | *pbVar14;
                  LAB_0010b076:if (bVar5 != 0) {
                     lVar13 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_0010afd0;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_0010afd0;
                        if (uVar4 < uVar8) break;
                        pbVar1 = pbVar14 + lVar13;
                        uVar4 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar15 + lVar13;
                        uVar8 = (uint)(char)*pbVar2;
                        lVar13 = lVar13 + 1;
                     }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }

               }

            }

         }
 else {
            pbVar15 = *(byte**)( lVar6 + 8 );
            if (lVar13 == 0) {
               if (pbVar15 != (byte*)0x0) {
                  bVar5 = *pbVar15;
                  uVar8 = (uint)(char)bVar5;
                  pbVar14 = &_LC3;
                  uVar4 = 0;
                  goto LAB_0010b076;
               }

               uVar8 = 0;
               pbVar14 = &_LC3;
            }
 else {
               pbVar14 = *(byte**)( lVar13 + 8 );
               if (pbVar15 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar15;
                  goto LAB_0010b024;
               }

               if (pbVar14 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar13 + 0x10 );
                  uVar4 = **(uint**)( lVar6 + 0x10 );
                  if (uVar8 != 0 || uVar4 != 0) {
                     do {
                        if (uVar4 == 0) goto LAB_0010afd0;
                        if (uVar8 == 0) break;
                        if (uVar4 < uVar8) goto LAB_0010afd0;
                        if (uVar8 < uVar4) break;
                        uVar4 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     }
 while ( uVar4 != 0 || uVar8 != 0 );
                  }

                  goto LAB_0010aff8;
               }

               uVar8 = (uint)(char)*pbVar14;
            }

            lVar13 = 0;
            uVar4 = **(uint**)( lVar6 + 0x10 );
            if (uVar4 != 0 || uVar8 != 0) {
               do {
                  if (uVar4 == 0) goto LAB_0010afd0;
                  if (uVar8 == 0) break;
                  if (uVar4 < uVar8) goto LAB_0010afd0;
                  if (uVar8 < uVar4) break;
                  uVar4 = ( *(uint**)( lVar6 + 0x10 ) )[lVar13 + 1];
                  uVar8 = (uint)(char)pbVar14[lVar13 + 1];
                  lVar13 = lVar13 + 1;
               }
 while ( uVar4 != 0 || uVar8 != 0 );
            }

         }

         LAB_0010aff8:ppEVar9 = param_5 + param_1 + lVar12;
         lVar10 = lVar12;
         pEVar11 = pEVar3;
         lVar12 = lVar12 + 1;
         LAB_0010afd0:lVar12 = lVar12 * 2;
         param_5[param_1 + lVar16] = pEVar11;
         lVar16 = lVar10;
      }
 while ( lVar12 < param_3 );
      if (lVar12 == param_3) goto LAB_0010b3fd;
   }
 else {
      ppEVar9 = param_5 + param_2 + param_1;
      if (lVar12 != param_3) goto LAB_0010b1fa;
      LAB_0010b3fd:lVar10 = lVar12 + -1;
      *ppEVar9 = param_5[param_1 + lVar10];
      ppEVar9 = param_5 + param_1 + lVar10;
   }

   lVar12 = ( lVar10 + -1 ) - ( lVar10 + -1 >> 0x3f );
   if (param_2 < lVar10) {
      lVar16 = *(long*)param_4;
      while (true) {
         lVar13 = lVar12 >> 1;
         pEVar11 = param_5[param_1 + lVar13];
         lVar12 = *(long*)pEVar11;
         if (lVar12 == 0) break;
         pbVar15 = *(byte**)( lVar12 + 8 );
         if (lVar16 == 0) {
            uVar8 = 0;
            pbVar14 = &_LC3;
            if (pbVar15 != (byte*)0x0) {
               bVar5 = *pbVar15;
               uVar8 = (uint)(char)bVar5;
               uVar4 = 0;
               pbVar14 = &_LC3;
               goto LAB_0010b27a;
            }

            LAB_0010b2da:uVar4 = **(uint**)( lVar12 + 0x10 );
            if (uVar4 == 0 && uVar8 == 0) goto LAB_0010b1f0;
            lVar6 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_0010b1f0;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_0010b1f0;
               uVar4 = ( *(uint**)( lVar12 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar14[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_0010b1f0;
            }
;
         }
 else {
            pbVar14 = *(byte**)( lVar16 + 8 );
            if (pbVar15 == (byte*)0x0) {
               if (pbVar14 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar14;
                  goto LAB_0010b2da;
               }

               uVar8 = **(uint**)( lVar16 + 0x10 );
               uVar4 = **(uint**)( lVar12 + 0x10 );
               if (uVar8 == 0 && uVar4 == 0) goto LAB_0010b1f0;
               lVar6 = 4;
               while (uVar4 != 0) {
                  if (uVar8 == 0) goto LAB_0010b1f0;
                  if (uVar4 < uVar8) break;
                  if (uVar8 < uVar4) goto LAB_0010b1f0;
                  uVar4 = *(uint*)( (long)*(uint**)( lVar12 + 0x10 ) + lVar6 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar16 + 0x10 ) + lVar6 );
                  lVar6 = lVar6 + 4;
                  if (uVar4 == 0 && uVar8 == 0) {
                     param_5[param_1 + lVar10] = param_4;
                     return;
                  }

               }
;
            }
 else {
               uVar4 = (uint)(char)*pbVar15;
               uVar8 = uVar4;
               if (pbVar14 == (byte*)0x0) goto LAB_0010b225;
               LAB_0010b274:uVar4 = (uint)(char)*pbVar14;
               bVar5 = (byte)uVar8 | *pbVar14;
               LAB_0010b27a:if (bVar5 == 0) goto LAB_0010b1f0;
               lVar12 = 1;
               while (uVar8 != 0) {
                  if (uVar4 == 0) goto LAB_0010b1f0;
                  if (uVar8 < uVar4) break;
                  if (uVar4 < uVar8) goto LAB_0010b1f0;
                  pbVar1 = pbVar14 + lVar12;
                  uVar4 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar15 + lVar12;
                  uVar8 = (uint)(char)*pbVar2;
                  lVar12 = lVar12 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010b1f0;
               }
;
            }

         }

         LAB_0010b1c0:param_5[lVar10 + param_1] = pEVar11;
         lVar12 = ( lVar13 + -1 ) - ( lVar13 + -1 >> 0x3f );
         lVar10 = lVar13;
         if (lVar13 <= param_2) {
            param_5[param_1 + lVar13] = param_4;
            return;
         }

      }
;
      if (lVar16 != 0) {
         pbVar14 = *(byte**)( lVar16 + 8 );
         uVar4 = 0;
         uVar8 = 0;
         pbVar15 = &_LC3;
         if (pbVar14 != (byte*)0x0) goto LAB_0010b274;
         LAB_0010b225:uVar8 = **(uint**)( lVar16 + 0x10 );
         if (uVar8 != 0 || uVar4 != 0) {
            lVar12 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_0010b1f0;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_0010b1f0;
               uVar4 = (uint)(char)pbVar15[lVar12 + 1];
               uVar8 = ( *(uint**)( lVar16 + 0x10 ) )[lVar12 + 1];
               lVar12 = lVar12 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_0010b1f0;
            }
;
            goto LAB_0010b1c0;
         }

      }

      LAB_0010b1f0:ppEVar9 = param_5 + lVar10 + param_1;
   }

   LAB_0010b1fa:*ppEVar9 = param_4;
   return;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::unguarded_linear_insert(long, List<StringName, DefaultAllocator>::Element*,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::unguarded_linear_insert(long param_1, Element *param_2, Element **param_3) {
   byte *pbVar1;
   byte *pbVar2;
   long lVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   uint uVar7;
   uint uVar8;
   byte *pbVar9;
   Element *pEVar10;
   byte *pbVar11;
   lVar3 = *(long*)param_2;
   LAB_0010b4c0:pEVar10 = param_3[param_1 + -1];
   lVar5 = *(long*)pEVar10;
   if (lVar3 != 0) {
      pbVar9 = *(byte**)( lVar3 + 8 );
      do {
         if (lVar5 == 0) {
            if (pbVar9 != (byte*)0x0) goto code_r0x0010b571;
            uVar7 = 0;
            pbVar11 = &_LC3;
            LAB_0010b4fc:uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar8 == 0 && uVar7 == 0) goto LAB_0010b68b;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_0010b68b;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_0010b68b;
               uVar8 = ( *(uint**)( lVar3 + 0x10 ) )[lVar5 + 1];
               uVar7 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_0010b68b;
            }
;
         }
 else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar9 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar9;
               goto LAB_0010b59c;
            }

            if (pbVar11 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar11;
               goto LAB_0010b4fc;
            }

            uVar7 = **(uint**)( lVar5 + 0x10 );
            uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar7 == 0 && uVar8 == 0) goto LAB_0010b68b;
            lVar6 = 4;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_0010b68b;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_0010b68b;
               uVar8 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar6 );
               uVar7 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_0010b68b;
            }
;
         }

         if (param_1 == 1) goto LAB_0010b660;
         param_3[param_1] = pEVar10;
         pEVar10 = param_3[param_1 + -2];
         lVar5 = *(long*)pEVar10;
         param_1 = param_1 + -1;
      }
 while ( true );
   }

   if (lVar5 != 0) {
      pbVar11 = *(byte**)( lVar5 + 8 );
      uVar7 = 0;
      pbVar9 = &_LC3;
      LAB_0010b59c:if (pbVar11 != (byte*)0x0) {
         uVar8 = (uint)(char)*pbVar11;
         bVar4 = (byte)uVar7 | *pbVar11;
         goto LAB_0010b60f;
      }

      uVar8 = **(uint**)( lVar5 + 0x10 );
      if (uVar8 != 0 || uVar7 != 0) {
         lVar6 = 0;
         while (uVar7 != 0) {
            if (uVar8 == 0) goto LAB_0010b68b;
            if (uVar7 < uVar8) break;
            if (uVar8 < uVar7) goto LAB_0010b68b;
            uVar7 = (uint)(char)pbVar9[lVar6 + 1];
            uVar8 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar7 == 0 && uVar8 == 0) goto LAB_0010b68b;
         }
;
         goto LAB_0010b5f0;
      }

   }

   goto LAB_0010b68b;
   code_r0x0010b571:bVar4 = *pbVar9;
   uVar7 = (uint)(char)bVar4;
   pbVar11 = &_LC3;
   uVar8 = 0;
   LAB_0010b60f:if (bVar4 == 0) goto LAB_0010b68b;
   lVar5 = 1;
   while (uVar7 != 0) {
      if (uVar8 == 0) goto LAB_0010b68b;
      if (uVar7 < uVar8) break;
      if (uVar8 < uVar7) goto LAB_0010b68b;
      pbVar1 = pbVar9 + lVar5;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar11 + lVar5;
      uVar8 = (uint)(char)*pbVar2;
      lVar5 = lVar5 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010b68b;
   }
;
   LAB_0010b5f0:if (param_1 == 1) {
      LAB_0010b660:_err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
      param_1 = 1;
      LAB_0010b68b:param_3[param_1] = param_2;
      return;
   }

   param_3[param_1] = pEVar10;
   param_1 = param_1 + -1;
   goto LAB_0010b4c0;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::linear_insert(long, long,
   List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(long param_1, long param_2, Element **param_3) {
   Element **__src;
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   byte bVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   uint uVar8;
   uint uVar9;
   byte *pbVar10;
   byte *pbVar11;
   __src = param_3 + param_1;
   pEVar3 = param_3[param_2];
   lVar6 = *(long*)pEVar3;
   lVar5 = *(long*)*__src;
   if (lVar6 == 0) {
      if (lVar5 == 0) goto LAB_0010b860;
      pbVar10 = *(byte**)( lVar5 + 8 );
      uVar8 = 0;
      pbVar11 = &_LC3;
      LAB_0010b814:if (pbVar10 == (byte*)0x0) {
         uVar9 = **(uint**)( lVar5 + 0x10 );
         if (uVar8 != 0 || uVar9 != 0) {
            lVar6 = 0;
            do {
               if (uVar8 == 0) goto LAB_0010b7b0;
               if (uVar9 == 0) break;
               if (uVar8 < uVar9) goto LAB_0010b7b0;
               if (uVar9 < uVar8) break;
               uVar8 = (uint)(char)pbVar11[lVar6 + 1];
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               lVar6 = lVar6 + 1;
            }
 while ( uVar8 != 0 || uVar9 != 0 );
         }

         goto LAB_0010b860;
      }

      uVar9 = (uint)(char)*pbVar10;
      bVar4 = (byte)uVar8 | *pbVar10;
      LAB_0010b887:if (bVar4 != 0) {
         lVar6 = 1;
         do {
            if (uVar8 == 0) goto LAB_0010b7b0;
            if (uVar9 == 0) break;
            if (uVar8 < uVar9) goto LAB_0010b7b0;
            if (uVar9 < uVar8) break;
            pbVar2 = pbVar11 + lVar6;
            uVar8 = (uint)(char)*pbVar2;
            pbVar1 = pbVar10 + lVar6;
            uVar9 = (uint)(char)*pbVar1;
            lVar6 = lVar6 + 1;
         }
 while ( *pbVar2 != 0 || *pbVar1 != 0 );
      }

   }
 else {
      pbVar11 = *(byte**)( lVar6 + 8 );
      if (lVar5 == 0) {
         if (pbVar11 != (byte*)0x0) {
            bVar4 = *pbVar11;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC3;
            uVar9 = 0;
            goto LAB_0010b887;
         }

         uVar8 = 0;
         pbVar10 = &_LC3;
      }
 else {
         pbVar10 = *(byte**)( lVar5 + 8 );
         if (pbVar11 != (byte*)0x0) {
            uVar8 = (uint)(char)*pbVar11;
            goto LAB_0010b814;
         }

         if (pbVar10 == (byte*)0x0) {
            uVar8 = **(uint**)( lVar5 + 0x10 );
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar8 != 0 || uVar9 != 0) {
               lVar7 = 4;
               do {
                  if (uVar9 == 0) goto LAB_0010b7b0;
                  if (uVar8 == 0) break;
                  if (uVar9 < uVar8) goto LAB_0010b7b0;
                  if (uVar8 < uVar9) break;
                  uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                  lVar7 = lVar7 + 4;
               }
 while ( uVar9 != 0 || uVar8 != 0 );
            }

            goto LAB_0010b860;
         }

         uVar8 = (uint)(char)*pbVar10;
      }

      uVar9 = **(uint**)( lVar6 + 0x10 );
      if (uVar8 != 0 || uVar9 != 0) {
         lVar5 = 0;
         do {
            if (uVar9 == 0) {
               LAB_0010b7b0:if (param_1 < param_2) {
                  memmove(param_3 + param_1 + 1, __src, ( param_2 - param_1 ) * 8);
               }

               *__src = pEVar3;
               return;
            }

            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_0010b7b0;
            if (uVar8 < uVar9) break;
            uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
            uVar8 = (uint)(char)pbVar10[lVar5 + 1];
            lVar5 = lVar5 + 1;
         }
 while ( uVar9 != 0 || uVar8 != 0 );
      }

   }

   LAB_0010b860:unguarded_linear_insert(param_2, pEVar3, param_3);
   return;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */Element **SortArray<List<StringName,DefaultAllocator>::Element*,List < StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>byte *pbVar2byte bVar3uint uVar4uint uVar5uint uVar6uint *puVar7long lVar8long lVar9uint *puVar10byte bVar11uint uVar12long lVar13long lVar14byte *pbVar15byte *pbVar16byte *pbVar17lVar8 = *(long*)*param_1;lVar9 = *(long*)*param_3;lVar13 = *(long*)*param_2;if (lVar8 == 0) {
   pbVar15 = &_LC3;
   pbVar16 = &_LC3;
   if (lVar13 == 0) {
      LAB_0010c270:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         LAB_0010bb3e:uVar5 = (uint)(char)*pbVar16;
         uVar4 = uVar5;
         goto LAB_0010bb44;
      }

      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC3;
      if (*pbVar16 == 0) goto LAB_0010be39;
      LAB_0010bc92:lVar8 = 1;
      do {
         if (uVar5 == 0) {
            return param_1;
         }

         if (uVar6 == 0) break;
         if (uVar5 < uVar6) {
            return param_1;
         }

         if (uVar6 < uVar5) break;
         pbVar2 = pbVar16 + lVar8;
         uVar5 = (uint)(char)*pbVar2;
         pbVar1 = pbVar17 + lVar8;
         uVar6 = (uint)(char)*pbVar1;
         lVar8 = lVar8 + 1;
      }
 while ( *pbVar2 != 0 || *pbVar1 != 0 );
   }
 else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      uVar4 = 0;
      pbVar16 = &_LC3;
      LAB_0010bac2:if (pbVar15 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar15;
         bVar11 = *pbVar15 | (byte)uVar4;
         LAB_0010bbb0:if (bVar11 != 0) {
            lVar14 = 1;
            do {
               if (uVar4 == 0) goto joined_r0x0010bbf8;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x0010bbf8;
               if (uVar12 < uVar4) break;
               pbVar17 = pbVar16 + lVar14;
               uVar4 = (uint)(char)*pbVar17;
               pbVar2 = pbVar15 + lVar14;
               uVar12 = (uint)(char)*pbVar2;
               lVar14 = lVar14 + 1;
            }
 while ( *pbVar17 != 0 || *pbVar2 != 0 );
            goto LAB_0010bb28;
         }

         goto LAB_0010c270;
      }

      uVar12 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar4 == 0) goto joined_r0x0010bbf8;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x0010bbf8;
            if (uVar12 < uVar4) break;
            uVar4 = (uint)(char)pbVar16[lVar14 + 1];
            uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
            lVar14 = lVar14 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_0010bb28;
      }

      if (lVar9 == 0) goto LAB_0010be91;
      pbVar17 = *(byte**)( lVar9 + 8 );
      uVar5 = 0;
      LAB_0010bb44:if (pbVar17 != (byte*)0x0) {
         uVar6 = (uint)(char)*pbVar17;
         bVar11 = (byte)uVar4 | *pbVar17;
         goto LAB_0010bc89;
      }

      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_0010c176;
      lVar8 = 0;
      do {
         if (uVar5 == 0) {
            return param_1;
         }

         if (uVar4 == 0) break;
         if (uVar5 < uVar4) {
            return param_1;
         }

         if (uVar4 < uVar5) break;
         uVar5 = (uint)(char)pbVar16[lVar8 + 1];
         uVar4 = puVar10[lVar8 + 1];
         lVar8 = lVar8 + 1;
      }
 while ( uVar5 != 0 || uVar4 != 0 );
   }

   LAB_0010be20:if (pbVar15 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar10 = *(uint**)( lVar9 + 0x10 );
         LAB_0010c17f:uVar4 = *puVar10;
         uVar12 = **(uint**)( lVar13 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_2;
         }

         lVar8 = 4;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }

            if (uVar4 == 0) {
               return param_2;
            }

            if (uVar12 < uVar4) {
               return param_3;
            }

            if (uVar4 < uVar12) break;
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar8 );
            uVar4 = *(uint*)( (long)puVar10 + lVar8 );
            lVar8 = lVar8 + 4;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_2;
            }

         }
;
         return param_2;
      }

      uVar12 = (uint)(char)*pbVar17;
      LAB_0010c006:uVar4 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar8 = 0;
         do {
            if (uVar4 == 0) {
               return param_3;
            }

            if (uVar12 == 0) {
               return param_2;
            }

            if (uVar4 < uVar12) {
               return param_3;
            }

            if (uVar12 < uVar4) {
               return param_2;
            }

            uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar8 + 1];
            uVar12 = (uint)(char)pbVar17[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
      }

      return param_2;
   }

   if (pbVar17 == (byte*)0x0) {
      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar6 = *puVar10;
      LAB_0010c068:uVar4 = (uint)(char)*pbVar15;
      if (uVar4 == 0 && uVar6 == 0) {
         return param_2;
      }

      lVar8 = 0;
      while (true) {
         if (uVar4 == 0) {
            return param_3;
         }

         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar4 < uVar6) {
            return param_3;
         }

         if (uVar6 < uVar4) break;
         uVar4 = (uint)(char)pbVar15[lVar8 + 1];
         uVar6 = puVar10[lVar8 + 1];
         lVar8 = lVar8 + 1;
         if (uVar4 == 0 && uVar6 == 0) {
            return param_2;
         }

      }
;
      return param_2;
   }

   uVar12 = (uint)(char)*pbVar17;
   uVar5 = uVar12;
}
 else {
   pbVar16 = *(byte**)( lVar8 + 8 );
   if (lVar13 == 0) {
      if (pbVar16 != (byte*)0x0) {
         bVar11 = *pbVar16;
         uVar4 = (uint)(char)bVar11;
         uVar12 = 0;
         pbVar15 = &_LC3;
         goto LAB_0010bbb0;
      }

      uVar4 = 0;
      pbVar15 = &_LC3;
      LAB_0010b9a2:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar12 == 0) goto joined_r0x0010bbf8;
            if (uVar4 == 0) break;
            if (uVar12 < uVar4) goto joined_r0x0010bbf8;
            if (uVar4 < uVar12) break;
            uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
            uVar4 = (uint)(char)pbVar15[lVar14 + 1];
            lVar14 = lVar14 + 1;
         }
 while ( uVar12 != 0 || uVar4 != 0 );
      }

      LAB_0010bb28:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         if (pbVar16 != (byte*)0x0) goto LAB_0010bb3e;
         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar4 = *puVar7;
         LAB_0010bf28:if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            uVar6 = uVar4 | uVar12;
            goto LAB_0010c1e3;
         }

         puVar10 = *(uint**)( lVar9 + 0x10 );
         uVar12 = *puVar10;
         uVar6 = uVar12 | uVar4;
         if (uVar6 != 0) {
            lVar8 = 4;
            do {
               if (uVar4 == 0) {
                  return param_1;
               }

               if (uVar12 == 0) break;
               if (uVar4 < uVar12) {
                  return param_1;
               }

               if (uVar12 < uVar4) break;
               uVar4 = *(uint*)( (long)puVar7 + lVar8 );
               uVar12 = *(uint*)( (long)puVar10 + lVar8 );
               lVar8 = lVar8 + 4;
            }
 while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_0010be20;
         }

         LAB_0010c176:if (pbVar15 != (byte*)0x0) goto LAB_0010c068;
         goto LAB_0010c17f;
      }

      if (pbVar16 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar8 + 0x10 );
         goto LAB_0010c241;
      }

      LAB_0010be91:bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC3;
      LAB_0010bc89:uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_0010bc92;
   }
 else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      if (pbVar16 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar16;
         goto LAB_0010bac2;
      }

      if (pbVar15 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar15;
         goto LAB_0010b9a2;
      }

      puVar7 = *(uint**)( lVar8 + 0x10 );
      uVar12 = **(uint**)( lVar13 + 0x10 );
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
         lVar14 = 4;
         do {
            if (uVar4 == 0) {
               LAB_0010bd98:pbVar16 = (byte*)0x0;
               goto joined_r0x0010bbf8;
            }

            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto LAB_0010bd98;
            if (uVar12 < uVar4) break;
            uVar4 = *(uint*)( (long)puVar7 + lVar14 );
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
            lVar14 = lVar14 + 4;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         pbVar16 = (byte*)0x0;
         goto LAB_0010bb28;
      }

      if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar4 = 0;
         goto LAB_0010bf28;
      }

      LAB_0010c241:uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC3;
      uVar6 = uVar4;
      LAB_0010c1e3:if (uVar6 != 0) {
         lVar8 = 0;
         do {
            if (uVar4 == 0) {
               return param_1;
            }

            if (uVar12 == 0) break;
            if (uVar4 < uVar12) {
               return param_1;
            }

            if (uVar12 < uVar4) break;
            uVar4 = puVar7[lVar8 + 1];
            uVar12 = (uint)(char)pbVar17[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_0010be20;
      }

   }

   uVar5 = uVar12;
   if (pbVar15 == (byte*)0x0) goto LAB_0010c006;
}
LAB_0010be39:bVar11 = *pbVar15;if (bVar11 == 0 && (char)uVar5 == '\0') {
   return param_2;
}
lVar8 = 1;while (true) {
   uVar4 = (uint)(char)bVar11;
   if (uVar4 == 0) {
      return param_3;
   }

   if (uVar12 == 0) {
      return param_2;
   }

   if (uVar4 < uVar12) {
      return param_3;
   }

   if (uVar12 < uVar4) break;
   bVar11 = pbVar15[lVar8];
   pbVar16 = pbVar17 + lVar8;
   uVar12 = (uint)(char)*pbVar16;
   lVar8 = lVar8 + 1;
   if (bVar11 == 0 && *pbVar16 == 0) {
      return param_2;
   }

}
;return param_2;joined_r0x0010bbf8:if (lVar9 == 0) {
   uVar4 = 0;
   uVar12 = 0;
   bVar11 = 0;
   pbVar17 = &_LC3;
   if (pbVar15 != (byte*)0x0) goto LAB_0010bce7;
   LAB_0010bc14:uVar6 = **(uint**)( lVar13 + 0x10 );
   uVar4 = uVar6 | uVar12;
   if (uVar4 != 0) {
      lVar14 = 0;
      do {
         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar12 == 0) break;
         if (uVar6 < uVar12) {
            return param_2;
         }

         if (uVar12 < uVar6) break;
         uVar6 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
         uVar12 = (uint)(char)pbVar17[lVar14 + 1];
         lVar14 = lVar14 + 1;
      }
 while ( uVar6 != 0 || uVar12 != 0 );
      goto LAB_0010bdb0;
   }

   LAB_0010c27e:bVar11 = (byte)uVar12;
   if (pbVar16 == (byte*)0x0) goto LAB_0010bf9e;
}
 else {
   pbVar17 = *(byte**)( lVar9 + 8 );
   if (pbVar15 == (byte*)0x0) {
      if (pbVar17 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar17;
         goto LAB_0010bc14;
      }

      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar7;
      uVar6 = **(uint**)( lVar13 + 0x10 );
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_0010c119;
      lVar14 = 4;
      do {
         if (uVar6 == 0) {
            return param_2;
         }

         if (uVar4 == 0) break;
         if (uVar6 < uVar4) {
            return param_2;
         }

         if (uVar4 < uVar6) break;
         uVar6 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
         uVar4 = *(uint*)( (long)puVar7 + lVar14 );
         lVar14 = lVar14 + 4;
      }
 while ( uVar6 != 0 || uVar4 != 0 );
   }
 else {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         uVar6 = (uint)(char)*pbVar15;
         uVar4 = *puVar7;
         uVar12 = uVar4 | uVar6;
         if (uVar12 != 0) {
            lVar13 = 0;
            do {
               if (uVar6 == 0) {
                  return param_2;
               }

               if (uVar4 == 0) break;
               if (uVar6 < uVar4) {
                  return param_2;
               }

               if (uVar4 < uVar6) break;
               uVar6 = (uint)(char)pbVar15[lVar13 + 1];
               uVar4 = puVar7[lVar13 + 1];
               lVar13 = lVar13 + 1;
            }
 while ( uVar6 != 0 || uVar4 != 0 );
            goto LAB_0010bdb0;
         }

         LAB_0010c119:if (pbVar16 == (byte*)0x0) goto LAB_0010c11e;
         goto LAB_0010c0c6;
      }

      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
      LAB_0010bce7:bVar3 = *pbVar15;
      uVar12 = ( uint )(bVar11 | bVar3);
      if (( bVar11 | bVar3 ) == 0) goto LAB_0010c27e;
      lVar13 = 1;
      do {
         uVar12 = (uint)(char)bVar3;
         if (uVar12 == 0) {
            return param_2;
         }

         if (uVar4 == 0) break;
         if (uVar12 < uVar4) {
            return param_2;
         }

         if (uVar4 < uVar12) break;
         bVar3 = pbVar15[lVar13];
         pbVar2 = pbVar17 + lVar13;
         uVar4 = (uint)(char)*pbVar2;
         lVar13 = lVar13 + 1;
      }
 while ( bVar3 != 0 || *pbVar2 != 0 );
   }

   LAB_0010bdb0:if (pbVar16 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         LAB_0010c11e:uVar4 = *puVar7;
         uVar12 = **(uint**)( lVar8 + 0x10 );
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }

         lVar9 = 4;
         while (true) {
            if (uVar12 == 0) {
               return param_3;
            }

            if (uVar4 == 0) {
               return param_1;
            }

            if (uVar12 < uVar4) {
               return param_3;
            }

            if (uVar4 < uVar12) break;
            uVar12 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
            uVar4 = *(uint*)( (long)puVar7 + lVar9 );
            lVar9 = lVar9 + 4;
            if (uVar12 == 0 && uVar4 == 0) {
               return param_1;
            }

         }
;
         return param_1;
      }

      uVar4 = (uint)(char)*pbVar17;
      LAB_0010bf9e:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar12 == 0 && uVar4 == 0) {
         return param_1;
      }

      lVar9 = 0;
      while (true) {
         if (uVar12 == 0) {
            return param_3;
         }

         if (uVar4 == 0) {
            return param_1;
         }

         if (uVar12 < uVar4) {
            return param_3;
         }

         if (uVar4 < uVar12) break;
         uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar9 + 1];
         uVar4 = (uint)(char)pbVar17[lVar9 + 1];
         lVar9 = lVar9 + 1;
         if (uVar12 == 0 && uVar4 == 0) {
            return param_1;
         }

      }
;
      return param_1;
   }

   if (pbVar17 == (byte*)0x0) {
      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar12 = *puVar7;
      LAB_0010c0c6:uVar4 = (uint)(char)*pbVar16;
      if (uVar12 == 0 && uVar4 == 0) {
         return param_1;
      }

      lVar8 = 0;
      while (true) {
         if (uVar4 == 0) {
            return param_3;
         }

         if (uVar12 == 0) {
            return param_1;
         }

         if (uVar4 < uVar12) {
            return param_3;
         }

         if (uVar12 < uVar4) break;
         uVar4 = (uint)(char)pbVar16[lVar8 + 1];
         uVar12 = puVar7[lVar8 + 1];
         lVar8 = lVar8 + 1;
         if (uVar4 == 0 && uVar12 == 0) {
            return param_1;
         }

      }
;
      return param_1;
   }

   bVar11 = *pbVar17;
   uVar4 = (uint)(char)bVar11;
}
bVar3 = *pbVar16;if (bVar3 == 0 && bVar11 == 0) {
   return param_1;
}
lVar8 = 1;while (true) {
   uVar12 = (uint)(char)bVar3;
   if (uVar12 == 0) {
      return param_3;
   }

   if (uVar4 == 0) {
      return param_1;
   }

   if (uVar12 < uVar4) {
      return param_3;
   }

   if (uVar4 < uVar12) break;
   bVar3 = pbVar16[lVar8];
   pbVar15 = pbVar17 + lVar8;
   uVar4 = (uint)(char)*pbVar15;
   lVar8 = lVar8 + 1;
   if (bVar3 == 0 && *pbVar15 == 0) {
      return param_1;
   }

}
;return param_1;}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partitioner(long, long,
   List<StringName, DefaultAllocator>::Element*, List<StringName, DefaultAllocator>::Element**)
   const [clone .isra.0] */long SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partitioner(long param_1, long param_2, Element *param_3, Element **param_4) {
   byte *pbVar1;
   byte *pbVar2;
   Element *pEVar3;
   Element **ppEVar4;
   uint uVar5;
   byte bVar6;
   long lVar7;
   long lVar8;
   uint uVar9;
   long lVar10;
   long lVar11;
   byte *pbVar12;
   byte *pbVar13;
   long lVar14;
   lVar14 = *(long*)param_3;
   lVar7 = *(long*)param_4[param_1];
   lVar11 = param_1;
   lVar10 = param_2;
   joined_r0x0010c327:if (lVar7 == 0) {
      if (lVar14 == 0) goto LAB_0010c458;
      pbVar13 = *(byte**)( lVar14 + 8 );
      uVar9 = 0;
      pbVar12 = &_LC3;
      LAB_0010c3de:if (pbVar13 == (byte*)0x0) {
         uVar5 = **(uint**)( lVar14 + 0x10 );
         if (uVar5 != 0 || uVar9 != 0) {
            lVar7 = 0;
            do {
               if (uVar9 == 0) goto LAB_0010c3a8;
               if (uVar5 == 0) break;
               if (uVar9 < uVar5) goto LAB_0010c3a8;
               if (uVar5 < uVar9) break;
               uVar9 = (uint)(char)pbVar12[lVar7 + 1];
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               lVar7 = lVar7 + 1;
            }
 while ( uVar9 != 0 || uVar5 != 0 );
         }

         goto LAB_0010c458;
      }

      uVar5 = (uint)(char)*pbVar13;
      bVar6 = (byte)uVar9 | *pbVar13;
      LAB_0010c6a5:if (bVar6 != 0) {
         lVar7 = 1;
         do {
            if (uVar9 == 0) goto LAB_0010c3a8;
            if (uVar5 == 0) break;
            if (uVar9 < uVar5) goto LAB_0010c3a8;
            if (uVar5 < uVar9) break;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
         }
 while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }

   }
 else {
      pbVar12 = *(byte**)( lVar7 + 8 );
      if (lVar14 == 0) {
         if (pbVar12 != (byte*)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC3;
            goto LAB_0010c6a5;
         }

         uVar9 = 0;
         pbVar13 = &_LC3;
      }
 else {
         pbVar13 = *(byte**)( lVar14 + 8 );
         if (pbVar12 != (byte*)0x0) {
            uVar9 = (uint)(char)*pbVar12;
            goto LAB_0010c3de;
         }

         if (pbVar13 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar14 + 0x10 );
            uVar5 = **(uint**)( lVar7 + 0x10 );
            if (uVar9 != 0 || uVar5 != 0) {
               lVar8 = 4;
               do {
                  if (uVar5 == 0) goto LAB_0010c3a8;
                  if (uVar9 == 0) break;
                  if (uVar5 < uVar9) goto LAB_0010c3a8;
                  if (uVar9 < uVar5) break;
                  uVar5 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                  uVar9 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                  lVar8 = lVar8 + 4;
               }
 while ( uVar5 != 0 || uVar9 != 0 );
            }

            goto LAB_0010c458;
         }

         uVar9 = (uint)(char)*pbVar13;
      }

      uVar5 = **(uint**)( lVar7 + 0x10 );
      if (uVar5 != 0 || uVar9 != 0) {
         lVar8 = 0;
         do {
            if (uVar5 == 0) goto LAB_0010c3a8;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_0010c3a8;
            if (uVar9 < uVar5) break;
            uVar5 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
            uVar9 = (uint)(char)pbVar13[lVar8 + 1];
            lVar8 = lVar8 + 1;
         }
 while ( uVar5 != 0 || uVar9 != 0 );
      }

   }

   goto LAB_0010c458;
   LAB_0010c3a8:if (param_2 + -1 == lVar11) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar14 = *(long*)param_3;
      LAB_0010c458:lVar10 = lVar10 + -1;
      lVar7 = *(long*)param_4[lVar10];
      ppEVar4 = param_4 + lVar10;
      do {
         if (lVar14 == 0) {
            if (lVar7 == 0) goto LAB_0010c658;
            pbVar13 = *(byte**)( lVar7 + 8 );
            uVar5 = 0;
            pbVar12 = &_LC3;
            uVar9 = 0;
            if (pbVar13 == (byte*)0x0) {
               LAB_0010c52c:uVar9 = **(uint**)( lVar7 + 0x10 );
               if (uVar9 == 0 && uVar5 == 0) goto LAB_0010c658;
               lVar8 = 0;
               while (uVar5 != 0) {
                  if (uVar9 == 0) goto LAB_0010c658;
                  if (uVar5 < uVar9) break;
                  if (uVar9 < uVar5) goto LAB_0010c658;
                  uVar5 = (uint)(char)pbVar12[lVar8 + 1];
                  uVar9 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
                  if (uVar5 == 0 && uVar9 == 0) goto LAB_0010c658;
               }
;
            }
 else {
               LAB_0010c58b:uVar5 = (uint)(char)*pbVar13;
               bVar6 = (byte)uVar9 | *pbVar13;
               LAB_0010c591:if (bVar6 == 0) goto LAB_0010c658;
               lVar7 = 1;
               while (uVar9 != 0) {
                  if (uVar5 == 0) goto LAB_0010c658;
                  if (uVar9 < uVar5) break;
                  if (uVar5 < uVar9) goto LAB_0010c658;
                  pbVar1 = pbVar12 + lVar7;
                  uVar9 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar13 + lVar7;
                  uVar5 = (uint)(char)*pbVar2;
                  lVar7 = lVar7 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_0010c658;
               }
;
            }

         }
 else {
            pbVar12 = *(byte**)( lVar14 + 8 );
            if (lVar7 == 0) {
               uVar9 = 0;
               pbVar13 = &_LC3;
               if (pbVar12 != (byte*)0x0) {
                  bVar6 = *pbVar12;
                  uVar9 = (uint)(char)bVar6;
                  uVar5 = 0;
                  pbVar13 = &_LC3;
                  goto LAB_0010c591;
               }

            }
 else {
               pbVar13 = *(byte**)( lVar7 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar5 = (uint)(char)*pbVar12;
                  uVar9 = uVar5;
                  if (pbVar13 == (byte*)0x0) goto LAB_0010c52c;
                  goto LAB_0010c58b;
               }

               if (pbVar13 == (byte*)0x0) {
                  uVar9 = **(uint**)( lVar7 + 0x10 );
                  uVar5 = **(uint**)( lVar14 + 0x10 );
                  if (uVar9 != 0 || uVar5 != 0) {
                     lVar8 = 4;
                     while (uVar5 != 0) {
                        if (uVar9 == 0) goto LAB_0010c658;
                        if (uVar5 < uVar9) break;
                        if (uVar9 < uVar5) goto LAB_0010c658;
                        uVar5 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                        uVar9 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                        lVar8 = lVar8 + 4;
                        if (uVar5 == 0 && uVar9 == 0) goto LAB_0010c658;
                     }
;
                     goto LAB_0010c4f0;
                  }

                  goto LAB_0010c658;
               }

               uVar9 = (uint)(char)*pbVar13;
            }

            uVar5 = **(uint**)( lVar14 + 0x10 );
            if (uVar5 == 0 && uVar9 == 0) goto LAB_0010c658;
            lVar7 = 0;
            while (uVar5 != 0) {
               if (uVar9 == 0) goto LAB_0010c658;
               if (uVar5 < uVar9) break;
               if (uVar9 < uVar5) goto LAB_0010c658;
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               uVar9 = (uint)(char)pbVar13[lVar7 + 1];
               lVar7 = lVar7 + 1;
               if (uVar5 == 0 && uVar9 == 0) goto LAB_0010c658;
            }
;
         }

         LAB_0010c4f0:if (lVar10 == param_1) goto LAB_0010c630;
         lVar10 = lVar10 + -1;
         lVar7 = *(long*)ppEVar4[-1];
         ppEVar4 = ppEVar4 + -1;
      }
 while ( true );
   }

   LAB_0010c3b6:lVar11 = lVar11 + 1;
   lVar7 = *(long*)param_4[lVar11];
   goto joined_r0x0010c327;
   LAB_0010c630:_err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_0010c658:if (lVar10 <= lVar11) {
      return lVar11;
   }

   pEVar3 = param_4[lVar11];
   param_4[lVar11] = *ppEVar4;
   *ppEVar4 = pEVar3;
   lVar14 = *(long*)param_3;
   goto LAB_0010c3b6;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, int>::get_object() const */undefined8 CallableCustomMethodPointer<EditorBuildProfileManager,void,int>::get_object(CallableCustomMethodPointer<EditorBuildProfileManager,void,int> *this) {
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
         goto LAB_0010c88d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010c88d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010c88d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void>::get_object() const */undefined8 CallableCustomMethodPointer<EditorBuildProfileManager,void>::get_object(CallableCustomMethodPointer<EditorBuildProfileManager,void> *this) {
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
         goto LAB_0010c98d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010c98d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010c98d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, String const&>::get_object() const
    */undefined8 CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&>::get_object(CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&> *this) {
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
         goto LAB_0010ca8d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010ca8d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010ca8d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, Object*>::get_object() const */undefined8 CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*>::get_object(CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*> *this) {
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
         goto LAB_0010cb8d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010cb8d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010cb8d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::partial_sort(long, long,
   long, List<StringName, DefaultAllocator>::Element**) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partial_sort(long param_1, long param_2, long param_3, Element **param_4) {
   Element **ppEVar1;
   byte *pbVar2;
   byte *pbVar3;
   Element *pEVar4;
   bool bVar5;
   byte bVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uint uVar10;
   uint uVar11;
   long lVar12;
   Element **ppEVar13;
   byte *pbVar14;
   byte *pbVar15;
   long lVar16;
   lVar16 = param_3 - param_1;
   ppEVar13 = param_4;
   if (lVar16 < 2) {
      if (param_2 <= param_3) {
         return;
      }

   }
 else {
      for (lVar12 = lVar16 + -2 >> 1; adjust_heap(param_1, lVar12, lVar16, param_4[param_1 + lVar12], ppEVar13),lVar12 != 0; lVar12 = lVar12 + -1) {}
      if (param_2 <= param_3) goto LAB_0010cd3c;
   }

   ppEVar1 = ppEVar13 + param_1;
   lVar12 = param_3;
   LAB_0010cc90:pEVar4 = ppEVar13[lVar12];
   lVar8 = *(long*)pEVar4;
   lVar7 = *(long*)*ppEVar1;
   if (lVar8 == 0) {
      if (lVar7 != 0) {
         pbVar14 = *(byte**)( lVar7 + 8 );
         uVar10 = 0;
         pbVar15 = &_LC3;
         LAB_0010cda4:if (pbVar14 == (byte*)0x0) {
            uVar11 = **(uint**)( lVar7 + 0x10 );
            if (uVar11 != 0 || uVar10 != 0) {
               lVar8 = 0;
               do {
                  if (uVar10 == 0) goto LAB_0010cd10;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_0010cd10;
                  if (uVar11 < uVar10) break;
                  uVar10 = (uint)(char)pbVar15[lVar8 + 1];
                  uVar11 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
               }
 while ( uVar10 != 0 || uVar11 != 0 );
            }

         }
 else {
            uVar11 = (uint)(char)*pbVar14;
            bVar6 = (byte)uVar10 | *pbVar14;
            LAB_0010ce06:if (bVar6 != 0) {
               lVar8 = 1;
               do {
                  if (uVar10 == 0) goto LAB_0010cd10;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_0010cd10;
                  if (uVar11 < uVar10) break;
                  pbVar2 = pbVar14 + lVar8;
                  uVar11 = (uint)(char)*pbVar2;
                  pbVar3 = pbVar15 + lVar8;
                  uVar10 = (uint)(char)*pbVar3;
                  lVar8 = lVar8 + 1;
               }
 while ( *pbVar2 != 0 || *pbVar3 != 0 );
            }

         }

      }

   }
 else {
      pbVar15 = *(byte**)( lVar8 + 8 );
      if (lVar7 == 0) {
         if (pbVar15 != (byte*)0x0) {
            bVar6 = *pbVar15;
            uVar10 = (uint)(char)bVar6;
            pbVar14 = &_LC3;
            uVar11 = 0;
            goto LAB_0010ce06;
         }

         uVar10 = 0;
         pbVar14 = &_LC3;
      }
 else {
         pbVar14 = *(byte**)( lVar7 + 8 );
         if (pbVar15 != (byte*)0x0) {
            uVar10 = (uint)(char)*pbVar15;
            goto LAB_0010cda4;
         }

         if (pbVar14 == (byte*)0x0) {
            uVar10 = **(uint**)( lVar7 + 0x10 );
            uVar11 = **(uint**)( lVar8 + 0x10 );
            if (uVar10 != 0 || uVar11 != 0) {
               lVar9 = 4;
               do {
                  if (uVar11 == 0) goto LAB_0010cd10;
                  if (uVar10 == 0) break;
                  if (uVar11 < uVar10) goto LAB_0010cd10;
                  if (uVar10 < uVar11) break;
                  uVar11 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
                  uVar10 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar9 );
                  lVar9 = lVar9 + 4;
               }
 while ( uVar11 != 0 || uVar10 != 0 );
            }

            goto LAB_0010cd24;
         }

         uVar10 = (uint)(char)*pbVar14;
      }

      uVar11 = **(uint**)( lVar8 + 0x10 );
      if (uVar11 != 0 || uVar10 != 0) {
         lVar7 = 0;
         do {
            if (uVar11 == 0) goto LAB_0010cd10;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_0010cd10;
            if (uVar10 < uVar11) break;
            uVar11 = ( *(uint**)( lVar8 + 0x10 ) )[lVar7 + 1];
            uVar10 = (uint)(char)pbVar14[lVar7 + 1];
            lVar7 = lVar7 + 1;
         }
 while ( uVar11 != 0 || uVar10 != 0 );
      }

   }

   goto LAB_0010cd24;
   LAB_0010cd10:ppEVar13[lVar12] = *ppEVar1;
   adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
   LAB_0010cd24:lVar12 = lVar12 + 1;
   if (param_2 <= lVar12) goto code_r0x0010cd31;
   goto LAB_0010cc90;
   code_r0x0010cd31:if (lVar16 < 2) {
      return;
   }

   LAB_0010cd3c:ppEVar1 = ppEVar13 + param_1;
   lVar16 = ( param_3 + -1 ) - param_1;
   do {
      pEVar4 = ppEVar1[lVar16];
      ppEVar1[lVar16] = *ppEVar1;
      adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
      bVar5 = 1 < lVar16;
      lVar16 = lVar16 + -1;
   }
 while ( bVar5 );
   return;
}
/* EditorBuildProfileManager::_validate_propertyv(PropertyInfo&) const */void EditorBuildProfileManager::_validate_propertyv(PropertyInfo *param_1) {
   Node::_validate_property(param_1);
   Viewport::_validate_property(param_1);
   if ((code*)PTR__validate_property_00125020 == Viewport::_validate_property) {
      return;
   }

   Window::_validate_property(param_1);
   return;
}
/* HBoxContainer::_validate_propertyv(PropertyInfo&) const */void HBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00125028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* VBoxContainer::_validate_propertyv(PropertyInfo&) const */void VBoxContainer::_validate_propertyv(PropertyInfo *param_1) {
   for (int i = 0; i < 3; i++) {
      Node::_validate_property(param_1);
   }

   if ((code*)PTR__validate_property_00125028 == Control::_validate_property) {
      return;
   }

   BoxContainer::_validate_property(param_1);
   return;
}
/* HBoxContainer::_setv(StringName const&, Variant const&) */undefined8 HBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00125030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* VBoxContainer::_setv(StringName const&, Variant const&) */undefined8 VBoxContainer::_setv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   uVar1 = CanvasItem::_set(param_1, param_2);
   if ((char)uVar1 == '\0') {
      if ((code*)PTR__set_00125030 != CanvasItem::_set) {
         uVar1 = Control::_set(param_1, param_2);
         return uVar1;
      }

      uVar1 = 0;
   }

   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010d1f8) *//* VBoxContainer::_getv(StringName const&, Variant&) const */undefined8 VBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00125038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* WARNING: Removing unreachable block (ram,0x0010d268) *//* HBoxContainer::_getv(StringName const&, Variant&) const */undefined8 HBoxContainer::_getv(StringName *param_1, Variant *param_2) {
   undefined8 uVar1;
   if (( (code*)PTR__get_00125038 != CanvasItem::_get ) && ( uVar1 = Control::_get(param_1, param_2) ),(char)uVar1 != '\0') {
      return uVar1;
   }

   uVar1 = CanvasItem::_get(param_1, param_2);
   return uVar1;
}
/* HBoxContainer::is_class_ptr(void*) const */uint HBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x11f7, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* VBoxContainer::is_class_ptr(void*) const */uint VBoxContainer::is_class_ptr(void *param_1) {
   uint uVar1;
   undefined4 in_EDX;
   undefined4 *in_RSI;
   uVar1 = 1;
   if (in_RSI != &get_class_ptr_static()::ptr) {
      uVar1 = (uint)CONCAT71(0x11f7, in_RSI == &Container::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &BoxContainer::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &Control::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &CanvasItem::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11f7, in_RSI == &Node::get_class_ptr_static(), ::ptr) | CONCAT31(( int3 )((uint)in_EDX >> 8), in_RSI == &Object::get_class_ptr_static(), ::ptr);
   }

   return uVar1;
}
/* EditorBuildProfileManager::~EditorBuildProfileManager() */void EditorBuildProfileManager::~EditorBuildProfileManager(EditorBuildProfileManager *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0011ead0;
   if (*(long*)( this + 0xe20 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xe20 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            AcceptDialog::~AcceptDialog((AcceptDialog*)this);
            return;
         }

      }

   }

   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   return;
}
/* EditorBuildProfileManager::~EditorBuildProfileManager() */void EditorBuildProfileManager::~EditorBuildProfileManager(EditorBuildProfileManager *this) {
   Object *pOVar1;
   char cVar2;
   *(undefined***)this = &PTR__initialize_classv_0011ead0;
   if (*(long*)( this + 0xe20 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0xe20 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   AcceptDialog::~AcceptDialog((AcceptDialog*)this);
   operator_delete(this, 0xe30);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d4b0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010d4b0:Control::~Control((Control*)this);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d510;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010d510:Control::~Control((Control*)this);
   return;
}
/* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d570;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010d570:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = String::parse_latin1;
   if (bVar1) {
      if (*(long*)( this + 0x9e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_0010d5e0;
      }

      if (*(long*)( this + 0x9d0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_0010d5e0:Control::~Control((Control*)this);
   operator_delete(this, 0xa10);
   return;
}
/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
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
/* EditorBuildProfileManager::_get_class_namev() const */undefined8 *EditorBuildProfileManager::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010d723:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010d723;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorBuildProfileManager");
         goto LAB_0010d78e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorBuildProfileManager");
   LAB_0010d78e:return &_get_class_namev();
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
         LAB_0010d813:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010d813;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
         goto LAB_0010d87e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "HBoxContainer");
   LAB_0010d87e:return &_get_class_namev();
}
/* EditorBuildProfile::_get_class_namev() const */undefined8 *EditorBuildProfile::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010d903:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010d903;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorBuildProfile");
         goto LAB_0010d96e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorBuildProfile");
   LAB_0010d96e:return &_get_class_namev();
}
/* JSON::_get_class_namev() const */undefined8 *JSON::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_0010d9e3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010d9e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "JSON");
         goto LAB_0010da4e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "JSON");
   LAB_0010da4e:return &_get_class_namev();
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
         LAB_0010dac3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010dac3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0010db2e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0010db2e:return &_get_class_namev();
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
         LAB_0010dbb3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_0010dbb3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
         goto LAB_0010dc1e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "VBoxContainer");
   LAB_0010dc1e:return &_get_class_namev();
}
/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>, true>::introsort(long, long,
   List<StringName, DefaultAllocator>::Element**, long) const [clone .isra.0] */void SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::introsort(long param_1, long param_2, Element **param_3, long param_4) {
   long lVar1;
   undefined8 *puVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   long lVar15;
   long local_118;
   long local_110;
   long local_108;
   long local_f8;
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }

   if (param_4 == 0) {
      LAB_0010e563:partial_sort(param_1, param_2, param_2, param_3);
      return;
   }

   lVar11 = param_2 * 8;
   lVar3 = param_2;
   LAB_0010dcb3:param_4 = param_4 + -1;
   puVar2 = (undefined8*)median_of_3(param_3 + param_1, param_3 + ( lVar1 >> 1 ) + param_1, (Element**)( (long)param_3 + lVar11 + -8 ));
   param_2 = partitioner(param_1, lVar3, (Element*)*puVar2, param_3);
   lVar1 = lVar3 - param_2;
   if (0x10 < lVar1) {
      if (param_4 != 0) {
         lVar11 = param_4;
         lVar4 = lVar3;
         LAB_0010dd3c:do {
            lVar11 = lVar11 + -1;
            puVar2 = (undefined8*)median_of_3(param_3 + param_2, param_3 + ( lVar1 >> 1 ) + param_2, param_3 + lVar4 + -1);
            lVar3 = partitioner(param_2, lVar4, (Element*)*puVar2, param_3);
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
               if (lVar11 != 0) {
                  local_118 = lVar4;
                  lVar15 = lVar11;
                  LAB_0010ddd4:lVar15 = lVar15 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar3, param_3 + ( lVar1 >> 1 ) + lVar3, param_3 + local_118 + -1);
                  lVar4 = partitioner(lVar3, local_118, (Element*)*puVar2, param_3);
                  lVar1 = local_118 - lVar4;
                  if (0x10 < lVar1) goto code_r0x0010de20;
                  LAB_0010e2b6:lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) goto LAB_0010e2c6;
                  goto LAB_0010e463;
               }

               LAB_0010e4d8:partial_sort(lVar3, lVar4, lVar4, param_3);
            }

            LAB_0010e3ef:lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto joined_r0x0010e4a1;
            lVar4 = lVar3;
            if (lVar11 == 0) break;
         }
 while ( true );
      }

      partial_sort(param_2, lVar3, lVar3, param_3);
   }

   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }

   if (param_4 != 0) goto LAB_0010e53c;
   goto LAB_0010e563;
   code_r0x0010de20:if (lVar15 != 0) {
      lVar13 = lVar15;
      lVar6 = local_118;
      LAB_0010de5c:do {
         lVar13 = lVar13 + -1;
         puVar2 = (undefined8*)median_of_3(param_3 + lVar4, param_3 + ( lVar1 >> 1 ) + lVar4, param_3 + lVar6 + -1);
         lVar5 = partitioner(lVar4, lVar6, (Element*)*puVar2, param_3);
         lVar1 = lVar6 - lVar5;
         if (0x10 < lVar1) {
            if (lVar13 != 0) {
               lVar7 = lVar6;
               local_f8 = lVar13;
               LAB_0010dee2:do {
                  local_f8 = local_f8 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar5, param_3 + ( lVar1 >> 1 ) + lVar5, param_3 + lVar7 + -1);
                  lVar6 = partitioner(lVar5, lVar7, (Element*)*puVar2, param_3);
                  lVar1 = lVar7 - lVar6;
                  if (0x10 < lVar1) {
                     if (local_f8 != 0) {
                        lVar8 = lVar7;
                        local_110 = local_f8;
                        LAB_0010df63:do {
                           local_110 = local_110 + -1;
                           puVar2 = (undefined8*)median_of_3(param_3 + lVar6, param_3 + ( lVar1 >> 1 ) + lVar6, param_3 + lVar8 + -1);
                           lVar7 = partitioner(lVar6, lVar8, (Element*)*puVar2, param_3);
                           lVar1 = lVar8 - lVar7;
                           if (0x10 < lVar1) {
                              if (local_110 != 0) {
                                 lVar9 = lVar8;
                                 local_118 = local_110;
                                 LAB_0010dfe1:do {
                                    local_118 = local_118 + -1;
                                    puVar2 = (undefined8*)median_of_3(param_3 + lVar7, param_3 + ( lVar1 >> 1 ) + lVar7, param_3 + lVar9 + -1);
                                    lVar8 = partitioner(lVar7, lVar9, (Element*)*puVar2, param_3);
                                    lVar1 = lVar9 - lVar8;
                                    if (0x10 < lVar1) {
                                       if (local_118 != 0) {
                                          lVar10 = lVar9;
                                          local_108 = local_118;
                                          LAB_0010e057:do {
                                             local_108 = local_108 + -1;
                                             puVar2 = (undefined8*)median_of_3(param_3 + lVar8, param_3 + ( lVar1 >> 1 ) + lVar8, param_3 + lVar10 + -1);
                                             lVar9 = partitioner(lVar8, lVar10, (Element*)*puVar2, param_3);
                                             lVar1 = lVar10 - lVar9;
                                             if (0x10 < lVar1) {
                                                if (local_108 != 0) {
                                                   lVar12 = local_108;
                                                   lVar14 = lVar10;
                                                   do {
                                                      lVar12 = lVar12 + -1;
                                                      puVar2 = (undefined8*)median_of_3(param_3 + lVar9, param_3 + ( lVar1 >> 1 ) + lVar9, param_3 + lVar14 + -1);
                                                      lVar10 = partitioner(lVar9, lVar14, (Element*)*puVar2, param_3);
                                                      introsort(lVar10, lVar14, param_3, lVar12);
                                                      lVar1 = lVar10 - lVar9;
                                                      if (lVar1 < 0x11) {
                                                         lVar1 = lVar9 - lVar8;
                                                         lVar10 = lVar9;
                                                         if (lVar1 < 0x11) goto LAB_0010e1ec;
                                                         goto LAB_0010e057;
                                                      }

                                                      lVar14 = lVar10;
                                                   }
 while ( lVar12 != 0 );
                                                }

                                                partial_sort(lVar9, lVar10, lVar10, param_3);
                                             }

                                             lVar1 = lVar9 - lVar8;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar8 - lVar7;
                                                lVar9 = lVar8;
                                                if (lVar1 < 0x11) goto joined_r0x0010e300;
                                                goto LAB_0010dfe1;
                                             }

                                             lVar10 = lVar9;
                                          }
 while ( local_108 != 0 );
                                       }

                                       partial_sort(lVar8, lVar9, lVar9, param_3);
                                    }

                                    LAB_0010e1ec:lVar1 = lVar8 - lVar7;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar7 - lVar6;
                                       lVar8 = lVar7;
                                       if (lVar1 < 0x11) goto joined_r0x0010e27b;
                                       goto LAB_0010df63;
                                    }

                                    lVar9 = lVar8;
                                 }
 while ( local_118 != 0 );
                              }

                              partial_sort(lVar7, lVar8, lVar8, param_3);
                           }

                           joined_r0x0010e300:lVar1 = lVar7 - lVar6;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar6 - lVar5;
                              lVar7 = lVar6;
                              if (lVar1 < 0x11) goto joined_r0x0010e340;
                              goto LAB_0010dee2;
                           }

                           lVar8 = lVar7;
                        }
 while ( local_110 != 0 );
                     }

                     partial_sort(lVar6, lVar7, lVar7, param_3);
                  }

                  joined_r0x0010e27b:lVar1 = lVar6 - lVar5;
                  if (lVar1 < 0x11) {
                     lVar1 = lVar5 - lVar4;
                     lVar6 = lVar5;
                     if (lVar1 < 0x11) goto LAB_0010e2b6;
                     goto LAB_0010de5c;
                  }

                  lVar7 = lVar6;
               }
 while ( local_f8 != 0 );
            }

            partial_sort(lVar5, lVar6, lVar6, param_3);
         }

         joined_r0x0010e340:lVar1 = lVar5 - lVar4;
         if (lVar1 < 0x11) {
            lVar1 = lVar4 - lVar3;
            local_118 = lVar4;
            if (lVar1 < 0x11) goto LAB_0010e3ef;
            goto LAB_0010ddd4;
         }

         lVar6 = lVar5;
         local_118 = lVar5;
      }
 while ( lVar13 != 0 );
   }

   partial_sort(lVar4, local_118, local_118, param_3);
   lVar1 = lVar4 - lVar3;
   if (lVar1 < 0x11) {
      LAB_0010e463:lVar1 = lVar3 - param_2;
      lVar4 = lVar3;
      if (0x10 < lVar1) goto LAB_0010dd3c;
      goto joined_r0x0010e4a1;
   }

   LAB_0010e2c6:local_118 = lVar4;
   if (lVar15 == 0) goto LAB_0010e4d8;
   goto LAB_0010ddd4;
   joined_r0x0010e4a1:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }

   LAB_0010e53c:lVar11 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_0010dcb3;
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
/* EditorBuildProfileManager::get_class() const */void EditorBuildProfileManager::get_class(void) {
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
/* JSON::get_class() const */void JSON::get_class(void) {
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
/* EditorBuildProfile::get_class() const */void EditorBuildProfile::get_class(void) {
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
/* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0011ed48;
   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[*(int*)( this + 0x248 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   long *plVar1;
   long lVar2;
   *(undefined***)this = &PTR__initialize_classv_0011ed48;
   if (*(long*)( this + 0x260 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x260 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x260 );
         *(undefined8*)( this + 0x260 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (Variant::needs_deinit[*(int*)( this + 0x248 )] != '\0') {
      Variant::_clear_internal();
   }

   if (*(long*)( this + 0x240 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x240 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x240 );
         *(undefined8*)( this + 0x240 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x270);
   return;
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

      if (cVar5 != '\0') goto LAB_0010ed0b;
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

         if (cVar5 != '\0') goto LAB_0010ed0b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_0010ed0b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfile::is_class(String const&) const */undefined8 EditorBuildProfile::is_class(EditorBuildProfile *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_0010eeaf;
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

      LAB_0010eeaf:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010ef63;
   }

   cVar5 = String::operator ==(param_1, "EditorBuildProfile");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010ef63:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JSON::is_class(String const&) const */undefined8 JSON::is_class(JSON *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010f0cb;
   }

   cVar5 = String::operator ==(param_1, "JSON");
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

         if (cVar5 != '\0') goto LAB_0010f0cb;
      }

      cVar5 = String::operator ==(param_1, "Resource");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar6;
         }

         goto LAB_0010f208;
      }

   }

   LAB_0010f0cb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010f208:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
/* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(PropertyInfo *this, undefined4 param_2, CowData *param_3, int param_4, CowData *param_5, undefined4 param_6, StringName *param_7) {
   long lVar1;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 8 ) = 0;
   lVar1 = *(long*)param_3;
   *(undefined4*)this = param_2;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 8 ), param_3);
   }

   *(undefined8*)( this + 0x20 ) = 0;
   lVar1 = *(long*)param_5;
   *(undefined8*)( this + 0x10 ) = 0;
   *(int*)( this + 0x18 ) = param_4;
   if (lVar1 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x20 ), param_5);
      param_4 = *(int*)( this + 0x18 );
   }

   *(undefined4*)( this + 0x28 ) = param_6;
   if (param_4 == 0x11) {
      StringName::StringName((StringName*)&local_48, (String*)( this + 0x20 ), false);
      if (*(long*)( this + 0x10 ) == local_48) {
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         *(long*)( this + 0x10 ) = local_48;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      StringName::operator =((StringName*)( this + 0x10 ), param_7);
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node::is_class(String const&) const */undefined8 Node::is_class(Node *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010f51b;
   }

   cVar5 = String::operator ==(param_1, "Node");
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

         if (cVar5 != '\0') goto LAB_0010f51b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_0010f51b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Control::is_class(String const&) const */undefined8 Control::is_class(Control *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010f75b;
   }

   cVar5 = String::operator ==(param_1, "Control");
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

         if (cVar5 != '\0') goto LAB_0010f75b;
      }

      cVar5 = String::operator ==(param_1, "CanvasItem");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_0010f898;
      }

   }

   LAB_0010f75b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010f898:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* BoxContainer::is_class(String const&) const */undefined8 BoxContainer::is_class(BoxContainer *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0010f9bb;
   }

   cVar5 = String::operator ==(param_1, "BoxContainer");
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

         if (cVar5 != '\0') goto LAB_0010f9bb;
      }

      cVar5 = String::operator ==(param_1, "Container");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Control::is_class((Control*)this, param_1);
            return uVar6;
         }

         goto LAB_0010faf8;
      }

   }

   LAB_0010f9bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010faf8:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
                  if (lVar4 == 0) goto LAB_0010fb6f;
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

      LAB_0010fb6f:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010fc23;
   }

   cVar5 = String::operator ==(param_1, "VBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010fc23:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
                  if (lVar4 == 0) goto LAB_0010fcef;
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

      LAB_0010fcef:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_0010fda3;
   }

   cVar5 = String::operator ==(param_1, "HBoxContainer");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = BoxContainer::is_class((BoxContainer*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_0010fda3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x0010fee0) *//* BoxContainer::_notificationv(int, bool) */void BoxContainer::_notificationv(BoxContainer *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if ((code*)PTR__notification_00125040 != Container::_notification) {
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

   if ((code*)PTR__notification_00125040 == Container::_notification) {
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
/* Window::is_class(String const&) const */undefined8 Window::is_class(Window *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_0011006b;
   }

   cVar5 = String::operator ==(param_1, "Window");
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

         if (cVar5 != '\0') goto LAB_0011006b;
      }

      cVar5 = String::operator ==(param_1, "Viewport");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Node::is_class((Node*)this, param_1);
            return uVar6;
         }

         goto LAB_001101a8;
      }

   }

   LAB_0011006b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001101a8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorBuildProfileManager::is_class(String const&) const */undefined8 EditorBuildProfileManager::is_class(EditorBuildProfileManager *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_001102bb;
   }

   cVar5 = String::operator ==(param_1, "EditorBuildProfileManager");
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

         if (cVar5 != '\0') goto LAB_001102bb;
      }

      cVar5 = String::operator ==(param_1, "AcceptDialog");
      if (cVar5 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar6 = Window::is_class((Window*)this, param_1);
            return uVar6;
         }

         goto LAB_001103f8;
      }

   }

   LAB_001102bb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_001103f8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      plVar1 = (long*)*plVar4;
      if (plVar1 == (long*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if ((long*)plVar1[3] == plVar4) {
         lVar3 = plVar1[1];
         lVar2 = plVar1[2];
         *plVar4 = lVar3;
         if (plVar1 == (long*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar3;
            lVar3 = plVar1[1];
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         if (( StringName::configured != '\0' ) && ( *plVar1 != 0 )) {
            StringName::unref();
         }

         Memory::free_static(plVar1, false);
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
/* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   int *piVar1;
   undefined8 *puVar2;
   puVar2 = *(undefined8**)this;
   if (puVar2 == (undefined8*)0x0) {
      return;
   }

   do {
      piVar1 = (int*)*puVar2;
      if (piVar1 == (int*)0x0) {
         if (*(int*)( puVar2 + 2 ) != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(undefined8**)( piVar1 + 10 ) == puVar2) {
         *puVar2 = *(undefined8*)( piVar1 + 6 );
         if (piVar1 == (int*)puVar2[1]) {
            puVar2[1] = *(undefined8*)( piVar1 + 8 );
         }

         if (*(long*)( piVar1 + 8 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 8 ) + 0x18 ) = *(undefined8*)( piVar1 + 6 );
         }

         if (*(long*)( piVar1 + 6 ) != 0) {
            *(undefined8*)( *(long*)( piVar1 + 6 ) + 0x20 ) = *(undefined8*)( piVar1 + 8 );
         }

         if (Variant::needs_deinit[*piVar1] != '\0') {
            Variant::_clear_internal();
         }

         Memory::free_static(piVar1, false);
         *(int*)( puVar2 + 2 ) = *(int*)( puVar2 + 2 ) + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      puVar2 = *(undefined8**)this;
   }
 while ( *(int*)( puVar2 + 2 ) != 0 );
   Memory::free_static(puVar2, false);
   return;
}
/* void Ref<EditorBuildProfile>::instantiate<>() */void Ref<EditorBuildProfile>::instantiate<>(Ref<EditorBuildProfile> *this) {
   char cVar1;
   EditorBuildProfile *this_00;
   Object *pOVar2;
   Object *pOVar3;
   this_00 = (EditorBuildProfile*)operator_new(0x1e8, "");
   EditorBuildProfile::EditorBuildProfile(this_00);
   postinitialize_handler((Object*)this_00);
   cVar1 = RefCounted::init_ref();
   if (cVar1 == '\0') {
      pOVar3 = *(Object**)this;
      if (pOVar3 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
      cVar1 = RefCounted::unreference();
      if (cVar1 == '\0') {
         return;
      }

      this_00 = (EditorBuildProfile*)0x0;
      cVar1 = predelete_handler(pOVar3);
      if (cVar1 == '\0') {
         return;
      }

   }
 else {
      pOVar3 = *(Object**)this;
      pOVar2 = pOVar3;
      if (this_00 == (EditorBuildProfile*)pOVar3) goto LAB_00110785;
      *(EditorBuildProfile**)this = this_00;
      cVar1 = RefCounted::reference();
      if (cVar1 == '\0') {
         *(undefined8*)this = 0;
      }

      pOVar2 = (Object*)this_00;
      if (( ( pOVar3 == (Object*)0x0 ) || ( cVar1 = RefCounted::unreference() ),cVar1 == '\0' )) goto LAB_00110785;
   }

   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
   pOVar2 = (Object*)this_00;
   if (this_00 == (EditorBuildProfile*)0x0) {
      return;
   }

   LAB_00110785:cVar1 = RefCounted::unreference();
   if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
      ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
      Memory::free_static(pOVar2, false);
      return;
   }

   return;
}
/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */void List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>(List<StringName,DefaultAllocator> *this) {
   int iVar1;
   long *plVar2;
   Element **ppEVar3;
   undefined8 *puVar4;
   Element **ppEVar5;
   Element **ppEVar6;
   Element *pEVar7;
   long lVar8;
   Element *pEVar9;
   long lVar10;
   Element *pEVar11;
   if (*(long*)this == 0) {
      return;
   }

   iVar1 = *(int*)( *(long*)this + 0x10 );
   if (iVar1 < 2) {
      return;
   }

   pEVar11 = (Element*)(long)iVar1;
   ppEVar3 = (Element**)Memory::alloc_static((long)pEVar11 * 8, true);
   if (ppEVar3 == (Element**)0x0) {
      _err_print_error("memnew_arr_template", "./core/os/memory.h", 0xb6, "Parameter \"mem\" is null.", 0, 0);
   }
 else {
      ppEVar3[-1] = pEVar11;
   }

   if (*(long**)this != (long*)0x0) {
      ppEVar5 = ppEVar3;
      for (pEVar7 = (Element*)**(long**)this; pEVar7 != (Element*)0x0; pEVar7 = *(Element**)( pEVar7 + 8 )) {
         *ppEVar5 = pEVar7;
         ppEVar5 = ppEVar5 + 1;
      }

   }

   lVar10 = 0;
   pEVar7 = pEVar11;
   do {
      pEVar7 = (Element*)( (long)pEVar7 >> 1 );
      lVar10 = lVar10 + 1;
   }
 while ( pEVar7 != (Element*)0x1 );
   lVar10 = lVar10 * 2;
   pEVar7 = (Element*)0x1;
   pEVar9 = pEVar11;
   if ((long)pEVar11 < 0x11) {
      do {
         pEVar9 = pEVar7 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(0, (long)pEVar7, ppEVar3);
         pEVar7 = pEVar9;
      }
 while ( pEVar11 != pEVar9 );
   }
 else {
      do {
         lVar10 = lVar10 + -1;
         puVar4 = (undefined8*)SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::median_of_3(ppEVar3, ppEVar3 + ( (long)pEVar9 >> 1 ), ppEVar3 + (long)( pEVar9 + -1 ));
         pEVar7 = (Element*)SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partitioner(0, (long)pEVar9, (Element*)*puVar4, ppEVar3);
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::introsort((long)pEVar7, (long)pEVar9, ppEVar3, lVar10);
         lVar8 = 1;
         if ((long)pEVar7 < 0x11) goto LAB_00110960;
         pEVar9 = pEVar7;
      }
 while ( lVar10 != 0 );
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partial_sort(0, (long)pEVar7, (long)pEVar7, ppEVar3);
      LAB_00110960:do {
         lVar10 = lVar8 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(0, lVar8, ppEVar3);
         lVar8 = lVar10;
      }
 while ( lVar10 != 0x10 );
      pEVar7 = (Element*)&DAT_00000010;
      do {
         pEVar9 = pEVar7 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::unguarded_linear_insert((long)pEVar7, ppEVar3[(long)pEVar7], ppEVar3);
         pEVar7 = pEVar9;
      }
 while ( pEVar11 != pEVar9 );
   }

   plVar2 = *(long**)this;
   pEVar7 = *ppEVar3;
   *plVar2 = (long)pEVar7;
   *(undefined8*)( pEVar7 + 0x10 ) = 0;
   *(Element**)( *ppEVar3 + 8 ) = ppEVar3[1];
   pEVar7 = ppEVar3[(long)( pEVar11 + -1 )];
   plVar2[1] = (long)pEVar7;
   *(Element**)( pEVar7 + 0x10 ) = ppEVar3[(long)( pEVar11 + -2 )];
   *(undefined8*)( ppEVar3[(long)( pEVar11 + -1 )] + 8 ) = 0;
   if (iVar1 != 2) {
      ppEVar5 = ppEVar3;
      do {
         ppEVar6 = ppEVar5 + 1;
         *(Element**)( ppEVar5[1] + 0x10 ) = *ppEVar5;
         *(Element**)( *ppEVar6 + 8 ) = ppEVar5[2];
         ppEVar5 = ppEVar6;
      }
 while ( ppEVar3 + ( iVar1 - 2 ) != ppEVar6 );
   }

   Memory::free_static(ppEVar3, true);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<EditorBuildProfile::BuildOptionCategory, TreeItem*, HashMapHasherDefault,
   HashMapComparatorDefault<EditorBuildProfile::BuildOptionCategory>,
   DefaultTypedAllocator<HashMapElement<EditorBuildProfile::BuildOptionCategory, TreeItem*> >
   >::operator[](EditorBuildProfile::BuildOptionCategory const&) */undefined1[16];HashMap<EditorBuildProfile::BuildOptionCategory,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<EditorBuildProfile::BuildOptionCategory>,DefaultTypedAllocator<HashMapElement<EditorBuildProfile::BuildOptionCategory,TreeItem*>>>::operator [](HashMap<EditorBuildProfile::BuildOptionCategory,TreeItem*,HashMapHasherDefault,HashMapComparatorDefault<EditorBuildProfile::BuildOptionCategory>,DefaultTypedAllocator<HashMapElement<EditorBuildProfile::BuildOptionCategory,TreeItem*>>>
             *this,BuildOptionCategory*param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  undefined4 uVar3;
  void *pvVar4;
  void *__s;
  undefined1 auVar5 [16];
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
  undefined1 auVar36[16](*, pauVar37)[16](*, pauVar43)[16](*, pauVar56)[16];
  undefined1 auVar57[16];
  undefined1 auVar58[16](ulong)(local_70 = = (void*)0x0) {
   uVar41 = uVar52 * 4;
   uVar49 = uVar52 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   lStack_90 = 0x111133;
   local_70 = (void*)Memory::alloc_static(uVar49, false);
   *(void**)( this + 8 ) = local_70;
   if (uVar40 == 0) {
      iVar45 = *(int*)( this + 0x2c );
      uVar39 = *(uint*)param_1;
      if (local_70 == (void*)0x0) goto LAB_00110c93;
   }
 else {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)local_70 + uVar49 ) ) && ( local_70 < (void*)( (long)pvVar4 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar52 != uVar41 );
         iVar45 = *(int*)( this + 0x2c );
         uVar39 = *(uint*)param_1;
      }
 else {
         memset(pvVar4, 0, uVar41);
         lStack_90 = 0x11117c;
         memset(local_70, 0, uVar49);
         iVar45 = *(int*)( this + 0x2c );
         uVar39 = *(uint*)param_1;
      }

   }

   if (iVar45 != 0) {
      uVar41 = ( ulong ) * (uint*)( this + 0x28 );
      lVar53 = *(long*)( this + 0x10 );
      goto LAB_00111013;
   }

}
else{iVar45 = *(int*)( this + 0x2c );if (iVar45 != 0) {
   uVar49 = *(ulong*)( hash_table_size_primes_inv + uVar41 * 8 );
   uVar38 = ( uVar39 >> 0x10 ^ uVar39 ) * -0x7a143595;
   uVar38 = ( uVar38 ^ uVar38 >> 0xd ) * -0x3d4d51cb;
   uVar54 = uVar38 ^ uVar38 >> 0x10;
   if (uVar38 == uVar38 >> 0x10) {
      uVar54 = 1;
      uVar46 = uVar49;
   }
 else {
      uVar46 = uVar54 * uVar49;
   }

   lVar53 = *(long*)( this + 0x10 );
   auVar5._8_8_ = 0;
   auVar5._0_8_ = uVar52;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar46;
   lVar47 = SUB168(auVar5 * auVar21, 8);
   uVar38 = *(uint*)( lVar53 + lVar47 * 4 );
   uVar55 = SUB164(auVar5 * auVar21, 8);
   if (uVar38 != 0) {
      uVar51 = 0;
      lVar48 = lVar47;
      do {
         if (( uVar54 == uVar38 ) && ( uVar39 == *(uint*)( *(long*)( (long)local_70 + lVar47 * 8 ) + 0x10 ) )) {
            auVar57._0_8_ = *(long*)( (long)local_70 + (ulong)uVar55 * 8 ) + 0x18;
            auVar57._8_8_ = lVar48;
            return auVar57;
         }

         uVar51 = uVar51 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( uVar55 + 1 ) * uVar49;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar52;
         lVar47 = SUB168(auVar6 * auVar22, 8);
         uVar38 = *(uint*)( lVar53 + lVar47 * 4 );
         uVar55 = SUB164(auVar6 * auVar22, 8);
      }
 while ( ( uVar38 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar38 * uVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar52,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( uVar55 + uVar40 ) - SUB164(auVar7 * auVar23, 8) ) * uVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar52,lVar48 = SUB168(auVar8 * auVar24, 8),uVar51 <= SUB164(auVar8 * auVar24, 8) );
   }

   LAB_00111013:uVar46 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar41 * 4 ));
   uVar49 = *(ulong*)( hash_table_size_primes_inv + uVar41 * 8 );
   uVar40 = ( uVar39 >> 0x10 ^ uVar39 ) * -0x7a143595;
   uVar40 = ( uVar40 ^ uVar40 >> 0xd ) * -0x3d4d51cb;
   uVar38 = uVar40 ^ uVar40 >> 0x10;
   if (uVar40 == uVar40 >> 0x10) {
      uVar38 = 1;
      uVar44 = uVar49;
   }
 else {
      uVar44 = uVar38 * uVar49;
   }

   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar46;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar44;
   lVar47 = SUB168(auVar17 * auVar33, 8);
   uVar40 = *(uint*)( lVar53 + lVar47 * 4 );
   uVar54 = SUB164(auVar17 * auVar33, 8);
   if (uVar40 != 0) {
      uVar55 = 0;
      lVar48 = lVar47;
      do {
         if (( uVar38 == uVar40 ) && ( *(uint*)( *(long*)( (long)local_70 + lVar47 * 8 ) + 0x10 ) == uVar39 )) {
            pauVar43 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar54 * 8 );
            *(undefined8*)( pauVar43[1] + 8 ) = 0;
            lStack_90 = lVar48;
            goto LAB_00110ff4;
         }

         uVar55 = uVar55 + 1;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = ( uVar54 + 1 ) * uVar49;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar46;
         lVar47 = SUB168(auVar18 * auVar34, 8);
         uVar40 = *(uint*)( lVar53 + lVar47 * 4 );
         uVar54 = SUB164(auVar18 * auVar34, 8);
      }
 while ( ( uVar40 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = uVar40 * uVar49,auVar35._8_8_ = 0,auVar35._0_8_ = uVar46,auVar20._8_8_ = 0,auVar20._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar41 * 4 ) + uVar54 ) - SUB164(auVar19 * auVar35, 8) ) * uVar49,auVar36._8_8_ = 0,auVar36._0_8_ = uVar46,lVar48 = SUB168(auVar20 * auVar36, 8),uVar55 <= SUB164(auVar20 * auVar36, 8) );
   }

}
}LAB_00110c93:if ((float)uVar52 * __LC42 < (float)( iVar45 + 1 )) {
   uVar39 = *(uint*)( this + 0x28 );
   if (uVar39 == 0x1c) {
      pauVar43 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00110ff4;
   }

   uVar41 = ( ulong )(uVar39 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar40 = *(uint*)( hash_table_size_primes + (ulong)uVar39 * 4 );
   if (uVar39 + 1 < 2) {
      uVar41 = 2;
   }

   uVar39 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
   uVar49 = (ulong)uVar39;
   *(int*)( this + 0x28 ) = (int)uVar41;
   pvVar4 = *(void**)( this + 0x10 );
   uVar41 = uVar49 * 4;
   uVar52 = uVar49 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x10 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar52, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar39 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar52 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         }
 while ( uVar41 != uVar49 );
      }
 else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar52);
      }

   }

   if (uVar40 != 0) {
      uVar41 = 0;
      do {
         uVar39 = *(uint*)( (long)pvVar4 + uVar41 * 4 );
         if (uVar39 != 0) {
            lVar53 = *(long*)( this + 0x10 );
            uVar55 = 0;
            uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar52 = CONCAT44(0, uVar38);
            lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar9._8_8_ = 0;
            auVar9._0_8_ = (ulong)uVar39 * lVar47;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar52;
            lVar48 = SUB168(auVar9 * auVar25, 8);
            puVar1 = (uint*)( lVar53 + lVar48 * 4 );
            iVar45 = SUB164(auVar9 * auVar25, 8);
            uVar54 = *puVar1;
            uVar42 = *(undefined8*)( (long)local_70 + uVar41 * 8 );
            while (uVar54 != 0) {
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar54 * lVar47;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar52;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar10 * auVar26, 8)) * lVar47;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar52;
               uVar51 = SUB164(auVar11 * auVar27, 8);
               uVar50 = uVar42;
               if (uVar51 < uVar55) {
                  *puVar1 = uVar39;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar48 * 8 );
                  uVar50 = *puVar2;
                  *puVar2 = uVar42;
                  uVar39 = uVar54;
                  uVar55 = uVar51;
               }

               uVar55 = uVar55 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar45 + 1) * lVar47;
               auVar28._8_8_ = 0;
               auVar28._0_8_ = uVar52;
               lVar48 = SUB168(auVar12 * auVar28, 8);
               puVar1 = (uint*)( lVar53 + lVar48 * 4 );
               iVar45 = SUB164(auVar12 * auVar28, 8);
               uVar42 = uVar50;
               uVar54 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar48 * 8 ) = uVar42;
            *puVar1 = uVar39;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar41 = uVar41 + 1;
      }
 while ( uVar40 != uVar41 );
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar4, false);
   }

}
uVar3 = *(undefined4*)param_1;pauVar43 = (undefined1(*) [16])operator_new(0x20, "");*(undefined4*)pauVar43[1] = uVar3;*(undefined8*)( pauVar43[1] + 8 ) = 0;*pauVar43 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x20 );if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar43;
}
 else {
   *puVar2 = pauVar43;
   *(undefined8**)( *pauVar43 + 8 ) = puVar2;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar43;uVar39 = ( *(uint*)param_1 >> 0x10 ^ *(uint*)param_1 ) * -0x7a143595;uVar40 = ( uVar39 ^ uVar39 >> 0xd ) * -0x3d4d51cb;uVar39 = uVar40 ^ uVar40 >> 0x10;if (uVar40 == uVar40 >> 0x10) {
   uVar41 = 1;
   uVar39 = 1;
}
 else {
   uVar41 = (ulong)uVar39;
}
uVar54 = 0;lVar53 = *(long*)( this + 0x10 );lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar52 = CONCAT44(0, uVar40);auVar13._8_8_ = 0;auVar13._0_8_ = uVar41 * lVar47;auVar29._8_8_ = 0;auVar29._0_8_ = uVar52;lStack_90 = SUB168(auVar13 * auVar29, 8);lVar48 = *(long*)( this + 8 );puVar1 = (uint*)( lVar53 + lStack_90 * 4 );iVar45 = SUB164(auVar13 * auVar29, 8);uVar38 = *puVar1;pauVar37 = pauVar43;while (uVar38 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar38 * lVar47;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar52;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( uVar40 + iVar45 ) - SUB164(auVar14 * auVar30, 8)) * lVar47;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar52;
   uVar55 = SUB164(auVar15 * auVar31, 8);
   pauVar56 = pauVar37;
   if (uVar55 < uVar54) {
      *puVar1 = uVar39;
      puVar2 = (undefined8*)( lVar48 + lStack_90 * 8 );
      pauVar56 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar37;
      uVar39 = uVar38;
      uVar54 = uVar55;
   }

   uVar54 = uVar54 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar45 + 1) * lVar47;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar52;
   lStack_90 = SUB168(auVar16 * auVar32, 8);
   puVar1 = (uint*)( lVar53 + lStack_90 * 4 );
   iVar45 = SUB164(auVar16 * auVar32, 8);
   pauVar37 = pauVar56;
   uVar38 = *puVar1;
}
;*(undefined1(**) [16])( lVar48 + lStack_90 * 8 ) = pauVar37;*puVar1 = uVar39;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00110ff4:auVar58._8_8_ = lStack_90;auVar58._0_8_ = pauVar43[1] + 8;return auVar58;}/* Callable create_custom_callable_function_pointer<EditorBuildProfileManager,
   int>(EditorBuildProfileManager*, char const*, void (EditorBuildProfileManager::*)(int)) */EditorBuildProfileManager *create_custom_callable_function_pointer<EditorBuildProfileManager,int>(EditorBuildProfileManager *param_1, char *param_2, _func_void_int *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC3;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011ef20;
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
/* Callable Callable::bind<EditorBuildProfileManager::Action>(EditorBuildProfileManager::Action)
   const */Variant **Callable::bind<EditorBuildProfileManager::Action>(Variant **param_1, int param_2, int param_3) {
   char cVar1;
   long in_FS_OFFSET;
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_58, param_3);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   Callable::bindp(param_1, param_2);
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

   if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* Callable
   create_custom_callable_function_pointer<EditorBuildProfileManager>(EditorBuildProfileManager*,
   char const*, void (EditorBuildProfileManager::*)()) */EditorBuildProfileManager *create_custom_callable_function_pointer<EditorBuildProfileManager>(EditorBuildProfileManager *param_1, char *param_2, _func_void *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC3;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011efb0;
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
/* Callable create_custom_callable_function_pointer<EditorBuildProfileManager, String
   const&>(EditorBuildProfileManager*, char const*, void (EditorBuildProfileManager::*)(String
   const&)) */EditorBuildProfileManager *create_custom_callable_function_pointer<EditorBuildProfileManager,String_const&>(EditorBuildProfileManager *param_1, char *param_2, _func_void_String_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC3;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_0011f0d0;
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
/* EditorBuildProfile::_get_build_option_name(EditorBuildProfile::BuildOption) */EditorBuildProfile *EditorBuildProfile::_get_build_option_name(EditorBuildProfile *param_1, undefined8 param_2, undefined4 param_3) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   get_build_option_name(param_1, param_3);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* JSON::_initialize_classv() */void JSON::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_70;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
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

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
            if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
            if ((code*)PTR__bind_methods_00125050 != RefCounted::_bind_methods) {
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

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         Resource::_bind_methods();
         Resource::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "Resource";
      local_68 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "JSON";
      local_70 = 0;
      local_50 = 4;
      String::parse_latin1((StrRange*)&local_70);
      StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
      ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_60);
      if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if ((code*)PTR__bind_methods_00125048 != Resource::_bind_methods) {
         JSON::_bind_methods();
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
/* WARNING: Removing unreachable block (ram,0x00111b38) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* EditorBuildProfile::~EditorBuildProfile() */void EditorBuildProfile::~EditorBuildProfile(EditorBuildProfile *this) {
   long lVar1;
   void *pvVar2;
   *(undefined***)this = &PTR__initialize_classv_0011e970;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1d0 ));
   pvVar2 = *(void**)( this + 0x1a8 );
   if (pvVar2 != (void*)0x0) {
      if (*(int*)( this + 0x1cc ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1c8 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x1c0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1c8 ) * 4 ) << 2);
            if (*(int*)( this + 0x1cc ) == 0) goto LAB_00111e80;
         }

         lVar1 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + lVar1 * 8 ) != 0 )) {
               StringName::unref();
               pvVar2 = *(void**)( this + 0x1a8 );
            }

            lVar1 = lVar1 + 1;
         }
 while ( (uint)lVar1 < *(uint*)( this + 0x1cc ) );
         *(undefined4*)( this + 0x1cc ) = 0;
         if (pvVar2 == (void*)0x0) goto LAB_00111dce;
      }

      LAB_00111e80:Memory::free_static(pvVar2, false);
      Memory::free_static(*(void**)( this + 0x1b8 ), false);
      Memory::free_static(*(void**)( this + 0x1b0 ), false);
      Memory::free_static(*(void**)( this + 0x1c0 ), false);
   }

   LAB_00111dce:pvVar2 = *(void**)( this + 0x180 );
   if (pvVar2 == (void*)0x0) goto LAB_00111e62;
   if (*(int*)( this + 0x1a4 ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x198 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) << 2);
         if (*(int*)( this + 0x1a4 ) == 0) goto LAB_00111ec0;
      }

      lVar1 = 0;
      do {
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + lVar1 * 8 ) != 0 )) {
            StringName::unref();
            pvVar2 = *(void**)( this + 0x180 );
         }

         lVar1 = lVar1 + 1;
      }
 while ( (uint)lVar1 < *(uint*)( this + 0x1a4 ) );
      *(undefined4*)( this + 0x1a4 ) = 0;
      if (pvVar2 == (void*)0x0) goto LAB_00111e62;
   }

   LAB_00111ec0:Memory::free_static(pvVar2, false);
   Memory::free_static(*(void**)( this + 400 ), false);
   Memory::free_static(*(void**)( this + 0x188 ), false);
   Memory::free_static(*(void**)( this + 0x198 ), false);
   LAB_00111e62:*(undefined***)this = &PTR__initialize_classv_0011e120;
   Object::~Object((Object*)this);
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
            if (pvVar5 == (void*)0x0) goto LAB_001120d4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001120d4:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<EditorBuildProfileManager,void>::call(CallableCustomMethodPointer<EditorBuildProfileManager,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_0011231f;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_0011231f;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x001122f8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_001123e1;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0011231f:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC147, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_001123e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, Object*>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*>::call(CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   Object *pOVar6;
   Object *pOVar7;
   uint uVar8;
   ulong *puVar9;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar10;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar3 << 8 );
         LOCK();
         bVar10 = (char)ObjectDB::spin_lock == '\0';
         if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar10) break;
         local_58 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_001125d9;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] == 0) goto LAB_001125d9;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 0x18);
            if (cVar5 == '\0') {
               LAB_00112530:uVar4 = _LC148;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }
 else {
               this_00 = *param_1;
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               pOVar7 = Variant::operator_cast_to_Object_(this_00);
               if (( pOVar7 == (Object*)0x0 ) && ( pOVar6 != (Object*)0x0 )) goto LAB_00112530;
            }

            pOVar6 = Variant::operator_cast_to_Object_(*param_1);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00112577. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar6);
               return;
            }

            goto LAB_0011269b;
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
      LAB_001125d9:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC147, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011269b:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, int>::call(Variant const**, int,
   Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<EditorBuildProfileManager,void,int>::call(CallableCustomMethodPointer<EditorBuildProfileManager,void,int> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_00112858;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar8[1] == 0) goto LAB_00112858;
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
            uVar4 = _LC149;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00112807. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6);
               return;
            }

            goto LAB_0011291a;
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
      LAB_00112858:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC147, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0011291a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorBuildProfileManager, void, String const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&>::call(CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
                  uVar4 = _LC150;
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

            goto LAB_001129ee;
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
   _err_print_error(&_LC147, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (Variant*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_001129ee:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* EditorBuildProfile::~EditorBuildProfile() */void EditorBuildProfile::~EditorBuildProfile(EditorBuildProfile *this) {
   long lVar1;
   void *pvVar2;
   *(undefined***)this = &PTR__initialize_classv_0011e970;
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 0x1d0 ));
   pvVar2 = *(void**)( this + 0x1a8 );
   if (pvVar2 != (void*)0x0) {
      if (*(int*)( this + 0x1cc ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1c8 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x1c0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1c8 ) * 4 ) << 2);
            if (*(int*)( this + 0x1cc ) == 0) goto LAB_00112d08;
         }

         lVar1 = 0;
         do {
            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + lVar1 * 8 ) != 0 )) {
               StringName::unref();
               pvVar2 = *(void**)( this + 0x1a8 );
            }

            lVar1 = lVar1 + 1;
         }
 while ( (uint)lVar1 < *(uint*)( this + 0x1cc ) );
         *(undefined4*)( this + 0x1cc ) = 0;
         if (pvVar2 == (void*)0x0) goto LAB_00112c4e;
      }

      LAB_00112d08:Memory::free_static(pvVar2, false);
      Memory::free_static(*(void**)( this + 0x1b8 ), false);
      Memory::free_static(*(void**)( this + 0x1b0 ), false);
      Memory::free_static(*(void**)( this + 0x1c0 ), false);
   }

   LAB_00112c4e:pvVar2 = *(void**)( this + 0x180 );
   if (pvVar2 == (void*)0x0) goto LAB_00112ce2;
   if (*(int*)( this + 0x1a4 ) != 0) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x198 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) << 2);
         if (*(int*)( this + 0x1a4 ) == 0) goto LAB_00112d48;
      }

      lVar1 = 0;
      do {
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + lVar1 * 8 ) != 0 )) {
            StringName::unref();
            pvVar2 = *(void**)( this + 0x180 );
         }

         lVar1 = lVar1 + 1;
      }
 while ( (uint)lVar1 < *(uint*)( this + 0x1a4 ) );
      *(undefined4*)( this + 0x1a4 ) = 0;
      if (pvVar2 == (void*)0x0) goto LAB_00112ce2;
   }

   LAB_00112d48:Memory::free_static(pvVar2, false);
   Memory::free_static(*(void**)( this + 400 ), false);
   Memory::free_static(*(void**)( this + 0x188 ), false);
   Memory::free_static(*(void**)( this + 0x198 ), false);
   LAB_00112ce2:*(undefined***)this = &PTR__initialize_classv_0011e120;
   Object::~Object((Object*)this);
   operator_delete(this, 0x1e8);
   return;
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
      if ((code*)PTR__bind_methods_00125058 != Object::_bind_methods) {
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
                     if ((code*)PTR__bind_methods_00125050 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_00125060 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
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
         if ((code*)PTR__bind_methods_00125068 != Container::_bind_methods) {
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
                     if ((code*)PTR__bind_methods_00125050 != Node::_bind_methods) {
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
                  if ((code*)PTR__bind_compatibility_methods_00125060 != Object::_bind_compatibility_methods) {
                     CanvasItem::_bind_compatibility_methods();
                  }

                  CanvasItem::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "CanvasItem";
               local_68 = 0;
               local_50 = 10;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Control";
               local_70 = 0;
               local_50 = 7;
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
         if ((code*)PTR__bind_methods_00125068 != Container::_bind_methods) {
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
   local_78 = &_LC22;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC22;
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

         goto LAB_00113cbc;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00113cbc:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

         goto LAB_00113f0c;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00113f0c:List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

         goto LAB_00114171;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00114171:local_b0 = (CowData<char32_t>*)&local_58;
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
/* EditorBuildProfile::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorBuildProfile::_get_property_listv(EditorBuildProfile *this, List *param_1, bool param_2) {
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
   local_78 = "EditorBuildProfile";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorBuildProfile";
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

         goto LAB_00114421;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00114421:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "EditorBuildProfile", false);
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
/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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

         goto LAB_001146d1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001146d1:local_b0 = (CowData<char32_t>*)&local_58;
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
/* JSON::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void JSON::_get_property_listv(JSON *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   CowData<char32_t> *local_b0;
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
   if (!param_2) {
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC17;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC17;
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

         goto LAB_00114981;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00114981:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "JSON", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
      StringName::unref();
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

         goto LAB_00114c31;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00114c31:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00125070 != Object::_get_property_list) {
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

         goto LAB_00114f01;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00114f01:local_b0 = (CowData<char32_t>*)&local_58;
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
/* EditorBuildProfileManager::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const
    */void EditorBuildProfileManager::_get_property_listv(EditorBuildProfileManager *this, List *param_1, bool param_2) {
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
   local_78 = "EditorBuildProfileManager";
   local_70 = 0x19;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorBuildProfileManager";
   local_98 = 0;
   local_70 = 0x19;
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

         goto LAB_001151b1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_001151b1:local_b0 = (CowData<char32_t>*)&local_58;
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

   StringName::StringName((StringName*)&local_78, "EditorBuildProfileManager", false);
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

         goto LAB_00115461;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00115461:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00125078 != Object::_get_property_list) {
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

         goto LAB_00115731;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00115731:local_b0 = (CowData<char32_t>*)&local_58;
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

   if ((code*)PTR__get_property_list_00125080 != CanvasItem::_get_property_list) {
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

         goto LAB_00115a01;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00115a01:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_00115cb1;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00115cb1:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_00115f61;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00115f61:local_b0 = (CowData<char32_t>*)&local_58;
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

         goto LAB_00116211;
      }

   }

   local_50 = 0x80;
   StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   LAB_00116211:local_b0 = (CowData<char32_t>*)&local_58;
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
/* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::_lookup_pos(HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *this, StringName *param_1, uint *param_2) {
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
   ulong uVar14;
   uint uVar15;
   uint uVar16;
   if (*(long*)this == 0) {
      return 0;
   }

   if (*(int*)( this + 0x24 ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      }
 else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar14 = CONCAT44(0, uVar1);
      if (uVar11 == 0) {
         uVar11 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar14;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( this + 0x18 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar15 = 0;
         do {
            if (( uVar11 == uVar16 ) && ( uVar16 = *(uint*)( *(long*)( this + 8 ) + lVar13 * 4 ) * (long*)( *(long*)this + (ulong)uVar16 * 8 ) == *(long*)param_1 )) {
               *param_2 = uVar16;
               return 1;
            }

            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar14;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x18 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar16 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar14,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar14,uVar15 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */StringName *HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(StringName *param_1) {
   uint uVar1;
   void *pvVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
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
   char cVar22;
   uint uVar23;
   ulong uVar24;
   undefined8 uVar25;
   long lVar26;
   long lVar27;
   long lVar28;
   int iVar29;
   StringName *in_RDX;
   ulong uVar30;
   HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>> *in_RSI;
   uint uVar31;
   ulong uVar32;
   undefined4 uVar33;
   uint uVar34;
   ulong uVar35;
   uint uVar36;
   uint *puVar37;
   long in_FS_OFFSET;
   uint local_98;
   long local_78;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
   if (*(long*)in_RSI == 0) {
      uVar24 = (ulong)uVar23 * 4;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( in_RSI + 0x18 ) = uVar25;
      uVar25 = Memory::alloc_static((ulong)uVar23 * 8, false);
      *(undefined8*)in_RSI = uVar25;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( in_RSI + 0x10 ) = uVar25;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( in_RSI + 8 ) = uVar25;
      if (uVar23 != 0) {
         memset(*(void**)( in_RSI + 0x18 ), 0, uVar24);
      }

   }

   local_44 = 0;
   cVar22 = _lookup_pos(in_RSI, in_RDX, &local_44);
   if (cVar22 != '\0') {
      iVar29 = *(int*)( in_RSI + 0x24 );
      uVar23 = local_44;
      goto LAB_001168c3;
   }

   if ((float)( *(int*)( in_RSI + 0x24 ) + 1 ) <= (float)uVar23 * __LC42) {
      lVar26 = *(long*)in_RDX;
      if (lVar26 != 0) goto LAB_001167a6;
      LAB_0011691a:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (*(int*)( in_RSI + 0x20 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar29 = *(int*)( in_RSI + 0x24 );
         uVar23 = 0xffffffff;
         goto LAB_001168c3;
      }

      uVar23 = *(int*)( in_RSI + 0x20 ) + 1;
      uVar24 = (ulong)uVar23;
      if (uVar23 < 2) {
         uVar24 = 2;
      }

      uVar23 = *(uint*)( hash_table_size_primes + uVar24 * 4 );
      *(int*)( in_RSI + 0x20 ) = (int)uVar24;
      pvVar2 = *(void**)( in_RSI + 0x18 );
      uVar24 = (ulong)uVar23 * 4;
      pvVar3 = *(void**)( in_RSI + 0x10 );
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( in_RSI + 0x18 ) = uVar25;
      uVar25 = Memory::realloc_static(*(void**)in_RSI, (ulong)uVar23 * 8, false);
      *(undefined8*)in_RSI = uVar25;
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( in_RSI + 0x10 ) = uVar25;
      lVar26 = Memory::realloc_static(*(void**)( in_RSI + 8 ), uVar24, false);
      *(long*)( in_RSI + 8 ) = lVar26;
      if (uVar23 != 0) {
         memset(*(void**)( in_RSI + 0x18 ), 0, uVar24);
      }

      if (*(int*)( in_RSI + 0x24 ) != 0) {
         uVar24 = 0;
         lVar4 = *(long*)( in_RSI + 0x18 );
         lVar5 = *(long*)( in_RSI + 0x10 );
         do {
            uVar35 = uVar24 & 0xffffffff;
            uVar33 = (undefined4)uVar24;
            uVar36 = 0;
            uVar23 = *(uint*)( (long)pvVar2 + ( ulong ) * (uint*)( (long)pvVar3 + uVar24 * 4 ) * 4 );
            uVar30 = (ulong)uVar23;
            uVar34 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
            uVar32 = CONCAT44(0, uVar34);
            lVar27 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 8 );
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar30 * lVar27;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar32;
            lVar28 = SUB168(auVar6 * auVar14, 8) * 4;
            iVar29 = SUB164(auVar6 * auVar14, 8);
            puVar37 = (uint*)( lVar4 + lVar28 );
            uVar1 = *puVar37;
            if (uVar1 == 0) {
               lVar27 = uVar24 * 4;
            }
 else {
               do {
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar1 * lVar27;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar32;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(( uVar34 + iVar29 ) - SUB164(auVar7 * auVar15, 8)) * lVar27;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar32;
                  local_98 = SUB164(auVar8 * auVar16, 8);
                  if (local_98 < uVar36) {
                     *(int*)( lVar5 + uVar35 * 4 ) = iVar29;
                     uVar23 = *puVar37;
                     *puVar37 = (uint)uVar30;
                     uVar1 = *(uint*)( lVar28 + lVar26 );
                     uVar30 = (ulong)uVar23;
                     *(uint*)( lVar28 + lVar26 ) = (uint)uVar35;
                     uVar35 = (ulong)uVar1;
                     uVar36 = local_98;
                  }

                  uVar33 = (undefined4)uVar35;
                  uVar23 = (uint)uVar30;
                  uVar36 = uVar36 + 1;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = ( ulong )(iVar29 + 1) * lVar27;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar32;
                  lVar28 = SUB168(auVar9 * auVar17, 8) * 4;
                  iVar29 = SUB164(auVar9 * auVar17, 8);
                  puVar37 = (uint*)( lVar4 + lVar28 );
                  uVar1 = *puVar37;
               }
 while ( uVar1 != 0 );
               lVar27 = uVar35 << 2;
            }

            *puVar37 = uVar23;
            uVar24 = uVar24 + 1;
            *(int*)( lVar5 + lVar27 ) = iVar29;
            *(undefined4*)( lVar26 + lVar28 ) = uVar33;
         }
 while ( (uint)uVar24 < *(uint*)( in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar2, false);
      Memory::free_static(pvVar3, false);
      lVar26 = *(long*)in_RDX;
      if (lVar26 == 0) goto LAB_0011691a;
      LAB_001167a6:uVar23 = *(uint*)( lVar26 + 0x20 );
   }

   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar24 = (ulong)uVar23;
   StringName::StringName((StringName*)( *(long*)in_RSI + ( ulong ) * (uint*)( in_RSI + 0x24 ) * 8 ), in_RDX);
   uVar34 = *(uint*)( in_RSI + 0x24 );
   lVar4 = *(long*)( in_RSI + 0x18 );
   uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 4 );
   uVar30 = CONCAT44(0, uVar1);
   lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x20 ) * 8 );
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar24 * lVar5;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar30;
   lVar26 = SUB168(auVar10 * auVar18, 8) * 4;
   iVar29 = SUB164(auVar10 * auVar18, 8);
   puVar37 = (uint*)( lVar4 + lVar26 );
   uVar36 = *puVar37;
   if (uVar36 == 0) {
      local_78 = *(long*)( in_RSI + 0x10 );
      lVar28 = *(long*)( in_RSI + 8 );
   }
 else {
      uVar31 = 0;
      local_78 = *(long*)( in_RSI + 0x10 );
      lVar28 = *(long*)( in_RSI + 8 );
      do {
         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar36 * lVar5;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar30;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(( uVar1 + iVar29 ) - SUB164(auVar11 * auVar19, 8)) * lVar5;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar30;
         local_98 = SUB164(auVar12 * auVar20, 8);
         if (local_98 < uVar31) {
            *(int*)( local_78 + (ulong)uVar34 * 4 ) = iVar29;
            uVar23 = *puVar37;
            *puVar37 = (uint)uVar24;
            uVar36 = *(uint*)( lVar26 + lVar28 );
            uVar24 = (ulong)uVar23;
            *(uint*)( lVar26 + lVar28 ) = uVar34;
            uVar34 = uVar36;
            uVar31 = local_98;
         }

         uVar23 = (uint)uVar24;
         uVar31 = uVar31 + 1;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(iVar29 + 1) * lVar5;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar30;
         lVar26 = SUB168(auVar13 * auVar21, 8) * 4;
         iVar29 = SUB164(auVar13 * auVar21, 8);
         puVar37 = (uint*)( lVar4 + lVar26 );
         uVar36 = *puVar37;
      }
 while ( uVar36 != 0 );
   }

   *puVar37 = uVar23;
   *(int*)( local_78 + (ulong)uVar34 * 4 ) = iVar29;
   *(uint*)( lVar28 + lVar26 ) = uVar34;
   uVar23 = *(uint*)( in_RSI + 0x24 );
   iVar29 = uVar23 + 1;
   *(int*)( in_RSI + 0x24 ) = iVar29;
   LAB_001168c3:*(undefined8*)param_1 = *(undefined8*)in_RSI;
   *(int*)( param_1 + 8 ) = iVar29;
   *(uint*)( param_1 + 0xc ) = uVar23;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* EditorBuildProfileManager::_notificationv(int, bool) */void EditorBuildProfileManager::_notificationv(EditorBuildProfileManager *this, int param_1, bool param_2) {
   int iVar1;
   iVar1 = (int)this;
   if (param_2) {
      if (param_1 == 0xd) {
         _notification(iVar1);
      }

      if ((code*)PTR__notification_00125088 != Window::_notification) {
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

   if ((code*)PTR__notification_00125088 != Window::_notification) {
      AcceptDialog::_notification(iVar1);
   }

   if (param_1 != 0xd) {
      return;
   }

   _notification(iVar1);
   return;
}
/* MethodBind* create_method_bind<EditorBuildProfile, StringName const&, bool>(void
   (EditorBuildProfile::*)(StringName const&, bool)) */MethodBind *create_method_bind<EditorBuildProfile,StringName_const&,bool>(_func_void_StringName_ptr_bool *param_1) {
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
   *(_func_void_StringName_ptr_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f160;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "EditorBuildProfile";
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
/* MethodBind* create_method_bind<EditorBuildProfile, bool, StringName const&>(bool
   (EditorBuildProfile::*)(StringName const&) const) */MethodBind *create_method_bind<EditorBuildProfile,bool,StringName_const&>(_func_bool_StringName_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f1c0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorBuildProfile";
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
/* MethodBind* create_method_bind<EditorBuildProfile, EditorBuildProfile::BuildOption, bool>(void
   (EditorBuildProfile::*)(EditorBuildProfile::BuildOption, bool)) */MethodBind *create_method_bind<EditorBuildProfile,EditorBuildProfile::BuildOption,bool>(_func_void_BuildOption_bool *param_1) {
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
   *(_func_void_BuildOption_bool**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f220;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "EditorBuildProfile";
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
/* MethodBind* create_method_bind<EditorBuildProfile, bool, EditorBuildProfile::BuildOption>(bool
   (EditorBuildProfile::*)(EditorBuildProfile::BuildOption) const) */MethodBind *create_method_bind<EditorBuildProfile,bool,EditorBuildProfile::BuildOption>(_func_bool_BuildOption *param_1) {
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
   *(_func_bool_BuildOption**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f280;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorBuildProfile";
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
/* MethodBind* create_method_bind<EditorBuildProfile, String,
   EditorBuildProfile::BuildOption>(String (EditorBuildProfile::*)(EditorBuildProfile::BuildOption))
    */MethodBind *create_method_bind<EditorBuildProfile,String,EditorBuildProfile::BuildOption>(_func_String_BuildOption *param_1) {
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
   *(_func_String_BuildOption**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f2e0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorBuildProfile";
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
/* MethodBind* create_method_bind<EditorBuildProfile, Error, String const&>(Error
   (EditorBuildProfile::*)(String const&)) */MethodBind *create_method_bind<EditorBuildProfile,Error,String_const&>(_func_Error_String_ptr *param_1) {
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
   *(_func_Error_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011f340;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorBuildProfile";
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
/* MethodBind* create_method_bind<EditorBuildProfileManager>(void (EditorBuildProfileManager::*)())
    */MethodBind *create_method_bind<EditorBuildProfileManager>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011f3a0;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorBuildProfileManager";
   local_30 = 0x19;
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
/* EditorBuildProfileManager::_bind_methods() [clone .cold] */void EditorBuildProfileManager::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorBuildProfile::_bind_methods() [clone .cold] */void EditorBuildProfile::_bind_methods(void) {
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
/* EditorBuildProfileManager::_initialize_classv() */void EditorBuildProfileManager::_initialize_classv(void) {
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
                  if ((code*)PTR__bind_methods_00125050 != Node::_bind_methods) {
                     Node::_bind_methods();
                  }

                  Node::initialize_class()::initialized =
                  '\x01';
               }

               local_58 = "Node";
               local_68 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_68);
               StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
               local_58 = "Viewport";
               local_70 = 0;
               local_50 = 8;
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
               Viewport::_bind_methods();
               Viewport::initialize_class()::initialized =
               '\x01';
            }

            local_68 = 0;
            local_58 = "Viewport";
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

         local_58 = "Window";
         local_68 = 0;
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
         if ((code*)PTR__bind_methods_00125090 != Window::_bind_methods) {
            AcceptDialog::_bind_methods();
         }

         if ((code*)PTR__bind_compatibility_methods_00125098 != Object::_bind_compatibility_methods) {
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
      local_58 = "EditorBuildProfileManager";
      local_70 = 0;
      local_50 = 0x19;
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
   code *pcVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   undefined8 local_60;
   char local_58[8];
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x1179ea);
   if (( local_50 != 0 ) && ( 2 < *(long*)( local_50 + -8 ) )) {
      local_60 = 0;
      local_48 = &_LC84;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == 0) {
         lVar3 = 0;
         lVar2 = -2;
      }
 else {
         lVar3 = *(long*)( local_50 + -8 );
         lVar2 = lVar3 + -2;
         if (-1 < lVar2) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar2 * 8 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_00117ab4;
         }

      }

      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar2, lVar3, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   local_60 = 0;
   local_48 = &_LC84;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00117ab4:CowData<String>::_unref((CowData<String>*)&local_50);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GetTypeInfo<EditorBuildProfile::BuildOption, void>::get_class_info() */GetTypeInfo<EditorBuildProfile::BuildOption,void> * __thiscall
GetTypeInfo<EditorBuildProfile::BuildOption,void>::get_class_info
          (GetTypeInfo<EditorBuildProfile::BuildOption,void> *this){
   long in_FS_OFFSET;
   undefined8 local_68;
   undefined8 local_60;
   undefined8 local_58;
   details local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_58 = 0;
   local_48 = "EditorBuildProfile::BuildOption";
   local_40 = 0x1f;
   String::parse_latin1((StrRange*)&local_58);
   godot::details::enum_qualified_name_to_class_info_name(local_50, (String*)&local_58);
   StringName::StringName((StringName*)&local_48, (String*)local_50, false);
   *(undefined4*)this = 2;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined4*)( this + 0x28 ) = 0x10006;
   *(undefined1(*) [16])( this + 8 ) = (undefined1[16])0x0;
   local_60 = 0;
   local_68 = 0;
   StringName::operator =((StringName*)( this + 0x10 ), (StringName*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<String, EditorBuildProfile::BuildOption>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<String,EditorBuildProfile::BuildOption>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   long local_a0;
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
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_70 = 6;
      local_78 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      GetTypeInfo<EditorBuildProfile::BuildOption,void>::get_class_info((GetTypeInfo<EditorBuildProfile::BuildOption,void>*)&local_68);
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
      goto LAB_00117f20;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC3;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 4;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00117ee7:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00117ee7;
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

   LAB_00117f20:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,EditorBuildProfile::BuildOption>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_a8;
   long local_a0;
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
   local_98 = 0;
   if (in_EDX == 0) {
      local_80 = 0;
      local_70 = 6;
      local_78 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      GetTypeInfo<EditorBuildProfile::BuildOption,void>::get_class_info((GetTypeInfo<EditorBuildProfile::BuildOption,void>*)&local_68);
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
      goto LAB_001181a0;
   }

   local_a0 = 0;
   local_60 = 0;
   local_68 = &_LC3;
   String::parse_latin1((StrRange*)&local_a0);
   local_a8 = 0;
   *puVar4 = 1;
   puVar4[6] = 0;
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   if (local_a0 == 0) {
      puVar4[10] = 6;
      LAB_00118167:StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_98);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_a0);
      puVar4[10] = 6;
      if (puVar4[6] != 0x11) goto LAB_00118167;
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

   LAB_001181a0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Error,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_b0;
   undefined8 local_a8;
   long local_a0;
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
   if (in_EDX == 0) {
      local_98 = 0;
      local_90._0_8_ = 0;
      local_90._8_8_ = 0;
      local_70 = 6;
      local_80 = 0;
      local_78 = 0;
      local_a0 = 0;
      local_a8 = 0;
      local_68 = "";
      local_60 = 0;
      String::parse_latin1((StrRange*)&local_a8);
      local_b0 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_68, 4, (CowData<char32_t>*)&local_b0, 0, (StrRange*)&local_a8, 6, &local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

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
      local_68 = "Error";
      local_60 = 5;
      String::parse_latin1((StrRange*)&local_a0);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_98, (String*)&local_a0);
      StringName::StringName((StringName*)&local_68, (String*)&local_98, false);
      *puVar4 = 2;
      puVar4[6] = 0;
      *(undefined8*)( puVar4 + 8 ) = 0;
      puVar4[10] = 0x10006;
      *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
      local_a8 = 0;
      local_b0 = 0;
      StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorBuildProfile::_initialize_classv() */void EditorBuildProfile::_initialize_classv(void) {
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
         if ((code*)PTR__bind_methods_00125058 != Object::_bind_methods) {
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
      local_48 = "EditorBuildProfile";
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
/* MethodBindT<EditorBuildProfile::BuildOption, bool>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<EditorBuildProfile::BuildOption,bool>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   long local_a0;
   details local_98[8];
   undefined8 local_90;
   undefined8 local_88;
   long local_80;
   char *local_78;
   long local_70;
   long local_68;
   undefined4 local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_90 = 0;
      local_70 = 0x1f;
      local_78 = "EditorBuildProfile::BuildOption";
      String::parse_latin1((StrRange*)&local_90);
      godot::details::enum_qualified_name_to_class_info_name(local_98, (String*)&local_90);
      StringName::StringName((StringName*)&local_a0, (String*)local_98, false);
      local_88 = 0;
      local_80 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 2, (CowData<char32_t>*)&local_80, 0, (CowData<char32_t>*)&local_88, 0x10006, (StringName*)&local_a0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   }
 else {
      if (in_EDX != 1) goto LAB_0011875d;
      local_80 = 0;
      local_88 = 0;
      local_78 = "";
      local_70 = 0;
      String::parse_latin1((StrRange*)&local_88);
      local_90 = 0;
      PropertyInfo::PropertyInfo((PropertyInfo*)&local_78, 1, (CowData<char32_t>*)&local_90, 0, (StrRange*)&local_88, 6, &local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   *puVar2 = local_78._0_4_;
   if (*(long*)( puVar2 + 2 ) != local_70) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
      lVar1 = local_70;
      local_70 = 0;
      *(long*)( puVar2 + 2 ) = lVar1;
   }

   if (*(long*)( puVar2 + 4 ) != local_68) {
      StringName::unref();
      lVar1 = local_68;
      local_68 = 0;
      *(long*)( puVar2 + 4 ) = lVar1;
   }

   puVar2[6] = local_60;
   if (*(long*)( puVar2 + 8 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
      lVar1 = local_58;
      local_58 = 0;
      *(long*)( puVar2 + 8 ) = lVar1;
   }

   puVar2[10] = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   LAB_0011875d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, EditorBuildProfileManager::DetectedFile, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   EditorBuildProfileManager::DetectedFile> > >::insert(String const&,
   EditorBuildProfileManager::DetectedFile const&, bool) */String * HashMap<String,EditorBuildProfileManager::DetectedFile,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,EditorBuildProfileManager::DetectedFile>>>
         ::insert(String *param_1,DetectedFile *param_2,bool param_3){
   uint *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
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
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   long *plVar28;
   char cVar29;
   uint uVar30;
   ulong uVar31;
   undefined8 uVar32;
   void *__s_00;
   long *plVar33;
   void *pvVar34;
   undefined4 *in_RCX;
   int iVar35;
   uint uVar36;
   undefined7 in_register_00000011;
   String *pSVar37;
   long lVar38;
   long lVar39;
   uint uVar40;
   ulong uVar41;
   undefined8 uVar42;
   long lVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   ulong uVar46;
   long lVar47;
   uint uVar48;
   long *plVar49;
   long in_FS_OFFSET;
   uint local_d8;
   long local_68;
   undefined4 local_60;
   long local_58[2];
   long local_48;
   long local_40;
   pSVar37 = (String*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar41 = (ulong)uVar40;
      uVar31 = uVar41 * 4;
      uVar46 = uVar41 * 8;
      uVar32 = Memory::alloc_static(uVar31, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar32;
      pvVar34 = (void*)Memory::alloc_static(uVar46, false);
      *(void**)( param_2 + 8 ) = pvVar34;
      if (uVar40 != 0) {
         pvVar3 = *(void**)( param_2 + 0x10 );
         if (( pvVar3 < (void*)( (long)pvVar34 + uVar46 ) ) && ( pvVar34 < (void*)( (long)pvVar3 + uVar31 ) )) {
            uVar31 = 0;
            do {
               *(undefined4*)( (long)pvVar3 + uVar31 * 4 ) = 0;
               *(undefined8*)( (long)pvVar34 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar41 != uVar31 );
         }
 else {
            memset(pvVar3, 0, uVar31);
            memset(pvVar34, 0, uVar46);
         }

         goto LAB_00118a58;
      }

      iVar35 = *(int*)( param_2 + 0x2c );
      if (pvVar34 == (void*)0x0) goto LAB_00118a6b;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00118f40;
      LAB_00118a91:uVar40 = *(uint*)( param_2 + 0x28 );
      if (uVar40 == 0x1c) {
         plVar33 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00118ee7;
      }

      uVar31 = ( ulong )(uVar40 + 1);
      uVar30 = *(uint*)( hash_table_size_primes + (ulong)uVar40 * 4 );
      *(undefined4*)( param_2 + 0x2c ) = 0;
      if (uVar40 + 1 < 2) {
         uVar31 = 2;
      }

      uVar40 = *(uint*)( hash_table_size_primes + uVar31 * 4 );
      uVar41 = (ulong)uVar40;
      *(int*)( param_2 + 0x28 ) = (int)uVar31;
      pvVar34 = *(void**)( param_2 + 8 );
      uVar31 = uVar41 * 4;
      pvVar3 = *(void**)( param_2 + 0x10 );
      uVar32 = Memory::alloc_static(uVar31, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar32;
      uVar46 = uVar41 * 8;
      __s_00 = (void*)Memory::alloc_static(uVar46, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar40 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar46 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
            uVar31 = 0;
            do {
               *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar31 != uVar41 );
         }
 else {
            memset(__s, 0, uVar31);
            memset(__s_00, 0, uVar46);
         }

      }

      if (uVar30 != 0) {
         uVar31 = 0;
         do {
            uVar40 = *(uint*)( (long)pvVar3 + uVar31 * 4 );
            if (uVar40 != 0) {
               uVar44 = 0;
               lVar43 = *(long*)( param_2 + 0x10 );
               uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar46 = CONCAT44(0, uVar36);
               lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar4._8_8_ = 0;
               auVar4._0_8_ = (ulong)uVar40 * lVar47;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar46;
               lVar38 = SUB168(auVar4 * auVar16, 8);
               puVar1 = (uint*)( lVar43 + lVar38 * 4 );
               iVar35 = SUB164(auVar4 * auVar16, 8);
               uVar45 = *puVar1;
               uVar32 = *(undefined8*)( (long)pvVar34 + uVar31 * 8 );
               while (uVar45 != 0) {
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar45 * lVar47;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar46;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(( uVar36 + iVar35 ) - SUB164(auVar5 * auVar17, 8)) * lVar47;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar46;
                  local_d8 = SUB164(auVar6 * auVar18, 8);
                  uVar42 = uVar32;
                  if (local_d8 < uVar44) {
                     *puVar1 = uVar40;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar38 * 8 );
                     uVar42 = *puVar2;
                     *puVar2 = uVar32;
                     uVar40 = uVar45;
                     uVar44 = local_d8;
                  }

                  uVar44 = uVar44 + 1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(iVar35 + 1) * lVar47;
                  auVar19._8_8_ = 0;
                  auVar19._0_8_ = uVar46;
                  lVar38 = SUB168(auVar7 * auVar19, 8);
                  puVar1 = (uint*)( lVar43 + lVar38 * 4 );
                  iVar35 = SUB164(auVar7 * auVar19, 8);
                  uVar32 = uVar42;
                  uVar45 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar38 * 8 ) = uVar32;
               *puVar1 = uVar40;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar31 = uVar31 + 1;
         }
 while ( uVar30 != uVar31 );
         Memory::free_static(pvVar34, false);
         Memory::free_static(pvVar3, false);
      }

   }
 else {
      LAB_00118a58:iVar35 = *(int*)( param_2 + 0x2c );
      if (iVar35 != 0) {
         LAB_00118f40:uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar45 = String::hash();
         uVar31 = CONCAT44(0, uVar30);
         lVar47 = *(long*)( param_2 + 0x10 );
         uVar36 = 1;
         if (uVar45 != 0) {
            uVar36 = uVar45;
         }

         uVar48 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar36 * lVar43;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar31;
         lVar38 = SUB168(auVar12 * auVar24, 8);
         uVar45 = *(uint*)( lVar47 + lVar38 * 4 );
         uVar44 = SUB164(auVar12 * auVar24, 8);
         if (uVar45 != 0) {
            do {
               if (uVar45 == uVar36) {
                  cVar29 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 8 ) + lVar38 * 8 ) + 0x10 ), pSVar37);
                  if (cVar29 != '\0') {
                     lVar43 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar44 * 8 );
                     *(undefined4*)( lVar43 + 0x18 ) = *in_RCX;
                     if (*(long*)( lVar43 + 0x20 ) != *(long*)( in_RCX + 2 )) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( lVar43 + 0x20 ), (CowData*)( in_RCX + 2 ));
                     }

                     if (*(long*)( lVar43 + 0x30 ) != *(long*)( in_RCX + 6 )) {
                        CowData<String>::_ref((CowData<String>*)( lVar43 + 0x30 ), (CowData*)( in_RCX + 6 ));
                     }

                     plVar33 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar44 * 8 );
                     goto LAB_00118ee7;
                  }

                  lVar47 = *(long*)( param_2 + 0x10 );
               }

               uVar48 = uVar48 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(uVar44 + 1) * lVar43;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar31;
               lVar38 = SUB168(auVar13 * auVar25, 8);
               uVar45 = *(uint*)( lVar47 + lVar38 * 4 );
               uVar44 = SUB164(auVar13 * auVar25, 8);
            }
 while ( ( uVar45 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar45 * lVar43,auVar26._8_8_ = 0,auVar26._0_8_ = uVar31,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar30 + uVar44 ) - SUB164(auVar14 * auVar26, 8)) * lVar43,auVar27._8_8_ = 0,auVar27._0_8_ = uVar31,uVar48 <= SUB164(auVar15 * auVar27, 8) );
         }

         iVar35 = *(int*)( param_2 + 0x2c );
      }

      LAB_00118a6b:if ((float)uVar40 * __LC42 < (float)( iVar35 + 1 )) goto LAB_00118a91;
   }

   local_68 = 0;
   if (*(long*)pSVar37 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)pSVar37);
   }

   local_60 = *in_RCX;
   local_58[0] = 0;
   if (*(long*)( in_RCX + 2 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)( in_RCX + 2 ));
   }

   local_48 = 0;
   lVar43 = *(long*)( in_RCX + 6 );
   if (*(long*)( in_RCX + 6 ) != 0) {
      CowData<String>::_ref((CowData<String>*)&local_48, (CowData*)( in_RCX + 6 ));
      lVar43 = local_48;
   }

   plVar33 = (long*)operator_new(0x38, "");
   plVar33[2] = 0;
   *plVar33 = 0;
   plVar33[1] = 0;
   if (local_68 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar33 + 2 ), (CowData*)&local_68);
   }

   plVar33[4] = 0;
   *(undefined4*)( plVar33 + 3 ) = local_60;
   if (local_58[0] != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar33 + 4 ), (CowData*)local_58);
   }

   plVar33[6] = 0;
   if (lVar43 != 0) {
      CowData<String>::_ref((CowData<String>*)( plVar33 + 6 ), (CowData*)&local_48);
   }

   CowData<String>::_unref((CowData<String>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar33;
      *(long**)( param_2 + 0x20 ) = plVar33;
   }
 else if (in_R8B == '\0') {
      *puVar2 = plVar33;
      plVar33[1] = (long)puVar2;
      *(long**)( param_2 + 0x20 ) = plVar33;
   }
 else {
      lVar43 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar43 + 8 ) = plVar33;
      *plVar33 = lVar43;
      *(long**)( param_2 + 0x18 ) = plVar33;
   }

   uVar30 = String::hash();
   uVar40 = 1;
   if (uVar30 != 0) {
      uVar40 = uVar30;
   }

   lVar43 = *(long*)( param_2 + 0x10 );
   uVar45 = 0;
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar31 = CONCAT44(0, uVar30);
   lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar8._8_8_ = 0;
   auVar8._0_8_ = (ulong)uVar40 * lVar47;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar31;
   lVar39 = SUB168(auVar8 * auVar20, 8);
   lVar38 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar43 + lVar39 * 4 );
   iVar35 = SUB164(auVar8 * auVar20, 8);
   uVar36 = *puVar1;
   plVar28 = plVar33;
   while (uVar36 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar36 * lVar47;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar31;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar30 + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar47;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar31;
      local_d8 = SUB164(auVar10 * auVar22, 8);
      plVar49 = plVar28;
      if (local_d8 < uVar45) {
         *puVar1 = uVar40;
         puVar2 = (undefined8*)( lVar38 + lVar39 * 8 );
         plVar49 = (long*)*puVar2;
         *puVar2 = plVar28;
         uVar45 = local_d8;
         uVar40 = uVar36;
      }

      uVar45 = uVar45 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar35 + 1) * lVar47;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar31;
      lVar39 = SUB168(auVar11 * auVar23, 8);
      puVar1 = (uint*)( lVar43 + lVar39 * 4 );
      iVar35 = SUB164(auVar11 * auVar23, 8);
      plVar28 = plVar49;
      uVar36 = *puVar1;
   }
;
   *(long**)( lVar38 + lVar39 * 8 ) = plVar28;
   *puVar1 = uVar40;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00118ee7:*(long**)param_1 = plVar33;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
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
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   undefined8 *puVar7;
   ulong uVar8;
   long lVar9;
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
      LAB_00119590:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar6 = param_1 * 8 - 1;
   uVar6 = uVar6 >> 1 | uVar6;
   uVar6 = uVar6 | uVar6 >> 2;
   uVar6 = uVar6 | uVar6 >> 4;
   uVar6 = uVar6 | uVar6 >> 8;
   uVar6 = uVar6 | uVar6 >> 0x10;
   uVar6 = uVar6 | uVar6 >> 0x20;
   lVar9 = uVar6 + 1;
   if (lVar9 == 0) goto LAB_00119590;
   uVar8 = param_1;
   if (param_1 <= lVar4) {
      while (lVar4 = *(long*)this,lVar4 != 0) {
         if (*(ulong*)( lVar4 + -8 ) <= uVar8) {
            if (lVar9 != lVar5) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
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

         CowData<char32_t>::_unref((CowData<char32_t>*)( lVar4 + uVar8 * 8 ));
         uVar8 = uVar8 + 1;
      }
;
      goto LAB_001195e6;
   }

   if (lVar9 == lVar5) {
      LAB_0011950b:puVar7 = *(undefined8**)this;
      if (puVar7 == (undefined8*)0x0) {
         LAB_001195e6:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar4 = puVar7[-1];
      if (param_1 <= lVar4) goto LAB_0011947f;
   }
 else {
      if (lVar4 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_0011950b;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar6 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar7 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar7;
      lVar4 = 0;
   }

   memset(puVar7 + lVar4, 0, ( param_1 - lVar4 ) * 8);
   LAB_0011947f:puVar7[-1] = param_1;
   return 0;
}
/* WARNING: Removing unreachable block (ram,0x00119718) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
         _err_print_error(&_LC147, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119a50;
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

   LAB_00119a50:*(undefined4*)param_1 = 0;
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

         goto LAB_00119e5f;
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
      /* WARNING: Could not recover jumptable at 0x00119d06. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00119e5f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0011a01f;
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
      /* WARNING: Could not recover jumptable at 0x00119ec6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_0011a01f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Error, String const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Error,String_const&>::validated_call(MethodBindTR<Error,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a07c;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_0011a07c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Error, String const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Error,String_const&>::ptrcall(MethodBindTR<Error,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011a258;
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
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_0011a258:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<String, EditorBuildProfile::BuildOption>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTR<String,EditorBuildProfile::BuildOption>::validated_call(MethodBindTR<String,EditorBuildProfile::BuildOption> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a462;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   if (*(char**)( param_3 + 8 ) != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_3 + 8 ), (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_0011a462:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<String, EditorBuildProfile::BuildOption>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTR<String,EditorBuildProfile::BuildOption>::ptrcall(MethodBindTR<String,EditorBuildProfile::BuildOption> *this, Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (CowData<char32_t>*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011a650;
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
   ( *pcVar1 )((CowData<char32_t>*)&local_48, param_1 + *(long*)( this + 0x60 ), **param_2);
   /* WARNING: Load size is inaccurate */
   if (*param_3 != local_48) {
      CowData<char32_t>::_ref((CowData<char32_t>*)param_3, (CowData*)&local_48);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   LAB_0011a650:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<bool,EditorBuildProfile::BuildOption>::validated_call(MethodBindTRC<bool,EditorBuildProfile::BuildOption> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011a818;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }

   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *(undefined4*)( *param_2 + 8 ));
   param_3[8] = VVar1;
   LAB_0011a818:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::ptrcall(Object*, void const**, void*) const
    */void MethodBindTRC<bool,EditorBuildProfile::BuildOption>::ptrcall(MethodBindTRC<bool,EditorBuildProfile::BuildOption> *this, Object *param_1, void **param_2, void *param_3) {
   undefined1 uVar1;
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

         goto LAB_0011a9f7;
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
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), **param_2);
   *(undefined1*)param_3 = uVar1;
   LAB_0011a9f7:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<EditorBuildProfile::BuildOption, bool>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<EditorBuildProfile::BuildOption,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011ad71;
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
      /* WARNING: Could not recover jumptable at 0x0011abf6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined4*)( *(long*)param_3 + 8 ), *(undefined1*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_0011ad71:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<EditorBuildProfile::BuildOption, bool>::ptrcall(Object*, void const**, void*) const
    */void MethodBindT<EditorBuildProfile::BuildOption,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011af61;
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
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x0011adea. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3, **(char**)( (long)param_3 + 8 ) != '\0');
      return;
   }

   LAB_0011af61:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_0011afb9;
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
   LAB_0011afb9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_0011b195;
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
   LAB_0011b195:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_0011b501;
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
      /* WARNING: Could not recover jumptable at 0x0011b387. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(undefined1*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }

   LAB_0011b501:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<StringName const&, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_0011b6f1;
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
      /* WARNING: Load size is inaccurate */
      /* WARNING: Could not recover jumptable at 0x0011b578. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, **(char**)( (long)param_3 + 8 ) != '\0');
      return;
   }

   LAB_0011b6f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<Error, String const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTR<Error,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC147, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011b8d0;
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
         if (in_R8D != 1) goto LAB_0011b920;
         LAB_0011b910:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011b920:uVar7 = 4;
            goto LAB_0011b8c5;
         }

         if (in_R8D == 1) goto LAB_0011b910;
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
      uVar4 = _LC150;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      Variant::operator_cast_to_String((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
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
      LAB_0011b8c5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011b8d0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<bool,EditorBuildProfile::BuildOption>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   ulong uVar8;
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
   undefined8 local_60;
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
         _err_print_error(&_LC147, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011bc60;
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
         if (in_R8D != 1) goto LAB_0011bca0;
         LAB_0011bc90:pVVar12 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar12 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011bca0:uVar7 = 4;
            goto LAB_0011bc55;
         }

         if (in_R8D == 1) goto LAB_0011bc90;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 2);
      uVar4 = _LC149;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      uVar8 = Variant::operator_cast_to_long(pVVar12);
      bVar6 = (bool)( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), uVar8 & 0xffffffff);
      Variant::Variant((Variant*)local_48, bVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   }
 else {
      uVar7 = 3;
      LAB_0011bc55:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011bc60:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<String, EditorBuildProfile::BuildOption>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<String,EditorBuildProfile::BuildOption>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   ulong uVar7;
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
         _err_print_error(&_LC147, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011bff0;
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
         if (in_R8D != 1) goto LAB_0011c040;
         LAB_0011c030:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011c040:uVar6 = 4;
            goto LAB_0011bfe5;
         }

         if (in_R8D == 1) goto LAB_0011c030;
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

      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar4 = _LC149;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }

      uVar7 = Variant::operator_cast_to_long(pVVar11);
      ( *(code*)pVVar12 )((CowData<char32_t>*)&local_68, (Variant*)( (long)plVar10 + (long)pVVar1 ), uVar7 & 0xffffffff);
      Variant::Variant((Variant*)local_58, (String*)&local_68);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }

      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   }
 else {
      uVar6 = 3;
      LAB_0011bfe5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }

   LAB_0011bff0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
         _err_print_error(&_LC147, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011c3a0;
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
         if (in_R8D != 1) goto LAB_0011c3f0;
         LAB_0011c3e0:pVVar11 = *(Variant**)param_4;
      }
 else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_0011c3f0:uVar7 = 4;
            goto LAB_0011c395;
         }

         if (in_R8D == 1) goto LAB_0011c3e0;
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
      uVar4 = _LC220;
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
      LAB_0011c395:*in_R9 = uVar7;
      in_R9[2] = 1;
   }

   LAB_0011c3a0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* void call_with_variant_args_dv<__UnexistingClass, EditorBuildProfile::BuildOption,
   bool>(__UnexistingClass*, void (__UnexistingClass::*)(EditorBuildProfile::BuildOption, bool),
   Variant const**, int, Callable::CallError&, Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,EditorBuildProfile::BuildOption,bool>(__UnexistingClass *param_1, _func_void_BuildOption_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   long lVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   Variant *this;
   uint uVar10;
   int iVar11;
   Variant *this_00;
   long in_stack_00000008;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   uVar10 = (uint)param_5;
   if (2 < uVar10) {
      uVar6 = 3;
      goto LAB_0011c71d;
   }

   lVar7 = *(long*)( in_stack_00000008 + 8 );
   iVar5 = 2 - uVar10;
   if (lVar7 == 0) {
      if (iVar5 == 0) {
         this(Variant * ) * plVar8;
         LAB_0011c74d:this_00 = (Variant*)plVar8[1];
         goto LAB_0011c685;
      }

   }
 else {
      lVar1 = *(long*)( lVar7 + -8 );
      iVar11 = (int)lVar1;
      if (iVar5 <= iVar11) {
         if (uVar10 == 0) {
            lVar9 = (long)( iVar11 + -2 );
            if (lVar1 <= lVar9) goto LAB_0011c768;
            this(Variant * )(lVar7 + lVar9 * 0x18);
         }
 else {
            this(Variant * ) * plVar8;
            if (uVar10 == 2) goto LAB_0011c74d;
         }

         lVar9 = (long)(int)( ( uVar10 ^ 1 ) + ( iVar11 - iVar5 ) );
         if (lVar1 <= lVar9) {
            LAB_0011c768:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar1, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }

         this_00 = (Variant*)( lVar7 + lVar9 * 0x18 );
         LAB_0011c685:*(undefined4*)param_6 = 0;
         if (( (ulong)param_2 & 1 ) != 0) {
            param_2 = *(_func_void_BuildOption_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
         }

         cVar4 = Variant::can_convert_strict(*(undefined4*)this_00, 1);
         uVar3 = _LC221;
         if (cVar4 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar3;
         }

         Variant::operator_cast_to_bool(this_00);
         cVar4 = Variant::can_convert_strict(*(undefined4*)this, 2);
         uVar3 = _LC149;
         if (cVar4 == '\0') {
            *(undefined4*)param_6 = 2;
            *(undefined8*)( param_6 + 4 ) = uVar3;
         }

         lVar7 = Variant::operator_cast_to_long(this);
         /* WARNING: Could not recover jumptable at 0x0011c70c. Too many branches */
         /* WARNING: Treating indirect jump as call */
         ( *param_2 )((char)( param_1 + (long)param_3 ), SUB81(lVar7, 0));
         return;
      }

   }

   uVar6 = 4;
   LAB_0011c71d:*(undefined4*)param_6 = uVar6;
   *(undefined4*)( param_6 + 8 ) = 2;
   return;
}
/* MethodBindT<EditorBuildProfile::BuildOption, bool>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<EditorBuildProfile::BuildOption,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC147, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011c806;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,EditorBuildProfile::BuildOption,bool>(p_Var2, (_func_void_BuildOption_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011c806:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_with_variant_args_dv<__UnexistingClass, StringName const&, bool>(__UnexistingClass*,
   void (__UnexistingClass::*)(StringName const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */void call_with_variant_args_dv<__UnexistingClass,StringName_const&,bool>(__UnexistingClass *param_1, _func_void_StringName_ptr_bool *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   undefined4 in_register_0000000c;
   long *plVar8;
   long lVar9;
   undefined4 *puVar10;
   uint uVar11;
   int iVar12;
   Variant *this;
   long in_FS_OFFSET;
   long in_stack_00000008;
   long local_38;
   long local_30;
   plVar8 = (long*)CONCAT44(in_register_0000000c, param_4);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar11 = (uint)param_5;
   if (uVar11 < 3) {
      lVar1 = *(long*)( in_stack_00000008 + 8 );
      iVar6 = 2 - uVar11;
      if (lVar1 == 0) {
         if (iVar6 != 0) goto LAB_0011cb28;
         puVar10 = (undefined4*)*plVar8;
         LAB_0011cb7d = (Variant*)plVar8[1];
      }
 else {
         lVar2 = *(long*)( lVar1 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar6) {
            LAB_0011cb28:uVar7 = 4;
            goto LAB_0011cb2d;
         }

         if (uVar11 == 0) {
            lVar9 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar9) goto LAB_0011cb98;
            puVar10 = (undefined4*)( lVar1 + lVar9 * 0x18 );
         }
 else {
            puVar10 = (undefined4*)*plVar8;
            if (uVar11 == 2) goto LAB_0011cb7d;
         }

         lVar9 = (long)(int)( ( uVar11 ^ 1 ) + ( iVar12 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_0011cb98:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         this(Variant * )(lVar1 + lVar9 * 0x18);
      }

      *(undefined4*)param_6 = 0;
      if (( (ulong)param_2 & 1 ) != 0) {
         param_2 = *(_func_void_StringName_ptr_bool**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
      }

      cVar5 = Variant::can_convert_strict(*(undefined4*)this, 1);
      uVar4 = _LC221;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_bool(this);
      cVar5 = Variant::can_convert_strict(*puVar10, 0x15);
      uVar4 = _LC220;
      if (cVar5 == '\0') {
         *(undefined4*)param_6 = 2;
         *(undefined8*)( param_6 + 4 ) = uVar4;
      }

      Variant::operator_cast_to_StringName((Variant*)&local_38);
      ( *param_2 )((StringName*)( param_1 + (long)param_3 ), SUB81(&local_38, 0));
      if (( StringName::configured != '\0' ) && ( local_38 != 0 )) {
         StringName::unref();
      }

   }
 else {
      uVar7 = 3;
      LAB_0011cb2d:*(undefined4*)param_6 = uVar7;
      *(undefined4*)( param_6 + 8 ) = 2;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<StringName const&, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindT<StringName_const&,bool>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   long *plVar1;
   undefined4 in_register_00000014;
   __UnexistingClass *p_Var2;
   CallError *in_R8;
   Vector *in_R9;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   p_Var2 = (__UnexistingClass*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( p_Var2 != (__UnexistingClass*)0x0 ) && ( *(long*)( p_Var2 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( p_Var2 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (*(long*)( p_Var2 + 8 ) == 0) {
         plVar1 = *(long**)( p_Var2 + 0x118 );
         if (plVar1 == (long*)0x0) {
            plVar1 = (long*)( **(code**)( *(long*)p_Var2 + 0x40 ) )(p_Var2);
         }

      }
 else {
         plVar1 = (long*)( *(long*)( p_Var2 + 8 ) + 0x20 );
      }

      in_R8 = (CallError*)( (ulong)in_R8 & 0xffffffff );
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
         _err_print_error(&_LC147, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0011cc36;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   call_with_variant_args_dv<__UnexistingClass,StringName_const&,bool>(p_Var2, (_func_void_StringName_ptr_bool*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0011cc36:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
   undefined8 local_98;
   long local_90;
   long local_88;
   long local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = *param_2;
   if (iVar5 != param_1) goto LAB_0011ce39;
   local_88 = 0;
   local_90 = 0;
   local_78 = &_LC3;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_70._8_8_;
   local_70 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_90);
   local_98 = 0;
   local_78 = (undefined*)CONCAT44(local_78._4_4_, 0x15);
   local_60 = 0;
   local_58 = 0;
   local_70 = (undefined1[16])0x0;
   if (local_90 == 0) {
      LAB_0011cf38:local_50 = 6;
      StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_0011cf38;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_70._8_8_ == local_80) {
         if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_70._8_8_ = local_80;
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
   if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_78._0_4_;
   if (*(long*)( param_3 + 8 ) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar3 = local_70._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_70._8_8_;
      local_70 = auVar2 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar3;
   }

   if (*(long*)( param_3 + 0x10 ) != local_70._8_8_) {
      StringName::unref();
      uVar3 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar3;
   }

   *(int*)( param_3 + 0x18 ) = local_60;
   if (*(long*)( param_3 + 0x20 ) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar4 = local_58;
      local_58 = 0;
      *(long*)( param_3 + 0x20 ) = lVar4;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_50;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_78);
   iVar5 = *param_2;
   LAB_0011ce39:*param_2 = iVar5 + 1;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindT<StringName const&, bool>::_gen_argument_type_info(int) const */PropertyInfo *MethodBindT<StringName_const&,bool>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   PropertyInfo *pPVar5;
   long in_FS_OFFSET;
   int local_8c;
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
   pPVar5 = (PropertyInfo*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)pPVar5 = 0;
   *(undefined4*)( pPVar5 + 0x18 ) = 0;
   *(undefined8*)( pPVar5 + 0x20 ) = 0;
   *(undefined4*)( pPVar5 + 0x28 ) = 6;
   *(undefined1(*) [16])( pPVar5 + 8 ) = (undefined1[16])0x0;
   local_8c = 0;
   call_get_argument_type_info_helper<StringName_const&>(in_EDX, &local_8c, pPVar5);
   if (in_EDX != local_8c) goto LAB_0011d0a6;
   local_78 = 0;
   local_80 = 0;
   local_68 = &_LC3;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 1);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0011d1a8:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0011d1a8;
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

   *(undefined4*)pPVar5 = local_68._0_4_;
   if (*(long*)( pPVar5 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 8 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( pPVar5 + 8 ) = uVar3;
   }

   if (*(long*)( pPVar5 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( pPVar5 + 0x10 ) = uVar3;
   }

   *(int*)( pPVar5 + 0x18 ) = local_50;
   if (*(long*)( pPVar5 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( pPVar5 + 0x20 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( pPVar5 + 0x20 ) = lVar4;
   }

   *(undefined4*)( pPVar5 + 0x28 ) = local_40;
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_68);
   LAB_0011d0a6:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return pPVar5;
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
      goto LAB_0011d358;
   }

   local_70 = 0;
   local_78 = 0;
   local_68 = &_LC3;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_60._0_8_;
   local_60 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_78);
   local_80 = 0;
   *puVar5 = 1;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (local_78 == 0) {
      puVar5[10] = 6;
      LAB_0011d43f:StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_70);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_78);
      puVar5[10] = 6;
      if (puVar5[6] != 0x11) goto LAB_0011d43f;
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

   LAB_0011d358:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void memdelete<HashMapElement<StringName, EditorHelpBit::HelpData> >(HashMapElement<StringName,
   EditorHelpBit::HelpData>*) */void memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(HashMapElement *param_1) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   code *pcVar5;
   long *plVar6;
   long lVar7;
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x68 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x60 ));
   if (*(long*)( param_1 + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( param_1 + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         plVar1 = *(long**)( param_1 + 0x58 );
         if (plVar1 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar5 = (code*)invalidInstructionException();
            ( *pcVar5 )();
         }

         lVar3 = plVar1[-1];
         *(undefined8*)( param_1 + 0x58 ) = 0;
         if (lVar3 != 0) {
            lVar7 = 0;
            plVar6 = plVar1;
            do {
               if (plVar6[4] != 0) {
                  LOCK();
                  plVar2 = (long*)( plVar6[4] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = plVar6[4];
                     plVar6[4] = 0;
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
               plVar6 = plVar6 + 5;
            }
 while ( lVar3 != lVar7 );
         }

         Memory::free_static(plVar1 + -2, false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x48 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x38 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x28 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x20 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x18 ));
   if (( StringName::configured != '\0' ) && ( *(long*)( param_1 + 0x10 ) != 0 )) {
      StringName::unref();
   }

   Memory::free_static(param_1, false);
   return;
}
/* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */void HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>> *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(*(HashMapElement**)( (long)pvVar3 + lVar2 * 2 ));
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }

            lVar2 = lVar2 + 4;
         }
 while ( lVar2 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar3 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar3, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */void HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator < HashMapElement<StringName,EditorHelpBit::HelpData>>>>> > *this) {
   uint uVar1;
   uint uVar2;
   int *piVar3;
   long lVar4;
   void *pvVar5;
   void *pvVar6;
   long lVar7;
   pvVar6 = *(void**)( this + 8 );
   if (pvVar6 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar7 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar7 ) != 0) {
               pvVar6 = *(void**)( (long)pvVar6 + lVar7 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar7 ) = 0;
               pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
               if (pvVar5 != (void*)0x0) {
                  if (*(int*)( (long)pvVar6 + 0x44 ) != 0) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar6 + 0x40 ) * 4 );
                     if (uVar2 == 0) {
                        *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                     }
 else {
                        lVar4 = 0;
                        do {
                           piVar3 = (int*)( *(long*)( (long)pvVar6 + 0x28 ) + lVar4 );
                           if (*piVar3 != 0) {
                              *piVar3 = 0;
                              memdelete<HashMapElement<StringName,EditorHelpBit::HelpData>>(*(HashMapElement**)( (long)pvVar5 + lVar4 * 2 ));
                              pvVar5 = *(void**)( (long)pvVar6 + 0x20 );
                              *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
                           }

                           lVar4 = lVar4 + 4;
                        }
 while ( lVar4 != (ulong)uVar2 * 4 );
                        *(undefined4*)( (long)pvVar6 + 0x44 ) = 0;
                        *(undefined1(*) [16])( (long)pvVar6 + 0x30 ) = (undefined1[16])0x0;
                        if (pvVar5 == (void*)0x0) goto LAB_0011d7e9;
                     }

                  }

                  Memory::free_static(pvVar5, false);
                  Memory::free_static(*(void**)( (long)pvVar6 + 0x28 ), false);
               }

               LAB_0011d7e9:if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar6, false);
               pvVar6 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar6 + lVar7 * 2 ) = 0;
            }

            lVar7 = lVar7 + 4;
         }
 while ( lVar7 != (ulong)uVar1 << 2 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar6 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar6, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* EditorBuildProfile::build_option_identifiers */void EditorBuildProfile::_GLOBAL__sub_I_build_option_identifiers(void) {
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

   if (EditorHelpBit::doc_class_cache == '\0') {
      EditorHelpBit::doc_class_cache = '\x01';
      EditorHelpBit::doc_class_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_class_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_class_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault < StringName>, DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>> > ::~HashMap, EditorHelpBit::doc_class_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_enum_cache == '\0') {
      EditorHelpBit::doc_enum_cache = '\x01';
      EditorHelpBit::doc_enum_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_enum_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_enum_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_enum_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_constant_cache == '\0') {
      EditorHelpBit::doc_constant_cache = '\x01';
      EditorHelpBit::doc_constant_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_constant_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_constant_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_constant_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_property_cache == '\0') {
      EditorHelpBit::doc_property_cache = '\x01';
      EditorHelpBit::doc_property_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_property_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_property_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_property_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_theme_item_cache == '\0') {
      EditorHelpBit::doc_theme_item_cache = '\x01';
      EditorHelpBit::doc_theme_item_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_theme_item_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_theme_item_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_theme_item_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_method_cache == '\0') {
      EditorHelpBit::doc_method_cache = '\x01';
      EditorHelpBit::doc_method_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_method_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_method_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_method_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_signal_cache == '\0') {
      EditorHelpBit::doc_signal_cache = '\x01';
      EditorHelpBit::doc_signal_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_signal_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_signal_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_signal_cache, &__dso_handle);
   }

   if (EditorHelpBit::doc_annotation_cache == '\0') {
      EditorHelpBit::doc_annotation_cache = '\x01';
      EditorHelpBit::doc_annotation_cache._8_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_annotation_cache._24_16_ = (undefined1[16])0x0;
      EditorHelpBit::doc_annotation_cache._40_8_ = 2;
      __cxa_atexit(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap, EditorHelpBit::doc_annotation_cache, &__dso_handle);
   }

   if (EditorFileDialog::base_property_helper != '\0') {
      return;
   }

   EditorFileDialog::base_property_helper = 1;
   EditorFileDialog::base_property_helper._64_8_ = 0;
   EditorFileDialog::base_property_helper._56_8_ = 2;
   EditorFileDialog::base_property_helper._0_16_ = (undefined1[16])0x0;
   EditorFileDialog::base_property_helper._24_16_ = (undefined1[16])0x0;
   EditorFileDialog::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, EditorFileDialog::base_property_helper, &__dso_handle, uStack_8);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, HashMap<StringName, EditorHelpBit::HelpData,
   HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorHelpBit::HelpData> > > > > >::~HashMap()
    */void HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>>>>::~HashMap(HashMap<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator < HashMapElement<StringName,EditorHelpBit::HelpData>>>>> > *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, EditorHelpBit::HelpData, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   EditorHelpBit::HelpData> > >::~HashMap() */void HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>>::~HashMap(HashMap<StringName,EditorHelpBit::HelpData,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorHelpBit::HelpData>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorBuildProfile::~EditorBuildProfile() */void EditorBuildProfile::~EditorBuildProfile(EditorBuildProfile *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::PropertyInfo(Variant::Type, String const&, PropertyHint, String const&, unsigned
   int, StringName const&) */void PropertyInfo::PropertyInfo(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* JSON::~JSON() */void JSON::~JSON(JSON *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* HBoxContainer::~HBoxContainer() */void HBoxContainer::~HBoxContainer(HBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* VBoxContainer::~VBoxContainer() */void VBoxContainer::~VBoxContainer(VBoxContainer *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorBuildProfileManager::~EditorBuildProfileManager() */void EditorBuildProfileManager::~EditorBuildProfileManager(EditorBuildProfileManager *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, String const&>::~MethodBindTR() */void MethodBindTR<Error,String_const&>::~MethodBindTR(MethodBindTR<Error,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<String, EditorBuildProfile::BuildOption>::~MethodBindTR() */void MethodBindTR<String,EditorBuildProfile::BuildOption>::~MethodBindTR(MethodBindTR<String,EditorBuildProfile::BuildOption> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, EditorBuildProfile::BuildOption>::~MethodBindTRC() */void MethodBindTRC<bool,EditorBuildProfile::BuildOption>::~MethodBindTRC(MethodBindTRC<bool,EditorBuildProfile::BuildOption> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<EditorBuildProfile::BuildOption, bool>::~MethodBindT() */void MethodBindT<EditorBuildProfile::BuildOption,bool>::~MethodBindT(MethodBindT<EditorBuildProfile::BuildOption,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<StringName const&, bool>::~MethodBindT() */void MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorBuildProfileManager, void, int>::~CallableCustomMethodPointer()
    */void CallableCustomMethodPointer<EditorBuildProfileManager,void,int>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,int> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorBuildProfileManager, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorBuildProfileManager, void,
   Object*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,Object*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorBuildProfileManager, void, String
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorBuildProfileManager,void,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


/* CowData<int>::find(int const&, long) const [clone .isra.0] */long CowData<int>::find(CowData<int> *this, int *param_1, long param_2) {
   long lVar1;
   if (( ( ( this != (CowData<int>*)0x0 ) && ( -1 < param_2 ) ) && ( lVar1 = *(long*)( this + -8 ) ),lVar1 != 0 )) {
      do {
         if (*(int*)( this + param_2 * 4 ) == (int)param_1) {
            return param_2;
         }

         param_2 = param_2 + 1;
      }
 while ( lVar1 != param_2 );
   }

   return -1;
}
/* CowData<Basis>::_copy_on_write() [clone .isra.0] */void CowData<Basis>::_copy_on_write(CowData<Basis> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0x24;
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
/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] */void CowData<Transform3D>::_copy_on_write(CowData<Transform3D> *this) {
   long *plVar1;
   long lVar2;
   code *pcVar3;
   undefined8 *puVar4;
   size_t __n;
   ulong uVar5;
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
   __n = lVar2 * 0x30;
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
/* List<ResourceImporter::ImportOption, DefaultAllocator>::push_back(ResourceImporter::ImportOption
   const&) [clone .isra.0] */void List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(List<ResourceImporter::ImportOption,DefaultAllocator> *this, ImportOption *param_1) {
   undefined8 uVar1;
   long *plVar2;
   long lVar3;
   undefined4 *puVar4;
   undefined1(*pauVar5)[16];
   if (*(long*)this == 0) {
      pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])this = pauVar5;
      *(undefined4*)pauVar5[1] = 0;
      *pauVar5 = (undefined1[16])0x0;
   }

   puVar4 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar4 + 8 ) = 0;
   *(undefined1(*) [16])( puVar4 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar4 + 0xe ) = (undefined1[16])0x0;
   lVar3 = *(long*)( param_1 + 8 );
   *puVar4 = 0;
   puVar4[6] = 0;
   puVar4[10] = 6;
   puVar4[0xc] = 0;
   *(undefined8*)( puVar4 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar4 + 0x12 ) = (undefined1[16])0x0;
   *puVar4 = *(undefined4*)param_1;
   if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)( param_1 + 8 ));
   }

   StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)( param_1 + 0x10 ));
   puVar4[6] = *(undefined4*)( param_1 + 0x18 );
   if (*(long*)( puVar4 + 8 ) != *(long*)( param_1 + 0x20 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)( param_1 + 0x20 ));
   }

   puVar4[10] = *(undefined4*)( param_1 + 0x28 );
   Variant::operator =((Variant*)( puVar4 + 0xc ), (Variant*)( param_1 + 0x30 ));
   uVar1 = *(undefined8*)( *(long*)this + 8 );
   *(long*)( puVar4 + 0x16 ) = *(long*)this;
   plVar2 = *(long**)this;
   *(undefined8*)( puVar4 + 0x12 ) = 0;
   *(undefined8*)( puVar4 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar4;
   }

   plVar2[1] = (long)puVar4;
   if (*plVar2 != 0) {
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
      return;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   *plVar2 = (long)puVar4;
   return;
}
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
/* PostImportPluginSkeletonRestFixer::PostImportPluginSkeletonRestFixer() */void PostImportPluginSkeletonRestFixer::PostImportPluginSkeletonRestFixer(PostImportPluginSkeletonRestFixer *this) {
   RefCounted::RefCounted((RefCounted*)this);
   *(code**)this = Memory::free_static;
   *(undefined8*)( this + 400 ) = 0;
   *(undefined4*)( this + 0x198 ) = 7;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)( this + 0x1a0 ), "_get_internal_import_options", false);
   this[0x1a8] = (PostImportPluginSkeletonRestFixer)0x0;
   *(undefined8*)( this + 0x1b0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1b8 ), "_get_internal_option_visibility", false);
   this[0x1c0] = (PostImportPluginSkeletonRestFixer)0x0;
   *(undefined8*)( this + 0x1c8 ) = 0;
   StringName::StringName((StringName*)( this + 0x1d0 ), "_get_internal_option_update_view_required", false);
   this[0x1d8] = (PostImportPluginSkeletonRestFixer)0x0;
   *(undefined8*)( this + 0x1e0 ) = 0;
   StringName::StringName((StringName*)( this + 0x1e8 ), "_internal_process", false);
   this[0x1f0] = (PostImportPluginSkeletonRestFixer)0x0;
   *(undefined8*)( this + 0x1f8 ) = 0;
   StringName::StringName((StringName*)( this + 0x200 ), "_get_import_options", false);
   this[0x208] = (PostImportPluginSkeletonRestFixer)0x0;
   *(undefined8*)( this + 0x210 ) = 0;
   StringName::StringName((StringName*)( this + 0x218 ), "_get_option_visibility", false);
   this[0x220] = (PostImportPluginSkeletonRestFixer)0x0;
   *(undefined8*)( this + 0x228 ) = 0;
   StringName::StringName((StringName*)( this + 0x230 ), "_pre_process", false);
   this[0x238] = (PostImportPluginSkeletonRestFixer)0x0;
   *(undefined8*)( this + 0x240 ) = 0;
   StringName::StringName((StringName*)( this + 0x248 ), "_post_process", false);
   this[0x250] = (PostImportPluginSkeletonRestFixer)0x0;
   *(undefined8*)( this + 600 ) = 0;
   *(undefined***)this = &PTR__initialize_classv_00114dd0;
   return;
}
/* PostImportPluginSkeletonRestFixer::get_internal_option_visibility(EditorScenePostImportPlugin::InternalImportCategory,
   String const&, String const&, HashMap<StringName, Variant, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName, Variant> >
   > const&) const */Variant *PostImportPluginSkeletonRestFixer::get_internal_option_visibility(Variant *param_1, undefined8 param_2, int param_3, undefined8 param_4, String *param_5, HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *param_6) {
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
   code *pcVar27;
   char cVar28;
   bool bVar29;
   int iVar30;
   uint uVar31;
   Variant *pVVar32;
   uint uVar33;
   long lVar34;
   uint uVar35;
   uint uVar36;
   ulong uVar37;
   long in_FS_OFFSET;
   long local_58;
   long local_50;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 == 6) {
      cVar28 = String::begins_with((char*)param_5);
      if (cVar28 != '\0') {
         StringName::StringName((StringName*)&local_58, "retarget/rest_fixer/fix_silhouette/enable", false);
         if (( *(long*)( param_6 + 8 ) != 0 ) && ( *(int*)( param_6 + 0x2c ) != 0 )) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_6 + 0x28 ) * 4 );
            uVar37 = CONCAT44(0, uVar1);
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_6 + 0x28 ) * 8 );
            if (local_58 == 0) {
               uVar31 = StringName::get_empty_hash();
            }
 else {
               uVar31 = *(uint*)( local_58 + 0x20 );
            }

            if (uVar31 == 0) {
               uVar31 = 1;
            }

            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar31 * lVar2;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar37;
            lVar34 = SUB168(auVar3 * auVar15, 8);
            uVar35 = *(uint*)( *(long*)( param_6 + 0x10 ) + lVar34 * 4 );
            uVar33 = SUB164(auVar3 * auVar15, 8);
            if (uVar35 != 0) {
               uVar36 = 0;
               do {
                  if (( uVar31 == uVar35 ) && ( *(long*)( *(long*)( *(long*)( param_6 + 8 ) + lVar34 * 8 ) + 0x10 ) == local_58 )) {
                     bVar29 = Variant::operator_cast_to_bool((Variant*)( *(long*)( *(long*)( param_6 + 8 ) + (ulong)uVar33 * 8 ) + 0x18 ));
                     if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
                        StringName::unref();
                     }

                     if (( bVar29 ) || ( cVar28 = String::ends_with((char*)param_5) ),cVar28 != '\0') goto LAB_0010070a;
                     Variant::Variant(param_1, false);
                     goto LAB_00100717;
                  }

                  uVar36 = uVar36 + 1;
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = ( ulong )(uVar33 + 1) * lVar2;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar37;
                  lVar34 = SUB168(auVar4 * auVar16, 8);
                  uVar35 = *(uint*)( *(long*)( param_6 + 0x10 ) + lVar34 * 4 );
                  uVar33 = SUB164(auVar4 * auVar16, 8);
               }
 while ( ( uVar35 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar35 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar37,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar33 ) - SUB164(auVar5 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar37,uVar36 <= SUB164(auVar6 * auVar18, 8) );
            }

         }

         LAB_00100a60:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar27 = (code*)invalidInstructionException();
         ( *pcVar27 )();
      }

      cVar28 = String::operator ==(param_5, "retarget/rest_fixer/keep_global_rest_on_leftovers");
      if (cVar28 != '\0') {
         StringName::StringName((StringName*)&local_50, "retarget/rest_fixer/retarget_method", false);
         if (( *(long*)( param_6 + 8 ) != 0 ) && ( *(int*)( param_6 + 0x2c ) != 0 )) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_6 + 0x28 ) * 4 );
            uVar37 = CONCAT44(0, uVar1);
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_6 + 0x28 ) * 8 );
            if (local_50 == 0) {
               uVar31 = StringName::get_empty_hash();
            }
 else {
               uVar31 = *(uint*)( local_50 + 0x20 );
            }

            if (uVar31 == 0) {
               uVar31 = 1;
            }

            auVar7._8_8_ = 0;
            auVar7._0_8_ = (ulong)uVar31 * lVar2;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar37;
            lVar34 = SUB168(auVar7 * auVar19, 8);
            uVar35 = *(uint*)( *(long*)( param_6 + 0x10 ) + lVar34 * 4 );
            uVar33 = SUB164(auVar7 * auVar19, 8);
            if (uVar35 != 0) {
               uVar36 = 0;
               do {
                  if (( uVar31 == uVar35 ) && ( *(long*)( *(long*)( *(long*)( param_6 + 8 ) + lVar34 * 8 ) + 0x10 ) == local_50 )) {
                     iVar30 = Variant::operator_cast_to_int((Variant*)( *(long*)( *(long*)( param_6 + 8 ) + (ulong)uVar33 * 8 ) + 0x18 ));
                     Variant::Variant(param_1, iVar30 == 1);
                     if (StringName::configured == '\0') goto LAB_00100717;
                     goto LAB_001009f8;
                  }

                  uVar36 = uVar36 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(uVar33 + 1) * lVar2;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar37;
                  lVar34 = SUB168(auVar8 * auVar20, 8);
                  uVar35 = *(uint*)( *(long*)( param_6 + 0x10 ) + lVar34 * 4 );
                  uVar33 = SUB164(auVar8 * auVar20, 8);
               }
 while ( ( uVar35 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar35 * lVar2,auVar21._8_8_ = 0,auVar21._0_8_ = uVar37,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar33 ) - SUB164(auVar9 * auVar21, 8)) * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar37,uVar36 <= SUB164(auVar10 * auVar22, 8) );
            }

         }

         goto LAB_00100a60;
      }

      cVar28 = String::operator ==(param_5, "retarget/rest_fixer/original_skeleton_name");
      if (( cVar28 != '\0' ) || ( cVar28 = String::operator ==(param_5, "retarget/rest_fixer/use_global_pose") ),cVar28 != '\0') {
         StringName::StringName((StringName*)&local_48, "retarget/rest_fixer/retarget_method", false);
         if (( *(long*)( param_6 + 8 ) != 0 ) && ( *(int*)( param_6 + 0x2c ) != 0 )) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_6 + 0x28 ) * 4 );
            uVar37 = CONCAT44(0, uVar1);
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_6 + 0x28 ) * 8 );
            if (local_48 == 0) {
               uVar31 = StringName::get_empty_hash();
            }
 else {
               uVar31 = *(uint*)( local_48 + 0x20 );
            }

            if (uVar31 == 0) {
               uVar31 = 1;
            }

            auVar11._8_8_ = 0;
            auVar11._0_8_ = (ulong)uVar31 * lVar2;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar37;
            lVar34 = SUB168(auVar11 * auVar23, 8);
            uVar35 = *(uint*)( *(long*)( param_6 + 0x10 ) + lVar34 * 4 );
            uVar33 = SUB164(auVar11 * auVar23, 8);
            if (uVar35 != 0) {
               uVar36 = 0;
               do {
                  if (( uVar31 == uVar35 ) && ( *(long*)( *(long*)( *(long*)( param_6 + 8 ) + lVar34 * 8 ) + 0x10 ) == local_48 )) {
                     iVar30 = Variant::operator_cast_to_int((Variant*)( *(long*)( *(long*)( param_6 + 8 ) + (ulong)uVar33 * 8 ) + 0x18 ));
                     Variant::Variant(param_1, iVar30 == 2);
                     if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
                        StringName::unref();
                     }

                     goto LAB_00100717;
                  }

                  uVar36 = uVar36 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar33 + 1) * lVar2;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar37;
                  lVar34 = SUB168(auVar12 * auVar24, 8);
                  uVar35 = *(uint*)( *(long*)( param_6 + 0x10 ) + lVar34 * 4 );
                  uVar33 = SUB164(auVar12 * auVar24, 8);
               }
 while ( ( uVar35 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar35 * lVar2,auVar25._8_8_ = 0,auVar25._0_8_ = uVar37,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar1 + uVar33 ) - SUB164(auVar13 * auVar25, 8)) * lVar2,auVar26._8_8_ = 0,auVar26._0_8_ = uVar37,uVar36 <= SUB164(auVar14 * auVar26, 8) );
            }

         }

         goto LAB_00100a60;
      }

      cVar28 = String::begins_with((char*)param_5);
      if (( cVar28 != '\0' ) && ( cVar28 = String::ends_with((char*)param_5) ),cVar28 != '\0') {
         StringName::StringName((StringName*)&local_50, "retarget/rest_fixer/retarget_method", false);
         pVVar32 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](param_6, (StringName*)&local_50);
         iVar30 = Variant::operator_cast_to_int(pVVar32);
         if (iVar30 == 2) {
            StringName::StringName((StringName*)&local_48, "retarget/bone_renamer/rename_bones", false);
            pVVar32 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](param_6, (StringName*)&local_48);
            bVar29 = Variant::operator_cast_to_bool(pVVar32);
            if (bVar29) {
               Variant::Variant(param_1, false);
            }
 else {
               Variant::Variant(param_1, true);
            }

            if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
               StringName::unref();
            }

         }
 else {
            Variant::Variant(param_1, false);
         }

         if (StringName::configured != '\0') {
            LAB_001009f8:if (local_50 != 0) {
               StringName::unref();
            }

         }

         goto LAB_00100717;
      }

   }

   LAB_0010070a:Variant::Variant(param_1, true);
   LAB_00100717:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* PostImportPluginSkeletonRestFixer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) [clone .part.0] */void PostImportPluginSkeletonRestFixer::get_internal_import_options(List<ResourceImporter::ImportOption,DefaultAllocator> *param_1) {
   undefined8 uVar1;
   long *plVar2;
   long lVar3;
   undefined *puVar4;
   undefined4 *puVar5;
   undefined *puVar6;
   undefined1(*pauVar7)[16];
   long in_FS_OFFSET;
   StringName *local_170;
   StringName *local_140;
   undefined8 local_110;
   long local_108;
   undefined8 local_100;
   long local_f8;
   long local_f0;
   long local_e8;
   long local_e0;
   char *local_d8;
   long local_d0;
   long local_c8;
   int local_c0;
   long local_b8;
   undefined4 local_b0;
   int local_a8[8];
   undefined4 local_88[2];
   long local_80;
   long local_78;
   int local_70;
   long local_68;
   undefined4 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_a8, true);
   local_e8 = 0;
   local_d8 = "";
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/apply_node_transforms";
   local_d0 = 0x29;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 1);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_00100ebb:local_b0 = 6;
      StringName::operator =((StringName*)&local_c8, (StringName*)&local_e8);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_00100ebb;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_140 = (StringName*)&local_e8;
   local_170 = (StringName*)&local_c8;
   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   lVar3 = local_f0;
   if (local_f0 != 0) {
      LOCK();
      plVar2 = (long*)( local_f0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_f0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, true);
   local_d8 = "";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/normalize_position_tracks";
   local_d0 = 0x2d;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 1);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_001012fb:local_b0 = 6;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_001012fb;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, true);
   local_d8 = "";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/reset_all_bone_poses_after_import";
   local_d0 = 0x35;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 1);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_001016e3:local_b0 = 6;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_001016e3;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, 1);
   local_d8 = "None,Overwrite Axis,Use Retarget Modifier";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0x29;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/retarget_method";
   local_d0 = 0x23;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 2);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 2;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_00101acb:local_b0 = 0x4006;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 0x4006;
      if (local_c0 != 0x11) goto LAB_00101acb;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, true);
   local_d8 = "";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/keep_global_rest_on_leftovers";
   local_d0 = 0x31;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 1);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_00101eb3:local_b0 = 6;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_00101eb3;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   local_110 = 0;
   local_d8 = "The skeleton modifier option uses SkeletonProfile as a list of bone names and retargets by name matching. Without renaming, retargeting by modifier will not work and the track path of the animation will be broken and it will be not playbacked correctly.";
   local_d0 = 0xfd;
   String::parse_latin1((StrRange*)&local_110);
   Variant::Variant((Variant*)local_a8, (String*)&local_110);
   local_d8 = "";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   puVar4 = &_LC47;
   do {
      puVar6 = puVar4;
      puVar4 = puVar6 + 4;
   }
 while ( *(int*)( puVar6 + 4 ) != 0 );
   local_d8 = "r";
   local_d0 = (long)( puVar6 + -0x1141cc ) >> 2;
   String::parse_utf32((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 4);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0x12;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_001022eb:local_b0 = 0x10000006;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 0x10000006;
      if (local_c0 != 0x11) goto LAB_001022eb;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, true);
   local_d8 = "";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/use_global_pose";
   local_d0 = 0x23;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 1);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_001026d3:local_b0 = 6;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_001026d3;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar2 = (long*)( local_f8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, "OriginalSkeleton");
   local_d8 = "";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/original_skeleton_name";
   local_d0 = 0x2a;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 4);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_00102acb:local_b0 = 6;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_00102acb;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   List<ResourceImporter::ImportOption,DefaultAllocator>::push_back(param_1, (ImportOption*)local_88);
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, false);
   local_d8 = "";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/fix_silhouette/enable";
   local_d0 = 0x29;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 1);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_00102dbb:local_b0 = 0x4006;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 0x4006;
      if (local_c0 != 0x11) goto LAB_00102dbb;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Array::Array((Array*)local_140);
   Variant::Variant((Variant*)local_a8, (Array*)local_140);
   local_f0 = 0;
   local_d8 = "%s:";
   local_100 = 0;
   local_d0 = 3;
   String::parse_latin1((StrRange*)&local_100);
   vformat<Variant::Type>((StrRange*)&local_f8, (StrRange*)&local_100, 0x15);
   local_108 = 0;
   local_d8 = "retarget/rest_fixer/fix_silhouette/filter";
   local_d0 = 0x29;
   String::parse_latin1((StrRange*)&local_108);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 0x1c);
   local_d0 = 0;
   if (local_108 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_108);
   }

   local_c8 = 0;
   local_c0 = 0x1f;
   local_b8 = 0;
   if (local_f8 == 0) {
      LAB_001031cb:local_b0 = 6;
      StringName::operator =(local_170, (StringName*)&local_f0);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f8);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_001031cb;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_108);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
   if (( StringName::configured != '\0' ) && ( local_f0 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Array::~Array((Array*)local_140);
   Variant::Variant((Variant*)local_a8, 0xf);
   local_d8 = "";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 0;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/fix_silhouette/threshold";
   local_d0 = 0x2c;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 3);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 0;
   local_b8 = 0;
   if (local_f0 == 0) {
      LAB_001035cb:local_b0 = 6;
      StringName::operator =(local_170, local_140);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 6;
      if (local_c0 != 0x11) goto LAB_001035cb;
      StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
      if (local_c8 == local_e0) {
         if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
            StringName::unref();
         }

      }
 else {
         StringName::unref();
         local_c8 = local_e0;
      }

   }

   local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   lVar3 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar2 = (long*)( local_68 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, 0.0);
   local_d8 = "-1,1,0.01";
   local_e8 = 0;
   local_f0 = 0;
   local_d0 = 9;
   String::parse_latin1((StrRange*)&local_f0);
   local_f8 = 0;
   local_d8 = "retarget/rest_fixer/fix_silhouette/base_height_adjustment";
   local_d0 = 0x39;
   String::parse_latin1((StrRange*)&local_f8);
   local_d8 = (char*)CONCAT44(local_d8._4_4_, 3);
   local_d0 = 0;
   if (local_f8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_d0, (CowData*)&local_f8);
   }

   local_c8 = 0;
   local_c0 = 1;
   local_b8 = 0;
   if (local_f0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_b8, (CowData*)&local_f0);
      local_b0 = 6;
      if (local_c0 == 0x11) {
         StringName::StringName((StringName*)&local_e0, (String*)&local_b8, false);
         if (local_c8 == local_e0) {
            if (( StringName::configured != '\0' ) && ( local_e0 != 0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            local_c8 = local_e0;
         }

         goto LAB_001039ca;
      }

   }

   local_b0 = 6;
   StringName::operator =(local_170, local_140);
   LAB_001039ca:local_80 = 0;
   local_88[0] = local_d8._0_4_;
   if (local_d0 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)&local_d0);
   }

   StringName::StringName((StringName*)&local_78, local_170);
   local_68 = 0;
   local_70 = local_c0;
   if (local_b8 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_b8);
   }

   local_60 = local_b0;
   Variant::Variant((Variant*)local_58, (Variant*)local_a8);
   if (*(long*)param_1 == 0) {
      pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar7;
      *(undefined4*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
   }

   puVar5 = (undefined4*)operator_new(0x60, DefaultAllocator::alloc);
   *(undefined8*)( puVar5 + 8 ) = 0;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( puVar5 + 0xe ) = (undefined1[16])0x0;
   *puVar5 = 0;
   puVar5[6] = 0;
   puVar5[10] = 6;
   puVar5[0xc] = 0;
   *(undefined8*)( puVar5 + 0x16 ) = 0;
   *(undefined1(*) [16])( puVar5 + 0x12 ) = (undefined1[16])0x0;
   *puVar5 = local_88[0];
   if (local_80 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 2 ), (CowData*)&local_80);
   }

   StringName::operator =((StringName*)( puVar5 + 4 ), (StringName*)&local_78);
   puVar5[6] = local_70;
   if (*(long*)( puVar5 + 8 ) != local_68) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar5 + 8 ), (CowData*)&local_68);
   }

   puVar5[10] = local_60;
   Variant::operator =((Variant*)( puVar5 + 0xc ), (Variant*)local_58);
   uVar1 = *(undefined8*)( *(long*)param_1 + 8 );
   *(long*)( puVar5 + 0x16 ) = *(long*)param_1;
   plVar2 = *(long**)param_1;
   *(undefined8*)( puVar5 + 0x12 ) = 0;
   *(undefined8*)( puVar5 + 0x14 ) = uVar1;
   if (plVar2[1] != 0) {
      *(undefined4**)( plVar2[1] + 0x48 ) = puVar5;
   }

   plVar2[1] = (long)puVar5;
   if (*plVar2 == 0) {
      *plVar2 = (long)puVar5;
   }

   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   lVar3 = local_b8;
   if (local_b8 != 0) {
      LOCK();
      plVar2 = (long*)( local_b8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_b8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
      StringName::unref();
   }

   lVar3 = local_d0;
   if (local_d0 != 0) {
      LOCK();
      plVar2 = (long*)( local_d0 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_d0 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   lVar3 = local_f8;
   if (local_f8 != 0) {
      LOCK();
      plVar2 = (long*)( local_f8 + -0x10 );
      *plVar2 = *plVar2 + -1;
      UNLOCK();
      if (*plVar2 == 0) {
         local_f8 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   if (Variant::needs_deinit[local_a8[0]] != '\0') {
      Variant::_clear_internal();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* PostImportPluginSkeletonRestFixer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */void PostImportPluginSkeletonRestFixer::get_internal_import_options(undefined8 param_1, int param_2, undefined8 param_3) {
   if (param_2 != 6) {
      return;
   }

   get_internal_import_options(param_3);
   return;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<StringName>::resize<false>(long) [clone .isra.0] */void CowData<StringName>::resize<false>(CowData<StringName> *this, long param_1) {
   code *pcVar1;
   int iVar2;
   long lVar3;
   undefined8 *puVar4;
   char *pcVar5;
   undefined8 uVar6;
   long lVar7;
   ulong uVar8;
   undefined8 *puVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar3 = 0;
      lVar7 = 0;
   }
 else {
      lVar3 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar3) {
         return;
      }

      if (param_1 == 0) {
         _unref(this);
         return;
      }

      _copy_on_write(this);
      lVar7 = lVar3 * 8;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 8 != 0) {
      uVar8 = param_1 * 8 - 1;
      uVar8 = uVar8 | uVar8 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = uVar8 | uVar8 >> 0x20;
      lVar10 = uVar8 + 1;
      if (lVar10 != 0) {
         if (param_1 <= lVar3) {
            lVar3 = *(long*)this;
            uVar8 = param_1;
            if (lVar3 == 0) {
               CowData<StringName> pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            for (; uVar8 < *(ulong*)( lVar3 + -8 ); uVar8 = uVar8 + 1) {
               while (( StringName::configured != '\0' && ( *(long*)( lVar3 + uVar8 * 8 ) != 0 ) )) {
                  StringName::unref();
                  lVar3 = *(long*)this;
                  uVar8 = uVar8 + 1;
                  if (lVar3 == 0) goto CowData<StringName>_resize<false>;
                  if (*(ulong*)( lVar3 + -8 ) <= uVar8) goto LAB_00104945;
               }
;
            }

            LAB_00104945:if (lVar10 != lVar7) {
               iVar2 = _realloc(this, lVar10);
               if (iVar2 != 0) {
                  return;
               }

               lVar3 = *(long*)this;
               if (lVar3 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar3 + -8 ) = param_1;
            return;
         }

         if (lVar10 == lVar7) {
            LAB_00104a13:puVar9 = *(undefined8**)this;
            if (puVar9 == (undefined8*)0x0) {
               FUN_00110e56();
               return;
            }

            lVar3 = puVar9[-1];
            if (param_1 <= lVar3) goto LAB_001049eb;
         }
 else {
            if (lVar3 != 0) {
               iVar2 = _realloc(this, lVar10);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_00104a13;
            }

            puVar4 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
            if (puVar4 == (undefined8*)0x0) {
               uVar6 = 0x171;
               pcVar5 = "Parameter \"mem_new\" is null.";
               goto LAB_00104a82;
            }

            puVar9 = puVar4 + 2;
            *puVar4 = 1;
            puVar4[1] = 0;
            *(undefined8**)this = puVar9;
            lVar3 = 0;
         }

         memset(puVar9 + lVar3, 0, ( param_1 - lVar3 ) * 8);
         LAB_001049eb:puVar9[-1] = param_1;
         return;
      }

   }

   uVar6 = 0x16a;
   pcVar5 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00104a82:_err_print_error("resize", "./core/templates/cowdata.h", uVar6, pcVar5, 0, 0);
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
/* Error CowData<Transform3D>::resize<false>(long) [clone .isra.0] */void CowData<Transform3D>::resize<false>(CowData<Transform3D> *this, long param_1) {
   long *plVar1;
   uint uVar2;
   int iVar3;
   CowData<Transform3D> *pCVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   undefined1(*pauVar8)[16];
   char *pcVar9;
   undefined8 *puVar10;
   undefined8 uVar11;
   CowData<Transform3D> *pCVar12;
   CowData<Transform3D> *pCVar13;
   long lVar14;
   long lVar15;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar14 = *(long*)this;
   if (lVar14 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar15 = 0;
      pCVar4 = (CowData<Transform3D>*)0x0;
   }
 else {
      lVar15 = *(long*)( lVar14 + -8 );
      if (param_1 == lVar15) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar14 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar14 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar14 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      pCVar4 = (CowData<Transform3D>*)( lVar15 * 0x30 );
      if (pCVar4 != (CowData<Transform3D>*)0x0) {
         uVar5 = ( ulong )(pCVar4 + -1) | ( ulong )(pCVar4 + -1) >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         pCVar4 = (CowData<Transform3D>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
      }

   }

   if (param_1 * 0x30 != 0) {
      uVar5 = param_1 * 0x30 - 1;
      uVar5 = uVar5 | uVar5 >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar13 = (CowData<Transform3D>*)( uVar5 | uVar5 >> 0x20 );
      pCVar12 = pCVar13 + 1;
      if (pCVar12 != (CowData<Transform3D>*)0x0) {
         if (param_1 <= lVar15) {
            if (( pCVar12 != pCVar4 ) && ( iVar3 = iVar3 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_00110e6a();
            return;
         }

         if (pCVar12 == pCVar4) {
            LAB_00104dac:puVar10 = *(undefined8**)this;
            if (puVar10 == (undefined8*)0x0) {
               resize<false>((long)pCVar13);
               return;
            }

            lVar14 = puVar10[-1];
            if (param_1 <= lVar14) goto LAB_00104d35;
         }
 else {
            if (lVar15 != 0) {
               pCVar13 = this;
               iVar3 = _realloc(this, (long)pCVar12);
               if (iVar3 != 0) {
                  return;
               }

               goto LAB_00104dac;
            }

            puVar6 = (undefined8*)Memory::alloc_static(( ulong )(pCVar13 + 0x11), false);
            if (puVar6 == (undefined8*)0x0) {
               uVar11 = 0x171;
               pcVar9 = "Parameter \"mem_new\" is null.";
               goto LAB_00104e52;
            }

            puVar10 = puVar6 + 2;
            *puVar6 = 1;
            puVar6[1] = 0;
            *(undefined8**)this = puVar10;
            lVar14 = 0;
         }

         uVar2 = _LC77;
         pauVar7 = (undefined1(*) [16])( puVar10 + lVar14 * 6 );
         do {
            *(undefined8*)( (long)pauVar7[2] + 4 ) = 0;
            pauVar8 = pauVar7 + 3;
            *pauVar7 = ZEXT416(uVar2);
            pauVar7[1] = ZEXT416(uVar2);
            *(uint*)pauVar7[2] = uVar2;
            *(undefined4*)( (long)pauVar7[2] + 0xc ) = 0;
            pauVar7 = pauVar8;
         }
 while ( (undefined1(*) [16])( puVar10 + param_1 * 6 ) != pauVar8 );
         LAB_00104d35:puVar10[-1] = param_1;
         return;
      }

   }

   uVar11 = 0x16a;
   pcVar9 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00104e52:_err_print_error("resize", "./core/templates/cowdata.h", uVar11, pcVar9, 0, 0);
   return;
}
/* Error CowData<Basis>::resize<false>(long) [clone .isra.0] */void CowData<Basis>::resize<false>(CowData<Basis> *this, long param_1) {
   long *plVar1;
   undefined1(*pauVar2)[16];
   uint uVar3;
   int iVar4;
   CowData<Basis> *pCVar5;
   ulong uVar6;
   undefined8 *puVar7;
   undefined1(*pauVar8)[16];
   char *pcVar9;
   undefined8 *puVar10;
   undefined8 uVar11;
   CowData<Basis> *pCVar12;
   CowData<Basis> *pCVar13;
   long lVar14;
   long lVar15;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar14 = *(long*)this;
   if (lVar14 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar15 = 0;
      pCVar5 = (CowData<Basis>*)0x0;
   }
 else {
      lVar15 = *(long*)( lVar14 + -8 );
      if (param_1 == lVar15) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar1 = (long*)( lVar14 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar14 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar14 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      pCVar5 = (CowData<Basis>*)( lVar15 * 0x24 );
      if (pCVar5 != (CowData<Basis>*)0x0) {
         uVar6 = ( ulong )(pCVar5 + -1) | ( ulong )(pCVar5 + -1) >> 1;
         uVar6 = uVar6 | uVar6 >> 2;
         uVar6 = uVar6 | uVar6 >> 4;
         uVar6 = uVar6 | uVar6 >> 8;
         uVar6 = uVar6 | uVar6 >> 0x10;
         pCVar5 = (CowData<Basis>*)( ( uVar6 | uVar6 >> 0x20 ) + 1 );
      }

   }

   lVar14 = param_1 * 0x24;
   if (lVar14 != 0) {
      uVar6 = lVar14 - 1U | lVar14 - 1U >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      pCVar13 = (CowData<Basis>*)( uVar6 | uVar6 >> 0x20 );
      pCVar12 = pCVar13 + 1;
      if (pCVar12 != (CowData<Basis>*)0x0) {
         if (param_1 <= lVar15) {
            if (( pCVar12 != pCVar5 ) && ( iVar4 = iVar4 != 0 )) {
               return;
            }

            if (*(long*)this != 0) {
               *(long*)( *(long*)this + -8 ) = param_1;
               return;
            }

            FUN_00110e80();
            return;
         }

         if (pCVar12 == pCVar5) {
            LAB_0010506c:puVar10 = *(undefined8**)this;
            if (puVar10 == (undefined8*)0x0) {
               resize<false>((long)pCVar13);
               return;
            }

            lVar15 = puVar10[-1];
            if (param_1 <= lVar15) goto LAB_00104ff5;
         }
 else {
            if (lVar15 != 0) {
               pCVar13 = this;
               iVar4 = _realloc(this, (long)pCVar12);
               if (iVar4 != 0) {
                  return;
               }

               goto LAB_0010506c;
            }

            puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar13 + 0x11), false);
            if (puVar7 == (undefined8*)0x0) {
               uVar11 = 0x171;
               pcVar9 = "Parameter \"mem_new\" is null.";
               goto LAB_00105112;
            }

            puVar10 = puVar7 + 2;
            *puVar7 = 1;
            puVar7[1] = 0;
            *(undefined8**)this = puVar10;
            lVar15 = 0;
         }

         uVar3 = _LC77;
         pauVar8 = (undefined1(*) [16])( (long)puVar10 + lVar15 * 0x24 );
         do {
            *pauVar8 = ZEXT416(uVar3);
            pauVar2 = pauVar8 + 2;
            pauVar8[1] = ZEXT416(uVar3);
            *(uint*)pauVar8[2] = uVar3;
            pauVar8 = (undefined1(*) [16])( *pauVar2 + 4 );
         }
 while ( (undefined1(*) [16])( lVar14 + (long)puVar10 ) != (undefined1(*) [16])( *pauVar2 + 4 ) );
         LAB_00104ff5:puVar10[-1] = param_1;
         return;
      }

   }

   uVar11 = 0x16a;
   pcVar9 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00105112:_err_print_error("resize", "./core/templates/cowdata.h", uVar11, pcVar9, 0, 0);
   return;
}
/* WARNING: Type propagation algorithm not settling *//* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* PostImportPluginSkeletonRestFixer::internal_process(EditorScenePostImportPlugin::InternalImportCategory,
   Node*, Node*, Ref<Resource>, Dictionary const&) [clone .part.0] */void PostImportPluginSkeletonRestFixer::internal_process(String *param_1, long param_2, Variant *param_3) {
   Object *pOVar1;
   Object *pOVar2;
   uint *puVar3;
   float *pfVar4;
   CowData<int> *this;
   char *pcVar5;
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
   bool bVar53;
   undefined1 auVar54[12];
   StringName *pSVar55;
   undefined4 uVar56;
   undefined4 uVar57;
   undefined4 uVar58;
   undefined4 uVar59;
   undefined4 uVar60;
   undefined4 uVar61;
   undefined4 uVar62;
   undefined4 uVar63;
   undefined4 uVar64;
   bool bVar65;
   char cVar66;
   bool bVar67;
   bool bVar68;
   uint uVar69;
   int iVar70;
   int iVar71;
   int iVar72;
   int iVar73;
   int iVar74;
   uint uVar75;
   int iVar76;
   int iVar77;
   long lVar78;
   String *pSVar79;
   Variant *pVVar80;
   Skeleton3D *this_00;
   Transform3D *pTVar81;
   String *pSVar82;
   NodePath *pNVar83;
   long lVar84;
   Object *pOVar85;
   undefined1(*pauVar86)[16];
   ulong uVar87;
   undefined8 *puVar88;
   float *pfVar89;
   List *pLVar90;
   undefined8 uVar91;
   RetargetModifier3D *this_01;
   undefined1 auVar92[8];
   bool bVar93;
   bool bVar94;
   bool bVar95;
   uint uVar96;
   int *piVar97;
   long *plVar98;
   Vector3 *pVVar99;
   long lVar100;
   undefined1 auVar101[8];
   undefined4 *puVar102;
   CowData<char32_t> *pCVar103;
   wchar32 wVar104;
   undefined4 *puVar105;
   ulong in_R10;
   ulong uVar106;
   Quaternion *pQVar107;
   ulong uVar108;
   int iVar109;
   int *piVar110;
   long in_FS_OFFSET;
   bool bVar111;
   byte bVar112;
   float fVar113;
   float fVar114;
   float fVar115;
   float fVar118;
   float fVar119;
   float fVar120;
   undefined1 auVar116[16];
   undefined1 auVar117[16];
   float fVar121;
   float fVar122;
   undefined1 auVar123[16];
   undefined1 auVar124[16];
   float fVar125;
   float fVar126;
   float fVar127;
   float fVar128;
   float fVar129;
   float fVar130;
   float fVar131;
   float fVar132;
   float fVar133;
   float fVar134;
   float fVar135;
   float fVar136;
   float fVar137;
   float fVar138;
   float fVar139;
   float fVar140;
   float fVar141;
   float fVar142;
   float fVar144;
   float fVar145;
   undefined1 auVar143[16];
   float fVar146;
   float fVar147;
   float fVar148;
   float fVar149;
   float fVar150;
   float fVar151;
   float fVar152;
   float fVar153;
   float fVar154;
   float fVar155;
   float fVar156;
   float fVar157;
   float fVar158;
   float fVar159;
   float fVar160;
   float fVar161;
   float fVar162;
   float fVar163;
   float fVar164;
   float fVar165;
   float fVar166;
   float fVar167;
   float fVar168;
   float fVar169;
   float fVar170;
   float fVar171;
   float fVar172;
   float fVar173;
   float fVar174;
   float fVar175;
   float fVar176;
   float fVar177;
   float fVar178;
   float fVar179;
   float fVar180;
   float fVar181;
   float fVar182;
   float fVar183;
   float fVar184;
   float fVar185;
   float fVar186;
   float fVar187;
   float fVar188;
   float fVar189;
   undefined1 auVar190[12];
   CowData<char32_t> *local_778;
   String *local_768;
   float local_758;
   List *local_748;
   String *local_738;
   Vector<int> *local_730;
   StrRange *local_718;
   Variant *local_708;
   undefined8 local_6f8;
   ulong local_6e8;
   String *local_6d8;
   float local_6c8;
   undefined8 local_6b8;
   float local_6a0;
   float fStack_69c;
   Basis *local_688;
   undefined1 *local_668;
   undefined8 local_4d8;
   undefined8 uStack_4d0;
   undefined4 local_4c8;
   undefined4 uStack_4c4;
   undefined4 uStack_4c0;
   undefined4 uStack_4bc;
   float local_4b8;
   Transform3D local_4a8[16];
   float local_498;
   float fStack_494;
   float fStack_490;
   float fStack_48c;
   undefined8 local_488;
   undefined8 uStack_480;
   StringName *local_478;
   Variant local_470[8];
   long local_468;
   undefined8 local_460;
   String local_458[8];
   long local_450;
   long *local_448;
   Object *local_440;
   Object *local_438;
   long local_430;
   String local_428[8];
   long local_420;
   undefined8 local_418;
   void *local_410;
   undefined8 local_408;
   void *local_400;
   undefined8 local_3f8;
   void *local_3f0;
   Object *local_3e8;
   CowData<int> *local_3e0;
   Object *local_3d8;
   int *local_3d0;
   long local_3c8;
   int *local_3c0;
   Object *local_3b8;
   uint *local_3b0;
   undefined1 local_3a8[8];
   undefined8 uStack_3a0;
   undefined1 local_398[16];
   undefined8 local_388;
   undefined1 local_378[12];
   float local_358;
   float fStack_354;
   float local_350;
   float fStack_34c;
   undefined1 local_338[16];
   Variant local_328[16];
   Quaternion local_318[16];
   Quaternion local_308[16];
   Quaternion local_2f8[16];
   undefined1 local_2e8[12];
   undefined1 local_2d8[2][12];
   undefined8 local_2b8;
   float fStack_2b0;
   float fStack_2ac;
   float local_2a8;
   float fStack_2a4;
   float fStack_2a0;
   float fStack_29c;
   float local_298;
   undefined8 local_288;
   float fStack_280;
   float fStack_27c;
   float local_278;
   float fStack_274;
   float fStack_270;
   float fStack_26c;
   float local_268;
   undefined8 local_258;
   float fStack_250;
   float fStack_24c;
   float local_248;
   float fStack_244;
   float fStack_240;
   float fStack_23c;
   float local_238;
   undefined1 local_228[8];
   undefined8 uStack_220;
   undefined1 local_218[8];
   undefined8 uStack_210;
   float local_208;
   undefined1 local_1f8[16];
   undefined1 local_1e8[12];
   float fStack_1dc;
   undefined1 local_1d8[8];
   float fStack_1d0;
   float fStack_1cc;
   undefined1 local_1c8[8];
   float fStack_1c0;
   float fStack_1bc;
   undefined1 local_1b8[8];
   float fStack_1b0;
   float fStack_1ac;
   float local_1a8;
   undefined1 local_198[8];
   float fStack_190;
   float fStack_18c;
   undefined1 local_188[8];
   float fStack_180;
   float fStack_17c;
   undefined1 local_178[4];
   undefined1 auStack_174[8];
   float fStack_16c;
   undefined1 local_168[8];
   undefined8 uStack_160;
   undefined1 local_158[8];
   undefined8 uStack_150;
   float local_148;
   float fStack_144;
   float fStack_140;
   float fStack_13c;
   undefined1 local_138[8];
   undefined8 uStack_130;
   undefined1 local_128[8];
   undefined8 uStack_120;
   undefined1 local_118[16];
   float local_108;
   float fStack_104;
   float fStack_100;
   float fStack_fc;
   float fStack_f8;
   float fStack_f4;
   float fStack_f0;
   float fStack_ec;
   float local_e8;
   float fStack_e4;
   float fStack_e0;
   float fStack_dc;
   undefined1 local_d8[12];
   float fStack_cc;
   float local_c8;
   float fStack_c4;
   float fStack_c0;
   float fStack_bc;
   float local_b8;
   float fStack_b4;
   float fStack_b0;
   float fStack_ac;
   undefined1 local_a8[8];
   float fStack_a0;
   float fStack_9c;
   undefined1 local_98[8];
   float fStack_90;
   float fStack_8c;
   float local_88;
   float fStack_84;
   float fStack_80;
   float fStack_7c;
   undefined1 local_78[8];
   float fStack_70;
   float fStack_6c;
   undefined1 local_68[8];
   float fStack_60;
   float fStack_5c;
   float local_58;
   float fStack_54;
   float fStack_50;
   float fStack_4c;
   long local_40;
   bVar112 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, "retarget/bone_map");
   Dictionary::operator [](param_3);
   lVar78 = Variant::get_validated_object();
   if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   if (lVar78 == 0) goto LAB_0010574b;
   __dynamic_cast(lVar78, &Object::typeinfo, &BoneMap::typeinfo, 0);
   BoneMap::get_profile();
   bVar95 = local_478 != (StringName*)0x0 && param_2 != 0;
   if (local_478 == (StringName*)0x0 || param_2 == 0) goto LAB_00105742;
   pSVar79 = (String*)__dynamic_cast(param_2, &Object::typeinfo, &Skeleton3D::typeinfo, 0);
   if (pSVar79 != (String*)0x0) {
      Variant::Variant((Variant*)local_78, "retarget/bone_renamer/rename_bones");
      pVVar80 = (Variant*)Dictionary::operator [](param_3);
      bVar65 = Variant::operator_cast_to_bool(pVVar80);
      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      Variant::Variant((Variant*)local_78, "retarget/rest_fixer/fix_silhouette/filter");
      Dictionary::operator [](param_3);
      Variant::operator_cast_to_Array(local_470);
      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      this_00 = (Skeleton3D*)operator_new(0x600, "");
      Skeleton3D::Skeleton3D(this_00);
      postinitialize_handler((Object*)this_00);
      uVar69 = SkeletonProfile::get_bone_size();
      iVar70 = (int)(Variant*)local_78;
      if (0 < (int)uVar69) {
         uVar75 = 0;
         do {
            uVar96 = uVar75;
            SkeletonProfile::get_bone_name((int)&local_3c8);
            if (local_3c8 == 0) {
               local_3b8 = (Object*)0x0;
            }
 else {
               pcVar5 = *(char**)( local_3c8 + 8 );
               local_3b8 = (Object*)0x0;
               if (pcVar5 == (char*)0x0) {
                  if (*(long*)( local_3c8 + 0x10 ) != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_3b8, (CowData*)( local_3c8 + 0x10 ));
                  }

               }
 else {
                  uStack_3a0 = (uint*)strlen(pcVar5);
                  local_3a8 = (undefined1[8])pcVar5;
                  String::parse_latin1((StrRange*)&local_3b8);
               }

            }

            Skeleton3D::add_bone((String*)this_00);
            pOVar85 = local_3b8;
            if (local_3b8 != (Object*)0x0) {
               LOCK();
               pOVar1 = local_3b8 + -0x10;
               *(long*)pOVar1 = *(long*)pOVar1 + -1;
               UNLOCK();
               if (*(long*)pOVar1 == 0) {
                  local_3b8 = (Object*)0x0;
                  Memory::free_static(pOVar85 + -0x10, false);
               }

            }

            if (( StringName::configured != '\0' ) && ( local_3c8 != 0 )) {
               StringName::unref();
            }

            SkeletonProfile::get_reference_pose(iVar70);
            Skeleton3D::set_bone_rest((int)this_00, (Transform3D*)(ulong)uVar96);
            uVar75 = uVar96 + 1;
         }
 while ( uVar69 != uVar96 + 1 );
         uVar69 = 0;
         do {
            pSVar55 = local_478;
            SkeletonProfile::get_bone_parent((int)local_3a8);
            iVar72 = SkeletonProfile::find_bone(pSVar55);
            if (( StringName::configured != '\0' ) && ( local_3a8 != (undefined1[8])0x0 )) {
               StringName::unref();
            }

            if (-1 < iVar72) {
               Skeleton3D::set_bone_parent((int)this_00, uVar69);
            }

            bVar111 = uVar96 != uVar69;
            uVar69 = uVar69 + 1;
         }
 while ( bVar111 );
      }

      local_730 = (Vector<int>*)&local_3b8;
      local_1f8 = ZEXT416((uint)_LC77);
      _local_1d8 = ZEXT412(0x3f800000);
      fStack_1cc = 0.0;
      _local_1e8 = local_1f8;
      Variant::Variant((Variant*)local_78, "retarget/rest_fixer/apply_node_transforms");
      pVVar80 = (Variant*)Dictionary::operator [](param_3);
      bVar111 = Variant::operator_cast_to_bool(pVVar80);
      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      if (bVar111) {
         pSVar82 = pSVar79;
         do {
            pTVar81 = (Transform3D*)__dynamic_cast(pSVar82, &Object::typeinfo, &Node3D::typeinfo, 0);
            if (pTVar81 != (Transform3D*)0x0) {
               Node3D::get_transform();
               Transform3D::operator *(local_4a8, (Transform3D*)local_78);
               local_1e8._4_4_ = fStack_494;
               local_1e8._0_4_ = local_498;
               local_1e8._8_4_ = fStack_490;
               fStack_1dc = fStack_48c;
               local_58 = 1.0;
               unique0x1000cdd6 = uStack_480;
               local_1d8 = local_488;
               _local_78 = ZEXT416((uint)_LC77);
               fStack_54 = 0.0;
               fStack_50 = 0.0;
               fStack_4c = 0.0;
               for (int i = 0; i < 16; i++) {
                  local_1f8[i] = local_4a8[i];
               }

               _local_68 = ZEXT416((uint)_LC77);
               Node3D::set_transform(pTVar81);
            }

            pSVar82 = (String*)Node::get_parent();
         }
 while ( pSVar82 != (String*)0x0 );
         _local_1d8 = ZEXT416((uint)local_1d8._0_4_);
      }

      Variant::Variant((Variant*)local_78, "retarget/rest_fixer/apply_node_transforms");
      pVVar80 = (Variant*)Dictionary::operator [](param_3);
      bVar111 = Variant::operator_cast_to_bool(pVVar80);
      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      iVar72 = (int)pSVar79;
      if (bVar111) {
         uVar108 = 0;
         auVar190 = Basis::get_scale_global();
         fVar113 = auVar190._8_4_;
         local_378 = auVar190;
         Skeleton3D::get_parentless_bones();
         fVar118 = auVar190._0_4_;
         fVar120 = auVar190._4_4_;
         while (local_3b0 != (uint*)0x0) {
            if (*(long*)( local_3b0 + -2 ) <= (long)uVar108) {
               if (local_3b0 != (uint*)0x0) {
                  goto LAB_0010ae8e;
               }

               break;
            }

            Skeleton3D::get_bone_rest((int)local_a8);
            Transform3D::orthonormalized();
            Transform3D::operator *((Transform3D*)local_78, (Transform3D*)local_d8);
            if (local_3b0 == (uint*)0x0) {
               LAB_0010732a:lVar78 = 0;
               goto LAB_0010734b;
            }

            lVar78 = *(long*)( local_3b0 + -2 );
            if (lVar78 <= (long)uVar108) goto LAB_0010734b;
            Skeleton3D::set_bone_rest(iVar72, (Transform3D*)(ulong)local_3b0[uVar108]);
            Transform3D::orthonormalized();
            if (local_3b0 == (uint*)0x0) goto LAB_0010732a;
            lVar78 = *(long*)( local_3b0 + -2 );
            if (lVar78 <= (long)uVar108) goto LAB_0010734b;
            auVar190 = Skeleton3D::get_bone_pose_position(iVar72);
            fVar137 = auVar190._8_4_;
            fVar130 = auVar190._0_4_;
            fVar136 = auVar190._4_4_;
            fStack_a0 = fStack_60 * fVar130 + fStack_5c * fVar136 + local_58 * fVar137 + fStack_4c;
            auVar117 = _local_a8;
            local_a8._4_4_ = (float)local_68._0_4_ * fVar136 + fVar130 * SUB164(_local_78, 0xc) + SUB164(_local_68, 4) * fVar137 + fStack_50;
            local_a8._0_4_ = (float)local_78._4_4_ * fVar136 + fVar130 * SUB164(_local_78, 0) + SUB164(_local_78, 8) * fVar137 + fStack_54;
            _fStack_a0 = auVar117._8_8_;
            local_d8 = auVar190;
            if (local_3b0 == (uint*)0x0) goto LAB_0010732a;
            lVar78 = *(long*)( local_3b0 + -2 );
            if (lVar78 <= (long)uVar108) goto LAB_0010734b;
            Skeleton3D::set_bone_pose_position(iVar72, (Vector3*)(ulong)local_3b0[uVar108]);
            if (local_3b0 == (uint*)0x0) goto LAB_0010732a;
            lVar78 = *(long*)( local_3b0 + -2 );
            if (lVar78 <= (long)uVar108) goto LAB_0010734b;
            Skeleton3D::get_bone_pose_rotation((int)local_a8);
            Basis::get_rotation_quaternion();
            Quaternion::operator *((Quaternion*)local_78, (Quaternion*)local_d8);
            if (local_3b0 == (uint*)0x0) goto LAB_0010732a;
            lVar78 = *(long*)( local_3b0 + -2 );
            if (lVar78 <= (long)uVar108) goto LAB_0010734b;
            Skeleton3D::set_bone_pose_rotation(iVar72, (Quaternion*)(ulong)local_3b0[uVar108]);
            local_e8 = 1.0;
            local_108 = _LC77;
            fStack_104 = 0.0;
            fStack_100 = 0.0;
            fStack_fc = 0.0;
            fStack_f8 = _LC77;
            fStack_f4 = 0.0;
            fStack_f0 = 0.0;
            fStack_ec = 0.0;
            if (local_3b0 == (uint*)0x0) goto LAB_0010732a;
            lVar78 = *(long*)( local_3b0 + -2 );
            if (lVar78 <= (long)uVar108) goto LAB_0010734b;
            _local_168 = Skeleton3D::get_bone_pose_scale(iVar72);
            auVar117 = _local_168;
            uStack_160._4_4_ = auVar117._12_4_;
            Basis::scaled((Vector3*)local_d8);
            Transform3D::orthonormalized();
            fVar130 = local_d8._0_4_;
            fVar136 = local_d8._4_4_;
            local_88 = (float)local_d8._8_4_ * fStack_60 + fStack_c4 * fStack_5c + local_b8 * local_58;
            local_a8._4_4_ = (float)local_78._4_4_ * local_c8 + (float)local_78._0_4_ * fVar136 + fStack_70 * fStack_bc;
            local_a8._0_4_ = (float)local_78._4_4_ * fStack_cc + (float)local_78._0_4_ * fVar130 + fStack_70 * fStack_c0;
            fStack_a0 = (float)local_78._4_4_ * fStack_c4 + (float)local_78._0_4_ * (float)local_d8._8_4_ + fStack_70 * local_b8;
            fStack_9c = (float)local_68._0_4_ * fStack_cc + fStack_6c * fVar130 + (float)local_68._4_4_ * fStack_c0;
            local_98._4_4_ = (float)local_68._4_4_ * local_b8 + (float)local_68._0_4_ * fStack_c4 + fStack_6c * (float)local_d8._8_4_;
            local_98._0_4_ = (float)local_68._4_4_ * fStack_bc + (float)local_68._0_4_ * local_c8 + fStack_6c * fVar136;
            fStack_90 = local_58 * fStack_c0 + fStack_5c * fStack_cc + fStack_60 * fVar130;
            fStack_8c = local_58 * fStack_bc + fStack_5c * local_c8 + fStack_60 * fVar136;
            _local_138 = Basis::get_scale();
            auVar117 = _local_138;
            uStack_130._4_4_ = auVar117._12_4_;
            if (local_3b0 == (uint*)0x0) goto LAB_0010732a;
            lVar78 = *(long*)( local_3b0 + -2 );
            if (lVar78 <= (long)uVar108) goto LAB_0010734b;
            puVar3 = local_3b0 + uVar108;
            uVar108 = uVar108 + 1;
            Skeleton3D::set_bone_pose_scale(iVar72, (Vector3*)( ulong ) * puVar3);
         }
;
         goto LAB_00105ece;
      }

      goto LAB_00106743;
   }

   goto LAB_001069d5;
   while (true) {
      uVar69 = *local_3b0;
      Vector<int>::remove_at(local_730, 0);
      Skeleton3D::get_bone_children((int)local_6d8);
      for (lVar78 = 0; ( uStack_3a0 != (uint*)0x0 && ( lVar78 < *(long*)( (long)uStack_3a0 + -8 ) ) ); lVar78 = lVar78 + 1) {
         Vector<int>::push_back(local_730, *(int*)( (long)uStack_3a0 + lVar78 * 4 ));
      }

      Skeleton3D::get_bone_rest((int)local_a8);
      fStack_100 = fVar113 * fStack_7c;
      local_108 = fStack_84 * fVar118;
      fStack_104 = fStack_80 * fVar120;
      Skeleton3D::get_bone_rest((int)(Basis*)local_d8);
      Transform3D::Transform3D((Transform3D*)local_78, (Basis*)local_d8, (Vector3*)&local_108);
      Skeleton3D::set_bone_rest(iVar72, (Transform3D*)(ulong)uVar69);
      auVar190 = Skeleton3D::get_bone_pose_position(iVar72);
      auVar117 = _local_78;
      fStack_a0 = auVar190._8_4_;
      local_a8 = (undefined1[8])auVar190._0_8_;
      local_78._4_4_ = auVar190._4_4_ * fVar120;
      local_78._0_4_ = auVar190._0_4_ * fVar118;
      uVar91 = local_78;
      fStack_6c = auVar117._12_4_;
      local_78 = auVar117._0_8_;
      fStack_70 = fVar113 * auVar190._8_4_;
      _local_78 = CONCAT88(_fStack_70, uVar91);
      Skeleton3D::set_bone_pose_position(iVar72, (Vector3*)(ulong)uVar69);
      CowData<int>::_unref((CowData<int>*)( local_3a8 + 8 ));
      if (local_3b0 == (uint*)0x0) break;
      LAB_0010ae8e:local_6d8 = (String*)local_3a8;
      if (*(long*)( local_3b0 + -2 ) < 1) break;
   }
;
   LAB_00105ece:local_6d8 = (String*)local_3a8;
   Skeleton3D::get_parentless_bones();
   if (local_3b0 != uStack_3a0) {
      CowData<int>::_unref((CowData<int>*)&local_3b0);
      local_3b0 = uStack_3a0;
      uStack_3a0 = (uint*)0x0;
   }

   CowData<int>::_unref((CowData<int>*)( local_3a8 + 8 ));
   auVar117._8_8_ = 0;
   auVar117._0_8_ = uStack_3a0;
   _local_3a8 = auVar117 << 0x40;
   String::parse_latin1(local_6d8, _LC88);
   local_3c8 = 0;
   String::parse_latin1((String*)&local_3c8, "*");
   Node::find_children((String*)&local_418, param_1, SUB81((String*)&local_3c8, 0), SUB81(local_6d8, 0));
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_3c8);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
   while (true) {
      iVar73 = Array::size();
      if (iVar73 == 0) break;
      Array::pop_back();
      local_748 = (List*)Variant::operator_cast_to_Object_((Variant*)local_78);
      if (local_748 != (List*)0x0) {
         local_748 = (List*)__dynamic_cast(local_748, &Object::typeinfo, &AnimationPlayer::typeinfo, 0);
      }

      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      local_408 = (Object*)0x0;
      AnimationMixer::get_animation_list(local_748);
      if (( local_408 != (Object*)0x0 ) && ( lVar78 = lVar78 != 0 )) {
         do {
            iVar109 = 0;
            AnimationMixer::get_animation((StringName*)&local_3f8);
            iVar73 = Animation::get_track_count();
            if (0 < iVar73) {
               do {
                  while (true) {
                     Animation::track_get_path((int)local_6d8);
                     iVar74 = NodePath::get_subname_count();
                     if (iVar74 == 1) break;
                     LAB_001060f0:NodePath::~NodePath((NodePath*)local_6d8);
                     LAB_001060f8:iVar109 = iVar109 + 1;
                     if (iVar73 == iVar109) goto LAB_001066c4;
                  }
;
                  cVar66 = Animation::track_get_type((int)local_3f8);
                  if (cVar66 != '\x01') {
                     cVar66 = Animation::track_get_type((int)local_3f8);
                     if (cVar66 != '\x02') {
                        cVar66 = Animation::track_get_type((int)local_3f8);
                        if (cVar66 != '\x03') goto LAB_001060f0;
                     }

                  }

                  NodePath::~NodePath((NodePath*)local_6d8);
                  cVar66 = Animation::track_is_compressed((int)local_3f8);
                  if (cVar66 != '\0') goto LAB_001060f8;
                  iVar74 = (int)(NodePath*)&local_3d8;
                  Animation::track_get_path(iVar74);
                  NodePath::get_concatenated_names();
                  if (local_3c8 == 0) {
                     local_3e8 = (Object*)0x0;
                  }
 else {
                     pcVar5 = *(char**)( local_3c8 + 8 );
                     local_3e8 = (Object*)0x0;
                     if (pcVar5 == (char*)0x0) {
                        if (*(long*)( local_3c8 + 0x10 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_3e8, (CowData*)( local_3c8 + 0x10 ));
                           goto LAB_00106206;
                        }

                        if (StringName::configured == '\0') goto LAB_00106224;
                     }
 else {
                        uStack_3a0 = (uint*)strlen(pcVar5);
                        local_3a8 = (undefined1[8])pcVar5;
                        String::parse_latin1((StrRange*)&local_3e8);
                        LAB_00106206:if (( StringName::configured == '\0' ) || ( local_3c8 == 0 )) goto LAB_00106224;
                     }

                     StringName::unref();
                  }

                  LAB_00106224:local_778 = (CowData<char32_t>*)&local_3e8;
                  NodePath::~NodePath((NodePath*)&local_3d8);
                  AnimationMixer::get_root_node();
                  pNVar83 = (NodePath*)Node::get_node((NodePath*)local_748);
                  NodePath::NodePath((NodePath*)&local_3c8, (String*)local_778);
                  lVar84 = Node::get_node(pNVar83);
                  NodePath::~NodePath((NodePath*)&local_3c8);
                  NodePath::~NodePath((NodePath*)local_6d8);
                  if (lVar84 == 0) {
                     _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0xba, "Condition \"!node\" is true. Continuing.", 0, 0);
                  }
 else {
                     pSVar82 = (String*)__dynamic_cast(lVar84, &Object::typeinfo, &Skeleton3D::typeinfo, 0);
                     if (( pSVar82 != (String*)0x0 ) && ( pSVar79 == pSVar82 )) {
                        Animation::track_get_path((int)local_6d8);
                        NodePath::get_subname(iVar74);
                        NodePath::~NodePath((NodePath*)local_6d8);
                        if (local_3d8 != (Object*)0x0) {
                           pcVar5 = *(char**)( local_3d8 + 8 );
                           if (pcVar5 == (char*)0x0) {
                              if (( *(long*)( local_3d8 + 0x10 ) != 0 ) && ( 1 < *(uint*)( *(long*)( local_3d8 + 0x10 ) + -8 ) )) {
                                 local_3c8 = 0;
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_3c8, (CowData*)( local_3d8 + 0x10 ));
                                 goto LAB_00106329;
                              }

                              if (StringName::configured == '\0') goto LAB_001066a6;
                           }
 else {
                              local_3c8 = 0;
                              uStack_3a0 = (uint*)strlen(pcVar5);
                              local_3a8 = (undefined1[8])pcVar5;
                              String::parse_latin1((StrRange*)&local_3c8);
                              LAB_00106329:uVar69 = Skeleton3D::find_bone(pSVar79);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_3c8);
                              uVar75 = Animation::track_get_key_count((int)local_3f8);
                              cVar66 = Animation::track_get_type((int)local_3f8);
                              if (cVar66 == '\x01') {
                                 if (( local_3b0 != (uint*)0x0 ) && ( 0 < *(long*)( local_3b0 + -2 ) )) {
                                    lVar84 = 0;
                                    do {
                                       if (uVar69 == local_3b0[lVar84]) {
                                          pVVar80 = (Variant*)0x0;
                                          if (0 < (int)uVar75) {
                                             do {
                                                Animation::track_get_key_value(iVar70, (int)local_3f8);
                                                auVar190 = Variant::operator_cast_to_Vector3((Variant*)local_78);
                                                local_d8 = auVar190;
                                                if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                                                   Variant::_clear_internal();
                                                }

                                                pOVar85 = local_3f8;
                                                fVar130 = local_d8._0_4_;
                                                fVar136 = local_d8._4_4_;
                                                fStack_a0 = (float)local_1e8._8_4_ * fVar130 + fStack_1dc * fVar136 + (float)local_1d8._0_4_ * (float)local_d8._8_4_ + fStack_1cc;
                                                auVar117 = _local_a8;
                                                local_a8._4_4_ = fVar130 * local_1f8._12_4_ + (float)local_1e8._0_4_ * fVar136 + SUB164(_local_1e8, 4) * (float)local_d8._8_4_ + fStack_1d0;
                                                local_a8._0_4_ = fVar130 * local_1f8._0_4_ + (float)local_1f8._4_4_ * fVar136 + local_1f8._8_4_ * (float)local_d8._8_4_ + (float)local_1d8._4_4_;
                                                _fStack_a0 = auVar117._8_8_;
                                                Variant::Variant((Variant*)local_78, (Vector3*)local_a8);
                                                Animation::track_set_key_value((int)pOVar85, iVar109, pVVar80);
                                                if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                                                   Variant::_clear_internal();
                                                }

                                                uVar69 = (int)pVVar80 + 1;
                                                pVVar80 = (Variant*)(ulong)uVar69;
                                             }
 while ( uVar75 != uVar69 );
                                          }

                                          goto LAB_00106688;
                                       }

                                       lVar84 = lVar84 + 1;
                                    }
 while ( *(long*)( local_3b0 + -2 ) != lVar84 );
                                 }

                                 pVVar80 = (Variant*)0x0;
                                 if (0 < (int)uVar75) {
                                    do {
                                       Animation::track_get_key_value(iVar70, (int)local_3f8);
                                       auVar190 = Variant::operator_cast_to_Vector3((Variant*)local_78);
                                       local_d8 = auVar190;
                                       if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                                          Variant::_clear_internal();
                                       }

                                       auVar117 = _local_a8;
                                       pOVar85 = local_3f8;
                                       local_a8._4_4_ = local_d8._4_4_ * fVar120;
                                       local_a8._0_4_ = local_d8._0_4_ * fVar118;
                                       uVar91 = local_a8;
                                       fStack_9c = auVar117._12_4_;
                                       local_a8 = auVar117._0_8_;
                                       fStack_a0 = fVar113 * (float)local_d8._8_4_;
                                       _local_a8 = CONCAT88(_fStack_a0, uVar91);
                                       Variant::Variant((Variant*)local_78, (Vector3*)local_a8);
                                       Animation::track_set_key_value((int)pOVar85, iVar109, pVVar80);
                                       if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                                          Variant::_clear_internal();
                                       }

                                       uVar69 = (int)pVVar80 + 1;
                                       pVVar80 = (Variant*)(ulong)uVar69;
                                    }
 while ( uVar75 != uVar69 );
                                 }

                              }
 else if (( local_3b0 != (uint*)0x0 ) && ( 0 < *(long*)( local_3b0 + -2 ) )) {
                                 lVar84 = 0;
                                 do {
                                    if (uVar69 == local_3b0[lVar84]) {
                                       cVar66 = Animation::track_get_type((int)local_3f8);
                                       if (cVar66 == '\x02') {
                                          if (0 < (int)uVar75) {
                                             pVVar80 = (Variant*)0x0;
                                             do {
                                                Animation::track_get_key_value(iVar70, (int)local_3f8);
                                                Variant::operator_cast_to_Quaternion((Variant*)&local_108);
                                                if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                                                   Variant::_clear_internal();
                                                }

                                                pOVar85 = local_3f8;
                                                Basis::get_rotation_quaternion();
                                                Quaternion::operator *((Quaternion*)local_a8, (Quaternion*)local_d8);
                                                Variant::Variant((Variant*)local_78, (Quaternion*)local_a8);
                                                Animation::track_set_key_value((int)pOVar85, iVar109, pVVar80);
                                                if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
                                                   Variant::_clear_internal();
                                                }

                                                uVar69 = (int)pVVar80 + 1;
                                                pVVar80 = (Variant*)(ulong)uVar69;
                                             }
 while ( uVar75 != uVar69 );
                                          }

                                       }
 else {
                                          in_R10 = (ulong)uVar75;
                                          if (0 < (int)uVar75) {
                                             pVVar80 = (Variant*)0x0;
                                             do {
                                                _local_78 = ZEXT416((uint)_LC77);
                                                local_58 = 1.0;
                                                _local_68 = _local_78;
                                                Animation::track_get_key_value((int)(Variant*)local_a8, (int)local_3f8);
                                                auVar190 = Variant::operator_cast_to_Vector3((Variant*)local_a8);
                                                fStack_100 = auVar190._8_4_;
                                                local_108 = auVar190._0_4_;
                                                fStack_104 = auVar190._4_4_;
                                                Basis::scaled((Vector3*)local_d8);
                                                if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
                                                   Variant::_clear_internal();
                                                }

                                                pOVar85 = local_3f8;
                                                Transform3D::orthonormalized();
                                                fVar130 = local_d8._0_4_;
                                                fVar136 = local_d8._4_4_;
                                                local_88 = (float)local_d8._8_4_ * fStack_60 + fStack_c4 * fStack_5c + local_b8 * local_58;
                                                local_a8._4_4_ = fStack_70 * fStack_bc + fVar136 * (float)local_78._0_4_ + local_c8 * (float)local_78._4_4_;
                                                local_a8._0_4_ = fStack_70 * fStack_c0 + fVar130 * (float)local_78._0_4_ + fStack_cc * (float)local_78._4_4_;
                                                fStack_a0 = fStack_70 * local_b8 + (float)local_d8._8_4_ * (float)local_78._0_4_ + fStack_c4 * (float)local_78._4_4_;
                                                fStack_9c = (float)local_68._4_4_ * fStack_c0 + fVar130 * fStack_6c + fStack_cc * (float)local_68._0_4_;
                                                local_98._4_4_ = fStack_c4 * (float)local_68._0_4_ + fStack_6c * (float)local_d8._8_4_ + local_b8 * (float)local_68._4_4_;
                                                local_98._0_4_ = local_c8 * (float)local_68._0_4_ + fStack_6c * fVar136 + fStack_bc * (float)local_68._4_4_;
                                                fStack_90 = fStack_cc * fStack_5c + fStack_60 * fVar130 + fStack_c0 * local_58;
                                                fStack_8c = local_c8 * fStack_5c + fStack_60 * fVar136 + fStack_bc * local_58;
                                                _local_138 = Basis::get_scale();
                                                auVar117 = _local_138;
                                                uStack_130._4_4_ = auVar117._12_4_;
                                                Variant::Variant((Variant*)&local_108, (Vector3*)local_138);
                                                Animation::track_set_key_value((int)pOVar85, iVar109, pVVar80);
                                                if (Variant::needs_deinit[(int)local_108] != '\0') {
                                                   Variant::_clear_internal();
                                                }

                                                uVar69 = (int)pVVar80 + 1;
                                                pVVar80 = (Variant*)(ulong)uVar69;
                                             }
 while ( uVar75 != uVar69 );
                                          }

                                       }

                                       break;
                                    }

                                    lVar84 = lVar84 + 1;
                                 }
 while ( *(long*)( local_3b0 + -2 ) != lVar84 );
                              }

                              LAB_00106688:if (( StringName::configured == '\0' ) || ( local_3d8 == (Object*)0x0 )) goto LAB_001066a6;
                           }

                           StringName::unref();
                        }

                     }

                  }

                  LAB_001066a6:iVar109 = iVar109 + 1;
                  CowData<char32_t>::_unref(local_778);
               }
 while ( iVar73 != iVar109 );
            }

            LAB_001066c4:if (local_3f8 != (Object*)0x0) {
               cVar66 = RefCounted::unreference();
               pOVar85 = local_3f8;
               if (cVar66 != '\0') {
                  cVar66 = predelete_handler(local_3f8);
                  if (cVar66 != '\0') {
                     ( **(code**)( *(long*)pOVar85 + 0x140 ) )(pOVar85);
                     Memory::free_static(pOVar85, false);
                  }

               }

            }

            lVar78 = *(long*)( lVar78 + 8 );
         }
 while ( lVar78 != 0 );
      }

      List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_408);
   }
;
   Array::~Array((Array*)&local_418);
   CowData<int>::_unref((CowData<int>*)&local_3b0);
   LAB_00106743:local_6d8 = (String*)local_3a8;
   local_718 = (StrRange*)&local_3c8;
   local_3b8 = (Object*)0x0;
   local_3a8 = (undefined1[8])_LC88;
   uStack_3a0 = (uint*)0xf;
   String::parse_latin1((StrRange*)local_730);
   local_3c8 = 0;
   uStack_3a0 = (uint*)0x1;
   local_3a8 = ( undefined1[8] ) & _LC89;
   String::parse_latin1(local_718);
   bVar93 = SUB81(local_730, 0);
   Node::find_children(local_428, param_1, SUB81(local_718, 0), bVar93);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_718);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
   while (true) {
      iVar73 = Array::size();
      wVar104 = (wchar32)local_730;
      iVar109 = (int)local_6d8;
      if (iVar73 == 0) break;
      Array::pop_back();
      pOVar85 = Variant::operator_cast_to_Object_((Variant*)local_78);
      if (pOVar85 != (Object*)0x0) {
         pOVar85 = (Object*)__dynamic_cast(pOVar85, &Object::typeinfo, &AnimationPlayer::typeinfo, 0);
      }

      if (Variant::needs_deinit[(int)local_78._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      local_418 = (long*)0x0;
      AnimationMixer::get_animation_list((List*)pOVar85);
      if (( local_418 != (long*)0x0 ) && ( local_778 = (CowData<char32_t>*)*local_418 ),local_778 != (CowData<char32_t>*)0x0) {
         LAB_001069b1:lVar78 = *(long*)local_778;
         if (lVar78 == 0) {
            local_3b8 = (Object*)0x0;
         }
 else {
            pcVar5 = *(char**)( lVar78 + 8 );
            local_3b8 = (Object*)0x0;
            if (pcVar5 == (char*)0x0) {
               if (*(long*)( lVar78 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_730, (CowData*)( lVar78 + 0x10 ));
               }

            }
 else {
               uStack_3a0 = (uint*)strlen(pcVar5);
               local_3a8 = (undefined1[8])pcVar5;
               String::parse_latin1((StrRange*)local_730);
            }

         }

         iVar73 = String::find_char(wVar104, 0x2f);
         pOVar1 = local_3b8;
         if (local_3b8 != (Object*)0x0) {
            LOCK();
            pOVar2 = local_3b8 + -0x10;
            *(long*)pOVar2 = *(long*)pOVar2 + -1;
            UNLOCK();
            if (*(long*)pOVar2 == 0) {
               local_3b8 = (Object*)0x0;
               Memory::free_static(pOVar1 + -0x10, false);
            }

         }

         if (iVar73 == -1) {
            iVar74 = 0;
            AnimationMixer::get_animation((StringName*)&local_408);
            iVar73 = Animation::get_track_count();
            local_3f8 = (Object*)0x0;
            if (0 < iVar73) {
               do {
                  Animation::track_get_path(iVar109);
                  iVar76 = NodePath::get_subname_count();
                  if (iVar76 == 1) {
                     cVar66 = Animation::track_get_type((int)local_408);
                     if (cVar66 != '\x01') {
                        cVar66 = Animation::track_get_type((int)local_408);
                        if (cVar66 != '\x02') {
                           cVar66 = Animation::track_get_type((int)local_408);
                           if (cVar66 != '\x03') goto LAB_00106a90;
                        }

                     }

                     NodePath::~NodePath((NodePath*)local_6d8);
                     iVar76 = (int)(NodePath*)&local_3d8;
                     Animation::track_get_path(iVar76);
                     NodePath::get_concatenated_names();
                     if (local_3c8 == 0) {
                        LAB_00106e1c:local_3b8 = (Object*)0x0;
                        if (local_3f8 != (Object*)0x0) {
                           LAB_00106e2d:pOVar1 = local_3f8;
                           LOCK();
                           local_3f8 = local_3f8 + -0x10;
                           *(long*)local_3f8 = *(long*)local_3f8 + -1;
                           UNLOCK();
                           if (*(long*)local_3f8 == 0) {
                              local_3f8 = (Object*)0x0;
                              Memory::free_static(pOVar1 + -0x10, false);
                           }

                           goto LAB_00106b9f;
                        }

                     }
 else {
                        pcVar5 = *(char**)( local_3c8 + 8 );
                        local_3b8 = (Object*)0x0;
                        if (pcVar5 == (char*)0x0) {
                           if (*(long*)( local_3c8 + 0x10 ) == 0) goto LAB_00106e1c;
                           CowData<char32_t>::_ref((CowData<char32_t>*)local_730, (CowData*)( local_3c8 + 0x10 ));
                        }
 else {
                           uStack_3a0 = (uint*)strlen(pcVar5);
                           local_3a8 = (undefined1[8])pcVar5;
                           String::parse_latin1((StrRange*)local_730);
                        }

                        pOVar1 = local_3b8;
                        if (local_3f8 == local_3b8) {
                           if (local_3f8 != (Object*)0x0) {
                              LOCK();
                              pOVar2 = local_3f8 + -0x10;
                              *(long*)pOVar2 = *(long*)pOVar2 + -1;
                              UNLOCK();
                              if (*(long*)pOVar2 == 0) {
                                 local_3b8 = (Object*)0x0;
                                 Memory::free_static(pOVar1 + -0x10, false);
                              }

                           }

                        }
 else {
                           if (local_3f8 != (Object*)0x0) goto LAB_00106e2d;
                           LAB_00106b9f:local_3f8 = local_3b8;
                        }

                     }

                     if (( StringName::configured != '\0' ) && ( local_3c8 != 0 )) {
                        StringName::unref();
                     }

                     NodePath::~NodePath((NodePath*)&local_3d8);
                     AnimationMixer::get_root_node();
                     pNVar83 = (NodePath*)Node::get_node((NodePath*)pOVar85);
                     NodePath::NodePath((NodePath*)local_730, (String*)&local_3f8);
                     lVar78 = Node::get_node(pNVar83);
                     NodePath::~NodePath((NodePath*)local_730);
                     NodePath::~NodePath((NodePath*)local_6d8);
                     if (lVar78 != 0) {
                        pSVar82 = (String*)__dynamic_cast(lVar78, &Object::typeinfo, &Skeleton3D::typeinfo, 0);
                        if (( pSVar82 != (String*)0x0 ) && ( pSVar79 == pSVar82 )) {
                           iVar73 = 0;
                           goto LAB_00106cb8;
                        }

                     }

                  }
 else {
                     LAB_00106a90:NodePath::~NodePath((NodePath*)local_6d8);
                  }

                  iVar74 = iVar74 + 1;
               }
 while ( iVar73 != iVar74 );
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_3f8);
            if (local_408 == (Object*)0x0) goto LAB_0010699c;
            goto LAB_00106ff6;
         }

         goto LAB_0010699c;
      }

      LAB_00106f9b:List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_418);
   }
;
   Array::~Array((Array*)local_428);
   local_420 = 0;
   iVar73 = Skeleton3D::get_bone_count();
   CowData<Transform3D>::resize<false>((CowData<Transform3D>*)&local_420, (long)iVar73);
   iVar73 = 0;
   CowData<Transform3D>::_copy_on_write((CowData<Transform3D>*)&local_420);
   lVar84 = local_420;
   local_418 = (long*)0x0;
   local_410 = (void*)0x0;
   while (true) {
      iVar74 = Skeleton3D::get_bone_count();
      if (iVar74 <= iVar73) break;
      Skeleton3D::get_bone_global_rest(iVar70);
      iVar74 = (uint)local_418;
      uVar108 = (ulong)local_418 & 0xffffffff;
      _local_168 = _local_78;
      _local_158 = _local_68;
      local_148 = local_58;
      fStack_144 = fStack_54;
      fStack_140 = fStack_50;
      fStack_13c = fStack_4c;
      if ((uint)local_418 == local_418._4_4_) {
         uVar87 = ( ulong )((uint)local_418 * 2);
         if ((uint)local_418 * 2 == 0) {
            uVar87 = 1;
         }

         local_418 = (long*)CONCAT44((int)uVar87, (uint)local_418);
         local_410 = (void*)Memory::realloc_static(local_410, uVar87 * 0x30, false);
         if (local_410 == (void*)0x0) goto LAB_001072f4;
      }

      iVar73 = iVar73 + 1;
      local_418 = (long*)CONCAT44(local_418._4_4_, iVar74 + 1);
      pauVar86 = (undefined1(*) [16])( uVar108 * 0x30 + (long)local_410 );
      *pauVar86 = _local_168;
      pauVar86[1] = _local_158;
      auVar17._4_4_ = fStack_144;
      auVar17._0_4_ = local_148;
      auVar17._8_4_ = fStack_140;
      auVar17._12_4_ = fStack_13c;
      pauVar86[2] = auVar17;
   }
;
   Variant::Variant((Variant*)local_a8, "retarget/rest_fixer/fix_silhouette/enable");
   pVVar80 = (Variant*)Dictionary::operator [](param_3);
   bVar67 = Variant::operator_cast_to_bool(pVVar80);
   if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   bVar94 = SUB81(local_6d8, 0);
   iVar70 = (int)(Variant*)local_a8;
   if (bVar67) {
      Skeleton3D::get_parentless_bones();
      if (local_3c0 != (int*)0x0) {
         LAB_00107420:if (0 < *(long*)( local_3c0 + -2 )) {
            CowData<int>::_copy_on_write((CowData<int>*)&local_3c0);
            if (local_3c0 == (int*)0x0) {
               lVar78 = -1;
            }
 else {
               lVar78 = *(long*)( local_3c0 + -2 ) + -1;
               if (0 < lVar78) {
                  memmove(local_3c0, local_3c0 + 1, lVar78 * 4);
               }

            }

            CowData<int>::resize<false>((CowData<int>*)&local_3c0, lVar78);
            Skeleton3D::get_bone_children(wVar104);
            if (local_3b0 != (uint*)0x0) {
               lVar78 = 0;
               do {
                  if (*(long*)( local_3b0 + -2 ) <= lVar78) break;
                  puVar3 = local_3b0 + lVar78;
                  lVar78 = lVar78 + 1;
                  Vector<int>::push_back((Vector<int>*)local_718, *puVar3);
               }
 while ( local_3b0 != (uint*)0x0 );
            }

            iVar73 = 0;
            while (true) {
               iVar74 = Array::size();
               if (iVar74 <= iVar73) break;
               Skeleton3D::get_bone_name(iVar109);
               Array::operator []((int)local_470);
               Variant::operator_cast_to_String((Variant*)&local_3d8);
               cVar66 = String::operator ==((String*)&local_3d8, local_6d8);
               pOVar85 = local_3d8;
               if (local_3d8 != (Object*)0x0) {
                  LOCK();
                  pOVar1 = local_3d8 + -0x10;
                  *(long*)pOVar1 = *(long*)pOVar1 + -1;
                  UNLOCK();
                  if (*(long*)pOVar1 == 0) {
                     local_3d8 = (Object*)0x0;
                     Memory::free_static(pOVar85 + -0x10, false);
                  }

               }

               auVar92 = local_3a8;
               if (local_3a8 != (undefined1[8])0x0) {
                  LOCK();
                  plVar98 = (long*)( (long)local_3a8 + -0x10 );
                  *plVar98 = *plVar98 + -1;
                  UNLOCK();
                  if (*plVar98 == 0) {
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = uStack_3a0;
                     _local_3a8 = auVar21 << 0x40;
                     Memory::free_static((void*)( (long)auVar92 + -0x10 ), false);
                  }

               }

               if (cVar66 != '\0') goto LAB_00107630;
               iVar73 = iVar73 + 1;
            }
;
            if (bVar65) {
               Skeleton3D::get_bone_name(iVar109);
               uVar69 = Skeleton3D::find_bone(pSVar79);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
               local_768._0_1_ = false;
            }
 else {
               Skeleton3D::get_bone_name((int)(CowData<char32_t>*)&local_3f8);
               StringName::StringName((StringName*)&local_3e8, (String*)&local_3f8, false);
               BoneMap::get_skeleton_bone_name((StringName*)&local_3d8);
               if (local_3d8 == (Object*)0x0) {
                  auVar124._8_8_ = 0;
                  auVar124._0_8_ = uStack_3a0;
                  _local_3a8 = auVar124 << 0x40;
               }
 else {
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uStack_3a0;
                  _local_3a8 = auVar22 << 0x40;
                  if (*(char**)( local_3d8 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_3d8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3d8 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1(local_6d8, *(char**)( local_3d8 + 8 ));
                  }

               }

               uVar69 = Skeleton3D::find_bone(pSVar79);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
               if (StringName::configured != '\0') {
                  if (local_3d8 != (Object*)0x0) {
                     StringName::unref();
                     if (StringName::configured == '\0') goto LAB_00107887;
                  }

                  if (local_3e8 != (Object*)0x0) {
                     StringName::unref();
                  }

               }

               LAB_00107887:CowData<char32_t>::_unref((CowData<char32_t>*)&local_3f8);
               local_768._0_1_ = bVar67;
            }

            if (-1 < (int)uVar69) {
               iVar73 = SkeletonProfile::get_tail_direction((int)local_478);
               if (iVar73 == 2) goto LAB_00107630;
               iVar73 = SkeletonProfile::get_tail_direction((int)local_478);
               if (iVar73 == 0) {
                  Skeleton3D::get_bone_children(iVar109);
                  if (( uStack_3a0 == (uint*)0x0 ) || ( iVar73 = iVar73 == 0 )) {
                     LAB_00107622:CowData<int>::_unref((CowData<int>*)( local_3a8 + 8 ));
                     goto LAB_00107630;
                  }

                  if (0 < iVar73) {
                     local_758 = 0.0;
                     fVar113 = 0.0;
                     local_6f8 = (String*)0x0;
                     local_6e8 = 0;
                     uVar108 = 0;
                     do {
                        auVar54._8_4_ = local_2e8._8_4_;
                        auVar54._0_8_ = local_2e8._0_8_;
                        auVar190._8_4_ = local_2d8[0]._8_4_;
                        auVar190._0_8_ = local_2d8[0]._0_8_;
                        if (uStack_3a0 == (uint*)0x0) {
                           lVar78 = 0;
                           local_2d8[0] = auVar190;
                           local_2e8 = auVar54;
                           goto LAB_0010734b;
                        }

                        lVar78 = *(long*)( (long)uStack_3a0 + -8 );
                        if (lVar78 <= (long)uVar108) goto LAB_0010734b;
                        if (bVar65) {
                           Skeleton3D::get_bone_name((int)&local_3d8);
                        }
 else {
                           Skeleton3D::get_bone_name((int)(String*)&local_408);
                           StringName::StringName((StringName*)&local_3f8, (String*)&local_408, false);
                           BoneMap::get_skeleton_bone_name((StringName*)&local_3e8);
                           if (local_3e8 == (Object*)0x0) {
                              local_3d8 = (Object*)0x0;
                           }
 else {
                              local_3d8 = (Object*)0x0;
                              if (*(char**)( local_3e8 + 8 ) == (char*)0x0) {
                                 if (*(long*)( local_3e8 + 0x10 ) != 0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_3d8, (CowData*)( local_3e8 + 0x10 ));
                                 }

                              }
 else {
                                 String::parse_latin1((String*)&local_3d8, *(char**)( local_3e8 + 8 ));
                              }

                           }

                        }

                        iVar74 = Skeleton3D::find_bone(pSVar79);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
                        if (local_768._0_1_ != false) {
                           if (StringName::configured != '\0') {
                              if (local_3e8 != (Object*)0x0) {
                                 StringName::unref();
                                 if (StringName::configured == '\0') goto LAB_001094e7;
                              }

                              if (local_3f8 != (Object*)0x0) {
                                 StringName::unref();
                              }

                           }

                           LAB_001094e7:CowData<char32_t>::_unref((CowData<char32_t>*)&local_408);
                        }

                        if (iVar74 < 0) goto LAB_00107622;
                        Skeleton3D::get_bone_global_rest(iVar70);
                        local_758 = local_758 + fStack_7c;
                        local_6e8 = CONCAT44((float)( local_6e8 >> 0x20 ) + fStack_80, (float)local_6e8 + fStack_84);
                        Skeleton3D::get_bone_global_rest(iVar70);
                        fVar113 = fVar113 + fStack_7c;
                        local_6f8 = (String*)CONCAT44((float)( (ulong)local_6f8 >> 0x20 ) + fStack_80, SUB84(local_6f8, 0) + fStack_84);
                        if (uVar108 == iVar73 - 1) goto LAB_0010edcd;
                        uVar108 = uVar108 + 1;
                     }
 while ( true );
                  }

                  auVar123._0_12_ = ZEXT812(0);
                  auVar123._12_4_ = 0;
                  local_758 = 0.0;
                  local_6e8 = 0;
                  fVar113 = 0.0;
                  goto LAB_0010ee1b;
               }

               local_708 = (Variant*)0x0;
               fVar113 = 0.0;
               local_6f8 = (String*)0x0;
               local_758 = 0.0;
               goto LAB_00107c64;
            }

            goto LAB_00107630;
         }

      }

      LAB_00107656:Variant::Variant((Variant*)local_a8, "retarget/rest_fixer/fix_silhouette/base_height_adjustment");
      pVVar80 = (Variant*)Dictionary::operator [](param_3);
      fVar113 = Variant::operator_cast_to_float(pVVar80);
      if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      if (_LC97 <= ABS(fVar113)) {
         SkeletonProfile::get_scale_base_bone();
         if (local_438 == (Object*)0x0) {
            local_3a8 = (undefined1[8])0x0;
         }
 else {
            local_3a8 = (undefined1[8])0x0;
            if (*(char**)( local_438 + 8 ) == (char*)0x0) {
               if (*(long*)( local_438 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_438 + 0x10 ));
               }

            }
 else {
               String::parse_latin1(local_6d8, *(char**)( local_438 + 8 ));
            }

         }

         uVar69 = Skeleton3D::find_bone(pSVar79);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
         Skeleton3D::get_bone_rest((int)(Basis*)local_d8);
         fStack_104 = fVar113 + fStack_b0;
         local_108 = fStack_b4;
         fStack_100 = fStack_ac;
         Transform3D::Transform3D((Transform3D*)local_a8, (Basis*)local_d8, (Vector3*)&local_108);
         Skeleton3D::set_bone_rest(iVar72, (Transform3D*)(ulong)uVar69);
         auVar50._8_8_ = 0;
         auVar50._0_8_ = uStack_3a0;
         _local_3a8 = auVar50 << 0x40;
         String::parse_latin1(local_6d8, _LC88);
         local_3b8 = (Object*)0x0;
         String::parse_latin1((String*)local_730, "*");
         Node::find_children((String*)&local_430, param_1, bVar93, bVar94);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
         while (true) {
            iVar73 = Array::size();
            if (iVar73 == 0) break;
            Array::pop_back();
            local_768 = (String*)Variant::operator_cast_to_Object_((Variant*)local_a8);
            if (local_768 != (String*)0x0) {
               local_768 = (String*)__dynamic_cast(local_768, &Object::typeinfo, &AnimationPlayer::typeinfo, 0);
            }

            if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
               Variant::_clear_internal();
            }

            local_408 = (Object*)0x0;
            AnimationMixer::get_animation_list((List*)local_768);
            if (( local_408 != (Object*)0x0 ) && ( lVar78 = lVar78 != 0 )) {
               do {
                  iVar74 = 0;
                  AnimationMixer::get_animation((StringName*)&local_3f8);
                  iVar73 = Animation::get_track_count();
                  if (0 < iVar73) {
                     do {
                        while (true) {
                           Animation::track_get_path(iVar109);
                           iVar76 = NodePath::get_subname_count();
                           if (iVar76 == 1) break;
                           LAB_001098e0:NodePath::~NodePath((NodePath*)local_6d8);
                           LAB_001098e8:iVar74 = iVar74 + 1;
                           if (iVar73 == iVar74) goto LAB_00109b05;
                        }
;
                        cVar66 = Animation::track_get_type((int)local_3f8);
                        if (cVar66 != '\x01') goto LAB_001098e0;
                        NodePath::~NodePath((NodePath*)local_6d8);
                        cVar66 = Animation::track_is_compressed((int)local_3f8);
                        if (cVar66 != '\0') goto LAB_001098e8;
                        Animation::track_get_path((int)(NodePath*)&local_3d8);
                        NodePath::get_concatenated_names();
                        if (local_3b8 == (Object*)0x0) {
                           local_3e8 = (Object*)0x0;
                        }
 else {
                           pcVar5 = *(char**)( local_3b8 + 8 );
                           local_3e8 = (Object*)0x0;
                           if (pcVar5 == (char*)0x0) {
                              if (*(long*)( local_3b8 + 0x10 ) != 0) {
                                 CowData<char32_t>::_ref((CowData<char32_t>*)&local_3e8, (CowData*)( local_3b8 + 0x10 ));
                                 goto LAB_001099bc;
                              }

                              if (StringName::configured == '\0') goto LAB_001099d8;
                           }
 else {
                              uStack_3a0 = (uint*)strlen(pcVar5);
                              local_3a8 = (undefined1[8])pcVar5;
                              String::parse_latin1((StrRange*)&local_3e8);
                              LAB_001099bc:if (( StringName::configured == '\0' ) || ( local_3b8 == (Object*)0x0 )) goto LAB_001099d8;
                           }

                           StringName::unref();
                        }

                        LAB_001099d8:NodePath::~NodePath((NodePath*)&local_3d8);
                        AnimationMixer::get_root_node();
                        pNVar83 = (NodePath*)Node::get_node((NodePath*)local_768);
                        NodePath::NodePath((NodePath*)local_730, (String*)&local_3e8);
                        lVar100 = Node::get_node(pNVar83);
                        NodePath::~NodePath((NodePath*)local_730);
                        NodePath::~NodePath((NodePath*)local_6d8);
                        if (lVar100 == 0) {
                           _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x1b1, "Condition \"!node\" is true. Continuing.", 0, 0);
                        }
 else {
                           pSVar82 = (String*)__dynamic_cast(lVar100, &Object::typeinfo, &Skeleton3D::typeinfo, 0);
                           if (( pSVar82 != (String*)0x0 ) && ( pSVar79 == pSVar82 )) {
                              Animation::track_get_path(iVar109);
                              NodePath::get_concatenated_subnames();
                              NodePath::~NodePath((NodePath*)local_6d8);
                              if (local_3b8 == local_438) {
                                 pVVar80 = (Variant*)0x0;
                                 uVar69 = Animation::track_get_key_count((int)local_3f8);
                                 if (0 < (int)uVar69) {
                                    do {
                                       Animation::track_get_key_value(iVar70, (int)local_3f8);
                                       auVar190 = Variant::operator_cast_to_Vector3((Variant*)local_a8);
                                       fStack_100 = auVar190._8_4_;
                                       local_108 = auVar190._0_4_;
                                       fStack_104 = auVar190._4_4_;
                                       if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
                                          Variant::_clear_internal();
                                       }

                                       pOVar85 = local_3f8;
                                       fStack_104 = fVar113 + fStack_104;
                                       Variant::Variant((Variant*)local_a8, (Vector3*)&local_108);
                                       Animation::track_set_key_value((int)pOVar85, iVar74, pVVar80);
                                       if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
                                          Variant::_clear_internal();
                                       }

                                       uVar75 = (int)pVVar80 + 1;
                                       pVVar80 = (Variant*)(ulong)uVar75;
                                    }
 while ( uVar69 != uVar75 );
                                 }

                                 if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
                                    StringName::unref();
                                 }

                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e8);
                                 goto LAB_001098e8;
                              }

                              if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                           }

                        }

                        pOVar85 = local_3e8;
                        if (local_3e8 == (Object*)0x0) goto LAB_001098e8;
                        LOCK();
                        pOVar1 = local_3e8 + -0x10;
                        *(long*)pOVar1 = *(long*)pOVar1 + -1;
                        UNLOCK();
                        if (*(long*)pOVar1 != 0) goto LAB_001098e8;
                        iVar74 = iVar74 + 1;
                        local_3e8 = (Object*)0x0;
                        Memory::free_static(pOVar85 + -0x10, false);
                     }
 while ( iVar73 != iVar74 );
                  }

                  LAB_00109b05:if (local_3f8 != (Object*)0x0) {
                     cVar66 = RefCounted::unreference();
                     pOVar85 = local_3f8;
                     if (cVar66 != '\0') {
                        cVar66 = predelete_handler(local_3f8);
                        if (cVar66 != '\0') {
                           ( **(code**)( *(long*)pOVar85 + 0x140 ) )(pOVar85);
                           Memory::free_static(pOVar85, false);
                        }

                     }

                  }

                  lVar78 = *(long*)( lVar78 + 8 );
               }
 while ( lVar78 != 0 );
            }

            List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_408);
         }
;
         Array::~Array((Array*)&local_430);
         if (( StringName::configured != '\0' ) && ( local_438 != (Object*)0x0 )) {
            StringName::unref();
         }

      }

      uVar69 = 0;
      lVar78 = 0;
      while (true) {
         iVar73 = Skeleton3D::get_bone_count();
         if (iVar73 <= (int)uVar69) break;
         Skeleton3D::get_bone_global_rest((int)local_d8);
         Transform3D::affine_inverse();
         uVar108 = (ulong)local_418 & 0xffffffff;
         if ((uint)local_418 <= uVar69) goto LAB_00107768;
         uVar69 = uVar69 + 1;
         Transform3D::operator *(local_4a8, (Transform3D*)( (long)local_410 + lVar78 ));
         *(Transform3D(*) [16])( lVar84 + lVar78 ) = local_4a8;
         pfVar4 = (float*)( lVar84 + 0x10 + lVar78 );
         *pfVar4 = local_498;
         pfVar4[1] = fStack_494;
         pfVar4[2] = fStack_490;
         pfVar4[3] = fStack_48c;
         auVar16._8_8_ = uStack_480;
         auVar16._0_8_ = local_488;
         *(undefined1(*) [16])( lVar84 + 0x20 + lVar78 ) = auVar16;
         lVar78 = lVar78 + 0x30;
      }
;
      CowData<int>::_unref((CowData<int>*)&local_3c0);
      bVar111 = bVar67;
   }

   Variant::Variant((Variant*)local_a8, "retarget/rest_fixer/normalize_position_tracks");
   pVVar80 = (Variant*)Dictionary::operator [](param_3);
   bVar67 = Variant::operator_cast_to_bool(pVVar80);
   if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   if (bVar67) {
      SkeletonProfile::get_scale_base_bone();
      if (local_3b8 == (Object*)0x0) {
         auVar41._8_8_ = 0;
         auVar41._0_8_ = uStack_3a0;
         _local_3a8 = auVar41 << 0x40;
      }
 else {
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uStack_3a0;
         _local_3a8 = auVar25 << 0x40;
         if (*(char**)( local_3b8 + 8 ) == (char*)0x0) {
            if (*(long*)( local_3b8 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3b8 + 0x10 ));
            }

         }
 else {
            String::parse_latin1(local_6d8, *(char**)( local_3b8 + 8 ));
         }

      }

      iVar73 = Skeleton3D::find_bone(pSVar79);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
      if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
         StringName::unref();
      }

      if (-1 < iVar73) {
         Skeleton3D::get_bone_global_rest(iVar70);
         if (0.0 < (float)( (uint)fStack_80 & _LC96 )) {
            Skeleton3D::set_motion_scale((float)( (uint)fStack_80 & _LC96 ));
         }

      }

   }

   Variant::Variant((Variant*)local_a8, "retarget/rest_fixer/retarget_method");
   pVVar80 = (Variant*)Dictionary::operator [](param_3);
   iVar73 = Variant::operator_cast_to_int(pVVar80);
   bVar67 = iVar73 == 2;
   if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, "retarget/rest_fixer/use_global_pose");
   pVVar80 = (Variant*)Dictionary::operator [](param_3);
   bVar68 = Variant::operator_cast_to_bool(pVVar80);
   if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   Variant::Variant((Variant*)local_a8, "retarget/rest_fixer/retarget_method");
   pVVar80 = (Variant*)Dictionary::operator [](param_3);
   iVar74 = Variant::operator_cast_to_int(pVVar80);
   if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   iVar76 = (int)local_718;
   local_738 = pSVar79;
   if (iVar74 < 1) {
      local_768 = (String*)0x0;
      local_6f8 = (String*)0x0;
      bVar95 = bVar111;
      goto LAB_0010b01a;
   }

   local_408 = (Object*)0x0;
   iVar74 = 0;
   local_400 = (void*)0x0;
   local_3f8 = (Object*)0x0;
   local_3f0 = (void*)0x0;
   while (true) {
      iVar77 = Skeleton3D::get_bone_count();
      if (iVar77 <= iVar74) break;
      Skeleton3D::get_bone_rest(iVar70);
      iVar77 = (uint)local_408;
      uVar108 = (ulong)local_408 & 0xffffffff;
      local_118._4_4_ = fStack_84;
      local_118._0_4_ = local_88;
      local_118._12_4_ = fStack_7c;
      local_118._8_4_ = fStack_80;
      _local_138 = _local_a8;
      _local_128 = _local_98;
      if ((uint)local_408 == local_408._4_4_) {
         uVar87 = ( ulong )((uint)local_408 * 2);
         if ((uint)local_408 * 2 == 0) {
            uVar87 = 1;
         }

         local_408 = (Object*)CONCAT44((int)uVar87, (uint)local_408);
         local_400 = (void*)Memory::realloc_static(local_400, uVar87 * 0x30, false);
         if (local_400 == (void*)0x0) {
            LAB_001072f4:_err_print_error("push_back", "./core/templates/local_vector.h", 0x41, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar15 = (code*)invalidInstructionException();
            ( *pcVar15 )();
         }

      }

      local_408 = (Object*)CONCAT44(local_408._4_4_, iVar77 + 1);
      puVar88 = (undefined8*)( uVar108 * 0x30 + (long)local_400 );
      *puVar88 = local_138;
      puVar88[1] = uStack_130;
      puVar88[2] = local_128;
      puVar88[3] = uStack_120;
      puVar88[4] = local_118._0_8_;
      puVar88[5] = local_118._8_8_;
      Skeleton3D::get_bone_global_rest((int)local_d8);
      iVar77 = (uint)local_3f8;
      uVar108 = (ulong)local_3f8 & 0xffffffff;
      local_108 = local_d8._0_4_;
      fStack_104 = local_d8._4_4_;
      fStack_100 = (float)local_d8._8_4_;
      fStack_fc = fStack_cc;
      fStack_f8 = local_c8;
      fStack_f4 = fStack_c4;
      fStack_f0 = fStack_c0;
      fStack_ec = fStack_bc;
      local_e8 = local_b8;
      fStack_e4 = fStack_b4;
      fStack_e0 = fStack_b0;
      fStack_dc = fStack_ac;
      if ((uint)local_3f8 == local_3f8._4_4_) {
         uVar87 = ( ulong )((uint)local_3f8 * 2);
         if ((uint)local_3f8 * 2 == 0) {
            uVar87 = 1;
         }

         local_3f8 = (Object*)CONCAT44((int)uVar87, (uint)local_3f8);
         local_3f0 = (void*)Memory::realloc_static(local_3f0, uVar87 * 0x30, false);
         if (local_3f0 == (void*)0x0) goto LAB_001072f4;
      }

      iVar74 = iVar74 + 1;
      auVar18._4_4_ = fStack_104;
      auVar18._0_4_ = local_108;
      auVar18._8_4_ = fStack_100;
      auVar18._12_4_ = fStack_fc;
      local_3f8 = (Object*)CONCAT44(local_3f8._4_4_, iVar77 + 1);
      pauVar86 = (undefined1(*) [16])( (long)local_3f0 + uVar108 * 0x30 );
      *pauVar86 = auVar18;
      auVar19._4_4_ = fStack_f4;
      auVar19._0_4_ = fStack_f8;
      auVar19._8_4_ = fStack_f0;
      auVar19._12_4_ = fStack_ec;
      pauVar86[1] = auVar19;
      auVar20._4_4_ = fStack_e4;
      auVar20._0_4_ = local_e8;
      auVar20._8_4_ = fStack_e0;
      auVar20._12_4_ = fStack_dc;
      pauVar86[2] = auVar20;
   }
;
   if (iVar73 != 2) {
      local_768 = (String*)0x0;
      local_6f8 = (String*)0x0;
      goto LAB_00108632;
   }

   pTVar81 = (Transform3D*)0x0;
   local_738 = (String*)operator_new(0x600, "");
   Skeleton3D::Skeleton3D((Skeleton3D*)local_738);
   postinitialize_handler((Object*)local_738);
   while (true) {
      iVar70 = Skeleton3D::get_bone_count();
      iVar74 = (int)local_738;
      iVar77 = (int)(Variant*)&local_108;
      if (iVar70 <= (int)pTVar81) break;
      Skeleton3D::get_bone_name(iVar109);
      Skeleton3D::add_bone(local_738);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
      Skeleton3D::get_bone_rest(iVar77);
      Skeleton3D::set_bone_rest(iVar74, pTVar81);
      Skeleton3D::get_bone_pose(iVar77);
      Skeleton3D::set_bone_pose(iVar74, pTVar81);
      pTVar81 = (Transform3D*)( ulong )((int)pTVar81 + 1);
   }
;
   iVar70 = 0;
   while (true) {
      iVar71 = Skeleton3D::get_bone_count();
      if (iVar71 <= iVar70) break;
      Skeleton3D::get_bone_parent(iVar72);
      Skeleton3D::set_bone_parent(iVar74, iVar70);
      iVar70 = iVar70 + 1;
   }
;
   fVar113 = (float)Skeleton3D::get_motion_scale();
   Skeleton3D::set_motion_scale(fVar113);
   Variant::Variant((Variant*)&local_108, "retarget/rest_fixer/original_skeleton_name");
   Dictionary::operator [](param_3);
   Variant::operator_cast_to_String((Variant*)&local_468);
   if (Variant::needs_deinit[(int)local_108] != '\0') {
      Variant::_clear_internal();
   }

   Node::get_name();
   if (local_3a8 == (undefined1[8])0x0) {
      local_460 = 0;
   }
 else {
      local_460 = 0;
      if (*(char**)( (long)local_3a8 + 8 ) == (char*)0x0) {
         if (*(long*)( (long)local_3a8 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_460, (CowData*)( (long)local_3a8 + 0x10 ));
            goto LAB_00105619;
         }

         if (StringName::configured == '\0') goto LAB_0010563a;
      }
 else {
         String::parse_latin1((String*)&local_460, *(char**)( (long)local_3a8 + 8 ));
         LAB_00105619:if (( StringName::configured == '\0' ) || ( local_3a8 == (undefined1[8])0x0 )) goto LAB_0010563a;
      }

      StringName::unref();
   }

   LAB_0010563a:local_778 = (CowData<char32_t>*)&local_460;
   if (( local_468 == 0 ) || ( *(uint*)( local_468 + -8 ) < 2 )) {
      _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x1fc, "Condition \"original_skeleton_name.is_empty()\" is true.", "Original skeleton name cannot be empty.", 0, 0);
   }
 else {
      cVar66 = String::operator ==((String*)&local_468, (String*)local_778);
      if (cVar66 == '\0') {
         local_768 = (String*)operator_new(0x600, "");
         Skeleton3D::Skeleton3D((Skeleton3D*)local_768);
         postinitialize_handler((Object*)local_768);
         cVar66 = Node::is_unique_name_in_owner();
         if (cVar66 == '\0') {
            Node::set_name(pSVar79);
            Node::set_name(local_768);
         }
 else {
            Node::set_unique_name_in_owner(SUB81(pSVar79, 0));
            Node::set_name(pSVar79);
            Node::set_name(local_768);
            Node::set_unique_name_in_owner(SUB81(local_768, 0));
         }

         pTVar81 = (Transform3D*)0x0;
         uVar69 = SkeletonProfile::get_bone_size();
         if (0 < (int)uVar69) {
            while (true) {
               SkeletonProfile::get_bone_name(wVar104);
               if (local_3b8 == (Object*)0x0) {
                  auVar27._8_8_ = 0;
                  auVar27._0_8_ = uStack_3a0;
                  _local_3a8 = auVar27 << 0x40;
               }
 else {
                  auVar26._8_8_ = 0;
                  auVar26._0_8_ = uStack_3a0;
                  _local_3a8 = auVar26 << 0x40;
                  if (*(char**)( local_3b8 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_3b8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3b8 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1(local_6d8, *(char**)( local_3b8 + 8 ));
                  }

               }

               Skeleton3D::add_bone(local_768);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
               if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
                  StringName::unref();
               }

               SkeletonProfile::get_reference_pose(iVar77);
               uVar75 = (uint)pTVar81;
               iVar70 = (int)local_768;
               Skeleton3D::set_bone_rest(iVar70, pTVar81);
               if (uVar69 == uVar75 + 1) break;
               pTVar81 = (Transform3D*)( ulong )(uVar75 + 1);
            }
;
            uVar69 = 0;
            do {
               SkeletonProfile::get_bone_parent(wVar104);
               if (local_3b8 == (Object*)0x0) {
                  auVar33._8_8_ = 0;
                  auVar33._0_8_ = uStack_3a0;
                  _local_3a8 = auVar33 << 0x40;
               }
 else {
                  auVar32._8_8_ = 0;
                  auVar32._0_8_ = uStack_3a0;
                  _local_3a8 = auVar32 << 0x40;
                  if (*(char**)( local_3b8 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_3b8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3b8 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1(local_6d8, *(char**)( local_3b8 + 8 ));
                  }

               }

               iVar72 = Skeleton3D::find_bone(local_768);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
               if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (-1 < iVar72) {
                  Skeleton3D::set_bone_parent(iVar70, uVar69);
               }

               bVar111 = uVar75 != uVar69;
               uVar69 = uVar69 + 1;
            }
 while ( bVar111 );
            uVar69 = 0;
            do {
               _local_198 = ZEXT812(0);
               SkeletonProfile::get_bone_name(wVar104);
               if (local_3b8 == (Object*)0x0) {
                  auVar40._8_8_ = 0;
                  auVar40._0_8_ = uStack_3a0;
                  _local_3a8 = auVar40 << 0x40;
               }
 else {
                  auVar35._8_8_ = 0;
                  auVar35._0_8_ = uStack_3a0;
                  _local_3a8 = auVar35 << 0x40;
                  if (*(char**)( local_3b8 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_3b8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3b8 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1(local_6d8, *(char**)( local_3b8 + 8 ));
                  }

               }

               iVar72 = Skeleton3D::find_bone(pSVar79);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
               if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
                  StringName::unref();
               }

               SkeletonProfile::get_bone_parent(iVar109);
               if (local_3a8 == (undefined1[8])0x0) {
                  local_3e8 = (Object*)0x0;
               }
 else {
                  local_3e8 = (Object*)0x0;
                  if (*(char**)( (long)local_3a8 + 8 ) == (char*)0x0) {
                     if (*(long*)( (long)local_3a8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_3e8, (CowData*)( (long)local_3a8 + 0x10 ));
                        goto LAB_0010c4c6;
                     }

                     if (StringName::configured == '\0') goto LAB_0010c4e2;
                  }
 else {
                     String::parse_latin1((String*)&local_3e8, *(char**)( (long)local_3a8 + 8 ));
                     LAB_0010c4c6:if (( StringName::configured == '\0' ) || ( local_3a8 == (undefined1[8])0x0 )) goto LAB_0010c4e2;
                  }

                  StringName::unref();
               }

               LAB_0010c4e2:if (-1 < iVar72) {
                  Skeleton3D::get_bone_global_rest(iVar77);
                  auVar117 = _local_198;
                  local_198._4_4_ = fStack_e0;
                  local_198._0_4_ = fStack_e4;
                  fStack_18c = auVar117._12_4_;
                  fStack_190 = fStack_dc;
                  SkeletonProfile::get_root_bone();
                  SkeletonProfile::get_bone_name(wVar104);
                  pOVar85 = local_3b8;
                  auVar92 = local_3a8;
                  if (local_3b8 == (Object*)0x0) {
                     LAB_0010c571:if (( StringName::configured != '\0' ) && ( local_3a8 != (undefined1[8])0x0 )) {
                        StringName::unref();
                     }

                  }
 else if (StringName::configured != '\0') {
                     StringName::unref();
                     goto LAB_0010c571;
                  }

                  if ((undefined1[8])pOVar85 != auVar92) {
                     do {
                        if (( local_3e8 == (Object*)0x0 ) || ( *(uint*)( local_3e8 + -8 ) < 2 )) goto LAB_0010c320;
                        iVar72 = Skeleton3D::find_bone(pSVar79);
                        pSVar55 = local_478;
                        StringName::StringName((StringName*)local_718, (String*)&local_3e8, false);
                        SkeletonProfile::find_bone(pSVar55);
                        SkeletonProfile::get_bone_parent(wVar104);
                        if (local_3b8 == (Object*)0x0) {
                           auVar38._8_8_ = 0;
                           auVar38._0_8_ = uStack_3a0;
                           _local_3a8 = auVar38 << 0x40;
                           LAB_0010c709:auVar92 = (undefined1[8])0x0;
                        }
 else {
                           auVar36._8_8_ = 0;
                           auVar36._0_8_ = uStack_3a0;
                           _local_3a8 = auVar36 << 0x40;
                           if (*(char**)( local_3b8 + 8 ) == (char*)0x0) {
                              if (*(long*)( local_3b8 + 0x10 ) == 0) goto LAB_0010c709;
                              CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3b8 + 0x10 ));
                              auVar92 = local_3a8;
                           }
 else {
                              String::parse_latin1(local_6d8, *(char**)( local_3b8 + 8 ));
                              auVar92 = local_3a8;
                           }

                        }

                        if ((undefined1[8])local_3e8 != auVar92) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e8);
                           local_3e8 = (Object*)local_3a8;
                           auVar37._8_8_ = 0;
                           auVar37._0_8_ = uStack_3a0;
                           _local_3a8 = auVar37 << 0x40;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
                        if (StringName::configured != '\0') {
                           if (local_3b8 != (Object*)0x0) {
                              StringName::unref();
                              if (StringName::configured == '\0') goto LAB_0010c6a1;
                           }

                           if (local_3c8 != 0) {
                              StringName::unref();
                           }

                        }

                        LAB_0010c6a1:;
                     }
 while ( iVar72 < 0 );
                     Skeleton3D::get_bone_global_rest(iVar77);
                     auVar117 = _local_198;
                     auVar92 = local_198;
                     fVar113 = SUB164(_local_198, 0);
                     local_198._4_4_ = SUB164(_local_198, 4) - fStack_e0;
                     local_198._0_4_ = fVar113 - fStack_e4;
                     uVar91 = local_198;
                     fStack_18c = auVar117._12_4_;
                     fStack_190 = fStack_190 - fStack_dc;
                     _local_198 = CONCAT48(fStack_190, auVar92);
                     _local_198 = CONCAT88(_fStack_190, uVar91);
                  }

               }

               LAB_0010c320:SkeletonProfile::get_bone_parent(wVar104);
               if (local_3b8 == (Object*)0x0) {
                  auVar39._8_8_ = 0;
                  auVar39._0_8_ = uStack_3a0;
                  _local_3a8 = auVar39 << 0x40;
               }
 else {
                  auVar34._8_8_ = 0;
                  auVar34._0_8_ = uStack_3a0;
                  _local_3a8 = auVar34 << 0x40;
                  if (*(char**)( local_3b8 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_3b8 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3b8 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1(local_6d8, *(char**)( local_3b8 + 8 ));
                  }

               }

               iVar72 = Skeleton3D::find_bone(local_768);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
               if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (-1 < iVar72) {
                  Skeleton3D::get_bone_global_rest(iVar77);
                  Basis::get_rotation_quaternion();
                  Quaternion::inverse();
                  cVar66 = Quaternion::is_normalized();
                  if (cVar66 == '\0') {
                     local_3b8 = (Object*)0x0;
                     String::parse_latin1((String*)local_730, " must be normalized.");
                     Quaternion::operator_cast_to_String((Quaternion*)&local_3d8);
                     operator+((char *)
                     local_718,(String*)"The quaternion ";
                     String::operator +(local_6d8, (String*)local_718);
                     _err_print_error("xform", "./core/math/quaternion.h", 0x5c, "Condition \"!is_normalized()\" is true. Returning: p_v", local_6d8, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_718);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
                  }
 else {
                     fVar138 = SUB164(_local_168, 0);
                     fVar139 = SUB164(_local_168, 4);
                     fVar120 = SUB164(_local_168, 8);
                     fVar130 = SUB164(_local_168, 0xc);
                     fVar136 = fVar138 * (float)local_198._4_4_ - fVar139 * (float)local_198._0_4_;
                     fVar137 = fVar139 * fStack_190 - fVar120 * (float)local_198._4_4_;
                     fVar113 = fVar120 * (float)local_198._0_4_ - fStack_190 * fVar138;
                     fVar118 = ( fStack_190 * fVar139 - fVar120 * (float)local_198._4_4_ ) * fVar130 + ( fVar136 * fVar139 - fVar120 * fVar113 );
                     fVar120 = ( (float)local_198._0_4_ * fVar120 - fVar138 * fStack_190 ) * fVar130 + ( fVar137 * fVar120 - fVar138 * ( fVar138 * (float)local_198._4_4_ - (float)local_198._0_4_ * fVar139 ) );
                     fVar113 = ( fVar113 * fVar138 - fVar139 * fVar137 ) + fVar130 * fVar136;
                     local_198 = (undefined1[8])CONCAT44(fVar120 + fVar120 + (float)local_198._4_4_, fVar118 + fVar118 + (float)local_198._0_4_);
                     fStack_190 = fVar113 + fVar113 + fStack_190;
                  }

               }

               Skeleton3D::get_bone_rest((int)(Basis*)local_138);
               Transform3D::Transform3D((Transform3D*)&local_108, (Basis*)local_138, (Vector3*)local_198);
               Skeleton3D::set_bone_rest(iVar70, (Transform3D*)(ulong)uVar69);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e8);
               bVar111 = uVar69 != uVar75;
               uVar69 = uVar69 + 1;
            }
 while ( bVar111 );
         }

         fVar113 = (float)Skeleton3D::get_motion_scale();
         Skeleton3D::set_motion_scale(fVar113);
         Skeleton3D::reset_bone_poses();
         Node::get_owner();
         uVar91 = Node::get_parent();
         Node::add_child(uVar91, local_768, 0, 0);
         Node::set_owner((Node*)local_768);
         this_01 = (RetargetModifier3D*)operator_new(0x588, "");
         RetargetModifier3D::RetargetModifier3D(this_01);
         postinitialize_handler((Object*)this_01);
         Node::add_child(local_768, this_01, 0, 0);
         Node::set_owner((Node*)this_01);
         auVar29._8_8_ = 0;
         auVar29._0_8_ = uStack_3a0;
         _local_3a8 = auVar29 << 0x40;
         String::parse_latin1(local_6d8, "RetargetModifier3D");
         Node::set_name((String*)this_01);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
         Node::set_owner((Node*)pSVar79);
         ( **(code**)( *(long*)pSVar79 + 0x198 ) )(pSVar79, this_01, 0);
         Node::set_owner((Node*)pSVar79);
         Node::set_unique_name_in_owner(SUB81(pSVar79, 0));
         RetargetModifier3D::set_use_global_pose(SUB81(this_01, 0));
         local_3a8 = (undefined1[8])0x0;
         if (local_478 != (StringName*)0x0) {
            local_3a8 = (undefined1[8])local_478;
            cVar66 = RefCounted::reference();
            if (cVar66 == '\0') {
               local_3a8 = (undefined1[8])0x0;
            }

         }

         RetargetModifier3D::set_profile(this_01);
         if (local_3a8 != (undefined1[8])0x0) {
            cVar66 = RefCounted::unreference();
            auVar92 = local_3a8;
            if (cVar66 != '\0') {
               cVar66 = predelete_handler((Object*)local_3a8);
               if (cVar66 != '\0') {
                  ( **(code**)( *(long*)auVar92 + 0x140 ) )(auVar92);
                  Memory::free_static((void*)auVar92, false);
               }

            }

         }

         auVar51._8_8_ = 0;
         auVar51._0_8_ = uStack_3a0;
         _local_3a8 = auVar51 << 0x40;
         String::parse_latin1(local_6d8, _LC88);
         local_3b8 = (Object*)0x0;
         String::parse_latin1((String*)local_730, "*");
         Node::find_children(local_458, param_1, bVar93, bVar94);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
         Node::get_name();
         if (local_3b8 == (Object*)0x0) {
            auVar47._8_8_ = 0;
            auVar47._0_8_ = uStack_3a0;
            _local_3a8 = auVar47 << 0x40;
         }
 else {
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uStack_3a0;
            _local_3a8 = auVar30 << 0x40;
            if (*(char**)( local_3b8 + 8 ) == (char*)0x0) {
               if (*(long*)( local_3b8 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3b8 + 0x10 ));
               }

            }
 else {
               String::parse_latin1(local_6d8, *(char**)( local_3b8 + 8 ));
            }

         }

         operator+((char *)&
         local_450,(String*)&_LC109;
         CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
         if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
            StringName::unref();
         }

         while (true) {
            iVar70 = Array::size();
            if (iVar70 == 0) break;
            Array::pop_back();
            pOVar85 = Variant::operator_cast_to_Object_((Variant*)&local_108);
            if (pOVar85 != (Object*)0x0) {
               pOVar85 = (Object*)__dynamic_cast(pOVar85, &Object::typeinfo, &AnimationPlayer::typeinfo, 0);
            }

            if (Variant::needs_deinit[(int)local_108] != '\0') {
               Variant::_clear_internal();
            }

            local_448 = (long*)0x0;
            AnimationMixer::get_animation_list((List*)pOVar85);
            if (( local_448 != (long*)0x0 ) && ( lVar84 = lVar84 != 0 )) {
               do {
                  uVar108 = 0;
                  AnimationMixer::get_animation((StringName*)&local_440);
                  iVar70 = Animation::get_track_count();
                  if (0 < iVar70) {
                     do {
                        Animation::track_get_path(iVar109);
                        iVar72 = NodePath::get_name_count();
                        NodePath::~NodePath((NodePath*)local_6d8);
                        if (iVar72 == 0) {
                           Ref<Animation>::unref((Ref<Animation>*)&local_440);
                           List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_448);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_450);
                           Array::~Array((Array*)local_458);
                           goto LAB_00105683;
                        }

                        Animation::track_get_path(wVar104);
                        NodePath::get_name(iVar109);
                        cVar66 = StringName::operator ==((StringName*)local_6d8, (String*)&local_450);
                        if (( StringName::configured != '\0' ) && ( local_3a8 != (undefined1[8])0x0 )) {
                           StringName::unref();
                        }

                        NodePath::~NodePath((NodePath*)local_730);
                        if (cVar66 != '\0') {
                           Animation::track_get_path(iVar109);
                           iVar72 = NodePath::get_subname_count();
                           NodePath::~NodePath((NodePath*)local_6d8);
                           if (0 < iVar72) {
                              Animation::track_get_path(iVar76);
                              NodePath::get_concatenated_subnames();
                              if (local_3b8 == (Object*)0x0) {
                                 auVar43._8_8_ = 0;
                                 auVar43._0_8_ = uStack_3a0;
                                 _local_3a8 = auVar43 << 0x40;
                              }
 else {
                                 auVar31._8_8_ = 0;
                                 auVar31._0_8_ = uStack_3a0;
                                 _local_3a8 = auVar31 << 0x40;
                                 if (*(char**)( local_3b8 + 8 ) == (char*)0x0) {
                                    if (*(long*)( local_3b8 + 0x10 ) != 0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3b8 + 0x10 ));
                                    }

                                 }
 else {
                                    String::parse_latin1(local_6d8, *(char**)( local_3b8 + 8 ));
                                 }

                              }

                              iVar72 = Skeleton3D::find_bone(local_768);
                              CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
                              if (( StringName::configured != '\0' ) && ( local_3b8 != (Object*)0x0 )) {
                                 StringName::unref();
                              }

                              NodePath::~NodePath((NodePath*)local_718);
                              if (-1 < iVar72) goto LAB_0010bfe6;
                           }

                           operator+((char *)&
                           local_438,(String*)&_LC109;
                           Animation::track_get_path(iVar109);
                           iVar72 = NodePath::get_name_count();
                           NodePath::~NodePath((NodePath*)local_6d8);
                           if (1 < iVar72) {
                              Animation::track_get_path(wVar104);
                              NodePath::get_names();
                              NodePath::~NodePath((NodePath*)local_730);
                              if (uStack_3a0 == (uint*)0x0) {
                                 lVar78 = 0;
                                 LAB_0010f2e7:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, 0, lVar78, "p_index", "size()", "", false, false);
                              }
 else {
                                 lVar78 = *(long*)( (long)uStack_3a0 + -8 );
                                 if (lVar78 < 1) goto LAB_0010f2e7;
                                 CowData<StringName>::_copy_on_write((CowData<StringName>*)( local_3a8 + 8 ));
                                 if (uStack_3a0 == (uint*)0x0) {
                                    lVar78 = -1;
                                 }
 else {
                                    lVar78 = *(long*)( (long)uStack_3a0 + -8 ) + -1;
                                    if (0 < lVar78) {
                                       lVar100 = 0;
                                       plVar98 = (long*)uStack_3a0;
                                       do {
                                          if (*plVar98 != plVar98[1]) {
                                             StringName::unref();
                                             lVar6 = plVar98[1];
                                             plVar98[1] = 0;
                                             *plVar98 = lVar6;
                                          }

                                          lVar100 = lVar100 + 1;
                                          plVar98 = plVar98 + 1;
                                       }
 while ( lVar100 != lVar78 );
                                    }

                                 }

                                 CowData<StringName>::resize<false>((CowData<StringName>*)( local_3a8 + 8 ), lVar78);
                              }

                              if (uStack_3a0 != (uint*)0x0) {
                                 lVar100 = 0;
                                 do {
                                    lVar78 = *(long*)( (long)uStack_3a0 + -8 );
                                    if (lVar78 <= lVar100) break;
                                    if (lVar78 <= (long)uVar108) goto LAB_0010734b;
                                    lVar78 = *(long*)( (long)uStack_3a0 + uVar108 * 8 );
                                    if (lVar78 == 0) {
                                       local_3c8 = 0;
                                    }
 else {
                                       local_3c8 = 0;
                                       if (*(char**)( lVar78 + 8 ) == (char*)0x0) {
                                          if (*(long*)( lVar78 + 0x10 ) != 0) {
                                             CowData<char32_t>::_ref((CowData<char32_t>*)local_718, (CowData*)( lVar78 + 0x10 ));
                                          }

                                       }
 else {
                                          String::parse_latin1((String*)local_718, *(char**)( lVar78 + 8 ));
                                       }

                                    }

                                    lVar100 = lVar100 + 1;
                                    operator+((char *)
                                    local_730,(String*)&_LC110;
                                    String::operator +=((String*)&local_438, (String*)local_730);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
                                    CowData<char32_t>::_unref((CowData<char32_t>*)local_718);
                                 }
 while ( uStack_3a0 != (uint*)0x0 );
                              }

                              CowData<StringName>::_unref((CowData<StringName>*)( local_3a8 + 8 ));
                           }

                           Animation::track_get_path(iVar109);
                           iVar72 = NodePath::get_subname_count();
                           NodePath::~NodePath((NodePath*)local_6d8);
                           if (0 < iVar72) {
                              Animation::track_get_path((int)(NodePath*)&local_3d8);
                              NodePath::get_concatenated_subnames();
                              if (local_3c8 == 0) {
                                 local_3b8 = (Object*)0x0;
                              }
 else {
                                 local_3b8 = (Object*)0x0;
                                 if (*(char**)( local_3c8 + 8 ) == (char*)0x0) {
                                    if (*(long*)( local_3c8 + 0x10 ) != 0) {
                                       CowData<char32_t>::_ref((CowData<char32_t>*)local_730, (CowData*)( local_3c8 + 0x10 ));
                                    }

                                 }
 else {
                                    String::parse_latin1((String*)local_730, *(char**)( local_3c8 + 8 ));
                                 }

                              }

                              local_430 = 0;
                              String::parse_latin1((String*)&local_430, ":");
                              String::operator +((String*)&local_3e8, (String*)&local_438);
                              String::operator +(local_6d8, (String*)&local_3e8);
                              if ((undefined1[8])local_438 != local_3a8) {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_438);
                                 local_438 = (Object*)local_3a8;
                                 auVar42._8_8_ = 0;
                                 auVar42._0_8_ = uStack_3a0;
                                 _local_3a8 = auVar42 << 0x40;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e8);
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_430);
                              CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
                              if (( StringName::configured != '\0' ) && ( local_3c8 != 0 )) {
                                 StringName::unref();
                              }

                              NodePath::~NodePath((NodePath*)&local_3d8);
                           }

                           pOVar85 = local_440;
                           NodePath::NodePath((NodePath*)local_6d8, (String*)&local_438);
                           Animation::track_set_path((int)pOVar85, (NodePath*)( uVar108 & 0xffffffff ));
                           NodePath::~NodePath((NodePath*)local_6d8);
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_438);
                        }

                        LAB_0010bfe6:uVar108 = uVar108 + 1;
                     }
 while ( (long)iVar70 != uVar108 );
                  }

                  Ref<Animation>::unref((Ref<Animation>*)&local_440);
                  lVar84 = *(long*)( lVar84 + 8 );
               }
 while ( lVar84 != 0 );
            }

            List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_448);
         }
;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_450);
         Array::~Array((Array*)local_458);
         CowData<char32_t>::_unref(local_778);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_468);
         local_6f8 = pSVar79;
         LAB_00108632:local_708 = (Variant*)&local_108;
         Variant::Variant(local_708, "retarget/rest_fixer/keep_global_rest_on_leftovers");
         pVVar80 = (Variant*)Dictionary::operator [](param_3);
         bVar111 = Variant::operator_cast_to_bool(pVVar80);
         if (Variant::needs_deinit[(int)local_108] != '\0') {
            Variant::_clear_internal();
         }

         local_3e0 = (CowData<int>*)0x0;
         if (bVar67 || bVar111) {
            Skeleton3D::get_parentless_bones();
            this(CowData<int> * )(local_3a8 + 8);
            while (( local_3d0 != (int*)0x0 && ( 0 < *(long*)( local_3d0 + -2 ) ) )) {
               iVar70 = *local_3d0;
               Vector<int>::remove_at((Vector<int>*)&local_3d8, 0);
               Skeleton3D::get_bone_children(iVar76);
               CowData<int>::_copy_on_write((CowData<int>*)&local_3c0);
               piVar97 = local_3c0;
               CowData<int>::_copy_on_write((CowData<int>*)&local_3c0);
               piVar110 = local_3c0;
               if (local_3c0 != (int*)0x0) {
                  piVar110 = local_3c0 + *(long*)( local_3c0 + -2 );
               }

               for (; piVar110 != piVar97; piVar97 = piVar97 + 1) {
                  Vector<int>::push_back((Vector<int>*)&local_3d8, *piVar97);
               }

               if (bVar65) {
                  Skeleton3D::get_bone_name(iVar109);
                  StringName::StringName((StringName*)&local_450, local_6d8, false);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
                  bVar53 = false;
               }
 else {
                  Skeleton3D::get_bone_name(wVar104);
                  StringName::StringName((StringName*)local_6d8, (String*)local_730, false);
                  BoneMap::find_profile_bone_name((StringName*)&local_450);
                  if (( StringName::configured != '\0' ) && ( local_3a8 != (undefined1[8])0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
                  bVar53 = bVar67 || bVar111;
               }

               auVar52._8_8_ = 0;
               auVar52._0_8_ = uStack_3a0;
               _local_3a8 = auVar52 << 0x40;
               if (local_450 != 0) {
                  cVar66 = SkeletonProfile::has_bone(local_478);
                  if (cVar66 == '\0') {
                     if (( StringName::configured != '\0' ) && ( local_3a8 != (undefined1[8])0x0 )) {
                        StringName::unref();
                     }

                     Skeleton3D::get_bone_children(wVar104);
                     while (( local_3b0 != (uint*)0x0 && ( 0 < *(long*)( local_3b0 + -2 ) ) )) {
                        Vector<int>::remove_at(local_730, 0);
                        Skeleton3D::get_bone_children(iVar109);
                        CowData<int>::_copy_on_write(this);
                        piVar97 = (int*)uStack_3a0;
                        CowData<int>::_copy_on_write(this);
                        piVar110 = (int*)uStack_3a0;
                        if (uStack_3a0 != (uint*)0x0) {
                           piVar110 = (int*)uStack_3a0 + *(long*)( (int*)uStack_3a0 + -2 );
                        }

                        for (; piVar97 != piVar110; piVar97 = piVar97 + 1) {
                           Vector<int>::push_back(local_730, *piVar97);
                        }

                        if (bVar65) {
                           Skeleton3D::get_bone_name((int)(String*)&local_430);
                           StringName::StringName((StringName*)&local_448, (String*)&local_430, false);
                        }
 else {
                           Skeleton3D::get_bone_name((int)(String*)&local_440);
                           StringName::StringName((StringName*)&local_438, (String*)&local_440, false);
                           BoneMap::find_profile_bone_name((StringName*)&local_448);
                        }

                        if (bVar53) {
                           if (( StringName::configured != '\0' ) && ( local_438 != (Object*)0x0 )) {
                              StringName::unref();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_440);
                        }

                        if (bVar65) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_430);
                        }

                        local_430 = 0;
                        if (local_448 != (long*)0x0) {
                           cVar66 = SkeletonProfile::has_bone(local_478);
                           if (cVar66 != '\0') {
                              if (StringName::configured != '\0') {
                                 if (local_430 != 0) {
                                    StringName::unref();
                                    if (StringName::configured == '\0') goto LAB_0010cdb8;
                                 }

                                 if (local_448 != (long*)0x0) {
                                    StringName::unref();
                                 }

                              }

                              LAB_0010cdb8:CowData<int>::_unref(this);
                              goto LAB_0010ccfc;
                           }

                           if (StringName::configured != '\0') {
                              if (local_430 != 0) {
                                 StringName::unref();
                                 if (StringName::configured == '\0') goto LAB_0010cccd;
                              }

                              if (local_448 != (long*)0x0) {
                                 StringName::unref();
                              }

                           }

                        }

                        LAB_0010cccd:CowData<int>::_unref(this);
                     }
;
                     Vector<int>::push_back((Vector<int>*)&local_3e8, iVar70);
                     LAB_0010ccfc:CowData<int>::_unref((CowData<int>*)&local_3b0);
                     LAB_0010ca58:if (StringName::configured != '\0') {
                        LAB_0010ca61:if (local_450 != 0) {
                           StringName::unref();
                        }

                     }

                  }
 else if (StringName::configured != '\0') {
                     if (local_3a8 != (undefined1[8])0x0) {
                        StringName::unref();
                        goto LAB_0010ca58;
                     }

                     goto LAB_0010ca61;
                  }

               }

               CowData<int>::_unref((CowData<int>*)&local_3c0);
            }
;
            CowData<int>::_unref((CowData<int>*)&local_3d0);
         }

         local_3c0 = (int*)0x0;
         iVar70 = Skeleton3D::get_bone_count();
         CowData<Basis>::resize<false>((CowData<Basis>*)&local_3c0, (long)iVar70);
         CowData<Basis>::_copy_on_write((CowData<Basis>*)&local_3c0);
         piVar110 = local_3c0;
         Skeleton3D::get_parentless_bones();
         iVar72 = (int)local_738;
         iVar70 = (int)(CowData<char32_t>*)&local_3d8;
         if (local_3b0 != (uint*)0x0) {
            do {
               if (*(long*)( local_3b0 + -2 ) < 1) break;
               uVar69 = *local_3b0;
               Vector<int>::remove_at(local_730, 0);
               Skeleton3D::get_bone_children(iVar109);
               for (lVar78 = 0; ( uStack_3a0 != (uint*)0x0 && ( lVar78 < *(long*)( (long)uStack_3a0 + -8 ) ) ); lVar78 = lVar78 + 1) {
                  Vector<int>::push_back(local_730, *(int*)( (long)uStack_3a0 + lVar78 * 4 ));
               }

               _local_198 = ZEXT416((uint)_LC77);
               local_178 = (undefined1[4])0x3f800000;
               _local_188 = _local_198;
               if (bVar65) {
                  Skeleton3D::get_bone_name(iVar70);
                  StringName::StringName((StringName*)&local_438, (String*)&local_3d8, false);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
               }
 else {
                  Skeleton3D::get_bone_name((int)(String*)&local_430);
                  StringName::StringName((StringName*)&local_3d8, (String*)&local_430, false);
                  BoneMap::find_profile_bone_name((StringName*)&local_438);
                  if (( StringName::configured != '\0' ) && ( local_3d8 != (Object*)0x0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_430);
               }

               iVar74 = (int)local_708;
               if (local_438 != (Object*)0x0) {
                  _local_168 = ZEXT416((uint)_LC77);
                  local_148 = 1.0;
                  _local_158 = _local_168;
                  iVar77 = Skeleton3D::get_bone_parent(iVar72);
                  if (-1 < iVar77) {
                     Skeleton3D::get_bone_global_rest(iVar74);
                     local_168._4_4_ = fStack_104;
                     local_168._0_4_ = local_108;
                     uStack_160._4_4_ = fStack_fc;
                     uStack_160._0_4_ = fStack_100;
                     local_158._4_4_ = fStack_f4;
                     local_158._0_4_ = fStack_f8;
                     uStack_150._4_4_ = fStack_ec;
                     uStack_150._0_4_ = fStack_f0;
                     local_148 = local_e8;
                  }

                  iVar77 = SkeletonProfile::find_bone(local_478);
                  if (iVar77 < 0) {
                     if (bVar111) {
                        lVar78 = CowData<int>::find(local_3e0, (int*)(ulong)uVar69, 0);
                        if (lVar78 != -1) {
                           uVar108 = (ulong)local_3f8 & 0xffffffff;
                           if ((uint)local_3f8 <= uVar69) {
                              uVar87 = (ulong)uVar69;
                              goto LAB_00107785;
                           }

                           pfVar89 = (float*)( (ulong)uVar69 * 0x30 + (long)local_3f0 );
                           Basis::inverse();
                           fVar113 = pfVar89[8];
                           fVar118 = *pfVar89;
                           fVar120 = pfVar89[1];
                           fVar130 = pfVar89[3];
                           fVar136 = pfVar89[4];
                           pfVar4 = pfVar89 + 6;
                           local_178 = ( undefined1[4] )(pfVar89[2] * fStack_f0 + pfVar89[5] * fStack_ec + fVar113 * local_e8);
                           local_198._4_4_ = fStack_100 * (float)( ( ulong ) * (undefined8*)pfVar4 >> 0x20 ) + fStack_104 * fVar136 + local_108 * fVar120;
                           local_198._0_4_ = fStack_100 * (float)*(undefined8*)pfVar4 + fStack_104 * fVar130 + local_108 * fVar118;
                           fStack_190 = fStack_100 * fVar113 + fStack_104 * pfVar89[5] + local_108 * pfVar89[2];
                           fStack_18c = fStack_f4 * *pfVar4 + fStack_f8 * fVar130 + fStack_fc * fVar118;
                           local_188._4_4_ = fStack_f4 * fVar113 + fStack_fc * pfVar89[2] + fStack_f8 * pfVar89[5];
                           local_188._0_4_ = fStack_f4 * pfVar89[7] + fStack_fc * fVar120 + fStack_f8 * fVar136;
                           fStack_180 = local_e8 * (float)*(undefined8*)pfVar4 + fStack_f0 * fVar118 + fStack_ec * fVar130;
                           fStack_17c = local_e8 * (float)( ( ulong ) * (undefined8*)pfVar4 >> 0x20 ) + fStack_f0 * fVar120 + fStack_ec * fVar136;
                        }

                     }

                  }
 else {
                     Skeleton3D::get_bone_global_rest(iVar74);
                     Basis::inverse();
                     local_178 = ( undefined1[4] )(fStack_100 * (float)uStack_120 + fStack_f4 * uStack_120._4_4_ + local_e8 * (float)local_118._0_4_);
                     local_198._4_4_ = (float)uStack_130 * fStack_ec + (float)local_138._4_4_ * fStack_f8 + (float)local_138._0_4_ * fStack_104;
                     local_198._0_4_ = (float)uStack_130 * fStack_f0 + (float)local_138._4_4_ * fStack_fc + (float)local_138._0_4_ * local_108;
                     fStack_190 = (float)uStack_130 * local_e8 + (float)local_138._4_4_ * fStack_f4 + (float)local_138._0_4_ * fStack_100;
                     fStack_18c = (float)local_128._4_4_ * fStack_f0 + (float)local_128._0_4_ * fStack_fc + uStack_130._4_4_ * local_108;
                     local_188._4_4_ = (float)local_128._4_4_ * local_e8 + uStack_130._4_4_ * fStack_100 + fStack_f4 * (float)local_128._0_4_;
                     local_188._0_4_ = (float)local_128._4_4_ * fStack_ec + uStack_130._4_4_ * fStack_104 + fStack_f8 * (float)local_128._0_4_;
                     fStack_180 = (float)local_118._0_4_ * fStack_f0 + (float)uStack_120 * local_108 + fStack_fc * uStack_120._4_4_;
                     fStack_17c = (float)local_118._0_4_ * fStack_ec + (float)uStack_120 * fStack_104 + fStack_f8 * uStack_120._4_4_;
                  }

               }

               iVar77 = Skeleton3D::get_bone_parent(iVar72);
               if (-1 < iVar77) {
                  Skeleton3D::get_bone_rest(iVar74);
                  iVar74 = Skeleton3D::get_bone_parent(iVar72);
                  uVar108 = (ulong)iVar74;
                  if ((long)uVar108 < 0) {
                     LAB_0010cdd7:if (piVar110 == (int*)0x0) goto LAB_0010cde0;
                  }
 else {
                     if (piVar110 == (int*)0x0) goto LAB_0010cde0;
                     if ((long)uVar108 < *(long*)( piVar110 + -2 )) {
                        pfVar4 = (float*)( piVar110 + uVar108 * 9 );
                        Basis::inverse();
                        fVar118 = *pfVar4;
                        fVar120 = pfVar4[1];
                        fVar130 = pfVar4[2];
                        fVar136 = pfVar4[3];
                        fVar137 = pfVar4[4];
                        fVar138 = pfVar4[5];
                        fVar139 = pfVar4[6];
                        fVar160 = pfVar4[7];
                        fVar113 = pfVar4[8];
                        pfVar4 = (float*)( piVar110 + (long)(int)uVar69 * 9 );
                        fVar161 = fVar138 * uStack_120._4_4_ + fVar130 * (float)uStack_120 + fVar113 * (float)local_118._0_4_;
                        fVar167 = (float)uStack_120 * fVar120 + fVar137 * uStack_120._4_4_ + fVar160 * (float)local_118._0_4_;
                        fVar119 = uStack_120._4_4_ * fVar136 + (float)uStack_120 * fVar118 + (float)local_118._0_4_ * fVar139;
                        pfVar4[8] = fVar119 * fStack_100 + fVar167 * fStack_f4 + fVar161 * local_e8;
                        *pfVar4 = local_108 * ( fVar139 * (float)uStack_130 + fVar136 * (float)local_138._4_4_ + fVar118 * (float)local_138._0_4_ ) + fStack_fc * ( fVar120 * (float)local_138._0_4_ + fVar137 * (float)local_138._4_4_ + fVar160 * (float)uStack_130 ) + ( fVar130 * (float)local_138._0_4_ + (float)local_138._4_4_ * fVar138 + (float)uStack_130 * fVar113 ) * fStack_f0;
                        pfVar4[1] = fStack_104 * ( fVar139 * (float)uStack_130 + fVar136 * (float)local_138._4_4_ + fVar118 * (float)local_138._0_4_ ) + fStack_f8 * ( fVar120 * (float)local_138._0_4_ + fVar137 * (float)local_138._4_4_ + fVar160 * (float)uStack_130 ) + ( fVar130 * (float)local_138._0_4_ + (float)local_138._4_4_ * fVar138 + (float)uStack_130 * fVar113 ) * fStack_ec;
                        pfVar4[2] = fStack_100 * ( fVar139 * (float)uStack_130 + fVar136 * (float)local_138._4_4_ + fVar118 * (float)local_138._0_4_ ) + fStack_f4 * ( fVar120 * (float)local_138._0_4_ + fVar137 * (float)local_138._4_4_ + fVar160 * (float)uStack_130 ) + ( fVar130 * (float)local_138._0_4_ + (float)local_138._4_4_ * fVar138 + (float)uStack_130 * fVar113 ) * local_e8;
                        pfVar4[3] = local_108 * ( fVar139 * (float)local_128._4_4_ + fVar136 * (float)local_128._0_4_ + fVar118 * uStack_130._4_4_ ) + fStack_fc * ( fVar120 * uStack_130._4_4_ + fVar137 * (float)local_128._0_4_ + fVar160 * (float)local_128._4_4_ ) + ( fVar130 * uStack_130._4_4_ + (float)local_128._0_4_ * fVar138 + (float)local_128._4_4_ * fVar113 ) * fStack_f0;
                        pfVar4[4] = fStack_ec * ( fVar138 * (float)local_128._0_4_ + fVar130 * uStack_130._4_4_ + fVar113 * (float)local_128._4_4_ ) + fStack_104 * ( (float)local_128._0_4_ * fVar136 + uStack_130._4_4_ * fVar118 + (float)local_128._4_4_ * fVar139 ) + fStack_f8 * ( uStack_130._4_4_ * fVar120 + fVar137 * (float)local_128._0_4_ + fVar160 * (float)local_128._4_4_ );
                        pfVar4[5] = local_e8 * ( fVar138 * (float)local_128._0_4_ + fVar130 * uStack_130._4_4_ + fVar113 * (float)local_128._4_4_ ) + fStack_100 * ( (float)local_128._0_4_ * fVar136 + uStack_130._4_4_ * fVar118 + (float)local_128._4_4_ * fVar139 ) + fStack_f4 * ( uStack_130._4_4_ * fVar120 + fVar137 * (float)local_128._0_4_ + fVar160 * (float)local_128._4_4_ );
                        pfVar4[6] = fStack_f0 * fVar161 + local_108 * fVar119 + fStack_fc * fVar167;
                        pfVar4[7] = fStack_ec * ( fVar138 * uStack_120._4_4_ + fVar130 * (float)uStack_120 + fVar113 * (float)local_118._0_4_ ) + fStack_104 * ( uStack_120._4_4_ * fVar136 + (float)uStack_120 * fVar118 + (float)local_118._0_4_ * fVar139 ) + fStack_f8 * ( (float)uStack_120 * fVar120 + fVar137 * uStack_120._4_4_ + fVar160 * (float)local_118._0_4_ );
                        goto LAB_00108cfb;
                     }

                  }

                  LAB_0010b5f5:lVar78 = *(long*)( piVar110 + -2 );
                  goto LAB_0010734b;
               }

               Skeleton3D::get_bone_rest(iVar74);
               Basis::inverse();
               fVar113 = SUB164(_local_128, 0);
               fVar118 = SUB164(_local_128, 8);
               fVar120 = SUB164(_local_128, 0xc);
               pfVar4 = (float*)( piVar110 + (long)(int)uVar69 * 9 );
               pfVar4[8] = fStack_100 * fVar118 + fStack_f4 * fVar120 + local_e8 * (float)local_118._0_4_;
               *pfVar4 = fStack_fc * (float)local_138._4_4_ + local_108 * (float)local_138._0_4_ + (float)uStack_130 * fStack_f0;
               pfVar4[1] = fStack_f8 * (float)local_138._4_4_ + fStack_104 * (float)local_138._0_4_ + (float)uStack_130 * fStack_ec;
               pfVar4[2] = fStack_f4 * (float)local_138._4_4_ + fStack_100 * (float)local_138._0_4_ + (float)uStack_130 * local_e8;
               pfVar4[3] = fStack_fc * fVar113 + local_108 * uStack_130._4_4_ + (float)local_128._4_4_ * fStack_f0;
               pfVar4[4] = fStack_ec * (float)local_128._4_4_ + fVar113 * fStack_f8 + uStack_130._4_4_ * fStack_104;
               pfVar4[5] = local_e8 * (float)local_128._4_4_ + fVar113 * fStack_f4 + uStack_130._4_4_ * fStack_100;
               pfVar4[6] = fStack_f0 * (float)local_118._0_4_ + fVar120 * fStack_fc + fVar118 * local_108;
               pfVar4[7] = fStack_ec * (float)local_118._0_4_ + fVar120 * fStack_f8 + fVar118 * fStack_104;
               LAB_00108cfb:local_668 = local_138;
               local_688 = (Basis*)local_198;
               iVar74 = Skeleton3D::get_bone_parent(iVar72);
               if (iVar74 < 0) {
                  local_748._0_4_ = 0.0;
                  local_6a0 = 0.0;
                  fStack_69c = 0.0;
                  local_6b8 = _LC84;
                  local_6c8 = 1.0;
                  local_758 = 0.0;
                  fVar113 = _LC77;
                  fVar118 = _UNK_001151d4;
               }
 else {
                  iVar74 = Skeleton3D::get_bone_parent(iVar72);
                  uVar108 = (ulong)iVar74;
                  if (piVar110 == (int*)0x0) goto LAB_0010cde0;
                  if ((long)uVar108 < 0) goto LAB_0010cdd7;
                  if (*(long*)( piVar110 + -2 ) <= (long)uVar108) goto LAB_0010b5f5;
                  piVar97 = piVar110 + uVar108 * 9;
                  local_748._0_4_ = (float)piVar97[7];
                  local_6c8 = (float)piVar97[8];
                  local_6a0 = (float)*(undefined8*)( piVar97 + 2 );
                  fStack_69c = (float)( ( ulong ) * (undefined8*)( piVar97 + 4 ) >> 0x20 );
                  local_6b8 = CONCAT44(piVar97[4], piVar97[1]);
                  local_758 = (float)piVar97[6];
                  fVar113 = (float)*(undefined8*)piVar97;
                  fVar118 = (float)( ( ulong ) * (undefined8*)( piVar97 + 2 ) >> 0x20 );
               }

               Skeleton3D::get_bone_rest((int)local_668);
               auVar117 = _local_168;
               fVar120 = local_118._4_4_;
               fVar130 = local_118._8_4_;
               local_168._4_4_ = fVar120 * fVar118 + fVar130 * (float)( (ulong)local_6b8 >> 0x20 ) + (float)local_118._12_4_ * fStack_69c;
               local_168._0_4_ = fVar120 * fVar113 + fVar130 * (float)local_6b8 + (float)local_118._12_4_ * local_6a0;
               uStack_160._4_4_ = auVar117._12_4_;
               uStack_160._0_4_ = fVar130 * local_748._0_4_ + local_758 * fVar120 + (float)local_118._12_4_ * local_6c8;
               Transform3D::Transform3D((Transform3D*)local_708, local_688, (Vector3*)local_168);
               Skeleton3D::set_bone_rest(iVar72, (Transform3D*)(ulong)uVar69);
               if (( StringName::configured != '\0' ) && ( local_438 != (Object*)0x0 )) {
                  StringName::unref();
               }

               CowData<int>::_unref((CowData<int>*)( local_3a8 + 8 ));
            }
 while ( local_3b0 != (uint*)0x0 );
         }

         auVar49._8_8_ = 0;
         auVar49._0_8_ = uStack_3a0;
         _local_3a8 = auVar49 << 0x40;
         String::parse_latin1(local_6d8, _LC88);
         local_3d8 = (Object*)0x0;
         String::parse_latin1((String*)&local_3d8, "*");
         Node::find_children((String*)&local_450, param_1, SUB81((CowData<char32_t>*)&local_3d8, 0), bVar94);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
         CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
         bVar65 = false;
         LAB_00108f3e:do {
            iVar74 = Array::size();
            if (iVar74 == 0) goto LAB_0010f43c;
            Array::pop_back();
            pOVar85 = Variant::operator_cast_to_Object_(local_708);
            if (pOVar85 == (Object*)0x0) {
               if (Variant::needs_deinit[(int)local_108] != '\0') {
                  Variant::_clear_internal();
               }

            }
 else {
               pLVar90 = (List*)__dynamic_cast(pOVar85, &Object::typeinfo, &AnimationPlayer::typeinfo, 0);
               if (Variant::needs_deinit[(int)local_108] != '\0') {
                  Variant::_clear_internal();
               }

               if (pLVar90 != (List*)0x0) {
                  local_448 = (long*)0x0;
                  AnimationMixer::get_animation_list(pLVar90);
                  if (( local_448 != (long*)0x0 ) && ( lVar78 = lVar78 != 0 )) {
                     do {
                        AnimationMixer::get_animation((StringName*)&local_440);
                        iVar74 = Animation::get_track_count();
                        if (0 < iVar74) {
                           iVar77 = 0;
                           do {
                              Animation::track_get_path(iVar109);
                              iVar71 = NodePath::get_subname_count();
                              if (iVar71 == 1) {
                                 cVar66 = Animation::track_get_type((int)local_440);
                                 if (cVar66 != '\x01') {
                                    cVar66 = Animation::track_get_type((int)local_440);
                                    if (cVar66 != '\x02') {
                                       cVar66 = Animation::track_get_type((int)local_440);
                                       if (cVar66 != '\x03') goto LAB_00109070;
                                    }

                                 }

                                 NodePath::~NodePath((NodePath*)local_6d8);
                                 cVar66 = Animation::track_is_compressed((int)local_440);
                                 if (cVar66 == '\0') {
                                    Animation::track_get_path((int)(NodePath*)&local_430);
                                    NodePath::get_concatenated_names();
                                    if (local_3d8 == (Object*)0x0) {
                                       local_438 = (Object*)0x0;
                                    }
 else {
                                       pcVar5 = *(char**)( local_3d8 + 8 );
                                       local_438 = (Object*)0x0;
                                       if (pcVar5 == (char*)0x0) {
                                          if (*(long*)( local_3d8 + 0x10 ) != 0) {
                                             CowData<char32_t>::_ref((CowData<char32_t>*)&local_438, (CowData*)( local_3d8 + 0x10 ));
                                             goto LAB_0010917d;
                                          }

                                          if (StringName::configured == '\0') goto LAB_00109199;
                                       }
 else {
                                          uStack_3a0 = (uint*)strlen(pcVar5);
                                          local_3a8 = (undefined1[8])pcVar5;
                                          String::parse_latin1((StrRange*)&local_438);
                                          LAB_0010917d:if (( StringName::configured == '\0' ) || ( local_3d8 == (Object*)0x0 )) goto LAB_00109199;
                                       }

                                       StringName::unref();
                                    }

                                    LAB_00109199:local_778 = (CowData<char32_t>*)&local_438;
                                    NodePath::~NodePath((NodePath*)&local_430);
                                    AnimationMixer::get_root_node();
                                    pNVar83 = (NodePath*)Node::get_node((NodePath*)pLVar90);
                                    NodePath::NodePath((NodePath*)&local_3d8, (String*)local_778);
                                    lVar84 = Node::get_node(pNVar83);
                                    NodePath::~NodePath((NodePath*)&local_3d8);
                                    NodePath::~NodePath((NodePath*)local_6d8);
                                    if (lVar84 == 0) {
                                       _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x2e3, "Condition \"!node\" is true. Continuing.", 0, 0);
                                    }
 else {
                                       pSVar79 = (String*)__dynamic_cast(lVar84, &Object::typeinfo, &Skeleton3D::typeinfo, 0);
                                       if (( ( pSVar79 != (String*)0x0 ) && ( ( local_768 == pSVar79 || local_6f8 == pSVar79 || ( !bVar67 ) ) ) ) && ( ( iVar73 == 2 || ( local_738 == pSVar79 ) ) )) {
                                          Animation::track_get_path(iVar109);
                                          NodePath::get_subname(iVar70);
                                          NodePath::~NodePath((NodePath*)local_6d8);
                                          if (local_3d8 != (Object*)0x0) {
                                             if (*(char**)( local_3d8 + 8 ) == (char*)0x0) {
                                                if (( *(long*)( local_3d8 + 0x10 ) != 0 ) && ( 1 < *(uint*)( *(long*)( local_3d8 + 0x10 ) + -8 ) )) {
                                                   auVar28._8_8_ = 0;
                                                   auVar28._0_8_ = uStack_3a0;
                                                   _local_3a8 = auVar28 << 0x40;
                                                   CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3d8 + 0x10 ));
                                                   goto LAB_0010a049;
                                                }

                                                if (StringName::configured == '\0') goto LAB_0010924b;
                                             }
 else {
                                                auVar24._8_8_ = 0;
                                                auVar24._0_8_ = uStack_3a0;
                                                _local_3a8 = auVar24 << 0x40;
                                                String::parse_latin1(local_6d8, *(char**)( local_3d8 + 8 ));
                                                LAB_0010a049:uVar69 = Skeleton3D::find_bone(local_738);
                                                CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
                                                if (iVar73 == 2) {
                                                   iVar71 = SkeletonProfile::find_bone(local_478);
                                                   if (-1 < iVar71) goto LAB_0010a06e;
                                                   lVar84 = CowData<int>::find(local_3e0, (int*)(ulong)uVar69, 0);
                                                   if (lVar84 != -1) {
                                                      bVar65 = bVar95;
                                                   }

                                                }
 else {
                                                   LAB_0010a06e:uVar108 = (ulong)local_408 & 0xffffffff;
                                                   if ((uint)local_408 <= uVar69) goto LAB_00107768;
                                                   pauVar86 = (undefined1(*) [16])( (ulong)uVar69 * 0x30 + (long)local_400 );
                                                   _local_198 = *pauVar86;
                                                   _local_188 = pauVar86[1];
                                                   _local_178 = pauVar86[2];
                                                   Skeleton3D::get_bone_rest((int)local_168);
                                                   _local_138 = ZEXT416((uint)_LC77);
                                                   local_118._0_12_ = ZEXT412(0x3f800000);
                                                   local_118._12_4_ = 0;
                                                   local_e8 = 1.0;
                                                   fStack_e4 = 0.0;
                                                   fStack_e0 = 0.0;
                                                   fStack_dc = 0.0;
                                                   local_108 = _LC77;
                                                   fStack_104 = 0.0;
                                                   fStack_100 = 0.0;
                                                   fStack_fc = 0.0;
                                                   fStack_f8 = _LC77;
                                                   fStack_f4 = 0.0;
                                                   fStack_f0 = 0.0;
                                                   fStack_ec = 0.0;
                                                   _local_128 = _local_138;
                                                   uVar69 = Skeleton3D::get_bone_parent(iVar72);
                                                   if (-1 < (int)uVar69) {
                                                      if ((uint)local_3f8 <= uVar69) goto LAB_0010ecb8;
                                                      pauVar86 = (undefined1(*) [16])( (long)(int)uVar69 * 0x30 + (long)local_3f0 );
                                                      _local_138 = *pauVar86;
                                                      _local_128 = pauVar86[1];
                                                      local_118 = pauVar86[2];
                                                      Skeleton3D::get_bone_global_rest((int)local_4a8);
                                                      local_108 = local_4a8._0_4_;
                                                      fStack_104 = local_4a8._4_4_;
                                                      fStack_100 = local_4a8._8_4_;
                                                      fStack_fc = local_4a8._12_4_;
                                                      fStack_f8 = local_498;
                                                      fStack_f4 = fStack_494;
                                                      fStack_f0 = fStack_490;
                                                      fStack_ec = fStack_48c;
                                                      local_e8 = (float)local_488;
                                                      fStack_e4 = (float)( (ulong)local_488 >> 0x20 );
                                                      fStack_e0 = (float)uStack_480;
                                                      fStack_dc = (float)( (ulong)uStack_480 >> 0x20 );
                                                   }

                                                   uVar69 = Animation::track_get_key_count((int)local_440);
                                                   cVar66 = Animation::track_get_type((int)local_440);
                                                   if (cVar66 == '\x02') {
                                                      for (int i = 0; i < 4; i++) {
                                                         Basis::get_rotation_quaternion();
                                                      }

                                                      if (0 < (int)uVar69) {
                                                         uVar75 = 0;
                                                         do {
                                                            Animation::track_get_key_value((int)(Variant*)local_1c8, (int)local_440);
                                                            Variant::operator_cast_to_Quaternion(local_328);
                                                            if (Variant::needs_deinit[(int)local_1c8._0_4_] != '\0') {
                                                               Variant::_clear_internal();
                                                            }

                                                            pOVar85 = local_440;
                                                            for (int i = 0; i < 3; i++) {
                                                               Quaternion::inverse();
                                                            }

                                                            Quaternion::operator *(local_308, local_318);
                                                            Quaternion::operator *(local_2f8, local_308);
                                                            Quaternion::operator *((Quaternion*)local_2d8, local_2f8);
                                                            Quaternion::operator *((Quaternion*)&local_288, (Quaternion*)local_2d8);
                                                            Quaternion::operator *((Quaternion*)&local_258, (Quaternion*)&local_288);
                                                            Quaternion::operator *((Quaternion*)local_228, (Quaternion*)&local_258);
                                                            Variant::Variant((Variant*)local_1c8, (Quaternion*)local_228);
                                                            Animation::track_set_key_value((int)pOVar85, iVar77, (Variant*)(ulong)uVar75);
                                                            if (Variant::needs_deinit[(int)local_1c8._0_4_] != '\0') {
                                                               Variant::_clear_internal();
                                                            }

                                                            uVar75 = uVar75 + 1;
                                                         }
 while ( uVar69 != uVar75 );
                                                      }

                                                   }
 else {
                                                      cVar66 = Animation::track_get_type((int)local_440);
                                                      fVar167 = local_e8;
                                                      fVar161 = fStack_ec;
                                                      fVar119 = fStack_f0;
                                                      fVar160 = fStack_f4;
                                                      fVar139 = fStack_f8;
                                                      fVar138 = fStack_fc;
                                                      fVar137 = fStack_100;
                                                      fVar136 = fStack_104;
                                                      fVar130 = local_108;
                                                      fVar120 = fStack_13c;
                                                      fVar118 = fStack_140;
                                                      fVar113 = fStack_144;
                                                      if (cVar66 == '\x03') {
                                                         Basis::inverse();
                                                         fVar184 = local_e8;
                                                         fVar183 = fStack_ec;
                                                         fVar182 = fStack_f0;
                                                         fVar181 = fStack_f4;
                                                         fVar157 = fStack_f8;
                                                         fVar156 = fStack_fc;
                                                         fVar155 = fStack_100;
                                                         fVar154 = fStack_104;
                                                         fVar152 = local_108;
                                                         fVar121 = local_148;
                                                         uVar56 = local_168._0_4_;
                                                         uVar57 = local_168._4_4_;
                                                         fVar145 = (float)uStack_160;
                                                         uVar58 = local_158._0_4_;
                                                         uVar59 = local_158._4_4_;
                                                         fVar149 = (float)uStack_150;
                                                         fVar114 = uStack_150._4_4_;
                                                         uVar60 = local_138._0_4_;
                                                         fVar131 = uStack_130._4_4_;
                                                         fVar140 = (float)uStack_120;
                                                         fVar146 = uStack_160._4_4_;
                                                         uVar62 = local_128._0_4_;
                                                         uVar61 = local_138._4_4_;
                                                         uVar63 = local_128._4_4_;
                                                         fVar125 = (float)uStack_130;
                                                         fVar128 = uStack_120._4_4_;
                                                         uVar64 = local_118._0_4_;
                                                         Basis::inverse();
                                                         Basis::inverse();
                                                         fVar144 = local_268;
                                                         fVar142 = fStack_26c;
                                                         fVar167 = fStack_270;
                                                         fVar161 = fStack_274;
                                                         fVar119 = local_278;
                                                         fVar160 = fStack_27c;
                                                         fVar139 = fStack_280;
                                                         fVar138 = local_298;
                                                         fVar137 = fStack_29c;
                                                         fVar136 = fStack_2a0;
                                                         fVar130 = fStack_2a4;
                                                         fVar120 = local_2a8;
                                                         fVar118 = fStack_2ac;
                                                         fVar113 = fStack_2b0;
                                                         if (0 < (int)uVar69) {
                                                            fVar166 = local_2b8._4_4_;
                                                            fVar165 = (float)local_2b8;
                                                            fVar169 = local_288._4_4_;
                                                            fVar168 = (float)local_288;
                                                            fVar147 = fVar125 * fStack_240;
                                                            fVar132 = (float)uVar63 * fStack_23c;
                                                            fVar133 = (float)uVar61 * fStack_240;
                                                            fVar126 = (float)uVar64 * local_238;
                                                            fVar127 = (float)uVar62 * fStack_23c;
                                                            fVar188 = fVar128 * local_238;
                                                            fVar172 = local_238 * fVar140;
                                                            fVar187 = fStack_240 * (float)uVar60;
                                                            fVar173 = (float)uVar62 * local_248;
                                                            fVar134 = (float)uVar62 * local_258._4_4_;
                                                            fVar175 = fStack_23c * fVar131;
                                                            fVar176 = fVar125 * fStack_24c;
                                                            fVar125 = fVar125 * (float)local_258;
                                                            fVar177 = (float)uVar63 * local_248;
                                                            fVar162 = local_248 * fVar131;
                                                            uVar75 = 0;
                                                            fVar150 = (float)uVar63 * local_258._4_4_;
                                                            fVar131 = fVar131 * local_258._4_4_;
                                                            fVar178 = (float)uVar64 * fStack_244;
                                                            fVar148 = (float)uVar64 * fStack_250;
                                                            fVar179 = (float)uVar61 * fStack_24c;
                                                            fVar141 = (float)uVar61 * (float)local_258;
                                                            fVar170 = fStack_24c * (float)uVar60;
                                                            fVar189 = (float)uVar60 * (float)local_258;
                                                            fVar180 = fVar128 * fStack_244;
                                                            fVar158 = fStack_244 * fVar140;
                                                            fVar128 = fVar128 * fStack_250;
                                                            fVar140 = fVar140 * fStack_250;
                                                            do {
                                                               _local_1c8 = ZEXT416((uint)_LC77);
                                                               local_1a8 = 1.0;
                                                               _local_1b8 = _local_1c8;
                                                               Animation::track_get_key_value((int)(Variant*)local_2d8, (int)local_440);
                                                               auVar190 = Variant::operator_cast_to_Vector3((Variant*)local_2d8);
                                                               local_2e8 = auVar190;
                                                               Basis::scaled((Vector3*)local_228);
                                                               if (Variant::needs_deinit[(int)local_2d8[0]._0_4_] != '\0') {
                                                                  Variant::_clear_internal();
                                                               }

                                                               pOVar85 = local_440;
                                                               fVar115 = fVar133 + fVar127 + fVar188;
                                                               fVar163 = fVar187 + fVar175 + fVar172;
                                                               fVar122 = fVar147 + fVar132 + fVar126;
                                                               fVar135 = fVar176 + fVar177 + fVar178;
                                                               fVar159 = fVar179 + fVar173 + fVar180;
                                                               fVar185 = fVar170 + fVar162 + fVar158;
                                                               fVar171 = fVar125 + fVar150 + fVar148;
                                                               fVar174 = fVar141 + fVar134 + fVar128;
                                                               fVar129 = fVar189 + fVar131 + fVar140;
                                                               fVar151 = fVar163 * (float)uStack_220 + fVar115 * (float)local_218._4_4_ + fVar122 * local_208;
                                                               fVar153 = (float)local_218._0_4_ * fVar115 + fVar163 * (float)local_228._4_4_ + uStack_210._4_4_ * fVar122;
                                                               fVar115 = fVar115 * uStack_220._4_4_ + fVar163 * (float)local_228._0_4_ + fVar122 * (float)uStack_210;
                                                               fVar122 = fVar159 * (float)local_218._4_4_ + fVar185 * (float)uStack_220 + fVar135 * local_208;
                                                               fVar163 = local_208 * fVar171 + (float)local_218._4_4_ * fVar174 + (float)uStack_220 * fVar129;
                                                               fVar164 = uStack_210._4_4_ * fVar135 + (float)local_218._0_4_ * fVar159 + fVar185 * (float)local_228._4_4_;
                                                               fVar135 = fVar135 * (float)uStack_210 + fVar159 * uStack_220._4_4_ + fVar185 * (float)local_228._0_4_;
                                                               fVar159 = (float)local_228._4_4_ * fVar129 + (float)local_218._0_4_ * fVar174 + uStack_210._4_4_ * fVar171;
                                                               fVar129 = fVar129 * (float)local_228._0_4_ + fVar174 * uStack_220._4_4_ + fVar171 * (float)uStack_210;
                                                               fVar171 = fVar113 * fVar115 + fVar130 * fVar153 + fVar138 * fVar151;
                                                               fVar174 = fVar166 * fVar115 + fVar120 * fVar153 + fVar137 * fVar151;
                                                               fVar151 = fVar151 * fVar136 + fVar115 * fVar165 + fVar153 * fVar118;
                                                               fVar185 = fVar113 * fVar135 + fVar130 * fVar164 + fVar138 * fVar122;
                                                               fVar186 = fVar166 * fVar135 + fVar120 * fVar164 + fVar137 * fVar122;
                                                               fVar115 = fVar135 * fVar165 + fVar164 * fVar118 + fVar122 * fVar136;
                                                               fVar122 = fVar113 * fVar129 + fVar130 * fVar159 + fVar138 * fVar163;
                                                               fVar164 = fVar166 * fVar129 + fVar120 * fVar159 + fVar137 * fVar163;
                                                               fVar135 = fVar163 * fVar136 + fVar129 * fVar165 + fVar159 * fVar118;
                                                               fVar163 = fVar139 * fVar151 + fVar161 * fVar174 + fVar144 * fVar171;
                                                               fVar153 = fVar169 * fVar151 + fVar119 * fVar174 + fVar142 * fVar171;
                                                               fVar129 = fVar168 * fVar151 + fVar174 * fVar160 + fVar171 * fVar167;
                                                               fVar151 = fVar139 * fVar115 + fVar161 * fVar186 + fVar144 * fVar185;
                                                               fVar171 = fVar169 * fVar115 + fVar119 * fVar186 + fVar142 * fVar185;
                                                               fVar115 = fVar115 * fVar168 + fVar186 * fVar160 + fVar185 * fVar167;
                                                               fVar174 = fVar139 * fVar135 + fVar161 * fVar164 + fVar144 * fVar122;
                                                               fVar185 = fVar169 * fVar135 + fVar119 * fVar164 + fVar142 * fVar122;
                                                               fVar122 = fVar168 * fVar135 + fVar164 * fVar160 + fVar122 * fVar167;
                                                               fVar135 = fVar155 * fVar129 + fVar181 * fVar153 + fVar184 * fVar163;
                                                               fVar159 = fVar154 * fVar129 + fVar157 * fVar153 + fVar183 * fVar163;
                                                               fVar129 = fVar129 * fVar152 + fVar153 * fVar156 + fVar163 * fVar182;
                                                               fVar163 = fVar155 * fVar115 + fVar181 * fVar171 + fVar184 * fVar151;
                                                               fVar153 = fVar154 * fVar115 + fVar157 * fVar171 + fVar183 * fVar151;
                                                               fVar115 = fVar115 * fVar152 + fVar171 * fVar156 + fVar151 * fVar182;
                                                               fVar151 = fVar155 * fVar122 + fVar181 * fVar185 + fVar184 * fVar174;
                                                               fVar164 = fVar154 * fVar122 + fVar157 * fVar185 + fVar183 * fVar174;
                                                               fVar122 = fVar122 * fVar152 + fVar185 * fVar156 + fVar174 * fVar182;
                                                               local_1c8._4_4_ = (float)uVar57 * fVar122 + (float)uVar58 * fVar164 + fVar114 * fVar151;
                                                               local_1c8._0_4_ = (float)uVar56 * fVar122 + fVar146 * fVar164 + fVar149 * fVar151;
                                                               fStack_1c0 = fVar122 * fVar145 + fVar164 * (float)uVar59 + fVar151 * fVar121;
                                                               fStack_1bc = (float)uVar56 * fVar115 + fVar146 * fVar153 + fVar149 * fVar163;
                                                               local_1b8._4_4_ = fVar115 * fVar145 + fVar153 * (float)uVar59 + fVar163 * fVar121;
                                                               local_1b8._0_4_ = (float)uVar57 * fVar115 + (float)uVar58 * fVar153 + fVar114 * fVar163;
                                                               fStack_1b0 = (float)uVar56 * fVar129 + fVar146 * fVar159 + fVar149 * fVar135;
                                                               fStack_1ac = (float)uVar57 * fVar129 + (float)uVar58 * fVar159 + fVar114 * fVar135;
                                                               local_1a8 = fVar129 * fVar145 + fVar159 * (float)uVar59 + fVar135 * fVar121;
                                                               auVar190 = Basis::get_scale();
                                                               local_2e8 = auVar190;
                                                               Variant::Variant((Variant*)local_2d8, (Vector3*)local_2e8);
                                                               Animation::track_set_key_value((int)pOVar85, iVar77, (Variant*)(ulong)uVar75);
                                                               if (Variant::needs_deinit[(int)local_2d8[0]._0_4_] != '\0') {
                                                                  Variant::_clear_internal();
                                                               }

                                                               uVar75 = uVar75 + 1;
                                                            }
 while ( uVar69 != uVar75 );
                                                         }

                                                      }
 else {
                                                         uVar56 = auStack_174._0_4_;
                                                         uVar75 = 0;
                                                         uVar57 = auStack_174._4_4_;
                                                         fVar142 = fStack_16c;
                                                         uVar58 = local_138._0_4_;
                                                         uVar59 = local_138._4_4_;
                                                         fVar144 = (float)uStack_130;
                                                         fVar145 = uStack_130._4_4_;
                                                         uVar60 = local_128._0_4_;
                                                         uVar61 = local_128._4_4_;
                                                         fVar146 = (float)uStack_120;
                                                         fVar149 = uStack_120._4_4_;
                                                         uVar62 = local_118._0_4_;
                                                         if (0 < (int)uVar69) {
                                                            do {
                                                               Animation::track_get_key_value((int)(Variant*)local_1c8, (int)local_440);
                                                               _local_228 = Variant::operator_cast_to_Vector3((Variant*)local_1c8);
                                                               auVar117 = _local_228;
                                                               uStack_220._4_4_ = auVar117._12_4_;
                                                               if (Variant::needs_deinit[(int)local_1c8._0_4_] != '\0') {
                                                                  Variant::_clear_internal();
                                                               }

                                                               pOVar85 = local_440;
                                                               fVar140 = (float)local_228._4_4_ - (float)uVar57;
                                                               fVar114 = (float)local_228._0_4_ - (float)uVar56;
                                                               fVar121 = (float)uStack_220 - fVar142;
                                                               fVar125 = fVar146 * fVar114 + fVar149 * fVar140 + (float)uVar62 * fVar121;
                                                               fVar131 = fVar145 * fVar114 + (float)uVar60 * fVar140 + (float)uVar61 * fVar121;
                                                               fVar114 = fVar114 * (float)uVar58 + fVar140 * (float)uVar59 + fVar121 * fVar144;
                                                               fStack_250 = fVar114 * fVar137 + fVar131 * fVar160 + fVar125 * fVar167 + fVar120;
                                                               local_258 = CONCAT44(fVar114 * fVar136 + fVar131 * fVar139 + fVar125 * fVar161 + fVar118, fVar114 * fVar130 + fVar131 * fVar138 + fVar125 * fVar119 + fVar113);
                                                               Variant::Variant((Variant*)local_1c8, (Vector3*)&local_258);
                                                               Animation::track_set_key_value((int)pOVar85, iVar77, (Variant*)(ulong)uVar75);
                                                               if (Variant::needs_deinit[(int)local_1c8._0_4_] != '\0') {
                                                                  Variant::_clear_internal();
                                                               }

                                                               uVar75 = uVar75 + 1;
                                                            }
 while ( uVar69 != uVar75 );
                                                         }

                                                      }

                                                   }

                                                }

                                                if (( StringName::configured == '\0' ) || ( local_3d8 == (Object*)0x0 )) goto LAB_0010924b;
                                             }

                                             StringName::unref();
                                          }

                                       }

                                    }

                                    LAB_0010924b:CowData<char32_t>::_unref(local_778);
                                 }

                              }
 else {
                                 LAB_00109070:NodePath::~NodePath((NodePath*)local_6d8);
                              }

                              iVar77 = iVar77 + 1;
                           }
 while ( iVar74 != iVar77 );
                        }

                        if (local_440 != (Object*)0x0) {
                           cVar66 = RefCounted::unreference();
                           pOVar85 = local_440;
                           if (cVar66 != '\0') {
                              cVar66 = predelete_handler(local_440);
                              if (cVar66 != '\0') {
                                 ( **(code**)( *(long*)pOVar85 + 0x140 ) )(pOVar85);
                                 Memory::free_static(pOVar85, false);
                              }

                           }

                        }

                        lVar78 = *(long*)( lVar78 + 8 );
                     }
 while ( lVar78 != 0 );
                  }

                  List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_448);
                  goto LAB_00108f3e;
               }

            }

            _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x2d2, "Condition \"!ap\" is true. Continuing.", 0, 0);
         }
 while ( true );
      }

      _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x1fd, "Condition \"original_skeleton_name == skel_name\" is true.", "Original skeleton name must be different from unique skeleton name.", 0, 0);
   }

   LAB_00105683:CowData<char32_t>::_unref(local_778);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_468);
   if (local_3f0 != (void*)0x0) {
      LocalVector<Transform3D,unsigned_int,false,false>::resize((LocalVector<Transform3D,unsigned_int,false,false>*)&local_3f8, 0);
      if (local_3f0 != (void*)0x0) {
         Memory::free_static(local_3f0, false);
      }

   }

   if (local_400 != (void*)0x0) {
      LocalVector<Transform3D,unsigned_int,false,false>::resize((LocalVector<Transform3D,unsigned_int,false,false>*)&local_408, 0);
      if (local_400 != (void*)0x0) {
         Memory::free_static(local_400, false);
      }

   }

   if (local_410 != (void*)0x0) {
      LocalVector<Transform3D,unsigned_int,false,false>::resize((LocalVector<Transform3D,unsigned_int,false,false>*)&local_418, 0);
      if (local_410 != (void*)0x0) {
         Memory::free_static(local_410, false);
      }

   }

   CowData<Transform3D>::_unref((CowData<Transform3D>*)&local_420);
   Array::~Array((Array*)local_470);
   LAB_00105742:goto joined_r0x0010bbfb;
   LAB_0010edcd:auVar123._8_8_ = 0;
   auVar123._0_8_ = local_6f8;
   LAB_0010ee1b:auVar116._8_8_ = 0;
   auVar116._0_8_ = local_6e8;
   fVar118 = (float)iVar73;
   local_758 = local_758 / fVar118;
   auVar143._4_4_ = fVar118;
   auVar143._0_4_ = fVar118;
   auVar143._8_8_ = _LC94;
   auVar124 = divps(auVar123, auVar143);
   auVar117 = divps(auVar116, auVar143);
   local_708 = auVar124._0_8_;
   fVar113 = fVar113 / fVar118;
   local_6f8 = auVar117._0_8_;
   CowData<int>::_unref((CowData<int>*)( local_3a8 + 8 ));
   LAB_00107c64:iVar73 = SkeletonProfile::get_tail_direction((int)local_478);
   if (iVar73 == 1) {
      SkeletonProfile::get_bone_tail((int)(StringName*)&local_3d8);
      if (local_3d8 == (Object*)0x0) {
         auVar46._8_8_ = 0;
         auVar46._0_8_ = uStack_3a0;
         _local_3a8 = auVar46 << 0x40;
      }
 else {
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uStack_3a0;
         _local_3a8 = auVar23 << 0x40;
         if (*(char**)( local_3d8 + 8 ) == (char*)0x0) {
            if (*(long*)( local_3d8 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3d8 + 0x10 ));
            }

         }
 else {
            String::parse_latin1(local_6d8, *(char**)( local_3d8 + 8 ));
         }

      }

      iVar73 = Skeleton3D::find_bone((String*)this_00);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
      if (( StringName::configured != '\0' ) && ( local_3d8 != (Object*)0x0 )) {
         StringName::unref();
      }

      if (iVar73 < 0) goto LAB_00107630;
      if (bVar65) {
         Skeleton3D::get_bone_name(iVar109);
      }
 else {
         Skeleton3D::get_bone_name((int)(String*)&local_3f8);
         StringName::StringName((StringName*)&local_3e8, (String*)&local_3f8, false);
         BoneMap::get_skeleton_bone_name((StringName*)&local_3d8);
         if (local_3d8 == (Object*)0x0) {
            auVar48._8_8_ = 0;
            auVar48._0_8_ = uStack_3a0;
            _local_3a8 = auVar48 << 0x40;
         }
 else {
            auVar45._8_8_ = 0;
            auVar45._0_8_ = uStack_3a0;
            _local_3a8 = auVar45 << 0x40;
            if (*(char**)( local_3d8 + 8 ) == (char*)0x0) {
               if (*(long*)( local_3d8 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_6d8, (CowData*)( local_3d8 + 0x10 ));
               }

            }
 else {
               String::parse_latin1(local_6d8, *(char**)( local_3d8 + 8 ));
            }

         }

      }

      iVar73 = Skeleton3D::find_bone(pSVar79);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
      if (local_768._0_1_ != false) {
         if (StringName::configured != '\0') {
            if (local_3d8 != (Object*)0x0) {
               StringName::unref();
               if (StringName::configured == '\0') goto LAB_0010936b;
            }

            if (local_3e8 != (Object*)0x0) {
               StringName::unref();
            }

         }

         LAB_0010936b:CowData<char32_t>::_unref((CowData<char32_t>*)&local_3f8);
      }

      if (iVar73 < 0) goto LAB_00107630;
      Skeleton3D::get_bone_global_rest(iVar70);
      local_6f8 = (String*)CONCAT44(fStack_80, fStack_84);
      local_758 = fStack_7c;
      Skeleton3D::get_bone_global_rest(iVar70);
      local_708 = (Variant*)CONCAT44(fStack_80, fStack_84);
      fVar113 = fStack_7c;
   }

   Skeleton3D::get_bone_global_rest(iVar70);
   fVar118 = fStack_7c;
   fVar136 = SUB84(local_6f8, 0) - fStack_84;
   fVar137 = (float)( (ulong)local_6f8 >> 0x20 ) - fStack_80;
   Skeleton3D::get_bone_global_rest(iVar70);
   fVar120 = SUB84(local_708, 0) - fStack_84;
   fVar130 = (float)( (ulong)local_708 >> 0x20 ) - fStack_80;
   local_288 = CONCAT44(fVar130, fVar120);
   fStack_2b0 = local_758 - fVar118;
   fStack_280 = fVar113 - fStack_7c;
   fVar118 = fVar136 * fStack_280 - fVar120 * fStack_2b0;
   fVar138 = fVar120 * fVar137 - fVar130 * fVar136;
   fVar113 = fStack_2b0 * fVar130 - fStack_280 * fVar137;
   local_2b8 = CONCAT44(fVar137, fVar136);
   fVar113 = atan2f(SQRT(fVar113 * fVar113 + fVar118 * fVar118 + fVar138 * fVar138), fVar120 * fVar136 + fVar130 * fVar137 + fStack_2b0 * fStack_280);
   fVar113 = fVar113 * __LC95;
   Variant::Variant((Variant*)local_a8, "retarget/rest_fixer/fix_silhouette/threshold");
   pVVar80 = (Variant*)Dictionary::operator [](param_3);
   fVar118 = Variant::operator_cast_to_float(pVVar80);
   if (Variant::needs_deinit[(int)local_a8._0_4_] != '\0') {
      Variant::_clear_internal();
   }

   if (ABS(fVar113) <= fVar118) goto LAB_00107630;
   local_258 = 0;
   fStack_250 = 0.0;
   if ((float)( (uint)local_288._4_4_ & _LC96 ) <= (float)( (uint)(float)local_288 & _LC96 )) {
      if ((float)( (uint)fStack_280 & _LC96 ) <= (float)( (uint)local_288._4_4_ & _LC96 )) goto LAB_0010b9c0;
      local_258 = 0x3f80000000000000;
   }
 else if ((float)( (uint)fStack_280 & _LC96 ) <= (float)( (uint)(float)local_288 & _LC96 )) {
      LAB_0010b9c0:fStack_250 = 1.0;
   }
 else {
      local_258 = 0x3f800000;
   }

   local_208 = 1.0;
   _local_228 = ZEXT416((uint)_LC77);
   _local_218 = _local_228;
   Basis::looking_at((Vector3*)&local_4d8, (Vector3*)&local_288, SUB81(&local_258, 0));
   _local_1c8 = ZEXT416((uint)_LC77);
   local_218._4_4_ = uStack_4c4;
   local_218._0_4_ = local_4c8;
   uStack_210._4_4_ = (float)uStack_4bc;
   uStack_210._0_4_ = (float)uStack_4c0;
   local_208 = local_4b8;
   uStack_220 = uStack_4d0;
   local_228 = (undefined1[8])local_4d8;
   local_1a8 = 1.0;
   _local_1b8 = _local_1c8;
   Basis::looking_at((Vector3*)&local_4d8, (Vector3*)&local_2b8, SUB81(&local_258, 0));
   _fStack_1c0 = uStack_4d0;
   local_1c8 = (undefined1[8])local_4d8;
   _local_a8 = ZEXT416((uint)_LC77);
   local_88 = 1.0;
   local_1a8 = local_4b8;
   local_1b8._4_4_ = uStack_4c4;
   local_1b8._0_4_ = local_4c8;
   fStack_1b0 = (float)uStack_4c0;
   fStack_1ac = (float)uStack_4bc;
   _local_98 = _local_a8;
   cVar66 = Basis::is_equal_approx((Basis*)local_1c8);
   if (cVar66 == '\0') {
      Basis::inverse();
      local_178 = (undefined1[4])0x3f800000;
      fVar113 = fStack_a0 * fStack_1b0 + (float)local_98._4_4_ * fStack_1ac + local_88 * local_1a8;
      fVar118 = fStack_1b0 * (float)local_a8._4_4_ + fStack_1ac * (float)local_98._0_4_ + local_1a8 * fStack_8c;
      fVar137 = fStack_1b0 * (float)local_a8._0_4_ + fStack_1ac * fStack_9c + local_1a8 * fStack_90;
      fVar139 = fStack_a0 * fStack_1bc + (float)local_98._4_4_ * (float)local_1b8._0_4_ + local_88 * (float)local_1b8._4_4_;
      fVar160 = (float)local_a8._4_4_ * fStack_1bc + (float)local_98._0_4_ * (float)local_1b8._0_4_ + fStack_8c * (float)local_1b8._4_4_;
      fVar138 = fStack_1bc * (float)local_a8._0_4_ + (float)local_1b8._0_4_ * fStack_9c + (float)local_1b8._4_4_ * fStack_90;
      fVar130 = (float)local_a8._4_4_ * (float)local_1c8._0_4_ + (float)local_98._0_4_ * (float)local_1c8._4_4_ + fStack_8c * fStack_1c0;
      fVar136 = fStack_a0 * (float)local_1c8._0_4_ + (float)local_98._4_4_ * (float)local_1c8._4_4_ + local_88 * fStack_1c0;
      fVar120 = (float)local_a8._0_4_ * (float)local_1c8._0_4_ + fStack_9c * (float)local_1c8._4_4_ + fStack_90 * fStack_1c0;
      _local_198 = ZEXT416((uint)_LC77);
      _local_188 = _local_198;
      iVar73 = Skeleton3D::get_bone_parent(iVar72);
      if (-1 < iVar73) {
         Skeleton3D::get_bone_global_rest(iVar70);
         local_178 = (undefined1[4])local_88;
         _local_198 = _local_a8;
         _local_188 = _local_98;
      }

      Skeleton3D::get_bone_rest(iVar70);
      Skeleton3D::get_bone_rest((int)local_d8);
      Basis::inverse();
      fVar131 = fVar139 * (float)local_168._4_4_ + fVar136 * (float)local_168._0_4_ + fVar113 * (float)uStack_160;
      fVar140 = fVar139 * (float)local_168._4_4_ + fVar136 * (float)local_168._0_4_ + fVar113 * (float)uStack_160;
      fVar128 = fVar139 * (float)local_168._4_4_ + fVar136 * (float)local_168._0_4_ + fVar113 * (float)uStack_160;
      fVar152 = fVar139 * (float)local_158._0_4_ + fVar136 * uStack_160._4_4_ + fVar113 * (float)local_158._4_4_;
      fVar167 = fVar139 * (float)local_158._0_4_ + fVar136 * uStack_160._4_4_ + fVar113 * (float)local_158._4_4_;
      fVar142 = fVar139 * (float)local_158._0_4_ + fVar136 * uStack_160._4_4_ + fVar113 * (float)local_158._4_4_;
      fVar144 = fVar139 * uStack_150._4_4_ + fVar136 * (float)uStack_150 + fVar113 * local_148;
      fVar145 = fVar139 * uStack_150._4_4_ + fVar136 * (float)uStack_150 + fVar113 * local_148;
      fVar154 = fVar160 * (float)local_168._4_4_ + fVar130 * (float)local_168._0_4_ + fVar118 * (float)uStack_160;
      fVar155 = fVar160 * (float)local_168._4_4_ + fVar130 * (float)local_168._0_4_ + fVar118 * (float)uStack_160;
      fVar156 = fVar160 * (float)local_168._4_4_ + fVar130 * (float)local_168._0_4_ + fVar118 * (float)uStack_160;
      fVar157 = fVar160 * (float)local_158._0_4_ + fVar130 * uStack_160._4_4_ + fVar118 * (float)local_158._4_4_;
      fVar146 = fVar160 * (float)local_158._0_4_ + fVar130 * uStack_160._4_4_ + fVar118 * (float)local_158._4_4_;
      fVar149 = fVar160 * (float)local_158._0_4_ + fVar130 * uStack_160._4_4_ + fVar118 * (float)local_158._4_4_;
      fVar114 = fVar160 * uStack_150._4_4_ + fVar130 * (float)uStack_150 + fVar118 * local_148;
      fVar121 = fVar160 * uStack_150._4_4_ + fVar130 * (float)uStack_150 + fVar118 * local_148;
      fVar139 = (float)local_168._4_4_ * fVar138 + (float)local_168._0_4_ * fVar120 + (float)uStack_160 * fVar137;
      fVar160 = (float)local_168._4_4_ * fVar138 + (float)local_168._0_4_ * fVar120 + (float)uStack_160 * fVar137;
      fVar119 = (float)local_168._4_4_ * fVar138 + (float)local_168._0_4_ * fVar120 + (float)uStack_160 * fVar137;
      fVar161 = (float)local_158._0_4_ * fVar138 + uStack_160._4_4_ * fVar120 + (float)local_158._4_4_ * fVar137;
      fVar113 = (float)local_158._0_4_ * fVar138 + uStack_160._4_4_ * fVar120 + (float)local_158._4_4_ * fVar137;
      fVar118 = (float)local_158._0_4_ * fVar138 + uStack_160._4_4_ * fVar120 + (float)local_158._4_4_ * fVar137;
      fVar130 = uStack_150._4_4_ * fVar138 + (float)uStack_150 * fVar120 + local_148 * fVar137;
      fVar136 = uStack_150._4_4_ * fVar138 + (float)uStack_150 * fVar120 + local_148 * fVar137;
      fVar138 = (float)local_188._4_4_ * fVar114 + fStack_190 * fVar130 + (float)local_178 * fVar144;
      fVar125 = (float)local_198._4_4_ * fVar130 + (float)local_188._0_4_ * fVar114 + fStack_17c * fVar144;
      fVar120 = fVar130 * (float)local_198._0_4_ + fVar114 * fStack_18c + fVar144 * fStack_180;
      fVar130 = local_d8._0_4_;
      fVar137 = local_d8._4_4_;
      local_138._4_4_ = local_c8 * ( (float)local_198._4_4_ * fVar160 + (float)local_188._0_4_ * fVar155 + fStack_17c * fVar140 ) + ( fStack_180 * fVar140 + (float)local_198._0_4_ * fVar160 + fStack_18c * fVar155 ) * fVar137 + ( (float)local_188._4_4_ * fVar155 + fVar160 * fStack_190 + (float)local_178 * fVar140 ) * fStack_bc;
      local_138._0_4_ = fStack_cc * ( (float)local_198._4_4_ * fVar139 + (float)local_188._0_4_ * fVar154 + fStack_17c * fVar131 ) + ( fStack_180 * fVar131 + (float)local_198._0_4_ * fVar139 + fStack_18c * fVar154 ) * fVar130 + ( (float)local_188._4_4_ * fVar154 + fVar139 * fStack_190 + (float)local_178 * fVar131 ) * fStack_c0;
      uStack_130._0_4_ = fStack_c4 * ( (float)local_198._4_4_ * fVar119 + (float)local_188._0_4_ * fVar156 + fStack_17c * fVar128 ) + ( fStack_180 * fVar128 + (float)local_198._0_4_ * fVar119 + fStack_18c * fVar156 ) * (float)local_d8._8_4_ + ( (float)local_188._4_4_ * fVar156 + fVar119 * fStack_190 + (float)local_178 * fVar128 ) * local_b8;
      uStack_130._4_4_ = fStack_cc * ( (float)local_198._4_4_ * fVar161 + (float)local_188._0_4_ * fVar157 + fStack_17c * fVar152 ) + ( fStack_180 * fVar152 + (float)local_198._0_4_ * fVar161 + fStack_18c * fVar157 ) * fVar130 + ( (float)local_188._4_4_ * fVar157 + fVar161 * fStack_190 + (float)local_178 * fVar152 ) * fStack_c0;
      local_118._0_4_ = fVar120 * (float)local_d8._8_4_ + fVar125 * fStack_c4 + fVar138 * local_b8;
      local_128._4_4_ = ( fVar118 * (float)local_198._0_4_ + fVar149 * fStack_18c + fVar142 * fStack_180 ) * (float)local_d8._8_4_ + fStack_c4 * ( (float)local_198._4_4_ * fVar118 + (float)local_188._0_4_ * fVar149 + fStack_17c * fVar142 ) + local_b8 * ( (float)local_188._4_4_ * fVar149 + fStack_190 * fVar118 + (float)local_178 * fVar142 );
      local_128._0_4_ = ( fVar113 * (float)local_198._0_4_ + fVar146 * fStack_18c + fVar167 * fStack_180 ) * fVar137 + local_c8 * ( (float)local_198._4_4_ * fVar113 + (float)local_188._0_4_ * fVar146 + fStack_17c * fVar167 ) + fStack_bc * ( (float)local_188._4_4_ * fVar146 + fStack_190 * fVar113 + (float)local_178 * fVar167 );
      uStack_120._0_4_ = fVar120 * fVar130 + fStack_cc * fVar125 + fStack_c0 * fVar138;
      uStack_120._4_4_ = ( fVar136 * (float)local_198._0_4_ + fVar121 * fStack_18c + fVar145 * fStack_180 ) * fVar137 + local_c8 * ( (float)local_198._4_4_ * fVar136 + (float)local_188._0_4_ * fVar121 + fStack_17c * fVar145 ) + fStack_bc * ( (float)local_188._4_4_ * fVar121 + fStack_190 * fVar136 + (float)local_178 * fVar145 );
      Transform3D::Transform3D((Transform3D*)&local_108, (Basis*)local_138, (Vector3*)&fStack_84);
      Skeleton3D::set_bone_rest(iVar72, (Transform3D*)(ulong)uVar69);
   }

   LAB_00107630:CowData<int>::_unref((CowData<int>*)&local_3b0);
   if (local_3c0 == (int*)0x0) goto LAB_00107656;
   goto LAB_00107420;
   LAB_0010f43c:Array::~Array((Array*)&local_450);
   if (( bVar68 ) && ( bVar65 )) {
      _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x32e, "Animated extra bone between mapped bones detected, consider disabling Use Global Pose option to prevent that the pose origin be overridden by the RetargetModifier3D.", 1, 1);
   }

   Variant::Variant(local_708, "retarget/rest_fixer/reset_all_bone_poses_after_import");
   cVar66 = Dictionary::has(param_3);
   if (cVar66 == '\0') {
      bVar65 = false;
      if (Variant::needs_deinit[(int)local_108] != '\0') {
         LAB_0010f5e8:Variant::_clear_internal();
         goto LAB_0010f5f2;
      }

   }
 else {
      Variant::Variant((Variant*)local_138, "retarget/rest_fixer/reset_all_bone_poses_after_import");
      pVVar80 = (Variant*)Dictionary::operator [](param_3);
      bVar65 = Variant::operator_cast_to_bool(pVVar80);
      bVar65 = !bVar65;
      if (Variant::needs_deinit[(int)local_138._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_108] != '\0') goto LAB_0010f5e8;
      LAB_0010f5f2:uVar87 = 0;
      if (bVar65) {
         while (true) {
            local_708 = (Variant*)&local_108;
            pQVar107 = (Quaternion*)( uVar87 & 0xffffffff );
            iVar70 = Skeleton3D::get_bone_count();
            if (iVar70 <= (int)(uint)uVar87) break;
            uVar108 = (ulong)local_408 & 0xffffffff;
            if ((uint)local_408 <= (uint)uVar87) goto LAB_00107785;
            pauVar86 = (undefined1(*) [16])( uVar87 * 0x30 + (long)local_400 );
            _local_198 = *pauVar86;
            _local_188 = pauVar86[1];
            _local_178 = pauVar86[2];
            Skeleton3D::get_bone_rest((int)local_168);
            _local_138 = ZEXT416((uint)_LC77);
            local_118._0_12_ = ZEXT412(0x3f800000);
            local_118._12_4_ = 0;
            local_e8 = 1.0;
            fStack_e4 = 0.0;
            fStack_e0 = 0.0;
            fStack_dc = 0.0;
            local_108 = _LC77;
            fStack_104 = 0.0;
            fStack_100 = 0.0;
            fStack_fc = 0.0;
            fStack_f8 = _LC77;
            fStack_f4 = 0.0;
            fStack_f0 = 0.0;
            fStack_ec = 0.0;
            _local_128 = _local_138;
            uVar69 = Skeleton3D::get_bone_parent(iVar72);
            if (-1 < (int)uVar69) {
               if ((uint)local_3f8 <= uVar69) goto LAB_0010ecb8;
               puVar102 = (undefined4*)( (long)(int)uVar69 * 0x30 + (long)local_3f0 );
               puVar105 = (undefined4*)local_138;
               for (lVar78 = 0xc; lVar78 != 0; lVar78 = lVar78 + -1) {
                  *puVar105 = *puVar102;
                  puVar102 = puVar102 + (ulong)bVar112 * -2 + 1;
                  puVar105 = puVar105 + (ulong)bVar112 * -2 + 1;
               }

               Skeleton3D::get_bone_global_rest((int)local_4a8);
               pTVar81 = local_4a8;
               for (lVar78 = 0xc; lVar78 != 0; lVar78 = lVar78 + -1) {
                  *(float*)local_708 = *(float*)pTVar81;
                  pTVar81 = pTVar81 + ( (ulong)bVar112 * -2 + 1 ) * 4;
                  local_708 = (Variant*)( (long)local_708 + ( (ulong)bVar112 * -2 + 1 ) * 4 );
               }

            }

            Basis::get_rotation_quaternion();
            Basis::get_rotation_quaternion();
            Skeleton3D::get_bone_pose_rotation((int)local_338);
            Basis::get_rotation_quaternion();
            Quaternion::inverse();
            Basis::get_rotation_quaternion();
            Quaternion::inverse();
            Quaternion::inverse();
            Quaternion::operator *(local_318, (Quaternion*)local_328);
            Quaternion::operator *(local_308, local_318);
            Quaternion::operator *((Quaternion*)local_2d8, local_308);
            Quaternion::operator *((Quaternion*)&local_288, (Quaternion*)local_2d8);
            Quaternion::operator *((Quaternion*)&local_258, (Quaternion*)&local_288);
            Quaternion::operator *((Quaternion*)local_1c8, (Quaternion*)&local_258);
            Skeleton3D::set_bone_pose_rotation(iVar72, pQVar107);
            _local_1c8 = ZEXT416((uint)_LC77);
            local_1a8 = 1.0;
            _local_1b8 = _local_1c8;
            _local_228 = Skeleton3D::get_bone_pose_scale(iVar72);
            auVar117 = _local_228;
            uStack_220._4_4_ = auVar117._12_4_;
            Basis::scaled((Vector3*)&local_2b8);
            for (int i = 0; i < 3; i++) {
               Basis::inverse();
            }

            fVar160 = fStack_280 * (float)local_118._0_4_ + local_288._4_4_ * (float)local_128._4_4_ + (float)local_288 * (float)uStack_130;
            fVar119 = fStack_280 * (float)local_118._0_4_ + local_288._4_4_ * (float)local_128._4_4_ + (float)local_288 * (float)uStack_130;
            fVar161 = fStack_280 * (float)local_118._0_4_ + local_288._4_4_ * (float)local_128._4_4_ + (float)local_288 * (float)uStack_130;
            fVar167 = fStack_274 * (float)local_118._0_4_ + local_278 * (float)local_128._4_4_ + fStack_27c * (float)uStack_130;
            fVar142 = (float)uStack_130 * fStack_27c + (float)local_128._4_4_ * local_278 + (float)local_118._0_4_ * fStack_274;
            fVar144 = (float)uStack_130 * fStack_27c + (float)local_128._4_4_ * local_278 + (float)local_118._0_4_ * fStack_274;
            fVar145 = (float)uStack_130 * fStack_270 + (float)local_128._4_4_ * fStack_26c + (float)local_118._0_4_ * local_268;
            fVar146 = (float)uStack_130 * fStack_270 + (float)local_128._4_4_ * fStack_26c + (float)local_118._0_4_ * local_268;
            fVar181 = (float)local_288 * (float)local_138._4_4_ + local_288._4_4_ * (float)local_128._0_4_ + fStack_280 * uStack_120._4_4_;
            fVar182 = (float)local_288 * (float)local_138._4_4_ + local_288._4_4_ * (float)local_128._0_4_ + fStack_280 * uStack_120._4_4_;
            fVar183 = (float)local_288 * (float)local_138._4_4_ + local_288._4_4_ * (float)local_128._0_4_ + fStack_280 * uStack_120._4_4_;
            fVar184 = fStack_27c * (float)local_138._4_4_ + local_278 * (float)local_128._0_4_ + fStack_274 * uStack_120._4_4_;
            fVar136 = local_288._4_4_ * uStack_130._4_4_ + (float)local_288 * (float)local_138._0_4_ + fStack_280 * (float)uStack_120;
            fVar137 = local_288._4_4_ * uStack_130._4_4_ + (float)local_288 * (float)local_138._0_4_ + fStack_280 * (float)uStack_120;
            fVar138 = local_288._4_4_ * uStack_130._4_4_ + (float)local_288 * (float)local_138._0_4_ + fStack_280 * (float)uStack_120;
            fVar139 = local_278 * uStack_130._4_4_ + fStack_27c * (float)local_138._0_4_ + fStack_274 * (float)uStack_120;
            fVar113 = (float)local_138._0_4_ * fStack_27c + uStack_130._4_4_ * local_278 + (float)uStack_120 * fStack_274;
            fVar118 = (float)local_138._0_4_ * fStack_27c + uStack_130._4_4_ * local_278 + (float)uStack_120 * fStack_274;
            fVar120 = (float)local_138._0_4_ * fStack_270 + uStack_130._4_4_ * fStack_26c + (float)uStack_120 * local_268;
            fVar130 = (float)local_138._0_4_ * fStack_270 + uStack_130._4_4_ * fStack_26c + (float)uStack_120 * local_268;
            fVar149 = (float)local_138._4_4_ * fStack_27c + (float)local_128._0_4_ * local_278 + uStack_120._4_4_ * fStack_274;
            fVar114 = (float)local_138._4_4_ * fStack_27c + (float)local_128._0_4_ * local_278 + uStack_120._4_4_ * fStack_274;
            fVar121 = (float)local_138._4_4_ * fStack_270 + (float)local_128._0_4_ * fStack_26c + uStack_120._4_4_ * local_268;
            fVar125 = (float)local_138._4_4_ * fStack_270 + (float)local_128._0_4_ * fStack_26c + uStack_120._4_4_ * local_268;
            fVar126 = fVar136 * fStack_2b0 + fVar181 * fStack_2a4 + fVar160 * local_298;
            fVar127 = fVar137 * fStack_2b0 + fVar182 * fStack_2a4 + fVar119 * local_298;
            fVar132 = fVar138 * fStack_2b0 + fVar183 * fStack_2a4 + fVar161 * local_298;
            fVar133 = fVar139 * fStack_2b0 + fVar184 * fStack_2a4 + fVar167 * local_298;
            fVar131 = fStack_2b0 * fVar113 + fStack_2a4 * fVar149 + local_298 * fVar142;
            fVar140 = fStack_2b0 * fVar118 + fStack_2a4 * fVar114 + local_298 * fVar144;
            fVar128 = fStack_2b0 * fVar120 + fStack_2a4 * fVar121 + local_298 * fVar145;
            fVar152 = fStack_2b0 * fVar130 + fStack_2a4 * fVar125 + local_298 * fVar146;
            fVar134 = fVar136 * local_2b8._4_4_ + fVar181 * local_2a8 + fVar160 * fStack_29c;
            fVar141 = fVar137 * local_2b8._4_4_ + fVar182 * local_2a8 + fVar119 * fStack_29c;
            fVar147 = fVar138 * local_2b8._4_4_ + fVar183 * local_2a8 + fVar161 * fStack_29c;
            fVar148 = fVar139 * local_2b8._4_4_ + fVar184 * local_2a8 + fVar167 * fStack_29c;
            fVar154 = local_2b8._4_4_ * fVar113 + local_2a8 * fVar149 + fStack_29c * fVar142;
            fVar155 = local_2b8._4_4_ * fVar118 + local_2a8 * fVar114 + fStack_29c * fVar144;
            fVar156 = local_2b8._4_4_ * fVar120 + local_2a8 * fVar121 + fStack_29c * fVar145;
            fVar157 = local_2b8._4_4_ * fVar130 + local_2a8 * fVar125 + fStack_29c * fVar146;
            fVar160 = fVar136 * (float)local_2b8 + fVar181 * fStack_2ac + fVar160 * fStack_2a0;
            fVar119 = fVar137 * (float)local_2b8 + fVar182 * fStack_2ac + fVar119 * fStack_2a0;
            fVar161 = fVar138 * (float)local_2b8 + fVar183 * fStack_2ac + fVar161 * fStack_2a0;
            fVar167 = fVar139 * (float)local_2b8 + fVar184 * fStack_2ac + fVar167 * fStack_2a0;
            fVar136 = fVar113 * (float)local_2b8 + fVar149 * fStack_2ac + fVar142 * fStack_2a0;
            fVar137 = fVar118 * (float)local_2b8 + fVar114 * fStack_2ac + fVar144 * fStack_2a0;
            fVar138 = fVar120 * (float)local_2b8 + fVar121 * fStack_2ac + fVar145 * fStack_2a0;
            fVar139 = fVar130 * (float)local_2b8 + fVar125 * fStack_2ac + fVar146 * fStack_2a0;
            fVar181 = fVar160 * fStack_250 + fVar134 * fStack_244 + fVar126 * local_238;
            fVar182 = fVar119 * fStack_250 + fVar141 * fStack_244 + fVar127 * local_238;
            fVar183 = fVar161 * fStack_250 + fVar147 * fStack_244 + fVar132 * local_238;
            fVar184 = fVar167 * fStack_250 + fVar148 * fStack_244 + fVar133 * local_238;
            fVar142 = fStack_250 * fVar136 + fStack_244 * fVar154 + local_238 * fVar131;
            fVar144 = fStack_250 * fVar137 + fStack_244 * fVar155 + local_238 * fVar140;
            fVar145 = fStack_250 * fVar138 + fStack_244 * fVar156 + local_238 * fVar128;
            fVar146 = fStack_250 * fVar139 + fStack_244 * fVar157 + local_238 * fVar152;
            fVar165 = fVar160 * local_258._4_4_ + fVar134 * local_248 + fVar126 * fStack_23c;
            fVar166 = fVar119 * local_258._4_4_ + fVar141 * local_248 + fVar127 * fStack_23c;
            fVar168 = fVar161 * local_258._4_4_ + fVar147 * local_248 + fVar132 * fStack_23c;
            fVar169 = fVar167 * local_258._4_4_ + fVar148 * local_248 + fVar133 * fStack_23c;
            fVar149 = local_258._4_4_ * fVar136 + local_248 * fVar154 + fStack_23c * fVar131;
            fVar114 = local_258._4_4_ * fVar137 + local_248 * fVar155 + fStack_23c * fVar140;
            fVar121 = local_258._4_4_ * fVar138 + local_248 * fVar156 + fStack_23c * fVar128;
            fVar125 = local_258._4_4_ * fVar139 + local_248 * fVar157 + fStack_23c * fVar152;
            fVar113 = fVar160 * (float)local_258 + fVar134 * fStack_24c + fVar126 * fStack_240;
            fVar118 = fVar119 * (float)local_258 + fVar141 * fStack_24c + fVar127 * fStack_240;
            fVar120 = fVar161 * (float)local_258 + fVar147 * fStack_24c + fVar132 * fStack_240;
            fVar130 = fVar167 * (float)local_258 + fVar148 * fStack_24c + fVar133 * fStack_240;
            fVar136 = fVar136 * (float)local_258 + fVar154 * fStack_24c + fVar131 * fStack_240;
            fVar137 = fVar137 * (float)local_258 + fVar155 * fStack_24c + fVar140 * fStack_240;
            fVar138 = fVar138 * (float)local_258 + fVar156 * fStack_24c + fVar128 * fStack_240;
            fVar139 = fVar139 * (float)local_258 + fVar157 * fStack_24c + fVar152 * fStack_240;
            fVar131 = fVar113 * (float)uStack_220 + fVar165 * (float)local_218._4_4_ + fVar181 * local_208;
            fVar140 = fVar118 * (float)uStack_220 + fVar166 * (float)local_218._4_4_ + fVar182 * local_208;
            fVar128 = fVar120 * (float)uStack_220 + fVar168 * (float)local_218._4_4_ + fVar183 * local_208;
            fVar152 = fVar130 * (float)uStack_220 + fVar169 * (float)local_218._4_4_ + fVar184 * local_208;
            fVar126 = (float)uStack_220 * fVar136 + (float)local_218._4_4_ * fVar149 + local_208 * fVar142;
            fVar127 = (float)uStack_220 * fVar137 + (float)local_218._4_4_ * fVar114 + local_208 * fVar144;
            fVar132 = (float)uStack_220 * fVar138 + (float)local_218._4_4_ * fVar121 + local_208 * fVar145;
            fVar133 = (float)uStack_220 * fVar139 + (float)local_218._4_4_ * fVar125 + local_208 * fVar146;
            fVar154 = fVar113 * (float)local_228._4_4_ + fVar165 * (float)local_218._0_4_ + fVar181 * uStack_210._4_4_;
            fVar155 = fVar118 * (float)local_228._4_4_ + fVar166 * (float)local_218._0_4_ + fVar182 * uStack_210._4_4_;
            fVar156 = fVar120 * (float)local_228._4_4_ + fVar168 * (float)local_218._0_4_ + fVar183 * uStack_210._4_4_;
            fVar157 = fVar130 * (float)local_228._4_4_ + fVar169 * (float)local_218._0_4_ + fVar184 * uStack_210._4_4_;
            fVar160 = (float)local_228._4_4_ * fVar136 + (float)local_218._0_4_ * fVar149 + uStack_210._4_4_ * fVar142;
            fVar119 = (float)local_228._4_4_ * fVar137 + (float)local_218._0_4_ * fVar114 + uStack_210._4_4_ * fVar144;
            fVar161 = (float)local_228._4_4_ * fVar138 + (float)local_218._0_4_ * fVar121 + uStack_210._4_4_ * fVar145;
            fVar167 = (float)local_228._4_4_ * fVar139 + (float)local_218._0_4_ * fVar125 + uStack_210._4_4_ * fVar146;
            fVar136 = fVar136 * (float)local_228._0_4_ + fVar149 * uStack_220._4_4_ + fVar142 * (float)uStack_210;
            fVar137 = fVar137 * (float)local_228._0_4_ + fVar114 * uStack_220._4_4_ + fVar144 * (float)uStack_210;
            fVar138 = fVar138 * (float)local_228._0_4_ + fVar121 * uStack_220._4_4_ + fVar145 * (float)uStack_210;
            fVar139 = fVar139 * (float)local_228._0_4_ + fVar125 * uStack_220._4_4_ + fVar146 * (float)uStack_210;
            fVar113 = fVar113 * (float)local_228._0_4_ + fVar165 * uStack_220._4_4_ + fVar181 * (float)uStack_210;
            fVar118 = fVar118 * (float)local_228._0_4_ + fVar166 * uStack_220._4_4_ + fVar182 * (float)uStack_210;
            fVar120 = fVar120 * (float)local_228._0_4_ + fVar168 * uStack_220._4_4_ + fVar183 * (float)uStack_210;
            fVar130 = fVar130 * (float)local_228._0_4_ + fVar169 * uStack_220._4_4_ + fVar184 * (float)uStack_210;
            fVar142 = fVar138 * fStack_100 + fStack_f4 * fVar161 + local_e8 * fVar132;
            fVar144 = fVar161 * fStack_f8 + fVar138 * fStack_104 + fVar132 * fStack_ec;
            fVar138 = fVar161 * fStack_fc + fVar138 * local_108 + fVar132 * fStack_f0;
            local_1a8 = fVar138 * (float)uStack_160 + fVar144 * (float)local_158._4_4_ + fVar142 * local_148;
            local_1c8._4_4_ = ( fStack_f8 * fVar155 + fStack_104 * fVar118 + fStack_ec * fVar140 ) * (float)local_158._0_4_ + (float)local_168._4_4_ * ( fStack_f0 * fVar140 + fStack_fc * fVar155 + local_108 * fVar118 ) + ( fVar118 * fStack_100 + fVar155 * fStack_f4 + fVar140 * local_e8 ) * uStack_150._4_4_;
            local_1c8._0_4_ = ( fStack_f8 * fVar154 + fStack_104 * fVar113 + fStack_ec * fVar131 ) * uStack_160._4_4_ + (float)local_168._0_4_ * ( fStack_f0 * fVar131 + fStack_fc * fVar154 + local_108 * fVar113 ) + ( fVar113 * fStack_100 + fVar154 * fStack_f4 + fVar131 * local_e8 ) * (float)uStack_150;
            fStack_1c0 = ( fStack_f8 * fVar156 + fStack_104 * fVar120 + fStack_ec * fVar128 ) * (float)local_158._4_4_ + (float)uStack_160 * ( fStack_f0 * fVar128 + fStack_fc * fVar156 + local_108 * fVar120 ) + ( fVar120 * fStack_100 + fVar156 * fStack_f4 + fVar128 * local_e8 ) * local_148;
            fStack_1bc = ( fStack_f8 * fVar157 + fStack_104 * fVar130 + fStack_ec * fVar152 ) * uStack_160._4_4_ + (float)local_168._0_4_ * ( fStack_f0 * fVar152 + fStack_fc * fVar157 + local_108 * fVar130 ) + ( fVar130 * fStack_100 + fVar157 * fStack_f4 + fVar152 * local_e8 ) * (float)uStack_150;
            local_1b8._4_4_ = local_148 * ( fVar137 * fStack_100 + fStack_f4 * fVar119 + local_e8 * fVar127 ) + ( fVar119 * fStack_fc + fVar137 * local_108 + fVar127 * fStack_f0 ) * (float)uStack_160 + (float)local_158._4_4_ * ( fVar119 * fStack_f8 + fVar137 * fStack_104 + fVar127 * fStack_ec );
            local_1b8._0_4_ = uStack_150._4_4_ * ( fVar136 * fStack_100 + fStack_f4 * fVar160 + local_e8 * fVar126 ) + ( fVar160 * fStack_fc + fVar136 * local_108 + fVar126 * fStack_f0 ) * (float)local_168._4_4_ + (float)local_158._0_4_ * ( fVar160 * fStack_f8 + fVar136 * fStack_104 + fVar126 * fStack_ec );
            fStack_1b0 = (float)uStack_150 * fVar142 + fVar138 * (float)local_168._0_4_ + uStack_160._4_4_ * fVar144;
            fStack_1ac = uStack_150._4_4_ * ( fVar139 * fStack_100 + fStack_f4 * fVar167 + local_e8 * fVar133 ) + ( fVar167 * fStack_fc + fVar139 * local_108 + fVar133 * fStack_f0 ) * (float)local_168._4_4_ + (float)local_158._0_4_ * ( fVar167 * fStack_f8 + fVar139 * fStack_104 + fVar133 * fStack_ec );
            auVar190 = Basis::get_scale();
            local_2d8[0] = auVar190;
            Skeleton3D::set_bone_pose_scale(iVar72, (Vector3*)pQVar107);
            auVar190 = Skeleton3D::get_bone_pose_position(iVar72);
            _local_228 = auVar190;
            auVar117 = _local_228;
            local_228._0_4_ = auVar190._0_4_;
            fVar137 = auVar190._4_4_ - SUB164(_local_178, 8);
            fVar113 = auVar190._8_4_ - SUB164(_local_178, 0xc);
            fVar130 = (float)local_228._0_4_ - (float)auStack_174._0_4_;
            fVar136 = auVar190._4_4_ - SUB164(_local_178, 8);
            fVar118 = auVar190._8_4_ - SUB164(_local_178, 0xc);
            fVar120 = (float)local_228._0_4_ - (float)auStack_174._0_4_;
            _local_228 = auVar117;
            cVar66 = Quaternion::is_normalized();
            if (cVar66 == '\0') {
               local_430 = 0;
               String::parse_latin1((String*)&local_430, " must be normalized.");
               Quaternion::operator_cast_to_String((Quaternion*)local_6d8);
               operator+((char *)&
               local_3d8,(String*)"The quaternion ";
               String::operator +((String*)&local_438, (String*)&local_3d8);
               _err_print_error("xform", "./core/math/quaternion.h", 0x5c, "Condition \"!is_normalized()\" is true. Returning: p_v", (String*)&local_438, 0, 0, in_R10);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_438);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_430);
            }
 else {
               fVar160 = fStack_354 * fVar118 - fVar137 * local_350;
               fVar119 = local_350 * fVar120 - fVar113 * local_358;
               fVar161 = fVar130 * local_350 - local_358 * fVar118;
               fVar167 = fVar136 * local_358 - fStack_354 * fVar120;
               fVar142 = fVar137 * local_358 - fVar130 * fStack_354;
               fVar144 = fVar113 * fStack_354 - fVar136 * local_350;
               fVar138 = ( local_358 * fVar161 - fStack_354 * fVar160 ) + fVar142 * fStack_34c;
               fVar139 = ( fStack_354 * fVar167 - local_350 * fVar119 ) + fVar144 * fStack_34c;
               fVar118 = fVar118 + fVar138 + fVar138;
               fVar120 = fVar120 + fVar139 + fVar139;
               fVar138 = ( fStack_354 * fVar142 - local_350 * fVar161 ) + fVar160 * fStack_34c;
               fVar139 = ( local_350 * fVar144 - local_358 * fVar167 ) + fVar119 * fStack_34c;
               fVar160 = ( local_350 * fVar160 - local_358 * fVar142 ) + fVar161 * fStack_34c;
               fVar119 = ( local_358 * fVar119 - fStack_354 * fVar144 ) + fVar167 * fStack_34c;
               fVar130 = fVar130 + fVar138 + fVar138;
               fVar136 = fVar136 + fVar139 + fVar139;
               fVar137 = fVar137 + fVar160 + fVar160;
               fVar113 = fVar113 + fVar119 + fVar119;
            }

            Quaternion::inverse();
            cVar66 = Quaternion::is_normalized();
            if (cVar66 == '\0') {
               local_3d8 = (Object*)0x0;
               String::parse_latin1((String*)&local_3d8, " must be normalized.");
               Quaternion::operator_cast_to_String((Quaternion*)&local_438);
               operator+((char *)&
               local_430,(String*)"The quaternion ";
               pCVar103 = (CowData<char32_t>*)&local_430;
               String::operator +(local_6d8, (String*)&local_430);
               _err_print_error("xform", "./core/math/quaternion.h", 0x5c, "Condition \"!is_normalized()\" is true. Returning: p_v", local_6d8, 0, 0, pCVar103);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_430);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_438);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
            }
 else {
               fVar161 = SUB164(_local_1c8, 0xc);
               fVar138 = SUB164(_local_1c8, 0);
               fVar139 = SUB164(_local_1c8, 4);
               fVar142 = SUB164(_local_1c8, 8);
               fVar167 = fVar130 * fVar142 - fVar138 * fVar118;
               fVar160 = fVar137 * fVar138 - fVar130 * fVar139;
               fVar119 = fVar113 * fVar139 - fVar136 * fVar142;
               fVar118 = ( fVar118 * fVar139 - fVar137 * fVar142 ) * fVar161 + ( fVar139 * fVar160 - fVar142 * fVar167 );
               fVar120 = ( fVar120 * fVar142 - fVar113 * fVar138 ) * fVar161 + ( fVar142 * fVar119 - fVar138 * ( fVar136 * fVar138 - fVar139 * fVar120 ) );
               fVar130 = fVar130 + fVar118 + fVar118;
               fVar136 = fVar136 + fVar120 + fVar120;
               fVar118 = ( fVar138 * fVar167 - fVar139 * fVar119 ) + fVar160 * fVar161;
               fVar113 = fVar118 + fVar118 + fVar113;
            }

            auVar117 = _local_1c8;
            uVar87 = uVar87 + 1;
            local_1c8._4_4_ = fStack_140 + fVar136;
            local_1c8._0_4_ = fStack_144 + fVar130;
            uVar91 = local_1c8;
            fStack_1bc = auVar117._12_4_;
            local_1c8 = auVar117._0_8_;
            fStack_1c0 = fVar113 + fStack_13c;
            _local_1c8 = CONCAT88(_fStack_1c0, uVar91);
            Skeleton3D::set_bone_pose_position(iVar72, (Vector3*)pQVar107);
         }
;
      }

   }

   if (iVar73 == 2) {
      memdelete<Skeleton3D>((Skeleton3D*)local_738);
      local_738 = local_768;
   }

   CowData<int>::_unref((CowData<int>*)&local_3b0);
   CowData<Basis>::_unref((CowData<Basis>*)&local_3c0);
   CowData<int>::_unref((CowData<int>*)&local_3e0);
   if (local_3f0 != (void*)0x0) {
      LocalVector<Transform3D,unsigned_int,false,false>::resize((LocalVector<Transform3D,unsigned_int,false,false>*)&local_3f8, 0);
      if (local_3f0 != (void*)0x0) {
         Memory::free_static(local_3f0, false);
      }

   }

   if (local_400 != (void*)0x0) {
      LocalVector<Transform3D,unsigned_int,false,false>::resize((LocalVector<Transform3D,unsigned_int,false,false>*)&local_408, 0);
      if (local_400 != (void*)0x0) {
         Memory::free_static(local_400, false);
      }

   }

   LAB_0010b01a:local_708 = (Variant*)&local_108;
   Variant::Variant(local_708, "retarget/rest_fixer/normalize_position_tracks");
   pVVar80 = (Variant*)Dictionary::operator [](param_3);
   bVar65 = Variant::operator_cast_to_bool(pVVar80);
   if (Variant::needs_deinit[(int)local_108] != '\0') {
      Variant::_clear_internal();
   }

   iVar70 = (int)local_708;
   if (bVar65) {
      auVar44._8_8_ = 0;
      auVar44._0_8_ = uStack_3a0;
      _local_3a8 = auVar44 << 0x40;
      String::parse_latin1(local_6d8, _LC88);
      local_3b8 = (Object*)0x0;
      String::parse_latin1((String*)local_730, "*");
      Node::find_children((String*)&local_408, param_1, bVar93, bVar94);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
      while (true) {
         iVar72 = Array::size();
         if (iVar72 == 0) break;
         Array::pop_back();
         local_778 = (CowData<char32_t>*)Variant::operator_cast_to_Object_(local_708);
         if (local_778 != (CowData<char32_t>*)0x0) {
            local_778 = (CowData<char32_t>*)__dynamic_cast(local_778, &Object::typeinfo, &AnimationPlayer::typeinfo, 0);
         }

         if (Variant::needs_deinit[(int)local_108] != '\0') {
            Variant::_clear_internal();
         }

         local_3f8 = (Object*)0x0;
         AnimationMixer::get_animation_list((List*)local_778);
         if (( local_3f8 != (Object*)0x0 ) && ( lVar78 = lVar78 != 0 )) {
            do {
               iVar74 = 0;
               AnimationMixer::get_animation((StringName*)&local_3e8);
               iVar72 = Animation::get_track_count();
               if (0 < iVar72) {
                  do {
                     while (true) {
                        Animation::track_get_path(iVar109);
                        iVar77 = NodePath::get_subname_count();
                        if (iVar77 == 1) break;
                        LAB_0010e6e0:NodePath::~NodePath((NodePath*)local_6d8);
                        LAB_0010e6e8:iVar74 = iVar74 + 1;
                        if (iVar72 == iVar74) goto LAB_0010e8aa;
                     }
;
                     cVar66 = Animation::track_get_type((int)local_3e8);
                     if (cVar66 != '\x01') goto LAB_0010e6e0;
                     NodePath::~NodePath((NodePath*)local_6d8);
                     cVar66 = Animation::track_is_compressed((int)local_3e8);
                     if (cVar66 != '\0') goto LAB_0010e6e8;
                     Animation::track_get_path(iVar76);
                     NodePath::get_concatenated_names();
                     if (local_3b8 == (Object*)0x0) {
                        local_3d8 = (Object*)0x0;
                     }
 else {
                        pcVar5 = *(char**)( local_3b8 + 8 );
                        local_3d8 = (Object*)0x0;
                        if (pcVar5 == (char*)0x0) {
                           if (*(long*)( local_3b8 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_3d8, (CowData*)( local_3b8 + 0x10 ));
                              goto LAB_0010e7bc;
                           }

                           if (StringName::configured == '\0') goto LAB_0010e7da;
                        }
 else {
                           uStack_3a0 = (uint*)strlen(pcVar5);
                           local_3a8 = (undefined1[8])pcVar5;
                           String::parse_latin1((StrRange*)&local_3d8);
                           LAB_0010e7bc:if (( StringName::configured == '\0' ) || ( local_3b8 == (Object*)0x0 )) goto LAB_0010e7da;
                        }

                        StringName::unref();
                     }

                     LAB_0010e7da:NodePath::~NodePath((NodePath*)local_718);
                     AnimationMixer::get_root_node();
                     pNVar83 = (NodePath*)Node::get_node((NodePath*)local_778);
                     NodePath::NodePath((NodePath*)local_730, (String*)&local_3d8);
                     lVar84 = Node::get_node(pNVar83);
                     NodePath::~NodePath((NodePath*)local_730);
                     NodePath::~NodePath((NodePath*)local_6d8);
                     if (lVar84 == 0) {
                        _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x367, "Condition \"!node\" is true. Continuing.", 0, 0);
                     }
 else {
                        pSVar79 = (String*)__dynamic_cast(lVar84, &Object::typeinfo, &Skeleton3D::typeinfo, 0);
                        if (( ( pSVar79 != (String*)0x0 ) && ( ( local_6f8 == pSVar79 || local_768 == pSVar79 || ( !bVar67 ) ) ) ) && ( ( local_738 == pSVar79 || ( iVar73 == 2 ) ) )) {
                           pVVar80 = (Variant*)0x0;
                           fVar113 = (float)Skeleton3D::get_motion_scale();
                           fVar113 = _LC77 / fVar113;
                           uVar69 = Animation::track_get_key_count((int)local_3e8);
                           if (0 < (int)uVar69) {
                              do {
                                 Animation::track_get_key_value(iVar70, (int)local_3e8);
                                 _local_168 = Variant::operator_cast_to_Vector3(local_708);
                                 auVar117 = _local_168;
                                 uStack_160._4_4_ = auVar117._12_4_;
                                 if (Variant::needs_deinit[(int)local_108] != '\0') {
                                    Variant::_clear_internal();
                                 }

                                 auVar117 = _local_138;
                                 pOVar85 = local_3e8;
                                 local_138._4_4_ = SUB164(_local_168, 4) * fVar113;
                                 local_138._0_4_ = SUB164(_local_168, 0) * fVar113;
                                 uVar91 = local_138;
                                 uStack_130._4_4_ = auVar117._12_4_;
                                 local_138 = auVar117._0_8_;
                                 uStack_130._0_4_ = fVar113 * (float)uStack_160;
                                 _local_138 = CONCAT88(uStack_130, uVar91);
                                 Variant::Variant(local_708, (Vector3*)local_138);
                                 Animation::track_set_key_value((int)pOVar85, iVar74, pVVar80);
                                 if (Variant::needs_deinit[(int)local_108] != '\0') {
                                    Variant::_clear_internal();
                                 }

                                 uVar75 = (int)pVVar80 + 1;
                                 pVVar80 = (Variant*)(ulong)uVar75;
                              }
 while ( uVar69 != uVar75 );
                           }

                        }

                     }

                     iVar74 = iVar74 + 1;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_3d8);
                  }
 while ( iVar72 != iVar74 );
               }

               LAB_0010e8aa:if (local_3e8 != (Object*)0x0) {
                  cVar66 = RefCounted::unreference();
                  pOVar85 = local_3e8;
                  if (cVar66 != '\0') {
                     cVar66 = predelete_handler(local_3e8);
                     if (cVar66 != '\0') {
                        ( **(code**)( *(long*)pOVar85 + 0x140 ) )(pOVar85);
                        Memory::free_static(pOVar85, false);
                     }

                  }

               }

               lVar78 = *(long*)( lVar78 + 8 );
            }
 while ( lVar78 != 0 );
         }

         List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_3f8);
      }
;
      Array::~Array((Array*)&local_408);
   }

   if (( bVar95 != false ) && ( iVar73 != 2 )) {
      local_388 = 2;
      _local_3a8 = (undefined1[16])0x0;
      local_398 = (undefined1[16])0x0;
      local_3b8 = (Object*)0x0;
      String::parse_latin1((String*)local_730, "ImporterMeshInstance3D");
      local_3c8 = 0;
      String::parse_latin1((String*)local_718, "*");
      Node::find_children((String*)&local_3e8, param_1, SUB81(local_718, 0), bVar93);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_718);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
      LAB_0010b139:do {
         iVar72 = Array::size();
         if (iVar72 == 0) goto LAB_0010eefb;
         Array::pop_back();
         pOVar85 = Variant::operator_cast_to_Object_(local_708);
         if (pOVar85 == (Object*)0x0) {
            if (Variant::needs_deinit[(int)local_108] != '\0') {
               Variant::_clear_internal();
            }

         }
 else {
            pNVar83 = (NodePath*)__dynamic_cast(pOVar85, &Object::typeinfo, &ImporterMeshInstance3D::typeinfo, 0);
            if (Variant::needs_deinit[(int)local_108] != '\0') {
               Variant::_clear_internal();
            }

            if (pNVar83 != (NodePath*)0x0) {
               ImporterMeshInstance3D::get_skin();
               if (local_3d8 != (Object*)0x0) {
                  if (( local_3a8 != (undefined1[8])0x0 ) && ( local_388._4_4_ != 0 )) {
                     uVar87 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( local_388 & 0xffffffff ) * 4 ));
                     lVar78 = *(long*)( hash_table_size_primes_inv + ( local_388 & 0xffffffff ) * 8 );
                     uVar108 = (long)local_3d8 * 0x3ffff - 1;
                     uVar108 = ( uVar108 ^ uVar108 >> 0x1f ) * 0x15;
                     uVar108 = ( uVar108 ^ uVar108 >> 0xb ) * 0x41;
                     uVar108 = uVar108 >> 0x16 ^ uVar108;
                     uVar106 = uVar108 & 0xffffffff;
                     if ((int)uVar108 == 0) {
                        uVar106 = 1;
                     }

                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = uVar106 * lVar78;
                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = uVar87;
                     lVar84 = SUB168(auVar7 * auVar11, 8);
                     uVar69 = *(uint*)( local_398._8_8_ + lVar84 * 4 );
                     uVar108 = (ulong)uVar69;
                     iVar72 = SUB164(auVar7 * auVar11, 8);
                     if (uVar69 != 0) {
                        uVar69 = 0;
                        do {
                           if (( (int)uVar108 == (int)uVar106 ) && ( local_3d8 == *(Object**)( (long)local_3a8 + ( ulong ) * (uint*)( (long)uStack_3a0 + lVar84 * 4 ) * 8 ) )) goto LAB_0010b2f0;
                           uVar69 = uVar69 + 1;
                           auVar8._8_8_ = 0;
                           auVar8._0_8_ = ( ulong )(iVar72 + 1) * lVar78;
                           auVar12._8_8_ = 0;
                           auVar12._0_8_ = uVar87;
                           lVar84 = SUB168(auVar8 * auVar12, 8);
                           uVar75 = *(uint*)( local_398._8_8_ + lVar84 * 4 );
                           uVar108 = (ulong)uVar75;
                           iVar72 = SUB164(auVar8 * auVar12, 8);
                        }
 while ( ( uVar75 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar108 * lVar78,auVar13._8_8_ = 0,auVar13._0_8_ = uVar87,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( local_388 & 0xffffffff ) * 4 ) + iVar72 ) - SUB164(auVar9 * auVar13, 8)) * lVar78,auVar14._8_8_ = 0,auVar14._0_8_ = uVar87,uVar69 <= SUB164(auVar10 * auVar14, 8) );
                     }

                  }

                  HashSet<Ref<Skin>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Skin>>>::insert(local_730);
                  ImporterMeshInstance3D::get_skeleton_path();
                  lVar78 = Node::get_node(pNVar83);
                  NodePath::~NodePath((NodePath*)local_730);
                  if (lVar78 == 0) {
                     _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x38e, "Condition \"!node\" is true. Continuing.", 0);
                     joined_r0x0010b6a0:if (local_3d8 == (Object*)0x0) goto LAB_0010b139;
                  }
 else {
                     pSVar79 = (String*)__dynamic_cast(lVar78, &Object::typeinfo, &Skeleton3D::typeinfo, 0);
                     if (( pSVar79 == (String*)0x0 ) || ( local_738 != pSVar79 )) goto joined_r0x0010b6a0;
                     iVar72 = *(int*)( local_3d8 + 600 );
                     if (0 < iVar72) {
                        uVar106 = (ulong)iVar72;
                        uVar87 = 0;
                        do {
                           if ((int)uVar87 < iVar72) {
                              StringName::StringName((StringName*)local_718, (StringName*)( *(long*)( local_3d8 + 0x250 ) + 8 + uVar87 * 0x40 ));
                              if (local_3c8 == 0) goto LAB_0010b65f;
                              local_3b8 = (Object*)0x0;
                              if (*(char**)( local_3c8 + 8 ) == (char*)0x0) {
                                 if (*(long*)( local_3c8 + 0x10 ) != 0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)local_730, (CowData*)( local_3c8 + 0x10 ));
                                 }

                              }
 else {
                                 String::parse_latin1((String*)local_730, *(char**)( local_3c8 + 8 ));
                              }

                           }
 else {
                              _err_print_index_error("get_bind_name", "./scene/resources/3d/skin.h", 0x4b, uVar87, (long)iVar72, "p_index", "bind_count", "", false, false);
                              local_3c8 = 0;
                              LAB_0010b65f:local_3b8 = (Object*)0x0;
                           }

                           uVar69 = Skeleton3D::find_bone(local_738);
                           CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
                           if (-1 < (int)uVar69) {
                              uVar108 = (ulong)local_418 & 0xffffffff;
                              if ((uint)local_418 <= uVar69) {
                                 uVar87 = (ulong)uVar69;
                                 goto LAB_00107785;
                              }

                              uVar108 = (ulong)(int)uVar69;
                              if (local_420 == 0) goto LAB_0010cde0;
                              lVar78 = *(long*)( local_420 + -8 );
                              if (lVar78 <= (long)uVar108) goto LAB_0010734b;
                              Transform3D::affine_inverse();
                              Skeleton3D::get_bone_global_rest((int)local_198);
                              Transform3D::affine_inverse();
                              Transform3D::operator *((Transform3D*)local_708, (Transform3D*)local_168);
                              Transform3D::operator *((Transform3D*)local_1c8, (Transform3D*)local_708);
                              auVar190 = Basis::get_scale_global();
                              fStack_100 = auVar190._8_4_;
                              local_108 = auVar190._0_4_;
                              fStack_104 = auVar190._4_4_;
                              Transform3D::scale((Vector3*)local_1c8);
                              pOVar85 = local_3d8;
                              if ((int)uVar87 < *(int*)( local_3d8 + 600 )) {
                                 lVar78 = *(long*)( local_3d8 + 0x250 ) + uVar87 * 0x40;
                                 _local_138 = *(undefined1(*) [16])( lVar78 + 0x10 );
                                 _local_128 = *(undefined1(*) [16])( lVar78 + 0x20 );
                                 local_118 = *(undefined1(*) [16])( lVar78 + 0x30 );
                              }
 else {
                                 _err_print_index_error("get_bind_pose", "./scene/resources/3d/skin.h", 0x50, uVar87, (long)*(int*)( local_3d8 + 600 ), "p_index", "bind_count", "", false, false);
                                 _local_138 = ZEXT416((uint)_LC77);
                                 local_118._0_12_ = ZEXT412(0x3f800000);
                                 local_118._12_4_ = 0;
                                 _local_128 = _local_138;
                              }

                              Transform3D::operator *((Transform3D*)local_708, (Transform3D*)local_1c8);
                              Skin::set_bind_pose((int)pOVar85, (Transform3D*)( uVar87 & 0xffffffff ));
                           }

                           if (( StringName::configured != '\0' ) && ( local_3c8 != 0 )) {
                              StringName::unref();
                           }

                           uVar87 = uVar87 + 1;
                           if (uVar87 == uVar106) goto joined_r0x0010b6a0;
                           iVar72 = *(int*)( local_3d8 + 600 );
                        }
 while ( true );
                     }

                  }

                  LAB_0010b2f0:cVar66 = RefCounted::unreference();
                  pOVar85 = local_3d8;
                  if (cVar66 != '\0') {
                     cVar66 = predelete_handler(local_3d8);
                     if (cVar66 != '\0') {
                        ( **(code**)( *(long*)pOVar85 + 0x140 ) )(pOVar85);
                        Memory::free_static(pOVar85, false);
                     }

                  }

               }

               goto LAB_0010b139;
            }

         }

         _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x382, "Condition \"!mi\" is true. Continuing.", 0);
      }
 while ( true );
   }

   goto LAB_0010bb7f;
   LAB_00107768:uVar87 = (ulong)uVar69;
   goto LAB_00107785;
   LAB_00106cb8:iVar74 = Skeleton3D::get_bone_count();
   if (iVar74 <= iVar73) goto LAB_00107040;
   if (bVar65) {
      Skeleton3D::get_bone_name((int)&local_3e8);
   }
 else {
      Skeleton3D::get_bone_name(iVar76);
      StringName::StringName((StringName*)local_718, (String*)&local_3d8, false);
      BoneMap::get_skeleton_bone_name((StringName*)local_730);
      if (local_3b8 == (Object*)0x0) {
         local_3e8 = (Object*)0x0;
         LAB_00106d78:if (StringName::configured != '\0') {
            LAB_00106d7c:if (local_3c8 != 0) {
               StringName::unref();
            }

         }

      }
 else {
         pcVar5 = *(char**)( local_3b8 + 8 );
         local_3e8 = (Object*)0x0;
         if (pcVar5 == (char*)0x0) {
            if (*(long*)( local_3b8 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_3e8, (CowData*)( local_3b8 + 0x10 ));
               goto LAB_00106d55;
            }

            if (StringName::configured != '\0') goto LAB_00106d69;
         }
 else {
            uStack_3a0 = (uint*)strlen(pcVar5);
            local_3a8 = (undefined1[8])pcVar5;
            String::parse_latin1((StrRange*)&local_3e8);
            LAB_00106d55:if (StringName::configured != '\0') {
               if (local_3b8 != (Object*)0x0) {
                  LAB_00106d69:StringName::unref();
                  goto LAB_00106d78;
               }

               goto LAB_00106d7c;
            }

         }

      }

      pOVar1 = local_3d8;
      if (local_3d8 != (Object*)0x0) {
         LOCK();
         pOVar2 = local_3d8 + -0x10;
         *(long*)pOVar2 = *(long*)pOVar2 + -1;
         UNLOCK();
         if (*(long*)pOVar2 == 0) {
            local_3d8 = (Object*)0x0;
            Memory::free_static(pOVar1 + -0x10, false);
         }

      }

   }

   if (local_3e8 != (Object*)0x0) {
      if (*(uint*)( local_3e8 + -8 ) < 2) {
         LAB_00106c8d:pOVar2 = local_3e8;
         LOCK();
         pOVar1 = local_3e8 + -0x10;
         *(long*)pOVar1 = *(long*)pOVar1 + -1;
         UNLOCK();
         if (*(long*)pOVar1 == 0) {
            local_3e8 = (Object*)0x0;
            Memory::free_static(pOVar2 + -0x10, false);
         }

      }
 else {
         iVar74 = Skeleton3D::find_bone(pSVar79);
         if (iVar74 == -1) {
            if (local_3e8 != (Object*)0x0) goto LAB_00106c8d;
         }
 else {
            local_3b8 = (Object*)0x0;
            uStack_3a0 = (uint*)0x1;
            local_3a8 = ( undefined1[8] ) & _LC93;
            String::parse_latin1((StrRange*)local_730);
            String::operator +(local_6d8, (String*)&local_3f8);
            String::operator +((String*)local_718, local_6d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_6d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
            pOVar1 = local_408;
            NodePath::NodePath((NodePath*)local_6d8, (String*)local_718);
            iVar74 = Animation::find_track(pOVar1, local_6d8, 2);
            NodePath::~NodePath((NodePath*)local_6d8);
            if (iVar74 == -1) {
               uVar69 = Animation::add_track(local_408, 2, 0xffffffff);
               pOVar1 = local_408;
               NodePath::NodePath((NodePath*)local_6d8, (String*)local_718);
               Animation::track_set_path((int)pOVar1, (NodePath*)(ulong)uVar69);
               NodePath::~NodePath((NodePath*)local_6d8);
               Animation::track_set_imported((int)local_408, SUB41(uVar69, 0));
               pOVar1 = local_408;
               Skeleton3D::get_bone_rest(iVar70);
               Basis::get_rotation_quaternion();
               Animation::rotation_track_insert_key((int)pOVar1, 0.0, (Quaternion*)(ulong)uVar69);
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_718);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_3e8);
         }

      }

   }

   iVar73 = iVar73 + 1;
   goto LAB_00106cb8;
   LAB_00107040:CowData<char32_t>::_unref((CowData<char32_t>*)&local_3f8);
   if (local_408 != (Object*)0x0) {
      LAB_00106ff6:cVar66 = RefCounted::unreference();
      pOVar1 = local_408;
      if (cVar66 != '\0') {
         cVar66 = predelete_handler(local_408);
         if (cVar66 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   LAB_0010699c:local_778 = *(CowData<char32_t>**)( (long)local_778 + 8 );
   if (local_778 == (CowData<char32_t>*)0x0) goto LAB_00106f9b;
   goto LAB_001069b1;
   LAB_0010ecb8:uVar108 = (ulong)local_3f8 & 0xffffffff;
   uVar87 = (ulong)uVar69;
   LAB_00107785:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar87, uVar108, "p_index", "count", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar15 = (code*)invalidInstructionException();
   ( *pcVar15 )();
   LAB_0010eefb:Node::get_children(bVar93);
   Array::operator =((Array*)&local_3e8, (Array*)local_730);
   Array::~Array((Array*)local_730);
   LAB_0010ef41:iVar72 = Array::size();
   if (iVar72 != 0) {
      Array::pop_back();
      pOVar85 = Variant::operator_cast_to_Object_(local_708);
      if (pOVar85 == (Object*)0x0) {
         if (Variant::needs_deinit[(int)local_108] != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         lVar78 = __dynamic_cast(pOVar85, &Object::typeinfo, &BoneAttachment3D::typeinfo, 0);
         if (Variant::needs_deinit[(int)local_108] != '\0') {
            Variant::_clear_internal();
         }

         if (lVar78 != 0) {
            uVar69 = BoneAttachment3D::get_bone_idx();
            if (uVar69 == 0xffffffff) {
               BoneAttachment3D::get_bone_name();
               uVar69 = Skeleton3D::find_bone(local_738);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_730);
            }

            if (-1 < (int)uVar69) {
               iVar72 = Skeleton3D::get_bone_count();
               if ((int)uVar69 < iVar72) {
                  uVar108 = (ulong)local_418 & 0xffffffff;
                  if ((uint)local_418 <= uVar69) goto LAB_00107768;
                  uVar108 = (ulong)(int)uVar69;
                  if (local_420 == 0) {
                     LAB_0010cde0:lVar78 = 0;
                     LAB_0010734b:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar108, lVar78, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar15 = (code*)invalidInstructionException();
                     ( *pcVar15 )();
                  }

                  lVar78 = *(long*)( local_420 + -8 );
                  if (lVar78 <= (long)uVar108) goto LAB_0010734b;
                  Transform3D::affine_inverse();
                  Skeleton3D::get_bone_global_rest((int)local_198);
                  Transform3D::affine_inverse();
                  Transform3D::operator *((Transform3D*)local_708, (Transform3D*)local_168);
                  Transform3D::operator *((Transform3D*)local_1c8, (Transform3D*)local_708);
                  auVar190 = Basis::get_scale_global();
                  fStack_100 = auVar190._8_4_;
                  local_108 = auVar190._0_4_;
                  fStack_104 = auVar190._4_4_;
                  Transform3D::scale((Vector3*)local_1c8);
                  Node::get_children(bVar93);
                  LAB_0010f0c6:iVar72 = Array::size();
                  if (iVar72 != 0) {
                     while (true) {
                        Array::pop_back();
                        pOVar85 = Variant::operator_cast_to_Object_(local_708);
                        if (pOVar85 == (Object*)0x0) break;
                        pTVar81 = (Transform3D*)__dynamic_cast(pOVar85, &Object::typeinfo, &Node3D::typeinfo, 0);
                        if (Variant::needs_deinit[(int)local_108] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (pTVar81 == (Transform3D*)0x0) goto LAB_0010f0c6;
                        Node3D::get_transform();
                        Transform3D::operator *((Transform3D*)local_708, (Transform3D*)local_1c8);
                        Node3D::set_transform(pTVar81);
                        iVar72 = Array::size();
                        if (iVar72 == 0) goto LAB_0010f14d;
                     }
;
                     if (Variant::needs_deinit[(int)local_108] != '\0') {
                        Variant::_clear_internal();
                     }

                     goto LAB_0010f0c6;
                  }

                  LAB_0010f14d:Array::~Array((Array*)local_730);
                  goto LAB_0010ef41;
               }

            }

            _err_print_error("internal_process", "editor/import/3d/post_import_plugin_skeleton_rest_fixer.cpp", 0x3aa, "Condition \"bone_idx < 0 || bone_idx >= src_skeleton->get_bone_count()\" is true. Continuing.", 0, 0);
         }

      }

      goto LAB_0010ef41;
   }

   Array::~Array((Array*)&local_3e8);
   auVar92 = local_3a8;
   if (local_3a8 != (undefined1[8])0x0) {
      uVar69 = local_388._4_4_;
      uVar91 = local_398._8_8_;
      if (local_388._4_4_ != 0) {
         if (*(uint*)( hash_table_size_primes + ( local_388 & 0xffffffff ) * 4 ) != 0) {
            memset((void*)local_398._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_388 & 0xffffffff ) * 4 ) * 4);
         }

         auVar101 = auVar92;
         do {
            if (*(long*)auVar101 != 0) {
               cVar66 = RefCounted::unreference();
               if (cVar66 != '\0') {
                  pOVar85 = *(Object**)auVar101;
                  cVar66 = predelete_handler(pOVar85);
                  if (cVar66 != '\0') {
                     ( **(code**)( *(long*)pOVar85 + 0x140 ) )(pOVar85);
                     Memory::free_static(pOVar85, false);
                  }

               }

            }

            auVar101 = ( undefined1[8] )((long)auVar101 + 8);
         }
 while ( auVar101 != ( undefined1[8] )((long)auVar92 + (ulong)uVar69 * 8) );
      }

      Memory::free_static((void*)auVar92, false);
      Memory::free_static((void*)local_398._0_8_, false);
      Memory::free_static(uStack_3a0, false);
      Memory::free_static((void*)uVar91, false);
   }

   Variant::Variant(local_708, "retarget/rest_fixer/reset_all_bone_poses_after_import");
   cVar66 = Dictionary::has(param_3);
   if (cVar66 == '\0') {
      if (Variant::needs_deinit[(int)local_108] != '\0') {
         Variant::_clear_internal();
      }

      LAB_0010ba67:pVVar99 = (Vector3*)0x0;
      while (true) {
         iVar72 = Skeleton3D::get_bone_count();
         if (iVar72 <= (int)pVVar99) break;
         Skeleton3D::get_bone_rest(iVar70);
         iVar72 = (int)local_738;
         Skeleton3D::set_bone_pose_position(iVar72, pVVar99);
         Basis::get_rotation_quaternion();
         Skeleton3D::set_bone_pose_rotation(iVar72, (Quaternion*)pVVar99);
         _local_138 = Basis::get_scale();
         auVar117 = _local_138;
         uStack_130._4_4_ = auVar117._12_4_;
         Skeleton3D::set_bone_pose_scale(iVar72, pVVar99);
         pVVar99 = (Vector3*)( ulong )((int)pVVar99 + 1);
      }
;
      if (local_6f8 != (String*)0x0) {
         uVar69 = 0;
         while (true) {
            pVVar99 = (Vector3*)(ulong)uVar69;
            iVar72 = Skeleton3D::get_bone_count();
            if (iVar72 <= (int)uVar69) break;
            Skeleton3D::get_bone_rest(iVar70);
            iVar72 = (int)local_6f8;
            Skeleton3D::set_bone_pose_position(iVar72, pVVar99);
            Basis::get_rotation_quaternion();
            Skeleton3D::set_bone_pose_rotation(iVar72, (Quaternion*)pVVar99);
            _local_138 = Basis::get_scale();
            auVar117 = _local_138;
            uVar69 = uVar69 + 1;
            uStack_130._4_4_ = auVar117._12_4_;
            Skeleton3D::set_bone_pose_scale(iVar72, pVVar99);
         }
;
      }

   }
 else {
      Variant::Variant((Variant*)local_138, "retarget/rest_fixer/reset_all_bone_poses_after_import");
      pVVar80 = (Variant*)Dictionary::operator [](param_3);
      bVar95 = Variant::operator_cast_to_bool(pVVar80);
      if (Variant::needs_deinit[(int)local_138._0_4_] != '\0') {
         Variant::_clear_internal();
      }

      if (Variant::needs_deinit[(int)local_108] != '\0') {
         Variant::_clear_internal();
      }

      if (bVar95) goto LAB_0010ba67;
   }

   LAB_0010bb7f:cVar66 = predelete_handler((Object*)this_00);
   if (cVar66 != '\0') {
      ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
      Memory::free_static(this_00, false);
   }

   if (local_410 != (void*)0x0) {
      LocalVector<Transform3D,unsigned_int,false,false>::resize((LocalVector<Transform3D,unsigned_int,false,false>*)&local_418, 0);
      if (local_410 != (void*)0x0) {
         Memory::free_static(local_410, false);
      }

   }

   CowData<Transform3D>::_unref((CowData<Transform3D>*)&local_420);
   Array::~Array((Array*)local_470);
   joined_r0x0010bbfb:if (local_478 != (StringName*)0x0) {
      LAB_001069d5:cVar66 = RefCounted::unreference();
      if (cVar66 != '\0') {
         cVar66 = predelete_handler((Object*)local_478);
         if (cVar66 != '\0') {
            ( **(code**)( *(long*)local_478 + 0x140 ) )(local_478);
            Memory::free_static(local_478, false);
         }

      }

   }

   LAB_0010574b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PostImportPluginSkeletonRestFixer::internal_process(EditorScenePostImportPlugin::InternalImportCategory,
   Node*, Node*, Ref<Resource>, Dictionary const&) */void PostImportPluginSkeletonRestFixer::internal_process(undefined8 param_1, int param_2, undefined8 param_3, undefined8 param_4, undefined8 param_5, undefined8 param_6) {
   if (param_2 != 6) {
      return;
   }

   internal_process(param_3, param_4, param_6);
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
/* RefCounted::is_class_ptr(void*) const */uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
   return (uint)CONCAT71(0x114f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x114f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* PostImportPluginSkeletonRestFixer::is_class_ptr(void*) const */uint PostImportPluginSkeletonRestFixer::is_class_ptr(PostImportPluginSkeletonRestFixer *this, void *param_1) {
   return (uint)CONCAT71(0x114f, (undefined4*)param_1 == &EditorScenePostImportPlugin::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x114f, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x114f, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x114f, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* PostImportPluginSkeletonRestFixer::_getv(StringName const&, Variant&) const */undefined8 PostImportPluginSkeletonRestFixer::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PostImportPluginSkeletonRestFixer::_setv(StringName const&, Variant const&) */undefined8 PostImportPluginSkeletonRestFixer::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PostImportPluginSkeletonRestFixer::_validate_propertyv(PropertyInfo&) const */void PostImportPluginSkeletonRestFixer::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* PostImportPluginSkeletonRestFixer::_property_can_revertv(StringName const&) const */undefined8 PostImportPluginSkeletonRestFixer::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* PostImportPluginSkeletonRestFixer::_property_get_revertv(StringName const&, Variant&) const */undefined8 PostImportPluginSkeletonRestFixer::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* PostImportPluginSkeletonRestFixer::_notificationv(int, bool) */void PostImportPluginSkeletonRestFixer::_notificationv(int param_1, bool param_2) {
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00114c70;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00114c70;
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
         LAB_001107e3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001107e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_0011084e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_0011084e:return &_get_class_namev();
}
/* PostImportPluginSkeletonRestFixer::_get_class_namev() const */undefined8 *PostImportPluginSkeletonRestFixer::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_001108e3:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001108e3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PostImportPluginSkeletonRestFixer");
         goto LAB_0011094e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "PostImportPluginSkeletonRestFixer");
   LAB_0011094e:return &_get_class_namev();
}
/* PostImportPluginSkeletonRestFixer::~PostImportPluginSkeletonRestFixer() */void PostImportPluginSkeletonRestFixer::~PostImportPluginSkeletonRestFixer(PostImportPluginSkeletonRestFixer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Memory::free_static;
   if (bVar1) {
      if (*(long*)( this + 0x248 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110aaa;
      }

      if (*(long*)( this + 0x230 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110aaa;
      }

      if (*(long*)( this + 0x218 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110aaa;
      }

      if (*(long*)( this + 0x200 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110aaa;
      }

      if (*(long*)( this + 0x1e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110aaa;
      }

      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110aaa;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110aaa;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00110aaa:*(undefined***)this = &PTR__initialize_classv_00114c70;
   Object::~Object((Object*)this);
   return;
}
/* PostImportPluginSkeletonRestFixer::~PostImportPluginSkeletonRestFixer() */void PostImportPluginSkeletonRestFixer::~PostImportPluginSkeletonRestFixer(PostImportPluginSkeletonRestFixer *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Memory::free_static;
   if (bVar1) {
      if (*(long*)( this + 0x248 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110bda;
      }

      if (*(long*)( this + 0x230 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110bda;
      }

      if (*(long*)( this + 0x218 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110bda;
      }

      if (*(long*)( this + 0x200 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110bda;
      }

      if (*(long*)( this + 0x1e8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110bda;
      }

      if (*(long*)( this + 0x1d0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110bda;
      }

      if (*(long*)( this + 0x1b8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00110bda;
      }

      if (*(long*)( this + 0x1a0 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00110bda:*(undefined***)this = &PTR__initialize_classv_00114c70;
   Object::~Object((Object*)this);
   operator_delete(this, 0x260);
   return;
}
/* CowData<Basis>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Basis>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Transform3D>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Transform3D>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<int>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<int>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<StringName>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<StringName>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<StringName>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<StringName>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
void FUN_00110e56(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<Transform3D>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Transform3D>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00110e6a(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* Error CowData<Basis>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Basis>::resize<false>(long param_1) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00110e80(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
/* PostImportPluginSkeletonRestFixer::get_class() const */void PostImportPluginSkeletonRestFixer::get_class(void) {
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
            if (pvVar5 == (void*)0x0) goto LAB_001111b4;
         }

      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_001111b4:if (*(long*)this != 0) {
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

      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_bind_methods) {
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
      LAB_00111558:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00111558;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00111576;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00111576:if (lVar2 == 0) {
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
                  if (lVar5 == 0) goto LAB_0011184f;
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

      LAB_0011184f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00111903;
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
                     if (lVar5 == 0) goto LAB_001119b3;
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

         LAB_001119b3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00111903;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00111903:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* PostImportPluginSkeletonRestFixer::is_class(String const&) const */undefined8 PostImportPluginSkeletonRestFixer::is_class(PostImportPluginSkeletonRestFixer *this, String *param_1) {
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
                  if (lVar5 == 0) goto LAB_00111aef;
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

      LAB_00111aef:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00111ba3;
   }

   cVar6 = String::operator ==(param_1, "PostImportPluginSkeletonRestFixer");
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
                     if (lVar5 == 0) goto LAB_00111c63;
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

         LAB_00111c63:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00111ba3;
      }

      cVar6 = String::operator ==(param_1, "EditorScenePostImportPlugin");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar7;
         }

         goto LAB_00111d0c;
      }

   }

   LAB_00111ba3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_00111d0c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* PostImportPluginSkeletonRestFixer::_initialize_classv() */void PostImportPluginSkeletonRestFixer::_initialize_classv(void) {
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
      if (EditorScenePostImportPlugin::initialize_class() == '\0') {
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

            if ((code*)PTR__bind_methods_00118010 != RefCounted::_bind_methods) {
               RefCounted::_bind_methods();
            }

            RefCounted::initialize_class()::initialized =
            '\x01';
         }

         local_58 = "RefCounted";
         local_68 = 0;
         local_50 = 10;
         String::parse_latin1((StrRange*)&local_68);
         StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
         local_58 = "EditorScenePostImportPlugin";
         local_70 = 0;
         local_50 = 0x1b;
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

         if ((code*)PTR__bind_methods_00118008 != RefCounted::_bind_methods) {
            EditorScenePostImportPlugin::_bind_methods();
         }

         EditorScenePostImportPlugin::initialize_class()::initialized =
         '\x01';
      }

      local_58 = "EditorScenePostImportPlugin";
      local_68 = 0;
      local_50 = 0x1b;
      String::parse_latin1((StrRange*)&local_68);
      StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
      local_58 = "PostImportPluginSkeletonRestFixer";
      local_70 = 0;
      local_50 = 0x21;
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

   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
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
/* EditorScenePostImportPlugin::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void EditorScenePostImportPlugin::_get_property_listv(EditorScenePostImportPlugin *this, List *param_1, bool param_2) {
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
   local_78 = "EditorScenePostImportPlugin";
   local_70 = 0x1b;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorScenePostImportPlugin";
   local_98 = 0;
   local_70 = 0x1b;
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
      LAB_00112318:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00112318;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00112335;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00112335:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "EditorScenePostImportPlugin", false);
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
/* PostImportPluginSkeletonRestFixer::_get_property_listv(List<PropertyInfo, DefaultAllocator>*,
   bool) const */void PostImportPluginSkeletonRestFixer::_get_property_listv(PostImportPluginSkeletonRestFixer *this, List *param_1, bool param_2) {
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
      EditorScenePostImportPlugin::_get_property_listv((EditorScenePostImportPlugin*)this, param_1, false);
   }

   local_88 = 0;
   local_90 = 0;
   local_78 = "PostImportPluginSkeletonRestFixer";
   local_70 = 0x21;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "PostImportPluginSkeletonRestFixer";
   local_98 = 0;
   local_70 = 0x21;
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
      LAB_00112768:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00112768;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00112785;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00112785:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "PostImportPluginSkeletonRestFixer", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         EditorScenePostImportPlugin::_get_property_listv((EditorScenePostImportPlugin*)this, param_1, true);
         return;
      }

   }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
/* Ref<Animation>::unref() */void Ref<Animation>::unref(Ref<Animation> *this) {
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
/* WARNING: Removing unreachable block (ram,0x00113598) *//* WARNING: Removing unreachable block (ram,0x001136c8) *//* WARNING: Removing unreachable block (ram,0x00113890) *//* WARNING: Removing unreachable block (ram,0x001136d4) *//* WARNING: Removing unreachable block (ram,0x001136de) *//* WARNING: Removing unreachable block (ram,0x00113870) *//* WARNING: Removing unreachable block (ram,0x001136ea) *//* WARNING: Removing unreachable block (ram,0x001136f4) *//* WARNING: Removing unreachable block (ram,0x00113850) *//* WARNING: Removing unreachable block (ram,0x00113700) *//* WARNING: Removing unreachable block (ram,0x0011370a) *//* WARNING: Removing unreachable block (ram,0x00113830) *//* WARNING: Removing unreachable block (ram,0x00113716) *//* WARNING: Removing unreachable block (ram,0x00113720) *//* WARNING: Removing unreachable block (ram,0x00113810) *//* WARNING: Removing unreachable block (ram,0x0011372c) *//* WARNING: Removing unreachable block (ram,0x00113736) *//* WARNING: Removing unreachable block (ram,0x001137f0) *//* WARNING: Removing unreachable block (ram,0x00113742) *//* WARNING: Removing unreachable block (ram,0x0011374c) *//* WARNING: Removing unreachable block (ram,0x001137d0) *//* WARNING: Removing unreachable block (ram,0x00113754) *//* WARNING: Removing unreachable block (ram,0x0011376a) *//* WARNING: Removing unreachable block (ram,0x00113776) *//* String vformat<Variant::Type>(String const&, Variant::Type const) */undefined8 *vformat<Variant::Type>(undefined8 *param_1, bool *param_2, int param_3) {
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
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::operator[](StringName const&)
   const */long HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator [](HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this, StringName *param_1) {
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
   code *pcVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar12 = StringName::get_empty_hash();
      }
 else {
         uVar12 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar12 == 0) {
         uVar12 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar12 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         do {
            if (( uVar12 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return *(long*)( *(long*)( this + 8 ) + (ulong)uVar13 * 8 ) + 0x18;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x10 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar11 = (code*)invalidInstructionException();
   ( *pcVar11 )();
}
/* void memdelete<Skeleton3D>(Skeleton3D*) */void memdelete<Skeleton3D>(Skeleton3D *param_1) {
   char cVar1;
   cVar1 = predelete_handler((Object*)param_1);
   if (cVar1 != '\0') {
      ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
      Memory::free_static(param_1, false);
      return;
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<Ref<Skin>, HashMapHasherDefault, HashMapComparatorDefault<Ref<Skin> > >::insert(Ref<Skin>
   const&) */undefined1[16];HashSet<Ref<Skin>,HashMapHasherDefault,HashMapComparatorDefault<Ref<Skin>>>::insert(Ref *param_1) {
   uint *puVar1;
   long *plVar2;
   uint uVar3;
   long lVar4;
   void *pvVar5;
   void *pvVar6;
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
   undefined1 auVar28[16];
   undefined1 auVar29[16];
   undefined1 auVar30[16];
   undefined1 auVar31[16];
   char cVar32;
   uint uVar33;
   ulong uVar34;
   long lVar35;
   long lVar36;
   uint *puVar37;
   int iVar38;
   long *in_RDX;
   long lVar39;
   ulong uVar40;
   long *in_RSI;
   ulong uVar41;
   uint uVar42;
   undefined4 uVar43;
   ulong uVar44;
   uint uVar45;
   undefined1 auVar46[16];
   ulong uStack_98;
   ulong local_88;
   ulong local_70;
   lVar35 = *in_RSI;
   uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (lVar35 == 0) {
      uVar34 = (ulong)uVar33 * 4;
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[3] = lVar35;
      lVar35 = Memory::alloc_static((ulong)uVar33 * 8, false);
      *in_RSI = lVar35;
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[2] = lVar35;
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[1] = lVar35;
      if (uVar33 != 0) {
         memset((void*)in_RSI[3], 0, uVar34);
      }

      lVar35 = *in_RSI;
      lVar36 = *in_RDX;
      uVar3 = *(uint*)( (long)in_RSI + 0x24 );
      local_88 = (ulong)uVar3;
      if (lVar35 != 0) goto LAB_00113b88;
   }
 else {
      lVar36 = *in_RDX;
      uVar3 = *(uint*)( (long)in_RSI + 0x24 );
      LAB_00113b88:local_88 = (ulong)uVar3;
      if (uVar3 != 0) {
         uVar40 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ));
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar34 = lVar36 * 0x3ffff - 1;
         uVar34 = ( uVar34 ^ uVar34 >> 0x1f ) * 0x15;
         uVar34 = ( uVar34 ^ uVar34 >> 0xb ) * 0x41;
         uVar34 = uVar34 >> 0x16 ^ uVar34;
         uVar44 = uVar34 & 0xffffffff;
         if ((int)uVar34 == 0) {
            uVar44 = 1;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar44 * lVar4;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar40;
         lVar39 = SUB168(auVar8 * auVar20, 8);
         uVar42 = *(uint*)( in_RSI[3] + lVar39 * 4 );
         uVar34 = (ulong)uVar42;
         iVar38 = SUB164(auVar8 * auVar20, 8);
         if (uVar42 != 0) {
            uVar42 = 0;
            do {
               if ((int)uVar34 == (int)uVar44) {
                  uVar45 = *(uint*)( in_RSI[1] + lVar39 * 4 );
                  uStack_98 = (ulong)uVar45;
                  if (*(long*)( lVar35 + uStack_98 * 8 ) == lVar36) goto LAB_00113c9a;
               }

               uVar42 = uVar42 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(iVar38 + 1) * lVar4;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar40;
               lVar39 = SUB168(auVar9 * auVar21, 8);
               uVar45 = *(uint*)( in_RSI[3] + lVar39 * 4 );
               uVar34 = (ulong)uVar45;
               iVar38 = SUB164(auVar9 * auVar21, 8);
            }
 while ( ( uVar45 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar34 * lVar4,auVar22._8_8_ = 0,auVar22._0_8_ = uVar40,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ) + iVar38 ) - SUB164(auVar10 * auVar22, 8)) * lVar4,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,uVar42 <= SUB164(auVar11 * auVar23, 8) );
         }

      }

   }

   if ((float)uVar33 * __LC42 < (float)( uVar3 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         lVar35 = *in_RSI;
         uVar45 = 0xffffffff;
         uVar3 = *(uint*)( (long)in_RSI + 0x24 );
         goto LAB_00113c9a;
      }

      uVar33 = (int)in_RSI[4] + 1;
      uVar34 = (ulong)uVar33;
      if (uVar33 < 2) {
         uVar34 = 2;
      }

      uVar33 = *(uint*)( hash_table_size_primes + uVar34 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar34;
      pvVar5 = (void*)in_RSI[3];
      uVar34 = (ulong)uVar33 * 4;
      pvVar6 = (void*)in_RSI[2];
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[3] = lVar35;
      lVar35 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar33 * 8, false);
      *in_RSI = lVar35;
      lVar35 = Memory::alloc_static(uVar34, false);
      in_RSI[2] = lVar35;
      lVar35 = Memory::realloc_static((void*)in_RSI[1], uVar34, false);
      in_RSI[1] = lVar35;
      if (uVar33 != 0) {
         memset((void*)in_RSI[3], 0, uVar34);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar36 = in_RSI[2];
         lVar4 = in_RSI[3];
         local_70 = 0;
         do {
            uVar45 = 0;
            uVar40 = local_70 & 0xffffffff;
            uVar43 = (undefined4)local_70;
            uVar33 = *(uint*)( (long)pvVar5 + ( ulong ) * (uint*)( (long)pvVar6 + local_70 * 4 ) * 4 );
            uVar34 = (ulong)uVar33;
            lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar41 = CONCAT44(0, uVar3);
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar34 * lVar7;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar41;
            lVar39 = SUB168(auVar12 * auVar24, 8) * 4;
            iVar38 = SUB164(auVar12 * auVar24, 8);
            puVar1 = (uint*)( lVar4 + lVar39 );
            uVar42 = *puVar1;
            uVar44 = local_70;
            while (uVar42 != 0) {
               auVar13._8_8_ = 0;
               auVar13._0_8_ = (ulong)uVar42 * lVar7;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar41;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(( iVar38 + uVar3 ) - SUB164(auVar13 * auVar25, 8)) * lVar7;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar41;
               uVar33 = SUB164(auVar14 * auVar26, 8);
               if (uVar33 < uVar45) {
                  *(int*)( lVar36 + uVar40 * 4 ) = iVar38;
                  uVar42 = *puVar1;
                  *puVar1 = (uint)uVar34;
                  uVar45 = *(uint*)( lVar39 + lVar35 );
                  uVar34 = (ulong)uVar42;
                  *(uint*)( lVar39 + lVar35 ) = (uint)uVar40;
                  uVar40 = (ulong)uVar45;
                  uVar45 = uVar33;
               }

               uVar43 = (undefined4)uVar40;
               uVar33 = (uint)uVar34;
               uVar45 = uVar45 + 1;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = ( ulong )(iVar38 + 1) * lVar7;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar41;
               lVar39 = SUB168(auVar15 * auVar27, 8) * 4;
               iVar38 = SUB164(auVar15 * auVar27, 8);
               puVar1 = (uint*)( lVar4 + lVar39 );
               uVar44 = uVar40;
               uVar42 = *puVar1;
            }
;
            *puVar1 = uVar33;
            *(int*)( lVar36 + uVar44 * 4 ) = iVar38;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar35 + lVar39 ) = uVar43;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar5, false);
      Memory::free_static(pvVar6, false);
      lVar35 = *in_RSI;
      local_88 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
   }

   lVar36 = *in_RDX;
   plVar2 = (long*)( lVar35 + local_88 * 8 );
   *plVar2 = 0;
   uVar34 = lVar36 * 0x3ffff - 1;
   uVar34 = ( uVar34 ^ uVar34 >> 0x1f ) * 0x15;
   uVar34 = ( uVar34 ^ uVar34 >> 0xb ) * 0x41;
   uVar34 = uVar34 >> 0x16 ^ uVar34;
   uVar40 = uVar34 & 0xffffffff;
   if ((int)uVar34 == 0) {
      uVar40 = 1;
   }

   uVar33 = (uint)uVar40;
   if (*in_RDX != 0) {
      *plVar2 = *in_RDX;
      cVar32 = RefCounted::reference();
      if (cVar32 == '\0') {
         *plVar2 = 0;
      }

      lVar35 = *in_RSI;
      local_88 = ( ulong ) * (uint*)( (long)in_RSI + 0x24 );
   }

   uVar45 = 0;
   lVar4 = in_RSI[3];
   lVar39 = in_RSI[1];
   lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar41 = CONCAT44(0, uVar3);
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar40 * lVar7;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar41;
   lVar36 = SUB168(auVar16 * auVar28, 8) * 4;
   iVar38 = SUB164(auVar16 * auVar28, 8);
   uVar34 = in_RSI[2];
   puVar1 = (uint*)( lVar4 + lVar36 );
   uVar42 = *puVar1;
   uStack_98 = uVar34;
   uVar44 = local_88;
   while (uVar42 != 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)uVar42 * lVar7;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar41;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(( uVar3 + iVar38 ) - SUB164(auVar17 * auVar29, 8)) * lVar7;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar41;
      uVar33 = SUB164(auVar18 * auVar30, 8);
      if (uVar33 < uVar45) {
         puVar37 = (uint*)( lVar36 + lVar39 );
         *(int*)( uVar34 + uVar44 * 4 ) = iVar38;
         uVar42 = *puVar1;
         *puVar1 = (uint)uVar40;
         uVar45 = *puVar37;
         uVar40 = (ulong)uVar42;
         *puVar37 = (uint)local_88;
         local_88 = (ulong)uVar45;
         uVar44 = local_88;
         uVar45 = uVar33;
      }

      uVar33 = (uint)uVar40;
      uVar45 = uVar45 + 1;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = ( ulong )(iVar38 + 1) * lVar7;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar41;
      uStack_98 = SUB168(auVar19 * auVar31, 8);
      lVar36 = uStack_98 * 4;
      iVar38 = SUB164(auVar19 * auVar31, 8);
      puVar1 = (uint*)( lVar4 + lVar36 );
      uVar42 = *puVar1;
   }
;
   *puVar1 = uVar33;
   *(int*)( uVar34 + uVar44 * 4 ) = iVar38;
   *(uint*)( lVar39 + lVar36 ) = (uint)local_88;
   uVar45 = *(uint*)( (long)in_RSI + 0x24 );
   *(uint*)( (long)in_RSI + 0x24 ) = uVar45 + 1;
   uVar3 = uVar45 + 1;
   LAB_00113c9a:local_88._0_4_ = uVar3;
   *(uint*)( param_1 + 0xc ) = uVar45;
   *(long*)param_1 = lVar35;
   *(uint*)( param_1 + 8 ) = (uint)local_88;
   auVar46._8_8_ = uStack_98;
   auVar46._0_8_ = param_1;
   return auVar46;
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
/* CowData<int>::_unref() */void CowData<int>::_unref(CowData<int> *this) {
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
      LAB_001146d0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_001146d0;
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
            goto LAB_001145e1;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_001145e1:puVar7[-1] = param_1;
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
/* Vector<int>::remove_at(long) */void Vector<int>::remove_at(Vector<int> *this, long param_1) {
   long lVar1;
   long lVar2;
   lVar2 = *(long*)( this + 8 );
   if (param_1 < 0) {
      if (lVar2 != 0) {
         lVar2 = *(long*)( lVar2 + -8 );
         goto LAB_001147d1;
      }

   }
 else if (lVar2 != 0) {
      lVar2 = *(long*)( lVar2 + -8 );
      if (param_1 < lVar2) {
         CowData<int>::_copy_on_write((CowData<int>*)( this + 8 ));
         lVar2 = *(long*)( this + 8 );
         if (lVar2 == 0) {
            lVar1 = -1;
         }
 else {
            lVar1 = *(long*)( lVar2 + -8 ) + -1;
            if (param_1 < lVar1) {
               memmove((void*)( lVar2 + param_1 * 4 ), (void*)( lVar2 + 4 + param_1 * 4 ), ( *(long*)( lVar2 + -8 ) - param_1 ) * 4 - 4);
            }

         }

         CowData<int>::resize<false>((CowData<int>*)( this + 8 ), lVar1);
         return;
      }

      goto LAB_001147d1;
   }

   lVar2 = 0;
   LAB_001147d1:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_1, lVar2, "p_index", "size()", "", false, false);
   return;
}
/* CowData<Transform3D>::_unref() */void CowData<Transform3D>::_unref(CowData<Transform3D> *this) {
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
/* CowData<Transform3D>::_realloc(long) */undefined8 CowData<Transform3D>::_realloc(CowData<Transform3D> *this, long param_1) {
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
/* CowData<Basis>::_unref() */void CowData<Basis>::_unref(CowData<Basis> *this) {
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
/* CowData<Basis>::_realloc(long) */undefined8 CowData<Basis>::_realloc(CowData<Basis> *this, long param_1) {
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
/* LocalVector<Transform3D, unsigned int, false, false>::resize(unsigned int) */void LocalVector<Transform3D,unsigned_int,false,false>::resize(LocalVector<Transform3D,unsigned_int,false,false> *this, uint param_1) {
   code *pcVar1;
   uint uVar2;
   uint uVar3;
   undefined1(*pauVar4)[16];
   undefined1(*pauVar5)[16];
   long lVar6;
   uint uVar7;
   uVar3 = *(uint*)this;
   if (uVar3 <= param_1) {
      if (param_1 <= uVar3) {
         return;
      }

      uVar7 = param_1 - 1;
      if (*(uint*)( this + 4 ) < param_1) {
         uVar3 = uVar7 >> 1 | uVar7;
         uVar3 = uVar3 | uVar3 >> 2;
         uVar3 = uVar3 | uVar3 >> 4;
         uVar3 = uVar3 | uVar3 >> 8;
         uVar3 = ( uVar3 | uVar3 >> 0x10 ) + 1;
         *(uint*)( this + 4 ) = uVar3;
         lVar6 = Memory::realloc_static(*(void**)( this + 8 ), (ulong)uVar3 * 0x30, false);
         *(long*)( this + 8 ) = lVar6;
         if (lVar6 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         uVar3 = *(uint*)this;
         if (param_1 <= uVar3) goto LAB_00114a4d;
      }

      uVar2 = _LC77;
      lVar6 = *(long*)( this + 8 );
      pauVar4 = (undefined1(*) [16])( (ulong)uVar3 * 0x30 + lVar6 );
      do {
         *(undefined8*)( pauVar4[2] + 4 ) = 0;
         pauVar5 = pauVar4 + 3;
         *pauVar4 = ZEXT416(uVar2);
         pauVar4[1] = ZEXT416(uVar2);
         *(uint*)pauVar4[2] = uVar2;
         *(undefined4*)( pauVar4[2] + 0xc ) = 0;
         pauVar4 = pauVar5;
      }
 while ( pauVar5 != (undefined1(*) [16])( lVar6 + 0x30 + ( ( ulong )(uVar7 - uVar3) + (ulong)uVar3 ) * 0x30 ) );
   }

   LAB_00114a4d:*(uint*)this = param_1;
   return;
}
/* PostImportPluginSkeletonRestFixer::get_internal_import_options(EditorScenePostImportPlugin::InternalImportCategory,
   List<ResourceImporter::ImportOption, DefaultAllocator>*) */void PostImportPluginSkeletonRestFixer::_GLOBAL__sub_I_get_internal_import_options(void) {
   if (Animation::PARAMETERS_BASE_PATH == '\0') {
      Animation::PARAMETERS_BASE_PATH = '\x01';
      Animation::PARAMETERS_BASE_PATH = 0;
      String::parse_latin1((String*)&Animation::PARAMETERS_BASE_PATH, "parameters/");
      __cxa_atexit(String::~String, &Animation::PARAMETERS_BASE_PATH, &__dso_handle);
   }

   if (AudioStreamRandomizer::base_property_helper != '\0') {
      return;
   }

   AudioStreamRandomizer::base_property_helper = 1;
   AudioStreamRandomizer::base_property_helper._56_8_ = 2;
   AudioStreamRandomizer::base_property_helper._64_8_ = 0;
   AudioStreamRandomizer::base_property_helper._0_16_ = (undefined1[16])0x0;
   AudioStreamRandomizer::base_property_helper._24_16_ = (undefined1[16])0x0;
   AudioStreamRandomizer::base_property_helper._40_16_ = (undefined1[16])0x0;
   __cxa_atexit(PropertyListHelper::~PropertyListHelper, AudioStreamRandomizer::base_property_helper, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
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
/* WARNING: Control flow encountered bad instruction data *//* PostImportPluginSkeletonRestFixer::~PostImportPluginSkeletonRestFixer() */void PostImportPluginSkeletonRestFixer::~PostImportPluginSkeletonRestFixer(PostImportPluginSkeletonRestFixer *this) {
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


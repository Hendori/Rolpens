/* ResourceFormatDDS::handles_type(String const&) const */undefined4 ResourceFormatDDS::handles_type(ResourceFormatDDS *this, String *param_1) {
   undefined4 uVar1;
   long in_FS_OFFSET;
   long local_30;
   long local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   StringName::StringName((StringName*)&local_28, "Texture", false);
   StringName::StringName((StringName*)&local_30, param_1, false);
   uVar1 = ClassDB::is_parent_class((StringName*)&local_30, (StringName*)&local_28);
   if (StringName::configured != '\0') {
      if (local_30 != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00100086;
      }

      if (local_28 != 0) {
         StringName::unref();
      }

   }

   LAB_00100086:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
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
/* ResourceFormatDDS::get_resource_type(String const&) const */String *ResourceFormatDDS::get_resource_type(String *param_1) {
   long *plVar1;
   char *pcVar2;
   char cVar3;
   long in_FS_OFFSET;
   long local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   String::get_extension();
   String::to_lower();
   cVar3 = String::operator ==((String*)&local_38, "dds");
   pcVar2 = local_38;
   if (local_38 != (char*)0x0) {
      LOCK();
      plVar1 = (long*)( (long)local_38 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_38 = (char*)0x0;
         Memory::free_static((void*)( (long)pcVar2 + -0x10 ), false);
      }

   }

   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_40 + -0x10 ), false);
      }

   }

   *(undefined8*)param_1 = 0;
   if (cVar3 == '\0') {
      local_30 = 0;
      local_38 = "";
      String::parse_latin1((StrRange*)param_1);
   }
 else {
      local_30 = 7;
      local_38 = "Texture";
      String::parse_latin1((StrRange*)param_1);
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatDDS::get_recognized_extensions(List<String, DefaultAllocator>*) const */void ResourceFormatDDS::get_recognized_extensions(ResourceFormatDDS *this, List *param_1) {
   long *plVar1;
   long lVar2;
   long lVar3;
   CowData<char32_t> *this_00;
   undefined1(*pauVar4)[16];
   long in_FS_OFFSET;
   long local_40;
   undefined *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_40 = 0;
   local_38 = &_LC8;
   local_30 = 3;
   String::parse_latin1((StrRange*)&local_40);
   if (*(long*)param_1 == 0) {
      pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar4;
      *(undefined4*)pauVar4[1] = 0;
      *pauVar4 = (undefined1[16])0x0;
   }

   this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
   *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
   if (local_40 != 0) {
      CowData<char32_t>::_ref(this_00, (CowData*)&local_40);
   }

   lVar3 = local_40;
   plVar1 = *(long**)param_1;
   lVar2 = plVar1[1];
   *(undefined8*)( this_00 + 8 ) = 0;
   *(long**)( this_00 + 0x18 ) = plVar1;
   *(long*)( this_00 + 0x10 ) = lVar2;
   if (lVar2 != 0) {
      *(CowData<char32_t>**)( lVar2 + 8 ) = this_00;
   }

   plVar1[1] = (long)this_00;
   if (*plVar1 == 0) {
      *plVar1 = (long)this_00;
   }

   *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
   if (local_40 != 0) {
      LOCK();
      plVar1 = (long*)( local_40 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_40 = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
      }

   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
   CowData<unsigned_char> *pCVar1;
   long *plVar2;
   long lVar3;
   int iVar4;
   ulong uVar5;
   CowData<unsigned_char> *pCVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   CowData<unsigned_char> *pCVar9;
   long lVar10;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar3 = *(long*)this;
   if (lVar3 == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      LAB_00100676:lVar10 = 0;
      pCVar6 = (CowData<unsigned_char>*)0x0;
   }
 else {
      lVar10 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar10) {
         return;
      }

      if (param_1 == 0) {
         LOCK();
         plVar2 = (long*)( lVar3 + -0x10 );
         *plVar2 = *plVar2 + -1;
         UNLOCK();
         if (*plVar2 != 0) {
            *(undefined8*)this = 0;
            return;
         }

         lVar3 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar3 + -0x10 ), false);
         return;
      }

      _copy_on_write(this);
      if (lVar10 == 0) goto LAB_00100676;
      uVar5 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar5 = uVar5 | uVar5 >> 2;
      uVar5 = uVar5 | uVar5 >> 4;
      uVar5 = uVar5 | uVar5 >> 8;
      uVar5 = uVar5 | uVar5 >> 0x10;
      pCVar6 = (CowData<unsigned_char>*)( ( uVar5 | uVar5 >> 0x20 ) + 1 );
   }

   uVar5 = param_1 - 1U | param_1 - 1U >> 1;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   pCVar9 = (CowData<unsigned_char>*)( uVar5 | uVar5 >> 0x20 );
   pCVar1 = pCVar9 + 1;
   if (param_1 <= lVar10) {
      if (( pCVar1 != pCVar6 ) && ( iVar4 = iVar4 != 0 )) {
         return;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return;
      }

      FUN_00102e04();
      return;
   }

   if (pCVar1 != pCVar6) {
      if (lVar10 == 0) {
         puVar7 = (undefined8*)Memory::alloc_static(( ulong )(pCVar9 + 0x11), false);
         if (puVar7 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         puVar8 = puVar7 + 2;
         *puVar7 = 1;
         puVar7[1] = 0;
         *(undefined8**)this = puVar8;
         goto LAB_001005cc;
      }

      pCVar9 = this;
      iVar4 = _realloc(this, (long)pCVar1);
      if (iVar4 != 0) {
         return;
      }

   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      resize<false>((long)pCVar9);
      return;
   }

   LAB_001005cc:puVar8[-1] = param_1;
   return;
}
/* CowData<Ref<Image> >::_ref(CowData<Ref<Image> > const&) [clone .part.0] [clone .constprop.0] */void CowData<Ref<Image>>::_ref(CowData<Ref<Image>> *this, CowData *param_1) {
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
/* ResourceFormatDDS::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) */long *ResourceFormatDDS::load(long *param_1, undefined8 param_2, long *param_3, undefined8 param_4, undefined4 *param_5) {
   Object *pOVar1;
   byte bVar2;
   Image *pIVar3;
   code *pcVar4;
   char cVar5;
   bool bVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   uint uVar10;
   uint uVar11;
   uint uVar12;
   uint uVar13;
   uint uVar14;
   uint uVar15;
   uint uVar16;
   int iVar17;
   int iVar18;
   uint uVar19;
   undefined4 uVar20;
   Object *pOVar21;
   ulong uVar22;
   ulong uVar23;
   undefined8 *puVar24;
   ulong uVar25;
   Object *pOVar26;
   undefined *puVar27;
   long lVar28;
   char *pcVar29;
   long lVar30;
   byte *pbVar31;
   uint uVar32;
   undefined8 uVar33;
   byte *pbVar34;
   bool bVar35;
   long *plVar36;
   int iVar37;
   Object *pOVar38;
   long lVar39;
   byte bVar40;
   uint uVar41;
   byte bVar42;
   uint uVar43;
   ulong uVar44;
   byte *pbVar45;
   long in_FS_OFFSET;
   bool bVar46;
   Object **local_e8;
   long *local_c8;
   int local_94;
   Object *local_90;
   long local_88;
   long local_80;
   long local_78;
   byte *local_70;
   long local_68;
   long *local_60;
   Object *local_58;
   undefined8 local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_5 != (undefined4*)0x0) {
      *param_5 = 0x13;
   }

   FileAccess::open((String*)&local_90, (int)param_3, (Error*)0x1);
   pOVar38 = local_90;
   if (local_90 == (Object*)0x0) {
      *param_1 = 0;
      goto LAB_001009cf;
   }

   cVar5 = RefCounted::reference();
   pOVar21 = (Object*)0x0;
   if (cVar5 != '\0') {
      pOVar21 = pOVar38;
   }

   if (param_5 != (undefined4*)0x0) {
      *param_5 = 0x10;
   }

   if (local_94 == 0) {
      iVar37 = 0xb;
      iVar7 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      iVar8 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar9 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar10 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar11 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar12 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar13 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar14 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      do {
         ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
         iVar37 = iVar37 + -1;
      }
 while ( iVar37 != 0 );
      bVar35 = iVar7 != 0x20534444 || iVar8 != 0x7c;
      if (iVar7 != 0x20534444 || iVar8 != 0x7c) {
         local_68 = 0;
         plVar36 = (long*)( *param_3 + -0x10 );
         if (*param_3 != 0) {
            do {
               lVar28 = *plVar36;
               if (lVar28 == 0) goto LAB_001008c3;
               LOCK();
               lVar30 = *plVar36;
               bVar35 = lVar28 == lVar30;
               if (bVar35) {
                  *plVar36 = lVar28 + 1;
                  lVar30 = lVar28;
               }

               UNLOCK();
            }
 while ( !bVar35 );
            if (lVar30 != -1) {
               local_68 = *param_3;
            }

         }

         LAB_001008c3:local_78 = 0;
         local_50[0] = 0x2d;
         local_58 = (Object*)0x104e00;
         String::parse_latin1((StrRange*)&local_78);
         vformat<String>(&local_58, (StrRange*)&local_78, &local_68);
         pcVar29 = "Method/function failed. Returning: Ref<Resource>()";
         uVar33 = 0x246;
         goto LAB_00100930;
      }

      ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar15 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar16 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      iVar7 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      iVar8 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      iVar37 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      iVar17 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      iVar18 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      uVar19 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
      for (int i = 0; i < 3; i++) {
         ( **(code**)( *(long*)local_90 + 496 ) )();
      }

      uVar22 = ( **(code**)( *(long*)local_90 + 0x1c8 ) )();
      if (uVar22 < 0x80) {
         ( **(code**)( *(long*)local_90 + 0x1b8 ) )();
      }

      if (( uVar19 & 0x200 ) != 0) {
         bVar42 = 2;
         bVar40 = 2;
         uVar22 = 6;
         if (( uVar15 & 4 ) != 0) goto LAB_00100b3f;
         LAB_00100b92:if (( uVar15 & 0x40 ) == 0) {
            if (( ( ( uVar15 & 2 ) != 0 ) && ( iVar7 == 8 ) ) && ( uVar13 = iVar18 == 0xff )) goto LAB_00100f10;
            goto LAB_00100dea;
         }

         if (( uVar15 & 1 ) == 0) {
            if (( iVar7 != 0x18 ) || ( iVar8 != 0xff0000 )) {
               if (( iVar7 == 0x18 ) && ( iVar8 == 0xff )) {
                  if (( iVar37 == 0xff00 ) && ( uVar13 = iVar17 == 0xff0000 )) goto LAB_00100f10;
                  goto LAB_00100e18;
               }

               if (( iVar7 == 0x10 ) && ( iVar8 == 0xf800 )) {
                  if (( iVar37 == 0x7e0 ) && ( uVar13 = iVar17 == 0x1f )) goto LAB_00100f10;
                  goto LAB_00100e18;
               }

               if (iVar7 != 8) goto LAB_00100e18;
               if (iVar8 == 0xe0) {
                  if (( iVar37 == 0x1c ) && ( uVar13 = iVar17 == 3 )) goto LAB_00100f10;
                  goto LAB_00100e18;
               }

               goto LAB_00100dff;
            }

            if (( iVar37 == 0xff00 ) && ( uVar13 = iVar17 == 0xff )) goto LAB_00100f10;
         }
 else {
            bVar46 = iVar7 != 0x20;
            if (( bVar46 ) || ( iVar8 != 0xff0000 )) {
               if (( iVar8 != 0xff ) || ( bVar46 )) {
                  bVar6 = iVar7 == 0x10;
                  if (( iVar8 == 0x7c00 ) && ( bVar6 )) {
                     if (( iVar37 != 0x3e0 || iVar17 != 0x1f ) || ( iVar18 != 0x8000 )) goto LAB_0010225f;
                     uVar13 = 0x14;
                  }
 else {
                     if (( iVar8 != 0x3ff00000 ) || ( bVar46 )) goto LAB_00100be5;
                     if (( iVar37 != 0xffc00 || iVar17 != 0x3ff ) || ( iVar18 != -0x40000000 )) goto LAB_00100c23;
                     uVar13 = 0x18;
                  }

                  goto LAB_00100f10;
               }

               if (( ( iVar37 == 0xff00 ) && ( iVar17 == 0xff0000 ) ) && ( iVar18 == -0x1000000 )) {
                  uVar13 = 0x11;
                  goto LAB_00100f10;
               }

               goto LAB_0010225f;
            }

            bVar6 = iVar37 == 0xff00 && iVar17 == 0xff;
            if (bVar6) {
               if (iVar18 == -0x1000000) {
                  uVar13 = 0x13;
               }
 else {
                  LAB_00102422:if (( iVar8 != 0xe0 ) || ( !bVar35 )) goto LAB_0010225f;
                  if (( iVar37 != 0x1c || iVar17 != 3 ) || ( iVar18 != 0xff00 )) goto LAB_00100c23;
                  uVar13 = 0x17;
               }

               goto LAB_00100f10;
            }

            LAB_00100be5:bVar35 = bVar6;
            if (( iVar8 != 0x3ff ) || ( bVar46 )) {
               if (( iVar8 != 0xf00 ) || ( !bVar35 )) goto LAB_00102422;
               if (( iVar37 != 0xf0 || iVar17 != 0xf ) || ( iVar18 != 0xf000 )) goto LAB_00100e18;
               uVar13 = 0x1a;
               goto LAB_00100f10;
            }

            if (( iVar37 == 0xffc00 && iVar17 == 0x3ff00000 ) && ( iVar18 == -0x40000000 )) {
               uVar13 = 0x19;
               goto LAB_00100f10;
            }

            LAB_00100c23:if (( iVar7 == 8 && iVar8 == 0xf ) && ( iVar18 == 0xf0 )) {
               uVar13 = 0x1d;
               goto LAB_00100f10;
            }

         }

         goto LAB_00100e18;
      }

      bVar40 = ( -((uVar19 & 0x200000) == 0) & 0xfeU ) + 3;
      uVar41 = 1;
      if (( uVar19 & 0x200000 ) != 0) {
         uVar41 = uVar13;
      }

      uVar22 = (ulong)uVar41;
      bVar42 = bVar40;
      if (( uVar15 & 4 ) == 0) goto LAB_00100b92;
      LAB_00100b3f:bVar42 = bVar40;
      if (uVar16 == 0x30315844) {
         iVar37 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
         iVar17 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
         ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
         uVar19 = ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
         ( **(code**)( *(long*)local_90 + 0x1f0 ) )();
         uVar16 = (uint)uVar22;
         if (iVar17 == 4) {
            uVar16 = uVar13;
         }

         if (iVar17 == 4) {
            bVar42 = 3;
         }

         if (1 < uVar19) {
            uVar16 = uVar16 * uVar19;
            bVar42 = bVar42 | 0x80;
         }

         uVar22 = (ulong)uVar16;
         if (( 0x71 < iVar37 - 2U ) || ( uVar13 = uVar13 == 0x1e )) {
            LAB_00100dea:if (( uVar15 & 1 ) == 0) {
               LAB_00100dff:if (( iVar7 != 8 ) || ( uVar13 = iVar8 != 0xff )) {
                  LAB_00100e18:local_68 = 0;
                  plVar36 = (long*)( *param_3 + -0x10 );
                  if (*param_3 != 0) {
                     do {
                        lVar28 = *plVar36;
                        if (lVar28 == 0) goto LAB_00100e56;
                        LOCK();
                        lVar30 = *plVar36;
                        bVar35 = lVar28 == lVar30;
                        if (bVar35) {
                           *plVar36 = lVar28 + 1;
                           lVar30 = lVar28;
                        }

                        UNLOCK();
                     }
 while ( !bVar35 );
                     if (lVar30 != -1) {
                        local_68 = *param_3;
                     }

                  }

                  LAB_00100e56:local_78 = 0;
                  local_50[0] = 0x35;
                  local_58 = (Object*)0x104e98;
                  String::parse_latin1((StrRange*)&local_78);
                  vformat<String>(&local_58, (StrRange*)&local_78, &local_68);
                  pcVar29 = "Method/function failed. Returning: Ref<Resource>()";
                  uVar33 = 0x2ec;
                  goto LAB_00100930;
               }

            }
 else {
               LAB_0010225f:if (( iVar8 != 0xff ) || ( iVar7 != 0x10 )) goto LAB_00100c23;
               if (iVar18 != 0xff00) goto LAB_00100e18;
               uVar13 = 0x1c;
            }

         }

      }
 else if (uVar16 < 0x30315845) {
         if (5 < uVar16 - 0x6f) goto LAB_001021af;
         switch (uVar16) {
            case 0x70:
        uVar13 = 9;
        break;
            case 0x71:
        uVar13 = 10;
        break;
            case 0x72:
        uVar13 = 0xb;
        break;
            case 0x73:
        uVar13 = 0xc;
        break;
            case 0x74:
        uVar13 = 0xe;
        break;
            default:
        uVar13 = 8;
         }

      }
 else if (uVar16 == 0x33545844) {
         uVar13 = 1;
      }
 else if (uVar16 < 0x33545845) {
         uVar13 = 0;
         if (uVar16 != 0x31545844) {
            if (uVar16 < 0x31545845) {
               uVar13 = 3;
               if (uVar16 != 0x31495441) goto LAB_001021af;
            }
 else if (uVar16 == 0x32495441) {
               uVar13 = 4;
            }
 else {
               uVar13 = 1;
               if (uVar16 != 0x32545844) goto LAB_001021af;
            }

         }

      }
 else if (uVar16 == 0x55344342) {
         uVar13 = 3;
      }
 else if (uVar16 < 0x55344343) {
         if (( uVar16 & 0xfeffffff ) != 0x34545844) {
            LAB_001021af:local_68 = 0;
            plVar36 = (long*)( *param_3 + -0x10 );
            if (*param_3 != 0) {
               do {
                  lVar28 = *plVar36;
                  if (lVar28 == 0) goto LAB_001021ed;
                  LOCK();
                  lVar30 = *plVar36;
                  bVar35 = lVar28 == lVar30;
                  if (bVar35) {
                     *plVar36 = lVar28 + 1;
                     lVar30 = lVar28;
                  }

                  UNLOCK();
               }
 while ( !bVar35 );
               if (lVar30 != -1) {
                  local_68 = *param_3;
               }

            }

            LAB_001021ed:local_78 = 0;
            local_50[0] = 0x2f;
            local_58 = (Object*)0x104e68;
            String::parse_latin1((StrRange*)&local_78);
            vformat<String>(&local_58, (StrRange*)&local_78, &local_68);
            pcVar29 = "Method/function failed. Returning: Ref<Resource>()";
            uVar33 = 0x2aa;
            goto LAB_00100930;
         }

         uVar13 = 2;
      }
 else {
         uVar13 = 4;
         if (( uVar16 != 0x55354342 ) && ( uVar16 != 0x59583241 )) goto LAB_001021af;
      }

      LAB_00100f10:local_70 = (byte*)0x0;
      local_60 = (long*)0x0;
      if (( uVar9 & 0x20000 ) == 0) {
         uVar14 = 1;
      }

      if ((int)uVar22 != 0) {
         uVar23 = uVar22 * 8 - 1;
         uVar23 = uVar23 | uVar23 >> 1;
         uVar23 = uVar23 | uVar23 >> 2;
         uVar23 = uVar23 | uVar23 >> 4;
         uVar23 = uVar23 | uVar23 >> 8;
         uVar23 = uVar23 | uVar23 >> 0x10;
         puVar24 = (undefined8*)Memory::alloc_static(( uVar23 | uVar23 >> 0x20 ) + 0x11, false);
         if (puVar24 == (undefined8*)0x0) {
            _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         }
 else {
            local_60 = puVar24 + 2;
            *puVar24 = 1;
            memset(local_60, 0, uVar22 * 8);
            puVar24[1] = uVar22;
         }

         uVar23 = 0;
         lVar28 = (long)(int)uVar13 * 0x18;
         do {
            pOVar38 = local_90;
            if (( local_90 != (Object*)0x0 ) && ( cVar5 = cVar5 == '\0' )) {
               pOVar38 = (Object*)0x0;
            }

            if (dds_format_info[lVar28 + 8] == '\0') {
               uVar15 = uVar10 * uVar11 * *(int*)( dds_format_info + lVar28 + 0x10 );
               if (1 < uVar14) {
                  uVar41 = 1;
                  uVar16 = uVar10;
                  uVar19 = uVar11;
                  do {
                     uVar41 = uVar41 + 1;
                     uVar19 = uVar19 + 1 >> 1;
                     uVar16 = uVar16 + 1 >> 1;
                     uVar15 = uVar15 + uVar19 * uVar16 * *(int*)( dds_format_info + lVar28 + 0x10 );
                  }
 while ( uVar14 != uVar41 );
               }

               if (( 1L << ( (byte)uVar13 & 0x3f ) & 0x24900000U ) == 0) {
                  if (uVar13 == 0x16) {
                     uVar44 = ( ulong )(uVar15 * 3);
                     CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_70, uVar44);
                     CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_70);
                     pbVar45 = local_70;
                     ( **(code**)( *(long*)pOVar38 + 0x220 ) )(pOVar38, local_70, uVar44);
                     goto switchD_001018ca_caseD_16;
                  }

                  if (uVar13 != 0x15) goto LAB_00101873;
                  uVar44 = ( ulong )(uVar15 * 3 >> 1);
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_70, uVar44);
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_70);
                  pbVar45 = local_70;
                  ( **(code**)( *(long*)pOVar38 + 0x220 ) )(pOVar38, local_70, uVar44);
                  switchD_001018ca_caseD_15:iVar7 = (int)( uVar44 / 3 ) + -1;
                  if ((int)( uVar44 / 3 ) != 0) {
                     lVar30 = (long)iVar7;
                     pbVar34 = pbVar45 + iVar7 * 3;
                     do {
                        bVar40 = pbVar45[lVar30 * 2 + 1];
                        bVar2 = pbVar45[lVar30 * 2];
                        lVar30 = lVar30 + -1;
                        *pbVar34 = bVar40 & 0xf8;
                        pbVar34[2] = bVar2 << 3;
                        pbVar34[1] = ( byte )(( (uint)bVar40 << 3 | ( uint )(bVar2 >> 5) ) << 2);
                        pbVar34 = pbVar34 + -3;
                     }
 while ( (int)lVar30 != -1 );
                  }

               }
 else {
                  uVar15 = uVar15 * 2;
                  LAB_00101873:uVar44 = (ulong)uVar15;
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_70, uVar44);
                  CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_70);
                  pbVar45 = local_70;
                  ( **(code**)( *(long*)pOVar38 + 0x220 ) )(pOVar38, local_70, uVar44);
                  switch (uVar13) {
                     case 0x12:
              if (2 < uVar15) {
                pbVar34 = pbVar45;
                do {
                  bVar40 = *pbVar34;
                  pbVar31 = pbVar34 + 3;
                  *pbVar34 = pbVar34[2];
                  pbVar34[2] = bVar40;
                  pbVar34 = pbVar31;
                } while (pbVar45 + (ulong)(uVar15 / 3 - 1) * 3 + 3 != pbVar31);
              }
              break;
                     case 0x13:
              if (uVar15 >> 2 != 0) {
                pbVar34 = pbVar45;
                do {
                  bVar40 = *pbVar34;
                  pbVar31 = pbVar34 + 4;
                  *pbVar34 = pbVar34[2];
                  pbVar34[2] = bVar40;
                  pbVar34 = pbVar31;
                } while (pbVar31 != pbVar45 + (ulong)((uVar15 >> 2) - 1) * 4 + 4);
              }
              break;
                     case 0x14:
              iVar7 = (uVar15 >> 2) - 1;
              lVar30 = (long)iVar7;
              while (iVar7 != -1) {
                bVar40 = pbVar45[lVar30 * 2 + 1];
                *(uint *)(pbVar45 + lVar30 * 4) =
                     (((uint)(byte)((char)bVar40 >> 7) << 8 |
                      (uint)(((ulong)pbVar45[lVar30 * 2] & 0x1f) << 3)) << 8 |
                     ((uint)bVar40 * 8 & 0x1f | (uint)(pbVar45[lVar30 * 2] >> 5)) << 3) << 8 |
                     (bVar40 >> 2 & 0x1f) << 3;
                lVar30 = lVar30 + -1;
                iVar7 = (int)lVar30;
              }
              break;
                     case 0x15:
              goto switchD_001018ca_caseD_15;
                     case 0x16:
switchD_001018ca_caseD_16:
              uVar15 = (int)(uVar44 / 3) - 1;
              if ((int)(uVar44 / 3) != 0) {
                pbVar31 = pbVar45 + (int)uVar15;
                pbVar34 = pbVar45 + (int)(uVar15 * 3);
                do {
                  bVar40 = *pbVar31;
                  pbVar31 = pbVar31 + -1;
                  *pbVar34 = bVar40 & 0xe0;
                  pbVar34[2] = bVar40 << 6;
                  pbVar34[1] = bVar40 * '\b' & 0xe0;
                  pbVar34 = pbVar34 + -3;
                } while (pbVar31 != pbVar45 + ((uVar44 / 3 - 2) - (ulong)uVar15));
              }
              break;
                     case 0x17:
              if (uVar15 >> 2 != 0) {
                lVar30 = (long)(int)((uVar15 >> 2) - 1);
                do {
                  bVar40 = pbVar45[lVar30 * 2];
                  *(uint *)(pbVar45 + lVar30 * 4) =
                       (((uint)pbVar45[lVar30 * 2 + 1] << 8 | (bVar40 & 3) << 6) << 8 |
                       (uint)bVar40 * 8 & 0xe0) << 8 | bVar40 & 0xe0;
                  lVar30 = lVar30 + -1;
                } while ((int)lVar30 != -1);
              }
              break;
                     case 0x18:
              if (uVar15 >> 2 != 0) {
                pbVar34 = pbVar45;
                do {
                  uVar16 = (uint)pbVar34[2] << 0x10 | (uint)pbVar34[1] << 8 | (uint)*pbVar34 |
                           (uint)pbVar34[3] << 0x18;
                  bVar40 = pbVar34[3] & 0xc0;
                  *pbVar34 = (byte)(uVar16 >> 0x16);
                  pbVar34[2] = (byte)(uVar16 >> 2);
                  if (bVar40 == 0xc0) {
                    bVar40 = 0xff;
                  }
                  pbVar34[1] = (byte)(uVar16 >> 0xc);
                  pbVar31 = pbVar34 + 4;
                  pbVar34[3] = bVar40;
                  pbVar34 = pbVar31;
                } while (pbVar31 != pbVar45 + (ulong)((uVar15 >> 2) - 1) * 4 + 4);
              }
              break;
                     case 0x19:
              if (uVar15 >> 2 != 0) {
                pbVar34 = pbVar45;
                do {
                  uVar16 = (uint)pbVar34[2] << 0x10 | (uint)pbVar34[1] << 8 | (uint)*pbVar34 |
                           (uint)pbVar34[3] << 0x18;
                  bVar40 = pbVar34[3] & 0xc0;
                  *pbVar34 = (byte)(uVar16 >> 2);
                  pbVar34[2] = (byte)(uVar16 >> 0x16);
                  if (bVar40 == 0xc0) {
                    bVar40 = 0xff;
                  }
                  pbVar34[1] = (byte)(uVar16 >> 0xc);
                  pbVar31 = pbVar34 + 4;
                  pbVar34[3] = bVar40;
                  pbVar34 = pbVar31;
                } while (pbVar31 != pbVar45 + (ulong)((uVar15 >> 2) - 1) * 4 + 4);
              }
              break;
                     case 0x1a:
              if (uVar15 >> 2 != 0) {
                lVar30 = (long)(int)((uVar15 >> 2) - 1);
                do {
                  bVar40 = pbVar45[lVar30 * 2 + 1];
                  bVar2 = pbVar45[lVar30 * 2];
                  *(uint *)(pbVar45 + lVar30 * 4) =
                       (((uint)(byte)(bVar40 >> 4 | bVar40 & 0xf0) << 8 |
                        (uint)bVar2 * 0x10 + (bVar2 & 0xf) & 0xff) << 8 |
                       (uint)(byte)(bVar2 >> 4 | bVar2 & 0xf0)) << 8 |
                       (uint)bVar40 * 0x10 + (bVar40 & 0xf) & 0xff;
                  lVar30 = lVar30 + -1;
                } while ((int)lVar30 != -1);
              }
              break;
                     case 0x1d:
              if (uVar15 >> 1 != 0) {
                lVar30 = (long)(int)((uVar15 >> 1) - 1);
                do {
                  bVar40 = pbVar45[lVar30];
                  pbVar45[lVar30 * 2] = bVar40 * '\x10' + (bVar40 & 0xf);
                  pbVar45[lVar30 * 2 + 1] = bVar40 >> 4 | bVar40 & 0xf0;
                  lVar30 = lVar30 + -1;
                } while ((int)lVar30 != -1);
              }
                  }

               }

               switchD_001018ca_caseD_1b:pOVar26 = (Object*)operator_new(0x268, "");
               Image::Image((Image*)pOVar26, uVar11, uVar10);
               postinitialize_handler(pOVar26);
               cVar5 = RefCounted::init_ref();
               if (cVar5 == '\0') {
                  pOVar26 = (Object*)0x0;
               }

            }
 else {
               uVar16 = *(uint*)( dds_format_info + lVar28 + 0xc );
               uVar15 = uVar11 % uVar16 + uVar11;
               uVar44 = (ulong)uVar15;
               uVar19 = uVar10 % uVar16 + uVar10;
               if (uVar11 != uVar15) {
                  if (*(code**)( *(long*)pOVar38 + 0x1a8 ) == FileAccess::get_path) {
                     local_80 = 0;
                     local_58 = (Object*)&_LC3;
                     local_50[0] = 0;
                     String::parse_latin1((StrRange*)&local_80);
                  }
 else {
                     ( **(code**)( *(long*)pOVar38 + 0x1a8 ) )(&local_80, pOVar38);
                  }

                  local_c8 = &local_80;
                  local_e8 = &local_58;
                  local_88 = 0;
                  local_58 = (Object*)0x104ed0;
                  local_50[0] = 0x77;
                  String::parse_latin1((StrRange*)&local_88);
                  vformat<String,unsigned_int,unsigned_int>(local_e8, (StrRange*)&local_88, local_c8, uVar11, uVar16);
                  _err_print_error("_dds_load_layer", "modules/dds/texture_loader_dds.cpp", 0x127, local_e8, 0, 1);
                  pOVar26 = local_58;
                  if (local_58 != (Object*)0x0) {
                     LOCK();
                     pOVar1 = local_58 + -0x10;
                     *(long*)pOVar1 = *(long*)pOVar1 + -1;
                     UNLOCK();
                     if (*(long*)pOVar1 == 0) {
                        local_58 = (Object*)0x0;
                        Memory::free_static(pOVar26 + -0x10, false);
                     }

                  }

                  lVar30 = local_88;
                  if (local_88 != 0) {
                     LOCK();
                     plVar36 = (long*)( local_88 + -0x10 );
                     *plVar36 = *plVar36 + -1;
                     UNLOCK();
                     if (*plVar36 == 0) {
                        local_88 = 0;
                        Memory::free_static((void*)( lVar30 + -0x10 ), false);
                     }

                  }

                  lVar30 = local_80;
                  if (local_80 != 0) {
                     LOCK();
                     plVar36 = (long*)( local_80 + -0x10 );
                     *plVar36 = *plVar36 + -1;
                     UNLOCK();
                     if (*plVar36 == 0) {
                        local_80 = 0;
                        Memory::free_static((void*)( lVar30 + -0x10 ), false);
                     }

                  }

               }

               if (uVar10 != uVar19) {
                  if (*(code**)( *(long*)pOVar38 + 0x1a8 ) == FileAccess::get_path) {
                     local_80 = 0;
                     local_58 = (Object*)&_LC3;
                     local_50[0] = 0;
                     String::parse_latin1((StrRange*)&local_80);
                  }
 else {
                     ( **(code**)( *(long*)pOVar38 + 0x1a8 ) )(&local_80, pOVar38);
                  }

                  local_c8 = &local_80;
                  local_e8 = &local_58;
                  local_88 = 0;
                  local_58 = (Object*)0x104f48;
                  local_50[0] = 0x78;
                  String::parse_latin1((StrRange*)&local_88);
                  vformat<String,unsigned_int,unsigned_int>(local_e8, (StrRange*)&local_88, local_c8, uVar10, uVar16);
                  _err_print_error("_dds_load_layer", "modules/dds/texture_loader_dds.cpp", 0x12a, local_e8, 0, 1);
                  pOVar26 = local_58;
                  if (local_58 != (Object*)0x0) {
                     LOCK();
                     pOVar1 = local_58 + -0x10;
                     *(long*)pOVar1 = *(long*)pOVar1 + -1;
                     UNLOCK();
                     if (*(long*)pOVar1 == 0) {
                        local_58 = (Object*)0x0;
                        Memory::free_static(pOVar26 + -0x10, false);
                     }

                  }

                  lVar30 = local_88;
                  if (local_88 != 0) {
                     LOCK();
                     plVar36 = (long*)( local_88 + -0x10 );
                     *plVar36 = *plVar36 + -1;
                     UNLOCK();
                     if (*plVar36 == 0) {
                        local_88 = 0;
                        Memory::free_static((void*)( lVar30 + -0x10 ), false);
                     }

                  }

                  lVar30 = local_80;
                  if (local_80 != 0) {
                     LOCK();
                     plVar36 = (long*)( local_80 + -0x10 );
                     *plVar36 = *plVar36 + -1;
                     UNLOCK();
                     if (*plVar36 == 0) {
                        local_80 = 0;
                        Memory::free_static((void*)( lVar30 + -0x10 ), false);
                     }

                  }

               }

               uVar25 = uVar44;
               if (uVar15 <= uVar16) {
                  uVar25 = (ulong)uVar16;
               }

               uVar15 = uVar19;
               if (uVar19 <= uVar16) {
                  uVar15 = uVar16;
               }

               uVar15 = ( ( (int)( uVar25 / uVar16 ) * uVar15 ) / uVar16 ) * *(int*)( dds_format_info + lVar28 + 0x10 );
               if (( uVar9 & 0x80000 ) == 0) {
                  if (uVar12 == 0) goto LAB_00101399;
                  pOVar26 = (Object*)0x0;
                  _err_print_error("_dds_load_layer", "modules/dds/texture_loader_dds.cpp", 0x132, "Condition \"p_pitch != 0\" is true. Returning: Ref<Resource>()", "DDS header flags specify that no linear size will given for the top-level image, but a non-zero linear size value is present in the header.", 0, 0);
               }
 else {
                  if (uVar12 == uVar15) {
                     LAB_00101399:uVar41 = 1;
                     if (1 < uVar14) {
                        do {
                           uVar43 = (uint)uVar44 >> 1;
                           if (uVar43 == 0) {
                              uVar43 = 1;
                           }

                           uVar44 = (ulong)uVar43;
                           uVar19 = uVar19 >> 1;
                           if (uVar19 == 0) {
                              uVar19 = 1;
                           }

                           if (uVar43 <= uVar16) {
                              uVar43 = uVar16;
                           }

                           uVar32 = uVar19;
                           if (uVar19 <= uVar16) {
                              uVar32 = uVar16;
                           }

                           uVar41 = uVar41 + 1;
                           uVar15 = uVar15 + ( ( ( uVar43 / uVar16 ) * uVar32 ) / uVar16 ) * *(int*)( dds_format_info + lVar28 + 0x10 );
                        }
 while ( uVar14 != uVar41 );
                     }

                     CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_70, (ulong)uVar15);
                     CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_70);
                     ( **(code**)( *(long*)pOVar38 + 0x220 ) )(pOVar38, local_70, (ulong)uVar15);
                     goto switchD_001018ca_caseD_1b;
                  }

                  pOVar26 = (Object*)0x0;
                  _err_print_error("_dds_load_layer", "modules/dds/texture_loader_dds.cpp", 0x130, "Condition \"size != p_pitch\" is true. Returning: Ref<Resource>()", "DDS header flags specify that a linear size of the top-level image is present, but the specified size does not match the expected value.", 0, 0);
               }

            }

            if (local_60 == (long*)0x0) {
               lVar30 = 0;
               LAB_00101d53:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, uVar23, lVar30, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            lVar30 = local_60[-1];
            if (lVar30 <= (long)uVar23) goto LAB_00101d53;
            if (1 < (ulong)local_60[-2]) {
               if (local_60 == (long*)0x0) {
                  /* WARNING: Does not return */
                  pcVar4 = (code*)invalidInstructionException();
                  ( *pcVar4 )();
               }

               lVar30 = local_60[-1];
               uVar44 = 0x10;
               if (lVar30 * 8 != 0) {
                  uVar44 = lVar30 * 8 - 1;
                  uVar44 = uVar44 | uVar44 >> 1;
                  uVar44 = uVar44 | uVar44 >> 2;
                  uVar44 = uVar44 | uVar44 >> 4;
                  uVar44 = uVar44 | uVar44 >> 8;
                  uVar44 = uVar44 | uVar44 >> 0x10;
                  uVar44 = ( uVar44 | uVar44 >> 0x20 ) + 0x11;
               }

               puVar24 = (undefined8*)Memory::alloc_static(uVar44, false);
               if (puVar24 == (undefined8*)0x0) {
                  _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a);
               }
 else {
                  lVar39 = 0;
                  *puVar24 = 1;
                  puVar24[1] = lVar30;
                  plVar36 = puVar24 + 2;
                  if (lVar30 != 0) {
                     do {
                        *plVar36 = 0;
                        if (local_60[lVar39] != 0) {
                           *plVar36 = local_60[lVar39];
                           cVar5 = RefCounted::reference();
                           if (cVar5 == '\0') {
                              *plVar36 = 0;
                           }

                        }

                        lVar39 = lVar39 + 1;
                        plVar36 = plVar36 + 1;
                     }
 while ( lVar30 != lVar39 );
                  }

                  CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_60);
                  local_60 = puVar24 + 2;
               }

            }

            plVar36 = local_60 + uVar23;
            pIVar3 = (Image*)*plVar36;
            if (pOVar26 == (Object*)pIVar3) {
               if (pOVar26 != (Object*)0x0) {
                  cVar5 = RefCounted::unreference();
                  goto joined_r0x00101d0b;
               }

            }
 else {
               *plVar36 = (long)pOVar26;
               if (pOVar26 == (Object*)0x0) {
                  if (( pIVar3 != (Image*)0x0 ) && ( cVar5 = cVar5 != '\0' )) {
                     memdelete<Image>(pIVar3);
                  }

               }
 else {
                  cVar5 = RefCounted::reference();
                  if (cVar5 == '\0') {
                     *plVar36 = 0;
                  }

                  if (( pIVar3 != (Image*)0x0 ) && ( cVar5 = cVar5 != '\0' )) {
                     memdelete<Image>(pIVar3);
                  }

                  cVar5 = RefCounted::unreference();
                  joined_r0x00101d0b:if (cVar5 != '\0') {
                     memdelete<Image>((Image*)pOVar26);
                  }

               }

            }

            if (( ( pOVar38 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar38 + 0x140 ))(pOVar38);
            Memory::free_static(pOVar38, false);
         }
 while ( uVar23 != uVar22 );
         if (( bVar42 & 0x7f ) == 1) goto LAB_00102062;
         if (( bVar42 & 0x7f ) != 2) goto LAB_00101f29;
         uVar9 = (int)uVar22 * -0x55555555;
         if (( uVar9 >> 1 | ( uint )(( uVar9 & 1 ) != 0) << 0x1f ) < 0x2aaaaaab) goto LAB_00101557;
         _err_print_error(&_LC23, "modules/dds/texture_loader_dds.cpp", 0x310, "Condition \"layer_count % 6 != 0\" is true. Returning: Ref<Resource>()", 0, 0);
         *param_1 = 0;
         goto LAB_00101659;
      }

      if (( bVar42 & 0x7f ) == 1) {
         LAB_00102062:if (( bVar42 & 0x80 ) != 0) {
            pOVar38 = (Object*)operator_new(0x310, "");
            ImageTextureLayered::ImageTextureLayered((ImageTextureLayered*)pOVar38, 0);
            puVar27 = &ResourceFormatLoader::typeinfo;
            goto LAB_0010158c;
         }

         if (param_5 != (undefined4*)0x0) {
            *param_5 = 0;
         }

         if (local_60 == (long*)0x0) {
            lVar28 = 0;
            LAB_00102665:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, 0, lVar28, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }

         lVar28 = local_60[-1];
         if (lVar28 < 1) goto LAB_00102665;
         ImageTexture::create_from_image((Ref*)&local_58);
         *param_1 = 0;
         if (local_58 != (Object*)0x0) {
            lVar28 = __dynamic_cast(local_58, &Object::typeinfo, &Resource::typeinfo, 0);
            if (lVar28 != 0) {
               *param_1 = lVar28;
               cVar5 = RefCounted::reference();
               if (cVar5 == '\0') {
                  *param_1 = 0;
               }

               if (local_58 == (Object*)0x0) goto LAB_00101659;
            }

            cVar5 = RefCounted::unreference();
            pOVar38 = local_58;
            if (cVar5 != '\0') {
               cVar5 = predelete_handler(local_58);
               goto joined_r0x00102142;
            }

         }

      }
 else if (( bVar42 & 0x7f ) == 2) {
         LAB_00101557:if (( bVar42 & 0x80 ) == 0) {
            pOVar38 = (Object*)operator_new(0x310, "");
            ImageTextureLayered::ImageTextureLayered((ImageTextureLayered*)pOVar38, 1);
            puVar27 = &__cxxabiv1::__si_class_type_info::vtable;
         }
 else {
            pOVar38 = (Object*)operator_new(0x310, "");
            ImageTextureLayered::ImageTextureLayered((ImageTextureLayered*)pOVar38, 2);
            puVar27 = &Resource::typeinfo;
         }

         LAB_0010158c:*(undefined**)pOVar38 = puVar27;
         postinitialize_handler(pOVar38);
         cVar5 = RefCounted::init_ref();
         local_50[0] = 0;
         if (cVar5 == '\0') {
            pOVar38 = (Object*)0x0;
         }

         if (local_60 != (long*)0x0) {
            CowData<Ref<Image>>::_ref((CowData<Ref<Image>>*)local_50, (CowData*)&local_60);
         }

         ImageTextureLayered::create_from_images(pOVar38);
         CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)local_50);
         if (param_5 != (undefined4*)0x0) {
            *param_5 = 0;
         }

         *param_1 = 0;
         if (pOVar38 != (Object*)0x0) {
            lVar28 = __dynamic_cast(pOVar38, &Object::typeinfo, &Resource::typeinfo, 0);
            if (lVar28 != 0) {
               *param_1 = lVar28;
               cVar5 = RefCounted::reference();
               if (cVar5 == '\0') {
                  *param_1 = 0;
               }

            }

            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') goto LAB_00102036;
         }

      }
 else {
         LAB_00101f29:pOVar38 = (Object*)operator_new(0x2f0, "");
         ImageTexture3D::ImageTexture3D((ImageTexture3D*)pOVar38);
         postinitialize_handler(pOVar38);
         cVar5 = RefCounted::init_ref();
         if (cVar5 == '\0') {
            pOVar38 = (Object*)0x0;
         }

         if (local_60 == (long*)0x0) {
            lVar28 = 0;
            goto LAB_00102665;
         }

         lVar28 = local_60[-1];
         if (lVar28 < 1) goto LAB_00102665;
         uVar20 = Image::get_format();
         ImageTexture3D::create(pOVar38, uVar20, uVar11, uVar10, uVar22, 1 < uVar14, &local_68);
         if (param_5 == (undefined4*)0x0) {
            *param_1 = 0;
         }
 else {
            *param_5 = 0;
            *param_1 = 0;
         }

         lVar28 = __dynamic_cast(pOVar38, &Object::typeinfo, &Resource::typeinfo, 0);
         if (lVar28 != 0) {
            *param_1 = lVar28;
            cVar5 = RefCounted::reference();
            if (cVar5 == '\0') {
               *param_1 = 0;
            }

         }

         cVar5 = RefCounted::unreference();
         if (cVar5 == '\0') goto LAB_00101659;
         LAB_00102036:cVar5 = predelete_handler(pOVar38);
         joined_r0x00102142:if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar38 + 0x140 ) )(pOVar38);
            Memory::free_static(pOVar38, false);
         }

      }

      LAB_00101659:CowData<Ref<Image>>::_unref((CowData<Ref<Image>>*)&local_60);
      pbVar45 = local_70;
      if (local_70 != (byte*)0x0) {
         LOCK();
         pbVar34 = local_70 + -0x10;
         *(long*)pbVar34 = *(long*)pbVar34 + -1;
         UNLOCK();
         if (*(long*)pbVar34 == 0) {
            local_70 = (byte*)0x0;
            Memory::free_static(pbVar45 + -0x10, false);
         }

      }

   }
 else {
      local_68 = 0;
      plVar36 = (long*)( *param_3 + -0x10 );
      if (*param_3 != 0) {
         do {
            lVar28 = *plVar36;
            if (lVar28 == 0) goto LAB_00100d3e;
            LOCK();
            lVar30 = *plVar36;
            bVar35 = lVar28 == lVar30;
            if (bVar35) {
               *plVar36 = lVar28 + 1;
               lVar30 = lVar28;
            }

            UNLOCK();
         }
 while ( !bVar35 );
         if (lVar30 != -1) {
            local_68 = *param_3;
         }

      }

      LAB_00100d3e:local_78 = 0;
      local_50[0] = 0x25;
      local_58 = (Object*)0x104d70;
      String::parse_latin1((StrRange*)&local_78);
      vformat<String>(&local_58, (StrRange*)&local_78, &local_68);
      pcVar29 = "Condition \"err != OK\" is true. Returning: Ref<Resource>()";
      uVar33 = 0x232;
      LAB_00100930:_err_print_error(&_LC23, "modules/dds/texture_loader_dds.cpp", uVar33, pcVar29, &local_58, 0, 0);
      pOVar38 = local_58;
      if (local_58 != (Object*)0x0) {
         LOCK();
         pOVar26 = local_58 + -0x10;
         *(long*)pOVar26 = *(long*)pOVar26 + -1;
         UNLOCK();
         if (*(long*)pOVar26 == 0) {
            local_58 = (Object*)0x0;
            Memory::free_static(pOVar38 + -0x10, false);
         }

      }

      lVar28 = local_78;
      if (local_78 != 0) {
         LOCK();
         plVar36 = (long*)( local_78 + -0x10 );
         *plVar36 = *plVar36 + -1;
         UNLOCK();
         if (*plVar36 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar28 + -0x10 ), false);
         }

      }

      lVar28 = local_68;
      if (local_68 != 0) {
         LOCK();
         plVar36 = (long*)( local_68 + -0x10 );
         *plVar36 = *plVar36 + -1;
         UNLOCK();
         if (*plVar36 == 0) {
            local_68 = 0;
            Memory::free_static((void*)( lVar28 + -0x10 ), false);
         }

      }

      *param_1 = 0;
   }

   if (( ( pOVar21 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar21 + 0x140 ))(pOVar21);
   Memory::free_static(pOVar21, false);
}
if (( ( local_90 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)local_90 + 0x140 ))(local_90);Memory::free_static(local_90, false);}LAB_001009cf:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
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
   return (uint)CONCAT71(0x105a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x105a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* ResourceFormatLoader::is_class_ptr(void*) const */uint ResourceFormatLoader::is_class_ptr(ResourceFormatLoader *this, void *param_1) {
   return (uint)CONCAT71(0x105a, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x105a, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x105a, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}
/* ResourceFormatLoader::_getv(StringName const&, Variant&) const */undefined8 ResourceFormatLoader::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatLoader::_setv(StringName const&, Variant const&) */undefined8 ResourceFormatLoader::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatLoader::_validate_propertyv(PropertyInfo&) const */void ResourceFormatLoader::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* ResourceFormatLoader::_property_can_revertv(StringName const&) const */undefined8 ResourceFormatLoader::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* ResourceFormatLoader::_property_get_revertv(StringName const&, Variant&) const */undefined8 ResourceFormatLoader::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* ResourceFormatLoader::_notificationv(int, bool) */void ResourceFormatLoader::_notificationv(int param_1, bool param_2) {
   return;
}
/* ResourceFormatLoader::is_import_valid(String const&) const */undefined8 ResourceFormatLoader::is_import_valid(String *param_1) {
   return 1;
}
/* ResourceFormatLoader::is_imported(String const&) const */undefined8 ResourceFormatLoader::is_imported(String *param_1) {
   return 0;
}
/* ResourceFormatLoader::get_import_order(String const&) const */undefined8 ResourceFormatLoader::get_import_order(String *param_1) {
   return 0;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00105440;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_00105440;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* ResourceFormatLoader::_get_class_namev() const */undefined8 *ResourceFormatLoader::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00102b43:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102b43;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
         goto LAB_00102bae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "ResourceFormatLoader");
   LAB_00102bae:return &_get_class_namev();
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
         LAB_00102c23:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00102c23;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_00102c8e;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_00102c8e:return &_get_class_namev();
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         Resource::~Resource((Resource*)this);
         return;
      }

   }

   Resource::~Resource((Resource*)this);
   return;
}
/* ResourceFormatLoader::get_import_group_file(String const&) const */String *ResourceFormatLoader::get_import_group_file(String *param_1) {
   long lVar1;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   String::parse_latin1((StrRange*)param_1);
   if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* FileAccess::get_path() const */FileAccess * __thiscall FileAccess::get_path(FileAccess *this){
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
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_00102e04(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ResourceFormatDDS::load(String const&, String const&, Error*, bool, float*,
   ResourceFormatLoader::CacheMode) [clone .cold] */void ResourceFormatDDS::load(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* ResourceFormatLoader::get_class() const */void ResourceFormatLoader::get_class(void) {
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
                  if (lVar5 == 0) goto LAB_0010303f;
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

      LAB_0010303f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_001030f3;
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
                     if (lVar5 == 0) goto LAB_001031a3;
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

         LAB_001031a3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_001030f3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_001030f3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* ResourceFormatLoader::is_class(String const&) const */undefined8 ResourceFormatLoader::is_class(ResourceFormatLoader *this, String *param_1) {
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
                  if (lVar4 == 0) goto LAB_001032cf;
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

      LAB_001032cf:cVar5 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar5 != '\0') goto LAB_00103383;
   }

   cVar5 = String::operator ==(param_1, "ResourceFormatLoader");
   if (cVar5 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar7;
      }

   }
 else {
      LAB_00103383:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
      LAB_001036e8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001036e8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00103706;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00103706:if (lVar2 == 0) {
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
/* ResourceFormatLoader::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void ResourceFormatLoader::_get_property_listv(ResourceFormatLoader *this, List *param_1, bool param_2) {
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
   local_78 = "ResourceFormatLoader";
   local_70 = 0x14;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "ResourceFormatLoader";
   local_98 = 0;
   local_70 = 0x14;
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
      LAB_00103ae8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_00103ae8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x00103b05;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)param_1;
   joined_r0x00103b05:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "ResourceFormatLoader", false);
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
/* ResourceFormatLoader::_initialize_classv() */void ResourceFormatLoader::_initialize_classv(void) {
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
   if (initialize_class() != '\0') goto LAB_00103f2b;
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
         LAB_0010403a:if ((code*)PTR__bind_methods_00108010 != RefCounted::_bind_methods) {
            LAB_0010404a:RefCounted::_bind_methods();
         }

      }
 else {
         LOCK();
         plVar1 = (long*)( local_68 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 != 0) goto LAB_0010403a;
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         if ((code*)PTR__bind_methods_00108010 != RefCounted::_bind_methods) goto LAB_0010404a;
      }

      RefCounted::initialize_class()::initialized =
      '\x01';
   }

   local_58 = "RefCounted";
   local_68 = 0;
   local_50 = 10;
   String::parse_latin1((StrRange*)&local_68);
   StringName::StringName((StringName*)&local_60, (String*)&local_68, false);
   local_58 = "ResourceFormatLoader";
   local_70 = 0;
   local_50 = 0x14;
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

   if ((code*)PTR__bind_methods_00108008 != RefCounted::_bind_methods) {
      ResourceFormatLoader::_bind_methods();
   }

   initialize_class()::initialized =
   '\x01';
   LAB_00103f2b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   bool bVar1;
   bVar1 = StringName::configured != '\0';
   *(code**)this = Variant::Variant;
   if (bVar1) {
      if (*(long*)( this + 0x270 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 600 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x240 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x228 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x210 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x1f8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x1e0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x1c8 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x1b0 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x198 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00104243;
      }

      if (*(long*)( this + 0x180 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00104243:*(undefined***)this = &PTR__initialize_classv_00105440;
   Object::~Object((Object*)this);
   return;
}
/* ResourceFormatDDS::~ResourceFormatDDS() */void ResourceFormatDDS::~ResourceFormatDDS(ResourceFormatDDS *this) {
   *(undefined***)this = &PTR__initialize_classv_001055a0;
   ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader*)this);
   return;
}
/* ResourceFormatDDS::~ResourceFormatDDS() */void ResourceFormatDDS::~ResourceFormatDDS(ResourceFormatDDS *this) {
   *(undefined***)this = &PTR__initialize_classv_001055a0;
   ResourceFormatLoader::~ResourceFormatLoader((ResourceFormatLoader*)this);
   operator_delete(this, 0x288);
   return;
}
/* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   ~ResourceFormatLoader(this)
   ;;
   operator_delete(this, 0x288);
   return;
}
/* Image::~Image() */void Image::~Image(Image *this) {
   long *plVar1;
   long lVar2;
   *(code**)this = Memory::free_static;
   if (*(long*)( this + 0x250 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x250 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x250 );
         *(undefined8*)( this + 0x250 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   Resource::~Resource((Resource*)this);
   operator_delete(this, 0x268);
   return;
}
/* WARNING: Removing unreachable block (ram,0x00104500) *//* WARNING: Removing unreachable block (ram,0x00104630) *//* WARNING: Removing unreachable block (ram,0x001047a8) *//* WARNING: Removing unreachable block (ram,0x0010463c) *//* WARNING: Removing unreachable block (ram,0x00104646) *//* WARNING: Removing unreachable block (ram,0x0010478a) *//* WARNING: Removing unreachable block (ram,0x00104652) *//* WARNING: Removing unreachable block (ram,0x0010465c) *//* WARNING: Removing unreachable block (ram,0x0010476c) *//* WARNING: Removing unreachable block (ram,0x00104668) *//* WARNING: Removing unreachable block (ram,0x00104672) *//* WARNING: Removing unreachable block (ram,0x0010474e) *//* WARNING: Removing unreachable block (ram,0x0010467e) *//* WARNING: Removing unreachable block (ram,0x00104688) *//* WARNING: Removing unreachable block (ram,0x00104730) *//* WARNING: Removing unreachable block (ram,0x00104694) *//* WARNING: Removing unreachable block (ram,0x0010469e) *//* WARNING: Removing unreachable block (ram,0x00104712) *//* WARNING: Removing unreachable block (ram,0x001046a6) *//* WARNING: Removing unreachable block (ram,0x001046b0) *//* WARNING: Removing unreachable block (ram,0x001046f7) *//* WARNING: Removing unreachable block (ram,0x001046b8) *//* WARNING: Removing unreachable block (ram,0x001046cd) *//* WARNING: Removing unreachable block (ram,0x001046d9) *//* String vformat<String, unsigned int, unsigned int>(String const&, String const, unsigned int
   const, unsigned int const) */undefined8 *vformat<String,unsigned_int,unsigned_int>(undefined8 *param_1, bool *param_2, String *param_3, uint param_4, uint param_5) {
   Variant *pVVar1;
   int iVar2;
   Variant *pVVar3;
   int iVar4;
   long in_FS_OFFSET;
   Array local_f8[8];
   undefined8 local_f0[9];
   Variant local_a8[24];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant(local_a8, param_3);
   Variant::Variant(local_90, param_4);
   iVar2 = 0;
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar4 = (int)local_f8;
   Array::resize(iVar4);
   pVVar3 = local_a8;
   do {
      iVar2 = iVar2 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar4);
      Variant::operator =(pVVar1, pVVar3);
      pVVar3 = pVVar3 + 0x18;
   }
 while ( iVar2 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar3 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar3 + -0x18;
      pVVar3 = pVVar3 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar3 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x001048e8) *//* WARNING: Removing unreachable block (ram,0x00104a18) *//* WARNING: Removing unreachable block (ram,0x00104be0) *//* WARNING: Removing unreachable block (ram,0x00104a24) *//* WARNING: Removing unreachable block (ram,0x00104a2e) *//* WARNING: Removing unreachable block (ram,0x00104bc0) *//* WARNING: Removing unreachable block (ram,0x00104a3a) *//* WARNING: Removing unreachable block (ram,0x00104a44) *//* WARNING: Removing unreachable block (ram,0x00104ba0) *//* WARNING: Removing unreachable block (ram,0x00104a50) *//* WARNING: Removing unreachable block (ram,0x00104a5a) *//* WARNING: Removing unreachable block (ram,0x00104b80) *//* WARNING: Removing unreachable block (ram,0x00104a66) *//* WARNING: Removing unreachable block (ram,0x00104a70) *//* WARNING: Removing unreachable block (ram,0x00104b60) *//* WARNING: Removing unreachable block (ram,0x00104a7c) *//* WARNING: Removing unreachable block (ram,0x00104a86) *//* WARNING: Removing unreachable block (ram,0x00104b40) *//* WARNING: Removing unreachable block (ram,0x00104a92) *//* WARNING: Removing unreachable block (ram,0x00104a9c) *//* WARNING: Removing unreachable block (ram,0x00104b20) *//* WARNING: Removing unreachable block (ram,0x00104aa4) *//* WARNING: Removing unreachable block (ram,0x00104aba) *//* WARNING: Removing unreachable block (ram,0x00104ac6) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* void memdelete<Image>(Image*) */void memdelete<Image>(Image *param_1) {
   long *plVar1;
   long lVar2;
   char cVar3;
   cVar3 = predelete_handler((Object*)param_1);
   if (cVar3 == '\0') {
      return;
   }

   if (*(code**)( *(long*)param_1 + 0x140 ) == Image::~Image) {
      *(code**)param_1 = Memory::free_static;
      if (*(long*)( param_1 + 0x250 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( param_1 + 0x250 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( param_1 + 0x250 );
            *(undefined8*)( param_1 + 0x250 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      Resource::~Resource((Resource*)param_1);
      Memory::free_static(param_1, false);
      return;
   }

   ( **(code**)( *(long*)param_1 + 0x140 ) )(param_1);
   Memory::free_static(param_1, false);
   return;
}
/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* CowData<Ref<Image> >::_unref() */void CowData<Ref<Image>>::_unref(CowData<Ref<Image>> *this) {
   long *plVar1;
   long lVar2;
   Image *pIVar3;
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
      LAB_00105235:do {
         if (*plVar6 != 0) {
            cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               pIVar3 = (Image*)*plVar6;
               lVar7 = lVar7 + 1;
               plVar6 = plVar6 + 1;
               memdelete<Image>(pIVar3);
               if (lVar2 == lVar7) break;
               goto LAB_00105235;
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
/* CowData<Ref<Image> >::_realloc(long) */undefined8 CowData<Ref<Image>>::_realloc(CowData<Ref<Image>> *this, long param_1) {
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
/* WARNING: Control flow encountered bad instruction data *//* ResourceFormatDDS::~ResourceFormatDDS() */void ResourceFormatDDS::~ResourceFormatDDS(ResourceFormatDDS *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* ResourceFormatLoader::~ResourceFormatLoader() */void ResourceFormatLoader::~ResourceFormatLoader(ResourceFormatLoader *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* Image::~Image() */void Image::~Image(Image *this) {
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


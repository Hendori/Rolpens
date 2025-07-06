/* SpriteFrames::has_animation(StringName const&) const */undefined8 SpriteFrames::has_animation(SpriteFrames *this, StringName *param_1) {
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
   if (*(long*)( this + 0x248 ) == 0) {
      return 0;
   }
   if (*(int*)( this + 0x26c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      } else {
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
      uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return 1;
            }
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   return 0;
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
}/* SortArray<String, _DefaultComparator<String>, true>::adjust_heap(long, long, long, String,
   String*) const [clone .isra.0] */void SortArray<String,_DefaultComparator<String>,true>::adjust_heap(long param_1, long param_2, long param_3, CowData *param_4, long param_5) {
   long *plVar1;
   String_conflict *pSVar2;
   char cVar3;
   CowData<char32_t> *this;
   CowData<char32_t> *pCVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_68;
   long local_48;
   long local_40;
   lVar7 = param_2 * 2 + 2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_68 = param_2;
   if (lVar7 < param_3) {
      do {
         this(CowData<char32_t> * )(param_5 + ( lVar7 + -1 + param_1 ) * 8);
         pSVar2 = (String_conflict*)( param_5 + ( param_1 + lVar7 ) * 8 );
         cVar3 = String::operator <(pSVar2, (String_conflict*)this);
         lVar5 = lVar7 + -1;
         lVar6 = lVar7;
         if (cVar3 == '\0') {
            lVar6 = lVar7 + 1;
            this(CowData<char32_t> * pSVar2);
            lVar5 = lVar7;
         }
         pCVar4 = (CowData<char32_t>*)( param_5 + ( local_68 + param_1 ) * 8 );
         if (*(long*)pCVar4 != *(long*)this) {
            CowData<char32_t>::_ref(pCVar4, (CowData*)this);
         }
         lVar7 = lVar6 * 2;
         local_68 = lVar5;
      } while ( lVar7 < param_3 );
   } else {
      this(CowData<char32_t> * )(param_5 + ( param_2 + param_1 ) * 8);
      lVar5 = param_2;
   }
   pCVar4 = this;
   if (param_3 == lVar7) {
      lVar5 = param_3 + -1;
      pCVar4 = (CowData<char32_t>*)( param_5 + ( param_1 + lVar5 ) * 8 );
      if (*(long*)this != *(long*)pCVar4) {
         CowData<char32_t>::_ref(this, (CowData*)pCVar4);
      }
   }
   local_48 = 0;
   if (*(long*)param_4 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, param_4);
   }
   lVar7 = ( lVar5 + -1 ) - ( lVar5 + -1 >> 0x3f );
   while (param_2 < lVar5) {
      lVar6 = lVar7 >> 1;
      pSVar2 = (String_conflict*)( param_5 + ( param_1 + lVar6 ) * 8 );
      cVar3 = String::operator <(pSVar2, (String_conflict*)&local_48);
      pCVar4 = (CowData<char32_t>*)( param_5 + ( param_1 + lVar5 ) * 8 );
      if (cVar3 == '\0') break;
      if (*(long*)pCVar4 != *(long*)pSVar2) {
         CowData<char32_t>::_ref(pCVar4, (CowData*)pSVar2);
      }
      lVar7 = ( lVar6 + -1 ) - ( lVar6 + -1 >> 0x3f );
      pCVar4 = (CowData<char32_t>*)pSVar2;
      lVar5 = lVar6;
   };
   if (*(long*)pCVar4 != local_48) {
      CowData<char32_t>::_ref(pCVar4, (CowData*)&local_48);
   }
   lVar7 = local_48;
   if (local_48 != 0) {
      LOCK();
      plVar1 = (long*)( local_48 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_48 = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::get_animation_list(List<StringName, DefaultAllocator>*) const */void SpriteFrames::get_animation_list(SpriteFrames *this, List *param_1) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   StringName *this_00;
   undefined8 *puVar4;
   StringName *pSVar5;
   puVar4 = *(undefined8**)( this + 600 );
   if (puVar4 != (undefined8*)0x0) {
      pSVar5 = (StringName*)( puVar4 + 2 );
      if (*(long*)param_1 == 0) {
         pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])param_1 = pauVar3;
         *(undefined4*)pauVar3[1] = 0;
         *pauVar3 = (undefined1[16])0x0;
      }
      while (true) {
         this_00 = (StringName*)operator_new(0x20, DefaultAllocator::alloc);
         *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
         *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
         StringName::operator =(this_00, pSVar5);
         plVar1 = *(long**)param_1;
         lVar2 = plVar1[1];
         *(undefined8*)( this_00 + 8 ) = 0;
         *(long**)( this_00 + 0x18 ) = plVar1;
         *(long*)( this_00 + 0x10 ) = lVar2;
         if (lVar2 != 0) {
            *(StringName**)( lVar2 + 8 ) = this_00;
         }
         plVar1[1] = (long)this_00;
         if (*plVar1 == 0) {
            puVar4 = (undefined8*)*puVar4;
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
            *plVar1 = (long)this_00;
         } else {
            puVar4 = (undefined8*)*puVar4;
            *(int*)( plVar1 + 2 ) = (int)plVar1[2] + 1;
         }
         if (puVar4 == (undefined8*)0x0) break;
         pSVar5 = (StringName*)( puVar4 + 2 );
      };
   }
   return;
}/* SpriteFrames::_get_animations() const */Array *SpriteFrames::_get_animations(void) {
   uint uVar1;
   StringName *pSVar2;
   long lVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   code *pcVar12;
   uint uVar13;
   Variant *pVVar14;
   uint uVar15;
   long lVar16;
   SpriteFrames *in_RSI;
   uint uVar17;
   Array *in_RDI;
   long lVar18;
   ulong uVar19;
   uint uVar20;
   long lVar21;
   long in_FS_OFFSET;
   undefined8 *local_98;
   Dictionary local_90[8];
   Array local_88[8];
   Dictionary local_80[8];
   int local_78[8];
   int local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Array::Array(in_RDI);
   local_98 = (undefined8*)0x0;
   get_animation_list(in_RSI, (List*)&local_98);
   List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>((List<StringName,DefaultAllocator>*)&local_98);
   if (local_98 != (undefined8*)0x0) {
      for (pSVar2 = (StringName*)*local_98; pSVar2 != (StringName*)0x0; pSVar2 = *(StringName**)( pSVar2 + 8 )) {
         if (( *(long*)( in_RSI + 0x248 ) == 0 ) || ( *(int*)( in_RSI + 0x26c ) == 0 )) {
            LAB_00100af0:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar12 = (code*)invalidInstructionException();
            ( *pcVar12 )();
         }
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x268 ) * 4 );
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x268 ) * 8 );
         if (*(long*)pSVar2 == 0) {
            uVar13 = StringName::get_empty_hash();
         } else {
            uVar13 = *(uint*)( *(long*)pSVar2 + 0x20 );
         }
         uVar19 = CONCAT44(0, uVar1);
         if (uVar13 == 0) {
            uVar13 = 1;
         }
         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar13 * lVar3;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar19;
         lVar16 = SUB168(auVar4 * auVar8, 8);
         uVar17 = *(uint*)( *(long*)( in_RSI + 0x250 ) + lVar16 * 4 );
         uVar15 = SUB164(auVar4 * auVar8, 8);
         if (uVar17 == 0) goto LAB_00100af0;
         uVar20 = 0;
         while (( uVar17 != uVar13 || ( *(long*)( *(long*)( *(long*)( in_RSI + 0x248 ) + lVar16 * 8 ) + 0x10 ) != *(long*)pSVar2 ) )) {
            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar15 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar16 = SUB168(auVar5 * auVar9, 8);
            uVar17 = *(uint*)( *(long*)( in_RSI + 0x250 ) + lVar16 * 4 );
            uVar15 = SUB164(auVar5 * auVar9, 8);
            if (( uVar17 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar17 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + uVar15 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,SUB164(auVar7 * auVar11, 8) < uVar20) goto LAB_00100af0;
         };
         lVar3 = *(long*)( *(long*)( in_RSI + 0x248 ) + (ulong)uVar15 * 8 );
         Dictionary::Dictionary(local_90);
         Variant::Variant((Variant*)local_58, pSVar2);
         Variant::Variant((Variant*)local_78, "name");
         pVVar14 = (Variant*)Dictionary::operator []((Variant*)local_90);
         if (pVVar14 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)pVVar14 = 0;
            *(int*)pVVar14 = local_58[0];
            *(undefined8*)( pVVar14 + 8 ) = local_50;
            *(undefined8*)( pVVar14 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         Variant::Variant((Variant*)local_58, *(double*)( lVar3 + 0x18 ));
         Variant::Variant((Variant*)local_78, "speed");
         pVVar14 = (Variant*)Dictionary::operator []((Variant*)local_90);
         if (pVVar14 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)pVVar14 = 0;
            *(int*)pVVar14 = local_58[0];
            *(undefined8*)( pVVar14 + 8 ) = local_50;
            *(undefined8*)( pVVar14 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         Variant::Variant((Variant*)local_58, *(bool*)( lVar3 + 0x20 ));
         Variant::Variant((Variant*)local_78, "loop");
         pVVar14 = (Variant*)Dictionary::operator []((Variant*)local_90);
         if (pVVar14 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)pVVar14 = 0;
            *(int*)pVVar14 = local_58[0];
            *(undefined8*)( pVVar14 + 8 ) = local_50;
            *(undefined8*)( pVVar14 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         Array::Array(local_88);
         lVar16 = *(long*)( lVar3 + 0x30 );
         for (lVar21 = 0; ( lVar16 != 0 && ( lVar21 < *(long*)( lVar16 + -8 ) ) ); lVar21 = lVar21 + 1) {
            Dictionary::Dictionary(local_80);
            lVar16 = *(long*)( lVar3 + 0x30 );
            if (lVar16 == 0) {
               LAB_00100b20:lVar18 = 0;
               LAB_00100b26:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar21, lVar18, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar12 = (code*)invalidInstructionException();
               ( *pcVar12 )();
            }
            lVar18 = *(long*)( lVar16 + -8 );
            if (lVar18 <= lVar21) goto LAB_00100b26;
            Variant::Variant((Variant*)local_58, *(Object**)( lVar16 + lVar21 * 0x10 ));
            Variant::Variant((Variant*)local_78, "texture");
            pVVar14 = (Variant*)Dictionary::operator []((Variant*)local_80);
            if (pVVar14 != (Variant*)local_58) {
               if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
                  Variant::_clear_internal();
               }
               *(undefined4*)pVVar14 = 0;
               *(int*)pVVar14 = local_58[0];
               *(undefined8*)( pVVar14 + 8 ) = local_50;
               *(undefined8*)( pVVar14 + 0x10 ) = uStack_48;
               local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            lVar16 = *(long*)( lVar3 + 0x30 );
            if (lVar16 == 0) goto LAB_00100b20;
            lVar18 = *(long*)( lVar16 + -8 );
            if (lVar18 <= lVar21) goto LAB_00100b26;
            Variant::Variant((Variant*)local_58, *(float*)( lVar16 + 8 + lVar21 * 0x10 ));
            Variant::Variant((Variant*)local_78, "duration");
            pVVar14 = (Variant*)Dictionary::operator []((Variant*)local_80);
            if (pVVar14 != (Variant*)local_58) {
               if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
                  Variant::_clear_internal();
               }
               *(undefined4*)pVVar14 = 0;
               *(int*)pVVar14 = local_58[0];
               *(undefined8*)( pVVar14 + 8 ) = local_50;
               *(undefined8*)( pVVar14 + 0x10 ) = uStack_48;
               local_58[0] = 0;
            }
            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            Variant::Variant((Variant*)local_58, local_80);
            Array::push_back((Variant*)local_88);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }
            Dictionary::~Dictionary(local_80);
            lVar16 = *(long*)( lVar3 + 0x30 );
         }
         Variant::Variant((Variant*)local_58, local_88);
         Variant::Variant((Variant*)local_78, "frames");
         pVVar14 = (Variant*)Dictionary::operator []((Variant*)local_90);
         if (pVVar14 != (Variant*)local_58) {
            if (Variant::needs_deinit[*(int*)pVVar14] != '\0') {
               Variant::_clear_internal();
            }
            *(undefined4*)pVVar14 = 0;
            *(int*)pVVar14 = local_58[0];
            *(undefined8*)( pVVar14 + 8 ) = local_50;
            *(undefined8*)( pVVar14 + 0x10 ) = uStack_48;
            local_58[0] = 0;
         }
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         Variant::Variant((Variant*)local_58, local_90);
         Array::push_back((Variant*)in_RDI);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         Array::~Array(local_88);
         Dictionary::~Dictionary(local_90);
      }
   }
   List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_98);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return in_RDI;
}/* SpriteFrames::get_animation_speed(StringName const&) const */undefined8 SpriteFrames::get_animation_speed(SpriteFrames *this, StringName *param_1) {
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
   uint uVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   undefined8 uVar17;
   String_conflict local_60[8];
   undefined8 local_58;
   CowData<char32_t> local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      } else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar11 == 0) {
         uVar11 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         do {
            if (uVar11 == uVar14) {
               if (*(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1) {
                  lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar12 * 8 );
                  if (lVar2 != 0) {
                     uVar17 = *(undefined8*)( lVar2 + 0x18 );
                     goto LAB_00100e1a;
                  }
                  break;
               }
            }
            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
            if (( uVar14 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,SUB164(auVar6 * auVar10, 8) < uVar15) break;
         } while ( true );
      }
   }
   local_58 = 0;
   local_40 = 0x10;
   local_48 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_58);
   lVar2 = *(long*)param_1;
   if (lVar2 == 0) {
      local_48 = (char*)0x0;
   } else {
      local_48 = (char*)0x0;
      if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( lVar2 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_48, *(char**)( lVar2 + 8 ));
      }
   }
   operator+((char *)
   local_50,(String_conflict*)"Animation \'";
   String::operator +(local_60, (String_conflict*)local_50);
   _err_print_error("get_animation_speed", "scene/resources/sprite_frames.cpp", 0x98, "Condition \"!E\" is true. Returning: 0", local_60, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   uVar17 = 0;
   LAB_00100e1a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar17;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::get_animation_loop(StringName const&) const */undefined1 SpriteFrames::get_animation_loop(SpriteFrames *this, StringName *param_1) {
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
   undefined1 uVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   String_conflict local_60[8];
   undefined8 local_58;
   CowData<char32_t> local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar12 = StringName::get_empty_hash();
      } else {
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
      uVar15 = *(uint*)( *(long*)( this + 0x250 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         while (( uVar12 != uVar15 || ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar14 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x250 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
            if (( uVar15 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,SUB164(auVar6 * auVar10, 8) < uVar16) goto LAB_001010a0;
         };
         lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar13 * 8 );
         if (lVar2 != 0) {
            uVar11 = *(undefined1*)( lVar2 + 0x20 );
            goto LAB_00101079;
         }
      }
   }
   LAB_001010a0:local_58 = 0;
   local_40 = 0x10;
   local_48 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_58);
   lVar2 = *(long*)param_1;
   if (lVar2 == 0) {
      local_48 = (char*)0x0;
   } else {
      local_48 = (char*)0x0;
      if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( lVar2 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_48, *(char**)( lVar2 + 8 ));
      }
   }
   operator+((char *)
   local_50,(String_conflict*)"Animation \'";
   String::operator +(local_60, (String_conflict*)local_50);
   _err_print_error("get_animation_loop", "scene/resources/sprite_frames.cpp", 0xa4, "Condition \"!E\" is true. Returning: false", local_60, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   uVar11 = 0;
   LAB_00101079:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::set_animation_speed(StringName const&, double) */void SpriteFrames::set_animation_speed(SpriteFrames *this, StringName *param_1, double param_2) {
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
   uint uVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   undefined8 local_60;
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_2 < 0.0) {
      local_50 = 0;
      local_48 = ").";
      local_40 = 2;
      String::parse_latin1((StrRange*)&local_50);
      itos((long)&local_60);
      operator+((char *)
      local_58,(String_conflict*)"Animation speed cannot be negative (";
      String::operator +((String_conflict*)&local_48, (String_conflict*)local_58);
      _err_print_error("set_animation_speed", "scene/resources/sprite_frames.cpp", 0x90, "Condition \"p_fps < 0\" is true.", (String_conflict*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   } else {
      if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
         uVar16 = CONCAT44(0, uVar1);
         lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar11 = StringName::get_empty_hash();
         } else {
            uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
         }
         if (uVar11 == 0) {
            uVar11 = 1;
         }
         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar11 * lVar2;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar16;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
         uVar12 = SUB164(auVar3 * auVar7, 8);
         if (uVar14 != 0) {
            uVar15 = 0;
            do {
               if (uVar14 == uVar11) {
                  if (*(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1) {
                     lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar12 * 8 );
                     if (lVar2 != 0) {
                        *(double*)( lVar2 + 0x18 ) = param_2;
                        goto LAB_001012ea;
                     }
                     break;
                  }
               }
               uVar15 = uVar15 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = uVar16;
               lVar13 = SUB168(auVar4 * auVar8, 8);
               uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
               uVar12 = SUB164(auVar4 * auVar8, 8);
               if (( uVar14 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,SUB164(auVar6 * auVar10, 8) < uVar15) break;
            } while ( true );
         }
      }
      local_50 = 0;
      local_40 = 0x10;
      local_48 = "\' doesn\'t exist.";
      String::parse_latin1((StrRange*)&local_50);
      lVar2 = *(long*)param_1;
      if (lVar2 == 0) {
         local_60 = 0;
      } else {
         local_60 = 0;
         if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar2 + 0x10 ));
         } else {
            String::parse_latin1((String_conflict*)&local_60, *(char**)( lVar2 + 8 ));
         }
      }
      operator+((char *)
      local_58,(String_conflict*)"Animation \'";
      String::operator +((String_conflict*)&local_48, (String_conflict*)local_58);
      _err_print_error("set_animation_speed", "scene/resources/sprite_frames.cpp", 0x92, "Condition \"!E\" is true.", (String_conflict*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }
   LAB_001012ea:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::set_animation_loop(StringName const&, bool) */void SpriteFrames::set_animation_loop(SpriteFrames *this, StringName *param_1, bool param_2) {
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
   uint uVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   String_conflict local_70[8];
   undefined8 local_68;
   CowData<char32_t> local_60[8];
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      } else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar11 == 0) {
         uVar11 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         do {
            if (uVar11 == uVar14) {
               if (*(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1) {
                  lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar12 * 8 );
                  if (lVar2 != 0) {
                     *(bool*)( lVar2 + 0x20 ) = param_2;
                     goto LAB_00101628;
                  }
                  break;
               }
            }
            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
            if (( uVar14 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,SUB164(auVar6 * auVar10, 8) < uVar15) break;
         } while ( true );
      }
   }
   local_68 = 0;
   local_50 = 0x10;
   local_58 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_68);
   lVar2 = *(long*)param_1;
   if (lVar2 == 0) {
      local_58 = (char*)0x0;
   } else {
      local_58 = (char*)0x0;
      if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_58, *(char**)( lVar2 + 8 ));
      }
   }
   operator+((char *)
   local_60,(String_conflict*)"Animation \'";
   String::operator +(local_70, (String_conflict*)local_60);
   _err_print_error("set_animation_loop", "scene/resources/sprite_frames.cpp", 0x9e, "Condition \"!E\" is true.", local_70, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   LAB_00101628:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::get_frame_count(StringName const&) const */undefined4 SpriteFrames::get_frame_count(SpriteFrames *this, StringName *param_1) {
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
   undefined4 uVar11;
   uint uVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   String_conflict local_60[8];
   undefined8 local_58;
   CowData<char32_t> local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar12 = StringName::get_empty_hash();
      } else {
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
      uVar15 = *(uint*)( *(long*)( this + 0x250 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         do {
            if (( uVar12 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar13 * 8 );
               if (lVar2 != 0) {
                  lVar2 = *(long*)( lVar2 + 0x30 );
                  if (lVar2 == 0) {
                     uVar11 = 0;
                  } else {
                     uVar11 = *(undefined4*)( lVar2 + -8 );
                  }
                  goto LAB_00101895;
               }
               break;
            }
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x250 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   local_58 = 0;
   local_40 = 0x10;
   local_48 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_58);
   lVar2 = *(long*)param_1;
   if (lVar2 == 0) {
      local_48 = (char*)0x0;
   } else {
      local_48 = (char*)0x0;
      if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( lVar2 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_48, *(char**)( lVar2 + 8 ));
      }
   }
   operator+((char *)
   local_50,(String_conflict*)"Animation \'";
   String::operator +(local_60, (String_conflict*)local_50);
   _err_print_error("get_frame_count", "scene/resources/sprite_frames.cpp", 0x47, "Condition \"!E\" is true. Returning: 0", local_60, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   uVar11 = 0;
   LAB_00101895:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x00101ec4) *//* SortArray<String, _DefaultComparator<String>, true>::introsort(long, long, String*, long) const
   [clone .isra.0] */void SortArray<String,_DefaultComparator<String>,true>::introsort(long param_1, long param_2, String_conflict *param_3, long param_4) {
   long *plVar1;
   long *plVar2;
   char cVar3;
   String_conflict *pSVar4;
   String_conflict *pSVar5;
   long lVar6;
   long lVar7;
   String_conflict *pSVar8;
   CowData *pCVar9;
   String_conflict *pSVar10;
   long lVar11;
   long lVar12;
   long in_FS_OFFSET;
   bool bVar13;
   long local_80;
   long local_68;
   long local_60;
   long local_48;
   long local_40;
   lVar12 = param_2 - param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x10 < lVar12) {
      local_80 = param_2;
      if (param_4 != 0) {
         pSVar4 = param_3 + param_1 * 8;
         local_68 = param_2;
         local_60 = param_4;
         LAB_00101a5e:local_60 = local_60 + -1;
         pSVar8 = param_3 + ( ( lVar12 >> 1 ) + param_1 ) * 8;
         pSVar5 = param_3 + local_68 * 8 + -8;
         cVar3 = String::operator <(pSVar4, pSVar8);
         if (cVar3 == '\0') {
            cVar3 = String::operator <(pSVar4, pSVar5);
            pSVar10 = pSVar4;
            if (cVar3 != '\0') goto LAB_00101abc;
            cVar3 = String::operator <(pSVar8, pSVar5);
         } else {
            cVar3 = String::operator <(pSVar8, pSVar5);
            pSVar10 = pSVar8;
            if (cVar3 != '\0') goto LAB_00101abc;
            cVar3 = String::operator <(pSVar4, pSVar5);
            pSVar8 = pSVar4;
         }
         pSVar10 = pSVar8;
         if (cVar3 != '\0') {
            pSVar10 = pSVar5;
         }
         LAB_00101abc:local_48 = 0;
         plVar1 = (long*)( *(long*)pSVar10 + -0x10 );
         if (*(long*)pSVar10 != 0) {
            do {
               lVar12 = *plVar1;
               if (lVar12 == 0) goto LAB_00101af4;
               LOCK();
               lVar11 = *plVar1;
               bVar13 = lVar12 == lVar11;
               if (bVar13) {
                  *plVar1 = lVar12 + 1;
                  lVar11 = lVar12;
               }
               UNLOCK();
            } while ( !bVar13 );
            if (lVar11 != -1) {
               local_48 = *(long*)pSVar10;
            }
         }
         LAB_00101af4:pSVar8 = pSVar4;
         local_80 = param_1;
         lVar12 = local_68;
         do {
            cVar3 = String::operator <(pSVar8, (String_conflict*)&local_48);
            if (cVar3 == '\0') {
               LAB_00101b37:lVar12 = lVar12 + -1;
               pSVar5 = param_3 + lVar12 * 8;
               while (cVar3 = String::operator <((String_conflict*)&local_48, pSVar5),cVar3 != '\0') {
                  if (param_1 == lVar12) {
                     _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
                     break;
                  }
                  lVar12 = lVar12 + -1;
                  pSVar5 = pSVar5 + -8;
               };
               if (lVar12 <= local_80) goto LAB_00101bd0;
               lVar11 = *(long*)pSVar8;
               *(undefined8*)pSVar8 = 0;
               if (*(long*)pSVar5 != 0) {
                  *(long*)pSVar8 = *(long*)pSVar5;
                  *(undefined8*)pSVar5 = 0;
               }
               if (lVar11 != 0) {
                  *(long*)pSVar5 = lVar11;
               }
            } else if (local_68 + -1 == local_80) {
               _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
               goto LAB_00101b37;
            }
            pSVar8 = pSVar8 + 8;
            local_80 = local_80 + 1;
         } while ( true );
      }
      LAB_00101c9a:lVar11 = lVar12 + -2 >> 1;
      pCVar9 = (CowData*)( param_3 + param_1 * 8 );
      do {
         local_48 = 0;
         plVar1 = (long*)( *(long*)( pCVar9 + lVar11 * 8 ) + -0x10 );
         if (*(long*)( pCVar9 + lVar11 * 8 ) == 0) {
            adjust_heap(param_1, lVar11, lVar12, &local_48, param_3);
         } else {
            do {
               lVar6 = *plVar1;
               if (lVar6 == 0) goto LAB_00101cde;
               LOCK();
               lVar7 = *plVar1;
               bVar13 = lVar6 == lVar7;
               if (bVar13) {
                  *plVar1 = lVar6 + 1;
                  lVar7 = lVar6;
               }
               UNLOCK();
            } while ( !bVar13 );
            if (lVar7 != -1) {
               local_48 = *(long*)( pCVar9 + lVar11 * 8 );
            }
            LAB_00101cde:lVar6 = local_48;
            adjust_heap(param_1, lVar11, lVar12, &local_48, param_3);
            if (lVar6 != 0) {
               LOCK();
               plVar1 = (long*)( lVar6 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  Memory::free_static((void*)( local_48 + -0x10 ), false);
               }
            }
         }
         if (lVar11 == 0) goto LAB_00101d4b;
         lVar11 = lVar11 + -1;
      } while ( true );
   }
   goto LAB_00101c6f;
   LAB_00101bd0:CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   introsort(local_80, local_68, param_3, local_60);
   lVar12 = local_80 - param_1;
   if (lVar12 < 0x11) goto LAB_00101c6f;
   local_68 = local_80;
   if (local_60 == 0) goto LAB_00101c9a;
   goto LAB_00101a5e;
   LAB_00101d4b:pSVar4 = param_3 + local_80 * 8 + -8;
   lVar12 = ( local_80 + -1 ) - param_1;
   do {
      plVar1 = (long*)( *(long*)pSVar4 + -0x10 );
      if (*(long*)pSVar4 == 0) {
         LAB_00101e58:if (*(long*)pCVar9 != *(long*)pSVar4) {
            CowData<char32_t>::_ref((CowData<char32_t>*)pSVar4, pCVar9);
         }
         LAB_00101e78:local_48 = 0;
         adjust_heap(param_1, 0, lVar12, &local_48, param_3);
      } else {
         do {
            lVar11 = *plVar1;
            if (lVar11 == 0) goto LAB_00101e58;
            LOCK();
            lVar6 = *plVar1;
            bVar13 = lVar11 == lVar6;
            if (bVar13) {
               *plVar1 = lVar11 + 1;
               lVar6 = lVar11;
            }
            UNLOCK();
         } while ( !bVar13 );
         if (lVar6 == -1) goto LAB_00101e58;
         lVar11 = *(long*)pSVar4;
         if (lVar11 != *(long*)pCVar9) {
            CowData<char32_t>::_ref((CowData<char32_t>*)pSVar4, pCVar9);
         }
         local_48 = 0;
         if (lVar11 == 0) goto LAB_00101e78;
         plVar1 = (long*)( lVar11 + -0x10 );
         do {
            lVar6 = *plVar1;
            if (lVar6 == 0) goto LAB_00101e9d;
            LOCK();
            lVar7 = *plVar1;
            bVar13 = lVar6 == lVar7;
            if (bVar13) {
               *plVar1 = lVar6 + 1;
               lVar7 = lVar6;
            }
            UNLOCK();
         } while ( !bVar13 );
         if (lVar7 == -1) {
            LAB_00101e9d:adjust_heap(param_1, 0, lVar12, &local_48, param_3);
         } else {
            local_48 = lVar11;
            adjust_heap(param_1, 0, lVar12, &local_48, param_3);
            LOCK();
            plVar2 = (long*)( lVar11 + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               Memory::free_static((void*)( local_48 + -0x10 ), false);
            }
         }
         LOCK();
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            Memory::free_static(plVar1, false);
         }
      }
      pSVar4 = (String_conflict*)( (CowData<char32_t>*)pSVar4 + -8 );
      bVar13 = 1 < lVar12;
      lVar12 = lVar12 + -1;
   } while ( bVar13 );
   LAB_00101c6f:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* SpriteFrames::_bind_methods() */void SpriteFrames::_bind_methods(void) {
   Variant *pVVar1;
   char cVar2;
   long lVar3;
   code *pcVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined *puVar8;
   long *plVar9;
   MethodBind *pMVar10;
   uint uVar11;
   long lVar12;
   Variant *pVVar13;
   long *plVar14;
   long in_FS_OFFSET;
   undefined8 local_278;
   long local_270;
   long local_268;
   long local_260;
   long local_258;
   long local_250;
   char *local_248;
   undefined8 local_240;
   char *local_238;
   undefined8 local_230;
   long *local_228;
   int local_220;
   undefined8 local_218;
   undefined4 local_210;
   undefined *local_208;
   undefined8 local_200;
   undefined *local_1f8;
   undefined *puStack_1f0;
   undefined8 local_1e8;
   undefined *local_1d8;
   undefined *puStack_1d0;
   undefined8 local_1c8;
   undefined *local_1b8;
   undefined *puStack_1b0;
   undefined8 local_1a8;
   undefined *local_198;
   undefined *puStack_190;
   undefined8 local_188;
   undefined *local_178;
   undefined *puStack_170;
   undefined8 local_168;
   undefined *local_158;
   char *pcStack_150;
   undefined8 local_148;
   char *local_138;
   char *pcStack_130;
   undefined8 local_128;
   undefined *local_118;
   undefined *puStack_110;
   char *local_108;
   char *pcStack_100;
   undefined8 local_f8;
   undefined *local_e8;
   char *pcStack_e0;
   char *local_d8;
   char *pcStack_d0;
   undefined8 local_c8;
   Variant *local_b8;
   undefined1 auStack_b0[16];
   char **ppcStack_a0;
   Variant **local_88;
   undefined1 auStack_80[16];
   char **ppcStack_70;
   undefined1 local_68[16];
   undefined8 local_58;
   undefined1 local_50[16];
   long local_40[2];
   puVar8 = PTR__LC78_0011ad70;
   local_40[0] = *(long*)( in_FS_OFFSET + 0x28 );
   local_200 = 0;
   local_208 = &_LC78;
   uVar11 = ( uint ) & local_b8;
   local_b8 = (Variant*)&local_208;
   D_METHODP((char*)&local_238, (char***)"add_animation", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&>(add_animation);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   local_200 = 0;
   local_208 = &_LC78;
   local_b8 = (Variant*)&local_208;
   D_METHODP((char*)&local_238, (char***)"has_animation", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,bool,StringName_const&>(has_animation);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   local_128 = 0;
   auStack_b0._0_8_ = &pcStack_130;
   local_138 = "anim_from";
   pcStack_130 = "anim_to";
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_238, (char***)"duplicate_animation", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&,StringName_const&>(duplicate_animation);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   pcStack_130 = (char*)0x0;
   local_138 = "anim";
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_238, (char***)"remove_animation", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&>(remove_animation);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   local_148 = 0;
   local_158 = puVar8;
   pcStack_150 = "newname";
   auStack_b0._0_8_ = &pcStack_150;
   local_b8 = (Variant*)&local_158;
   D_METHODP((char*)&local_238, (char***)"rename_animation", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&,StringName_const&>(rename_animation);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   D_METHODP((char*)&local_238, (char***)"get_animation_names", 0);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,Vector<String>>(get_animation_names);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   local_168 = 0;
   local_178 = puVar8;
   puStack_170 = &_LC81;
   auStack_b0._0_8_ = &puStack_170;
   local_b8 = (Variant*)&local_178;
   D_METHODP((char*)&local_238, (char***)"set_animation_speed", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&,double>(set_animation_speed);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   pcStack_130 = (char*)0x0;
   local_138 = "anim";
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_238, (char***)"get_animation_speed", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,double,StringName_const&>(get_animation_speed);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   local_188 = 0;
   local_198 = puVar8;
   puStack_190 = &_LC33;
   auStack_b0._0_8_ = &puStack_190;
   local_b8 = (Variant*)&local_198;
   D_METHODP((char*)&local_238, (char***)"set_animation_loop", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&,bool>(set_animation_loop);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   pcStack_130 = (char*)0x0;
   local_138 = "anim";
   local_b8 = (Variant*)&local_138;
   D_METHODP((char*)&local_238, (char***)"get_animation_loop", uVar11);
   auStack_b0 = (undefined1[16])0x0;
   local_b8 = (Variant*)0x0;
   pMVar10 = create_method_bind<SpriteFrames,bool,StringName_const&>(get_animation_loop);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_b8] != '\0') {
      Variant::_clear_internal();
   }
   plVar9 = local_228;
   if (local_228 != (long*)0x0) {
      LOCK();
      plVar14 = local_228 + -2;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
         if (local_228 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         lVar3 = local_228[-1];
         lVar12 = 0;
         local_228 = (long*)0x0;
         plVar14 = plVar9;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar14 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar14 = plVar14 + 1;
            } while ( lVar3 != lVar12 );
         }
         Memory::free_static(plVar9 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_238 != (char*)0x0 )) {
      StringName::unref();
   }
   local_e8 = puVar8;
   pcStack_e0 = "texture";
   pVVar13 = (Variant*)local_40;
   local_d8 = "duration";
   pcStack_d0 = "at_position";
   local_c8 = 0;
   local_b8 = (Variant*)&local_e8;
   ppcStack_a0 = &pcStack_d0;
   auStack_b0._0_8_ = &pcStack_e0;
   auStack_b0._8_8_ = &local_d8;
   D_METHODP((char*)&local_238, (char***)"add_frame", uVar11);
   Variant::Variant((Variant*)&local_88, _LC92);
   Variant::Variant((Variant*)&ppcStack_70, -1);
   local_50 = (undefined1[16])0x0;
   local_58 = 0;
   auStack_b0._0_8_ = (Variant*)&ppcStack_70;
   local_b8 = (Variant*)&local_88;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&,Ref<Texture2D>const&,float,int>(add_frame);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, &local_b8, 2);
   do {
      pVVar1 = pVVar13 + -0x18;
      pVVar13 = pVVar13 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar13 != (Variant*)&local_88 );
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   local_118 = puVar8;
   puStack_110 = &_LC79;
   local_108 = "texture";
   pcStack_100 = "duration";
   auStack_80._8_8_ = &local_108;
   auStack_80._0_8_ = &puStack_110;
   local_f8 = 0;
   uVar11 = (uint)(Variant*)&local_88;
   local_88 = (Variant**)&local_118;
   ppcStack_70 = &pcStack_100;
   D_METHODP((char*)&local_238, (char***)"set_frame", uVar11);
   Variant::Variant((Variant*)&local_88, _LC92);
   local_68 = (undefined1[16])0x0;
   ppcStack_70 = (char**)0x0;
   local_b8 = (Variant*)&local_88;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&,int,Ref<Texture2D>const&,float>(set_frame);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, &local_b8, 1);
   if (Variant::needs_deinit[(int)ppcStack_70] == '\0') {
      cVar2 = Variant::needs_deinit[(int)local_88];
   } else {
      Variant::_clear_internal();
      cVar2 = Variant::needs_deinit[(int)local_88];
   }
   if (cVar2 != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   local_1a8 = 0;
   local_1b8 = puVar8;
   puStack_1b0 = &_LC79;
   auStack_80._0_8_ = &puStack_1b0;
   local_88 = (Variant**)&local_1b8;
   D_METHODP((char*)&local_238, (char***)"remove_frame", uVar11);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&,int>(remove_frame);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   auVar5._8_8_ = 0;
   auVar5._0_8_ = auStack_b0._8_8_;
   auStack_b0 = auVar5 << 0x40;
   local_b8 = (Variant*)&_LC78;
   local_88 = &local_b8;
   D_METHODP((char*)&local_238, (char***)"get_frame_count", uVar11);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar10 = create_method_bind<SpriteFrames,int,StringName_const&>(get_frame_count);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   local_1c8 = 0;
   local_1d8 = puVar8;
   puStack_1d0 = &_LC79;
   auStack_80._0_8_ = &puStack_1d0;
   local_88 = (Variant**)&local_1d8;
   D_METHODP((char*)&local_238, (char***)"get_frame_texture", uVar11);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar10 = create_method_bind<SpriteFrames,Ref<Texture2D>,StringName_const&,int>(get_frame_texture);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   plVar9 = local_228;
   if (local_228 != (long*)0x0) {
      LOCK();
      plVar14 = local_228 + -2;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
         if (local_228 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         lVar3 = local_228[-1];
         lVar12 = 0;
         local_228 = (long*)0x0;
         plVar14 = plVar9;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar14 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar14 = plVar14 + 1;
            } while ( lVar3 != lVar12 );
         }
         Memory::free_static(plVar9 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_238 != (char*)0x0 )) {
      StringName::unref();
   }
   local_1e8 = 0;
   local_1f8 = puVar8;
   puStack_1f0 = &_LC79;
   auStack_80._0_8_ = &puStack_1f0;
   local_88 = (Variant**)&local_1f8;
   D_METHODP((char*)&local_238, (char***)"get_frame_duration", uVar11);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar10 = create_method_bind<SpriteFrames,float,StringName_const&,int>(get_frame_duration);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   auVar6._8_8_ = 0;
   auVar6._0_8_ = auStack_b0._8_8_;
   auStack_b0 = auVar6 << 0x40;
   local_b8 = (Variant*)&_LC78;
   local_88 = &local_b8;
   D_METHODP((char*)&local_238, (char***)"clear", uVar11);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar10 = create_method_bind<SpriteFrames,StringName_const&>(clear);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   plVar9 = local_228;
   if (local_228 != (long*)0x0) {
      LOCK();
      plVar14 = local_228 + -2;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
         if (local_228 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         lVar3 = local_228[-1];
         lVar12 = 0;
         local_228 = (long*)0x0;
         plVar14 = plVar9;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar14 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar14 = plVar14 + 1;
            } while ( lVar3 != lVar12 );
         }
         Memory::free_static(plVar9 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_238 != (char*)0x0 )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_238, (char***)"clear_all", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar10 = create_method_bind<SpriteFrames>(clear_all);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   auVar7._8_8_ = 0;
   auVar7._0_8_ = auStack_b0._8_8_;
   auStack_b0 = auVar7 << 0x40;
   local_b8 = (Variant*)0x10be68;
   local_88 = &local_b8;
   D_METHODP((char*)&local_238, (char***)"_set_animations", uVar11);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar10 = create_method_bind<SpriteFrames,Array_const&>(_set_animations);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   plVar9 = local_228;
   if (local_228 != (long*)0x0) {
      LOCK();
      plVar14 = local_228 + -2;
      *plVar14 = *plVar14 + -1;
      UNLOCK();
      if (*plVar14 == 0) {
         if (local_228 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         lVar3 = local_228[-1];
         lVar12 = 0;
         local_228 = (long*)0x0;
         plVar14 = plVar9;
         if (lVar3 != 0) {
            do {
               if (( StringName::configured != '\0' ) && ( *plVar14 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar14 = plVar14 + 1;
            } while ( lVar3 != lVar12 );
         }
         Memory::free_static(plVar9 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_238 != (char*)0x0 )) {
      StringName::unref();
   }
   D_METHODP((char*)&local_238, (char***)"_get_animations", 0);
   auStack_80 = (undefined1[16])0x0;
   local_88 = (Variant**)0x0;
   pMVar10 = create_method_bind<SpriteFrames,Array>(_get_animations);
   ClassDB::bind_methodfi(1, pMVar10, false, (MethodDefinition*)&local_238, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
   }
   MethodDefinition::~MethodDefinition((MethodDefinition*)&local_238);
   _scs_create((char*)&local_250, true);
   _scs_create((char*)&local_258, true);
   local_238 = "";
   local_260 = 0;
   local_268 = 0;
   local_230 = 0;
   String::parse_latin1((StrRange*)&local_268);
   local_270 = 0;
   local_238 = "animations";
   local_230 = 10;
   String::parse_latin1((StrRange*)&local_270);
   local_238 = (char*)CONCAT44(local_238._4_4_, 0x1c);
   local_230 = 0;
   if (local_270 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_230, (CowData*)&local_270);
   }
   local_228 = (long*)0x0;
   local_220 = 0;
   local_218 = 0;
   if (local_268 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_218, (CowData*)&local_268);
      local_210 = 10;
      if (local_220 == 0x11) {
         StringName::StringName((StringName*)&local_248, (String_conflict*)&local_218, false);
         if (local_228 == (long*)local_248) {
            if (( StringName::configured != '\0' ) && ( local_248 != (char*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            local_228 = (long*)local_248;
         }
         goto LAB_00103258;
      }
   }
   local_210 = 10;
   StringName::operator =((StringName*)&local_228, (StringName*)&local_260);
   LAB_00103258:local_278 = 0;
   local_248 = "SpriteFrames";
   local_240 = 0xc;
   String::parse_latin1((StrRange*)&local_278);
   StringName::StringName((StringName*)&local_248, (String_conflict*)&local_278, false);
   ClassDB::add_property((StringName*)&local_248, (PropertyInfo*)&local_238, (StringName*)&local_258, (StringName*)&local_250, -1);
   if (( StringName::configured != '\0' ) && ( local_248 != (char*)0x0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_278);
   PropertyInfo::~PropertyInfo((PropertyInfo*)&local_238);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_270);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_268);
   if (( ( ( StringName::configured != '\0' ) && ( ( local_260 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_258 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_250 != 0 )) {
      StringName::unref();
   }
   if (local_40[0] == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* CowData<String>::_ref(CowData<String> const&) [clone .part.0] */void CowData<String>::_ref(CowData<String> *this, CowData *param_1) {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* CowData<String>::_copy_on_write() [clone .isra.0] */void CowData<String>::_copy_on_write(CowData<String> *this) {
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
         } while ( lVar2 != lVar6 );
      }
      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar5 + 2 );
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* SpriteFrames::get_animation_names() const */long SpriteFrames::get_animation_names(void) {
   CowData<String> *this;
   long *plVar1;
   char *pcVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long *plVar9;
   CowData<char32_t> *pCVar10;
   long in_RSI;
   long in_RDI;
   CowData<char32_t> *pCVar11;
   CowData *pCVar12;
   CowData<char32_t> *pCVar13;
   long lVar14;
   CowData<char32_t> *pCVar15;
   long in_FS_OFFSET;
   bool bVar16;
   long local_88;
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   plVar9 = *(long**)( in_RSI + 600 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (plVar9 != (long*)0x0) {
      this(CowData<String> * )(in_RDI + 8);
      do {
         lVar5 = plVar9[2];
         if (lVar5 == 0) {
            local_60 = 0;
            lVar5 = *(long*)( in_RDI + 8 );
            if (lVar5 != 0) goto LAB_00103715;
            LAB_001037cc:iVar4 = CowData<String>::resize<false>(this, 1);
            if (iVar4 == 0) goto LAB_0010372d;
            LAB_001037e8:_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         } else {
            pcVar2 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  do {
                     lVar14 = *plVar1;
                     if (lVar14 == 0) goto LAB_00103708;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar16 = lVar14 == lVar8;
                     if (bVar16) {
                        *plVar1 = lVar14 + 1;
                        lVar8 = lVar14;
                     }
                     UNLOCK();
                  } while ( !bVar16 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar5 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }
            LAB_00103708:lVar5 = *(long*)( in_RDI + 8 );
            if (lVar5 == 0) goto LAB_001037cc;
            LAB_00103715:iVar4 = CowData<String>::resize<false>(this, *(long*)( lVar5 + -8 ) + 1);
            if (iVar4 != 0) goto LAB_001037e8;
            LAB_0010372d:if (*(long*)( in_RDI + 8 ) == 0) {
               lVar14 = -1;
               lVar5 = 0;
               LAB_001038aa:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar14, lVar5, "p_index", "size()", "", false, false);
            } else {
               lVar5 = *(long*)( *(long*)( in_RDI + 8 ) + -8 );
               lVar14 = lVar5 + -1;
               if (lVar14 < 0) goto LAB_001038aa;
               CowData<String>::_copy_on_write(this);
               pCVar13 = (CowData<char32_t>*)( *(long*)( in_RDI + 8 ) + lVar14 * 8 );
               if (*(long*)pCVar13 != local_60) {
                  CowData<char32_t>::_ref(pCVar13, (CowData*)&local_60);
               }
            }
         }
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
         plVar9 = (long*)*plVar9;
      } while ( plVar9 != (long*)0x0 );
      if (( *(long*)( in_RDI + 8 ) != 0 ) && ( lVar5 = lVar5 != 0 )) {
         CowData<String>::_copy_on_write(this);
         pCVar13 = *(CowData<char32_t>**)( in_RDI + 8 );
         if (lVar5 == 1) {
            SortArray<String,_DefaultComparator<String>,true>::introsort(0, 1, (String_conflict*)pCVar13, 0);
         } else {
            lVar8 = 0;
            lVar14 = lVar5;
            do {
               lVar14 = lVar14 >> 1;
               lVar8 = lVar8 + 1;
            } while ( lVar14 != 1 );
            SortArray<String,_DefaultComparator<String>,true>::introsort(0, lVar5, (String_conflict*)pCVar13, lVar8 * 2);
            pCVar15 = pCVar13 + 8;
            if (lVar5 < 0x11) {
               lVar14 = 1;
               pCVar10 = pCVar15;
               do {
                  local_58 = (char*)0x0;
                  plVar9 = (long*)( *(long*)pCVar10 + -0x10 );
                  if (*(long*)pCVar10 != 0) {
                     do {
                        lVar8 = *plVar9;
                        if (lVar8 == 0) goto LAB_00103cb8;
                        LOCK();
                        lVar7 = *plVar9;
                        bVar16 = lVar8 == lVar7;
                        if (bVar16) {
                           *plVar9 = lVar8 + 1;
                           lVar7 = lVar8;
                        }
                        UNLOCK();
                     } while ( !bVar16 );
                     if (lVar7 != -1) {
                        local_58 = *(char**)pCVar10;
                     }
                  }
                  LAB_00103cb8:cVar3 = String::operator <((String_conflict*)&local_58, (String_conflict*)pCVar13);
                  pCVar12 = (CowData*)pCVar10;
                  lVar8 = lVar14;
                  if (cVar3 == '\0') {
                     local_60 = 0;
                     if (local_58 != (char*)0x0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)&local_58);
                     }
                     while (true) {
                        pCVar11 = (CowData<char32_t>*)pCVar12;
                        pCVar12 = (CowData*)( pCVar11 + -8 );
                        cVar3 = String::operator <((String_conflict*)&local_60, (String_conflict*)pCVar12);
                        if (cVar3 == '\0') break;
                        if (pCVar11 == pCVar15) {
                           _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                           break;
                        }
                        if (*(long*)pCVar11 != *(long*)( pCVar11 + -8 )) {
                           CowData<char32_t>::_ref(pCVar11, pCVar12);
                        }
                     };
                     if (*(long*)pCVar11 != local_60) {
                        CowData<char32_t>::_ref(pCVar11, (CowData*)&local_60);
                     }
                     lVar8 = local_60;
                     if (local_60 != 0) {
                        LOCK();
                        plVar9 = (long*)( local_60 + -0x10 );
                        *plVar9 = *plVar9 + -1;
                        UNLOCK();
                        if (*plVar9 == 0) {
                           local_60 = 0;
                           Memory::free_static((void*)( lVar8 + -0x10 ), false);
                        }
                     }
                  } else {
                     do {
                        if (*(long*)pCVar12 != *(long*)( (CowData<char32_t>*)pCVar12 + -8 )) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)pCVar12, (CowData*)( (CowData<char32_t>*)pCVar12 + -8 ));
                        }
                        lVar8 = lVar8 + -1;
                        pCVar12 = (CowData*)( (CowData<char32_t>*)pCVar12 + -8 );
                     } while ( lVar8 != 0 );
                     if (*(char**)pCVar13 != local_58) {
                        CowData<char32_t>::_ref(pCVar13, (CowData*)&local_58);
                     }
                  }
                  pcVar2 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar9 = (long*)( local_58 + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar2 + -0x10, false);
                     }
                  }
                  lVar14 = lVar14 + 1;
                  pCVar10 = pCVar10 + 8;
               } while ( lVar5 != lVar14 );
            } else {
               local_88 = 1;
               pCVar10 = pCVar15;
               do {
                  local_58 = (char*)0x0;
                  plVar9 = (long*)( *(long*)pCVar10 + -0x10 );
                  if (*(long*)pCVar10 != 0) {
                     do {
                        lVar14 = *plVar9;
                        if (lVar14 == 0) goto LAB_001039a0;
                        LOCK();
                        lVar8 = *plVar9;
                        bVar16 = lVar14 == lVar8;
                        if (bVar16) {
                           *plVar9 = lVar14 + 1;
                           lVar8 = lVar14;
                        }
                        UNLOCK();
                     } while ( !bVar16 );
                     if (lVar8 != -1) {
                        local_58 = *(char**)pCVar10;
                     }
                  }
                  LAB_001039a0:cVar3 = String::operator <((String_conflict*)&local_58, (String_conflict*)pCVar13);
                  pCVar11 = pCVar10;
                  if (cVar3 == '\0') {
                     local_60 = 0;
                     plVar9 = (long*)( (long)local_58 + -0x10 );
                     pCVar12 = (CowData*)pCVar10;
                     if (local_58 != (char*)0x0) {
                        do {
                           lVar14 = *plVar9;
                           if (lVar14 == 0) goto LAB_00103a18;
                           LOCK();
                           lVar8 = *plVar9;
                           bVar16 = lVar14 == lVar8;
                           if (bVar16) {
                              *plVar9 = lVar14 + 1;
                              lVar8 = lVar14;
                           }
                           UNLOCK();
                        } while ( !bVar16 );
                        if (lVar8 != -1) {
                           local_60 = (long)local_58;
                        }
                     }
                     LAB_00103a18:pCVar11 = (CowData<char32_t>*)pCVar12;
                     pCVar12 = (CowData*)( pCVar11 + -8 );
                     cVar3 = String::operator <((String_conflict*)&local_60, (String_conflict*)pCVar12);
                     if (cVar3 != '\0') {
                        if (pCVar15 == pCVar11) {
                           _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                           goto LAB_00103a64;
                        }
                        if (*(long*)pCVar11 != *(long*)( pCVar11 + -8 )) {
                           CowData<char32_t>::_ref(pCVar11, pCVar12);
                        }
                        goto LAB_00103a18;
                     }
                     LAB_00103a64:if (*(long*)pCVar11 != local_60) {
                        CowData<char32_t>::_ref(pCVar11, (CowData*)&local_60);
                     }
                     lVar14 = local_60;
                     if (local_60 != 0) {
                        LOCK();
                        plVar9 = (long*)( local_60 + -0x10 );
                        *plVar9 = *plVar9 + -1;
                        UNLOCK();
                        if (*plVar9 == 0) {
                           local_60 = 0;
                           Memory::free_static((void*)( lVar14 + -0x10 ), false);
                        }
                     }
                  } else {
                     do {
                        pCVar12 = (CowData*)( pCVar11 + -8 );
                        if (*(long*)pCVar11 != *(long*)( pCVar11 + -8 )) {
                           CowData<char32_t>::_ref(pCVar11, pCVar12);
                        }
                        pCVar11 = (CowData<char32_t>*)pCVar12;
                     } while ( pCVar12 != (CowData*)pCVar13 );
                     if ((char*)*(long*)pCVar13 != local_58) {
                        CowData<char32_t>::_ref(pCVar13, (CowData*)&local_58);
                     }
                  }
                  pcVar2 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar9 = (long*)( (long)local_58 + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static((void*)( (long)pcVar2 + -0x10 ), false);
                     }
                  }
                  local_88 = local_88 + 1;
                  pCVar10 = pCVar10 + 8;
               } while ( local_88 != 0x10 );
               pCVar13 = pCVar13 + 0x80;
               lVar14 = 0x10;
               do {
                  local_58 = (char*)0x0;
                  plVar9 = (long*)( *(long*)pCVar13 + -0x10 );
                  pCVar12 = (CowData*)pCVar13;
                  lVar8 = lVar14;
                  if (*(long*)pCVar13 != 0) {
                     do {
                        lVar7 = *plVar9;
                        if (lVar7 == 0) goto LAB_00103bab;
                        LOCK();
                        lVar6 = *plVar9;
                        bVar16 = lVar7 == lVar6;
                        if (bVar16) {
                           *plVar9 = lVar7 + 1;
                           lVar6 = lVar7;
                        }
                        UNLOCK();
                     } while ( !bVar16 );
                     if (lVar6 != -1) {
                        local_58 = *(char**)pCVar13;
                     }
                  }
                  LAB_00103bab:pCVar15 = (CowData<char32_t>*)pCVar12;
                  lVar8 = lVar8 + -1;
                  pCVar12 = (CowData*)( pCVar15 + -8 );
                  cVar3 = String::operator <((String_conflict*)&local_58, (String_conflict*)pCVar12);
                  if (cVar3 != '\0') {
                     if (lVar8 == 0) {
                        _err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
                        goto LAB_00103be8;
                     }
                     if (*(long*)pCVar15 != *(long*)( pCVar15 + -8 )) {
                        CowData<char32_t>::_ref(pCVar15, pCVar12);
                     }
                     goto LAB_00103bab;
                  }
                  LAB_00103be8:if (*(char**)pCVar15 != local_58) {
                     CowData<char32_t>::_ref(pCVar15, (CowData*)&local_58);
                  }
                  pcVar2 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar9 = (long*)( local_58 + -0x10 );
                     *plVar9 = *plVar9 + -1;
                     UNLOCK();
                     if (*plVar9 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar2 + -0x10, false);
                     }
                  }
                  lVar14 = lVar14 + 1;
                  pCVar13 = pCVar13 + 8;
               } while ( lVar5 != lVar14 );
            }
         }
      }
   }
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return in_RDI;
}/* SpriteFrames::get_argument_options(StringName const&, int, List<String, DefaultAllocator>*) const
    */void SpriteFrames::get_argument_options(SpriteFrames *this, StringName *param_1, int param_2, List *param_3) {
   char *pcVar1;
   long *plVar2;
   long lVar3;
   char cVar4;
   CowData<char32_t> *this_00;
   undefined1(*pauVar5)[16];
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   CowData<char32_t> *local_98;
   undefined8 local_78;
   long local_70[2];
   long local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   lVar7 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar7 == 0) {
      local_78 = 0;
   } else {
      pcVar1 = *(char**)( lVar7 + 8 );
      local_78 = 0;
      if (pcVar1 == (char*)0x0) {
         if (*(long*)( lVar7 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)( lVar7 + 0x10 ));
         }
      } else {
         local_50 = strlen(pcVar1);
         local_58 = pcVar1;
         String::parse_latin1((StrRange*)&local_78);
      }
   }
   if (param_2 == 0) {
      local_98 = (CowData<char32_t>*)&local_78;
      cVar4 = String::operator ==((String_conflict*)local_98, "has_animation");
      if (( ( ( ( cVar4 != '\0' ) || ( cVar4 = String::operator ==((String_conflict*)local_98, "remove_animation") ),cVar4 != '\0' ) ) || ( cVar4 = String::operator ==((String_conflict*)local_98, "rename_animation") ),cVar4 != '\0' )) {
         get_animation_names();
         CowData<String>::_copy_on_write((CowData<String>*)&local_60);
         lVar6 = local_60;
         CowData<String>::_copy_on_write((CowData<String>*)&local_60);
         lVar7 = local_60;
         if (local_60 != 0) {
            lVar7 = local_60 + *(long*)( local_60 + -8 ) * 8;
         }
         if (lVar6 != lVar7) {
            do {
               local_58 = "\"";
               local_70[0] = 0;
               local_50 = 1;
               String::parse_latin1((StrRange*)local_70);
               String::quote((String_conflict*)&local_58);
               if (*(long*)param_3 == 0) {
                  pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])param_3 = pauVar5;
                  *(undefined4*)pauVar5[1] = 0;
                  *pauVar5 = (undefined1[16])0x0;
               }
               this_00 = (CowData<char32_t>*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
               if (local_58 != (char*)0x0) {
                  CowData<char32_t>::_ref(this_00, (CowData*)&local_58);
               }
               pcVar1 = local_58;
               plVar2 = *(long**)param_3;
               lVar3 = plVar2[1];
               *(undefined8*)( this_00 + 8 ) = 0;
               *(long**)( this_00 + 0x18 ) = plVar2;
               *(long*)( this_00 + 0x10 ) = lVar3;
               if (lVar3 != 0) {
                  *(CowData<char32_t>**)( lVar3 + 8 ) = this_00;
               }
               plVar2[1] = (long)this_00;
               if (*plVar2 == 0) {
                  *plVar2 = (long)this_00;
               }
               *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
               if (local_58 != (char*)0x0) {
                  LOCK();
                  plVar2 = (long*)( local_58 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     local_58 = (char*)0x0;
                     Memory::free_static(pcVar1 + -0x10, false);
                  }
               }
               lVar3 = local_70[0];
               if (local_70[0] != 0) {
                  LOCK();
                  plVar2 = (long*)( local_70[0] + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     local_70[0] = 0;
                     Memory::free_static((void*)( lVar3 + -0x10 ), false);
                  }
               }
               lVar6 = lVar6 + 8;
            } while ( lVar7 != lVar6 );
         }
         CowData<String>::_unref((CowData<String>*)&local_60);
      }
   }
   local_98 = (CowData<char32_t>*)&local_78;
   Object::get_argument_options((StringName*)this, (int)param_1, (List*)(ulong)(uint)param_2);
   CowData<char32_t>::_unref(local_98);
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* CowData<SpriteFrames::Frame>::_ref(CowData<SpriteFrames::Frame> const&) [clone .part.0] */void CowData<SpriteFrames::Frame>::_ref(CowData<SpriteFrames::Frame> *this, CowData *param_1) {
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
      } while ( !bVar4 );
      if (lVar3 != -1) {
         *(undefined8*)this = *(undefined8*)param_1;
      }
   }
   return;
}/* SpriteFrames::duplicate_animation(StringName const&, StringName const&) */void SpriteFrames::duplicate_animation(SpriteFrames *this, StringName *param_1, StringName *param_2) {
   undefined8 uVar1;
   uint uVar2;
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
   uint uVar20;
   undefined8 *puVar21;
   undefined8 *puVar22;
   int iVar23;
   long lVar24;
   uint uVar25;
   ulong uVar26;
   uint uVar27;
   long lVar28;
   long in_FS_OFFSET;
   undefined8 local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar20 = StringName::get_empty_hash();
      } else {
         uVar20 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      uVar26 = CONCAT44(0, uVar2);
      lVar28 = *(long*)( this + 0x250 );
      if (uVar20 == 0) {
         uVar20 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar20 * lVar3;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar26;
      lVar24 = SUB168(auVar4 * auVar12, 8);
      uVar25 = *(uint*)( lVar28 + lVar24 * 4 );
      iVar23 = SUB164(auVar4 * auVar12, 8);
      if (uVar25 != 0) {
         uVar27 = 0;
         do {
            if (( uVar20 == uVar25 ) && ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar24 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               if (( *(long*)( this + 0x248 ) == 0 ) || ( *(int*)( this + 0x26c ) == 0 )) goto LAB_001045c8;
               uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
               if (*(long*)param_2 == 0) {
                  uVar20 = StringName::get_empty_hash();
                  lVar28 = *(long*)( this + 0x250 );
               } else {
                  uVar20 = *(uint*)( *(long*)param_2 + 0x20 );
               }
               uVar26 = CONCAT44(0, uVar2);
               if (uVar20 == 0) {
                  uVar20 = 1;
               }
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar20 * lVar3;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar26;
               lVar24 = SUB168(auVar8 * auVar16, 8);
               uVar25 = *(uint*)( lVar28 + lVar24 * 4 );
               iVar23 = SUB164(auVar8 * auVar16, 8);
               if (uVar25 == 0) goto LAB_001045c8;
               uVar27 = 0;
               goto LAB_001044d9;
            }
            uVar27 = uVar27 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar23 + 1) * lVar3;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = uVar26;
            lVar24 = SUB168(auVar5 * auVar13, 8);
            uVar25 = *(uint*)( lVar28 + lVar24 * 4 );
            iVar23 = SUB164(auVar5 * auVar13, 8);
         } while ( ( uVar25 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar25 * lVar3,auVar14._8_8_ = 0,auVar14._0_8_ = uVar26,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar2 + iVar23 ) - SUB164(auVar6 * auVar14, 8)) * lVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar26,uVar27 <= SUB164(auVar7 * auVar15, 8) );
      }
   }
   StringName::StringName((StringName*)&local_60, param_1);
   local_58 = "SpriteFrames doesn\'t have animation \'%s\'.";
   local_68 = 0;
   local_50 = 0x29;
   String::parse_latin1((StrRange*)&local_68);
   vformat<StringName>((CowData<char32_t>*)&local_58, (StrRange*)&local_68, (StringName*)&local_60);
   _err_print_error("duplicate_animation", "scene/resources/sprite_frames.cpp", 0x6e, "Condition \"!animations.has(p_from)\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
      StringName::unref();
   }
   goto LAB_001045a0;
   while (true) {
      uVar27 = uVar27 + 1;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = ( ulong )(iVar23 + 1) * lVar3;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar26;
      lVar24 = SUB168(auVar9 * auVar17, 8);
      uVar25 = *(uint*)( lVar28 + lVar24 * 4 );
      iVar23 = SUB164(auVar9 * auVar17, 8);
      if (( uVar25 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar25 * lVar3,auVar18._8_8_ = 0,auVar18._0_8_ = uVar26,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar2 + iVar23 ) - SUB164(auVar10 * auVar18, 8)) * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar26,SUB164(auVar11 * auVar19, 8) < uVar27) break;
      LAB_001044d9:if (( uVar20 == uVar25 ) && ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar24 * 8 ) + 0x10 ) == *(long*)param_2 )) {
         StringName::StringName((StringName*)&local_60, param_2);
         local_58 = "Animation \'%s\' already exists.";
         local_68 = 0;
         local_50 = 0x1e;
         String::parse_latin1((StrRange*)&local_68);
         vformat<StringName>((CowData<char32_t>*)&local_58, (StrRange*)&local_68, (StringName*)&local_60);
         _err_print_error("duplicate_animation", "scene/resources/sprite_frames.cpp", 0x6f, "Condition \"animations.has(p_to)\" is true.", (CowData<char32_t>*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }
         goto LAB_001045a0;
      }
   };
   LAB_001045c8:puVar21 = (undefined8*)HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::operator []((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( this + 0x240 ), param_1);
   puVar22 = (undefined8*)HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::operator []((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( this + 0x240 ), param_2);
   uVar1 = *puVar21;
   lVar3 = puVar21[3];
   *(undefined1*)( puVar22 + 1 ) = *(undefined1*)( puVar21 + 1 );
   *puVar22 = uVar1;
   if (puVar22[3] != lVar3) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         CowData<SpriteFrames::Frame>::_ref((CowData<SpriteFrames::Frame>*)( puVar22 + 3 ), (CowData*)( puVar21 + 3 ));
         return;
      }
      goto LAB_0010470c;
   }
   LAB_001045a0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_0010470c:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* SpriteFrames::add_animation(StringName const&) */void SpriteFrames::add_animation(SpriteFrames *this, StringName *param_1) {
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
   undefined8 uVar11;
   uint uVar12;
   undefined8 *puVar13;
   int iVar14;
   long lVar15;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   String_conflict local_80[8];
   undefined8 local_78;
   CowData<char32_t> local_70[8];
   undefined *local_68;
   undefined8 local_60;
   undefined8 local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar18 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar12 = StringName::get_empty_hash();
      } else {
         uVar12 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar12 == 0) {
         uVar12 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar12 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( this + 0x250 ) + lVar15 * 4 );
      iVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar17 = 0;
         do {
            if (( uVar16 == uVar12 ) && ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar15 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               local_78 = 0;
               local_60 = 2;
               local_68 = &_LC126;
               String::parse_latin1((StrRange*)&local_78);
               lVar2 = *(long*)param_1;
               if (lVar2 == 0) {
                  local_68 = (undefined*)0x0;
               } else {
                  local_68 = (undefined*)0x0;
                  if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
                     if (*(long*)( lVar2 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( lVar2 + 0x10 ));
                     }
                  } else {
                     String::parse_latin1((String_conflict*)&local_68, *(char**)( lVar2 + 8 ));
                  }
               }
               operator+((char *)
               local_70,(String_conflict*)"SpriteFrames already has animation \'";
               String::operator +(local_80, (String_conflict*)local_70);
               _err_print_error("add_animation", "scene/resources/sprite_frames.cpp", 100, "Condition \"animations.has(p_anim)\" is true.", local_80, 0, 0);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
               CowData<char32_t>::_unref(local_70);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
               goto LAB_00104970;
            }
            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x250 ) + lVar15 * 4 );
            iVar14 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar16 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,uVar17 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   local_60 = CONCAT71(local_60._1_7_, 1);
   local_50[0] = 0;
   local_68 = (undefined*)_LC114;
   puVar13 = (undefined8*)HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::operator []((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( this + 0x240 ), param_1);
   uVar11 = _LC114;
   *(undefined1*)( puVar13 + 1 ) = 1;
   *puVar13 = uVar11;
   if (puVar13[3] != 0) {
      CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame>*)( puVar13 + 3 ));
      puVar13[3] = 0;
   }
   CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame>*)local_50);
   LAB_00104970:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::SpriteFrames() */void SpriteFrames::SpriteFrames(SpriteFrames *this) {
   long lVar1;
   Resource::Resource((Resource*)this);
   *(undefined***)this = &PTR__initialize_classv_0011a338;
   lVar1 = SceneStringNames::singleton;
   *(undefined8*)( this + 0x268 ) = 2;
   *(undefined1(*) [16])( this + 0x248 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 600 ) = (undefined1[16])0x0;
   add_animation(this, (StringName*)( lVar1 + 0x1f8 ));
   return;
}/* CowData<SpriteFrames::Frame>::_copy_on_write() [clone .isra.0] */void CowData<SpriteFrames::Frame>::_copy_on_write(CowData<SpriteFrames::Frame> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   long *plVar6;
   ulong uVar7;
   long *plVar8;
   long lVar9;
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
   if (lVar1 * 0x10 != 0) {
      uVar7 = lVar1 * 0x10 - 1;
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
      plVar6 = puVar5 + 2;
      if (lVar1 != 0) {
         do {
            plVar8 = (long*)( lVar9 * 0x10 + *(long*)this );
            *plVar6 = 0;
            lVar2 = *plVar8;
            if (lVar2 != 0) {
               *plVar6 = lVar2;
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  *plVar6 = 0;
               }
            }
            lVar9 = lVar9 + 1;
            *(int*)( plVar6 + 1 ) = (int)plVar8[1];
            plVar6 = plVar6 + 2;
         } while ( lVar1 != lVar9 );
      }
      _unref(this);
      *(undefined8**)this = puVar5 + 2;
      return;
   }
   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}/* SpriteFrames::set_frame(StringName const&, int, Ref<Texture2D> const&, float) */void SpriteFrames::set_frame(SpriteFrames *this, StringName *param_1, int param_2, Ref *param_3, float param_4) {
   uint uVar1;
   uint uVar2;
   long lVar3;
   Object *pOVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   code *pcVar13;
   char cVar14;
   uint uVar15;
   uint uVar16;
   long lVar17;
   Object *pOVar18;
   ulong uVar19;
   long lVar20;
   uint uVar21;
   undefined8 *puVar22;
   ulong uVar23;
   long in_FS_OFFSET;
   float fVar24;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar23 = CONCAT44(0, uVar1);
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar15 = StringName::get_empty_hash();
      } else {
         uVar15 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar15 == 0) {
         uVar15 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar15 * lVar3;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar23;
      lVar17 = SUB168(auVar5 * auVar9, 8);
      uVar21 = *(uint*)( *(long*)( this + 0x250 ) + lVar17 * 4 );
      uVar19 = (ulong)uVar21;
      uVar16 = SUB164(auVar5 * auVar9, 8);
      if (uVar21 != 0) {
         uVar21 = 0;
         while (( (uint)uVar19 != uVar15 || ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar17 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
            uVar21 = uVar21 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar16 + 1) * lVar3;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar23;
            lVar17 = SUB168(auVar6 * auVar10, 8);
            uVar2 = *(uint*)( *(long*)( this + 0x250 ) + lVar17 * 4 );
            uVar19 = (ulong)uVar2;
            uVar16 = SUB164(auVar6 * auVar10, 8);
            if (( uVar2 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar19 * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar23,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar1 + uVar16 ) - SUB164(auVar7 * auVar11, 8)) * lVar3,auVar12._8_8_ = 0,auVar12._0_8_ = uVar23,SUB164(auVar8 * auVar12, 8) < uVar21) goto LAB_00104dd8;
         };
         lVar3 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar16 * 8 );
         lVar17 = (long)param_2;
         if (lVar3 != 0) {
            if (param_2 < 0) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  _err_print_error("set_frame", "scene/resources/sprite_frames.cpp", 0x37, "Condition \"p_idx < 0\" is true.", 0, 0);
                  return;
               }
               goto LAB_00105020;
            }
            if (( *(long*)( lVar3 + 0x30 ) == 0 ) || ( *(long*)( *(long*)( lVar3 + 0x30 ) + -8 ) <= lVar17 )) goto LAB_00104eb0;
            fVar24 = _LC129;
            if (_LC129 <= param_4) {
               fVar24 = param_4;
            }
            pOVar18 = *(Object**)param_3;
            if (pOVar18 != (Object*)0x0) {
               cVar14 = RefCounted::reference();
               if (cVar14 == '\0') {
                  pOVar18 = (Object*)0x0;
               }
               if (*(long*)( lVar3 + 0x30 ) == 0) {
                  lVar20 = 0;
                  LAB_0010502b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar17, lVar20, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar13 = (code*)invalidInstructionException();
                  ( *pcVar13 )();
               }
               lVar20 = *(long*)( *(long*)( lVar3 + 0x30 ) + -8 );
               if (lVar20 <= lVar17) goto LAB_0010502b;
            }
            CowData<SpriteFrames::Frame>::_copy_on_write((CowData<SpriteFrames::Frame>*)( lVar3 + 0x30 ));
            puVar22 = (undefined8*)( lVar17 * 0x10 + *(long*)( lVar3 + 0x30 ) );
            pOVar4 = (Object*)*puVar22;
            if (pOVar4 == pOVar18) {
               LAB_00104f93:*(float*)( puVar22 + 1 ) = fVar24;
               Resource::emit_changed();
               if (pOVar18 == (Object*)0x0) goto LAB_00104eb0;
            } else {
               *puVar22 = pOVar18;
               if (pOVar18 == (Object*)0x0) {
                  if (pOVar4 == (Object*)0x0) {
                     *(float*)( puVar22 + 1 ) = fVar24;
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        LAB_00104f55:Resource::emit_changed();
                        return;
                     }
                  } else {
                     cVar14 = RefCounted::unreference();
                     if (cVar14 != '\0') {
                        LAB_00104f70:cVar14 = predelete_handler(pOVar4);
                        if (cVar14 != '\0') {
                           ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }
                        goto LAB_00104f93;
                     }
                     *(float*)( puVar22 + 1 ) = fVar24;
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00104f55;
                  }
                  goto LAB_00105020;
               }
               cVar14 = RefCounted::reference();
               if (cVar14 == '\0') {
                  *puVar22 = 0;
                  if (pOVar4 != (Object*)0x0) goto LAB_00104d55;
                  *(float*)( puVar22 + 1 ) = fVar24;
                  Resource::emit_changed();
               } else if (pOVar4 == (Object*)0x0) {
                  *(float*)( puVar22 + 1 ) = fVar24;
                  Resource::emit_changed();
               } else {
                  LAB_00104d55:cVar14 = RefCounted::unreference();
                  if (cVar14 != '\0') goto LAB_00104f70;
                  *(float*)( puVar22 + 1 ) = fVar24;
                  Resource::emit_changed();
               }
            }
            cVar14 = RefCounted::unreference();
            if (( cVar14 == '\0' ) || ( cVar14 = predelete_handler(pOVar18) ),cVar14 == '\0') goto LAB_00104eb0;
            ( **(code**)( *(long*)pOVar18 + 0x140 ) )(pOVar18);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar18, false);
               return;
            }
            goto LAB_00105020;
         }
      }
   }
   LAB_00104dd8:local_60 = 0;
   local_50 = 0x10;
   local_58 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   lVar3 = *(long*)param_1;
   if (lVar3 == 0) {
      local_70 = 0;
   } else {
      local_70 = 0;
      if (*(char**)( lVar3 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar3 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_70, *(char**)( lVar3 + 8 ));
      }
   }
   operator+((char *)
   local_68,(String_conflict*)"Animation \'";
   String::operator +((String_conflict*)&local_58, (String_conflict*)local_68);
   _err_print_error("set_frame", "scene/resources/sprite_frames.cpp", 0x36, "Condition \"!E\" is true.", (String_conflict*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00104eb0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00105020:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* SpriteFrames::clear_all() */void SpriteFrames::clear_all(SpriteFrames *this) {
   uint uVar1;
   void *pvVar2;
   long lVar3;
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      if (uVar1 != 0) {
         lVar3 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x250 ) + lVar3 ) != 0) {
               *(int*)( *(long*)( this + 0x250 ) + lVar3 ) = 0;
               pvVar2 = *(void**)( *(long*)( this + 0x248 ) + lVar3 * 2 );
               CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame>*)( (long)pvVar2 + 0x30 ));
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
                  StringName::unref();
               }
               Memory::free_static(pvVar2, false);
               *(undefined8*)( *(long*)( this + 0x248 ) + lVar3 * 2 ) = 0;
            }
            lVar3 = lVar3 + 4;
         } while ( lVar3 != (ulong)uVar1 << 2 );
      }
      *(undefined4*)( this + 0x26c ) = 0;
      *(undefined1(*) [16])( this + 600 ) = (undefined1[16])0x0;
   }
   add_animation(this, (StringName*)( SceneStringNames::singleton + 0x1f8 ));
   return;
}/* HashMap<StringName, SpriteFrames::Anim, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   SpriteFrames::Anim> > >::erase(StringName const&) [clone .isra.0] */ulong HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::erase(HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>> *this, StringName *param_1) {
   uint *puVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   uint uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   undefined8 uVar10;
   ulong uVar11;
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
   uint uVar32;
   ulong in_RAX;
   uint uVar33;
   uint uVar34;
   int iVar35;
   long lVar36;
   long *plVar37;
   ulong uVar38;
   uint uVar39;
   if (*(long*)( this + 8 ) == 0) {
      return in_RAX;
   }
   if (*(uint*)( this + 0x2c ) == 0) {
      return ( ulong ) * (uint*)( this + 0x2c );
   }
   uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar38 = CONCAT44(0, uVar6);
   lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   if (*(long*)param_1 == 0) {
      uVar32 = StringName::get_empty_hash();
   } else {
      uVar32 = *(uint*)( *(long*)param_1 + 0x20 );
   }
   lVar8 = *(long*)( this + 0x10 );
   if (uVar32 == 0) {
      uVar32 = 1;
   }
   auVar12._8_8_ = 0;
   auVar12._0_8_ = (ulong)uVar32 * lVar7;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar38;
   auVar12 = auVar12 * auVar22;
   lVar36 = auVar12._8_8_;
   uVar34 = *(uint*)( lVar8 + lVar36 * 4 );
   uVar33 = auVar12._8_4_;
   if (uVar34 == 0) {
      return auVar12._0_8_;
   }
   uVar39 = 0;
   while (( uVar32 != uVar34 || ( lVar9 = *(long*)( this + 8 ) * (long*)( *(long*)( lVar9 + lVar36 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
      uVar39 = uVar39 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(uVar33 + 1) * lVar7;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar38;
      auVar13 = auVar13 * auVar23;
      lVar36 = auVar13._8_8_;
      uVar34 = *(uint*)( lVar8 + lVar36 * 4 );
      uVar33 = auVar13._8_4_;
      if (uVar34 == 0) {
         return auVar13._0_8_;
      }
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar34 * lVar7;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar6 + uVar33 ) - SUB164(auVar14 * auVar24, 8)) * lVar7;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      if (SUB164(auVar15 * auVar25, 8) < uVar39) {
         return SUB168(auVar15 * auVar25, 0);
      }
   };
   lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar38 = CONCAT44(0, uVar6);
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(uVar33 + 1) * lVar7;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar38;
   lVar36 = SUB168(auVar16 * auVar26, 8);
   puVar1 = (uint*)( lVar8 + lVar36 * 4 );
   uVar34 = SUB164(auVar16 * auVar26, 8);
   uVar32 = *puVar1;
   if (uVar32 != 0) {
      auVar17._8_8_ = 0;
      auVar17._0_8_ = (ulong)uVar32 * lVar7;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(( uVar6 + uVar34 ) - SUB164(auVar17 * auVar27, 8)) * lVar7;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar38;
      iVar35 = SUB164(auVar18 * auVar28, 8);
      while (uVar39 = uVar34,iVar35 != 0) {
         puVar2 = (uint*)( lVar8 + (ulong)uVar33 * 4 );
         *puVar1 = *puVar2;
         puVar3 = (undefined8*)( lVar9 + lVar36 * 8 );
         *puVar2 = uVar32;
         puVar4 = (undefined8*)( lVar9 + (ulong)uVar33 * 8 );
         uVar10 = *puVar3;
         *puVar3 = *puVar4;
         *puVar4 = uVar10;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = ( ulong )(uVar39 + 1) * lVar7;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar38;
         lVar36 = SUB168(auVar21 * auVar31, 8);
         puVar1 = (uint*)( lVar8 + lVar36 * 4 );
         uVar34 = SUB164(auVar21 * auVar31, 8);
         uVar32 = *puVar1;
         uVar33 = uVar39;
         if (uVar32 == 0) break;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = (ulong)uVar32 * lVar7;
         auVar29._8_8_ = 0;
         auVar29._0_8_ = uVar38;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = ( ulong )(( uVar34 + uVar6 ) - SUB164(auVar19 * auVar29, 8)) * lVar7;
         auVar30._8_8_ = 0;
         auVar30._0_8_ = uVar38;
         iVar35 = SUB164(auVar20 * auVar30, 8);
      };
   }
   uVar38 = (ulong)uVar33;
   plVar5 = (long*)( lVar9 + uVar38 * 8 );
   *(undefined4*)( lVar8 + uVar38 * 4 ) = 0;
   plVar37 = (long*)*plVar5;
   if (*(long**)( this + 0x18 ) == plVar37) {
      *(long*)( this + 0x18 ) = *plVar37;
      plVar37 = (long*)*plVar5;
   }
   if (*(long**)( this + 0x20 ) == plVar37) {
      *(long*)( this + 0x20 ) = plVar37[1];
      plVar37 = (long*)*plVar5;
   }
   if ((long*)plVar37[1] != (long*)0x0) {
      *(long*)plVar37[1] = *plVar37;
      plVar37 = (long*)*plVar5;
   }
   if (*plVar37 != 0) {
      *(long*)( *plVar37 + 8 ) = plVar37[1];
      plVar37 = (long*)*plVar5;
   }
   CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame>*)( plVar37 + 6 ));
   if (( StringName::configured != '\0' ) && ( plVar37[2] != 0 )) {
      StringName::unref();
   }
   Memory::free_static(plVar37, false);
   uVar11 = *(ulong*)( this + 8 );
   *(undefined8*)( uVar11 + uVar38 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   return uVar11;
}/* SpriteFrames::rename_animation(StringName const&, StringName const&) */void SpriteFrames::rename_animation(SpriteFrames *this, StringName *param_1, StringName *param_2) {
   HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>> *this_00;
   uint uVar1;
   undefined1 auVar2[16];
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
   uint uVar18;
   undefined8 *puVar19;
   char *pcVar20;
   int iVar21;
   long lVar22;
   undefined8 uVar23;
   uint uVar24;
   ulong uVar25;
   uint uVar26;
   long lVar27;
   long lVar28;
   undefined1 uVar29;
   long in_FS_OFFSET;
   undefined8 local_80;
   String_conflict local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   long local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   this_00 = (HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( this + 0x240 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar18 = StringName::get_empty_hash();
      } else {
         uVar18 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      uVar25 = CONCAT44(0, uVar1);
      lVar27 = *(long*)( this + 0x250 );
      if (uVar18 == 0) {
         uVar18 = 1;
      }
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)uVar18 * lVar28;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar25;
      lVar22 = SUB168(auVar2 * auVar10, 8);
      uVar24 = *(uint*)( lVar27 + lVar22 * 4 );
      iVar21 = SUB164(auVar2 * auVar10, 8);
      if (uVar24 != 0) {
         uVar26 = 0;
         do {
            if (( uVar18 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar22 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               if (( *(long*)( this + 0x248 ) == 0 ) || ( *(int*)( this + 0x26c ) == 0 )) goto LAB_00105710;
               uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
               lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
               if (*(long*)param_2 == 0) {
                  uVar18 = StringName::get_empty_hash();
                  lVar27 = *(long*)( this + 0x250 );
               } else {
                  uVar18 = *(uint*)( *(long*)param_2 + 0x20 );
               }
               uVar25 = CONCAT44(0, uVar1);
               if (uVar18 == 0) {
                  uVar18 = 1;
               }
               auVar6._8_8_ = 0;
               auVar6._0_8_ = (ulong)uVar18 * lVar28;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar25;
               lVar22 = SUB168(auVar6 * auVar14, 8);
               uVar24 = *(uint*)( lVar27 + lVar22 * 4 );
               iVar21 = SUB164(auVar6 * auVar14, 8);
               if (uVar24 == 0) goto LAB_00105710;
               uVar26 = 0;
               goto LAB_00105651;
            }
            uVar26 = uVar26 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar21 + 1) * lVar28;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar25;
            lVar22 = SUB168(auVar3 * auVar11, 8);
            uVar24 = *(uint*)( lVar27 + lVar22 * 4 );
            iVar21 = SUB164(auVar3 * auVar11, 8);
         } while ( ( uVar24 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar24 * lVar28,auVar12._8_8_ = 0,auVar12._0_8_ = uVar25,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar21 ) - SUB164(auVar4 * auVar12, 8)) * lVar28,auVar13._8_8_ = 0,auVar13._0_8_ = uVar25,uVar26 <= SUB164(auVar5 * auVar13, 8) );
      }
   }
   local_70 = 0;
   local_60 = 2;
   local_68 = "\'.";
   String::parse_latin1((StrRange*)&local_70);
   lVar28 = *(long*)param_1;
   if (lVar28 == 0) {
      local_80 = 0;
   } else {
      local_80 = 0;
      if (*(char**)( lVar28 + 8 ) == (char*)0x0) {
         if (*(long*)( lVar28 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar28 + 0x10 ));
         }
      } else {
         String::parse_latin1((String_conflict*)&local_80, *(char**)( lVar28 + 8 ));
      }
   }
   operator+((char *)
   local_78,(String_conflict*)"SpriteFrames doesn\'t have animation \'";
   String::operator +((String_conflict*)&local_68, local_78);
   pcVar20 = "Condition \"!animations.has(p_prev)\" is true.";
   uVar23 = 0x78;
   LAB_00105870:_err_print_error("rename_animation", "scene/resources/sprite_frames.cpp", uVar23, pcVar20, &local_68, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_78);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   goto LAB_001057ac;
   while (true) {
      uVar26 = uVar26 + 1;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = ( ulong )(iVar21 + 1) * lVar28;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar25;
      lVar22 = SUB168(auVar7 * auVar15, 8);
      uVar24 = *(uint*)( lVar27 + lVar22 * 4 );
      iVar21 = SUB164(auVar7 * auVar15, 8);
      if (( uVar24 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar24 * lVar28,auVar16._8_8_ = 0,auVar16._0_8_ = uVar25,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar1 + iVar21 ) - SUB164(auVar8 * auVar16, 8)) * lVar28,auVar17._8_8_ = 0,auVar17._0_8_ = uVar25,SUB164(auVar9 * auVar17, 8) < uVar26) break;
      LAB_00105651:if (( uVar18 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar22 * 8 ) + 0x10 ) == *(long*)param_2 )) {
         local_70 = 0;
         local_60 = 0x11;
         local_68 = "\' already exists.";
         String::parse_latin1((StrRange*)&local_70);
         lVar28 = *(long*)param_2;
         if (lVar28 == 0) {
            local_80 = 0;
         } else {
            local_80 = 0;
            if (*(char**)( lVar28 + 8 ) == (char*)0x0) {
               if (*(long*)( lVar28 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( lVar28 + 0x10 ));
               }
            } else {
               String::parse_latin1((String_conflict*)&local_80, *(char**)( lVar28 + 8 ));
            }
         }
         operator+((char *)
         local_78,(String_conflict*)"Animation \'";
         String::operator +((String_conflict*)&local_68, local_78);
         pcVar20 = "Condition \"animations.has(p_next)\" is true.";
         uVar23 = 0x79;
         goto LAB_00105870;
      }
   };
   LAB_00105710:puVar19 = (undefined8*)HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::operator [](this_00, param_1);
   local_68 = (char*)*puVar19;
   local_50[0] = 0;
   local_60 = CONCAT71(local_60._1_7_, *(undefined1*)( puVar19 + 1 ));
   lVar28 = puVar19[3];
   uVar29 = *(undefined1*)( puVar19 + 1 );
   if (puVar19[3] != 0) {
      CowData<SpriteFrames::Frame>::_ref((CowData<SpriteFrames::Frame>*)local_50, (CowData*)( puVar19 + 3 ));
      lVar28 = local_50[0];
      uVar29 = (undefined1)local_60;
   }
   pcVar20 = local_68;
   HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::erase(this_00, param_1);
   puVar19 = (undefined8*)HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::operator [](this_00, param_2);
   *(undefined1*)( puVar19 + 1 ) = uVar29;
   *puVar19 = pcVar20;
   if (puVar19[3] != lVar28) {
      CowData<SpriteFrames::Frame>::_ref((CowData<SpriteFrames::Frame>*)( puVar19 + 3 ), (CowData*)local_50);
   }
   CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame>*)local_50);
   LAB_001057ac:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::remove_animation(StringName const&) */void SpriteFrames::remove_animation(SpriteFrames *this, StringName *param_1) {
   HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::erase((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( this + 0x240 ), param_1);
   return;
}/* SpriteFrames::clear(StringName const&) */void SpriteFrames::clear(SpriteFrames *this, StringName *param_1) {
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
   uint uVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   String_conflict local_60[8];
   undefined8 local_58;
   CowData<char32_t> local_50[8];
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      } else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar11 == 0) {
         uVar11 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         do {
            if (uVar11 == uVar14) {
               if (*(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1) {
                  lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar12 * 8 );
                  if (lVar2 != 0) {
                     if (( *(long*)( lVar2 + 0x30 ) != 0 ) && ( *(long*)( *(long*)( lVar2 + 0x30 ) + -8 ) != 0 )) {
                        CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame>*)( lVar2 + 0x30 ));
                     }
                     if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        Resource::emit_changed();
                        return;
                     }
                     goto LAB_00105bde;
                  }
                  break;
               }
            }
            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
            if (( uVar14 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,SUB164(auVar6 * auVar10, 8) < uVar15) break;
         } while ( true );
      }
   }
   local_58 = 0;
   local_40 = 0x10;
   local_48 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_58);
   lVar2 = *(long*)param_1;
   if (lVar2 == 0) {
      local_48 = (char*)0x0;
   } else {
      local_48 = (char*)0x0;
      if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)( lVar2 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_48, *(char**)( lVar2 + 8 ));
      }
   }
   operator+((char *)
   local_50,(String_conflict*)"Animation \'";
   String::operator +(local_60, (String_conflict*)local_50);
   _err_print_error("clear", "scene/resources/sprite_frames.cpp", 0x57, "Condition \"!E\" is true.", local_60, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   CowData<char32_t>::_unref(local_50);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00105bde:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* SpriteFrames::remove_frame(StringName const&, int) */void SpriteFrames::remove_frame(SpriteFrames *this, StringName *param_1, int param_2) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   Object *pOVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   char cVar13;
   uint uVar14;
   uint uVar15;
   long lVar16;
   long lVar17;
   uint uVar18;
   uint uVar19;
   long *plVar20;
   long lVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   String_conflict local_70[8];
   undefined8 local_68;
   CowData<char32_t> local_60[8];
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      lVar17 = (long)param_2;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar22 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar14 = StringName::get_empty_hash();
      } else {
         uVar14 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar14 == 0) {
         uVar14 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar14 * lVar2;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar22;
      lVar16 = SUB168(auVar5 * auVar9, 8);
      uVar18 = *(uint*)( *(long*)( this + 0x250 ) + lVar16 * 4 );
      uVar15 = SUB164(auVar5 * auVar9, 8);
      if (uVar18 != 0) {
         uVar19 = 0;
         while (( uVar18 != uVar14 || ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar16 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
            uVar19 = uVar19 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar15 + 1) * lVar2;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar22;
            lVar16 = SUB168(auVar6 * auVar10, 8);
            uVar18 = *(uint*)( *(long*)( this + 0x250 ) + lVar16 * 4 );
            uVar15 = SUB164(auVar6 * auVar10, 8);
            if (( uVar18 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar18 * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar22,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar1 + uVar15 ) - SUB164(auVar7 * auVar11, 8)) * lVar2,auVar12._8_8_ = 0,auVar12._0_8_ = uVar22,SUB164(auVar8 * auVar12, 8) < uVar19) goto LAB_00105e28;
         };
         lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar15 * 8 );
         if (lVar2 != 0) {
            lVar16 = *(long*)( lVar2 + 0x30 );
            if (lVar17 < 0) {
               if (lVar16 == 0) goto LAB_00105f80;
               lVar16 = *(long*)( lVar16 + -8 );
            } else if (lVar16 == 0) {
               LAB_00105f80:lVar16 = 0;
            } else {
               lVar16 = *(long*)( lVar16 + -8 );
               if (lVar17 < lVar16) {
                  CowData<SpriteFrames::Frame>::_copy_on_write((CowData<SpriteFrames::Frame>*)( lVar2 + 0x30 ));
                  lVar16 = *(long*)( lVar2 + 0x30 );
                  if (lVar16 == 0) {
                     lVar21 = -1;
                  } else {
                     lVar21 = *(long*)( lVar16 + -8 ) + -1;
                     if (lVar17 < lVar21) {
                        plVar20 = (long*)( lVar16 + lVar17 * 0x10 );
                        do {
                           pOVar3 = (Object*)plVar20[2];
                           pOVar4 = (Object*)*plVar20;
                           if (pOVar3 != pOVar4) {
                              *plVar20 = (long)pOVar3;
                              if (pOVar3 != (Object*)0x0) {
                                 cVar13 = RefCounted::reference();
                                 if (cVar13 == '\0') {
                                    *plVar20 = 0;
                                 }
                              }
                              if (pOVar4 != (Object*)0x0) {
                                 cVar13 = RefCounted::unreference();
                                 if (cVar13 != '\0') {
                                    cVar13 = predelete_handler(pOVar4);
                                    if (cVar13 != '\0') {
                                       ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                                       Memory::free_static(pOVar4, false);
                                    }
                                 }
                              }
                           }
                           lVar17 = lVar17 + 1;
                           *(int*)( plVar20 + 1 ) = (int)plVar20[3];
                           plVar20 = plVar20 + 2;
                        } while ( lVar21 != lVar17 );
                     }
                  }
                  CowData<SpriteFrames::Frame>::resize<false>((CowData<SpriteFrames::Frame>*)( lVar2 + 0x30 ), lVar21);
                  LAB_00105dfb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     Resource::emit_changed();
                     return;
                  }
                  goto LAB_00105fae;
               }
            }
            _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar17, lVar16, "p_index", "size()", "", false, false);
            goto LAB_00105dfb;
         }
      }
   }
   LAB_00105e28:local_68 = 0;
   local_50 = 0x10;
   local_58 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_68);
   lVar2 = *(long*)param_1;
   if (lVar2 == 0) {
      local_58 = (char*)0x0;
   } else {
      local_58 = (char*)0x0;
      if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( lVar2 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_58, *(char**)( lVar2 + 8 ));
      }
   }
   operator+((char *)
   local_60,(String_conflict*)"Animation \'";
   String::operator +(local_70, (String_conflict*)local_60);
   _err_print_error("remove_frame", "scene/resources/sprite_frames.cpp", 0x4e, "Condition \"!E\" is true.", local_70, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00105fae:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* Vector<SpriteFrames::Frame>::push_back(SpriteFrames::Frame) [clone .isra.0] */void Vector<SpriteFrames::Frame>::push_back(Vector<SpriteFrames::Frame> *this, long *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   long *plVar6;
   long lVar7;
   if (*(long*)( this + 8 ) == 0) {
      lVar7 = 1;
   } else {
      lVar7 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }
   iVar4 = CowData<SpriteFrames::Frame>::resize<false>((CowData<SpriteFrames::Frame>*)( this + 8 ), lVar7);
   if (iVar4 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar5 = -1;
         lVar7 = 0;
      } else {
         lVar7 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar5 = lVar7 + -1;
         if (-1 < lVar5) {
            CowData<SpriteFrames::Frame>::_copy_on_write((CowData<SpriteFrames::Frame>*)( this + 8 ));
            plVar6 = (long*)( lVar5 * 0x10 + *(long*)( this + 8 ) );
            pOVar1 = (Object*)*param_2;
            pOVar2 = (Object*)*plVar6;
            if (pOVar1 != pOVar2) {
               *plVar6 = (long)pOVar1;
               if (( pOVar1 != (Object*)0x0 ) && ( cVar3 = RefCounted::reference() ),cVar3 == '\0') {
                  *plVar6 = 0;
               }
               if (( ( pOVar2 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
               Memory::free_static(pOVar2, false);
            }
         }
         *(int*)( plVar6 + 1 ) = (int)param_2[1];
         return;
      }
   }
   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar7, "p_index", "size()", "", false, false);
   return;
}_err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);return;}/* SpriteFrames::_set_animations(Array const&) */void SpriteFrames::_set_animations(SpriteFrames *this, Array *param_1) {
   uint uVar1;
   void *pvVar2;
   char cVar3;
   int iVar4;
   int iVar5;
   Variant *pVVar6;
   Object *pOVar7;
   Object *pOVar8;
   double *pdVar9;
   long lVar10;
   long in_FS_OFFSET;
   float fVar11;
   float fVar12;
   int local_e4;
   Variant local_c0[8];
   Variant local_b8[8];
   Variant local_b0[8];
   Object *local_a8;
   float local_a0;
   double local_98;
   undefined1 local_90;
   Vector<SpriteFrames::Frame> local_88[8];
   double local_80;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      lVar10 = 0;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      if (uVar1 != 0) {
         do {
            if (*(int*)( *(long*)( this + 0x250 ) + lVar10 ) != 0) {
               *(int*)( *(long*)( this + 0x250 ) + lVar10 ) = 0;
               pvVar2 = *(void**)( *(long*)( this + 0x248 ) + lVar10 * 2 );
               CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame>*)( (long)pvVar2 + 0x30 ));
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
                  StringName::unref();
               }
               Memory::free_static(pvVar2, false);
               *(undefined8*)( *(long*)( this + 0x248 ) + lVar10 * 2 ) = 0;
            }
            lVar10 = lVar10 + 4;
         } while ( lVar10 != (ulong)uVar1 << 2 );
      }
      *(undefined4*)( this + 0x26c ) = 0;
      *(undefined1(*) [16])( this + 600 ) = (undefined1[16])0x0;
   }
   local_e4 = 0;
   do {
      iVar4 = Array::size();
      if (iVar4 <= local_e4) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         return;
      }
      Array::operator []((int)param_1);
      Variant::operator_cast_to_Dictionary(local_c0);
      Variant::Variant((Variant*)local_58, "name");
      cVar3 = Dictionary::has(local_c0);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      if (cVar3 == '\0') {
         _err_print_error("_set_animations", "scene/resources/sprite_frames.cpp", 200, "Condition \"!d.has(\"name\")\" is true. Continuing.", 0, 0);
         LAB_00106a45:Dictionary::~Dictionary((Dictionary*)local_c0);
      } else {
         Variant::Variant((Variant*)local_58, "speed");
         cVar3 = Dictionary::has(local_c0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (cVar3 == '\0') {
            _err_print_error("_set_animations", "scene/resources/sprite_frames.cpp", 0xc9, "Condition \"!d.has(\"speed\")\" is true. Continuing.", 0, 0);
            goto LAB_00106a45;
         }
         Variant::Variant((Variant*)local_58, "loop");
         cVar3 = Dictionary::has(local_c0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (cVar3 == '\0') {
            _err_print_error("_set_animations", "scene/resources/sprite_frames.cpp", 0xca, "Condition \"!d.has(\"loop\")\" is true. Continuing.", 0, 0);
            goto LAB_00106a45;
         }
         Variant::Variant((Variant*)local_58, "frames");
         cVar3 = Dictionary::has(local_c0);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (cVar3 == '\0') {
            _err_print_error("_set_animations", "scene/resources/sprite_frames.cpp", 0xcb, "Condition \"!d.has(\"frames\")\" is true. Continuing.", 0, 0);
            goto LAB_00106a45;
         }
         local_80 = 0.0;
         Variant::Variant((Variant*)local_58, "speed");
         pVVar6 = (Variant*)Dictionary::operator [](local_c0);
         local_98 = Variant::operator_cast_to_double(pVVar6);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         Variant::Variant((Variant*)local_58, "loop");
         pVVar6 = (Variant*)Dictionary::operator [](local_c0);
         local_90 = Variant::operator_cast_to_bool(pVVar6);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         Variant::Variant((Variant*)local_58, "frames");
         Dictionary::operator [](local_c0);
         Variant::operator_cast_to_Array(local_b8);
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         for (iVar4 = 0; iVar5 = Array::size(),iVar4 < iVar5; iVar4 = iVar4 + 1) {
            iVar5 = (int)local_b8;
            Array::operator [](iVar5);
            lVar10 = Variant::get_validated_object();
            if (( ( lVar10 == 0 ) || ( pOVar8 = (Object*)__dynamic_cast(lVar10, &Object::typeinfo, &Resource::typeinfo, 0) ),pOVar8 == (Object*)0x0 )) {
               Array::operator [](iVar5);
               Variant::operator_cast_to_Dictionary(local_b0);
               Variant::Variant((Variant*)local_58, "texture");
               cVar3 = Dictionary::has(local_b0);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (cVar3 == '\0') {
                  _err_print_error("_set_animations", "scene/resources/sprite_frames.cpp", 0xde, "Condition \"!f.has(\"texture\")\" is true. Continuing.", 0, 0);
               } else {
                  Variant::Variant((Variant*)local_58, "duration");
                  cVar3 = Dictionary::has(local_b0);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }
                  if (cVar3 == '\0') {
                     _err_print_error("_set_animations", "scene/resources/sprite_frames.cpp", 0xdf, "Condition \"!f.has(\"duration\")\" is true. Continuing.", 0, 0);
                  } else {
                     Variant::Variant((Variant*)local_78, "texture");
                     Dictionary::operator [](local_b0);
                     pOVar8 = (Object*)Variant::get_validated_object();
                     if (( ( pOVar8 != (Object*)0x0 ) && ( pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Texture2D::typeinfo, 0) ),pOVar8 != (Object*)0x0 )) {
                        pOVar8 = (Object*)0x0;
                     }
                     Variant::Variant((Variant*)local_58, "duration");
                     pVVar6 = (Variant*)Dictionary::operator [](local_b0);
                     fVar11 = Variant::operator_cast_to_float(pVVar6);
                     fVar12 = _LC129;
                     if (_LC129 <= fVar11) {
                        fVar12 = fVar11;
                     }
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }
                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }
                     local_a8 = (Object*)0x0;
                     if (pOVar8 == (Object*)0x0) {
                        local_a0 = fVar12;
                        Vector<SpriteFrames::Frame>::push_back(local_88, (Variant*)&local_a8);
                     } else {
                        local_a8 = pOVar8;
                        cVar3 = RefCounted::reference();
                        if (cVar3 == '\0') {
                           local_a8 = (Object*)0x0;
                           local_a0 = fVar12;
                           Vector<SpriteFrames::Frame>::push_back(local_88);
                           LAB_0010669d:cVar3 = RefCounted::unreference();
                        } else {
                           local_a0 = fVar12;
                           Vector<SpriteFrames::Frame>::push_back(local_88);
                           cVar3 = RefCounted::unreference();
                           if (( cVar3 == '\0' ) || ( cVar3 = predelete_handler(pOVar8) ),cVar3 == '\0') goto LAB_0010669d;
                           ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                           Memory::free_static(pOVar8, false);
                           cVar3 = RefCounted::unreference();
                        }
                        if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar8) ),cVar3 != '\0') {
                           ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                           Memory::free_static(pOVar8, false);
                        }
                     }
                  }
               }
               Dictionary::~Dictionary((Dictionary*)local_b0);
            } else {
               pOVar7 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &Texture2D::typeinfo, 0);
               if (( pOVar7 == (Object*)0x0 ) || ( cVar3 = RefCounted::reference() ),cVar3 == '\0') {
                  local_a8 = (Object*)0x0;
                  local_a0 = 1.0;
                  Vector<SpriteFrames::Frame>::push_back(local_88);
                  LAB_00106494:cVar3 = RefCounted::unreference();
               } else {
                  local_a8 = pOVar7;
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_a8 = (Object*)0x0;
                     local_a0 = 1.0;
                     Vector<SpriteFrames::Frame>::push_back(local_88);
                  } else {
                     local_a0 = 1.0;
                     Vector<SpriteFrames::Frame>::push_back(local_88);
                     cVar3 = RefCounted::unreference();
                     if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar7) ),cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                        Memory::free_static(pOVar7, false);
                     }
                  }
                  cVar3 = RefCounted::unreference();
                  if (( cVar3 == '\0' ) || ( cVar3 = predelete_handler(pOVar7) ),cVar3 == '\0') goto LAB_00106494;
                  ( **(code**)( *(long*)pOVar7 + 0x140 ) )(pOVar7);
                  Memory::free_static(pOVar7, false);
                  cVar3 = RefCounted::unreference();
               }
               if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar8) ),cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
                  Memory::free_static(pOVar8, false);
               }
            }
         }
         Variant::Variant((Variant*)local_58, "name");
         Dictionary::operator [](local_c0);
         Variant::operator_cast_to_StringName((Variant*)&local_a8);
         pdVar9 = (double*)HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>::operator []((HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>*)( this + 0x240 ), (StringName*)&local_a8);
         *(undefined1*)( pdVar9 + 1 ) = local_90;
         *pdVar9 = local_98;
         if (pdVar9[3] != local_80) {
            CowData<SpriteFrames::Frame>::_ref((CowData<SpriteFrames::Frame>*)( pdVar9 + 3 ), (CowData*)&local_80);
         }
         if (( StringName::configured != '\0' ) && ( local_a8 != (Object*)0x0 )) {
            StringName::unref();
         }
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }
         Array::~Array((Array*)local_b8);
         CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame>*)&local_80);
         Dictionary::~Dictionary((Dictionary*)local_c0);
      }
      local_e4 = local_e4 + 1;
   } while ( true );
}/* SpriteFrames::add_frame(StringName const&, Ref<Texture2D> const&, float, int) */void SpriteFrames::add_frame(SpriteFrames *this, StringName *param_1, Ref *param_2, float param_3, int param_4) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   Object *pOVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   char cVar13;
   int iVar14;
   uint uVar15;
   uint uVar16;
   long lVar17;
   long lVar18;
   long *plVar19;
   uint uVar20;
   uint uVar21;
   Object *pOVar22;
   long lVar23;
   undefined8 *puVar24;
   ulong uVar25;
   Object *pOVar26;
   long in_FS_OFFSET;
   float fVar27;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   Object *local_58;
   float local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      lVar23 = (long)param_4;
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar25 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar15 = StringName::get_empty_hash();
      } else {
         uVar15 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar15 == 0) {
         uVar15 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar15 * lVar2;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar25;
      lVar17 = SUB168(auVar5 * auVar9, 8);
      uVar20 = *(uint*)( *(long*)( this + 0x250 ) + lVar17 * 4 );
      uVar16 = SUB164(auVar5 * auVar9, 8);
      if (uVar20 != 0) {
         uVar21 = 0;
         LAB_00106c89:if (( uVar20 != uVar15 ) || ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar17 * 8 ) + 0x10 ) != *(long*)param_1 )) goto LAB_00106c40;
         lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar16 * 8 );
         if (lVar2 == 0) goto LAB_00106d58;
         fVar27 = _LC129;
         if (_LC129 <= param_3) {
            fVar27 = param_3;
         }
         pOVar22 = *(Object**)param_2;
         if (pOVar22 == (Object*)0x0) {
            if (-1 < param_4) {
               lVar17 = *(long*)( lVar2 + 0x30 );
               joined_r0x00107130:if (( lVar17 != 0 ) && ( lVar23 < *(long*)( lVar17 + -8 ) )) {
                  pOVar22 = (Object*)0x0;
                  pOVar26 = (Object*)0x0;
                  goto LAB_00106e5f;
               }
            }
            LAB_00106d1a:local_58 = (Object*)0x0;
            local_50 = fVar27;
            Vector<SpriteFrames::Frame>::push_back((Vector<SpriteFrames::Frame>*)( lVar2 + 0x28 ), &local_58);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Resource::emit_changed();
               return;
            }
            goto LAB_001072fe;
         }
         cVar13 = RefCounted::reference();
         if (cVar13 == '\0') {
            if (-1 < param_4) {
               lVar17 = *(long*)( lVar2 + 0x30 );
               goto joined_r0x00107130;
            }
            goto LAB_00106d1a;
         }
         if (( ( param_4 < 0 ) || ( *(long*)( lVar2 + 0x30 ) == 0 ) ) || ( *(long*)( *(long*)( lVar2 + 0x30 ) + -8 ) <= lVar23 )) {
            local_58 = pOVar22;
            cVar13 = RefCounted::reference();
            if (cVar13 == '\0') {
               local_58 = (Object*)0x0;
               local_50 = fVar27;
               Vector<SpriteFrames::Frame>::push_back((Vector<SpriteFrames::Frame>*)( lVar2 + 0x28 ));
               Resource::emit_changed();
               goto LAB_00106f9f;
            }
            local_50 = fVar27;
            Vector<SpriteFrames::Frame>::push_back((Vector<SpriteFrames::Frame>*)( lVar2 + 0x28 ));
            cVar13 = RefCounted::unreference();
            if (( cVar13 != '\0' ) && ( cVar13 = predelete_handler(pOVar22) ),cVar13 != '\0') {
               ( **(code**)( *(long*)pOVar22 + 0x140 ) )(pOVar22);
               Memory::free_static(pOVar22, false);
            }
            Resource::emit_changed();
            cVar13 = RefCounted::unreference();
            if (cVar13 != '\0') goto LAB_00107015;
            goto LAB_00106fb0;
         }
         cVar13 = RefCounted::reference();
         if (cVar13 == '\0') {
            lVar17 = *(long*)( lVar2 + 0x30 );
            pOVar26 = (Object*)0x0;
         } else {
            lVar17 = *(long*)( lVar2 + 0x30 );
            pOVar26 = pOVar22;
         }
         LAB_00106e5f:if (lVar17 == 0) {
            lVar17 = 1;
            lVar18 = 0;
         } else {
            lVar18 = *(long*)( lVar17 + -8 );
            lVar17 = lVar18 + 1;
         }
         if (lVar17 <= lVar23) {
            _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, lVar23, lVar17, "p_pos", "new_size", "", false, false);
            goto LAB_001070de;
         }
         iVar14 = CowData<SpriteFrames::Frame>::resize<false>((CowData<SpriteFrames::Frame>*)( lVar2 + 0x30 ), lVar17);
         if (iVar14 != 0) {
            _err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
            goto LAB_001070de;
         }
         CowData<SpriteFrames::Frame>::_copy_on_write((CowData<SpriteFrames::Frame>*)( lVar2 + 0x30 ));
         lVar2 = *(long*)( lVar2 + 0x30 );
         plVar19 = (long*)( lVar18 * 0x10 + lVar2 );
         if (lVar23 < lVar18) {
            do plVar19 = plVar19 + -2; while ( lVar18 != lVar23 );
         }
         puVar24 = (undefined8*)( lVar23 * 0x10 + lVar2 );
         pOVar3 = (Object*)*puVar24;
         if (pOVar26 == pOVar3) {
            LAB_001070d2:*(float*)( puVar24 + 1 ) = fVar27;
            LAB_001070de:if (pOVar26 != (Object*)0x0) {
               LAB_001070f1:cVar13 = RefCounted::unreference();
               if (( cVar13 != '\0' ) && ( cVar13 = predelete_handler(pOVar26) ),cVar13 != '\0') {
                  ( **(code**)( *(long*)pOVar26 + 0x140 ) )(pOVar26);
                  Memory::free_static(pOVar26, false);
               }
            }
         } else {
            *puVar24 = pOVar26;
            if (pOVar26 != (Object*)0x0) {
               cVar13 = RefCounted::reference();
               if (cVar13 == '\0') {
                  *puVar24 = 0;
               }
               if (( pOVar3 != (Object*)0x0 ) && ( cVar13 = RefCounted::unreference() ),cVar13 != '\0') {
                  LAB_001070af:cVar13 = predelete_handler(pOVar3);
                  if (cVar13 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }
                  goto LAB_001070d2;
               }
               *(float*)( puVar24 + 1 ) = fVar27;
               goto LAB_001070f1;
            }
            if (pOVar3 == (Object*)0x0) {
               *(float*)( puVar24 + 1 ) = fVar27;
            } else {
               cVar13 = RefCounted::unreference();
               if (cVar13 != '\0') goto LAB_001070af;
               *(float*)( puVar24 + 1 ) = fVar27;
            }
         }
         Resource::emit_changed();
         if (pOVar22 != (Object*)0x0) {
            LAB_00106f9f:cVar13 = RefCounted::unreference();
            if (cVar13 == '\0') goto LAB_00106fb0;
            LAB_00107015:cVar13 = predelete_handler(pOVar22);
            if (cVar13 != '\0') {
               ( **(code**)( *(long*)pOVar22 + 0x140 ) )(pOVar22);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  Memory::free_static(pOVar22, false);
                  return;
               }
               goto LAB_001072fe;
            }
         }
         goto LAB_00106fb0;
      }
   }
   LAB_00106d58:local_60 = 0;
   String::parse_latin1((String_conflict*)&local_60, "\' doesn\'t exist.");
   lVar2 = *(long*)param_1;
   if (lVar2 == 0) {
      local_70 = 0;
   } else {
      local_70 = 0;
      if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
         if (*(long*)( lVar2 + 0x10 ) != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar2 + 0x10 ));
         }
      } else {
         String::parse_latin1((String_conflict*)&local_70, *(char**)( lVar2 + 8 ));
      }
   }
   operator+((char *)
   local_68,(String_conflict*)"Animation \'";
   String::operator +((String_conflict*)&local_58, (String_conflict*)local_68);
   _err_print_error("add_frame", "scene/resources/sprite_frames.cpp", 0x25, "Condition \"!E\" is true.", (String_conflict*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_00106fb0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_001072fe:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_00106c40:uVar21 = uVar21 + 1;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = ( ulong )(uVar16 + 1) * lVar2;
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar25;
   lVar17 = SUB168(auVar6 * auVar10, 8);
   uVar20 = *(uint*)( *(long*)( this + 0x250 ) + lVar17 * 4 );
   uVar16 = SUB164(auVar6 * auVar10, 8);
   if (( uVar20 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar20 * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar25,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar1 + uVar16 ) - SUB164(auVar7 * auVar11, 8)) * lVar2,auVar12._8_8_ = 0,auVar12._0_8_ = uVar25,SUB164(auVar8 * auVar12, 8) < uVar21) goto LAB_00106d58;
   goto LAB_00106c89;
}/* DefaultAllocator::alloc(unsigned long) */void DefaultAllocator::alloc(ulong param_1) {
   Memory::alloc_static(param_1, false);
   return;
}/* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   if (( configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
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
}/* MethodBind::is_valid() const */undefined8 MethodBind::is_valid(void) {
   return 1;
}/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}/* Resource::set_last_modified_time(unsigned long) */void Resource::set_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x198 ) = param_1;
   return;
}/* Resource::set_import_last_modified_time(unsigned long) */void Resource::set_import_last_modified_time(Resource *this, ulong param_1) {
   *(ulong*)( this + 0x1a0 ) = param_1;
   return;
}/* SpriteFrames::is_class_ptr(void*) const */uint SpriteFrames::is_class_ptr(SpriteFrames *this, void *param_1) {
   return (uint)CONCAT71(0x11ab, (undefined4*)param_1 == &Resource::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ab, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ab, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11ab, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
}/* SpriteFrames::_getv(StringName const&, Variant&) const */undefined8 SpriteFrames::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* SpriteFrames::_setv(StringName const&, Variant const&) */undefined8 SpriteFrames::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* SpriteFrames::_validate_propertyv(PropertyInfo&) const */void SpriteFrames::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* SpriteFrames::_property_can_revertv(StringName const&) const */undefined8 SpriteFrames::_property_can_revertv(StringName *param_1) {
   return 0;
}/* SpriteFrames::_property_get_revertv(StringName const&, Variant&) const */undefined8 SpriteFrames::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* SpriteFrames::_notificationv(int, bool) */void SpriteFrames::_notificationv(int param_1, bool param_2) {
   return;
}/* SpriteFrames::get_frame_texture(StringName const&, int) const */StringName *SpriteFrames::get_frame_texture(StringName *param_1, int param_2) {
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
   int in_ECX;
   uint uVar13;
   long *in_RDX;
   long lVar14;
   undefined4 in_register_00000034;
   long lVar15;
   uint uVar16;
   uint uVar17;
   ulong uVar18;
   long in_FS_OFFSET;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   lVar15 = CONCAT44(in_register_00000034, param_2);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( lVar15 + 0x248 ) != 0 ) && ( *(int*)( lVar15 + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar15 + 0x268 ) * 4 );
      uVar18 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar15 + 0x268 ) * 8 );
      if (*in_RDX == 0) {
         uVar12 = StringName::get_empty_hash();
      } else {
         uVar12 = *(uint*)( *in_RDX + 0x20 );
      }
      if (uVar12 == 0) {
         uVar12 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar12 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar16 = *(uint*)( *(long*)( lVar15 + 0x250 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar16 != 0) {
         uVar17 = 0;
         while (( uVar16 != uVar12 || ( *(long*)( *(long*)( *(long*)( lVar15 + 0x248 ) + lVar14 * 8 ) + 0x10 ) != *in_RDX ) )) {
            uVar17 = uVar17 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar16 = *(uint*)( *(long*)( lVar15 + 0x250 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
            if (( uVar16 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar16 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,SUB164(auVar6 * auVar10, 8) < uVar17) goto LAB_001076d0;
         };
         lVar15 = *(long*)( *(long*)( lVar15 + 0x248 ) + (ulong)uVar13 * 8 );
         if (lVar15 != 0) {
            if (in_ECX < 0) {
               _err_print_error("get_frame_texture", "scene/resources/sprite_frames.h", 0x55, "Condition \"p_idx < 0\" is true. Returning: Ref<Texture2D>()", 0, 0);
               *(undefined8*)param_1 = 0;
               goto LAB_00107698;
            }
            lVar15 = *(long*)( lVar15 + 0x30 );
            if (( lVar15 != 0 ) && ( (long)in_ECX < *(long*)( lVar15 + -8 ) )) {
               *(undefined8*)param_1 = 0;
               lVar15 = *(long*)( lVar15 + (long)in_ECX * 0x10 );
               if (lVar15 == 0) goto LAB_00107698;
               *(long*)param_1 = lVar15;
               cVar11 = RefCounted::reference();
               if (cVar11 != '\0') goto LAB_00107698;
            }
            *(undefined8*)param_1 = 0;
            goto LAB_00107698;
         }
      }
   }
   LAB_001076d0:local_60 = 0;
   local_50 = 0x10;
   local_58 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   lVar15 = *in_RDX;
   if (lVar15 == 0) {
      local_70 = 0;
   } else {
      local_70 = 0;
      if (*(char**)( lVar15 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar15 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_70, *(char**)( lVar15 + 8 ));
      }
   }
   operator+((char *)
   local_68,(String_conflict*)"Animation \'";
   String::operator +((String_conflict*)&local_58, (String_conflict*)local_68);
   _err_print_error("get_frame_texture", "scene/resources/sprite_frames.h", 0x54, "Condition \"!E\" is true. Returning: Ref<Texture2D>()", (String_conflict*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   *(undefined8*)param_1 = 0;
   LAB_00107698:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::get_frame_duration(StringName const&, int) const */void SpriteFrames::get_frame_duration(SpriteFrames *this, StringName *param_1, int param_2) {
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
   uint uVar12;
   long lVar13;
   uint uVar14;
   uint uVar15;
   ulong uVar16;
   long in_FS_OFFSET;
   undefined4 uVar17;
   undefined8 local_70;
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x248 ) != 0 ) && ( *(int*)( this + 0x26c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x268 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x268 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar11 = StringName::get_empty_hash();
      } else {
         uVar11 = *(uint*)( *(long*)param_1 + 0x20 );
      }
      if (uVar11 == 0) {
         uVar11 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar11 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar13 = SUB168(auVar3 * auVar7, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar15 = 0;
         do {
            if (( uVar14 == uVar11 ) && ( *(long*)( *(long*)( *(long*)( this + 0x248 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar2 = *(long*)( *(long*)( this + 0x248 ) + (ulong)uVar12 * 8 );
               if (lVar2 != 0) {
                  if (param_2 < 0) {
                     _err_print_error("get_frame_duration", "scene/resources/sprite_frames.h", 0x60, "Condition \"p_idx < 0\" is true. Returning: 1.0", 0, 0);
                     uVar17 = _LC6;
                  } else {
                     lVar2 = *(long*)( lVar2 + 0x30 );
                     uVar17 = _LC6;
                     if (( lVar2 != 0 ) && ( (long)param_2 < *(long*)( lVar2 + -8 ) )) {
                        uVar17 = *(undefined4*)( lVar2 + 8 + (long)param_2 * 0x10 );
                     }
                  }
                  goto LAB_001079f3;
               }
               break;
            }
            uVar15 = uVar15 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x250 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar15 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   local_60 = 0;
   local_50 = 0x10;
   local_58 = "\' doesn\'t exist.";
   String::parse_latin1((StrRange*)&local_60);
   lVar2 = *(long*)param_1;
   if (lVar2 == 0) {
      local_70 = 0;
   } else {
      local_70 = 0;
      if (*(char**)( lVar2 + 8 ) == (char*)0x0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)( lVar2 + 0x10 ));
      } else {
         String::parse_latin1((String_conflict*)&local_70, *(char**)( lVar2 + 8 ));
      }
   }
   operator+((char *)
   local_68,(String_conflict*)"Animation \'";
   String::operator +((String_conflict*)&local_58, (String_conflict*)local_68);
   _err_print_error("get_frame_duration", "scene/resources/sprite_frames.h", 0x5f, "Condition \"!E\" is true. Returning: 1.0", (String_conflict*)&local_58, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   CowData<char32_t>::_unref(local_68);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   uVar17 = _LC6;
   LAB_001079f3:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail(uVar17);
   }
   return;
}/* MethodBindTRC<Array>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Array>::_gen_argument_type(int param_1) {
   return 0x1c;
}/* MethodBindTRC<Array>::get_argument_meta(int) const */undefined8 MethodBindTRC<Array>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<Array const&>::_gen_argument_type(int) const */byte MethodBindT<Array_const&>::_gen_argument_type(MethodBindT<Array_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x1c;
}/* MethodBindT<Array const&>::get_argument_meta(int) const */undefined8 MethodBindT<Array_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<>::_gen_argument_type(int) const */undefined8 MethodBindT<>::_gen_argument_type(int param_1) {
   return 0;
}/* MethodBindT<>::_gen_argument_type_info(int) const */undefined8 MethodBindT<>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   *(undefined4*)CONCAT44(in_register_0000003c, param_1) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x18 ) = 0;
   *(undefined8*)( CONCAT44(in_register_0000003c, param_1) + 0x20 ) = 0;
   *(undefined4*)( CONCAT44(in_register_0000003c, param_1) + 0x28 ) = 6;
   *(undefined1(*) [16])( CONCAT44(in_register_0000003c, param_1) + 8 ) = (undefined1[16])0x0;
   return CONCAT44(in_register_0000003c, param_1);
}/* MethodBindT<>::get_argument_meta(int) const */undefined8 MethodBindT<>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<float, StringName const&, int>::_gen_argument_type(int) const */char MethodBindTRC<float,StringName_const&,int>::_gen_argument_type(MethodBindTRC<float,StringName_const&,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\x03';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x13U ) + 2;
   }
   return cVar1;
}/* MethodBindTRC<float, StringName const&, int>::get_argument_meta(int) const */char MethodBindTRC<float,StringName_const&,int>::get_argument_meta(MethodBindTRC<float,StringName_const&,int> *this, int param_1) {
   if (-1 < param_1) {
      return ( param_1 == 1 ) * '\x03';
   }
   return '\t';
}/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::_gen_argument_type(int) const */char MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::_gen_argument_type(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\x18';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x13U ) + 2;
   }
   return cVar1;
}/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::get_argument_meta(int) const */char MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::get_argument_meta(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this, int param_1) {
   return ( param_1 == 1 ) * '\x03';
}/* MethodBindTRC<int, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<int,StringName_const&>::_gen_argument_type(MethodBindTRC<int,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x13U ) + 2;
}/* MethodBindTRC<int, StringName const&>::get_argument_meta(int) const */uint MethodBindTRC<int,StringName_const&>::get_argument_meta(MethodBindTRC<int,StringName_const&> *this, int param_1) {
   return param_1 >> 0x1f & 3;
}/* MethodBindT<StringName const&, int>::_gen_argument_type(int) const */char MethodBindT<StringName_const&,int>::_gen_argument_type(MethodBindT<StringName_const&,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x13U ) + 2;
   }
   return cVar1;
}/* MethodBindT<StringName const&, int>::get_argument_meta(int) const */char MethodBindT<StringName_const&,int>::get_argument_meta(MethodBindT<StringName_const&,int> *this, int param_1) {
   return ( param_1 == 1 ) * '\x03';
}/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::get_argument_meta(int) const
    */char MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::get_argument_meta(MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float> *this, int param_1) {
   char cVar1;
   cVar1 = '\x03';
   if (param_1 != 1) {
      cVar1 = ( param_1 == 3 ) * '\t';
   }
   return cVar1;
}/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::get_argument_meta(int) const
    */char MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::get_argument_meta(MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\t';
   if (param_1 != 2) {
      cVar1 = ( param_1 == 3 ) * '\x03';
   }
   return cVar1;
}/* MethodBindT<StringName const&, bool>::_gen_argument_type(int) const */char MethodBindT<StringName_const&,bool>::_gen_argument_type(MethodBindT<StringName_const&,bool> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x14U ) + 1;
   }
   return cVar1;
}/* MethodBindT<StringName const&, bool>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&,bool>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<double, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<double,StringName_const&>::_gen_argument_type(MethodBindTRC<double,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x12U ) + 3;
}/* MethodBindTRC<double, StringName const&>::get_argument_meta(int) const */uint MethodBindTRC<double,StringName_const&>::get_argument_meta(MethodBindTRC<double,StringName_const&> *this, int param_1) {
   return param_1 >> 0x1f & 10;
}/* MethodBindT<StringName const&, double>::_gen_argument_type(int) const */char MethodBindT<StringName_const&,double>::_gen_argument_type(MethodBindT<StringName_const&,double> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if ((uint)param_1 < 2) {
      cVar1 = ( -(param_1 == 0) & 0x12U ) + 3;
   }
   return cVar1;
}/* MethodBindT<StringName const&, double>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&,double>::get_argument_meta(MethodBindT<StringName_const&,double> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 10;
   if (param_1 != 1) {
      uVar1 = 0;
   }
   return uVar1;
}/* MethodBindTRC<Vector<String>>::_gen_argument_type(int) const */undefined8 MethodBindTRC<Vector<String>>::_gen_argument_type(int param_1) {
   return 0x22;
}/* MethodBindTRC<Vector<String>>::get_argument_meta(int) const */undefined8 MethodBindTRC<Vector<String>>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&,StringName_const&> *this, int param_1) {
   return -((uint)param_1 < 2) & 0x15;
}/* MethodBindT<StringName const&, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindTRC<bool, StringName const&>::_gen_argument_type(int) const */char MethodBindTRC<bool,StringName_const&>::_gen_argument_type(MethodBindTRC<bool,StringName_const&> *this, int param_1) {
   return ( -(param_1 == 0) & 0x14U ) + 1;
}/* MethodBindTRC<bool, StringName const&>::get_argument_meta(int) const */undefined8 MethodBindTRC<bool,StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<StringName const&>::_gen_argument_type(int) const */byte MethodBindT<StringName_const&>::_gen_argument_type(MethodBindT<StringName_const&> *this, int param_1) {
   return -(param_1 == 0) & 0x15;
}/* MethodBindT<StringName const&>::get_argument_meta(int) const */undefined8 MethodBindT<StringName_const&>::get_argument_meta(int param_1) {
   return 0;
}/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a5d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&,StringName_const&>::~MethodBindT(MethodBindT<StringName_const&,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a5d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a630;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */void MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a630;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&, double>::~MethodBindT() */void MethodBindT<StringName_const&,double>::~MethodBindT(MethodBindT<StringName_const&,double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a690;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&, double>::~MethodBindT() */void MethodBindT<StringName_const&,double>::~MethodBindT(MethodBindT<StringName_const&,double> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a690;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<double, StringName const&>::~MethodBindTRC() */void MethodBindTRC<double,StringName_const&>::~MethodBindTRC(MethodBindTRC<double,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a6f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<double, StringName const&>::~MethodBindTRC() */void MethodBindTRC<double,StringName_const&>::~MethodBindTRC(MethodBindTRC<double,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a6f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&, bool>::~MethodBindT() */void MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a750;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&, bool>::~MethodBindT() */void MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a750;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a570;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */void MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a570;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::~MethodBindT(MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a7b0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::~MethodBindT() */void MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::~MethodBindT(MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a7b0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::~MethodBindT() */void MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::~MethodBindT(MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a810;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::~MethodBindT() */void MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::~MethodBindT(MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a810;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&, int>::~MethodBindT() */void MethodBindT<StringName_const&,int>::~MethodBindT(MethodBindT<StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a870;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&, int>::~MethodBindT() */void MethodBindT<StringName_const&,int>::~MethodBindT(MethodBindT<StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a870;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<int, StringName const&>::~MethodBindTRC() */void MethodBindTRC<int,StringName_const&>::~MethodBindTRC(MethodBindTRC<int,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a8d0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<int, StringName const&>::~MethodBindTRC() */void MethodBindTRC<int,StringName_const&>::~MethodBindTRC(MethodBindTRC<int,StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a8d0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a930;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::~MethodBindTRC() */void MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::~MethodBindTRC(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a930;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<float, StringName const&, int>::~MethodBindTRC() */void MethodBindTRC<float,StringName_const&,int>::~MethodBindTRC(MethodBindTRC<float,StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a990;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<float, StringName const&, int>::~MethodBindTRC() */void MethodBindTRC<float,StringName_const&,int>::~MethodBindTRC(MethodBindTRC<float,StringName_const&,int> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a990;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a510;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<StringName const&>::~MethodBindT() */void MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a510;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a9f0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a9f0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<Array const&>::~MethodBindT() */void MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011aa50;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<Array const&>::~MethodBindT() */void MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011aa50;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<Array>::~MethodBindTRC() */void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011aab0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<Array>::~MethodBindTRC() */void MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011aab0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::_gen_argument_type(int) const
    */char MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::_gen_argument_type(MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int> *this, int param_1) {
   char cVar1;
   cVar1 = '\0';
   if (( ( (uint)param_1 < 4 ) && ( cVar1 = '\x15' ),param_1 != 0 )) {
      cVar1 = ( param_1 == 2 ) + '\x02';
   }
   return cVar1;
}/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::_gen_argument_type(int) const
    */undefined8 MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::_gen_argument_type(MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float> *this, int param_1) {
   undefined8 uVar1;
   uVar1 = 0;
   if (( ( ( (uint)param_1 < 4 ) && ( uVar1 = 0x15 ),param_1 != 0 ) ) && ( uVar1 = param_1 != 1 )) {
      uVar1 = 0x18;
   }
   return uVar1;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
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
               pbVar15 = &_LC10;
               LAB_00108484:if (pbVar14 == (byte*)0x0) {
                  lVar6 = 0;
                  uVar4 = **(uint**)( lVar13 + 0x10 );
                  if (uVar4 != 0 || uVar8 != 0) {
                     do {
                        if (uVar8 == 0) goto LAB_00108430;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_00108430;
                        if (uVar4 < uVar8) break;
                        uVar8 = (uint)(char)pbVar15[lVar6 + 1];
                        uVar4 = ( *(uint**)( lVar13 + 0x10 ) )[lVar6 + 1];
                        lVar6 = lVar6 + 1;
                     } while ( uVar8 != 0 || uVar4 != 0 );
                  }
               } else {
                  uVar4 = (uint)(char)*pbVar14;
                  bVar5 = (byte)uVar8 | *pbVar14;
                  LAB_001084d6:if (bVar5 != 0) {
                     lVar13 = 1;
                     do {
                        if (uVar8 == 0) goto LAB_00108430;
                        if (uVar4 == 0) break;
                        if (uVar8 < uVar4) goto LAB_00108430;
                        if (uVar4 < uVar8) break;
                        pbVar1 = pbVar14 + lVar13;
                        uVar4 = (uint)(char)*pbVar1;
                        pbVar2 = pbVar15 + lVar13;
                        uVar8 = (uint)(char)*pbVar2;
                        lVar13 = lVar13 + 1;
                     } while ( *pbVar1 != 0 || *pbVar2 != 0 );
                  }
               }
            }
         } else {
            pbVar15 = *(byte**)( lVar6 + 8 );
            if (lVar13 == 0) {
               if (pbVar15 != (byte*)0x0) {
                  bVar5 = *pbVar15;
                  uVar8 = (uint)(char)bVar5;
                  pbVar14 = &_LC10;
                  uVar4 = 0;
                  goto LAB_001084d6;
               }
               uVar8 = 0;
               pbVar14 = &_LC10;
            } else {
               pbVar14 = *(byte**)( lVar13 + 8 );
               if (pbVar15 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar15;
                  goto LAB_00108484;
               }
               if (pbVar14 == (byte*)0x0) {
                  lVar7 = 4;
                  uVar8 = **(uint**)( lVar13 + 0x10 );
                  uVar4 = **(uint**)( lVar6 + 0x10 );
                  if (uVar8 != 0 || uVar4 != 0) {
                     do {
                        if (uVar4 == 0) goto LAB_00108430;
                        if (uVar8 == 0) break;
                        if (uVar4 < uVar8) goto LAB_00108430;
                        if (uVar8 < uVar4) break;
                        uVar4 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                        uVar8 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar7 );
                        lVar7 = lVar7 + 4;
                     } while ( uVar4 != 0 || uVar8 != 0 );
                  }
                  goto LAB_00108458;
               }
               uVar8 = (uint)(char)*pbVar14;
            }
            lVar13 = 0;
            uVar4 = **(uint**)( lVar6 + 0x10 );
            if (uVar4 != 0 || uVar8 != 0) {
               do {
                  if (uVar4 == 0) goto LAB_00108430;
                  if (uVar8 == 0) break;
                  if (uVar4 < uVar8) goto LAB_00108430;
                  if (uVar8 < uVar4) break;
                  uVar4 = ( *(uint**)( lVar6 + 0x10 ) )[lVar13 + 1];
                  uVar8 = (uint)(char)pbVar14[lVar13 + 1];
                  lVar13 = lVar13 + 1;
               } while ( uVar4 != 0 || uVar8 != 0 );
            }
         }
         LAB_00108458:ppEVar9 = param_5 + param_1 + lVar12;
         lVar10 = lVar12;
         pEVar11 = pEVar3;
         lVar12 = lVar12 + 1;
         LAB_00108430:lVar12 = lVar12 * 2;
         param_5[param_1 + lVar16] = pEVar11;
         lVar16 = lVar10;
      } while ( lVar12 < param_3 );
      if (lVar12 == param_3) goto LAB_0010885d;
   } else {
      ppEVar9 = param_5 + param_2 + param_1;
      if (lVar12 != param_3) goto LAB_0010865a;
      LAB_0010885d:lVar10 = lVar12 + -1;
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
            pbVar14 = &_LC10;
            if (pbVar15 != (byte*)0x0) {
               bVar5 = *pbVar15;
               uVar8 = (uint)(char)bVar5;
               uVar4 = 0;
               pbVar14 = &_LC10;
               goto LAB_001086da;
            }
            LAB_0010873a:uVar4 = **(uint**)( lVar12 + 0x10 );
            if (uVar4 == 0 && uVar8 == 0) goto LAB_00108650;
            lVar6 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_00108650;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_00108650;
               uVar4 = ( *(uint**)( lVar12 + 0x10 ) )[lVar6 + 1];
               uVar8 = (uint)(char)pbVar14[lVar6 + 1];
               lVar6 = lVar6 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_00108650;
            };
         } else {
            pbVar14 = *(byte**)( lVar16 + 8 );
            if (pbVar15 == (byte*)0x0) {
               if (pbVar14 != (byte*)0x0) {
                  uVar8 = (uint)(char)*pbVar14;
                  goto LAB_0010873a;
               }
               uVar8 = **(uint**)( lVar16 + 0x10 );
               uVar4 = **(uint**)( lVar12 + 0x10 );
               if (uVar8 == 0 && uVar4 == 0) goto LAB_00108650;
               lVar6 = 4;
               while (uVar4 != 0) {
                  if (uVar8 == 0) goto LAB_00108650;
                  if (uVar4 < uVar8) break;
                  if (uVar8 < uVar4) goto LAB_00108650;
                  uVar4 = *(uint*)( (long)*(uint**)( lVar12 + 0x10 ) + lVar6 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar16 + 0x10 ) + lVar6 );
                  lVar6 = lVar6 + 4;
                  if (uVar4 == 0 && uVar8 == 0) {
                     param_5[param_1 + lVar10] = param_4;
                     return;
                  }
               };
            } else {
               uVar4 = (uint)(char)*pbVar15;
               uVar8 = uVar4;
               if (pbVar14 == (byte*)0x0) goto LAB_00108685;
               LAB_001086d4:uVar4 = (uint)(char)*pbVar14;
               bVar5 = (byte)uVar8 | *pbVar14;
               LAB_001086da:if (bVar5 == 0) goto LAB_00108650;
               lVar12 = 1;
               while (uVar8 != 0) {
                  if (uVar4 == 0) goto LAB_00108650;
                  if (uVar8 < uVar4) break;
                  if (uVar4 < uVar8) goto LAB_00108650;
                  pbVar1 = pbVar14 + lVar12;
                  uVar4 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar15 + lVar12;
                  uVar8 = (uint)(char)*pbVar2;
                  lVar12 = lVar12 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00108650;
               };
            }
         }
         LAB_00108620:param_5[lVar10 + param_1] = pEVar11;
         lVar12 = ( lVar13 + -1 ) - ( lVar13 + -1 >> 0x3f );
         lVar10 = lVar13;
         if (lVar13 <= param_2) {
            param_5[param_1 + lVar13] = param_4;
            return;
         }
      };
      if (lVar16 != 0) {
         pbVar14 = *(byte**)( lVar16 + 8 );
         uVar4 = 0;
         uVar8 = 0;
         pbVar15 = &_LC10;
         if (pbVar14 != (byte*)0x0) goto LAB_001086d4;
         LAB_00108685:uVar8 = **(uint**)( lVar16 + 0x10 );
         if (uVar8 != 0 || uVar4 != 0) {
            lVar12 = 0;
            while (uVar4 != 0) {
               if (uVar8 == 0) goto LAB_00108650;
               if (uVar4 < uVar8) break;
               if (uVar8 < uVar4) goto LAB_00108650;
               uVar4 = (uint)(char)pbVar15[lVar12 + 1];
               uVar8 = ( *(uint**)( lVar16 + 0x10 ) )[lVar12 + 1];
               lVar12 = lVar12 + 1;
               if (uVar4 == 0 && uVar8 == 0) goto LAB_00108650;
            };
            goto LAB_00108620;
         }
      }
      LAB_00108650:ppEVar9 = param_5 + lVar10 + param_1;
   }
   LAB_0010865a:*ppEVar9 = param_4;
   return;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
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
   LAB_00108920:pEVar10 = param_3[param_1 + -1];
   lVar5 = *(long*)pEVar10;
   if (lVar3 != 0) {
      pbVar9 = *(byte**)( lVar3 + 8 );
      do {
         if (lVar5 == 0) {
            if (pbVar9 != (byte*)0x0) goto code_r0x001089d1;
            uVar7 = 0;
            pbVar11 = &_LC10;
            LAB_0010895c:uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar8 == 0 && uVar7 == 0) goto LAB_00108aeb;
            lVar5 = 0;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_00108aeb;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_00108aeb;
               uVar8 = ( *(uint**)( lVar3 + 0x10 ) )[lVar5 + 1];
               uVar7 = (uint)(char)pbVar11[lVar5 + 1];
               lVar5 = lVar5 + 1;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_00108aeb;
            };
         } else {
            pbVar11 = *(byte**)( lVar5 + 8 );
            if (pbVar9 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar9;
               goto LAB_001089fc;
            }
            if (pbVar11 != (byte*)0x0) {
               uVar7 = (uint)(char)*pbVar11;
               goto LAB_0010895c;
            }
            uVar7 = **(uint**)( lVar5 + 0x10 );
            uVar8 = **(uint**)( lVar3 + 0x10 );
            if (uVar7 == 0 && uVar8 == 0) goto LAB_00108aeb;
            lVar6 = 4;
            while (uVar8 != 0) {
               if (uVar7 == 0) goto LAB_00108aeb;
               if (uVar8 < uVar7) break;
               if (uVar7 < uVar8) goto LAB_00108aeb;
               uVar8 = *(uint*)( (long)*(uint**)( lVar3 + 0x10 ) + lVar6 );
               uVar7 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar6 );
               lVar6 = lVar6 + 4;
               if (uVar8 == 0 && uVar7 == 0) goto LAB_00108aeb;
            };
         }
         if (param_1 == 1) goto LAB_00108ac0;
         param_3[param_1] = pEVar10;
         pEVar10 = param_3[param_1 + -2];
         lVar5 = *(long*)pEVar10;
         param_1 = param_1 + -1;
      } while ( true );
   }
   if (lVar5 != 0) {
      pbVar11 = *(byte**)( lVar5 + 8 );
      uVar7 = 0;
      pbVar9 = &_LC10;
      LAB_001089fc:if (pbVar11 != (byte*)0x0) {
         uVar8 = (uint)(char)*pbVar11;
         bVar4 = (byte)uVar7 | *pbVar11;
         goto LAB_00108a6f;
      }
      uVar8 = **(uint**)( lVar5 + 0x10 );
      if (uVar8 != 0 || uVar7 != 0) {
         lVar6 = 0;
         while (uVar7 != 0) {
            if (uVar8 == 0) goto LAB_00108aeb;
            if (uVar7 < uVar8) break;
            if (uVar8 < uVar7) goto LAB_00108aeb;
            uVar7 = (uint)(char)pbVar9[lVar6 + 1];
            uVar8 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
            lVar6 = lVar6 + 1;
            if (uVar7 == 0 && uVar8 == 0) goto LAB_00108aeb;
         };
         goto LAB_00108a50;
      }
   }
   goto LAB_00108aeb;
   code_r0x001089d1:bVar4 = *pbVar9;
   uVar7 = (uint)(char)bVar4;
   pbVar11 = &_LC10;
   uVar8 = 0;
   LAB_00108a6f:if (bVar4 == 0) goto LAB_00108aeb;
   lVar5 = 1;
   while (uVar7 != 0) {
      if (uVar8 == 0) goto LAB_00108aeb;
      if (uVar7 < uVar8) break;
      if (uVar8 < uVar7) goto LAB_00108aeb;
      pbVar1 = pbVar9 + lVar5;
      uVar7 = (uint)(char)*pbVar1;
      pbVar2 = pbVar11 + lVar5;
      uVar8 = (uint)(char)*pbVar2;
      lVar5 = lVar5 + 1;
      if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00108aeb;
   };
   LAB_00108a50:if (param_1 == 1) {
      LAB_00108ac0:_err_print_error("unguarded_linear_insert", "./core/templates/sort_array.h", 0xff, "bad comparison function; sorting will be broken", 0, 0);
      param_1 = 1;
      LAB_00108aeb:param_3[param_1] = param_2;
      return;
   }
   param_3[param_1] = pEVar10;
   param_1 = param_1 + -1;
   goto LAB_00108920;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
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
      if (lVar5 == 0) goto LAB_00108cc0;
      pbVar10 = *(byte**)( lVar5 + 8 );
      uVar8 = 0;
      pbVar11 = &_LC10;
      LAB_00108c74:if (pbVar10 == (byte*)0x0) {
         uVar9 = **(uint**)( lVar5 + 0x10 );
         if (uVar8 != 0 || uVar9 != 0) {
            lVar6 = 0;
            do {
               if (uVar8 == 0) goto LAB_00108c10;
               if (uVar9 == 0) break;
               if (uVar8 < uVar9) goto LAB_00108c10;
               if (uVar9 < uVar8) break;
               uVar8 = (uint)(char)pbVar11[lVar6 + 1];
               uVar9 = ( *(uint**)( lVar5 + 0x10 ) )[lVar6 + 1];
               lVar6 = lVar6 + 1;
            } while ( uVar8 != 0 || uVar9 != 0 );
         }
         goto LAB_00108cc0;
      }
      uVar9 = (uint)(char)*pbVar10;
      bVar4 = (byte)uVar8 | *pbVar10;
      LAB_00108ce7:if (bVar4 != 0) {
         lVar6 = 1;
         do {
            if (uVar8 == 0) goto LAB_00108c10;
            if (uVar9 == 0) break;
            if (uVar8 < uVar9) goto LAB_00108c10;
            if (uVar9 < uVar8) break;
            pbVar2 = pbVar11 + lVar6;
            uVar8 = (uint)(char)*pbVar2;
            pbVar1 = pbVar10 + lVar6;
            uVar9 = (uint)(char)*pbVar1;
            lVar6 = lVar6 + 1;
         } while ( *pbVar2 != 0 || *pbVar1 != 0 );
      }
   } else {
      pbVar11 = *(byte**)( lVar6 + 8 );
      if (lVar5 == 0) {
         if (pbVar11 != (byte*)0x0) {
            bVar4 = *pbVar11;
            uVar8 = (uint)(char)bVar4;
            pbVar10 = &_LC10;
            uVar9 = 0;
            goto LAB_00108ce7;
         }
         uVar8 = 0;
         pbVar10 = &_LC10;
      } else {
         pbVar10 = *(byte**)( lVar5 + 8 );
         if (pbVar11 != (byte*)0x0) {
            uVar8 = (uint)(char)*pbVar11;
            goto LAB_00108c74;
         }
         if (pbVar10 == (byte*)0x0) {
            uVar8 = **(uint**)( lVar5 + 0x10 );
            uVar9 = **(uint**)( lVar6 + 0x10 );
            if (uVar8 != 0 || uVar9 != 0) {
               lVar7 = 4;
               do {
                  if (uVar9 == 0) goto LAB_00108c10;
                  if (uVar8 == 0) break;
                  if (uVar9 < uVar8) goto LAB_00108c10;
                  if (uVar8 < uVar9) break;
                  uVar9 = *(uint*)( (long)*(uint**)( lVar6 + 0x10 ) + lVar7 );
                  uVar8 = *(uint*)( (long)*(uint**)( lVar5 + 0x10 ) + lVar7 );
                  lVar7 = lVar7 + 4;
               } while ( uVar9 != 0 || uVar8 != 0 );
            }
            goto LAB_00108cc0;
         }
         uVar8 = (uint)(char)*pbVar10;
      }
      uVar9 = **(uint**)( lVar6 + 0x10 );
      if (uVar8 != 0 || uVar9 != 0) {
         lVar5 = 0;
         do {
            if (uVar9 == 0) {
               LAB_00108c10:if (param_1 < param_2) {
                  memmove(param_3 + param_1 + 1, __src, ( param_2 - param_1 ) * 8);
               }
               *__src = pEVar3;
               return;
            }
            if (uVar8 == 0) break;
            if (uVar9 < uVar8) goto LAB_00108c10;
            if (uVar8 < uVar9) break;
            uVar9 = ( *(uint**)( lVar6 + 0x10 ) )[lVar5 + 1];
            uVar8 = (uint)(char)pbVar10[lVar5 + 1];
            lVar5 = lVar5 + 1;
         } while ( uVar9 != 0 || uVar8 != 0 );
      }
   }
   LAB_00108cc0:unguarded_linear_insert(param_2, pEVar3, param_3);
   return;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
   DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,
   true>::median_of_3(List<StringName, DefaultAllocator>::Element* const&, List<StringName,
   DefaultAllocator>::Element* const&, List<StringName, DefaultAllocator>::Element* const&) const
   [clone .isra.0] */Element **SortArray<List<StringName,DefaultAllocator>::Element*,List < StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>byte *pbVar2byte bVar3uint uVar4uint uVar5uint uVar6uint *puVar7long lVar8long lVar9uint *puVar10byte bVar11uint uVar12long lVar13long lVar14byte *pbVar15byte *pbVar16byte *pbVar17lVar8 = *(long*)*param_1;lVar9 = *(long*)*param_3;lVar13 = *(long*)*param_2;if (lVar8 == 0) {
   pbVar15 = &_LC10;
   pbVar16 = &_LC10;
   if (lVar13 == 0) {
      LAB_001096d0:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         LAB_00108f9e:uVar5 = (uint)(char)*pbVar16;
         uVar4 = uVar5;
         goto LAB_00108fa4;
      }
      uVar5 = (uint)(char)*pbVar16;
      uVar6 = 0;
      uVar12 = 0;
      pbVar17 = &_LC10;
      if (*pbVar16 == 0) goto LAB_00109299;
      LAB_001090f2:lVar8 = 1;
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
      } while ( *pbVar2 != 0 || *pbVar1 != 0 );
   } else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      uVar4 = 0;
      pbVar16 = &_LC10;
      LAB_00108f22:if (pbVar15 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar15;
         bVar11 = *pbVar15 | (byte)uVar4;
         LAB_00109010:if (bVar11 != 0) {
            lVar14 = 1;
            do {
               if (uVar4 == 0) goto joined_r0x00109058;
               if (uVar12 == 0) break;
               if (uVar4 < uVar12) goto joined_r0x00109058;
               if (uVar12 < uVar4) break;
               pbVar17 = pbVar16 + lVar14;
               uVar4 = (uint)(char)*pbVar17;
               pbVar2 = pbVar15 + lVar14;
               uVar12 = (uint)(char)*pbVar2;
               lVar14 = lVar14 + 1;
            } while ( *pbVar17 != 0 || *pbVar2 != 0 );
            goto LAB_00108f88;
         }
         goto LAB_001096d0;
      }
      uVar12 = **(uint**)( lVar13 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar4 == 0) goto joined_r0x00109058;
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto joined_r0x00109058;
            if (uVar12 < uVar4) break;
            uVar4 = (uint)(char)pbVar16[lVar14 + 1];
            uVar12 = ( *(uint**)( lVar13 + 0x10 ) )[lVar14 + 1];
            lVar14 = lVar14 + 1;
         } while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_00108f88;
      }
      if (lVar9 == 0) goto LAB_001092f1;
      pbVar17 = *(byte**)( lVar9 + 8 );
      uVar5 = 0;
      LAB_00108fa4:if (pbVar17 != (byte*)0x0) {
         uVar6 = (uint)(char)*pbVar17;
         bVar11 = (byte)uVar4 | *pbVar17;
         goto LAB_001090e9;
      }
      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar10;
      uVar6 = uVar4 | uVar5;
      if (uVar6 == 0) goto LAB_001095d6;
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
      } while ( uVar5 != 0 || uVar4 != 0 );
   }
   LAB_00109280:if (pbVar15 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar10 = *(uint**)( lVar9 + 0x10 );
         LAB_001095df:uVar4 = *puVar10;
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
         };
         return param_2;
      }
      uVar12 = (uint)(char)*pbVar17;
      LAB_00109466:uVar4 = **(uint**)( lVar13 + 0x10 );
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
         } while ( uVar4 != 0 || uVar12 != 0 );
      }
      return param_2;
   }
   if (pbVar17 == (byte*)0x0) {
      puVar10 = *(uint**)( lVar9 + 0x10 );
      uVar6 = *puVar10;
      LAB_001094c8:uVar4 = (uint)(char)*pbVar15;
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
      };
      return param_2;
   }
   uVar12 = (uint)(char)*pbVar17;
   uVar5 = uVar12;
} else {
   pbVar16 = *(byte**)( lVar8 + 8 );
   if (lVar13 == 0) {
      if (pbVar16 != (byte*)0x0) {
         bVar11 = *pbVar16;
         uVar4 = (uint)(char)bVar11;
         uVar12 = 0;
         pbVar15 = &_LC10;
         goto LAB_00109010;
      }
      uVar4 = 0;
      pbVar15 = &_LC10;
      LAB_00108e02:uVar12 = **(uint**)( lVar8 + 0x10 );
      if (uVar4 != 0 || uVar12 != 0) {
         lVar14 = 0;
         do {
            if (uVar12 == 0) goto joined_r0x00109058;
            if (uVar4 == 0) break;
            if (uVar12 < uVar4) goto joined_r0x00109058;
            if (uVar4 < uVar12) break;
            uVar12 = ( *(uint**)( lVar8 + 0x10 ) )[lVar14 + 1];
            uVar4 = (uint)(char)pbVar15[lVar14 + 1];
            lVar14 = lVar14 + 1;
         } while ( uVar12 != 0 || uVar4 != 0 );
      }
      LAB_00108f88:if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         if (pbVar16 != (byte*)0x0) goto LAB_00108f9e;
         puVar7 = *(uint**)( lVar8 + 0x10 );
         uVar4 = *puVar7;
         LAB_00109388:if (pbVar17 != (byte*)0x0) {
            uVar12 = (uint)(char)*pbVar17;
            uVar6 = uVar4 | uVar12;
            goto LAB_00109643;
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
            } while ( uVar4 != 0 || uVar12 != 0 );
            goto LAB_00109280;
         }
         LAB_001095d6:if (pbVar15 != (byte*)0x0) goto LAB_001094c8;
         goto LAB_001095df;
      }
      if (pbVar16 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar8 + 0x10 );
         goto LAB_001096a1;
      }
      LAB_001092f1:bVar11 = *pbVar16;
      uVar5 = (uint)(char)bVar11;
      uVar6 = 0;
      pbVar17 = &_LC10;
      LAB_001090e9:uVar12 = uVar6;
      if (bVar11 != 0) goto LAB_001090f2;
   } else {
      pbVar15 = *(byte**)( lVar13 + 8 );
      if (pbVar16 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar16;
         goto LAB_00108f22;
      }
      if (pbVar15 != (byte*)0x0) {
         uVar4 = (uint)(char)*pbVar15;
         goto LAB_00108e02;
      }
      puVar7 = *(uint**)( lVar8 + 0x10 );
      uVar12 = **(uint**)( lVar13 + 0x10 );
      uVar4 = *puVar7;
      if (uVar12 != 0 || uVar4 != 0) {
         lVar14 = 4;
         do {
            if (uVar4 == 0) {
               LAB_001091f8:pbVar16 = (byte*)0x0;
               goto joined_r0x00109058;
            }
            if (uVar12 == 0) break;
            if (uVar4 < uVar12) goto LAB_001091f8;
            if (uVar12 < uVar4) break;
            uVar4 = *(uint*)( (long)puVar7 + lVar14 );
            uVar12 = *(uint*)( (long)*(uint**)( lVar13 + 0x10 ) + lVar14 );
            lVar14 = lVar14 + 4;
         } while ( uVar4 != 0 || uVar12 != 0 );
         pbVar16 = (byte*)0x0;
         goto LAB_00108f88;
      }
      if (lVar9 != 0) {
         pbVar17 = *(byte**)( lVar9 + 8 );
         uVar4 = 0;
         goto LAB_00109388;
      }
      LAB_001096a1:uVar4 = *puVar7;
      uVar12 = 0;
      pbVar17 = &_LC10;
      uVar6 = uVar4;
      LAB_00109643:if (uVar6 != 0) {
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
         } while ( uVar4 != 0 || uVar12 != 0 );
         goto LAB_00109280;
      }
   }
   uVar5 = uVar12;
   if (pbVar15 == (byte*)0x0) goto LAB_00109466;
}LAB_00109299:bVar11 = *pbVar15;if (bVar11 == 0 && (char)uVar5 == '\0') {
   return param_2;
}lVar8 = 1;while (true) {
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
};return param_2;joined_r0x00109058:if (lVar9 == 0) {
   uVar4 = 0;
   uVar12 = 0;
   bVar11 = 0;
   pbVar17 = &_LC10;
   if (pbVar15 != (byte*)0x0) goto LAB_00109147;
   LAB_00109074:uVar6 = **(uint**)( lVar13 + 0x10 );
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
      } while ( uVar6 != 0 || uVar12 != 0 );
      goto LAB_00109210;
   }
   LAB_001096de:bVar11 = (byte)uVar12;
   if (pbVar16 == (byte*)0x0) goto LAB_001093fe;
} else {
   pbVar17 = *(byte**)( lVar9 + 8 );
   if (pbVar15 == (byte*)0x0) {
      if (pbVar17 != (byte*)0x0) {
         uVar12 = (uint)(char)*pbVar17;
         goto LAB_00109074;
      }
      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar4 = *puVar7;
      uVar6 = **(uint**)( lVar13 + 0x10 );
      uVar12 = uVar4 | uVar6;
      if (uVar12 == 0) goto LAB_00109579;
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
      } while ( uVar6 != 0 || uVar4 != 0 );
   } else {
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
            } while ( uVar6 != 0 || uVar4 != 0 );
            goto LAB_00109210;
         }
         LAB_00109579:if (pbVar16 == (byte*)0x0) goto LAB_0010957e;
         goto LAB_00109526;
      }
      bVar11 = *pbVar17;
      uVar4 = (uint)(char)bVar11;
      LAB_00109147:bVar3 = *pbVar15;
      uVar12 = ( uint )(bVar11 | bVar3);
      if (( bVar11 | bVar3 ) == 0) goto LAB_001096de;
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
      } while ( bVar3 != 0 || *pbVar2 != 0 );
   }
   LAB_00109210:if (pbVar16 == (byte*)0x0) {
      if (pbVar17 == (byte*)0x0) {
         puVar7 = *(uint**)( lVar9 + 0x10 );
         LAB_0010957e:uVar4 = *puVar7;
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
         };
         return param_1;
      }
      uVar4 = (uint)(char)*pbVar17;
      LAB_001093fe:uVar12 = **(uint**)( lVar8 + 0x10 );
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
      };
      return param_1;
   }
   if (pbVar17 == (byte*)0x0) {
      puVar7 = *(uint**)( lVar9 + 0x10 );
      uVar12 = *puVar7;
      LAB_00109526:uVar4 = (uint)(char)*pbVar16;
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
      };
      return param_1;
   }
   bVar11 = *pbVar17;
   uVar4 = (uint)(char)bVar11;
}bVar3 = *pbVar16;if (bVar3 == 0 && bVar11 == 0) {
   return param_1;
}lVar8 = 1;while (true) {
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
};return param_1;}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
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
   joined_r0x00109787:if (lVar7 == 0) {
      if (lVar14 == 0) goto LAB_001098b8;
      pbVar13 = *(byte**)( lVar14 + 8 );
      uVar9 = 0;
      pbVar12 = &_LC10;
      LAB_0010983e:if (pbVar13 == (byte*)0x0) {
         uVar5 = **(uint**)( lVar14 + 0x10 );
         if (uVar5 != 0 || uVar9 != 0) {
            lVar7 = 0;
            do {
               if (uVar9 == 0) goto LAB_00109808;
               if (uVar5 == 0) break;
               if (uVar9 < uVar5) goto LAB_00109808;
               if (uVar5 < uVar9) break;
               uVar9 = (uint)(char)pbVar12[lVar7 + 1];
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               lVar7 = lVar7 + 1;
            } while ( uVar9 != 0 || uVar5 != 0 );
         }
         goto LAB_001098b8;
      }
      uVar5 = (uint)(char)*pbVar13;
      bVar6 = (byte)uVar9 | *pbVar13;
      LAB_00109b05:if (bVar6 != 0) {
         lVar7 = 1;
         do {
            if (uVar9 == 0) goto LAB_00109808;
            if (uVar5 == 0) break;
            if (uVar9 < uVar5) goto LAB_00109808;
            if (uVar5 < uVar9) break;
            pbVar1 = pbVar12 + lVar7;
            uVar9 = (uint)(char)*pbVar1;
            pbVar2 = pbVar13 + lVar7;
            uVar5 = (uint)(char)*pbVar2;
            lVar7 = lVar7 + 1;
         } while ( *pbVar1 != 0 || *pbVar2 != 0 );
      }
   } else {
      pbVar12 = *(byte**)( lVar7 + 8 );
      if (lVar14 == 0) {
         if (pbVar12 != (byte*)0x0) {
            bVar6 = *pbVar12;
            uVar9 = (uint)(char)bVar6;
            uVar5 = 0;
            pbVar13 = &_LC10;
            goto LAB_00109b05;
         }
         uVar9 = 0;
         pbVar13 = &_LC10;
      } else {
         pbVar13 = *(byte**)( lVar14 + 8 );
         if (pbVar12 != (byte*)0x0) {
            uVar9 = (uint)(char)*pbVar12;
            goto LAB_0010983e;
         }
         if (pbVar13 == (byte*)0x0) {
            uVar9 = **(uint**)( lVar14 + 0x10 );
            uVar5 = **(uint**)( lVar7 + 0x10 );
            if (uVar9 != 0 || uVar5 != 0) {
               lVar8 = 4;
               do {
                  if (uVar5 == 0) goto LAB_00109808;
                  if (uVar9 == 0) break;
                  if (uVar5 < uVar9) goto LAB_00109808;
                  if (uVar9 < uVar5) break;
                  uVar5 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                  uVar9 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                  lVar8 = lVar8 + 4;
               } while ( uVar5 != 0 || uVar9 != 0 );
            }
            goto LAB_001098b8;
         }
         uVar9 = (uint)(char)*pbVar13;
      }
      uVar5 = **(uint**)( lVar7 + 0x10 );
      if (uVar5 != 0 || uVar9 != 0) {
         lVar8 = 0;
         do {
            if (uVar5 == 0) goto LAB_00109808;
            if (uVar9 == 0) break;
            if (uVar5 < uVar9) goto LAB_00109808;
            if (uVar9 < uVar5) break;
            uVar5 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
            uVar9 = (uint)(char)pbVar13[lVar8 + 1];
            lVar8 = lVar8 + 1;
         } while ( uVar5 != 0 || uVar9 != 0 );
      }
   }
   goto LAB_001098b8;
   LAB_00109808:if (param_2 + -1 == lVar11) {
      _err_print_error("partitioner", "./core/templates/sort_array.h", 0xb2, "bad comparison function; sorting will be broken", 0, 0);
      lVar14 = *(long*)param_3;
      LAB_001098b8:lVar10 = lVar10 + -1;
      lVar7 = *(long*)param_4[lVar10];
      ppEVar4 = param_4 + lVar10;
      do {
         if (lVar14 == 0) {
            if (lVar7 == 0) goto LAB_00109ab8;
            pbVar13 = *(byte**)( lVar7 + 8 );
            uVar5 = 0;
            pbVar12 = &_LC10;
            uVar9 = 0;
            if (pbVar13 == (byte*)0x0) {
               LAB_0010998c:uVar9 = **(uint**)( lVar7 + 0x10 );
               if (uVar9 == 0 && uVar5 == 0) goto LAB_00109ab8;
               lVar8 = 0;
               while (uVar5 != 0) {
                  if (uVar9 == 0) goto LAB_00109ab8;
                  if (uVar5 < uVar9) break;
                  if (uVar9 < uVar5) goto LAB_00109ab8;
                  uVar5 = (uint)(char)pbVar12[lVar8 + 1];
                  uVar9 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
                  if (uVar5 == 0 && uVar9 == 0) goto LAB_00109ab8;
               };
            } else {
               LAB_001099eb:uVar5 = (uint)(char)*pbVar13;
               bVar6 = (byte)uVar9 | *pbVar13;
               LAB_001099f1:if (bVar6 == 0) goto LAB_00109ab8;
               lVar7 = 1;
               while (uVar9 != 0) {
                  if (uVar5 == 0) goto LAB_00109ab8;
                  if (uVar9 < uVar5) break;
                  if (uVar5 < uVar9) goto LAB_00109ab8;
                  pbVar1 = pbVar12 + lVar7;
                  uVar9 = (uint)(char)*pbVar1;
                  pbVar2 = pbVar13 + lVar7;
                  uVar5 = (uint)(char)*pbVar2;
                  lVar7 = lVar7 + 1;
                  if (*pbVar1 == 0 && *pbVar2 == 0) goto LAB_00109ab8;
               };
            }
         } else {
            pbVar12 = *(byte**)( lVar14 + 8 );
            if (lVar7 == 0) {
               uVar9 = 0;
               pbVar13 = &_LC10;
               if (pbVar12 != (byte*)0x0) {
                  bVar6 = *pbVar12;
                  uVar9 = (uint)(char)bVar6;
                  uVar5 = 0;
                  pbVar13 = &_LC10;
                  goto LAB_001099f1;
               }
            } else {
               pbVar13 = *(byte**)( lVar7 + 8 );
               if (pbVar12 != (byte*)0x0) {
                  uVar5 = (uint)(char)*pbVar12;
                  uVar9 = uVar5;
                  if (pbVar13 == (byte*)0x0) goto LAB_0010998c;
                  goto LAB_001099eb;
               }
               if (pbVar13 == (byte*)0x0) {
                  uVar9 = **(uint**)( lVar7 + 0x10 );
                  uVar5 = **(uint**)( lVar14 + 0x10 );
                  if (uVar9 != 0 || uVar5 != 0) {
                     lVar8 = 4;
                     while (uVar5 != 0) {
                        if (uVar9 == 0) goto LAB_00109ab8;
                        if (uVar5 < uVar9) break;
                        if (uVar9 < uVar5) goto LAB_00109ab8;
                        uVar5 = *(uint*)( (long)*(uint**)( lVar14 + 0x10 ) + lVar8 );
                        uVar9 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar8 );
                        lVar8 = lVar8 + 4;
                        if (uVar5 == 0 && uVar9 == 0) goto LAB_00109ab8;
                     };
                     goto LAB_00109950;
                  }
                  goto LAB_00109ab8;
               }
               uVar9 = (uint)(char)*pbVar13;
            }
            uVar5 = **(uint**)( lVar14 + 0x10 );
            if (uVar5 == 0 && uVar9 == 0) goto LAB_00109ab8;
            lVar7 = 0;
            while (uVar5 != 0) {
               if (uVar9 == 0) goto LAB_00109ab8;
               if (uVar5 < uVar9) break;
               if (uVar9 < uVar5) goto LAB_00109ab8;
               uVar5 = ( *(uint**)( lVar14 + 0x10 ) )[lVar7 + 1];
               uVar9 = (uint)(char)pbVar13[lVar7 + 1];
               lVar7 = lVar7 + 1;
               if (uVar5 == 0 && uVar9 == 0) goto LAB_00109ab8;
            };
         }
         LAB_00109950:if (lVar10 == param_1) goto LAB_00109a90;
         lVar10 = lVar10 + -1;
         lVar7 = *(long*)ppEVar4[-1];
         ppEVar4 = ppEVar4 + -1;
      } while ( true );
   }
   LAB_00109816:lVar11 = lVar11 + 1;
   lVar7 = *(long*)param_4[lVar11];
   goto joined_r0x00109787;
   LAB_00109a90:_err_print_error("partitioner", "./core/templates/sort_array.h", 0xb9, "bad comparison function; sorting will be broken", 0, 0);
   LAB_00109ab8:if (lVar10 <= lVar11) {
      return lVar11;
   }
   pEVar3 = param_4[lVar11];
   param_4[lVar11] = *ppEVar4;
   *ppEVar4 = pEVar3;
   lVar14 = *(long*)param_3;
   goto LAB_00109816;
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
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
   } else {
      for (lVar12 = lVar16 + -2 >> 1; adjust_heap(param_1, lVar12, lVar16, param_4[param_1 + lVar12], ppEVar13),lVar12 != 0; lVar12 = lVar12 + -1) {}
      if (param_2 <= param_3) goto LAB_00109d3c;
   }
   ppEVar1 = ppEVar13 + param_1;
   lVar12 = param_3;
   LAB_00109c90:pEVar4 = ppEVar13[lVar12];
   lVar8 = *(long*)pEVar4;
   lVar7 = *(long*)*ppEVar1;
   if (lVar8 == 0) {
      if (lVar7 != 0) {
         pbVar14 = *(byte**)( lVar7 + 8 );
         uVar10 = 0;
         pbVar15 = &_LC10;
         LAB_00109da4:if (pbVar14 == (byte*)0x0) {
            uVar11 = **(uint**)( lVar7 + 0x10 );
            if (uVar11 != 0 || uVar10 != 0) {
               lVar8 = 0;
               do {
                  if (uVar10 == 0) goto LAB_00109d10;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_00109d10;
                  if (uVar11 < uVar10) break;
                  uVar10 = (uint)(char)pbVar15[lVar8 + 1];
                  uVar11 = ( *(uint**)( lVar7 + 0x10 ) )[lVar8 + 1];
                  lVar8 = lVar8 + 1;
               } while ( uVar10 != 0 || uVar11 != 0 );
            }
         } else {
            uVar11 = (uint)(char)*pbVar14;
            bVar6 = (byte)uVar10 | *pbVar14;
            LAB_00109e06:if (bVar6 != 0) {
               lVar8 = 1;
               do {
                  if (uVar10 == 0) goto LAB_00109d10;
                  if (uVar11 == 0) break;
                  if (uVar10 < uVar11) goto LAB_00109d10;
                  if (uVar11 < uVar10) break;
                  pbVar2 = pbVar14 + lVar8;
                  uVar11 = (uint)(char)*pbVar2;
                  pbVar3 = pbVar15 + lVar8;
                  uVar10 = (uint)(char)*pbVar3;
                  lVar8 = lVar8 + 1;
               } while ( *pbVar2 != 0 || *pbVar3 != 0 );
            }
         }
      }
   } else {
      pbVar15 = *(byte**)( lVar8 + 8 );
      if (lVar7 == 0) {
         if (pbVar15 != (byte*)0x0) {
            bVar6 = *pbVar15;
            uVar10 = (uint)(char)bVar6;
            pbVar14 = &_LC10;
            uVar11 = 0;
            goto LAB_00109e06;
         }
         uVar10 = 0;
         pbVar14 = &_LC10;
      } else {
         pbVar14 = *(byte**)( lVar7 + 8 );
         if (pbVar15 != (byte*)0x0) {
            uVar10 = (uint)(char)*pbVar15;
            goto LAB_00109da4;
         }
         if (pbVar14 == (byte*)0x0) {
            uVar10 = **(uint**)( lVar7 + 0x10 );
            uVar11 = **(uint**)( lVar8 + 0x10 );
            if (uVar10 != 0 || uVar11 != 0) {
               lVar9 = 4;
               do {
                  if (uVar11 == 0) goto LAB_00109d10;
                  if (uVar10 == 0) break;
                  if (uVar11 < uVar10) goto LAB_00109d10;
                  if (uVar10 < uVar11) break;
                  uVar11 = *(uint*)( (long)*(uint**)( lVar8 + 0x10 ) + lVar9 );
                  uVar10 = *(uint*)( (long)*(uint**)( lVar7 + 0x10 ) + lVar9 );
                  lVar9 = lVar9 + 4;
               } while ( uVar11 != 0 || uVar10 != 0 );
            }
            goto LAB_00109d24;
         }
         uVar10 = (uint)(char)*pbVar14;
      }
      uVar11 = **(uint**)( lVar8 + 0x10 );
      if (uVar11 != 0 || uVar10 != 0) {
         lVar7 = 0;
         do {
            if (uVar11 == 0) goto LAB_00109d10;
            if (uVar10 == 0) break;
            if (uVar11 < uVar10) goto LAB_00109d10;
            if (uVar10 < uVar11) break;
            uVar11 = ( *(uint**)( lVar8 + 0x10 ) )[lVar7 + 1];
            uVar10 = (uint)(char)pbVar14[lVar7 + 1];
            lVar7 = lVar7 + 1;
         } while ( uVar11 != 0 || uVar10 != 0 );
      }
   }
   goto LAB_00109d24;
   LAB_00109d10:ppEVar13[lVar12] = *ppEVar1;
   adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
   LAB_00109d24:lVar12 = lVar12 + 1;
   if (param_2 <= lVar12) goto code_r0x00109d31;
   goto LAB_00109c90;
   code_r0x00109d31:if (lVar16 < 2) {
      return;
   }
   LAB_00109d3c:ppEVar1 = ppEVar13 + param_1;
   lVar16 = ( param_3 + -1 ) - param_1;
   do {
      pEVar4 = ppEVar1[lVar16];
      ppEVar1[lVar16] = *ppEVar1;
      adjust_heap(param_1, 0, lVar16, pEVar4, ppEVar13);
      bVar5 = 1 < lVar16;
      lVar16 = lVar16 + -1;
   } while ( bVar5 );
   return;
}/* Resource::get_base_extension() const */Resource * __thiscall Resource::get_base_extension(Resource *this){
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
}/* SpriteFrames::_get_class_namev() const */undefined8 *SpriteFrames::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00109fc3:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00109fc3;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SpriteFrames");
         goto LAB_0010a02e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "SpriteFrames");
   LAB_0010a02e:return &_get_class_namev();
}/* SortArray<List<StringName, DefaultAllocator>::Element*, List<StringName,
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
      LAB_0010a973:partial_sort(param_1, param_2, param_2, param_3);
      return;
   }
   lVar11 = param_2 * 8;
   lVar3 = param_2;
   LAB_0010a0c3:param_4 = param_4 + -1;
   puVar2 = (undefined8*)median_of_3(param_3 + param_1, param_3 + ( lVar1 >> 1 ) + param_1, (Element**)( (long)param_3 + lVar11 + -8 ));
   param_2 = partitioner(param_1, lVar3, (Element*)*puVar2, param_3);
   lVar1 = lVar3 - param_2;
   if (0x10 < lVar1) {
      if (param_4 != 0) {
         lVar11 = param_4;
         lVar4 = lVar3;
         LAB_0010a14c:do {
            lVar11 = lVar11 + -1;
            puVar2 = (undefined8*)median_of_3(param_3 + param_2, param_3 + ( lVar1 >> 1 ) + param_2, param_3 + lVar4 + -1);
            lVar3 = partitioner(param_2, lVar4, (Element*)*puVar2, param_3);
            lVar1 = lVar4 - lVar3;
            if (0x10 < lVar1) {
               if (lVar11 != 0) {
                  local_118 = lVar4;
                  lVar15 = lVar11;
                  LAB_0010a1e4:lVar15 = lVar15 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar3, param_3 + ( lVar1 >> 1 ) + lVar3, param_3 + local_118 + -1);
                  lVar4 = partitioner(lVar3, local_118, (Element*)*puVar2, param_3);
                  lVar1 = local_118 - lVar4;
                  if (0x10 < lVar1) goto code_r0x0010a230;
                  LAB_0010a6c6:lVar1 = lVar4 - lVar3;
                  if (0x10 < lVar1) goto LAB_0010a6d6;
                  goto LAB_0010a873;
               }
               LAB_0010a8e8:partial_sort(lVar3, lVar4, lVar4, param_3);
            }
            LAB_0010a7ff:lVar1 = lVar3 - param_2;
            if (lVar1 < 0x11) goto joined_r0x0010a8b1;
            lVar4 = lVar3;
            if (lVar11 == 0) break;
         } while ( true );
      }
      partial_sort(param_2, lVar3, lVar3, param_3);
   }
   lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }
   if (param_4 != 0) goto LAB_0010a94c;
   goto LAB_0010a973;
   code_r0x0010a230:if (lVar15 != 0) {
      lVar13 = lVar15;
      lVar6 = local_118;
      LAB_0010a26c:do {
         lVar13 = lVar13 + -1;
         puVar2 = (undefined8*)median_of_3(param_3 + lVar4, param_3 + ( lVar1 >> 1 ) + lVar4, param_3 + lVar6 + -1);
         lVar5 = partitioner(lVar4, lVar6, (Element*)*puVar2, param_3);
         lVar1 = lVar6 - lVar5;
         if (0x10 < lVar1) {
            if (lVar13 != 0) {
               lVar7 = lVar6;
               local_f8 = lVar13;
               LAB_0010a2f2:do {
                  local_f8 = local_f8 + -1;
                  puVar2 = (undefined8*)median_of_3(param_3 + lVar5, param_3 + ( lVar1 >> 1 ) + lVar5, param_3 + lVar7 + -1);
                  lVar6 = partitioner(lVar5, lVar7, (Element*)*puVar2, param_3);
                  lVar1 = lVar7 - lVar6;
                  if (0x10 < lVar1) {
                     if (local_f8 != 0) {
                        lVar8 = lVar7;
                        local_110 = local_f8;
                        LAB_0010a373:do {
                           local_110 = local_110 + -1;
                           puVar2 = (undefined8*)median_of_3(param_3 + lVar6, param_3 + ( lVar1 >> 1 ) + lVar6, param_3 + lVar8 + -1);
                           lVar7 = partitioner(lVar6, lVar8, (Element*)*puVar2, param_3);
                           lVar1 = lVar8 - lVar7;
                           if (0x10 < lVar1) {
                              if (local_110 != 0) {
                                 lVar9 = lVar8;
                                 local_118 = local_110;
                                 LAB_0010a3f1:do {
                                    local_118 = local_118 + -1;
                                    puVar2 = (undefined8*)median_of_3(param_3 + lVar7, param_3 + ( lVar1 >> 1 ) + lVar7, param_3 + lVar9 + -1);
                                    lVar8 = partitioner(lVar7, lVar9, (Element*)*puVar2, param_3);
                                    lVar1 = lVar9 - lVar8;
                                    if (0x10 < lVar1) {
                                       if (local_118 != 0) {
                                          lVar10 = lVar9;
                                          local_108 = local_118;
                                          LAB_0010a467:do {
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
                                                         if (lVar1 < 0x11) goto LAB_0010a5fc;
                                                         goto LAB_0010a467;
                                                      }
                                                      lVar14 = lVar10;
                                                   } while ( lVar12 != 0 );
                                                }
                                                partial_sort(lVar9, lVar10, lVar10, param_3);
                                             }
                                             lVar1 = lVar9 - lVar8;
                                             if (lVar1 < 0x11) {
                                                lVar1 = lVar8 - lVar7;
                                                lVar9 = lVar8;
                                                if (lVar1 < 0x11) goto joined_r0x0010a710;
                                                goto LAB_0010a3f1;
                                             }
                                             lVar10 = lVar9;
                                          } while ( local_108 != 0 );
                                       }
                                       partial_sort(lVar8, lVar9, lVar9, param_3);
                                    }
                                    LAB_0010a5fc:lVar1 = lVar8 - lVar7;
                                    if (lVar1 < 0x11) {
                                       lVar1 = lVar7 - lVar6;
                                       lVar8 = lVar7;
                                       if (lVar1 < 0x11) goto joined_r0x0010a68b;
                                       goto LAB_0010a373;
                                    }
                                    lVar9 = lVar8;
                                 } while ( local_118 != 0 );
                              }
                              partial_sort(lVar7, lVar8, lVar8, param_3);
                           }
                           joined_r0x0010a710:lVar1 = lVar7 - lVar6;
                           if (lVar1 < 0x11) {
                              lVar1 = lVar6 - lVar5;
                              lVar7 = lVar6;
                              if (lVar1 < 0x11) goto joined_r0x0010a750;
                              goto LAB_0010a2f2;
                           }
                           lVar8 = lVar7;
                        } while ( local_110 != 0 );
                     }
                     partial_sort(lVar6, lVar7, lVar7, param_3);
                  }
                  joined_r0x0010a68b:lVar1 = lVar6 - lVar5;
                  if (lVar1 < 0x11) {
                     lVar1 = lVar5 - lVar4;
                     lVar6 = lVar5;
                     if (lVar1 < 0x11) goto LAB_0010a6c6;
                     goto LAB_0010a26c;
                  }
                  lVar7 = lVar6;
               } while ( local_f8 != 0 );
            }
            partial_sort(lVar5, lVar6, lVar6, param_3);
         }
         joined_r0x0010a750:lVar1 = lVar5 - lVar4;
         if (lVar1 < 0x11) {
            lVar1 = lVar4 - lVar3;
            local_118 = lVar4;
            if (lVar1 < 0x11) goto LAB_0010a7ff;
            goto LAB_0010a1e4;
         }
         lVar6 = lVar5;
         local_118 = lVar5;
      } while ( lVar13 != 0 );
   }
   partial_sort(lVar4, local_118, local_118, param_3);
   lVar1 = lVar4 - lVar3;
   if (lVar1 < 0x11) {
      LAB_0010a873:lVar1 = lVar3 - param_2;
      lVar4 = lVar3;
      if (0x10 < lVar1) goto LAB_0010a14c;
      goto joined_r0x0010a8b1;
   }
   LAB_0010a6d6:local_118 = lVar4;
   if (lVar15 == 0) goto LAB_0010a8e8;
   goto LAB_0010a1e4;
   joined_r0x0010a8b1:lVar1 = param_2 - param_1;
   if (lVar1 < 0x11) {
      return;
   }
   LAB_0010a94c:lVar11 = param_2 * 8;
   lVar3 = param_2;
   goto LAB_0010a0c3;
}/* SpriteFrames::get_class() const */void SpriteFrames::get_class(void) {
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
}/* MethodBindTRC<Array>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Array>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x1c;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String_conflict*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010abac;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010abac:local_58 = lVar2;
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
}/* MethodBindTRC<Vector<String>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<Vector<String>>::_gen_argument_type_info(int param_1) {
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
   local_48 = &_LC10;
   local_40 = 0;
   String::parse_latin1((StrRange*)&local_58);
   *puVar3 = 0x22;
   puVar3[6] = 0;
   *(undefined8*)( puVar3 + 8 ) = 0;
   *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar3[10] = 6;
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)&local_58);
      puVar3[10] = 6;
      if (puVar3[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String_conflict*)( puVar3 + 8 ), false);
         if (*(undefined**)( puVar3 + 4 ) == local_48) {
            lVar2 = local_58;
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
               lVar2 = local_58;
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar3 + 4 ) = local_48;
            lVar2 = local_58;
         }
         goto joined_r0x0010ad2c;
      }
   }
   StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)&local_50);
   lVar2 = local_58;
   joined_r0x0010ad2c:local_58 = lVar2;
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
}/* String::parse_latin1(char const*) */void String::parse_latin1(String_conflict *this, char *param_1) {
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
}/* PropertyInfo::~PropertyInfo() */void PropertyInfo::~PropertyInfo(PropertyInfo *this) {
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
}/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String_conflict *param_1) {
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
      } else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010aedf;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010aedf:cVar6 = String::operator ==(param_1, (String_conflict*)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010af93;
   }
   cVar6 = String::operator ==(param_1, "RefCounted");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         } else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
            } else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         cVar6 = String::operator ==(param_1, (String_conflict*)&local_60);
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
         if (cVar6 != '\0') goto LAB_0010af93;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar8 = String::operator ==(param_1, "Object");
         return uVar8;
      }
   } else {
      LAB_0010af93:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::is_class(String const&) const */undefined8 SpriteFrames::is_class(SpriteFrames *this, String_conflict *param_1) {
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
      } else {
         pcVar4 = *(char**)( lVar5 + 8 );
         local_60 = 0;
         if (pcVar4 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar5 + 0x10 ) + -0x10 );
            if (*(long*)( lVar5 + 0x10 ) != 0) {
               do {
                  lVar3 = *plVar1;
                  if (lVar3 == 0) goto LAB_0010b14f;
                  LOCK();
                  lVar7 = *plVar1;
                  bVar9 = lVar3 == lVar7;
                  if (bVar9) {
                     *plVar1 = lVar3 + 1;
                     lVar7 = lVar3;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar7 != -1) {
                  local_60 = *(long*)( lVar5 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar4);
            local_58 = pcVar4;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_0010b14f:cVar6 = String::operator ==(param_1, (String_conflict*)&local_60);
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
      if (cVar6 != '\0') goto LAB_0010b203;
   }
   cVar6 = String::operator ==(param_1, "SpriteFrames");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar5 = *(long*)( lVar2 + 0x20 );
         if (lVar5 == 0) {
            local_60 = 0;
         } else {
            pcVar4 = *(char**)( lVar5 + 8 );
            local_60 = 0;
            if (pcVar4 == (char*)0x0) {
               if (*(long*)( lVar5 + 0x10 ) != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar5 + 0x10 ));
               }
            } else {
               local_50 = strlen(pcVar4);
               local_58 = pcVar4;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         cVar6 = String::operator ==(param_1, (String_conflict*)&local_60);
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
         if (cVar6 != '\0') goto LAB_0010b203;
      }
      cVar6 = String::operator ==(param_1, "Resource");
      if (cVar6 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar8 = RefCounted::is_class((RefCounted*)this, param_1);
            return uVar8;
         }
         goto LAB_0010b348;
      }
   }
   LAB_0010b203:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }
   LAB_0010b348:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodDefinition::~MethodDefinition() */void MethodDefinition::~MethodDefinition(MethodDefinition *this) {
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
            } while ( lVar2 != lVar5 );
         }
         Memory::free_static(plVar1 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( *(long*)this != 0 )) {
      StringName::unref();
      return;
   }
   return;
}/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }
   return;
}/* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
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
      } else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
      plVar4 = *(long**)this;
   } while ( (int)plVar4[2] != 0 );
   Memory::free_static(plVar4, false);
   return;
}/* void List<StringName, DefaultAllocator>::sort_custom<StringName::AlphCompare>() */void List<StringName,DefaultAllocator>::sort_custom<StringName::AlphCompare>(List<StringName,DefaultAllocator> *this) {
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
   } else {
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
   } while ( pEVar7 != (Element*)0x1 );
   lVar10 = lVar10 * 2;
   pEVar7 = (Element*)0x1;
   pEVar9 = pEVar11;
   if ((long)pEVar11 < 0x11) {
      do {
         pEVar9 = pEVar7 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(0, (long)pEVar7, ppEVar3);
         pEVar7 = pEVar9;
      } while ( pEVar11 != pEVar9 );
   } else {
      do {
         lVar10 = lVar10 + -1;
         puVar4 = (undefined8*)SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::median_of_3(ppEVar3, ppEVar3 + ( (long)pEVar9 >> 1 ), ppEVar3 + (long)( pEVar9 + -1 ));
         pEVar7 = (Element*)SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partitioner(0, (long)pEVar9, (Element*)*puVar4, ppEVar3);
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::introsort((long)pEVar7, (long)pEVar9, ppEVar3, lVar10);
         lVar8 = 1;
         if ((long)pEVar7 < 0x11) goto LAB_0010b710;
         pEVar9 = pEVar7;
      } while ( lVar10 != 0 );
      SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::partial_sort(0, (long)pEVar7, (long)pEVar7, ppEVar3);
      LAB_0010b710:do {
         lVar10 = lVar8 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::linear_insert(0, lVar8, ppEVar3);
         lVar8 = lVar10;
      } while ( lVar10 != 0x10 );
      pEVar7 = (Element*)0x10;
      do {
         pEVar9 = pEVar7 + 1;
         SortArray<List<StringName,DefaultAllocator>::Element*,List<StringName,DefaultAllocator>::AuxiliaryComparator<StringName::AlphCompare>,true>::unguarded_linear_insert((long)pEVar7, ppEVar3[(long)pEVar7], ppEVar3);
         pEVar7 = pEVar9;
      } while ( pEVar11 != pEVar9 );
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
      } while ( ppEVar3 + ( iVar1 - 2 ) != ppEVar6 );
   }
   Memory::free_static(ppEVar3, true);
   return;
}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
}/* WARNING: Removing unreachable block (ram,0x0010c0f8) *//* WARNING: Removing unreachable block (ram,0x0010c28d) *//* WARNING: Removing unreachable block (ram,0x0010c299) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
}/* MethodBindTRC<Array>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<Array>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      } else {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c4a0;
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
         ( *(code*)pVVar2 )((Array*)&local_58);
         Variant::Variant((Variant*)local_48, (Array*)&local_58);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_48[0];
         *(undefined8*)( param_1 + 8 ) = local_40;
         *(undefined8*)( param_1 + 0x10 ) = uStack_38;
         Array::~Array((Array*)&local_58);
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_0010c4a0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Array>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<Array>::validated_call(MethodBindTRC<Array> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (Variant**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Variant**)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Variant**)0x10c2e8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c759;
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
   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Array::operator =((Array*)( param_3 + 8 ), (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010c759:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Array>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<Array>::ptrcall(MethodBindTRC<Array> *this, Object *param_1, void **param_2, void *param_3) {
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
      } else {
         plVar2 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (void**)*plVar2) {
         if (( StringName::configured != '\0' ) && ( local_48 != (void**)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (void**)0x10c2e8;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c92a;
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
   ( *pcVar1 )((Array*)&local_48, param_1 + *(long*)( this + 0x60 ), param_2);
   Array::operator =((Array*)param_3, (Array*)&local_48);
   Array::~Array((Array*)&local_48);
   LAB_0010c92a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Array const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Array_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010cc71;
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
      /* WARNING: Could not recover jumptable at 0x0010cafd. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }
   LAB_0010cc71:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<Array const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Array_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010ce51;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010ccd9. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }
   LAB_0010ce51:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      } else {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010cf70;
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
      } else {
         *in_R9 = 4;
         in_R9[2] = 0;
      }
   } else {
      *in_R9 = 3;
      in_R9[2] = 0;
   }
   LAB_0010cf70:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010d2ef;
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
      /* WARNING: Could not recover jumptable at 0x0010d196. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }
   LAB_0010d2ef:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<>::ptrcall(Object*, void const**, void*) const */void MethodBindT<>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010d4af;
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
      /* WARNING: Could not recover jumptable at 0x0010d356. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }
   LAB_0010d4af:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<float, StringName const&, int>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<float,StringName_const&,int>::validated_call(MethodBindTRC<float,StringName_const&,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
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
      } else {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010d516;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8, *(undefined4*)( param_2[1] + 8 ));
   *(double*)( param_3 + 8 ) = (double)fVar3;
   LAB_0010d516:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<float, StringName const&, int>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<float,StringName_const&,int>::ptrcall(MethodBindTRC<float,StringName_const&,int> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   float fVar3;
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
      } else {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010d6f0;
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
   fVar3 = (float)( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1]);
   *(double*)param_3 = (double)fVar3;
   LAB_0010d6f0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<int, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindTRC<int,StringName_const&>::validated_call(MethodBindTRC<int,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   int iVar1;
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
      } else {
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
         goto LAB_0010d8cb;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   *(long*)( param_3 + 8 ) = (long)iVar1;
   LAB_0010d8cb:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<int, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<int,StringName_const&>::ptrcall(MethodBindTRC<int,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010daa8;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   iVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(long*)param_3 = (long)iVar1;
   LAB_0010daa8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, int>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&,int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010de21;
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
      /* WARNING: Could not recover jumptable at 0x0010dca4. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }
   LAB_0010de21:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&, int>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&,int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010e009;
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
      for (int i = 0; i < 3; i++) {
         /* WARNING: Load size is inaccurate */
      }
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, **(undefined4**)( (long)param_3 + 8 ));
      return;
   }
   LAB_0010e009:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&, bool>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&,bool>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010e1f1;
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
      /* WARNING: Could not recover jumptable at 0x0010e077. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(undefined1*)( *(long*)( param_3 + 8 ) + 8 ));
      return;
   }
   LAB_0010e1f1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&, bool>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&,bool>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010e3e1;
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
      for (int i = 0; i < 3; i++) {
         /* WARNING: Load size is inaccurate */
      }
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, **(char**)( (long)param_3 + 8 ) != '\0');
      return;
   }
   LAB_0010e3e1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<double, StringName const&>::validated_call(Object*, Variant const**, Variant*)
   const */void MethodBindTRC<double,StringName_const&>::validated_call(MethodBindTRC<double,StringName_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
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
      } else {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010e43b;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8);
   *(undefined8*)( param_3 + 8 ) = uVar3;
   LAB_0010e43b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<double, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<double,StringName_const&>::ptrcall(MethodBindTRC<double,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   long *plVar2;
   long in_FS_OFFSET;
   undefined8 uVar3;
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
      } else {
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
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x27e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010e617;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar3 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2);
   *(undefined8*)param_3 = uVar3;
   LAB_0010e617:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, double>::validated_call(Object*, Variant const**, Variant*) const
    */void MethodBindT<StringName_const&,double>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010e991;
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
      /* WARNING: Could not recover jumptable at 0x0010e816. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )(*(undefined8*)( *(long*)( param_3 + 8 ) + 8 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }
   LAB_0010e991:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&, double>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&,double>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010eb79;
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
      for (int i = 0; i < 3; i++) {
         /* WARNING: Load size is inaccurate */
      }
      ( *UNRECOVERED_JUMPTABLE )(**(undefined8**)( (long)param_3 + 8 ), (long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }
   LAB_0010eb79:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&, StringName const&>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindT<StringName_const&,StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010ed3f;
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
      /* WARNING: Could not recover jumptable at 0x0010ebea. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8, *(long*)( param_3 + 8 ) + 8);
      return;
   }
   LAB_0010ed3f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&,StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010ef29;
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
      for (int i = 0; i < 3; i++) {
         /* WARNING: Load size is inaccurate */
      }
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3, *(undefined8*)( (long)param_3 + 8 ));
      return;
   }
   LAB_0010ef29:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<bool, StringName const&>::validated_call(Object*, Variant const**, Variant*) const
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
      } else {
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
         goto LAB_0010ef79;
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
   LAB_0010ef79:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<bool, StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,StringName_const&>::ptrcall(MethodBindTRC<bool,StringName_const&> *this, Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010f155;
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
   LAB_0010f155:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<StringName_const&>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
      } else {
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
         goto LAB_0010f4b1;
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
      /* WARNING: Could not recover jumptable at 0x0010f33d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(long*)param_3 + 8);
      return;
   }
   LAB_0010f4b1:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<StringName const&>::ptrcall(Object*, void const**, void*) const */void MethodBindT<StringName_const&>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
      } else {
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
         goto LAB_0010f691;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x0010f519. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *param_3);
      return;
   }
   LAB_0010f691:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::ptrcall(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this, Object *param_1, void **param_2, void *param_3) {
   char cVar1;
   code *pcVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
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
      } else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Object*)0x10c2e8;
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
         goto LAB_0010f75f;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   /* WARNING: Load size is inaccurate */
   ( *pcVar2 )((StringName*)&local_48, param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1]);
   if (local_48 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 == (Object*)0x0) goto LAB_0010f75f;
      *(undefined8*)param_3 = 0;
      goto LAB_0010f7a1;
   }
   pOVar3 = (Object*)__dynamic_cast(local_48, &Object::typeinfo, &RefCounted::typeinfo, 0);
   /* WARNING: Load size is inaccurate */
   pOVar5 = *param_3;
   if (pOVar5 != pOVar3) {
      *(Object**)param_3 = pOVar3;
      if (pOVar3 == (Object*)0x0) {
         if (pOVar5 != (Object*)0x0) goto LAB_0010f7a1;
      } else {
         cVar1 = RefCounted::reference();
         if (cVar1 == '\0') {
            *(undefined8*)param_3 = 0;
         }
         if (pOVar5 != (Object*)0x0) {
            LAB_0010f7a1:cVar1 = RefCounted::unreference();
            if (cVar1 != '\0') {
               cVar1 = predelete_handler(pOVar5);
               if (cVar1 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }
            }
         }
         if (local_48 == (Object*)0x0) goto LAB_0010f75f;
      }
   }
   cVar1 = RefCounted::unreference();
   pOVar5 = local_48;
   if (cVar1 != '\0') {
      cVar1 = predelete_handler(local_48);
      if (cVar1 != '\0') {
         ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
         Memory::free_static(pOVar5, false);
      }
   }
   LAB_0010f75f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::validated_call(Object*,
   Variant const**, Variant*) const */void MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   double dVar1;
   undefined4 uVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   Object *pOVar6;
   Variant *pVVar7;
   code *pcVar8;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar7 = param_2[0x23];
         if (pVVar7 == (Variant*)0x0) {
            pVVar7 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }
      } else {
         pVVar7 = param_2[1] + 0x20;
      }
      if (local_68 == (Object*)*(long*)pVVar7) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_68 = (Object*)0x10c2e8;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010fab1;
      }
      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar8 = *(code**)( param_1 + 0x58 );
   lVar3 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar8 & 1 ) != 0) {
      pcVar8 = *(code**)( pcVar8 + *(long*)( (long)param_2 + lVar3 ) + -1 );
   }
   uVar2 = *(undefined4*)( *(long*)( param_3 + 0x18 ) + 8 );
   dVar1 = *(double*)( *(long*)( param_3 + 0x10 ) + 8 );
   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( param_3 + 8 ) + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar6 = (Object*)Variant::get_validated_object();
   pOVar4 = local_68;
   if (pOVar6 != local_68) {
      if (pOVar6 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_0010fa5e:cVar5 = RefCounted::unreference();
            if (cVar5 != '\0') {
               cVar5 = predelete_handler(pOVar4);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                  Memory::free_static(pOVar4, false);
               }
            }
         }
      } else {
         pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (pOVar4 != pOVar6) {
            local_68 = pOVar6;
            if (pOVar6 != (Object*)0x0) {
               cVar5 = RefCounted::reference();
               if (cVar5 == '\0') {
                  local_68 = (Object*)0x0;
               }
            }
            if (pOVar4 != (Object*)0x0) goto LAB_0010fa5e;
         }
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   ( *pcVar8 )((float)dVar1, (long*)( (long)param_2 + lVar3 ), *(long*)param_3 + 8, (StringName*)&local_68, uVar2);
   if (local_68 != (Object*)0x0) {
      cVar5 = RefCounted::unreference();
      pOVar4 = local_68;
      if (cVar5 != '\0') {
         cVar5 = predelete_handler(local_68);
         if (cVar5 != '\0') {
            ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
            Memory::free_static(pOVar4, false);
         }
      }
   }
   LAB_0010fab1:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::validated_call(Object*,
   Variant const**, Variant*) const */void MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
   double dVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   Object *pOVar5;
   Variant *pVVar6;
   code *pcVar7;
   long in_FS_OFFSET;
   long local_78;
   undefined8 local_70;
   Object *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (Variant**)0x0 ) && ( param_2[1] != (Variant*)0x0 ) ) && ( param_2[1][0x2e] != (Variant)0x0 )) {
      StringName::StringName((StringName*)&local_68, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (Variant*)0x0) {
         pVVar6 = param_2[0x23];
         if (pVVar6 == (Variant*)0x0) {
            pVVar6 = (Variant*)( **(code**)( *param_2 + 0x40 ) )(param_2);
         }
      } else {
         pVVar6 = param_2[1] + 0x20;
      }
      if (local_68 == (Object*)*(long*)pVVar6) {
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_68 = (Object*)0x10c2e8;
         local_70 = 0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x160, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010fdf9;
      }
      if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar7 = *(code**)( param_1 + 0x58 );
   lVar2 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar7 & 1 ) != 0) {
      pcVar7 = *(code**)( pcVar7 + *(long*)( (long)param_2 + lVar2 ) + -1 );
   }
   dVar1 = *(double*)( *(long*)( param_3 + 0x18 ) + 8 );
   Variant::Variant((Variant*)local_58, *(Object**)( *(long*)( param_3 + 0x10 ) + 0x10 ));
   local_68 = (Object*)0x0;
   pOVar5 = (Object*)Variant::get_validated_object();
   pOVar3 = local_68;
   if (pOVar5 != local_68) {
      if (pOVar5 == (Object*)0x0) {
         if (local_68 != (Object*)0x0) {
            local_68 = (Object*)0x0;
            LAB_0010fda3:cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }
            }
         }
      } else {
         pOVar5 = (Object*)__dynamic_cast(pOVar5, &Object::typeinfo, &Texture2D::typeinfo, 0);
         if (pOVar3 != pOVar5) {
            local_68 = pOVar5;
            if (pOVar5 != (Object*)0x0) {
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  local_68 = (Object*)0x0;
               }
            }
            if (pOVar3 != (Object*)0x0) goto LAB_0010fda3;
         }
      }
   }
   if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
   }
   ( *pcVar7 )((float)dVar1, (long*)( (long)param_2 + lVar2 ), *(long*)param_3 + 8, *(undefined4*)( *(long*)( param_3 + 8 ) + 8 ), (StringName*)&local_68);
   if (local_68 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar3 = local_68;
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(local_68);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }
      }
   }
   LAB_0010fdf9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::ptrcall(Object*, void const**,
   void*) const */void MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   undefined4 uVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar5 = (long*)param_2[0x23];
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }
      } else {
         plVar5 = (long*)( (long)param_2[1] + 0x20 );
      }
      if (local_48 == (Object*)*plVar5) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Object*)0x10c2e8;
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
         goto LAB_001100c9;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar6 = *(code**)( param_1 + 0x58 );
   lVar2 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( (long)param_2 + lVar2 ) + -1 );
   }
   uVar1 = **(undefined4**)( (long)param_3 + 0x18 );
   if (( *(long**)( (long)param_3 + 8 ) == (long*)0x0 ) || ( local_48 = (Object*)**(long**)( (long)param_3 + 8 ) ),local_48 == (Object*)0x0) {
      LAB_0011009e:local_48 = (Object*)0x0;
   } else {
      cVar4 = RefCounted::init_ref();
      if (cVar4 == '\0') goto LAB_0011009e;
   }
   /* WARNING: Load size is inaccurate */
   ( *pcVar6 )((long*)( (long)param_2 + lVar2 ), *param_3, (StringName*)&local_48, uVar1);
   if (local_48 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar3 = local_48;
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(local_48);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }
      }
   }
   LAB_001100c9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::ptrcall(Object*, void const**,
   void*) const */void MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::ptrcall(Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   long *plVar4;
   code *pcVar5;
   long in_FS_OFFSET;
   long local_58;
   undefined8 local_50;
   Object *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_2 != (void**)0x0 ) && ( param_2[1] != (void*)0x0 ) ) && ( *(char*)( (long)param_2[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_1 + 0x18 ));
      if (param_2[1] == (void*)0x0) {
         plVar4 = (long*)param_2[0x23];
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( (long)*param_2 + 0x40 ) )(param_2);
         }
      } else {
         plVar4 = (long*)( (long)param_2[1] + 0x20 );
      }
      if (local_48 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = (Object*)0x10c2e8;
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
         goto LAB_00110315;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar5 = *(code**)( param_1 + 0x58 );
   lVar1 = *(long*)( param_1 + 0x60 );
   if (( (ulong)pcVar5 & 1 ) != 0) {
      pcVar5 = *(code**)( pcVar5 + *(long*)( (long)param_2 + lVar1 ) + -1 );
   }
   if (( *(long**)( (long)param_3 + 0x10 ) == (long*)0x0 ) || ( local_48 = (Object*)**(long**)( (long)param_3 + 0x10 ) ),local_48 == (Object*)0x0) {
      LAB_001102e7:local_48 = (Object*)0x0;
   } else {
      cVar3 = RefCounted::init_ref();
      if (cVar3 == '\0') goto LAB_001102e7;
   }
   /* WARNING: Load size is inaccurate */
   ( *pcVar5 )((long*)( (long)param_2 + lVar1 ), *param_3, **(undefined4**)( (long)param_3 + 8 ), (StringName*)&local_48);
   if (local_48 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_48;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_48);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }
      }
   }
   LAB_00110315:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Array const&>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Array_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }
      } else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }
      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_001105c0;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00110610;
         LAB_00110600:pVVar10 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00110610:uVar6 = 4;
            goto LAB_001105b5;
         }
         if (in_R8D == 1) goto LAB_00110600;
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
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x1c);
      uVar4 = _LC68;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_Array((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      Array::~Array((Array*)&local_48);
   } else {
      uVar6 = 3;
      LAB_001105b5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_001105c0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindT<StringName_const&,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined4 uVar7;
   long *plVar8;
   long lVar9;
   Variant *pVVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   Variant *pVVar12;
   int iVar13;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar14;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar8 = (long*)plVar11[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }
      } else {
         plVar8 = (long*)( plVar11[1] + 0x20 );
      }
      if (local_58 == (char*)*plVar8) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_00110960;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar14 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 3) {
      pVVar10 = param_2[5];
      iVar6 = 2 - in_R8D;
      if (pVVar10 == (Variant*)0x0) {
         if (iVar6 != 0) goto LAB_001109b0;
         pVVar12 = *(Variant**)param_4;
         LAB_001109cd:pVVar10 = *(Variant**)( param_4 + 8 );
      } else {
         lVar2 = *(long*)( pVVar10 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar6) {
            LAB_001109b0:uVar7 = 4;
            goto LAB_0011099d;
         }
         if (in_R8D == 0) {
            lVar9 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar9) goto LAB_00110a90;
            pVVar12 = pVVar10 + lVar9 * 0x18;
         } else {
            pVVar12 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_001109cd;
         }
         lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar13 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00110a90:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         pVVar10 = pVVar10 + lVar9 * 0x18;
      }
      *in_R9 = 0;
      if (( (ulong)pVVar14 & 1 ) != 0) {
         pVVar14 = *(Variant**)( pVVar14 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
      }
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar10, 0x15);
      uVar4 = _LC70;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant*)&local_60);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x15);
      uVar4 = _LC71;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant*)&local_58);
      ( *(code*)pVVar14 )((Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_58, (Variant*)&local_60);
      if (StringName::configured != '\0') {
         if (local_58 != (char*)0x0) {
            StringName::unref();
            if (StringName::configured == '\0') goto LAB_00110960;
         }
         if (local_60 != 0) {
            StringName::unref();
         }
      }
   } else {
      uVar7 = 3;
      LAB_0011099d:*in_R9 = uVar7;
      in_R9[2] = 2;
   }
   LAB_00110960:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<double, StringName const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<double,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   bool bVar12;
   double dVar13;
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
      } else {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }
         goto LAB_00110d20;
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
         if (in_R8D != 1) goto LAB_00110d70;
         LAB_00110d60:pVVar10 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00110d70:uVar6 = 4;
            goto LAB_00110d15;
         }
         if (in_R8D == 1) goto LAB_00110d60;
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
      uVar4 = _LC71;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant*)&local_68);
      dVar13 = (double)( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, dVar13);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      bVar12 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar12 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }
   } else {
      uVar6 = 3;
      LAB_00110d15:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_00110d20:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* MethodBindTRC<bool, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
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
      } else {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }
         goto LAB_001110d0;
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
         if (in_R8D != 1) goto LAB_00111120;
         LAB_00111110:pVVar11 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00111120:uVar7 = 4;
            goto LAB_001110c5;
         }
         if (in_R8D == 1) goto LAB_00111110;
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
      uVar4 = _LC71;
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
   } else {
      uVar7 = 3;
      LAB_001110c5:*in_R9 = uVar7;
      in_R9[2] = 1;
   }
   LAB_001110d0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* MethodBindTRC<int, StringName const&>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<int,StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   bool bVar13;
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
      } else {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }
         goto LAB_00111480;
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
         if (in_R8D != 1) goto LAB_001114d0;
         LAB_001114c0:pVVar11 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar11 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_001114d0:uVar7 = 4;
            goto LAB_00111475;
         }
         if (in_R8D == 1) goto LAB_001114c0;
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
      uVar4 = _LC71;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant*)&local_68);
      iVar6 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68);
      Variant::Variant((Variant*)local_58, iVar6);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      bVar13 = StringName::configured != '\0';
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (( bVar13 ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }
   } else {
      uVar7 = 3;
      LAB_00111475:*in_R9 = uVar7;
      in_R9[2] = 1;
   }
   LAB_00111480:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* MethodBindT<StringName const&>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindT<StringName_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   long local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   plVar9 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar9 != (long*)0x0 ) && ( plVar9[1] != 0 ) ) && ( *(char*)( plVar9[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( param_2 + 3 ));
      if (plVar9[1] == 0) {
         plVar7 = (long*)plVar9[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar9 + 0x40 ) )(plVar9);
         }
      } else {
         plVar7 = (long*)( plVar9[1] + 0x20 );
      }
      if (local_48 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = 0;
         local_40 = 0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_001117f0;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar11 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar10 = param_2[5];
      if (pVVar10 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_00111840;
         LAB_00111830:pVVar10 = *(Variant**)param_4;
      } else {
         lVar2 = *(long*)( pVVar10 + -8 );
         if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
            LAB_00111840:uVar6 = 4;
            goto LAB_001117e5;
         }
         if (in_R8D == 1) goto LAB_00111830;
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
      uVar4 = _LC71;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant*)&local_48);
      ( *(code*)pVVar11 )((Variant*)( (long)plVar9 + (long)pVVar1 ), (Variant*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   } else {
      uVar6 = 3;
      LAB_001117e5:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_001117f0:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
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
   Object *local_70;
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
      } else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }
      if (local_68 == (char*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_68 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_70 = (Object*)0x0;
         local_60 = 0x35;
         String::parse_latin1((StrRange*)&local_70);
         vformat<StringName>((StringName*)&local_68, (StrRange*)&local_70, &local_78);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }
         goto LAB_00111bf0;
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
         if (iVar7 != 0) goto LAB_00111c38;
         pVVar12 = *(Variant**)param_4;
         LAB_00111c4d:pVVar15 = *(Variant**)( param_4 + 8 );
      } else {
         lVar2 = *(long*)( pVVar15 + -8 );
         iVar13 = (int)lVar2;
         if (iVar13 < iVar7) {
            LAB_00111c38:uVar8 = 4;
            goto LAB_00111c25;
         }
         if (in_R8D == 0) {
            lVar10 = (long)( iVar13 + -2 );
            if (lVar2 <= lVar10) goto LAB_00111d60;
            pVVar12 = pVVar15 + lVar10 * 0x18;
         } else {
            pVVar12 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_00111c4d;
         }
         lVar10 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar13 - iVar7 ) );
         if (lVar2 <= lVar10) {
            LAB_00111d60:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar2, "p_index", "size()", "", false, true);
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
      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar15, 2);
      uVar4 = _LC72;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      iVar7 = Variant::operator_cast_to_int(pVVar15);
      cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x15);
      uVar4 = _LC71;
      if (cVar6 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant*)&local_68);
      ( *(code*)pVVar14 )(&local_70, (Variant*)( (long)plVar11 + (long)pVVar1 ), (Variant*)&local_68, iVar7);
      Variant::Variant((Variant*)local_58, local_70);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_58[0];
      *(undefined8*)( param_1 + 8 ) = local_50;
      *(undefined8*)( param_1 + 0x10 ) = uStack_48;
      if (local_70 != (Object*)0x0) {
         cVar6 = RefCounted::unreference();
         pOVar5 = local_70;
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(local_70);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }
         }
      }
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }
   } else {
      uVar8 = 3;
      LAB_00111c25:*in_R9 = uVar8;
      in_R9[2] = 2;
   }
   LAB_00111bf0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<float, StringName const&, int>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTRC<float,StringName_const&,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
   float fVar16;
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
      } else {
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
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_68, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }
         goto LAB_00112060;
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
         if (iVar6 != 0) goto LAB_001120a8;
         pVVar11 = *(Variant**)param_4;
         LAB_001120bd:pVVar14 = *(Variant**)( param_4 + 8 );
      } else {
         lVar2 = *(long*)( pVVar14 + -8 );
         iVar12 = (int)lVar2;
         if (iVar12 < iVar6) {
            LAB_001120a8:uVar7 = 4;
            goto LAB_00112095;
         }
         if (in_R8D == 0) {
            lVar9 = (long)( iVar12 + -2 );
            if (lVar2 <= lVar9) goto LAB_00112190;
            pVVar11 = pVVar14 + lVar9 * 0x18;
         } else {
            pVVar11 = *(Variant**)param_4;
            if (in_R8D == 2) goto LAB_001120bd;
         }
         lVar9 = (long)(int)( ( in_R8D ^ 1 ) + ( iVar12 - iVar6 ) );
         if (lVar2 <= lVar9) {
            LAB_00112190:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar2, "p_index", "size()", "", false, true);
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
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar14, 2);
      uVar4 = _LC72;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      iVar6 = Variant::operator_cast_to_int(pVVar14);
      cVar5 = Variant::can_convert_strict(*(undefined4*)pVVar11, 0x15);
      uVar4 = _LC71;
      if (cVar5 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar4;
      }
      Variant::operator_cast_to_StringName((Variant*)&local_68);
      fVar16 = (float)( *(code*)pVVar13 )((Variant*)( (long)plVar10 + (long)pVVar1 ), (Variant*)&local_68, iVar6);
      Variant::Variant((Variant*)local_58, fVar16);
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
   } else {
      uVar7 = 3;
      LAB_00112095:*in_R9 = uVar7;
      in_R9[2] = 2;
   }
   LAB_00112060:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long lVar9;
   Object *pOVar10;
   long *plVar11;
   uint uVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   long lVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   long in_FS_OFFSET;
   long local_88;
   Object *local_80;
   char *local_78;
   undefined8 local_70;
   Variant *local_68[5];
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar11 = (long*)plVar13[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
         }
      } else {
         plVar11 = (long*)( plVar13[1] + 0x20 );
      }
      if (local_78 == (char*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = (Object*)0x0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_78, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }
         goto LAB_00112582;
      }
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar7 = 0;
         lVar15 = 0;
      } else {
         lVar15 = *(long*)( pVVar2 + -8 );
         iVar7 = (int)lVar15;
      }
      if ((int)( 4 - in_R8D ) <= iVar7) {
         lVar9 = 0;
         do {
            if ((int)lVar9 < (int)in_R8D) {
               pVVar14 = *(Variant**)( param_4 + lVar9 * 8 );
            } else {
               uVar12 = iVar7 + -4 + (int)lVar9;
               if (lVar15 <= (int)uVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar15, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }
               pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
            }
            local_68[lVar9] = pVVar14;
            lVar9 = lVar9 + 1;
         } while ( lVar9 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar16 & 1 ) != 0) {
            pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[3], 2);
         uVar4 = _LC73;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         iVar7 = Variant::operator_cast_to_int(local_68[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[2], 3);
         uVar4 = _LC74;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_float(local_68[2]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[1]);
         uVar4 = _LC75;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         local_80 = (Object*)0x0;
         pOVar10 = (Object*)Variant::get_validated_object();
         pOVar5 = local_80;
         if (pOVar10 != local_80) {
            if (pOVar10 == (Object*)0x0) {
               if (local_80 != (Object*)0x0) {
                  local_80 = (Object*)0x0;
                  LAB_00112496:cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }
                  }
               }
            } else {
               pOVar10 = (Object*)__dynamic_cast(pOVar10, &Object::typeinfo, &Texture2D::typeinfo, 0);
               if (pOVar5 != pOVar10) {
                  local_80 = pOVar10;
                  if (pOVar10 != (Object*)0x0) {
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_80 = (Object*)0x0;
                     }
                  }
                  if (pOVar5 != (Object*)0x0) goto LAB_00112496;
               }
            }
         }
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[0], 0x15);
         uVar4 = _LC71;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_StringName((Variant*)&local_78);
         ( *(code*)pVVar16 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_78, &local_80, iVar7);
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }
         if (local_80 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar5 = local_80;
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_80);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }
            }
         }
         goto LAB_00112582;
      }
      uVar8 = 4;
   } else {
      uVar8 = 3;
   }
   *in_R9 = uVar8;
   in_R9[2] = 4;
   LAB_00112582:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   int iVar7;
   undefined4 uVar8;
   long lVar9;
   Object *pOVar10;
   long *plVar11;
   uint uVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   long lVar15;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar16;
   long in_FS_OFFSET;
   long local_88;
   Object *local_80;
   char *local_78;
   undefined8 local_70;
   Variant *local_68[5];
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_78, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar11 = (long*)plVar13[0x23];
         if (plVar11 == (long*)0x0) {
            plVar11 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
         }
      } else {
         plVar11 = (long*)( plVar13[1] + 0x20 );
      }
      if (local_78 == (char*)*plVar11) {
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_78 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_80 = (Object*)0x0;
         local_70 = 0x35;
         String::parse_latin1((StrRange*)&local_80);
         vformat<StringName>((StringName*)&local_78, (StrRange*)&local_80, &local_88);
         _err_print_error(&_LC63, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_78, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
            StringName::unref();
         }
         goto LAB_00112a82;
      }
      if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar16 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 5) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar7 = 0;
         lVar15 = 0;
      } else {
         lVar15 = *(long*)( pVVar2 + -8 );
         iVar7 = (int)lVar15;
      }
      if ((int)( 4 - in_R8D ) <= iVar7) {
         lVar9 = 0;
         do {
            if ((int)lVar9 < (int)in_R8D) {
               pVVar14 = *(Variant**)( param_4 + lVar9 * 8 );
            } else {
               uVar12 = iVar7 + -4 + (int)lVar9;
               if (lVar15 <= (int)uVar12) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar12, lVar15, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }
               pVVar14 = pVVar2 + (ulong)uVar12 * 0x18;
            }
            local_68[lVar9] = pVVar14;
            lVar9 = lVar9 + 1;
         } while ( lVar9 != 4 );
         *in_R9 = 0;
         if (( (ulong)pVVar16 & 1 ) != 0) {
            pVVar16 = *(Variant**)( pVVar16 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[3], 3);
         uVar4 = _LC76;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_float(local_68[3]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[2]);
         uVar4 = _LC77;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         local_80 = (Object*)0x0;
         pOVar10 = (Object*)Variant::get_validated_object();
         pOVar5 = local_80;
         if (pOVar10 != local_80) {
            if (pOVar10 == (Object*)0x0) {
               if (local_80 != (Object*)0x0) {
                  local_80 = (Object*)0x0;
                  LAB_00112961:cVar6 = RefCounted::unreference();
                  if (cVar6 != '\0') {
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }
                  }
               }
            } else {
               pOVar10 = (Object*)__dynamic_cast(pOVar10, &Object::typeinfo, &Texture2D::typeinfo, 0);
               if (pOVar5 != pOVar10) {
                  local_80 = pOVar10;
                  if (pOVar10 != (Object*)0x0) {
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        local_80 = (Object*)0x0;
                     }
                  }
                  if (pOVar5 != (Object*)0x0) goto LAB_00112961;
               }
            }
         }
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
         uVar4 = _LC72;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         iVar7 = Variant::operator_cast_to_int(local_68[1]);
         cVar6 = Variant::can_convert_strict(*(undefined4*)local_68[0], 0x15);
         uVar4 = _LC71;
         if (cVar6 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_StringName((Variant*)&local_78);
         ( *(code*)pVVar16 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_78, iVar7, &local_80);
         if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
            StringName::unref();
         }
         if (local_80 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar5 = local_80;
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_80);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }
            }
         }
         goto LAB_00112a82;
      }
      uVar8 = 4;
   } else {
      uVar8 = 3;
   }
   *in_R9 = uVar8;
   in_R9[2] = 4;
   LAB_00112a82:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::validated_call(Object*, Variant const**,
   Variant*) const */void MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::validated_call(MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   Object *pOVar1;
   char cVar2;
   code *pcVar3;
   long *plVar4;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   char *local_48;
   Object *local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_48, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }
      } else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }
      if (local_48 == (char*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_50 = (Object*)0x0;
         local_40 = (Object*)0x35;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x273, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_00112d74;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar3 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar3 & 1 ) != 0) {
      pcVar3 = *(code**)( pcVar3 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   ( *pcVar3 )(&local_50, param_1 + *(long*)( this + 0x60 ), *param_2 + 8, *(undefined4*)( param_2[1] + 8 ));
   if (local_50 == (Object*)0x0) {
      Variant::ObjData::unref();
   } else {
      local_48 = *(char**)( local_50 + 0x60 );
      local_40 = local_50;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }
   if (local_50 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_50);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }
      }
   }
   LAB_00112d74:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   long *plVar1;
   long lVar2;
   undefined1(*pauVar3)[16];
   undefined4 *puVar4;
   undefined7 in_register_00000031;
   List *pLVar5;
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
   pLVar5 = (List*)CONCAT71(in_register_00000031, param_2);
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
      LAB_001130dd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001130dd;
      StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x001130ff;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar5;
   joined_r0x001130ff:if (lVar2 == 0) {
      pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])pLVar5 = pauVar3;
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
   plVar1 = *(long**)pLVar5;
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
   StringName::StringName((StringName*)&local_78, "RefCounted", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* Resource::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Resource::_get_property_listv(Resource *this, List *param_1, bool param_2) {
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
      LAB_0011345d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011345d;
      StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011347f;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x0011347f:if (lVar2 == 0) {
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
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* SpriteFrames::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void SpriteFrames::_get_property_listv(SpriteFrames *this, List *param_1, bool param_2) {
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
      Resource::_get_property_listv((Resource*)this, param_1, false);
   }
   local_88 = 0;
   local_90 = 0;
   local_78 = "SpriteFrames";
   local_70 = 0xc;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "SpriteFrames";
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
   if (local_90 == 0) {
      LAB_0011383d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0011383d;
      StringName::StringName((StringName*)&local_80, (String_conflict*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)param_1;
         local_68 = local_80;
         goto joined_r0x0011385f;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)param_1;
   joined_r0x0011385f:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "SpriteFrames", false);
   ClassDB::get_property_list((StringName*)&local_78, param_1, true, (Object*)this);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (param_2) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Resource::_get_property_listv((Resource*)this, param_1, true);
         return;
      }
   } else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<Array const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Array_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined8 uVar3;
   long lVar4;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar5;
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
   puVar5 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar5 = 0;
   puVar5[6] = 0;
   *(undefined8*)( puVar5 + 8 ) = 0;
   puVar5[10] = 6;
   *(undefined1(*) [16])( puVar5 + 2 ) = (undefined1[16])0x0;
   if (in_EDX != 0) goto LAB_00113ac9;
   local_78 = 0;
   local_68 = &_LC10;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x1c);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00113bc5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00113bc5;
      StringName::StringName((StringName*)&local_70, (String_conflict*)&local_48, false);
      if (local_60._8_8_ == local_70) {
         if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_70;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }
   *puVar5 = local_68._0_4_;
   if (*(long*)( puVar5 + 2 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 2 ));
      uVar3 = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
      *(undefined8*)( puVar5 + 2 ) = uVar3;
   }
   if (*(long*)( puVar5 + 4 ) != local_60._8_8_) {
      StringName::unref();
      uVar3 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( puVar5 + 4 ) = uVar3;
   }
   puVar5[6] = local_50;
   if (*(long*)( puVar5 + 8 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( puVar5 + 8 ));
      lVar4 = local_48;
      local_48 = 0;
      *(long*)( puVar5 + 8 ) = lVar4;
   }
   puVar5[10] = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   LAB_00113ac9:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBind* create_method_bind<SpriteFrames, StringName const&>(void (SpriteFrames::*)(StringName
   const&)) */MethodBind *create_method_bind<SpriteFrames,StringName_const&>(_func_void_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a510;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, bool, StringName const&>(bool
   (SpriteFrames::*)(StringName const&) const) */MethodBind *create_method_bind<SpriteFrames,bool,StringName_const&>(_func_bool_StringName_ptr *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011a570;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, StringName const&, StringName const&>(void
   (SpriteFrames::*)(StringName const&, StringName const&)) */MethodBind *create_method_bind<SpriteFrames,StringName_const&,StringName_const&>(_func_void_StringName_ptr_StringName_ptr *param_1) {
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
   *(_func_void_StringName_ptr_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a5d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, Vector<String>>(Vector<String> (SpriteFrames::*)()
   const) */MethodBind *create_method_bind<SpriteFrames,Vector<String>>(_func_Vector *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011a630;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, StringName const&, double>(void
   (SpriteFrames::*)(StringName const&, double)) */MethodBind *create_method_bind<SpriteFrames,StringName_const&,double>(_func_void_StringName_ptr_double *param_1) {
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
   *(_func_void_StringName_ptr_double**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a690;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, double, StringName const&>(double
   (SpriteFrames::*)(StringName const&) const) */MethodBind *create_method_bind<SpriteFrames,double,StringName_const&>(_func_double_StringName_ptr *param_1) {
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
   *(_func_double_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a6f0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, StringName const&, bool>(void
   (SpriteFrames::*)(StringName const&, bool)) */MethodBind *create_method_bind<SpriteFrames,StringName_const&,bool>(_func_void_StringName_ptr_bool *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011a750;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, StringName const&, Ref<Texture2D> const&, float,
   int>(void (SpriteFrames::*)(StringName const&, Ref<Texture2D> const&, float, int)) */MethodBind *create_method_bind<SpriteFrames,StringName_const&,Ref<Texture2D>const&,float,int>(_func_void_StringName_ptr_Ref_ptr_float_int *param_1) {
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
   *(_func_void_StringName_ptr_Ref_ptr_float_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a7b0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, StringName const&, int, Ref<Texture2D> const&,
   float>(void (SpriteFrames::*)(StringName const&, int, Ref<Texture2D> const&, float)) */MethodBind *create_method_bind<SpriteFrames,StringName_const&,int,Ref<Texture2D>const&,float>(_func_void_StringName_ptr_int_Ref_ptr_float *param_1) {
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
   *(_func_void_StringName_ptr_int_Ref_ptr_float**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a810;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 4;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, StringName const&, int>(void
   (SpriteFrames::*)(StringName const&, int)) */MethodBind *create_method_bind<SpriteFrames,StringName_const&,int>(_func_void_StringName_ptr_int *param_1) {
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
   *(_func_void_StringName_ptr_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a870;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, int, StringName const&>(int
   (SpriteFrames::*)(StringName const&) const) */MethodBind *create_method_bind<SpriteFrames,int,StringName_const&>(_func_int_StringName_ptr *param_1) {
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
   *(_func_int_StringName_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a8d0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, Ref<Texture2D>, StringName const&,
   int>(Ref<Texture2D> (SpriteFrames::*)(StringName const&, int) const) */MethodBind *create_method_bind<SpriteFrames,Ref<Texture2D>,StringName_const&,int>(_func_Ref_StringName_ptr_int *param_1) {
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
   *(_func_Ref_StringName_ptr_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a930;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, float, StringName const&, int>(float
   (SpriteFrames::*)(StringName const&, int) const) */MethodBind *create_method_bind<SpriteFrames,float,StringName_const&,int>(_func_float_StringName_ptr_int *param_1) {
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
   *(_func_float_StringName_ptr_int**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a990;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 2;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames>(void (SpriteFrames::*)()) */MethodBind *create_method_bind<SpriteFrames>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_0011a9f0;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, Array const&>(void (SpriteFrames::*)(Array const&))
    */MethodBind *create_method_bind<SpriteFrames,Array_const&>(_func_void_Array_ptr *param_1) {
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
   *(_func_void_Array_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011aa50;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* MethodBind* create_method_bind<SpriteFrames, Array>(Array (SpriteFrames::*)() const) */MethodBind *create_method_bind<SpriteFrames,Array>(_func_Array *param_1) {
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
   *(_func_Array**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011aab0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "SpriteFrames";
   local_30 = 0xc;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String_conflict*)&local_40, false);
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
}/* SpriteFrames::_bind_methods() [clone .cold] */void SpriteFrames::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<String>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<String>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* CowData<SpriteFrames::Frame>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<SpriteFrames::Frame>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* SpriteFrames::_initialize_classv() */void SpriteFrames::_initialize_classv(void)

{
  long in_FS_OFFSET;
  undefined8 local_70;
  undefined8 local_68;
  long local_60;
  char *local_58;
  undefined8 local_50;
  long local_40;
  
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (initialize_class()::initialized == '\0') {
    if (Resource::initialize_class()::initialized == '\0') {
      if (RefCounted::initialize_class()::initialized == '\0') {
        Object::initialize_class();
        local_68 = 0;
        local_50 = 6;
        local_58 = "Object";
        String::parse_latin1((StrRange *)&local_68);
        StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
        local_58 = "RefCounted";
        local_70 = 0;
        local_50 = 10;
        String::parse_latin1((StrRange *)&local_70);
        StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
        ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
        if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
        if ((StringName::configured != '\0') && (local_60 != 0)) {
          StringName::unref();
        }
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
        if ((code *)PTR__bind_methods_00120008 != RefCounted::_bind_methods) {
          RefCounted::_bind_methods();
        }
        RefCounted::initialize_class()::initialized = '\x01';
      }
      local_58 = "RefCounted";
      local_68 = 0;
      local_50 = 10;
      String::parse_latin1((StrRange *)&local_68);
      StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
      local_58 = "Resource";
      local_70 = 0;
      local_50 = 8;
      String::parse_latin1((StrRange *)&local_70);
      StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
      ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
      if ((StringName::configured != '\0') && (local_60 != 0)) {
        StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
      if ((code *)_GLOBAL_OFFSET_TABLE_ != RefCounted::_bind_methods) {
        Resource::_bind_methods();
      }
      Resource::initialize_class()::initialized = '\x01';
    }
    local_58 = "Resource";
    local_68 = 0;
    local_50 = 8;
    String::parse_latin1((StrRange *)&local_68);
    StringName::StringName((StringName *)&local_60,(String_conflict *)&local_68,false);
    local_58 = "SpriteFrames";
    local_70 = 0;
    local_50 = 0xc;
    String::parse_latin1((StrRange *)&local_70);
    StringName::StringName((StringName *)&local_58,(String_conflict *)&local_70,false);
    ClassDB::_add_class2((StringName *)&local_58,(StringName *)&local_60);
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_70);
    if ((StringName::configured != '\0') && (local_60 != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_68);
    _bind_methods();
    initialize_class()::initialized = '\x01';
  }
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* CowData<String>::_unref() */

void __thiscall CowData<String>::_unref(CowData<String> *this)

{
  long *plVar1;
  long *plVar2;
  long lVar3;
  long lVar4;
  code *pcVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 == 0) {
    plVar1 = *(long **)this;
    if (plVar1 != (long *)0x0) {
      lVar3 = plVar1[-1];
      *(undefined8 *)this = 0;
      if (lVar3 != 0) {
        lVar7 = 0;
        plVar6 = plVar1;
        do {
          if (*plVar6 != 0) {
            LOCK();
            plVar2 = (long *)(*plVar6 + -0x10);
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
              lVar4 = *plVar6;
              *plVar6 = 0;
              Memory::free_static((void *)(lVar4 + -0x10),false);
            }
          }
          lVar7 = lVar7 + 1;
          plVar6 = plVar6 + 1;
        } while (lVar3 != lVar7);
      }
      Memory::free_static(plVar1 + -2,false);
      return;
    }
                    /* WARNING: Does not return */
    pcVar5 = (code *)invalidInstructionException();
    (*pcVar5)();
  }
  *(undefined8 *)this = 0;
  return;
}



/* MethodBindTRC<Vector<String>>::ptrcall(Object*, void const**, void*) const */

void __thiscall
MethodBindTRC<Vector<String>>::ptrcall
          (MethodBindTRC<Vector<String>> *this,Object *param_1,void **param_2,void *param_3)

{
  code *pcVar1;
  long *plVar2;
  void **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  void **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (void **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (void **)0x10c2e8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("ptrcall","./core/object/method_bind.h",0x27e,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115453;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (void **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(void ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)((long)param_3 + 8) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)((long)param_3 + 8),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_00115453:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::validated_call(Object*, Variant const**, Variant*) const */

void __thiscall
MethodBindTRC<Vector<String>>::validated_call
          (MethodBindTRC<Vector<String>> *this,Object *param_1,Variant **param_2,Variant *param_3)

{
  code *pcVar1;
  long *plVar2;
  Variant **extraout_RDX;
  long in_FS_OFFSET;
  long local_58;
  undefined8 local_50;
  Variant **local_48;
  long local_40 [2];
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((param_1 != (Object *)0x0) && (*(long *)(param_1 + 8) != 0)) &&
     (*(char *)(*(long *)(param_1 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(this + 0x18));
    if (*(long *)(param_1 + 8) == 0) {
      plVar2 = *(long **)(param_1 + 0x118);
      if (plVar2 == (long *)0x0) {
        plVar2 = (long *)(**(code **)(*(long *)param_1 + 0x40))(param_1);
      }
    }
    else {
      plVar2 = (long *)(*(long *)(param_1 + 8) + 0x20);
    }
    if (local_48 == (Variant **)*plVar2) {
      if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = (Variant **)0x10c2e8;
      local_40[0] = 0x35;
      local_50 = 0;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error("validated_call","./core/object/method_bind.h",0x273,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true."
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      goto LAB_00115627;
    }
    param_2 = local_48;
    if ((StringName::configured != '\0') && (local_48 != (Variant **)0x0)) {
      StringName::unref();
      param_2 = extraout_RDX;
    }
  }
  pcVar1 = *(code **)(this + 0x58);
  if (((ulong)pcVar1 & 1) != 0) {
    param_2 = *(Variant ***)(param_1 + *(long *)(this + 0x60));
    pcVar1 = *(code **)(pcVar1 + (long)param_2 + -1);
  }
  (*pcVar1)((StringName *)&local_48,param_1 + *(long *)(this + 0x60),param_2);
  if (*(long *)(*(long *)(param_3 + 8) + 0x18) != local_40[0]) {
    CowData<String>::_ref((CowData<String> *)(*(long *)(param_3 + 8) + 0x18),(CowData *)local_40);
  }
  CowData<String>::_unref((CowData<String> *)local_40);
LAB_00115627:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Vector<String>>::call(Object*, Variant const**, int, Callable::CallError&) const */

Object * MethodBindTRC<Vector<String>>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  undefined4 local_48 [2];
  undefined8 local_40;
  undefined8 uStack_38;
  long local_30;
  
  plVar4 = (long *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
  if (((plVar4 != (long *)0x0) && (plVar4[1] != 0)) && (*(char *)(plVar4[1] + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_58,(StringName *)(param_2 + 3));
    if (plVar4[1] == 0) {
      plVar3 = (long *)plVar4[0x23];
      if (plVar3 == (long *)0x0) {
        plVar3 = (long *)(**(code **)(*plVar4 + 0x40))(plVar4);
      }
    }
    else {
      plVar3 = (long *)(plVar4[1] + 0x20);
    }
    if (local_58 == (char *)*plVar3) {
      if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_60 = 0;
      local_50 = 0x35;
      String::parse_latin1((StrRange *)&local_60);
      vformat<StringName>((StringName *)&local_58,(StrRange *)&local_60,&local_68);
      _err_print_error(&_LC63,"./core/object/method_bind.h",0x267,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret"
                       ,(StringName *)&local_58,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_58);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_60);
      if ((StringName::configured != '\0') && (local_68 != 0)) {
        StringName::unref();
      }
      goto LAB_00115860;
    }
    if ((StringName::configured != '\0') && (local_58 != (char *)0x0)) {
      StringName::unref();
    }
  }
  pVVar2 = param_2[0xb];
  pVVar1 = param_2[0xc];
  if (in_R8D == 0) {
    if ((param_2[5] == (Variant *)0x0) || (-1 < *(int *)(param_2[5] + -8))) {
      *in_R9 = 0;
      if (((ulong)pVVar2 & 1) != 0) {
        pVVar2 = *(Variant **)(pVVar2 + *(long *)((long)plVar4 + (long)pVVar1) + -1);
      }
      (*(code *)pVVar2)(&local_58);
      Variant::Variant((Variant *)local_48,(Vector *)&local_58);
      if (Variant::needs_deinit[*(int *)param_1] != '\0') {
        Variant::_clear_internal();
      }
      *(undefined4 *)param_1 = local_48[0];
      *(undefined8 *)(param_1 + 8) = local_40;
      *(undefined8 *)(param_1 + 0x10) = uStack_38;
      CowData<String>::_unref((CowData<String> *)&local_50);
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
LAB_00115860:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* CowData<String>::_realloc(long) */

undefined8 __thiscall CowData<String>::_realloc(CowData<String> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<String>::resize<false>(long) */

undefined8 __thiscall CowData<String>::resize<false>(CowData<String> *this,long param_1)

{
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
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar6 = 0;
    lVar7 = 0;
  }
  else {
    lVar6 = *(long *)(*(long *)this + -8);
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
      lVar7 = (uVar8 | uVar8 >> 0x20) + 1;
    }
  }
  if (param_1 * 8 == 0) {
LAB_00115dd0:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
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
  if (lVar10 == 0) goto LAB_00115dd0;
  if (param_1 <= lVar6) {
    lVar6 = *(long *)this;
    uVar8 = param_1;
    while (lVar6 != 0) {
      if (*(ulong *)(lVar6 + -8) <= uVar8) {
LAB_00115ca9:
        if (lVar10 != lVar7) {
          uVar4 = _realloc(this,lVar10);
          if ((int)uVar4 != 0) {
            return uVar4;
          }
          lVar6 = *(long *)this;
          if (lVar6 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
        }
        *(long *)(lVar6 + -8) = param_1;
        return 0;
      }
      while( true ) {
        plVar2 = (long *)(lVar6 + uVar8 * 8);
        if (*plVar2 != 0) break;
        uVar8 = uVar8 + 1;
        if (*(ulong *)(lVar6 + -8) <= uVar8) goto LAB_00115ca9;
      }
      LOCK();
      plVar1 = (long *)(*plVar2 + -0x10);
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
        lVar6 = *plVar2;
        *plVar2 = 0;
        Memory::free_static((void *)(lVar6 + -0x10),false);
      }
      uVar8 = uVar8 + 1;
      lVar6 = *(long *)this;
    }
    goto LAB_00115e26;
  }
  if (lVar10 == lVar7) {
LAB_00115d4f:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00115e26:
                    /* WARNING: Does not return */
      pcVar3 = (code *)invalidInstructionException();
      (*pcVar3)();
    }
    lVar6 = puVar9[-1];
    if (param_1 <= lVar6) goto LAB_00115d3a;
  }
  else {
    if (lVar6 != 0) {
      uVar4 = _realloc(this,lVar10);
      if ((int)uVar4 != 0) {
        return uVar4;
      }
      goto LAB_00115d4f;
    }
    puVar5 = (undefined8 *)Memory::alloc_static(uVar8 + 0x11,false);
    if (puVar5 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar5 + 2;
    *puVar5 = 1;
    puVar5[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar6 = 0;
  }
  memset(puVar9 + lVar6,0,(param_1 - lVar6) * 8);
LAB_00115d3a:
  puVar9[-1] = param_1;
  return 0;
}



/* CowData<SpriteFrames::Frame>::_unref() */

void __thiscall CowData<SpriteFrames::Frame>::_unref(CowData<SpriteFrames::Frame> *this)

{
  long *plVar1;
  long lVar2;
  Object *pOVar3;
  code *pcVar4;
  char cVar5;
  long *plVar6;
  long lVar7;
  
  if (*(long *)this == 0) {
    return;
  }
  LOCK();
  plVar1 = (long *)(*(long *)this + -0x10);
  *plVar1 = *plVar1 + -1;
  UNLOCK();
  if (*plVar1 != 0) {
    *(undefined8 *)this = 0;
    return;
  }
  plVar1 = *(long **)this;
  if (plVar1 == (long *)0x0) {
                    /* WARNING: Does not return */
    pcVar4 = (code *)invalidInstructionException();
    (*pcVar4)();
  }
  lVar2 = plVar1[-1];
  *(undefined8 *)this = 0;
  if (lVar2 != 0) {
    lVar7 = 0;
    plVar6 = plVar1;
LAB_00115e8d:
    do {
      if (*plVar6 != 0) {
        cVar5 = RefCounted::unreference();
        if (cVar5 != '\0') {
          pOVar3 = (Object *)*plVar6;
          cVar5 = predelete_handler(pOVar3);
          if (cVar5 != '\0') {
            lVar7 = lVar7 + 1;
            plVar6 = plVar6 + 2;
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
            if (lVar2 == lVar7) break;
            goto LAB_00115e8d;
          }
        }
      }
      lVar7 = lVar7 + 1;
      plVar6 = plVar6 + 2;
    } while (lVar2 != lVar7);
  }
  Memory::free_static(plVar1 + -2,false);
  return;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* HashMap<StringName, SpriteFrames::Anim, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   SpriteFrames::Anim> > >::operator[](StringName const&) */

undefined8 * __thiscall
HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>
::operator[](HashMap<StringName,SpriteFrames::Anim,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,SpriteFrames::Anim>>>
             *this,StringName *param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined8 *puVar4;
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
  undefined1 auVar36 [16];
  uint uVar37;
  uint uVar38;
  uint uVar39;
  ulong uVar40;
  undefined8 uVar41;
  void *__s_00;
  undefined8 *puVar42;
  long lVar43;
  void *pvVar44;
  ulong uVar45;
  int iVar46;
  long lVar47;
  long lVar48;
  long lVar49;
  ulong uVar50;
  undefined8 uVar51;
  uint uVar52;
  uint uVar53;
  uint uVar54;
  undefined8 *puVar55;
  long in_FS_OFFSET;
  undefined8 local_a8;
  undefined8 local_80;
  undefined1 local_78 [16];
  long local_68;
  undefined8 local_60;
  undefined1 local_58;
  long local_48;
  long local_40;
  
  lVar43 = *(long *)(this + 8);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar40 = CONCAT44(0,uVar38);
  if (lVar43 == 0) {
    local_a8 = _LC114;
LAB_001166aa:
    local_80 = 0;
    uVar45 = uVar40 * 4;
    uVar50 = uVar40 * 8;
    _LC114 = local_a8;
    uVar41 = Memory::alloc_static(uVar45,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    pvVar44 = (void *)Memory::alloc_static(uVar50,false);
    *(void **)(this + 8) = pvVar44;
    if ((int)uVar40 != 0) {
      pvVar3 = *(void **)(this + 0x10);
      if ((pvVar3 < (void *)((long)pvVar44 + uVar50)) && (pvVar44 < (void *)((long)pvVar3 + uVar45))
         ) {
        uVar45 = 0;
        do {
          *(undefined4 *)((long)pvVar3 + uVar45 * 4) = 0;
          *(undefined8 *)((long)pvVar44 + uVar45 * 8) = 0;
          uVar45 = uVar45 + 1;
        } while (uVar40 != uVar45);
      }
      else {
        memset(pvVar3,0,uVar45);
        memset(pvVar44,0,uVar50);
      }
      goto LAB_0011612a;
    }
    iVar46 = *(int *)(this + 0x2c);
    if (pvVar44 == (void *)0x0) goto LAB_00116247;
    if (*(int *)(this + 0x2c) != 0) goto LAB_00116136;
LAB_0011626d:
    uVar38 = *(uint *)(this + 0x28);
    if (uVar38 == 0x1c) {
      puVar42 = (undefined8 *)0x0;
      _err_print_error("_insert","./core/templates/hash_map.h",0xdd,
                       "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr"
                       ,"Hash table maximum capacity reached, aborting insertion.",0,0);
      goto LAB_0011665c;
    }
    uVar40 = (ulong)(uVar38 + 1);
    *(undefined4 *)(this + 0x2c) = 0;
    uVar39 = *(uint *)(hash_table_size_primes + (ulong)uVar38 * 4);
    if (uVar38 + 1 < 2) {
      uVar40 = 2;
    }
    uVar38 = *(uint *)(hash_table_size_primes + uVar40 * 4);
    uVar50 = (ulong)uVar38;
    *(int *)(this + 0x28) = (int)uVar40;
    pvVar44 = *(void **)(this + 8);
    uVar40 = uVar50 * 4;
    uVar45 = uVar50 * 8;
    pvVar3 = *(void **)(this + 0x10);
    uVar41 = Memory::alloc_static(uVar40,false);
    *(undefined8 *)(this + 0x10) = uVar41;
    __s_00 = (void *)Memory::alloc_static(uVar45,false);
    *(void **)(this + 8) = __s_00;
    if (uVar38 != 0) {
      __s = *(void **)(this + 0x10);
      if ((__s < (void *)((long)__s_00 + uVar45)) && (__s_00 < (void *)((long)__s + uVar40))) {
        uVar40 = 0;
        do {
          *(undefined4 *)((long)__s + uVar40 * 4) = 0;
          *(undefined8 *)((long)__s_00 + uVar40 * 8) = 0;
          uVar40 = uVar40 + 1;
        } while (uVar40 != uVar50);
      }
      else {
        memset(__s,0,uVar40);
        memset(__s_00,0,uVar45);
      }
    }
    if (uVar39 != 0) {
      uVar40 = 0;
      do {
        uVar38 = *(uint *)((long)pvVar3 + uVar40 * 4);
        if (uVar38 != 0) {
          lVar43 = *(long *)(this + 0x10);
          uVar54 = 0;
          uVar52 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
          uVar45 = CONCAT44(0,uVar52);
          lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
          auVar13._8_8_ = 0;
          auVar13._0_8_ = (ulong)uVar38 * lVar48;
          auVar29._8_8_ = 0;
          auVar29._0_8_ = uVar45;
          lVar47 = SUB168(auVar13 * auVar29,8);
          puVar1 = (uint *)(lVar43 + lVar47 * 4);
          iVar46 = SUB164(auVar13 * auVar29,8);
          uVar53 = *puVar1;
          uVar41 = *(undefined8 *)((long)pvVar44 + uVar40 * 8);
          while (uVar53 != 0) {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = (ulong)uVar53 * lVar48;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar45;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = (ulong)((uVar52 + iVar46) - SUB164(auVar14 * auVar30,8)) * lVar48;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar45;
            uVar37 = SUB164(auVar15 * auVar31,8);
            uVar51 = uVar41;
            if (uVar37 < uVar54) {
              *puVar1 = uVar38;
              puVar42 = (undefined8 *)((long)__s_00 + lVar47 * 8);
              uVar51 = *puVar42;
              *puVar42 = uVar41;
              uVar38 = uVar53;
              uVar54 = uVar37;
            }
            uVar54 = uVar54 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = (ulong)(iVar46 + 1) * lVar48;
            auVar32._8_8_ = 0;
            auVar32._0_8_ = uVar45;
            lVar47 = SUB168(auVar16 * auVar32,8);
            puVar1 = (uint *)(lVar43 + lVar47 * 4);
            iVar46 = SUB164(auVar16 * auVar32,8);
            uVar41 = uVar51;
            uVar53 = *puVar1;
          }
          *(undefined8 *)((long)__s_00 + lVar47 * 8) = uVar41;
          *puVar1 = uVar38;
          *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
        }
        uVar40 = uVar40 + 1;
      } while (uVar39 != uVar40);
      Memory::free_static(pvVar44,false);
      Memory::free_static(pvVar3,false);
    }
  }
  else {
    if (*(int *)(this + 0x2c) == 0) {
      local_a8 = _LC114;
      local_80 = 0;
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
    }
    else {
      lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
        lVar43 = *(long *)(this + 8);
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar39 * lVar48;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar40;
      lVar47 = SUB168(auVar5 * auVar21,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
      uVar53 = SUB164(auVar5 * auVar21,8);
      if (uVar52 != 0) {
        uVar54 = 0;
        do {
          if ((uVar52 == uVar39) &&
             (*(long *)(*(long *)(lVar43 + lVar47 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(lVar43 + (ulong)uVar53 * 8);
            goto LAB_001160bc;
          }
          uVar54 = uVar54 + 1;
          auVar6._8_8_ = 0;
          auVar6._0_8_ = (ulong)(uVar53 + 1) * lVar48;
          auVar22._8_8_ = 0;
          auVar22._0_8_ = uVar40;
          lVar47 = SUB168(auVar6 * auVar22,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar47 * 4);
          uVar53 = SUB164(auVar6 * auVar22,8);
        } while ((uVar52 != 0) &&
                (auVar7._8_8_ = 0, auVar7._0_8_ = (ulong)uVar52 * lVar48, auVar23._8_8_ = 0,
                auVar23._0_8_ = uVar40, auVar8._8_8_ = 0,
                auVar8._0_8_ = (ulong)((uVar53 + uVar38) - SUB164(auVar7 * auVar23,8)) * lVar48,
                auVar24._8_8_ = 0, auVar24._0_8_ = uVar40, uVar54 <= SUB164(auVar8 * auVar24,8)));
      }
      local_80 = 0;
      uVar40 = (ulong)*(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      local_a8 = _LC114;
      if (lVar43 == 0) goto LAB_001166aa;
    }
LAB_0011612a:
    iVar46 = *(int *)(this + 0x2c);
    if (iVar46 != 0) {
LAB_00116136:
      uVar38 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
      uVar45 = CONCAT44(0,uVar38);
      lVar43 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
      if (*(long *)param_1 == 0) {
        uVar39 = StringName::get_empty_hash();
      }
      else {
        uVar39 = *(uint *)(*(long *)param_1 + 0x20);
      }
      if (uVar39 == 0) {
        uVar39 = 1;
      }
      uVar54 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar39 * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar45;
      lVar48 = SUB168(auVar9 * auVar25,8);
      uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
      uVar53 = SUB164(auVar9 * auVar25,8);
      if (uVar52 != 0) {
        do {
          if ((uVar39 == uVar52) &&
             (*(long *)(*(long *)(*(long *)(this + 8) + lVar48 * 8) + 0x10) == *(long *)param_1)) {
            puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
            *(undefined1 *)(puVar42 + 4) = 1;
            puVar42[3] = local_a8;
            if (puVar42[6] != 0) {
              CowData<SpriteFrames::Frame>::_ref
                        ((CowData<SpriteFrames::Frame> *)(puVar42 + 6),(CowData *)&local_80);
              puVar42 = *(undefined8 **)(*(long *)(this + 8) + (ulong)uVar53 * 8);
            }
            goto LAB_0011665c;
          }
          uVar54 = uVar54 + 1;
          auVar10._8_8_ = 0;
          auVar10._0_8_ = (ulong)(uVar53 + 1) * lVar43;
          auVar26._8_8_ = 0;
          auVar26._0_8_ = uVar45;
          lVar48 = SUB168(auVar10 * auVar26,8);
          uVar52 = *(uint *)(*(long *)(this + 0x10) + lVar48 * 4);
          uVar53 = SUB164(auVar10 * auVar26,8);
        } while ((uVar52 != 0) &&
                (auVar11._8_8_ = 0, auVar11._0_8_ = (ulong)uVar52 * lVar43, auVar27._8_8_ = 0,
                auVar27._0_8_ = uVar45, auVar12._8_8_ = 0,
                auVar12._0_8_ = (ulong)((uVar38 + uVar53) - SUB164(auVar11 * auVar27,8)) * lVar43,
                auVar28._8_8_ = 0, auVar28._0_8_ = uVar45, uVar54 <= SUB164(auVar12 * auVar28,8)));
      }
      iVar46 = *(int *)(this + 0x2c);
    }
LAB_00116247:
    if ((float)uVar40 * __LC115 < (float)(iVar46 + 1)) goto LAB_0011626d;
  }
  local_78 = (undefined1  [16])0x0;
  StringName::StringName((StringName *)&local_68,param_1);
  local_58 = 1;
  local_60 = local_a8;
  local_48 = 0;
  puVar42 = (undefined8 *)operator_new(0x38,"");
  *puVar42 = local_78._0_8_;
  puVar42[1] = local_78._8_8_;
  StringName::StringName((StringName *)(puVar42 + 2),(StringName *)&local_68);
  puVar42[6] = 0;
  *(undefined1 *)(puVar42 + 4) = local_58;
  puVar42[3] = local_60;
  if (local_48 != 0) {
    CowData<SpriteFrames::Frame>::_ref
              ((CowData<SpriteFrames::Frame> *)(puVar42 + 6),(CowData *)&local_48);
  }
  CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame> *)&local_48);
  if ((StringName::configured != '\0') && (local_68 != 0)) {
    StringName::unref();
  }
  puVar4 = *(undefined8 **)(this + 0x20);
  if (puVar4 == (undefined8 *)0x0) {
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x18) = puVar42;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 == 0) goto LAB_00116755;
LAB_00116566:
    uVar38 = *(uint *)(lVar43 + 0x20);
  }
  else {
    *puVar4 = puVar42;
    puVar42[1] = puVar4;
    lVar43 = *(long *)param_1;
    *(undefined8 **)(this + 0x20) = puVar42;
    if (lVar43 != 0) goto LAB_00116566;
LAB_00116755:
    uVar38 = StringName::get_empty_hash();
  }
  lVar43 = *(long *)(this + 0x10);
  if (uVar38 == 0) {
    uVar38 = 1;
  }
  uVar40 = (ulong)uVar38;
  uVar53 = 0;
  uVar39 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x28) * 4);
  uVar45 = CONCAT44(0,uVar39);
  lVar48 = *(long *)(hash_table_size_primes_inv + (ulong)*(uint *)(this + 0x28) * 8);
  auVar17._8_8_ = 0;
  auVar17._0_8_ = uVar40 * lVar48;
  auVar33._8_8_ = 0;
  auVar33._0_8_ = uVar45;
  lVar49 = SUB168(auVar17 * auVar33,8);
  lVar47 = *(long *)(this + 8);
  puVar1 = (uint *)(lVar43 + lVar49 * 4);
  iVar46 = SUB164(auVar17 * auVar33,8);
  uVar52 = *puVar1;
  puVar4 = puVar42;
  while (uVar52 != 0) {
    auVar18._8_8_ = 0;
    auVar18._0_8_ = (ulong)uVar52 * lVar48;
    auVar34._8_8_ = 0;
    auVar34._0_8_ = uVar45;
    auVar19._8_8_ = 0;
    auVar19._0_8_ = (ulong)((uVar39 + iVar46) - SUB164(auVar18 * auVar34,8)) * lVar48;
    auVar35._8_8_ = 0;
    auVar35._0_8_ = uVar45;
    uVar38 = SUB164(auVar19 * auVar35,8);
    puVar55 = puVar4;
    if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar52;
      puVar2 = (undefined8 *)(lVar47 + lVar49 * 8);
      puVar55 = (undefined8 *)*puVar2;
      *puVar2 = puVar4;
      uVar53 = uVar38;
    }
    uVar38 = (uint)uVar40;
    uVar53 = uVar53 + 1;
    auVar20._8_8_ = 0;
    auVar20._0_8_ = (ulong)(iVar46 + 1) * lVar48;
    auVar36._8_8_ = 0;
    auVar36._0_8_ = uVar45;
    lVar49 = SUB168(auVar20 * auVar36,8);
    puVar1 = (uint *)(lVar43 + lVar49 * 4);
    iVar46 = SUB164(auVar20 * auVar36,8);
    puVar4 = puVar55;
    uVar52 = *puVar1;
  }
  *(undefined8 **)(lVar47 + lVar49 * 8) = puVar4;
  *puVar1 = uVar38;
  *(int *)(this + 0x2c) = *(int *)(this + 0x2c) + 1;
LAB_0011665c:
  CowData<SpriteFrames::Frame>::_unref((CowData<SpriteFrames::Frame> *)&local_80);
LAB_001160bc:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar42 + 3;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* SpriteFrames::~SpriteFrames() */

void __thiscall SpriteFrames::~SpriteFrames(SpriteFrames *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011a338;
  pvVar3 = *(void **)(this + 0x248);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x250) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x250) + lVar2) = 0;
            CowData<SpriteFrames::Frame>::_unref
                      ((CowData<SpriteFrames::Frame> *)((long)pvVar3 + 0x30));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x248);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_0011692f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x250),false);
    Resource::~Resource((Resource *)this);
    return;
  }
LAB_0011692f:
  Resource::~Resource((Resource *)this);
  return;
}



/* SpriteFrames::~SpriteFrames() */

void __thiscall SpriteFrames::~SpriteFrames(SpriteFrames *this)

{
  uint uVar1;
  long lVar2;
  void *pvVar3;
  
  *(undefined ***)this = &PTR__initialize_classv_0011a338;
  pvVar3 = *(void **)(this + 0x248);
  if (pvVar3 != (void *)0x0) {
    if (*(int *)(this + 0x26c) != 0) {
      uVar1 = *(uint *)(hash_table_size_primes + (ulong)*(uint *)(this + 0x268) * 4);
      if (uVar1 == 0) {
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
      }
      else {
        lVar2 = 0;
        do {
          if (*(int *)(*(long *)(this + 0x250) + lVar2) != 0) {
            pvVar3 = *(void **)((long)pvVar3 + lVar2 * 2);
            *(int *)(*(long *)(this + 0x250) + lVar2) = 0;
            CowData<SpriteFrames::Frame>::_unref
                      ((CowData<SpriteFrames::Frame> *)((long)pvVar3 + 0x30));
            if ((StringName::configured != '\0') && (*(long *)((long)pvVar3 + 0x10) != 0)) {
              StringName::unref();
            }
            Memory::free_static(pvVar3,false);
            pvVar3 = *(void **)(this + 0x248);
            *(undefined8 *)((long)pvVar3 + lVar2 * 2) = 0;
          }
          lVar2 = lVar2 + 4;
        } while (lVar2 != (ulong)uVar1 << 2);
        *(undefined4 *)(this + 0x26c) = 0;
        *(undefined1 (*) [16])(this + 600) = (undefined1  [16])0x0;
        if (pvVar3 == (void *)0x0) goto LAB_00116a5f;
      }
    }
    Memory::free_static(pvVar3,false);
    Memory::free_static(*(void **)(this + 0x250),false);
  }
LAB_00116a5f:
  Resource::~Resource((Resource *)this);
  operator_delete(this,0x270);
  return;
}



/* CowData<SpriteFrames::Frame>::_realloc(long) */

undefined8 __thiscall
CowData<SpriteFrames::Frame>::_realloc(CowData<SpriteFrames::Frame> *this,long param_1)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)
           Memory::realloc_static((void *)(*(long *)this + -0x10),param_1 + 0x10,false);
  if (puVar1 != (undefined8 *)0x0) {
    *puVar1 = 1;
    *(undefined8 **)this = puVar1 + 2;
    return 0;
  }
  _err_print_error("_realloc","./core/templates/cowdata.h",0x1a9,"Parameter \"mem_new\" is null.",0,
                   0);
  return 6;
}



/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Error CowData<SpriteFrames::Frame>::resize<false>(long) */

undefined8 __thiscall
CowData<SpriteFrames::Frame>::resize<false>(CowData<SpriteFrames::Frame> *this,long param_1)

{
  Object *pOVar1;
  code *pcVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  undefined8 *puVar6;
  undefined8 *puVar7;
  long lVar8;
  undefined8 *puVar9;
  long lVar10;
  ulong uVar11;
  long lVar12;
  long *plVar13;
  
  if (param_1 < 0) {
    _err_print_error("resize","./core/templates/cowdata.h",0x157,
                     "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER",0,0);
    return 0x1f;
  }
  if (*(long *)this == 0) {
    if (param_1 == 0) {
      return 0;
    }
    _copy_on_write(this);
    lVar8 = 0;
    lVar10 = 0;
  }
  else {
    lVar8 = *(long *)(*(long *)this + -8);
    if (param_1 == lVar8) {
      return 0;
    }
    if (param_1 == 0) {
      _unref(this);
      return 0;
    }
    _copy_on_write(this);
    lVar10 = lVar8 * 0x10;
    if (lVar10 != 0) {
      uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      lVar10 = (uVar11 | uVar11 >> 0x20) + 1;
    }
  }
  if (param_1 * 0x10 == 0) {
LAB_00116e00:
    _err_print_error("resize","./core/templates/cowdata.h",0x16a,
                     "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY"
                     ,0,0);
    return 6;
  }
  uVar11 = param_1 * 0x10 - 1;
  uVar11 = uVar11 >> 1 | uVar11;
  uVar11 = uVar11 | uVar11 >> 2;
  uVar11 = uVar11 | uVar11 >> 4;
  uVar11 = uVar11 | uVar11 >> 8;
  uVar11 = uVar11 | uVar11 >> 0x10;
  uVar11 = uVar11 | uVar11 >> 0x20;
  lVar12 = uVar11 + 1;
  if (lVar12 == 0) goto LAB_00116e00;
  if (param_1 <= lVar8) {
    lVar8 = *(long *)this;
    uVar11 = param_1;
    while (lVar8 != 0) {
      if (*(ulong *)(lVar8 + -8) <= uVar11) {
LAB_00116c8a:
        if (lVar12 != lVar10) {
          uVar5 = _realloc(this,lVar12);
          if ((int)uVar5 != 0) {
            return uVar5;
          }
          lVar8 = *(long *)this;
          if (lVar8 == 0) {
            _DAT_00000000 = 0;
                    /* WARNING: Does not return */
            pcVar2 = (code *)invalidInstructionException();
            (*pcVar2)();
          }
        }
        *(long *)(lVar8 + -8) = param_1;
        return 0;
      }
      while (plVar13 = (long *)(uVar11 * 0x10 + lVar8), *plVar13 == 0) {
        uVar11 = uVar11 + 1;
        if (*(ulong *)(lVar8 + -8) <= uVar11) goto LAB_00116c8a;
      }
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
        pOVar1 = (Object *)*plVar13;
        cVar4 = predelete_handler(pOVar1);
        if (cVar4 != '\0') {
          (**(code **)(*(long *)pOVar1 + 0x140))(pOVar1);
          Memory::free_static(pOVar1,false);
        }
      }
      uVar11 = uVar11 + 1;
      lVar8 = *(long *)this;
    }
    goto LAB_00116c56;
  }
  if (lVar12 == lVar10) {
LAB_00116d73:
    puVar9 = *(undefined8 **)this;
    if (puVar9 == (undefined8 *)0x0) {
LAB_00116c56:
                    /* WARNING: Does not return */
      pcVar2 = (code *)invalidInstructionException();
      (*pcVar2)();
    }
    lVar8 = puVar9[-1];
    if (param_1 <= lVar8) goto LAB_00116d55;
  }
  else {
    if (lVar8 != 0) {
      uVar5 = _realloc(this,lVar12);
      if ((int)uVar5 != 0) {
        return uVar5;
      }
      goto LAB_00116d73;
    }
    puVar6 = (undefined8 *)Memory::alloc_static(uVar11 + 0x11,false);
    if (puVar6 == (undefined8 *)0x0) {
      _err_print_error("resize","./core/templates/cowdata.h",0x171,"Parameter \"mem_new\" is null.",
                       0,0);
      return 6;
    }
    puVar9 = puVar6 + 2;
    *puVar6 = 1;
    puVar6[1] = 0;
    *(undefined8 **)this = puVar9;
    lVar8 = 0;
  }
  uVar3 = _LC6;
  puVar6 = puVar9 + lVar8 * 2;
  do {
    *puVar6 = 0;
    puVar7 = puVar6 + 2;
    *(undefined4 *)(puVar6 + 1) = uVar3;
    puVar6 = puVar7;
  } while (puVar7 != puVar9 + param_1 * 2);
LAB_00116d55:
  puVar9[-1] = param_1;
  return 0;
}



/* void call_with_variant_args_dv<__UnexistingClass, StringName const&, int>(__UnexistingClass*,
   void (__UnexistingClass::*)(StringName const&, int), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,StringName_const&,int>
               (__UnexistingClass *param_1,_func_void_StringName_ptr_int *param_2,Variant **param_3,
               int param_4,CallError *param_5,Vector *param_6)

{
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
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00116fa8;
      puVar10 = (undefined4 *)*plVar8;
LAB_00116ffd:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00116fa8:
        uVar7 = 4;
        goto LAB_00116fad;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00117018;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_00116ffd;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00117018:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_StringName_ptr_int **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,2);
    uVar4 = _LC72;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_int(this);
    cVar5 = Variant::can_convert_strict(*puVar10,0x15);
    uVar4 = _LC71;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_38);
    (*param_2)((StringName *)(param_1 + (long)param_3),(int)&local_38);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_00116fad:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, int>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<StringName_const&,int>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC63,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001170b6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,StringName_const&,int>
            (p_Var2,(_func_void_StringName_ptr_int *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001170b6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, StringName const&, bool>(__UnexistingClass*,
   void (__UnexistingClass::*)(StringName const&, bool), Variant const**, int, Callable::CallError&,
   Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,StringName_const&,bool>
               (__UnexistingClass *param_1,_func_void_StringName_ptr_bool *param_2,Variant **param_3
               ,int param_4,CallError *param_5,Vector *param_6)

{
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
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_001173d8;
      puVar10 = (undefined4 *)*plVar8;
LAB_0011742d:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_001173d8:
        uVar7 = 4;
        goto LAB_001173dd;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00117448;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0011742d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00117448:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_StringName_ptr_bool **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,1);
    uVar4 = _LC147;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_bool(this);
    cVar5 = Variant::can_convert_strict(*puVar10,0x15);
    uVar4 = _LC71;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_38);
    (*param_2)((StringName *)(param_1 + (long)param_3),SUB81(&local_38,0));
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_001173dd:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, bool>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<StringName_const&,bool>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC63,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_001174e6;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,StringName_const&,bool>
            (p_Var2,(_func_void_StringName_ptr_bool *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_001174e6:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_with_variant_args_dv<__UnexistingClass, StringName const&, double>(__UnexistingClass*,
   void (__UnexistingClass::*)(StringName const&, double), Variant const**, int,
   Callable::CallError&, Vector<Variant> const&) */

void call_with_variant_args_dv<__UnexistingClass,StringName_const&,double>
               (__UnexistingClass *param_1,_func_void_StringName_ptr_double *param_2,
               Variant **param_3,int param_4,CallError *param_5,Vector *param_6)

{
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
  double dVar13;
  long in_stack_00000008;
  long local_38;
  long local_30;
  
  plVar8 = (long *)CONCAT44(in_register_0000000c,param_4);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  uVar11 = (uint)param_5;
  if (uVar11 < 3) {
    lVar1 = *(long *)(in_stack_00000008 + 8);
    iVar6 = 2 - uVar11;
    if (lVar1 == 0) {
      if (iVar6 != 0) goto LAB_00117808;
      puVar10 = (undefined4 *)*plVar8;
LAB_0011785d:
      this = (Variant *)plVar8[1];
    }
    else {
      lVar2 = *(long *)(lVar1 + -8);
      iVar12 = (int)lVar2;
      if (iVar12 < iVar6) {
LAB_00117808:
        uVar7 = 4;
        goto LAB_0011780d;
      }
      if (uVar11 == 0) {
        lVar9 = (long)(iVar12 + -2);
        if (lVar2 <= lVar9) goto LAB_00117878;
        puVar10 = (undefined4 *)(lVar1 + lVar9 * 0x18);
      }
      else {
        puVar10 = (undefined4 *)*plVar8;
        if (uVar11 == 2) goto LAB_0011785d;
      }
      lVar9 = (long)(int)((uVar11 ^ 1) + (iVar12 - iVar6));
      if (lVar2 <= lVar9) {
LAB_00117878:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar9,lVar2,"p_index","size()","",false,
                   true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar3 = (code *)invalidInstructionException();
        (*pcVar3)();
      }
      this = (Variant *)(lVar1 + lVar9 * 0x18);
    }
    *(undefined4 *)param_6 = 0;
    if (((ulong)param_2 & 1) != 0) {
      param_2 = *(_func_void_StringName_ptr_double **)
                 (param_2 + *(long *)(param_1 + (long)param_3) + -1);
    }
    cVar5 = Variant::can_convert_strict(*(undefined4 *)this,3);
    uVar4 = _LC148;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    dVar13 = Variant::operator_cast_to_double(this);
    cVar5 = Variant::can_convert_strict(*puVar10,0x15);
    uVar4 = _LC71;
    if (cVar5 == '\0') {
      *(undefined4 *)param_6 = 2;
      *(undefined8 *)(param_6 + 4) = uVar4;
    }
    Variant::operator_cast_to_StringName((Variant *)&local_38);
    (*param_2)((StringName *)(param_1 + (long)param_3),dVar13);
    if ((StringName::configured != '\0') && (local_38 != 0)) {
      StringName::unref();
    }
  }
  else {
    uVar7 = 3;
LAB_0011780d:
    *(undefined4 *)param_6 = uVar7;
    *(undefined4 *)(param_6 + 8) = 2;
  }
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, double>::call(Object*, Variant const**, int, Callable::CallError&)
   const */

Object * MethodBindT<StringName_const&,double>::call
                   (Object *param_1,Variant **param_2,int param_3,CallError *param_4)

{
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
  
  p_Var2 = (__UnexistingClass *)CONCAT44(in_register_00000014,param_3);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (((p_Var2 != (__UnexistingClass *)0x0) && (*(long *)(p_Var2 + 8) != 0)) &&
     (*(char *)(*(long *)(p_Var2 + 8) + 0x2e) != '\0')) {
    StringName::StringName((StringName *)&local_48,(StringName *)(param_2 + 3));
    if (*(long *)(p_Var2 + 8) == 0) {
      plVar1 = *(long **)(p_Var2 + 0x118);
      if (plVar1 == (long *)0x0) {
        plVar1 = (long *)(**(code **)(*(long *)p_Var2 + 0x40))(p_Var2);
      }
    }
    else {
      plVar1 = (long *)(*(long *)(p_Var2 + 8) + 0x20);
    }
    in_R8 = (CallError *)((ulong)in_R8 & 0xffffffff);
    if (local_48 == (char *)*plVar1) {
      if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
        StringName::unref();
      }
      MethodBind::get_name();
      local_48 = "Cannot call method bind \'%s\' on placeholder instance.";
      local_50 = 0;
      local_40 = 0x35;
      String::parse_latin1((StrRange *)&local_50);
      vformat<StringName>((StringName *)&local_48,(StrRange *)&local_50,&local_58);
      _err_print_error(&_LC63,"./core/object/method_bind.h",0x154,
                       "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()"
                       ,(StringName *)&local_48,0,0);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_50);
      if ((StringName::configured != '\0') && (local_58 != 0)) {
        StringName::unref();
      }
      *(undefined4 *)param_1 = 0;
      *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
      goto LAB_00117916;
    }
    if ((StringName::configured != '\0') && (local_48 != (char *)0x0)) {
      StringName::unref();
    }
  }
  call_with_variant_args_dv<__UnexistingClass,StringName_const&,double>
            (p_Var2,(_func_void_StringName_ptr_double *)param_2[0xb],(Variant **)param_2[0xc],
             (int)param_4,in_R8,in_R9);
  *(undefined4 *)param_1 = 0;
  *(undefined1 (*) [16])(param_1 + 8) = (undefined1  [16])0x0;
LAB_00117916:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return param_1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void call_get_argument_type_info_helper<StringName const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<StringName_const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined8 uVar3;
  long lVar4;
  int iVar5;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar5 = *param_2;
  if (iVar5 != param_1) goto LAB_00117b17;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,0x15);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00117c15:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00117c15;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar3;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar3;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar4;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar5 = *param_2;
LAB_00117b17:
  *param_2 = iVar5 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<StringName const&, StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo *
MethodBindT<StringName_const&,StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_24;
  long local_20;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_20 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_24 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_24,pPVar1);
  if (local_20 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<double, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<double,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00117e78;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 3;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_00117f5f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_00117f5f;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00117e78:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<bool, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<bool,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00118078;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 1;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011815f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011815f;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00118078:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<int, StringName const&>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<int,StringName_const&>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  undefined8 local_50;
  undefined8 local_48;
  undefined4 local_40;
  long local_30;
  
  puVar5 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX == 0) {
    local_68 = (undefined *)0x0;
    local_50 = 0;
    local_48 = 0;
    local_40 = 6;
    local_70 = local_70 & 0xffffffff00000000;
    local_60 = (undefined1  [16])0x0;
    call_get_argument_type_info_helper<StringName_const&>
              (0,(int *)&local_70,(PropertyInfo *)&local_68);
    uVar3 = local_60._0_8_;
    uVar4 = local_60._8_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *puVar5 = local_68._0_4_;
    *(undefined8 *)(puVar5 + 2) = uVar3;
    *(undefined8 *)(puVar5 + 4) = uVar4;
    puVar5[6] = (undefined4)local_50;
    *(undefined8 *)(puVar5 + 8) = local_48;
    puVar5[10] = local_40;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
    goto LAB_00118278;
  }
  local_70 = 0;
  local_78 = 0;
  local_68 = &_LC10;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_60._0_8_;
  local_60 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_78);
  local_80 = 0;
  *puVar5 = 2;
  puVar5[6] = 0;
  *(undefined8 *)(puVar5 + 8) = 0;
  *(undefined1 (*) [16])(puVar5 + 2) = (undefined1  [16])0x0;
  if (local_78 == 0) {
    puVar5[10] = 6;
LAB_0011835f:
    StringName::operator=((StringName *)(puVar5 + 4),(StringName *)&local_70);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar5 + 8),(CowData *)&local_78);
    puVar5[10] = 6;
    if (puVar5[6] != 0x11) goto LAB_0011835f;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar5 + 8),false);
    if (*(undefined **)(puVar5 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar5 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
  if ((StringName::configured != '\0') && (local_70 != 0)) {
    StringName::unref();
  }
LAB_00118278:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar5;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&>::_gen_argument_type_info(int param_1)

{
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar1;
  long in_FS_OFFSET;
  int local_14;
  long local_10;
  
  pPVar1 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar1 = 0;
  *(undefined4 *)(pPVar1 + 0x18) = 0;
  *(undefined8 *)(pPVar1 + 0x20) = 0;
  *(undefined4 *)(pPVar1 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar1 + 8) = (undefined1  [16])0x0;
  local_14 = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_14,pPVar1);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar1;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::_gen_argument_type_info(int) const */

undefined4 *
MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  undefined8 uVar3;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar4;
  long in_FS_OFFSET;
  uint local_cc;
  undefined8 local_c8;
  undefined8 local_c0;
  long local_b8;
  ulong local_b0;
  long local_a8;
  undefined1 local_a0 [16];
  undefined8 local_90;
  long local_88;
  undefined4 local_80;
  char *local_78;
  long local_70;
  ulong local_68;
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  puVar4 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_a8 = 0;
    local_90 = 0;
    local_88 = 0;
    local_80 = 6;
    local_cc = 0;
    local_a0._0_8_ = 0;
    local_a0._8_8_ = 0;
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,(int *)&local_cc,(PropertyInfo *)&local_a8);
    if (in_EDX == local_cc) {
      local_b8 = 0;
      local_78 = "";
      local_c0 = 0;
      local_70 = 0;
      String::parse_latin1((StrRange *)&local_c0);
      local_c8 = 0;
      local_78 = (char *)CONCAT44(local_78._4_4_,2);
      local_70 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_70,(CowData *)&local_c8);
      local_68 = 0;
      local_60 = 0;
      local_58 = 0;
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_c0);
      local_50 = 6;
      if (local_60 == 0x11) {
        StringName::StringName((StringName *)&local_b0,(String_conflict *)&local_58,false);
        if (local_68 == local_b0) {
          if ((StringName::configured != '\0') && (local_b0 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_68 = local_b0;
        }
      }
      else {
        StringName::operator=((StringName *)&local_68,(StringName *)&local_b8);
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_c0);
      if ((StringName::configured != '\0') && (local_b8 != 0)) {
        StringName::unref();
      }
      local_a8 = CONCAT44(local_a8._4_4_,local_78._0_4_);
      if (local_a0._0_8_ != local_70) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
        local_a0._0_8_ = local_70;
        local_70 = 0;
      }
      if (local_a0._8_8_ != local_68) {
        StringName::unref();
        local_a0._8_8_ = local_68;
        local_68 = 0;
      }
      local_90 = CONCAT44(local_90._4_4_,local_60);
      if (local_88 != local_58) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
        local_88 = local_58;
        local_58 = 0;
      }
      local_80 = local_50;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_78);
    }
    uVar3 = local_a0._8_8_;
    uVar2 = local_a0._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_a0._8_8_;
    local_a0 = auVar1 << 0x40;
    *puVar4 = (undefined4)local_a8;
    *(undefined8 *)(puVar4 + 2) = uVar2;
    *(undefined8 *)(puVar4 + 4) = uVar3;
    puVar4[6] = (undefined4)local_90;
    *(long *)(puVar4 + 8) = local_88;
    puVar4[10] = local_80;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_a0);
    goto LAB_0011854d;
  }
  local_a8 = 0;
  local_b0 = 0;
  local_78 = "Texture2D";
  local_70 = 9;
  String::parse_latin1((StrRange *)&local_b0);
  local_b8 = 0;
  *puVar4 = 0x18;
  puVar4[6] = 0x11;
  *(undefined8 *)(puVar4 + 8) = 0;
  *(undefined1 (*) [16])(puVar4 + 2) = (undefined1  [16])0x0;
  if (local_b0 == 0) {
    puVar4[10] = 6;
LAB_0011861f:
    StringName::StringName((StringName *)&local_78,(String_conflict *)(puVar4 + 8),false);
    if (*(char **)(puVar4 + 4) == local_78) {
      if ((StringName::configured != '\0') && (local_78 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(char **)(puVar4 + 4) = local_78;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar4 + 8),(CowData *)&local_b0);
    puVar4[10] = 6;
    if (puVar4[6] == 0x11) goto LAB_0011861f;
    StringName::operator=((StringName *)(puVar4 + 4),(StringName *)&local_a8);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
  if ((StringName::configured != '\0') && (local_a8 != 0)) {
    StringName::unref();
  }
LAB_0011854d:
  if (local_40 == *(long *)(in_FS_OFFSET + 0x28)) {
    return puVar4;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, bool>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&,bool>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_001188d4;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,1);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_001189d5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_001189d5;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_001188d4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindT<StringName const&, double>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&,double>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00118b64;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00118c65:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00118c65;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00118b64:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindT<StringName const&, int>::_gen_argument_type_info(int) const */

PropertyInfo * MethodBindT<StringName_const&,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
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
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar5 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar5 = 0;
  *(undefined4 *)(pPVar5 + 0x18) = 0;
  *(undefined8 *)(pPVar5 + 0x20) = 0;
  *(undefined4 *)(pPVar5 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar5 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_8c,pPVar5);
  if (in_EDX != local_8c) goto LAB_00118df4;
  local_78 = 0;
  local_68 = &_LC10;
  local_80 = 0;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
  local_50 = 0;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_00118ef5:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_00118ef5;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar5 = local_68._0_4_;
  if (*(long *)(pPVar5 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 8));
    uVar3 = local_60._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    *(undefined8 *)(pPVar5 + 8) = uVar3;
  }
  if (*(long *)(pPVar5 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar3 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar5 + 0x10) = uVar3;
  }
  *(int *)(pPVar5 + 0x18) = local_50;
  if (*(long *)(pPVar5 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar5 + 0x20));
    lVar4 = local_48;
    local_48 = 0;
    *(long *)(pPVar5 + 0x20) = lVar4;
  }
  *(undefined4 *)(pPVar5 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00118df4:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar5;
}



/* MethodBindTRC<float, StringName const&, int>::_gen_argument_type_info(int) const */

undefined4 * MethodBindTRC<float,StringName_const&,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  undefined8 uVar5;
  undefined8 uVar6;
  uint in_EDX;
  undefined4 in_register_0000003c;
  undefined4 *puVar7;
  long in_FS_OFFSET;
  uint local_bc;
  undefined8 local_b8;
  long local_b0;
  long local_a8;
  long local_a0;
  long local_98;
  undefined1 local_90 [16];
  undefined8 local_80;
  long local_78;
  undefined4 local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  puVar7 = (undefined4 *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  if (in_EDX < 2) {
    local_98 = 0;
    local_80 = 0;
    local_78 = 0;
    local_70 = 6;
    local_bc = 0;
    local_90._0_8_ = 0;
    local_90._8_8_ = 0;
    call_get_argument_type_info_helper<StringName_const&>
              (in_EDX,(int *)&local_bc,(PropertyInfo *)&local_98);
    if (in_EDX == local_bc) {
      local_a8 = 0;
      local_b0 = 0;
      local_68 = &_LC10;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
      String::parse_latin1((StrRange *)&local_b0);
      local_b8 = 0;
      local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
      local_50 = 0;
      local_48 = 0;
      local_60 = (undefined1  [16])0x0;
      if (local_b0 == 0) {
LAB_0011930b:
        local_40 = 6;
        StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_a8);
      }
      else {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_b0);
        local_40 = 6;
        if (local_50 != 0x11) goto LAB_0011930b;
        StringName::StringName((StringName *)&local_a0,(String_conflict *)&local_48,false);
        if (local_60._8_8_ == local_a0) {
          if ((StringName::configured != '\0') && (local_a0 != 0)) {
            StringName::unref();
          }
        }
        else {
          StringName::unref();
          local_60._8_8_ = local_a0;
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b8);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_b0);
      if ((StringName::configured != '\0') && (local_a8 != 0)) {
        StringName::unref();
      }
      local_98 = CONCAT44(local_98._4_4_,local_68._0_4_);
      if (local_90._0_8_ != local_60._0_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
        local_90._0_8_ = local_60._0_8_;
        auVar4._8_8_ = 0;
        auVar4._0_8_ = local_60._8_8_;
        local_60 = auVar4 << 0x40;
      }
      if (local_90._8_8_ != local_60._8_8_) {
        StringName::unref();
        local_90._8_8_ = local_60._8_8_;
        local_60._8_8_ = 0;
      }
      local_80 = CONCAT44(local_80._4_4_,local_50);
      if (local_78 != local_48) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_78);
        local_78 = local_48;
        local_48 = 0;
      }
      local_70 = local_40;
      PropertyInfo::~PropertyInfo((PropertyInfo *)&local_68);
    }
    uVar6 = local_90._8_8_;
    uVar5 = local_90._0_8_;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_90._8_8_;
    local_90 = auVar2 << 0x40;
    *puVar7 = (undefined4)local_98;
    *(undefined8 *)(puVar7 + 2) = uVar5;
    *(undefined8 *)(puVar7 + 4) = uVar6;
    puVar7[6] = (undefined4)local_80;
    *(long *)(puVar7 + 8) = local_78;
    puVar7[10] = local_70;
    CowData<char32_t>::_unref((CowData<char32_t> *)local_90);
    goto LAB_001191a6;
  }
  local_98 = 0;
  local_a0 = 0;
  local_68 = &_LC10;
  auVar1._8_8_ = 0;
  auVar1._0_8_ = local_60._8_8_;
  local_60 = auVar1 << 0x40;
  String::parse_latin1((StrRange *)&local_a0);
  local_a8 = 0;
  *puVar7 = 3;
  puVar7[6] = 0;
  *(undefined8 *)(puVar7 + 8) = 0;
  *(undefined1 (*) [16])(puVar7 + 2) = (undefined1  [16])0x0;
  if (local_a0 == 0) {
    puVar7[10] = 6;
LAB_001191d7:
    StringName::operator=((StringName *)(puVar7 + 4),(StringName *)&local_98);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)(puVar7 + 8),(CowData *)&local_a0);
    puVar7[10] = 6;
    if (puVar7[6] != 0x11) goto LAB_001191d7;
    StringName::StringName((StringName *)&local_68,(String_conflict *)(puVar7 + 8),false);
    if (*(undefined **)(puVar7 + 4) == local_68) {
      if ((StringName::configured != '\0') && (local_68 != (undefined *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      *(undefined **)(puVar7 + 4) = local_68;
    }
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a8);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_a0);
  if ((StringName::configured != '\0') && (local_98 != 0)) {
    StringName::unref();
  }
LAB_001191a6:
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return puVar7;
}



/* void call_get_argument_type_info_helper<Ref<Texture2D> const&>(int, int&, PropertyInfo&) */

void call_get_argument_type_info_helper<Ref<Texture2D>const&>
               (int param_1,int *param_2,PropertyInfo *param_3)

{
  undefined1 auVar1 [16];
  undefined8 uVar2;
  long lVar3;
  int iVar4;
  long in_FS_OFFSET;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  char *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  iVar4 = *param_2;
  if (iVar4 != param_1) goto LAB_00119447;
  local_78 = 0;
  local_68 = "Texture2D";
  local_80 = 0;
  local_60._0_8_ = 9;
  String::parse_latin1((StrRange *)&local_80);
  local_88 = 0;
  local_68 = (char *)CONCAT44(local_68._4_4_,0x18);
  local_50 = 0x11;
  local_48 = 0;
  local_60 = (undefined1  [16])0x0;
  if (local_80 == 0) {
LAB_0011960d:
    local_40 = 6;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 == 0x11) goto LAB_0011960d;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)param_3 = local_68._0_4_;
  if (*(long *)(param_3 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 8));
    uVar2 = local_60._0_8_;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    *(undefined8 *)(param_3 + 8) = uVar2;
  }
  if (*(long *)(param_3 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar2 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(param_3 + 0x10) = uVar2;
  }
  *(int *)(param_3 + 0x18) = local_50;
  if (*(long *)(param_3 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(param_3 + 0x20));
    lVar3 = local_48;
    local_48 = 0;
    *(long *)(param_3 + 0x20) = lVar3;
  }
  *(undefined4 *)(param_3 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
  iVar4 = *param_2;
LAB_00119447:
  *param_2 = iVar4 + 1;
  if (local_30 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return;
}



/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined8 uVar4;
  long lVar5;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar6;
  long in_FS_OFFSET;
  int local_8c;
  undefined8 local_88;
  long local_80;
  long local_78;
  long local_70;
  undefined *local_68;
  undefined1 local_60 [16];
  int local_50;
  long local_48;
  undefined4 local_40;
  long local_30;
  
  pPVar6 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_30 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar6 = 0;
  *(undefined4 *)(pPVar6 + 0x18) = 0;
  *(undefined8 *)(pPVar6 + 0x20) = 0;
  *(undefined4 *)(pPVar6 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar6 + 8) = (undefined1  [16])0x0;
  local_8c = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_8c,pPVar6);
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(in_EDX,&local_8c,pPVar6);
  if (in_EDX == local_8c) {
    local_78 = 0;
    local_68 = &_LC10;
    local_80 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_60._8_8_;
    local_60 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,3);
    if (local_80 == 0) goto LAB_00119870;
LAB_00119798:
    local_48 = 0;
    local_50 = 0;
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_48,(CowData *)&local_80);
    local_40 = 6;
    if (local_50 != 0x11) goto LAB_0011987d;
    StringName::StringName((StringName *)&local_70,(String_conflict *)&local_48,false);
    if (local_60._8_8_ == local_70) {
      if ((StringName::configured != '\0') && (local_70 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_60._8_8_ = local_70;
    }
  }
  else {
    local_8c = local_8c + 1;
    if (in_EDX != local_8c) goto LAB_00119700;
    local_78 = 0;
    local_68 = &_LC10;
    local_80 = 0;
    auVar2._8_8_ = 0;
    auVar2._0_8_ = local_60._8_8_;
    local_60 = auVar2 << 0x40;
    String::parse_latin1((StrRange *)&local_80);
    local_68 = (undefined *)CONCAT44(local_68._4_4_,2);
    if (local_80 != 0) goto LAB_00119798;
LAB_00119870:
    local_48 = 0;
    local_50 = 0;
    local_60 = (undefined1  [16])0x0;
    local_88 = 0;
LAB_0011987d:
    local_40 = 6;
    StringName::operator=((StringName *)(local_60 + 8),(StringName *)&local_78);
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_88);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_80);
  if ((StringName::configured != '\0') && (local_78 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar6 = local_68._0_4_;
  if (*(long *)(pPVar6 + 8) != local_60._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar6 + 8));
    uVar4 = local_60._0_8_;
    auVar3._8_8_ = 0;
    auVar3._0_8_ = local_60._8_8_;
    local_60 = auVar3 << 0x40;
    *(undefined8 *)(pPVar6 + 8) = uVar4;
  }
  if (*(long *)(pPVar6 + 0x10) != local_60._8_8_) {
    StringName::unref();
    uVar4 = local_60._8_8_;
    local_60._8_8_ = 0;
    *(undefined8 *)(pPVar6 + 0x10) = uVar4;
  }
  *(int *)(pPVar6 + 0x18) = local_50;
  if (*(long *)(pPVar6 + 0x20) != local_48) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar6 + 0x20));
    lVar5 = local_48;
    local_48 = 0;
    *(long *)(pPVar6 + 0x20) = lVar5;
  }
  *(undefined4 *)(pPVar6 + 0x28) = local_40;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_48);
  if ((StringName::configured != '\0') && (local_60._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_60);
LAB_00119700:
  if (local_30 == *(long *)(in_FS_OFFSET + 0x28)) {
    return pPVar6;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::_gen_argument_type_info(int)
   const */

PropertyInfo *
MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::_gen_argument_type_info(int param_1)

{
  undefined1 auVar1 [16];
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  undefined1 auVar4 [16];
  int iVar5;
  undefined8 uVar6;
  long lVar7;
  int in_EDX;
  undefined4 in_register_0000003c;
  PropertyInfo *pPVar8;
  long in_FS_OFFSET;
  CowData<char32_t> *local_b8;
  int local_9c;
  undefined8 local_98;
  long local_90;
  long local_88;
  long local_80;
  undefined *local_78;
  undefined1 local_70 [16];
  int local_60;
  long local_58;
  undefined4 local_50;
  long local_40;
  
  pPVar8 = (PropertyInfo *)CONCAT44(in_register_0000003c,param_1);
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)pPVar8 = 0;
  *(undefined4 *)(pPVar8 + 0x18) = 0;
  *(undefined8 *)(pPVar8 + 0x20) = 0;
  *(undefined4 *)(pPVar8 + 0x28) = 6;
  *(undefined1 (*) [16])(pPVar8 + 8) = (undefined1  [16])0x0;
  local_9c = 0;
  call_get_argument_type_info_helper<StringName_const&>(in_EDX,&local_9c,pPVar8);
  iVar5 = local_9c;
  if (in_EDX == local_9c) {
    local_88 = 0;
    local_78 = &_LC10;
    local_90 = 0;
    auVar1._8_8_ = 0;
    auVar1._0_8_ = local_70._8_8_;
    local_70 = auVar1 << 0x40;
    String::parse_latin1((StrRange *)&local_90);
    local_98 = 0;
    local_78 = (undefined *)CONCAT44(local_78._4_4_,2);
    local_60 = 0;
    local_58 = 0;
    local_70 = (undefined1  [16])0x0;
    if (local_90 == 0) {
LAB_00119c29:
      local_50 = 6;
      StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
    }
    else {
      CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
      local_50 = 6;
      if (local_60 != 0x11) goto LAB_00119c29;
      StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
      if (local_70._8_8_ == local_80) {
        if ((StringName::configured != '\0') && (local_80 != 0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_70._8_8_ = local_80;
      }
    }
    local_b8 = (CowData<char32_t> *)&local_58;
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
    if ((StringName::configured != '\0') && (local_88 != 0)) {
      StringName::unref();
    }
    *(undefined4 *)pPVar8 = local_78._0_4_;
    if (*(long *)(pPVar8 + 8) != local_70._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar8 + 8));
      uVar6 = local_70._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_70._8_8_;
      local_70 = auVar3 << 0x40;
      *(undefined8 *)(pPVar8 + 8) = uVar6;
    }
    if (*(long *)(pPVar8 + 0x10) != local_70._8_8_) {
      StringName::unref();
      uVar6 = local_70._8_8_;
      local_70._8_8_ = 0;
      *(undefined8 *)(pPVar8 + 0x10) = uVar6;
    }
    *(int *)(pPVar8 + 0x18) = local_60;
    if (*(long *)(pPVar8 + 0x20) != local_58) {
      CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar8 + 0x20));
      lVar7 = local_58;
      local_58 = 0;
      *(long *)(pPVar8 + 0x20) = lVar7;
    }
    *(undefined4 *)(pPVar8 + 0x28) = local_50;
    CowData<char32_t>::_unref(local_b8);
    if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
      StringName::unref();
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
  }
  local_9c = iVar5 + 1;
  call_get_argument_type_info_helper<Ref<Texture2D>const&>(in_EDX,&local_9c,pPVar8);
  if (in_EDX != local_9c) goto LAB_00119a32;
  local_88 = 0;
  local_78 = &_LC10;
  local_90 = 0;
  auVar2._8_8_ = 0;
  auVar2._0_8_ = local_70._8_8_;
  local_70 = auVar2 << 0x40;
  String::parse_latin1((StrRange *)&local_90);
  local_98 = 0;
  local_78 = (undefined *)CONCAT44(local_78._4_4_,3);
  local_60 = 0;
  local_58 = 0;
  local_70 = (undefined1  [16])0x0;
  if (local_90 == 0) {
LAB_00119d31:
    local_50 = 6;
    StringName::operator=((StringName *)(local_70 + 8),(StringName *)&local_88);
  }
  else {
    CowData<char32_t>::_ref((CowData<char32_t> *)&local_58,(CowData *)&local_90);
    local_50 = 6;
    if (local_60 != 0x11) goto LAB_00119d31;
    StringName::StringName((StringName *)&local_80,(String_conflict *)&local_58,false);
    if (local_70._8_8_ == local_80) {
      if ((StringName::configured != '\0') && (local_80 != 0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_70._8_8_ = local_80;
    }
  }
  local_b8 = (CowData<char32_t> *)&local_58;
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_98);
  CowData<char32_t>::_unref((CowData<char32_t> *)&local_90);
  if ((StringName::configured != '\0') && (local_88 != 0)) {
    StringName::unref();
  }
  *(undefined4 *)pPVar8 = local_78._0_4_;
  if (*(long *)(pPVar8 + 8) != local_70._0_8_) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar8 + 8));
    uVar6 = local_70._0_8_;
    auVar4._8_8_ = 0;
    auVar4._0_8_ = local_70._8_8_;
    local_70 = auVar4 << 0x40;
    *(undefined8 *)(pPVar8 + 8) = uVar6;
  }
  if (*(long *)(pPVar8 + 0x10) != local_70._8_8_) {
    StringName::unref();
    uVar6 = local_70._8_8_;
    local_70._8_8_ = 0;
    *(undefined8 *)(pPVar8 + 0x10) = uVar6;
  }
  *(int *)(pPVar8 + 0x18) = local_60;
  if (*(long *)(pPVar8 + 0x20) != local_58) {
    CowData<char32_t>::_unref((CowData<char32_t> *)(pPVar8 + 0x20));
    lVar7 = local_58;
    local_58 = 0;
    *(long *)(pPVar8 + 0x20) = lVar7;
  }
  *(undefined4 *)(pPVar8 + 0x28) = local_50;
  CowData<char32_t>::_unref(local_b8);
  if ((StringName::configured != '\0') && (local_70._8_8_ != 0)) {
    StringName::unref();
  }
  CowData<char32_t>::_unref((CowData<char32_t> *)local_70);
LAB_00119a32:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return pPVar8;
}



/* WARNING: Control flow encountered bad instruction data */
/* List<StringName, DefaultAllocator>::~List() */

void __thiscall List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodDefinition::~MethodDefinition() */

void __thiscall MethodDefinition::~MethodDefinition(MethodDefinition *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* PropertyInfo::~PropertyInfo() */

void __thiscall PropertyInfo::~PropertyInfo(PropertyInfo *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Array>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Array>::~MethodBindTRC(MethodBindTRC<Array> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<Array const&>::~MethodBindT() */

void __thiscall MethodBindT<Array_const&>::~MethodBindT(MethodBindT<Array_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<>::~MethodBindT() */

void __thiscall MethodBindT<>::~MethodBindT(MethodBindT<> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&>::~MethodBindT() */

void __thiscall MethodBindT<StringName_const&>::~MethodBindT(MethodBindT<StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<float, StringName const&, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<float,StringName_const&,int>::~MethodBindTRC
          (MethodBindTRC<float,StringName_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Ref<Texture2D>, StringName const&, int>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<Ref<Texture2D>,StringName_const&,int>::~MethodBindTRC
          (MethodBindTRC<Ref<Texture2D>,StringName_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<int, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<int,StringName_const&>::~MethodBindTRC(MethodBindTRC<int,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, int>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,int>::~MethodBindT(MethodBindT<StringName_const&,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, int, Ref<Texture2D> const&, float>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float>::~MethodBindT
          (MethodBindT<StringName_const&,int,Ref<Texture2D>const&,float> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, Ref<Texture2D> const&, float, int>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int>::~MethodBindT
          (MethodBindT<StringName_const&,Ref<Texture2D>const&,float,int> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<bool, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<bool,StringName_const&>::~MethodBindTRC(MethodBindTRC<bool,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, bool>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,bool>::~MethodBindT(MethodBindT<StringName_const&,bool> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<double, StringName const&>::~MethodBindTRC() */

void __thiscall
MethodBindTRC<double,StringName_const&>::~MethodBindTRC
          (MethodBindTRC<double,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, double>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,double>::~MethodBindT(MethodBindT<StringName_const&,double> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindTRC<Vector<String>>::~MethodBindTRC() */

void __thiscall MethodBindTRC<Vector<String>>::~MethodBindTRC(MethodBindTRC<Vector<String>> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* MethodBindT<StringName const&, StringName const&>::~MethodBindT() */

void __thiscall
MethodBindT<StringName_const&,StringName_const&>::~MethodBindT
          (MethodBindT<StringName_const&,StringName_const&> *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* StringName::~StringName() */

void __thiscall StringName::~StringName(StringName *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}



/* WARNING: Control flow encountered bad instruction data */
/* SpriteFrames::~SpriteFrames() */

void __thiscall SpriteFrames::~SpriteFrames(SpriteFrames *this)

{
                    /* WARNING: Bad instruction - Truncating control flow here */
  halt_baddata();
}

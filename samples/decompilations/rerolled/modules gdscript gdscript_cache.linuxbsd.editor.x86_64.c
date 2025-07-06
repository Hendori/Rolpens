/* CowData<ObjectID>::_copy_on_write() [clone .isra.0] */void CowData<ObjectID>::_copy_on_write(CowData<ObjectID> *this) {
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
/* HashMap<String, GDScriptParserRef*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, GDScriptParserRef*> > >::erase(String const&) [clone
   .isra.0] */ulong HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>::erase(HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>> *this, String *param_1) {
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
                  if (( uVar31 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar31 * lVar33,auVar23._8_8_ = 0,auVar23._0_8_ = uVar30,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar5 + uVar29 ) - SUB164(auVar13 * auVar23, 8)) * lVar33,auVar24._8_8_ = 0,auVar24._0_8_ = uVar30,uVar39 = uVar32,SUB164(auVar14 * auVar24, 8) == 0) goto LAB_0010049b;
                  goto LAB_00100455;
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
      LAB_00100455:uVar32 = uVar29;
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
   LAB_0010049b:uVar30 = (ulong)uVar32;
   plVar4 = (long*)( lVar36 + uVar30 * 8 );
   *(undefined4*)( lVar6 + uVar30 * 4 ) = 0;
   plVar35 = (long*)*plVar4;
   if (*(long**)( this + 0x18 ) == plVar35) {
      *(long*)( this + 0x18 ) = *plVar35;
      plVar35 = (long*)*plVar4;
      if (*(long**)( this + 0x20 ) != plVar35) goto LAB_001004c1;
   }
 else if (*(long**)( this + 0x20 ) != plVar35) goto LAB_001004c1;
   *(long*)( this + 0x20 ) = plVar35[1];
   plVar35 = (long*)*plVar4;
   LAB_001004c1:if ((long*)plVar35[1] != (long*)0x0) {
      *(long*)plVar35[1] = *plVar35;
      plVar35 = (long*)*plVar4;
   }

   if (*plVar35 != 0) {
      *(long*)( *plVar35 + 8 ) = plVar35[1];
      plVar35 = (long*)*plVar4;
   }

   if (plVar35[2] != 0) {
      LOCK();
      plVar4 = (long*)( plVar35[2] + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar6 = plVar35[2];
         plVar35[2] = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   Memory::free_static(plVar35, false);
   uVar38 = *(ulong*)( this + 8 );
   *(undefined8*)( uVar38 + uVar30 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   return uVar38;
}
/* HashMap<String, Ref<GDScript>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<GDScript> > > >::erase(String const&) [clone
   .isra.0] */ulong HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::erase(HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>> *this, String *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   undefined8 uVar7;
   Object *pOVar8;
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
   char cVar29;
   uint uVar30;
   ulong in_RAX;
   ulong uVar31;
   uint uVar32;
   uint uVar33;
   long lVar34;
   long lVar35;
   long *plVar36;
   long lVar37;
   uint *puVar38;
   ulong uVar39;
   uint uVar40;
   if (*(long*)( this + 8 ) == 0) {
      return in_RAX;
   }

   uVar31 = ( ulong ) * (uint*)( this + 0x2c );
   if (*(uint*)( this + 0x2c ) != 0) {
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar39 = CONCAT44(0, uVar5);
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar30 = String::hash();
      lVar37 = *(long*)( this + 0x10 );
      uVar32 = 1;
      if (uVar30 != 0) {
         uVar32 = uVar30;
      }

      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar32 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar39;
      auVar9 = auVar9 * auVar19;
      lVar34 = auVar9._8_8_;
      uVar31 = auVar9._0_8_;
      uVar30 = *(uint*)( lVar37 + lVar34 * 4 );
      uVar33 = auVar9._8_4_;
      if (uVar30 != 0) {
         uVar40 = 0;
         do {
            if (uVar32 == uVar30) {
               cVar29 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar34 * 8 ) + 0x10 ), param_1);
               if (cVar29 != '\0') {
                  lVar6 = *(long*)( this + 0x10 );
                  lVar37 = *(long*)( this + 8 );
                  uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar31 = CONCAT44(0, uVar5);
                  lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(uVar33 + 1) * lVar34;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar31;
                  lVar35 = SUB168(auVar13 * auVar23, 8);
                  puVar38 = (uint*)( lVar6 + lVar35 * 4 );
                  uVar30 = SUB164(auVar13 * auVar23, 8);
                  uVar32 = *puVar38;
                  if (( uVar32 == 0 ) || ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar32 * lVar34,auVar24._8_8_ = 0,auVar24._0_8_ = uVar31,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar5 + uVar30 ) - SUB164(auVar14 * auVar24, 8)) * lVar34,auVar25._8_8_ = 0,auVar25._0_8_ = uVar31,uVar40 = uVar33,SUB164(auVar15 * auVar25, 8) == 0) goto LAB_0010077b;
                  goto LAB_00100735;
               }

               lVar37 = *(long*)( this + 0x10 );
            }

            uVar40 = uVar40 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(uVar33 + 1) * lVar6;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar39;
            auVar10 = auVar10 * auVar20;
            lVar34 = auVar10._8_8_;
            uVar31 = auVar10._0_8_;
            uVar30 = *(uint*)( lVar37 + lVar34 * 4 );
            uVar33 = auVar10._8_4_;
         }
 while ( ( uVar30 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar30 * lVar6,auVar21._8_8_ = 0,auVar21._0_8_ = uVar39,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar5 + uVar33 ) - SUB164(auVar11 * auVar21, 8)) * lVar6,auVar22._8_8_ = 0,auVar22._0_8_ = uVar39,uVar31 = SUB168(auVar12 * auVar22, 0),uVar40 <= SUB164(auVar12 * auVar22, 8) );
      }

   }

   return uVar31;
   while (auVar16._8_8_ = 0,auVar16._0_8_ = (ulong)uVar32 * lVar34,auVar26._8_8_ = 0,auVar26._0_8_ = uVar31,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar30 + uVar5 ) - SUB164(auVar16 * auVar26, 8)) * lVar34,auVar27._8_8_ = 0,auVar27._0_8_ = uVar31,uVar40 = uVar33,SUB164(auVar17 * auVar27, 8) != 0) {
      LAB_00100735:uVar33 = uVar30;
      puVar1 = (uint*)( lVar6 + (ulong)uVar40 * 4 );
      *puVar38 = *puVar1;
      puVar2 = (undefined8*)( lVar37 + lVar35 * 8 );
      *puVar1 = uVar32;
      puVar3 = (undefined8*)( lVar37 + (ulong)uVar40 * 8 );
      uVar7 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar7;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(uVar33 + 1) * lVar34;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar31;
      lVar35 = SUB168(auVar18 * auVar28, 8);
      puVar38 = (uint*)( lVar6 + lVar35 * 4 );
      uVar30 = SUB164(auVar18 * auVar28, 8);
      uVar32 = *puVar38;
      if (uVar32 == 0) break;
   }
;
   LAB_0010077b:uVar31 = (ulong)uVar33;
   plVar4 = (long*)( lVar37 + uVar31 * 8 );
   *(undefined4*)( lVar6 + uVar31 * 4 ) = 0;
   plVar36 = (long*)*plVar4;
   if (*(long**)( this + 0x18 ) == plVar36) {
      *(long*)( this + 0x18 ) = *plVar36;
      plVar36 = (long*)*plVar4;
      if (*(long**)( this + 0x20 ) != plVar36) goto LAB_001007a1;
   }
 else if (*(long**)( this + 0x20 ) != plVar36) goto LAB_001007a1;
   *(long*)( this + 0x20 ) = plVar36[1];
   plVar36 = (long*)*plVar4;
   LAB_001007a1:if ((long*)plVar36[1] != (long*)0x0) {
      *(long*)plVar36[1] = *plVar36;
      plVar36 = (long*)*plVar4;
   }

   if (*plVar36 != 0) {
      *(long*)( *plVar36 + 8 ) = plVar36[1];
      plVar36 = (long*)*plVar4;
   }

   if (( plVar36[3] != 0 ) && ( cVar29 = RefCounted::unreference() ),cVar29 != '\0') {
      pOVar8 = (Object*)plVar36[3];
      cVar29 = predelete_handler(pOVar8);
      if (cVar29 != '\0') {
         ( **(code**)( *(long*)pOVar8 + 0x140 ) )(pOVar8);
         Memory::free_static(pOVar8, false);
      }

   }

   if (plVar36[2] != 0) {
      LOCK();
      plVar4 = (long*)( plVar36[2] + -0x10 );
      *plVar4 = *plVar4 + -1;
      UNLOCK();
      if (*plVar4 == 0) {
         lVar6 = plVar36[2];
         plVar36[2] = 0;
         Memory::free_static((void*)( lVar6 + -0x10 ), false);
      }

   }

   Memory::free_static(plVar36, false);
   uVar39 = *(ulong*)( this + 8 );
   *(undefined8*)( uVar39 + uVar31 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   return uVar39;
}
/* HashMap<String, HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> > > > >::erase(String const&) [clone .isra.0] */void HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::erase(HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>> *this, String *param_1) {
   long *plVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   uint uVar6;
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
   uint uVar30;
   uint uVar31;
   long lVar32;
   long lVar33;
   long *plVar34;
   ulong uVar35;
   long lVar36;
   uint *puVar37;
   long lVar38;
   void *pvVar39;
   uint uVar40;
   if (*(long*)( this + 8 ) == 0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar35 = CONCAT44(0, uVar6);
      lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar29 = String::hash();
      lVar36 = *(long*)( this + 0x10 );
      uVar30 = 1;
      if (uVar29 != 0) {
         uVar30 = uVar29;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar30 * lVar38;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar35;
      lVar32 = SUB168(auVar8 * auVar18, 8);
      uVar29 = *(uint*)( lVar36 + lVar32 * 4 );
      uVar31 = SUB164(auVar8 * auVar18, 8);
      if (uVar29 != 0) {
         uVar40 = 0;
         do {
            if (uVar30 == uVar29) {
               cVar28 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar32 * 8 ) + 0x10 ), param_1);
               if (cVar28 != '\0') {
                  lVar38 = *(long*)( this + 0x10 );
                  lVar36 = *(long*)( this + 8 );
                  uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar35 = CONCAT44(0, uVar6);
                  lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(uVar31 + 1) * lVar32;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar35;
                  lVar33 = SUB168(auVar12 * auVar22, 8);
                  puVar37 = (uint*)( lVar38 + lVar33 * 4 );
                  uVar29 = SUB164(auVar12 * auVar22, 8);
                  uVar30 = *puVar37;
                  if (( uVar30 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar30 * lVar32,auVar23._8_8_ = 0,auVar23._0_8_ = uVar35,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar6 + uVar29 ) - SUB164(auVar13 * auVar23, 8)) * lVar32,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,uVar40 = uVar31,SUB164(auVar14 * auVar24, 8) == 0) goto LAB_00100a9b;
                  goto LAB_00100a55;
               }

               lVar36 = *(long*)( this + 0x10 );
            }

            uVar40 = uVar40 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(uVar31 + 1) * lVar38;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar35;
            lVar32 = SUB168(auVar9 * auVar19, 8);
            uVar29 = *(uint*)( lVar36 + lVar32 * 4 );
            uVar31 = SUB164(auVar9 * auVar19, 8);
         }
 while ( ( uVar29 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar29 * lVar38,auVar20._8_8_ = 0,auVar20._0_8_ = uVar35,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar6 + uVar31 ) - SUB164(auVar10 * auVar20, 8)) * lVar38,auVar21._8_8_ = 0,auVar21._0_8_ = uVar35,uVar40 <= SUB164(auVar11 * auVar21, 8) );
      }

   }

   return;
   while (auVar15._8_8_ = 0,auVar15._0_8_ = (ulong)uVar30 * lVar32,auVar25._8_8_ = 0,auVar25._0_8_ = uVar35,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar29 + uVar6 ) - SUB164(auVar15 * auVar25, 8)) * lVar32,auVar26._8_8_ = 0,auVar26._0_8_ = uVar35,uVar40 = uVar31,SUB164(auVar16 * auVar26, 8) != 0) {
      LAB_00100a55:uVar31 = uVar29;
      puVar2 = (uint*)( lVar38 + (ulong)uVar40 * 4 );
      *puVar37 = *puVar2;
      puVar3 = (undefined8*)( lVar36 + lVar33 * 8 );
      *puVar2 = uVar30;
      puVar4 = (undefined8*)( lVar36 + (ulong)uVar40 * 8 );
      uVar7 = *puVar3;
      *puVar3 = *puVar4;
      *puVar4 = uVar7;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(uVar31 + 1) * lVar32;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar35;
      lVar33 = SUB168(auVar17 * auVar27, 8);
      puVar37 = (uint*)( lVar38 + lVar33 * 4 );
      uVar29 = SUB164(auVar17 * auVar27, 8);
      uVar30 = *puVar37;
      if (uVar30 == 0) break;
   }
;
   LAB_00100a9b:uVar35 = (ulong)uVar31;
   plVar5 = (long*)( lVar36 + uVar35 * 8 );
   *(undefined4*)( lVar38 + uVar35 * 4 ) = 0;
   plVar34 = (long*)*plVar5;
   if (*(long**)( this + 0x18 ) == plVar34) {
      *(long*)( this + 0x18 ) = *plVar34;
      plVar34 = (long*)*plVar5;
      if (*(long**)( this + 0x20 ) == plVar34) goto LAB_00100c14;
   }
 else if (*(long**)( this + 0x20 ) == plVar34) {
      LAB_00100c14:*(long*)( this + 0x20 ) = plVar34[1];
      plVar34 = (long*)*plVar5;
   }

   if ((long*)plVar34[1] != (long*)0x0) {
      *(long*)plVar34[1] = *plVar34;
      plVar34 = (long*)*plVar5;
   }

   if (*plVar34 != 0) {
      *(long*)( *plVar34 + 8 ) = plVar34[1];
      plVar34 = (long*)*plVar5;
   }

   pvVar39 = (void*)plVar34[3];
   if (pvVar39 != (void*)0x0) {
      if (( *(int*)( (long)plVar34 + 0x3c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar34 + 7 ) * 4 ) == 0 || ( memset((void*)plVar34[6], 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar34 + 7 ) * 4 ) * 4),*(int*)( (long)plVar34 + 0x3c ) != 0 ) ) )) {
         lVar38 = 0;
         do {
            plVar5 = (long*)( (long)pvVar39 + lVar38 * 8 );
            if (*plVar5 != 0) {
               LOCK();
               plVar1 = (long*)( *plVar5 + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar36 = *plVar5;
                  *plVar5 = 0;
                  Memory::free_static((void*)( lVar36 + -0x10 ), false);
               }

               pvVar39 = (void*)plVar34[3];
            }

            lVar38 = lVar38 + 1;
         }
 while ( (uint)lVar38 < *(uint*)( (long)plVar34 + 0x3c ) );
         *(undefined4*)( (long)plVar34 + 0x3c ) = 0;
         if (pvVar39 == (void*)0x0) goto LAB_00100b73;
      }

      Memory::free_static(pvVar39, false);
      Memory::free_static((void*)plVar34[5], false);
      Memory::free_static((void*)plVar34[4], false);
      Memory::free_static((void*)plVar34[6], false);
   }

   LAB_00100b73:if (plVar34[2] != 0) {
      LOCK();
      plVar5 = (long*)( plVar34[2] + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar38 = plVar34[2];
         plVar34[2] = 0;
         Memory::free_static((void*)( lVar38 + -0x10 ), false);
      }

   }

   Memory::free_static(plVar34, false);
   *(undefined8*)( *(long*)( this + 8 ) + uVar35 * 8 ) = 0;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
   return;
}
/* GDScriptParserRef::get_status() const */undefined4 GDScriptParserRef::get_status(GDScriptParserRef *this) {
   return *(undefined4*)( this + 400 );
}
/* GDScriptParserRef::get_path() const */void GDScriptParserRef::get_path(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x198 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x198 ));
   }

   return;
}
/* GDScriptParserRef::get_source_hash() const */undefined4 GDScriptParserRef::get_source_hash(GDScriptParserRef *this) {
   return *(undefined4*)( this + 0x1a0 );
}
/* GDScriptParserRef::get_parser() */void GDScriptParserRef::get_parser(GDScriptParserRef *this) {
   GDScriptParser *this_00;
   if (*(long*)( this + 0x180 ) != 0) {
      return;
   }

   this_00 = (GDScriptParser*)operator_new(0xa28, "");
   GDScriptParser::GDScriptParser(this_00);
   *(GDScriptParser**)( this + 0x180 ) = this_00;
   return;
}
/* GDScriptParserRef::get_analyzer() */GDScriptAnalyzer * __thiscall GDScriptParserRef::get_analyzer(GDScriptParserRef *this){
   GDScriptAnalyzer *this_00;
   GDScriptParser *this_01;
   if (*(GDScriptAnalyzer**)( this + 0x188 ) != (GDScriptAnalyzer*)0x0) {
      return *(GDScriptAnalyzer**)( this + 0x188 );
   }

   this_00 = (GDScriptAnalyzer*)operator_new(0x58, "");
   this_01 = *(GDScriptParser**)( this + 0x180 );
   if (this_01 == (GDScriptParser*)0x0) {
      this_01 = (GDScriptParser*)operator_new(0xa28, "");
      GDScriptParser::GDScriptParser(this_01);
      *(GDScriptParser**)( this + 0x180 ) = this_01;
   }

   GDScriptAnalyzer::GDScriptAnalyzer(this_00, this_01);
   *(GDScriptAnalyzer**)( this + 0x188 ) = this_00;
   return this_00;
}
/* GDScriptCache::has_parser(String const&) */uint GDScriptCache::has_parser(String *param_1) {
   uint uVar1;
   long lVar2;
   undefined8 uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   long lVar12;
   uint uVar13;
   int iVar14;
   uint uVar15;
   long lVar16;
   ulong uVar17;
   long lVar18;
   uint uVar19;
   int *in_FS_OFFSET;
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar3 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
   }

   iVar14 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar14 + 1;
   if (iVar14 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00101132;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar14 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar14 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar14);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   lVar12 = singleton;
   if (( *(long*)( singleton + 8 ) != 0 ) && ( *(int*)( singleton + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x28 ) * 8 );
      uVar13 = String::hash();
      uVar17 = CONCAT44(0, uVar1);
      lVar18 = *(long*)( lVar12 + 0x10 );
      uVar15 = 1;
      if (uVar13 != 0) {
         uVar15 = uVar13;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar15 * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar17;
      lVar16 = SUB168(auVar4 * auVar8, 8);
      uVar13 = *(uint*)( lVar18 + lVar16 * 4 );
      iVar14 = SUB164(auVar4 * auVar8, 8);
      if (uVar13 != 0) {
         uVar19 = 0;
         do {
            if (uVar13 == uVar15) {
               uVar13 = String::operator ==((String*)( *(long*)( *(long*)( lVar12 + 8 ) + lVar16 * 8 ) + 0x10 ), param_1);
               if ((char)uVar13 != '\0') goto LAB_00100deb;
               lVar18 = *(long*)( lVar12 + 0x10 );
            }

            uVar19 = uVar19 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar14 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar17;
            lVar16 = SUB168(auVar5 * auVar9, 8);
            uVar13 = *(uint*)( lVar18 + lVar16 * 4 );
            iVar14 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar13 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar13 * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar6 * auVar10, 8)) * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar17,uVar19 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   uVar13 = 0;
   LAB_00100deb:if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar3 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      uVar13 = uVar13 & 0xff;
   }

   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   if (*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1*)in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
         uVar13 = uVar13 & 0xff;
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00101132:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
         uVar13 = uVar13 & 0xff;
      }

   }

   return uVar13;
}
/* GDScriptCache::remove_static_script(String const&) */void GDScriptCache::remove_static_script(String *param_1) {
   HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::erase((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0xc0 ), param_1);
   return;
}
/* GDScriptCache::GDScriptCache() */void GDScriptCache::GDScriptCache(GDScriptCache *this) {
   undefined8 uVar1;
   uVar1 = _LC8;
   this[0x150] = (GDScriptCache)0x0;
   singleton = this;
   for (int i = 0; i < 7; i++) {
      *(undefined8*)( this + ( 48*i + 40 ) ) = uVar1;
   }

   for (int i = 0; i < 7; i++) {
      *(undefined1(*) [16])( this + ( 48*i + 8 ) ) = (undefined1[16])0;
      *(undefined1(*) [16])( this + ( 48*i + 24 ) ) = (undefined1[16])0;
   }

   return;
}
/* GDScriptParserRef::clear() */void GDScriptParserRef::clear(GDScriptParserRef *this) {
   GDScriptParser *this_00;
   if (this[0x1a4] != (GDScriptParserRef)0x0) {
      return;
   }

   this_00 = *(GDScriptParser**)( this + 0x180 );
   *(undefined8*)( this + 400 ) = 0;
   *(undefined4*)( this + 0x1a0 ) = 0;
   *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
   if (*(GDScriptAnalyzer**)( this + 0x188 ) != (GDScriptAnalyzer*)0x0) {
      memdelete<GDScriptAnalyzer>(*(GDScriptAnalyzer**)( this + 0x188 ));
   }

   if (this_00 != (GDScriptParser*)0x0) {
      GDScriptParser::~GDScriptParser(this_00);
      Memory::free_static(this_00, false);
      return;
   }

   return;
}
/* GDScriptParserRef::~GDScriptParserRef() */void GDScriptParserRef::~GDScriptParserRef(GDScriptParserRef *this) {
   long *plVar1;
   GDScriptParser *this_00;
   long lVar2;
   undefined8 uVar3;
   int iVar4;
   int *in_FS_OFFSET;
   *(undefined***)this = &PTR__initialize_classv_0010da50;
   if (this[0x1a4] == (GDScriptParserRef)0x0) {
      this_00 = *(GDScriptParser**)( this + 0x180 );
      *(undefined8*)( this + 400 ) = 0;
      *(undefined4*)( this + 0x1a0 ) = 0;
      *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
      if (*(GDScriptAnalyzer**)( this + 0x188 ) != (GDScriptAnalyzer*)0x0) {
         memdelete<GDScriptAnalyzer>(*(GDScriptAnalyzer**)( this + 0x188 ));
      }

      if (this_00 != (GDScriptParser*)0x0) {
         GDScriptParser::~GDScriptParser(this_00);
         Memory::free_static(this_00, false);
      }

   }

   if (this[0x1a5] == (GDScriptParserRef)0x0) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = GDScriptCache::mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      }

      iVar4 = *in_FS_OFFSET;
      *in_FS_OFFSET = iVar4 + 1;
      if (iVar4 + 1 == 1) {
         if ((char)*in_FS_OFFSET == '\0') {
            *(undefined1*)in_FS_OFFSET = 1;
            *(undefined1**)in_FS_OFFSET = GDScriptCache::mutex;
            uVar3 = *(undefined8*)in_FS_OFFSET;
            *(undefined1*)in_FS_OFFSET = 0;
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
         }

         if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_001015aa;
         if ((char)*in_FS_OFFSET != '\0') {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(0x23);
         }

         iVar4 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
         if (iVar4 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar4);
         }

         *(undefined1*)in_FS_OFFSET = 1;
      }

      HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>::erase(GDScriptCache::singleton, (String*)( this + 0x198 ));
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = GDScriptCache::mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      }

      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      if (*in_FS_OFFSET == 0) {
         if ((char)*in_FS_OFFSET == '\0') {
            *(undefined1*)in_FS_OFFSET = 1;
            *(undefined1**)in_FS_OFFSET = GDScriptCache::mutex;
            uVar3 = *(undefined8*)in_FS_OFFSET;
            *(undefined1*)in_FS_OFFSET = 0;
            __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
         }

         if ((char)*in_FS_OFFSET == '\0') {
            LAB_001015aa:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
         }

         if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
            *(undefined1*)in_FS_OFFSET = 0;
         }

      }

   }

   if (*(long*)( this + 0x198 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x198 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x198 );
         *(undefined8*)( this + 0x198 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   *(undefined***)this = &PTR__initialize_classv_0010d8f0;
   Object::~Object((Object*)this);
   return;
}
/* GDScriptParserRef::~GDScriptParserRef() */void GDScriptParserRef::~GDScriptParserRef(GDScriptParserRef *this) {
   ~GDScriptParserRef(this)
   ;;
   operator_delete(this, 0x1a8);
   return;
}
/* GDScriptCache::get_cached_script(String const&) */GDScriptCache * __thiscall GDScriptCache::get_cached_script(GDScriptCache *this,String *param_1){
   uint uVar1;
   long lVar2;
   undefined8 uVar3;
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
   char cVar21;
   uint uVar22;
   int iVar23;
   long *plVar24;
   uint uVar25;
   long lVar26;
   ulong uVar27;
   HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>> *this_00;
   long lVar28;
   uint uVar29;
   int *in_FS_OFFSET;
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar3 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
   }

   iVar23 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar23 + 1;
   if (iVar23 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00101aea;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar23 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar23 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar23);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   lVar20 = singleton;
   if (( *(long*)( singleton + 0x98 ) != 0 ) && ( *(int*)( singleton + 0xbc ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0xb8 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0xb8 ) * 8 );
      uVar22 = String::hash();
      uVar27 = CONCAT44(0, uVar1);
      lVar28 = *(long*)( lVar20 + 0xa0 );
      uVar25 = 1;
      if (uVar22 != 0) {
         uVar25 = uVar22;
      }

      uVar29 = 0;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar25 * lVar2;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar27;
      lVar26 = SUB168(auVar8 * auVar16, 8);
      uVar22 = *(uint*)( lVar28 + lVar26 * 4 );
      iVar23 = SUB164(auVar8 * auVar16, 8);
      if (uVar22 != 0) {
         do {
            if (uVar25 == uVar22) {
               cVar21 = String::operator ==((String*)( *(long*)( *(long*)( lVar20 + 0x98 ) + lVar26 * 8 ) + 0x10 ), param_1);
               if (cVar21 != '\0') {
                  this_00 = (HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x90 );
                  goto LAB_0010187a;
               }

               lVar28 = *(long*)( lVar20 + 0xa0 );
            }

            uVar29 = uVar29 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(iVar23 + 1) * lVar2;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar27;
            lVar26 = SUB168(auVar9 * auVar17, 8);
            uVar22 = *(uint*)( lVar28 + lVar26 * 4 );
            iVar23 = SUB164(auVar9 * auVar17, 8);
         }
 while ( ( uVar22 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar22 * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar27,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar1 + iVar23 ) - SUB164(auVar10 * auVar18, 8)) * lVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar27,uVar29 <= SUB164(auVar11 * auVar19, 8) );
      }

   }

   lVar20 = singleton;
   if (( *(long*)( singleton + 0x68 ) != 0 ) && ( *(int*)( singleton + 0x8c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x88 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x88 ) * 8 );
      uVar22 = String::hash();
      uVar27 = CONCAT44(0, uVar1);
      lVar28 = *(long*)( lVar20 + 0x70 );
      uVar25 = 1;
      if (uVar22 != 0) {
         uVar25 = uVar22;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar25 * lVar2;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar27;
      lVar26 = SUB168(auVar4 * auVar12, 8);
      uVar22 = *(uint*)( lVar28 + lVar26 * 4 );
      iVar23 = SUB164(auVar4 * auVar12, 8);
      if (uVar22 != 0) {
         uVar29 = 0;
         LAB_00101729:if (uVar22 != uVar25) goto LAB_001016e0;
         cVar21 = String::operator ==((String*)( *(long*)( *(long*)( lVar20 + 0x68 ) + lVar26 * 8 ) + 0x10 ), param_1);
         if (cVar21 == '\0') {
            lVar28 = *(long*)( lVar20 + 0x70 );
            goto LAB_001016e0;
         }

         this_00 = (HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x60 );
         LAB_0010187a:plVar24 = (long*)HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::operator [](this_00, param_1);
         *(undefined8*)this = 0;
         if (*plVar24 != 0) {
            *(long*)this = *plVar24;
            cVar21 = RefCounted::reference();
            if (cVar21 != '\0') goto LAB_001018a8;
            goto LAB_001018a0;
         }

         goto LAB_001018a8;
      }

   }

   LAB_001018a0:*(undefined8*)this = 0;
   LAB_001018a8:if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar3 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
   }

   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   if (*in_FS_OFFSET == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00101aea:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   return this;
   LAB_001016e0:uVar29 = uVar29 + 1;
   auVar5._8_8_ = 0;
   auVar5._0_8_ = ( ulong )(iVar23 + 1) * lVar2;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar27;
   lVar26 = SUB168(auVar5 * auVar13, 8);
   uVar22 = *(uint*)( lVar28 + lVar26 * 4 );
   iVar23 = SUB164(auVar5 * auVar13, 8);
   if (( uVar22 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar22 * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar27,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + iVar23 ) - SUB164(auVar6 * auVar14, 8)) * lVar2,auVar15._8_8_ = 0,auVar15._0_8_ = uVar27,SUB164(auVar7 * auVar15, 8) < uVar29) goto LAB_001018a0;
   goto LAB_00101729;
}
/* GDScriptCache::add_static_script(Ref<GDScript>) */void GDScriptCache::add_static_script(long *param_1) {
   HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>> *this;
   long lVar1;
   long lVar2;
   Object *pOVar3;
   Object *pOVar4;
   char cVar5;
   long lVar6;
   long *plVar7;
   long in_FS_OFFSET;
   bool bVar8;
   long local_28;
   long local_20;
   plVar7 = (long*)*param_1;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   if (plVar7 == (long*)0x0) {
      _err_print_error("add_static_script", "modules/gdscript/gdscript_cache.cpp", 0x1b6, "Condition \"p_script.is_null()\" is true.", "Trying to cache empty script as static.", 0, 0);
   }
 else {
      if (*(code**)( *plVar7 + 0x278 ) == GDScript::is_valid) {
         cVar5 = *(char*)( (long)plVar7 + 0x241 );
      }
 else {
         cVar5 = ( **(code**)( *plVar7 + 0x278 ) )();
      }

      if (cVar5 == '\0') {
         _err_print_error("add_static_script", "modules/gdscript/gdscript_cache.cpp", 0x1b7, "Condition \"!p_script->is_valid()\" is true.", "Trying to cache non-compiled script as static.", 0, 0);
      }
 else {
         lVar1 = *param_1;
         local_28 = 0;
         this(HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>> * )(singleton + 0xc0);
         lVar2 = *(long*)( lVar1 + 0x6e8 );
         plVar7 = (long*)( lVar2 + -0x10 );
         if (lVar2 != 0) {
            do {
               lVar2 = *plVar7;
               if (lVar2 == 0) goto LAB_00101baf;
               LOCK();
               lVar6 = *plVar7;
               bVar8 = lVar2 == lVar6;
               if (bVar8) {
                  *plVar7 = lVar2 + 1;
                  lVar6 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar8 );
            if (lVar6 != -1) {
               local_28 = *(long*)( lVar1 + 0x6e8 );
            }

         }

         LAB_00101baf:plVar7 = (long*)HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::operator [](this, (String*)&local_28);
         pOVar3 = (Object*)*param_1;
         pOVar4 = (Object*)*plVar7;
         if (pOVar3 != pOVar4) {
            *plVar7 = (long)pOVar3;
            if (( pOVar3 != (Object*)0x0 ) && ( cVar5 = RefCounted::reference() ),cVar5 == '\0') {
               *plVar7 = 0;
            }

            if (( ( pOVar4 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
            Memory::free_static(pOVar4, false);
         }

      }

      lVar1 = local_28;
      if (local_28 != 0) {
         LOCK();
         plVar7 = (long*)( local_28 + -0x10 );
         *plVar7 = *plVar7 + -1;
         UNLOCK();
         if (*plVar7 == 0) {
            local_28 = 0;
            Memory::free_static((void*)( lVar1 + -0x10 ), false);
         }

      }

   }

}
if (local_20 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] */void CowData<unsigned_char>::resize<false>(CowData<unsigned_char> *this, long param_1) {
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
      LAB_00101ea6:lVar10 = 0;
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
      if (lVar10 == 0) goto LAB_00101ea6;
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

      FUN_001081ec();
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
         goto LAB_00101dfc;
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

   LAB_00101dfc:puVar8[-1] = param_1;
   return;
}
/* WARNING: Removing unreachable block (ram,0x00102060) *//* GDScriptCache::get_binary_tokens(String const&) */GDScriptCache * __thiscall GDScriptCache::get_binary_tokens(GDScriptCache *this,String *param_1){
   long *plVar1;
   code *pcVar2;
   Object *pOVar3;
   long lVar4;
   undefined *puVar5;
   char cVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
   long in_FS_OFFSET;
   Object *local_80;
   long local_78;
   long local_70[2];
   long local_60;
   undefined *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   FileAccess::open((String*)&local_80, (int)param_1, (Error*)0x1);
   lVar7 = ( **(code**)( *(long*)local_80 + 0x1d0 ) )();
   CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, lVar7);
   pOVar3 = local_80;
   pcVar2 = *(code**)( *(long*)local_80 + 0x220 );
   if (local_60 == 0) {
      uVar9 = 0;
   }
 else {
      uVar9 = *(undefined8*)( local_60 + -8 );
   }

   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
   lVar4 = local_60;
   lVar8 = ( *pcVar2 )(pOVar3, local_60, uVar9);
   if (lVar7 == lVar8) {
      *(long*)( this + 8 ) = lVar4;
      local_60 = 0;
      if (( local_80 == (Object*)0x0 ) || ( cVar6 = RefCounted::unreference() ),cVar6 == '\0') goto LAB_00101fe5;
      lVar7 = 0;
      LAB_00102012:cVar6 = predelete_handler(local_80);
      if (cVar6 != '\0') {
         ( **(code**)( *(long*)local_80 + 0x140 ) )(local_80);
         Memory::free_static(local_80, false);
      }

   }
 else {
      local_70[0] = 0;
      local_58 = &_LC32;
      local_50 = 2;
      String::parse_latin1((StrRange*)local_70);
      operator+((char *)&
      local_78,(String*)"Failed to read binary GDScript file \'";
      String::operator +((String*)&local_58, (String*)&local_78);
      _err_print_error("get_binary_tokens", "modules/gdscript/gdscript_cache.cpp", 0x125, "Condition \"read != len\" is true. Returning: Vector<uint8_t>()", &local_58, 0, 0);
      puVar5 = local_58;
      if (local_58 != (undefined*)0x0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = (undefined*)0x0;
            Memory::free_static(puVar5 + -0x10, false);
         }

      }

      lVar7 = local_78;
      if (local_78 != 0) {
         LOCK();
         plVar1 = (long*)( local_78 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_78 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      lVar7 = local_70[0];
      if (local_70[0] != 0) {
         LOCK();
         plVar1 = (long*)( local_70[0] + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_70[0] = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      lVar7 = local_60;
      *(undefined8*)( this + 8 ) = 0;
      if (( local_80 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0') goto LAB_00102012;
   }

   if (lVar7 != 0) {
      LOCK();
      plVar1 = (long*)( lVar7 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_60 + -0x10 ), false);
      }

   }

   LAB_00101fe5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptCache::get_source_code(String const&) */GDScriptCache * __thiscall GDScriptCache::get_source_code(GDScriptCache *this,String *param_1){
   long *plVar1;
   code *pcVar2;
   Object *pOVar3;
   char *pcVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long in_FS_OFFSET;
   int local_8c;
   Object *local_88;
   long local_80;
   long local_78;
   long local_70[2];
   long local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_60 = 0;
   FileAccess::open((String*)&local_88, (int)param_1, (Error*)0x1);
   if (local_8c == 0) {
      lVar7 = ( **(code**)( *(long*)local_88 + 0x1d0 ) )();
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)&local_60, lVar7 + 1);
      pOVar3 = local_88;
      pcVar2 = *(code**)( *(long*)local_88 + 0x220 );
      CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
      lVar9 = local_60;
      lVar8 = ( *pcVar2 )(pOVar3, local_60, lVar7);
      if (lVar7 == lVar8) {
         if (lVar9 != 0) {
            if (-1 < lVar7) {
               lVar9 = *(long*)( lVar9 + -8 );
               if (lVar9 <= lVar7) goto LAB_001024f5;
               CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)&local_60);
               lVar9 = local_60;
               *(undefined1*)( local_60 + lVar7 ) = 0;
               local_80 = 0;
               iVar6 = String::parse_utf8((char*)&local_80, (int)local_60, SUB81(lVar7, 0));
               if (iVar6 == 0) {
                  *(long*)this = local_80;
               }
 else {
                  local_70[0] = 0;
                  local_58 = "\' contains invalid unicode (UTF-8), so it was not loaded. Please ensure that scripts are saved in valid UTF-8 unicode.";
                  local_50 = 0x76;
                  String::parse_latin1((StrRange*)local_70);
                  operator+((char *)&
                  local_78,(String*)"Script \'";
                  String::operator +((String*)&local_58, (String*)&local_78);
                  _err_print_error("get_source_code", "modules/gdscript/gdscript_cache.cpp", 0x117, "Method/function failed. Returning: \"\"", (String*)&local_58, 0, 0);
                  pcVar4 = local_58;
                  if (local_58 != (char*)0x0) {
                     LOCK();
                     plVar1 = (long*)( local_58 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_58 = (char*)0x0;
                        Memory::free_static(pcVar4 + -0x10, false);
                     }

                  }

                  lVar9 = local_78;
                  if (local_78 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_78 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_78 = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  lVar9 = local_70[0];
                  if (local_70[0] != 0) {
                     LOCK();
                     plVar1 = (long*)( local_70[0] + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_70[0] = 0;
                        Memory::free_static((void*)( lVar9 + -0x10 ), false);
                     }

                  }

                  *(undefined8*)this = 0;
                  local_58 = "";
                  local_50 = 0;
                  String::parse_latin1((StrRange*)this);
                  lVar7 = local_80;
                  lVar9 = local_60;
                  if (local_80 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_80 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_80 = 0;
                        Memory::free_static((void*)( lVar7 + -0x10 ), false);
                        lVar9 = local_60;
                     }

                  }

               }

               goto LAB_00102325;
            }

            if (lVar9 != 0) {
               lVar9 = *(long*)( lVar9 + -8 );
               goto LAB_001024f5;
            }

         }

         lVar9 = 0;
         LAB_001024f5:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar7, lVar9, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      _err_print_error("get_source_code", "modules/gdscript/gdscript_cache.cpp", 0x112, "Condition \"r != len\" is true. Returning: \"\"", 0, 0);
      *(undefined8*)this = 0;
      local_50 = 0;
      local_58 = "";
      String::parse_latin1((StrRange*)this);
      LAB_00102325:if (( local_88 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0') goto LAB_001025b0;
   }
 else {
      _err_print_error("get_source_code", "modules/gdscript/gdscript_cache.cpp", 0x10d, "Condition \"err\" is true. Returning: \"\"", 0, 0);
      *(undefined8*)this = 0;
      local_58 = "";
      local_50 = 0;
      String::parse_latin1((StrRange*)this);
      if (( local_88 == (Object*)0x0 ) || ( cVar5 = RefCounted::unreference() ),cVar5 == '\0') goto LAB_00102359;
      lVar9 = 0;
      LAB_001025b0:cVar5 = predelete_handler(local_88);
      if (cVar5 != '\0') {
         ( **(code**)( *(long*)local_88 + 0x140 ) )(local_88);
         Memory::free_static(local_88, false);
      }

   }

   if (lVar9 != 0) {
      LOCK();
      plVar1 = (long*)( lVar9 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         Memory::free_static((void*)( local_60 + -0x10 ), false);
      }

   }

   LAB_00102359:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return this;
}
/* GDScriptParserRef::raise_status(GDScriptParserRef::Status) */ulong GDScriptParserRef::raise_status(GDScriptParserRef *this, int param_2) {
   long *plVar1;
   long lVar2;
   long lVar3;
   char cVar4;
   undefined4 uVar5;
   uint uVar6;
   ulong uVar7;
   String *this_00;
   GDScriptParser *this_01;
   Vector *this_02;
   byte *pbVar8;
   byte *pbVar9;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   long local_58;
   byte *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this[0x1a4] == (GDScriptParserRef)0x0) {
      if (( *(long*)( this + 0x180 ) != 0 ) || ( *(int*)( this + 400 ) == 0 )) {
         uVar7 = ( ulong ) * (uint*)( this + 0x194 );
         LAB_0010269c:if ((int)uVar7 == 0) {
            do {
               if (param_2 <= *(int*)( this + 400 )) break;
               switch (*(int*)( this + 400 )) {
                  case 0:
            goto switchD_001026b8_caseD_0;
                  case 1:
            *(undefined4 *)(this + 400) = 2;
            get_analyzer(this);
            uVar7 = GDScriptAnalyzer::resolve_inheritance();
            *(int *)(this + 0x194) = (int)uVar7;
            goto LAB_0010269c;
                  case 2:
            *(undefined4 *)(this + 400) = 3;
            get_analyzer(this);
            uVar7 = GDScriptAnalyzer::resolve_interface();
            *(int *)(this + 0x194) = (int)uVar7;
            goto LAB_0010269c;
                  case 3:
            *(undefined4 *)(this + 400) = 4;
            get_analyzer(this);
            uVar7 = GDScriptAnalyzer::resolve_body();
            *(int *)(this + 0x194) = (int)uVar7;
            goto LAB_0010269c;
                  case 4:
            goto switchD_001026b8_caseD_4;
               }

            }
 while ( true );
         }

         goto switchD_001026b8_caseD_4;
      }

      _err_print_error("raise_status", "modules/gdscript/gdscript_cache.cpp", 0x45, "Condition \"parser == nullptr && status != EMPTY\" is true. Returning: ERR_BUG", 0, 0);
   }
 else {
      _err_print_error("raise_status", "modules/gdscript/gdscript_cache.cpp", 0x44, "Condition \"clearing\" is true. Returning: ERR_BUG", 0, 0);
   }

   uVar7 = 0x2f;
   switchD_001026b8_caseD_4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar7;
   switchD_001026b8_caseD_0:if (*(long*)( this + 0x180 ) == 0) {
      this_01 = (GDScriptParser*)operator_new(0xa28, "");
      GDScriptParser::GDScriptParser(this_01);
      *(GDScriptParser**)( this + 0x180 ) = this_01;
   }

   GDScriptParser::clear();
   *(undefined4*)( this + 400 ) = 1;
   ResourceLoader::path_remap((String*)&local_68);
   String::get_extension();
   String::to_lower();
   cVar4 = String::operator ==((String*)&local_58, "gdc");
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

   if (cVar4 == '\0') {
      GDScriptCache::get_source_code((GDScriptCache*)&local_58, (String*)&local_68);
      uVar5 = String::hash();
      this_00 = *(String**)( this + 0x180 );
      *(undefined4*)( this + 0x1a0 ) = uVar5;
      if (this_00 == (String*)0x0) {
         this_00 = (String*)operator_new(0xa28, "");
         GDScriptParser::GDScriptParser((GDScriptParser*)this_00);
         *(String**)( this + 0x180 ) = this_00;
      }

      uVar5 = GDScriptParser::parse(this_00, (String*)&local_58, (bool)( (char)this + -0x68 ), false);
      lVar3 = local_58;
      *(undefined4*)( this + 0x194 ) = uVar5;
      lVar2 = local_68;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar3 + -0x10 ), false);
            lVar2 = local_68;
         }

      }

   }
 else {
      GDScriptCache::get_binary_tokens((GDScriptCache*)&local_58, (String*)&local_68);
      if (( local_50 == (byte*)0x0 ) || ( (int)*(undefined8*)( local_50 + -8 ) < 1 )) {
         uVar6 = 0x1505;
      }
 else {
         uVar6 = 0x1505;
         pbVar8 = local_50;
         do {
            pbVar9 = pbVar8 + 1;
            uVar6 = uVar6 * 0x21 ^ ( uint ) * pbVar8;
            pbVar8 = pbVar9;
         }
 while ( local_50 + ( ulong )((int)*(undefined8*)( local_50 + -8 ) - 1) + 1 != pbVar9 );
      }

      this_02 = *(Vector**)( this + 0x180 );
      *(uint*)( this + 0x1a0 ) = uVar6;
      if (this_02 == (Vector*)0x0) {
         this_02 = (Vector*)operator_new(0xa28, "");
         GDScriptParser::GDScriptParser((GDScriptParser*)this_02);
         *(Vector**)( this + 0x180 ) = this_02;
      }

      uVar5 = GDScriptParser::parse_binary(this_02, (String*)&local_58);
      pbVar8 = local_50;
      *(undefined4*)( this + 0x194 ) = uVar5;
      lVar2 = local_68;
      if (local_50 != (byte*)0x0) {
         LOCK();
         pbVar9 = local_50 + -0x10;
         *(long*)pbVar9 = *(long*)pbVar9 + -1;
         UNLOCK();
         if (*(long*)pbVar9 == 0) {
            local_50 = (byte*)0x0;
            Memory::free_static(pbVar8 + -0x10, false);
            lVar2 = local_68;
         }

      }

   }

   local_68 = lVar2;
   if (lVar2 != 0) {
      LOCK();
      plVar1 = (long*)( lVar2 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   uVar7 = ( ulong ) * (uint*)( this + 0x194 );
   goto LAB_0010269c;
}
/* GDScriptCache::get_parser(String const&, GDScriptParserRef::Status, Error&, String const&) */GDScriptCache * __thiscall
GDScriptCache::get_parser
          (GDScriptCache *this,String *param_1,undefined4 param_3,undefined4 *param_4,
          String *param_5){
   uint uVar1;
   long lVar2;
   undefined8 uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   ulong uVar12;
   HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>> *pHVar13;
   char cVar14;
   uint uVar15;
   undefined4 uVar16;
   int iVar17;
   RefCounted *this_00;
   undefined8 *puVar18;
   long *plVar19;
   uint uVar20;
   long lVar21;
   Object *pOVar22;
   GDScriptParserRef *pGVar23;
   long lVar24;
   Object *pOVar25;
   uint uVar26;
   int *in_FS_OFFSET;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar3 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
   }

   iVar17 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar17 + 1;
   if (iVar17 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00103267;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar17 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar17 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar17);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   lVar2 = *(long*)param_5;
   *(undefined8*)this = 0;
   if (( lVar2 != 0 ) && ( 1 < *(uint*)( lVar2 + -8 ) )) {
      HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::operator []((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0xf0 ), param_5);
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)local_58);
      HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::operator []((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0x120 ), param_1);
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)local_58);
   }

   pHVar13 = singleton;
   if (( *(long*)( singleton + 8 ) != 0 ) && ( *(int*)( singleton + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x28 ) * 8 );
      uVar15 = String::hash();
      uVar12 = CONCAT44(0, uVar1);
      uVar20 = 1;
      if (uVar15 != 0) {
         uVar20 = uVar15;
      }

      lVar24 = *(long*)( pHVar13 + 0x10 );
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar20 * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar12;
      lVar21 = SUB168(auVar4 * auVar8, 8);
      uVar15 = *(uint*)( lVar24 + lVar21 * 4 );
      iVar17 = SUB164(auVar4 * auVar8, 8);
      if (uVar15 != 0) {
         uVar26 = 0;
         do {
            if (uVar20 == uVar15) {
               cVar14 = String::operator ==((String*)( *(long*)( *(long*)( pHVar13 + 8 ) + lVar21 * 8 ) + 0x10 ), param_1);
               if (cVar14 != '\0') {
                  plVar19 = (long*)HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>::operator [](singleton, param_1);
                  pOVar22 = (Object*)*plVar19;
                  if (( pOVar22 == (Object*)0x0 ) || ( cVar14 = RefCounted::init_ref() ),cVar14 == '\0') {
                     pOVar22 = *(Object**)this;
                     if (pOVar22 != (Object*)0x0) {
                        *(undefined8*)this = 0;
                        cVar14 = RefCounted::unreference();
                        goto joined_r0x0010301f;
                     }

                  }
 else {
                     pOVar25 = *(Object**)this;
                     if (pOVar22 != pOVar25) {
                        *(Object**)this = pOVar22;
                        cVar14 = RefCounted::reference();
                        if (cVar14 == '\0') {
                           *(undefined8*)this = 0;
                        }

                        if (( ( pOVar25 != (Object*)0x0 ) && ( cVar14 = RefCounted::unreference() ),cVar14 != '\0' )) &&( cVar14 = cVar14 != '\0' )(**(code**)( *(long*)pOVar25 + 0x140 ))(pOVar25);
                        Memory::free_static(pOVar25, false);
                     }

                  }

                  cVar14 = RefCounted::unreference();
                  joined_r0x0010301f:if (( cVar14 != '\0' ) && ( cVar14 = predelete_handler(pOVar22) ),cVar14 != '\0') {
                     ( **(code**)( *(long*)pOVar22 + 0x140 ) )(pOVar22);
                     Memory::free_static(pOVar22, false);
                  }

                  pGVar23 = *(GDScriptParserRef**)this;
                  if (pGVar23 != (GDScriptParserRef*)0x0) goto LAB_00102ec2;
               }

               *param_4 = 0x1e;
               goto LAB_00102bf2;
            }

            lVar24 = *(long*)( pHVar13 + 0x10 );
         }
 while ( ( uVar15 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar15 * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar12,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + iVar17 ) - SUB164(auVar6 * auVar10, 8)) * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar12,uVar26 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   ResourceLoader::path_remap((String*)local_58);
   cVar14 = FileAccess::exists((String*)local_58);
   lVar2 = local_58[0];
   if (cVar14 == '\0') {
      *param_4 = 7;
      if (local_58[0] != 0) {
         LOCK();
         plVar19 = (long*)( local_58[0] + -0x10 );
         *plVar19 = *plVar19 + -1;
         UNLOCK();
         if (*plVar19 == 0) {
            local_58[0] = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      LAB_00102bf2:if ((char)*in_FS_OFFSET != '\0') goto LAB_00102c01;
      LAB_00102ee1:*(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar3 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar17 = *in_FS_OFFSET;
   }
 else {
      this_00 = (RefCounted*)operator_new(0x1a8, "");
      RefCounted::RefCounted(this_00);
      *(undefined***)this_00 = &PTR__initialize_classv_0010da50;
      *(undefined8*)( this_00 + 400 ) = 0;
      *(undefined8*)( this_00 + 0x198 ) = 0;
      *(undefined4*)( this_00 + 0x1a0 ) = 0;
      *(undefined2*)( this_00 + 0x1a4 ) = 0;
      *(undefined1(*) [16])( this_00 + 0x180 ) = (undefined1[16])0x0;
      postinitialize_handler((Object*)this_00);
      cVar14 = RefCounted::init_ref();
      if (cVar14 == '\0') {
         pOVar22 = *(Object**)this;
         if (pOVar22 != (Object*)0x0) {
            *(undefined8*)this = 0;
            cVar14 = RefCounted::unreference();
            if (( cVar14 == '\0' ) || ( cVar14 = predelete_handler(pOVar22) ),cVar14 == '\0') goto LAB_00102dd3;
            ( **(code**)( *(long*)pOVar22 + 0x140 ) )(pOVar22);
            Memory::free_static(pOVar22, false);
            pOVar22 = *(Object**)this;
         }

      }
 else {
         pOVar22 = *(Object**)this;
         pOVar25 = pOVar22;
         if (this_00 != (RefCounted*)pOVar22) {
            *(RefCounted**)this = this_00;
            cVar14 = RefCounted::reference();
            if (cVar14 == '\0') {
               *(undefined8*)this = 0;
            }

            pOVar25 = (Object*)this_00;
            if (( ( pOVar22 != (Object*)0x0 ) && ( cVar14 = RefCounted::unreference() ),cVar14 != '\0' )) &&( cVar14 = cVar14 != '\0' )(**(code**)( *(long*)pOVar22 + 0x140 ))(pOVar22);
            Memory::free_static(pOVar22, false);
         }

      }

      cVar14 = RefCounted::unreference();
      if (( cVar14 != '\0' ) && ( cVar14 = predelete_handler(pOVar25) ),cVar14 != '\0') {
         ( **(code**)( *(long*)pOVar25 + 0x140 ) )(pOVar25);
         Memory::free_static(pOVar25, false);
      }

      LAB_00102dd3:pOVar22 = *(Object**)this;
   }

   if (*(long*)( pOVar22 + 0x198 ) != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pOVar22 + 0x198 ), (CowData*)param_1);
      pOVar22 = *(Object**)this;
   }

   puVar18 = (undefined8*)HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>::operator [](singleton, param_1);
   lVar2 = local_58[0];
   *puVar18 = pOVar22;
   if (local_58[0] != 0) {
      LOCK();
      plVar19 = (long*)( local_58[0] + -0x10 );
      *plVar19 = *plVar19 + -1;
      UNLOCK();
      if (*plVar19 == 0) {
         local_58[0] = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   pGVar23 = *(GDScriptParserRef**)this;
   LAB_00102ec2:uVar16 = GDScriptParserRef::raise_status(pGVar23, param_3);
   *param_4 = uVar16;
   if ((char)*in_FS_OFFSET == '\0') goto LAB_00102ee1;
   LAB_00102c01:*in_FS_OFFSET = *in_FS_OFFSET + -1;
   iVar17 = *in_FS_OFFSET;
}
if (iVar17 == 0) {
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar3 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
   }

   if ((char)*in_FS_OFFSET == '\0') {
      LAB_00103267:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
   }

   if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
      *(undefined1*)in_FS_OFFSET = 0;
   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
   return this;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* GDScriptCache::get_shallow_script(String const&, Error&, String const&) */GDScriptCache * __thiscall
GDScriptCache::get_shallow_script
          (GDScriptCache *this,String *param_1,Error *param_2,String *param_3){
   Object *pOVar1;
   uint uVar2;
   long lVar3;
   undefined8 uVar4;
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
   code *pcVar21;
   ulong uVar22;
   long lVar23;
   Object *pOVar24;
   char cVar25;
   uint uVar26;
   int iVar27;
   GDScript *this_00;
   long *plVar28;
   undefined8 *puVar29;
   GDScriptParser *this_01;
   uint uVar30;
   long lVar31;
   HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>> *this_02;
   long lVar32;
   Vector *pVVar33;
   uint uVar34;
   int *in_FS_OFFSET;
   long local_68;
   Object *local_60;
   long local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar4 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar4, &__dso_handle);
   }

   iVar27 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar27 + 1;
   if (iVar27 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar4 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar4, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00103bfc;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar27 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar27 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar27);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   if (( *(long*)param_3 != 0 ) && ( 1 < *(uint*)( *(long*)param_3 + -8 ) )) {
      HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::operator []((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0xf0 ), param_3);
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)&local_58);
   }

   lVar23 = singleton;
   if (( *(long*)( singleton + 0x98 ) != 0 ) && ( *(int*)( singleton + 0xbc ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0xb8 ) * 4 );
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0xb8 ) * 8 );
      uVar26 = String::hash();
      uVar22 = CONCAT44(0, uVar2);
      lVar32 = *(long*)( lVar23 + 0xa0 );
      uVar30 = 1;
      if (uVar26 != 0) {
         uVar30 = uVar26;
      }

      uVar34 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar30 * lVar3;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar22;
      lVar31 = SUB168(auVar9 * auVar17, 8);
      uVar26 = *(uint*)( lVar32 + lVar31 * 4 );
      iVar27 = SUB164(auVar9 * auVar17, 8);
      if (uVar26 != 0) {
         do {
            if (uVar30 == uVar26) {
               cVar25 = String::operator ==((String*)( *(long*)( *(long*)( lVar23 + 0x98 ) + lVar31 * 8 ) + 0x10 ), param_1);
               if (cVar25 != '\0') {
                  this_02 = (HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x90 );
                  goto LAB_00103758;
               }

               lVar32 = *(long*)( lVar23 + 0xa0 );
            }

            uVar34 = uVar34 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(iVar27 + 1) * lVar3;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar22;
            lVar31 = SUB168(auVar10 * auVar18, 8);
            uVar26 = *(uint*)( lVar32 + lVar31 * 4 );
            iVar27 = SUB164(auVar10 * auVar18, 8);
         }
 while ( ( uVar26 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar26 * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar22,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar11 * auVar19, 8)) * lVar3,auVar20._8_8_ = 0,auVar20._0_8_ = uVar22,uVar34 <= SUB164(auVar12 * auVar20, 8) );
      }

   }

   lVar23 = singleton;
   if (( *(long*)( singleton + 0x68 ) != 0 ) && ( *(int*)( singleton + 0x8c ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x88 ) * 4 );
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x88 ) * 8 );
      uVar26 = String::hash();
      uVar22 = CONCAT44(0, uVar2);
      lVar32 = *(long*)( lVar23 + 0x70 );
      uVar30 = 1;
      if (uVar26 != 0) {
         uVar30 = uVar26;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar3;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar22;
      lVar31 = SUB168(auVar5 * auVar13, 8);
      uVar26 = *(uint*)( lVar32 + lVar31 * 4 );
      iVar27 = SUB164(auVar5 * auVar13, 8);
      if (uVar26 != 0) {
         uVar34 = 0;
         LAB_00103411:if (uVar26 != uVar30) goto LAB_001033c8;
         cVar25 = String::operator ==((String*)( *(long*)( *(long*)( lVar23 + 0x68 ) + lVar31 * 8 ) + 0x10 ), param_1);
         if (cVar25 == '\0') {
            lVar32 = *(long*)( lVar23 + 0x70 );
            goto LAB_001033c8;
         }

         this_02 = (HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x60 );
         LAB_00103758:plVar28 = (long*)HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::operator [](this_02, param_1);
         *(undefined8*)this = 0;
         if (*plVar28 == 0) goto LAB_00103700;
         *(long*)this = *plVar28;
         cVar25 = RefCounted::reference();
         if (cVar25 != '\0') goto LAB_00103700;
         *(undefined8*)this = 0;
         cVar25 = (char)*in_FS_OFFSET;
         goto joined_r0x00103793;
      }

   }

   LAB_0010354d:ResourceLoader::path_remap((String*)&local_68);
   this_00 = (GDScript*)operator_new(0x780, "");
   GDScript::GDScript(this_00);
   postinitialize_handler((Object*)this_00);
   cVar25 = RefCounted::init_ref();
   if (cVar25 == '\0') {
      /* WARNING: Does not return */
      pcVar21 = (code*)invalidInstructionException();
      ( *pcVar21 )();
   }

   cVar25 = RefCounted::reference();
   pVVar33 = (Vector*)0x0;
   if (cVar25 != '\0') {
      pVVar33 = (Vector*)this_00;
   }

   cVar25 = RefCounted::unreference();
   if (( cVar25 != '\0' ) && ( cVar25 = predelete_handler((Object*)this_00) ),cVar25 != '\0') {
      ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
      Memory::free_static(this_00, false);
   }

   ( **(code**)( *(long*)pVVar33 + 0x188 ) )(pVVar33, param_1, 1);
   String::get_extension();
   String::to_lower();
   cVar25 = String::operator ==((String*)&local_58, "gdc");
   lVar23 = local_58;
   if (local_58 != 0) {
      LOCK();
      plVar28 = (long*)( local_58 + -0x10 );
      *plVar28 = *plVar28 + -1;
      UNLOCK();
      if (*plVar28 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar23 + -0x10 ), false);
      }

   }

   pOVar24 = local_60;
   if (local_60 != (Object*)0x0) {
      LOCK();
      pOVar1 = local_60 + -0x10;
      *(long*)pOVar1 = *(long*)pOVar1 + -1;
      UNLOCK();
      if (*(long*)pOVar1 == 0) {
         local_60 = (Object*)0x0;
         Memory::free_static(pOVar24 + -0x10, false);
      }

   }

   if (cVar25 == '\0') {
      iVar27 = GDScript::load_source_code((String*)pVVar33);
      *(int*)param_2 = iVar27;
   }
 else {
      get_binary_tokens((GDScriptCache*)&local_58, (String*)&local_68);
      if (local_50 == 0) {
         *(undefined4*)param_2 = 0xe;
      }

      GDScript::set_binary_tokens_source(pVVar33);
      lVar23 = local_50;
      if (local_50 != 0) {
         LOCK();
         plVar28 = (long*)( local_50 + -0x10 );
         *plVar28 = *plVar28 + -1;
         UNLOCK();
         if (*plVar28 == 0) {
            local_50 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

      iVar27 = *(int*)param_2;
   }

   if (iVar27 == 0) {
      local_58 = 0;
      get_parser((GDScriptCache*)&local_60, param_1, 1, param_2, (String*)&local_58);
      lVar23 = local_58;
      if (local_58 != 0) {
         LOCK();
         plVar28 = (long*)( local_58 + -0x10 );
         *plVar28 = *plVar28 + -1;
         UNLOCK();
         if (*plVar28 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar23 + -0x10 ), false);
         }

      }

      pOVar24 = local_60;
      if (*(int*)param_2 == 0) {
         this_01 = *(GDScriptParser**)( local_60 + 0x180 );
         if (this_01 == (GDScriptParser*)0x0) {
            this_01 = (GDScriptParser*)operator_new(0xa28, "");
            GDScriptParser::GDScriptParser(this_01);
            *(GDScriptParser**)( pOVar24 + 0x180 ) = this_01;
         }

         GDScriptCompiler::make_scripts((GDScript*)pVVar33, *(ClassNode**)( this_01 + 0x50 ), true);
      }

      puVar29 = (undefined8*)HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::operator []((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x60 ), param_1);
      pOVar1 = (Object*)*puVar29;
      if (pOVar1 != (Object*)pVVar33) {
         *puVar29 = pVVar33;
         cVar25 = RefCounted::reference();
         if (cVar25 == '\0') {
            *puVar29 = 0;
         }

         if (( ( pOVar1 != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
         Memory::free_static(pOVar1, false);
      }

   }

   *(Vector**)this = pVVar33;
   cVar25 = RefCounted::reference();
   if (cVar25 == '\0') {
      *(undefined8*)this = 0;
   }

   if (( ( pOVar24 != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)pOVar24 + 0x140 ))(pOVar24);
   Memory::free_static(pOVar24, false);
}
}
  else{
   *(undefined8*)this = 0;
}
cVar25 = RefCounted::unreference();if (( cVar25 != '\0' ) && ( cVar25 = predelete_handler((Object*)pVVar33) ),cVar25 != '\0') {
   ( **(code**)( *(long*)pVVar33 + 0x140 ) )(pVVar33);
   Memory::free_static(pVVar33, false);
}
lVar23 = local_68;if (local_68 != 0) {
   LOCK();
   plVar28 = (long*)( local_68 + -0x10 );
   *plVar28 = *plVar28 + -1;
   UNLOCK();
   if (*plVar28 == 0) {
      local_68 = 0;
      Memory::free_static((void*)( lVar23 + -0x10 ), false);
   }

}
LAB_00103700:cVar25 = (char)*in_FS_OFFSET;joined_r0x00103793:if (cVar25 == '\0') {
   *(undefined1*)in_FS_OFFSET = 1;
   *(undefined1**)in_FS_OFFSET = mutex;
   uVar4 = *(undefined8*)in_FS_OFFSET;
   *(undefined1*)in_FS_OFFSET = 0;
   *in_FS_OFFSET = 0;
   __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar4, &__dso_handle);
   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   iVar27 = *in_FS_OFFSET;
}
 else {
   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   iVar27 = *in_FS_OFFSET;
}
if (iVar27 == 0) {
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar4 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar4, &__dso_handle);
   }

   if ((char)*in_FS_OFFSET == '\0') {
      LAB_00103bfc:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
   }

   if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
      *(undefined1*)in_FS_OFFSET = 0;
   }

}
if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
   return this;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();LAB_001033c8:uVar34 = uVar34 + 1;auVar6._8_8_ = 0;auVar6._0_8_ = ( ulong )(iVar27 + 1) * lVar3;auVar14._8_8_ = 0;auVar14._0_8_ = uVar22;lVar31 = SUB168(auVar6 * auVar14, 8);uVar26 = *(uint*)( lVar32 + lVar31 * 4 );iVar27 = SUB164(auVar6 * auVar14, 8);if (( uVar26 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar26 * lVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar22,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar7 * auVar15, 8)) * lVar3,auVar16._8_8_ = 0,auVar16._0_8_ = uVar22,SUB164(auVar8 * auVar16, 8) < uVar34) goto LAB_0010354d;goto LAB_00103411;}/* GDScriptCache::get_full_script(String const&, Error&, String const&, bool) */GDScriptCache * __thiscall
GDScriptCache::get_full_script
          (GDScriptCache *this,String *param_1,Error *param_2,String *param_3,bool param_4){
   Object *pOVar1;
   long lVar2;
   unique_lock *puVar3;
   Object *pOVar4;
   undefined8 uVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   long lVar14;
   char cVar15;
   uint uVar16;
   uint uVar17;
   undefined4 uVar18;
   int iVar19;
   undefined8 *puVar20;
   long *plVar21;
   uint uVar22;
   long lVar23;
   long lVar24;
   ulong uVar25;
   uint uVar26;
   int *in_FS_OFFSET;
   long local_68;
   long local_60;
   Object *local_58;
   long local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if ((char)*in_FS_OFFSET == '\0') {
      uVar5 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar5, &__dso_handle);
   }

   iVar19 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar19 + 1;
   if (iVar19 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         uVar5 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar5, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00104525;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar19 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar19 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar19);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   if (( *(long*)param_3 != 0 ) && ( 1 < *(uint*)( *(long*)param_3 + -8 ) )) {
      HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::operator []((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0xf0 ), param_3);
      HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)&local_58);
   }

   lVar14 = singleton;
   *(undefined8*)this = 0;
   *(undefined4*)param_2 = 0;
   if (( *(long*)( lVar14 + 0x98 ) == 0 ) || ( *(int*)( lVar14 + 0xbc ) == 0 )) {
      LAB_00103cd4:local_60 = 0;
      get_shallow_script((GDScriptCache*)&local_58, param_1, param_2, (String*)&local_60);
      pOVar4 = local_58;
      pOVar1 = *(Object**)this;
      if (local_58 == pOVar1) {
         LAB_00104498:if (pOVar4 != (Object*)0x0) {
            LAB_00103d3b:cVar15 = RefCounted::unreference();
            if (( cVar15 != '\0' ) && ( cVar15 = predelete_handler(pOVar4) ),cVar15 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

      }
 else {
         *(Object**)this = local_58;
         if (local_58 != (Object*)0x0) {
            cVar15 = RefCounted::reference();
            if (cVar15 == '\0') {
               *(undefined8*)this = 0;
            }

            if (( ( pOVar1 != (Object*)0x0 ) && ( cVar15 = RefCounted::unreference() ),cVar15 != '\0' )) goto LAB_0010447a;
            goto LAB_00103d3b;
         }

         if (( ( pOVar1 != (Object*)0x0 ) && ( cVar15 = RefCounted::unreference() ),cVar15 != '\0' )) {
            LAB_0010447a:( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
            goto LAB_00104498;
         }

      }

      lVar14 = local_60;
      if (local_60 != 0) {
         LOCK();
         plVar21 = (long*)( local_60 + -0x10 );
         *plVar21 = *plVar21 + -1;
         UNLOCK();
         if (*plVar21 == 0) {
            local_60 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
         }

      }

      if (*(long*)this != 0) goto LAB_00103ead;
   }
 else {
      uVar17 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar14 + 0xb8 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar14 + 0xb8 ) * 8 );
      uVar16 = String::hash();
      uVar25 = CONCAT44(0, uVar17);
      uVar22 = 1;
      if (uVar16 != 0) {
         uVar22 = uVar16;
      }

      lVar24 = *(long*)( lVar14 + 0xa0 );
      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar22 * lVar2;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar25;
      lVar23 = SUB168(auVar6 * auVar10, 8);
      uVar16 = *(uint*)( lVar24 + lVar23 * 4 );
      iVar19 = SUB164(auVar6 * auVar10, 8);
      if (uVar16 != 0) {
         uVar26 = 0;
         do {
            if (uVar16 == uVar22) {
               cVar15 = String::operator ==((String*)( *(long*)( *(long*)( lVar14 + 0x98 ) + lVar23 * 8 ) + 0x10 ), param_1);
               if (cVar15 != '\0') {
                  puVar20 = (undefined8*)HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::operator []((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x90 ), param_1);
                  pOVar1 = *(Object**)this;
                  pOVar4 = (Object*)*puVar20;
                  if (pOVar4 != pOVar1) {
                     *(Object**)this = pOVar4;
                     if (( pOVar4 != (Object*)0x0 ) && ( cVar15 = RefCounted::reference() ),cVar15 == '\0') {
                        *(undefined8*)this = 0;
                     }

                     if (( ( pOVar1 != (Object*)0x0 ) && ( cVar15 = RefCounted::unreference() ),cVar15 != '\0' )) &&( cVar15 = cVar15 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
                     Memory::free_static(pOVar1, false);
                  }

               }

               if (!param_4) goto LAB_00103f43;
               if (*(long*)this == 0) goto LAB_00103cd4;
               ResourceLoader::path_remap((String*)&local_68);
               goto LAB_00103ff1;
            }

            lVar24 = *(long*)( lVar14 + 0xa0 );
         }
 while ( ( uVar16 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar16 * lVar2,auVar12._8_8_ = 0,auVar12._0_8_ = uVar25,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar17 + iVar19 ) - SUB164(auVar8 * auVar12, 8)) * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar25,uVar26 <= SUB164(auVar9 * auVar13, 8) );
      }

      if (*(long*)this == 0) goto LAB_00103cd4;
      LAB_00103ead:ResourceLoader::path_remap((String*)&local_68);
      if (param_4) {
         LAB_00103ff1:String::get_extension();
         String::to_lower();
         cVar15 = String::operator ==((String*)&local_58, "gdc");
         pOVar1 = local_58;
         if (local_58 != (Object*)0x0) {
            LOCK();
            pOVar4 = local_58 + -0x10;
            *(long*)pOVar4 = *(long*)pOVar4 + -1;
            UNLOCK();
            if (*(long*)pOVar4 == 0) {
               local_58 = (Object*)0x0;
               Memory::free_static(pOVar1 + -0x10, false);
            }

         }

         lVar14 = local_60;
         if (local_60 == 0) {
            LAB_0010404f:if (cVar15 != '\0') goto LAB_00104058;
            LAB_001042c0:iVar19 = GDScript::load_source_code(*(String**)this);
            *(int*)param_2 = iVar19;
            if (iVar19 == 0) goto LAB_00103ec9;
         }
 else {
            LOCK();
            plVar21 = (long*)( local_60 + -0x10 );
            *plVar21 = *plVar21 + -1;
            UNLOCK();
            if (*plVar21 != 0) goto LAB_0010404f;
            local_60 = 0;
            Memory::free_static((void*)( lVar14 + -0x10 ), false);
            if (cVar15 == '\0') goto LAB_001042c0;
            LAB_00104058:get_binary_tokens((GDScriptCache*)&local_58, (String*)&local_68);
            if (local_50 != 0) {
               GDScript::set_binary_tokens_source(*(Vector**)this);
               lVar14 = local_50;
               if (local_50 != 0) {
                  LOCK();
                  plVar21 = (long*)( local_50 + -0x10 );
                  *plVar21 = *plVar21 + -1;
                  UNLOCK();
                  if (*plVar21 == 0) {
                     local_50 = 0;
                     Memory::free_static((void*)( lVar14 + -0x10 ), false);
                  }

               }

               goto LAB_00103ec9;
            }

            *(undefined4*)param_2 = 0xe;
         }

      }
 else {
         LAB_00103ec9:puVar3 = *(unique_lock**)in_FS_OFFSET;
         if ((char)*in_FS_OFFSET == '\0') {
            *(undefined1*)in_FS_OFFSET = 1;
            *(undefined1**)in_FS_OFFSET = mutex;
            *(undefined1*)in_FS_OFFSET = 0;
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, puVar3, &__dso_handle);
         }

         uVar17 = WorkerThreadPool::_thread_enter_unlock_allowance_zone(puVar3);
         uVar18 = ( **(code**)( **(long**)this + 0x228 ) )();
         *(undefined4*)param_2 = uVar18;
         WorkerThreadPool::thread_exit_unlock_allowance_zone(uVar17);
         if (*(int*)param_2 == 0) {
            plVar21 = (long*)HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::operator []((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x90 ), param_1);
            pOVar1 = *(Object**)this;
            pOVar4 = (Object*)*plVar21;
            if (pOVar1 != pOVar4) {
               *plVar21 = (long)pOVar1;
               if (( pOVar1 != (Object*)0x0 ) && ( cVar15 = RefCounted::reference() ),cVar15 == '\0') {
                  *plVar21 = 0;
               }

               if (( ( pOVar4 != (Object*)0x0 ) && ( cVar15 = RefCounted::unreference() ),cVar15 != '\0' )) &&( cVar15 = cVar15 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

         HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::erase((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x60 ), param_1);
      }

   }

   lVar14 = local_68;
   if (local_68 != 0) {
      LOCK();
      plVar21 = (long*)( local_68 + -0x10 );
      *plVar21 = *plVar21 + -1;
      UNLOCK();
      if (*plVar21 == 0) {
         local_68 = 0;
         Memory::free_static((void*)( lVar14 + -0x10 ), false);
      }

   }

}
LAB_00103f43:if ((char)*in_FS_OFFSET == '\0') {
   *(undefined1*)in_FS_OFFSET = 1;
   *(undefined1**)in_FS_OFFSET = mutex;
   uVar5 = *(undefined8*)in_FS_OFFSET;
   *(undefined1*)in_FS_OFFSET = 0;
   *in_FS_OFFSET = 0;
   __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar5, &__dso_handle);
}
*in_FS_OFFSET = *in_FS_OFFSET + -1;if (*in_FS_OFFSET == 0) {
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar5 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar5, &__dso_handle);
   }

   if ((char)*in_FS_OFFSET == '\0') {
      LAB_00104525:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
   }

   if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
      *(undefined1*)in_FS_OFFSET = 0;
   }

}
if (local_40 != *(long*)( in_FS_OFFSET + 10 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return this;}/* GDScriptCache::finish_compiling(String const&) */int GDScriptCache::finish_compiling(String *param_1) {
   CowData *pCVar1;
   ulong uVar2;
   uint uVar3;
   uint uVar4;
   Object *pOVar5;
   long lVar6;
   undefined8 uVar7;
   char cVar8;
   undefined8 *puVar9;
   long *plVar10;
   void *__s;
   String *pSVar11;
   void *pvVar12;
   void *pvVar13;
   long lVar14;
   int iVar15;
   int iVar16;
   Object *pOVar17;
   ulong uVar18;
   long lVar19;
   String *pSVar20;
   int *in_FS_OFFSET;
   int local_5c;
   Object *local_58;
   long local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar7 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar7, &__dso_handle);
   }

   iVar15 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar15 + 1;
   if (iVar15 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar7 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar7, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00104c08;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar15 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar15 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar15);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   get_cached_script((GDScriptCache*)&local_58, param_1);
   puVar9 = (undefined8*)HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::operator []((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x90 ), param_1);
   pOVar17 = local_58;
   pOVar5 = (Object*)*puVar9;
   if (local_58 != pOVar5) {
      *puVar9 = local_58;
      if (( local_58 != (Object*)0x0 ) && ( cVar8 = RefCounted::reference() ),cVar8 == '\0') {
         *puVar9 = 0;
      }

      if (( ( pOVar5 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
      Memory::free_static(pOVar5, false);
   }

}
HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::erase((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x60 ), param_1);plVar10 = (long*)HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::operator []((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0xf0 ), param_1);uVar3 = *(uint*)( (long)plVar10 + 0x24 );if (uVar3 == 0) {
   HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::erase((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0xf0 ), param_1);
   iVar15 = 0;
}
 else {
   lVar19 = 0;
   uVar4 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar10 + 4 ) * 4 );
   uVar18 = (ulong)uVar4;
   uVar2 = uVar18 * 4;
   __s = (void*)Memory::alloc_static(uVar2, false);
   pSVar11 = (String*)Memory::alloc_static(uVar18 * 8, false);
   pvVar12 = (void*)Memory::alloc_static(uVar2, false);
   pvVar13 = (void*)Memory::alloc_static(uVar2, false);
   pSVar20 = pSVar11;
   do {
      lVar6 = *plVar10;
      *(undefined8*)pSVar20 = 0;
      pCVar1 = (CowData*)( lVar6 + lVar19 * 2 );
      if (*(long*)pCVar1 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)pSVar20, pCVar1);
      }

      pSVar20 = (String*)( (CowData<char32_t>*)pSVar20 + 8 );
      *(undefined4*)( (long)pvVar12 + lVar19 ) = *(undefined4*)( plVar10[2] + lVar19 );
      lVar19 = lVar19 + 4;
   }
 while ( lVar19 != (ulong)uVar3 * 4 );
   if (uVar4 != 0) {
      lVar19 = plVar10[3];
      lVar6 = plVar10[1];
      lVar14 = 0;
      do {
         *(undefined4*)( (long)__s + lVar14 ) = *(undefined4*)( lVar19 + lVar14 );
         *(undefined4*)( (long)pvVar13 + lVar14 ) = *(undefined4*)( lVar6 + lVar14 );
         lVar14 = lVar14 + 4;
      }
 while ( uVar2 - lVar14 != 0 );
   }

   iVar16 = 1;
   iVar15 = 0;
   pSVar20 = pSVar11;
   while (true) {
      local_5c = 0;
      local_50 = 0;
      get_full_script((GDScriptCache*)&local_48, pSVar20, (Error*)&local_5c, (String*)&local_50, false);
      pOVar5 = local_48;
      if (( ( local_48 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
      Memory::free_static(pOVar5, false);
   }
;
   lVar19 = local_50;
   if (local_50 != 0) {
      LOCK();
      plVar10 = (long*)( local_50 + -0x10 );
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar19 + -0x10 ), false);
      }

   }

   if (local_5c != 0) {
      iVar15 = local_5c;
   }

   if ((int)uVar3 <= iVar16) break;
   iVar16 = iVar16 + 1;
   pSVar20 = pSVar20 + 8;
}
HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::erase((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0xf0 ), param_1);pOVar17 = local_58;if (pSVar11 != (String*)0x0) {
   if (uVar4 != 0) {
      memset(__s, 0, uVar18 << 2);
   }

   pSVar20 = pSVar11;
   do {
      if (*(long*)pSVar20 != 0) {
         LOCK();
         plVar10 = (long*)( *(long*)pSVar20 + -0x10 );
         *plVar10 = *plVar10 + -1;
         UNLOCK();
         if (*plVar10 == 0) {
            lVar19 = *(long*)pSVar20;
            *(long*)pSVar20 = 0;
            Memory::free_static((void*)( lVar19 + -0x10 ), false);
         }

      }

      pSVar20 = pSVar20 + 8;
   }
 while ( pSVar20 != pSVar11 + (ulong)uVar3 * 8 );
   Memory::free_static(pSVar11, false);
   Memory::free_static(pvVar12, false);
   Memory::free_static(pvVar13, false);
   Memory::free_static(__s, false);
   pOVar17 = local_58;
}
}if (( ( pOVar17 != (Object*)0x0 ) && ( cVar8 = RefCounted::unreference() ),cVar8 != '\0' )) &&( cVar8 = cVar8 != '\0' )(**(code**)( *(long*)pOVar17 + 0x140 ))(pOVar17);Memory::free_static(pOVar17, false);}if ((char)*in_FS_OFFSET == '\0') {
   *(undefined1*)in_FS_OFFSET = 1;
   *(undefined1**)in_FS_OFFSET = mutex;
   uVar7 = *(undefined8*)in_FS_OFFSET;
   *(undefined1*)in_FS_OFFSET = 0;
   *in_FS_OFFSET = 0;
   __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar7, &__dso_handle);
}
*in_FS_OFFSET = *in_FS_OFFSET + -1;if (*in_FS_OFFSET == 0) {
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar7 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar7, &__dso_handle);
   }

   if ((char)*in_FS_OFFSET == '\0') {
      LAB_00104c08:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
   }

   if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
      pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
      *(undefined1*)in_FS_OFFSET = 0;
   }

}
if (local_40 != *(long*)( in_FS_OFFSET + 10 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return iVar15;}/* GDScriptCache::clear() */void GDScriptCache::clear(void) {
   long *plVar1;
   ulong *puVar2;
   void *pvVar3;
   long lVar4;
   undefined8 *puVar5;
   GDScriptParser *pGVar6;
   undefined8 uVar7;
   ulong uVar8;
   char cVar9;
   int iVar10;
   int *piVar11;
   long lVar12;
   Object *pOVar13;
   Element *pEVar14;
   Element *pEVar15;
   Element *pEVar16;
   void *pvVar17;
   uint uVar18;
   ulong *puVar19;
   Element *pEVar20;
   ulong *puVar21;
   long lVar22;
   long lVar23;
   long *plVar24;
   int *in_FS_OFFSET;
   bool bVar25;
   Element *local_78;
   Element *local_70;
   int local_68;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if (singleton == 0) goto LAB_0010551d;
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar7 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar7, &__dso_handle);
   }

   iVar10 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar10 + 1;
   if (iVar10 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar7 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar7, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00105b68;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar10 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar10 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar10);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   lVar12 = singleton;
   if (*(char*)( singleton + 0x150 ) == '\0') {
      plVar24 = (long*)( singleton + 0x128 );
      *(undefined1*)( singleton + 0x150 ) = 1;
      lVar23 = lVar12;
      if (( *plVar24 != 0 ) && ( *(int*)( lVar12 + 0x14c ) != 0 )) {
         uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar12 + 0x148 ) * 4 );
         if (uVar18 != 0) {
            lVar22 = 0;
            do {
               piVar11 = (int*)( *(long*)( lVar12 + 0x130 ) + lVar22 );
               if (*piVar11 != 0) {
                  *piVar11 = 0;
                  pvVar3 = *(void**)( *(long*)( lVar12 + 0x128 ) + lVar22 * 2 );
                  pvVar17 = *(void**)( (long)pvVar3 + 0x18 );
                  if (pvVar17 != (void*)0x0) {
                     if (( *(int*)( (long)pvVar3 + 0x3c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar3 + 0x38 ) * 4 ) == 0 || ( memset(*(void**)( (long)pvVar3 + 0x30 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar3 + 0x38 ) * 4 ) * 4),*(int*)( (long)pvVar3 + 0x3c ) != 0 ) ) )) {
                        lVar23 = 0;
                        do {
                           plVar24 = (long*)( (long)pvVar17 + lVar23 * 8 );
                           if (*plVar24 != 0) {
                              LOCK();
                              plVar1 = (long*)( *plVar24 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 lVar4 = *plVar24;
                                 *plVar24 = 0;
                                 Memory::free_static((void*)( lVar4 + -0x10 ), false);
                              }

                              pvVar17 = *(void**)( (long)pvVar3 + 0x18 );
                           }

                           lVar23 = lVar23 + 1;
                        }
 while ( (uint)lVar23 < *(uint*)( (long)pvVar3 + 0x3c ) );
                        *(undefined4*)( (long)pvVar3 + 0x3c ) = 0;
                        if (pvVar17 == (void*)0x0) goto LAB_00104d97;
                     }

                     Memory::free_static(pvVar17, false);
                     Memory::free_static(*(void**)( (long)pvVar3 + 0x28 ), false);
                     Memory::free_static(*(void**)( (long)pvVar3 + 0x20 ), false);
                     Memory::free_static(*(void**)( (long)pvVar3 + 0x30 ), false);
                  }

                  LAB_00104d97:if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                     LOCK();
                     plVar24 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                     *plVar24 = *plVar24 + -1;
                     UNLOCK();
                     if (*plVar24 == 0) {
                        lVar23 = *(long*)( (long)pvVar3 + 0x10 );
                        *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar23 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( lVar12 + 0x128 ) + lVar22 * 2 ) = 0;
               }

               lVar22 = lVar22 + 4;
               lVar23 = singleton;
            }
 while ( (ulong)uVar18 << 2 != lVar22 );
         }

         *(undefined4*)( lVar12 + 0x14c ) = 0;
         *(undefined1(*) [16])( lVar12 + 0x138 ) = (undefined1[16])0x0;
      }

      puVar5 = *(undefined8**)( lVar23 + 0x48 );
      for (; puVar5 != (undefined8*)0x0; puVar5 = (undefined8*)*puVar5) {
         puVar21 = (ulong*)puVar5[4];
         if (( puVar21 != (ulong*)0x0 ) && ( puVar2 = puVar2 != puVar21 )) {
            do {
               while (true) {
                  uVar18 = ( uint ) * puVar21 & 0xffffff;
                  if (uVar18 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        uVar8 = (ulong)local_78 >> 8;
                        local_78 = (Element*)( uVar8 << 8 );
                        LOCK();
                        bVar25 = (char)ObjectDB::spin_lock == '\0';
                        if (bVar25) {
                           ObjectDB::spin_lock._0_1_ = '\x01';
                        }

                        UNLOCK();
                        if (bVar25) break;
                        local_78 = (Element*)( uVar8 << 8 );
                        do {} while ( (char)ObjectDB::spin_lock != '\0' );
                     }
;
                     puVar19 = (ulong*)( (ulong)uVar18 * 0x10 + ObjectDB::object_slots );
                     if (( *puVar21 >> 0x18 & 0x7fffffffff ) == ( *puVar19 & 0x7fffffffff )) {
                        pOVar13 = (Object*)puVar19[1];
                        ObjectDB::spin_lock._0_1_ = '\0';
                     }
 else {
                        pOVar13 = (Object*)0x0;
                        ObjectDB::spin_lock._0_1_ = '\0';
                     }

                  }
 else {
                     _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                     pOVar13 = (Object*)0x0;
                  }

                  Variant::Variant((Variant*)local_58, pOVar13);
                  lVar12 = Variant::get_validated_object();
                  if (lVar12 == 0) break;
                  pOVar13 = (Object*)__dynamic_cast(lVar12, &Object::typeinfo, &GDScriptParserRef::typeinfo, 0);
                  if (pOVar13 == (Object*)0x0) {
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                        goto LAB_0010565e;
                     }

                  }
 else {
                     cVar9 = RefCounted::reference();
                     if (cVar9 == '\0') break;
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (pOVar13[0x1a4] == (Object)0x0) {
                        pGVar6 = *(GDScriptParser**)( pOVar13 + 0x180 );
                        *(undefined8*)( pOVar13 + 400 ) = 0;
                        *(undefined4*)( pOVar13 + 0x1a0 ) = 0;
                        *(undefined1(*) [16])( pOVar13 + 0x180 ) = (undefined1[16])0x0;
                        if (*(GDScriptAnalyzer**)( pOVar13 + 0x188 ) != (GDScriptAnalyzer*)0x0) {
                           memdelete<GDScriptAnalyzer>(*(GDScriptAnalyzer**)( pOVar13 + 0x188 ));
                        }

                        if (pGVar6 != (GDScriptParser*)0x0) {
                           GDScriptParser::~GDScriptParser(pGVar6);
                           Memory::free_static(pGVar6, false);
                        }

                     }

                     cVar9 = RefCounted::unreference();
                     if (( cVar9 != '\0' ) && ( cVar9 = predelete_handler(pOVar13) ),cVar9 != '\0') {
                        ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
                        Memory::free_static(pOVar13, false);
                     }

                  }

                  LAB_00104f6b:puVar21 = puVar21 + 1;
                  if (puVar2 == puVar21) goto LAB_00105672;
               }
;
               if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_00104f6b;
               Variant::_clear_internal();
               LAB_0010565e:puVar21 = puVar21 + 1;
            }
 while ( puVar2 != puVar21 );
         }

         LAB_00105672:lVar23 = singleton;
      }

      lVar12 = lVar23;
      if (( *(long*)( lVar23 + 0x38 ) != 0 ) && ( *(int*)( lVar23 + 0x5c ) != 0 )) {
         uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar23 + 0x58 ) * 4 );
         if (uVar18 != 0) {
            lVar22 = 0;
            do {
               piVar11 = (int*)( *(long*)( lVar23 + 0x40 ) + lVar22 );
               if (*piVar11 != 0) {
                  *piVar11 = 0;
                  pvVar3 = *(void**)( *(long*)( lVar23 + 0x38 ) + lVar22 * 2 );
                  if (*(long*)( (long)pvVar3 + 0x20 ) != 0) {
                     LOCK();
                     plVar24 = (long*)( *(long*)( (long)pvVar3 + 0x20 ) + -0x10 );
                     *plVar24 = *plVar24 + -1;
                     UNLOCK();
                     if (*plVar24 == 0) {
                        lVar12 = *(long*)( (long)pvVar3 + 0x20 );
                        *(undefined8*)( (long)pvVar3 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar12 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                     LOCK();
                     plVar24 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                     *plVar24 = *plVar24 + -1;
                     UNLOCK();
                     if (*plVar24 == 0) {
                        lVar12 = *(long*)( (long)pvVar3 + 0x10 );
                        *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar12 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( lVar23 + 0x38 ) + lVar22 * 2 ) = 0;
               }

               lVar22 = lVar22 + 4;
               lVar12 = singleton;
            }
 while ( lVar22 != (ulong)uVar18 * 4 );
         }

         *(undefined4*)( lVar23 + 0x5c ) = 0;
         *(undefined1(*) [16])( lVar23 + 0x48 ) = (undefined1[16])0x0;
      }

      plVar24 = *(long**)( lVar12 + 0x18 );
      local_78 = (Element*)0x0;
      local_68 = 0;
      local_70 = (Element*)&_GlobalNilClass::_nil;
      if (plVar24 == (long*)0x0) {
         if (*(long*)( lVar12 + 8 ) != 0) goto LAB_001050d7;
      }
 else {
         do {
            pOVar13 = (Object*)plVar24[3];
            if (( pOVar13 != (Object*)0x0 ) && ( cVar9 = RefCounted::init_ref() ),cVar9 == '\0') {
               pOVar13 = (Object*)0x0;
            }

            if (local_78 == (Element*)0x0) {
               pEVar16 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
               *(undefined1(*) [16])( pEVar16 + 0x20 ) = (undefined1[16])0x0;
               *(undefined8*)( pEVar16 + 0x30 ) = 0;
               *(undefined4*)pEVar16 = 1;
               for (int i = 0; i < 3; i++) {
                  *(Element**)( pEVar16 + ( 8*i + 8 ) ) = local_70;
               }

               local_78 = pEVar16;
            }
 else {
               pEVar14 = *(Element**)( local_78 + 0x10 );
               pEVar16 = local_78;
               while (pEVar14 != local_70) {
                  pEVar16 = pEVar14;
                  if (pOVar13 < *(Object**)( pEVar14 + 0x30 )) {
                     pEVar14 = *(Element**)( pEVar14 + 0x10 );
                  }
 else {
                     if (pOVar13 <= *(Object**)( pEVar14 + 0x30 )) goto LAB_001050a4;
                     pEVar14 = *(Element**)( pEVar14 + 8 );
                  }

               }
;
            }

            pEVar14 = (Element*)operator_new(0x38, DefaultAllocator::alloc);
            *(undefined1(*) [16])( pEVar14 + 0x20 ) = (undefined1[16])0x0;
            *(undefined4*)pEVar14 = 0;
            *(undefined8*)( pEVar14 + 0x30 ) = 0;
            *(Element**)( pEVar14 + 0x18 ) = pEVar16;
            *(Element**)( pEVar14 + 8 ) = local_70;
            *(Element**)( pEVar14 + 0x10 ) = local_70;
            if (pOVar13 != (Object*)0x0) {
               *(Object**)( pEVar14 + 0x30 ) = pOVar13;
               cVar9 = RefCounted::reference();
               if (cVar9 == '\0') {
                  *(undefined8*)( pEVar14 + 0x30 ) = 0;
               }

            }

            if (( pEVar16 == local_78 ) || ( pOVar13 < *(Object**)( pEVar16 + 0x30 ) )) {
               pEVar20 = *(Element**)( pEVar14 + 8 );
               *(Element**)( pEVar16 + 0x10 ) = pEVar14;
               pEVar16 = pEVar14;
               if (pEVar20 == local_70) goto LAB_001058a5;
               LAB_00105051:do {
                  pEVar15 = pEVar20;
                  pEVar20 = *(Element**)( pEVar15 + 0x10 );
               }
 while ( *(Element**)( pEVar15 + 0x10 ) != local_70 );
               *(Element**)( pEVar14 + 0x20 ) = pEVar15;
               pEVar20 = *(Element**)( pEVar14 + 0x10 );
               pEVar16 = pEVar14;
               if (*(Element**)( pEVar14 + 0x10 ) != local_70) goto LAB_0010506e;
               LAB_001058cf:do {
                  pEVar20 = pEVar16;
                  pEVar16 = *(Element**)( pEVar20 + 0x18 );
               }
 while ( pEVar20 == *(Element**)( pEVar16 + 0x10 ) );
               if (local_78 != pEVar20) goto LAB_0010507a;
               *(undefined8*)( pEVar14 + 0x28 ) = 0;
               if (pEVar15 != (Element*)0x0) goto LAB_00105083;
            }
 else {
               *(Element**)( pEVar16 + 8 ) = pEVar14;
               pEVar16 = pEVar14;
               pEVar20 = *(Element**)( pEVar14 + 8 );
               if (*(Element**)( pEVar14 + 8 ) != local_70) goto LAB_00105051;
               LAB_001058a5:do {
                  pEVar15 = *(Element**)( pEVar16 + 0x18 );
                  bVar25 = pEVar16 == *(Element**)( pEVar15 + 8 );
                  pEVar16 = pEVar15;
               }
 while ( bVar25 );
               if (local_78 == pEVar15) {
                  pEVar15 = (Element*)0x0;
               }

               *(Element**)( pEVar14 + 0x20 ) = pEVar15;
               pEVar20 = *(Element**)( pEVar14 + 0x10 );
               pEVar16 = pEVar14;
               if (*(Element**)( pEVar14 + 0x10 ) == local_70) goto LAB_001058cf;
               LAB_0010506e:do {
                  pEVar16 = pEVar20;
                  pEVar20 = *(Element**)( pEVar16 + 8 );
               }
 while ( *(Element**)( pEVar16 + 8 ) != local_70 );
               LAB_0010507a:*(Element**)( pEVar14 + 0x28 ) = pEVar16;
               if (pEVar15 != (Element*)0x0) {
                  LAB_00105083:*(Element**)( pEVar15 + 0x28 ) = pEVar14;
                  pEVar16 = *(Element**)( pEVar14 + 0x28 );
                  if (pEVar16 == (Element*)0x0) goto LAB_00105094;
               }

               *(Element**)( pEVar16 + 0x20 ) = pEVar14;
            }

            LAB_00105094:local_68 = local_68 + 1;
            RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>::_insert_rb_fix((RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>*)&local_78, pEVar14);
            LAB_001050a4:if (( ( pOVar13 != (Object*)0x0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0' )) &&( cVar9 = cVar9 != '\0' )(**(code**)( *(long*)pOVar13 + 0x140 ))(pOVar13);
            Memory::free_static(pOVar13, false);
         }
 while ( plVar24 != (long*)0x0 );
         lVar12 = singleton;
         if (*(long*)( singleton + 8 ) != 0) {
            LAB_001050d7:if (*(int*)( lVar12 + 0x2c ) != 0) {
               lVar23 = 0;
               uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar12 + 0x28 ) * 4 );
               if (uVar18 != 0) {
                  do {
                     piVar11 = (int*)( *(long*)( lVar12 + 0x10 ) + lVar23 );
                     if (*piVar11 != 0) {
                        *piVar11 = 0;
                        pvVar3 = *(void**)( *(long*)( lVar12 + 8 ) + lVar23 * 2 );
                        if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                           LOCK();
                           plVar24 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                           *plVar24 = *plVar24 + -1;
                           UNLOCK();
                           if (*plVar24 == 0) {
                              lVar22 = *(long*)( (long)pvVar3 + 0x10 );
                              *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                              Memory::free_static((void*)( lVar22 + -0x10 ), false);
                           }

                        }

                        Memory::free_static(pvVar3, false);
                        *(undefined8*)( *(long*)( lVar12 + 8 ) + lVar23 * 2 ) = 0;
                     }

                     lVar23 = lVar23 + 4;
                  }
 while ( (ulong)uVar18 << 2 != lVar23 );
               }

               *(undefined4*)( lVar12 + 0x2c ) = 0;
               *(undefined1(*) [16])( lVar12 + 0x18 ) = (undefined1[16])0x0;
            }

         }

         if (( local_78 != (Element*)0x0 ) && ( pEVar16 = *(Element**)( local_78 + 0x10 ) * (Element**)( local_78 + 0x10 ) != local_70 )) {
            do {
               pEVar14 = pEVar16;
               pEVar16 = *(Element**)( pEVar14 + 0x10 );
            }
 while ( local_70 != *(Element**)( pEVar14 + 0x10 ) );
            do {
               lVar12 = *(long*)( pEVar14 + 0x30 );
               if (( lVar12 != 0 ) && ( *(char*)( lVar12 + 0x1a4 ) == '\0' )) {
                  pGVar6 = *(GDScriptParser**)( lVar12 + 0x180 );
                  *(undefined8*)( lVar12 + 400 ) = 0;
                  *(undefined4*)( lVar12 + 0x1a0 ) = 0;
                  *(undefined1(*) [16])( lVar12 + 0x180 ) = (undefined1[16])0x0;
                  if (*(GDScriptAnalyzer**)( lVar12 + 0x188 ) != (GDScriptAnalyzer*)0x0) {
                     memdelete<GDScriptAnalyzer>(*(GDScriptAnalyzer**)( lVar12 + 0x188 ));
                  }

                  if (pGVar6 != (GDScriptParser*)0x0) {
                     GDScriptParser::~GDScriptParser(pGVar6);
                     Memory::free_static(pGVar6, false);
                  }

               }

               pEVar14 = *(Element**)( pEVar14 + 0x20 );
            }
 while ( pEVar14 != (Element*)0x0 );
         }

      }

      RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>::clear((RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>*)&local_78);
      lVar12 = singleton;
      lVar23 = singleton;
      if (( *(long*)( singleton + 0x68 ) != 0 ) && ( *(int*)( singleton + 0x8c ) != 0 )) {
         uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x88 ) * 4 );
         if (uVar18 != 0) {
            lVar23 = 0;
            do {
               piVar11 = (int*)( *(long*)( lVar12 + 0x70 ) + lVar23 );
               if (*piVar11 != 0) {
                  *piVar11 = 0;
                  pvVar3 = *(void**)( *(long*)( lVar12 + 0x68 ) + lVar23 * 2 );
                  if (( *(long*)( (long)pvVar3 + 0x18 ) != 0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0') {
                     pOVar13 = *(Object**)( (long)pvVar3 + 0x18 );
                     cVar9 = predelete_handler(pOVar13);
                     if (cVar9 != '\0') {
                        ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
                        Memory::free_static(pOVar13, false);
                     }

                  }

                  if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                     LOCK();
                     plVar24 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                     *plVar24 = *plVar24 + -1;
                     UNLOCK();
                     if (*plVar24 == 0) {
                        lVar22 = *(long*)( (long)pvVar3 + 0x10 );
                        *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar22 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( lVar12 + 0x68 ) + lVar23 * 2 ) = 0;
               }

               lVar23 = lVar23 + 4;
            }
 while ( lVar23 != (ulong)uVar18 << 2 );
         }

         lVar23 = singleton;
         *(undefined4*)( lVar12 + 0x8c ) = 0;
         *(undefined1(*) [16])( lVar12 + 0x78 ) = (undefined1[16])0x0;
      }

      lVar12 = lVar23;
      if (( *(long*)( lVar23 + 0x98 ) != 0 ) && ( *(int*)( lVar23 + 0xbc ) != 0 )) {
         uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar23 + 0xb8 ) * 4 );
         if (uVar18 != 0) {
            lVar22 = 0;
            do {
               piVar11 = (int*)( *(long*)( lVar23 + 0xa0 ) + lVar22 );
               if (*piVar11 != 0) {
                  *piVar11 = 0;
                  pvVar3 = *(void**)( *(long*)( lVar23 + 0x98 ) + lVar22 * 2 );
                  if (( *(long*)( (long)pvVar3 + 0x18 ) != 0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0') {
                     pOVar13 = *(Object**)( (long)pvVar3 + 0x18 );
                     cVar9 = predelete_handler(pOVar13);
                     if (cVar9 != '\0') {
                        ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
                        Memory::free_static(pOVar13, false);
                     }

                  }

                  if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                     LOCK();
                     plVar24 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                     *plVar24 = *plVar24 + -1;
                     UNLOCK();
                     if (*plVar24 == 0) {
                        lVar12 = *(long*)( (long)pvVar3 + 0x10 );
                        *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar12 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( lVar23 + 0x98 ) + lVar22 * 2 ) = 0;
               }

               lVar22 = lVar22 + 4;
               lVar12 = singleton;
            }
 while ( (ulong)uVar18 << 2 != lVar22 );
         }

         *(undefined4*)( lVar23 + 0xbc ) = 0;
         *(undefined1(*) [16])( lVar23 + 0xa8 ) = (undefined1[16])0x0;
      }

      if (( *(long*)( lVar12 + 200 ) != 0 ) && ( *(int*)( lVar12 + 0xec ) != 0 )) {
         lVar23 = 0;
         uVar18 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar12 + 0xe8 ) * 4 );
         if (uVar18 != 0) {
            do {
               piVar11 = (int*)( *(long*)( lVar12 + 0xd0 ) + lVar23 );
               if (*piVar11 != 0) {
                  *piVar11 = 0;
                  pvVar3 = *(void**)( *(long*)( lVar12 + 200 ) + lVar23 * 2 );
                  if (( *(long*)( (long)pvVar3 + 0x18 ) != 0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0') {
                     pOVar13 = *(Object**)( (long)pvVar3 + 0x18 );
                     cVar9 = predelete_handler(pOVar13);
                     if (cVar9 != '\0') {
                        ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
                        Memory::free_static(pOVar13, false);
                     }

                  }

                  if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                     LOCK();
                     plVar24 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                     *plVar24 = *plVar24 + -1;
                     UNLOCK();
                     if (*plVar24 == 0) {
                        lVar22 = *(long*)( (long)pvVar3 + 0x10 );
                        *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar22 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( lVar12 + 200 ) + lVar23 * 2 ) = 0;
               }

               lVar23 = lVar23 + 4;
            }
 while ( lVar23 != (ulong)uVar18 << 2 );
         }

         *(undefined4*)( lVar12 + 0xec ) = 0;
         *(undefined1(*) [16])( lVar12 + 0xd8 ) = (undefined1[16])0x0;
      }

      RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>::clear((RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>*)&local_78);
      pEVar16 = local_78;
      if (local_78 != (Element*)0x0) {
         if (( *(long*)( local_78 + 0x30 ) != 0 ) && ( cVar9 = RefCounted::unreference() ),cVar9 != '\0') {
            pOVar13 = *(Object**)( pEVar16 + 0x30 );
            cVar9 = predelete_handler(pOVar13);
            if (cVar9 != '\0') {
               ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
               Memory::free_static(pOVar13, false);
            }

         }

         Memory::free_static(pEVar16, false);
      }

   }

   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar7 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar7, &__dso_handle);
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar10 = *in_FS_OFFSET;
   }
 else {
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar10 = *in_FS_OFFSET;
   }

   if (iVar10 == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar7 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar7, &__dso_handle);
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00105b68:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   LAB_0010551d:if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptCache::~GDScriptCache() */void GDScriptCache::~GDScriptCache(GDScriptCache *this) {
   long *plVar1;
   long *plVar2;
   uint uVar3;
   long lVar4;
   Object *pOVar5;
   char cVar6;
   void *pvVar7;
   long lVar8;
   void *pvVar9;
   long lVar10;
   if (this[0x150] == (GDScriptCache)0x0) {
      clear();
   }

   pvVar9 = *(void**)( this + 0x128 );
   singleton = 0;
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x14c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x148 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x14c ) = 0;
            *(undefined1(*) [16])( this + 0x138 ) = (undefined1[16])0x0;
         }
 else {
            lVar10 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x130 ) + lVar10 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
                  *(int*)( *(long*)( this + 0x130 ) + lVar10 ) = 0;
                  pvVar7 = *(void**)( (long)pvVar9 + 0x18 );
                  if (pvVar7 != (void*)0x0) {
                     if (( *(int*)( (long)pvVar9 + 0x3c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar9 + 0x38 ) * 4 ) == 0 || ( memset(*(void**)( (long)pvVar9 + 0x30 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar9 + 0x38 ) * 4 ) << 2),*(int*)( (long)pvVar9 + 0x3c ) != 0 ) ) )) {
                        lVar8 = 0;
                        do {
                           plVar2 = (long*)( (long)pvVar7 + lVar8 * 8 );
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

                              pvVar7 = *(void**)( (long)pvVar9 + 0x18 );
                           }

                           lVar8 = lVar8 + 1;
                        }
 while ( (uint)lVar8 < *(uint*)( (long)pvVar9 + 0x3c ) );
                        *(undefined4*)( (long)pvVar9 + 0x3c ) = 0;
                        if (pvVar7 == (void*)0x0) goto LAB_00105d20;
                     }

                     Memory::free_static(pvVar7, false);
                     Memory::free_static(*(void**)( (long)pvVar9 + 0x28 ), false);
                     Memory::free_static(*(void**)( (long)pvVar9 + 0x20 ), false);
                     Memory::free_static(*(void**)( (long)pvVar9 + 0x30 ), false);
                  }

                  LAB_00105d20:if (*(long*)( (long)pvVar9 + 0x10 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( (long)pvVar9 + 0x10 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar8 = *(long*)( (long)pvVar9 + 0x10 );
                        *(undefined8*)( (long)pvVar9 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x128 );
                  *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
               }

               lVar10 = lVar10 + 4;
            }
 while ( (ulong)uVar3 * 4 != lVar10 );
            *(undefined4*)( this + 0x14c ) = 0;
            *(undefined1(*) [16])( this + 0x138 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00105d8d;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x130 ), false);
   }

   LAB_00105d8d:pvVar9 = *(void**)( this + 0xf8 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x11c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x118 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x11c ) = 0;
            *(undefined1(*) [16])( this + 0x108 ) = (undefined1[16])0x0;
         }
 else {
            lVar10 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x100 ) + lVar10 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
                  *(int*)( *(long*)( this + 0x100 ) + lVar10 ) = 0;
                  pvVar7 = *(void**)( (long)pvVar9 + 0x18 );
                  if (pvVar7 != (void*)0x0) {
                     if (( *(int*)( (long)pvVar9 + 0x3c ) != 0 ) && ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar9 + 0x38 ) * 4 ) == 0 || ( memset(*(void**)( (long)pvVar9 + 0x30 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar9 + 0x38 ) * 4 ) << 2),*(int*)( (long)pvVar9 + 0x3c ) != 0 ) ) )) {
                        lVar8 = 0;
                        do {
                           plVar2 = (long*)( (long)pvVar7 + lVar8 * 8 );
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

                              pvVar7 = *(void**)( (long)pvVar9 + 0x18 );
                           }

                           lVar8 = lVar8 + 1;
                        }
 while ( (uint)lVar8 < *(uint*)( (long)pvVar9 + 0x3c ) );
                        *(undefined4*)( (long)pvVar9 + 0x3c ) = 0;
                        if (pvVar7 == (void*)0x0) goto LAB_00105e98;
                     }

                     Memory::free_static(pvVar7, false);
                     Memory::free_static(*(void**)( (long)pvVar9 + 0x28 ), false);
                     Memory::free_static(*(void**)( (long)pvVar9 + 0x20 ), false);
                     Memory::free_static(*(void**)( (long)pvVar9 + 0x30 ), false);
                  }

                  LAB_00105e98:if (*(long*)( (long)pvVar9 + 0x10 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( (long)pvVar9 + 0x10 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar8 = *(long*)( (long)pvVar9 + 0x10 );
                        *(undefined8*)( (long)pvVar9 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0xf8 );
                  *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
               }

               lVar10 = lVar10 + 4;
            }
 while ( (ulong)uVar3 * 4 != lVar10 );
            *(undefined4*)( this + 0x11c ) = 0;
            *(undefined1(*) [16])( this + 0x108 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00105f05;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x100 ), false);
   }

   LAB_00105f05:pvVar9 = *(void**)( this + 200 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0xec ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
         }
 else {
            lVar10 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar10 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
                  *(int*)( *(long*)( this + 0xd0 ) + lVar10 ) = 0;
                  if (( *(long*)( (long)pvVar9 + 0x18 ) != 0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0') {
                     pOVar5 = *(Object**)( (long)pvVar9 + 0x18 );
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

                  if (*(long*)( (long)pvVar9 + 0x10 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( (long)pvVar9 + 0x10 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar8 = *(long*)( (long)pvVar9 + 0x10 );
                        *(undefined8*)( (long)pvVar9 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 200 );
                  *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
               }

               lVar10 = lVar10 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar10 );
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_00105fef;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0xd0 ), false);
   }

   LAB_00105fef:pvVar9 = *(void**)( this + 0x98 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0xbc ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
         }
 else {
            lVar10 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa0 ) + lVar10 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
                  *(int*)( *(long*)( this + 0xa0 ) + lVar10 ) = 0;
                  if (( *(long*)( (long)pvVar9 + 0x18 ) != 0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0') {
                     pOVar5 = *(Object**)( (long)pvVar9 + 0x18 );
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

                  if (*(long*)( (long)pvVar9 + 0x10 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( (long)pvVar9 + 0x10 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar8 = *(long*)( (long)pvVar9 + 0x10 );
                        *(undefined8*)( (long)pvVar9 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x98 );
                  *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
               }

               lVar10 = lVar10 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar10 );
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_001060d7;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0xa0 ), false);
   }

   LAB_001060d7:pvVar9 = *(void**)( this + 0x68 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x8c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x8c ) = 0;
            *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
         }
 else {
            lVar10 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x70 ) + lVar10 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
                  *(int*)( *(long*)( this + 0x70 ) + lVar10 ) = 0;
                  if (( *(long*)( (long)pvVar9 + 0x18 ) != 0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0') {
                     pOVar5 = *(Object**)( (long)pvVar9 + 0x18 );
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

                  if (*(long*)( (long)pvVar9 + 0x10 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( (long)pvVar9 + 0x10 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar8 = *(long*)( (long)pvVar9 + 0x10 );
                        *(undefined8*)( (long)pvVar9 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x68 );
                  *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
               }

               lVar10 = lVar10 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar10 );
            *(undefined4*)( this + 0x8c ) = 0;
            *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_001061b2;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x70 ), false);
   }

   LAB_001061b2:pvVar9 = *(void**)( this + 0x38 );
   if (pvVar9 != (void*)0x0) {
      if (*(int*)( this + 0x5c ) != 0) {
         uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x58 ) * 4 );
         if (uVar3 == 0) {
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
         }
 else {
            lVar10 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x40 ) + lVar10 ) != 0) {
                  pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
                  *(int*)( *(long*)( this + 0x40 ) + lVar10 ) = 0;
                  if (*(long*)( (long)pvVar9 + 0x20 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( (long)pvVar9 + 0x20 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar8 = *(long*)( (long)pvVar9 + 0x20 );
                        *(undefined8*)( (long)pvVar9 + 0x20 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  if (*(long*)( (long)pvVar9 + 0x10 ) != 0) {
                     LOCK();
                     plVar2 = (long*)( *(long*)( (long)pvVar9 + 0x10 ) + -0x10 );
                     *plVar2 = *plVar2 + -1;
                     UNLOCK();
                     if (*plVar2 == 0) {
                        lVar8 = *(long*)( (long)pvVar9 + 0x10 );
                        *(undefined8*)( (long)pvVar9 + 0x10 ) = 0;
                        Memory::free_static((void*)( lVar8 + -0x10 ), false);
                     }

                  }

                  Memory::free_static(pvVar9, false);
                  pvVar9 = *(void**)( this + 0x38 );
                  *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
               }

               lVar10 = lVar10 + 4;
            }
 while ( (ulong)uVar3 << 2 != lVar10 );
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
            if (pvVar9 == (void*)0x0) goto LAB_0010629d;
         }

      }

      Memory::free_static(pvVar9, false);
      Memory::free_static(*(void**)( this + 0x40 ), false);
   }

   LAB_0010629d:pvVar9 = *(void**)( this + 8 );
   if (pvVar9 == (void*)0x0) {
      return;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar3 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }
 else {
         lVar10 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar10 ) != 0) {
               pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
               *(int*)( *(long*)( this + 0x10 ) + lVar10 ) = 0;
               if (*(long*)( (long)pvVar9 + 0x10 ) != 0) {
                  LOCK();
                  plVar2 = (long*)( *(long*)( (long)pvVar9 + 0x10 ) + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar8 = *(long*)( (long)pvVar9 + 0x10 );
                     *(undefined8*)( (long)pvVar9 + 0x10 ) = 0;
                     Memory::free_static((void*)( lVar8 + -0x10 ), false);
                  }

               }

               Memory::free_static(pvVar9, false);
               pvVar9 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
            }

            lVar10 = lVar10 + 4;
         }
 while ( (ulong)uVar3 << 2 != lVar10 );
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
         if (pvVar9 == (void*)0x0) {
            return;
         }

      }

   }

   Memory::free_static(pvVar9, false);
   Memory::free_static(*(void**)( this + 0x10 ), false);
   return;
}
/* GDScriptCache::remove_parser(String const&) */void GDScriptCache::remove_parser(String *param_1) {
   CowData *pCVar1;
   uint uVar2;
   undefined8 uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>> *pHVar12;
   char cVar13;
   uint uVar14;
   long *plVar15;
   void *__s;
   CowData<char32_t> *pCVar16;
   void *pvVar17;
   void *pvVar18;
   ulong uVar19;
   long lVar20;
   uint uVar21;
   long lVar22;
   ulong uVar23;
   int iVar24;
   long lVar25;
   uint uVar26;
   CowData<char32_t> *pCVar27;
   ulong uVar28;
   int *in_FS_OFFSET;
   bool bVar29;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar3 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
   }

   iVar24 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar24 + 1;
   if (iVar24 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00106d3d;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar24 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar24 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar24);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   pHVar12 = singleton;
   if (( *(long*)( singleton + 8 ) != 0 ) && ( *(int*)( singleton + 0x2c ) != 0 )) {
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x28 ) * 4 );
      uVar23 = CONCAT44(0, uVar2);
      lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x28 ) * 8 );
      uVar14 = String::hash();
      lVar20 = *(long*)( pHVar12 + 0x10 );
      uVar21 = 1;
      if (uVar14 != 0) {
         uVar21 = uVar14;
      }

      uVar26 = 0;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar21 * lVar25;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar23;
      lVar22 = SUB168(auVar4 * auVar8, 8);
      uVar14 = *(uint*)( lVar20 + lVar22 * 4 );
      iVar24 = SUB164(auVar4 * auVar8, 8);
      if (uVar14 != 0) {
         do {
            if (uVar21 == uVar14) {
               cVar13 = String::operator ==((String*)( *(long*)( *(long*)( pHVar12 + 8 ) + lVar22 * 8 ) + 0x10 ), param_1);
               if (cVar13 != '\0') {
                  plVar15 = (long*)HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>::operator [](singleton, param_1);
                  pHVar12 = singleton;
                  lVar25 = *plVar15;
                  *(undefined1*)( lVar25 + 0x1a5 ) = 1;
                  lVar20 = HashMap<String,Vector<ObjectID>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<ObjectID>>>>::operator []((HashMap<String,Vector<ObjectID>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<ObjectID>>>>*)( pHVar12 + 0x30 ), param_1);
                  uVar3 = *(undefined8*)( lVar25 + 0x60 );
                  if (*(long*)( lVar20 + 8 ) == 0) {
                     lVar25 = 1;
                  }
 else {
                     lVar25 = *(long*)( *(long*)( lVar20 + 8 ) + -8 ) + 1;
                  }

                  iVar24 = CowData<ObjectID>::resize<false>((CowData<ObjectID>*)( lVar20 + 8 ), lVar25);
                  if (iVar24 != 0) {
                     _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
                     break;
                  }

                  if (*(long*)( lVar20 + 8 ) == 0) {
                     lVar22 = -1;
                     lVar25 = 0;
                  }
 else {
                     lVar25 = *(long*)( *(long*)( lVar20 + 8 ) + -8 );
                     lVar22 = lVar25 + -1;
                     if (-1 < lVar22) {
                        CowData<ObjectID>::_copy_on_write((CowData<ObjectID>*)( lVar20 + 8 ));
                        *(undefined8*)( *(long*)( lVar20 + 8 ) + lVar22 * 8 ) = uVar3;
                        break;
                     }

                  }

                  _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar22, lVar25, "p_index", "size()", "", false, false);
                  break;
               }

               lVar20 = *(long*)( pHVar12 + 0x10 );
            }

            uVar26 = uVar26 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar24 + 1) * lVar25;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar23;
            lVar22 = SUB168(auVar5 * auVar9, 8);
            uVar14 = *(uint*)( lVar20 + lVar22 * 4 );
            iVar24 = SUB164(auVar5 * auVar9, 8);
            if (( uVar14 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar14 * lVar25,auVar10._8_8_ = 0,auVar10._0_8_ = uVar23,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar2 + iVar24 ) - SUB164(auVar6 * auVar10, 8)) * lVar25,auVar11._8_8_ = 0,auVar11._0_8_ = uVar23,SUB164(auVar7 * auVar11, 8) < uVar26) break;
         }
 while ( true );
      }

   }

   HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>::erase(singleton, param_1);
   plVar15 = (long*)HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::operator []((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0x120 ), param_1);
   uVar2 = *(uint*)( (long)plVar15 + 0x24 );
   if (uVar2 != 0) {
      uVar21 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar15 + 4 ) * 4 );
      uVar28 = (ulong)uVar21;
      uVar23 = uVar28 * 4;
      __s = (void*)Memory::alloc_static(uVar23, false);
      lVar25 = 0;
      pCVar16 = (CowData<char32_t>*)Memory::alloc_static(uVar28 * 8, false);
      pvVar17 = (void*)Memory::alloc_static(uVar23, false);
      pvVar18 = (void*)Memory::alloc_static(uVar23, false);
      pCVar27 = pCVar16;
      do {
         lVar20 = *plVar15;
         *(undefined8*)pCVar27 = 0;
         pCVar1 = (CowData*)( lVar20 + lVar25 * 2 );
         if (*(long*)pCVar1 != 0) {
            CowData<char32_t>::_ref(pCVar27, pCVar1);
         }

         pCVar27 = pCVar27 + 8;
         *(undefined4*)( (long)pvVar17 + lVar25 ) = *(undefined4*)( plVar15[2] + lVar25 );
         lVar25 = lVar25 + 4;
      }
 while ( (ulong)uVar2 << 2 != lVar25 );
      if (uVar21 != 0) {
         lVar25 = plVar15[3];
         lVar20 = plVar15[1];
         uVar19 = 0;
         do {
            *(undefined4*)( (long)__s + uVar19 ) = *(undefined4*)( lVar25 + uVar19 );
            *(undefined4*)( (long)pvVar18 + uVar19 ) = *(undefined4*)( lVar20 + uVar19 );
            uVar19 = uVar19 + 4;
         }
 while ( uVar23 != uVar19 );
      }

      iVar24 = 1;
      HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::erase((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0x120 ), param_1);
      pCVar27 = pCVar16;
      do {
         local_48 = 0;
         plVar15 = (long*)( *(long*)pCVar27 + -0x10 );
         if (*(long*)pCVar27 != 0) {
            do {
               lVar25 = *plVar15;
               if (lVar25 == 0) goto LAB_00106926;
               LOCK();
               lVar20 = *plVar15;
               bVar29 = lVar25 == lVar20;
               if (bVar29) {
                  *plVar15 = lVar25 + 1;
                  lVar20 = lVar25;
               }

               UNLOCK();
            }
 while ( !bVar29 );
            if (lVar20 != -1) {
               local_48 = *(long*)pCVar27;
            }

         }

         LAB_00106926:remove_parser((String*)&local_48);
         lVar25 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar15 = (long*)( local_48 + -0x10 );
            *plVar15 = *plVar15 + -1;
            UNLOCK();
            if (*plVar15 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar25 + -0x10 ), false);
            }

         }

         if ((int)uVar2 <= iVar24) goto code_r0x00106961;
         iVar24 = iVar24 + 1;
         pCVar27 = pCVar27 + 8;
      }
 while ( true );
   }

   HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::erase((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0x120 ), param_1);
   LAB_0010666a:if ((char)*in_FS_OFFSET != '\0') goto LAB_00106679;
   LAB_00106a0e:*(undefined1*)in_FS_OFFSET = 1;
   *(undefined1**)in_FS_OFFSET = mutex;
   uVar3 = *(undefined8*)in_FS_OFFSET;
   *(undefined1*)in_FS_OFFSET = 0;
   *in_FS_OFFSET = 0;
   __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
   *in_FS_OFFSET = *in_FS_OFFSET + -1;
   iVar24 = *in_FS_OFFSET;
   joined_r0x00106a68:if (iVar24 == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar3 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar3, &__dso_handle);
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00106d3d:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x00106961:if (pCVar16 == (CowData<char32_t>*)0x0) goto LAB_0010666a;
   if (uVar21 != 0) {
      memset(__s, 0, uVar28 << 2);
   }

   pCVar27 = pCVar16;
   do {
      if (*(long*)pCVar27 != 0) {
         LOCK();
         plVar15 = (long*)( *(long*)pCVar27 + -0x10 );
         *plVar15 = *plVar15 + -1;
         UNLOCK();
         if (*plVar15 == 0) {
            lVar25 = *(long*)pCVar27;
            *(long*)pCVar27 = 0;
            Memory::free_static((void*)( lVar25 + -0x10 ), false);
         }

      }

      pCVar27 = pCVar27 + 8;
   }
 while ( pCVar16 + (ulong)uVar2 * 8 != pCVar27 );
   Memory::free_static(pCVar16, false);
   Memory::free_static(pvVar17, false);
   Memory::free_static(pvVar18, false);
   Memory::free_static(__s, false);
   if ((char)*in_FS_OFFSET == '\0') goto LAB_00106a0e;
   LAB_00106679:*in_FS_OFFSET = *in_FS_OFFSET + -1;
   iVar24 = *in_FS_OFFSET;
   goto joined_r0x00106a68;
}
/* GDScriptCache::move_script(String const&, String const&) */void GDScriptCache::move_script(String *param_1, String *param_2) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   Object *pOVar4;
   undefined8 uVar5;
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
   ulong uVar22;
   long lVar23;
   char cVar24;
   uint uVar25;
   int iVar26;
   long *plVar27;
   long *plVar28;
   uint uVar29;
   long lVar30;
   long lVar31;
   uint uVar32;
   int *in_FS_OFFSET;
   if (singleton == 0) {
      return;
   }

   cVar24 = String::operator ==(param_1, param_2);
   if (cVar24 == '\0') {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar5 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar5, &__dso_handle);
      }

      iVar26 = *in_FS_OFFSET;
      *in_FS_OFFSET = iVar26 + 1;
      if (iVar26 + 1 == 1) {
         if ((char)*in_FS_OFFSET == '\0') {
            *(undefined1*)in_FS_OFFSET = 1;
            *(undefined1**)in_FS_OFFSET = mutex;
            uVar5 = *(undefined8*)in_FS_OFFSET;
            *(undefined1*)in_FS_OFFSET = 0;
            *in_FS_OFFSET = 0;
            __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar5, &__dso_handle);
         }

         if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_001073ba;
         if ((char)*in_FS_OFFSET != '\0') {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(0x23);
         }

         iVar26 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
         if (iVar26 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar26);
         }

         *(undefined1*)in_FS_OFFSET = 1;
      }

      if (*(char*)( singleton + 0x150 ) == '\0') {
         remove_parser(param_1);
         lVar23 = singleton;
         if (( *(long*)( singleton + 0x68 ) != 0 ) && ( *(int*)( singleton + 0x8c ) != 0 )) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x88 ) * 4 );
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x88 ) * 8 );
            uVar25 = String::hash();
            uVar22 = CONCAT44(0, uVar1);
            uVar29 = 1;
            if (uVar25 != 0) {
               uVar29 = uVar25;
            }

            lVar31 = *(long*)( lVar23 + 0x70 );
            uVar32 = 0;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar29 * lVar2;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar22;
            lVar30 = SUB168(auVar6 * auVar14, 8);
            uVar25 = *(uint*)( lVar31 + lVar30 * 4 );
            iVar26 = SUB164(auVar6 * auVar14, 8);
            if (uVar25 != 0) {
               do break; while ( true );
            }

         }

         HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::erase((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x60 ), param_1);
         lVar23 = singleton;
         if (( *(long*)( singleton + 0x98 ) != 0 ) && ( *(int*)( singleton + 0xbc ) != 0 )) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0xb8 ) * 4 );
            lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0xb8 ) * 8 );
            uVar25 = String::hash();
            uVar22 = CONCAT44(0, uVar1);
            uVar29 = 1;
            if (uVar25 != 0) {
               uVar29 = uVar25;
            }

            lVar31 = *(long*)( lVar23 + 0xa0 );
            uVar32 = 0;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = (ulong)uVar29 * lVar2;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar22;
            lVar30 = SUB168(auVar10 * auVar18, 8);
            uVar25 = *(uint*)( lVar31 + lVar30 * 4 );
            iVar26 = SUB164(auVar10 * auVar18, 8);
            if (uVar25 != 0) {
               do break; while ( true );
            }

         }

         HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::erase((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x90 ), param_1);
      }

      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar5 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar5, &__dso_handle);
      }

      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      if (*in_FS_OFFSET == 0) {
         if ((char)*in_FS_OFFSET == '\0') {
            *(undefined1*)in_FS_OFFSET = 1;
            *(undefined1**)in_FS_OFFSET = mutex;
            uVar5 = *(undefined8*)in_FS_OFFSET;
            *(undefined1*)in_FS_OFFSET = 0;
            __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar5, &__dso_handle);
         }

         if ((char)*in_FS_OFFSET == '\0') {
            LAB_001073ba:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
         }

         if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
            *(undefined1*)in_FS_OFFSET = 0;
         }

      }

   }

   return;
}
/* GDScriptCache::remove_script(String const&) */void GDScriptCache::remove_script(String *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   GDScriptParser *pGVar5;
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
   HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>> *pHVar42;
   char cVar43;
   uint uVar44;
   int iVar45;
   long lVar46;
   Object *pOVar47;
   long *plVar48;
   uint uVar49;
   uint uVar50;
   long lVar51;
   long lVar52;
   ulong *puVar53;
   uint uVar54;
   long *plVar55;
   ulong *puVar56;
   uint uVar57;
   ulong uVar58;
   long lVar59;
   uint *puVar60;
   ulong *puVar61;
   int *in_FS_OFFSET;
   bool bVar62;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 10 );
   if (singleton == (HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>*)0x0) goto LAB_001074e0;
   if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar4 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar4, &__dso_handle);
   }

   iVar45 = *in_FS_OFFSET;
   *in_FS_OFFSET = iVar45 + 1;
   if (iVar45 + 1 == 1) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar4 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         *in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar4, &__dso_handle);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET == (pthread_mutex_t*)0x0) goto LAB_00107e63;
      if ((char)*in_FS_OFFSET != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }

      iVar45 = pthread_mutex_lock(*(pthread_mutex_t**)in_FS_OFFSET);
      if (iVar45 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar45);
      }

      *(undefined1*)in_FS_OFFSET = 1;
   }

   pHVar42 = singleton;
   if (singleton[0x150] == (HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>)0x0) {
      if (( *(long*)( singleton + 0x38 ) != 0 ) && ( *(int*)( singleton + 0x5c ) != 0 )) {
         uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x58 ) * 4 );
         lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x58 ) * 8 );
         uVar44 = String::hash();
         uVar58 = CONCAT44(0, uVar50);
         lVar59 = *(long*)( pHVar42 + 0x40 );
         uVar49 = 1;
         if (uVar44 != 0) {
            uVar49 = uVar44;
         }

         uVar57 = 0;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar49 * lVar46;
         auVar28._8_8_ = 0;
         auVar28._0_8_ = uVar58;
         lVar51 = SUB168(auVar10 * auVar28, 8);
         uVar44 = *(uint*)( lVar59 + lVar51 * 4 );
         uVar54 = SUB164(auVar10 * auVar28, 8);
         if (uVar44 != 0) {
            do {
               if (uVar49 == uVar44) {
                  cVar43 = String::operator ==((String*)( *(long*)( *(long*)( pHVar42 + 0x38 ) + lVar51 * 8 ) + 0x10 ), param_1);
                  if (cVar43 != '\0') {
                     lVar46 = *(long*)( *(long*)( pHVar42 + 0x38 ) + (ulong)uVar54 * 8 );
                     if (lVar46 != 0) {
                        CowData<ObjectID>::_copy_on_write((CowData<ObjectID>*)( lVar46 + 0x20 ));
                        puVar56 = *(ulong**)( lVar46 + 0x20 );
                        CowData<ObjectID>::_copy_on_write((CowData<ObjectID>*)( lVar46 + 0x20 ));
                        puVar61 = *(ulong**)( lVar46 + 0x20 );
                        if (puVar61 != (ulong*)0x0) {
                           puVar61 = puVar61 + puVar61[-1];
                        }

                        if (puVar56 != puVar61) {
                           goto LAB_00107c34;
                        }

                     }

                     break;
                  }

                  lVar59 = *(long*)( pHVar42 + 0x40 );
               }

               uVar57 = uVar57 + 1;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(uVar54 + 1) * lVar46;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar58;
               lVar51 = SUB168(auVar11 * auVar29, 8);
               uVar44 = *(uint*)( lVar59 + lVar51 * 4 );
               uVar54 = SUB164(auVar11 * auVar29, 8);
               if (( uVar44 == 0 ) || ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar44 * lVar46,auVar30._8_8_ = 0,auVar30._0_8_ = uVar58,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar50 + uVar54 ) - SUB164(auVar12 * auVar30, 8)) * lVar46,auVar31._8_8_ = 0,auVar31._0_8_ = uVar58,SUB164(auVar13 * auVar31, 8) < uVar57) break;
            }
 while ( true );
         }

         goto LAB_00107816;
      }

      goto LAB_00107469;
   }

   goto LAB_001074c6;
   LAB_00107c34:do {
      uVar50 = ( uint ) * puVar56 & 0xffffff;
      if (uVar50 < (uint)ObjectDB::slot_max) {
         while (true) {
            LOCK();
            bVar62 = (char)ObjectDB::spin_lock == '\0';
            if (bVar62) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar62) break;
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar53 = (ulong*)( (ulong)uVar50 * 0x10 + ObjectDB::object_slots );
         if (( *puVar56 >> 0x18 & 0x7fffffffff ) == ( *puVar53 & 0x7fffffffff )) {
            pOVar47 = (Object*)puVar53[1];
            ObjectDB::spin_lock._0_1_ = '\0';
         }
 else {
            pOVar47 = (Object*)0x0;
            ObjectDB::spin_lock._0_1_ = '\0';
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         pOVar47 = (Object*)0x0;
      }

      Variant::Variant((Variant*)local_58, pOVar47);
      lVar46 = Variant::get_validated_object();
      if (lVar46 == 0) {
         LAB_00107c7f:cVar43 = Variant::needs_deinit[local_58[0]];
         joined_r0x00107cd7:if (cVar43 != '\0') {
            Variant::_clear_internal();
         }

      }
 else {
         pOVar47 = (Object*)__dynamic_cast(lVar46, &Object::typeinfo, &GDScriptParserRef::typeinfo, 0);
         if (pOVar47 == (Object*)0x0) {
            cVar43 = Variant::needs_deinit[local_58[0]];
            goto joined_r0x00107cd7;
         }

         cVar43 = RefCounted::reference();
         if (cVar43 == '\0') goto LAB_00107c7f;
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (pOVar47[0x1a4] == (Object)0x0) {
            pGVar5 = *(GDScriptParser**)( pOVar47 + 0x180 );
            *(undefined8*)( pOVar47 + 400 ) = 0;
            *(undefined4*)( pOVar47 + 0x1a0 ) = 0;
            *(undefined1(*) [16])( pOVar47 + 0x180 ) = (undefined1[16])0x0;
            if (*(GDScriptAnalyzer**)( pOVar47 + 0x188 ) != (GDScriptAnalyzer*)0x0) {
               memdelete<GDScriptAnalyzer>(*(GDScriptAnalyzer**)( pOVar47 + 0x188 ));
            }

            if (pGVar5 != (GDScriptParser*)0x0) {
               GDScriptParser::~GDScriptParser(pGVar5);
               Memory::free_static(pGVar5, false);
            }

         }

         cVar43 = RefCounted::unreference();
         if (( cVar43 != '\0' ) && ( cVar43 = predelete_handler(pOVar47) ),cVar43 != '\0') {
            ( **(code**)( *(long*)pOVar47 + 0x140 ) )(pOVar47);
            Memory::free_static(pOVar47, false);
         }

      }

      puVar56 = puVar56 + 1;
   }
 while ( puVar61 != puVar56 );
   LAB_00107816:pHVar42 = singleton;
   if (( *(long*)( singleton + 0x38 ) != 0 ) && ( *(int*)( singleton + 0x5c ) != 0 )) {
      uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x58 ) * 4 );
      lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x58 ) * 8 );
      uVar44 = String::hash();
      uVar58 = CONCAT44(0, uVar50);
      lVar59 = *(long*)( pHVar42 + 0x40 );
      uVar49 = 1;
      if (uVar44 != 0) {
         uVar49 = uVar44;
      }

      uVar57 = 0;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar49 * lVar46;
      auVar32._8_8_ = 0;
      auVar32._0_8_ = uVar58;
      lVar51 = SUB168(auVar14 * auVar32, 8);
      uVar44 = *(uint*)( lVar59 + lVar51 * 4 );
      uVar54 = SUB164(auVar14 * auVar32, 8);
      if (uVar44 != 0) {
         do {
            if (uVar49 == uVar44) {
               cVar43 = String::operator ==((String*)( *(long*)( *(long*)( pHVar42 + 0x38 ) + lVar51 * 8 ) + 0x10 ), param_1);
               if (cVar43 != '\0') {
                  lVar46 = *(long*)( pHVar42 + 0x40 );
                  lVar59 = *(long*)( pHVar42 + 0x38 );
                  lVar51 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( pHVar42 + 0x58 ) * 8 );
                  uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( pHVar42 + 0x58 ) * 4 );
                  uVar58 = CONCAT44(0, uVar50);
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = ( ulong )(uVar54 + 1) * lVar51;
                  auVar36._8_8_ = 0;
                  auVar36._0_8_ = uVar58;
                  lVar52 = SUB168(auVar18 * auVar36, 8);
                  puVar60 = (uint*)( lVar46 + lVar52 * 4 );
                  uVar44 = SUB164(auVar18 * auVar36, 8);
                  uVar49 = *puVar60;
                  if (( uVar49 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar49 * lVar51,auVar37._8_8_ = 0,auVar37._0_8_ = uVar58,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar50 + uVar44 ) - SUB164(auVar19 * auVar37, 8)) * lVar51,auVar38._8_8_ = 0,auVar38._0_8_ = uVar58,uVar57 = uVar54,SUB164(auVar20 * auVar38, 8) == 0) goto LAB_001079fc;
                  goto LAB_001079b5;
               }

               lVar59 = *(long*)( pHVar42 + 0x40 );
            }

            uVar57 = uVar57 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = ( ulong )(uVar54 + 1) * lVar46;
            auVar33._8_8_ = 0;
            auVar33._0_8_ = uVar58;
            lVar51 = SUB168(auVar15 * auVar33, 8);
            uVar44 = *(uint*)( lVar59 + lVar51 * 4 );
            uVar54 = SUB164(auVar15 * auVar33, 8);
         }
 while ( ( uVar44 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar44 * lVar46,auVar34._8_8_ = 0,auVar34._0_8_ = uVar58,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar50 + uVar54 ) - SUB164(auVar16 * auVar34, 8)) * lVar46,auVar35._8_8_ = 0,auVar35._0_8_ = uVar58,uVar57 <= SUB164(auVar17 * auVar35, 8) );
      }

   }

   goto LAB_00107469;
   while (auVar21._8_8_ = 0,auVar21._0_8_ = (ulong)uVar49 * lVar51,auVar39._8_8_ = 0,auVar39._0_8_ = uVar58,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( uVar44 + uVar50 ) - SUB164(auVar21 * auVar39, 8)) * lVar51,auVar40._8_8_ = 0,auVar40._0_8_ = uVar58,uVar57 = uVar54,SUB164(auVar22 * auVar40, 8) != 0) {
      LAB_001079b5:uVar54 = uVar44;
      puVar1 = (uint*)( lVar46 + (ulong)uVar57 * 4 );
      *puVar60 = *puVar1;
      puVar2 = (undefined8*)( lVar59 + lVar52 * 8 );
      *puVar1 = uVar49;
      puVar3 = (undefined8*)( lVar59 + (ulong)uVar57 * 8 );
      uVar4 = *puVar2;
      *puVar2 = *puVar3;
      *puVar3 = uVar4;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = ( ulong )(uVar54 + 1) * lVar51;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar58;
      lVar52 = SUB168(auVar23 * auVar41, 8);
      puVar60 = (uint*)( lVar46 + lVar52 * 4 );
      uVar44 = SUB164(auVar23 * auVar41, 8);
      uVar49 = *puVar60;
      if (uVar49 == 0) break;
   }
;
   LAB_001079fc:uVar58 = (ulong)uVar54;
   plVar48 = (long*)( lVar59 + uVar58 * 8 );
   *(undefined4*)( lVar46 + uVar58 * 4 ) = 0;
   plVar55 = (long*)*plVar48;
   if (*(long**)( pHVar42 + 0x48 ) == plVar55) {
      *(long*)( pHVar42 + 0x48 ) = *plVar55;
      plVar55 = (long*)*plVar48;
   }

   if (*(long**)( pHVar42 + 0x50 ) == plVar55) {
      *(long*)( pHVar42 + 0x50 ) = plVar55[1];
      plVar55 = (long*)*plVar48;
   }

   if ((long*)plVar55[1] != (long*)0x0) {
      *(long*)plVar55[1] = *plVar55;
      plVar55 = (long*)*plVar48;
   }

   if (*plVar55 != 0) {
      *(long*)( *plVar55 + 8 ) = plVar55[1];
      plVar55 = (long*)*plVar48;
   }

   if (plVar55[4] != 0) {
      LOCK();
      plVar48 = (long*)( plVar55[4] + -0x10 );
      *plVar48 = *plVar48 + -1;
      UNLOCK();
      if (*plVar48 == 0) {
         lVar46 = plVar55[4];
         plVar55[4] = 0;
         Memory::free_static((void*)( lVar46 + -0x10 ), false);
      }

   }

   if (plVar55[2] != 0) {
      LOCK();
      plVar48 = (long*)( plVar55[2] + -0x10 );
      *plVar48 = *plVar48 + -1;
      UNLOCK();
      if (*plVar48 == 0) {
         lVar46 = plVar55[2];
         plVar55[2] = 0;
         Memory::free_static((void*)( lVar46 + -0x10 ), false);
      }

   }

   Memory::free_static(plVar55, false);
   *(undefined8*)( *(long*)( pHVar42 + 0x38 ) + uVar58 * 8 ) = 0;
   *(int*)( pHVar42 + 0x5c ) = *(int*)( pHVar42 + 0x5c ) + -1;
   LAB_00107469:pHVar42 = singleton;
   if (( *(long*)( singleton + 8 ) != 0 ) && ( *(int*)( singleton + 0x2c ) != 0 )) {
      uVar50 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( singleton + 0x28 ) * 4 );
      lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( singleton + 0x28 ) * 8 );
      uVar44 = String::hash();
      uVar58 = CONCAT44(0, uVar50);
      lVar59 = *(long*)( pHVar42 + 0x10 );
      uVar49 = 1;
      if (uVar44 != 0) {
         uVar49 = uVar44;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = (ulong)uVar49 * lVar46;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar58;
      lVar51 = SUB168(auVar6 * auVar24, 8);
      uVar44 = *(uint*)( lVar59 + lVar51 * 4 );
      iVar45 = SUB164(auVar6 * auVar24, 8);
      if (uVar44 != 0) {
         uVar54 = 0;
         do {
            if (uVar44 == uVar49) {
               cVar43 = String::operator ==((String*)( *(long*)( *(long*)( pHVar42 + 8 ) + lVar51 * 8 ) + 0x10 ), param_1);
               if (cVar43 != '\0') {
                  plVar48 = (long*)HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>::operator [](singleton, param_1);
                  lVar46 = *plVar48;
                  if (*(char*)( lVar46 + 0x1a4 ) == '\0') {
                     pGVar5 = *(GDScriptParser**)( lVar46 + 0x180 );
                     *(undefined8*)( lVar46 + 400 ) = 0;
                     *(undefined4*)( lVar46 + 0x1a0 ) = 0;
                     *(undefined1(*) [16])( lVar46 + 0x180 ) = (undefined1[16])0x0;
                     if (*(GDScriptAnalyzer**)( lVar46 + 0x188 ) != (GDScriptAnalyzer*)0x0) {
                        memdelete<GDScriptAnalyzer>(*(GDScriptAnalyzer**)( lVar46 + 0x188 ));
                     }

                     if (pGVar5 != (GDScriptParser*)0x0) {
                        GDScriptParser::~GDScriptParser(pGVar5);
                        Memory::free_static(pGVar5, false);
                     }

                  }

                  break;
               }

               lVar59 = *(long*)( pHVar42 + 0x10 );
            }

            uVar54 = uVar54 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(iVar45 + 1) * lVar46;
            auVar25._8_8_ = 0;
            auVar25._0_8_ = uVar58;
            lVar51 = SUB168(auVar7 * auVar25, 8);
            uVar44 = *(uint*)( lVar59 + lVar51 * 4 );
            iVar45 = SUB164(auVar7 * auVar25, 8);
            if (( uVar44 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar44 * lVar46,auVar26._8_8_ = 0,auVar26._0_8_ = uVar58,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar50 + iVar45 ) - SUB164(auVar8 * auVar26, 8)) * lVar46,auVar27._8_8_ = 0,auVar27._0_8_ = uVar58,SUB164(auVar9 * auVar27, 8) < uVar54) break;
         }
 while ( true );
      }

   }

   remove_parser(param_1);
   HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::erase((HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>*)( singleton + 0xf0 ), param_1);
   HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::erase((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x60 ), param_1);
   HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::erase((HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>*)( singleton + 0x90 ), param_1);
   LAB_001074c6:if ((char)*in_FS_OFFSET == '\0') {
      *(undefined1*)in_FS_OFFSET = 1;
      *(undefined1**)in_FS_OFFSET = mutex;
      uVar4 = *(undefined8*)in_FS_OFFSET;
      *(undefined1*)in_FS_OFFSET = 0;
      *in_FS_OFFSET = 0;
      __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar4, &__dso_handle);
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar45 = *in_FS_OFFSET;
   }
 else {
      *in_FS_OFFSET = *in_FS_OFFSET + -1;
      iVar45 = *in_FS_OFFSET;
   }

   if (iVar45 == 0) {
      if ((char)*in_FS_OFFSET == '\0') {
         *(undefined1*)in_FS_OFFSET = 1;
         *(undefined1**)in_FS_OFFSET = mutex;
         uVar4 = *(undefined8*)in_FS_OFFSET;
         *(undefined1*)in_FS_OFFSET = 0;
         __cxa_thread_atexit(SafeBinaryMutex<2>::TLSData::~TLSData, uVar4, &__dso_handle);
      }

      if ((char)*in_FS_OFFSET == '\0') {
         LAB_00107e63:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }

      if (*(pthread_mutex_t**)in_FS_OFFSET != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(*(pthread_mutex_t**)in_FS_OFFSET);
         *(undefined1*)in_FS_OFFSET = 0;
      }

   }

   LAB_001074e0:if (local_40 == *(long*)( in_FS_OFFSET + 10 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* TLS init function for SafeBinaryMutex<2>::tls_data */void SafeBinaryMutex<2>::tls_data(void) {
   undefined8 uVar1;
   char *in_FS_OFFSET;
   if (*in_FS_OFFSET != '\0') {
      return;
   }

   *in_FS_OFFSET = '\x01';
   *(undefined1**)in_FS_OFFSET = GDScriptCache::mutex;
   uVar1 = *(undefined8*)in_FS_OFFSET;
   *in_FS_OFFSET = '\0';
   for (int i = 0; i < 4; i++) {
      in_FS_OFFSET[i] = '\0';
   }

   __cxa_thread_atexit(TLSData::~TLSData, uVar1, &__dso_handle);
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
   return (uint)CONCAT71(0x10db, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10db, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
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
/* GDScript::is_valid() const */GDScript GDScript::is_valid(GDScript *this) {
   return this[0x241];
}
/* SafeBinaryMutex<2>::~SafeBinaryMutex() */void SafeBinaryMutex<2>::~SafeBinaryMutex(SafeBinaryMutex<2> *this) {
   return;
}
/* SafeBinaryMutex<2>::TLSData::~TLSData() */void SafeBinaryMutex<2>::TLSData::~TLSData(TLSData *this) {
   if (( this[8] != (TLSData)0x0 ) && ( *(pthread_mutex_t**)this != (pthread_mutex_t*)0x0 )) {
      pthread_mutex_unlock(*(pthread_mutex_t**)this);
      return;
   }

   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010d8f0;
   Object::~Object((Object*)this);
   return;
}
/* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   *(undefined***)this = &PTR__initialize_classv_0010d8f0;
   Object::~Object((Object*)this);
   operator_delete(this, 0x180);
   return;
}
/* CowData<ObjectID>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<ObjectID>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_001081ec(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* GDScriptCache::get_shallow_script(String const&, Error&, String const&) [clone .cold] */void GDScriptCache::get_shallow_script(String *param_1, Error *param_2, String *param_3) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
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
         LAB_00108243:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00108243;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
         goto LAB_001082ae;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
   LAB_001082ae:return &_get_class_namev();
}
/* CowData<ObjectID>::_ref(CowData<ObjectID> const&) [clone .part.0] */void CowData<ObjectID>::_ref(CowData<ObjectID> *this, CowData *param_1) {
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

      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
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
                  if (lVar5 == 0) goto LAB_0010865f;
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

      LAB_0010865f:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar6 != '\0') goto LAB_00108713;
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
                     if (lVar5 == 0) goto LAB_001087c3;
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

         LAB_001087c3:cVar6 = String::operator ==(param_1, (String*)&local_60);
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

         if (cVar6 != '\0') goto LAB_00108713;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }

   }
 else {
      LAB_00108713:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
      LAB_001089e8:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001089e8;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar6;
         local_68 = local_80;
         goto joined_r0x00108a06;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar6;
   joined_r0x00108a06:if (lVar2 == 0) {
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
/* RBSet<Ref<GDScriptParserRef>, Comparator<Ref<GDScriptParserRef> >,
   DefaultAllocator>::_cleanup_tree(RBSet<Ref<GDScriptParserRef>, Comparator<Ref<GDScriptParserRef>
   >, DefaultAllocator>::Element*) [clone .part.0] */void RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>::_cleanup_tree(RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator> *this, Element *param_1) {
   Element *pEVar1;
   Object *pOVar2;
   char cVar3;
   Element *pEVar4;
   Element *pEVar5;
   Element *pEVar6;
   Element *pEVar7;
   Element *pEVar8;
   pEVar1 = *(Element**)( param_1 + 0x10 );
   pEVar4 = *(Element**)( this + 8 );
   if (pEVar1 != pEVar4) {
      pEVar5 = *(Element**)( pEVar1 + 0x10 );
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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                        Memory::free_static(pOVar2, false);
                     }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar4 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               Memory::free_static(pEVar4, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  pOVar2 = *(Object**)( pEVar7 + 0x30 );
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar4 + 0x30 ) != 0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  pOVar2 = *(Object**)( pEVar4 + 0x30 );
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

            }

            Memory::free_static(pEVar4, false);
         }

         if (*(long*)( pEVar5 + 0x30 ) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               pOVar2 = *(Object**)( pEVar5 + 0x30 );
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

         Memory::free_static(pEVar5, false);
         pEVar5 = *(Element**)( this + 8 );
      }

      pEVar4 = *(Element**)( pEVar1 + 8 );
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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  pOVar2 = *(Object**)( pEVar7 + 0x30 );
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  pOVar2 = *(Object**)( pEVar7 + 0x30 );
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

            }

            Memory::free_static(pEVar7, false);
         }

         if (*(long*)( pEVar4 + 0x30 ) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               pOVar2 = *(Object**)( pEVar4 + 0x30 );
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

         Memory::free_static(pEVar4, false);
      }

      if (*(long*)( pEVar1 + 0x30 ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( pEVar1 + 0x30 );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      Memory::free_static(pEVar1, false);
      pEVar4 = *(Element**)( this + 8 );
   }

   pEVar1 = *(Element**)( param_1 + 8 );
   if (pEVar1 != pEVar4) {
      pEVar5 = *(Element**)( pEVar1 + 0x10 );
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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                        Memory::free_static(pOVar2, false);
                     }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  pOVar2 = *(Object**)( pEVar7 + 0x30 );
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                        Memory::free_static(pOVar2, false);
                     }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  pOVar2 = *(Object**)( pEVar7 + 0x30 );
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

            }

            Memory::free_static(pEVar7, false);
         }

         if (*(long*)( pEVar5 + 0x30 ) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               pOVar2 = *(Object**)( pEVar5 + 0x30 );
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

         Memory::free_static(pEVar5, false);
         pEVar4 = *(Element**)( this + 8 );
      }

      pEVar5 = *(Element**)( pEVar1 + 8 );
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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                        Memory::free_static(pOVar2, false);
                     }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  pOVar2 = *(Object**)( pEVar7 + 0x30 );
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                        Memory::free_static(pOVar2, false);
                     }

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
                  cVar3 = RefCounted::unreference();
                  if (cVar3 != '\0') {
                     pOVar2 = *(Object**)( pEVar8 + 0x30 );
                     cVar3 = predelete_handler(pOVar2);
                     if (cVar3 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                  }

               }

               Memory::free_static(pEVar8, false);
            }

            if (*(long*)( pEVar7 + 0x30 ) != 0) {
               cVar3 = RefCounted::unreference();
               if (cVar3 != '\0') {
                  pOVar2 = *(Object**)( pEVar7 + 0x30 );
                  cVar3 = predelete_handler(pOVar2);
                  if (cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                     Memory::free_static(pOVar2, false);
                  }

               }

            }

            Memory::free_static(pEVar7, false);
         }

         if (*(long*)( pEVar5 + 0x30 ) != 0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               pOVar2 = *(Object**)( pEVar5 + 0x30 );
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

         Memory::free_static(pEVar5, false);
      }

      if (*(long*)( pEVar1 + 0x30 ) != 0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            pOVar2 = *(Object**)( pEVar1 + 0x30 );
            cVar3 = predelete_handler(pOVar2);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

      }

      Memory::free_static(pEVar1, false);
   }

   if (*(long*)( param_1 + 0x30 ) != 0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         pOVar2 = *(Object**)( param_1 + 0x30 );
         cVar3 = predelete_handler(pOVar2);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   Memory::free_static(param_1, false);
   return;
}
/* void memdelete<GDScriptAnalyzer>(GDScriptAnalyzer*) */void memdelete<GDScriptAnalyzer>(GDScriptAnalyzer *param_1) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   long *plVar6;
   void *pvVar7;
   pvVar7 = *(void**)( param_1 + 0x28 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( param_1 + 0x4c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x48 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( param_1 + 0x4c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x38 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0x30 ) + lVar5 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar5 * 2 );
                  *(int*)( *(long*)( param_1 + 0x30 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x18 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( (long)pvVar7 + 0x18 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( param_1 + 0x28 );
                  *(undefined8*)( (long)pvVar7 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar1 << 2 );
            *(undefined4*)( param_1 + 0x4c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x38 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_00109cb8;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( param_1 + 0x30 ), false);
   }

   LAB_00109cb8:plVar6 = *(long**)( param_1 + 0x18 );
   if (plVar6 != (long*)0x0) {
      do {
         pvVar7 = (void*)*plVar6;
         if (pvVar7 == (void*)0x0) {
            if ((int)plVar6[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_00109d1e;
            }

            break;
         }

         if (*(long**)( (long)pvVar7 + 0x18 ) == plVar6) {
            lVar5 = *(long*)( (long)pvVar7 + 8 );
            lVar2 = *(long*)( (long)pvVar7 + 0x10 );
            *plVar6 = lVar5;
            if (pvVar7 == (void*)plVar6[1]) {
               plVar6[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar5;
               lVar5 = *(long*)( (long)pvVar7 + 8 );
            }

            if (lVar5 != 0) {
               *(long*)( lVar5 + 0x10 ) = lVar2;
            }

            Memory::free_static(pvVar7, false);
            *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar6 = *(long**)( param_1 + 0x18 );
      }
 while ( (int)plVar6[2] != 0 );
      Memory::free_static(plVar6, false);
   }

   LAB_00109d1e:Memory::free_static(param_1, false);
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Ref<GDScript>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<GDScript> > > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>>::operator [](HashMap<String,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<GDScript>>>> * this, String * param_1) * plVar1 ;void *pvVar2void *__slong lVar3Object *pOVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]char cVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined1(*pauVar42)[16];undefined8 *puVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48ulong uVar49undefined8 uVar50uint *puVar51uint uVar52uint uVar53long lVar54uint uVar55uint uVar56undefined1(*pauVar57)[16];undefined1(*pauVar58)[16];long in_FS_OFFSETlong local_58[3]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_0010a5e0:uVar40 = (ulong)uVar56;
   uVar45 = uVar40 * 4;
   uVar49 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar45, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar44 = (void*)Memory::alloc_static(uVar49, false);
   *(void**)( this + 8 ) = pvVar44;
   if (uVar56 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar44 + uVar49 ) ) && ( pvVar44 < (void*)( (long)pvVar2 + uVar45 ) )) {
         uVar45 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar45 * 4 ) = 0;
            *(undefined8*)( (long)pvVar44 + uVar45 * 8 ) = 0;
            uVar45 = uVar45 + 1;
         }
 while ( uVar40 != uVar45 );
         goto LAB_0010a462;
      }

      memset(pvVar2, 0, uVar45);
      memset(pvVar44, 0, uVar49);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0010a466:if (iVar46 != 0) {
         LAB_0010a46e:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar53 = String::hash();
         uVar40 = CONCAT44(0, uVar38);
         lVar54 = *(long*)( this + 0x10 );
         uVar39 = 1;
         if (uVar53 != 0) {
            uVar39 = uVar53;
         }

         uVar55 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar3;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar40;
         lVar47 = SUB168(auVar17 * auVar33, 8);
         uVar53 = *(uint*)( lVar54 + lVar47 * 4 );
         uVar52 = SUB164(auVar17 * auVar33, 8);
         if (uVar53 != 0) {
            do {
               if (uVar53 == uVar39) {
                  cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar47 * 8 ) + 0x10 ), param_1);
                  if (cVar37 != '\0') {
                     pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     pOVar4 = *(Object**)( pauVar42[1] + 8 );
                     if (pOVar4 != (Object*)0x0) {
                        *(undefined8*)( pauVar42[1] + 8 ) = 0;
                        cVar37 = RefCounted::unreference();
                        if (( cVar37 != '\0' ) && ( cVar37 = predelete_handler(pOVar4) ),cVar37 != '\0') {
                           ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }

                        pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                     }

                     goto LAB_0010a2eb;
                  }

                  lVar54 = *(long*)( this + 0x10 );
               }

               uVar55 = uVar55 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar40;
               lVar47 = SUB168(auVar18 * auVar34, 8);
               uVar53 = *(uint*)( lVar54 + lVar47 * 4 );
               uVar52 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar53 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar53 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar40,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar52 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar40,uVar55 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar46 = *(int*)( this + 0x2c );
      }

      uVar40 = (ulong)uVar56;
      goto LAB_00109f24;
   }

   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00109f24;
   if (iVar46 != 0) goto LAB_0010a46e;
   LAB_00109f4a:uVar56 = *(uint*)( this + 0x28 );
   if (uVar56 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010a2eb;
   }

   uVar40 = ( ulong )(uVar56 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar56 * 4 );
   if (uVar56 + 1 < 2) {
      uVar40 = 2;
   }

   uVar56 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar49 = (ulong)uVar56;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar44 = *(void**)( this + 8 );
   uVar40 = uVar49 * 4;
   uVar45 = uVar49 * 8;
   pvVar2 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar45, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar56 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar49 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar45);
      }

   }

   if (uVar38 != 0) {
      uVar40 = 0;
      do {
         uVar56 = *(uint*)( (long)pvVar2 + uVar40 * 4 );
         if (uVar56 != 0) {
            lVar3 = *(long*)( this + 0x10 );
            uVar52 = 0;
            uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar45 = CONCAT44(0, uVar39);
            lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar56 * lVar54;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar45;
            lVar47 = SUB168(auVar5 * auVar21, 8);
            puVar51 = (uint*)( lVar3 + lVar47 * 4 );
            iVar46 = SUB164(auVar5 * auVar21, 8);
            uVar53 = *puVar51;
            uVar41 = *(undefined8*)( (long)pvVar44 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar6._8_8_ = 0;
               auVar6._0_8_ = (ulong)uVar53 * lVar54;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar45;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(( uVar39 + iVar46 ) - SUB164(auVar6 * auVar22, 8)) * lVar54;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar45;
               uVar55 = SUB164(auVar7 * auVar23, 8);
               uVar50 = uVar41;
               if (uVar55 < uVar52) {
                  *puVar51 = uVar56;
                  puVar43 = (undefined8*)( (long)__s_00 + lVar47 * 8 );
                  uVar50 = *puVar43;
                  *puVar43 = uVar41;
                  uVar56 = uVar53;
                  uVar52 = uVar55;
               }

               uVar52 = uVar52 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar46 + 1) * lVar54;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar45;
               lVar47 = SUB168(auVar8 * auVar24, 8);
               puVar51 = (uint*)( lVar3 + lVar47 * 4 );
               iVar46 = SUB164(auVar8 * auVar24, 8);
               uVar41 = uVar50;
               uVar53 = *puVar51;
            }
;
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar51 = uVar56;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar38 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar2, false);
   }

}
 else {
   iVar46 = *(int*)( this + 0x2c );
   uVar40 = CONCAT44(0, uVar56);
   if (iVar46 != 0) {
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar39 = String::hash();
      lVar54 = *(long*)( this + 0x10 );
      uVar38 = 1;
      if (uVar39 != 0) {
         uVar38 = uVar39;
      }

      uVar52 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar47 = SUB168(auVar13 * auVar29, 8);
      uVar39 = *(uint*)( lVar54 + lVar47 * 4 );
      uVar53 = SUB164(auVar13 * auVar29, 8);
      if (uVar39 != 0) {
         do {
            if (uVar39 == uVar38) {
               cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar47 * 8 ) + 0x10 ), param_1);
               if (cVar37 != '\0') {
                  pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar53 * 8 );
                  goto LAB_0010a2eb;
               }

               lVar54 = *(long*)( this + 0x10 );
            }

            uVar52 = uVar52 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(uVar53 + 1) * lVar3;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar40;
            lVar47 = SUB168(auVar14 * auVar30, 8);
            uVar39 = *(uint*)( lVar54 + lVar47 * 4 );
            uVar53 = SUB164(auVar14 * auVar30, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar39 * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar53 + uVar56 ) - SUB164(auVar15 * auVar31, 8)) * lVar3,auVar32._8_8_ = 0,auVar32._0_8_ = uVar40,uVar52 <= SUB164(auVar16 * auVar32, 8) );
      }

      uVar56 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) goto LAB_0010a5e0;
      LAB_0010a462:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0010a466;
   }

   LAB_00109f24:if ((float)uVar40 * __LC15 < (float)( iVar46 + 1 )) goto LAB_00109f4a;
}
local_58[0] = 0;if (*(long*)param_1 == 0) {
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar42[1] = 0;
   *pauVar42 = (undefined1[16])0x0;
   LAB_0010a58b:*(undefined8*)( pauVar42[1] + 8 ) = 0;
   LAB_0010a1d3:puVar43 = *(undefined8**)( this + 0x20 );
   if (puVar43 != (undefined8*)0x0) goto LAB_0010a1e0;
   LAB_0010a41d:*(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar3 = local_58[0];
   local_58[1] = 0;
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar42[1] = 0;
   *(undefined8*)*pauVar42 = 0;
   *(undefined8*)( *pauVar42 + 8 ) = 0;
   if (lVar3 == 0) goto LAB_0010a58b;
   CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar42 + 1 ), (CowData*)local_58);
   *(undefined8*)( pauVar42[1] + 8 ) = 0;
   LOCK();
   plVar1 = (long*)( lVar3 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_0010a1d3;
   Memory::free_static((void*)( local_58[0] + -0x10 ), false);
   puVar43 = *(undefined8**)( this + 0x20 );
   if (puVar43 == (undefined8*)0x0) goto LAB_0010a41d;
   LAB_0010a1e0:*puVar43 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar43;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar38 = String::hash();lVar3 = *(long*)( this + 0x10 );uVar56 = 1;if (uVar38 != 0) {
   uVar56 = uVar38;
}
uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);lVar54 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar9._8_8_ = 0;auVar9._0_8_ = (ulong)uVar56 * lVar54;auVar25._8_8_ = 0;auVar25._0_8_ = uVar40;lVar48 = SUB168(auVar9 * auVar25, 8);lVar47 = *(long*)( this + 8 );puVar51 = (uint*)( lVar3 + lVar48 * 4 );iVar46 = SUB164(auVar9 * auVar25, 8);uVar39 = *puVar51;pauVar58 = pauVar42;if (uVar39 != 0) {
   uVar53 = 0;
   pauVar57 = pauVar42;
   do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar54;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( iVar46 + uVar38 ) - SUB164(auVar10 * auVar26, 8)) * lVar54;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar52 = SUB164(auVar11 * auVar27, 8);
      pauVar58 = pauVar57;
      if (uVar52 < uVar53) {
         *puVar51 = uVar56;
         puVar43 = (undefined8*)( lVar47 + lVar48 * 8 );
         pauVar58 = (undefined1(*) [16])*puVar43;
         *puVar43 = pauVar57;
         uVar53 = uVar52;
         uVar56 = uVar39;
      }

      uVar53 = uVar53 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar46 + 1) * lVar54;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      lVar48 = SUB168(auVar12 * auVar28, 8);
      puVar51 = (uint*)( lVar3 + lVar48 * 4 );
      iVar46 = SUB164(auVar12 * auVar28, 8);
      uVar39 = *puVar51;
      pauVar57 = pauVar58;
   }
 while ( uVar39 != 0 );
}
*(undefined1(**) [16])( lVar47 + lVar48 * 8 ) = pauVar58;*puVar51 = uVar56;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010a2eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar42[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, GDScriptParserRef*, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, GDScriptParserRef*> > >::operator[](String const&)
    */undefined1 * __thiscallHashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>>::operator [](HashMap<String,GDScriptParserRef*,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,GDScriptParserRef*>>> * this, String * param_1) * plVar1 ;void *pvVar2void *__slong lVar3undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]char cVar36uint uVar37uint uVar38ulong uVar39undefined8 uVar40void *__s_00undefined1(*pauVar41)[16];undefined8 *puVar42void *pvVar43ulong uVar44int iVar45long lVar46long lVar47ulong uVar48undefined8 uVar49uint *puVar50uint uVar51uint uVar52long lVar53uint uVar54uint uVar55undefined1(*pauVar56)[16];undefined1(*pauVar57)[16];long in_FS_OFFSETlong local_58[3]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_0010b208:uVar39 = (ulong)uVar55;
   uVar44 = uVar39 * 4;
   uVar48 = uVar39 * 8;
   uVar40 = Memory::alloc_static(uVar44, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   pvVar43 = (void*)Memory::alloc_static(uVar48, false);
   *(void**)( this + 8 ) = pvVar43;
   if (uVar55 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar43 + uVar48 ) ) && ( pvVar43 < (void*)( (long)pvVar2 + uVar44 ) )) {
         uVar44 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar44 * 4 ) = 0;
            *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
            uVar44 = uVar44 + 1;
         }
 while ( uVar39 != uVar44 );
         goto LAB_0010b09a;
      }

      memset(pvVar2, 0, uVar44);
      memset(pvVar43, 0, uVar48);
      iVar45 = *(int*)( this + 0x2c );
      LAB_0010b09e:if (iVar45 != 0) {
         LAB_0010b0a6:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar52 = String::hash();
         uVar39 = CONCAT44(0, uVar37);
         lVar53 = *(long*)( this + 0x10 );
         uVar38 = 1;
         if (uVar52 != 0) {
            uVar38 = uVar52;
         }

         uVar54 = 0;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = (ulong)uVar38 * lVar3;
         auVar32._8_8_ = 0;
         auVar32._0_8_ = uVar39;
         lVar46 = SUB168(auVar16 * auVar32, 8);
         uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar51 = SUB164(auVar16 * auVar32, 8);
         if (uVar52 != 0) {
            do {
               if (uVar38 == uVar52) {
                  cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                  if (cVar36 != '\0') {
                     pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                     *(undefined8*)( pauVar41[1] + 8 ) = 0;
                     goto LAB_0010af4b;
                  }

                  lVar53 = *(long*)( this + 0x10 );
               }

               uVar54 = uVar54 + 1;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar39;
               lVar46 = SUB168(auVar17 * auVar33, 8);
               uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar51 = SUB164(auVar17 * auVar33, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar52 * lVar3,auVar34._8_8_ = 0,auVar34._0_8_ = uVar39,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar37 + uVar51 ) - SUB164(auVar18 * auVar34, 8)) * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar39,uVar54 <= SUB164(auVar19 * auVar35, 8) );
         }

         iVar45 = *(int*)( this + 0x2c );
      }

      uVar39 = (ulong)uVar55;
      goto LAB_0010ab84;
   }

   iVar45 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_0010ab84;
   if (iVar45 != 0) goto LAB_0010b0a6;
   LAB_0010abaa:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      pauVar41 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010af4b;
   }

   uVar39 = ( ulong )(uVar55 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar37 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   if (uVar55 + 1 < 2) {
      uVar39 = 2;
   }

   uVar55 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar48 = (ulong)uVar55;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar43 = *(void**)( this + 8 );
   uVar39 = uVar48 * 4;
   uVar44 = uVar48 * 8;
   pvVar2 = *(void**)( this + 0x10 );
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar44, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar39 != uVar48 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar44);
      }

   }

   if (uVar37 != 0) {
      uVar39 = 0;
      do {
         uVar55 = *(uint*)( (long)pvVar2 + uVar39 * 4 );
         if (uVar55 != 0) {
            lVar3 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar44 = CONCAT44(0, uVar38);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar55 * lVar53;
            auVar20._8_8_ = 0;
            auVar20._0_8_ = uVar44;
            lVar46 = SUB168(auVar4 * auVar20, 8);
            puVar50 = (uint*)( lVar3 + lVar46 * 4 );
            iVar45 = SUB164(auVar4 * auVar20, 8);
            uVar52 = *puVar50;
            uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
            while (uVar52 != 0) {
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar52 * lVar53;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar44;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar5 * auVar21, 8)) * lVar53;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar44;
               uVar54 = SUB164(auVar6 * auVar22, 8);
               uVar49 = uVar40;
               if (uVar54 < uVar51) {
                  *puVar50 = uVar55;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar49 = *puVar42;
                  *puVar42 = uVar40;
                  uVar55 = uVar52;
                  uVar51 = uVar54;
               }

               uVar51 = uVar51 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar44;
               lVar46 = SUB168(auVar7 * auVar23, 8);
               puVar50 = (uint*)( lVar3 + lVar46 * 4 );
               iVar45 = SUB164(auVar7 * auVar23, 8);
               uVar40 = uVar49;
               uVar52 = *puVar50;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
            *puVar50 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar37 != uVar39 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar2, false);
   }

}
 else {
   iVar45 = *(int*)( this + 0x2c );
   uVar39 = CONCAT44(0, uVar55);
   if (iVar45 != 0) {
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar38 = String::hash();
      lVar53 = *(long*)( this + 0x10 );
      uVar37 = 1;
      if (uVar38 != 0) {
         uVar37 = uVar38;
      }

      uVar51 = 0;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = (ulong)uVar37 * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar39;
      lVar46 = SUB168(auVar12 * auVar28, 8);
      uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
      uVar52 = SUB164(auVar12 * auVar28, 8);
      if (uVar38 != 0) {
         do {
            if (uVar37 == uVar38) {
               cVar36 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
               if (cVar36 != '\0') {
                  pauVar41 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                  goto LAB_0010af4b;
               }

               lVar53 = *(long*)( this + 0x10 );
            }

            uVar51 = uVar51 + 1;
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar39;
            lVar46 = SUB168(auVar13 * auVar29, 8);
            uVar38 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar52 = SUB164(auVar13 * auVar29, 8);
         }
 while ( ( uVar38 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar38 * lVar3,auVar30._8_8_ = 0,auVar30._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar14 * auVar30, 8)) * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar39,uVar51 <= SUB164(auVar15 * auVar31, 8) );
      }

      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) goto LAB_0010b208;
      LAB_0010b09a:iVar45 = *(int*)( this + 0x2c );
      goto LAB_0010b09e;
   }

   LAB_0010ab84:if ((float)uVar39 * __LC15 < (float)( iVar45 + 1 )) goto LAB_0010abaa;
}
local_58[0] = 0;if (*(long*)param_1 == 0) {
   pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar41[1] = 0;
   *pauVar41 = (undefined1[16])0x0;
   LAB_0010b1db:*(undefined8*)( pauVar41[1] + 8 ) = 0;
   LAB_0010ae33:puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 != (undefined8*)0x0) goto LAB_0010ae40;
   LAB_0010b075:*(undefined1(**) [16])( this + 0x18 ) = pauVar41;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar3 = local_58[0];
   local_58[1] = 0;
   pauVar41 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar41[1] = 0;
   *(undefined8*)*pauVar41 = 0;
   *(undefined8*)( *pauVar41 + 8 ) = 0;
   if (lVar3 == 0) goto LAB_0010b1db;
   CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar41 + 1 ), (CowData*)local_58);
   *(undefined8*)( pauVar41[1] + 8 ) = 0;
   LOCK();
   plVar1 = (long*)( lVar3 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_0010ae33;
   Memory::free_static((void*)( local_58[0] + -0x10 ), false);
   puVar42 = *(undefined8**)( this + 0x20 );
   if (puVar42 == (undefined8*)0x0) goto LAB_0010b075;
   LAB_0010ae40:*puVar42 = pauVar41;
   *(undefined8**)( *pauVar41 + 8 ) = puVar42;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar41;uVar37 = String::hash();lVar3 = *(long*)( this + 0x10 );uVar55 = 1;if (uVar37 != 0) {
   uVar55 = uVar37;
}
uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar37);lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar8._8_8_ = 0;auVar8._0_8_ = (ulong)uVar55 * lVar53;auVar24._8_8_ = 0;auVar24._0_8_ = uVar39;lVar47 = SUB168(auVar8 * auVar24, 8);lVar46 = *(long*)( this + 8 );puVar50 = (uint*)( lVar3 + lVar47 * 4 );iVar45 = SUB164(auVar8 * auVar24, 8);uVar38 = *puVar50;pauVar57 = pauVar41;if (uVar38 != 0) {
   uVar52 = 0;
   pauVar56 = pauVar41;
   do {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar38 * lVar53;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar39;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar37 + iVar45 ) - SUB164(auVar9 * auVar25, 8)) * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar39;
      uVar51 = SUB164(auVar10 * auVar26, 8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
         *puVar50 = uVar55;
         puVar42 = (undefined8*)( lVar46 + lVar47 * 8 );
         pauVar57 = (undefined1(*) [16])*puVar42;
         *puVar42 = pauVar56;
         uVar52 = uVar51;
         uVar55 = uVar38;
      }

      uVar52 = uVar52 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar39;
      lVar47 = SUB168(auVar11 * auVar27, 8);
      puVar50 = (uint*)( lVar3 + lVar47 * 4 );
      iVar45 = SUB164(auVar11 * auVar27, 8);
      uVar38 = *puVar50;
      pauVar56 = pauVar57;
   }
 while ( uVar38 != 0 );
}
*(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar57;*puVar50 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010af4b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar41[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >,
   HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> > > > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>>::operator [](HashMap<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>>>> * this, String * param_1) * plVar1 ;long *plVar2uint *puVar3void *pvVar4void *__slong lVar5undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]undefined1 auVar37[16]undefined1(*pauVar38)[16];char cVar39uint uVar40uint uVar41ulong uVar42undefined8 uVar43void *__s_00undefined1(*pauVar44)[16];undefined8 *puVar45void *pvVar46undefined1 *puVar47int iVar48long lVar49long lVar50ulong uVar51undefined8 uVar52long lVar53uint uVar54uint uVar55ulong uVar56uint uVar57uint uVar58undefined1(*pauVar59)[16];long in_FS_OFFSETlong local_78undefined1 local_70[16]undefined1 local_60[16]undefined8 local_50long local_40uVar58 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );if (*(long*)( this + 8 ) == 0) {
   LAB_0010b9f8:uVar51 = (ulong)uVar58;
   uVar42 = uVar51 * 4;
   uVar56 = uVar51 * 8;
   uVar43 = Memory::alloc_static(uVar42, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   pvVar46 = (void*)Memory::alloc_static(uVar56, false);
   *(void**)( this + 8 ) = pvVar46;
   if (uVar58 != 0) {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)pvVar46 + uVar56 ) ) && ( pvVar46 < (void*)( (long)pvVar4 + uVar42 ) )) {
         uVar42 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar42 * 4 ) = 0;
            *(undefined8*)( (long)pvVar46 + uVar42 * 8 ) = 0;
            uVar42 = uVar42 + 1;
         }
 while ( uVar51 != uVar42 );
      }
 else {
         memset(pvVar4, 0, uVar42);
         memset(pvVar46, 0, uVar56);
      }

      LAB_0010b89c:iVar48 = *(int*)( this + 0x2c );
      if (iVar48 != 0) {
         LAB_0010b8ac:uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar55 = String::hash();
         uVar42 = CONCAT44(0, uVar40);
         lVar53 = *(long*)( this + 0x10 );
         uVar41 = 1;
         if (uVar55 != 0) {
            uVar41 = uVar55;
         }

         uVar57 = 0;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = (ulong)uVar41 * lVar5;
         auVar34._8_8_ = 0;
         auVar34._0_8_ = uVar42;
         lVar49 = SUB168(auVar18 * auVar34, 8);
         uVar55 = *(uint*)( lVar53 + lVar49 * 4 );
         uVar54 = SUB164(auVar18 * auVar34, 8);
         if (uVar55 != 0) {
            do {
               if (uVar55 == uVar41) {
                  cVar39 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ), param_1);
                  if (cVar39 != '\0') {
                     lVar5 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar54 * 8 );
                     pvVar46 = *(void**)( lVar5 + 0x18 );
                     lVar53 = lVar5;
                     if (pvVar46 == (void*)0x0) goto LAB_0010bbbb;
                     if (( *(int*)( lVar5 + 0x3c ) == 0 ) || ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar5 + 0x38 ) * 4 ) != 0 && ( memset(*(void**)( lVar5 + 0x30 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar5 + 0x38 ) * 4 ) * 4),*(int*)( lVar5 + 0x3c ) == 0 ) ) )) goto LAB_0010bb70;
                     lVar53 = 0;
                     do {
                        plVar1 = (long*)( (long)pvVar46 + lVar53 * 8 );
                        if (*plVar1 != 0) {
                           LOCK();
                           plVar2 = (long*)( *plVar1 + -0x10 );
                           *plVar2 = *plVar2 + -1;
                           UNLOCK();
                           if (*plVar2 == 0) {
                              lVar49 = *plVar1;
                              *plVar1 = 0;
                              Memory::free_static((void*)( lVar49 + -0x10 ), false);
                           }

                           pvVar46 = *(void**)( lVar5 + 0x18 );
                        }

                        lVar53 = lVar53 + 1;
                     }
 while ( (uint)lVar53 < *(uint*)( lVar5 + 0x3c ) );
                     *(undefined4*)( lVar5 + 0x3c ) = 0;
                     if (pvVar46 != (void*)0x0) {
                        LAB_0010bb70:Memory::free_static(pvVar46, false);
                        Memory::free_static(*(void**)( lVar5 + 0x28 ), false);
                        Memory::free_static(*(void**)( lVar5 + 0x20 ), false);
                        Memory::free_static(*(void**)( lVar5 + 0x30 ), false);
                        *(undefined1(*) [16])( lVar5 + 0x18 ) = (undefined1[16])0x0;
                        *(undefined1(*) [16])( lVar5 + 0x28 ) = (undefined1[16])0x0;
                     }

                     lVar53 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar54 * 8 );
                     LAB_0010bbbb:*(undefined8*)( lVar5 + 0x38 ) = 2;
                     puVar47 = (undefined1*)( lVar53 + 0x18 );
                     goto LAB_0010b76a;
                  }

                  lVar53 = *(long*)( this + 0x10 );
               }

               uVar57 = uVar57 + 1;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = ( ulong )(uVar54 + 1) * lVar5;
               auVar35._8_8_ = 0;
               auVar35._0_8_ = uVar42;
               lVar49 = SUB168(auVar19 * auVar35, 8);
               uVar55 = *(uint*)( lVar53 + lVar49 * 4 );
               uVar54 = SUB164(auVar19 * auVar35, 8);
            }
 while ( ( uVar55 != 0 ) && ( auVar20._8_8_ = 0 ),auVar20._0_8_ = (ulong)uVar55 * lVar5,auVar36._8_8_ = 0,auVar36._0_8_ = uVar42,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( uVar40 + uVar54 ) - SUB164(auVar20 * auVar36, 8)) * lVar5,auVar37._8_8_ = 0,auVar37._0_8_ = uVar42,uVar57 <= SUB164(auVar21 * auVar37, 8) );
         }

         iVar48 = *(int*)( this + 0x2c );
      }

      goto LAB_0010b376;
   }

   iVar48 = *(int*)( this + 0x2c );
   if (pvVar46 == (void*)0x0) goto LAB_0010b379;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010b8ac;
   LAB_0010b39f:uVar58 = *(uint*)( this + 0x28 );
   if (uVar58 == 0x1c) {
      pauVar44 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010b766;
   }

   uVar42 = ( ulong )(uVar58 + 1);
   uVar40 = *(uint*)( hash_table_size_primes + (ulong)uVar58 * 4 );
   *(undefined4*)( this + 0x2c ) = 0;
   if (uVar58 + 1 < 2) {
      uVar42 = 2;
   }

   uVar58 = *(uint*)( hash_table_size_primes + uVar42 * 4 );
   *(int*)( this + 0x28 ) = (int)uVar42;
   pvVar46 = *(void**)( this + 8 );
   uVar51 = (ulong)uVar58;
   uVar42 = uVar51 * 4;
   pvVar4 = *(void**)( this + 0x10 );
   uVar56 = uVar51 * 8;
   uVar43 = Memory::alloc_static(uVar42, false);
   *(undefined8*)( this + 0x10 ) = uVar43;
   __s_00 = (void*)Memory::alloc_static(uVar56, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar58 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar56 ) ) && ( __s_00 < (void*)( (long)__s + uVar42 ) )) {
         uVar42 = 0;
         do {
            *(undefined4*)( (long)__s + uVar42 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar42 * 8 ) = 0;
            uVar42 = uVar42 + 1;
         }
 while ( uVar51 != uVar42 );
      }
 else {
         memset(__s, 0, uVar42);
         memset(__s_00, 0, uVar56);
      }

   }

   uVar42 = 0;
   if (uVar40 != 0) {
      do {
         uVar58 = *(uint*)( (long)pvVar4 + uVar42 * 4 );
         if (uVar58 != 0) {
            uVar54 = 0;
            lVar5 = *(long*)( this + 0x10 );
            uVar41 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar56 = CONCAT44(0, uVar41);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar6._8_8_ = 0;
            auVar6._0_8_ = (ulong)uVar58 * lVar53;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar56;
            lVar49 = SUB168(auVar6 * auVar22, 8);
            puVar3 = (uint*)( lVar5 + lVar49 * 4 );
            iVar48 = SUB164(auVar6 * auVar22, 8);
            uVar55 = *puVar3;
            uVar43 = *(undefined8*)( (long)pvVar46 + uVar42 * 8 );
            while (uVar55 != 0) {
               auVar7._8_8_ = 0;
               auVar7._0_8_ = (ulong)uVar55 * lVar53;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar56;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(( uVar41 + iVar48 ) - SUB164(auVar7 * auVar23, 8)) * lVar53;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar56;
               uVar57 = SUB164(auVar8 * auVar24, 8);
               uVar52 = uVar43;
               if (uVar57 < uVar54) {
                  *puVar3 = uVar58;
                  puVar45 = (undefined8*)( (long)__s_00 + lVar49 * 8 );
                  uVar52 = *puVar45;
                  *puVar45 = uVar43;
                  uVar58 = uVar55;
                  uVar54 = uVar57;
               }

               uVar54 = uVar54 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(iVar48 + 1) * lVar53;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar56;
               lVar49 = SUB168(auVar9 * auVar25, 8);
               puVar3 = (uint*)( lVar5 + lVar49 * 4 );
               iVar48 = SUB164(auVar9 * auVar25, 8);
               uVar43 = uVar52;
               uVar55 = *puVar3;
            }
;
            *(undefined8*)( (long)__s_00 + lVar49 * 8 ) = uVar43;
            *puVar3 = uVar58;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar42 = uVar42 + 1;
      }
 while ( uVar42 != uVar40 );
      Memory::free_static(pvVar46, false);
      Memory::free_static(pvVar4, false);
   }

}
 else {
   iVar48 = *(int*)( this + 0x2c );
   if (iVar48 != 0) {
      uVar42 = CONCAT44(0, uVar58);
      lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar41 = String::hash();
      uVar40 = 1;
      if (uVar41 != 0) {
         uVar40 = uVar41;
      }

      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar40 * lVar5;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar42;
      lVar49 = SUB168(auVar14 * auVar30, 8);
      lVar53 = *(long*)( this + 0x10 );
      uVar55 = SUB164(auVar14 * auVar30, 8);
      uVar41 = *(uint*)( lVar53 + lVar49 * 4 );
      if (uVar41 == 0) {
         lVar50 = *(long*)( this + 8 );
      }
 else {
         uVar54 = 0;
         lVar50 = *(long*)( this + 8 );
         do {
            if (uVar41 == uVar40) {
               cVar39 = String::operator ==((String*)( *(long*)( lVar50 + lVar49 * 8 ) + 0x10 ), param_1);
               if (cVar39 != '\0') {
                  puVar47 = (undefined1*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar55 * 8 ) + 0x18 );
                  goto LAB_0010b76a;
               }

               lVar53 = *(long*)( this + 0x10 );
               lVar50 = *(long*)( this + 8 );
            }

            uVar54 = uVar54 + 1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = ( ulong )(uVar55 + 1) * lVar5;
            auVar31._8_8_ = 0;
            auVar31._0_8_ = uVar42;
            lVar49 = SUB168(auVar15 * auVar31, 8);
            uVar41 = *(uint*)( lVar53 + lVar49 * 4 );
            uVar55 = SUB164(auVar15 * auVar31, 8);
         }
 while ( ( uVar41 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = (ulong)uVar41 * lVar5,auVar32._8_8_ = 0,auVar32._0_8_ = uVar42,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar55 + uVar58 ) - SUB164(auVar16 * auVar32, 8)) * lVar5,auVar33._8_8_ = 0,auVar33._0_8_ = uVar42,uVar54 <= SUB164(auVar17 * auVar33, 8) );
      }

      uVar58 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar50 == 0) goto LAB_0010b9f8;
      goto LAB_0010b89c;
   }

   LAB_0010b376:uVar51 = (ulong)uVar58;
   LAB_0010b379:if ((float)uVar51 * __LC15 < (float)( iVar48 + 1 )) goto LAB_0010b39f;
}
local_78 = 0;if (*(long*)param_1 == 0) {
   pauVar44 = (undefined1(*) [16])operator_new(0x40, "");
   uVar43 = _LC8;
   *(undefined8*)pauVar44[1] = 0;
   *pauVar44 = (undefined1[16])0x0;
   LAB_0010baba:*(undefined8*)( pauVar44[3] + 8 ) = uVar43;
   *(undefined1(*) [16])( pauVar44[1] + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pauVar44[2] + 8 ) = (undefined1[16])0x0;
   LAB_0010b64f:puVar45 = *(undefined8**)( this + 0x20 );
   if (puVar45 != (undefined8*)0x0) goto LAB_0010b661;
   LAB_0010b9ca:*(undefined1(**) [16])( this + 0x18 ) = pauVar44;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, (CowData*)param_1);
   lVar5 = local_78;
   uVar43 = _LC8;
   local_70 = (undefined1[16])0x0;
   local_50 = _LC8;
   local_60 = (undefined1[16])0x0;
   pauVar44 = (undefined1(*) [16])operator_new(0x40, "");
   *(undefined8*)pauVar44[1] = 0;
   *(undefined8*)*pauVar44 = 0;
   *(undefined8*)( *pauVar44 + 8 ) = 0;
   if (lVar5 == 0) goto LAB_0010baba;
   CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar44 + 1 ), (CowData*)&local_78);
   *(undefined8*)( pauVar44[3] + 8 ) = uVar43;
   *(undefined1(*) [16])( pauVar44[1] + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pauVar44[2] + 8 ) = (undefined1[16])0x0;
   LOCK();
   plVar1 = (long*)( lVar5 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 != 0) goto LAB_0010b64f;
   Memory::free_static((void*)( local_78 + -0x10 ), false);
   puVar45 = *(undefined8**)( this + 0x20 );
   if (puVar45 == (undefined8*)0x0) goto LAB_0010b9ca;
   LAB_0010b661:*puVar45 = pauVar44;
   *(undefined8**)( *pauVar44 + 8 ) = puVar45;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar44;uVar40 = String::hash();lVar5 = *(long*)( this + 0x10 );uVar58 = 1;if (uVar40 != 0) {
   uVar58 = uVar40;
}
uVar55 = 0;uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar42 = CONCAT44(0, uVar40);lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar10._8_8_ = 0;auVar10._0_8_ = (ulong)uVar58 * lVar53;auVar26._8_8_ = 0;auVar26._0_8_ = uVar42;lVar50 = SUB168(auVar10 * auVar26, 8);lVar49 = *(long*)( this + 8 );puVar3 = (uint*)( lVar5 + lVar50 * 4 );iVar48 = SUB164(auVar10 * auVar26, 8);uVar41 = *puVar3;pauVar38 = pauVar44;while (uVar41 != 0) {
   auVar11._8_8_ = 0;
   auVar11._0_8_ = (ulong)uVar41 * lVar53;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar42;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(( iVar48 + uVar40 ) - SUB164(auVar11 * auVar27, 8)) * lVar53;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar42;
   uVar54 = SUB164(auVar12 * auVar28, 8);
   pauVar59 = pauVar38;
   if (uVar54 < uVar55) {
      *puVar3 = uVar58;
      puVar45 = (undefined8*)( lVar49 + lVar50 * 8 );
      pauVar59 = (undefined1(*) [16])*puVar45;
      *puVar45 = pauVar38;
      uVar55 = uVar54;
      uVar58 = uVar41;
   }

   uVar55 = uVar55 + 1;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(iVar48 + 1) * lVar53;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar42;
   lVar50 = SUB168(auVar13 * auVar29, 8);
   puVar3 = (uint*)( lVar5 + lVar50 * 4 );
   iVar48 = SUB164(auVar13 * auVar29, 8);
   pauVar38 = pauVar59;
   uVar41 = *puVar3;
}
;*(undefined1(**) [16])( lVar49 + lVar50 * 8 ) = pauVar38;*puVar3 = uVar58;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010b766:puVar47 = pauVar44[1] + 8;LAB_0010b76a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return puVar47;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
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
      if (*in_RSI != 0) goto LAB_0010bd1c;
   }
 else {
      iVar37 = *(int*)( (long)in_RSI + 0x24 );
      LAB_0010bd1c:if (iVar37 != 0) {
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
                     goto LAB_0010c099;
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

   if ((float)uVar29 * __LC15 < (float)( iVar37 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar37 = *(int*)( (long)in_RSI + 0x24 );
         lVar33 = *in_RSI;
         iVar31 = -1;
         goto LAB_0010c099;
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
   LAB_0010c099:*(int*)( param_1 + 0xc ) = iVar31;
   *(long*)param_1 = lVar33;
   *(int*)( param_1 + 8 ) = iVar37;
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Vector<ObjectID>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Vector<ObjectID> > > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,Vector<ObjectID>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<ObjectID>>>>::operator [](HashMap<String,Vector<ObjectID>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<ObjectID>>>> * this, String * param_1) * plVar1 ;void *pvVar2void *__sundefined1 auVar3[16]undefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]char cVar35uint uVar36uint uVar37ulong uVar38undefined8 uVar39void *__s_00undefined8 *puVar40void *pvVar41int iVar42long lVar43long lVar44ulong uVar45uint *puVar46undefined8 uVar47long lVar48uint uVar49uint uVar50ulong uVar51long lVar52long lVar53uint uVar54uint uVar55undefined1(*pauVar56)[16];undefined1(*pauVar57)[16];long in_FS_OFFSETundefined1(*local_a0)[16];long local_70undefined1 local_68[16]long local_58[2]undefined8 local_48long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_0010c9f4:local_70 = 0;
   uVar45 = (ulong)uVar55;
   uVar38 = uVar45 * 4;
   uVar51 = uVar45 * 8;
   uVar39 = Memory::alloc_static(uVar38, false);
   *(undefined8*)( this + 0x10 ) = uVar39;
   pvVar41 = (void*)Memory::alloc_static(uVar51, false);
   *(void**)( this + 8 ) = pvVar41;
   if (uVar55 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar41 + uVar51 ) ) && ( pvVar41 < (void*)( (long)pvVar2 + uVar38 ) )) {
         uVar38 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar38 * 4 ) = 0;
            *(undefined8*)( (long)pvVar41 + uVar38 * 8 ) = 0;
            uVar38 = uVar38 + 1;
         }
 while ( uVar45 != uVar38 );
      }
 else {
         memset(pvVar2, 0, uVar38);
         memset(pvVar41, 0, uVar51);
      }

      LAB_0010c8d4:iVar42 = *(int*)( this + 0x2c );
      if (iVar42 != 0) {
         LAB_0010c8e0:uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar50 = String::hash();
         uVar38 = CONCAT44(0, uVar36);
         lVar53 = *(long*)( this + 0x10 );
         uVar37 = 1;
         if (uVar50 != 0) {
            uVar37 = uVar50;
         }

         uVar54 = 0;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = (ulong)uVar37 * lVar48;
         auVar31._8_8_ = 0;
         auVar31._0_8_ = uVar38;
         lVar43 = SUB168(auVar15 * auVar31, 8);
         uVar50 = *(uint*)( lVar53 + lVar43 * 4 );
         uVar49 = SUB164(auVar15 * auVar31, 8);
         if (uVar50 != 0) {
            do {
               if (uVar50 == uVar37) {
                  cVar35 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar43 * 8 ) + 0x10 ), param_1);
                  if (cVar35 != '\0') {
                     local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar49 * 8 );
                     if (*(long*)local_a0[2] != 0) {
                        CowData<ObjectID>::_ref((CowData<ObjectID>*)( local_a0 + 2 ), (CowData*)&local_70);
                        local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar49 * 8 );
                     }

                     goto LAB_0010c7a0;
                  }

                  lVar53 = *(long*)( this + 0x10 );
               }

               uVar54 = uVar54 + 1;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( ulong )(uVar49 + 1) * lVar48;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar38;
               lVar43 = SUB168(auVar16 * auVar32, 8);
               uVar50 = *(uint*)( lVar53 + lVar43 * 4 );
               uVar49 = SUB164(auVar16 * auVar32, 8);
            }
 while ( ( uVar50 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar50 * lVar48,auVar33._8_8_ = 0,auVar33._0_8_ = uVar38,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar36 + uVar49 ) - SUB164(auVar17 * auVar33, 8)) * lVar48,auVar34._8_8_ = 0,auVar34._0_8_ = uVar38,uVar54 <= SUB164(auVar18 * auVar34, 8) );
         }

         iVar42 = *(int*)( this + 0x2c );
      }

      uVar45 = (ulong)uVar55;
      goto LAB_0010c3a0;
   }

   iVar42 = *(int*)( this + 0x2c );
   if (pvVar41 == (void*)0x0) goto LAB_0010c3a0;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0010c8e0;
   LAB_0010c3c6:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_a0 = (undefined1(*) [16])0x0;
      goto LAB_0010c7a0;
   }

   uVar38 = ( ulong )(uVar55 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar36 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   if (uVar55 + 1 < 2) {
      uVar38 = 2;
   }

   uVar55 = *(uint*)( hash_table_size_primes + uVar38 * 4 );
   uVar45 = (ulong)uVar55;
   *(int*)( this + 0x28 ) = (int)uVar38;
   pvVar41 = *(void**)( this + 8 );
   uVar38 = uVar45 * 4;
   uVar51 = uVar45 * 8;
   pvVar2 = *(void**)( this + 0x10 );
   uVar39 = Memory::alloc_static(uVar38, false);
   *(undefined8*)( this + 0x10 ) = uVar39;
   __s_00 = (void*)Memory::alloc_static(uVar51, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar38 ) )) {
         uVar38 = 0;
         do {
            *(undefined4*)( (long)__s + uVar38 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar38 * 8 ) = 0;
            uVar38 = uVar38 + 1;
         }
 while ( uVar38 != uVar45 );
      }
 else {
         memset(__s, 0, uVar38);
         memset(__s_00, 0, uVar51);
      }

   }

   if (uVar36 != 0) {
      uVar38 = 0;
      do {
         uVar55 = *(uint*)( (long)pvVar2 + uVar38 * 4 );
         if (uVar55 != 0) {
            lVar48 = *(long*)( this + 0x10 );
            uVar49 = 0;
            uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar51 = CONCAT44(0, uVar37);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar3._8_8_ = 0;
            auVar3._0_8_ = (ulong)uVar55 * lVar53;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar51;
            lVar43 = SUB168(auVar3 * auVar19, 8);
            puVar46 = (uint*)( lVar48 + lVar43 * 4 );
            iVar42 = SUB164(auVar3 * auVar19, 8);
            uVar50 = *puVar46;
            uVar39 = *(undefined8*)( (long)pvVar41 + uVar38 * 8 );
            while (uVar50 != 0) {
               auVar4._8_8_ = 0;
               auVar4._0_8_ = (ulong)uVar50 * lVar53;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar51;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(( iVar42 + uVar37 ) - SUB164(auVar4 * auVar20, 8)) * lVar53;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar51;
               uVar54 = SUB164(auVar5 * auVar21, 8);
               uVar47 = uVar39;
               if (uVar54 < uVar49) {
                  *puVar46 = uVar55;
                  puVar40 = (undefined8*)( (long)__s_00 + lVar43 * 8 );
                  uVar47 = *puVar40;
                  *puVar40 = uVar39;
                  uVar55 = uVar50;
                  uVar49 = uVar54;
               }

               uVar49 = uVar49 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(iVar42 + 1) * lVar53;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar51;
               lVar43 = SUB168(auVar6 * auVar22, 8);
               puVar46 = (uint*)( lVar48 + lVar43 * 4 );
               iVar42 = SUB164(auVar6 * auVar22, 8);
               uVar39 = uVar47;
               uVar50 = *puVar46;
            }
;
            *(undefined8*)( (long)__s_00 + lVar43 * 8 ) = uVar39;
            *puVar46 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar38 = uVar38 + 1;
      }
 while ( uVar36 != uVar38 );
      Memory::free_static(pvVar41, false);
      Memory::free_static(pvVar2, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      uVar38 = CONCAT44(0, uVar55);
      lVar48 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar37 = String::hash();
      lVar53 = *(long*)( this + 0x10 );
      uVar36 = 1;
      if (uVar37 != 0) {
         uVar36 = uVar37;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar36 * lVar48;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      lVar43 = SUB168(auVar11 * auVar27, 8);
      uVar37 = *(uint*)( lVar53 + lVar43 * 4 );
      uVar50 = SUB164(auVar11 * auVar27, 8);
      if (uVar37 == 0) {
         lVar52 = *(long*)( this + 8 );
      }
 else {
         lVar52 = *(long*)( this + 8 );
         uVar49 = 0;
         do {
            if (uVar37 == uVar36) {
               cVar35 = String::operator ==((String*)( *(long*)( lVar52 + lVar43 * 8 ) + 0x10 ), param_1);
               if (cVar35 != '\0') {
                  local_a0 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar50 * 8 );
                  goto LAB_0010c7a0;
               }

               lVar53 = *(long*)( this + 0x10 );
               lVar52 = *(long*)( this + 8 );
            }

            uVar49 = uVar49 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(uVar50 + 1) * lVar48;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar38;
            lVar43 = SUB168(auVar12 * auVar28, 8);
            uVar37 = *(uint*)( lVar53 + lVar43 * 4 );
            uVar50 = SUB164(auVar12 * auVar28, 8);
         }
 while ( ( uVar37 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar37 * lVar48,auVar29._8_8_ = 0,auVar29._0_8_ = uVar38,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar50 + uVar55 ) - SUB164(auVar13 * auVar29, 8)) * lVar48,auVar30._8_8_ = 0,auVar30._0_8_ = uVar38,uVar49 <= SUB164(auVar14 * auVar30, 8) );
      }

      local_70 = 0;
      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar52 == 0) goto LAB_0010c9f4;
      goto LAB_0010c8d4;
   }

   local_70 = 0;
   uVar45 = (ulong)uVar55;
   iVar42 = 0;
   LAB_0010c3a0:if ((float)uVar45 * __LC15 < (float)( iVar42 + 1 )) goto LAB_0010c3c6;
}
local_58[0] = 0;local_68 = (undefined1[16])0x0;if (*(long*)param_1 == 0) {
   local_a0 = (undefined1(*) [16])operator_new(0x28, "");
   *(undefined8*)local_a0[1] = 0;
   *local_a0 = (undefined1[16])0x0;
   LAB_0010caa5:lVar48 = 0;
   *(undefined8*)local_a0[2] = 0;
   puVar40 = *(undefined8**)( this + 0x20 );
   if (puVar40 != (undefined8*)0x0) goto LAB_0010c66d;
   LAB_0010cac1:*(undefined1(**) [16])( this + 0x18 ) = local_a0;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar48 = local_58[0];
   uVar39 = local_68._0_8_;
   uVar47 = local_68._8_8_;
   local_48 = 0;
   local_a0 = (undefined1(*) [16])operator_new(0x28, "");
   *(undefined8*)local_a0[1] = 0;
   *(undefined8*)*local_a0 = uVar39;
   *(undefined8*)( *local_a0 + 8 ) = uVar47;
   if (lVar48 == 0) goto LAB_0010caa5;
   CowData<char32_t>::_ref((CowData<char32_t>*)( local_a0 + 1 ), (CowData*)local_58);
   *(undefined8*)local_a0[2] = 0;
   LOCK();
   plVar1 = (long*)( lVar48 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_58[0] + -0x10 ), false);
   }

   puVar40 = *(undefined8**)( this + 0x20 );
   lVar48 = local_70;
   if (puVar40 == (undefined8*)0x0) goto LAB_0010cac1;
   LAB_0010c66d:*puVar40 = local_a0;
   *(undefined8**)( *local_a0 + 8 ) = puVar40;
}
*(undefined1(**) [16])( this + 0x20 ) = local_a0;uVar36 = String::hash();lVar53 = *(long*)( this + 0x10 );uVar55 = 1;if (uVar36 != 0) {
   uVar55 = uVar36;
}
uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar38 = CONCAT44(0, uVar36);lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar7._8_8_ = 0;auVar7._0_8_ = (ulong)uVar55 * lVar43;auVar23._8_8_ = 0;auVar23._0_8_ = uVar38;lVar44 = SUB168(auVar7 * auVar23, 8);lVar52 = *(long*)( this + 8 );puVar46 = (uint*)( lVar53 + lVar44 * 4 );iVar42 = SUB164(auVar7 * auVar23, 8);uVar37 = *puVar46;pauVar57 = local_a0;if (uVar37 != 0) {
   uVar50 = 0;
   pauVar56 = local_a0;
   do {
      auVar8._8_8_ = 0;
      auVar8._0_8_ = (ulong)uVar37 * lVar43;
      auVar24._8_8_ = 0;
      auVar24._0_8_ = uVar38;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = ( ulong )(( uVar36 + iVar42 ) - SUB164(auVar8 * auVar24, 8)) * lVar43;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar38;
      uVar49 = SUB164(auVar9 * auVar25, 8);
      pauVar57 = pauVar56;
      if (uVar49 < uVar50) {
         *puVar46 = uVar55;
         puVar40 = (undefined8*)( lVar52 + lVar44 * 8 );
         pauVar57 = (undefined1(*) [16])*puVar40;
         *puVar40 = pauVar56;
         uVar50 = uVar49;
         uVar55 = uVar37;
      }

      uVar50 = uVar50 + 1;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(iVar42 + 1) * lVar43;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      lVar44 = SUB168(auVar10 * auVar26, 8);
      puVar46 = (uint*)( lVar53 + lVar44 * 4 );
      iVar42 = SUB164(auVar10 * auVar26, 8);
      uVar37 = *puVar46;
      pauVar56 = pauVar57;
   }
 while ( uVar37 != 0 );
}
*(undefined1(**) [16])( lVar52 + lVar44 * 8 ) = pauVar57;*puVar46 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;if (lVar48 != 0) {
   LOCK();
   plVar1 = (long*)( lVar48 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      Memory::free_static((void*)( local_70 + -0x10 ), false);
   }

}
LAB_0010c7a0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_a0[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* RBSet<Ref<GDScriptParserRef>, Comparator<Ref<GDScriptParserRef> >, DefaultAllocator>::clear() */void RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>::clear(RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator> *this) {
   Element *pEVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   Element *pEVar5;
   Element *pEVar6;
   void *pvVar7;
   Element *pEVar8;
   Element *pEVar9;
   Element *pEVar10;
   pvVar7 = *(void**)this;
   if (pvVar7 != (void*)0x0) {
      pEVar1 = *(Element**)( (long)pvVar7 + 0x10 );
      pEVar5 = *(Element**)( this + 8 );
      if (pEVar1 != pEVar5) {
         pEVar6 = *(Element**)( pEVar1 + 0x10 );
         if (pEVar5 != pEVar6) {
            pEVar10 = *(Element**)( pEVar6 + 0x10 );
            if (pEVar5 != pEVar10) {
               pEVar9 = *(Element**)( pEVar10 + 0x10 );
               if (pEVar5 != pEVar9) {
                  pEVar8 = *(Element**)( pEVar9 + 0x10 );
                  if (pEVar5 != pEVar8) {
                     _cleanup_tree(this, pEVar8);
                     pEVar8 = *(Element**)( this + 8 );
                  }

                  if (pEVar8 != *(Element**)( pEVar9 + 8 )) {
                     _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
                  }

                  if (*(long*)( pEVar9 + 0x30 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( pEVar9 + 0x30 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  Memory::free_static(pEVar9, false);
                  pEVar9 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar10 + 8 ) != pEVar9) {
                  _cleanup_tree(this, *(Element**)( pEVar10 + 8 ));
               }

               if (*(long*)( pEVar10 + 0x30 ) != 0) {
                  cVar4 = RefCounted::unreference();
                  if (cVar4 != '\0') {
                     pOVar3 = *(Object**)( pEVar10 + 0x30 );
                     cVar4 = predelete_handler(pOVar3);
                     if (cVar4 != '\0') {
                        ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                        Memory::free_static(pOVar3, false);
                     }

                  }

               }

               Memory::free_static(pEVar10, false);
               pEVar10 = *(Element**)( this + 8 );
            }

            pEVar5 = *(Element**)( pEVar6 + 8 );
            if (pEVar5 != pEVar10) {
               if (*(Element**)( pEVar5 + 0x10 ) != pEVar10) {
                  _cleanup_tree(this, *(Element**)( pEVar5 + 0x10 ));
                  pEVar10 = *(Element**)( this + 8 );
               }

               pEVar9 = *(Element**)( pEVar5 + 8 );
               if (pEVar10 != pEVar9) {
                  pEVar8 = *(Element**)( pEVar9 + 0x10 );
                  if (pEVar10 != pEVar8) {
                     _cleanup_tree(this, pEVar8);
                     pEVar8 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar9 + 8 ) != pEVar8) {
                     _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
                  }

                  if (*(long*)( pEVar9 + 0x30 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( pEVar9 + 0x30 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  Memory::free_static(pEVar9, false);
               }

               if (*(long*)( pEVar5 + 0x30 ) != 0) {
                  cVar4 = RefCounted::unreference();
                  if (cVar4 != '\0') {
                     pOVar3 = *(Object**)( pEVar5 + 0x30 );
                     cVar4 = predelete_handler(pOVar3);
                     if (cVar4 != '\0') {
                        ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                        Memory::free_static(pOVar3, false);
                     }

                  }

               }

               Memory::free_static(pEVar5, false);
            }

            if (*(long*)( pEVar6 + 0x30 ) != 0) {
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  pOVar3 = *(Object**)( pEVar6 + 0x30 );
                  cVar4 = predelete_handler(pOVar3);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

            }

            Memory::free_static(pEVar6, false);
            pEVar6 = *(Element**)( this + 8 );
         }

         pEVar5 = *(Element**)( pEVar1 + 8 );
         if (pEVar5 != pEVar6) {
            pEVar10 = *(Element**)( pEVar5 + 0x10 );
            if (pEVar10 != pEVar6) {
               pEVar9 = *(Element**)( pEVar10 + 0x10 );
               if (pEVar9 != pEVar6) {
                  pEVar8 = *(Element**)( pEVar9 + 0x10 );
                  if (pEVar6 != pEVar8) {
                     _cleanup_tree(this, pEVar8);
                     pEVar8 = *(Element**)( this + 8 );
                  }

                  if (*(Element**)( pEVar9 + 8 ) != pEVar8) {
                     _cleanup_tree(this, *(Element**)( pEVar9 + 8 ));
                  }

                  if (*(long*)( pEVar9 + 0x30 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( pEVar9 + 0x30 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  Memory::free_static(pEVar9, false);
                  pEVar6 = *(Element**)( this + 8 );
               }

               if (pEVar6 != *(Element**)( pEVar10 + 8 )) {
                  _cleanup_tree(this, *(Element**)( pEVar10 + 8 ));
               }

               if (*(long*)( pEVar10 + 0x30 ) != 0) {
                  cVar4 = RefCounted::unreference();
                  if (cVar4 != '\0') {
                     pOVar3 = *(Object**)( pEVar10 + 0x30 );
                     cVar4 = predelete_handler(pOVar3);
                     if (cVar4 != '\0') {
                        ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                        Memory::free_static(pOVar3, false);
                     }

                  }

               }

               Memory::free_static(pEVar10, false);
               pEVar6 = *(Element**)( this + 8 );
            }

            pEVar10 = *(Element**)( pEVar5 + 8 );
            if (pEVar6 != pEVar10) {
               pEVar9 = *(Element**)( pEVar10 + 0x10 );
               if (pEVar6 != pEVar9) {
                  _cleanup_tree(this, pEVar9);
                  pEVar9 = *(Element**)( this + 8 );
               }

               if (*(Element**)( pEVar10 + 8 ) != pEVar9) {
                  _cleanup_tree(this, *(Element**)( pEVar10 + 8 ));
               }

               if (*(long*)( pEVar10 + 0x30 ) != 0) {
                  cVar4 = RefCounted::unreference();
                  if (cVar4 != '\0') {
                     pOVar3 = *(Object**)( pEVar10 + 0x30 );
                     cVar4 = predelete_handler(pOVar3);
                     if (cVar4 != '\0') {
                        ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                        Memory::free_static(pOVar3, false);
                     }

                  }

               }

               Memory::free_static(pEVar10, false);
            }

            if (*(long*)( pEVar5 + 0x30 ) != 0) {
               cVar4 = RefCounted::unreference();
               if (cVar4 != '\0') {
                  pOVar3 = *(Object**)( pEVar5 + 0x30 );
                  cVar4 = predelete_handler(pOVar3);
                  if (cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                     Memory::free_static(pOVar3, false);
                  }

               }

            }

            Memory::free_static(pEVar5, false);
         }

         if (*(long*)( pEVar1 + 0x30 ) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               pOVar3 = *(Object**)( pEVar1 + 0x30 );
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         Memory::free_static(pEVar1, false);
         pvVar7 = *(void**)this;
         pEVar5 = *(Element**)( this + 8 );
      }

      lVar2 = *(long*)( (long)pvVar7 + 0x30 );
      *(Element**)( (long)pvVar7 + 0x10 ) = pEVar5;
      *(undefined4*)( this + 0x10 ) = 0;
      if (lVar2 != 0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            pOVar3 = *(Object**)( (long)pvVar7 + 0x30 );
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

      Memory::free_static(pvVar7, false);
      *(undefined8*)this = 0;
   }

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
/* RBSet<Ref<GDScriptParserRef>, Comparator<Ref<GDScriptParserRef> >,
   DefaultAllocator>::_insert_rb_fix(RBSet<Ref<GDScriptParserRef>, Comparator<Ref<GDScriptParserRef>
   >, DefaultAllocator>::Element*) */void RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator>::_insert_rb_fix(RBSet<Ref<GDScriptParserRef>,Comparator<Ref<GDScriptParserRef>>,DefaultAllocator> *this, Element *param_1) {
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
         if (*(int*)pEVar6 == 0) goto LAB_0010d26d;
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
            if (pEVar5 == pEVar6) goto LAB_0010d390;
            LAB_0010d216:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_0010d216;
            LAB_0010d390:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
         LAB_0010d253:iVar1 = *(int*)pEVar7;
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
               LAB_0010d482:*(Element**)( pEVar7 + 0x10 ) = param_1;
            }
 else {
               *(Element**)( lVar3 + 0x18 ) = pEVar8;
               pEVar7 = *(Element**)( pEVar8 + 0x18 );
               *(Element**)( param_1 + 0x18 ) = pEVar7;
               if (pEVar8 == *(Element**)( pEVar7 + 0x10 )) goto LAB_0010d482;
               *(Element**)( pEVar7 + 8 ) = param_1;
            }

            *(Element**)( param_1 + 0x10 ) = pEVar8;
            *(Element**)( pEVar8 + 0x18 ) = param_1;
            pEVar6 = *(Element**)( this + 8 );
            *(int*)param_1 = 1;
            pEVar7 = param_1;
            if (pEVar5 == pEVar6) goto LAB_0010d450;
            LAB_0010d2e0:*(int*)pEVar5 = 0;
         }
 else {
            pEVar6 = *(Element**)( this + 8 );
            *(int*)pEVar8 = 1;
            pEVar8 = param_1;
            if (pEVar5 != pEVar6) goto LAB_0010d2e0;
            LAB_0010d450:_err_print_error("_set_color", "./core/templates/rb_set.h", 0xd0, "Condition \"p_node == _data._nil && p_color == RED\" is true.", 0, 0);
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
         goto LAB_0010d253;
      }

      LAB_0010d26d:pEVar7 = *(Element**)( this + 8 );
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
/* CowData<ObjectID>::_realloc(long) */undefined8 CowData<ObjectID>::_realloc(CowData<ObjectID> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<ObjectID>::resize<false>(long) */undefined8 CowData<ObjectID>::resize<false>(CowData<ObjectID> *this, long param_1) {
   long *plVar1;
   code *pcVar2;
   long lVar3;
   ulong uVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
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
      lVar8 = 0;
      lVar3 = 0;
   }
 else {
      lVar8 = *(long*)( lVar3 + -8 );
      if (param_1 == lVar8) {
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
      lVar3 = lVar8 * 8;
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
      LAB_0010d7b0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar4 = param_1 * 8 - 1;
   uVar4 = uVar4 >> 1 | uVar4;
   uVar4 = uVar4 | uVar4 >> 2;
   uVar4 = uVar4 | uVar4 >> 4;
   uVar4 = uVar4 | uVar4 >> 8;
   uVar4 = uVar4 | uVar4 >> 0x10;
   uVar4 = uVar4 | uVar4 >> 0x20;
   lVar7 = uVar4 + 1;
   if (lVar7 == 0) goto LAB_0010d7b0;
   if (param_1 <= lVar8) {
      if (( lVar7 != lVar3 ) && ( uVar6 = _realloc(this, lVar7) ),(int)uVar6 != 0) {
         return uVar6;
      }

      if (*(long*)this != 0) {
         *(long*)( *(long*)this + -8 ) = param_1;
         return 0;
      }

      _DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   if (lVar7 == lVar3) {
      LAB_0010d71c:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar3 = puVar9[-1];
      if (param_1 <= lVar3) goto LAB_0010d6b1;
   }
 else {
      if (lVar8 != 0) {
         uVar6 = _realloc(this, lVar7);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_0010d71c;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar4 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar3 = 0;
   }

   memset(puVar9 + lVar3, 0, ( param_1 - lVar3 ) * 8);
   LAB_0010d6b1:puVar9[-1] = param_1;
   return 0;
}
/* GDScriptParserRef::get_status() const */void GDScriptParserRef::_GLOBAL__sub_I_get_status(void) {
   GDScriptCache::mutex._32_8_ = 0;
   GDScriptCache::mutex._0_16_ = (undefined1[16])0x0;
   GDScriptCache::mutex._16_16_ = (undefined1[16])0x0;
   __cxa_atexit(SafeBinaryMutex<2>::~SafeBinaryMutex, GDScriptCache::mutex, &__dso_handle);
   return;
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* SafeBinaryMutex<2>::TLSData::~TLSData() */void SafeBinaryMutex<2>::TLSData::~TLSData(TLSData *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* SafeBinaryMutex<2>::~SafeBinaryMutex() */void SafeBinaryMutex<2>::~SafeBinaryMutex(SafeBinaryMutex<2> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


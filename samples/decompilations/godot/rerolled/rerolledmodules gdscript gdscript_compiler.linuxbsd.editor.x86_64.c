/* StringName::TEMPNAMEPLACEHOLDERVALUE(StringName&&) [clone .part.0] */void StringName::operator =(StringName *this, StringName *param_1) {
   StringName::unref();
   *(undefined8*)this = *(undefined8*)param_1;
   *(undefined8*)param_1 = 0;
   return;
}
/* void Ref<Resource>::TEMPNAMEPLACEHOLDERVALUE(Ref<GDScript> const&) [clone .isra.0] */void Ref<Resource>::operator =(Ref<Resource> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   Object *pOVar3;
   pOVar1 = *(Object**)this;
   if (param_1 == (Ref*)0x0) {
      if (pOVar1 == (Object*)0x0) {
         return;
      }

      *(undefined8*)this = 0;
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Resource::typeinfo, 0);
      if (pOVar3 == pOVar1) {
         return;
      }

      *(Object**)this = pOVar3;
      if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = cVar2 == '\0' )) {
         *(undefined8*)this = 0;
      }

      if (pOVar1 == (Object*)0x0) {
         return;
      }

   }

   cVar2 = RefCounted::unreference();
   if (( cVar2 != '\0' ) && ( cVar2 = cVar2 != '\0' )) {
      ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
      Memory::free_static(pOVar1, false);
      return;
   }

   return;
}
/* CowData<int>::_ref(CowData<int> const&) [clone .part.0] */void CowData<int>::_ref(CowData<int> *this, CowData *param_1) {
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
/* Ref<GDScript>::TEMPNAMEPLACEHOLDERVALUE(Ref<GDScript> const&) [clone .isra.0] */void Ref<GDScript>::operator =(Ref<GDScript> *this, Ref *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (pOVar1 != (Object*)param_1) {
      *(Ref**)this = param_1;
      if (param_1 != (Ref*)0x0) {
         cVar2 = RefCounted::reference();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* HashSet<GDScript*, HashMapHasherDefault, HashMapComparatorDefault<GDScript*> >::erase(GDScript*
   const&) [clone .isra.0] */void HashSet<GDScript*,HashMapHasherDefault,HashMapComparatorDefault<GDScript*>>::erase(HashSet<GDScript*,HashMapHasherDefault,HashMapComparatorDefault<GDScript*>> *this, GDScript **param_1) {
   uint *puVar1;
   undefined4 *puVar2;
   undefined4 *puVar3;
   uint *puVar4;
   undefined4 uVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   long lVar10;
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
   uint uVar31;
   ulong uVar32;
   uint uVar33;
   uint *puVar34;
   int iVar35;
   uint uVar36;
   long lVar37;
   ulong uVar38;
   uint *puVar39;
   ulong uVar40;
   uint *puVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   lVar6 = *(long*)this;
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x24 ) != 0 )) {
      lVar7 = *(long*)( this + 0x18 );
      uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 );
      uVar42 = CONCAT44(0, uVar31);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar32 = (long)*param_1 * 0x3ffff - 1;
      uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
      uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
      uVar32 = uVar32 >> 0x16 ^ uVar32;
      uVar40 = uVar32 & 0xffffffff;
      if ((int)uVar32 == 0) {
         uVar40 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar40 * lVar8;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar42;
      lVar37 = SUB168(auVar11 * auVar21, 8);
      uVar44 = *(uint*)( lVar7 + lVar37 * 4 );
      iVar35 = SUB164(auVar11 * auVar21, 8);
      if (uVar44 != 0) {
         uVar33 = 0;
         do {
            if ((uint)uVar40 == uVar44) {
               lVar9 = *(long*)( this + 8 );
               uVar44 = *(uint*)( lVar9 + lVar37 * 4 );
               uVar32 = (ulong)uVar44;
               if (*param_1 == *(GDScript**)( lVar6 + uVar32 * 8 )) {
                  lVar10 = *(long*)( this + 0x10 );
                  puVar1 = (uint*)( lVar10 + uVar32 * 4 );
                  uVar33 = *puVar1;
                  uVar40 = (ulong)uVar33;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = ( ulong )(uVar33 + 1) * lVar8;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar42;
                  lVar37 = SUB168(auVar15 * auVar25, 8) * 4;
                  uVar36 = SUB164(auVar15 * auVar25, 8);
                  uVar43 = (ulong)uVar36;
                  puVar39 = (uint*)( lVar7 + lVar37 );
                  if (( *puVar39 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = ( ulong ) * puVar39 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar42,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar36 + uVar31 ) - SUB164(auVar16 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar42,SUB164(auVar17 * auVar27, 8) == 0) {
                     uVar43 = (ulong)uVar33;
                  }
 else {
                     while (true) {
                        puVar34 = (uint*)( lVar37 + lVar9 );
                        puVar4 = (uint*)( lVar9 + uVar40 * 4 );
                        puVar41 = (uint*)( uVar40 * 4 + lVar7 );
                        puVar2 = (undefined4*)( lVar10 + ( ulong ) * puVar34 * 4 );
                        puVar3 = (undefined4*)( lVar10 + ( ulong ) * puVar4 * 4 );
                        uVar5 = *puVar3;
                        *puVar3 = *puVar2;
                        *puVar2 = uVar5;
                        uVar33 = *puVar39;
                        *puVar39 = *puVar41;
                        *puVar41 = uVar33;
                        uVar33 = *puVar34;
                        *puVar34 = *puVar4;
                        *puVar4 = uVar33;
                        auVar20._8_8_ = 0;
                        auVar20._0_8_ = ( ulong )((int)uVar43 + 1) * lVar8;
                        auVar30._8_8_ = 0;
                        auVar30._0_8_ = uVar42;
                        uVar38 = SUB168(auVar20 * auVar30, 8);
                        lVar37 = uVar38 * 4;
                        puVar39 = (uint*)( lVar7 + lVar37 );
                        if (( *puVar39 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar39 * lVar8,auVar28._8_8_ = 0,auVar28._0_8_ = uVar42,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( SUB164(auVar20 * auVar30, 8) + uVar31 ) - SUB164(auVar18 * auVar28, 8)) * lVar8,auVar29._8_8_ = 0,auVar29._0_8_ = uVar42,SUB164(auVar19 * auVar29, 8) == 0) break;
                        uVar40 = uVar43;
                        uVar43 = uVar38 & 0xffffffff;
                     }
;
                  }

                  *(undefined4*)( lVar7 + uVar43 * 4 ) = 0;
                  uVar31 = *(int*)( this + 0x24 ) - 1;
                  *(uint*)( this + 0x24 ) = uVar31;
                  if (uVar31 <= uVar44) {
                     return;
                  }

                  uVar33 = *(uint*)( lVar10 + (ulong)uVar31 * 4 );
                  *(undefined8*)( lVar6 + uVar32 * 8 ) = *(undefined8*)( lVar6 + (ulong)uVar31 * 8 );
                  *puVar1 = uVar33;
                  *(uint*)( lVar9 + ( ulong ) * (uint*)( lVar10 + ( ulong ) * (uint*)( this + 0x24 ) * 4 ) * 4 ) = uVar44;
                  return;
               }

            }

            uVar33 = uVar33 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar8;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar42;
            lVar37 = SUB168(auVar12 * auVar22, 8);
            uVar44 = *(uint*)( lVar7 + lVar37 * 4 );
            iVar35 = SUB164(auVar12 * auVar22, 8);
         }
 while ( ( uVar44 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar44 * lVar8,auVar23._8_8_ = 0,auVar23._0_8_ = uVar42,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar13 * auVar23, 8)) * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar42,uVar33 <= SUB164(auVar14 * auVar24, 8) );
      }

   }

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
/* GDScriptCompiler::_is_class_member_property(GDScript*, StringName const&) */undefined8 GDScriptCompiler::_is_class_member_property(GDScriptCompiler *this, GDScript *param_1, StringName *param_2) {
   GDScript *pGVar1;
   undefined8 uVar2;
   long lVar3;
   if (param_1 != (GDScript*)0x0) {
      lVar3 = 0;
      do {
         pGVar1 = param_1 + 0x248;
         param_1 = *(GDScript**)( param_1 + 600 );
         if (*(long*)pGVar1 != 0) {
            lVar3 = *(long*)pGVar1;
         }

      }
 while ( param_1 != (GDScript*)0x0 );
      if (lVar3 != 0) {
         uVar2 = ClassDB::has_property((StringName*)( lVar3 + 0x180 ), param_2, false);
         return uVar2;
      }

   }

   _err_print_error("_is_class_member_property", "modules/gdscript/gdscript_compiler.cpp", 0x41, "Parameter \"nc\" is null.", 0, 0);
   return 0;
}
/* GDScriptCompiler::_is_class_member_property(GDScriptCompiler::CodeGen&, StringName const&) */undefined8 GDScriptCompiler::_is_class_member_property(GDScriptCompiler *this, CodeGen *param_1, StringName *param_2) {
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
   uint uVar19;
   undefined8 uVar20;
   int iVar21;
   long lVar22;
   uint uVar23;
   ulong uVar24;
   uint uVar25;
   if (( *(long*)( param_1 + 0x10 ) != 0 ) && ( *(char*)( *(long*)( param_1 + 0x10 ) + 0x180 ) != '\0' )) {
      return 0;
   }

   if (( *(long*)( param_1 + 0x30 ) != 0 ) && ( *(int*)( param_1 + 0x54 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x50 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x50 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar19 = StringName::get_empty_hash();
      }
 else {
         uVar19 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      uVar24 = CONCAT44(0, uVar1);
      if (uVar19 == 0) {
         uVar19 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar19 * lVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar24;
      lVar22 = SUB168(auVar3 * auVar11, 8);
      uVar23 = *(uint*)( *(long*)( param_1 + 0x38 ) + lVar22 * 4 );
      iVar21 = SUB164(auVar3 * auVar11, 8);
      if (uVar23 != 0) {
         uVar25 = 0;
         do {
            if (( uVar19 == uVar23 ) && ( *(long*)( *(long*)( *(long*)( param_1 + 0x30 ) + lVar22 * 8 ) + 0x10 ) == *(long*)param_2 )) {
               return 0;
            }

            uVar25 = uVar25 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar21 + 1) * lVar2;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar24;
            lVar22 = SUB168(auVar4 * auVar12, 8);
            uVar23 = *(uint*)( *(long*)( param_1 + 0x38 ) + lVar22 * 4 );
            iVar21 = SUB164(auVar4 * auVar12, 8);
         }
 while ( ( uVar23 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar23 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar24,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar21 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar24,uVar25 <= SUB164(auVar6 * auVar14, 8) );
      }

   }

   if (( *(long*)( param_1 + 0x60 ) != 0 ) && ( *(int*)( param_1 + 0x84 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x80 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x80 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar19 = StringName::get_empty_hash();
      }
 else {
         uVar19 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      uVar24 = CONCAT44(0, uVar1);
      if (uVar19 == 0) {
         uVar19 = 1;
      }

      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar19 * lVar2;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar24;
      lVar22 = SUB168(auVar7 * auVar15, 8);
      uVar23 = *(uint*)( *(long*)( param_1 + 0x68 ) + lVar22 * 4 );
      iVar21 = SUB164(auVar7 * auVar15, 8);
      if (uVar23 != 0) {
         uVar25 = 0;
         do {
            if (( uVar19 == uVar23 ) && ( *(long*)( *(long*)( *(long*)( param_1 + 0x60 ) + lVar22 * 8 ) + 0x10 ) == *(long*)param_2 )) {
               return 0;
            }

            uVar25 = uVar25 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = ( ulong )(iVar21 + 1) * lVar2;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar24;
            lVar22 = SUB168(auVar8 * auVar16, 8);
            uVar23 = *(uint*)( *(long*)( param_1 + 0x68 ) + lVar22 * 4 );
            iVar21 = SUB164(auVar8 * auVar16, 8);
         }
 while ( ( uVar23 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar23 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar24,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + iVar21 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar24,uVar25 <= SUB164(auVar10 * auVar18, 8) );
      }

   }

   uVar20 = _is_class_member_property(this, *(GDScript**)param_1, param_2);
   return uVar20;
}
/* GDScriptCompiler::_is_local_or_parameter(GDScriptCompiler::CodeGen&, StringName const&) */undefined8 GDScriptCompiler::_is_local_or_parameter(GDScriptCompiler *this, CodeGen *param_1, StringName *param_2) {
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
   uint uVar19;
   int iVar20;
   long lVar21;
   uint uVar22;
   ulong uVar23;
   uint uVar24;
   if (( *(long*)( param_1 + 0x30 ) != 0 ) && ( *(int*)( param_1 + 0x54 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x50 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x50 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar19 = StringName::get_empty_hash();
      }
 else {
         uVar19 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      uVar23 = CONCAT44(0, uVar1);
      if (uVar19 == 0) {
         uVar19 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar19 * lVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar23;
      lVar21 = SUB168(auVar3 * auVar11, 8);
      uVar22 = *(uint*)( *(long*)( param_1 + 0x38 ) + lVar21 * 4 );
      iVar20 = SUB164(auVar3 * auVar11, 8);
      if (uVar22 != 0) {
         uVar24 = 0;
         do {
            if (( uVar19 == uVar22 ) && ( *(long*)( *(long*)( *(long*)( param_1 + 0x30 ) + lVar21 * 8 ) + 0x10 ) == *(long*)param_2 )) {
               return 1;
            }

            uVar24 = uVar24 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar20 + 1) * lVar2;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar23;
            lVar21 = SUB168(auVar4 * auVar12, 8);
            uVar22 = *(uint*)( *(long*)( param_1 + 0x38 ) + lVar21 * 4 );
            iVar20 = SUB164(auVar4 * auVar12, 8);
         }
 while ( ( uVar22 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar22 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar23,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar20 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar23,uVar24 <= SUB164(auVar6 * auVar14, 8) );
      }

   }

   if (*(long*)( param_1 + 0x60 ) != 0) {
      if (*(int*)( param_1 + 0x84 ) == 0) {
         return 0;
      }

      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x80 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x80 ) * 8 );
      if (*(long*)param_2 == 0) {
         uVar19 = StringName::get_empty_hash();
      }
 else {
         uVar19 = *(uint*)( *(long*)param_2 + 0x20 );
      }

      uVar23 = CONCAT44(0, uVar1);
      if (uVar19 == 0) {
         uVar19 = 1;
      }

      auVar7._8_8_ = 0;
      auVar7._0_8_ = (ulong)uVar19 * lVar2;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar23;
      lVar21 = SUB168(auVar7 * auVar15, 8);
      uVar22 = *(uint*)( *(long*)( param_1 + 0x68 ) + lVar21 * 4 );
      iVar20 = SUB164(auVar7 * auVar15, 8);
      if (uVar22 != 0) {
         uVar24 = 0;
         do {
            if (( uVar19 == uVar22 ) && ( *(long*)( *(long*)( *(long*)( param_1 + 0x60 ) + lVar21 * 8 ) + 0x10 ) == *(long*)param_2 )) {
               return 1;
            }

            uVar24 = uVar24 + 1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = ( ulong )(iVar20 + 1) * lVar2;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar23;
            lVar21 = SUB168(auVar8 * auVar16, 8);
            uVar22 = *(uint*)( *(long*)( param_1 + 0x68 ) + lVar21 * 4 );
            iVar20 = SUB164(auVar8 * auVar16, 8);
         }
 while ( ( uVar22 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar22 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar23,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + iVar20 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar23,uVar24 <= SUB164(auVar10 * auVar18, 8) );
      }

   }

   return 0;
}
/* GDScriptCompiler::_set_error(String const&, GDScriptParser::Node const*) */void GDScriptCompiler::_set_error(GDScriptCompiler *this, String *param_1, Node *param_2) {
   long lVar1;
   lVar1 = *(long*)( this + 0x70 );
   if (( lVar1 == 0 ) || ( *(uint*)( lVar1 + -8 ) < 2 )) {
      if (lVar1 != *(long*)param_1) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x70 ), (CowData*)param_1);
      }

      if (param_2 == (Node*)0x0) {
         *(undefined8*)( this + 0x60 ) = 0;
         return;
      }

      *(ulong*)( this + 0x60 ) = CONCAT44(*(undefined4*)( param_2 + 0x1c ), *(undefined4*)( param_2 + 0xc ));
   }

   return;
}
/* GDScriptCompiler::_do_function_infos_match(GDScriptCompiler::FunctionLambdaInfo const&,
   GDScriptCompiler::FunctionLambdaInfo const*) */uint GDScriptCompiler::_do_function_infos_match(GDScriptCompiler *this, FunctionLambdaInfo *param_1, FunctionLambdaInfo *param_2) {
   int iVar1;
   if (( ( param_2 != (FunctionLambdaInfo*)0x0 ) && ( *(int*)( param_2 + 0x2c ) == *(int*)( param_1 + 0x2c ) ) ) && ( param_2[0x30] == param_1[0x30] )) {
      iVar1 = *(int*)( param_2 + 0x34 ) - *(int*)( param_2 + 0x38 );
      return ( CONCAT31(( int3 )((uint)iVar1 >> 8), *(int*)( param_1 + 0x34 ) - *(int*)( param_1 + 0x38 ) < iVar1) | CONCAT31(( int3 )((ulong)param_2 >> 8), *(int*)( param_2 + 0x34 ) < *(int*)( param_1 + 0x34 ) - *(int*)( param_1 + 0x38 )) ) ^ 1;
   }

   return 0;
}
/* GDScriptCompiler::get_error() const */void GDScriptCompiler::get_error(void) {
   long in_RSI;
   CowData<char32_t> *in_RDI;
   *(undefined8*)in_RDI = 0;
   if (*(long*)( in_RSI + 0x70 ) != 0) {
      CowData<char32_t>::_ref(in_RDI, (CowData*)( in_RSI + 0x70 ));
   }

   return;
}
/* GDScriptCompiler::get_error_line() const */undefined4 GDScriptCompiler::get_error_line(GDScriptCompiler *this) {
   return *(undefined4*)( this + 0x60 );
}
/* GDScriptCompiler::get_error_column() const */undefined4 GDScriptCompiler::get_error_column(GDScriptCompiler *this) {
   return *(undefined4*)( this + 100 );
}
/* GDScriptCompiler::GDScriptCompiler() */void GDScriptCompiler::GDScriptCompiler(GDScriptCompiler *this) {
   undefined8 uVar1;
   uVar1 = _LC9;
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined8*)( this + 0x28 ) = uVar1;
   *(undefined8*)( this + 0x50 ) = uVar1;
   *(undefined8*)( this + 0x60 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   this[0x80] = (GDScriptCompiler)0x0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x68 ) = (undefined1[16])0x0;
   return;
}
/* GDScriptCompiler::_get_function_ptr_replacements(HashMap<GDScriptFunction*, GDScriptFunction*,
   HashMapHasherDefault, HashMapComparatorDefault<GDScriptFunction*>,
   DefaultTypedAllocator<HashMapElement<GDScriptFunction*, GDScriptFunction*> > >&,
   GDScriptCompiler::FunctionLambdaInfo const&, GDScriptCompiler::FunctionLambdaInfo const*) */void GDScriptCompiler::_get_function_ptr_replacements(GDScriptCompiler *this, HashMap *param_1, FunctionLambdaInfo *param_2, FunctionLambdaInfo *param_3) {
   long lVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   ulong uVar10;
   FunctionLambdaInfo *pFVar11;
   int iVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   ulong uVar17;
   long in_FS_OFFSET;
   GDScriptFunction *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( param_1 + 8 ) != 0 ) && ( *(int*)( param_1 + 0x2c ) != 0 )) {
      uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x28 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x28 ) * 8 );
      uVar10 = *(long*)param_2 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar17 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar17 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar17 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar13 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( param_1 + 0x10 ) + lVar13 * 4 );
      iVar12 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar14 == (uint)uVar17 ) && ( *(long*)param_2 == *(long*)( *(long*)( *(long*)( param_1 + 8 ) + lVar13 * 8 ) + 0x10 ) )) {
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  _err_print_error("_get_function_ptr_replacements", "modules/gdscript/gdscript_compiler.cpp", 0xc89, "Condition \"r_replacements.has(p_old_info.function)\" is true.", 0, 0);
                  return;
               }

               goto LAB_00100d2e;
            }

            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar12 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar13 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( param_1 + 0x10 ) + lVar13 * 4 );
            iVar12 = SUB164(auVar3 * auVar7, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar14 * lVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar15,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x28 ) * 4 ) + iVar12 ) - SUB164(auVar4 * auVar8, 8)) * lVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,uVar16 <= SUB164(auVar5 * auVar9, 8) );
      }

   }

   if (( param_3 != (FunctionLambdaInfo*)0x0 ) && ( ( *(int*)( param_3 + 0x2c ) == *(int*)( param_2 + 0x2c ) && ( param_3[0x30] == param_2[0x30] ) ) )) {
      if (( *(int*)( param_3 + 0x34 ) - *(int*)( param_3 + 0x38 ) <= *(int*)( param_2 + 0x34 ) - *(int*)( param_2 + 0x38 ) ) && ( *(int*)( param_2 + 0x34 ) - *(int*)( param_2 + 0x38 ) <= *(int*)( param_3 + 0x34 ) )) {
         HashMap<GDScriptFunction*,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<GDScriptFunction*>,DefaultTypedAllocator<HashMapElement<GDScriptFunction*,GDScriptFunction*>>>::insert(&local_48, (GDScriptFunction**)param_1, SUB81(param_2, 0));
         pFVar11 = param_3 + 0x40;
         goto LAB_00100cba;
      }

   }

   HashMap<GDScriptFunction*,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<GDScriptFunction*>,DefaultTypedAllocator<HashMapElement<GDScriptFunction*,GDScriptFunction*>>>::insert(&local_48, (GDScriptFunction**)param_1, SUB81(param_2, 0));
   pFVar11 = (FunctionLambdaInfo*)0x0;
   LAB_00100cba:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _get_function_ptr_replacements(this, param_1, (Vector*)( param_2 + 0x40 ), (Vector*)pFVar11);
      return;
   }

   LAB_00100d2e:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* GDScriptCompiler::_get_function_ptr_replacements(HashMap<GDScriptFunction*, GDScriptFunction*,
   HashMapHasherDefault, HashMapComparatorDefault<GDScriptFunction*>,
   DefaultTypedAllocator<HashMapElement<GDScriptFunction*, GDScriptFunction*> > >&,
   Vector<GDScriptCompiler::FunctionLambdaInfo> const&, Vector<GDScriptCompiler::FunctionLambdaInfo>
   const*) */void GDScriptCompiler::_get_function_ptr_replacements(GDScriptCompiler *this, HashMap *param_1, Vector *param_2, Vector *param_3) {
   long lVar1;
   FunctionLambdaInfo *pFVar2;
   long lVar3;
   long lVar4;
   lVar3 = *(long*)( param_2 + 8 );
   if (lVar3 != 0) {
      lVar4 = 0;
      do {
         if (*(long*)( lVar3 + -8 ) <= lVar4) {
            return;
         }

         pFVar2 = (FunctionLambdaInfo*)0x0;
         lVar1 = lVar4 * 0x50;
         if (( param_3 != (Vector*)0x0 ) && ( pFVar2 = *(FunctionLambdaInfo**)( param_3 + 8 ) ),pFVar2 != (FunctionLambdaInfo*)0x0) {
            if (*(long*)( pFVar2 + -8 ) == *(long*)( lVar3 + -8 )) {
               pFVar2 = pFVar2 + lVar1;
            }
 else {
               pFVar2 = (FunctionLambdaInfo*)0x0;
            }

         }

         lVar4 = lVar4 + 1;
         _get_function_ptr_replacements(this, param_1, (FunctionLambdaInfo*)( lVar3 + lVar1 ), pFVar2);
         lVar3 = *(long*)( param_2 + 8 );
      }
 while ( lVar3 != 0 );
   }

   return;
}
/* GDScriptCompiler::_get_function_ptr_replacements(HashMap<GDScriptFunction*, GDScriptFunction*,
   HashMapHasherDefault, HashMapComparatorDefault<GDScriptFunction*>,
   DefaultTypedAllocator<HashMapElement<GDScriptFunction*, GDScriptFunction*> > >&,
   GDScriptCompiler::ScriptLambdaInfo const&, GDScriptCompiler::ScriptLambdaInfo const*) */void GDScriptCompiler::_get_function_ptr_replacements(GDScriptCompiler *this, HashMap *param_1, ScriptLambdaInfo *param_2, ScriptLambdaInfo *param_3) {
   uint uVar1;
   undefined8 *puVar2;
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
   Vector *pVVar21;
   FunctionLambdaInfo *pFVar22;
   ScriptLambdaInfo *pSVar23;
   uint uVar24;
   long lVar25;
   uint uVar26;
   uint uVar27;
   ulong uVar28;
   if (param_3 == (ScriptLambdaInfo*)0x0) {
      _get_function_ptr_replacements(this, param_1, (Vector*)param_2, (Vector*)0x0);
      _get_function_ptr_replacements(this, param_1, (Vector*)( param_2 + 0x10 ), (Vector*)0x0);
      pSVar23 = (ScriptLambdaInfo*)0x0;
   }
 else {
      _get_function_ptr_replacements(this, param_1, (Vector*)param_2, (Vector*)param_3);
      _get_function_ptr_replacements(this, param_1, (Vector*)( param_2 + 0x10 ), (Vector*)( param_3 + 0x10 ));
      pSVar23 = param_3 + 0x20;
   }

   _get_function_ptr_replacements(this, param_1, (Vector*)( param_2 + 0x20 ), (Vector*)pSVar23);
   for (puVar2 = *(undefined8**)( param_2 + 0x48 ); puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
      if (( ( param_3 != (ScriptLambdaInfo*)0x0 ) && ( *(long*)( param_3 + 0x38 ) != 0 ) ) && ( *(int*)( param_3 + 0x5c ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_3 + 0x58 ) * 4 );
         uVar28 = CONCAT44(0, uVar1);
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_3 + 0x58 ) * 8 );
         if (puVar2[2] == 0) {
            uVar20 = StringName::get_empty_hash();
         }
 else {
            uVar20 = *(uint*)( puVar2[2] + 0x20 );
         }

         if (uVar20 == 0) {
            uVar20 = 1;
         }

         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar20 * lVar3;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar28;
         lVar25 = SUB168(auVar4 * auVar12, 8);
         uVar26 = *(uint*)( *(long*)( param_3 + 0x40 ) + lVar25 * 4 );
         uVar24 = SUB164(auVar4 * auVar12, 8);
         if (uVar26 != 0) {
            uVar27 = 0;
            do {
               if (( uVar20 == uVar26 ) && ( *(long*)( *(long*)( *(long*)( param_3 + 0x38 ) + lVar25 * 8 ) + 0x10 ) == puVar2[2] )) {
                  pVVar21 = (Vector*)( *(long*)( *(long*)( param_3 + 0x38 ) + (ulong)uVar24 * 8 ) + 0x18 );
                  goto LAB_00100f49;
               }

               uVar27 = uVar27 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar24 + 1) * lVar3;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar28;
               lVar25 = SUB168(auVar5 * auVar13, 8);
               uVar26 = *(uint*)( *(long*)( param_3 + 0x40 ) + lVar25 * 4 );
               uVar24 = SUB164(auVar5 * auVar13, 8);
            }
 while ( ( uVar26 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar26 * lVar3,auVar14._8_8_ = 0,auVar14._0_8_ = uVar28,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + uVar24 ) - SUB164(auVar6 * auVar14, 8)) * lVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar28,uVar27 <= SUB164(auVar7 * auVar15, 8) );
         }

      }

      pVVar21 = (Vector*)0x0;
      LAB_00100f49:_get_function_ptr_replacements(this, param_1, (Vector*)( puVar2 + 3 ), pVVar21);
   }

   lVar3 = *(long*)( param_2 + 0x68 );
   for (lVar25 = 0; ( lVar3 != 0 && ( lVar25 < *(long*)( lVar3 + -8 ) ) ); lVar25 = lVar25 + 1) {
      pFVar22 = (FunctionLambdaInfo*)0x0;
      if (( param_3 != (ScriptLambdaInfo*)0x0 ) && ( pFVar22 = *(FunctionLambdaInfo**)( param_3 + 0x68 ) ),pFVar22 != (FunctionLambdaInfo*)0x0) {
         if (*(long*)( pFVar22 + -8 ) == *(long*)( lVar3 + -8 )) {
            pFVar22 = pFVar22 + lVar25 * 0x50;
         }
 else {
            pFVar22 = (FunctionLambdaInfo*)0x0;
         }

      }

      _get_function_ptr_replacements(this, param_1, (FunctionLambdaInfo*)( lVar3 + lVar25 * 0x50 ), pFVar22);
      lVar3 = *(long*)( param_2 + 0x68 );
   }

   puVar2 = *(undefined8**)( param_2 + 0x88 );
   do {
      if (puVar2 == (undefined8*)0x0) {
         return;
      }

      if (( ( param_3 != (ScriptLambdaInfo*)0x0 ) && ( *(long*)( param_3 + 0x78 ) != 0 ) ) && ( *(int*)( param_3 + 0x9c ) != 0 )) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_3 + 0x98 ) * 4 );
         uVar28 = CONCAT44(0, uVar1);
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_3 + 0x98 ) * 8 );
         if (puVar2[2] == 0) {
            uVar20 = StringName::get_empty_hash();
         }
 else {
            uVar20 = *(uint*)( puVar2[2] + 0x20 );
         }

         if (uVar20 == 0) {
            uVar20 = 1;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar20 * lVar3;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar28;
         lVar25 = SUB168(auVar8 * auVar16, 8);
         uVar26 = *(uint*)( *(long*)( param_3 + 0x80 ) + lVar25 * 4 );
         uVar24 = SUB164(auVar8 * auVar16, 8);
         if (uVar26 != 0) {
            uVar27 = 0;
            do {
               if (( uVar20 == uVar26 ) && ( *(long*)( *(long*)( *(long*)( param_3 + 0x78 ) + lVar25 * 8 ) + 0x10 ) == puVar2[2] )) {
                  pSVar23 = (ScriptLambdaInfo*)( *(long*)( *(long*)( param_3 + 0x78 ) + (ulong)uVar24 * 8 ) + 0x18 );
                  goto LAB_001010e9;
               }

               uVar27 = uVar27 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(uVar24 + 1) * lVar3;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar28;
               lVar25 = SUB168(auVar9 * auVar17, 8);
               uVar26 = *(uint*)( *(long*)( param_3 + 0x80 ) + lVar25 * 4 );
               uVar24 = SUB164(auVar9 * auVar17, 8);
            }
 while ( ( uVar26 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar26 * lVar3,auVar18._8_8_ = 0,auVar18._0_8_ = uVar28,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar1 + uVar24 ) - SUB164(auVar10 * auVar18, 8)) * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar28,uVar27 <= SUB164(auVar11 * auVar19, 8) );
         }

      }

      pSVar23 = (ScriptLambdaInfo*)0x0;
      LAB_001010e9:_get_function_ptr_replacements(this, param_1, (ScriptLambdaInfo*)( puVar2 + 3 ), pSVar23);
      puVar2 = (undefined8*)*puVar2;
   }
 while ( true );
}
/* CowData<Variant>::_ref(CowData<Variant> const&) [clone .part.0] */void CowData<Variant>::_ref(CowData<Variant> *this, CowData *param_1) {
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
/* MethodInfo::TEMPNAMEPLACEHOLDERVALUE(MethodInfo const&) [clone .isra.0] */void MethodInfo::operator =(MethodInfo *this, MethodInfo *param_1) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   undefined1(*pauVar5)[16];
   undefined4 *puVar6;
   undefined4 *puVar7;
   long *plVar8;
   if (*(long*)this != *(long*)param_1) {
      CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)param_1);
   }

   *(undefined4*)( this + 8 ) = *(undefined4*)( param_1 + 8 );
   if (*(long*)( this + 0x10 ) != *(long*)( param_1 + 0x10 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x10 ), (CowData*)( param_1 + 0x10 ));
   }

   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)( param_1 + 0x18 ));
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
   if (*(long*)( this + 0x28 ) != *(long*)( param_1 + 0x28 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x28 ), (CowData*)( param_1 + 0x28 ));
   }

   plVar8 = *(long**)( this + 0x40 );
   *(undefined4*)( this + 0x30 ) = *(undefined4*)( param_1 + 0x30 );
   *(undefined4*)( this + 0x38 ) = *(undefined4*)( param_1 + 0x38 );
   *(undefined4*)( this + 0x3c ) = *(undefined4*)( param_1 + 0x3c );
   if (plVar8 != (long*)0x0) {
      do {
         pvVar2 = (void*)*plVar8;
         if (pvVar2 == (void*)0x0) goto LAB_00101330;
         if (*(long**)( (long)pvVar2 + 0x40 ) == plVar8) {
            lVar4 = *(long*)( (long)pvVar2 + 0x30 );
            lVar3 = *(long*)( (long)pvVar2 + 0x38 );
            *plVar8 = lVar4;
            if (pvVar2 == (void*)plVar8[1]) {
               plVar8[1] = lVar3;
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
            *(int*)( plVar8 + 2 ) = (int)plVar8[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar8 = *(long**)( this + 0x40 );
      }
 while ( (int)plVar8[2] != 0 );
      Memory::free_static(plVar8, false);
      *(undefined8*)( this + 0x40 ) = 0;
   }

   plVar8 = (long*)0x0;
   LAB_00101330:if (( *(undefined8**)( param_1 + 0x40 ) != (undefined8*)0x0 ) && ( puVar7 = (undefined4*)**(undefined8**)( param_1 + 0x40 ) ),puVar7 != (undefined4*)0x0) {
      if (plVar8 == (long*)0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])( this + 0x40 ) = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            puVar6 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
            *(undefined8*)( puVar6 + 8 ) = 0;
            *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
            lVar4 = *(long*)( puVar7 + 2 );
            *puVar6 = 0;
            puVar6[6] = 0;
            puVar6[10] = 6;
            *(undefined8*)( puVar6 + 0x10 ) = 0;
            *(undefined1(*) [16])( puVar6 + 0xc ) = (undefined1[16])0x0;
            *puVar6 = *puVar7;
            if (lVar4 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 2 ), (CowData*)( puVar7 + 2 ));
            }

            StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)( puVar7 + 4 ));
            puVar6[6] = puVar7[6];
            if (*(long*)( puVar6 + 8 ) != *(long*)( puVar7 + 8 )) {
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 8 ), (CowData*)( puVar7 + 8 ));
            }

            puVar6[10] = puVar7[10];
            plVar8 = *(long**)( this + 0x40 );
            lVar4 = plVar8[1];
            *(undefined8*)( puVar6 + 0xc ) = 0;
            *(long**)( puVar6 + 0x10 ) = plVar8;
            *(long*)( puVar6 + 0xe ) = lVar4;
            if (lVar4 != 0) {
               *(undefined4**)( lVar4 + 0x30 ) = puVar6;
            }

            plVar8[1] = (long)puVar6;
            if (*plVar8 == 0) break;
            puVar7 = *(undefined4**)( puVar7 + 0xc );
            *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
            if (puVar7 == (undefined4*)0x0) goto LAB_0010145e;
         }
;
         puVar7 = *(undefined4**)( puVar7 + 0xc );
         *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
         *plVar8 = (long)puVar6;
      }
 while ( puVar7 != (undefined4*)0x0 );
   }

   LAB_0010145e:if (*(long*)( this + 0x50 ) != *(long*)( param_1 + 0x50 )) {
      CowData<Variant>::_ref((CowData<Variant>*)( this + 0x50 ), (CowData*)( param_1 + 0x50 ));
   }

   *(undefined4*)( this + 0x58 ) = *(undefined4*)( param_1 + 0x58 );
   if (*(long*)( this + 0x68 ) != *(long*)( param_1 + 0x68 )) {
      CowData<int>::_ref((CowData<int>*)( this + 0x68 ), (CowData*)( param_1 + 0x68 ));
      return;
   }

   return;
}
/* CowData<Variant>::_copy_on_write() [clone .isra.0] */void CowData<Variant>::_copy_on_write(CowData<Variant> *this) {
   Variant *this_00;
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   Variant *pVVar5;
   ulong uVar6;
   long lVar7;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar6 = 0x10;
   if (lVar1 * 0x18 != 0) {
      uVar6 = lVar1 * 0x18 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar3 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar4 = 0;
   lVar7 = 0;
   *puVar3 = 1;
   puVar3[1] = lVar1;
   if (lVar1 != 0) {
      do {
         this_00 = (Variant*)( (long)( puVar3 + 2 ) + lVar4 );
         lVar7 = lVar7 + 1;
         pVVar5 = (Variant*)( *(long*)this + lVar4 );
         lVar4 = lVar4 + 0x18;
         Variant::Variant(this_00, pVVar5);
      }
 while ( lVar1 != lVar7 );
   }

   _unref(this);
   *(undefined8**)this = puVar3 + 2;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Variant>::resize<false>(long) [clone .isra.0] */void CowData<Variant>::resize<false>(CowData<Variant> *this, long param_1) {
   code *pcVar1;
   int iVar2;
   undefined8 *puVar3;
   long lVar4;
   undefined8 *puVar5;
   char *pcVar6;
   undefined4 *puVar7;
   undefined8 uVar8;
   long lVar9;
   ulong uVar10;
   long lVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return;
      }

      _copy_on_write(this);
      lVar4 = 0;
      lVar9 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar4) {
         return;
      }

      if (param_1 == 0) {
         _unref(this);
         return;
      }

      _copy_on_write(this);
      lVar9 = lVar4 * 0x18;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 != 0) {
      uVar10 = param_1 * 0x18 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = uVar10 | uVar10 >> 0x20;
      lVar11 = uVar10 + 1;
      if (lVar11 != 0) {
         if (param_1 <= lVar4) {
            puVar5 = *(undefined8**)this;
            uVar10 = param_1;
            while (true) {
               if (puVar5 == (undefined8*)0x0) {
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               if ((ulong)puVar5[-1] <= uVar10) break;
               if (Variant::needs_deinit[*(int*)( puVar5 + uVar10 * 3 )] != '\0') {
                  Variant::_clear_internal();
                  puVar5 = *(undefined8**)this;
               }

               uVar10 = uVar10 + 1;
            }
;
            if (lVar11 != lVar9) {
               iVar2 = _realloc(this, lVar11);
               if (iVar2 != 0) {
                  return;
               }

               puVar5 = *(undefined8**)this;
               if (puVar5 == (undefined8*)0x0) {
                  FUN_0011eee2();
                  return;
               }

            }

            goto LAB_00101b6f;
         }

         if (lVar11 == lVar9) {
            LAB_00101c1b:puVar5 = *(undefined8**)this;
            if (puVar5 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar4 = puVar5[-1];
            if (param_1 <= lVar4) goto LAB_00101b6f;
         }
 else {
            if (lVar4 != 0) {
               iVar2 = _realloc(this, lVar11);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_00101c1b;
            }

            puVar3 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
            if (puVar3 == (undefined8*)0x0) {
               uVar8 = 0x171;
               pcVar6 = "Parameter \"mem_new\" is null.";
               goto LAB_00101ca2;
            }

            puVar5 = puVar3 + 2;
            *puVar3 = 1;
            puVar3[1] = 0;
            *(undefined8**)this = puVar5;
            lVar4 = 0;
         }

         lVar9 = lVar4 + 1;
         *(undefined4*)( puVar5 + lVar4 * 3 ) = 0;
         *(undefined1(*) [16])( puVar5 + lVar4 * 3 + 1 ) = (undefined1[16])0x0;
         if (lVar9 < param_1) {
            lVar4 = lVar9 * 0x18;
            do {
               lVar9 = lVar9 + 1;
               puVar7 = (undefined4*)( *(long*)this + lVar4 );
               lVar4 = lVar4 + 0x18;
               *puVar7 = 0;
               *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
            }
 while ( param_1 != lVar9 );
         }

         puVar5 = *(undefined8**)this;
         if (puVar5 == (undefined8*)0x0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         LAB_00101b6f:puVar5[-1] = param_1;
         return;
      }

   }

   uVar8 = 0x16a;
   pcVar6 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_00101ca2:_err_print_error("resize", "./core/templates/cowdata.h", uVar8, pcVar6, 0, 0);
   return;
}
/* CowData<GDScriptDataType>::_ref(CowData<GDScriptDataType> const&) [clone .part.0] */void CowData<GDScriptDataType>::_ref(CowData<GDScriptDataType> *this, CowData *param_1) {
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
/* GDScriptCompiler::CodeGen::add_temporary(GDScriptDataType const&) [clone .isra.0] */GDScriptDataType *GDScriptCompiler::CodeGen::add_temporary(GDScriptDataType *param_1) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   undefined4 uVar4;
   long in_RDX;
   long *in_RSI;
   uVar4 = ( **(code**)( *in_RSI + 0x28 ) )();
   param_1[0x1c] = (GDScriptDataType)0x0;
   *(undefined4*)( param_1 + 0x20 ) = 0;
   *(undefined1(*) [16])( param_1 + 0x28 ) = (undefined1[16])0x0;
   *(undefined4*)( param_1 + 0x18 ) = 0;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined8*)( param_1 + 0x38 ) = 0;
   *(undefined4*)param_1 = 6;
   *(undefined4*)( param_1 + 4 ) = uVar4;
   *(undefined4*)( param_1 + 0x18 ) = *(undefined4*)( in_RDX + 0x10 );
   param_1[0x1c] = *(GDScriptDataType*)( in_RDX + 0x14 );
   *(undefined4*)( param_1 + 0x20 ) = *(undefined4*)( in_RDX + 0x18 );
   StringName::operator =((StringName*)( param_1 + 0x28 ), (StringName*)( in_RDX + 0x20 ));
   pOVar1 = *(Object**)( param_1 + 0x38 );
   *(undefined8*)( param_1 + 0x30 ) = *(undefined8*)( in_RDX + 0x28 );
   pOVar2 = *(Object**)( in_RDX + 0x30 );
   if (pOVar2 != pOVar1) {
      *(Object**)( param_1 + 0x38 ) = pOVar2;
      if (pOVar2 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( param_1 + 0x38 ) = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar1);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   if (*(long*)( param_1 + 0x10 ) != *(long*)( in_RDX + 8 )) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( param_1 + 0x10 ), (CowData*)( in_RDX + 8 ));
   }

   return param_1;
}
/* CowData<GDScriptDataType>::_copy_on_write() [clone .isra.0] */void CowData<GDScriptDataType>::_copy_on_write(CowData<GDScriptDataType> *this) {
   long lVar1;
   Object *pOVar2;
   Object *pOVar3;
   code *pcVar4;
   long lVar5;
   char cVar6;
   undefined8 *puVar7;
   CowData<GDScriptDataType> *this_00;
   ulong uVar8;
   long lVar9;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar8 = 0x10;
   if (lVar1 * 0x38 != 0) {
      uVar8 = lVar1 * 0x38 - 1;
      uVar8 = uVar8 | uVar8 >> 1;
      uVar8 = uVar8 | uVar8 >> 2;
      uVar8 = uVar8 | uVar8 >> 4;
      uVar8 = uVar8 | uVar8 >> 8;
      uVar8 = uVar8 | uVar8 >> 0x10;
      uVar8 = ( uVar8 | uVar8 >> 0x20 ) + 0x11;
   }

   puVar7 = (undefined8*)Memory::alloc_static(uVar8, false);
   if (puVar7 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   this_00 = (CowData<GDScriptDataType>*)( puVar7 + 3 );
   lVar9 = 0;
   *puVar7 = 1;
   puVar7[1] = lVar1;
   if (lVar1 != 0) {
      do if (*(long*)this_00 != *(long*)( this_00 + lVar5 + 8 )) this_00 = this_00 + 0x38; while ( lVar1 != lVar9 );
   }

   _unref(this);
   *(undefined8**)this = puVar7 + 2;
   return;
}
/* List<GDScriptCompiler::_parse_expression(GDScriptCompiler::CodeGen&, Error&,
   GDScriptParser::ExpressionNode const*, bool, bool)::ChainInfo, DefaultAllocator>::~List() */undefined8 List<GDScriptCompiler::_parse_expression(GDScriptCompiler::CodeGen &, Error &, GDScriptParser::ExpressionNode_const *, bool, bool)::ChainInfo,DefaultAllocator>::~List(List<GDScriptCompiler::_parse_expression(GDScriptCompiler::CodeGen &, Error &, GDScriptParser::ExpressionNode_const *, bool, bool)::ChainInfo,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   undefined8 uVar6;
   long *plVar7;
   undefined8 uStack_28;
   plVar7 = *(long**)this;
   if (plVar7 == (long*)0x0) {
      return uStack_28;
   }

   do {
      pvVar1 = (void*)*plVar7;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar7[2] != 0) {
            uVar6 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return uVar6;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0xa0 ) == plVar7) {
         lVar5 = *(long*)( (long)pvVar1 + 0x90 );
         lVar2 = *(long*)( (long)pvVar1 + 0x98 );
         *plVar7 = lVar5;
         if (pvVar1 == (void*)plVar7[1]) {
            plVar7[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x90 ) = lVar5;
            lVar5 = *(long*)( (long)pvVar1 + 0x90 );
         }

         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x98 ) = lVar2;
         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x88 ) != 0 )) {
            StringName::unref();
         }

         if (*(long*)( (long)pvVar1 + 0x80 ) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               pOVar3 = *(Object**)( (long)pvVar1 + 0x80 );
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x70 ) != 0 )) {
            StringName::unref();
         }

         CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar1 + 0x58 ));
         if (*(long*)( (long)pvVar1 + 0x40 ) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               pOVar3 = *(Object**)( (long)pvVar1 + 0x40 );
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x30 ) != 0 )) {
            StringName::unref();
         }

         CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar1 + 0x18 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar7 = *(long**)this;
   }
 while ( (int)plVar7[2] != 0 );
   uVar6 = Memory::free_static(plVar7, false);
   return uVar6;
}
/* GDScriptCompiler::_clear_block_locals(GDScriptCompiler::CodeGen&,
   List<GDScriptCodeGenerator::Address, DefaultAllocator> const&) */void GDScriptCompiler::_clear_block_locals(GDScriptCompiler *this, CodeGen *param_1, List *param_2) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   GDScriptDataType *pGVar4;
   Object *pOVar5;
   char cVar6;
   GDScriptDataType GVar7;
   GDScriptDataType *pGVar8;
   GDScriptDataType *pGVar9;
   undefined1 *puVar10;
   long lVar11;
   GDScriptDataType GVar12;
   long lVar13;
   long in_FS_OFFSET;
   GDScriptDataType local_1a9;
   GDScriptDataType *local_1a8;
   GDScriptDataType *local_198;
   GDScriptDataType *local_190;
   undefined1 local_178[16];
   undefined1 local_168[16];
   undefined1 local_158[16];
   Object *local_148;
   GDScriptDataType local_138[8];
   CowData<GDScriptDataType> aCStack_130[8];
   undefined1 local_128[16];
   undefined1 local_118[16];
   Object *local_108;
   GDScriptDataType local_f8[16];
   undefined1 local_e8[16];
   undefined1 local_d8[16];
   undefined8 local_c8;
   GDScriptDataType local_b8[16];
   undefined1 local_a8[16];
   undefined1 local_98[16];
   undefined8 local_88;
   GDScriptDataType local_78[16];
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long**)param_2 == (long*)0x0) {
      LAB_001023c8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   lVar13 = **(long**)param_2;
   joined_r0x001022cb:if (lVar13 != 0) {
      LAB_00102302:lVar11 = lVar13 + 8;
      while (true) {
         GVar12 = *(GDScriptDataType*)( lVar11 + 0x14 );
         if (( GVar12 == (GDScriptDataType)0x0 ) || ( *(int*)( lVar11 + 0x10 ) != 1 )) goto LAB_001022e8;
         uVar1 = *(uint*)( lVar11 + 0x18 );
         if (uVar1 == 0x1b) break;
         if (uVar1 < 0x1c) {
            if (( uVar1 == 0 ) || ( uVar1 == 0x18 )) goto LAB_001022e8;
            goto LAB_001022f5;
         }

         if (uVar1 != 0x1c) goto LAB_001022f5;
         lVar11 = *(long*)( lVar11 + 8 );
         if (( lVar11 == 0 ) || ( *(long*)( lVar11 + -8 ) < 1 )) goto LAB_001022e8;
      }
;
      lVar2 = *(long*)( lVar11 + 8 );
      if (lVar2 != 0) {
         if (*(long*)( lVar2 + -8 ) < 1) {
            local_148 = (Object*)0x0;
            local_178 = (undefined1[16])0x0;
            local_168 = (undefined1[16])0x0;
            local_158 = (undefined1[16])0x0;
         }
 else {
            local_158 = (undefined1[16])0x0;
            local_148 = (Object*)0x0;
            local_178._8_8_ = 0;
            local_168._5_3_ = 0;
            local_168._0_5_ = *(uint5*)( lVar2 + 0x10 );
            local_168._8_4_ = *(undefined4*)( lVar2 + 0x18 );
            local_168._12_4_ = 0;
            StringName::operator =((StringName*)local_158, (StringName*)( lVar2 + 0x20 ));
            pOVar5 = local_148;
            pOVar3 = *(Object**)( lVar2 + 0x30 );
            local_158._8_8_ = *(undefined8*)( lVar2 + 0x28 );
            if (pOVar3 != local_148) {
               local_148 = pOVar3;
               if (( pOVar3 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                  local_148 = (Object*)0x0;
               }

               if (( ( pOVar5 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

         if (local_178._8_8_ == *(long*)( lVar2 + 8 )) {
            local_1a9 = local_168[4];
         }
 else {
            CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( local_178 + 8 ), (CowData*)( lVar2 + 8 ));
            local_1a9 = local_168[4];
         }

         puVar10 = local_178;
         while (true) {
            if (( local_1a9 == (GDScriptDataType)0x0 ) || ( *(int*)( puVar10 + 0x10 ) != 1 )) goto LAB_00102375;
            uVar1 = *(uint*)( puVar10 + 0x18 );
            if (uVar1 == 0x1b) break;
            if (uVar1 < 0x1c) {
               if (( uVar1 != 0 ) && ( uVar1 != 0x18 )) goto LAB_001024f4;
               goto LAB_00102375;
            }

            if (uVar1 != 0x1c) goto LAB_001024f4;
            puVar10 = *(undefined1**)( puVar10 + 8 );
            if (( puVar10 == (undefined1*)0x0 ) || ( *(long*)( puVar10 + -8 ) < 1 )) goto LAB_00102375;
            local_1a9 = *(GDScriptDataType*)( puVar10 + 0x14 );
         }
;
         pGVar9 = *(GDScriptDataType**)( puVar10 + 8 );
         if (pGVar9 != (GDScriptDataType*)0x0) {
            if (*(long*)( pGVar9 + -8 ) < 1) {
               local_108 = (Object*)0x0;
               _local_138 = (undefined1[16])0x0;
               local_128 = (undefined1[16])0x0;
               local_118 = (undefined1[16])0x0;
               goto LAB_00102608;
            }

            GDScriptDataType::GDScriptDataType(local_138, pGVar9);
            pGVar9 = local_138;
            GVar7 = local_128[4];
            goto LAB_00102685;
         }

      }

      goto LAB_00102375;
   }

   goto LAB_001022e8;
}
goto LAB_001023c8;LAB_00102685:if (( GVar7 == (GDScriptDataType)0x0 ) || ( *(int*)( pGVar9 + 0x10 ) != 1 )) goto LAB_00102608;uVar1 = *(uint*)( pGVar9 + 0x18 );if (uVar1 == 0x1b) {
   pGVar4 = *(GDScriptDataType**)( pGVar9 + 8 );
   if (pGVar4 != (GDScriptDataType*)0x0) {
      if (*(long*)( pGVar4 + -8 ) < 1) {
         local_c8 = 0;
         for (int i = 0; i < 16; i++) {
            local_f8[i] = (GDScriptDataType)0;
         }

         local_e8 = (undefined1[16])0x0;
         local_d8 = (undefined1[16])0x0;
         goto LAB_00102705;
      }

      pGVar8 = local_f8;
      GDScriptDataType::GDScriptDataType(pGVar8, pGVar4);
      GVar7 = local_e8[4];
      goto LAB_00102927;
   }

   goto LAB_00102608;
}
if (uVar1 < 0x1c) {
   if (( uVar1 != 0 ) && ( uVar1 != 0x18 )) goto LAB_001026c9;
   goto LAB_00102608;
}
if (uVar1 != 0x1c) goto LAB_001026c9;pGVar9 = *(GDScriptDataType**)( pGVar9 + 8 );if (( pGVar9 == (GDScriptDataType*)0x0 ) || ( *(long*)( pGVar9 + -8 ) < 1 )) goto LAB_00102608;GVar7 = pGVar9[0x14];goto LAB_00102685;LAB_00102927:if (( GVar7 == (GDScriptDataType)0x0 ) || ( *(int*)( pGVar8 + 0x10 ) != 1 )) goto LAB_00102705;uVar1 = *(uint*)( pGVar8 + 0x18 );if (uVar1 != 0x1b) {
   if (uVar1 < 0x1c) {
      if (( uVar1 != 0 ) && ( uVar1 != 0x18 )) goto LAB_00102969;
      goto LAB_00102705;
   }

   if (uVar1 != 0x1c) goto LAB_00102969;
   pGVar8 = *(GDScriptDataType**)( pGVar8 + 8 );
   if (( pGVar8 == (GDScriptDataType*)0x0 ) || ( *(long*)( pGVar8 + -8 ) < 1 )) goto LAB_00102705;
   GVar7 = pGVar8[0x14];
   goto LAB_00102927;
}
pGVar4 = *(GDScriptDataType**)( pGVar8 + 8 );if (pGVar4 == (GDScriptDataType*)0x0) goto LAB_00102705;if (*(long*)( pGVar4 + -8 ) < 1) {
   local_88 = 0;
   for (int i = 0; i < 16; i++) {
      local_b8[i] = (GDScriptDataType)0;
   }

   local_a8 = (undefined1[16])0x0;
   local_98 = (undefined1[16])0x0;
}
 else {
   GDScriptDataType::GDScriptDataType(local_b8, pGVar4);
}
local_190 = local_b8;cVar6 = GDScriptDataType::can_contain_object(local_190);if (cVar6 != '\0') goto LAB_00102baf;lVar2 = *(long*)( pGVar8 + 8 );if (( lVar2 == 0 ) || ( *(long*)( lVar2 + -8 ) < 2 )) {
   local_48 = 0;
   for (int i = 0; i < 16; i++) {
      local_78[i] = (GDScriptDataType)0;
   }

   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
}
 else {
   GDScriptDataType::GDScriptDataType(local_78, (GDScriptDataType*)( lVar2 + 0x38 ));
}
local_1a8 = local_78;cVar6 = GDScriptDataType::can_contain_object(local_1a8);GDScriptDataType::~GDScriptDataType(local_1a8);GDScriptDataType::~GDScriptDataType(local_190);if (cVar6 != '\0') goto LAB_00102705;LAB_00102969:local_1a8 = local_78;local_198 = local_f8;lVar2 = *(long*)( pGVar9 + 8 );if (( lVar2 == 0 ) || ( *(long*)( lVar2 + -8 ) < 2 )) {
   local_48 = 0;
   for (int i = 0; i < 16; i++) {
      local_78[i] = (GDScriptDataType)0;
   }

   local_68 = (undefined1[16])0x0;
   local_58 = (undefined1[16])0x0;
}
 else {
   GDScriptDataType::GDScriptDataType(local_1a8, (GDScriptDataType*)( lVar2 + 0x38 ));
}
cVar6 = GDScriptDataType::can_contain_object(local_1a8);GDScriptDataType::~GDScriptDataType(local_1a8);GDScriptDataType::~GDScriptDataType(local_198);if (cVar6 != '\0') goto LAB_00102608;LAB_001026c9:local_198 = local_f8;lVar2 = *(long*)( puVar10 + 8 );if (( lVar2 == 0 ) || ( *(long*)( lVar2 + -8 ) < 2 )) {
   local_c8 = 0;
   for (int i = 0; i < 16; i++) {
      local_f8[i] = (GDScriptDataType)0;
   }

   local_e8 = (undefined1[16])0x0;
   local_d8 = (undefined1[16])0x0;
}
 else {
   GDScriptDataType::GDScriptDataType(local_198, (GDScriptDataType*)( lVar2 + 0x38 ));
   pGVar9 = local_198;
   GVar7 = local_e8[4];
   while (true) {
      if (( GVar7 == (GDScriptDataType)0x0 ) || ( *(int*)( pGVar9 + 0x10 ) != 1 )) goto LAB_00102705;
      uVar1 = *(uint*)( pGVar9 + 0x18 );
      if (uVar1 == 0x1b) break;
      if (uVar1 < 0x1c) {
         if (( uVar1 != 0 ) && ( uVar1 != 0x18 )) {
            LAB_00102b0c:GDScriptDataType::~GDScriptDataType(local_198);
            GDScriptDataType::~GDScriptDataType(local_138);
            goto LAB_001024f4;
         }

         goto LAB_00102705;
      }

      if (uVar1 != 0x1c) goto LAB_00102b0c;
      pGVar9 = *(GDScriptDataType**)( pGVar9 + 8 );
      if (( pGVar9 == (GDScriptDataType*)0x0 ) || ( *(long*)( pGVar9 + -8 ) < 1 )) goto LAB_00102705;
      GVar7 = pGVar9[0x14];
   }
;
   pGVar4 = *(GDScriptDataType**)( pGVar9 + 8 );
   if (pGVar4 != (GDScriptDataType*)0x0) {
      if (*(long*)( pGVar4 + -8 ) < 1) {
         local_88 = 0;
         for (int i = 0; i < 16; i++) {
            local_b8[i] = (GDScriptDataType)0;
         }

         local_a8 = (undefined1[16])0x0;
         local_98 = (undefined1[16])0x0;
      }
 else {
         GDScriptDataType::GDScriptDataType(local_b8, pGVar4);
      }

      local_190 = local_b8;
      cVar6 = GDScriptDataType::can_contain_object(local_190);
      if (cVar6 != '\0') goto LAB_00102baf;
      lVar2 = *(long*)( pGVar9 + 8 );
      if (( lVar2 == 0 ) || ( *(long*)( lVar2 + -8 ) < 2 )) {
         local_48 = 0;
         for (int i = 0; i < 16; i++) {
            local_78[i] = (GDScriptDataType)0;
         }

         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
      }
 else {
         GDScriptDataType::GDScriptDataType(local_78, (GDScriptDataType*)( lVar2 + 0x38 ));
      }

      local_1a8 = local_78;
      cVar6 = GDScriptDataType::can_contain_object(local_1a8);
      GDScriptDataType::~GDScriptDataType(local_1a8);
      GDScriptDataType::~GDScriptDataType(local_190);
      GDScriptDataType::~GDScriptDataType(local_198);
      GDScriptDataType::~GDScriptDataType(local_138);
      if (cVar6 == '\0') goto LAB_001024f4;
      goto LAB_00102375;
   }

}
LAB_00102705:local_198 = local_f8;GDScriptDataType::~GDScriptDataType(local_198);LAB_00102608:GDScriptDataType::~GDScriptDataType(local_138);goto LAB_00102375;LAB_00102baf:local_190 = local_b8;GDScriptDataType::~GDScriptDataType(local_190);goto LAB_00102705;LAB_001024f4:lVar11 = *(long*)( lVar11 + 8 );GVar12 = local_1a9;if (( lVar11 == 0 ) || ( *(long*)( lVar11 + -8 ) < 2 )) {
   local_108 = (Object*)0x0;
   _local_138 = (undefined1[16])0x0;
   local_128 = (undefined1[16])0x0;
   local_118 = (undefined1[16])0x0;
}
 else {
   pGVar9 = local_138;
   GDScriptDataType::GDScriptDataType(pGVar9, (GDScriptDataType*)( lVar11 + 0x38 ));
   GVar7 = local_128[4];
   while (true) {
      if (( GVar7 == (GDScriptDataType)0x0 ) || ( *(int*)( pGVar9 + 0x10 ) != 1 )) goto LAB_00102540;
      uVar1 = *(uint*)( pGVar9 + 0x18 );
      if (uVar1 == 0x1b) break;
      if (uVar1 < 0x1c) {
         if (( uVar1 != 0 ) && ( uVar1 != 0x18 )) {
            LAB_001027c7:GVar12 = (GDScriptDataType)0x0;
         }

         goto LAB_00102540;
      }

      if (uVar1 != 0x1c) goto LAB_001027c7;
      pGVar9 = *(GDScriptDataType**)( pGVar9 + 8 );
      if (( pGVar9 == (GDScriptDataType*)0x0 ) || ( *(long*)( pGVar9 + -8 ) < 1 )) goto LAB_00102540;
      GVar7 = pGVar9[0x14];
   }
;
   pGVar4 = *(GDScriptDataType**)( pGVar9 + 8 );
   if (pGVar4 != (GDScriptDataType*)0x0) {
      if (0 < *(long*)( pGVar4 + -8 )) {
         pGVar8 = local_f8;
         GDScriptDataType::GDScriptDataType(pGVar8, pGVar4);
         GVar12 = local_e8[4];
         goto LAB_00102a03;
      }

      local_c8 = 0;
      for (int i = 0; i < 16; i++) {
         local_f8[i] = (GDScriptDataType)0;
      }

      local_e8 = (undefined1[16])0x0;
      local_d8 = (undefined1[16])0x0;
      goto LAB_00102866;
   }

}
goto LAB_00102540;LAB_00102a03:if (( GVar12 == (GDScriptDataType)0x0 ) || ( *(int*)( pGVar8 + 0x10 ) != 1 )) goto LAB_00102866;uVar1 = *(uint*)( pGVar8 + 0x18 );if (uVar1 != 0x1b) {
   if (uVar1 < 0x1c) {
      if (( uVar1 != 0 ) && ( uVar1 != 0x18 )) goto LAB_00102a43;
      goto LAB_00102866;
   }

   if (uVar1 != 0x1c) goto LAB_00102a43;
   pGVar8 = *(GDScriptDataType**)( pGVar8 + 8 );
   if (( pGVar8 == (GDScriptDataType*)0x0 ) || ( *(long*)( pGVar8 + -8 ) < 1 )) goto LAB_00102866;
   GVar12 = pGVar8[0x14];
   goto LAB_00102a03;
}
pGVar4 = *(GDScriptDataType**)( pGVar8 + 8 );if (pGVar4 != (GDScriptDataType*)0x0) {
   if (*(long*)( pGVar4 + -8 ) < 1) {
      local_88 = 0;
      for (int i = 0; i < 16; i++) {
         local_b8[i] = (GDScriptDataType)0;
      }

      local_a8 = (undefined1[16])0x0;
      local_98 = (undefined1[16])0x0;
   }
 else {
      GDScriptDataType::GDScriptDataType(local_b8, pGVar4);
   }

   local_190 = local_b8;
   cVar6 = GDScriptDataType::can_contain_object(local_190);
   if (cVar6 == '\0') {
      lVar11 = *(long*)( pGVar8 + 8 );
      if (( lVar11 == 0 ) || ( *(long*)( lVar11 + -8 ) < 2 )) {
         local_48 = 0;
         for (int i = 0; i < 16; i++) {
            local_78[i] = (GDScriptDataType)0;
         }

         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
      }
 else {
         GDScriptDataType::GDScriptDataType(local_78, (GDScriptDataType*)( lVar11 + 0x38 ));
      }

      local_1a8 = local_78;
      cVar6 = GDScriptDataType::can_contain_object(local_1a8);
      GDScriptDataType::~GDScriptDataType(local_1a8);
      GDScriptDataType::~GDScriptDataType(local_190);
      if (cVar6 == '\0') {
         LAB_00102a43:local_1a8 = local_78;
         lVar11 = *(long*)( pGVar9 + 8 );
         if (( lVar11 == 0 ) || ( *(long*)( lVar11 + -8 ) < 2 )) {
            local_48 = 0;
            for (int i = 0; i < 16; i++) {
               local_78[i] = (GDScriptDataType)0;
            }

            local_68 = (undefined1[16])0x0;
            local_58 = (undefined1[16])0x0;
         }
 else {
            GDScriptDataType::GDScriptDataType(local_1a8, (GDScriptDataType*)( lVar11 + 0x38 ));
         }

         GVar7 = (GDScriptDataType)GDScriptDataType::can_contain_object(local_1a8);
         GDScriptDataType::~GDScriptDataType(local_1a8);
      }

   }
 else {
      GDScriptDataType::~GDScriptDataType(local_190);
   }

}
LAB_00102866:local_198 = local_f8;GDScriptDataType::~GDScriptDataType(local_198);GVar12 = GVar7;LAB_00102540:if (( local_108 != (Object*)0x0 ) && ( ( cVar6 = RefCounted::unreference() ),pOVar3 = local_108,cVar6 != '\0' && ( cVar6 = predelete_handler(local_108) ),cVar6 != '\0' )) {
   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
}
if (( StringName::configured != '\0' ) && ( local_118._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( local_138 + 8 ));LAB_00102375:if (( local_148 != (Object*)0x0 ) && ( ( cVar6 = RefCounted::unreference() ),pOVar3 = local_148,cVar6 != '\0' && ( cVar6 = predelete_handler(local_148) ),cVar6 != '\0' )) {
   ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
   Memory::free_static(pOVar3, false);
}
if (( StringName::configured != '\0' ) && ( local_158._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( local_178 + 8 ));if (GVar12 != (GDScriptDataType)0x0) goto LAB_001022e8;lVar13 = *(long*)( lVar13 + 0x40 );if (lVar13 == 0) goto LAB_001023c8;goto LAB_00102302;LAB_001022e8:( **(code**)( **(long**)( param_1 + 0x20 ) + 0x40 ) )();LAB_001022f5:lVar13 = *(long*)( lVar13 + 0x40 );goto joined_r0x001022cb;}/* GDScriptCompiler::convert_to_initializer_type(Variant&, GDScriptParser::VariableNode const*) */void GDScriptCompiler::convert_to_initializer_type(Variant *param_1, VariableNode *param_2) {
   char cVar1;
   long in_FS_OFFSET;
   long local_230;
   undefined4 local_228;
   undefined8 local_224;
   DataType local_218[16];
   int local_208;
   int local_204;
   undefined4 local_1f8;
   DataType local_128[16];
   int local_118;
   int local_114;
   undefined4 local_108;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   GDScriptParser::DataType::DataType(local_218, (DataType*)( param_2 + 0x38 ));
   GDScriptParser::DataType::DataType(local_128, (DataType*)( *(long*)( param_2 + 0x130 ) + 0x38 ));
   if (( ( 1 < local_204 ) && ( 1 < local_114 ) ) && ( local_208 == 0 && local_118 == 0 )) {
      cVar1 = Variant::can_convert_strict(local_108, local_1f8);
      if (cVar1 != '\0') {
         local_228 = 0;
         local_224 = 0;
         local_230 = *(long*)( param_2 + 0x130 ) + 0x130;
         Variant::construct(local_1f8, param_1, &local_230, 1, &local_228);
      }

   }

   GDScriptParser::DataType::~DataType(local_128);
   GDScriptParser::DataType::~DataType(local_218);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<GDScriptCodeGenerator::Address>::_copy_on_write() [clone .isra.0] */void CowData<GDScriptCodeGenerator::Address>::_copy_on_write(CowData<GDScriptCodeGenerator::Address> *this) {
   long lVar1;
   undefined8 uVar2;
   Object *pOVar3;
   Object *pOVar4;
   code *pcVar5;
   char cVar6;
   undefined8 *puVar7;
   CowData<GDScriptDataType> *this_00;
   undefined8 *puVar8;
   ulong uVar9;
   long lVar10;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar9 = 0x10;
   if (lVar1 * 0x40 != 0) {
      uVar9 = lVar1 * 0x40 - 1;
      uVar9 = uVar9 | uVar9 >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      uVar9 = ( uVar9 | uVar9 >> 0x20 ) + 0x11;
   }

   puVar7 = (undefined8*)Memory::alloc_static(uVar9, false);
   if (puVar7 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   this_00 = (CowData<GDScriptDataType>*)( puVar7 + 4 );
   lVar10 = 0;
   *puVar7 = 1;
   puVar7[1] = lVar1;
   if (lVar1 != 0) {
      do if (*(long*)this_00 != puVar8[2]) this_00 = this_00 + 0x40; while ( lVar1 != lVar10 );
   }

   _unref(this);
   *(undefined8**)this = puVar7 + 2;
   return;
}
/* Vector<GDScriptCodeGenerator::Address>::push_back(GDScriptCodeGenerator::Address) [clone .isra.0]
    */void Vector<GDScriptCodeGenerator::Address>::push_back(Vector<GDScriptCodeGenerator::Address> *this, undefined8 *param_2) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   int iVar4;
   long lVar5;
   undefined8 *puVar6;
   long lVar7;
   if (*(long*)( this + 8 ) == 0) {
      lVar7 = 1;
   }
 else {
      lVar7 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar4 = CowData<GDScriptCodeGenerator::Address>::resize<false>((CowData<GDScriptCodeGenerator::Address>*)( this + 8 ), lVar7);
   if (iVar4 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   if (*(long*)( this + 8 ) == 0) {
      lVar5 = -1;
      lVar7 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar5 = lVar7 + -1;
      if (-1 < lVar5) {
         CowData<GDScriptCodeGenerator::Address>::_copy_on_write((CowData<GDScriptCodeGenerator::Address>*)( this + 8 ));
         puVar6 = (undefined8*)( lVar5 * 0x40 + *(long*)( this + 8 ) );
         *puVar6 = *param_2;
         *(undefined4*)( puVar6 + 3 ) = *(undefined4*)( param_2 + 3 );
         *(undefined1*)( (long)puVar6 + 0x1c ) = *(undefined1*)( (long)param_2 + 0x1c );
         *(undefined4*)( puVar6 + 4 ) = *(undefined4*)( param_2 + 4 );
         StringName::operator =((StringName*)( puVar6 + 5 ), (StringName*)( param_2 + 5 ));
         pOVar1 = (Object*)puVar6[7];
         puVar6[6] = param_2[6];
         pOVar2 = (Object*)param_2[7];
         if (pOVar2 != pOVar1) {
            puVar6[7] = pOVar2;
            if (( pOVar2 != (Object*)0x0 ) && ( cVar3 = cVar3 == '\0' )) {
               puVar6[7] = 0;
            }

            if (( ( pOVar1 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

      if (puVar6[2] == param_2[2]) {
         return;
      }

      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( puVar6 + 2 ), (CowData*)( param_2 + 2 ));
      return;
   }

}
_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar7, "p_index", "size()", "", false, false);return;}/* GDScriptCompiler::make_scripts(GDScript*, GDScriptParser::ClassNode const*, bool) */void GDScriptCompiler::make_scripts(GDScript *param_1, ClassNode *param_2, bool param_3) {
   uint uVar1;
   void *pvVar2;
   ClassNode *pCVar3;
   Object *pOVar4;
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   GDScript *pGVar13;
   undefined8 uVar14;
   char cVar15;
   uint uVar16;
   int *piVar17;
   long *plVar18;
   GDScript *pGVar19;
   ulong uVar20;
   int iVar21;
   long lVar22;
   int *piVar23;
   long lVar24;
   undefined8 *puVar25;
   uint uVar26;
   uint uVar27;
   long lVar28;
   long in_FS_OFFSET;
   undefined8 *local_c8;
   Ref *local_a8;
   long local_90;
   GDScript *local_88;
   GDScript *local_80;
   long local_78;
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( param_1 + 0x6e8 ) != *(long*)( param_2 + 0x298 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x6e8 ), (CowData*)( param_2 + 0x298 ));
   }

   if (*(long*)( param_2 + 0x128 ) == 0) {
      local_78 = 0;
      if (*(long*)( param_1 + 0x6d8 ) != 0) goto LAB_00103514;
      if (*(long*)( param_2 + 0x180 ) == 0) goto LAB_00103ad0;
      LAB_0010353f:local_78 = 0;
      if (*(long*)( param_1 + 0x6e0 ) != 0) {
         LAB_00103552:StringName::unref();
         *(long*)( param_1 + 0x6e0 ) = local_78;
      }

   }
 else {
      StringName::StringName((StringName*)&local_78, (StringName*)( *(long*)( param_2 + 0x128 ) + 0x148 ));
      if (*(long*)( param_1 + 0x6d8 ) == local_78) {
         if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
            StringName::unref();
         }

      }
 else {
         LAB_00103514:StringName::unref();
         *(long*)( param_1 + 0x6d8 ) = local_78;
      }

      if (*(long*)( param_2 + 0x180 ) != 0) goto LAB_0010353f;
      LAB_00103ad0:if (*(long*)( param_2 + 0x128 ) == 0) goto LAB_0010353f;
      StringName::StringName((StringName*)&local_78, (StringName*)( *(long*)( param_2 + 0x128 ) + 0x148 ));
      if (*(long*)( param_1 + 0x6e0 ) != local_78) goto LAB_00103552;
      if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
         StringName::unref();
      }

   }

   if (*(long*)( param_1 + 0x6f0 ) != *(long*)( param_2 + 0x138 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( param_1 + 0x6f0 ), (CowData*)( param_2 + 0x138 ));
   }

   local_c8 = (undefined8*)0x0;
   local_50 = 2;
   local_70 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   if (param_3) {
      uVar20 = 3;
      if (0x17 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x388 ) * 4 )) {
         do {
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x388 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar20 * 4 )) {
               local_50 = uVar20 & 0xffffffff;
               goto LAB_00103bf2;
            }

            uVar20 = uVar20 + 1;
         }
 while ( uVar20 != 0x1d );
         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_00103bf2:if (*(long*)( param_1 + 0x368 ) != 0) {
         plVar18 = *(long**)( param_1 + 0x378 );
         if (plVar18 != (long*)0x0) {
            do {
               HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::insert((StringName*)&local_80, (Ref*)&local_78, (bool)( (char)plVar18 + '\x10' ));
               plVar18 = (long*)*plVar18;
            }
 while ( plVar18 != (long*)0x0 );
            local_c8 = (undefined8*)local_70._0_8_;
            goto LAB_001035ba;
         }

         local_c8 = (undefined8*)0x0;
         goto LAB_001035d4;
      }

      lVar28 = *(long*)( param_2 + 0x148 );
      local_c8 = (undefined8*)0x0;
      if (lVar28 != 0) goto LAB_001036a0;
   }
 else {
      LAB_001035ba:if (*(long*)( param_1 + 0x368 ) != 0) {
         LAB_001035d4:if (*(int*)( param_1 + 0x38c ) != 0) {
            lVar28 = 0;
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x388 ) * 4 );
            if (uVar1 != 0) {
               do {
                  if (*(int*)( *(long*)( param_1 + 0x370 ) + lVar28 ) != 0) {
                     *(int*)( *(long*)( param_1 + 0x370 ) + lVar28 ) = 0;
                     pvVar2 = *(void**)( *(long*)( param_1 + 0x368 ) + lVar28 * 2 );
                     if (( *(long*)( (long)pvVar2 + 0x18 ) != 0 ) && ( cVar15 = cVar15 != '\0' )) {
                        pOVar4 = *(Object**)( (long)pvVar2 + 0x18 );
                        cVar15 = predelete_handler(pOVar4);
                        if (cVar15 != '\0') {
                           ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }

                     }

                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }

                     Memory::free_static(pvVar2, false);
                     *(undefined8*)( *(long*)( param_1 + 0x368 ) + lVar28 * 2 ) = 0;
                  }

                  lVar28 = lVar28 + 4;
               }
 while ( (ulong)uVar1 << 2 != lVar28 );
            }

            *(undefined4*)( param_1 + 0x38c ) = 0;
            *(undefined1(*) [16])( param_1 + 0x378 ) = (undefined1[16])0x0;
         }

      }

      lVar28 = *(long*)( param_2 + 0x148 );
      if (lVar28 != 0) {
         LAB_001036a0:local_a8 = (Ref*)( param_1 + 0x360 );
         lVar24 = 0;
         do {
            if (*(long*)( lVar28 + -8 ) <= lVar24) break;
            piVar17 = (int*)( lVar24 * 0x70 + lVar28 );
            if (*piVar17 == 1) {
               pCVar3 = *(ClassNode**)( piVar17 + 2 );
               StringName::StringName((StringName*)&local_90, (StringName*)( *(long*)( pCVar3 + 0x128 ) + 0x148 ));
               local_88 = (GDScript*)0x0;
               if (( local_c8 != (undefined8*)0x0 ) && ( local_50._4_4_ != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 );
                  lVar28 = *(long*)( hash_table_size_primes_inv + ( local_50 & 0xffffffff ) * 8 );
                  if (local_90 == 0) {
                     uVar16 = StringName::get_empty_hash();
                  }
 else {
                     uVar16 = *(uint*)( local_90 + 0x20 );
                  }

                  uVar20 = CONCAT44(0, uVar1);
                  if (uVar16 == 0) {
                     uVar16 = 1;
                  }

                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = (ulong)uVar16 * lVar28;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = uVar20;
                  lVar22 = SUB168(auVar5 * auVar9, 8);
                  uVar26 = *(uint*)( local_70._8_8_ + lVar22 * 4 );
                  iVar21 = SUB164(auVar5 * auVar9, 8);
                  if (uVar26 != 0) {
                     uVar27 = 0;
                     do {
                        if (( uVar16 == uVar26 ) && ( *(long*)( local_c8[lVar22] + 0x10 ) == local_90 )) {
                           plVar18 = (long*)HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::operator []((HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>*)&local_78, (StringName*)&local_90);
                           pGVar19 = (GDScript*)*plVar18;
                           if (pGVar19 == (GDScript*)0x0) goto LAB_00103909;
                           local_88 = pGVar19;
                           cVar15 = RefCounted::reference();
                           local_c8 = (undefined8*)local_70._0_8_;
                           if (cVar15 != '\0') goto LAB_00103a0b;
                           local_88 = (GDScript*)0x0;
                           goto LAB_00103909;
                        }

                        uVar27 = uVar27 + 1;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = ( ulong )(iVar21 + 1) * lVar28;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = uVar20;
                        lVar22 = SUB168(auVar6 * auVar10, 8);
                        uVar26 = *(uint*)( local_70._8_8_ + lVar22 * 4 );
                        iVar21 = SUB164(auVar6 * auVar10, 8);
                     }
 while ( ( uVar26 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar26 * lVar28,auVar11._8_8_ = 0,auVar11._0_8_ = uVar20,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar1 + iVar21 ) - SUB164(auVar7 * auVar11, 8)) * lVar28,auVar12._8_8_ = 0,auVar12._0_8_ = uVar20,uVar27 <= SUB164(auVar8 * auVar12, 8) );
                  }

               }

               GDScriptLanguage::get_orphan_subclass((String*)&local_80);
               if (local_80 == (GDScript*)0x0) {
                  LAB_00103909:pGVar19 = (GDScript*)operator_new(0x780, "");
                  GDScript::GDScript(pGVar19);
                  postinitialize_handler((Object*)pGVar19);
                  cVar15 = RefCounted::init_ref();
                  if (cVar15 != '\0') {
                     local_88 = pGVar19;
                     cVar15 = RefCounted::reference();
                     if (cVar15 == '\0') {
                        local_88 = (GDScript*)0x0;
                     }

                     cVar15 = RefCounted::unreference();
                     if (( cVar15 != '\0' ) && ( cVar15 = predelete_handler((Object*)pGVar19) ),cVar15 != '\0') {
                        ( **(code**)( *(long*)pGVar19 + 0x140 ) )(pGVar19);
                        Memory::free_static(pGVar19, false);
                     }

                  }

                  local_c8 = (undefined8*)local_70._0_8_;
                  pGVar19 = local_88;
               }
 else {
                  local_88 = local_80;
                  cVar15 = RefCounted::reference();
                  if (cVar15 == '\0') {
                     local_88 = (GDScript*)0x0;
                  }

                  pGVar19 = local_88;
                  if (( ( local_80 != (GDScript*)0x0 ) && ( cVar15 = RefCounted::unreference() ),pGVar13 = local_80,pGVar19 = local_88,cVar15 != '\0' )) {
                     ( **(code**)( *(long*)pGVar13 + 0x140 ) )(pGVar13);
                     Memory::free_static(pGVar13, false);
                  }

                  if (pGVar19 == (GDScript*)0x0) goto LAB_00103909;
               }

               LAB_00103a0b:*(GDScript**)( pGVar19 + 0x260 ) = param_1;
               if (*(long*)( pGVar19 + 0x6c8 ) != *(long*)( param_1 + 0x6c8 )) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( pGVar19 + 0x6c8 ), (CowData*)( param_1 + 0x6c8 ));
               }

               HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::insert((StringName*)&local_80, local_a8, SUB81((StringName*)&local_90, 0));
               make_scripts(pGVar19, pCVar3, param_3);
               cVar15 = RefCounted::unreference();
               if (( cVar15 != '\0' ) && ( cVar15 = predelete_handler((Object*)pGVar19) ),cVar15 != '\0') {
                  ( **(code**)( *(long*)pGVar19 + 0x140 ) )(pGVar19);
                  Memory::free_static(pGVar19, false);
               }

               if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
                  StringName::unref();
               }

               lVar28 = *(long*)( param_2 + 0x148 );
            }

            lVar24 = lVar24 + 1;
         }
 while ( lVar28 != 0 );
      }

      if (local_c8 != (undefined8*)0x0) {
         uVar14 = local_70._8_8_;
         if (( local_50._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) != 0 )) {
            piVar17 = (int*)( local_70._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) * 4 );
            piVar23 = (int*)local_70._8_8_;
            puVar25 = local_c8;
            do {
               if (*piVar23 != 0) {
                  pvVar2 = (void*)*puVar25;
                  *piVar23 = 0;
                  if (( *(long*)( (long)pvVar2 + 0x18 ) != 0 ) && ( cVar15 = cVar15 != '\0' )) {
                     pOVar4 = *(Object**)( (long)pvVar2 + 0x18 );
                     cVar15 = predelete_handler(pOVar4);
                     if (cVar15 != '\0') {
                        ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                        Memory::free_static(pOVar4, false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar2 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar2, false);
                  *puVar25 = 0;
               }

               piVar23 = piVar23 + 1;
               puVar25 = puVar25 + 1;
            }
 while ( piVar17 != piVar23 );
         }

         Memory::free_static(local_c8, false);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Memory::free_static((void*)uVar14, false);
            return;
         }

         goto LAB_00103d5a;
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00103d5a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref(CowData<GDScriptCompiler::FunctionLambdaInfo>
   const&) [clone .part.0] */void CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref(CowData<GDScriptCompiler::FunctionLambdaInfo> *this, CowData *param_1) {
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
/* CowData<GDScriptCompiler::FunctionLambdaInfo>::_copy_on_write() [clone .isra.0] */void CowData<GDScriptCompiler::FunctionLambdaInfo>::_copy_on_write(CowData<GDScriptCompiler::FunctionLambdaInfo> *this) {
   long lVar1;
   undefined8 uVar2;
   long lVar3;
   code *pcVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 *puVar7;
   undefined8 *puVar8;
   long lVar9;
   ulong uVar10;
   undefined8 *puVar11;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar10 = 0x10;
   if (lVar1 * 0x50 != 0) {
      uVar10 = lVar1 * 0x50 - 1;
      uVar10 = uVar10 | uVar10 >> 1;
      uVar10 = uVar10 | uVar10 >> 2;
      uVar10 = uVar10 | uVar10 >> 4;
      uVar10 = uVar10 | uVar10 >> 8;
      uVar10 = uVar10 | uVar10 >> 0x10;
      uVar10 = ( uVar10 | uVar10 >> 0x20 ) + 0x11;
   }

   puVar7 = (undefined8*)Memory::alloc_static(uVar10, false);
   if (puVar7 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar9 = 0;
   *puVar7 = 1;
   puVar7[1] = lVar1;
   puVar11 = puVar7 + 2;
   if (lVar1 != 0) {
      do {
         puVar8 = (undefined8*)( (long)puVar11 + *(long*)this + ( -0x10 - (long)puVar7 ) );
         uVar2 = *puVar8;
         uVar5 = puVar8[1];
         puVar11[2] = puVar8[2];
         *puVar11 = uVar2;
         puVar11[1] = uVar5;
         StringName::StringName((StringName*)( puVar11 + 3 ), (StringName*)( puVar8 + 3 ));
         uVar5 = puVar8[4];
         uVar6 = puVar8[5];
         *(undefined1*)( puVar11 + 6 ) = *(undefined1*)( puVar8 + 6 );
         uVar2 = *(undefined8*)( (long)puVar8 + 0x34 );
         puVar11[9] = 0;
         lVar3 = puVar8[9];
         *(undefined8*)( (long)puVar11 + 0x34 ) = uVar2;
         puVar11[4] = uVar5;
         puVar11[5] = uVar6;
         if (lVar3 != 0) {
            _ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( puVar11 + 9 ), (CowData*)( puVar8 + 9 ));
         }

         lVar9 = lVar9 + 1;
         puVar11 = puVar11 + 10;
      }
 while ( lVar1 != lVar9 );
   }

   _unref(this);
   *(undefined8**)this = puVar7 + 2;
   return;
}
/* GDScriptCompiler::_gdtype_from_datatype(GDScriptParser::DataType const&, GDScript*, bool) */DataType *GDScriptCompiler::_gdtype_from_datatype(DataType *param_1, GDScript *param_2, bool param_3) {
   long lVar1;
   Object *pOVar2;
   undefined8 uVar3;
   String *pSVar4;
   char cVar5;
   char cVar6;
   Ref *pRVar7;
   Object *pOVar8;
   undefined7 in_register_00000011;
   long lVar9;
   long lVar10;
   char *pcVar11;
   char in_R8B;
   long in_FS_OFFSET;
   GDScriptDataType *local_1f0;
   StringName *local_1e8;
   String *local_1d0;
   ulong local_1c8;
   undefined8 local_1c0;
   GDScriptDataType local_1b8[8];
   long local_1b0;
   undefined4 local_1a8;
   DataType local_1a4;
   undefined4 local_1a0;
   undefined1 local_198[16];
   Object *local_188;
   long local_178;
   CowData<GDScriptDataType> local_170[24];
   long local_158;
   Object *local_148;
   Ref *local_138[31];
   long local_40;
   lVar9 = CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(int*)( lVar9 + 0x10 ) - 6U < 2 ) || ( *(int*)( lVar9 + 0x14 ) < 2 ) ) || ( *(char*)( lVar9 + 0x1c ) != '\0' )) {
      *(undefined8*)( param_1 + 0x30 ) = 0;
      *(undefined1(*) [16])param_1 = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( param_1 + 0x20 ) = (undefined1[16])0x0;
      goto LAB_00103fa5;
   }

   local_1a4 = (DataType)0x1;
   local_1b0 = 0;
   local_1a8 = 0;
   local_1a0 = 0;
   local_188 = (Object*)0x0;
   local_198 = (undefined1[16])0x0;
   local_198._0_8_ = 0;
   switch (*(int*)( lVar9 + 0x10 )) {
      case 0:
switchD_00104025_caseD_0:
    local_1a0 = *(undefined4 *)(lVar9 + 0x20);
    local_1a8 = 1;
    break;
      case 1:
    if ((in_R8B != '\0') && (*(char *)(lVar9 + 0x1a) != '\0')) {
      pcVar11 = "Object";
LAB_001047f7:
      local_178 = 0;
      local_1a0 = 0x18;
      local_1a8 = 2;
      String::parse_latin1((String *)&local_178,pcVar11);
LAB_001043ac:
      StringName::StringName((StringName *)local_138,(String *)&local_178,false);
      if ((Ref *)local_198._0_8_ == local_138[0]) {
        if ((StringName::configured != '\0') && (local_138[0] != (Ref *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_198._0_8_ = local_138[0];
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      break;
    }
    local_1a0 = *(undefined4 *)(lVar9 + 0x20);
    local_1a8 = 2;
    StringName::operator=((StringName *)local_198,(StringName *)(lVar9 + 0x28));
    local_138[0] = (Ref *)((ulong)local_138[0] & 0xffffffff00000000);
    cVar5 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
            ::_lookup_pos((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                           *)(GDScriptLanguage::singleton + 400),(StringName *)local_198,
                          (uint *)local_138);
    if (cVar5 != '\0') break;
    StringName::StringName((StringName *)&local_178,(StringName *)local_198);
    local_1c0 = 0;
    String::parse_latin1
              ((String *)&local_1c0,"GDScript bug (please report): Native class \"%s\" not found.");
    vformat<StringName>((CowData<char32_t> *)local_138,(String *)&local_1c0,(StringName *)&local_178
                       );
    _set_error((GDScriptCompiler *)param_2,(String *)local_138,(Node *)0x0);
    CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
    if ((StringName::configured != '\0') && (local_178 != 0)) {
      StringName::unref();
    }
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
    goto LAB_001041c3;
      case 2:
    pOVar2 = *(Object **)(lVar9 + 0x38);
    if ((in_R8B != '\0') && (*(char *)(lVar9 + 0x1a) != '\0')) {
      local_1a8 = 2;
      local_1a0 = 0x18;
      if (pOVar2 == (Object *)0x0) {
        local_178 = 0;
        String::parse_latin1((String *)&local_178,"Script");
      }
      else {
        (**(code **)(*(long *)pOVar2 + 0x48))(&local_178,pOVar2);
      }
      goto LAB_001043ac;
    }
    local_1a0 = *(undefined4 *)(lVar9 + 0x20);
    local_1a8 = 3;
    if (pOVar2 == (Object *)0x0) {
LAB_001045ad:
      local_188 = (Object *)0x0;
    }
    else {
      local_188 = pOVar2;
      cVar5 = RefCounted::reference();
      if (cVar5 == '\0') goto LAB_001045ad;
    }
    local_198._8_8_ = local_188;
    StringName::operator=((StringName *)local_198,(StringName *)(lVar9 + 0x28));
    break;
      case 3:
    if ((in_R8B != '\0') && (*(char *)(lVar9 + 0x1a) != '\0')) {
      pcVar11 = "GDScript";
      goto LAB_001047f7;
    }
    local_1a0 = *(undefined4 *)(lVar9 + 0x20);
    local_1a8 = 4;
    StringName::operator=((StringName *)local_198,(StringName *)(lVar9 + 0x28));
    cVar5 = GDScriptParser::has_class(*(ClassNode **)param_2);
    local_1d0 = (String *)0x0;
    if (cVar5 == '\0') {
      local_1f0 = (GDScriptDataType *)local_138;
      local_1c8 = local_1c8 & 0xffffffff00000000;
      GDScriptCache::get_shallow_script
                ((String *)local_1f0,(CowData *)(lVar9 + 0x40),(String *)&local_1c8);
      Ref<GDScript>::operator=((Ref<GDScript> *)&local_1d0,local_138[0]);
      Ref<GDScript>::unref((Ref<GDScript> *)local_1f0);
      if ((int)local_1c8 == 0) goto joined_r0x00104839;
      uVar3 = *(undefined8 *)(&error_names + (long)(int)local_1c8 * 8);
      local_178 = 0;
      if (*(long *)(lVar9 + 0x40) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)(lVar9 + 0x40));
      }
      local_1c0 = 0;
      String::parse_latin1((String *)&local_1c0,"Could not find script \"%s\": %s");
      vformat<String,char_const*>
                (local_1f0,(String *)&local_1c0,(CowData<char32_t> *)&local_178,uVar3);
      _set_error((GDScriptCompiler *)param_2,(String *)local_1f0,(Node *)0x0);
    }
    else {
      pRVar7 = *(Ref **)(param_2 + 0x58);
      if ((pRVar7 == (Ref *)0x0) ||
         (local_138[0] = pRVar7, cVar6 = RefCounted::init_ref(), cVar6 == '\0')) {
        local_138[0] = (Ref *)0x0;
        pRVar7 = (Ref *)0x0;
      }
      Ref<GDScript>::operator=((Ref<GDScript> *)&local_1d0,pRVar7);
      Ref<GDScript>::unref((Ref<GDScript> *)local_138);
joined_r0x00104839:
      if (local_1d0 != (String *)0x0) {
        pRVar7 = (Ref *)GDScript::find_class(local_1d0);
        if ((pRVar7 == (Ref *)0x0) ||
           (local_138[0] = pRVar7, cVar6 = RefCounted::init_ref(), cVar6 == '\0')) {
          local_138[0] = (Ref *)0x0;
          pRVar7 = (Ref *)0x0;
        }
        Ref<GDScript>::operator=((Ref<GDScript> *)&local_1d0,pRVar7);
        Ref<GDScript>::unref((Ref<GDScript> *)local_138);
        pSVar4 = local_1d0;
        if (local_1d0 != (String *)0x0) {
          if (cVar5 == '\0') {
            pOVar8 = (Object *)__dynamic_cast(local_1d0,&Object::typeinfo,&Script::typeinfo,0);
            pOVar2 = local_188;
            if (local_188 != pOVar8) {
              local_188 = pOVar8;
              if ((pOVar8 != (Object *)0x0) && (cVar5 = RefCounted::reference(), cVar5 == '\0')) {
                local_188 = (Object *)0x0;
              }
              if (pOVar2 != (Object *)0x0) {
                cVar5 = RefCounted::unreference();
                if (cVar5 != '\0') {
                  cVar5 = predelete_handler(pOVar2);
                  if (cVar5 != '\0') {
                    (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
                    Memory::free_static(pOVar2,false);
                  }
                }
              }
            }
          }
          local_198._8_8_ = pSVar4;
          StringName::operator=((StringName *)local_198,(StringName *)(lVar9 + 0x28));
          Ref<GDScript>::unref((Ref<GDScript> *)&local_1d0);
          break;
        }
      }
      local_1f0 = (GDScriptDataType *)&local_1c8;
      local_178 = 0;
      if (*(long *)(lVar9 + 0x40) != 0) {
        CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)(lVar9 + 0x40));
      }
      local_1c0 = 0;
      if (*(long *)(*(long *)(lVar9 + 0x48) + 0x298) != 0) {
        CowData<char32_t>::_ref
                  ((CowData<char32_t> *)&local_1c0,(CowData *)(*(long *)(lVar9 + 0x48) + 0x298));
      }
      local_1c8 = 0;
      String::parse_latin1((String *)local_1f0,"Could not find class \"%s\" in \"%s\".");
      vformat<String,String>
                ((CowData<char32_t> *)local_138,local_1f0,(CowData<char32_t> *)&local_1c0,
                 (CowData<char32_t> *)&local_178);
      _set_error((GDScriptCompiler *)param_2,(String *)local_138,(Node *)0x0);
      CowData<char32_t>::_unref((CowData<char32_t> *)local_138);
    }
    CowData<char32_t>::_unref((CowData<char32_t> *)local_1f0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_1c0);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
    *(undefined8 *)(param_1 + 0x30) = 0;
    *(undefined1 (*) [16])param_1 = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x10) = (undefined1  [16])0x0;
    *(undefined1 (*) [16])(param_1 + 0x20) = (undefined1  [16])0x0;
    Ref<GDScript>::unref((Ref<GDScript> *)&local_1d0);
    goto LAB_001041c3;
      case 4:
    if ((in_R8B == '\0') || (*(char *)(lVar9 + 0x1a) == '\0')) goto switchD_00104025_caseD_0;
    local_1a8 = 1;
    local_1a0 = 0x1b;
    break;
      case 5:
    local_1a4 = (DataType)0x0;
   }

   local_1e8 = (StringName*)local_198;
   lVar1 = *(long*)( lVar9 + 8 );
   for (lVar10 = 0; ( lVar1 != 0 && ( lVar10 < *(long*)( lVar1 + -8 ) ) ); lVar10 = lVar10 + 1) {
      GDScriptParser::DataType::DataType((DataType*)local_138, (DataType*)( lVar1 + lVar10 * 0xf0 ));
      _gdtype_from_datatype((DataType*)&local_178, param_2, SUB81((DataType*)local_138, 0));
      GDScriptDataType::set_container_element_type(local_1b8, (int)lVar10, (GDScriptDataType*)&local_178);
      if (( local_148 != (Object*)0x0 ) && ( ( cVar5 = RefCounted::unreference() ),pOVar2 = local_148,cVar5 != '\0' && ( cVar5 = predelete_handler(local_148) ),cVar5 != '\0' )) {
         ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
         Memory::free_static(pOVar2, false);
      }

      if (( StringName::configured != '\0' ) && ( local_158 != 0 )) {
         StringName::unref();
      }

      CowData<GDScriptDataType>::_unref(local_170);
      GDScriptParser::DataType::~DataType((DataType*)local_138);
      lVar1 = *(long*)( lVar9 + 8 );
   }

   *(undefined8*)( param_1 + 8 ) = 0;
   *(undefined8*)( param_1 + 0x30 ) = 0;
   *(undefined4*)( param_1 + 0x10 ) = local_1a8;
   *(undefined1(*) [16])( param_1 + 0x20 ) = (undefined1[16])0x0;
   param_1[0x14] = local_1a4;
   *(undefined4*)( param_1 + 0x18 ) = local_1a0;
   StringName::operator =((StringName*)( param_1 + 0x20 ), local_1e8);
   pOVar2 = *(Object**)( param_1 + 0x30 );
   *(undefined8*)( param_1 + 0x28 ) = local_198._8_8_;
   if (local_188 != pOVar2) {
      *(Object**)( param_1 + 0x30 ) = local_188;
      if (( local_188 != (Object*)0x0 ) && ( cVar5 = cVar5 == '\0' )) {
         *(undefined8*)( param_1 + 0x30 ) = 0;
      }

      if (( ( pOVar2 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
if (*(long*)( param_1 + 8 ) != local_1b0) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( param_1 + 8 ), (CowData*)&local_1b0);
}
LAB_001041c3:local_1f0 = local_1b8;GDScriptDataType::~GDScriptDataType(local_1f0);LAB_00103fa5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return param_1;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* GDScriptCompiler::_add_block_locals(GDScriptCompiler::CodeGen&, GDScriptParser::SuiteNode const*)
    */CodeGen *GDScriptCompiler::_add_block_locals(CodeGen *param_1, SuiteNode *param_2) {
   StringName *pSVar1;
   Object *pOVar2;
   long *plVar3;
   code *pcVar4;
   undefined8 uVar5;
   Object *pOVar6;
   char cVar7;
   undefined4 uVar8;
   undefined8 *puVar9;
   undefined1(*pauVar10)[16];
   long in_RCX;
   long in_RDX;
   long lVar11;
   long lVar12;
   long lVar13;
   long in_FS_OFFSET;
   DataType local_1b8[8];
   long local_1b0;
   undefined4 local_1a8;
   undefined1 local_1a4;
   undefined4 local_1a0;
   long local_198;
   undefined8 local_190;
   Object *local_188;
   undefined8 local_178;
   long local_168;
   undefined8 local_160;
   ulong local_158;
   undefined1 local_150[16];
   Object *local_140;
   DataType local_138[248];
   long local_40;
   lVar11 = *(long*)( in_RCX + 0x180 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)param_1 = 0;
   if (lVar11 != 0) {
      lVar13 = 0;
      do {
      if (*(long *)(lVar11 + -8) <= lVar13) break;
      if (1 < *(int *)(lVar11 + lVar13 * 0x38) - 3U) {
        GDScriptParser::SuiteNode::Local::get_datatype();
        _gdtype_from_datatype(local_1b8,(GDScript *)param_2,SUB81(local_138,0));
        lVar11 = *(long *)(in_RCX + 0x180);
        if (lVar11 == 0) {
          lVar12 = 0;
LAB_0010510b:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar4 = (code *)invalidInstructionException();
          (*pcVar4)();
        }
        lVar12 = *(long *)(lVar11 + -8);
        if (lVar12 <= lVar13) goto LAB_0010510b;
        pSVar1 = (StringName *)(lVar11 + 0x10 + lVar13 * 0x38);
        uVar8 = (**(code **)(**(long **)(in_RDX + 0x20) + 8))
                          (*(long **)(in_RDX + 0x20),pSVar1,local_1b8);
        local_168 = 0;
        local_140 = (Object *)0x0;
        local_178 = CONCAT44(uVar8,4);
        local_160._0_5_ = CONCAT14(local_1a4,local_1a8);
        local_150 = (undefined1  [16])0x0;
        local_158 = CONCAT44(local_158._4_4_,local_1a0);
        StringName::operator=((StringName *)local_150,(StringName *)&local_198);
        pOVar2 = local_140;
        local_150._8_8_ = local_190;
        if (local_188 != local_140) {
          local_140 = local_188;
          if ((local_188 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_140 = (Object *)0x0;
          }
          if (((pOVar2 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
             (cVar7 = predelete_handler(pOVar2), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        if (local_168 != local_1b0) {
          CowData<GDScriptDataType>::_ref
                    ((CowData<GDScriptDataType> *)&local_168,(CowData *)&local_1b0);
        }
        puVar9 = (undefined8 *)
                 HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                 ::operator[]((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                               *)(in_RDX + 0x58),pSVar1);
        *puVar9 = local_178;
        *(undefined4 *)(puVar9 + 3) = (undefined4)local_160;
        *(undefined1 *)((long)puVar9 + 0x1c) = local_160._4_1_;
        *(undefined4 *)(puVar9 + 4) = (undefined4)local_158;
        StringName::operator=((StringName *)(puVar9 + 5),(StringName *)local_150);
        pOVar2 = (Object *)puVar9[7];
        puVar9[6] = local_150._8_8_;
        if (local_140 != pOVar2) {
          puVar9[7] = local_140;
          if ((local_140 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            puVar9[7] = 0;
          }
          if (((pOVar2 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
             (cVar7 = predelete_handler(pOVar2), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar2 + 0x140))(pOVar2);
            Memory::free_static(pOVar2,false);
          }
        }
        if (puVar9[2] != local_168) {
          CowData<GDScriptDataType>::_ref
                    ((CowData<GDScriptDataType> *)(puVar9 + 2),(CowData *)&local_168);
        }
        if (((local_140 != (Object *)0x0) &&
            (cVar7 = RefCounted::unreference(), pOVar2 = local_140, cVar7 != '\0')) &&
           (cVar7 = predelete_handler(local_140), cVar7 != '\0')) {
          (**(code **)(*(long *)pOVar2 + 0x140))();
          Memory::free_static(pOVar2,false);
        }
        if ((StringName::configured != '\0') && (local_150._0_8_ != 0)) {
          StringName::unref();
        }
        CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)&local_168);
        puVar9 = (undefined8 *)
                 HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                 ::operator[]((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                               *)(in_RDX + 0x58),pSVar1);
        local_178 = *puVar9;
        local_150 = (undefined1  [16])0x0;
        local_168 = 0;
        local_140 = (Object *)0x0;
        local_160 = (ulong)*(uint5 *)(puVar9 + 3);
        local_158 = (ulong)*(uint *)(puVar9 + 4);
        StringName::operator=((StringName *)local_150,(StringName *)(puVar9 + 5));
        pOVar6 = local_140;
        local_150._8_8_ = puVar9[6];
        pOVar2 = (Object *)puVar9[7];
        if (pOVar2 != local_140) {
          local_140 = pOVar2;
          if ((pOVar2 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_140 = (Object *)0x0;
          }
          if (((pOVar6 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
             (cVar7 = predelete_handler(pOVar6), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
   }

   if (local_168 != puVar9[2]) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)&local_168, (CowData*)( puVar9 + 2 ));
   }

   if (*(long*)param_1 == 0) {
      pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])param_1 = pauVar10;
      *(undefined4*)pauVar10[1] = 0;
      *pauVar10 = (undefined1[16])0x0;
   }

   puVar9 = (undefined8*)operator_new(0x58, DefaultAllocator::alloc);
   uVar5 = _LC49;
   *(undefined1*)( (long)puVar9 + 0x1c ) = 0;
   *puVar9 = uVar5;
   *(undefined4*)( puVar9 + 4 ) = 0;
   for (int i = 0; i < 3; i++) {
      *(undefined1(*) [16])( puVar9 + ( 2*i + 5 ) ) = (undefined1[16])0;
   }

   *(undefined4*)( puVar9 + 3 ) = 0;
   puVar9[2] = 0;
   *puVar9 = local_178;
   *(undefined4*)( puVar9 + 3 ) = (undefined4)local_160;
   *(undefined1*)( (long)puVar9 + 0x1c ) = local_160._4_1_;
   *(undefined4*)( puVar9 + 4 ) = (undefined4)local_158;
   StringName::operator =((StringName*)( puVar9 + 5 ), (StringName*)local_150);
   pOVar2 = (Object*)puVar9[7];
   puVar9[6] = local_150._8_8_;
   if (local_140 != pOVar2) {
      puVar9[7] = local_140;
      if (( local_140 != (Object*)0x0 ) && ( cVar7 = cVar7 == '\0' )) {
         puVar9[7] = 0;
      }

      if (( ( pOVar2 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
if (puVar9[2] != local_168) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( puVar9 + 2 ), (CowData*)&local_168);
}
plVar3 = *(long**)param_1;lVar11 = plVar3[1];puVar9[10] = plVar3;puVar9[8] = 0;puVar9[9] = lVar11;if (lVar11 != 0) {
   *(undefined8**)( lVar11 + 0x40 ) = puVar9;
}
plVar3[1] = (long)puVar9;if (*plVar3 == 0) {
   *plVar3 = (long)puVar9;
}
*(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;if (( ( local_140 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar2 = local_140,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);Memory::free_static(pOVar2, false);}if (( StringName::configured != '\0' ) && ( local_150._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_168);if (( ( local_188 != (Object*)0x0 ) && ( cVar7 = RefCounted::unreference() ),pOVar2 = local_188,cVar7 != '\0' )) &&( cVar7 = cVar7 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);Memory::free_static(pOVar2, false);}if (( StringName::configured != '\0' ) && ( local_198 != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_1b0);GDScriptParser::DataType::~DataType(local_138);lVar11 = *(long*)( in_RCX + 0x180 );}lVar13 = lVar13 + 1;}while (lVar11 != 0) ;;;}if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* GDScriptCompiler::_prepare_compilation(GDScript*, GDScriptParser::ClassNode const*, bool) */int GDScriptCompiler::_prepare_compilation(GDScriptCompiler *this, GDScript *param_1, ClassNode *param_2, bool param_3) {
   StringName *pSVar1;
   uint *puVar2;
   undefined8 *puVar3;
   undefined4 uVar4;
   void *pvVar5;
   GDScriptFunction *pGVar6;
   ClassNode *pCVar7;
   VariableNode *pVVar8;
   long lVar9;
   undefined8 uVar10;
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
   undefined1 auVar59[16];
   undefined1 auVar60[16];
   undefined1 auVar61[16];
   undefined1 auVar62[16];
   code *pcVar63;
   undefined1 auVar64[16];
   undefined1 auVar65[16];
   undefined1 auVar66[16];
   undefined8 uVar67;
   char cVar68;
   GDScript GVar69;
   int iVar70;
   ulong uVar71;
   Object *pOVar72;
   GDScript *pGVar73;
   int *piVar74;
   undefined8 *puVar75;
   MethodInfo *this_00;
   Variant *pVVar76;
   uint uVar77;
   long lVar78;
   long lVar79;
   long lVar80;
   Object *pOVar81;
   HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>> *this_01;
   long *plVar82;
   int *piVar83;
   undefined4 *puVar84;
   ulong uVar85;
   uint uVar86;
   char *pcVar87;
   CowData *pCVar88;
   ulong uVar89;
   uint uVar90;
   uint uVar91;
   uint uVar92;
   ulong uVar93;
   long *plVar94;
   long lVar95;
   uint *puVar96;
   long in_FS_OFFSET;
   bool bVar97;
   GDScript *local_360;
   undefined8 *local_340;
   StringName *local_330;
   CowData *local_328;
   CowData<Variant> *local_320;
   GDScript *local_300[2];
   int local_2f0;
   undefined4 uStack_2ec;
   GDScript *local_2e8;
   String *local_2e0;
   long local_2d8[2];
   Variant local_2c8[8];
   undefined1 local_2c0[16];
   undefined1 local_2b0[16];
   undefined8 local_2a0;
   GDScriptFunction *local_298;
   undefined1 local_290[16];
   undefined1 local_280[16];
   undefined8 local_270;
   long local_268[2];
   int local_258;
   long local_248;
   Object *local_240;
   undefined8 local_228;
   long local_220;
   long local_218;
   undefined4 local_210;
   long local_208;
   uint local_200;
   ulong local_1e8;
   undefined1 local_1e0[16];
   undefined8 local_1d0;
   long local_1c8;
   undefined4 local_1c0;
   char local_1bc;
   undefined4 local_1b8;
   StringName local_1b0[8];
   undefined8 uStack_1a8;
   Object *local_1a0;
   undefined4 local_198;
   undefined1 local_190[16];
   undefined4 local_180;
   long local_178;
   uint local_170;
   Ref *local_168;
   undefined1 local_160[16];
   undefined4 local_150;
   long local_148;
   uint local_140;
   undefined1 local_13c;
   undefined4 local_138;
   StringName local_130[8];
   undefined8 uStack_128;
   Object *local_120;
   undefined4 local_118;
   undefined1 local_110[16];
   undefined4 local_100;
   long local_f8;
   undefined4 local_f0;
   int local_78[8];
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_300[0] = param_1;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar89 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
      lVar95 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar71 = (long)param_1 * 0x3ffff - 1;
      uVar71 = ( uVar71 ^ uVar71 >> 0x1f ) * 0x15;
      uVar71 = ( uVar71 ^ uVar71 >> 0xb ) * 0x41;
      uVar71 = uVar71 >> 0x16 ^ uVar71;
      uVar93 = uVar71 & 0xffffffff;
      if ((int)uVar71 == 0) {
         uVar93 = 1;
      }

      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar93 * lVar95;
      auVar37._8_8_ = 0;
      auVar37._0_8_ = uVar89;
      lVar78 = SUB168(auVar11 * auVar37, 8);
      uVar86 = *(uint*)( *(long*)( this + 0x20 ) + lVar78 * 4 );
      iVar70 = SUB164(auVar11 * auVar37, 8);
      if (uVar86 != 0) {
         uVar91 = 0;
         do {
            if (( uVar86 == (uint)uVar93 ) && ( param_1 == *(GDScript**)( *(long*)( this + 8 ) + ( ulong ) * (uint*)( *(long*)( this + 0x10 ) + lVar78 * 4 ) * 8 ) )) {
               iVar70 = 0;
               goto LAB_001052c0;
            }

            uVar91 = uVar91 + 1;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(iVar70 + 1) * lVar95;
            auVar38._8_8_ = 0;
            auVar38._0_8_ = uVar89;
            lVar78 = SUB168(auVar12 * auVar38, 8);
            uVar86 = *(uint*)( *(long*)( this + 0x20 ) + lVar78 * 4 );
            iVar70 = SUB164(auVar12 * auVar38, 8);
         }
 while ( ( uVar86 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar86 * lVar95,auVar39._8_8_ = 0,auVar39._0_8_ = uVar89,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + iVar70 ) - SUB164(auVar13 * auVar39, 8)) * lVar95,auVar40._8_8_ = 0,auVar40._0_8_ = uVar89,uVar91 <= SUB164(auVar14 * auVar40, 8) );
      }

   }

   if (( *(long*)( this + 0x30 ) != 0 ) && ( *(int*)( this + 0x54 ) != 0 )) {
      uVar89 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 ));
      lVar95 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x50 ) * 8 );
      uVar71 = (long)param_1 * 0x3ffff - 1;
      uVar71 = ( uVar71 ^ uVar71 >> 0x1f ) * 0x15;
      uVar71 = ( uVar71 ^ uVar71 >> 0xb ) * 0x41;
      uVar71 = uVar71 >> 0x16 ^ uVar71;
      uVar93 = uVar71 & 0xffffffff;
      if ((int)uVar71 == 0) {
         uVar93 = 1;
      }

      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar93 * lVar95;
      auVar41._8_8_ = 0;
      auVar41._0_8_ = uVar89;
      lVar78 = SUB168(auVar15 * auVar41, 8);
      uVar86 = *(uint*)( *(long*)( this + 0x48 ) + lVar78 * 4 );
      iVar70 = SUB164(auVar15 * auVar41, 8);
      if (uVar86 != 0) {
         uVar91 = 0;
         do {
            if (( (uint)uVar93 == uVar86 ) && ( param_1 == *(GDScript**)( *(long*)( this + 0x30 ) + ( ulong ) * (uint*)( *(long*)( this + 0x38 ) + lVar78 * 4 ) * 8 ) )) {
               if (*(long*)( param_2 + 0x128 ) == 0) {
                  if (*(long*)( param_2 + 0x298 ) == 0) goto LAB_00107c2c;
                  pCVar88 = (CowData*)( param_2 + 0x298 );
                  LAB_00107abf:local_268[0] = 0;
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_268, pCVar88);
                  LAB_0010546d:local_328 = (CowData*)local_268;
                  local_1e8 = 0;
                  if (local_268[0] != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, local_328);
                  }

               }
 else {
                  lVar95 = *(long*)( *(long*)( param_2 + 0x128 ) + 0x148 );
                  if (lVar95 != 0) {
                     local_268[0] = 0;
                     if (*(char**)( lVar95 + 8 ) != (char*)0x0) {
                        String::parse_latin1((String*)local_268, *(char**)( lVar95 + 8 ));
                        goto LAB_0010546d;
                     }

                     pCVar88 = (CowData*)( lVar95 + 0x10 );
                     if (*(long*)( lVar95 + 0x10 ) != 0) goto LAB_00107abf;
                  }

                  LAB_00107c2c:local_268[0] = 0;
                  local_1e8 = 0;
               }

               local_328 = (CowData*)local_268;
               local_228 = 0;
               local_160._0_8_ = 0x20;
               local_168 = (Ref*)0x119a90;
               String::parse_latin1((StrRange*)&local_228);
               vformat<String>((CowData<char32_t>*)&local_168, (StrRange*)&local_228, (CowData<char32_t>*)&local_1e8);
               _set_error(this, (String*)&local_168, (Node*)param_2);
               iVar70 = 0x2b;
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_328);
               goto LAB_001052c0;
            }

            uVar91 = uVar91 + 1;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = ( ulong )(iVar70 + 1) * lVar95;
            auVar42._8_8_ = 0;
            auVar42._0_8_ = uVar89;
            lVar78 = SUB168(auVar16 * auVar42, 8);
            uVar86 = *(uint*)( *(long*)( this + 0x48 ) + lVar78 * 4 );
            iVar70 = SUB164(auVar16 * auVar42, 8);
         }
 while ( ( uVar86 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar86 * lVar95,auVar43._8_8_ = 0,auVar43._0_8_ = uVar89,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 ) + iVar70 ) - SUB164(auVar17 * auVar43, 8)) * lVar95,auVar44._8_8_ = 0,auVar44._0_8_ = uVar89,uVar91 <= SUB164(auVar18 * auVar44, 8) );
      }

   }

   HashSet<GDScript*,HashMapHasherDefault,HashMapComparatorDefault<GDScript*>>::insert((GDScript**)&local_168);
   pOVar81 = *(Object**)( param_1 + 0x248 );
   param_1[0x6a9] = (GDScript)0x1;
   if (pOVar81 != (Object*)0x0) {
      *(undefined8*)( param_1 + 0x248 ) = 0;
      cVar68 = RefCounted::unreference();
      if (( cVar68 != '\0' ) && ( cVar68 = cVar68 != '\0' )) {
         ( **(code**)( *(long*)pOVar81 + 0x140 ) )(pOVar81);
         Memory::free_static(pOVar81, false);
      }

   }

   pOVar81 = *(Object**)( param_1 + 0x250 );
   if (pOVar81 != (Object*)0x0) {
      *(undefined8*)( param_1 + 0x250 ) = 0;
      cVar68 = RefCounted::unreference();
      if (( cVar68 != '\0' ) && ( cVar68 = cVar68 != '\0' )) {
         ( **(code**)( *(long*)pOVar81 + 0x140 ) )(pOVar81);
         Memory::free_static(pOVar81, false);
      }

   }

   lVar95 = *(long*)( param_1 + 0x298 );
   *(undefined8*)( param_1 + 600 ) = 0;
   if (( lVar95 != 0 ) && ( *(int*)( param_1 + 700 ) != 0 )) {
      if (( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x2b8 ) * 4 ) == 0 ) || ( memset(*(void**)( param_1 + 0x2b0 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x2b8 ) * 4 ) * 4),*(int*)( param_1 + 700 ) != 0 )) {
         lVar78 = 0;
         while (true) {
            if (( StringName::configured != '\0' ) && ( *(long*)( lVar95 + lVar78 * 8 ) != 0 )) {
               StringName::unref();
            }

            lVar78 = lVar78 + 1;
            if (*(uint*)( param_1 + 700 ) <= (uint)lVar78) break;
            lVar95 = *(long*)( param_1 + 0x298 );
         }
;
      }

      *(undefined4*)( param_1 + 700 ) = 0;
   }

   uVar71 = _LC9;
   local_2c0 = (undefined1[16])0x0;
   plVar94 = *(long**)( param_1 + 0x318 );
   local_2a0 = _LC9;
   local_2b0 = (undefined1[16])0x0;
   if (plVar94 == (long*)0x0) {
      if (( *(long*)( param_1 + 0x308 ) != 0 ) && ( *(int*)( param_1 + 0x32c ) != 0 )) {
         uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x328 ) * 4 );
         puVar75 = (undefined8*)0x0;
         if (uVar86 != 0) goto LAB_00105719;
         *(undefined4*)( param_1 + 0x32c ) = 0;
         *(undefined1(*) [16])( param_1 + 0x318 ) = (undefined1[16])0x0;
      }

   }
 else {
      do {
         HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::insert((StringName*)&local_168, local_2c8, (bool)( (char)plVar94 + '\x10' ));
         plVar94 = (long*)*plVar94;
      }
 while ( plVar94 != (long*)0x0 );
      puVar75 = (undefined8*)local_2c0._0_8_;
      if (( *(long*)( param_1 + 0x308 ) != 0 ) && ( *(int*)( param_1 + 0x32c ) != 0 )) {
         uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x328 ) * 4 );
         if (uVar86 != 0) {
            LAB_00105719:lVar95 = 0;
            do {
               if (*(int*)( *(long*)( param_1 + 0x310 ) + lVar95 ) != 0) {
                  *(int*)( *(long*)( param_1 + 0x310 ) + lVar95 ) = 0;
                  pvVar5 = *(void**)( *(long*)( param_1 + 0x308 ) + lVar95 * 2 );
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  *(undefined8*)( *(long*)( param_1 + 0x308 ) + lVar95 * 2 ) = 0;
               }

               lVar95 = lVar95 + 4;
            }
 while ( (ulong)uVar86 * 4 != lVar95 );
         }

         *(undefined4*)( param_1 + 0x32c ) = 0;
         *(undefined1(*) [16])( param_1 + 0x318 ) = (undefined1[16])0x0;
      }

      if (( puVar75 != (undefined8*)0x0 ) && ( local_2a0._4_4_ != 0 )) {
         if (*(uint*)( hash_table_size_primes + ( local_2a0 & 0xffffffff ) * 4 ) != 0) {
            piVar74 = (int*)( local_2c0._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_2a0 & 0xffffffff ) * 4 ) * 4 );
            piVar83 = (int*)local_2c0._8_8_;
            do {
               if (*piVar83 != 0) {
                  pvVar5 = (void*)*puVar75;
                  *piVar83 = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x18 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  *puVar75 = 0;
               }

               piVar83 = piVar83 + 1;
               puVar75 = puVar75 + 1;
            }
 while ( piVar83 != piVar74 );
         }

         local_2a0 = local_2a0 & 0xffffffff;
         local_2b0 = (undefined1[16])0x0;
      }

   }

   local_270 = uVar71;
   local_290 = (undefined1[16])0x0;
   plVar94 = *(long**)( param_1 + 0x348 );
   local_280 = (undefined1[16])0x0;
   if (plVar94 == (long*)0x0) {
      if (( *(long*)( param_1 + 0x338 ) != 0 ) && ( *(int*)( param_1 + 0x35c ) != 0 )) {
         local_340 = (undefined8*)0x0;
         puVar75 = (undefined8*)0x0;
         goto LAB_00105927;
      }

      LAB_00107e14:local_340 = (undefined8*)0x0;
   }
 else {
      do {
         HashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>>::insert((StringName*)&local_168, &local_298, (bool)( (char)plVar94 + '\x10' ));
         plVar94 = (long*)*plVar94;
      }
 while ( plVar94 != (long*)0x0 );
      local_340 = (undefined8*)local_290._0_8_;
      puVar75 = (undefined8*)local_280._0_8_;
      uVar71 = local_270;
      if (( *(long*)( param_1 + 0x338 ) != 0 ) && ( *(int*)( param_1 + 0x35c ) != 0 )) {
         LAB_00105927:lVar95 = 0;
         uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x358 ) * 4 );
         if (uVar86 != 0) {
            do {
               if (*(int*)( *(long*)( param_1 + 0x340 ) + lVar95 ) != 0) {
                  *(int*)( *(long*)( param_1 + 0x340 ) + lVar95 ) = 0;
                  pvVar5 = *(void**)( *(long*)( param_1 + 0x338 ) + lVar95 * 2 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  *(undefined8*)( *(long*)( param_1 + 0x338 ) + lVar95 * 2 ) = 0;
               }

               lVar95 = lVar95 + 4;
            }
 while ( lVar95 != (ulong)uVar86 << 2 );
         }

         *(undefined4*)( param_1 + 0x35c ) = 0;
         *(undefined1(*) [16])( param_1 + 0x348 ) = (undefined1[16])0x0;
         uVar71 = local_270;
      }

      for (; local_270 = uVar71,puVar75 != (undefined8*)0x0; puVar75 = (undefined8*)*puVar75) {
         pGVar6 = (GDScriptFunction*)puVar75[3];
         GDScriptFunction::~GDScriptFunction(pGVar6);
         Memory::free_static(pGVar6, false);
         uVar71 = local_270;
      }

      if (local_340 == (undefined8*)0x0) goto LAB_00107e14;
      local_270._4_4_ = (int)( uVar71 >> 0x20 );
      bVar97 = local_270._4_4_ != 0;
      if (bVar97) {
         if (*(uint*)( hash_table_size_primes + ( uVar71 & 0xffffffff ) * 4 ) != 0) {
            piVar74 = (int*)( local_290._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( uVar71 & 0xffffffff ) * 4 ) * 4 );
            piVar83 = (int*)local_290._8_8_;
            puVar75 = local_340;
            do {
               if (*piVar83 != 0) {
                  bVar97 = StringName::configured != '\0';
                  pvVar5 = (void*)*puVar75;
                  *piVar83 = 0;
                  if (( bVar97 ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar5, false);
                  *puVar75 = 0;
               }

               piVar83 = piVar83 + 1;
               puVar75 = puVar75 + 1;
            }
 while ( piVar83 != piVar74 );
         }

         local_270 = local_270 & 0xffffffff;
         local_280 = (undefined1[16])0x0;
      }

   }

   local_320 = (CowData<Variant>*)( param_1 + 0x2f8 );
   CowData<Variant>::resize<false>(local_320, 0);
   for (int i = 0; i < 3; i++) {
      pGVar6 = *(GDScriptFunction**)( param_1 + ( 8*i + 1648 ) );
      if (pGVar6 != (GDScriptFunction*)0) {
         GDScriptFunction::~GDScriptFunction(pGVar6);
         Memory::free_static(pGVar6, false);
      }

   }

   if (( *(long*)( param_1 + 0x338 ) != 0 ) && ( *(int*)( param_1 + 0x35c ) != 0 )) {
      lVar95 = 0;
      uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x358 ) * 4 );
      if (uVar86 != 0) {
         do {
            if (*(int*)( *(long*)( param_1 + 0x340 ) + lVar95 ) != 0) {
               *(int*)( *(long*)( param_1 + 0x340 ) + lVar95 ) = 0;
               pvVar5 = *(void**)( *(long*)( param_1 + 0x338 ) + lVar95 * 2 );
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar5, false);
               *(undefined8*)( *(long*)( param_1 + 0x338 ) + lVar95 * 2 ) = 0;
            }

            lVar95 = lVar95 + 4;
         }
 while ( (ulong)uVar86 << 2 != lVar95 );
      }

      *(undefined4*)( param_1 + 0x35c ) = 0;
      *(undefined1(*) [16])( param_1 + 0x348 ) = (undefined1[16])0x0;
   }

   if (( *(long*)( param_1 + 0x270 ) != 0 ) && ( *(int*)( param_1 + 0x294 ) != 0 )) {
      lVar95 = 0;
      uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x290 ) * 4 );
      if (uVar86 != 0) {
         do {
            if (*(int*)( *(long*)( param_1 + 0x278 ) + lVar95 ) != 0) {
               *(int*)( *(long*)( param_1 + 0x278 ) + lVar95 ) = 0;
               pvVar5 = *(void**)( *(long*)( param_1 + 0x270 ) + lVar95 * 2 );
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x88 ));
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x78 ) != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x70 ));
               GDScriptDataType::~GDScriptDataType((GDScriptDataType*)( (long)pvVar5 + 0x30 ));
               if (( ( ( StringName::configured != '\0' ) && ( ( *(long*)( (long)pvVar5 + 0x28 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( (long)pvVar5 + 0x20 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar5, false);
               *(undefined8*)( *(long*)( param_1 + 0x270 ) + lVar95 * 2 ) = 0;
            }

            lVar95 = lVar95 + 4;
         }
 while ( lVar95 != (ulong)uVar86 << 2 );
      }

      *(undefined4*)( param_1 + 0x294 ) = 0;
      *(undefined1(*) [16])( param_1 + 0x280 ) = (undefined1[16])0x0;
   }

   if (( *(long*)( param_1 + 0x2c8 ) != 0 ) && ( *(int*)( param_1 + 0x2ec ) != 0 )) {
      lVar95 = 0;
      uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x2e8 ) * 4 );
      if (uVar86 != 0) {
         do {
            if (*(int*)( *(long*)( param_1 + 0x2d0 ) + lVar95 ) != 0) {
               *(int*)( *(long*)( param_1 + 0x2d0 ) + lVar95 ) = 0;
               pvVar5 = *(void**)( *(long*)( param_1 + 0x2c8 ) + lVar95 * 2 );
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x88 ));
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x78 ) != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar5 + 0x70 ));
               GDScriptDataType::~GDScriptDataType((GDScriptDataType*)( (long)pvVar5 + 0x30 ));
               if (( ( StringName::configured != '\0' ) && ( ( *(long*)( (long)pvVar5 + 0x28 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( ( *(long*)( (long)pvVar5 + 0x20 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 ) ) )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar5, false);
               *(undefined8*)( *(long*)( param_1 + 0x2c8 ) + lVar95 * 2 ) = 0;
            }

            lVar95 = lVar95 + 4;
         }
 while ( lVar95 != (ulong)uVar86 << 2 );
      }

      *(undefined4*)( param_1 + 0x2ec ) = 0;
      *(undefined1(*) [16])( param_1 + 0x2d8 ) = (undefined1[16])0x0;
   }

   CowData<Variant>::resize<false>(local_320, 0);
   if (( *(long*)( param_1 + 0x398 ) != 0 ) && ( *(int*)( param_1 + 0x3bc ) != 0 )) {
      lVar95 = 0;
      uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x3b8 ) * 4 );
      if (uVar86 != 0) {
         do {
            if (*(int*)( *(long*)( param_1 + 0x3a0 ) + lVar95 ) != 0) {
               *(int*)( *(long*)( param_1 + 0x3a0 ) + lVar95 ) = 0;
               pvVar5 = *(void**)( *(long*)( param_1 + 0x398 ) + lVar95 * 2 );
               MethodInfo::~MethodInfo((MethodInfo*)( (long)pvVar5 + 0x18 ));
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar5, false);
               *(undefined8*)( *(long*)( param_1 + 0x398 ) + lVar95 * 2 ) = 0;
            }

            lVar95 = lVar95 + 4;
         }
 while ( lVar95 != (ulong)uVar86 << 2 );
      }

      *(undefined4*)( param_1 + 0x3bc ) = 0;
      *(undefined1(*) [16])( param_1 + 0x3a8 ) = (undefined1[16])0x0;
   }

   *(undefined1(*) [16])( param_1 + 0x668 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x678 ) = (undefined1[16])0x0;
   Dictionary::clear();
   if (( *(long*)( param_1 + 0x3d0 ) != 0 ) && ( *(int*)( param_1 + 0x3f4 ) != 0 )) {
      lVar95 = 0;
      uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x3f0 ) * 4 );
      if (uVar86 != 0) {
         do {
            if (*(int*)( *(long*)( param_1 + 0x3d8 ) + lVar95 ) != 0) {
               *(int*)( *(long*)( param_1 + 0x3d8 ) + lVar95 ) = 0;
               Memory::free_static(*(void**)( *(long*)( param_1 + 0x3d0 ) + lVar95 * 2 ), false);
               *(undefined8*)( *(long*)( param_1 + 0x3d0 ) + lVar95 * 2 ) = 0;
            }

            lVar95 = lVar95 + 4;
         }
 while ( lVar95 != (ulong)uVar86 << 2 );
      }

      *(undefined4*)( param_1 + 0x3f4 ) = 0;
      *(undefined1(*) [16])( param_1 + 0x3e0 ) = (undefined1[16])0x0;
   }

   pGVar73 = *(GDScript**)this;
   param_1[0x6a9] = (GDScript)0x0;
   param_1[0x240] = *pGVar73;
   if (*(long*)( param_1 + 0x6d8 ) != 0) {
      pSVar1 = (StringName*)( param_1 + 0x6d8 );
      cVar68 = ClassDB::class_exists(pSVar1);
      if (( cVar68 != '\0' ) && ( cVar68 = ClassDB::is_class_exposed(pSVar1) ),cVar68 != '\0') {
         StringName::StringName((StringName*)&local_1e8, pSVar1);
         local_228 = 0;
         String::parse_latin1((String*)&local_228, "The class \"%s\" shadows a native class");
         vformat<StringName>((StringName*)&local_168, (String*)&local_228, (StringName*)&local_1e8);
         _set_error(this, (String*)&local_168, (Node*)param_2);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
         if (( StringName::configured != '\0' ) && ( local_1e8 != 0 )) {
            StringName::unref();
         }

         iVar70 = 0x20;
         goto LAB_00106323;
      }

   }

   _gdtype_from_datatype((DataType*)local_268, (GDScript*)this, (bool)( (char)param_2 + -0x58 ));
   if (local_248 != 0) {
      if (( *(long*)( GDScriptLanguage::singleton + 0x198 ) != 0 ) && ( *(int*)( GDScriptLanguage::singleton + 0x1bc ) != 0 )) {
         uVar71 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( GDScriptLanguage::singleton + 0x1b8 ) * 4 ));
         lVar95 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( GDScriptLanguage::singleton + 0x1b8 ) * 8 );
         uVar86 = *(uint*)( local_248 + 0x20 );
         if (*(uint*)( local_248 + 0x20 ) == 0) {
            uVar86 = 1;
         }

         auVar19._8_8_ = 0;
         auVar19._0_8_ = (ulong)uVar86 * lVar95;
         auVar45._8_8_ = 0;
         auVar45._0_8_ = uVar71;
         lVar78 = SUB168(auVar19 * auVar45, 8);
         uVar91 = *(uint*)( *(long*)( GDScriptLanguage::singleton + 0x1a0 ) + lVar78 * 4 );
         iVar70 = SUB164(auVar19 * auVar45, 8);
         if (uVar91 != 0) {
            uVar92 = 0;
            do {
               if (( uVar91 == uVar86 ) && ( local_248 == *(long*)( *(long*)( *(long*)( GDScriptLanguage::singleton + 0x198 ) + lVar78 * 8 ) + 0x10 ) )) {
                  pOVar72 = (Object*)Variant::get_validated_object();
                  pOVar81 = *(Object**)( param_1 + 0x248 );
                  if (pOVar72 == pOVar81) {
                     LAB_00106207:if (pOVar81 == (Object*)0x0) goto LAB_001081f4;
                     bVar97 = SUB81((StringName*)&local_168, 0);
                     if (local_258 == 2) goto LAB_001067c8;
                     if (local_258 == 4) {
                        Variant::Variant((Variant*)local_58, local_240);
                        local_2e8 = (GDScript*)0x0;
                        lVar95 = Variant::get_validated_object();
                        if (( lVar95 == 0 ) || ( pGVar73 = (GDScript*)__dynamic_cast(lVar95, &Object::typeinfo, &GDScript::typeinfo, 0) ),pGVar73 == (GDScript*)0x0) {
                           LAB_001062b4:if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           local_168 = (Ref*)0x0;
                           String::parse_latin1((String*)&local_168, "Compiler bug (please report): base script type is null.");
                           _set_error(this, (String*)&local_168, (Node*)0x0);
                           iVar70 = 0x2f;
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
                        }
 else {
                           local_168 = (Ref*)0x0;
                           local_2e8 = pGVar73;
                           cVar68 = RefCounted::reference();
                           if (cVar68 == '\0') {
                              local_2e8 = (GDScript*)0x0;
                              Ref<GDScript>::unref((Ref<GDScript>*)&local_168);
                              goto LAB_001062b4;
                           }

                           Ref<GDScript>::unref((Ref<GDScript>*)&local_168);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           cVar68 = GDScript::has_class(*(GDScript**)( this + 0x58 ));
                           if (cVar68 == '\0') {
                              if (*(code**)( *(long*)pGVar73 + 0x278 ) == GDScript::is_valid) {
                                 GVar69 = pGVar73[0x241];
                              }
 else {
                                 GVar69 = ( GDScript )(**(code**)( *(long*)pGVar73 + 0x278 ))(pGVar73);
                              }

                              if (GVar69 != (GDScript)0x0) {
                                 LAB_0010667c:this_01 = (HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>*)( param_1 + 0x268 );
                                 Ref<GDScript>::operator =((Ref<GDScript>*)( param_1 + 0x250 ), (Ref*)pGVar73);
                                 *(GDScript**)( param_1 + 600 ) = pGVar73;
                                 if (this_01 == (HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>*)( (Ref*)pGVar73 + 0x268 )) goto LAB_00106777;
                                 if (*(int*)( param_1 + 0x294 ) != 0) {
                                    HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>::clear(this_01);
                                 }

                                 uVar86 = *(uint*)( param_1 + 0x290 );
                                 if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (Ref*)pGVar73 + 0x290 ) * 4 ) <= *(uint*)( hash_table_size_primes + (ulong)uVar86 * 4 )) goto LAB_0010673a;
                                 if (uVar86 == 0x1c) goto LAB_0010670b;
                                 uVar71 = (ulong)uVar86;
                                 goto LAB_001066f0;
                              }

                              local_2f0 = 0;
                              GDScriptCache::get_shallow_script((String*)&local_2e0, (CowData*)( pGVar73 + 0x6c8 ), (String*)&local_2f0);
                              if (local_2f0 == 0) {
                                 if (local_2e0 != (String*)0x0) {
                                    pGVar73 = (GDScript*)GDScript::find_class(local_2e0);
                                    local_168 = (Ref*)0x0;
                                    Ref<GDScript>::operator =((Ref<GDScript>*)&local_168, pGVar73);
                                    Ref<GDScript>::operator =((Ref<GDScript>*)&local_2e8, local_168);
                                    Ref<GDScript>::unref((Ref<GDScript>*)&local_168);
                                    pGVar73 = local_2e8;
                                    if (local_2e8 == (GDScript*)0x0) {
                                       /* WARNING: Does not return */
                                       pcVar63 = (code*)invalidInstructionException();
                                       ( *pcVar63 )();
                                    }

                                 }

                                 local_2f0 = _prepare_compilation(this, pGVar73, *(ClassNode**)( param_2 + 0x1f0 ), param_3);
                                 if (local_2f0 == 0) {
                                    Ref<GDScript>::unref((Ref<GDScript>*)&local_2e0);
                                    pGVar73 = local_2e8;
                                    goto LAB_0010667c;
                                 }

                                 local_1e8 = 0;
                                 if (*(long*)( pGVar73 + 0x6c8 ) != 0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, (CowData*)( pGVar73 + 0x6c8 ));
                                 }

                                 local_228 = 0;
                                 if (*(long*)( pGVar73 + 0x6e8 ) != 0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)( pGVar73 + 0x6e8 ));
                                 }

                                 local_2d8[0] = 0;
                                 String::parse_latin1((String*)local_2d8, "Could not populate class members of base class \"%s\" in \"%s\".");
                                 vformat<String,String>((StringName*)&local_168, (String*)local_2d8, (CowData<char32_t>*)&local_228, (CowData<char32_t>*)&local_1e8);
                                 _set_error(this, (String*)&local_168, (Node*)0x0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)local_2d8);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
                              }
 else {
                                 uVar10 = *(undefined8*)( &error_names + (long)local_2f0 * 8 );
                                 local_1e8 = 0;
                                 if (*(long*)( pGVar73 + 0x6c8 ) != 0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, (CowData*)( pGVar73 + 0x6c8 ));
                                 }

                                 local_228 = 0;
                                 if (*(long*)( pGVar73 + 0x6e8 ) != 0) {
                                    CowData<char32_t>::_ref((CowData<char32_t>*)&local_228, (CowData*)( pGVar73 + 0x6e8 ));
                                 }

                                 local_2d8[0] = 0;
                                 String::parse_latin1((String*)local_2d8, "Could not parse base class \"%s\" from \"%s\": %s");
                                 vformat<String,String,char_const*>((StringName*)&local_168, (String*)local_2d8, (CowData<char32_t>*)&local_228, (CowData<char32_t>*)&local_1e8, uVar10);
                                 _set_error(this, (String*)&local_168, (Node*)0x0);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)local_2d8);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
                              }

                              iVar70 = local_2f0;
                              Ref<GDScript>::unref((Ref<GDScript>*)&local_2e0);
                           }
 else {
                              iVar70 = _prepare_compilation(this, pGVar73, *(ClassNode**)( param_2 + 0x1f0 ), param_3);
                              if (iVar70 == 0) goto LAB_0010667c;
                           }

                        }

                        Ref<GDScript>::unref((Ref<GDScript>*)&local_2e8);
                        goto LAB_00106319;
                     }

                     pcVar87 = "Parser bug (please report): invalid inheritance.";
                  }
 else {
                     if (pOVar72 == (Object*)0x0) {
                        if (pOVar81 != (Object*)0x0) {
                           *(undefined8*)( param_1 + 0x248 ) = 0;
                           LAB_001061eb:cVar68 = RefCounted::unreference();
                           if (( cVar68 != '\0' ) && ( cVar68 = cVar68 != '\0' )) {
                              ( **(code**)( *(long*)pOVar81 + 0x140 ) )(pOVar81);
                              Memory::free_static(pOVar81, false);
                           }

                           LAB_001061fb:pOVar81 = *(Object**)( param_1 + 0x248 );
                           goto LAB_00106207;
                        }

                     }
 else {
                        pOVar72 = (Object*)__dynamic_cast(pOVar72, &Object::typeinfo, &GDScriptNativeClass::typeinfo, 0);
                        if (pOVar81 == pOVar72) goto LAB_00106207;
                        *(Object**)( param_1 + 0x248 ) = pOVar72;
                        if (pOVar72 != (Object*)0x0) {
                           cVar68 = RefCounted::reference();
                           if (cVar68 == '\0') {
                              *(undefined8*)( param_1 + 0x248 ) = 0;
                              goto LAB_001061e2;
                           }

                           if (pOVar81 != (Object*)0x0) goto LAB_001061eb;
                           goto LAB_001061fb;
                        }

                        LAB_001061e2:if (pOVar81 != (Object*)0x0) goto LAB_001061eb;
                     }

                     LAB_001081f4:pcVar87 = "Compiler bug (please report): script native type is null.";
                  }

                  local_168 = (Ref*)0x0;
                  String::parse_latin1((String*)&local_168, pcVar87);
                  _set_error(this, (String*)&local_168, (Node*)0x0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
                  goto LAB_00106604;
               }

               uVar92 = uVar92 + 1;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = ( ulong )(iVar70 + 1) * lVar95;
               auVar46._8_8_ = 0;
               auVar46._0_8_ = uVar71;
               lVar78 = SUB168(auVar20 * auVar46, 8);
               uVar91 = *(uint*)( *(long*)( GDScriptLanguage::singleton + 0x1a0 ) + lVar78 * 4 );
               iVar70 = SUB164(auVar20 * auVar46, 8);
            }
 while ( ( uVar91 != 0 ) && ( auVar21._8_8_ = 0 ),auVar21._0_8_ = (ulong)uVar91 * lVar95,auVar47._8_8_ = 0,auVar47._0_8_ = uVar71,auVar22._8_8_ = 0,auVar22._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( GDScriptLanguage::singleton + 0x1b8 ) * 4 ) + iVar70 ) - SUB164(auVar21 * auVar47, 8)) * lVar95,auVar48._8_8_ = 0,auVar48._0_8_ = uVar71,uVar92 <= SUB164(auVar22 * auVar48, 8) );
         }

      }

      _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar63 = (code*)invalidInstructionException();
      ( *pcVar63 )();
   }

   local_1e8 = 0;
   if (*(long*)( param_1 + 0x6c8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_1e8, (CowData*)( param_1 + 0x6c8 ));
   }

   local_228 = 0;
   local_168 = (Ref*)0x119ae0;
   local_160._0_8_ = 0x40;
   String::parse_latin1((StrRange*)&local_228);
   vformat<String>((StringName*)&local_168, (StrRange*)&local_228, (CowData<char32_t>*)&local_1e8);
   _set_error(this, (String*)&local_168, (Node*)param_2);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_228);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_1e8);
   LAB_00106604:iVar70 = 0x2f;
   goto LAB_00106319;
   LAB_00107540:uVar90 = uVar90 + 1;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = ( ulong )(uVar77 + 1) * lVar95;
   auVar54._8_8_ = 0;
   auVar54._0_8_ = uVar71;
   lVar80 = SUB168(auVar28 * auVar54, 8);
   uVar92 = *(uint*)( lVar79 + lVar80 * 4 );
   uVar77 = SUB164(auVar28 * auVar54, 8);
   if (( uVar92 == 0 ) || ( auVar29._8_8_ = 0 ),auVar29._0_8_ = (ulong)uVar92 * lVar95,auVar55._8_8_ = 0,auVar55._0_8_ = uVar71,auVar30._8_8_ = 0,auVar30._0_8_ = ( ulong )(( uVar86 + uVar77 ) - SUB164(auVar29 * auVar55, 8)) * lVar95,auVar56._8_8_ = 0,auVar56._0_8_ = uVar71,SUB164(auVar30 * auVar56, 8) < uVar90) goto LAB_0010773c;
   goto LAB_00107589;
   while (uVar91 != 0x1c) {
      LAB_001066f0:uVar91 = (int)uVar71 + 1;
      uVar71 = (ulong)uVar91;
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (Ref*)pGVar73 + 0x290 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar71 * 4 )) {
         if (uVar86 != uVar91) {
            if (*(long*)( param_1 + 0x270 ) == 0) {
               *(uint*)( param_1 + 0x290 ) = uVar91;
            }
 else {
               HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>::_resize_and_rehash(this_01, uVar91);
            }

         }

         goto LAB_0010673a;
      }

   }
;
   LAB_0010670b:_err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   LAB_0010673a:if (*(long*)( (Ref*)pGVar73 + 0x270 ) != 0) {
      for (puVar75 = *(undefined8**)( (Ref*)pGVar73 + 0x280 ); puVar75 != (undefined8*)0x0; puVar75 = (undefined8*)*puVar75) {
         HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>::insert((StringName*)&local_168, (MemberInfo*)this_01, (bool)( (char)puVar75 + '\x10' ));
      }

   }

   LAB_00106777:Ref<GDScript>::unref((Ref<GDScript>*)&local_2e8);
   if (( local_258 == 4 ) && ( *(long*)( param_1 + 0x250 ) != 0 )) {
      Dictionary::duplicate(bVar97);
      Dictionary::operator =((Dictionary*)( param_1 + 0x3c0 ), (Dictionary*)&local_168);
      Dictionary::~Dictionary((Dictionary*)&local_168);
   }

   LAB_001067c8:lVar95 = *(long*)( param_2 + 0x148 );
   local_360 = param_1;
   if (lVar95 != 0) {
      lVar78 = 0;
      do {
      if (*(long *)(lVar95 + -8) <= lVar78) break;
      puVar84 = (undefined4 *)(lVar78 * 0x70 + lVar95);
      switch(*puVar84) {
      case 2:
        StringName::StringName
                  ((StringName *)&local_1e8,
                   (StringName *)(*(long *)(*(long *)(puVar84 + 2) + 0x128) + 0x148));
        goto LAB_00106fb9;
      case 3:
        lVar95 = *(long *)(puVar84 + 2);
        Variant::Variant((Variant *)local_78,(Variant *)(lVar95 + 0x188));
        if (local_78[0] != 0) {
          Variant::Variant((Variant *)local_58,(StringName *)(*(long *)(lVar95 + 0x128) + 0x148));
          pVVar76 = (Variant *)Dictionary::operator[]((Variant *)(local_360 + 0x3c0));
          Variant::operator=(pVVar76,(Variant *)local_78);
          if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
          }
          if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
          }
        }
        goto LAB_00107924;
      case 4:
        lVar95 = *(long *)(puVar84 + 2);
        StringName::StringName
                  ((StringName *)&local_168,(StringName *)(*(long *)(lVar95 + 0x128) + 0x148));
        this_00 = (MethodInfo *)
                  HashMap<StringName,MethodInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,MethodInfo>>>
                  ::operator[]((HashMap<StringName,MethodInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,MethodInfo>>>
                                *)(local_360 + 0x390),(StringName *)&local_168);
        MethodInfo::operator=(this_00,(MethodInfo *)(lVar95 + 0x170));
        if ((StringName::configured == '\0') || (local_168 == (Ref *)0x0)) goto LAB_00107924;
        StringName::unref();
        lVar95 = *(long *)(param_2 + 0x148);
        break;
      case 5:
        pVVar8 = *(VariableNode **)(puVar84 + 2);
        StringName::StringName
                  ((StringName *)&local_2f0,(StringName *)(*(long *)(pVVar8 + 0x128) + 0x148));
        local_1e8 = local_1e8 & 0xffffffff00000000;
        _local_1b0 = (undefined1  [16])0x0;
        local_190 = (undefined1  [16])0x0;
        local_1c8 = 0;
        local_1c0 = 0;
        local_1bc = '\0';
        local_1b8 = 0;
        local_1a0 = (Object *)0x0;
        local_198 = 0;
        local_180 = 0;
        local_178 = 0;
        local_170 = 6;
        local_1e0 = (undefined1  [16])0x0;
        if (*(int *)(pVVar8 + 0x148) == 1) {
          if (*(long *)(pVVar8 + 0x150) != 0) {
            local_2d8[0] = 0;
            String::parse_latin1((String *)local_2d8,"_setter");
            lVar95 = *(long *)(*(long *)(pVVar8 + 0x128) + 0x148);
            if (lVar95 == 0) {
              local_2e8 = (GDScript *)0x0;
            }
            else {
              local_2e8 = (GDScript *)0x0;
              if (*(char **)(lVar95 + 8) == (char *)0x0) {
                if (*(long *)(lVar95 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_2e8,(CowData *)(lVar95 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)&local_2e8,*(char **)(lVar95 + 8));
              }
            }
            local_330 = (StringName *)&local_2e8;
            operator+((char *)&local_2e0,(String *)&_LC75);
            String::operator+((String *)&local_228,(String *)&local_2e0);
            StringName::StringName((StringName *)&local_168,(String *)&local_228,false);
            if ((Ref *)local_1e0._0_8_ == local_168) {
              if ((StringName::configured != '\0') && (local_168 != (Ref *)0x0)) {
                StringName::unref();
              }
            }
            else {
              StringName::unref();
              local_1e0._0_8_ = local_168;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_330);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_2d8);
          }
          if (*(long *)(pVVar8 + 0x160) != 0) {
            local_2d8[0] = 0;
            String::parse_latin1((String *)local_2d8,"_getter");
            lVar95 = *(long *)(*(long *)(pVVar8 + 0x128) + 0x148);
            if (lVar95 == 0) {
              local_2e8 = (GDScript *)0x0;
            }
            else {
              local_2e8 = (GDScript *)0x0;
              if (*(char **)(lVar95 + 8) == (char *)0x0) {
                if (*(long *)(lVar95 + 0x10) != 0) {
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_2e8,(CowData *)(lVar95 + 0x10));
                }
              }
              else {
                String::parse_latin1((String *)&local_2e8,*(char **)(lVar95 + 8));
              }
            }
            local_330 = (StringName *)&local_2e8;
            operator+((char *)&local_2e0,(String *)&_LC75);
            String::operator+((String *)&local_228,(String *)&local_2e0);
            StringName::StringName((StringName *)&local_168,(String *)&local_228,false);
            if ((Ref *)local_1e0._8_8_ == local_168) {
              if ((StringName::configured != '\0') && (local_168 != (Ref *)0x0)) {
                StringName::unref();
              }
            }
            else {
              StringName::unref();
              local_1e0._8_8_ = local_168;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e0);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_330);
            CowData<char32_t>::_unref((CowData<char32_t> *)local_2d8);
          }
        }
        else if (*(int *)(pVVar8 + 0x148) == 2) {
          if (*(long *)(pVVar8 + 0x150) != 0) {
            StringName::operator=
                      ((StringName *)local_1e0,(StringName *)(*(long *)(pVVar8 + 0x150) + 0x148));
          }
          if (*(long *)(pVVar8 + 0x160) != 0) {
            StringName::operator=
                      ((StringName *)(local_1e0 + 8),
                       (StringName *)(*(long *)(pVVar8 + 0x160) + 0x148));
          }
        }
        if ((code *)**(undefined8 **)pVVar8 == GDScriptParser::Node::get_datatype) {
          GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(pVVar8 + 0x38));
        }
        else {
          (*(code *)**(undefined8 **)pVVar8)((StringName *)&local_168,pVVar8);
        }
        _gdtype_from_datatype((DataType *)&local_228,(GDScript *)this,bVar97);
        GDScriptDataType::operator=((GDScriptDataType *)&local_1d0,(GDScriptDataType *)&local_228);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_228);
        GDScriptParser::DataType::~DataType((DataType *)&local_168);
        if ((code *)**(undefined8 **)pVVar8 == GDScriptParser::Node::get_datatype) {
          GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(pVVar8 + 0x38));
        }
        else {
          (*(code *)**(undefined8 **)pVVar8)((StringName *)&local_168,pVVar8);
        }
        lVar95 = CONCAT44(uStack_2ec,local_2f0);
        if (lVar95 == 0) {
          local_2d8[0] = 0;
        }
        else {
          local_2d8[0] = 0;
          if (*(char **)(lVar95 + 8) == (char *)0x0) {
            if (*(long *)(lVar95 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)local_2d8,(CowData *)(lVar95 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)local_2d8,*(char **)(lVar95 + 8));
          }
        }
        GDScriptParser::DataType::to_property_info((String *)&local_228);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_2d8);
        GDScriptParser::DataType::~DataType((DataType *)&local_168);
        auVar64._8_8_ = 0;
        auVar64._0_8_ = local_160._8_8_;
        local_160 = auVar64 << 0x40;
        local_168 = (Ref *)CONCAT44(local_168._4_4_,*(undefined4 *)(pVVar8 + 0x170));
        if (*(long *)(pVVar8 + 0x178) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_160,(CowData *)(pVVar8 + 0x178));
        }
        StringName::StringName((StringName *)(local_160 + 8),(StringName *)(pVVar8 + 0x180));
        local_150 = *(undefined4 *)(pVVar8 + 0x188);
        local_148 = 0;
        if (*(long *)(pVVar8 + 400) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_148,(CowData *)(pVVar8 + 400));
        }
        local_140 = *(uint *)(pVVar8 + 0x198);
        uVar86 = local_200;
        if (pVVar8[0x168] != (VariableNode)0x0) {
          if (local_1bc == '\0') {
            local_228 = CONCAT44(local_228._4_4_,local_168._0_4_);
            StringName::operator=((StringName *)&local_218,(StringName *)(local_160 + 8));
          }
          local_210 = local_150;
          uVar86 = local_140;
          if (local_208 != local_148) {
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_208,(CowData *)&local_148);
            uVar86 = local_140;
          }
        }
        local_330 = (StringName *)&local_218;
        local_200 = uVar86 | 0x1000;
        local_198 = (undefined4)local_228;
        if (local_190._0_8_ != local_220) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_190,(CowData *)&local_220);
        }
        pSVar1 = (StringName *)(local_190 + 8);
        StringName::operator=(pSVar1,local_330);
        local_180 = local_210;
        if (local_178 != local_208) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_178,(CowData *)&local_208);
        }
        local_170 = local_200;
        if (pVVar8[0x1a4] == (VariableNode)0x0) {
          local_1e8 = CONCAT44(local_1e8._4_4_,*(undefined4 *)(local_360 + 0x294));
          puVar84 = (undefined4 *)
                    HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                    ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                  *)(local_360 + 0x268),(StringName *)&local_2f0);
          *puVar84 = (undefined4)local_1e8;
          StringName::operator=((StringName *)(puVar84 + 2),(StringName *)local_1e0);
          StringName::operator=((StringName *)(puVar84 + 4),(StringName *)(local_1e0 + 8));
          puVar84[10] = local_1c0;
          *(char *)(puVar84 + 0xb) = local_1bc;
          puVar84[0xc] = local_1b8;
          StringName::operator=((StringName *)(puVar84 + 0xe),local_1b0);
          pOVar81 = *(Object **)(puVar84 + 0x12);
          *(undefined8 *)(puVar84 + 0x10) = uStack_1a8;
          if (local_1a0 != pOVar81) {
            *(Object **)(puVar84 + 0x12) = local_1a0;
            if ((local_1a0 != (Object *)0x0) && (cVar68 = RefCounted::reference(), cVar68 == '\0'))
            {
              *(undefined8 *)(puVar84 + 0x12) = 0;
            }
            if (((pOVar81 != (Object *)0x0) && (cVar68 = RefCounted::unreference(), cVar68 != '\0'))
               && (cVar68 = predelete_handler(pOVar81), cVar68 != '\0')) {
              (**(code **)(*(long *)pOVar81 + 0x140))(pOVar81);
              Memory::free_static(pOVar81,false);
            }
          }
          if (*(long *)(puVar84 + 8) != local_1c8) {
            CowData<GDScriptDataType>::_ref
                      ((CowData<GDScriptDataType> *)(puVar84 + 8),(CowData *)&local_1c8);
          }
          puVar84[0x14] = local_198;
          if (*(long *)(puVar84 + 0x16) != local_190._0_8_) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar84 + 0x16),(CowData *)local_190);
          }
          StringName::operator=((StringName *)(puVar84 + 0x18),pSVar1);
          puVar84[0x1a] = local_180;
          if (*(long *)(puVar84 + 0x1c) != local_178) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar84 + 0x1c),(CowData *)&local_178);
          }
          puVar84[0x1e] = local_170;
          HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert
                    ((StringName *)local_2d8);
        }
        else {
          local_1e8 = CONCAT44(local_1e8._4_4_,*(undefined4 *)(local_360 + 0x2ec));
          puVar84 = (undefined4 *)
                    HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                    ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                  *)(local_360 + 0x2c0),(StringName *)&local_2f0);
          *puVar84 = (undefined4)local_1e8;
          StringName::operator=((StringName *)(puVar84 + 2),(StringName *)local_1e0);
          StringName::operator=((StringName *)(puVar84 + 4),(StringName *)(local_1e0 + 8));
          puVar84[10] = local_1c0;
          *(char *)(puVar84 + 0xb) = local_1bc;
          puVar84[0xc] = local_1b8;
          StringName::operator=((StringName *)(puVar84 + 0xe),local_1b0);
          pOVar81 = *(Object **)(puVar84 + 0x12);
          *(undefined8 *)(puVar84 + 0x10) = uStack_1a8;
          if (local_1a0 != pOVar81) {
            *(Object **)(puVar84 + 0x12) = local_1a0;
            if ((local_1a0 != (Object *)0x0) && (cVar68 = RefCounted::reference(), cVar68 == '\0'))
            {
              *(undefined8 *)(puVar84 + 0x12) = 0;
            }
            if (((pOVar81 != (Object *)0x0) && (cVar68 = RefCounted::unreference(), cVar68 != '\0'))
               && (cVar68 = predelete_handler(pOVar81), cVar68 != '\0')) {
              (**(code **)(*(long *)pOVar81 + 0x140))(pOVar81);
              Memory::free_static(pOVar81,false);
            }
          }
          if (*(long *)(puVar84 + 8) != local_1c8) {
            CowData<GDScriptDataType>::_ref
                      ((CowData<GDScriptDataType> *)(puVar84 + 8),(CowData *)&local_1c8);
          }
          puVar84[0x14] = local_198;
          if (*(long *)(puVar84 + 0x16) != local_190._0_8_) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar84 + 0x16),(CowData *)local_190);
          }
          StringName::operator=((StringName *)(puVar84 + 0x18),pSVar1);
          puVar84[0x1a] = local_180;
          if (*(long *)(puVar84 + 0x1c) != local_178) {
            CowData<char32_t>::_ref((CowData<char32_t> *)(puVar84 + 0x1c),(CowData *)&local_178);
          }
          puVar84[0x1e] = local_170;
   }

   lVar95 = *(long*)( pVVar8 + 0x130 );
   if (( lVar95 == 0 ) || ( *(char*)( lVar95 + 0x129 ) == '\0' )) {
      if (( *(long*)( local_360 + 0x4a0 ) != 0 ) && ( *(int*)( local_360 + 0x4c4 ) != 0 )) {
         uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( local_360 + 0x4c0 ) * 4 );
         uVar71 = CONCAT44(0, uVar86);
         lVar95 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( local_360 + 0x4c0 ) * 8 );
         if (CONCAT44(uStack_2ec, local_2f0) == 0) {
            uVar91 = StringName::get_empty_hash();
         }
 else {
            uVar91 = *(uint*)( CONCAT44(uStack_2ec, local_2f0) + 0x20 );
         }

         if (uVar91 == 0) {
            uVar91 = 1;
         }

         lVar79 = *(long*)( local_360 + 0x4a8 );
         auVar27._8_8_ = 0;
         auVar27._0_8_ = (ulong)uVar91 * lVar95;
         auVar53._8_8_ = 0;
         auVar53._0_8_ = uVar71;
         lVar80 = SUB168(auVar27 * auVar53, 8);
         uVar92 = *(uint*)( lVar79 + lVar80 * 4 );
         uVar77 = SUB164(auVar27 * auVar53, 8);
         if (uVar92 != 0) {
            uVar90 = 0;
            LAB_00107589:uVar89 = (ulong)uVar77;
            if (( uVar92 != uVar91 ) || ( lVar9 = *(long*)( local_360 + 0x4a0 ) * (long*)( *(long*)( lVar9 + lVar80 * 8 ) + 0x10 ) != CONCAT44(uStack_2ec, local_2f0) )) goto LAB_00107540;
            uVar86 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( local_360 + 0x4c0 ) * 4 );
            uVar85 = CONCAT44(0, uVar86);
            lVar95 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( local_360 + 0x4c0 ) * 8 );
            auVar31._8_8_ = 0;
            auVar31._0_8_ = ( ulong )(uVar77 + 1) * lVar95;
            auVar57._8_8_ = 0;
            auVar57._0_8_ = uVar85;
            uVar93 = SUB168(auVar31 * auVar57, 8);
            puVar96 = (uint*)( lVar79 + uVar93 * 4 );
            uVar92 = SUB164(auVar31 * auVar57, 8);
            uVar71 = (ulong)uVar92;
            uVar91 = *puVar96;
            if (( uVar91 != 0 ) && ( auVar32._8_8_ = 0 ),auVar32._0_8_ = (ulong)uVar91 * lVar95,auVar58._8_8_ = 0,auVar58._0_8_ = uVar85,auVar33._8_8_ = 0,auVar33._0_8_ = ( ulong )(( uVar86 + uVar92 ) - SUB164(auVar32 * auVar58, 8)) * lVar95,auVar59._8_8_ = 0,auVar59._0_8_ = uVar85,SUB164(auVar33 * auVar59, 8) != 0) {
               while (true) {
                  puVar2 = (uint*)( lVar79 + uVar89 * 4 );
                  *puVar96 = *puVar2;
                  puVar75 = (undefined8*)( lVar9 + uVar93 * 8 );
                  *puVar2 = uVar91;
                  puVar3 = (undefined8*)( lVar9 + uVar89 * 8 );
                  uVar10 = *puVar75;
                  *puVar75 = *puVar3;
                  *puVar3 = uVar10;
                  auVar36._8_8_ = 0;
                  auVar36._0_8_ = ( ulong )((int)uVar71 + 1) * lVar95;
                  auVar62._8_8_ = 0;
                  auVar62._0_8_ = uVar85;
                  uVar93 = SUB168(auVar36 * auVar62, 8);
                  puVar96 = (uint*)( lVar79 + uVar93 * 4 );
                  uVar91 = *puVar96;
                  uVar89 = uVar71;
                  if (( uVar91 == 0 ) || ( auVar34._8_8_ = 0 ),auVar34._0_8_ = (ulong)uVar91 * lVar95,auVar60._8_8_ = 0,auVar60._0_8_ = uVar85,auVar35._8_8_ = 0,auVar35._0_8_ = ( ulong )(( SUB164(auVar36 * auVar62, 8) + uVar86 ) - SUB164(auVar34 * auVar60, 8)) * lVar95,auVar61._8_8_ = 0,auVar61._0_8_ = uVar85,SUB164(auVar35 * auVar61, 8) == 0) break;
                  uVar71 = uVar93 & 0xffffffff;
               }
;
            }

            plVar94 = (long*)( lVar9 + uVar89 * 8 );
            *(undefined4*)( lVar79 + uVar89 * 4 ) = 0;
            plVar82 = (long*)*plVar94;
            if (*(long**)( local_360 + 0x4b0 ) == plVar82) {
               *(long*)( local_360 + 0x4b0 ) = *plVar82;
               plVar82 = (long*)*plVar94;
            }

            if (*(long**)( local_360 + 0x4b8 ) == plVar82) {
               *(long*)( local_360 + 0x4b8 ) = plVar82[1];
               plVar82 = (long*)*plVar94;
            }

            if ((long*)plVar82[1] != (long*)0x0) {
               *(long*)plVar82[1] = *plVar82;
               plVar82 = (long*)*plVar94;
            }

            if (*plVar82 != 0) {
               *(long*)( *plVar82 + 8 ) = plVar82[1];
               plVar82 = (long*)*plVar94;
            }

            if (Variant::needs_deinit[(int)plVar82[3]] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( plVar82[2] != 0 )) {
               StringName::unref();
            }

            Memory::free_static(plVar82, false);
            *(undefined8*)( *(long*)( local_360 + 0x4a0 ) + uVar89 * 8 ) = 0;
            *(int*)( local_360 + 0x4c4 ) = *(int*)( local_360 + 0x4c4 ) + -1;
         }

      }

   }
 else {
      pVVar76 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( local_360 + 0x498 ), (StringName*)&local_2f0);
      Variant::operator =(pVVar76, (Variant*)( lVar95 + 0x130 ));
      pVVar76 = (Variant*)HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::operator []((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)( local_360 + 0x498 ), (StringName*)&local_2f0);
      convert_to_initializer_type(pVVar76, pVVar8);
   }

   LAB_0010773c:lVar95 = local_148;
   if (local_148 != 0) {
      LOCK();
      plVar94 = (long*)( local_148 + -0x10 );
      *plVar94 = *plVar94 + -1;
      UNLOCK();
      if (*plVar94 == 0) {
         local_148 = 0;
         Memory::free_static((void*)( lVar95 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_160._8_8_ != 0 )) {
      StringName::unref();
   }

   uVar10 = local_160._0_8_;
   if (local_160._0_8_ != 0) {
      LOCK();
      plVar94 = (long*)( local_160._0_8_ + -0x10 );
      *plVar94 = *plVar94 + -1;
      UNLOCK();
      if (*plVar94 == 0) {
         auVar65._8_8_ = 0;
         auVar65._0_8_ = local_160._8_8_;
         local_160 = auVar65 << 0x40;
         Memory::free_static((void*)( uVar10 + -0x10 ), false);
      }

   }

   lVar95 = local_208;
   if (local_208 != 0) {
      LOCK();
      plVar94 = (long*)( local_208 + -0x10 );
      *plVar94 = *plVar94 + -1;
      UNLOCK();
      if (*plVar94 == 0) {
         local_208 = 0;
         Memory::free_static((void*)( lVar95 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( local_218 != 0 )) {
      StringName::unref();
   }

   lVar95 = local_220;
   if (local_220 != 0) {
      LOCK();
      plVar94 = (long*)( local_220 + -0x10 );
      *plVar94 = *plVar94 + -1;
      UNLOCK();
      if (*plVar94 == 0) {
         local_220 = 0;
         Memory::free_static((void*)( lVar95 + -0x10 ), false);
      }

   }

   GDScript::MemberInfo::~MemberInfo((MemberInfo*)&local_1e8);
   if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_2ec, local_2f0) != 0 )) {
      StringName::unref();
   }

   goto LAB_00106cad;
   case 6:
        StringName::StringName
                  ((StringName *)&local_1e8,
                   (StringName *)(*(long *)(*(long *)(puVar84 + 2) + 0x128) + 0x148));
LAB_00106fb9:
        HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
        ::insert((StringName *)&local_168,(Variant *)(local_360 + 0x300),SUB81(&local_1e8,0));
LAB_00106d37:
        if ((StringName::configured == '\0') || (local_1e8 == 0)) {
LAB_00107924:
          lVar95 = *(long *)(param_2 + 0x148);
        }
        else {
          StringName::unref();
          lVar95 = *(long *)(param_2 + 0x148);
        }
        break;
   case 7:
        StringName::StringName
                  ((StringName *)&local_1e8,(StringName *)(*(long *)(puVar84 + 4) + 0x148));
        Variant::Variant((Variant *)local_58,*(long *)(puVar84 + 0xc));
        HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
        ::insert((StringName *)&local_168,(Variant *)(local_360 + 0x300),
                 SUB81((StringName *)&local_1e8,0));
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        goto LAB_00106d37;
   case 8:
        lVar95 = *(long *)(puVar84 + 2);
        local_1e8 = 0;
        if (*(long *)(lVar95 + 0x160) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1e8,(CowData *)(lVar95 + 0x160));
        }
        local_168 = (Ref *)0x119788;
        uVar4 = *(undefined4 *)(local_360 + 700);
        local_228 = 0;
        local_160._0_8_ = 0xc;
        String::parse_latin1((StrRange *)&local_228);
        vformat<unsigned_int,String>
                  ((StringName *)&local_168,(StrRange *)&local_228,uVar4,
                   (CowData<char32_t> *)&local_1e8);
        StringName::StringName((StringName *)local_2d8,(String *)&local_168,false);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_228);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_1e8);
        local_f8 = 0;
        local_1e8 = 0;
        _local_130 = (undefined1  [16])0x0;
        local_1d0 = 0;
        local_168 = (Ref *)CONCAT44(local_168._4_4_,*(undefined4 *)(local_360 + 0x294));
        local_1c8 = 0;
        local_110 = (undefined1  [16])0x0;
        local_1e0 = (undefined1  [16])0x0;
        local_148 = 0;
        local_140 = 0;
        local_13c = 0;
        local_138 = 0;
        local_120 = (Object *)0x0;
        local_118 = 0;
        local_100 = 0;
        local_f0 = 6;
        local_1c0 = 6;
        local_160 = (undefined1  [16])0x0;
        lVar79 = *(long *)(lVar95 + 0x160);
        if (*(long *)(lVar95 + 0x160) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_1e0,(CowData *)(lVar95 + 0x160));
          lVar79 = local_1c8;
        }
        local_1c0 = *(undefined4 *)(lVar95 + 0x180);
        if (*(long *)(lVar95 + 0x178) != lVar79) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_1c8,(CowData *)(lVar95 + 0x178));
        }
        local_118 = (undefined4)local_1e8;
        if (local_110._0_8_ != local_1e0._0_8_) {
          CowData<char32_t>::_ref((CowData<char32_t> *)local_110,(CowData *)local_1e0);
        }
        StringName::operator=((StringName *)(local_110 + 8),(StringName *)(local_1e0 + 8));
        local_100 = (undefined4)local_1d0;
        if (local_f8 != local_1c8) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_f8,(CowData *)&local_1c8);
        }
        local_f0 = local_1c0;
        puVar84 = (undefined4 *)
                  HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                  ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                *)(local_360 + 0x268),(StringName *)local_2d8);
        *puVar84 = local_168._0_4_;
        StringName::operator=((StringName *)(puVar84 + 2),(StringName *)local_160);
        StringName::operator=((StringName *)(puVar84 + 4),(StringName *)(local_160 + 8));
        puVar84[10] = local_140;
        *(undefined1 *)(puVar84 + 0xb) = local_13c;
        puVar84[0xc] = local_138;
        StringName::operator=((StringName *)(puVar84 + 0xe),local_130);
        pOVar81 = *(Object **)(puVar84 + 0x12);
        *(undefined8 *)(puVar84 + 0x10) = uStack_128;
        if (local_120 != pOVar81) {
          *(Object **)(puVar84 + 0x12) = local_120;
          if ((local_120 != (Object *)0x0) && (cVar68 = RefCounted::reference(), cVar68 == '\0')) {
            *(undefined8 *)(puVar84 + 0x12) = 0;
          }
          if (((pOVar81 != (Object *)0x0) && (cVar68 = RefCounted::unreference(), cVar68 != '\0'))
             && (cVar68 = predelete_handler(pOVar81), cVar68 != '\0')) {
            (**(code **)(*(long *)pOVar81 + 0x140))(pOVar81);
            Memory::free_static(pOVar81,false);
          }
}
if (*(long*)( puVar84 + 8 ) != local_148) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( puVar84 + 8 ), (CowData*)&local_148);
}
puVar84[0x14] = local_118;if (*(long*)( puVar84 + 0x16 ) != local_110._0_8_) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar84 + 0x16 ), (CowData*)local_110);
}
StringName::operator =((StringName*)( puVar84 + 0x18 ), (StringName*)( local_110 + 8 ));puVar84[0x1a] = local_100;if (*(long*)( puVar84 + 0x1c ) != local_f8) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar84 + 0x1c ), (CowData*)&local_f8);
}
puVar84[0x1e] = local_f0;HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert((StringName*)&local_228);lVar95 = local_1c8;if (local_1c8 != 0) {
   LOCK();
   plVar94 = (long*)( local_1c8 + -0x10 );
   *plVar94 = *plVar94 + -1;
   UNLOCK();
   if (*plVar94 == 0) {
      local_1c8 = 0;
      Memory::free_static((void*)( lVar95 + -0x10 ), false);
   }

}
if (( StringName::configured != '\0' ) && ( local_1e0._8_8_ != 0 )) {
   StringName::unref();
}
uVar10 = local_1e0._0_8_;if (local_1e0._0_8_ != 0) {
   LOCK();
   plVar94 = (long*)( local_1e0._0_8_ + -0x10 );
   *plVar94 = *plVar94 + -1;
   UNLOCK();
   if (*plVar94 == 0) {
      auVar66._8_8_ = 0;
      auVar66._0_8_ = local_1e0._8_8_;
      local_1e0 = auVar66 << 0x40;
      Memory::free_static((void*)( uVar10 + -0x10 ), false);
   }

}
GDScript::MemberInfo::~MemberInfo((MemberInfo*)&local_168);if (( StringName::configured != '\0' ) && ( local_2d8[0] != 0 )) {
   StringName::unref();
}
LAB_00106cad:local_360 = local_300[0];lVar95 = *(long*)( param_2 + 0x148 );}lVar78 = lVar78 + 1;}while (lVar95 != 0) ;;;local_340 = (undefined8*)local_290._0_8_;local_320 = (CowData<Variant>*)( local_360 + 0x2f8 );}CowData<Variant>::resize<false>(local_320, ( ulong ) * (uint*)( local_360 + 0x2ec ));HashSet<GDScript*,HashMapHasherDefault,HashMapComparatorDefault<GDScript*>>::insert((GDScript**)&local_168);HashSet<GDScript*,HashMapHasherDefault,HashMapComparatorDefault<GDScript*>>::erase((HashSet<GDScript*,HashMapHasherDefault,HashMapComparatorDefault<GDScript*>>*)( this + 0x30 ), local_300);lVar95 = *(long*)( param_2 + 0x148 );if (lVar95 != 0) {
   lVar78 = 0;
   do {
      if (*(long*)( lVar95 + -8 ) <= lVar78) break;
      piVar74 = (int*)( lVar78 * 0x70 + lVar95 );
      if (*piVar74 == 1) {
         pCVar7 = *(ClassNode**)( piVar74 + 2 );
         StringName::StringName((StringName*)&local_1e8, (StringName*)( *(long*)( pCVar7 + 0x128 ) + 0x148 ));
         puVar75 = (undefined8*)HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::operator []((HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>*)( local_360 + 0x360 ), (StringName*)&local_1e8);
         pOVar81 = (Object*)*puVar75;
         if (( *(long*)( this + 0x30 ) != 0 ) && ( *(int*)( this + 0x54 ) != 0 )) {
            uVar89 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 ));
            lVar95 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x50 ) * 8 );
            uVar71 = (long)pOVar81 * 0x3ffff - 1;
            uVar71 = ( uVar71 ^ uVar71 >> 0x1f ) * 0x15;
            uVar71 = ( uVar71 ^ uVar71 >> 0xb ) * 0x41;
            uVar71 = uVar71 >> 0x16 ^ uVar71;
            uVar93 = uVar71 & 0xffffffff;
            if ((int)uVar71 == 0) {
               uVar93 = 1;
            }

            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar93 * lVar95;
            auVar49._8_8_ = 0;
            auVar49._0_8_ = uVar89;
            lVar79 = SUB168(auVar23 * auVar49, 8);
            uVar86 = *(uint*)( *(long*)( this + 0x48 ) + lVar79 * 4 );
            iVar70 = SUB164(auVar23 * auVar49, 8);
            if (uVar86 != 0) {
               uVar91 = 0;
               do {
                  if (( uVar86 == (uint)uVar93 ) && ( pOVar81 == (Object*)*(GDScript**)( *(long*)( this + 0x30 ) + ( ulong ) * (uint*)( *(long*)( this + 0x38 ) + lVar79 * 4 ) * 8 ) )) goto LAB_0010799a;
                  uVar91 = uVar91 + 1;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = ( ulong )(iVar70 + 1) * lVar95;
                  auVar50._8_8_ = 0;
                  auVar50._0_8_ = uVar89;
                  lVar79 = SUB168(auVar24 * auVar50, 8);
                  uVar86 = *(uint*)( *(long*)( this + 0x48 ) + lVar79 * 4 );
                  iVar70 = SUB164(auVar24 * auVar50, 8);
               }
 while ( ( uVar86 != 0 ) && ( auVar25._8_8_ = 0 ),auVar25._0_8_ = (ulong)uVar86 * lVar95,auVar51._8_8_ = 0,auVar51._0_8_ = uVar89,auVar26._8_8_ = 0,auVar26._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 ) + iVar70 ) - SUB164(auVar25 * auVar51, 8)) * lVar95,auVar52._8_8_ = 0,auVar52._0_8_ = uVar89,uVar91 <= SUB164(auVar26 * auVar52, 8) );
            }

         }

         iVar70 = _prepare_compilation(this, (GDScript*)pOVar81, pCVar7, param_3);
         if (iVar70 != 0) {
            if (( StringName::configured != '\0' ) && ( local_1e8 != 0 )) {
               StringName::unref();
            }

            goto LAB_00106319;
         }

         pOVar81 = (Object*)*puVar75;
         LAB_0010799a:Variant::Variant((Variant*)local_58, pOVar81);
         HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::insert((StringName*)&local_168, (Variant*)( local_360 + 0x300 ), SUB81((StringName*)&local_1e8, 0));
         if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         if (( StringName::configured != '\0' ) && ( local_1e8 != 0 )) {
            StringName::unref();
         }

         lVar95 = *(long*)( param_2 + 0x148 );
      }

      lVar78 = lVar78 + 1;
   }
 while ( lVar95 != 0 );
}
iVar70 = 0;LAB_00106319:GDScriptDataType::~GDScriptDataType((GDScriptDataType*)local_268);LAB_00106323:if (local_340 != (undefined8*)0x0) {
   uVar10 = local_290._8_8_;
   if (( local_270._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_270 & 0xffffffff ) * 4 ) != 0 )) {
      piVar74 = (int*)( local_290._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_270 & 0xffffffff ) * 4 ) * 4 );
      piVar83 = (int*)local_290._8_8_;
      puVar75 = local_340;
      do {
         if (*piVar83 != 0) {
            bVar97 = StringName::configured != '\0';
            pvVar5 = (void*)*puVar75;
            *piVar83 = 0;
            if (( bVar97 ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            Memory::free_static(pvVar5, false);
            *puVar75 = 0;
         }

         piVar83 = piVar83 + 1;
         puVar75 = puVar75 + 1;
      }
 while ( piVar83 != piVar74 );
   }

   Memory::free_static(local_340, false);
   Memory::free_static((void*)uVar10, false);
}
uVar10 = local_2c0._0_8_;if ((undefined8*)local_2c0._0_8_ != (undefined8*)0x0) {
   uVar67 = local_2c0._8_8_;
   if (( local_2a0._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_2a0 & 0xffffffff ) * 4 ) != 0 )) {
      piVar74 = (int*)( local_2c0._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_2a0 & 0xffffffff ) * 4 ) * 4 );
      puVar75 = (undefined8*)local_2c0._0_8_;
      piVar83 = (int*)local_2c0._8_8_;
      do {
         if (*piVar83 != 0) {
            pvVar5 = (void*)*puVar75;
            *piVar83 = 0;
            if (Variant::needs_deinit[*(int*)( (long)pvVar5 + 0x18 )] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
               StringName::unref();
            }

            Memory::free_static(pvVar5, false);
            *puVar75 = 0;
         }

         piVar83 = piVar83 + 1;
         puVar75 = puVar75 + 1;
      }
 while ( piVar83 != piVar74 );
   }

   Memory::free_static((void*)uVar10, false);
   Memory::free_static((void*)uVar67, false);
}
LAB_001052c0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return iVar70;}/* GDScriptCompiler::_parse_expression(GDScriptCompiler::CodeGen&, Error&,
   GDScriptParser::ExpressionNode const*, bool, bool) */CodeGen *GDScriptCompiler::_parse_expression(CodeGen *param_1, Error *param_2, ExpressionNode *param_3, bool param_4, bool param_5) {
   undefined1(*pauVar1)[16];
   HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>> *this;
   uint uVar2;
   long *plVar3;
   undefined8 uVar4;
   void *pvVar5;
   code *pcVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   char cVar9;
   char cVar10;
   int iVar11;
   undefined4 uVar12;
   ulong uVar13;
   Object *pOVar14;
   undefined1(*pauVar15)[16];
   DataType *pDVar16;
   int *piVar17;
   undefined8 *puVar18;
   undefined4 *puVar19;
   GDScriptDataType *pGVar20;
   MethodBind *pMVar21;
   StringName *pSVar22;
   undefined7 in_register_00000009;
   long lVar23;
   bool bVar24;
   long lVar25;
   int *piVar26;
   HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>> *this_00;
   char *pcVar27;
   ulong *puVar28;
   undefined7 in_register_00000081;
   Node *pNVar29;
   char in_R9B;
   Node *pNVar30;
   undefined1 uVar31;
   long lVar33;
   long *plVar34;
   Object *pOVar35;
   long in_FS_OFFSET;
   bool bVar36;
   bool bVar37;
   byte bVar38;
   char in_stack_00000008;
   undefined8 uVar39;
   GDScriptDataType *local_5a8;
   GDScriptDataType *local_598;
   Object **local_590;
   GDScriptDataType *local_588;
   GDScriptDataType *local_580;
   Object *local_578;
   StringName *local_570;
   GDScriptDataType *local_568;
   GDScriptDataType *local_560;
   GDScriptDataType *local_558;
   GDScriptDataType *local_550;
   GDScriptDataType *local_548;
   GDScriptDataType *local_540;
   GDScriptDataType *local_538;
   char local_526;
   char local_525;
   undefined4 local_524;
   long local_518;
   long local_510;
   long local_508;
   undefined1(*local_500)[16];
   undefined1(*local_4f8)[16];
   long local_4f0;
   GDScriptDataType local_4e8[8];
   undefined8 local_4e0;
   undefined4 local_4d8;
   undefined1 local_4d4;
   undefined4 local_4d0;
   undefined1 local_4c8[16];
   undefined8 local_4b8;
   Object *local_4a8[8];
   undefined8 local_468;
   GDScriptDataType local_460[8];
   undefined8 local_458;
   undefined8 local_450;
   undefined8 local_448;
   undefined1 local_440[16];
   undefined8 local_430;
   Object *local_428;
   undefined8 local_420;
   ulong local_418;
   ulong local_410;
   undefined8 local_408;
   undefined8 uStack_400;
   undefined8 local_3f8;
   undefined8 local_3f0;
   Object *local_3e8;
   undefined8 local_3e0[2];
   char local_3cc;
   undefined4 local_3c8;
   undefined8 local_3a8;
   GDScriptDataType local_3a0[8];
   undefined8 local_398;
   undefined8 local_390;
   undefined8 local_388;
   undefined1 local_380[16];
   undefined8 local_370;
   Object *local_368;
   GDScriptDataType local_360[8];
   undefined8 local_358;
   undefined8 local_350;
   undefined8 local_348;
   undefined1 local_340[16];
   undefined8 local_330;
   Object *local_328;
   long local_320;
   undefined8 local_318;
   undefined8 local_310;
   undefined8 local_308;
   undefined1 local_300[16];
   undefined8 local_2f0;
   GDScriptFunction *local_2e8;
   undefined1 local_2e0[16];
   undefined1 local_2d0[16];
   undefined1 local_2c0[16];
   undefined8 local_2b0;
   Object *local_2a8;
   long local_2a0;
   undefined1 local_298[16];
   undefined8 local_288;
   long *plStack_280;
   Object *local_278;
   undefined8 local_270;
   Object *local_268;
   ulong *local_260;
   undefined1 local_258[16];
   undefined8 local_248;
   undefined8 uStack_240;
   undefined8 uStack_238;
   undefined8 local_230;
   undefined8 local_178;
   Object *local_170;
   undefined1 local_168[16];
   undefined4 local_158;
   undefined4 uStack_154;
   undefined4 uStack_150;
   undefined4 uStack_14c;
   long *plStack_148;
   Object *local_140;
   undefined4 local_138;
   Object *local_130;
   GDScriptDataType local_128[8];
   undefined8 local_120;
   undefined1 local_118;
   long local_110[4];
   long local_f0[13];
   Object *local_88;
   GDScriptDataType local_80[64];
   long local_40;
   Node *pNVar32;
   pNVar29 = (Node*)CONCAT71(in_register_00000081, param_5);
   piVar17 = (int*)CONCAT71(in_register_00000009, param_4);
   bVar38 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (pNVar29[0x129] != (Node)0x0) {
      if ((code*)**(undefined8**)pNVar29 == GDScriptParser::Node::get_datatype) {
         GDScriptParser::DataType::DataType((DataType*)&local_268, (DataType*)( pNVar29 + 0x38 ));
      }
 else {
         ( *(code*)**(undefined8**)pNVar29 )(&local_268, pNVar29);
      }

      if (local_258[10] == '\0') {
         GDScriptParser::DataType::~DataType((DataType*)&local_268);
      }
 else {
         if ((code*)**(undefined8**)pNVar29 == GDScriptParser::Node::get_datatype) {
            GDScriptParser::DataType::DataType((DataType*)&local_178, (DataType*)( pNVar29 + 0x38 ));
         }
 else {
            ( *(code*)**(undefined8**)pNVar29 )(&local_178, pNVar29);
         }

         if (local_168._0_4_ == 3) {
            GDScriptParser::DataType::~DataType((DataType*)&local_178);
            GDScriptParser::DataType::~DataType((DataType*)&local_268);
            goto LAB_001088a0;
         }

         GDScriptParser::DataType::~DataType((DataType*)&local_178);
         GDScriptParser::DataType::~DataType((DataType*)&local_268);
      }

      CodeGen::add_constant((Variant*)param_1);
      goto LAB_001088f5;
   }

   LAB_001088a0:plVar3 = *(long**)( param_3 + 0x20 );
   switch (*(undefined4*)( pNVar29 + 8 )) {
      default:
    pcVar27 = 
    "Compiler bug (please report): Unexpected node in parse tree while parsing expression.";
    goto LAB_00108970;
      case 2:
    local_320 = 0;
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_2e8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    CodeGen::add_temporary((GDScriptDataType *)&local_2a8);
    lVar25 = *(long *)(pNVar29 + 0x150);
    for (lVar33 = 0; (lVar25 != 0 && (lVar33 < *(long *)(lVar25 + -8))); lVar33 = lVar33 + 1) {
      _parse_expression((CodeGen *)&local_268,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(lVar25 + lVar33 * 8),0));
      if (*piVar17 != 0) {
        *(undefined8 *)param_1 = 7;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
        goto LAB_00108d73;
      }
      local_178 = local_268;
      GDScriptDataType::GDScriptDataType
                ((GDScriptDataType *)&local_170,(GDScriptDataType *)&local_260);
      Vector<GDScriptCodeGenerator::Address>::push_back
                ((Vector<GDScriptCodeGenerator::Address> *)&local_328,(DataType *)&local_178);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
      lVar25 = *(long *)(pNVar29 + 0x150);
    }
    local_588 = (GDScriptDataType *)&local_328;
    local_590 = &local_2a8;
    if ((local_2e0._0_8_ == 0) || (*(long *)(local_2e0._0_8_ + -8) < 1)) {
      (**(code **)(*plVar3 + 0x210))(plVar3,local_590,local_588);
    }
    else {
      pcVar6 = *(code **)(*plVar3 + 0x218);
      GDScriptDataType::get_container_element_type((int)(DataType *)&local_178);
      (*pcVar6)(plVar3,local_590,(DataType *)&local_178,local_588);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_178);
    }
    if (local_320 != 0) {
      lVar33 = 0;
      lVar25 = local_320;
      do {
        if (*(long *)(lVar25 + -8) <= lVar33) break;
        if (*(int *)(lVar25 + lVar33 * 0x40) == 6) {
          (**(code **)(*plVar3 + 0x30))(plVar3);
          lVar25 = local_320;
        }
        lVar33 = lVar33 + 1;
      } while (lVar25 != 0);
    }
    goto LAB_00108d4e;
      case 4:
    local_598 = *(GDScriptDataType **)(pNVar29 + 0x150);
    if (*(int *)((Node *)local_598 + 8) == 0x20) {
      if (((((Node *)local_598)[0x158] != (Node)0x0) &&
          (*(int *)(*(long *)((Node *)local_598 + 0x148) + 8) == 0x1e)) &&
         (lVar25 = *(long *)param_3, lVar25 != 0)) {
        local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
        cVar9 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                ::_lookup_pos((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                               *)(lVar25 + 0x268),
                              (StringName *)(*(long *)((Node *)local_598 + 0x150) + 0x148),
                              (uint *)&local_178);
        if (((cVar9 != '\0') &&
            (lVar25 = *(long *)(*(long *)(lVar25 + 0x270) + ((ulong)local_178 & 0xffffffff) * 8),
            lVar25 != 0)) && (*(long *)(lVar25 + 0x20) == *(long *)(param_3 + 0x18))) {
          lVar25 = *(long *)(*(long *)((Node *)local_598 + 0x150) + 0x148);
          if (lVar25 == 0) {
LAB_0010fc07:
            local_3a8 = (Object *)0x0;
          }
          else {
            local_3a8 = (Object *)0x0;
            if (*(char **)(lVar25 + 8) == (char *)0x0) {
              if (*(long *)(lVar25 + 0x10) == 0) goto LAB_0010fc07;
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_3a8,(CowData *)(lVar25 + 0x10));
            }
            else {
              String::parse_latin1((String *)&local_3a8,*(char **)(lVar25 + 8));
            }
          }
          local_570 = (StringName *)&local_3a8;
          local_268 = (Object *)0x0;
          String::parse_latin1((String *)&local_268,"\' in setter.");
          local_328 = (Object *)0x0;
          String::parse_latin1((String *)&local_328,"\' instead of \'self.");
          operator+((char *)&local_368,(String *)"Must use \'");
          String::operator+((String *)&local_2e8,(String *)&local_368);
          String::operator+((String *)&local_2a8,(String *)&local_2e8);
          String::operator+((String *)&local_178,(String *)&local_2a8);
          _set_error((GDScriptCompiler *)param_2,(String *)&local_178,(Node *)local_598);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_2e8);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_368);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
          *piVar17 = 0x24;
          *(undefined8 *)param_1 = 7;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          param_1[0x1c] = (CodeGen)0x0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
          CowData<char32_t>::_unref((CowData<char32_t> *)local_570);
          break;
        }
      }
      pOVar14 = _LC49;
      local_440 = (undefined1  [16])0x0;
      uStack_400 = 0;
      local_3f8 = 0;
      local_4c8 = (undefined1  [16])0x0;
      local_518 = 0;
      local_578 = _LC49;
      local_468 = _LC49;
      local_458 = 0;
      local_450 = 0;
      local_448 = 0;
      local_430 = 0;
      local_428 = _LC49;
      local_418 = 0;
      local_410 = 0;
      local_408 = 0;
      local_3f0 = 0;
      local_4e0 = 0;
      local_4d8 = 0;
      local_4d4 = 0;
      local_4d0 = 0;
      local_4b8 = 0;
      local_510 = 0;
      local_508 = 0;
      pauVar15 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
      *(undefined4 *)pauVar15[1] = 0;
      *pauVar15 = (undefined1  [16])0x0;
      pNVar32 = (Node *)local_598;
      local_500 = pauVar15;
      do {
        puVar18 = (undefined8 *)operator_new(0x20,DefaultAllocator::alloc);
        lVar25 = *(long *)(*pauVar15 + 8);
        puVar18[1] = 0;
        *puVar18 = pNVar32;
        puVar18[2] = lVar25;
        puVar18[3] = pauVar15;
        if (lVar25 != 0) {
          *(undefined8 **)(lVar25 + 8) = puVar18;
        }
        lVar25 = *(long *)*pauVar15;
        *(undefined8 **)(*pauVar15 + 8) = puVar18;
        if (lVar25 == 0) {
          *(undefined8 **)*pauVar15 = puVar18;
        }
        pNVar32 = *(Node **)(pNVar32 + 0x148);
        *(int *)pauVar15[1] = *(int *)pauVar15[1] + 1;
      } while (*(int *)(pNVar32 + 8) == 0x20);
      if (*(int *)(pNVar32 + 8) == 0x13) {
        StringName::operator=((StringName *)&local_510,(StringName *)(pNVar32 + 0x148));
        cVar9 = _is_class_member_property
                          ((GDScriptCompiler *)param_2,(CodeGen *)param_3,(StringName *)&local_510);
        if (cVar9 == '\0') {
          cVar9 = _is_local_or_parameter
                            ((GDScriptCompiler *)param_2,(CodeGen *)param_3,(StringName *)&local_510
                            );
          local_526 = '\0';
          if (cVar9 == '\0') {
            local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
            cVar9 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                    ::_lookup_pos((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                   *)(*(long *)param_3 + 0x268),(StringName *)&local_510,
                                  (uint *)&local_178);
            if (cVar9 != '\0') {
              puVar19 = (undefined4 *)
                        HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                        ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                      *)(*(long *)param_3 + 0x268),(StringName *)&local_510);
              StringName::operator=((StringName *)&local_508,(StringName *)(puVar19 + 2));
              bVar37 = local_508 != 0;
              if (local_508 == 0) {
                bVar36 = false;
              }
              else {
                bVar36 = *(long *)(param_3 + 0x18) == local_508;
              }
              local_468 = (Object *)CONCAT44(*puVar19,2);
              GDScriptDataType::operator=(local_460,(GDScriptDataType *)(puVar19 + 6));
              uVar31 = (undefined1)*(undefined8 *)(**(long **)(*pauVar15 + 8) + 0x148);
              local_526 = cVar9;
              goto LAB_0010d3ee;
            }
            pOVar35 = *(Object **)param_3;
            if (pOVar35 == (Object *)0x0) {
              pNVar32 = *(Node **)(**(long **)(*pauVar15 + 8) + 0x148);
              goto LAB_0010adaa;
            }
            do {
              local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
              local_526 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                          ::_lookup_pos((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                         *)(pOVar35 + 0x2c0),(StringName *)&local_510,
                                        (uint *)&local_178);
              if (local_526 != '\0') {
                puVar19 = (undefined4 *)
                          HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                          ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                        *)(pOVar35 + 0x2c0),(StringName *)&local_510);
                StringName::operator=((StringName *)&local_508,(StringName *)(puVar19 + 2));
                bVar37 = local_508 != 0;
                bVar36 = false;
                if (bVar37) {
                  bVar36 = *(long *)(param_3 + 0x18) == local_508;
                }
                Variant::Variant((Variant *)&local_88,pOVar35);
                CodeGen::add_constant((Variant *)&local_178);
                local_428 = local_178;
                GDScriptDataType::operator=
                          ((GDScriptDataType *)&local_420,(GDScriptDataType *)&local_170);
                GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
                if (Variant::needs_deinit[(int)local_88] != '\0') {
                  Variant::_clear_internal();
                }
                local_524 = *puVar19;
                GDScriptDataType::operator=(local_4e8,(GDScriptDataType *)(puVar19 + 6));
                uVar31 = (undefined1)*(undefined8 *)(**(long **)(*pauVar15 + 8) + 0x148);
                local_525 = local_526;
                goto LAB_0010add1;
              }
              pOVar35 = *(Object **)(pOVar35 + 600);
            } while (pOVar35 != (Object *)0x0);
          }
          pNVar32 = *(Node **)(**(long **)(*pauVar15 + 8) + 0x148);
          goto LAB_0010adaa;
        }
        StringName::operator=((StringName *)&local_518,(StringName *)&local_510);
        bVar36 = false;
        bVar37 = false;
        local_526 = '\0';
        uVar31 = (undefined1)*(undefined8 *)(**(long **)(*pauVar15 + 8) + 0x148);
LAB_0010d3ee:
        local_525 = '\0';
        local_524 = 0;
      }
      else {
        local_526 = '\0';
LAB_0010adaa:
        local_525 = '\0';
        bVar37 = false;
        uVar31 = SUB81(pNVar32,0);
        local_524 = 0;
        bVar36 = false;
      }
LAB_0010add1:
      local_560 = local_4e8;
      local_550 = (GDScriptDataType *)&local_420;
      local_558 = local_460;
      _parse_expression((CodeGen *)&local_3e8,param_2,param_3,param_4,(bool)uVar31);
      cVar9 = Variant::is_type_shared(local_3c8);
      if (*piVar17 == 0) {
        local_3a8 = local_3e8;
        GDScriptDataType::GDScriptDataType(local_3a0,(GDScriptDataType *)local_3e0);
        local_358 = 0;
        local_368 = pOVar14;
        local_350 = 0;
        local_348 = 0;
        local_330 = 0;
        local_340 = (undefined1  [16])0x0;
        if (((local_3cc == '\0') || (cVar9 == '\0')) &&
           (((int)local_3e8 == 2 && ((!bVar36 && (bVar37)))))) {
          CodeGen::add_temporary((GDScriptDataType *)&local_178);
          local_368 = local_178;
          GDScriptDataType::operator=(local_360,(GDScriptDataType *)&local_170);
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
          (**(code **)(*plVar3 + 0x148))(plVar3,&local_368,(CodeGen *)&local_3e8);
          local_3a8 = local_368;
          GDScriptDataType::operator=(local_3a0,local_360);
        }
        local_538 = local_360;
        local_548 = (GDScriptDataType *)local_3e0;
        local_4f8 = (undefined1 (*) [16])0x0;
        for (plVar34 = *(long **)(*pauVar15 + 8);
            (plVar34 != (long *)0x0 && (*(long **)*pauVar15 != plVar34));
            plVar34 = (long *)plVar34[2]) {
          puVar18 = (undefined8 *)*plVar34;
          if (*(code **)*puVar18 == GDScriptParser::Node::get_datatype) {
            GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(puVar18 + 7));
          }
          else {
            (**(code **)*puVar18)(&local_178,puVar18);
          }
          _gdtype_from_datatype
                    ((DataType *)&local_268,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
          CodeGen::add_temporary((GDScriptDataType *)&local_2a8);
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
          GDScriptParser::DataType::~DataType((DataType *)&local_178);
          local_268 = pOVar14;
          local_248 = 0;
          uStack_240 = 0;
          uStack_238 = 0;
          local_258 = ZEXT816(0);
          local_230 = 0;
          local_2e8 = (GDScriptFunction *)0x0;
          if (*(char *)(puVar18 + 0x2b) == '\0') {
            _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,SUB81(puVar18[0x2a],0));
            local_268 = local_178;
            GDScriptDataType::operator=
                      ((GDScriptDataType *)&local_260,(GDScriptDataType *)&local_170);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
            if (*piVar17 != 0) {
              bVar37 = StringName::configured != '\0';
              *(Object **)param_1 = pOVar14;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              param_1[0x1c] = (CodeGen)0x0;
              *(undefined4 *)(param_1 + 0x20) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
              if ((bVar37) && (local_2e8 != (GDScriptFunction *)0x0)) {
                StringName::unref();
              }
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a0);
              goto LAB_0010c6fd;
            }
            (**(code **)(*plVar3 + 0x110))
                      (plVar3,(GDScriptDataType *)&local_2a8,(DataType *)&local_268,&local_3a8);
          }
          else {
            StringName::operator=((StringName *)&local_2e8,(StringName *)(puVar18[0x2a] + 0x148));
            (**(code **)(*plVar3 + 0x120))
                      (plVar3,(GDScriptDataType *)&local_2a8,(StringName *)&local_2e8,&local_3a8);
          }
          local_588 = (GDScriptDataType *)&local_2e8;
          local_178 = (Object *)CONCAT71(local_178._1_7_,*(undefined1 *)(puVar18 + 0x2b));
          local_170 = local_3a8;
          GDScriptDataType::GDScriptDataType((GDScriptDataType *)local_168,local_3a0);
          local_130 = local_268;
          GDScriptDataType::GDScriptDataType(local_128,(GDScriptDataType *)&local_260);
          StringName::StringName((StringName *)local_f0,(StringName *)local_588);
          if (local_4f8 == (undefined1 (*) [16])0x0) {
            local_4f8 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
            *(undefined4 *)local_4f8[1] = 0;
            *local_4f8 = (undefined1  [16])0x0;
          }
          pauVar1 = local_4f8;
          pDVar16 = (DataType *)operator_new(0xa8,DefaultAllocator::alloc);
          *pDVar16 = (DataType)0x0;
          *(undefined1 (*) [16])(pDVar16 + 0x30) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pDVar16 + 0x70) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pDVar16 + 0x80) = (undefined1  [16])0x0;
          *(undefined1 (*) [16])(pDVar16 + 0x90) = (undefined1  [16])0x0;
          *(Object **)(pDVar16 + 8) = pOVar14;
          *(Object **)(pDVar16 + 0x48) = pOVar14;
          *(undefined8 *)(pDVar16 + 0x18) = 0;
          *(undefined4 *)(pDVar16 + 0x20) = 0;
          pDVar16[0x24] = (DataType)0x0;
          *(undefined4 *)(pDVar16 + 0x28) = 0;
          *(undefined8 *)(pDVar16 + 0x40) = 0;
          *(undefined8 *)(pDVar16 + 0x58) = 0;
          *(undefined4 *)(pDVar16 + 0x60) = 0;
          pDVar16[100] = (DataType)0x0;
          *(undefined4 *)(pDVar16 + 0x68) = 0;
          *(undefined8 *)(pDVar16 + 0xa0) = 0;
          *pDVar16 = local_178._0_1_;
          *(Object **)(pDVar16 + 8) = local_170;
          GDScriptDataType::operator=
                    ((GDScriptDataType *)(pDVar16 + 0x10),(GDScriptDataType *)local_168);
          *(Object **)(pDVar16 + 0x48) = local_130;
          GDScriptDataType::operator=((GDScriptDataType *)(pDVar16 + 0x50),local_128);
          StringName::operator=((StringName *)(pDVar16 + 0x88),(StringName *)local_f0);
          *(undefined8 *)(pDVar16 + 0x98) = 0;
          lVar25 = *(long *)*pauVar1;
          *(undefined1 (**) [16])(pDVar16 + 0xa0) = pauVar1;
          *(long *)(pDVar16 + 0x90) = lVar25;
          if (lVar25 != 0) {
            *(DataType **)(lVar25 + 0x98) = pDVar16;
          }
          lVar25 = *(long *)(*pauVar1 + 8);
          *(DataType **)*pauVar1 = pDVar16;
          if (lVar25 == 0) {
            *(DataType **)(*pauVar1 + 8) = pDVar16;
          }
          *(int *)pauVar1[1] = *(int *)pauVar1[1] + 1;
          if ((StringName::configured != '\0') && (local_f0[0] != 0)) {
            StringName::unref();
          }
          GDScriptDataType::~GDScriptDataType(local_128);
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_168);
          local_3a8 = local_2a8;
          GDScriptDataType::operator=(local_3a0,(GDScriptDataType *)&local_2a0);
          if ((StringName::configured != '\0') && (local_2e8 != (GDScriptFunction *)0x0)) {
            StringName::unref();
          }
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a0);
        }
        _parse_expression((CodeGen *)&local_328,param_2,param_3,param_4,
                          SUB81(*(undefined8 *)(pNVar29 + 0x158),0));
        if (*piVar17 == 0) {
          local_2d0 = ZEXT816(0);
          local_2e8 = (GDScriptFunction *)pOVar14;
          local_2c0 = (undefined1  [16])0x0;
          local_2e0._8_8_ = 0;
          local_2b0 = 0;
          local_4f0 = 0;
          if (((Node *)local_598)[0x158] == (Node)0x0) {
            _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                              SUB81(*(long *)((Node *)local_598 + 0x150),0));
            local_2e8 = (GDScriptFunction *)local_178;
            GDScriptDataType::operator=
                      ((GDScriptDataType *)local_2e0,(GDScriptDataType *)&local_170);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
            if (*piVar17 != 0) {
              bVar37 = StringName::configured != '\0';
              *(undefined4 *)(param_1 + 0x20) = 0;
              *(Object **)param_1 = pOVar14;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              param_1[0x1c] = (CodeGen)0x0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
              if ((bVar37) && (local_4f0 != 0)) {
                StringName::unref();
              }
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_2e0);
              goto LAB_0010c6e6;
            }
          }
          else {
            StringName::operator=
                      ((StringName *)&local_4f0,
                       (StringName *)(*(long *)((Node *)local_598 + 0x150) + 0x148));
          }
          local_5a8 = (GDScriptDataType *)local_2e0;
          if (*(int *)(pNVar29 + 0x148) != 0) {
            (*(code *)**(undefined8 **)pNVar29)((DataType *)&local_178,pNVar29);
            bVar24 = SUB81((DataType *)&local_178,0);
            _gdtype_from_datatype((DataType *)&local_268,(GDScript *)param_2,bVar24);
            CodeGen::add_temporary((GDScriptDataType *)&local_2a8);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
            GDScriptParser::DataType::~DataType((DataType *)&local_178);
            (*(code *)**(undefined8 **)local_598)((DataType *)&local_178,local_598);
            _gdtype_from_datatype((DataType *)local_4a8,(GDScript *)param_2,bVar24);
            CodeGen::add_temporary((GDScriptDataType *)&local_268);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_4a8);
            GDScriptParser::DataType::~DataType((DataType *)&local_178);
            if (((Node *)local_598)[0x158] == (Node)0x0) {
              (**(code **)(*plVar3 + 0x110))(plVar3,(DataType *)&local_268,&local_2e8);
            }
            else {
              (**(code **)(*plVar3 + 0x120))(plVar3,(DataType *)&local_268,&local_4f0);
            }
            (**(code **)(*plVar3 + 0xa0))
                      (plVar3,(GDScriptDataType *)&local_2a8,*(undefined4 *)(pNVar29 + 0x14c),
                       (DataType *)&local_268);
            (**(code **)(*plVar3 + 0x30))(plVar3);
            if ((int)local_328 == 6) {
              (**(code **)(*plVar3 + 0x30))();
            }
            local_328 = local_2a8;
            GDScriptDataType::operator=
                      ((GDScriptDataType *)&local_320,(GDScriptDataType *)&local_2a0);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a0);
          }
          local_540 = (GDScriptDataType *)&local_320;
          local_570 = (StringName *)&local_3a8;
          if (((Node *)local_598)[0x158] == (Node)0x0) {
            (**(code **)(*plVar3 + 0x108))(plVar3,local_570,&local_2e8);
          }
          else {
            (**(code **)(*plVar3 + 0x118))(plVar3,local_570,&local_4f0);
          }
          if ((int)local_2e8 == 6) {
            (**(code **)(*plVar3 + 0x30))();
          }
          if ((int)local_328 == 6) {
            (**(code **)(*plVar3 + 0x30))();
          }
          local_328 = local_3a8;
          GDScriptDataType::operator=(local_540,local_3a0);
          if (local_4f8 != (undefined1 (*) [16])0x0) {
            for (pcVar27 = *(char **)*local_4f8; pcVar27 != (char *)0x0;
                pcVar27 = *(char **)(pcVar27 + 0x90)) {
              local_310._4_1_ = (char)((ulong)local_310 >> 0x20);
              cVar9 = local_310._4_1_;
              cVar10 = Variant::is_type_shared(local_308 & 0xffffffff);
              if (cVar9 == '\0') {
                (**(code **)(*plVar3 + 0x250))(plVar3,(CodeGen *)&local_328);
LAB_0010da90:
                if (*pcVar27 == '\0') {
                  (**(code **)(*plVar3 + 0x108))(plVar3,pcVar27 + 8,pcVar27 + 0x48);
                }
                else {
                  (**(code **)(*plVar3 + 0x118))(plVar3,pcVar27 + 8,pcVar27 + 0x88);
                }
                if (cVar9 == '\0') {
                  (**(code **)(*plVar3 + 600))(plVar3);
                }
              }
              else if (cVar10 == '\0') goto LAB_0010da90;
              if ((*pcVar27 == '\0') && (*(int *)(pcVar27 + 0x48) == 6)) {
                (**(code **)(*plVar3 + 0x30))(plVar3);
              }
              if ((int)local_328 == 6) {
                (**(code **)(*plVar3 + 0x30))(plVar3);
              }
              local_328 = *(Object **)(pcVar27 + 8);
              GDScriptDataType::operator=(local_540,(GDScriptDataType *)(pcVar27 + 0x10));
            }
          }
          cVar9 = local_310._4_1_;
          cVar10 = Variant::is_type_shared(local_308 & 0xffffffff);
          if ((cVar9 == '\0') || (cVar10 == '\0')) {
            if (local_518 == 0) {
              if (local_526 != '\0') {
                if (cVar9 == '\0') {
                  (**(code **)(*plVar3 + 0x250))();
                }
                if ((bVar36) || (!bVar37)) {
                  if (local_525 == '\0') {
                    (**(code **)(*plVar3 + 0x148))(plVar3,&local_468,(CodeGen *)&local_328);
                  }
                  else {
                    CodeGen::add_temporary((GDScriptDataType *)&local_178);
                    (**(code **)(*plVar3 + 0x148))
                              (plVar3,(GDScriptDataType *)&local_178,(CodeGen *)&local_328);
                    (**(code **)(*plVar3 + 0x138))
                              (plVar3,(GDScriptDataType *)&local_178,&local_428,local_524);
                    (**(code **)(*plVar3 + 0x30))(plVar3);
                    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
                  }
                }
                else {
                  local_2a0 = 0;
                  local_178 = local_328;
                  GDScriptDataType::GDScriptDataType((GDScriptDataType *)&local_170,local_540);
                  Vector<GDScriptCodeGenerator::Address>::push_back
                            ((Vector<GDScriptCodeGenerator::Address> *)&local_2a8,
                             (GDScriptDataType *)&local_178);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
                  puVar19 = (undefined4 *)local_168;
                  for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                    *puVar19 = 0;
                    puVar19 = puVar19 + (ulong)bVar38 * -2 + 1;
                  }
                  local_170 = (Object *)0x0;
                  if (local_525 == '\0') {
                    GDScriptCodeGenerator::Address::Address
                              ((Address *)&local_268,0,(GDScriptDataType *)&local_178);
                    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_178);
                  }
                  else {
                    GDScriptCodeGenerator::Address::Address
                              ((Address *)&local_268,1,(GDScriptDataType *)&local_178);
                    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_178);
                  }
                  local_178 = pOVar14;
                  uStack_150 = 0;
                  uStack_14c = 0;
                  plStack_148 = (long *)0x0;
                  local_168 = ZEXT816(0);
                  local_158 = 0;
                  uStack_154 = 0;
                  local_140 = (Object *)0x0;
                  (**(code **)(*plVar3 + 400))
                            (plVar3,(GDScriptDataType *)&local_178,(Address *)&local_268,&local_508,
                             (Vector<GDScriptCodeGenerator::Address> *)&local_2a8);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
                  CowData<GDScriptCodeGenerator::Address>::_unref
                            ((CowData<GDScriptCodeGenerator::Address> *)&local_2a0);
                }
                if (cVar9 == '\0') {
                  (**(code **)(*plVar3 + 600))();
                }
              }
            }
            else if (cVar9 == '\0') {
              (**(code **)(*plVar3 + 0x250))(plVar3,(CodeGen *)&local_328);
              (**(code **)(*plVar3 + 0x128))(plVar3,(CodeGen *)&local_328,&local_518);
              (**(code **)(*plVar3 + 600))(plVar3);
            }
            else {
              (**(code **)(*plVar3 + 0x128))(plVar3,(CodeGen *)&local_328,&local_518);
            }
          }
          else if ((int)local_368 == 6) {
            if (local_3cc == '\0') {
              (**(code **)(*plVar3 + 0x250))(plVar3,(CodeGen *)&local_3e8);
            }
            pcVar6 = *(code **)(*plVar3 + 400);
            local_88 = local_328;
            GDScriptDataType::GDScriptDataType(local_80,local_540);
            local_260 = (ulong *)0x0;
            iVar11 = CowData<GDScriptCodeGenerator::Address>::resize<false>
                               ((CowData<GDScriptCodeGenerator::Address> *)&local_260,1);
            if (iVar11 == 0) {
              if (local_260 == (ulong *)0x0) {
                uVar13 = 0;
              }
              else {
                uVar13 = local_260[-1];
                if (0 < (long)uVar13) {
                  CowData<GDScriptCodeGenerator::Address>::_copy_on_write
                            ((CowData<GDScriptCodeGenerator::Address> *)&local_260);
                  *local_260 = (ulong)local_88;
                  GDScriptDataType::operator=((GDScriptDataType *)(local_260 + 1),local_80);
                  goto LAB_0010f567;
                }
              }
              _err_print_index_error
                        ("set","./core/templates/cowdata.h",0xcf,0,uVar13,"p_index","size()","",
                         false,false);
            }
LAB_0010f567:
            local_168 = ZEXT816(0);
            local_158 = 0;
            uStack_154 = 0;
            local_178 = pOVar14;
            uStack_150 = 0;
            uStack_14c = 0;
            plStack_148 = (long *)0x0;
            local_140 = (Object *)0x0;
            (*pcVar6)(plVar3,&local_178,(CodeGen *)&local_3e8,&local_508,&local_268);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
            CowData<GDScriptCodeGenerator::Address>::_unref
                      ((CowData<GDScriptCodeGenerator::Address> *)&local_260);
            GDScriptDataType::~GDScriptDataType(local_80);
            if (local_3cc == '\0') {
              (**(code **)(*plVar3 + 600))(plVar3);
            }
          }
          if ((int)local_328 == 6) {
            (**(code **)(*plVar3 + 0x30))();
          }
          if ((StringName::configured != '\0') && (local_4f0 != 0)) {
            StringName::unref();
          }
          GDScriptDataType::~GDScriptDataType(local_5a8);
          GDScriptDataType::~GDScriptDataType(local_540);
          List<GDScriptCompiler::_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)::ChainInfo,DefaultAllocator>
          ::~List((List<GDScriptCompiler::_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)::ChainInfo,DefaultAllocator>
                   *)&local_4f8);
          GDScriptDataType::~GDScriptDataType(local_538);
          GDScriptDataType::~GDScriptDataType(local_3a0);
          GDScriptDataType::~GDScriptDataType(local_548);
          List<GDScriptParser::SubscriptNode_const*,DefaultAllocator>::~List
                    ((List<GDScriptParser::SubscriptNode_const*,DefaultAllocator> *)&local_500);
          if ((StringName::configured != '\0') && (local_508 != 0)) {
            StringName::unref();
          }
          if ((StringName::configured != '\0') && (local_510 != 0)) {
            StringName::unref();
          }
          GDScriptDataType::~GDScriptDataType(local_560);
          GDScriptDataType::~GDScriptDataType(local_550);
          GDScriptDataType::~GDScriptDataType(local_558);
          if ((StringName::configured != '\0') && (local_518 != 0)) {
            StringName::unref();
          }
          goto LAB_0010d082;
        }
        *(Object **)param_1 = pOVar14;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
LAB_0010c6e6:
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_320);
LAB_0010c6fd:
        List<GDScriptCompiler::_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)::ChainInfo,DefaultAllocator>
        ::~List((List<GDScriptCompiler::_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)::ChainInfo,DefaultAllocator>
                 *)&local_4f8);
        GDScriptDataType::~GDScriptDataType(local_538);
        GDScriptDataType::~GDScriptDataType(local_3a0);
      }
      else {
        *(Object **)param_1 = pOVar14;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
      }
      local_548 = (GDScriptDataType *)local_3e0;
      GDScriptDataType::~GDScriptDataType(local_548);
      do {
        while( true ) {
          pvVar5 = *(void **)*pauVar15;
          if (pvVar5 == (void *)0x0) {
            if (*(int *)pauVar15[1] != 0) {
              _err_print_error("~List","./core/templates/list.h",0x316,
                               "Condition \"_data->size_cache\" is true.",0,0);
              goto LAB_0010aeec;
            }
            goto LAB_0010aee2;
          }
          if (pauVar15 != *(undefined1 (**) [16])((long)pvVar5 + 0x18)) break;
          lVar25 = *(long *)((long)pvVar5 + 8);
          lVar33 = *(long *)((long)pvVar5 + 0x10);
          *(long *)*pauVar15 = lVar25;
          if (pvVar5 == *(void **)(*pauVar15 + 8)) {
            *(long *)(*pauVar15 + 8) = lVar33;
          }
          if (lVar33 != 0) {
            *(long *)(lVar33 + 8) = lVar25;
            lVar25 = *(long *)((long)pvVar5 + 8);
          }
          if (lVar25 != 0) {
            *(long *)(lVar25 + 0x10) = lVar33;
          }
          Memory::free_static(pvVar5,false);
          pauVar1 = pauVar15 + 1;
          *(int *)*pauVar1 = *(int *)*pauVar1 + -1;
          if (*(int *)*pauVar1 == 0) goto LAB_0010aee2;
        }
        _err_print_error("erase","./core/templates/list.h",0xe7,
                         "Condition \"p_I->data != this\" is true. Returning: false",0,0);
      } while (*(int *)pauVar15[1] != 0);
LAB_0010aee2:
      Memory::free_static(pauVar15,false);
LAB_0010aeec:
      if ((StringName::configured != '\0') &&
         (((local_508 == 0 || (StringName::unref(), StringName::configured != '\0')) &&
          (local_510 != 0)))) {
        StringName::unref();
      }
      GDScriptDataType::~GDScriptDataType(local_560);
      GDScriptDataType::~GDScriptDataType(local_550);
      GDScriptDataType::~GDScriptDataType(local_558);
      if ((StringName::configured != '\0') && (local_518 != 0)) {
        StringName::unref();
      }
      break;
    }
    if (*(int *)((Node *)local_598 + 8) != 0x13) {
LAB_00109db1:
      local_178 = (Object *)0x0;
      String::parse_latin1
                ((String *)&local_178,
                 "Compiler bug (please report): Expected the assignee to be an identifier here.");
      goto LAB_0010897d;
    }
    cVar9 = _is_class_member_property
                      ((GDScriptCompiler *)param_2,(CodeGen *)param_3,
                       (StringName *)((Node *)local_598 + 0x148));
    pOVar14 = _LC49;
    if (cVar9 == '\0') {
      local_598 = *(GDScriptDataType **)(pNVar29 + 0x150);
      if (*(int *)((Node *)local_598 + 8) != 0x13) goto LAB_00109db1;
      local_380 = (undefined1  [16])0x0;
      local_578 = _LC49;
      local_3a8 = _LC49;
      local_368 = _LC49;
      local_340 = (undefined1  [16])0x0;
      local_408 = 0;
      uStack_400 = 0;
      local_398 = 0;
      local_390 = 0;
      local_388 = 0;
      local_370 = 0;
      local_358 = 0;
      local_350 = 0;
      local_348 = 0;
      local_330 = 0;
      local_420 = 0;
      local_418 = local_418 & 0xffffff0000000000;
      local_410 = local_410 & 0xffffffff00000000;
      local_3f8 = 0;
      local_4a8[0] = (Object *)0x0;
      local_468 = (Object *)0x0;
      StringName::operator=((StringName *)local_4a8,(StringName *)((Node *)local_598 + 0x148));
      cVar9 = _is_local_or_parameter
                        ((GDScriptCompiler *)param_2,(CodeGen *)param_3,(StringName *)local_4a8);
      if (cVar9 == '\0') {
        local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
        cVar9 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                ::_lookup_pos((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                               *)(*(long *)param_3 + 0x268),(StringName *)local_4a8,
                              (uint *)&local_178);
        if (cVar9 == '\0') {
          for (pOVar35 = *(Object **)param_3; pOVar35 != (Object *)0x0;
              pOVar35 = *(Object **)(pOVar35 + 600)) {
            local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
            cVar9 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                    ::_lookup_pos((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                   *)(pOVar35 + 0x2c0),(StringName *)local_4a8,(uint *)&local_178);
            if (cVar9 != '\0') {
              puVar19 = (undefined4 *)
                        HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                        ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                      *)(pOVar35 + 0x2c0),(StringName *)local_4a8);
              StringName::operator=((StringName *)&local_468,(StringName *)(puVar19 + 2));
              bVar37 = local_468 != (Object *)0x0;
              bVar36 = false;
              if (bVar37) {
                bVar36 = *(Object **)(param_3 + 0x18) == local_468;
              }
              Variant::Variant((Variant *)&local_88,pOVar35);
              CodeGen::add_constant((Variant *)&local_178);
              local_368 = local_178;
              GDScriptDataType::operator=(local_360,(GDScriptDataType *)&local_170);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
              if (Variant::needs_deinit[(int)local_88] != '\0') {
                Variant::_clear_internal();
              }
              uVar12 = *puVar19;
              GDScriptDataType::operator=
                        ((GDScriptDataType *)&local_428,(GDScriptDataType *)(puVar19 + 6));
              goto LAB_0010d2cd;
            }
          }
          goto LAB_0010becc;
        }
        puVar19 = (undefined4 *)
                  HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                  ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                *)(*(long *)param_3 + 0x268),(StringName *)local_4a8);
        StringName::operator=((StringName *)&local_468,(StringName *)(puVar19 + 2));
        bVar37 = local_468 != (Object *)0x0;
        if (local_468 == (Object *)0x0) {
          bVar36 = false;
        }
        else {
          bVar36 = *(Object **)(param_3 + 0x18) == local_468;
        }
        local_3a8 = (Object *)CONCAT44(*puVar19,2);
        GDScriptDataType::operator=(local_3a0,(GDScriptDataType *)(puVar19 + 6));
        uVar12 = 0;
        cVar9 = '\0';
LAB_0010d2cd:
        local_568 = local_3a0;
        local_318 = 0;
        local_328 = local_3a8;
        local_310 = (ulong)local_310._5_3_ << 0x28;
        local_308 = (ulong)local_308._4_4_ << 0x20;
        local_2f0 = 0;
        local_300 = (undefined1  [16])0x0;
        GDScriptDataType::operator=((GDScriptDataType *)&local_320,local_568);
LAB_0010cc7e:
        local_538 = local_360;
        local_540 = (GDScriptDataType *)&local_320;
        local_568 = local_3a0;
        _parse_expression((CodeGen *)&local_2e8,param_2,param_3,param_4,
                          SUB81(*(undefined8 *)(pNVar29 + 0x158),0));
        if (*piVar17 == 0) {
          local_298 = ZEXT816(0);
          local_2a8 = pOVar14;
          iVar11 = *(int *)(pNVar29 + 0x148);
          local_288 = 0;
          local_270 = 0;
          plStack_280 = (long *)0x0;
          local_278 = (Object *)0x0;
          if (iVar11 == 0) {
            local_2a8 = (Object *)local_2e8;
            GDScriptDataType::operator=
                      ((GDScriptDataType *)&local_2a0,(GDScriptDataType *)local_2e0);
          }
          else {
            if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
              GDScriptParser::DataType::DataType
                        ((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
            }
            else {
              (*(code *)**(undefined8 **)pNVar29)((DataType *)&local_178,pNVar29);
            }
            _gdtype_from_datatype
                      ((DataType *)&local_3e8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
            CodeGen::add_temporary((GDScriptDataType *)&local_268);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_3e8);
            GDScriptParser::DataType::~DataType((DataType *)&local_178);
            _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                              SUB81(*(undefined8 *)(pNVar29 + 0x150),0));
            (**(code **)(*plVar3 + 0xa0))
                      (plVar3,(GDScriptDataType *)&local_268,*(undefined4 *)(pNVar29 + 0x14c),
                       (DataType *)&local_178,(CodeGen *)&local_2e8);
            local_2a8 = local_268;
            GDScriptDataType::operator=
                      ((GDScriptDataType *)&local_2a0,(GDScriptDataType *)&local_260);
            if ((uint)local_178 == 6) {
              (**(code **)(*plVar3 + 0x30))();
            }
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
          }
          local_588 = (GDScriptDataType *)&local_2a0;
          local_5a8 = (GDScriptDataType *)local_2e0;
          if ((bVar36) || (!bVar37)) {
            if (cVar9 == '\0') {
              if (pNVar29[0x160] == (Node)0x0) {
                (**(code **)(*plVar3 + 0x148))(plVar3,&local_328,&local_2a8);
              }
              else {
                (**(code **)(*plVar3 + 0x150))();
              }
            }
            else {
              CodeGen::add_temporary((GDScriptDataType *)&local_178);
              if (pNVar29[0x160] == (Node)0x0) {
                (**(code **)(*plVar3 + 0x148))(plVar3,(DataType *)&local_178,&local_2a8);
              }
              else {
                (**(code **)(*plVar3 + 0x150))();
              }
              (**(code **)(*plVar3 + 0x138))(plVar3,(DataType *)&local_178,&local_368,uVar12);
              (**(code **)(*plVar3 + 0x30))(plVar3);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
            }
          }
          else {
            local_3e0[0] = 0;
            local_178 = local_2a8;
            GDScriptDataType::GDScriptDataType((GDScriptDataType *)&local_170,local_588);
            Vector<GDScriptCodeGenerator::Address>::push_back
                      ((Vector<GDScriptCodeGenerator::Address> *)&local_3e8,(DataType *)&local_178);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
            puVar19 = (undefined4 *)local_168;
            for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
              *puVar19 = 0;
              puVar19 = puVar19 + (ulong)bVar38 * -2 + 1;
            }
            local_170 = (Object *)0x0;
            if (cVar9 == '\0') {
              GDScriptCodeGenerator::Address::Address
                        ((Address *)&local_268,0,(DataType *)&local_178);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_178);
            }
            else {
              GDScriptCodeGenerator::Address::Address
                        ((Address *)&local_268,1,(DataType *)&local_178);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_178);
            }
            uStack_150 = 0;
            uStack_14c = 0;
            plStack_148 = (long *)0x0;
            local_178 = pOVar14;
            local_168 = ZEXT816(0);
            local_158 = 0;
            uStack_154 = 0;
            local_140 = (Object *)0x0;
            (**(code **)(*plVar3 + 400))
                      (plVar3,(DataType *)&local_178,(Address *)&local_268,&local_468,
                       (Vector<GDScriptCodeGenerator::Address> *)&local_3e8);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
            CowData<GDScriptCodeGenerator::Address>::_unref
                      ((CowData<GDScriptCodeGenerator::Address> *)local_3e0);
          }
          if ((int)local_2a8 == 6) {
            (**(code **)(*plVar3 + 0x30))();
          }
          if ((iVar11 != 0) && ((int)local_2e8 == 6)) {
            (**(code **)(*plVar3 + 0x30))();
          }
          if ((int)local_328 == 6) {
            (**(code **)(*plVar3 + 0x30))();
          }
          GDScriptDataType::~GDScriptDataType(local_588);
          GDScriptDataType::~GDScriptDataType(local_5a8);
          GDScriptDataType::~GDScriptDataType(local_540);
          if ((StringName::configured != '\0') &&
             (((local_468 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0'))
              && (local_4a8[0] != (Object *)0x0)))) {
            StringName::unref();
          }
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_428);
          GDScriptDataType::~GDScriptDataType(local_538);
          GDScriptDataType::~GDScriptDataType(local_568);
          goto LAB_0010d082;
        }
        *(Object **)param_1 = pOVar14;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_2e0);
      }
      else {
LAB_0010becc:
        local_300 = (undefined1  [16])0x0;
        local_328 = pOVar14;
        local_318 = 0;
        local_310 = 0;
        local_308 = 0;
        local_2f0 = 0;
        _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                          SUB81(*(undefined8 *)(pNVar29 + 0x150),0));
        local_328 = local_178;
        GDScriptDataType::operator=((GDScriptDataType *)&local_320,(GDScriptDataType *)&local_170);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
        if (*piVar17 == 0) {
          bVar36 = false;
          cVar9 = '\0';
          uVar12 = 0;
          bVar37 = false;
          goto LAB_0010cc7e;
        }
        *(Object **)param_1 = pOVar14;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
      }
      local_538 = local_360;
      local_540 = (GDScriptDataType *)&local_320;
      local_568 = local_3a0;
      GDScriptDataType::~GDScriptDataType(local_540);
      if (((StringName::configured != '\0') &&
          ((local_468 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0'))))
         && (local_4a8[0] != (Object *)0x0)) {
        StringName::unref();
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_428);
      GDScriptDataType::~GDScriptDataType(local_538);
      GDScriptDataType::~GDScriptDataType(local_568);
      break;
    }
    _parse_expression((CodeGen *)&local_328,param_2,param_3,param_4,
                      SUB81(*(undefined8 *)(pNVar29 + 0x158),0));
    if (*piVar17 != 0) {
      *(undefined4 *)(param_1 + 0x18) = 0;
      *(undefined8 *)param_1 = 7;
      *(undefined8 *)(param_1 + 0x10) = 0;
      param_1[0x1c] = (CodeGen)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_320);
      break;
    }
    local_2e8 = (GDScriptFunction *)local_328;
    GDScriptDataType::GDScriptDataType((GDScriptDataType *)local_2e0,(GDScriptDataType *)&local_320)
    ;
    iVar11 = *(int *)(pNVar29 + 0x148);
    StringName::StringName
              ((StringName *)&local_3a8,(StringName *)(*(long *)(pNVar29 + 0x150) + 0x148));
    if (iVar11 == 0) {
      (**(code **)(*plVar3 + 0x128))(plVar3,&local_2e8,(StringName *)&local_3a8);
      iVar11 = (int)local_2e8;
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)((DataType *)&local_178,pNVar29);
      bVar37 = SUB81((DataType *)&local_178,0);
      _gdtype_from_datatype((DataType *)&local_268,(GDScript *)param_2,bVar37);
      CodeGen::add_temporary((GDScriptDataType *)&local_2a8);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
      GDScriptParser::DataType::~DataType((DataType *)&local_178);
      (**(code **)**(undefined8 **)(pNVar29 + 0x150))((DataType *)&local_178);
      _gdtype_from_datatype((DataType *)&local_368,(GDScript *)param_2,bVar37);
      CodeGen::add_temporary((GDScriptDataType *)&local_268);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_368);
      GDScriptParser::DataType::~DataType((DataType *)&local_178);
      (**(code **)(*plVar3 + 0x130))(plVar3,(DataType *)&local_268,(StringName *)&local_3a8);
      (**(code **)(*plVar3 + 0xa0))
                (plVar3,(GDScriptDataType *)&local_2a8,*(undefined4 *)(pNVar29 + 0x14c),
                 (DataType *)&local_268,(CodeGen *)&local_328);
      (**(code **)(*plVar3 + 0x30))(plVar3);
      local_2e8 = (GDScriptFunction *)local_2a8;
      GDScriptDataType::operator=((GDScriptDataType *)local_2e0,(GDScriptDataType *)&local_2a0);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a0);
      (**(code **)(*plVar3 + 0x128))(plVar3,&local_2e8,(StringName *)&local_3a8);
      if ((int)local_2e8 == 6) {
        (**(code **)(*plVar3 + 0x30))();
      }
      iVar11 = (int)local_328;
    }
    if (iVar11 == 6) {
      (**(code **)(*plVar3 + 0x30))();
    }
    if ((StringName::configured != '\0') && (local_3a8 != (Object *)0x0)) {
      StringName::unref();
    }
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_2e0);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_320);
    local_578 = _LC49;
LAB_0010d082:
    *(Object **)param_1 = local_578;
    goto LAB_001089a8;
      case 5:
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_2a8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    CodeGen::add_temporary((GDScriptDataType *)&local_268);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    uVar39 = *(undefined8 *)(param_2 + 0x78);
    uVar4 = *(undefined8 *)(pNVar29 + 0x148);
    *(undefined8 *)(param_2 + 0x78) = uVar4;
    _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,SUB81(uVar4,0));
    iVar11 = *piVar17;
    *(undefined8 *)(param_2 + 0x78) = uVar39;
    if (iVar11 != 0) goto LAB_0010a780;
    (**(code **)(*plVar3 + 0x230))(plVar3,(GDScriptDataType *)&local_268,(DataType *)&local_178);
joined_r0x00109b40:
    if ((uint)local_178 == 6) {
      (**(code **)(*plVar3 + 0x30))();
    }
    *(Object **)param_1 = local_268;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_260);
    goto LAB_00109a30;
      case 6:
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_268,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    CodeGen::add_temporary((GDScriptDataType *)&local_2a8);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    if (*(int *)(pNVar29 + 0x148) == 0xb) {
      _parse_expression((CodeGen *)&local_268,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x150),0));
      (**(code **)(*plVar3 + 0xb0))(plVar3,(DataType *)&local_268);
      _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x158),0));
      (**(code **)(*plVar3 + 0xb8))(plVar3,(DataType *)&local_178);
      (**(code **)(*plVar3 + 0xc0))(plVar3,(GDScriptDataType *)&local_2a8);
    }
    else if (*(int *)(pNVar29 + 0x148) == 0xc) {
      _parse_expression((CodeGen *)&local_268,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x150),0));
      (**(code **)(*plVar3 + 200))(plVar3,(DataType *)&local_268);
      _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x158),0));
      (**(code **)(*plVar3 + 0xd0))(plVar3,(DataType *)&local_178);
      (**(code **)(*plVar3 + 0xd8))(plVar3,(GDScriptDataType *)&local_2a8);
    }
    else {
      _parse_expression((CodeGen *)&local_268,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x150),0));
      _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x158),0));
      (**(code **)(*plVar3 + 0xa0))
                (plVar3,(GDScriptDataType *)&local_2a8,*(undefined4 *)(pNVar29 + 0x14c),
                 (DataType *)&local_268,(DataType *)&local_178);
    }
    if ((uint)local_178 == 6) {
      (**(code **)(*plVar3 + 0x30))();
    }
    if ((int)local_268 == 6) {
      (**(code **)(*plVar3 + 0x30))();
    }
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
    *(Object **)param_1 = local_2a8;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_2a0);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a0);
    break;
      case 9:
    pNVar32 = *(Node **)(param_2 + 0x78);
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_2e8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    pOVar14 = _LC49;
    local_2a8 = _LC49;
    local_298 = ZEXT816(0);
    local_288 = 0;
    local_270 = 0;
    plStack_280 = (long *)0x0;
    local_278 = (Object *)0x0;
    if (in_R9B == '\0') {
      CodeGen::add_temporary((GDScriptDataType *)&local_178);
      local_2a8 = local_178;
      GDScriptDataType::operator=((GDScriptDataType *)&local_2a0,(GDScriptDataType *)&local_170);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
    }
    else {
      local_258 = (undefined1  [16])0x0;
      local_248 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      local_260 = (ulong *)0x0;
      GDScriptCodeGenerator::Address::Address
                ((Address *)&local_178,7,(GDScriptDataType *)&local_268);
      local_2a8 = local_178;
      GDScriptDataType::operator=((GDScriptDataType *)&local_2a0,(GDScriptDataType *)&local_170);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
    }
    local_588 = (GDScriptDataType *)&local_2a0;
    local_598 = (GDScriptDataType *)&local_170;
    lVar25 = *(long *)(pNVar29 + 0x158);
    local_320 = 0;
    for (lVar33 = 0; (lVar25 != 0 && (lVar33 < *(long *)(lVar25 + -8))); lVar33 = lVar33 + 1) {
      _parse_expression((CodeGen *)&local_268,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(lVar25 + lVar33 * 8),0));
      if (*piVar17 != 0) {
        *(Object **)param_1 = pOVar14;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
        goto LAB_00109723;
      }
      local_178 = local_268;
      GDScriptDataType::GDScriptDataType(local_598,(GDScriptDataType *)&local_260);
      Vector<GDScriptCodeGenerator::Address>::push_back
                ((Vector<GDScriptCodeGenerator::Address> *)&local_328,(DataType *)&local_178);
      GDScriptDataType::~GDScriptDataType(local_598);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
      lVar25 = *(long *)(pNVar29 + 0x158);
    }
    if (pNVar29[0x168] == (Node)0x0) {
      pNVar30 = *(Node **)(pNVar29 + 0x148);
      iVar11 = *(int *)(pNVar30 + 8);
      if (iVar11 == 0x13) {
        pSVar22 = (StringName *)(pNVar29 + 0x160);
        iVar11 = GDScriptParser::get_builtin_type(pSVar22);
        if (iVar11 < 0x27) {
          pcVar6 = *(code **)(*plVar3 + 0x208);
          uVar12 = GDScriptParser::get_builtin_type(pSVar22);
          (*pcVar6)(plVar3,&local_2a8,uVar12,&local_328);
          goto LAB_001096c1;
        }
        if (pNVar29[0x168] != (Node)0x0) goto LAB_001096a0;
        pNVar30 = *(Node **)(pNVar29 + 0x148);
        iVar11 = *(int *)(pNVar30 + 8);
        if (iVar11 != 0x13) goto LAB_0010b079;
        cVar9 = Variant::has_utility_function(pSVar22);
        if (cVar9 != '\0') {
          (**(code **)(*plVar3 + 0x1a8))(plVar3,&local_2a8,pSVar22,&local_328);
          goto LAB_001096c1;
        }
        if (pNVar29[0x168] != (Node)0x0) goto LAB_001096a0;
        pNVar30 = *(Node **)(pNVar29 + 0x148);
        iVar11 = *(int *)(pNVar30 + 8);
        if (iVar11 != 0x13) goto LAB_0010b079;
        cVar9 = GDScriptUtilityFunctions::function_exists(pSVar22);
        if (cVar9 != '\0') {
          (**(code **)(*plVar3 + 0x1b0))(plVar3,&local_2a8,pSVar22,&local_328);
          goto LAB_001096c1;
        }
        pNVar30 = *(Node **)(pNVar29 + 0x148);
        if (pNVar29[0x168] != (Node)0x0) goto LAB_001096a0;
        iVar11 = *(int *)(pNVar30 + 8);
        if (iVar11 != 0x13) goto LAB_0010b079;
        cVar9 = ClassDB::has_method((StringName *)(*(long *)(*(long *)param_3 + 0x248) + 0x180),
                                    pSVar22,false);
        if (cVar9 == '\0') {
          if ((((pNVar29[0x169] == (Node)0x0) && (param_3[0x90] == (ExpressionNode)0x0)) &&
              ((*(long *)(param_3 + 0x10) == 0 ||
               (*(char *)(*(long *)(param_3 + 0x10) + 0x180) == '\0')))) &&
             (cVar9 = StringName::operator==(pSVar22,"new"), cVar9 == '\0')) {
            if (pNVar32 == pNVar29) {
              (**(code **)(*plVar3 + 0x1f0))(plVar3,&local_2a8,pSVar22,&local_328);
            }
            else {
              (**(code **)(*plVar3 + 0x1e8))(plVar3,&local_2a8,pSVar22,&local_328);
            }
            goto LAB_001096c1;
          }
          uStack_150 = 0;
          uStack_14c = 0;
          plStack_148 = (long *)0x0;
          local_178 = (Object *)0x1;
          local_158 = 0;
          uStack_154 = 0;
          local_168 = ZEXT816(0);
          local_140 = (Object *)0x0;
          if (pNVar32 == pNVar29) {
            (**(code **)(*plVar3 + 0x1a0))
                      (plVar3,&local_2a8,(DataType *)&local_178,pSVar22,&local_328);
          }
          else {
            (**(code **)(*plVar3 + 400))();
          }
        }
        else {
          local_178 = (Object *)0x0;
          local_158 = 0;
          uStack_154 = 0;
          local_168 = ZEXT816(0);
          local_140 = (Object *)0x0;
          uStack_150 = 0;
          uStack_14c = 0;
          plStack_148 = (long *)0x0;
          pMVar21 = (MethodBind *)
                    ClassDB::get_method((StringName *)(*(long *)(*(long *)param_3 + 0x248) + 0x180),
                                        pSVar22);
          cVar9 = _can_use_validate_call(pMVar21,(Vector *)&local_328);
          if (cVar9 == '\0') {
            (**(code **)(*plVar3 + 0x1d8))
                      (plVar3,&local_2a8,(DataType *)&local_178,pMVar21,(Vector *)&local_328);
          }
          else {
            (**(code **)(*plVar3 + 0x1e0))();
          }
        }
LAB_0010b257:
        GDScriptDataType::~GDScriptDataType(local_598);
        goto LAB_001096c1;
      }
LAB_0010b079:
      if (iVar11 == 0x20) {
        if (pNVar30[0x158] == (Node)0x0) {
          pcVar27 = "Cannot call something that isn\'t a function.";
          goto LAB_0010c748;
        }
        lVar25 = *(long *)(pNVar30 + 0x148);
        if (*(int *)(lVar25 + 8) == 0x13) {
          iVar11 = GDScriptParser::get_builtin_type((StringName *)(lVar25 + 0x148));
          if (iVar11 < 0x27) {
            pcVar6 = *(code **)(*plVar3 + 0x1c0);
            lVar25 = *(long *)(pNVar30 + 0x150);
            uVar12 = GDScriptParser::get_builtin_type
                               ((StringName *)(*(long *)(pNVar30 + 0x148) + 0x148));
            (*pcVar6)(plVar3,&local_2a8,uVar12,lVar25 + 0x148,&local_328);
            goto LAB_001096c1;
          }
          lVar25 = *(long *)(pNVar30 + 0x148);
          if ((pNVar29[0x168] == (Node)0x0) && (*(int *)(lVar25 + 8) == 0x13)) {
            if ((_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)
                 ::{lambda()#1}::operator()()::sname == '\0') &&
               (iVar11 = __cxa_guard_acquire(&_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)
                                              ::{lambda()#1}::operator()()::sname), iVar11 != 0)) {
              _scs_create((char *)&_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)
                                   ::{lambda()#1}::operator()()::sname,true);
              __cxa_atexit(StringName::~StringName,
                           &_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)
                            ::{lambda()#1}::operator()()::sname,&__dso_handle);
              __cxa_guard_release(&_parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)
                                   ::{lambda()#1}::operator()()::sname);
            }
            lVar25 = *(long *)(pNVar30 + 0x148);
            if (*(long *)(pNVar29 + 0x160) !=
                _parse_expression(GDScriptCompiler::CodeGen&,Error&,GDScriptParser::ExpressionNode_const*,bool,bool)
                ::{lambda()#1}::operator()()::sname) {
              cVar9 = ClassDB::class_exists((StringName *)(lVar25 + 0x148));
              if (cVar9 == '\0') {
                lVar25 = *(long *)(pNVar30 + 0x148);
              }
              else {
                pSVar22 = (StringName *)Engine::get_singleton();
                cVar9 = Engine::has_singleton(pSVar22);
                if (cVar9 == '\0') {
                  StringName::StringName
                            ((StringName *)&local_178,
                             (StringName *)(*(long *)(pNVar30 + 0x148) + 0x148));
                  pMVar21 = (MethodBind *)
                            ClassDB::get_method((StringName *)&local_178,
                                                (StringName *)(*(long *)(pNVar30 + 0x150) + 0x148));
                  cVar9 = _can_use_validate_call(pMVar21,(Vector *)&local_328);
                  if (cVar9 == '\0') {
                    (**(code **)(*plVar3 + 0x1c8))
                              (plVar3,&local_2a8,(DataType *)&local_178,
                               *(long *)(pNVar30 + 0x150) + 0x148,(Vector *)&local_328);
                  }
                  else {
                    (**(code **)(*plVar3 + 0x1d0))(plVar3,&local_2a8,pMVar21,(Vector *)&local_328);
                  }
                  if ((StringName::configured != '\0') && (local_178 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  goto LAB_001096c1;
                }
                lVar25 = *(long *)(pNVar30 + 0x148);
              }
            }
          }
        }
        _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,SUB81(lVar25,0));
        if (*piVar17 == 0) {
          if (pNVar32 == pNVar29) {
            (**(code **)(*plVar3 + 0x1a0))
                      (plVar3,&local_2a8,(DataType *)&local_178,pNVar32 + 0x160,&local_328);
          }
          else if (local_168[0xc] == '\0') {
            (**(code **)(*plVar3 + 400))
                      (plVar3,&local_2a8,(DataType *)&local_178,pNVar29 + 0x160,&local_328);
          }
          else if (local_168._8_4_ == 1) {
            (**(code **)(*plVar3 + 0x1b8))
                      (plVar3,&local_2a8,(DataType *)&local_178,local_158,pNVar29 + 0x160,&local_328
                      );
          }
          else {
            local_3a8 = (Object *)0x0;
            if (local_168._8_4_ == 2) {
              StringName::operator=((StringName *)&local_3a8,(StringName *)&uStack_150);
            }
            else {
              local_368 = (Object *)0x0;
              if (CONCAT44(uStack_14c,uStack_150) == 0) {
                (**(code **)(*plStack_148 + 0x1f0))(&local_268);
              }
              else {
                StringName::StringName((StringName *)&local_268,(StringName *)&uStack_150);
              }
              if (local_3a8 != local_268) {
                StringName::operator=((StringName *)&local_3a8,(StringName *)&local_268);
              }
              if ((StringName::configured != '\0') && (local_268 != (Object *)0x0)) {
                StringName::unref();
              }
              if ((StringName::configured != '\0') && (local_368 != (Object *)0x0)) {
                StringName::unref();
              }
            }
            local_570 = (StringName *)&local_3a8;
            cVar9 = ClassDB::class_exists(local_570);
            pSVar22 = (StringName *)(pNVar29 + 0x160);
            if ((cVar9 == '\0') ||
               (cVar9 = ClassDB::has_method(local_570,pSVar22,false), cVar9 == '\0')) {
              (**(code **)(*plVar3 + 400))
                        (plVar3,&local_2a8,(DataType *)&local_178,pSVar22,&local_328);
            }
            else {
              pMVar21 = (MethodBind *)ClassDB::get_method(local_570,pSVar22);
              cVar9 = _can_use_validate_call(pMVar21,(Vector *)&local_328);
              if (cVar9 == '\0') {
                (**(code **)(*plVar3 + 0x1d8))
                          (plVar3,&local_2a8,(DataType *)&local_178,pMVar21,(Vector *)&local_328);
              }
              else {
                (**(code **)(*plVar3 + 0x1e0))();
              }
            }
            if ((StringName::configured != '\0') && (local_3a8 != (Object *)0x0)) {
              StringName::unref();
            }
          }
          if ((uint)local_178 == 6) {
            (**(code **)(*plVar3 + 0x30))();
          }
          goto LAB_0010b257;
        }
        *(Object **)param_1 = pOVar14;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
        GDScriptDataType::~GDScriptDataType(local_598);
      }
      else {
        pcVar27 = "Compiler bug (please report): incorrect callee type in call node.";
LAB_0010c748:
        local_178 = (Object *)0x0;
        String::parse_latin1((String *)&local_178,pcVar27);
        _set_error((GDScriptCompiler *)param_2,(String *)&local_178,pNVar30);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
        *piVar17 = 0x24;
        *(Object **)param_1 = pOVar14;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
      }
    }
    else {
LAB_001096a0:
      (**(code **)(*plVar3 + 0x198))(plVar3,&local_2a8,pNVar29 + 0x160,&local_328);
LAB_001096c1:
      if (local_320 != 0) {
        lVar33 = 0;
        lVar25 = local_320;
        do {
          if (*(long *)(lVar25 + -8) <= lVar33) break;
          if (*(int *)(lVar25 + lVar33 * 0x40) == 6) {
            (**(code **)(*plVar3 + 0x30))(plVar3);
            lVar25 = local_320;
          }
          lVar33 = lVar33 + 1;
        } while (lVar25 != 0);
      }
      *(Object **)param_1 = local_2a8;
      GDScriptDataType::GDScriptDataType((GDScriptDataType *)(param_1 + 8),local_588);
    }
LAB_00109723:
    CowData<GDScriptCodeGenerator::Address>::_unref
              ((CowData<GDScriptCodeGenerator::Address> *)&local_320);
    GDScriptDataType::~GDScriptDataType(local_588);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2e8);
    break;
  case 10:
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_2a8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    local_268 = (Object *)0x7;
    local_258 = ZEXT816(0);
    local_248 = 0;
    local_230 = 0;
    uStack_240 = 0;
    uStack_238 = 0;
    if (local_298[4] == '\0') {
      _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x148),0));
      local_268 = local_178;
      GDScriptDataType::operator=((GDScriptDataType *)&local_260,(GDScriptDataType *)&local_170);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
    }
    else {
      CodeGen::add_temporary((GDScriptDataType *)&local_178);
      local_268 = local_178;
      GDScriptDataType::operator=((GDScriptDataType *)&local_260,(GDScriptDataType *)&local_170);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
      _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x148),0));
      (**(code **)(*plVar3 + 0x188))
                (plVar3,&local_268,(DataType *)&local_178,(DataType *)&local_2a8);
      if ((uint)local_178 == 6) {
        (**(code **)(*plVar3 + 0x30))();
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
    }
    *(Object **)param_1 = local_268;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_260);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
    break;
  case 0xe:
    local_320 = 0;
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_2e8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    CodeGen::add_temporary((GDScriptDataType *)&local_2a8);
    pOVar14 = _LC49;
    lVar23 = 0;
    lVar25 = *(long *)(pNVar29 + 0x150);
    if (lVar25 != 0) {
      do {
        if (*(long *)(lVar25 + -8) <= lVar23) break;
        local_268 = pOVar14;
        local_258 = ZEXT816(0);
        local_248 = 0;
        local_230 = 0;
        uStack_240 = 0;
        uStack_238 = 0;
        if (*(int *)(pNVar29 + 0x158) != 0) {
          if (*(int *)(pNVar29 + 0x158) != 1) goto LAB_00108b8d;
          _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                            SUB81(*(undefined8 *)(lVar25 + lVar23 * 0x10),0));
          local_268 = local_178;
          GDScriptDataType::operator=((GDScriptDataType *)&local_260,(GDScriptDataType *)&local_170)
          ;
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
          if (*piVar17 == 0) goto LAB_00108b8d;
          *(Object **)param_1 = pOVar14;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          param_1[0x1c] = (CodeGen)0x0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
LAB_0010b4ca:
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
          goto LAB_00108d73;
        }
        Variant::operator_cast_to_StringName((Variant *)&local_368);
        Variant::Variant((Variant *)&local_88,(StringName *)&local_368);
        CodeGen::add_constant((Variant *)&local_178);
        local_268 = local_178;
        GDScriptDataType::operator=((GDScriptDataType *)&local_260,(GDScriptDataType *)&local_170);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
        if (Variant::needs_deinit[(int)local_88] != '\0') {
          Variant::_clear_internal();
        }
        if ((StringName::configured != '\0') && (local_368 != (Object *)0x0)) {
          StringName::unref();
        }
LAB_00108b8d:
        local_178 = local_268;
        GDScriptDataType::GDScriptDataType
                  ((GDScriptDataType *)&local_170,(GDScriptDataType *)&local_260);
        Vector<GDScriptCodeGenerator::Address>::push_back
                  ((Vector<GDScriptCodeGenerator::Address> *)&local_328,(DataType *)&local_178);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
        lVar33 = *(long *)(pNVar29 + 0x150);
        if (lVar33 == 0) {
LAB_0010aacb:
          lVar25 = 0;
LAB_0010aace:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar23,lVar25,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar6 = (code *)invalidInstructionException();
          (*pcVar6)();
        }
        lVar25 = *(long *)(lVar33 + -8);
        if (lVar25 <= lVar23) goto LAB_0010aace;
        _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                          SUB81(*(undefined8 *)(lVar33 + 8 + lVar23 * 0x10),0));
        local_268 = local_178;
        GDScriptDataType::operator=((GDScriptDataType *)&local_260,(GDScriptDataType *)&local_170);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
        if (*piVar17 != 0) {
          *(Object **)param_1 = pOVar14;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          param_1[0x1c] = (CodeGen)0x0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
          goto LAB_0010b4ca;
        }
        lVar23 = lVar23 + 1;
        local_178 = local_268;
        GDScriptDataType::GDScriptDataType
                  ((GDScriptDataType *)&local_170,(GDScriptDataType *)&local_260);
        Vector<GDScriptCodeGenerator::Address>::push_back
                  ((Vector<GDScriptCodeGenerator::Address> *)&local_328,(DataType *)&local_178);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
        lVar25 = *(long *)(pNVar29 + 0x150);
      } while (lVar25 != 0);
    }
    local_588 = (GDScriptDataType *)&local_328;
    if (local_2e0._0_8_ == 0) {
      (**(code **)(*plVar3 + 0x220))(plVar3,(GDScriptDataType *)&local_2a8,local_588);
    }
    else {
      pcVar6 = *(code **)(*plVar3 + 0x228);
      GDScriptDataType::get_container_element_type_or_variant((int)(DataType *)&local_178);
      GDScriptDataType::get_container_element_type_or_variant((int)(GDScriptDataType *)&local_268);
      (*pcVar6)(plVar3,(GDScriptDataType *)&local_2a8,(GDScriptDataType *)&local_268,
                (DataType *)&local_178,local_588);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_178);
    }
    if (local_320 != 0) {
      lVar33 = 0;
      lVar25 = local_320;
      do {
        if (*(long *)(lVar25 + -8) <= lVar33) break;
        if (*(int *)(lVar25 + lVar33 * 0x40) == 6) {
          (**(code **)(*plVar3 + 0x30))(plVar3);
          lVar25 = local_320;
        }
        lVar33 = lVar33 + 1;
      } while (lVar25 != 0);
    }
LAB_00108d4e:
    *(Object **)param_1 = local_2a8;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_2a0);
LAB_00108d73:
    local_588 = (GDScriptDataType *)&local_2a0;
    local_580 = (GDScriptDataType *)&local_2e8;
    GDScriptDataType::~GDScriptDataType(local_588);
    GDScriptDataType::~GDScriptDataType(local_580);
    CowData<GDScriptCodeGenerator::Address>::_unref
              ((CowData<GDScriptCodeGenerator::Address> *)&local_320);
    break;
  case 0x12:
    auVar7._8_8_ = 0;
    auVar7._0_8_ = local_2e0._8_8_;
    local_2e0 = auVar7 << 0x40;
    NodePath::NodePath((NodePath *)&local_268,(String *)(pNVar29 + 0x148));
    Variant::Variant((Variant *)&local_88,(NodePath *)&local_268);
    CodeGen::add_constant((Variant *)&local_178);
    Vector<GDScriptCodeGenerator::Address>::push_back
              ((Vector<GDScriptCodeGenerator::Address> *)&local_2e8,(Variant *)&local_178);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    NodePath::~NodePath((NodePath *)&local_268);
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)((Variant *)&local_178,pNVar29);
    }
    _gdtype_from_datatype((DataType *)&local_2a8,(GDScript *)param_2,SUB81((Variant *)&local_178,0))
    ;
    CodeGen::add_temporary((GDScriptDataType *)&local_268);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    StringName::StringName((StringName *)&local_178,"get_node",false);
    StringName::StringName((StringName *)&local_2a8,"Node",false);
    uVar39 = ClassDB::get_method((StringName *)&local_2a8,(StringName *)&local_178);
    if (((StringName::configured != '\0') &&
        ((local_2a8 == (Object *)0x0 || (StringName::unref(), StringName::configured != '\0')))) &&
       (local_178 != (Object *)0x0)) {
      StringName::unref();
    }
    pcVar6 = *(code **)(*plVar3 + 0x1e0);
    local_298 = (undefined1  [16])0x0;
    local_288 = 0;
    plStack_280 = (long *)0x0;
    local_278 = (Object *)0x0;
    local_2a0 = 0;
    local_178 = (Object *)0x0;
    local_168 = ZEXT816(0);
    local_158 = 0;
    uStack_154 = 0;
    local_140 = (Object *)0x0;
    uStack_150 = 0;
    uStack_14c = 0;
    plStack_148 = (long *)0x0;
    StringName::operator=((StringName *)&uStack_150,(StringName *)&local_288);
    pOVar14 = local_140;
    plStack_148 = plStack_280;
    if (local_278 != local_140) {
      local_140 = local_278;
      if ((local_278 != (Object *)0x0) && (cVar9 = RefCounted::reference(), cVar9 == '\0')) {
        local_140 = (Object *)0x0;
      }
      if (((pOVar14 != (Object *)0x0) && (cVar9 = RefCounted::unreference(), cVar9 != '\0')) &&
         (cVar9 = predelete_handler(pOVar14), cVar9 != '\0')) {
        (**(code **)(*(long *)pOVar14 + 0x140))(pOVar14);
        Memory::free_static(pOVar14,false);
      }
    }
    if (local_168._0_8_ != local_2a0) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType> *)local_168,(CowData *)&local_2a0);
    }
    (*pcVar6)(plVar3,(NodePath *)&local_268,(Variant *)&local_178,uVar39,
              (Vector<GDScriptCodeGenerator::Address> *)&local_2e8);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
    *(Object **)param_1 = local_268;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_260);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
    CowData<GDScriptCodeGenerator::Address>::_unref
              ((CowData<GDScriptCodeGenerator::Address> *)local_2e0);
    break;
  case 0x13:
    StringName::StringName((StringName *)&local_3a8,(StringName *)(pNVar29 + 0x148));
    uVar2 = *(uint *)(pNVar29 + 0x158);
    if (uVar2 < 0xd) {
      if (5 < uVar2) {
        uVar13 = 1L << ((byte)uVar2 & 0x3f);
        if ((uVar13 & 0xb40) == 0) {
          if ((uVar13 & 0x480) == 0) {
            if (uVar2 == 0xc) {
              for (pOVar14 = *(Object **)param_3; pOVar14 != (Object *)0x0;
                  pOVar14 = *(Object **)(pOVar14 + 600)) {
                this = (HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                        *)(pOVar14 + 0x2c0);
                local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
                cVar9 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                        ::_lookup_pos(this,(StringName *)&local_3a8,(uint *)&local_178);
                if (cVar9 != '\0') {
                  local_178 = (Object *)0x0;
                  lVar25 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                           ::operator[](this,(StringName *)&local_3a8);
                  if ((*(Object **)(lVar25 + 0x10) != local_178) &&
                     (lVar25 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                               ::operator[](this,(StringName *)&local_3a8),
                     *(long *)(lVar25 + 0x10) != *(long *)(param_3 + 0x18))) {
                    if ((StringName::configured != '\0') && (local_178 != (Object *)0x0)) {
                      StringName::unref();
                    }
                    HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                    ::operator[](this,(StringName *)&local_3a8);
                    CodeGen::add_temporary((GDScriptDataType *)&local_268);
                    local_298 = (undefined1  [16])0x0;
                    local_288 = 0;
                    plStack_280 = (long *)0x0;
                    local_278 = (Object *)0x0;
                    local_2a0 = 0;
                    GDScriptCodeGenerator::Address::Address
                              ((Address *)&local_178,1,(GDScriptDataType *)&local_2a8);
                    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
                    local_2a0 = 0;
                    pcVar6 = *(code **)(*plVar3 + 400);
                    lVar25 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                             ::operator[](this,(StringName *)&local_3a8);
                    (*pcVar6)(plVar3,(GDScriptDataType *)&local_268,(Variant *)&local_178,
                              lVar25 + 0x10,(GDScriptDataType *)&local_2a8);
                    *(Object **)param_1 = local_268;
                    GDScriptDataType::GDScriptDataType
                              ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_260);
                    CowData<GDScriptCodeGenerator::Address>::_unref
                              ((CowData<GDScriptCodeGenerator::Address> *)&local_2a0);
                    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
                    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
                    goto LAB_001091d5;
                  }
                  if ((StringName::configured != '\0') && (local_178 != (Object *)0x0)) {
                    StringName::unref();
                  }
                  HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                  ::operator[](this,(StringName *)&local_3a8);
                  CodeGen::add_temporary((GDScriptDataType *)&local_268);
                  Variant::Variant((Variant *)&local_88,pOVar14);
                  CodeGen::add_constant((Variant *)&local_178);
                  if (Variant::needs_deinit[(int)local_88] != '\0') {
                    Variant::_clear_internal();
                  }
                  puVar19 = (undefined4 *)
                            HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                            ::operator[](this,(StringName *)&local_3a8);
                  (**(code **)(*plVar3 + 0x140))
                            (plVar3,(GDScriptDataType *)&local_268,(Variant *)&local_178,*puVar19);
                  goto LAB_0010dc57;
                }
              }
            }
          }
          else {
            for (lVar25 = *(long *)param_3; lVar25 != 0; lVar25 = *(long *)(lVar25 + 0x260)) {
              lVar23 = 0;
              lVar33 = lVar25;
              do {
                local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
                cVar9 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                        ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                       *)(lVar33 + 0x300),(StringName *)&local_3a8,
                                      (uint *)&local_178);
                if (cVar9 != '\0') {
                  HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                  ::operator[]((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                *)(lVar33 + 0x300),(StringName *)&local_3a8);
                  CodeGen::add_constant((Variant *)param_1);
                  goto LAB_001091d5;
                }
                plVar3 = (long *)(lVar33 + 0x248);
                lVar33 = *(long *)(lVar33 + 600);
                if (*plVar3 != 0) {
                  lVar23 = *plVar3;
                }
              } while (lVar33 != 0);
              if (lVar23 != 0) {
                local_178 = (Object *)((ulong)local_178 & 0xffffffffffffff00);
                lVar33 = ClassDB::get_integer_constant
                                   ((StringName *)(lVar23 + 0x180),(StringName *)&local_3a8,
                                    (bool *)&local_178);
                if (local_178._0_1_ != (DataType)0x0) {
                  Variant::Variant((Variant *)&local_88,lVar33);
                  CodeGen::add_constant((Variant *)param_1);
                  if (Variant::needs_deinit[(int)local_88] != '\0') {
                    Variant::_clear_internal();
                  }
                  goto LAB_001091d5;
                }
              }
            }
          }
        }
        else {
          cVar9 = _is_class_member_property
                            ((GDScriptCompiler *)param_2,(CodeGen *)param_3,(StringName *)&local_3a8
                            );
          if (cVar9 != '\0') {
            if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
              GDScriptParser::DataType::DataType
                        ((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
            }
            else {
              (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
            }
            _gdtype_from_datatype
                      ((DataType *)&local_2a8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
            CodeGen::add_temporary((GDScriptDataType *)&local_268);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
            pGVar20 = (GDScriptDataType *)&local_260;
            GDScriptParser::DataType::~DataType((DataType *)&local_178);
            (**(code **)(*plVar3 + 0x130))
                      (plVar3,(GDScriptDataType *)&local_268,(StringName *)&local_3a8);
            *(Object **)param_1 = local_268;
LAB_0010b75f:
            GDScriptDataType::GDScriptDataType((GDScriptDataType *)(param_1 + 8),pGVar20);
            GDScriptDataType::~GDScriptDataType(pGVar20);
            goto LAB_001091d5;
          }
          if ((*(long *)(param_3 + 0x10) == 0) ||
             (*(char *)(*(long *)(param_3 + 0x10) + 0x180) == '\0')) {
            local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
            cVar9 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                    ::_lookup_pos((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                   *)(*(long *)param_3 + 0x268),(StringName *)&local_3a8,
                                  (uint *)&local_178);
            if (cVar9 != '\0') {
              local_178 = (Object *)0x0;
              lVar25 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                       ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                     *)(*(long *)param_3 + 0x268),(StringName *)&local_3a8);
              if (*(Object **)(lVar25 + 0x10) == local_178) {
                bVar37 = false;
                if (StringName::configured != '\0') goto LAB_0010ebb4;
                lVar25 = *(long *)param_3;
              }
              else {
                lVar25 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                         ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                       *)(*(long *)param_3 + 0x268),(StringName *)&local_3a8);
                bVar37 = *(long *)(param_3 + 0x18) != *(long *)(lVar25 + 0x10);
                if (StringName::configured != '\0') {
LAB_0010ebb4:
                  if (local_178 != (Object *)0x0) {
                    StringName::unref();
                  }
                }
                lVar25 = *(long *)param_3;
                if (bVar37) {
                  HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                  ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                *)(lVar25 + 0x268),(StringName *)&local_3a8);
                  CodeGen::add_temporary((GDScriptDataType *)&local_178);
                  local_260 = (ulong *)0x0;
                  pcVar6 = *(code **)(*plVar3 + 0x1e8);
                  lVar25 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                           ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                         *)(*(long *)param_3 + 0x268),(StringName *)&local_3a8);
                  (*pcVar6)(plVar3,(GDScriptDataType *)&local_178,lVar25 + 0x10,&local_268);
                  *(Object **)param_1 = local_178;
                  GDScriptDataType::GDScriptDataType
                            ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_170);
                  CowData<GDScriptCodeGenerator::Address>::_unref
                            ((CowData<GDScriptCodeGenerator::Address> *)&local_260);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
                  goto LAB_001091d5;
                }
              }
              puVar19 = (undefined4 *)
                        HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                        ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                      *)(lVar25 + 0x268),(StringName *)&local_3a8);
              uVar12 = *puVar19;
              pGVar20 = (GDScriptDataType *)
                        GDScript::get_member_type(*(GDScript **)param_3,(StringName *)&local_3a8);
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              param_1[0x1c] = (CodeGen)0x0;
              *(undefined4 *)(param_1 + 0x20) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined4 *)param_1 = 2;
              *(undefined4 *)(param_1 + 4) = uVar12;
              *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
              GDScriptDataType::operator=((GDScriptDataType *)(param_1 + 8),pGVar20);
              goto LAB_001091d5;
            }
          }
          lVar25 = *(long *)(param_3 + 8);
          if (lVar25 != 0) {
LAB_0010c880:
            local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
            cVar9 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                    ::_lookup_pos((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                   *)(lVar25 + 0x150),(StringName *)&local_3a8,(uint *)&local_178);
            if (cVar9 == '\0') goto LAB_0010c870;
            local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
            cVar9 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                    ::_lookup_pos((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                   *)(lVar25 + 0x150),(StringName *)&local_3a8,(uint *)&local_178);
            if (cVar9 == '\0') {
              _err_print_error("operator[]","./core/templates/hash_map.h",0x245,
                               "FATAL: Condition \"!exists\" is true.",0,0);
              _err_flush_stdout();
                    /* WARNING: Does not return */
              pcVar6 = (code *)invalidInstructionException();
              (*pcVar6)();
            }
            lVar23 = (long)*(int *)(*(long *)(*(long *)(lVar25 + 0x158) +
                                             ((ulong)local_178 & 0xffffffff) * 8) + 0x18);
            lVar33 = *(long *)(lVar25 + 0x148);
            if (-1 < lVar23) {
              if (lVar33 != 0) {
                if (*(long *)(lVar33 + -8) <= lVar23) goto LAB_0010e5e3;
                puVar19 = (undefined4 *)(lVar33 + lVar23 * 0x70);
                local_178 = (Object *)CONCAT44(local_178._4_4_,*puVar19);
                local_170 = *(Object **)(puVar19 + 2);
                local_168 = *(undefined1 (*) [16])(puVar19 + 4);
                local_158 = (undefined4)*(undefined8 *)(puVar19 + 8);
                uStack_154 = (undefined4)((ulong)*(undefined8 *)(puVar19 + 8) >> 0x20);
                uStack_150 = puVar19[10];
                uStack_14c = CONCAT31(uStack_14c._1_3_,*(undefined1 *)(puVar19 + 0xb));
                plStack_148 = *(long **)(puVar19 + 0xc);
                local_140 = *(Object **)(puVar19 + 0xe);
                local_138 = puVar19[0x10];
                local_130 = (Object *)0x0;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_130,(CowData *)(puVar19 + 0x12))
                ;
                local_128[0] = *(GDScriptDataType *)(puVar19 + 0x14);
                local_120 = 0;
                CowData<char32_t>::_ref((CowData<char32_t> *)&local_120,(CowData *)(puVar19 + 0x16))
                ;
                local_118 = *(undefined1 *)(puVar19 + 0x18);
                local_110[0] = 0;
                CowData<char32_t>::_ref((CowData<char32_t> *)local_110,(CowData *)(puVar19 + 0x1a));
                uVar2 = (uint)local_178;
                if (1 < (uint)local_178 - 3) {
                  CowData<char32_t>::_unref((CowData<char32_t> *)local_110);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                  CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                  goto LAB_0010c870;
                }
                puVar19 = (undefined4 *)local_258;
                for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                  *puVar19 = 0;
                  puVar19 = puVar19 + (ulong)bVar38 * -2 + 1;
                }
                local_260 = (ulong *)0x0;
                CodeGen::add_temporary((GDScriptDataType *)&local_2e8);
                GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
                puVar19 = (undefined4 *)local_258;
                for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                  *puVar19 = 0;
                  puVar19 = puVar19 + (ulong)bVar38 * -2 + 1;
                }
                local_260 = (ulong *)0x0;
                GDScriptCodeGenerator::Address::Address
                          ((Address *)&local_2a8,0,(GDScriptDataType *)&local_268);
                GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
                if ((uVar2 == 3) && (local_170[0x180] != (Object)0x0)) {
                  puVar18 = &local_318;
                  for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                    *(undefined4 *)puVar18 = 0;
                    puVar18 = (undefined8 *)((long)puVar18 + (ulong)bVar38 * -8 + 4);
                  }
                  local_320 = 0;
                  GDScriptCodeGenerator::Address::Address
                            ((Address *)&local_268,1,(GDScriptDataType *)&local_328);
                  local_2a8 = local_268;
                  GDScriptDataType::operator=
                            ((GDScriptDataType *)&local_2a0,(GDScriptDataType *)&local_260);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_328);
                }
                (**(code **)(*plVar3 + 0x120))
                          (plVar3,(GDScriptDataType *)&local_2e8,(StringName *)&local_3a8,
                           (Address *)&local_2a8);
                *(GDScriptFunction **)param_1 = local_2e8;
                GDScriptDataType::GDScriptDataType
                          ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)local_2e0);
                GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a0);
                GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_2e0);
                if (local_110[0] != 0) {
                  LOCK();
                  plVar3 = (long *)(local_110[0] + -0x10);
                  *plVar3 = *plVar3 + -1;
                  UNLOCK();
                  if (*plVar3 == 0) {
                    Memory::free_static((void *)(local_110[0] + -0x10),false);
                  }
                }
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_120);
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_130);
                goto LAB_001091d5;
              }
              goto LAB_0010aacb;
            }
            if (lVar33 == 0) goto LAB_0010aacb;
LAB_0010e5e3:
            lVar25 = *(long *)(lVar33 + -8);
            goto LAB_0010aace;
          }
LAB_0010e1f1:
          lVar25 = *(long *)param_3;
          lVar33 = 0;
          if (lVar25 != 0) {
            do {
              plVar34 = (long *)(lVar25 + 0x248);
              lVar25 = *(long *)(lVar25 + 600);
              if (*plVar34 != 0) {
                lVar33 = *plVar34;
              }
            } while (lVar25 != 0);
            if (lVar33 != 0) {
              if ((Object *)*CoreStringNames::singleton != local_3a8) {
                cVar9 = ClassDB::has_signal((StringName *)(lVar33 + 0x180),(StringName *)&local_3a8,
                                            false);
                if ((cVar9 == '\0') &&
                   (cVar9 = ClassDB::has_method((StringName *)(lVar33 + 0x180),
                                                (StringName *)&local_3a8,false), cVar9 == '\0'))
                goto LAB_00109120;
              }
              puVar19 = (undefined4 *)local_168;
              for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar38 * -2 + 1;
              }
              local_170 = (Object *)0x0;
              CodeGen::add_temporary((GDScriptDataType *)&local_268);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_178);
              puVar19 = (undefined4 *)local_298;
              for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar38 * -2 + 1;
              }
              local_2a0 = 0;
              GDScriptCodeGenerator::Address::Address
                        ((Address *)&local_178,0,(GDScriptDataType *)&local_2a8);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
              (**(code **)(*plVar3 + 0x120))
                        (plVar3,(GDScriptDataType *)&local_268,(StringName *)&local_3a8,
                         (GDScriptDataType *)&local_178);
LAB_0010dc57:
              *(Object **)param_1 = local_268;
              GDScriptDataType::GDScriptDataType
                        ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_260);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
              goto LAB_001091d5;
            }
          }
        }
        goto LAB_00109120;
      }
      if (uVar2 == 0) {
        local_178 = (Object *)((ulong)local_178._4_4_ << 0x20);
        cVar9 = HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                ::_lookup_pos((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                               *)(GDScriptLanguage::singleton + 400),(StringName *)&local_3a8,
                              (uint *)&local_178);
        if (cVar9 == '\0') {
          cVar9 = ScriptServer::is_global_class((StringName *)&local_3a8);
          if (cVar9 == '\0') {
            local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
            cVar9 = HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                    ::_lookup_pos((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>
                                   *)(GDScriptLanguage::singleton + 0x1c0),(StringName *)&local_3a8,
                                  (uint *)&local_178);
            if (cVar9 != '\0') {
              puVar19 = (undefined4 *)local_258;
              for (lVar25 = 10; lVar25 != 0; lVar25 = lVar25 + -1) {
                *puVar19 = 0;
                puVar19 = puVar19 + (ulong)bVar38 * -2 + 1;
              }
              local_260 = (ulong *)0x0;
              CodeGen::add_temporary((GDScriptDataType *)&local_178);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
              pGVar20 = (GDScriptDataType *)&local_170;
              (**(code **)(*plVar3 + 0x180))
                        (plVar3,(StringName *)&local_178,(StringName *)&local_3a8);
              *(Object **)param_1 = local_178;
              goto LAB_0010b75f;
            }
            goto LAB_00109120;
          }
          lVar25 = *(long *)(param_3 + 8);
          do {
            lVar33 = lVar25;
            lVar25 = *(long *)(lVar33 + 0x180);
          } while (lVar25 != 0);
          lVar25 = *(long *)(lVar33 + 0x128);
          local_368 = (Object *)0x0;
          if ((lVar25 == 0) || (*(Object **)(lVar25 + 0x148) != local_3a8)) {
            if (local_3a8 == (Object *)0x0) {
              local_178 = (Object *)0x0;
            }
            else if (*(char **)(local_3a8 + 8) == (char *)0x0) {
              local_178 = (Object *)0x0;
              if (*(long *)(local_3a8 + 0x10) != 0) {
                CowData<char32_t>::_ref
                          ((CowData<char32_t> *)&local_178,(CowData *)(local_3a8 + 0x10));
              }
            }
            else {
              local_178 = (Object *)0x0;
              String::parse_latin1((String *)&local_178,*(char **)(local_3a8 + 8));
            }
            ScriptServer::get_global_class_path((String *)&local_328);
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
            ResourceLoader::get_resource_type((String *)&local_178);
            cVar9 = String::operator==((String *)&local_178,"GDScript");
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
            if (cVar9 == '\0') {
              local_268 = (Object *)0x0;
              String::parse_latin1((String *)&local_268,"");
              ResourceLoader::load
                        ((StringName *)&local_178,(String *)&local_328,(String *)&local_268,1,0);
              if (local_178 != (Object *)0x0) {
                local_368 = local_178;
                cVar9 = RefCounted::reference();
                if (cVar9 == '\0') {
                  local_368 = (Object *)0x0;
                }
              }
              Ref<Resource>::unref((Ref<Resource> *)&local_178);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
              if (local_368 != (Object *)0x0) goto LAB_0010e038;
              local_268 = (Object *)0x0;
              String::parse_latin1((String *)&local_268,", cyclic reference?");
              if (local_3a8 == (Object *)0x0) {
LAB_0010ffad:
                local_2e8 = (GDScriptFunction *)0x0;
              }
              else {
                local_2e8 = (GDScriptFunction *)0x0;
                if (*(char **)(local_3a8 + 8) == (char *)0x0) {
                  if (*(long *)(local_3a8 + 0x10) == 0) goto LAB_0010ffad;
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_2e8,(CowData *)(local_3a8 + 0x10));
                }
                else {
                  String::parse_latin1((String *)&local_2e8,*(char **)(local_3a8 + 8));
                }
              }
              local_580 = (GDScriptDataType *)&local_2e8;
              operator+((char *)&local_2a8,(String *)"Can\'t load global class ");
              String::operator+((String *)&local_178,(String *)&local_2a8);
              _set_error((GDScriptCompiler *)param_2,(String *)&local_178,pNVar29);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_2a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)local_580);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
              *piVar17 = 0x24;
              *(undefined8 *)param_1 = 7;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              param_1[0x1c] = (CodeGen)0x0;
              *(undefined4 *)(param_1 + 0x20) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
            }
            else {
              local_2a8 = (Object *)((ulong)local_2a8 & 0xffffffff00000000);
              local_268 = (Object *)0x0;
              GDScriptCache::get_shallow_script
                        ((String *)&local_178,(String *)&local_328,(String *)&local_2a8);
              Ref<Resource>::operator=((Ref<Resource> *)&local_368,(Ref *)local_178);
              Ref<GDScript>::unref((Ref<GDScript> *)&local_178);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
              if ((int)local_2a8 == 0) {
LAB_0010e038:
                CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
                goto LAB_0010e042;
              }
              if (local_3a8 == (Object *)0x0) {
                local_268 = (Object *)0x0;
              }
              else {
                local_268 = (Object *)0x0;
                if (*(char **)(local_3a8 + 8) == (char *)0x0) {
                  if (*(long *)(local_3a8 + 0x10) != 0) {
                    CowData<char32_t>::_ref
                              ((CowData<char32_t> *)&local_268,(CowData *)(local_3a8 + 0x10));
                  }
                }
                else {
                  String::parse_latin1((String *)&local_268,*(char **)(local_3a8 + 8));
                }
              }
              operator+((char *)&local_178,(String *)"Can\'t load global class ");
              _set_error((GDScriptCompiler *)param_2,(String *)&local_178,pNVar29);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
              *piVar17 = 0x24;
              *(undefined8 *)param_1 = 7;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              param_1[0x1c] = (CodeGen)0x0;
              *(undefined4 *)(param_1 + 0x20) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
            }
            CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
          }
          else {
            local_178 = (Object *)0x0;
            Ref<GDScript>::operator=((Ref<GDScript> *)&local_178,*(GDScript **)(param_2 + 0x58));
            Ref<Resource>::operator=((Ref<Resource> *)&local_368,(Ref *)local_178);
            Ref<GDScript>::unref((Ref<GDScript> *)&local_178);
LAB_0010e042:
            Variant::Variant((Variant *)&local_88,local_368);
            CodeGen::add_constant((Variant *)param_1);
            if (Variant::needs_deinit[(int)local_88] != '\0') {
              Variant::_clear_internal();
            }
          }
          Ref<Resource>::unref((Ref<Resource> *)&local_368);
        }
        else {
          ProjectSettings::get_singleton();
          lVar25 = ProjectSettings::get_autoload_list();
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_2c0._8_8_;
          local_2c0 = auVar8 << 0x40;
          local_2e0 = (undefined1  [16])0x0;
          local_2d0 = (undefined1  [16])0x0;
          lVar33 = 1;
          if (5 < *(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar25 + 0x28) * 4)) {
            do {
              if (*(uint *)(hash_table_size_primes + (ulong)*(uint *)(lVar25 + 0x28) * 4) <=
                  *(uint *)(hash_table_size_primes + lVar33 * 4)) {
                local_2c0._0_4_ = (int)lVar33;
                goto LAB_0010b85b;
              }
              lVar33 = lVar33 + 1;
            } while (lVar33 != 0x1d);
            _err_print_error("reserve","./core/templates/hash_map.h",0x1b7,
                             "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true."
                             ,0,0,0);
          }
LAB_0010b85b:
          if ((*(int *)(lVar25 + 0x2c) != 0) &&
             (plVar34 = *(long **)(lVar25 + 0x18), plVar34 != (long *)0x0)) {
            do {
              HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>
              ::insert((StringName *)&local_178,(AutoloadInfo *)&local_2e8,
                       (bool)((char)plVar34 + '\x10'));
              plVar34 = (long *)*plVar34;
            } while (plVar34 != (long *)0x0);
          }
          local_580 = (GDScriptDataType *)&local_2e8;
          local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
          cVar9 = HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>
                  ::_lookup_pos((HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>
                                 *)local_580,(StringName *)&local_3a8,(uint *)&local_178);
          if ((cVar9 == '\0') ||
             (lVar25 = HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>
                       ::operator[]((HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>
                                     *)local_580,(StringName *)&local_3a8),
             *(char *)(lVar25 + 0x10) == '\0')) {
            piVar17 = (int *)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                             ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                           *)(GDScriptLanguage::singleton + 400),
                                          (StringName *)&local_3a8);
            Variant::Variant((Variant *)&local_88,
                             (Variant *)
                             (*(long *)(GDScriptLanguage::singleton + 0x178) + (long)*piVar17 * 0x18
                             ));
            CodeGen::add_constant((Variant *)param_1);
            if (Variant::needs_deinit[(int)local_88] != '\0') {
              Variant::_clear_internal();
            }
          }
          else {
            (*(code *)**(undefined8 **)pNVar29)((StringName *)&local_178,pNVar29);
            _gdtype_from_datatype
                      ((DataType *)&local_2a8,(GDScript *)param_2,SUB81((StringName *)&local_178,0))
            ;
            CodeGen::add_temporary((GDScriptDataType *)&local_268);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
            GDScriptParser::DataType::~DataType((DataType *)&local_178);
            puVar19 = (undefined4 *)
                      HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                      ::operator[]((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
                                    *)(GDScriptLanguage::singleton + 400),(StringName *)&local_3a8);
            (**(code **)(*plVar3 + 0x178))(plVar3,(GDScriptDataType *)&local_268,*puVar19);
            *(Object **)param_1 = local_268;
            GDScriptDataType::GDScriptDataType
                      ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_260);
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
          }
          uVar39 = local_2e0._0_8_;
          if ((undefined8 *)local_2e0._0_8_ != (undefined8 *)0x0) {
            uVar4 = local_2e0._8_8_;
            if (local_2c0._4_4_ != 0) {
              if (*(uint *)(hash_table_size_primes + (ulong)(uint)local_2c0._0_4_ * 4) != 0) {
                piVar17 = (int *)(local_2e0._8_8_ +
                                 (ulong)*(uint *)(hash_table_size_primes +
                                                 (ulong)(uint)local_2c0._0_4_ * 4) * 4);
                piVar26 = (int *)local_2e0._8_8_;
                puVar18 = (undefined8 *)local_2e0._0_8_;
                do {
                  if (*piVar26 != 0) {
                    pvVar5 = (void *)*puVar18;
                    *piVar26 = 0;
                    CowData<char32_t>::_unref((CowData<char32_t> *)((long)pvVar5 + 0x20));
                    if ((StringName::configured != '\0') &&
                       (((*(long *)((long)pvVar5 + 0x18) == 0 ||
                         (StringName::unref(), StringName::configured != '\0')) &&
                        (*(long *)((long)pvVar5 + 0x10) != 0)))) {
                      StringName::unref();
                    }
                    Memory::free_static(pvVar5,false);
                    *puVar18 = 0;
                  }
                  piVar26 = piVar26 + 1;
                  puVar18 = puVar18 + 1;
                } while (piVar17 != piVar26);
              }
            }
            Memory::free_static((void *)uVar39,false);
            Memory::free_static((void *)uVar4,false);
          }
        }
      }
      else {
        this_00 = (HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                   *)(param_3 + 0x28);
        local_178 = (Object *)((ulong)local_178._4_4_ << 0x20);
        cVar9 = HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                ::_lookup_pos(this_00,(StringName *)&local_3a8,(uint *)&local_178);
        if (cVar9 == '\0') {
          if (in_stack_00000008 == '\0') {
            this_00 = (HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                       *)(param_3 + 0x58);
            local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
            cVar9 = HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                    ::_lookup_pos(this_00,(StringName *)&local_3a8,(uint *)&local_178);
            if (cVar9 != '\0') goto LAB_0010d6d3;
          }
          goto LAB_00109120;
        }
LAB_0010d6d3:
        puVar18 = (undefined8 *)
                  HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                  ::operator[](this_00,(StringName *)&local_3a8);
        *(undefined8 *)param_1 = *puVar18;
        GDScriptDataType::GDScriptDataType
                  ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)(puVar18 + 1));
      }
    }
    else {
LAB_00109120:
      if (local_3a8 == (Object *)0x0) {
        local_268 = (Object *)0x0;
      }
      else if (*(char **)(local_3a8 + 8) == (char *)0x0) {
        local_268 = (Object *)0x0;
        if (*(long *)(local_3a8 + 0x10) != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)&local_268,(CowData *)(local_3a8 + 0x10));
        }
      }
      else {
        local_268 = (Object *)0x0;
        String::parse_latin1((String *)&local_268,*(char **)(local_3a8 + 8));
      }
      operator+((char *)&local_178,(String *)"Identifier not found: ");
      _set_error((GDScriptCompiler *)param_2,(String *)&local_178,pNVar29);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
      *piVar17 = 0x24;
      *(undefined8 *)param_1 = 7;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[0x1c] = (CodeGen)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    }
LAB_001091d5:
    if ((StringName::configured != '\0') && (local_3a8 != (Object *)0x0)) {
      StringName::unref();
    }
    break;
  case 0x15:
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_2a8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    CodeGen::add_temporary((GDScriptDataType *)&local_268);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    local_2a0 = 0;
    if (*(long *)(pNVar29 + 0x168) == 0) {
      lVar25 = 0;
    }
    else {
      lVar25 = *(long *)(*(long *)(pNVar29 + 0x168) + -8);
    }
    CowData<GDScriptCodeGenerator::Address>::resize<false>
              ((CowData<GDScriptCodeGenerator::Address> *)&local_2a0,lVar25);
    lVar25 = *(long *)(pNVar29 + 0x168);
    for (lVar33 = 0; (lVar25 != 0 && (lVar33 < *(long *)(lVar25 + -8))); lVar33 = lVar33 + 1) {
      _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(lVar25 + lVar33 * 8),0));
      if (local_2a0 == 0) {
        lVar25 = 0;
LAB_0010aa83:
        _err_print_index_error
                  ("operator[]","./core/templates/vector.h",0x38,lVar33,lVar25,"p_index",
                   "((Vector<T> *)(this))->_cowdata.size()","",false,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar6 = (code *)invalidInstructionException();
        (*pcVar6)();
      }
      lVar25 = *(long *)(local_2a0 + -8);
      if (lVar25 <= lVar33) goto LAB_0010aa83;
      CowData<GDScriptCodeGenerator::Address>::_copy_on_write
                ((CowData<GDScriptCodeGenerator::Address> *)&local_2a0);
      puVar28 = (ulong *)(lVar33 * 0x40 + local_2a0);
      *puVar28 = (ulong)local_178;
      GDScriptDataType::operator=((GDScriptDataType *)(puVar28 + 1),(GDScriptDataType *)&local_170);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
      if (*piVar17 != 0) goto LAB_0010a9e0;
      lVar25 = *(long *)(pNVar29 + 0x168);
    }
    pOVar14 = (Object *)
              _parse_function((GDScriptCompiler *)param_2,(Error *)piVar17,*(GDScript **)param_3,
                              *(ClassNode **)(param_3 + 8),*(FunctionNode **)(pNVar29 + 0x148),false
                              ,true);
    local_328 = pOVar14;
    if (*piVar17 == 0) {
      if (*(long *)(pNVar29 + 0x168) == 0) {
        uVar12 = 0;
      }
      else {
        uVar12 = (undefined4)*(undefined8 *)(*(long *)(pNVar29 + 0x168) + -8);
      }
      local_178._0_5_ = CONCAT14(pNVar29[0x1a0],uVar12);
      HashMap<GDScriptFunction*,GDScript::LambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<GDScriptFunction*>,DefaultTypedAllocator<HashMapElement<GDScriptFunction*,GDScript::LambdaInfo>>>
      ::insert(&local_2e8,(LambdaInfo *)(*(long *)param_3 + 0x3c8),SUB81(&local_328,0));
      (**(code **)(*plVar3 + 0x200))
                (plVar3,(GDScriptDataType *)&local_268,pOVar14,(DataType *)&local_2a8,pNVar29[0x1a0]
                );
      lVar33 = local_2a0;
      for (lVar25 = 0; (lVar33 != 0 && (lVar25 < *(long *)(lVar33 + -8))); lVar25 = lVar25 + 1) {
        if (*(int *)(lVar33 + lVar25 * 0x40) == 6) {
          (**(code **)(*plVar3 + 0x30))(plVar3);
          lVar33 = local_2a0;
        }
      }
      *(Object **)param_1 = local_268;
      GDScriptDataType::GDScriptDataType
                ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_260);
    }
    else {
LAB_0010a9e0:
      *(undefined8 *)param_1 = 7;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[0x1c] = (CodeGen)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    }
    CowData<GDScriptCodeGenerator::Address>::_unref
              ((CowData<GDScriptCodeGenerator::Address> *)&local_2a0);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
    break;
  case 0x16:
    CodeGen::add_constant((Variant *)param_1);
    break;
  case 0x1c:
    Variant::Variant((Variant *)&local_88,*(Object **)(pNVar29 + 0x158));
    CodeGen::add_constant((Variant *)param_1);
    if (Variant::needs_deinit[(int)local_88] != '\0') {
      Variant::_clear_internal();
    }
    break;
  case 0x1e:
    if ((*(long *)(param_3 + 0x10) == 0) || (*(char *)(*(long *)(param_3 + 0x10) + 0x180) == '\0'))
    {
      local_168 = (undefined1  [16])0x0;
      plStack_148 = (long *)0x0;
      local_170 = (Object *)0x0;
      local_158 = 0;
      uStack_154 = 0;
      uStack_150 = 0;
      uStack_14c = 0;
      GDScriptCodeGenerator::Address::Address((Address *)param_1,0,(GDScriptDataType *)&local_178);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_178);
      break;
    }
    pcVar27 = "\'self\' not present in static function.";
LAB_00108970:
    local_178 = (Object *)0x0;
    String::parse_latin1((String *)&local_178,pcVar27);
    local_598 = (GDScriptDataType *)pNVar29;
LAB_0010897d:
    _set_error((GDScriptCompiler *)param_2,(String *)&local_178,(Node *)local_598);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
    *piVar17 = 0x24;
    *(undefined8 *)param_1 = 7;
LAB_001089a8:
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1[0x1c] = (CodeGen)0x0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    break;
  case 0x20:
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    bVar37 = SUB81((DataType *)&local_178,0);
    _gdtype_from_datatype((DataType *)&local_268,(GDScript *)param_2,bVar37);
    CodeGen::add_temporary((GDScriptDataType *)&local_2e8);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    _parse_expression((CodeGen *)&local_2a8,param_2,param_3,param_4,
                      SUB81(*(undefined8 *)(pNVar29 + 0x148),0));
    pOVar14 = _LC49;
    if (*piVar17 == 0) {
      local_4a8[0] = (Object *)0x0;
      pNVar32 = *(Node **)(pNVar29 + 0x150);
      local_268 = _LC49;
      local_258 = ZEXT816(0);
      local_248 = 0;
      local_230 = 0;
      uStack_240 = 0;
      uStack_238 = 0;
      if (pNVar29[0x158] == (Node)0x0) {
        if ((pNVar32[0x129] != (Node)0x0) && (*(int *)(pNVar32 + 0x130) == 0x15)) {
          Variant::operator_cast_to_StringName((Variant *)&local_178);
          if (local_4a8[0] != local_178) {
            StringName::operator=((StringName *)local_4a8,(StringName *)&local_178);
          }
          if ((StringName::configured != '\0') && (local_178 != (Object *)0x0)) {
            StringName::unref();
          }
          goto LAB_0010b420;
        }
        _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,SUB81(pNVar32,0));
        local_268 = local_178;
        GDScriptDataType::operator=((GDScriptDataType *)&local_260,(GDScriptDataType *)&local_170);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
        if (*piVar17 == 0) {
          (**(code **)(*plVar3 + 0x110))
                    (plVar3,(GDScriptDataType *)&local_2e8,(DataType *)&local_268,
                     (CodeGen *)&local_2a8);
          goto LAB_0010b445;
        }
        *(Object **)param_1 = pOVar14;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
      }
      else {
        if ((*(int *)(*(long *)(pNVar29 + 0x148) + 8) == 0x1e) &&
           (lVar25 = *(long *)param_3, lVar25 != 0)) {
          local_178 = (Object *)((ulong)local_178 & 0xffffffff00000000);
          cVar9 = HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                  ::_lookup_pos((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                 *)(lVar25 + 0x268),(StringName *)(pNVar32 + 0x148),
                                (uint *)&local_178);
          if ((cVar9 != '\0') &&
             (lVar25 = *(long *)(*(long *)(lVar25 + 0x270) + ((ulong)local_178 & 0xffffffff) * 8),
             lVar25 != 0)) {
            if (*(long *)(lVar25 + 0x28) == *(long *)(param_3 + 0x18)) {
              lVar25 = *(long *)(pNVar32 + 0x148);
              if (lVar25 == 0) {
LAB_0010f952:
                local_468 = (Object *)0x0;
              }
              else {
                local_468 = (Object *)0x0;
                if (*(char **)(lVar25 + 8) == (char *)0x0) {
                  if (*(long *)(lVar25 + 0x10) == 0) goto LAB_0010f952;
                  CowData<char32_t>::_ref
                            ((CowData<char32_t> *)&local_468,(CowData *)(lVar25 + 0x10));
                }
                else {
                  String::parse_latin1((String *)&local_468,*(char **)(lVar25 + 8));
                }
              }
              local_328 = (Object *)0x0;
              String::parse_latin1((String *)&local_328,"\' in getter.");
              local_3e8 = (Object *)0x0;
              String::parse_latin1((String *)&local_3e8,"\' instead of \'self.");
              operator+((char *)&local_428,(String *)"Must use \'");
              String::operator+((String *)&local_3a8,(String *)&local_428);
              String::operator+((String *)&local_368,(String *)&local_3a8);
              String::operator+((String *)&local_178,(String *)&local_368);
              _set_error((GDScriptCompiler *)param_2,(String *)&local_178,pNVar32);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_178);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_368);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_3a8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_428);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_3e8);
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_328);
              *piVar17 = 0x24;
              *(Object **)param_1 = pOVar14;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              param_1[0x1c] = (CodeGen)0x0;
              *(undefined4 *)(param_1 + 0x20) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
              CowData<char32_t>::_unref((CowData<char32_t> *)&local_468);
              goto LAB_0010a548;
            }
            cVar9 = StringName::operator==((StringName *)(lVar25 + 0x28),"");
            if (cVar9 != '\0') {
              (**(code **)(*plVar3 + 0x30))();
              (*(code *)**(undefined8 **)pNVar29)((DataType *)&local_178,pNVar29);
              _gdtype_from_datatype((DataType *)&local_328,(GDScript *)param_2,bVar37);
              uVar12 = *(undefined4 *)(lVar25 + 0x18);
              *(undefined4 *)(param_1 + 0x20) = 0;
              *(undefined8 *)(param_1 + 0x38) = 0;
              *(undefined4 *)(param_1 + 4) = uVar12;
              *(undefined8 *)(param_1 + 0x10) = 0;
              *(undefined4 *)(param_1 + 0x18) = 0;
              param_1[0x1c] = (CodeGen)0x0;
              *(undefined4 *)param_1 = 2;
              *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
              GDScriptDataType::operator=
                        ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_328);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_328);
              GDScriptParser::DataType::~DataType((DataType *)&local_178);
              goto LAB_0010a548;
            }
          }
        }
        StringName::operator=
                  ((StringName *)local_4a8,(StringName *)(*(long *)(pNVar29 + 0x150) + 0x148));
LAB_0010b420:
        local_570 = (StringName *)local_4a8;
        (**(code **)(*plVar3 + 0x120))
                  (plVar3,(GDScriptDataType *)&local_2e8,local_570,(CodeGen *)&local_2a8);
LAB_0010b445:
        if ((int)local_268 == 6) {
          (**(code **)(*plVar3 + 0x30))();
        }
        if ((int)local_2a8 == 6) {
          (**(code **)(*plVar3 + 0x30))();
        }
        *(GDScriptFunction **)param_1 = local_2e8;
        GDScriptDataType::GDScriptDataType
                  ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)local_2e0);
      }
LAB_0010a548:
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
      if ((StringName::configured != '\0') && (local_4a8[0] != (Object *)0x0)) {
        StringName::unref();
      }
    }
    else {
LAB_0010a7c8:
      *(undefined8 *)param_1 = 7;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[0x1c] = (CodeGen)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    }
    goto LAB_0010a295;
  case 0x22:
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_268,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    CodeGen::add_temporary((GDScriptDataType *)&local_2e8);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_268);
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    (**(code **)(*plVar3 + 0xe0))(plVar3,(GDScriptDataType *)&local_2e8);
    _parse_expression((CodeGen *)&local_2a8,param_2,param_3,param_4,
                      SUB81(*(undefined8 *)(pNVar29 + 0x148),0));
    if (*piVar17 != 0) goto LAB_0010a7c8;
    (**(code **)(*plVar3 + 0xe8))(plVar3,(CodeGen *)&local_2a8);
    if ((int)local_2a8 == 6) {
      (**(code **)(*plVar3 + 0x30))();
    }
    _parse_expression((CodeGen *)&local_268,param_2,param_3,param_4,
                      SUB81(*(undefined8 *)(pNVar29 + 0x150),0));
    if (*piVar17 == 0) {
      (**(code **)(*plVar3 + 0xf0))(plVar3,(DataType *)&local_268);
      if ((int)local_268 == 6) {
        (**(code **)(*plVar3 + 0x30))();
      }
      _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                        SUB81(*(undefined8 *)(pNVar29 + 0x158),0));
      if (*piVar17 == 0) {
        (**(code **)(*plVar3 + 0xf8))(plVar3,(DataType *)&local_178);
        if ((uint)local_178 == 6) {
          (**(code **)(*plVar3 + 0x30))();
        }
        (**(code **)(*plVar3 + 0x100))();
        *(GDScriptFunction **)param_1 = local_2e8;
        GDScriptDataType::GDScriptDataType
                  ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)local_2e0);
      }
      else {
        *(undefined8 *)param_1 = 7;
        *(undefined8 *)(param_1 + 0x10) = 0;
        *(undefined4 *)(param_1 + 0x18) = 0;
        param_1[0x1c] = (CodeGen)0x0;
        *(undefined4 *)(param_1 + 0x20) = 0;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
    }
    else {
      *(undefined8 *)param_1 = 7;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[0x1c] = (CodeGen)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    }
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
LAB_0010a295:
    local_5a8 = (GDScriptDataType *)local_2e0;
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a0);
    GDScriptDataType::~GDScriptDataType(local_5a8);
    break;
  case 0x24:
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_2a8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    CodeGen::add_temporary((GDScriptDataType *)&local_268);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
    uVar39 = 0x10998d;
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                      SUB81(*(undefined8 *)(pNVar29 + 0x148),0));
    _gdtype_from_datatype((DataType *)&local_2a8,(GDScript *)param_2,(bool)(param_5 + 'X'));
    if (*piVar17 == 0) {
      if (local_298[4] == '\0') {
        (**(code **)(*plVar3 + 0x160))(plVar3,(GDScriptDataType *)&local_268,uVar39);
      }
      else {
        (**(code **)(*plVar3 + 0xa8))
                  (plVar3,(GDScriptDataType *)&local_268,(DataType *)&local_178,
                   (DataType *)&local_2a8);
      }
      if ((uint)local_178 == 6) {
        (**(code **)(*plVar3 + 0x30))();
      }
      *(Object **)param_1 = local_268;
      GDScriptDataType::GDScriptDataType
                ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)&local_260);
    }
    else {
      *(undefined8 *)param_1 = 7;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[0x1c] = (CodeGen)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    }
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
    goto LAB_00109a30;
  case 0x25:
    if ((code *)**(undefined8 **)pNVar29 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_178,(DataType *)(pNVar29 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar29)(&local_178,pNVar29);
    }
    _gdtype_from_datatype
              ((DataType *)&local_2a8,(GDScript *)param_2,SUB81((DataType *)&local_178,0));
    CodeGen::add_temporary((GDScriptDataType *)&local_268);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_2a8);
    GDScriptParser::DataType::~DataType((DataType *)&local_178);
    _parse_expression((CodeGen *)&local_178,param_2,param_3,param_4,
                      SUB81(*(undefined8 *)(pNVar29 + 0x150),0));
    if (*piVar17 == 0) {
      (**(code **)(*plVar3 + 0x98))
                (plVar3,(GDScriptDataType *)&local_268,*(undefined4 *)(pNVar29 + 0x14c),
                 (DataType *)&local_178);
      goto joined_r0x00109b40;
    }
LAB_0010a780:
    *(undefined8 *)param_1 = 7;
    *(undefined8 *)(param_1 + 0x10) = 0;
    *(undefined4 *)(param_1 + 0x18) = 0;
    param_1[0x1c] = (CodeGen)0x0;
    *(undefined4 *)(param_1 + 0x20) = 0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
LAB_00109a30:
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_170);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_260);
  }
LAB_001088f5:
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return param_1;
LAB_0010c870:
  lVar25 = *(long *)(lVar25 + 0x1f0);
  if (lVar25 == 0) goto LAB_0010e1f1;
  goto LAB_0010c880;
   }

   /* GDScriptCompiler::_parse_match_pattern(GDScriptCompiler::CodeGen&, Error&,
   GDScriptParser::PatternNode const*, GDScriptCodeGenerator::Address const&,
   GDScriptCodeGenerator::Address const&, GDScriptCodeGenerator::Address const&, bool, bool) */
   CodeGen *GDScriptCompiler::_parse_match_pattern(CodeGen *param_1, Error *param_2, PatternNode *param_3, Address *param_4, Address *param_5, Address *param_6, bool param_7, bool param_8) {
      int iVar1;
      code *pcVar2;
      undefined8 uVar3;
      undefined8 *puVar4;
      undefined1 auVar5[16];
      Object *pOVar6;
      char cVar7;
      undefined8 *puVar8;
      bool bVar9;
      long lVar10;
      long *plVar11;
      long lVar12;
      long lVar13;
      long in_FS_OFFSET;
      undefined7 in_stack_00000009;
      undefined7 in_stack_00000011;
      char in_stack_00000018;
      char in_stack_00000020;
      GDScriptDataType *local_330;
      CowData<GDScriptCodeGenerator::Address> *local_328;
      GDScriptDataType *local_318;
      GDScriptDataType *local_308;
      Vector<GDScriptCodeGenerator::Address> local_2f8[8];
      undefined8 local_2f0;
      Vector<GDScriptCodeGenerator::Address> local_2e8[8];
      undefined8 local_2e0;
      GDScriptDataType local_2d8[8];
      undefined8 local_2d0;
      undefined4 local_2c8;
      undefined1 local_2c4;
      undefined4 local_2c0;
      undefined1 local_2b8[16];
      undefined8 local_2a8;
      Variant local_298[8];
      GDScriptDataType local_290[56];
      char *local_258;
      GDScriptDataType local_250[56];
      GDScriptDataType local_218[8];
      GDScriptDataType local_210[56];
      GDScriptDataType local_1d8[8];
      GDScriptDataType local_1d0[56];
      GDScriptDataType local_198[8];
      undefined8 local_190;
      undefined4 local_188;
      undefined1 local_184;
      undefined4 local_180;
      undefined1 local_178[16];
      undefined8 local_168;
      char *local_158;
      GDScriptDataType local_150[56];
      GDScriptDataType local_118[8];
      GDScriptDataType local_110[56];
      char *local_d8;
      GDScriptDataType local_d0[8];
      long local_c8[2];
      undefined8 local_b8;
      StringName local_b0[8];
      undefined8 uStack_a8;
      Object *local_a0;
      char *local_98;
      undefined8 local_90;
      undefined1 local_88[16];
      undefined4 local_78;
      undefined4 uStack_74;
      undefined8 uStack_70;
      undefined8 local_68;
      Object *local_60;
      int local_58[6];
      long local_40;
      puVar4 = (undefined8*)CONCAT71(in_stack_00000011, param_8);
      uVar3 = CONCAT71(in_stack_00000009, param_7);
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      bVar9 = SUB81(param_4, 0);
      switch (*(undefined4*)( param_5 + 0x128 )) {
         case 0:
    if (in_stack_00000020 == '\0') {
      if (in_stack_00000018 == '\0') {
        (**(code **)(**(long **)(param_3 + 0x20) + 200))(*(long **)(param_3 + 0x20),puVar4);
      }
    }
    else {
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))(*(long **)(param_3 + 0x20),puVar4);
    }
    iVar1 = *(int *)(*(long *)(param_5 + 0x130) + 0x148);
    Variant::Variant((Variant *)local_58,iVar1);
    CodeGen::add_constant((Variant *)&local_158);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_190 = 0;
    local_168 = 0;
    local_184 = 1;
    local_188 = 1;
    local_180 = 1;
    local_178 = (undefined1  [16])0x0;
    CodeGen::add_temporary(local_118);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
              (*(long **)(param_3 + 0x20),local_118,0,uVar3,(Variant *)&local_158);
    if (iVar1 == 4) {
      Variant::Variant((Variant *)local_58,0x15);
LAB_00111d02:
      CodeGen::add_constant((Variant *)&local_d8);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      CodeGen::add_temporary((GDScriptDataType *)&local_98);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_98,0,uVar3,
                 (Variant *)&local_d8);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_118,0x15,local_118,(GDScriptDataType *)&local_98);
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
      GDScriptDataType::~GDScriptDataType(local_d0);
    }
    else if (iVar1 == 0x15) {
      Variant::Variant((Variant *)local_58,4);
      goto LAB_00111d02;
    }
    (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))(*(long **)(param_3 + 0x20),local_118);
    _parse_expression((CodeGen *)&local_d8,param_2,(ExpressionNode *)param_3,bVar9,
                      SUB81(*(undefined8 *)(param_5 + 0x130),0));
    if (*(int *)param_4 == 0) {
      CodeGen::add_temporary((GDScriptDataType *)&local_98);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_98,0,param_6,
                 (CodeGen *)&local_d8);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb8))
                (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_98);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))(*(long **)(param_3 + 0x20),local_118);
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      if ((int)local_d8 == 6) {
        (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      }
      plVar11 = *(long **)(param_3 + 0x20);
      lVar10 = *plVar11;
      if (in_stack_00000020 == '\0') {
        if (in_stack_00000018 == '\0') {
          (**(code **)(lVar10 + 0xd0))(plVar11,local_118);
          (**(code **)(**(long **)(param_3 + 0x20) + 0xd8))(*(long **)(param_3 + 0x20),puVar4);
        }
        else {
          (**(code **)(lVar10 + 0x148))(plVar11,puVar4,local_118);
        }
      }
      else {
        (**(code **)(lVar10 + 0xb8))(plVar11,local_118);
        (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))(*(long **)(param_3 + 0x20),puVar4);
      }
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      *(undefined8 *)param_1 = *puVar4;
      GDScriptDataType::GDScriptDataType
                ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)(puVar4 + 1));
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
    }
    else {
      *(undefined8 *)param_1 = 7;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[0x1c] = (CodeGen)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    }
    GDScriptDataType::~GDScriptDataType(local_d0);
    GDScriptDataType::~GDScriptDataType(local_110);
    GDScriptDataType::~GDScriptDataType(local_198);
    GDScriptDataType::~GDScriptDataType(local_150);
    goto LAB_001100fe;
         case 1:
    if (in_stack_00000020 == '\0') {
      if (in_stack_00000018 == '\0') {
        (**(code **)(**(long **)(param_3 + 0x20) + 200))(*(long **)(param_3 + 0x20),puVar4);
      }
    }
    else {
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))(*(long **)(param_3 + 0x20),puVar4);
    }
    Variant::Variant((Variant *)local_58,4);
    CodeGen::add_constant(local_298);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    Variant::Variant((Variant *)local_58,0x15);
    CodeGen::add_constant((Variant *)&local_258);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_2b8 = (undefined1  [16])0x0;
    local_2d0 = 0;
    local_2a8 = 0;
    local_2c4 = 1;
    local_2c8 = 1;
    local_2c0 = 1;
    CodeGen::add_temporary(local_218);
    CodeGen::add_temporary(local_1d8);
    CodeGen::add_temporary(local_198);
    CodeGen::add_temporary((GDScriptDataType *)&local_158);
    local_88 = (undefined1  [16])0x0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_90 = 0;
    CodeGen::add_temporary(local_118);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_98);
    local_c8[0] = 0;
    _local_b0 = (undefined1  [16])0x0;
    local_d8 = _LC49;
    local_c8[1] = 0;
    local_b8 = 0;
    local_a0 = (Object *)0x0;
    _parse_expression((CodeGen *)&local_98,param_2,(ExpressionNode *)param_3,bVar9,
                      SUB81(*(undefined8 *)(param_5 + 0x130),0));
    local_d8 = local_98;
    GDScriptDataType::operator=(local_d0,(GDScriptDataType *)&local_90);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
    if (*(int *)param_4 == 0) {
      local_2e0 = 0;
      local_98 = local_d8;
      GDScriptDataType::GDScriptDataType((GDScriptDataType *)&local_90,local_d0);
      Vector<GDScriptCodeGenerator::Address>::push_back(local_2e8,(GDScriptDataType *)&local_98);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
      plVar11 = *(long **)(param_3 + 0x20);
      pcVar2 = *(code **)(*plVar11 + 0x1a8);
      StringName::StringName((StringName *)&local_98,"typeof",false);
      (*pcVar2)(plVar11,local_118,(GDScriptDataType *)&local_98,local_2e8);
      if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
        StringName::unref();
      }
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_218,0,uVar3,local_118);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_198,0,uVar3,local_298);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_158,0,local_118,
                 (Variant *)&local_258);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_198,0x14,local_198,(GDScriptDataType *)&local_158)
      ;
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_218,0x15,local_218,local_198);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_198,0,uVar3,(Variant *)&local_258);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_158,0,local_118,local_298);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_198,0x14,local_198,(GDScriptDataType *)&local_158)
      ;
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_218,0x15,local_218,local_198);
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))(*(long **)(param_3 + 0x20),local_218);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
                (*(long **)(param_3 + 0x20),local_1d8,0,param_6,&local_d8);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb8))(*(long **)(param_3 + 0x20),local_1d8);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))(*(long **)(param_3 + 0x20),local_218);
      if ((int)local_d8 == 6) {
        (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      }
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      plVar11 = *(long **)(param_3 + 0x20);
      lVar10 = *plVar11;
      if (in_stack_00000020 == '\0') {
        if (in_stack_00000018 == '\0') {
          (**(code **)(lVar10 + 0xd0))(plVar11,local_218);
          (**(code **)(**(long **)(param_3 + 0x20) + 0xd8))(*(long **)(param_3 + 0x20),puVar4);
        }
        else {
          (**(code **)(lVar10 + 0x148))(plVar11,puVar4,local_218);
        }
      }
      else {
        (**(code **)(lVar10 + 0xb8))(plVar11,local_218);
        (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))(*(long **)(param_3 + 0x20),puVar4);
      }
      (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
      *(undefined8 *)param_1 = *puVar4;
      GDScriptDataType::GDScriptDataType
                ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)(puVar4 + 1));
      CowData<GDScriptCodeGenerator::Address>::_unref
                ((CowData<GDScriptCodeGenerator::Address> *)&local_2e0);
    }
    else {
      *(char **)param_1 = _LC49;
      *(undefined8 *)(param_1 + 0x10) = 0;
      *(undefined4 *)(param_1 + 0x18) = 0;
      param_1[0x1c] = (CodeGen)0x0;
      *(undefined4 *)(param_1 + 0x20) = 0;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
    }
    GDScriptDataType::~GDScriptDataType(local_d0);
    GDScriptDataType::~GDScriptDataType(local_110);
    GDScriptDataType::~GDScriptDataType(local_150);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_190);
    GDScriptDataType::~GDScriptDataType(local_1d0);
    GDScriptDataType::~GDScriptDataType(local_210);
    GDScriptDataType::~GDScriptDataType(local_2d8);
    GDScriptDataType::~GDScriptDataType(local_250);
    GDScriptDataType::~GDScriptDataType(local_290);
    goto LAB_001100fe;
         case 2:
    if (in_stack_00000020 == '\0') {
      if (in_stack_00000018 == '\0') {
        (**(code **)(**(long **)(param_3 + 0x20) + 200))(*(long **)(param_3 + 0x20),puVar4);
      }
    }
    else {
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))(*(long **)(param_3 + 0x20),puVar4);
    }
    puVar8 = (undefined8 *)
             HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
             ::operator[]((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                           *)(param_3 + 0x58),(StringName *)(*(long *)(param_5 + 0x130) + 0x148));
    local_98 = (char *)*puVar8;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)&local_90,(GDScriptDataType *)(puVar8 + 1));
    (**(code **)(**(long **)(param_3 + 0x20) + 0x148))(*(long **)(param_3 + 0x20),&local_98,param_6)
    ;
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
    if (*(int *)(param_5 + 0x128) != 2) goto switchD_0011007c_caseD_6;
    if (in_stack_00000020 != '\0') goto LAB_0011015d;
    if (in_stack_00000018 == '\0') goto LAB_001115c6;
    plVar11 = *(long **)(param_3 + 0x20);
LAB_00110790:
    (**(code **)(*plVar11 + 0x160))(plVar11,puVar4);
    break;
         case 3:
    if (in_stack_00000020 == '\0') {
      if (in_stack_00000018 == '\0') {
        (**(code **)(**(long **)(param_3 + 0x20) + 200))(*(long **)(param_3 + 0x20),puVar4);
      }
    }
    else {
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))(*(long **)(param_3 + 0x20),puVar4);
    }
    Variant::Variant((Variant *)local_58,0x1c);
    CodeGen::add_constant(local_298);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_2b8 = (undefined1  [16])0x0;
    local_2d0 = 0;
    local_2a8 = 0;
    local_2c4 = 1;
    local_2c8 = 1;
    local_2c0 = 1;
    CodeGen::add_temporary((GDScriptDataType *)&local_258);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
              (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258,0,uVar3,local_298);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))();
    lVar10 = *(long *)(param_5 + 0x140);
    if (param_5[0x148] == '\0') {
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar10 + -8);
      }
    }
    else if (lVar10 == 0) {
      lVar10 = -1;
    }
    else {
      lVar10 = *(long *)(lVar10 + -8) + -1;
    }
    Variant::Variant((Variant *)local_58,lVar10);
    CodeGen::add_constant((Variant *)local_218);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_2c0 = 2;
    CodeGen::add_temporary(local_1d8);
    local_2f0 = 0;
    local_98 = *(char **)param_6;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)&local_90,(GDScriptDataType *)(param_6 + 8));
    Vector<GDScriptCodeGenerator::Address>::push_back(local_2f8,(StringName *)&local_98);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
    plVar11 = *(long **)(param_3 + 0x20);
    pcVar2 = *(code **)(*plVar11 + 0x1b0);
    StringName::StringName((StringName *)&local_98,"len",false);
    (*pcVar2)(plVar11,local_1d8,(StringName *)&local_98,local_2f8);
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    local_2c0 = 1;
    CodeGen::add_temporary(local_198);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
              (*(long **)(param_3 + 0x20),local_198,-(param_5[0x148] != '\0') & 5,local_1d8);
    lVar13 = 0;
    (**(code **)(**(long **)(param_3 + 0x20) + 0xb8))(*(long **)(param_3 + 0x20),local_198);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))
              (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258);
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    local_88 = (undefined1  [16])0x0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_90 = 0;
    CodeGen::add_temporary((GDScriptDataType *)&local_158);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_98);
    local_88 = (undefined1  [16])0x0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_90 = 0;
    CodeGen::add_temporary(local_118);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_98);
    lVar10 = *(long *)(param_5 + 0x140);
    if (lVar10 == 0) {
      plVar11 = *(long **)(param_3 + 0x20);
    }
    else {
      do {
        plVar11 = *(long **)(param_3 + 0x20);
        if ((*(long *)(lVar10 + -8) <= lVar13) ||
           (*(int *)(*(long *)(lVar10 + lVar13 * 8) + 0x128) == 5)) goto LAB_00111507;
        (**(code **)(*plVar11 + 0xb0))(plVar11,(GDScriptDataType *)&local_258);
        Variant::Variant((Variant *)local_58,(int)lVar13);
        CodeGen::add_constant((Variant *)&local_d8);
        if (Variant::needs_deinit[local_58[0]] != '\0') {
          Variant::_clear_internal();
        }
        (**(code **)(**(long **)(param_3 + 0x20) + 0x110))
                  (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_158,(Variant *)&local_d8,
                   param_6);
        local_2e0 = 0;
        local_98 = local_158;
        GDScriptDataType::GDScriptDataType((GDScriptDataType *)&local_90,local_150);
        Vector<GDScriptCodeGenerator::Address>::push_back(local_2e8,(StringName *)&local_98);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
        plVar11 = *(long **)(param_3 + 0x20);
        pcVar2 = *(code **)(*plVar11 + 0x1a8);
        StringName::StringName((StringName *)&local_98,"typeof",false);
        (*pcVar2)(plVar11,local_118,(StringName *)&local_98,local_2e8);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        lVar10 = *(long *)(param_5 + 0x140);
        if (lVar10 == 0) {
          lVar12 = 0;
LAB_001118c3:
          _err_print_index_error
                    ("get","./core/templates/cowdata.h",0xdb,lVar13,lVar12,"p_index","size()","",
                     false,true);
          _err_flush_stdout();
                    /* WARNING: Does not return */
          pcVar2 = (code *)invalidInstructionException();
          (*pcVar2)();
        }
        lVar12 = *(long *)(lVar10 + -8);
        if (lVar12 <= lVar13) goto LAB_001118c3;
        _parse_match_pattern
                  ((CodeGen *)&local_98,param_2,param_3,param_4,*(Address **)(lVar10 + lVar13 * 8),
                   (GDScriptDataType *)&local_158,SUB81(local_118,0),
                   SUB81((GDScriptDataType *)&local_258,0));
        local_258 = local_98;
        GDScriptDataType::operator=(local_250,(GDScriptDataType *)&local_90);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
        if (*(int *)param_4 != 0) {
          *(undefined8 *)param_1 = 7;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          param_1[0x1c] = (CodeGen)0x0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
          CowData<GDScriptCodeGenerator::Address>::_unref
                    ((CowData<GDScriptCodeGenerator::Address> *)&local_2e0);
          GDScriptDataType::~GDScriptDataType(local_d0);
          goto LAB_0011156b;
        }
        lVar13 = lVar13 + 1;
        (**(code **)(**(long **)(param_3 + 0x20) + 0xb8))
                  (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258);
        (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))
                  (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258);
        CowData<GDScriptCodeGenerator::Address>::_unref
                  ((CowData<GDScriptCodeGenerator::Address> *)&local_2e0);
        GDScriptDataType::~GDScriptDataType(local_d0);
        lVar10 = *(long *)(param_5 + 0x140);
      } while (lVar10 != 0);
      plVar11 = *(long **)(param_3 + 0x20);
    }
LAB_00111507:
    (**(code **)(*plVar11 + 0x30))();
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    plVar11 = *(long **)(param_3 + 0x20);
    lVar10 = *plVar11;
    if (in_stack_00000020 == '\0') {
      if (in_stack_00000018 == '\0') {
        (**(code **)(lVar10 + 0xd0))(plVar11,(GDScriptDataType *)&local_258);
        (**(code **)(**(long **)(param_3 + 0x20) + 0xd8))(*(long **)(param_3 + 0x20),puVar4);
      }
      else {
        (**(code **)(lVar10 + 0x148))(plVar11,puVar4,(GDScriptDataType *)&local_258);
      }
    }
    else {
      (**(code **)(lVar10 + 0xb8))(plVar11,(GDScriptDataType *)&local_258);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))(*(long **)(param_3 + 0x20),puVar4);
    }
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    *(undefined8 *)param_1 = *puVar4;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)(puVar4 + 1));
LAB_0011156b:
    GDScriptDataType::~GDScriptDataType(local_110);
    GDScriptDataType::~GDScriptDataType(local_150);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_190);
    local_328 = (CowData<GDScriptCodeGenerator::Address> *)&local_2f0;
    goto LAB_00111844;
         case 4:
    if (in_stack_00000020 == '\0') {
      if (in_stack_00000018 == '\0') {
        (**(code **)(**(long **)(param_3 + 0x20) + 200))(*(long **)(param_3 + 0x20),puVar4);
      }
    }
    else {
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))(*(long **)(param_3 + 0x20),puVar4);
    }
    Variant::Variant((Variant *)local_58,0x1b);
    CodeGen::add_constant(local_298);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_2b8 = (undefined1  [16])0x0;
    local_2d0 = 0;
    local_2a8 = 0;
    local_2c4 = 1;
    local_2c8 = 1;
    local_2c0 = 1;
    CodeGen::add_temporary((GDScriptDataType *)&local_258);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
              (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258,0,uVar3,local_298);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))();
    lVar10 = *(long *)(param_5 + 0x158);
    if (param_5[0x148] == '\0') {
      if (lVar10 == 0) {
        lVar10 = 0;
      }
      else {
        lVar10 = *(long *)(lVar10 + -8);
      }
    }
    else if (lVar10 == 0) {
      lVar10 = -1;
    }
    else {
      lVar10 = *(long *)(lVar10 + -8) + -1;
    }
    Variant::Variant((Variant *)local_58,lVar10);
    CodeGen::add_constant((Variant *)local_218);
    if (Variant::needs_deinit[local_58[0]] != '\0') {
      Variant::_clear_internal();
    }
    local_2c0 = 2;
    CodeGen::add_temporary(local_1d8);
    local_2e0 = 0;
    local_98 = *(char **)param_6;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)&local_90,(GDScriptDataType *)(param_6 + 8));
    Vector<GDScriptCodeGenerator::Address>::push_back(local_2e8,(StringName *)&local_98);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
    plVar11 = *(long **)(param_3 + 0x20);
    pcVar2 = *(code **)(*plVar11 + 0x1b0);
    StringName::StringName((StringName *)&local_98,"len",false);
    (*pcVar2)(plVar11,local_1d8,(StringName *)&local_98,local_2e8);
    if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
      StringName::unref();
    }
    local_2c0 = 1;
    CodeGen::add_temporary(local_198);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xa0))
              (*(long **)(param_3 + 0x20),local_198,-(param_5[0x148] != '\0') & 5,local_1d8,
               (Variant *)local_218);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xb8))(*(long **)(param_3 + 0x20),local_198);
    (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))
              (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258);
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    local_88 = (undefined1  [16])0x0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_90 = 0;
    CodeGen::add_temporary((GDScriptDataType *)&local_158);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_98);
    local_88 = (undefined1  [16])0x0;
    local_78 = 0;
    uStack_74 = 0;
    uStack_70 = 0;
    local_68 = 0;
    local_90 = 0;
    CodeGen::add_temporary(local_118);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_98);
    lVar10 = *(long *)(param_5 + 0x158);
    if (lVar10 != 0) {
      lVar13 = 0;
      do {
        if (*(long *)(lVar10 + -8) <= lVar13) break;
        puVar8 = (undefined8 *)(lVar10 + lVar13 * 0x10);
        if ((puVar8[1] != 0) && (*(int *)(puVar8[1] + 0x128) == 5)) break;
        (**(code **)(**(long **)(param_3 + 0x20) + 0xb0))
                  (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258);
        _parse_expression((CodeGen *)&local_d8,param_2,(ExpressionNode *)param_3,bVar9,
                          SUB81(*puVar8,0));
        if (*(int *)param_4 != 0) {
LAB_001117d8:
          *(undefined8 *)param_1 = 7;
          *(undefined8 *)(param_1 + 0x10) = 0;
          *(undefined4 *)(param_1 + 0x18) = 0;
          param_1[0x1c] = (CodeGen)0x0;
          *(undefined4 *)(param_1 + 0x20) = 0;
          *(undefined8 *)(param_1 + 0x38) = 0;
          *(undefined1 (*) [16])(param_1 + 0x28) = (undefined1  [16])0x0;
          GDScriptDataType::~GDScriptDataType(local_d0);
          goto LAB_0011181b;
        }
        CowData<GDScriptCodeGenerator::Address>::resize<false>
                  ((CowData<GDScriptCodeGenerator::Address> *)&local_2e0,0);
        uStack_70 = 0;
        local_68 = 0;
        local_98 = local_d8;
        local_60 = (Object *)0x0;
        auVar5._5_3_ = local_88._13_3_;
        auVar5._0_5_ = (int5)local_c8[1];
        auVar5._8_8_ = 0;
        local_88 = auVar5 << 0x40;
        local_78 = (undefined4)local_b8;
        StringName::operator=((StringName *)&uStack_70,local_b0);
        pOVar6 = local_60;
        local_68 = uStack_a8;
        if (local_a0 != local_60) {
          local_60 = local_a0;
          if ((local_a0 != (Object *)0x0) && (cVar7 = RefCounted::reference(), cVar7 == '\0')) {
            local_60 = (Object *)0x0;
          }
          if (((pOVar6 != (Object *)0x0) && (cVar7 = RefCounted::unreference(), cVar7 != '\0')) &&
             (cVar7 = predelete_handler(pOVar6), cVar7 != '\0')) {
            (**(code **)(*(long *)pOVar6 + 0x140))(pOVar6);
            Memory::free_static(pOVar6,false);
          }
        }
        if (local_88._0_8_ != local_c8[0]) {
          CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType> *)local_88,(CowData *)local_c8)
          ;
        }
        Vector<GDScriptCodeGenerator::Address>::push_back(local_2e8,(StringName *)&local_98);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
        plVar11 = *(long **)(param_3 + 0x20);
        pcVar2 = *(code **)(*plVar11 + 400);
        StringName::StringName((StringName *)&local_98,"has",false);
        (*pcVar2)(plVar11,(GDScriptDataType *)&local_258,param_6,(StringName *)&local_98,local_2e8);
        if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
          StringName::unref();
        }
        plVar11 = *(long **)(param_3 + 0x20);
        if (puVar8[1] != 0) {
          (**(code **)(*plVar11 + 0xb0))(plVar11,(GDScriptDataType *)&local_258);
          (**(code **)(**(long **)(param_3 + 0x20) + 0x110))
                    (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_158,(CodeGen *)&local_d8,
                     param_6);
          CowData<GDScriptCodeGenerator::Address>::resize<false>
                    ((CowData<GDScriptCodeGenerator::Address> *)&local_2e0,0);
          local_98 = local_158;
          GDScriptDataType::GDScriptDataType((GDScriptDataType *)&local_90,local_150);
          Vector<GDScriptCodeGenerator::Address>::push_back(local_2e8,(StringName *)&local_98);
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
          plVar11 = *(long **)(param_3 + 0x20);
          pcVar2 = *(code **)(*plVar11 + 0x1a8);
          StringName::StringName((StringName *)&local_98,"typeof",false);
          (*pcVar2)(plVar11,local_118,(StringName *)&local_98,local_2e8);
          if ((StringName::configured != '\0') && (local_98 != (char *)0x0)) {
            StringName::unref();
          }
          _parse_match_pattern
                    ((CodeGen *)&local_98,param_2,param_3,param_4,(Address *)puVar8[1],
                     (GDScriptDataType *)&local_158,SUB81(local_118,0),
                     SUB81((GDScriptDataType *)&local_258,0));
          local_258 = local_98;
          GDScriptDataType::operator=(local_250,(GDScriptDataType *)&local_90);
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
          if (*(int *)param_4 != 0) goto LAB_001117d8;
          (**(code **)(**(long **)(param_3 + 0x20) + 0xb8))
                    (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258);
          (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))
                    (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258);
          plVar11 = *(long **)(param_3 + 0x20);
        }
        (**(code **)(*plVar11 + 0xb8))(plVar11,(GDScriptDataType *)&local_258);
        (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))
                  (*(long **)(param_3 + 0x20),(GDScriptDataType *)&local_258);
        if ((int)local_d8 == 6) {
          (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
        }
        lVar13 = lVar13 + 1;
        GDScriptDataType::~GDScriptDataType(local_d0);
        lVar10 = *(long *)(param_5 + 0x158);
      } while (lVar10 != 0);
    }
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    plVar11 = *(long **)(param_3 + 0x20);
    lVar10 = *plVar11;
    if (in_stack_00000020 == '\0') {
      if (in_stack_00000018 == '\0') {
        (**(code **)(lVar10 + 0xd0))(plVar11,(GDScriptDataType *)&local_258);
        (**(code **)(**(long **)(param_3 + 0x20) + 0xd8))(*(long **)(param_3 + 0x20),puVar4);
      }
      else {
        (**(code **)(lVar10 + 0x148))(plVar11,puVar4,(GDScriptDataType *)&local_258);
      }
    }
    else {
      (**(code **)(lVar10 + 0xb8))(plVar11,(GDScriptDataType *)&local_258);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))(*(long **)(param_3 + 0x20),puVar4);
    }
    (**(code **)(**(long **)(param_3 + 0x20) + 0x30))();
    *(undefined8 *)param_1 = *puVar4;
    GDScriptDataType::GDScriptDataType
              ((GDScriptDataType *)(param_1 + 8),(GDScriptDataType *)(puVar4 + 1));
LAB_0011181b:
    local_328 = (CowData<GDScriptCodeGenerator::Address> *)&local_2e0;
    local_330 = local_150;
    GDScriptDataType::~GDScriptDataType(local_110);
    GDScriptDataType::~GDScriptDataType(local_330);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_190);
LAB_00111844:
    local_308 = local_250;
    local_318 = local_2d8;
    CowData<GDScriptCodeGenerator::Address>::_unref(local_328);
    GDScriptDataType::~GDScriptDataType(local_1d0);
    GDScriptDataType::~GDScriptDataType(local_210);
    GDScriptDataType::~GDScriptDataType(local_308);
    GDScriptDataType::~GDScriptDataType(local_318);
    GDScriptDataType::~GDScriptDataType(local_290);
    goto LAB_001100fe;
         case 5:
    goto switchD_0011007c_caseD_5;
         case 6:
switchD_0011007c_caseD_6:
    plVar11 = *(long **)(param_3 + 0x20);
    if (in_stack_00000020 == '\0') {
      if (in_stack_00000018 != '\0') goto LAB_00110790;
      (**(code **)(*plVar11 + 200))(plVar11,puVar4);
LAB_001115c6:
      Variant::Variant((Variant *)local_58,true);
      CodeGen::add_constant((Variant *)&local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      (**(code **)(**(long **)(param_3 + 0x20) + 0xd0))
                (*(long **)(param_3 + 0x20),(Variant *)&local_98);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xd8))(*(long **)(param_3 + 0x20),puVar4);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
    }
    else {
      (**(code **)(*plVar11 + 0xb0))(plVar11,puVar4);
LAB_0011015d:
      Variant::Variant((Variant *)local_58,true);
      CodeGen::add_constant((Variant *)&local_98);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
        Variant::_clear_internal();
      }
      (**(code **)(**(long **)(param_3 + 0x20) + 0xb8))
                (*(long **)(param_3 + 0x20),(Variant *)&local_98);
      (**(code **)(**(long **)(param_3 + 0x20) + 0xc0))(*(long **)(param_3 + 0x20),puVar4);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_90);
    }
    break;
         default:
    local_d8 = (char *)0x0;
    local_98 = 
    "Compiler bug (please report): Reaching the end of pattern compilation without matching a pattern."
    ;
    local_90 = 0x61;
    String::parse_latin1((StrRange *)&local_d8);
    _set_error((GDScriptCompiler *)param_2,(String *)&local_d8,(Node *)param_5);
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_d8);
    *(undefined4 *)param_4 = 0x24;
    goto switchD_0011007c_caseD_5;
      }

      *(undefined8*)param_1 = *puVar4;
      GDScriptDataType::GDScriptDataType((GDScriptDataType*)( param_1 + 8 ), (GDScriptDataType*)( puVar4 + 1 ));
      LAB_001100fe:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return param_1;
      switchD_0011007c_caseD_5:*(undefined8*)param_1 = *puVar4;
      GDScriptDataType::GDScriptDataType((GDScriptDataType*)( param_1 + 8 ), (GDScriptDataType*)( puVar4 + 1 ));
      goto LAB_001100fe;
   }

   /* GDScriptCompiler::_parse_block(GDScriptCompiler::CodeGen&, GDScriptParser::SuiteNode const*,
   bool, bool) */
   int GDScriptCompiler::_parse_block(GDScriptCompiler *this, CodeGen *param_1, SuiteNode *param_2, bool param_3, bool param_4) {
      long *plVar1;
      Node *pNVar2;
      code *pcVar3;
      Object *pOVar4;
      Node *pNVar5;
      code *pcVar6;
      undefined1 auVar7[16];
      undefined1 auVar8[16];
      Object *pOVar9;
      char cVar10;
      int iVar11;
      undefined4 uVar12;
      long *plVar13;
      long lVar14;
      undefined8 *puVar15;
      bool bVar16;
      undefined8 extraout_RDX;
      undefined8 uVar17;
      undefined8 extraout_RDX_00;
      StringName *pSVar18;
      long lVar19;
      long lVar20;
      long lVar21;
      long in_FS_OFFSET;
      undefined8 uVar22;
      undefined8 *local_330;
      long local_300;
      int local_2ac;
      long local_2a8;
      CodeGen local_2a0[8];
      Vector<GDScriptCodeGenerator::Address> local_298[8];
      undefined8 local_290;
      GDScriptDataType local_288[8];
      undefined8 local_280;
      undefined4 local_278;
      undefined1 local_274;
      undefined4 local_270;
      undefined1 local_268[16];
      undefined8 local_258;
      long local_248;
      GDScriptDataType local_240[8];
      long local_238;
      undefined4 local_230;
      undefined1 local_22c;
      undefined4 local_228;
      StringName local_220[8];
      Object *local_218;
      Object *local_210;
      int local_208[2];
      GDScriptDataType local_200[56];
      int local_1c8;
      undefined4 uStack_1c4;
      GDScriptDataType local_1c0[8];
      int local_1b8;
      char local_1b4;
      undefined8 local_188;
      long local_180;
      undefined1 local_178[16];
      undefined4 local_168;
      undefined4 uStack_164;
      undefined8 uStack_160;
      Object *pOStack_158;
      Object *local_150;
      undefined8 local_148;
      long local_140;
      undefined1 local_138[16];
      undefined4 local_128;
      undefined4 uStack_124;
      Object *pOStack_120;
      Object *pOStack_118;
      Object *local_110;
      undefined8 local_58;
      undefined1 local_50[16];
      long local_40;
      plVar1 = *(long**)( param_1 + 0x20 );
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_2ac = 0;
      local_2a8 = 0;
      ( **(code**)( *plVar1 + 0x38 ) )(plVar1);
      CodeGen::start_block(param_1);
      if (param_3) {
         _add_block_locals((CodeGen*)&local_148, (SuiteNode*)this);
         local_2a8 = local_148;
         local_148 = 0;
         List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List((List<GDScriptCodeGenerator::Address,DefaultAllocator>*)&local_148);
         lVar14 = *(long*)( param_2 + 0x138 );
         if (lVar14 == 0) {
            LAB_00112134:if (( param_3 ) && ( param_4 )) {
               _clear_block_locals(this, param_1, (List*)&local_2a8);
            }

            goto LAB_00113968;
         }

      }
 else {
         lVar14 = *(long*)( param_2 + 0x138 );
         if (lVar14 == 0) {
            LAB_00113968:CodeGen::end_block(param_1);
            iVar11 = 0;
            LAB_001138c2:List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List((List<GDScriptCodeGenerator::Address,DefaultAllocator>*)&local_2a8);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return iVar11;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

      }

      lVar20 = 0;
      LAB_00112058:if (*(long*)( lVar14 + -8 ) <= lVar20) goto LAB_00112134;
      pNVar2 = *(Node**)( lVar14 + lVar20 * 8 );
      uVar22 = 0x112076;
      ( **(code**)( *plVar1 + 0x2b0 ) )(plVar1, *(undefined4*)( pNVar2 + 0xc ));
      switch (*(undefined4*)( pNVar2 + 8 )) {
         case 3:
    _parse_expression((CodeGen *)&local_1c8,this,(ExpressionNode *)param_1,SUB81(&local_2ac,0),
                      SUB81(*(undefined8 *)(pNVar2 + 0x128),0));
    iVar11 = local_2ac;
    if (local_2ac == 0) {
      local_188 = 7;
      local_168 = 0;
      uStack_164 = 0;
      uStack_160 = 0;
      pOStack_158 = (Object *)0x0;
      local_178 = ZEXT816(0);
      local_150 = (Object *)0x0;
      if (*(long *)(pNVar2 + 0x130) != 0) {
        _parse_expression((CodeGen *)&local_148,this,(ExpressionNode *)param_1,SUB81(&local_2ac,0),
                          SUB81(*(long *)(pNVar2 + 0x130),0));
        local_188 = local_148;
        GDScriptDataType::operator=((GDScriptDataType *)&local_180,(GDScriptDataType *)&local_140);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
        iVar11 = local_2ac;
        if (local_2ac != 0) {
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
          goto LAB_00113c47;
        }
      }
      (**(code **)(*plVar1 + 0x2c0))(plVar1,(CodeGen *)&local_1c8,&local_188);
      if (local_1c8 == 6) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
      }
      if ((int)local_188 == 6) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
      GDScriptDataType::~GDScriptDataType(local_1c0);
      break;
    }
LAB_00113c47:
    GDScriptDataType::~GDScriptDataType(local_1c0);
    goto LAB_001138c2;
         default:
    cVar10 = (**(code **)(*(long *)pNVar2 + 0x10))(pNVar2);
    if (cVar10 == '\0') {
      local_148 = 0;
      String::parse_latin1
                ((String *)&local_148,
                 "Compiler bug (please report): unexpected node in parse tree while parsing statement."
                );
      _set_error(this,(String *)&local_148,pNVar2);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      iVar11 = 0x1e;
      goto LAB_001138c2;
    }
    _parse_expression((CodeGen *)&local_148,this,(ExpressionNode *)param_1,SUB81(&local_2ac,0),
                      SUB81(pNVar2,0));
    iVar11 = local_2ac;
    if (local_2ac != 0) goto LAB_00113bae;
    if ((int)local_148 == 6) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    }
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
    break;
         case 7:
    (**(code **)(*plVar1 + 0x298))(plVar1);
    break;
         case 8:
    (**(code **)(*plVar1 + 0x2a8))(plVar1);
    break;
         case 0xc:
    pNVar5 = *(Node **)(pNVar2 + 0x130);
    if (pNVar5[0x129] == (Node)0x0) {
      local_148 = 0;
      String::parse_latin1
                ((String *)&local_148,"Local constant must have a constant value as initializer.");
      _set_error(this,(String *)&local_148,pNVar5);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_148);
      iVar11 = 0x2b;
      goto LAB_001138c2;
    }
    pSVar18 = (StringName *)(*(long *)(pNVar2 + 0x128) + 0x148);
    uVar12 = (**(code **)(**(long **)(param_1 + 0x20) + 0x10))
                       (*(long **)(param_1 + 0x20),pSVar18,pNVar5 + 0x130);
    local_148 = CONCAT44(uVar12,3);
    local_178 = (undefined1  [16])0x0;
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    pOStack_158 = (Object *)0x0;
    local_180 = 0;
    local_138 = ZEXT816(0);
    local_128 = 0;
    uStack_124 = 0;
    local_110 = (Object *)0x0;
    pOStack_120 = (Object *)0x0;
    pOStack_118 = (Object *)0x0;
    StringName::operator=((StringName *)&pOStack_120,(StringName *)&local_168);
    pOVar4 = local_110;
    pOStack_118 = (Object *)uStack_160;
    if (pOStack_158 != local_110) {
      local_110 = pOStack_158;
      if ((pOStack_158 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')) {
        local_110 = (Object *)0x0;
      }
      if (((pOVar4 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
         (cVar10 = predelete_handler(pOVar4), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
        Memory::free_static(pOVar4,false);
      }
      }

      if (local_138._0_8_ != local_180) {
         CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)local_138, (CowData*)&local_180);
      }

      puVar15 = (undefined8*)HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::operator []((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>*)( param_1 + 0x58 ), pSVar18);
      *puVar15 = local_148;
      *(undefined4*)( puVar15 + 3 ) = local_138._8_4_;
      *(undefined1*)( (long)puVar15 + 0x1c ) = local_138[0xc];
      *(undefined4*)( puVar15 + 4 ) = local_128;
      StringName::operator =((StringName*)( puVar15 + 5 ), (StringName*)&pOStack_120);
      pOVar4 = (Object*)puVar15[7];
      puVar15[6] = pOStack_118;
      if (local_110 != pOVar4) {
         puVar15[7] = local_110;
         if (( local_110 != (Object*)0x0 ) && ( cVar10 = cVar10 == '\0' )) {
            puVar15[7] = 0;
         }

         if (( ( pOVar4 != (Object*)0x0 ) && ( cVar10 = RefCounted::unreference() ),cVar10 != '\0' )) &&( cVar10 = cVar10 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
         Memory::free_static(pOVar4, false);
      }

   }

   if (puVar15[2] != local_138._0_8_) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( puVar15 + 2 ), (CowData*)local_138);
   }

   GDScriptDataType::~GDScriptDataType((GDScriptDataType*)&local_140);
   GDScriptDataType::~GDScriptDataType((GDScriptDataType*)&local_188);
   plVar13 = (long*)HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::operator []((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>*)( param_1 + 0x58 ), pSVar18);
   local_148 = *plVar13;
   pOStack_120 = (Object*)0x0;
   pOStack_118 = (Object*)0x0;
   uStack_124 = 0;
   local_110 = (Object*)0x0;
   local_138 = ZEXT516(*(uint5*)( plVar13 + 3 )) << 0x40;
   local_128 = (undefined4)plVar13[4];
   StringName::operator =((StringName*)&pOStack_120, (StringName*)( plVar13 + 5 ));
   pOVar9 = local_110;
   pOStack_118 = (Object*)plVar13[6];
   pOVar4 = (Object*)plVar13[7];
   if (pOVar4 != local_110) {
      local_110 = pOVar4;
      if (( pOVar4 != (Object*)0x0 ) && ( cVar10 = cVar10 == '\0' )) {
         local_110 = (Object*)0x0;
      }

      if (( ( pOVar9 != (Object*)0x0 ) && ( cVar10 = RefCounted::unreference() ),cVar10 != '\0' )) &&( cVar10 = cVar10 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
      Memory::free_static(pOVar9, false);
   }

}
if (local_138._0_8_ != plVar13[2]) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)local_138, (CowData*)( plVar13 + 2 ));
}
GDScriptDataType::~GDScriptDataType((GDScriptDataType*)&local_140);break;case 0xd:
    (**(code **)(*plVar1 + 0x2a0))(plVar1);
    break;case 0x10:
    CodeGen::start_block(param_1);
    pcVar3 = *(code **)**(undefined8 **)(pNVar2 + 0x128);
    if (pcVar3 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType
                ((DataType *)&local_148,(DataType *)(*(undefined8 **)(pNVar2 + 0x128) + 7));
    }
    else {
      (*pcVar3)(&local_148);
    }
    bVar16 = SUB81((DataType *)&local_148,0);
    _gdtype_from_datatype((DataType *)&local_1c8,(GDScript *)this,bVar16);
    CodeGen::add_local((StringName *)&local_188,(GDScriptDataType *)param_1);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_1c8);
    GDScriptParser::DataType::~DataType((DataType *)&local_148);
    pcVar3 = *(code **)(*plVar1 + 0x260);
    pcVar6 = *(code **)**(undefined8 **)(pNVar2 + 0x140);
    if (pcVar6 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType
                ((DataType *)&local_148,(DataType *)(*(undefined8 **)(pNVar2 + 0x140) + 7));
    }
    else {
      (*pcVar6)((DataType *)&local_148);
    }
    _gdtype_from_datatype((DataType *)&local_1c8,(GDScript *)this,bVar16);
    (*pcVar3)(plVar1,(GDScriptDataType *)&local_180,(DataType *)&local_1c8);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_1c8);
    GDScriptParser::DataType::~DataType((DataType *)&local_148);
    _parse_expression((CodeGen *)&local_148,this,(ExpressionNode *)param_1,SUB81(&local_2ac,0),
                      SUB81(*(undefined8 *)(pNVar2 + 0x140),0));
    iVar11 = local_2ac;
    if (local_2ac == 0) {
      (**(code **)(*plVar1 + 0x268))(plVar1,(DataType *)&local_148);
      if ((int)local_148 == 6) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
      }
      (**(code **)(*plVar1 + 0x270))(plVar1,(StringName *)&local_188,pNVar2[0x138]);
      _add_block_locals((CodeGen *)&local_1c8,(SuiteNode *)this);
      iVar11 = _parse_block(this,param_1,*(SuiteNode **)(pNVar2 + 0x148),false,true);
      local_2ac = iVar11;
      if (iVar11 == 0) {
        (**(code **)(*plVar1 + 0x278))(plVar1);
        _clear_block_locals(this,param_1,(List *)&local_1c8);
        CodeGen::end_block(param_1);
        List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
                  ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)&local_1c8);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
        break;
      }
      List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
                ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)&local_1c8);
    }
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
    goto LAB_001138c2;case 0x14:
    _parse_expression((CodeGen *)&local_148,this,(ExpressionNode *)param_1,SUB81(&local_2ac,0),
                      SUB81(*(undefined8 *)(pNVar2 + 0x128),0));
    iVar11 = local_2ac;
    if (local_2ac == 0) {
      (**(code **)(*plVar1 + 0x238))(plVar1,(CodeGen *)&local_148);
      if ((int)local_148 == 6) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
      }
      iVar11 = _parse_block(this,param_1,*(SuiteNode **)(pNVar2 + 0x130),true,true);
      local_2ac = iVar11;
      if (iVar11 == 0) {
        lVar14 = *plVar1;
        if (*(long *)(pNVar2 + 0x138) != 0) {
          (**(code **)(lVar14 + 0x240))(plVar1);
          iVar11 = _parse_block(this,param_1,*(SuiteNode **)(pNVar2 + 0x138),true,true);
          local_2ac = iVar11;
          if (iVar11 != 0) goto LAB_00113bae;
          lVar14 = *plVar1;
        }
        (**(code **)(lVar14 + 0x248))(plVar1);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
        break;
      }
    }
    goto LAB_00113bae;case 0x17:
    CodeGen::start_block(param_1);
    pcVar3 = *(code **)**(undefined8 **)(pNVar2 + 0x128);
    if (pcVar3 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType
                ((DataType *)&local_148,(DataType *)(*(undefined8 **)(pNVar2 + 0x128) + 7));
    }
    else {
      (*pcVar3)(&local_148);
    }
    _gdtype_from_datatype((DataType *)&local_188,(GDScript *)this,SUB81((DataType *)&local_148,0));
    StringName::StringName((StringName *)&local_1c8,"@match_value",false);
    CodeGen::add_local((StringName *)&local_248,(GDScriptDataType *)param_1);
    if ((StringName::configured != '\0') && (CONCAT44(uStack_1c4,local_1c8) != 0)) {
      StringName::unref();
    }
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_188);
    uVar22 = 0x112666;
    GDScriptParser::DataType::~DataType((DataType *)&local_148);
    bVar16 = SUB81(&local_2ac,0);
    _parse_expression((CodeGen *)local_208,this,(ExpressionNode *)param_1,bVar16,
                      SUB81(*(undefined8 *)(pNVar2 + 0x128),0));
    iVar11 = local_2ac;
    if (local_2ac == 0) {
      (**(code **)(*plVar1 + 0x148))(plVar1,(StringName *)&local_248,(CodeGen *)local_208,uVar22);
      if (local_208[0] == 6) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
      }
      local_268 = (undefined1  [16])0x0;
      local_280 = 0;
      local_258 = 0;
      local_274 = 1;
      local_278 = 1;
      local_270 = 2;
      StringName::StringName((StringName *)&local_148,"@match_type",false);
      CodeGen::add_local((StringName *)&local_1c8,(GDScriptDataType *)param_1);
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
      local_290 = 0;
      local_148 = local_248;
      local_110 = (Object *)0x0;
      pOStack_120 = (Object *)0x0;
      pOStack_118 = (Object *)0x0;
      auVar7[4] = local_22c;
      auVar7._0_4_ = local_230;
      auVar7._5_3_ = local_138._13_3_;
      auVar7._8_8_ = 0;
      local_138 = auVar7 << 0x40;
      local_128 = local_228;
      StringName::operator=((StringName *)&pOStack_120,local_220);
      pOVar4 = local_110;
      pOStack_118 = local_218;
      if (local_210 != local_110) {
        local_110 = local_210;
        if ((local_210 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')) {
          local_110 = (Object *)0x0;
        }
        if (((pOVar4 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
           (cVar10 = predelete_handler(pOVar4), cVar10 != '\0')) {
          (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
          Memory::free_static(pOVar4,false);
        }
      }
      if (local_138._0_8_ != local_238) {
        CowData<GDScriptDataType>::_ref
                  ((CowData<GDScriptDataType> *)local_138,(CowData *)&local_238);
      }
      Vector<GDScriptCodeGenerator::Address>::push_back(local_298,(DataType *)&local_148);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
      pcVar3 = *(code **)(*plVar1 + 0x1a8);
      StringName::StringName((StringName *)&local_148,"typeof",false);
      (*pcVar3)(plVar1,(StringName *)&local_1c8,(DataType *)&local_148,local_298);
      if ((StringName::configured != '\0') && (local_148 != 0)) {
        StringName::unref();
      }
      lVar14 = *(long *)(pNVar2 + 0x138);
      if (lVar14 != 0) {
        local_300 = 0;
        do {
          if (*(long *)(lVar14 + -8) <= local_300) {
            if (lVar14 != 0) {
              lVar19 = 0;
              goto LAB_00113b37;
            }
            break;
          }
          if (local_300 != 0) {
            (**(code **)(*plVar1 + 0x240))();
            lVar14 = *(long *)(pNVar2 + 0x138);
          }
          if (lVar14 == 0) {
            lVar19 = 0;
            goto LAB_00113b89;
          }
          lVar19 = *(long *)(lVar14 + -8);
          if (lVar19 <= local_300) goto LAB_00113b89;
          lVar14 = *(long *)(lVar14 + local_300 * 8);
          CodeGen::start_block(param_1);
          _add_block_locals(local_2a0,(SuiteNode *)this);
          (**(code **)(*plVar1 + 0x2b0))(plVar1,*(undefined4 *)(lVar14 + 0xc));
          local_138 = (undefined1  [16])0x0;
          local_128 = 0;
          uStack_124 = 0;
          pOStack_120 = (Object *)0x0;
          pOStack_118 = (Object *)0x0;
          local_140 = 0;
          uVar12 = (**(code **)(**(long **)(param_1 + 0x20) + 0x28))
                             (*(long **)(param_1 + 0x20),(DataType *)&local_148);
          local_150 = (Object *)0x0;
          local_188 = CONCAT44(uVar12,6);
          auVar8._5_3_ = local_178._13_3_;
          auVar8._0_5_ = local_138._0_5_;
          auVar8._8_8_ = 0;
          local_178 = auVar8 << 0x40;
          uStack_160 = 0;
          pOStack_158 = (Object *)0x0;
          local_168 = local_138._8_4_;
          StringName::operator=((StringName *)&uStack_160,(StringName *)&local_128);
          pOVar4 = local_150;
          pOStack_158 = pOStack_120;
          if (pOStack_118 != local_150) {
            local_150 = pOStack_118;
            if ((pOStack_118 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')
               ) {
              local_150 = (Object *)0x0;
            }
            if (((pOVar4 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0'))
               && (cVar10 = predelete_handler(pOVar4), cVar10 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
              Memory::free_static(pOVar4,false);
            }
          }
          if (local_178._0_8_ != local_140) {
            CowData<GDScriptDataType>::_ref
                      ((CowData<GDScriptDataType> *)local_178,(CowData *)&local_140);
          }
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_148);
          lVar19 = *(long *)(lVar14 + 0x130);
          for (lVar21 = 0; (lVar19 != 0 && (lVar21 < *(long *)(lVar19 + -8))); lVar21 = lVar21 + 1)
          {
            _parse_match_pattern
                      ((CodeGen *)&local_148,this,(PatternNode *)param_1,(Address *)&local_2ac,
                       *(Address **)(lVar19 + lVar21 * 8),(StringName *)&local_248,
                       SUB81((StringName *)&local_1c8,0),SUB81((DataType *)&local_188,0));
            auVar7 = local_178;
            local_188 = local_148;
            local_178._8_4_ = local_138._8_4_;
            local_178._13_3_ = auVar7._13_3_;
            local_178[0xc] = local_138[0xc];
            local_168 = local_128;
            StringName::operator=((StringName *)&uStack_160,(StringName *)&pOStack_120);
            pOVar4 = local_150;
            pOStack_158 = pOStack_118;
            if (local_110 != local_150) {
              local_150 = local_110;
              if ((local_110 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')
                 ) {
                local_150 = (Object *)0x0;
              }
              if (((pOVar4 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')
                  ) && (cVar10 = predelete_handler(pOVar4), cVar10 != '\0')) {
                (**(code **)(*(long *)pOVar4 + 0x140))(pOVar4);
                Memory::free_static(pOVar4,false);
              }
            }
            if (local_178._0_8_ != local_138._0_8_) {
              CowData<GDScriptDataType>::_ref
                        ((CowData<GDScriptDataType> *)local_178,(CowData *)local_138);
            }
            if (((local_110 != (Object *)0x0) &&
                (cVar10 = RefCounted::unreference(), pOVar4 = local_110, cVar10 != '\0')) &&
               (cVar10 = predelete_handler(local_110), cVar10 != '\0')) {
              (**(code **)(*(long *)pOVar4 + 0x140))();
              Memory::free_static(pOVar4,false);
            }
            if ((StringName::configured != '\0') && (pOStack_120 != (Object *)0x0)) {
              StringName::unref();
            }
            CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)local_138);
            iVar11 = local_2ac;
            if (local_2ac != 0) goto LAB_00113852;
            lVar19 = *(long *)(lVar14 + 0x130);
          }
          lVar19 = *plVar1;
          if (*(long *)(lVar14 + 0x148) != 0) {
            (**(code **)(lVar19 + 0xb0))(plVar1,(DataType *)&local_188);
            puVar15 = *(undefined8 **)(*(long *)(lVar14 + 0x148) + 0x138);
            if (puVar15 == (undefined8 *)0x0) {
              lVar19 = 0;
            }
            else {
              lVar19 = puVar15[-1];
              if (0 < lVar19) {
                _parse_expression((CodeGen *)&local_148,this,(ExpressionNode *)param_1,bVar16,
                                  SUB81(*puVar15,0));
                iVar11 = local_2ac;
                if (local_2ac == 0) {
                  (**(code **)(*plVar1 + 0xb8))(plVar1,(DataType *)&local_148);
                  (**(code **)(*plVar1 + 0xc0))(plVar1,(DataType *)&local_188);
                  if ((int)local_148 == 6) {
                    (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
                  }
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
                  lVar19 = *plVar1;
                  goto LAB_001135e7;
                }
                GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
                goto LAB_00113852;
              }
            }
            local_300 = 0;
LAB_00113b89:
            _err_print_index_error
                      ("get","./core/templates/cowdata.h",0xdb,local_300,lVar19,"p_index","size()",
                       "",false,true);
            _err_flush_stdout();
                    /* WARNING: Does not return */
            pcVar3 = (code *)invalidInstructionException();
            (*pcVar3)();
          }
LAB_001135e7:
          (**(code **)(lVar19 + 0x238))(plVar1,(DataType *)&local_188);
          (**(code **)(*plVar1 + 0x30))(plVar1);
          local_2ac = _parse_block(this,param_1,*(SuiteNode **)(lVar14 + 0x138),false,true);
          iVar11 = local_2ac;
          if (local_2ac != 0) {
LAB_00113852:
            GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
            List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
                      ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)local_2a0);
            CowData<GDScriptCodeGenerator::Address>::_unref
                      ((CowData<GDScriptCodeGenerator::Address> *)&local_290);
            GDScriptDataType::~GDScriptDataType(local_1c0);
            GDScriptDataType::~GDScriptDataType(local_288);
            goto LAB_00113898;
          }
          _clear_block_locals(this,param_1,(List *)local_2a0);
          CodeGen::end_block(param_1);
          GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
          List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
                    ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)local_2a0);
          local_300 = local_300 + 1;
          lVar14 = *(long *)(pNVar2 + 0x138);
        } while (lVar14 != 0);
      }
      goto LAB_00113689;
    }
LAB_00113898:
    GDScriptDataType::~GDScriptDataType(local_200);
    GDScriptDataType::~GDScriptDataType(local_240);
    goto LAB_001138c2;case 0x1a:
    break;case 0x1d:
    local_188 = 7;
    local_168 = 0;
    uStack_164 = 0;
    uStack_160 = 0;
    pOStack_158 = (Object *)0x0;
    local_178 = ZEXT816(0);
    local_150 = (Object *)0x0;
    uVar17 = extraout_RDX;
    if (*(long *)(pNVar2 + 0x128) != 0) {
      _parse_expression((CodeGen *)&local_148,this,(ExpressionNode *)param_1,SUB81(&local_2ac,0),
                        SUB81(*(long *)(pNVar2 + 0x128),0));
      local_188 = local_148;
      GDScriptDataType::operator=((GDScriptDataType *)&local_180,(GDScriptDataType *)&local_140);
      uVar17 = uVar22;
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
      iVar11 = local_2ac;
      if (local_2ac != 0) {
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
        goto LAB_001138c2;
      }
    }
    pcVar3 = *(code **)(*plVar1 + 0x2b8);
    if (pNVar2[0x130] == (Node)0x0) {
      (*pcVar3)(plVar1,&local_188,uVar17);
    }
    else {
      local_50 = (undefined1  [16])0x0;
      local_58 = 0;
      CodeGen::add_constant((Variant *)&local_148);
      (*pcVar3)(plVar1,(Variant *)&local_148);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
      if (Variant::needs_deinit[(int)local_58] != '\0') {
        Variant::_clear_internal();
      }
    }
    if ((int)local_188 == 6) {
      (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
    }
    goto LAB_00112270;case 0x26:
    plVar13 = (long *)HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                      ::operator[]((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                                    *)(param_1 + 0x58),
                                   (StringName *)(*(long *)(pNVar2 + 0x128) + 0x148));
    local_188 = *plVar13;
    uStack_160 = 0;
    pOStack_158 = (Object *)0x0;
    uStack_164 = 0;
    local_150 = (Object *)0x0;
    local_178 = ZEXT516(*(uint5 *)(plVar13 + 3)) << 0x40;
    local_168 = (undefined4)plVar13[4];
    StringName::operator=((StringName *)&uStack_160,(StringName *)(plVar13 + 5));
    pOVar9 = local_150;
    pOStack_158 = (Object *)plVar13[6];
    pOVar4 = (Object *)plVar13[7];
    if (pOVar4 != local_150) {
      local_150 = pOVar4;
      if ((pOVar4 != (Object *)0x0) && (cVar10 = RefCounted::reference(), cVar10 == '\0')) {
        local_150 = (Object *)0x0;
      }
      if (((pOVar9 != (Object *)0x0) && (cVar10 = RefCounted::unreference(), cVar10 != '\0')) &&
         (cVar10 = predelete_handler(pOVar9), cVar10 != '\0')) {
        (**(code **)(*(long *)pOVar9 + 0x140))(pOVar9);
        Memory::free_static(pOVar9,false);
      }
    }
    if (local_178._0_8_ != plVar13[2]) {
      CowData<GDScriptDataType>::_ref
                ((CowData<GDScriptDataType> *)local_178,(CowData *)(plVar13 + 2));
    }
    if ((code *)**(undefined8 **)pNVar2 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_148,(DataType *)(pNVar2 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)pNVar2)(&local_148,pNVar2);
    }
    _gdtype_from_datatype((DataType *)&local_1c8,(GDScript *)this,SUB81((DataType *)&local_148,0));
    GDScriptParser::DataType::~DataType((DataType *)&local_148);
    if (*(long *)(pNVar2 + 0x130) == 0) {
      if ((local_1b4 == '\0') || (local_1b8 != 1)) {
        cVar10 = (**(code **)(**(long **)(param_1 + 0x20) + 0x48))
                           (*(long **)(param_1 + 0x20),&local_188);
        if (cVar10 == '\0') {
          if (param_2[0x1cb] != (SuiteNode)0x0) {
            (**(code **)(**(long **)(param_1 + 0x20) + 0x40))(*(long **)(param_1 + 0x20),&local_188)
            ;
          }
          goto LAB_00112578;
        }
      }
      local_330 = &local_188;
      (**(code **)(**(long **)(param_1 + 0x20) + 0x40))(*(long **)(param_1 + 0x20),local_330);
    }
    else {
      _parse_expression((CodeGen *)&local_148,this,(ExpressionNode *)param_1,SUB81(&local_2ac,0),
                        SUB81(*(long *)(pNVar2 + 0x130),0));
      iVar11 = local_2ac;
      if (local_2ac != 0) {
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_1c8);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
        goto LAB_001138c2;
      }
      if (pNVar2[0x141] == (Node)0x0) {
        (**(code **)(*plVar1 + 0x148))();
      }
      else {
        (**(code **)(*plVar1 + 0x150))(plVar1,&local_188,(DataType *)&local_148);
      }
      if ((int)local_148 == 6) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
      }
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
    }
LAB_00112578:
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_1c8);
LAB_00112270:
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_180);
    break;case 0x27:
    CodeGen::start_block(param_1);
    (**(code **)(*plVar1 + 0x280))(plVar1);
    uVar22 = 0;
    _parse_expression((CodeGen *)&local_148,this,(ExpressionNode *)param_1,SUB81(&local_2ac,0),
                      SUB81(*(undefined8 *)(pNVar2 + 0x128),0));
    iVar11 = local_2ac;
    if (local_2ac == 0) {
      (**(code **)(*plVar1 + 0x288))(plVar1,(CodeGen *)&local_148,extraout_RDX_00,uVar22);
      if ((int)local_148 == 6) {
        (**(code **)(**(long **)(param_1 + 0x20) + 0x30))();
      }
      _add_block_locals((CodeGen *)&local_188,(SuiteNode *)this);
      iVar11 = _parse_block(this,param_1,*(SuiteNode **)(pNVar2 + 0x130),false,true);
      local_2ac = iVar11;
      if (iVar11 == 0) {
        (**(code **)(*plVar1 + 0x290))(plVar1);
        _clear_block_locals(this,param_1,(List *)&local_188);
        CodeGen::end_block(param_1);
        List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
                  ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)&local_188);
        GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
        break;
      }
      List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List
                ((List<GDScriptCodeGenerator::Address,DefaultAllocator> *)&local_188);
    }
LAB_00113bae:
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_140);
    goto LAB_001138c2;
  }
  goto switchD_0011208f_caseD_1a;
  while( true ) {
    lVar19 = lVar19 + 1;
    (**(code **)(*plVar1 + 0x248))(plVar1);
    lVar14 = *(long *)(pNVar2 + 0x138);
    if (lVar14 == 0) break;
LAB_00113b37:
    if (*(long *)(lVar14 + -8) <= lVar19) break;
  }
LAB_00113689:
  CodeGen::end_block(param_1);
  CowData<GDScriptCodeGenerator::Address>::_unref
            ((CowData<GDScriptCodeGenerator::Address> *)&local_290);
  GDScriptDataType::~GDScriptDataType(local_1c0);
  GDScriptDataType::~GDScriptDataType(local_288);
  GDScriptDataType::~GDScriptDataType(local_200);
  GDScriptDataType::~GDScriptDataType(local_240);
switchD_0011208f_caseD_1a:
  lVar20 = lVar20 + 1;
  (**(code **)(*plVar1 + 0x38))(plVar1);
  lVar14 = *(long *)(param_2 + 0x138);
  if (lVar14 == 0) goto LAB_00112134;
  goto LAB_00112058;
}



/* GDScriptCompiler::_parse_function(Error&, GDScript*, GDScriptParser::ClassNode const*,
   GDScriptParser::FunctionNode const*, bool, bool) */

long __thiscall
GDScriptCompiler::_parse_function
          (GDScriptCompiler *this,Error *param_1,GDScript *param_2,ClassNode *param_3,
          FunctionNode *param_4,bool param_5,bool param_6)

{
  int *piVar1;
  code *pcVar2;
  Object *pOVar3;
  undefined8 uVar4;
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
  GDScriptDataType *pGVar19;
  Object *pOVar20;
  char cVar21;
  char cVar22;
  undefined4 uVar23;
  int iVar24;
  undefined8 *puVar25;
  undefined4 *puVar26;
  undefined8 *puVar27;
  long lVar28;
  long *plVar29;
  bool bVar30;
  char *pcVar31;
  int *piVar32;
  long lVar33;
  FunctionNode FVar34;
  long lVar35;
  long in_FS_OFFSET;
  bool bVar36;
  CowData<char32_t> *local_418;
  CodeGen *local_400;
  char local_3e8;
  StringName *local_3d8;
  Variant *local_3b8;
  char *local_3a0;
  undefined8 local_398;
  undefined8 local_390;
  CowData<char32_t> local_388 [8];
  undefined8 local_380;
  GDScriptDataType local_378 [8];
  long local_370;
  undefined4 local_368;
  undefined1 local_364;
  undefined4 local_360;
  StringName local_358 [8];
  undefined8 uStack_350;
  Object *local_348;
  long local_338;
  GDScriptDataType *local_330;
  int local_328;
  char local_324;
  int local_320;
  StringName local_318 [8];
  undefined8 local_310;
  Object *local_308;
  undefined1 local_2f8 [16];
  undefined1 local_2e8 [16];
  undefined1 local_2d8 [16];
  Object *local_2c8;
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  undefined1 local_298 [16];
  Object *local_288;
  Object *local_280;
  long local_278;
  long local_270;
  undefined8 local_268;
  long lStack_260;
  undefined8 local_258;
  long local_250;
  Object *local_248;
  ulong local_240;
  undefined1 (*local_238) [16];
  Vector<Variant> local_230 [8];
  undefined8 local_228;
  undefined8 local_220;
  undefined8 local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  long *local_1e8;
  HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
  local_1e0 [8];
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  long local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  long local_188;
  undefined8 local_180;
  FunctionNode local_178;
  undefined8 local_168;
  size_t local_160;
  undefined1 local_158 [16];
  int local_148;
  undefined4 uStack_144;
  long lStack_140;
  undefined8 uStack_138;
  Object *local_130;
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  lVar28 = _LC9;
  local_2b8._8_8_ = local_2b8._0_8_;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  local_208 = (undefined1  [16])0x0;
  local_1f8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1e8 = (long *)0x0;
  local_1b8 = lVar28;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_188 = lVar28;
  local_180 = 0;
  local_178 = (FunctionNode)0x0;
  local_1e8 = (long *)operator_new(0x3a0,"");
  *local_1e8 = (long)&EngineDebugger::script_debugger;
  *(undefined1 *)(local_1e8 + 1) = 0;
  local_1e8[2] = 0;
  *(undefined1 *)(local_1e8 + 3) = 0;
  local_1e8[7] = 0;
  *(undefined4 *)(local_1e8 + 9) = 0;
  local_1e8[8] = (long)&_GlobalNilClass::_nil;
  *(undefined4 *)(local_1e8 + 0xd) = 0;
  local_1e8[0xc] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x13] = 0;
  local_1e8[0x14] = lVar28;
  local_1e8[0x1c] = lVar28;
  local_1e8[0x1d] = 0;
  *(undefined4 *)(local_1e8 + 0x1f) = 0;
  local_1e8[0x1e] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x22] = 0;
  *(undefined4 *)(local_1e8 + 0x24) = 0;
  local_1e8[0x23] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x25] = 0;
  *(undefined4 *)(local_1e8 + 0x26) = 0;
  local_1e8[0x27] = 0;
  local_1e8[0x2d] = lVar28;
  *(undefined1 (*) [16])(local_1e8 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x11) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x16) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x1a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x29) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x2b) = (undefined1  [16])0x0;
  local_1e8[0x2e] = 0;
  *(undefined4 *)(local_1e8 + 0x30) = 0;
  local_1e8[0x2f] = (long)&_GlobalNilClass::_nil;
  *(undefined4 *)(local_1e8 + 0x35) = 0;
  local_1e8[0x34] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x36] = 0;
  *(undefined4 *)(local_1e8 + 0x38) = 0;
  local_1e8[0x37] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x39] = 0;
  *(undefined4 *)(local_1e8 + 0x3b) = 0;
  local_1e8[0x3a] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x3c] = 0;
  *(undefined4 *)(local_1e8 + 0x3e) = 0;
  local_1e8[0x3d] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x3f] = 0;
  *(undefined4 *)(local_1e8 + 0x41) = 0;
  local_1e8[0x40] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x42] = 0;
  *(undefined4 *)(local_1e8 + 0x44) = 0;
  local_1e8[0x43] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x45] = 0;
  *(undefined4 *)(local_1e8 + 0x47) = 0;
  local_1e8[0x46] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x48] = 0;
  *(undefined4 *)(local_1e8 + 0x4a) = 0;
  local_1e8[0x49] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x4b] = 0;
  *(undefined4 *)(local_1e8 + 0x4d) = 0;
  local_1e8[0x4c] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x4e] = 0;
  *(undefined4 *)(local_1e8 + 0x50) = 0;
  local_1e8[0x4f] = (long)&_GlobalNilClass::_nil;
  *(undefined1 (*) [16])(local_1e8 + 0x32) = (undefined1  [16])0x0;
  local_1e8[0x51] = 0;
  *(undefined4 *)(local_1e8 + 0x53) = 0;
  local_1e8[0x52] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x54] = 0;
  *(undefined4 *)(local_1e8 + 0x56) = 0;
  local_1e8[0x55] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x57] = 0;
  *(undefined4 *)(local_1e8 + 0x59) = 0;
  local_1e8[0x58] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x5b] = 0;
  local_1e8[0x5d] = 0;
  local_1e8[0x5f] = 0;
  local_1e8[0x61] = 0;
  local_1e8[99] = 0;
  local_1e8[0x65] = 0;
  local_1e8[0x73] = 0;
  local_208._8_8_ = param_3;
  local_208._0_8_ = param_2;
  local_1f8._0_8_ = param_4;
  local_3a0 = (char *)0x0;
  local_78[0] = 0;
  local_78[1] = 0;
  local_370 = 0;
  local_360 = 0;
  local_348 = (Object *)0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x67) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x69) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x6b) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x6d) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x6f) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x71) = (undefined1  [16])0x0;
  local_70 = (undefined1  [16])0x0;
  _local_358 = (undefined1  [16])0x0;
  local_364 = 1;
  local_368 = 1;
  if (param_4 == (FunctionNode *)0x0) {
    pcVar31 = "@implicit_ready";
    if (!param_5) {
      pcVar31 = "@implicit_new";
    }
    StringName::StringName((StringName *)&local_168,pcVar31,false);
    if (local_3a0 == local_168) {
      if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
        StringName::unref();
      }
    }
    else {
      StringName::unref();
      local_3a0 = local_168;
    }
    FVar34 = (FunctionNode)0x0;
  }
  else {
    if (*(long *)(param_4 + 0x128) == 0) {
      StringName::StringName((StringName *)&local_168,"<anonymous lambda>",false);
      if (local_3a0 == local_168) {
        if ((StringName::configured != '\0') && (local_168 != (char *)0x0)) {
          StringName::unref();
        }
      }
      else {
        StringName::unref();
        local_3a0 = local_168;
      }
    }
    else {
      StringName::operator=
                ((StringName *)&local_3a0,(StringName *)(*(long *)(param_4 + 0x128) + 0x148));
    }
    FVar34 = param_4[0x180];
    Variant::operator=((Variant *)local_78,(Variant *)(param_4 + 0x188));
    if ((code *)**(undefined8 **)param_4 == GDScriptParser::Node::get_datatype) {
      GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(param_4 + 0x38));
    }
    else {
      (*(code *)**(undefined8 **)param_4)((DataType *)&local_168,param_4);
    }
    _gdtype_from_datatype((DataType *)&local_278,(GDScript *)this,SUB81((DataType *)&local_168,0));
    local_368 = (undefined4)local_268;
    local_364 = local_268._4_1_;
    local_360 = (undefined4)lStack_260;
    StringName::operator=(local_358,(StringName *)&local_258);
    pOVar3 = local_348;
    uStack_350 = local_250;
    if (local_248 != local_348) {
      local_348 = local_248;
      if ((local_248 != (Object *)0x0) && (cVar21 = RefCounted::reference(), cVar21 == '\0')) {
        local_348 = (Object *)0x0;
      }
      if (((pOVar3 != (Object *)0x0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) &&
         (cVar21 = predelete_handler(pOVar3), cVar21 != '\0')) {
        (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
        Memory::free_static(pOVar3,false);
      }
    }
    if (local_370 != local_270) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType> *)&local_370,(CowData *)&local_270)
      ;
    }
    GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_278);
    GDScriptParser::DataType::~DataType((DataType *)&local_168);
  }
  local_3d8 = (StringName *)&local_3a0;
  local_3b8 = (Variant *)local_78;
  local_278 = 0;
  local_270 = 0;
  local_258 = 0;
  local_250 = 0;
  local_248 = (Object *)0x6;
  local_240 = 1;
  local_238 = (undefined1 (*) [16])0x0;
  local_228 = 0;
  local_220 = 0;
  local_210 = 0;
  local_268 = 0;
  lStack_260 = 0;
  StringName::operator=((StringName *)(local_1f8 + 8),local_3d8);
  if (local_3a0 == (char *)0x0) {
    auVar10._8_8_ = 0;
    auVar10._0_8_ = local_2b8._8_8_;
    local_2b8 = auVar10 << 0x40;
LAB_00115c1c:
    lVar28 = 0;
  }
  else {
    pcVar31 = *(char **)(local_3a0 + 8);
    auVar5._8_8_ = 0;
    auVar5._0_8_ = local_2b8._8_8_;
    local_2b8 = auVar5 << 0x40;
    if (pcVar31 == (char *)0x0) {
      if (*(long *)(local_3a0 + 0x10) == 0) goto LAB_00115c1c;
      CowData<char32_t>::_ref((CowData<char32_t> *)local_2b8,(CowData *)(local_3a0 + 0x10));
      lVar28 = local_2b8._0_8_;
    }
    else {
      local_160 = strlen(pcVar31);
      local_168 = pcVar31;
      String::parse_latin1((StrRange *)local_2b8);
      lVar28 = local_2b8._0_8_;
    }
  }
  local_418 = (CowData<char32_t> *)local_2b8;
  if (local_278 != lVar28) {
    CowData<char32_t>::_unref((CowData<char32_t> *)&local_278);
    local_278 = local_2b8._0_8_;
    auVar6._8_8_ = 0;
    auVar6._0_8_ = local_2b8._8_8_;
    local_2b8 = auVar6 << 0x40;
  }
  CowData<char32_t>::_unref(local_418);
  plVar29 = local_1e8;
  if (FVar34 != (FunctionNode)0x0) {
    local_240 = local_240 | 0x20;
  }
  pcVar2 = *(code **)(*local_1e8 + 0x70);
  local_178 = FVar34;
  Variant::Variant((Variant *)local_58,local_3b8);
  (*pcVar2)(plVar29,param_2,local_3d8,FVar34,(Variant *)local_58,local_378);
  if (Variant::needs_deinit[local_58[0]] != '\0') {
    Variant::_clear_internal();
  }
  bVar30 = SUB81((DataType *)&local_168,0);
  if (param_4 == (FunctionNode *)0x0) {
    if (param_5) {
      if (param_6) {
        cVar21 = '\0';
        local_3e8 = param_6;
      }
      else {
        cVar21 = '\0';
LAB_00115900:
        piVar32 = *(int **)(param_3 + 0x148);
        local_3e8 = param_5;
        if (piVar32 != (int *)0x0) {
LAB_00115915:
          lVar28 = 0;
          do {
            local_3e8 = param_5;
            if (*(long *)(piVar32 + -2) <= lVar28) break;
            if (((piVar32[lVar28 * 0x1c] == 5) &&
                (puVar27 = *(undefined8 **)(piVar32 + lVar28 * 0x1c + 2),
                *(char *)((long)puVar27 + 0x1a4) == '\0')) &&
               (((bool)*(char *)((long)puVar27 + 0x169) == param_5 && (puVar27[0x26] != 0)))) {
              (**(code **)(*local_1e8 + 0x2b0))(local_1e8,*(undefined4 *)(puVar27[0x26] + 0xc));
              _parse_expression((CodeGen *)local_418,this,(ExpressionNode *)local_208,
                                SUB81(param_1,0),SUB81(puVar27[0x26],0));
              if (*(int *)param_1 != 0) goto LAB_001160b0;
              if (*(code **)*puVar27 == GDScriptParser::Node::get_datatype) {
                GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(puVar27 + 7))
                ;
              }
              else {
                (**(code **)*puVar27)((DataType *)&local_168,puVar27);
              }
              _gdtype_from_datatype((DataType *)local_2f8,(GDScript *)this,bVar30);
              GDScriptParser::DataType::~DataType((DataType *)&local_168);
              puVar26 = (undefined4 *)
                        HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                        ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                      *)(local_208._0_8_ + 0x268),
                                     (StringName *)(puVar27[0x25] + 0x148));
              lStack_140 = 0;
              uStack_138 = 0;
              local_130 = (Object *)0x0;
              local_168 = (char *)CONCAT44(*puVar26,2);
              auVar18._5_3_ = local_158._13_3_;
              auVar18._0_5_ = local_2e8._0_5_;
              auVar18._8_8_ = 0;
              local_158 = auVar18 << 0x40;
              local_148 = local_2e8._8_4_;
              StringName::operator=((StringName *)&lStack_140,(StringName *)local_2d8);
              pOVar3 = local_130;
              uStack_138 = local_2d8._8_8_;
              if (local_2c8 != local_130) {
                local_130 = local_2c8;
                if ((local_2c8 != (Object *)0x0) &&
                   (cVar22 = RefCounted::reference(), cVar22 == '\0')) {
                  local_130 = (Object *)0x0;
                }
                if (((pOVar3 != (Object *)0x0) &&
                    (cVar22 = RefCounted::unreference(), cVar22 != '\0')) &&
                   (cVar22 = predelete_handler(pOVar3), cVar22 != '\0')) {
                  (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                  Memory::free_static(pOVar3,false);
                }
              }
              if (local_158._0_8_ != local_2f8._8_8_) {
                CowData<GDScriptDataType>::_ref
                          ((CowData<GDScriptDataType> *)local_158,(CowData *)(local_2f8 + 8));
              }
              if (*(char *)((long)puVar27 + 0x141) == '\0') {
                (**(code **)(*local_1e8 + 0x148))(local_1e8,(DataType *)&local_168,local_418);
              }
              else {
                (**(code **)(*local_1e8 + 0x150))();
              }
              if (local_2b8._0_4_ == 6) {
                (**(code **)(*local_1e8 + 0x30))();
              }
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_160);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_2f8);
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)(local_2b8 + 8));
              piVar32 = *(int **)(param_3 + 0x148);
            }
            lVar28 = lVar28 + 1;
          } while (piVar32 != (int *)0x0);
        }
      }
    }
    else if (param_6) {
      local_3e8 = '\0';
      cVar21 = param_5;
    }
    else {
      piVar32 = *(int **)(param_3 + 0x148);
      if (piVar32 != (int *)0x0) {
        piVar1 = piVar32 + *(long *)(piVar32 + -2) * 0x1c;
        if (piVar1 != piVar32) {
          do {
            if ((*piVar32 == 5) &&
               (puVar27 = *(undefined8 **)(piVar32 + 2), *(char *)((long)puVar27 + 0x1a4) == '\0'))
            {
              if (*(code **)*puVar27 == GDScriptParser::Node::get_datatype) {
                GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(puVar27 + 7))
                ;
              }
              else {
                (**(code **)*puVar27)((DataType *)&local_168,puVar27);
              }
              _gdtype_from_datatype((DataType *)&local_338,(GDScript *)this,bVar30);
              GDScriptParser::DataType::~DataType((DataType *)&local_168);
              if (local_324 != '\0') {
                (**(code **)(*local_1e8 + 0x2b0))(local_1e8,*(undefined4 *)((long)puVar27 + 0xc));
                puVar26 = (undefined4 *)
                          HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                          ::operator[]((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
                                        *)(local_208._0_8_ + 0x268),
                                       (StringName *)(puVar27[0x25] + 0x148));
                lStack_140 = 0;
                uStack_138 = 0;
                local_130 = (Object *)0x0;
                local_168 = (char *)CONCAT44(*puVar26,2);
                auVar17[4] = local_324;
                auVar17._0_4_ = local_328;
                auVar17._5_3_ = local_158._13_3_;
                auVar17._8_8_ = 0;
                local_158 = auVar17 << 0x40;
                local_148 = local_320;
                StringName::operator=((StringName *)&lStack_140,local_318);
                pOVar3 = local_130;
                uStack_138 = local_310;
                if (local_308 != local_130) {
                  local_130 = local_308;
                  if ((local_308 != (Object *)0x0) &&
                     (cVar21 = RefCounted::reference(), cVar21 == '\0')) {
                    local_130 = (Object *)0x0;
                  }
                  if (((pOVar3 != (Object *)0x0) &&
                      (cVar21 = RefCounted::unreference(), cVar21 != '\0')) &&
                     (cVar21 = predelete_handler(pOVar3), cVar21 != '\0')) {
                    (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
                    Memory::free_static(pOVar3,false);
                  }
                }
                if ((GDScriptDataType *)local_158._0_8_ != local_330) {
                  CowData<GDScriptDataType>::_ref
                            ((CowData<GDScriptDataType> *)local_158,(CowData *)&local_330);
                }
                plVar29 = local_1e8;
                pGVar19 = local_330;
                if (local_320 == 0x1c) {
                  if ((local_330 == (GDScriptDataType *)0x0) || (*(long *)(local_330 + -8) < 1))
                  goto LAB_00115891;
                  pcVar2 = *(code **)(*local_1e8 + 0x218);
                  local_298 = (undefined1  [16])0x0;
                  local_2f8._8_8_ = 0;
                  local_2b8._8_8_ = 0;
                  local_288 = (Object *)0x0;
                  local_2a8._5_3_ = 0;
                  local_2a8._0_5_ = *(uint5 *)(local_330 + 0x10);
                  local_2a8._8_4_ = *(undefined4 *)(local_330 + 0x18);
                  local_2a8._12_4_ = 0;
                  StringName::operator=((StringName *)local_298,(StringName *)(local_330 + 0x20));
                  pOVar20 = local_288;
                  local_298._8_8_ = *(undefined8 *)(pGVar19 + 0x28);
                  pOVar3 = *(Object **)(pGVar19 + 0x30);
                  if (pOVar3 != local_288) {
                    local_288 = pOVar3;
                    if ((pOVar3 != (Object *)0x0) &&
                       (cVar21 = RefCounted::reference(), cVar21 == '\0')) {
                      local_288 = (Object *)0x0;
                    }
                    if (((pOVar20 != (Object *)0x0) &&
                        (cVar21 = RefCounted::unreference(), cVar21 != '\0')) &&
                       (cVar21 = predelete_handler(pOVar20), cVar21 != '\0')) {
                      (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
                      Memory::free_static(pOVar20,false);
                    }
                  }
                  if (local_2b8._8_8_ != *(long *)(pGVar19 + 8)) {
                    CowData<GDScriptDataType>::_ref
                              ((CowData<GDScriptDataType> *)(local_2b8 + 8),(CowData *)(pGVar19 + 8)
                              );
                  }
                  (*pcVar2)(plVar29,(DataType *)&local_168,local_418,local_2f8);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_418);
                  CowData<GDScriptCodeGenerator::Address>::_unref
                            ((CowData<GDScriptCodeGenerator::Address> *)(local_2f8 + 8));
                }
                else if ((local_320 == 0x1b) && (local_330 != (GDScriptDataType *)0x0)) {
                  pcVar2 = *(code **)(*local_1e8 + 0x228);
                  lVar28 = *(long *)(local_330 + -8);
                  local_380 = 0;
                  if (lVar28 < 2) {
                    local_288 = (Object *)0x0;
                    local_2b8 = (undefined1  [16])0x0;
                    local_2a8 = (undefined1  [16])0x0;
                    local_298 = (undefined1  [16])0x0;
LAB_00115ffd:
                    if (lVar28 < 1) goto LAB_00116006;
                    local_2f8._8_8_ = 0;
                    local_2e8 = ZEXT816(0);
                    local_2c8 = (Object *)0x0;
                    local_2d8 = (undefined1  [16])0x0;
                    GDScriptDataType::operator=((GDScriptDataType *)local_2f8,local_330);
                  }
                  else {
                    local_2b8._8_8_ = 0;
                    local_2a8 = ZEXT816(0);
                    local_288 = (Object *)0x0;
                    local_298 = (undefined1  [16])0x0;
                    GDScriptDataType::operator=((GDScriptDataType *)local_418,local_330 + 0x38);
                    if (local_330 != (GDScriptDataType *)0x0) {
                      lVar28 = *(long *)(local_330 + -8);
                      goto LAB_00115ffd;
                    }
LAB_00116006:
                    local_2c8 = (Object *)0x0;
                    local_2f8 = (undefined1  [16])0x0;
                    local_2e8 = (undefined1  [16])0x0;
                    local_2d8 = (undefined1  [16])0x0;
                  }
                  (*pcVar2)(plVar29,(DataType *)&local_168,(GDScriptDataType *)local_2f8,local_418,
                            local_388);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_2f8);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_418);
                  CowData<GDScriptCodeGenerator::Address>::_unref
                            ((CowData<GDScriptCodeGenerator::Address> *)&local_380);
                }
                else {
LAB_00115891:
                  if (local_328 == 1) {
                    local_2b8._8_8_ = 0;
                    (**(code **)(*local_1e8 + 0x208))
                              (local_1e8,(DataType *)&local_168,local_320,local_418);
                    CowData<GDScriptCodeGenerator::Address>::_unref
                              ((CowData<GDScriptCodeGenerator::Address> *)(local_2b8 + 8));
                  }
                }
                GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_160);
              }
              GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_338);
            }
            piVar32 = piVar32 + 0x1c;
          } while (piVar1 != piVar32);
          cVar21 = '\x01';
          param_5 = param_6;
          goto LAB_00115900;
        }
        cVar21 = '\x01';
        goto LAB_00115915;
      }
      local_3e8 = '\0';
      cVar21 = '\x01';
    }
    if ((EngineDebugger::singleton != 0) && (bVar36 = false, EngineDebugger::script_debugger != 0))
    {
LAB_001150c3:
      local_398 = 0;
      GDScript::get_script_path();
      if ((local_168 == (char *)0x0) || (uVar4 = *(undefined8 *)(local_168 + -8), (int)uVar4 == 0))
      {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        if ((int)uVar4 != 1) {
          GDScript::get_script_path();
          String::operator+=((String *)&local_398,(String *)&local_168);
          CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        }
      }
      if (param_4 == (FunctionNode *)0x0) {
        String::operator+=((String *)&local_398,"::0");
      }
      else {
        itos((long)local_418);
        operator+((char *)&local_168,(String *)&_LC106);
        String::operator+=((String *)&local_398,(String *)&local_168);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        CowData<char32_t>::_unref(local_418);
      }
      if (*(long *)(param_3 + 0x128) == 0) {
        if (local_3a0 == (char *)0x0) {
          auVar14._8_8_ = 0;
          auVar14._0_8_ = local_2b8._8_8_;
          local_2b8 = auVar14 << 0x40;
        }
        else {
          auVar11._8_8_ = 0;
          auVar11._0_8_ = local_2b8._8_8_;
          local_2b8 = auVar11 << 0x40;
          if (*(char **)(local_3a0 + 8) == (char *)0x0) {
            if (*(long *)(local_3a0 + 0x10) != 0) {
              CowData<char32_t>::_ref(local_418,(CowData *)(local_3a0 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)local_418,*(char **)(local_3a0 + 8));
          }
        }
        operator+((char *)&local_168,(String *)&_LC106);
        String::operator+=((String *)&local_398,(String *)&local_168);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        CowData<char32_t>::_unref(local_418);
      }
      else {
        if (local_3a0 == (char *)0x0) {
          auVar13._8_8_ = 0;
          auVar13._0_8_ = local_2b8._8_8_;
          local_2b8 = auVar13 << 0x40;
        }
        else {
          pcVar31 = *(char **)(local_3a0 + 8);
          auVar8._8_8_ = 0;
          auVar8._0_8_ = local_2b8._8_8_;
          local_2b8 = auVar8 << 0x40;
          if (pcVar31 == (char *)0x0) {
            if (*(long *)(local_3a0 + 0x10) != 0) {
              CowData<char32_t>::_ref(local_418,(CowData *)(local_3a0 + 0x10));
            }
          }
          else {
            local_160 = strlen(pcVar31);
            local_168 = pcVar31;
            String::parse_latin1((StrRange *)local_418);
          }
        }
        local_338 = 0;
        local_168 = ".";
        local_160 = 1;
        String::parse_latin1((StrRange *)&local_338);
        lVar28 = *(long *)(*(long *)(param_3 + 0x128) + 0x148);
        if (lVar28 == 0) {
          local_390 = 0;
        }
        else {
          local_390 = 0;
          if (*(char **)(lVar28 + 8) == (char *)0x0) {
            if (*(long *)(lVar28 + 0x10) != 0) {
              CowData<char32_t>::_ref((CowData<char32_t> *)&local_390,(CowData *)(lVar28 + 0x10));
            }
          }
          else {
            String::parse_latin1((String *)&local_390,*(char **)(lVar28 + 8));
          }
        }
        operator+((char *)local_388,(String *)&_LC106);
        String::operator+((String *)local_2f8,(String *)local_388);
        String::operator+((String *)&local_168,(String *)local_2f8);
        String::operator+=((String *)&local_398,(String *)&local_168);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_168);
        CowData<char32_t>::_unref((CowData<char32_t> *)local_2f8);
        CowData<char32_t>::_unref(local_388);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_390);
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_338);
        CowData<char32_t>::_unref(local_418);
      }
      if (param_6) {
        String::operator+=((String *)&local_398,"(lambda)");
      }
      (**(code **)(*local_1e8 + 0x80))(local_1e8,(String *)&local_398);
      CowData<char32_t>::_unref((CowData<char32_t> *)&local_398);
      if (param_4 != (FunctionNode *)0x0) goto LAB_001152e1;
      (**(code **)(*local_1e8 + 0x88))(local_1e8,0);
      lVar28 = (**(code **)(*local_1e8 + 0x78))();
      if (!bVar36) goto LAB_00115657;
      *(long *)(param_2 + 0x668) = lVar28;
      goto LAB_00115522;
    }
    (**(code **)(*local_1e8 + 0x88))(local_1e8,0);
    lVar28 = (**(code **)(*local_1e8 + 0x78))();
LAB_00115657:
    if (cVar21 == '\0') {
      if (local_3e8 != '\0') {
LAB_001161cb:
        *(long *)(param_2 + 0x678) = lVar28;
        MethodInfo::operator=((MethodInfo *)(lVar28 + 0x60),(MethodInfo *)&local_278);
        goto LAB_00115550;
      }
      MethodInfo::operator=((MethodInfo *)(lVar28 + 0x60),(MethodInfo *)&local_278);
      goto LAB_00115545;
    }
    *(long *)(param_2 + 0x670) = lVar28;
    MethodInfo::operator=((MethodInfo *)(lVar28 + 0x60),(MethodInfo *)&local_278);
  }
  else {
    lVar28 = *(long *)(param_4 + 0x138);
    if (lVar28 == 0) {
      iVar24 = 0;
    }
    else {
      iVar24 = 0;
      lVar33 = 0;
      do {
        if (*(long *)(lVar28 + -8) <= lVar33) break;
        puVar27 = *(undefined8 **)(lVar28 + lVar33 * 8);
        if (*(code **)*puVar27 == GDScriptParser::Node::get_datatype) {
          GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(puVar27 + 7));
        }
        else {
          (**(code **)*puVar27)((DataType *)&local_168,puVar27);
        }
        _gdtype_from_datatype((DataType *)local_418,(GDScript *)this,bVar30);
        GDScriptParser::DataType::~DataType((DataType *)&local_168);
        uVar23 = (**(code **)*local_1e8)
                           (local_1e8,puVar27[0x25] + 0x148,puVar27[0x26] != 0,local_418);
        local_130 = (Object *)0x0;
        auVar16._5_3_ = local_158._13_3_;
        auVar16._0_5_ = local_2a8._0_5_;
        auVar16._8_8_ = 0;
        local_158 = auVar16 << 0x40;
        local_168 = (char *)CONCAT44(uVar23,5);
        local_148 = local_2a8._8_4_;
        lStack_140 = 0;
        uStack_138 = 0;
        StringName::operator=((StringName *)&lStack_140,(StringName *)local_298);
        pOVar3 = local_130;
        uStack_138 = local_298._8_8_;
        if (local_288 != local_130) {
          local_130 = local_288;
          if ((local_288 != (Object *)0x0) && (cVar21 = RefCounted::reference(), cVar21 == '\0')) {
            local_130 = (Object *)0x0;
          }
          if (((pOVar3 != (Object *)0x0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) &&
             (cVar21 = predelete_handler(pOVar3), cVar21 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        if (local_158._0_8_ != local_2b8._8_8_) {
          CowData<GDScriptDataType>::_ref
                    ((CowData<GDScriptDataType> *)local_158,(CowData *)(local_2b8 + 8));
        }
        puVar25 = (undefined8 *)
                  HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                  ::operator[](local_1e0,(StringName *)(puVar27[0x25] + 0x148));
        *puVar25 = local_168;
        *(undefined4 *)(puVar25 + 3) = local_158._8_4_;
        *(undefined1 *)((long)puVar25 + 0x1c) = local_158[0xc];
        *(int *)(puVar25 + 4) = local_148;
        StringName::operator=((StringName *)(puVar25 + 5),(StringName *)&lStack_140);
        pOVar3 = (Object *)puVar25[7];
        puVar25[6] = uStack_138;
        if (local_130 != pOVar3) {
          puVar25[7] = local_130;
          if ((local_130 != (Object *)0x0) && (cVar21 = RefCounted::reference(), cVar21 == '\0')) {
            puVar25[7] = 0;
          }
          if (((pOVar3 != (Object *)0x0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0')) &&
             (cVar21 = predelete_handler(pOVar3), cVar21 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
        }
        if (puVar25[2] != local_158._0_8_) {
          CowData<GDScriptDataType>::_ref
                    ((CowData<GDScriptDataType> *)(puVar25 + 2),(CowData *)local_158);
        }
        if (((local_130 != (Object *)0x0) &&
            (cVar21 = RefCounted::unreference(), pOVar3 = local_130, cVar21 != '\0')) &&
           (cVar21 = predelete_handler(local_130), cVar21 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))();
          Memory::free_static(pOVar3,false);
        }
        if ((StringName::configured != '\0') && (lStack_140 != 0)) {
          StringName::unref();
        }
        CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)local_158);
        if (*(code **)*puVar27 == GDScriptParser::Node::get_datatype) {
          GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(puVar27 + 7));
        }
        else {
          (**(code **)*puVar27)((DataType *)&local_168,puVar27);
        }
        lVar28 = *(long *)(puVar27[0x25] + 0x148);
        if (lVar28 == 0) {
LAB_00114b1c:
          local_338 = 0;
        }
        else {
          pcVar31 = *(char **)(lVar28 + 8);
          local_338 = 0;
          if (pcVar31 == (char *)0x0) {
            if (*(long *)(lVar28 + 0x10) == 0) goto LAB_00114b1c;
            CowData<char32_t>::_ref((CowData<char32_t> *)&local_338,(CowData *)(lVar28 + 0x10));
          }
          else {
            local_2f8._8_8_ = strlen(pcVar31);
            local_2f8._0_8_ = pcVar31;
            String::parse_latin1((StrRange *)&local_338);
          }
        }
        GDScriptParser::DataType::to_property_info((String *)local_2f8);
        if (local_238 == (undefined1 (*) [16])0x0) {
          local_238 = (undefined1 (*) [16])operator_new(0x18,DefaultAllocator::alloc);
          *(undefined4 *)local_238[1] = 0;
          *local_238 = (undefined1  [16])0x0;
        }
        puVar26 = (undefined4 *)operator_new(0x48,DefaultAllocator::alloc);
        *(undefined8 *)(puVar26 + 8) = 0;
        *(undefined1 (*) [16])(puVar26 + 2) = (undefined1  [16])0x0;
        *puVar26 = 0;
        puVar26[6] = 0;
        puVar26[10] = 6;
        *(undefined8 *)(puVar26 + 0x10) = 0;
        *(undefined1 (*) [16])(puVar26 + 0xc) = (undefined1  [16])0x0;
        *puVar26 = local_2f8._0_4_;
        if (local_2f8._8_8_ != 0) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar26 + 2),(CowData *)(local_2f8 + 8));
        }
        StringName::operator=((StringName *)(puVar26 + 4),(StringName *)local_2e8);
        puVar26[6] = local_2e8._8_4_;
        if (*(long *)(puVar26 + 8) != local_2d8._0_8_) {
          CowData<char32_t>::_ref((CowData<char32_t> *)(puVar26 + 8),(CowData *)local_2d8);
        }
        puVar26[10] = local_2d8._8_4_;
        lVar28 = *(long *)(*local_238 + 8);
        *(undefined8 *)(puVar26 + 0xc) = 0;
        *(undefined1 (**) [16])(puVar26 + 0x10) = local_238;
        *(long *)(puVar26 + 0xe) = lVar28;
        if (lVar28 != 0) {
          *(undefined4 **)(lVar28 + 0x30) = puVar26;
        }
        lVar28 = *(long *)*local_238;
        *(undefined4 **)(*local_238 + 8) = puVar26;
        if (lVar28 == 0) {
          *(undefined4 **)*local_238 = puVar26;
        }
        *(int *)local_238[1] = *(int *)local_238[1] + 1;
        if (local_2d8._0_8_ != 0) {
          LOCK();
          plVar29 = (long *)(local_2d8._0_8_ + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            uVar4 = local_2d8._0_8_;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = local_2d8._8_8_;
            local_2d8 = auVar7 << 0x40;
            Memory::free_static((void *)(uVar4 + -0x10),false);
          }
        }
        if ((StringName::configured != '\0') && (local_2e8._0_8_ != 0)) {
          StringName::unref();
        }
        uVar4 = local_2f8._8_8_;
        if (local_2f8._8_8_ != 0) {
          LOCK();
          plVar29 = (long *)(local_2f8._8_8_ + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_2f8._8_8_ = 0;
            Memory::free_static((void *)(uVar4 + -0x10),false);
          }
        }
        lVar28 = local_338;
        if (local_338 != 0) {
          LOCK();
          plVar29 = (long *)(local_338 + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            local_338 = 0;
            Memory::free_static((void *)(lVar28 + -0x10),false);
          }
        }
        GDScriptParser::DataType::~DataType((DataType *)&local_168);
        iVar24 = (iVar24 + 1) - (uint)(puVar27[0x26] == 0);
        if (((local_288 != (Object *)0x0) &&
            (cVar21 = RefCounted::unreference(), pOVar3 = local_288, cVar21 != '\0')) &&
           (cVar21 = predelete_handler(local_288), cVar21 != '\0')) {
          (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
          Memory::free_static(pOVar3,false);
        }
        if ((StringName::configured != '\0') && (local_298._0_8_ != 0)) {
          StringName::unref();
        }
        lVar33 = lVar33 + 1;
        CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)(local_2b8 + 8));
        lVar28 = *(long *)(param_4 + 0x138);
      } while (lVar28 != 0);
    }
    local_160 = 0;
    if (*(long *)(param_4 + 0x220) != 0) {
      CowData<Variant>::_ref((CowData<Variant> *)&local_160,(CowData *)(param_4 + 0x220));
    }
    Vector<Variant>::append_array(local_230,(DataType *)&local_168);
    CowData<Variant>::_unref((CowData<Variant> *)&local_160);
    if (param_6) {
      bVar36 = false;
    }
    else {
      bVar36 = *(long *)(*(long *)(param_4 + 0x128) + 0x148) ==
               *(long *)(GDScriptLanguage::singleton + 0x290);
    }
    if (0 < iVar24) {
      (**(code **)(*local_1e8 + 0x50))();
      lVar28 = *(long *)(param_4 + 0x138);
      if (lVar28 == 0) {
        lVar33 = 0;
        lVar35 = (long)-iVar24;
LAB_00115ca8:
        _err_print_index_error
                  ("get","./core/templates/cowdata.h",0xdb,lVar35,lVar33,"p_index","size()","",false
                   ,true);
        _err_flush_stdout();
                    /* WARNING: Does not return */
        pcVar2 = (code *)invalidInstructionException();
        (*pcVar2)();
      }
      lVar33 = *(long *)(lVar28 + -8);
      lVar35 = (long)((int)lVar33 - iVar24);
      if (lVar35 < lVar33) {
        if (lVar35 < 0) goto LAB_00115ca8;
        do {
          lVar28 = *(long *)(lVar28 + lVar35 * 8);
          _parse_expression((CodeGen *)local_418,this,(ExpressionNode *)local_208,SUB81(param_1,0),
                            SUB81(*(undefined8 *)(lVar28 + 0x130),0));
          if (*(int *)param_1 != 0) goto LAB_001160b0;
          puVar27 = (undefined8 *)
                    HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
                    ::operator[](local_1e0,(StringName *)(*(long *)(lVar28 + 0x128) + 0x148));
          local_168 = (char *)*puVar27;
          lStack_140 = 0;
          uStack_138 = 0;
          uStack_144 = 0;
          local_130 = (Object *)0x0;
          local_158 = ZEXT516(*(uint5 *)(puVar27 + 3)) << 0x40;
          local_148 = *(int *)(puVar27 + 4);
          StringName::operator=((StringName *)&lStack_140,(StringName *)(puVar27 + 5));
          pOVar20 = local_130;
          uStack_138 = puVar27[6];
          pOVar3 = (Object *)puVar27[7];
          if (pOVar3 != local_130) {
            local_130 = pOVar3;
            if ((pOVar3 != (Object *)0x0) && (cVar21 = RefCounted::reference(), cVar21 == '\0')) {
              local_130 = (Object *)0x0;
            }
            if (((pOVar20 != (Object *)0x0) && (cVar21 = RefCounted::unreference(), cVar21 != '\0'))
               && (cVar21 = predelete_handler(pOVar20), cVar21 != '\0')) {
              (**(code **)(*(long *)pOVar20 + 0x140))(pOVar20);
              Memory::free_static(pOVar20,false);
            }
          }
          if (local_158._0_8_ != puVar27[2]) {
            CowData<GDScriptDataType>::_ref
                      ((CowData<GDScriptDataType> *)local_158,(CowData *)(puVar27 + 2));
          }
          (**(code **)(*local_1e8 + 0x170))
                    (local_1e8,(DataType *)&local_168,local_418,*(undefined1 *)(lVar28 + 0x141));
          if (local_2b8._0_4_ == 6) {
            (**(code **)(*local_1e8 + 0x30))();
          }
          if (((local_130 != (Object *)0x0) &&
              (cVar21 = RefCounted::unreference(), pOVar3 = local_130, cVar21 != '\0')) &&
             (cVar21 = predelete_handler(local_130), cVar21 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          if ((StringName::configured != '\0') && (lStack_140 != 0)) {
            StringName::unref();
          }
          CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)local_158);
          if (((local_280 != (Object *)0x0) &&
              (cVar21 = RefCounted::unreference(), pOVar3 = local_280, cVar21 != '\0')) &&
             (cVar21 = predelete_handler(local_280), cVar21 != '\0')) {
            (**(code **)(*(long *)pOVar3 + 0x140))(pOVar3);
            Memory::free_static(pOVar3,false);
          }
          if ((StringName::configured != '\0') && (local_298._8_8_ != 0)) {
            StringName::unref();
          }
          lVar35 = lVar35 + 1;
          CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType> *)local_2a8);
          lVar28 = *(long *)(param_4 + 0x138);
        } while ((lVar28 != 0) && (lVar35 < *(long *)(lVar28 + -8)));
      }
      (**(code **)(*local_1e8 + 0x58))();
    }
    local_400 = (CodeGen *)local_208;
    iVar24 = _parse_block(this,local_400,*(SuiteNode **)(param_4 + 0x178),true,false);
    plVar29 = local_1e8;
    *(int *)param_1 = iVar24;
    if (iVar24 != 0) {
      (**(code **)(*local_1e8 + 0x2c8))(local_1e8);
      Memory::free_static(plVar29,false);
      goto LAB_001160db;
    }
    if ((EngineDebugger::singleton != 0) && (EngineDebugger::script_debugger != 0)) {
      local_3e8 = '\0';
      cVar21 = '\0';
      goto LAB_001150c3;
    }
    local_3e8 = '\0';
    cVar21 = '\0';
LAB_001152e1:
    (**(code **)(*local_1e8 + 0x88))(local_1e8,*(undefined4 *)(param_4 + 0xc));
    lVar28 = (**(code **)(*local_1e8 + 0x78))();
    if (bVar36) {
      *(long *)(param_2 + 0x668) = lVar28;
    }
    else if (cVar21 == '\0') {
      if (local_3e8 != '\0') goto LAB_001161cb;
    }
    else {
      *(long *)(param_2 + 0x670) = lVar28;
    }
    if (*(char *)(*(long *)(param_4 + 0x178) + 0x1c8) == '\0') {
      uStack_138 = 0;
      local_158 = (undefined1  [16])0x0;
      local_148 = 0;
      uStack_144 = 0;
      lStack_140 = 0;
      local_160 = 0;
      GDScriptDataType::operator=
                ((GDScriptDataType *)(lVar28 + 0x28),(GDScriptDataType *)&local_168);
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)&local_168);
      *(undefined1 *)(lVar28 + 0x3c) = 1;
      *(undefined4 *)(lVar28 + 0x38) = 1;
      *(undefined4 *)(lVar28 + 0x40) = 0;
    }
    else {
      if ((code *)**(undefined8 **)param_4 == GDScriptParser::Node::get_datatype) {
        GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(param_4 + 0x38));
      }
      else {
        (*(code *)**(undefined8 **)param_4)((DataType *)&local_168,param_4);
      }
      _gdtype_from_datatype((DataType *)local_418,(GDScript *)this,bVar30);
      GDScriptDataType::operator=((GDScriptDataType *)(lVar28 + 0x28),(GDScriptDataType *)local_418)
      ;
      GDScriptDataType::~GDScriptDataType((GDScriptDataType *)local_418);
      GDScriptParser::DataType::~DataType((DataType *)&local_168);
      if ((code *)**(undefined8 **)param_4 == GDScriptParser::Node::get_datatype) {
        GDScriptParser::DataType::DataType((DataType *)&local_168,(DataType *)(param_4 + 0x38));
      }
      else {
        (*(code *)**(undefined8 **)param_4)((DataType *)&local_168,param_4);
      }
      auVar15._8_8_ = 0;
      auVar15._0_8_ = local_2f8._8_8_;
      local_2f8 = auVar15 << 0x40;
      GDScriptParser::DataType::to_property_info((String *)local_418);
      local_270 = CONCAT44(local_270._4_4_,local_2b8._0_4_);
      if (local_268 != local_2b8._8_8_) {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_268);
        local_268 = local_2b8._8_8_;
        local_2b8._8_8_ = 0;
      }
      if (lStack_260 != local_2a8._0_8_) {
        StringName::unref();
        lStack_260 = local_2a8._0_8_;
        auVar9._8_8_ = 0;
        auVar9._0_8_ = local_2a8._8_8_;
        local_2a8 = auVar9 << 0x40;
      }
      local_258 = CONCAT44(local_258._4_4_,local_2a8._8_4_);
      uVar4 = local_298._0_8_;
      if (local_250 == local_298._0_8_) {
        local_248 = (Object *)CONCAT44(local_248._4_4_,local_298._8_4_);
        if (local_298._0_8_ != 0) {
          LOCK();
          plVar29 = (long *)(local_298._0_8_ + -0x10);
          *plVar29 = *plVar29 + -1;
          UNLOCK();
          if (*plVar29 == 0) {
            auVar12._8_8_ = 0;
            auVar12._0_8_ = local_298._8_8_;
            local_298 = auVar12 << 0x40;
            Memory::free_static((void *)(uVar4 + -0x10),false);
          }
        }
      }
      else {
        CowData<char32_t>::_unref((CowData<char32_t> *)&local_250);
        local_250 = local_298._0_8_;
        local_248 = (Object *)CONCAT44(local_248._4_4_,local_298._8_4_);
      }
      if ((StringName::configured != '\0') && (local_2a8._0_8_ != 0)) {
        StringName::unref();
      }
      uVar4 = local_2b8._8_8_;
      if (local_2b8._8_8_ != 0) {
        LOCK();
        plVar29 = (long *)(local_2b8._8_8_ + -0x10);
        *plVar29 = *plVar29 + -1;
        UNLOCK();
        if (*plVar29 == 0) {
          local_2b8._8_8_ = 0;
          Memory::free_static((void *)(uVar4 + -0x10),false);
        }
      }
      CowData<char32_t>::_unref((CowData<char32_t> *)local_2f8);
      GDScriptParser::DataType::~DataType((DataType *)&local_168);
    }
LAB_00115522:
    MethodInfo::operator=((MethodInfo *)(lVar28 + 0x60),(MethodInfo *)&local_278);
    if ((cVar21 == '\0') && (local_3e8 == '\0')) {
LAB_00115545:
      if (!param_6) {
        plVar29 = (long *)HashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>>
                          ::operator[]((HashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>>
                                        *)(param_2 + 0x330),local_3d8);
        *plVar29 = lVar28;
      }
    }
  }
LAB_00115550:
  plVar29 = local_1e8;
  (**(code **)(*local_1e8 + 0x2c8))(local_1e8);
  Memory::free_static(plVar29,false);
LAB_0011556f:
  local_400 = (CodeGen *)local_208;
  MethodInfo::~MethodInfo((MethodInfo *)&local_278);
  GDScriptDataType::~GDScriptDataType(local_378);
  if (Variant::needs_deinit[local_78[0]] != '\0') {
    Variant::_clear_internal();
  }
  if ((StringName::configured != '\0') && (local_3a0 != (char *)0x0)) {
    StringName::unref();
  }
  CodeGen::~CodeGen(local_400);
  if (local_40 != *(long *)(in_FS_OFFSET + 0x28)) {
                    /* WARNING: Subroutine does not return */
    __stack_chk_fail();
  }
  return lVar28;
LAB_001160b0:
  plVar29 = local_1e8;
  (**(code **)(*local_1e8 + 0x2c8))(local_1e8);
  Memory::free_static(plVar29,false);
  GDScriptDataType::~GDScriptDataType((GDScriptDataType *)(local_2b8 + 8));
LAB_001160db:
  lVar28 = 0;
  goto LAB_0011556f;
}



/* GDScriptCompiler::_parse_setter_getter(GDScript*, GDScriptParser::ClassNode const*,
   GDScriptParser::VariableNode const*, bool) */

undefined4 __thiscall
GDScriptCompiler::_parse_setter_getter
          (GDScriptCompiler *this,GDScript *param_1,ClassNode *param_2,VariableNode *param_3,
          bool param_4)

{
  FunctionNode *pFVar1;
  long in_FS_OFFSET;
  undefined4 local_14;
  long local_10;
  
  local_10 = *(long *)(in_FS_OFFSET + 0x28);
  local_14 = 0;
  if (param_4) {
    pFVar1 = *(FunctionNode **)(param_3 + 0x150);
  }
  else {
    pFVar1 = *(FunctionNode **)(param_3 + 0x160);
  }
  _parse_function(this,(Error *)&local_14,param_1,param_2,pFVar1,false,false);
  if (local_10 == *(long *)(in_FS_OFFSET + 0x28)) {
    return local_14;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* GDScriptCompiler::_make_static_initializer(Error&, GDScript*, GDScriptParser::ClassNode const*)
    */

undefined8 __thiscall
GDScriptCompiler::_make_static_initializer
          (GDScriptCompiler *this,Error *param_1,GDScript *param_2,ClassNode *param_3)

{
  code *pcVar1;
  undefined8 *puVar2;
  char *pcVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined1 auVar6 [16];
  undefined1 auVar7 [16];
  undefined1 auVar8 [16];
  Object *pOVar9;
  long *plVar10;
  char cVar11;
  undefined4 uVar12;
  int iVar13;
  undefined4 *puVar14;
  int *piVar15;
  int *piVar16;
  undefined8 uVar17;
  int *piVar18;
  bool bVar19;
  CowData<GDScriptCodeGenerator::Address> *this_00;
  long lVar20;
  long in_FS_OFFSET;
  CodeGen *local_3b8;
  long local_370;
  undefined8 local_368;
  undefined8 local_360;
  CowData<char32_t> local_358 [8];
  undefined8 local_350;
  undefined1 local_348 [8];
  undefined8 local_340;
  undefined4 local_338;
  undefined1 local_334;
  undefined4 local_330;
  undefined1 local_328 [16];
  Object *local_318;
  undefined8 local_308;
  GDScriptDataType *local_300;
  int local_2f8;
  char local_2f4;
  int local_2f0;
  long local_2e8;
  Object *local_2d8;
  undefined1 local_2c8 [16];
  undefined1 local_2b8 [16];
  undefined1 local_2a8 [16];
  Object *local_298;
  undefined8 local_288 [2];
  size_t local_278 [3];
  undefined1 local_260 [16];
  Object *local_250;
  undefined1 local_248 [16];
  CowData<GDScriptDataType> local_238 [16];
  undefined1 local_228 [16];
  undefined8 local_218;
  Object *local_210;
  undefined1 local_208 [16];
  undefined1 local_1f8 [16];
  long *local_1e8;
  undefined1 local_1d8 [16];
  undefined1 local_1c8 [16];
  long local_1b8;
  undefined1 local_1a8 [16];
  undefined1 local_198 [16];
  long local_188;
  undefined8 local_180;
  undefined1 local_178;
  undefined8 local_168;
  size_t local_160;
  undefined1 local_158 [16];
  undefined4 local_148;
  undefined4 uStack_144;
  long lStack_140;
  Object *local_138;
  Object *local_130;
  int local_78 [2];
  undefined1 local_70 [16];
  int local_58 [6];
  long local_40;
  
  lVar20 = _LC9;
  local_40 = *(long *)(in_FS_OFFSET + 0x28);
  *(undefined4 *)param_1 = 0;
  local_208 = (undefined1  [16])0x0;
  local_1f8 = (undefined1  [16])0x0;
  local_1d8 = (undefined1  [16])0x0;
  local_1c8 = (undefined1  [16])0x0;
  local_1a8 = (undefined1  [16])0x0;
  local_198 = (undefined1  [16])0x0;
  local_1e8 = (long *)0x0;
  local_1b8 = lVar20;
  local_188 = lVar20;
  local_180 = 0;
  local_178 = 0;
  local_1e8 = (long *)operator_new(0x3a0,"");
  *local_1e8 = (long)&EngineDebugger::script_debugger;
  *(undefined1 *)(local_1e8 + 1) = 0;
  local_1e8[2] = 0;
  *(undefined1 *)(local_1e8 + 3) = 0;
  local_1e8[7] = 0;
  *(undefined4 *)(local_1e8 + 9) = 0;
  local_1e8[8] = (long)&_GlobalNilClass::_nil;
  *(undefined4 *)(local_1e8 + 0xd) = 0;
  local_1e8[0xc] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x13] = 0;
  local_1e8[0x14] = lVar20;
  local_1e8[0x1c] = lVar20;
  local_1e8[0x1d] = 0;
  *(undefined4 *)(local_1e8 + 0x1f) = 0;
  local_1e8[0x1e] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x22] = 0;
  *(undefined4 *)(local_1e8 + 0x24) = 0;
  local_1e8[0x23] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x25] = 0;
  *(undefined4 *)(local_1e8 + 0x26) = 0;
  local_1e8[0x27] = 0;
  local_1e8[0x2d] = lVar20;
  *(undefined1 (*) [16])(local_1e8 + 5) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 10) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0xf) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x11) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x16) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x18) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x1a) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x20) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x29) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x2b) = (undefined1  [16])0x0;
  local_1e8[0x2e] = 0;
  *(undefined4 *)(local_1e8 + 0x30) = 0;
  local_1e8[0x2f] = (long)&_GlobalNilClass::_nil;
  *(undefined4 *)(local_1e8 + 0x35) = 0;
  local_1e8[0x34] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x36] = 0;
  *(undefined4 *)(local_1e8 + 0x38) = 0;
  local_1e8[0x37] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x39] = 0;
  *(undefined4 *)(local_1e8 + 0x3b) = 0;
  local_1e8[0x3a] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x3c] = 0;
  *(undefined4 *)(local_1e8 + 0x3e) = 0;
  local_1e8[0x3d] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x3f] = 0;
  *(undefined4 *)(local_1e8 + 0x41) = 0;
  local_1e8[0x40] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x42] = 0;
  *(undefined4 *)(local_1e8 + 0x44) = 0;
  local_1e8[0x43] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x45] = 0;
  *(undefined4 *)(local_1e8 + 0x47) = 0;
  local_1e8[0x46] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x48] = 0;
  *(undefined4 *)(local_1e8 + 0x4a) = 0;
  local_1e8[0x49] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x4b] = 0;
  *(undefined4 *)(local_1e8 + 0x4d) = 0;
  local_1e8[0x4c] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x4e] = 0;
  *(undefined4 *)(local_1e8 + 0x50) = 0;
  local_1e8[0x4f] = (long)&_GlobalNilClass::_nil;
  *(undefined1 (*) [16])(local_1e8 + 0x32) = (undefined1  [16])0x0;
  local_1e8[0x51] = 0;
  *(undefined4 *)(local_1e8 + 0x53) = 0;
  local_1e8[0x52] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x54] = 0;
  *(undefined4 *)(local_1e8 + 0x56) = 0;
  local_1e8[0x55] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x57] = 0;
  *(undefined4 *)(local_1e8 + 0x59) = 0;
  local_1e8[0x58] = (long)&_GlobalNilClass::_nil;
  local_1e8[0x5b] = 0;
  local_1e8[0x5d] = 0;
  local_1e8[0x5f] = 0;
  local_1e8[0x61] = 0;
  local_1e8[99] = 0;
  local_1e8[0x65] = 0;
  local_1e8[0x73] = 0;
  local_208._8_8_ = param_3;
  local_208._0_8_ = param_2;
  *(undefined1 (*) [16])(local_1e8 + 0x67) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x69) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x6b) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x6d) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x6f) = (undefined1  [16])0x0;
  *(undefined1 (*) [16])(local_1e8 + 0x71) = (undefined1  [16])0x0;if ((_make_static_initializer(Error&,GDScript*,GDScriptParser::ClassNode_const*)::{lambda()#1}::
       operator()()::sname == '\0') &&
     (iVar13 = __cxa_guard_acquire(&_make_static_initializer(Error&,GDScript*,GDScriptParser::ClassNode_const*)
                                    ::{lambda()#1_scs_create((char *)&_make_static_initializer(Error&,GDScript*,GDScriptParser::ClassNode_const*)
                         ::{lambda()#1__cxa_atexit(StringName::~StringName,
                 &_make_static_initializer(Error&,GDScript*,GDScriptParser::ClassNode_const*)::
                  {lambda()#1__cxa_guard_release (&_make_static_initializer(Error&,GDScript*,GDScriptParser::ClassNode_const*)
                         ::{lambda()#1}
  StringName::StringName
            ((StringName *)&local_370,
             (StringName *)
             &_make_static_initializer(Error&,GDScript*,GDScriptParser::ClassNode_const*)::
              {lambda()#1local_70 = (undefined1[16])0x0;local_328 = (undefined1[16])0x0;local_78[0] = 0;local_78[1] = 0;local_340 = 0;local_330 = 0;local_318 = (Object*)0x0;local_334 = 1;local_338 = 1;StringName::operator =((StringName*)( local_1f8 + 8 ), (StringName*)&local_370);plVar10 = local_1e8;local_178 = 1;pcVar1 = *(code**)( *local_1e8 + 0x70 );Variant::Variant((Variant*)local_58, (Variant*)local_78);( *pcVar1 )(plVar10, param_2, (StringName*)&local_370, 1, (Variant*)local_58, local_348);if (Variant::needs_deinit[local_58[0]] != '\0') {
   Variant::_clear_internal();
}
local_138 = (Object*)0x0;local_158 = (undefined1[16])0x0;local_148 = 0;uStack_144 = 0;lStack_140 = 0;local_160 = 0;local_288[0] = 1;local_278[0] = 0;local_278[1] = 0;local_278[2] = 0;local_250 = (Object*)0x0;local_260 = (undefined1[16])0x0;StringName::operator =((StringName*)local_260, (StringName*)&local_148);pOVar9 = local_250;local_260._8_8_ = lStack_140;if (local_138 != local_250) {
   local_250 = local_138;
   if (( local_138 != (Object*)0x0 ) && ( cVar11 = cVar11 == '\0' )) {
      local_250 = (Object*)0x0;
   }

   if (( ( pOVar9 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
   Memory::free_static(pOVar9, false);
}
}if (local_278[0] != local_160) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)local_278, (CowData*)&local_160);
}
GDScriptDataType::~GDScriptDataType((GDScriptDataType*)&local_168);piVar18 = *(int**)( param_3 + 0x148 );if (piVar18 != (int*)0x0) {
   piVar15 = piVar18 + *(long*)( piVar18 + -2 ) * 0x1c;
   bVar19 = SUB81((GDScriptDataType*)&local_168, 0);
   if (piVar18 != piVar15) {
      do {
         if (( *piVar18 == 5 ) && ( puVar2 = *(undefined8**)( piVar18 + 2 ) * (char*)( (long)puVar2 + 0x1a4 ) != '\0' )) {
            if (*(code**)*puVar2 == GDScriptParser::Node::get_datatype) {
               GDScriptParser::DataType::DataType((DataType*)&local_168, (DataType*)( puVar2 + 7 ));
            }
 else {
               ( **(code**)*puVar2 )((GDScriptDataType*)&local_168, puVar2);
            }

            _gdtype_from_datatype((DataType*)&local_308, (GDScript*)this, bVar19);
            GDScriptParser::DataType::~DataType((DataType*)&local_168);
            if (local_2f4 != '\0') {
               ( **(code**)( *local_1e8 + 0x2b0 ) )();
               if (local_2f0 == 0x1c) {
                  if (( local_300 == (GDScriptDataType*)0x0 ) || ( *(long*)( local_300 + -8 ) < 1 )) goto LAB_00116d3e;
                  CodeGen::add_temporary((GDScriptDataType*)&local_168);
                  plVar10 = local_1e8;
                  pcVar1 = *(code**)( *local_1e8 + 0x218 );
                  local_2c8._8_8_ = 0;
                  if (local_300 == (GDScriptDataType*)0x0) {
                     lVar20 = 0;
                     LAB_00117d2c:_err_print_index_error("get_container_element_type", "modules/gdscript/gdscript_function.h", 0xd9, 0, lVar20, "p_index", "container_element_types.size()", "", false, false);
                     local_218 = 0;
                     local_248 = (undefined1[16])0x0;
                     for (int i = 0; i < 16; i++) {
                        local_238[i] = (CowData<GDScriptDataType>)0;
                     }

                     local_228 = (undefined1[16])0x0;
                  }
 else {
                     lVar20 = *(long*)( local_300 + -8 );
                     if (lVar20 < 1) goto LAB_00117d2c;
                     local_248._8_8_ = 0;
                     local_238 = (CowData<GDScriptDataType>[16])ZEXT816(0);
                     local_218 = 0;
                     local_228 = (undefined1[16])0x0;
                     GDScriptDataType::operator =((GDScriptDataType*)local_248, local_300);
                  }

                  ( *pcVar1 )(plVar10, (GDScriptDataType*)&local_168, (GDScriptDataType*)local_248, local_2c8);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType*)local_248);
                  this_00 = (CowData<GDScriptCodeGenerator::Address>*)( local_2c8 + 8 );
               }
 else if (( local_2f0 == 0x1b ) && ( local_300 != (GDScriptDataType*)0x0 )) {
                  CodeGen::add_temporary((GDScriptDataType*)&local_168);
                  plVar10 = local_1e8;
                  pcVar1 = *(code**)( *local_1e8 + 0x228 );
                  local_350 = 0;
                  if (local_300 == (GDScriptDataType*)0x0) {
                     local_218 = 0;
                     local_248 = (undefined1[16])0x0;
                     for (int i = 0; i < 16; i++) {
                        local_238[i] = (CowData<GDScriptDataType>)0;
                     }

                     local_228 = (undefined1[16])0x0;
                     LAB_001176ef:local_298 = (Object*)0x0;
                     local_2c8 = (undefined1[16])0x0;
                     local_2b8 = (undefined1[16])0x0;
                     local_2a8 = (undefined1[16])0x0;
                  }
 else {
                     if (*(long*)( local_300 + -8 ) < 2) {
                        local_218 = 0;
                        local_248 = (undefined1[16])0x0;
                        for (int i = 0; i < 16; i++) {
                           local_238[i] = (CowData<GDScriptDataType>)0;
                        }

                        local_228 = (undefined1[16])0x0;
                     }
 else {
                        local_248._8_8_ = 0;
                        local_238 = (CowData<GDScriptDataType>[16])ZEXT816(0);
                        local_218 = 0;
                        local_228 = (undefined1[16])0x0;
                        GDScriptDataType::operator =((GDScriptDataType*)local_248, local_300 + 0x38);
                        if (local_300 == (GDScriptDataType*)0x0) goto LAB_001176ef;
                     }

                     if (*(long*)( local_300 + -8 ) < 1) goto LAB_001176ef;
                     local_2c8._8_8_ = 0;
                     local_2b8 = ZEXT816(0);
                     local_298 = (Object*)0x0;
                     local_2a8 = (undefined1[16])0x0;
                     GDScriptDataType::operator =((GDScriptDataType*)local_2c8, local_300);
                  }

                  ( *pcVar1 )(plVar10, (GDScriptDataType*)&local_168, (GDScriptDataType*)local_2c8, (GDScriptDataType*)local_248, local_358);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType*)local_2c8);
                  GDScriptDataType::~GDScriptDataType((GDScriptDataType*)local_248);
                  this_00 = (CowData<GDScriptCodeGenerator::Address>*)&local_350;
               }
 else {
                  LAB_00116d3e:if (local_2f8 != 1) goto LAB_00116d4c;
                  CodeGen::add_temporary((GDScriptDataType*)&local_168);
                  local_248._8_8_ = 0;
                  ( **(code**)( *local_1e8 + 0x208 ) )(local_1e8, (GDScriptDataType*)&local_168, local_2f0, local_248);
                  this_00 = (CowData<GDScriptCodeGenerator::Address>*)( local_248 + 8 );
               }

               CowData<GDScriptCodeGenerator::Address>::_unref(this_00);
               plVar10 = local_1e8;
               pcVar1 = *(code**)( *local_1e8 + 0x138 );
               puVar14 = (undefined4*)HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>::operator []((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>*)( param_2 + 0x2c0 ), (StringName*)( puVar2[0x25] + 0x148 ));
               ( *pcVar1 )(plVar10, (GDScriptDataType*)&local_168, local_288, *puVar14);
               ( **(code**)( *local_1e8 + 0x30 ) )();
               GDScriptDataType::~GDScriptDataType((GDScriptDataType*)&local_160);
            }

            LAB_00116d4c:if (( ( local_2d8 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),pOVar9 = local_2d8,cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);
            Memory::free_static(pOVar9, false);
         }

         if (( StringName::configured != '\0' ) && ( local_2e8 != 0 )) {
            StringName::unref();
         }

         CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_300);
      }
 while ( piVar15 != piVar18 );
      piVar15 = *(int**)( param_3 + 0x148 );
      piVar18 = piVar15;
      if (piVar15 == (int*)0x0) goto LAB_00117175;
   }

   lVar20 = 0;
   do if (( StringName::configured != '\0' ) && ( lStack_140 != 0 )) piVar18 = piVar15; while ( piVar15 != (int*)0x0 );
}
LAB_00117175:cVar11 = ( **(code**)( *(long*)param_2 + 0x250 ) )(param_2, GDScriptLanguage::singleton + 0x298);if (cVar11 != '\0') {
   ( **(code**)( *local_1e8 + 0x2b0 ) )(local_1e8, *(undefined4*)( param_3 + 0xc ));
   lStack_140 = 0;
   local_138 = (Object*)0x0;
   local_248._8_8_ = 0;
   local_168 = (char*)0x7;
   local_158 = ZEXT816(0);
   local_148 = 0;
   uStack_144 = 0;
   local_130 = (Object*)0x0;
   ( **(code**)( *local_1e8 + 400 ) )(local_1e8, (GDScriptDataType*)&local_168, local_288, GDScriptLanguage::singleton + 0x298, local_248);
   GDScriptDataType::~GDScriptDataType((GDScriptDataType*)&local_160);
   CowData<GDScriptCodeGenerator::Address>::_unref((CowData<GDScriptCodeGenerator::Address>*)( local_248 + 8 ));
}
if (( EngineDebugger::singleton != 0 ) && ( EngineDebugger::script_debugger != 0 )) {
   local_368 = 0;
   GDScript::get_script_path();
   if (( local_168 == (char*)0x0 ) || ( uVar17 = *(undefined8*)( local_168 + -8 ) ),(int)uVar17 == 0) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
   }
 else {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
      if ((int)uVar17 != 1) {
         GDScript::get_script_path();
         String::operator +=((String*)&local_368, (String*)&local_168);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
      }

   }

   String::operator +=((String*)&local_368, "::0");
   if (*(long*)( param_3 + 0x128 ) == 0) {
      if (local_370 == 0) {
         auVar7._8_8_ = 0;
         auVar7._0_8_ = local_248._8_8_;
         local_248 = auVar7 << 0x40;
      }
 else {
         pcVar3 = *(char**)( local_370 + 8 );
         auVar6._8_8_ = 0;
         auVar6._0_8_ = local_248._8_8_;
         local_248 = auVar6 << 0x40;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( local_370 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_248, (CowData*)( local_370 + 0x10 ));
            }

         }
 else {
            local_160 = strlen(pcVar3);
            local_168 = pcVar3;
            String::parse_latin1((StrRange*)local_248);
         }

      }

      operator+((char *)&
      local_168,(String*)&_LC106;
      String::operator +=((String*)&local_368, (String*)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_248);
   }
 else {
      if (local_370 == 0) {
         auVar5._8_8_ = 0;
         auVar5._0_8_ = local_248._8_8_;
         local_248 = auVar5 << 0x40;
      }
 else {
         pcVar3 = *(char**)( local_370 + 8 );
         auVar4._8_8_ = 0;
         auVar4._0_8_ = local_248._8_8_;
         local_248 = auVar4 << 0x40;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( local_370 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)local_248, (CowData*)( local_370 + 0x10 ));
            }

         }
 else {
            local_160 = strlen(pcVar3);
            local_168 = pcVar3;
            String::parse_latin1((StrRange*)local_248);
         }

      }

      local_308 = 0;
      local_168 = ".";
      local_160 = 1;
      String::parse_latin1((StrRange*)&local_308);
      lVar20 = *(long*)( *(long*)( param_3 + 0x128 ) + 0x148 );
      if (lVar20 == 0) {
         local_360 = 0;
      }
 else {
         pcVar3 = *(char**)( lVar20 + 8 );
         local_360 = 0;
         if (pcVar3 == (char*)0x0) {
            if (*(long*)( lVar20 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_360, (CowData*)( lVar20 + 0x10 ));
            }

         }
 else {
            local_160 = strlen(pcVar3);
            local_168 = pcVar3;
            String::parse_latin1((StrRange*)&local_360);
         }

      }

      operator+((char *)
      local_358,(String*)&_LC106;
      String::operator +((String*)local_2c8, (String*)local_358);
      String::operator +((String*)&local_168, (String*)local_2c8);
      String::operator +=((String*)&local_368, (String*)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_168);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_2c8);
      CowData<char32_t>::_unref(local_358);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_360);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_308);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_248);
   }

   ( **(code**)( *local_1e8 + 0x80 ) )(local_1e8, (String*)&local_368);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_368);
}
( **(code**)( *local_1e8 + 0x88 ) )();uVar17 = ( **(code**)( *local_1e8 + 0x78 ) )();plVar10 = local_1e8;( **(code**)( *local_1e8 + 0x2c8 ) )(local_1e8);Memory::free_static(plVar10, false);LAB_00117494:local_3b8 = (CodeGen*)local_208;if (( ( local_250 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),pOVar9 = local_250,cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);Memory::free_static(pOVar9, false);}if (( StringName::configured != '\0' ) && ( local_260._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)local_278);if (( ( local_318 != (Object*)0x0 ) && ( cVar11 = RefCounted::unreference() ),pOVar9 = local_318,cVar11 != '\0' )) &&( cVar11 = cVar11 != '\0' )(**(code**)( *(long*)pOVar9 + 0x140 ))(pOVar9);Memory::free_static(pOVar9, false);}if (( StringName::configured != '\0' ) && ( local_328._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_340);if (Variant::needs_deinit[local_78[0]] != '\0') {
   Variant::_clear_internal();
}
if (( StringName::configured != '\0' ) && ( local_370 != 0 )) {
   StringName::unref();
}
CodeGen::~CodeGen(local_3b8);if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar17;}/* GDScriptCompiler::_compile_class(GDScript*, GDScriptParser::ClassNode const*, bool) */int GDScriptCompiler::_compile_class(GDScriptCompiler *this, GDScript *param_1, ClassNode *param_2, bool param_3) {
   uint *puVar1;
   undefined4 *puVar2;
   uint *puVar3;
   undefined4 uVar4;
   ClassNode *pCVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   Object *pOVar10;
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
   int iVar31;
   char cVar32;
   ClassNode CVar33;
   GDScript GVar34;
   int iVar35;
   uint uVar36;
   int *piVar37;
   undefined8 *puVar38;
   ulong uVar39;
   GDScriptInstance *this_00;
   long lVar40;
   undefined4 *puVar41;
   undefined8 uVar42;
   uint *puVar43;
   uint uVar44;
   long lVar45;
   long lVar46;
   ulong uVar47;
   long lVar48;
   uint uVar49;
   uint *puVar50;
   ScriptInstance *pSVar51;
   FunctionNode *pFVar52;
   ulong uVar53;
   ulong uVar54;
   uint *puVar55;
   long *plVar56;
   Object *pOVar57;
   uint uVar58;
   ulong uVar59;
   long in_FS_OFFSET;
   bool bVar60;
   GDScriptInstance GVar61;
   int local_68;
   undefined4 uStack_64;
   undefined4 uStack_60;
   int local_58[6];
   long local_40;
   lVar45 = *(long*)( param_2 + 0x148 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (lVar45 != 0) {
      lVar48 = 0;
      do {
         while (true) {
            if (*(long*)( lVar45 + -8 ) <= lVar48) goto LAB_00117f4e;
            piVar37 = (int*)( lVar48 * 0x70 + lVar45 );
            if (*piVar37 != 3) break;
            pFVar52 = *(FunctionNode**)( piVar37 + 2 );
            LAB_00117f00:local_68 = 0;
            _parse_function(this, (StringName*)&local_68, param_1, param_2, pFVar52, false, false);
            iVar35 = local_68;
            if (local_68 != 0) goto LAB_00118198;
            LAB_00117f39:lVar45 = *(long*)( param_2 + 0x148 );
            lVar48 = lVar48 + 1;
            if (lVar45 == 0) goto LAB_00117f4e;
         }
;
         if (( *piVar37 == 5 ) && ( lVar40 = *(long*)( piVar37 + 2 ) * (int*)( lVar40 + 0x148 ) == 1 )) {
            if (*(FunctionNode**)( lVar40 + 0x150 ) != (FunctionNode*)0x0) {
               local_68 = 0;
               _parse_function(this, (StringName*)&local_68, param_1, param_2, *(FunctionNode**)( lVar40 + 0x150 ), false, false);
               iVar35 = local_68;
               if (local_68 != 0) goto LAB_00118198;
            }

            pFVar52 = *(FunctionNode**)( lVar40 + 0x160 );
            if (pFVar52 != (FunctionNode*)0x0) goto LAB_00117f00;
            goto LAB_00117f39;
         }

         lVar48 = lVar48 + 1;
      }
 while ( lVar45 != 0 );
   }

   LAB_00117f4e:local_68 = 0;
   _parse_function(this, (StringName*)&local_68, param_1, param_2, (FunctionNode*)0x0, false, false);
   iVar31 = local_68;
   iVar35 = iVar31;
   if (( local_68 == 0 ) && ( ( param_2[0x189] == (ClassNode)0x0 || ( _parse_function(this, (StringName*)&local_68, param_1, param_2, (FunctionNode*)0x0, true, false),iVar35 = local_68,local_68 == 0 ) ) )) {
      if (param_2[0x18a] != (ClassNode)0x0) {
         local_68 = 0;
         uVar42 = _make_static_initializer(this, (StringName*)&local_68, param_1, param_2);
         *(undefined8*)( param_1 + 0x680 ) = uVar42;
         iVar35 = local_68;
         if (local_68 != 0) goto LAB_00118198;
      }

      if (( param_3 ) && ( *(long*)( param_1 + 0x690 ) != 0 )) {
         lVar45 = *(long*)( *(long*)( param_1 + 0x690 ) + 0x10 );
         if (lVar45 != *(long*)( param_1 + 0x698 )) {
            do {
               lVar48 = lVar45;
               lVar45 = *(long*)( lVar48 + 0x10 );
            }
 while ( *(long*)( param_1 + 0x698 ) != *(long*)( lVar48 + 0x10 ) );
            do {
               while (true) {
                  lVar45 = *(long*)( lVar48 + 0x20 );
                  plVar56 = *(long**)( *(long*)( lVar48 + 0x30 ) + 0x98 );
                  cVar32 = ( **(code**)( *plVar56 + 0x98 ) )(plVar56);
                  if (cVar32 != '\0') break;
                  GDScriptInstance::reload_members();
                  lVar48 = lVar45;
                  if (lVar45 == 0) goto LAB_00118076;
               }
;
               if (*(code**)( *(long*)param_1 + 0x270 ) == GDScript::is_tool) {
                  GVar34 = param_1[0x240];
               }
 else {
                  GVar34 = ( GDScript )(**(code**)( *(long*)param_1 + 0x270 ))(param_1);
               }

               if (GVar34 != (GDScript)0x0) {
                  lVar40 = *(long*)( param_1 + 0x728 );
                  if (( lVar40 != 0 ) && ( *(int*)( param_1 + 0x74c ) != 0 )) {
                     lVar6 = *(long*)( param_1 + 0x740 );
                     uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x748 ) * 4 );
                     lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x748 ) * 8 );
                     uVar54 = CONCAT44(0, uVar36);
                     uVar39 = (long)plVar56 * 0x3ffff - 1;
                     uVar39 = ( uVar39 ^ uVar39 >> 0x1f ) * 0x15;
                     uVar39 = ( uVar39 ^ uVar39 >> 0xb ) * 0x41;
                     uVar39 = uVar39 >> 0x16 ^ uVar39;
                     uVar53 = uVar39 & 0xffffffff;
                     if ((int)uVar39 == 0) {
                        uVar53 = 1;
                     }

                     auVar11._8_8_ = 0;
                     auVar11._0_8_ = uVar53 * lVar7;
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = uVar54;
                     lVar46 = SUB168(auVar11 * auVar21, 8);
                     uVar58 = *(uint*)( lVar6 + lVar46 * 4 );
                     iVar35 = SUB164(auVar11 * auVar21, 8);
                     if (uVar58 != 0) {
                        uVar49 = 0;
                        LAB_00118345:if (uVar58 != (uint)uVar53) goto LAB_001182f8;
                        lVar8 = *(long*)( param_1 + 0x730 );
                        uVar58 = *(uint*)( lVar8 + lVar46 * 4 );
                        uVar39 = (ulong)uVar58;
                        if (plVar56 != *(long**)( lVar40 + uVar39 * 8 )) goto LAB_001182f8;
                        lVar9 = *(long*)( param_1 + 0x738 );
                        puVar1 = (uint*)( lVar9 + uVar39 * 4 );
                        uVar49 = *puVar1;
                        uVar53 = (ulong)uVar49;
                        auVar15._8_8_ = 0;
                        auVar15._0_8_ = ( ulong )(uVar49 + 1) * lVar7;
                        auVar25._8_8_ = 0;
                        auVar25._0_8_ = uVar54;
                        lVar46 = SUB168(auVar15 * auVar25, 8) * 4;
                        uVar44 = SUB164(auVar15 * auVar25, 8);
                        uVar59 = (ulong)uVar44;
                        puVar55 = (uint*)( lVar6 + lVar46 );
                        if (( *puVar55 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = ( ulong ) * puVar55 * lVar7,auVar26._8_8_ = 0,auVar26._0_8_ = uVar54,auVar17._8_8_ = 0,auVar17._0_8_ = ( ulong )(( uVar36 + uVar44 ) - SUB164(auVar16 * auVar26, 8)) * lVar7,auVar27._8_8_ = 0,auVar27._0_8_ = uVar54,SUB164(auVar17 * auVar27, 8) == 0) {
                           uVar59 = (ulong)uVar49;
                        }
 else {
                           while (true) {
                              puVar43 = (uint*)( lVar46 + lVar8 );
                              puVar3 = (uint*)( lVar8 + uVar53 * 4 );
                              puVar50 = (uint*)( uVar53 * 4 + lVar6 );
                              puVar41 = (undefined4*)( lVar9 + ( ulong ) * puVar43 * 4 );
                              puVar2 = (undefined4*)( lVar9 + ( ulong ) * puVar3 * 4 );
                              uVar4 = *puVar2;
                              *puVar2 = *puVar41;
                              *puVar41 = uVar4;
                              uVar49 = *puVar55;
                              *puVar55 = *puVar50;
                              *puVar50 = uVar49;
                              uVar49 = *puVar43;
                              *puVar43 = *puVar3;
                              *puVar3 = uVar49;
                              auVar20._8_8_ = 0;
                              auVar20._0_8_ = ( ulong )((int)uVar59 + 1) * lVar7;
                              auVar30._8_8_ = 0;
                              auVar30._0_8_ = uVar54;
                              uVar47 = SUB168(auVar20 * auVar30, 8);
                              lVar46 = uVar47 * 4;
                              puVar55 = (uint*)( lVar6 + lVar46 );
                              if (( *puVar55 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = ( ulong ) * puVar55 * lVar7,auVar28._8_8_ = 0,auVar28._0_8_ = uVar54,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( SUB164(auVar20 * auVar30, 8) + uVar36 ) - SUB164(auVar18 * auVar28, 8)) * lVar7,auVar29._8_8_ = 0,auVar29._0_8_ = uVar54,SUB164(auVar19 * auVar29, 8) == 0) break;
                              uVar53 = uVar59;
                              uVar59 = uVar47 & 0xffffffff;
                           }
;
                        }

                        *(undefined4*)( lVar6 + uVar59 * 4 ) = 0;
                        uVar36 = *(int*)( param_1 + 0x74c ) - 1;
                        *(uint*)( param_1 + 0x74c ) = uVar36;
                        if (uVar58 < uVar36) {
                           uVar49 = *(uint*)( lVar9 + (ulong)uVar36 * 4 );
                           *(undefined8*)( lVar40 + uVar39 * 8 ) = *(undefined8*)( lVar40 + (ulong)uVar36 * 8 );
                           *puVar1 = uVar49;
                           *(uint*)( lVar8 + ( ulong ) * (uint*)( lVar9 + ( ulong ) * (uint*)( param_1 + 0x74c ) * 4 ) * 4 ) = uVar58;
                        }

                     }

                  }

                  LAB_001184ea:this_00 = (GDScriptInstance*)operator_new(0x78, "");
                  GDScriptInstance::GDScriptInstance(this_00);
                  if (*(long*)( lVar48 + 0x30 ) == 0) {
                     GVar61 = (GDScriptInstance)0x0;
                  }
 else {
                     lVar40 = __dynamic_cast(*(long*)( lVar48 + 0x30 ), &Object::typeinfo, &RefCounted::typeinfo);
                     GVar61 = ( GDScriptInstance )(lVar40 != 0);
                  }

                  this_00[0x60] = GVar61;
                  CowData<Variant>::resize<false>((CowData<Variant>*)( this_00 + 0x58 ), ( ulong ) * (uint*)( param_1 + 0x294 ));
                  cVar32 = RefCounted::init_ref();
                  pOVar10 = *(Object**)( this_00 + 0x18 );
                  if (cVar32 == '\0') {
                     if (pOVar10 != (Object*)0x0) {
                        *(undefined8*)( this_00 + 0x18 ) = 0;
                        cVar32 = RefCounted::unreference();
                        goto joined_r0x001186be;
                     }

                  }
 else {
                     pOVar57 = pOVar10;
                     if (param_1 != (GDScript*)pOVar10) {
                        *(GDScript**)( this_00 + 0x18 ) = param_1;
                        cVar32 = RefCounted::reference();
                        if (cVar32 == '\0') {
                           *(undefined8*)( this_00 + 0x18 ) = 0;
                        }

                        pOVar57 = (Object*)param_1;
                        if (( ( pOVar10 != (Object*)0x0 ) && ( cVar32 = RefCounted::unreference() ),cVar32 != '\0' )) &&( cVar32 = cVar32 != '\0' )(**(code**)( *(long*)pOVar10 + 0x140 ))(pOVar10);
                        Memory::free_static(pOVar10, false);
                     }

                  }

                  cVar32 = RefCounted::unreference();
                  pOVar10 = pOVar57;
                  joined_r0x001186be:if (( cVar32 != '\0' ) && ( cVar32 = cVar32 != '\0' )) {
                     ( **(code**)( *(long*)pOVar10 + 0x140 ) )(pOVar10);
                     Memory::free_static(pOVar10, false);
                  }

               }

               pSVar51 = *(ScriptInstance**)( lVar48 + 0x30 );
               plVar56 = *(long**)( param_1 + 0x280 );
               *(ScriptInstance**)( this_00 + 0x10 ) = pSVar51;
               if (plVar56 != (long*)0x0) {
                  do {
                     lVar48 = plVar56[3];
                     puVar41 = (undefined4*)HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::operator []((HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>*)( this_00 + 0x20 ), (StringName*)( plVar56 + 2 ));
                     plVar56 = (long*)*plVar56;
                     *puVar41 = (int)lVar48;
                  }
 while ( plVar56 != (long*)0x0 );
                  pSVar51 = *(ScriptInstance**)( this_00 + 0x10 );
               }

               Object::set_script_instance(pSVar51);
               local_68 = 0;
               uStack_64 = 0;
               uStack_60 = 0;
               GDScriptFunction::call((GDScriptInstance*)local_58, *(Variant***)( param_1 + 0x668 ), (int)this_00, (CallError*)0x0, (CallState*)0x0);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

            }
 while ( lVar45 != 0 );
         }

      }

      LAB_00118076:lVar45 = *(long*)( param_2 + 0x148 );
      *(ClassNode*)( this + 0x80 ) = param_2[0x18a];
      if (lVar45 != 0) {
         lVar48 = 0;
         do {
            while (true) {
               if (*(long*)( lVar45 + -8 ) <= lVar48) goto LAB_00118176;
               piVar37 = (int*)( lVar48 * 0x70 + lVar45 );
               if (*piVar37 != 1) break;
               pCVar5 = *(ClassNode**)( piVar37 + 2 );
               StringName::StringName((StringName*)&local_68, (StringName*)( *(long*)( pCVar5 + 0x128 ) + 0x148 ));
               puVar38 = (undefined8*)HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::operator []((HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>*)( param_1 + 0x360 ), (StringName*)&local_68);
               iVar35 = _compile_class(this, (GDScript*)*puVar38, pCVar5, param_3);
               if (iVar35 != 0) {
                  if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_64, local_68) != 0 )) {
                     StringName::unref();
                  }

                  goto LAB_00118198;
               }

               CVar33 = *(ClassNode*)( this + 0x80 );
               if (CVar33 == (ClassNode)0x0) {
                  CVar33 = pCVar5[0x18a];
               }

               bVar60 = StringName::configured != '\0';
               *(ClassNode*)( this + 0x80 ) = CVar33;
               if (( bVar60 ) && ( CONCAT44(uStack_64, local_68) != 0 )) {
                  StringName::unref();
               }

               lVar48 = lVar48 + 1;
               lVar45 = *(long*)( param_2 + 0x148 );
               if (lVar45 == 0) goto LAB_00118176;
            }
;
            lVar48 = lVar48 + 1;
         }
 while ( lVar45 != 0 );
      }

      LAB_00118176:GDScript::_static_default_init();
      param_1[0x241] = (GDScript)0x1;
      iVar35 = iVar31;
   }

   LAB_00118198:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar35;
   LAB_001182f8:uVar49 = uVar49 + 1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar7;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar54;
   lVar46 = SUB168(auVar12 * auVar22, 8);
   uVar58 = *(uint*)( lVar6 + lVar46 * 4 );
   iVar35 = SUB164(auVar12 * auVar22, 8);
   if (( uVar58 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar58 * lVar7,auVar23._8_8_ = 0,auVar23._0_8_ = uVar54,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar36 + iVar35 ) - SUB164(auVar13 * auVar23, 8)) * lVar7,auVar24._8_8_ = 0,auVar24._0_8_ = uVar54,SUB164(auVar14 * auVar24, 8) < uVar49) goto LAB_001184ea;
   goto LAB_00118345;
}
/* GDScriptCompiler::_get_function_lambda_replacement_info(GDScriptFunction*, int,
   GDScriptFunction*) */GDScriptFunction *GDScriptCompiler::_get_function_lambda_replacement_info(GDScriptFunction *param_1, int param_2, GDScriptFunction *param_3) {
   int iVar1;
   undefined8 *puVar2;
   ulong uVar3;
   long lVar4;
   long lVar5;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   long local_80;
   undefined8 local_78;
   undefined8 uStack_70;
   undefined1 local_68;
   undefined8 local_64;
   long local_50[2];
   long local_40;
   uVar3 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar4 = *(long*)( param_3 + 0x278 );
   *(undefined8*)( param_1 + 8 ) = 0;
   do {
      if (( lVar4 == 0 ) || ( *(long*)( lVar4 + -8 ) <= (long)uVar3 )) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return param_1;
         }

         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      _get_function_replacement_info((GDScriptFunction*)&local_98, param_2, (int)*(undefined8*)( lVar4 + uVar3 * 8 ), (GDScriptFunction*)( uVar3 & 0xffffffff ));
      if (*(long*)( param_1 + 8 ) == 0) {
         lVar4 = 1;
      }
 else {
         lVar4 = *(long*)( *(long*)( param_1 + 8 ) + -8 ) + 1;
      }

      iVar1 = CowData<GDScriptCompiler::FunctionLambdaInfo>::resize<false>((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( param_1 + 8 ), lVar4);
      if (iVar1 == 0) {
         if (*(long*)( param_1 + 8 ) == 0) {
            lVar5 = -1;
            lVar4 = 0;
         }
 else {
            lVar4 = *(long*)( *(long*)( param_1 + 8 ) + -8 );
            lVar5 = lVar4 + -1;
            if (-1 < lVar5) {
               CowData<GDScriptCompiler::FunctionLambdaInfo>::_copy_on_write((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( param_1 + 8 ));
               puVar2 = (undefined8*)( lVar5 * 0x50 + *(long*)( param_1 + 8 ) );
               puVar2[2] = local_88;
               *puVar2 = local_98;
               puVar2[1] = uStack_90;
               StringName::operator =((StringName*)( puVar2 + 3 ), (StringName*)&local_80);
               *(undefined1*)( puVar2 + 6 ) = local_68;
               puVar2[4] = local_78;
               puVar2[5] = uStack_70;
               *(undefined8*)( (long)puVar2 + 0x34 ) = local_64;
               if (puVar2[9] != local_50[0]) {
                  CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( puVar2 + 9 ), (CowData*)local_50);
               }

               goto LAB_0011883e;
            }

         }

         _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar4, "p_index", "size()", "", false, false);
      }
 else {
         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      }

      LAB_0011883e:CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)local_50);
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

      lVar4 = *(long*)( param_3 + 0x278 );
      uVar3 = uVar3 + 1;
   }
 while ( true );
}
/* GDScriptCompiler::_get_function_replacement_info(GDScriptFunction*, int, int, GDScriptFunction*)
    */GDScriptFunction *GDScriptCompiler::_get_function_replacement_info(GDScriptFunction *param_1, int param_2, int param_3, GDScriptFunction *param_4) {
   GDScriptFunction GVar1;
   undefined4 uVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   ulong uVar15;
   uint uVar16;
   undefined4 in_register_00000014;
   StringName *pSVar17;
   long lVar18;
   uint uVar19;
   uint uVar20;
   undefined4 in_R8D;
   undefined8 in_R9;
   ulong uVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   long local_58;
   long local_50[2];
   long local_40;
   pSVar17 = (StringName*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 0x10 ) = (undefined1[16])0x0;
   uVar3 = *(undefined8*)( pSVar17 + 0xe8 );
   param_1[0x30] = (GDScriptFunction)0x0;
   *(undefined8*)( param_1 + 0x10 ) = uVar3;
   *(undefined8*)( param_1 + 0x34 ) = 0;
   *(undefined8*)( param_1 + 0x48 ) = 0;
   *(StringName**)param_1 = pSVar17;
   *(undefined8*)( param_1 + 8 ) = in_R9;
   *(undefined1(*) [16])( param_1 + 0x20 ) = (undefined1[16])0x0;
   StringName::StringName((StringName*)&local_58, pSVar17);
   if (*(long*)( param_1 + 0x18 ) == local_58) {
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(long*)( param_1 + 0x18 ) = local_58;
   }

   uVar2 = *(undefined4*)( pSVar17 + 0xf0 );
   *(undefined4*)( param_1 + 0x28 ) = in_R8D;
   *(undefined4*)( param_1 + 0x2c ) = 0;
   param_1[0x30] = (GDScriptFunction)0x0;
   *(ulong*)( param_1 + 0x20 ) = CONCAT44((int)param_4, uVar2);
   *(undefined4*)( param_1 + 0x34 ) = *(undefined4*)( pSVar17 + 0xf4 );
   *(undefined4*)( param_1 + 0x38 ) = *(undefined4*)( pSVar17 + 0x284 );
   _get_function_lambda_replacement_info((GDScriptFunction*)&local_58, param_2, (GDScriptFunction*)pSVar17);
   if (*(long*)( param_1 + 0x48 ) != local_50[0]) {
      CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( param_1 + 0x48 ));
      *(long*)( param_1 + 0x48 ) = local_50[0];
      local_50[0] = 0;
   }

   CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)local_50);
   lVar4 = *(long*)( param_1 + 0x10 );
   if (lVar4 == 0) {
      _err_print_error("_get_function_replacement_info", "modules/gdscript/gdscript_compiler.cpp", 0xc48, "Parameter \"info.script\" is null.", 0, 0);
   }
 else {
      lVar5 = *(long*)( lVar4 + 0x3d0 );
      if (( lVar5 != 0 ) && ( *(int*)( lVar4 + 0x3f4 ) != 0 )) {
         uVar21 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar4 + 0x3f0 ) * 4 ));
         lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar4 + 0x3f0 ) * 8 );
         uVar15 = (long)pSVar17 * 0x3ffff - 1;
         uVar15 = ( uVar15 ^ uVar15 >> 0x1f ) * 0x15;
         uVar15 = ( uVar15 ^ uVar15 >> 0xb ) * 0x41;
         uVar15 = uVar15 >> 0x16 ^ uVar15;
         uVar22 = uVar15 & 0xffffffff;
         if ((int)uVar15 == 0) {
            uVar22 = 1;
         }

         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar22 * lVar6;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = uVar21;
         lVar18 = SUB168(auVar7 * auVar11, 8);
         uVar20 = *(uint*)( *(long*)( lVar4 + 0x3d8 ) + lVar18 * 4 );
         uVar16 = SUB164(auVar7 * auVar11, 8);
         if (uVar20 != 0) {
            uVar19 = 0;
            do {
               if (( uVar20 == (uint)uVar22 ) && ( *(StringName**)( *(long*)( lVar5 + lVar18 * 8 ) + 0x10 ) == pSVar17 )) {
                  lVar4 = *(long*)( lVar5 + (ulong)uVar16 * 8 );
                  GVar1 = *(GDScriptFunction*)( lVar4 + 0x1c );
                  *(undefined4*)( param_1 + 0x2c ) = *(undefined4*)( lVar4 + 0x18 );
                  param_1[0x30] = GVar1;
                  goto LAB_00118bc3;
               }

               uVar19 = uVar19 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(uVar16 + 1) * lVar6;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = uVar21;
               lVar18 = SUB168(auVar8 * auVar12, 8);
               uVar20 = *(uint*)( *(long*)( lVar4 + 0x3d8 ) + lVar18 * 4 );
               uVar16 = SUB164(auVar8 * auVar12, 8);
            }
 while ( ( uVar20 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar20 * lVar6,auVar13._8_8_ = 0,auVar13._0_8_ = uVar21,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar4 + 0x3f0 ) * 4 ) + uVar16 ) - SUB164(auVar9 * auVar13, 8)) * lVar6,auVar14._8_8_ = 0,auVar14._0_8_ = uVar21,uVar19 <= SUB164(auVar10 * auVar14, 8) );
         }

      }

      *(undefined4*)( param_1 + 0x2c ) = 0;
      param_1[0x30] = (GDScriptFunction)0x0;
   }

   LAB_00118bc3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptCompiler::_get_script_lambda_replacement_info(GDScript*) */GDScript *GDScriptCompiler::_get_script_lambda_replacement_info(GDScript *param_1) {
   GDScriptFunction *pGVar1;
   undefined8 uVar2;
   long lVar3;
   long in_RDX;
   int in_ESI;
   long *plVar4;
   long in_FS_OFFSET;
   StringName local_f0[8];
   GDScriptFunction local_e8[8];
   long local_e0[20];
   long local_40;
   uVar2 = _LC9;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( param_1 + 0x38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x78 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( param_1 + 0x88 ) = (undefined1[16])0x0;
   pGVar1 = *(GDScriptFunction**)( in_RDX + 0x670 );
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( param_1 + ( 16*i + 8 ) ) = 0;
   }

   *(undefined8*)( param_1 + 0x58 ) = uVar2;
   *(undefined8*)( param_1 + 0x68 ) = 0;
   *(undefined8*)( param_1 + 0x98 ) = uVar2;
   if (pGVar1 != (GDScriptFunction*)0x0) {
      _get_function_lambda_replacement_info(local_e8, in_ESI, pGVar1);
      if (*(long*)( param_1 + 8 ) != local_e0[0]) {
         CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( param_1 + 8 ));
         *(long*)( param_1 + 8 ) = local_e0[0];
         local_e0[0] = 0;
      }

      CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)local_e0);
   }

   if (*(GDScriptFunction**)( in_RDX + 0x678 ) != (GDScriptFunction*)0x0) {
      _get_function_lambda_replacement_info(local_e8, in_ESI, *(GDScriptFunction**)( in_RDX + 0x678 ));
      lVar3 = local_e0[0];
      if (*(long*)( param_1 + 0x18 ) != local_e0[0]) {
         CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( param_1 + 0x18 ));
         *(long*)( param_1 + 0x18 ) = lVar3;
         local_e0[0] = 0;
      }

      CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)local_e0);
   }

   if (*(GDScriptFunction**)( in_RDX + 0x680 ) != (GDScriptFunction*)0x0) {
      _get_function_lambda_replacement_info(local_e8, in_ESI, *(GDScriptFunction**)( in_RDX + 0x680 ));
      lVar3 = local_e0[0];
      if (*(long*)( param_1 + 0x28 ) != local_e0[0]) {
         CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( param_1 + 0x28 ));
         *(long*)( param_1 + 0x28 ) = lVar3;
         local_e0[0] = 0;
      }

      CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)local_e0);
   }

   plVar4 = *(long**)( in_RDX + 0x348 );
   if (plVar4 != (long*)0x0) {
      do {
         _get_function_lambda_replacement_info(local_e8, in_ESI, (GDScriptFunction*)plVar4[3]);
         HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>>::insert(local_f0, (Vector*)( param_1 + 0x30 ), (bool)( (char)plVar4 + '\x10' ));
         CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)local_e0);
         plVar4 = (long*)*plVar4;
      }
 while ( plVar4 != (long*)0x0 );
   }

   plVar4 = *(long**)( in_RDX + 0x378 );
   if (plVar4 != (long*)0x0) {
      do {
         _get_script_lambda_replacement_info((GDScript*)local_e8);
         HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>>::insert(local_f0, (ScriptLambdaInfo*)( param_1 + 0x70 ), (bool)( (char)plVar4 + '\x10' ));
         ScriptLambdaInfo::~ScriptLambdaInfo((ScriptLambdaInfo*)local_e8);
         plVar4 = (long*)*plVar4;
      }
 while ( plVar4 != (long*)0x0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptCompiler::compile(GDScriptParser const*, GDScript*, bool) */int GDScriptCompiler::compile(GDScriptCompiler *this, GDScriptParser *param_1, GDScript *param_2, bool param_3) {
   long *plVar1;
   uint uVar2;
   ClassNode *pCVar3;
   GDScript *pGVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   void *pvVar8;
   long in_FS_OFFSET;
   undefined8 local_1d0;
   GDScript *local_1c8;
   undefined8 local_1c0;
   HashMap local_1b8[8];
   undefined1 local_1b0[16];
   undefined1 local_1a0[16];
   undefined8 local_190;
   long local_188[20];
   undefined *local_e8;
   undefined8 local_e0;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x60 ) = 0xffffffffffffffff;
   local_e8 = &_LC15;
   local_e0 = 0;
   String::parse_latin1((StrRange*)( this + 0x70 ));
   *(GDScriptParser**)this = param_1;
   pCVar3 = *(ClassNode**)( param_1 + 0x50 );
   *(GDScript**)( this + 0x58 ) = param_2;
   Resource::get_path();
   StringName::StringName((StringName*)&local_e8, (String*)local_188, false);
   if (*(undefined**)( this + 0x68 ) == local_e8) {
      if (( StringName::configured != '\0' ) && ( local_e8 != (undefined*)0x0 )) {
         StringName::unref();
      }

   }
 else {
      StringName::unref();
      *(undefined**)( this + 0x68 ) = local_e8;
   }

   lVar7 = local_188[0];
   if (local_188[0] != 0) {
      LOCK();
      plVar1 = (long*)( local_188[0] + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_188[0] = 0;
         Memory::free_static((void*)( lVar7 + -0x10 ), false);
      }

   }

   _get_script_lambda_replacement_info((GDScript*)local_188);
   make_scripts(param_2, pCVar3, param_3);
   *(undefined8*)( *(long*)( this + 0x58 ) + 0x260 ) = 0;
   iVar6 = _prepare_compilation(this, *(GDScript**)( this + 0x58 ), *(ClassNode**)( *(long*)this + 0x50 ), param_3);
   if (iVar6 != 0) goto LAB_00118fc0;
   iVar6 = _compile_class(this, *(GDScript**)( this + 0x58 ), pCVar3, param_3);
   if (iVar6 != 0) goto LAB_00118fc0;
   _get_script_lambda_replacement_info((GDScript*)&local_e8);
   local_1b0 = (undefined1[16])0x0;
   local_1a0 = (undefined1[16])0x0;
   local_190 = 2;
   _get_function_ptr_replacements(this, local_1b8, (ScriptLambdaInfo*)local_188, (ScriptLambdaInfo*)&local_e8);
   GDScript::_recurse_replace_function_ptrs(*(HashMap**)( this + 0x58 ));
   if (( this[0x80] != (GDScriptCompiler)0x0 ) && ( pCVar3[0x18b] == (ClassNode)0x0 )) {
      if (param_2 == (GDScript*)0x0) {
         LAB_00119216:local_1c8 = (GDScript*)0x0;
      }
 else {
         local_1c8 = param_2;
         cVar5 = RefCounted::init_ref();
         if (cVar5 == '\0') goto LAB_00119216;
      }

      GDScriptCache::add_static_script(&local_1c8);
      if (local_1c8 != (GDScript*)0x0) {
         cVar5 = RefCounted::unreference();
         pGVar4 = local_1c8;
         if (cVar5 != '\0') {
            cVar5 = predelete_handler((Object*)local_1c8);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pGVar4 + 0x140 ) )(pGVar4);
               Memory::free_static(pGVar4, false);
            }

         }

      }

   }

   iVar6 = GDScriptCache::finish_compiling((String*)( *(long*)( this + 0x58 ) + 0x6c8 ));
   if (iVar6 != 0) {
      local_1d0 = 0;
      local_1c8 = (GDScript*)0x119ed8;
      local_1c0 = 0x23;
      String::parse_latin1((StrRange*)&local_1d0);
      _set_error(this, (String*)&local_1d0, (Node*)0x0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_1d0);
   }

   if ((void*)local_1b0._0_8_ == (void*)0x0) {
      LAB_0011913f:ScriptLambdaInfo::~ScriptLambdaInfo((ScriptLambdaInfo*)&local_e8);
   }
 else {
      pvVar8 = (void*)local_1b0._0_8_;
      if (local_190._4_4_ != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_190 & 0xffffffff ) * 4 );
         if (uVar2 == 0) {
            local_190 = local_190 & 0xffffffff;
            local_1a0 = (undefined1[16])0x0;
         }
 else {
            lVar7 = 0;
            do {
               if (*(int*)( local_1b0._8_8_ + lVar7 ) != 0) {
                  *(int*)( local_1b0._8_8_ + lVar7 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar8 + lVar7 * 2 ), false);
                  *(undefined8*)( local_1b0._0_8_ + lVar7 * 2 ) = 0;
                  pvVar8 = (void*)local_1b0._0_8_;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar2 << 2 );
            local_190 = local_190 & 0xffffffff;
            local_1a0 = (undefined1[16])0x0;
            if (pvVar8 == (void*)0x0) goto LAB_0011913f;
         }

      }

      Memory::free_static(pvVar8, false);
      Memory::free_static((void*)local_1b0._8_8_, false);
      ScriptLambdaInfo::~ScriptLambdaInfo((ScriptLambdaInfo*)&local_e8);
   }

   LAB_00118fc0:ScriptLambdaInfo::~ScriptLambdaInfo((ScriptLambdaInfo*)local_188);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar6;
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
/* MethodBind::is_vararg() const */undefined8 MethodBind::is_vararg(void) {
   return 0;
}
/* GDScript::is_valid() const */GDScript GDScript::is_valid(GDScript *this) {
   return this[0x241];
}
/* GDScript::is_tool() const */GDScript GDScript::is_tool(GDScript *this) {
   return this[0x240];
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
/* GDScript::get_member_type(StringName const&) const */long GDScript::get_member_type(GDScript *this, StringName *param_1) {
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
   code *pcVar19;
   uint uVar20;
   int iVar21;
   uint uVar22;
   long lVar23;
   uint uVar24;
   ulong uVar25;
   ulong uVar26;
   uint uVar27;
   long lVar28;
   if (( *(long*)( this + 0x270 ) != 0 ) && ( *(int*)( this + 0x294 ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x290 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x290 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar20 = StringName::get_empty_hash();
      }
 else {
         uVar20 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar26 = CONCAT44(0, uVar1);
      lVar28 = *(long*)( this + 0x278 );
      if (uVar20 == 0) {
         uVar20 = 1;
      }

      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar20 * lVar2;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar26;
      lVar23 = SUB168(auVar3 * auVar11, 8);
      uVar27 = *(uint*)( lVar28 + lVar23 * 4 );
      uVar25 = (ulong)uVar27;
      iVar21 = SUB164(auVar3 * auVar11, 8);
      if (uVar27 != 0) {
         uVar27 = 0;
         do {
            if (( uVar20 == (uint)uVar25 ) && ( lVar23 = *(long*)( *(long*)( *(long*)( this + 0x270 ) + lVar23 * 8 ) + 0x10 ) ),lVar23 == *(long*)param_1) {
               if (( *(long*)( this + 0x270 ) != 0 ) && ( *(int*)( this + 0x294 ) != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x290 ) * 4 );
                  uVar26 = CONCAT44(0, uVar1);
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x290 ) * 8 );
                  if (lVar23 == 0) {
                     uVar20 = StringName::get_empty_hash();
                     lVar28 = *(long*)( this + 0x278 );
                  }
 else {
                     uVar20 = *(uint*)( lVar23 + 0x20 );
                  }

                  if (uVar20 == 0) {
                     uVar20 = 1;
                  }

                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar20 * lVar2;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar26;
                  lVar23 = SUB168(auVar7 * auVar15, 8);
                  uVar27 = *(uint*)( lVar28 + lVar23 * 4 );
                  uVar22 = SUB164(auVar7 * auVar15, 8);
                  if (uVar27 != 0) {
                     uVar24 = 0;
                     do {
                        if (( uVar20 == uVar27 ) && ( *(long*)( *(long*)( *(long*)( this + 0x270 ) + lVar23 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                           return *(long*)( *(long*)( this + 0x270 ) + (ulong)uVar22 * 8 ) + 0x30;
                        }

                        uVar24 = uVar24 + 1;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = ( ulong )(uVar22 + 1) * lVar2;
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = uVar26;
                        lVar23 = SUB168(auVar8 * auVar16, 8);
                        uVar27 = *(uint*)( lVar28 + lVar23 * 4 );
                        uVar22 = SUB164(auVar8 * auVar16, 8);
                     }
 while ( ( uVar27 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar27 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar26,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar22 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar26,uVar24 <= SUB164(auVar10 * auVar18, 8) );
                  }

               }

               _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar19 = (code*)invalidInstructionException();
               ( *pcVar19 )();
            }

            uVar27 = uVar27 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(iVar21 + 1) * lVar2;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = uVar26;
            lVar23 = SUB168(auVar4 * auVar12, 8);
            uVar22 = *(uint*)( lVar28 + lVar23 * 4 );
            uVar25 = (ulong)uVar22;
            iVar21 = SUB164(auVar4 * auVar12, 8);
         }
 while ( ( uVar22 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = uVar25 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar26,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar21 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar26,uVar27 <= SUB164(auVar6 * auVar14, 8) );
      }

   }

   _err_print_error("get_member_type", "modules/gdscript/gdscript.h", 0x105, "FATAL: Condition \"!member_indices.has(p_member)\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar19 = (code*)invalidInstructionException();
   ( *pcVar19 )();
}
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
}
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) const */long HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::operator [](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>> *this, StringName *param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::operator[](StringName const&) */undefined8 * __thiscall
HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
::operator[](HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>
             *this,StringName *param_1){
   uint *puVar1;
   undefined8 *puVar2;
   void *pvVar3;
   void *__s;
   undefined8 *puVar4;
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
   bool bVar56;
   long local_58;
   undefined4 local_50;
   long local_40;
   lVar43 = *(long*)( this + 8 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar40 = CONCAT44(0, uVar38);
   if (lVar43 == 0) {
      LAB_0011a758:uVar45 = uVar40 * 4;
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
            goto LAB_0011a608;
         }

         memset(pvVar3, 0, uVar45);
         memset(pvVar44, 0, uVar50);
         iVar46 = *(int*)( this + 0x2c );
         LAB_0011a60c:if (iVar46 != 0) {
            LAB_0011a614:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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
                     *(undefined4*)( puVar42 + 3 ) = 0;
                     goto LAB_0011a20c;
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

         goto LAB_0011a243;
      }

      iVar46 = *(int*)( this + 0x2c );
      if (pvVar44 == (void*)0x0) goto LAB_0011a243;
      if (iVar46 != 0) goto LAB_0011a614;
      LAB_0011a269:uVar38 = *(uint*)( this + 0x28 );
      if (uVar38 == 0x1c) {
         puVar42 = (undefined8*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0011a20c;
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
                  goto LAB_0011a20c;
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
         if (lVar43 == 0) goto LAB_0011a758;
         LAB_0011a608:iVar46 = *(int*)( this + 0x2c );
         goto LAB_0011a60c;
      }

      LAB_0011a243:if ((float)uVar40 * __LC11 < (float)( iVar46 + 1 )) goto LAB_0011a269;
   }

   StringName::StringName((StringName*)&local_58, param_1);
   local_50 = 0;
   puVar42 = (undefined8*)operator_new(0x20, "");
   *puVar42 = 0;
   puVar42[1] = 0;
   StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);
   bVar56 = StringName::configured != '\0';
   *(undefined4*)( puVar42 + 3 ) = local_50;
   if (( bVar56 ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   puVar4 = *(undefined8**)( this + 0x20 );
   if (puVar4 == (undefined8*)0x0) {
      lVar43 = *(long*)param_1;
      *(undefined8**)( this + 0x18 ) = puVar42;
      *(undefined8**)( this + 0x20 ) = puVar42;
      if (lVar43 == 0) goto LAB_0011a71d;
      LAB_0011a4f4:uVar38 = *(uint*)( lVar43 + 0x20 );
   }
 else {
      *puVar4 = puVar42;
      puVar42[1] = puVar4;
      lVar43 = *(long*)param_1;
      *(undefined8**)( this + 0x20 ) = puVar42;
      if (lVar43 != 0) goto LAB_0011a4f4;
      LAB_0011a71d:uVar38 = StringName::get_empty_hash();
   }

   if (uVar38 == 0) {
      uVar38 = 1;
   }

   uVar40 = (ulong)uVar38;
   lVar43 = *(long*)( this + 0x10 );
   uVar53 = 0;
   lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar45 = CONCAT44(0, uVar39);
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar40 * lVar49;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar45;
   lVar48 = SUB168(auVar13 * auVar29, 8);
   lVar47 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar43 + lVar48 * 4 );
   iVar46 = SUB164(auVar13 * auVar29, 8);
   uVar52 = *puVar1;
   puVar4 = puVar42;
   while (uVar52 != 0) {
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
;
   *(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;
   *puVar1 = uVar38;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   LAB_0011a20c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar42 + 3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<GDScriptParser::SubscriptNode const*, DefaultAllocator>::~List() */undefined8 List<GDScriptParser::SubscriptNode_const*,DefaultAllocator>::~List(List<GDScriptParser::SubscriptNode_const*,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   undefined8 uVar4;
   long *plVar5;
   undefined8 uStack_18;
   plVar5 = *(long**)this;
   if (plVar5 == (long*)0x0) {
      return uStack_18;
   }

   do {
      pvVar1 = (void*)*plVar5;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar5[2] != 0) {
            uVar4 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return uVar4;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x18 ) == plVar5) {
         lVar3 = *(long*)( (long)pvVar1 + 8 );
         lVar2 = *(long*)( (long)pvVar1 + 0x10 );
         *plVar5 = lVar3;
         if (pvVar1 == (void*)plVar5[1]) {
            plVar5[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 8 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 8 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar2;
         }

         Memory::free_static(pvVar1, false);
         *(int*)( plVar5 + 2 ) = (int)plVar5[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar5 = *(long**)this;
   }
 while ( (int)plVar5[2] != 0 );
   uVar4 = Memory::free_static(plVar5, false);
   return uVar4;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<GDScriptFunction*, GDScript::LambdaInfo, HashMapHasherDefault,
   HashMapComparatorDefault<GDScriptFunction*>,
   DefaultTypedAllocator<HashMapElement<GDScriptFunction*, GDScript::LambdaInfo> >
   >::insert(GDScriptFunction* const&, GDScript::LambdaInfo const&, bool) */void HashMap<GDScriptFunction*,GDScript::LambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<GDScriptFunction*>,DefaultTypedAllocator<HashMapElement<GDScriptFunction*,GDScript::LambdaInfo>>>::insert(GDScriptFunction **param_1, LambdaInfo *param_2, bool param_3) {
   uint *puVar1;
   undefined8 *puVar2;
   long lVar3;
   void *pvVar4;
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
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   undefined1 auVar28[16];
   GDScriptFunction *pGVar29;
   uint uVar30;
   uint uVar31;
   ulong uVar32;
   undefined8 uVar33;
   void *__s_00;
   GDScriptFunction *pGVar34;
   undefined8 *in_RCX;
   int iVar35;
   undefined7 in_register_00000011;
   long *plVar36;
   long lVar37;
   long lVar38;
   uint uVar39;
   long lVar40;
   undefined8 uVar41;
   ulong uVar42;
   uint uVar43;
   char in_R8B;
   uint uVar44;
   uint uVar45;
   ulong uVar46;
   GDScriptFunction *pGVar47;
   void *local_a0;
   plVar36 = (long*)CONCAT71(in_register_00000011, param_3);
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   local_a0 = *(void**)( param_2 + 8 );
   if (local_a0 == (void*)0x0) {
      uVar46 = (ulong)uVar39;
      uVar32 = uVar46 * 4;
      uVar42 = uVar46 * 8;
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      local_a0 = (void*)Memory::alloc_static(uVar42, false);
      *(void**)( param_2 + 8 ) = local_a0;
      if (uVar39 != 0) {
         pvVar4 = *(void**)( param_2 + 0x10 );
         if (( pvVar4 < (void*)( (long)local_a0 + uVar42 ) ) && ( local_a0 < (void*)( (long)pvVar4 + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)pvVar4 + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)local_a0 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar46 != uVar32 );
            goto LAB_0011aa4e;
         }

         memset(pvVar4, 0, uVar32);
         memset(local_a0, 0, uVar42);
         iVar35 = *(int*)( param_2 + 0x2c );
         lVar40 = *plVar36;
         goto LAB_0011aa5a;
      }

      iVar35 = *(int*)( param_2 + 0x2c );
      lVar40 = *plVar36;
      if (local_a0 != (void*)0x0) goto LAB_0011aa5a;
   }
 else {
      LAB_0011aa4e:iVar35 = *(int*)( param_2 + 0x2c );
      lVar40 = *plVar36;
      LAB_0011aa5a:if (iVar35 != 0) {
         uVar42 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar32 = lVar40 * 0x3ffff - 1;
         uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
         uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
         uVar32 = uVar32 >> 0x16 ^ uVar32;
         uVar46 = uVar32 & 0xffffffff;
         if ((int)uVar32 == 0) {
            uVar46 = 1;
         }

         uVar45 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar46 * lVar3;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar42;
         lVar37 = SUB168(auVar5 * auVar17, 8);
         uVar43 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar37 * 4 );
         uVar31 = SUB164(auVar5 * auVar17, 8);
         if (uVar43 != 0) {
            do {
               if (( (uint)uVar46 == uVar43 ) && ( *(long*)( *(long*)( (long)local_a0 + lVar37 * 8 ) + 0x10 ) == lVar40 )) {
                  pGVar34 = *(GDScriptFunction**)( (long)local_a0 + (ulong)uVar31 * 8 );
                  *(undefined8*)( pGVar34 + 0x18 ) = *in_RCX;
                  goto LAB_0011af01;
               }

               uVar45 = uVar45 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar31 + 1) * lVar3;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar42;
               lVar37 = SUB168(auVar6 * auVar18, 8);
               uVar43 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar37 * 4 );
               uVar31 = SUB164(auVar6 * auVar18, 8);
            }
 while ( ( uVar43 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar43 * lVar3,auVar19._8_8_ = 0,auVar19._0_8_ = uVar42,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar31 ) - SUB164(auVar7 * auVar19, 8)) * lVar3,auVar20._8_8_ = 0,auVar20._0_8_ = uVar42,uVar45 <= SUB164(auVar8 * auVar20, 8) );
         }

      }

   }

   if ((float)uVar39 * __LC11 < (float)( iVar35 + 1 )) {
      uVar39 = *(uint*)( param_2 + 0x28 );
      if (uVar39 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pGVar34 = (GDScriptFunction*)0x0;
         goto LAB_0011af01;
      }

      uVar32 = ( ulong )(uVar39 + 1);
      *(undefined4*)( param_2 + 0x2c ) = 0;
      uVar43 = *(uint*)( hash_table_size_primes + (ulong)uVar39 * 4 );
      if (uVar39 + 1 < 2) {
         uVar32 = 2;
      }

      uVar39 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      uVar46 = (ulong)uVar39;
      *(int*)( param_2 + 0x28 ) = (int)uVar32;
      pvVar4 = *(void**)( param_2 + 0x10 );
      uVar32 = uVar46 * 4;
      uVar42 = uVar46 * 8;
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      __s_00 = (void*)Memory::alloc_static(uVar42, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar39 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar42 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar46 != uVar32 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar42);
         }

      }

      if (uVar43 != 0) {
         uVar32 = 0;
         do {
            uVar39 = *(uint*)( (long)pvVar4 + uVar32 * 4 );
            if (uVar39 != 0) {
               lVar40 = *(long*)( param_2 + 0x10 );
               uVar44 = 0;
               uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar42 = CONCAT44(0, uVar31);
               lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar39 * lVar3;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar42;
               lVar37 = SUB168(auVar9 * auVar21, 8);
               puVar1 = (uint*)( lVar40 + lVar37 * 4 );
               iVar35 = SUB164(auVar9 * auVar21, 8);
               uVar45 = *puVar1;
               uVar33 = *(undefined8*)( (long)local_a0 + uVar32 * 8 );
               while (uVar45 != 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar45 * lVar3;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar42;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar10 * auVar22, 8)) * lVar3;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar42;
                  uVar30 = SUB164(auVar11 * auVar23, 8);
                  uVar41 = uVar33;
                  if (uVar30 < uVar44) {
                     *puVar1 = uVar39;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar37 * 8 );
                     uVar41 = *puVar2;
                     *puVar2 = uVar33;
                     uVar39 = uVar45;
                     uVar44 = uVar30;
                  }

                  uVar44 = uVar44 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar42;
                  lVar37 = SUB168(auVar12 * auVar24, 8);
                  puVar1 = (uint*)( lVar40 + lVar37 * 4 );
                  iVar35 = SUB164(auVar12 * auVar24, 8);
                  uVar33 = uVar41;
                  uVar45 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar37 * 8 ) = uVar33;
               *puVar1 = uVar39;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar32 = uVar32 + 1;
         }
 while ( uVar32 != uVar43 );
         Memory::free_static(local_a0, false);
         Memory::free_static(pvVar4, false);
      }

   }

   lVar40 = *plVar36;
   uVar33 = *in_RCX;
   pGVar34 = (GDScriptFunction*)operator_new(0x20, "");
   *(undefined1(*) [16])pGVar34 = (undefined1[16])0x0;
   *(long*)( pGVar34 + 0x10 ) = lVar40;
   *(undefined8*)( pGVar34 + 0x18 ) = uVar33;
   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(GDScriptFunction**)( param_2 + 0x18 ) = pGVar34;
      *(GDScriptFunction**)( param_2 + 0x20 ) = pGVar34;
   }
 else if (in_R8B == '\0') {
      *puVar2 = pGVar34;
      *(undefined8**)( pGVar34 + 8 ) = puVar2;
      *(GDScriptFunction**)( param_2 + 0x20 ) = pGVar34;
   }
 else {
      lVar40 = *(long*)( param_2 + 0x18 );
      *(GDScriptFunction**)( lVar40 + 8 ) = pGVar34;
      *(long*)pGVar34 = lVar40;
      *(GDScriptFunction**)( param_2 + 0x18 ) = pGVar34;
   }

   lVar40 = *(long*)( param_2 + 0x10 );
   uVar32 = *plVar36 * 0x3ffff - 1;
   uVar32 = ( uVar32 ^ uVar32 >> 0x1f ) * 0x15;
   uVar32 = ( uVar32 ^ uVar32 >> 0xb ) * 0x41;
   uVar32 = uVar32 >> 0x16 ^ uVar32;
   uVar42 = uVar32 & 0xffffffff;
   if ((int)uVar32 == 0) {
      uVar42 = 1;
   }

   uVar45 = 0;
   uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar32 = CONCAT44(0, uVar39);
   uVar31 = (uint)uVar42;
   lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar42 * lVar3;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar32;
   lVar38 = SUB168(auVar13 * auVar25, 8);
   lVar37 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar40 + lVar38 * 4 );
   iVar35 = SUB164(auVar13 * auVar25, 8);
   uVar43 = *puVar1;
   pGVar29 = pGVar34;
   while (uVar43 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar43 * lVar3;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar32;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar39 + iVar35 ) - SUB164(auVar14 * auVar26, 8)) * lVar3;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar32;
      uVar31 = SUB164(auVar15 * auVar27, 8);
      pGVar47 = pGVar29;
      if (uVar31 < uVar45) {
         *puVar1 = (uint)uVar42;
         uVar42 = (ulong)uVar43;
         puVar2 = (undefined8*)( lVar37 + lVar38 * 8 );
         pGVar47 = (GDScriptFunction*)*puVar2;
         *puVar2 = pGVar29;
         uVar45 = uVar31;
      }

      uVar31 = (uint)uVar42;
      uVar45 = uVar45 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar32;
      lVar38 = SUB168(auVar16 * auVar28, 8);
      puVar1 = (uint*)( lVar40 + lVar38 * 4 );
      iVar35 = SUB164(auVar16 * auVar28, 8);
      pGVar29 = pGVar47;
      uVar43 = *puVar1;
   }
;
   *(GDScriptFunction**)( lVar37 + lVar38 * 8 ) = pGVar29;
   *puVar1 = uVar31;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011af01:*param_1 = pGVar34;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<GDScript*, HashMapHasherDefault, HashMapComparatorDefault<GDScript*> >::insert(GDScript*
   const&) */undefined1[16];HashSet<GDScript*,HashMapHasherDefault,HashMapComparatorDefault<GDScript*>>::insert(GDScript **param_1) {
   uint *puVar1;
   long lVar2;
   long lVar3;
   void *pvVar4;
   void *pvVar5;
   long lVar6;
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
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   int iVar35;
   long *in_RDX;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   uint uVar39;
   ulong uVar40;
   undefined4 uVar41;
   ulong uVar42;
   ulong uVar43;
   uint uVar44;
   undefined1 auVar45[16];
   ulong uStack_98;
   GDScript *local_88;
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   local_88 = (GDScript*)*in_RSI;
   if (local_88 == (GDScript*)0x0) {
      uVar33 = (ulong)uVar31 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static((ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      uVar32 = *(uint*)( in_RSI + 4 );
      lVar34 = *in_RDX;
      local_88 = (GDScript*)*in_RSI;
      if (local_88 != (GDScript*)0x0) goto LAB_0011b13f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RDX;
      LAB_0011b13f:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = lVar34 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar42 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar42 = 1;
         }

         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar42 * lVar3;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar43;
         lVar36 = SUB168(auVar7 * auVar19, 8);
         uVar39 = *(uint*)( in_RSI[3] + lVar36 * 4 );
         uVar33 = (ulong)uVar39;
         iVar35 = SUB164(auVar7 * auVar19, 8);
         if (uVar39 != 0) {
            uVar39 = 0;
            do {
               if ((int)uVar42 == (int)uVar33) {
                  uVar37 = *(uint*)( in_RSI[1] + lVar36 * 4 );
                  uStack_98 = (ulong)uVar37;
                  if (*(long*)( local_88 + uStack_98 * 8 ) == lVar34) goto LAB_0011b5e1;
               }

               uVar39 = uVar39 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar35 + 1) * lVar3;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar43;
               lVar36 = SUB168(auVar8 * auVar20, 8);
               uVar37 = *(uint*)( in_RSI[3] + lVar36 * 4 );
               uVar33 = (ulong)uVar37;
               iVar35 = SUB164(auVar8 * auVar20, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = uVar33 * lVar3,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ) + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar3,auVar22._8_8_ = 0,auVar22._0_8_ = uVar43,uVar39 <= SUB164(auVar10 * auVar22, 8) );
         }

      }

   }

   if ((float)uVar31 * __LC11 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         local_88 = (GDScript*)*in_RSI;
         goto LAB_0011b5e1;
      }

      uVar33 = ( ulong )(uVar32 + 1);
      if (uVar32 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar4 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar31 * 4;
      pvVar5 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar31 * 8, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar31 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         lVar3 = in_RSI[2];
         lVar36 = in_RSI[3];
         local_70 = 0;
         do {
            uVar39 = 0;
            uVar43 = local_70 & 0xffffffff;
            uVar41 = (undefined4)local_70;
            uVar31 = *(uint*)( (long)pvVar4 + ( ulong ) * (uint*)( (long)pvVar5 + local_70 * 4 ) * 4 );
            uVar33 = (ulong)uVar31;
            uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar32);
            lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar33 * lVar6;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar38;
            lVar2 = SUB168(auVar11 * auVar23, 8) * 4;
            iVar35 = SUB164(auVar11 * auVar23, 8);
            puVar1 = (uint*)( lVar36 + lVar2 );
            uVar44 = *puVar1;
            uVar42 = local_70;
            while (uVar44 != 0) {
               auVar12._8_8_ = 0;
               auVar12._0_8_ = (ulong)uVar44 * lVar6;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar38;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(( uVar32 + iVar35 ) - SUB164(auVar12 * auVar24, 8)) * lVar6;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar38;
               uVar31 = SUB164(auVar13 * auVar25, 8);
               if (uVar31 < uVar39) {
                  *(int*)( lVar3 + uVar43 * 4 ) = iVar35;
                  uVar44 = *puVar1;
                  *puVar1 = (uint)uVar33;
                  uVar39 = *(uint*)( lVar2 + lVar34 );
                  uVar33 = (ulong)uVar44;
                  *(uint*)( lVar2 + lVar34 ) = (uint)uVar43;
                  uVar43 = (ulong)uVar39;
                  uVar39 = uVar31;
               }

               uVar41 = (undefined4)uVar43;
               uVar31 = (uint)uVar33;
               uVar39 = uVar39 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(iVar35 + 1) * lVar6;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar38;
               lVar2 = SUB168(auVar14 * auVar26, 8) * 4;
               iVar35 = SUB164(auVar14 * auVar26, 8);
               puVar1 = (uint*)( lVar36 + lVar2 );
               uVar42 = uVar43;
               uVar44 = *puVar1;
            }
;
            *puVar1 = uVar31;
            *(int*)( lVar3 + uVar42 * 4 ) = iVar35;
            local_70 = local_70 + 1;
            *(undefined4*)( lVar34 + lVar2 ) = uVar41;
         }
 while ( (uint)local_70 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar4, false);
      Memory::free_static(pvVar5, false);
      uVar32 = *(uint*)( in_RSI + 4 );
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_88 = (GDScript*)*in_RSI;
      lVar34 = *in_RDX;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   *(long*)( local_88 + uVar42 * 8 ) = lVar34;
   uVar33 = lVar34 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar43 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar43 = 1;
   }

   uVar37 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   uVar40 = CONCAT44(0, uVar31);
   uVar39 = (uint)uVar43;
   lVar36 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar34 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar2 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar34 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar36;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar34 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar34 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar36;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar34 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar34 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar2 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar34 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0011b5e1:*(uint*)( (long)param_1 + 0xc ) = uVar37;
   *param_1 = local_88;
   *(uint*)( param_1 + 1 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<StringName, HashMapHasherDefault, HashMapComparatorDefault<StringName>
   >::insert(StringName const&) */StringName *HashSet<StringName,HashMapHasherDefault,HashMapComparatorDefault<StringName>>::insert(StringName *param_1) {
   void *pvVar1;
   void *pvVar2;
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
   uint uVar27;
   uint uVar28;
   ulong uVar29;
   long lVar30;
   long lVar31;
   long lVar32;
   int iVar33;
   StringName *in_RDX;
   long lVar34;
   ulong uVar35;
   long lVar36;
   long *in_RSI;
   uint uVar37;
   ulong uVar38;
   undefined4 uVar39;
   uint uVar40;
   ulong uVar41;
   uint uVar42;
   uint *puVar43;
   int iVar44;
   uint local_88;
   long local_68;
   uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (*in_RSI == 0) {
      uVar29 = (ulong)uVar27 * 4;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[3] = lVar30;
      lVar30 = Memory::alloc_static((ulong)uVar27 * 8, false);
      *in_RSI = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[2] = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[1] = lVar30;
      if (uVar27 != 0) {
         memset((void*)in_RSI[3], 0, uVar29);
      }

      iVar44 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_0011b74c;
   }
 else {
      iVar44 = *(int*)( (long)in_RSI + 0x24 );
      LAB_0011b74c:if (iVar44 != 0) {
         uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
         uVar29 = CONCAT44(0, uVar40);
         lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         if (*(long*)in_RDX == 0) {
            uVar28 = StringName::get_empty_hash();
            iVar44 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            uVar28 = *(uint*)( *(long*)in_RDX + 0x20 );
         }

         if (uVar28 == 0) {
            uVar28 = 1;
         }

         uVar37 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = (ulong)uVar28 * lVar30;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar29;
         lVar34 = SUB168(auVar3 * auVar15, 8);
         iVar33 = SUB164(auVar3 * auVar15, 8);
         uVar42 = *(uint*)( in_RSI[3] + lVar34 * 4 );
         if (uVar42 != 0) {
            do {
               if (uVar28 == uVar42) {
                  lVar36 = *in_RSI;
                  uVar42 = *(uint*)( in_RSI[1] + lVar34 * 4 );
                  if (*(long*)( lVar36 + (ulong)uVar42 * 8 ) == *(long*)in_RDX) goto LAB_0011bb98;
               }

               uVar37 = uVar37 + 1;
               auVar4._8_8_ = 0;
               auVar4._0_8_ = ( ulong )(iVar33 + 1) * lVar30;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = uVar29;
               lVar34 = SUB168(auVar4 * auVar16, 8);
               uVar42 = *(uint*)( in_RSI[3] + lVar34 * 4 );
               iVar33 = SUB164(auVar4 * auVar16, 8);
            }
 while ( ( uVar42 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar42 * lVar30,auVar17._8_8_ = 0,auVar17._0_8_ = uVar29,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar40 + iVar33 ) - SUB164(auVar5 * auVar17, 8)) * lVar30,auVar18._8_8_ = 0,auVar18._0_8_ = uVar29,uVar37 <= SUB164(auVar6 * auVar18, 8) );
         }

      }

   }

   if ((float)( iVar44 + 1 ) <= (float)uVar27 * __LC11) {
      lVar30 = *(long*)in_RDX;
      if (lVar30 != 0) goto LAB_0011ba75;
      LAB_0011bbd6:uVar27 = StringName::get_empty_hash();
   }
 else {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         uVar42 = 0xffffffff;
         iVar44 = *(int*)( (long)in_RSI + 0x24 );
         lVar36 = *in_RSI;
         goto LAB_0011bb98;
      }

      uVar27 = (int)in_RSI[4] + 1;
      uVar29 = (ulong)uVar27;
      if (uVar27 < 2) {
         uVar29 = 2;
      }

      uVar27 = *(uint*)( hash_table_size_primes + uVar29 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar29;
      pvVar1 = (void*)in_RSI[3];
      uVar29 = (ulong)uVar27 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[3] = lVar30;
      lVar30 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar27 * 8, false);
      *in_RSI = lVar30;
      lVar30 = Memory::alloc_static(uVar29, false);
      in_RSI[2] = lVar30;
      lVar30 = Memory::realloc_static((void*)in_RSI[1], uVar29, false);
      in_RSI[1] = lVar30;
      if (uVar27 != 0) {
         memset((void*)in_RSI[3], 0, uVar29);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar29 = 0;
         lVar34 = in_RSI[3];
         lVar36 = in_RSI[2];
         do {
            uVar41 = uVar29 & 0xffffffff;
            uVar39 = (undefined4)uVar29;
            uVar42 = 0;
            uVar27 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar29 * 4 ) * 4 );
            uVar35 = (ulong)uVar27;
            uVar40 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar38 = CONCAT44(0, uVar40);
            lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar35 * lVar31;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar38;
            lVar32 = SUB168(auVar7 * auVar19, 8) * 4;
            iVar44 = SUB164(auVar7 * auVar19, 8);
            puVar43 = (uint*)( lVar34 + lVar32 );
            uVar28 = *puVar43;
            if (uVar28 == 0) {
               lVar31 = uVar29 * 4;
            }
 else {
               do {
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = (ulong)uVar28 * lVar31;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar38;
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = ( ulong )(( uVar40 + iVar44 ) - SUB164(auVar8 * auVar20, 8)) * lVar31;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar38;
                  local_88 = SUB164(auVar9 * auVar21, 8);
                  if (local_88 < uVar42) {
                     *(int*)( lVar36 + uVar41 * 4 ) = iVar44;
                     uVar27 = *puVar43;
                     *puVar43 = (uint)uVar35;
                     uVar28 = *(uint*)( lVar32 + lVar30 );
                     uVar35 = (ulong)uVar27;
                     *(uint*)( lVar32 + lVar30 ) = (uint)uVar41;
                     uVar41 = (ulong)uVar28;
                     uVar42 = local_88;
                  }

                  uVar39 = (undefined4)uVar41;
                  uVar27 = (uint)uVar35;
                  uVar42 = uVar42 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(iVar44 + 1) * lVar31;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar38;
                  lVar32 = SUB168(auVar10 * auVar22, 8) * 4;
                  iVar44 = SUB164(auVar10 * auVar22, 8);
                  puVar43 = (uint*)( lVar34 + lVar32 );
                  uVar28 = *puVar43;
               }
 while ( uVar28 != 0 );
               lVar31 = uVar41 << 2;
            }

            *puVar43 = uVar27;
            uVar29 = uVar29 + 1;
            *(int*)( lVar36 + lVar31 ) = iVar44;
            *(undefined4*)( lVar30 + lVar32 ) = uVar39;
         }
 while ( (uint)uVar29 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
      lVar30 = *(long*)in_RDX;
      if (lVar30 == 0) goto LAB_0011bbd6;
      LAB_0011ba75:uVar27 = *(uint*)( lVar30 + 0x20 );
   }

   if (uVar27 == 0) {
      uVar27 = 1;
   }

   uVar29 = (ulong)uVar27;
   StringName::StringName((StringName*)( *in_RSI + ( ulong ) * (uint*)( (long)in_RSI + 0x24 ) * 8 ), in_RDX);
   uVar40 = *(uint*)( (long)in_RSI + 0x24 );
   lVar34 = in_RSI[3];
   uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar35 = CONCAT44(0, uVar28);
   lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar11._8_8_ = 0;
   auVar11._0_8_ = uVar29 * lVar36;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar35;
   lVar30 = SUB168(auVar11 * auVar23, 8) * 4;
   iVar44 = SUB164(auVar11 * auVar23, 8);
   puVar43 = (uint*)( lVar34 + lVar30 );
   uVar42 = *puVar43;
   if (uVar42 == 0) {
      local_68 = in_RSI[2];
      lVar32 = in_RSI[1];
   }
 else {
      uVar37 = 0;
      local_68 = in_RSI[2];
      lVar32 = in_RSI[1];
      do {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar42 * lVar36;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar35;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(( uVar28 + iVar44 ) - SUB164(auVar12 * auVar24, 8)) * lVar36;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar35;
         local_88 = SUB164(auVar13 * auVar25, 8);
         if (local_88 < uVar37) {
            *(int*)( local_68 + (ulong)uVar40 * 4 ) = iVar44;
            uVar27 = *puVar43;
            *puVar43 = (uint)uVar29;
            uVar42 = *(uint*)( lVar30 + lVar32 );
            uVar29 = (ulong)uVar27;
            *(uint*)( lVar30 + lVar32 ) = uVar40;
            uVar40 = uVar42;
            uVar37 = local_88;
         }

         uVar27 = (uint)uVar29;
         uVar37 = uVar37 + 1;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(iVar44 + 1) * lVar36;
         auVar26._8_8_ = 0;
         auVar26._0_8_ = uVar35;
         lVar30 = SUB168(auVar14 * auVar26, 8) * 4;
         iVar44 = SUB164(auVar14 * auVar26, 8);
         puVar43 = (uint*)( lVar34 + lVar30 );
         uVar42 = *puVar43;
      }
 while ( uVar42 != 0 );
   }

   *puVar43 = uVar27;
   *(int*)( local_68 + (ulong)uVar40 * 4 ) = iVar44;
   *(uint*)( lVar32 + lVar30 ) = uVar40;
   uVar42 = *(uint*)( (long)in_RSI + 0x24 );
   lVar36 = *in_RSI;
   iVar44 = uVar42 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar44;
   LAB_0011bb98:*(uint*)( param_1 + 0xc ) = uVar42;
   *(long*)param_1 = lVar36;
   *(int*)( param_1 + 8 ) = iVar44;
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<GDScriptFunction*, GDScriptFunction*, HashMapHasherDefault,
   HashMapComparatorDefault<GDScriptFunction*>,
   DefaultTypedAllocator<HashMapElement<GDScriptFunction*, GDScriptFunction*> >
   >::insert(GDScriptFunction* const&, GDScriptFunction* const&, bool) */void HashMap<GDScriptFunction*,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<GDScriptFunction*>,DefaultTypedAllocator<HashMapElement<GDScriptFunction*,GDScriptFunction*>>>::insert(GDScriptFunction **param_1, GDScriptFunction **param_2, bool param_3) {
   undefined8 uVar1;
   GDScriptFunction *pGVar2;
   GDScriptFunction *pGVar3;
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
   GDScriptFunction *pGVar28;
   uint uVar29;
   uint uVar30;
   ulong uVar31;
   GDScriptFunction *pGVar32;
   GDScriptFunction *pGVar33;
   undefined8 *in_RCX;
   int iVar34;
   undefined7 in_register_00000011;
   long *plVar35;
   long lVar36;
   long lVar37;
   uint uVar38;
   long lVar39;
   undefined8 uVar40;
   ulong uVar41;
   uint uVar42;
   char in_R8B;
   uint uVar43;
   uint uVar44;
   ulong uVar45;
   GDScriptFunction *pGVar46;
   GDScriptFunction *local_80;
   plVar35 = (long*)CONCAT71(in_register_00000011, param_3);
   uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   local_80 = param_2[1];
   if (local_80 == (GDScriptFunction*)0x0) {
      uVar45 = (ulong)uVar38;
      uVar31 = uVar45 * 4;
      uVar41 = uVar45 * 8;
      pGVar33 = (GDScriptFunction*)Memory::alloc_static(uVar31, false);
      param_2[2] = pGVar33;
      local_80 = (GDScriptFunction*)Memory::alloc_static(uVar41, false);
      param_2[1] = local_80;
      if (uVar38 != 0) {
         pGVar33 = param_2[2];
         if (( pGVar33 < local_80 + uVar41 ) && ( local_80 < pGVar33 + uVar31 )) {
            uVar31 = 0;
            do {
               *(undefined4*)( pGVar33 + uVar31 * 4 ) = 0;
               *(undefined8*)( local_80 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar45 != uVar31 );
            goto LAB_0011bd4b;
         }

         memset(pGVar33, 0, uVar31);
         memset(local_80, 0, uVar41);
         iVar34 = *(int*)( (long)param_2 + 0x2c );
         lVar39 = *plVar35;
         goto LAB_0011bd57;
      }

      iVar34 = *(int*)( (long)param_2 + 0x2c );
      lVar39 = *plVar35;
      if (local_80 != (GDScriptFunction*)0x0) goto LAB_0011bd57;
   }
 else {
      LAB_0011bd4b:iVar34 = *(int*)( (long)param_2 + 0x2c );
      lVar39 = *plVar35;
      LAB_0011bd57:if (iVar34 != 0) {
         uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 ));
         lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
         uVar31 = lVar39 * 0x3ffff - 1;
         uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;
         uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;
         uVar31 = uVar31 >> 0x16 ^ uVar31;
         uVar45 = uVar31 & 0xffffffff;
         if ((int)uVar31 == 0) {
            uVar45 = 1;
         }

         uVar44 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar45 * lVar37;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar41;
         lVar36 = SUB168(auVar4 * auVar16, 8);
         uVar42 = *(uint*)( param_2[2] + lVar36 * 4 );
         uVar30 = SUB164(auVar4 * auVar16, 8);
         if (uVar42 != 0) {
            do {
               if (( (uint)uVar45 == uVar42 ) && ( *(long*)( *(long*)( local_80 + lVar36 * 8 ) + 0x10 ) == lVar39 )) {
                  pGVar33 = *(GDScriptFunction**)( local_80 + (ulong)uVar30 * 8 );
                  *(undefined8*)( pGVar33 + 0x18 ) = *in_RCX;
                  goto LAB_0011c201;
               }

               uVar44 = uVar44 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar30 + 1) * lVar37;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar41;
               lVar36 = SUB168(auVar5 * auVar17, 8);
               uVar42 = *(uint*)( param_2[2] + lVar36 * 4 );
               uVar30 = SUB164(auVar5 * auVar17, 8);
            }
 while ( ( uVar42 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar42 * lVar37,auVar18._8_8_ = 0,auVar18._0_8_ = uVar41,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 ) + uVar30 ) - SUB164(auVar6 * auVar18, 8)) * lVar37,auVar19._8_8_ = 0,auVar19._0_8_ = uVar41,uVar44 <= SUB164(auVar7 * auVar19, 8) );
         }

      }

   }

   if ((float)uVar38 * __LC11 < (float)( iVar34 + 1 )) {
      uVar38 = *(uint*)( param_2 + 5 );
      if (uVar38 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pGVar33 = (GDScriptFunction*)0x0;
         goto LAB_0011c201;
      }

      uVar31 = ( ulong )(uVar38 + 1);
      *(undefined4*)( (long)param_2 + 0x2c ) = 0;
      uVar42 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
      if (uVar38 + 1 < 2) {
         uVar31 = 2;
      }

      uVar38 = *(uint*)( hash_table_size_primes + uVar31 * 4 );
      uVar45 = (ulong)uVar38;
      *(int*)( param_2 + 5 ) = (int)uVar31;
      pGVar33 = param_2[2];
      uVar31 = uVar45 * 4;
      uVar41 = uVar45 * 8;
      pGVar32 = (GDScriptFunction*)Memory::alloc_static(uVar31, false);
      param_2[2] = pGVar32;
      pGVar32 = (GDScriptFunction*)Memory::alloc_static(uVar41, false);
      param_2[1] = pGVar32;
      if (uVar38 != 0) {
         pGVar2 = param_2[2];
         if (( pGVar2 < pGVar32 + uVar41 ) && ( pGVar32 < pGVar2 + uVar31 )) {
            uVar31 = 0;
            do {
               *(undefined4*)( pGVar2 + uVar31 * 4 ) = 0;
               *(undefined8*)( pGVar32 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar45 != uVar31 );
         }
 else {
            memset(pGVar2, 0, uVar31);
            memset(pGVar32, 0, uVar41);
         }

      }

      if (uVar42 != 0) {
         uVar31 = 0;
         do {
            uVar38 = *(uint*)( pGVar33 + uVar31 * 4 );
            if (uVar38 != 0) {
               pGVar3 = param_2[2];
               uVar43 = 0;
               uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
               uVar41 = CONCAT44(0, uVar30);
               lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar38 * lVar39;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar41;
               lVar37 = SUB168(auVar8 * auVar20, 8);
               pGVar2 = pGVar3 + lVar37 * 4;
               iVar34 = SUB164(auVar8 * auVar20, 8);
               uVar44 = *(uint*)pGVar2;
               uVar1 = *(undefined8*)( local_80 + uVar31 * 8 );
               while (uVar44 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar44 * lVar39;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar41;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar30 + iVar34 ) - SUB164(auVar9 * auVar21, 8)) * lVar39;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar41;
                  uVar29 = SUB164(auVar10 * auVar22, 8);
                  uVar40 = uVar1;
                  if (uVar29 < uVar43) {
                     *(uint*)pGVar2 = uVar38;
                     uVar40 = *(undefined8*)( pGVar32 + lVar37 * 8 );
                     *(undefined8*)( pGVar32 + lVar37 * 8 ) = uVar1;
                     uVar38 = uVar44;
                     uVar43 = uVar29;
                  }

                  uVar43 = uVar43 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar34 + 1) * lVar39;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar41;
                  lVar37 = SUB168(auVar11 * auVar23, 8);
                  pGVar2 = pGVar3 + lVar37 * 4;
                  iVar34 = SUB164(auVar11 * auVar23, 8);
                  uVar1 = uVar40;
                  uVar44 = *(uint*)pGVar2;
               }
;
               *(undefined8*)( pGVar32 + lVar37 * 8 ) = uVar1;
               *(uint*)pGVar2 = uVar38;
               *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
            }

            uVar31 = uVar31 + 1;
         }
 while ( uVar31 != uVar42 );
         Memory::free_static(local_80, false);
         Memory::free_static(pGVar33, false);
      }

   }

   lVar39 = *plVar35;
   uVar1 = *in_RCX;
   pGVar33 = (GDScriptFunction*)operator_new(0x20, "");
   *(undefined1(*) [16])pGVar33 = (undefined1[16])0x0;
   *(long*)( pGVar33 + 0x10 ) = lVar39;
   *(undefined8*)( pGVar33 + 0x18 ) = uVar1;
   pGVar32 = param_2[4];
   if (pGVar32 == (GDScriptFunction*)0x0) {
      param_2[3] = pGVar33;
      param_2[4] = pGVar33;
   }
 else if (in_R8B == '\0') {
      *(GDScriptFunction**)pGVar32 = pGVar33;
      *(GDScriptFunction**)( pGVar33 + 8 ) = pGVar32;
      param_2[4] = pGVar33;
   }
 else {
      pGVar32 = param_2[3];
      *(GDScriptFunction**)( pGVar32 + 8 ) = pGVar33;
      *(GDScriptFunction**)pGVar33 = pGVar32;
      param_2[3] = pGVar33;
   }

   pGVar32 = param_2[2];
   uVar31 = *plVar35 * 0x3ffff - 1;
   uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;
   uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;
   uVar31 = uVar31 >> 0x16 ^ uVar31;
   uVar41 = uVar31 & 0xffffffff;
   if ((int)uVar31 == 0) {
      uVar41 = 1;
   }

   uVar44 = 0;
   uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   uVar31 = CONCAT44(0, uVar38);
   uVar30 = (uint)uVar41;
   lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar41 * lVar39;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar31;
   lVar37 = SUB168(auVar12 * auVar24, 8);
   pGVar3 = param_2[1];
   pGVar2 = pGVar32 + lVar37 * 4;
   iVar34 = SUB164(auVar12 * auVar24, 8);
   uVar42 = *(uint*)pGVar2;
   pGVar28 = pGVar33;
   while (uVar42 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar42 * lVar39;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar31;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar38 + iVar34 ) - SUB164(auVar13 * auVar25, 8)) * lVar39;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar31;
      uVar30 = SUB164(auVar14 * auVar26, 8);
      pGVar46 = pGVar28;
      if (uVar30 < uVar44) {
         *(uint*)pGVar2 = (uint)uVar41;
         uVar41 = (ulong)uVar42;
         pGVar2 = pGVar3 + lVar37 * 8;
         pGVar46 = *(GDScriptFunction**)pGVar2;
         *(GDScriptFunction**)pGVar2 = pGVar28;
         uVar44 = uVar30;
      }

      uVar30 = (uint)uVar41;
      uVar44 = uVar44 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar34 + 1) * lVar39;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar31;
      lVar37 = SUB168(auVar15 * auVar27, 8);
      pGVar2 = pGVar32 + lVar37 * 4;
      iVar34 = SUB164(auVar15 * auVar27, 8);
      pGVar28 = pGVar46;
      uVar42 = *(uint*)pGVar2;
   }
;
   *(GDScriptFunction**)( pGVar3 + lVar37 * 8 ) = pGVar28;
   *(uint*)pGVar2 = uVar30;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_0011c201:*param_1 = pGVar33;
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
/* WARNING: Removing unreachable block (ram,0x0011c558) *//* WARNING: Removing unreachable block (ram,0x0011c6ed) *//* WARNING: Removing unreachable block (ram,0x0011c6f9) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0011c890) *//* WARNING: Removing unreachable block (ram,0x0011ca25) *//* WARNING: Removing unreachable block (ram,0x0011ca31) *//* String vformat<String, char const*>(String const&, String const, char const* const) */undefined8 *vformat<String,char_const*>(undefined8 *param_1, bool *param_2, String *param_3, char *param_4) {
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
/* WARNING: Removing unreachable block (ram,0x0011cbb0) *//* WARNING: Removing unreachable block (ram,0x0011cd45) *//* WARNING: Removing unreachable block (ram,0x0011cd51) *//* String vformat<String, String>(String const&, String const, String const) */undefined8 *vformat<String,String>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4) {
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
/* WARNING: Removing unreachable block (ram,0x0011cea8) *//* WARNING: Removing unreachable block (ram,0x0011cff8) *//* WARNING: Removing unreachable block (ram,0x0011d0b0) *//* WARNING: Removing unreachable block (ram,0x0011d004) *//* WARNING: Removing unreachable block (ram,0x0011d050) *//* WARNING: Removing unreachable block (ram,0x0011d05c) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0011d240) *//* WARNING: Removing unreachable block (ram,0x0011d3d5) *//* WARNING: Removing unreachable block (ram,0x0011d3e1) *//* String vformat<String, String, char const*>(String const&, String const, String const, char
   const* const) */undefined8 *vformat<String,String,char_const*>(undefined8 *param_1, bool *param_2, String *param_3, String *param_4, char *param_5) {
   Variant *pVVar1;
   Variant *pVVar2;
   int iVar3;
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
   iVar4 = 0;
   Variant::Variant(local_90, param_4);
   Variant::Variant(local_78, param_5);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_f8);
   iVar3 = (int)local_f8;
   Array::resize(iVar3);
   pVVar2 = local_a8;
   do {
      iVar4 = iVar4 + 1;
      pVVar1 = (Variant*)Array::operator [](iVar3);
      Variant::operator =(pVVar1, pVVar2);
      pVVar2 = pVVar2 + 0x18;
   }
 while ( iVar4 != 3 );
   String::sprintf((Array*)local_f0, param_2);
   *param_1 = local_f0[0];
   pVVar2 = local_48;
   Array::~Array(local_f8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }

   }
 while ( pVVar2 != local_a8 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Removing unreachable block (ram,0x0011d560) *//* WARNING: Removing unreachable block (ram,0x0011d6f5) *//* WARNING: Removing unreachable block (ram,0x0011d701) *//* String vformat<unsigned int, String>(String const&, unsigned int const, String const) */undefined8 *vformat<unsigned_int,String>(undefined8 *param_1, bool *param_2, uint param_3, String *param_4) {
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
/* Ref<Resource>::unref() */void Ref<Resource>::unref(Ref<Resource> *this) {
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
/* HashMap<StringName, GDScript::MemberInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScript::MemberInfo> > >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>::_lookup_pos(HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>> *this, StringName *param_1, uint *param_2) {
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
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
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
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashMap<StringName, int, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, int> > >::_lookup_pos(StringName const&,
   unsigned int&) const */undefined8 HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>>::_lookup_pos(HashMap<StringName,int,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,int>>> *this, StringName *param_1, uint *param_2) {
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
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
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
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashMap<StringName, Variant, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Variant> > >::_lookup_pos(StringName const&,
   unsigned int&) const */undefined8 HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>::_lookup_pos(HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>> *this, StringName *param_1, uint *param_2) {
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
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
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
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* HashMap<StringName, GDScriptCodeGenerator::Address, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptCodeGenerator::Address> > >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::_lookup_pos(HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>> *this, StringName *param_1, uint *param_2) {
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
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
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
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* Ref<GDScript>::unref() */void Ref<GDScript>::unref(Ref<GDScript> *this) {
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
/* Ref<GDScript>::TEMPNAMEPLACEHOLDERVALUE(GDScript*) */void Ref<GDScript>::operator =(Ref<GDScript> *this, GDScript *param_1) {
   Object *pOVar1;
   char cVar2;
   pOVar1 = *(Object**)this;
   if (param_1 != (GDScript*)pOVar1) {
      *(GDScript**)this = param_1;
      if (param_1 != (GDScript*)0x0) {
         cVar2 = RefCounted::init_ref();
         if (cVar2 == '\0') {
            *(undefined8*)this = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar2 = RefCounted::unreference();
         if (cVar2 != '\0') {
            cVar2 = predelete_handler(pOVar1);
            if (cVar2 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
               return;
            }

         }

      }

   }

   return;
}
/* HashMap<StringName, ProjectSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ProjectSettings::AutoloadInfo> > >::_lookup_pos(StringName const&, unsigned int&) const */undefined8 HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>::_lookup_pos(HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>> *this, StringName *param_1, uint *param_2) {
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
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
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
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
      uVar12 = SUB164(auVar3 * auVar7, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               *param_2 = uVar12;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            lVar13 = SUB168(auVar4 * auVar8, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
            uVar12 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
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
/* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   long *plVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
   long *plVar5;
   if (*(long*)( this + 0x68 ) != 0) {
      LOCK();
      plVar5 = (long*)( *(long*)( this + 0x68 ) + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar4 = *(long*)( this + 0x68 );
         *(undefined8*)( this + 0x68 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   CowData<Variant>::_unref((CowData<Variant>*)( this + 0x50 ));
   plVar5 = *(long**)( this + 0x40 );
   if (plVar5 != (long*)0x0) {
      do {
         pvVar2 = (void*)*plVar5;
         if (pvVar2 == (void*)0x0) {
            if ((int)plVar5[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0011e016;
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

         plVar5 = *(long**)( this + 0x40 );
      }
 while ( (int)plVar5[2] != 0 );
      Memory::free_static(plVar5, false);
   }

   LAB_0011e016:if (*(long*)( this + 0x28 ) != 0) {
      LOCK();
      plVar5 = (long*)( *(long*)( this + 0x28 ) + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar4 = *(long*)( this + 0x28 );
         *(undefined8*)( this + 0x28 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x10 ) != 0) {
      LOCK();
      plVar5 = (long*)( *(long*)( this + 0x10 ) + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar4 = *(long*)( this + 0x10 );
         *(undefined8*)( this + 0x10 ) = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
      }

   }

   if (*(long*)this != 0) {
      LOCK();
      plVar5 = (long*)( *(long*)this + -0x10 );
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         lVar4 = *(long*)this;
         *(undefined8*)this = 0;
         Memory::free_static((void*)( lVar4 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, MethodInfo, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, MethodInfo> > >::operator[](StringName const&)
    */CowData<char32_t> * __thiscallHashMap<StringName,MethodInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,MethodInfo>>>::operator [](HashMap<StringName,MethodInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,MethodInfo>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__slong *plVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined4 *puVar42undefined8 *puVar43undefined1(*pauVar44)[16];long lVar45void *pvVar46int iVar47long lVar48long lVar49long lVar50ulong uVar51undefined8 uVar52uint uVar53ulong uVar54uint uVar55uint uVar56undefined4 *puVar57undefined8 *puVar58long in_FS_OFFSETCowData *local_188MethodInfo *local_168CowData<char32_t> *local_160long local_138undefined8 local_130undefined1 local_128[16]undefined8 local_118long local_110undefined8 local_108undefined8 local_100undefined8 *local_f8long local_e8undefined8 local_e0long local_d0undefined1 local_c8[16]long local_b8long local_b0undefined4 local_a8long local_a0StringName local_98[8]undefined4 local_90long local_88undefined4 local_80undefined8 local_78undefined1(*local_70)[16];long local_60undefined4 local_58long local_48long local_40lVar45 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (( lVar45 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
   lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   if (*(long*)param_1 == 0) {
      uVar37 = StringName::get_empty_hash();
      lVar45 = *(long*)( this + 8 );
   }
 else {
      uVar37 = *(uint*)( *(long*)param_1 + 0x20 );
   }

   uVar40 = CONCAT44(0, uVar38);
   if (uVar37 == 0) {
      uVar37 = 1;
   }

   auVar5._8_8_ = 0;
   auVar5._0_8_ = (ulong)uVar37 * lVar49;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar40;
   lVar48 = SUB168(auVar5 * auVar21, 8);
   uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
   uVar53 = SUB164(auVar5 * auVar21, 8);
   if (uVar39 != 0) {
      uVar55 = 0;
      do {
         if (( uVar37 == uVar39 ) && ( *(long*)( *(long*)( lVar45 + lVar48 * 8 ) + 0x10 ) == *(long*)param_1 )) {
            local_160 = (CowData<char32_t>*)( *(long*)( lVar45 + (ulong)uVar53 * 8 ) + 0x18 );
            goto LAB_0011e2cc;
         }

         uVar55 = uVar55 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar40;
         lVar48 = SUB168(auVar6 * auVar22, 8);
         uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar48 * 4 );
         uVar53 = SUB164(auVar6 * auVar22, 8);
      }
 while ( ( uVar39 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar39 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar55 <= SUB164(auVar8 * auVar24, 8) );
   }

}
local_138 = 0;local_130 = 0;local_118 = 0;uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );local_110 = 0;local_108 = 6;local_100 = 1;local_f8 = (undefined8*)0x0;local_e8 = 0;local_e0 = 0;local_d0 = 0;local_128 = (undefined1[16])0x0;if (lVar45 == 0) {
   uVar51 = (ulong)uVar38;
   uVar40 = uVar51 * 4;
   uVar54 = uVar51 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar46 = (void*)Memory::alloc_static(uVar54, false);
   *(void**)( this + 8 ) = pvVar46;
   if (uVar38 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar46 + uVar54 ) ) && ( pvVar46 < (void*)( (long)pvVar3 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)pvVar46 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar51 != uVar40 );
      }
 else {
         memset(pvVar3, 0, uVar40);
         memset(pvVar46, 0, uVar54);
      }

      goto LAB_0011e38c;
   }

   iVar47 = *(int*)( this + 0x2c );
   if (pvVar46 == (void*)0x0) goto LAB_0011e496;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0011e398;
   LAB_0011e4bc:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_160 = (CowData<char32_t>*)0x18;
      goto LAB_0011ed09;
   }

   uVar40 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar37 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar40 = 2;
   }

   uVar38 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar51 = (ulong)uVar38;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar46 = *(void**)( this + 8 );
   uVar40 = uVar51 * 4;
   uVar54 = uVar51 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar54, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar54 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar51 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar54);
      }

   }

   if (uVar37 != 0) {
      uVar40 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar38 != 0) {
            lVar45 = *(long*)( this + 0x10 );
            uVar55 = 0;
            uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar54 = CONCAT44(0, uVar39);
            lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar13._8_8_ = 0;
            auVar13._0_8_ = (ulong)uVar38 * lVar49;
            auVar29._8_8_ = 0;
            auVar29._0_8_ = uVar54;
            lVar48 = SUB168(auVar13 * auVar29, 8);
            puVar1 = (uint*)( lVar45 + lVar48 * 4 );
            iVar47 = SUB164(auVar13 * auVar29, 8);
            uVar53 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar46 + uVar40 * 8 );
            while (uVar53 != 0) {
               auVar14._8_8_ = 0;
               auVar14._0_8_ = (ulong)uVar53 * lVar49;
               auVar30._8_8_ = 0;
               auVar30._0_8_ = uVar54;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = ( ulong )(( uVar39 + iVar47 ) - SUB164(auVar14 * auVar30, 8)) * lVar49;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar54;
               uVar56 = SUB164(auVar15 * auVar31, 8);
               uVar52 = uVar41;
               if (uVar56 < uVar55) {
                  *puVar1 = uVar38;
                  puVar43 = (undefined8*)( (long)__s_00 + lVar48 * 8 );
                  uVar52 = *puVar43;
                  *puVar43 = uVar41;
                  uVar38 = uVar53;
                  uVar55 = uVar56;
               }

               uVar55 = uVar55 + 1;
               auVar16._8_8_ = 0;
               auVar16._0_8_ = ( ulong )(iVar47 + 1) * lVar49;
               auVar32._8_8_ = 0;
               auVar32._0_8_ = uVar54;
               lVar48 = SUB168(auVar16 * auVar32, 8);
               puVar1 = (uint*)( lVar45 + lVar48 * 4 );
               iVar47 = SUB164(auVar16 * auVar32, 8);
               uVar41 = uVar52;
               uVar53 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar48 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar37 != uVar40 );
      Memory::free_static(pvVar46, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   LAB_0011e38c:iVar47 = *(int*)( this + 0x2c );
   if (iVar47 != 0) {
      LAB_0011e398:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar40 = CONCAT44(0, uVar37);
      lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
      }
 else {
         uVar39 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar39 == 0) {
         uVar39 = 1;
      }

      uVar56 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar39 * lVar45;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar40;
      lVar49 = SUB168(auVar9 * auVar25, 8);
      uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
      uVar55 = SUB164(auVar9 * auVar25, 8);
      if (uVar53 != 0) {
         do {
            if (( uVar53 == uVar39 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar49 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               MethodInfo::operator =((MethodInfo*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar55 * 8 ) + 0x18 ), (MethodInfo*)&local_138);
               local_160 = (CowData<char32_t>*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar55 * 8 ) + 0x18 );
               goto LAB_0011ed09;
            }

            uVar56 = uVar56 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(uVar55 + 1) * lVar45;
            auVar26._8_8_ = 0;
            auVar26._0_8_ = uVar40;
            lVar49 = SUB168(auVar10 * auVar26, 8);
            uVar53 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
            uVar55 = SUB164(auVar10 * auVar26, 8);
         }
 while ( ( uVar53 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar53 * lVar45,auVar27._8_8_ = 0,auVar27._0_8_ = uVar40,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar37 + uVar55 ) - SUB164(auVar11 * auVar27, 8)) * lVar45,auVar28._8_8_ = 0,auVar28._0_8_ = uVar40,uVar56 <= SUB164(auVar12 * auVar28, 8) );
      }

      iVar47 = *(int*)( this + 0x2c );
   }

   LAB_0011e496:if ((float)uVar38 * __LC11 < (float)( iVar47 + 1 )) goto LAB_0011e4bc;
}
local_c8 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_b8, param_1);local_b0 = 0;if (local_138 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_b0, (CowData*)&local_138);
}
local_188 = (CowData*)&local_b0;local_a0 = 0;local_a8 = (undefined4)local_130;if (local_128._0_8_ != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)local_128);
}
StringName::StringName(local_98, (StringName*)( local_128 + 8 ));local_88 = 0;local_90 = (undefined4)local_118;if (local_110 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, (CowData*)&local_110);
}
local_70 = (undefined1(*) [16])0x0;local_80 = (undefined4)local_108;local_78 = local_100;if (( local_f8 != (undefined8*)0x0 ) && ( puVar57 = (undefined4*)*local_f8 ),puVar57 != (undefined4*)0x0) {
   local_70 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
   *(undefined4*)local_70[1] = 0;
   *local_70 = (undefined1[16])0x0;
   do {
      while (true) {
         puVar42 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar42 + 8 ) = 0;
         *(undefined1(*) [16])( puVar42 + 2 ) = (undefined1[16])0x0;
         lVar45 = *(long*)( puVar57 + 2 );
         *puVar42 = 0;
         puVar42[6] = 0;
         puVar42[10] = 6;
         *(undefined8*)( puVar42 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar42 + 0xc ) = (undefined1[16])0x0;
         *puVar42 = *puVar57;
         if (lVar45 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar42 + 2 ), (CowData*)( puVar57 + 2 ));
         }

         StringName::operator =((StringName*)( puVar42 + 4 ), (StringName*)( puVar57 + 4 ));
         puVar42[6] = puVar57[6];
         if (*(long*)( puVar42 + 8 ) != *(long*)( puVar57 + 8 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar42 + 8 ), (CowData*)( puVar57 + 8 ));
         }

         puVar42[10] = puVar57[10];
         lVar45 = *(long*)( *local_70 + 8 );
         *(undefined8*)( puVar42 + 0xc ) = 0;
         *(undefined1(**) [16])( puVar42 + 0x10 ) = local_70;
         *(long*)( puVar42 + 0xe ) = lVar45;
         if (lVar45 != 0) {
            *(undefined4**)( lVar45 + 0x30 ) = puVar42;
         }

         lVar45 = *(long*)*local_70;
         *(undefined4**)( *local_70 + 8 ) = puVar42;
         if (lVar45 != 0) break;
         puVar57 = *(undefined4**)( puVar57 + 0xc );
         *(int*)local_70[1] = *(int*)local_70[1] + 1;
         *(undefined4**)*local_70 = puVar42;
         if (puVar57 == (undefined4*)0x0) goto LAB_0011e901;
      }
;
      puVar57 = *(undefined4**)( puVar57 + 0xc );
      *(int*)local_70[1] = *(int*)local_70[1] + 1;
   }
 while ( puVar57 != (undefined4*)0x0 );
}
LAB_0011e901:local_60 = 0;if (local_e8 != 0) {
   CowData<Variant>::_ref((CowData<Variant>*)&local_60, (CowData*)&local_e8);
}
local_48 = 0;local_58 = (undefined4)local_e0;if (local_d0 != 0) {
   CowData<int>::_ref((CowData<int>*)&local_48, (CowData*)&local_d0);
}
puVar43 = (undefined8*)operator_new(0x88, "");*puVar43 = local_c8._0_8_;puVar43[1] = local_c8._8_8_;StringName::StringName((StringName*)( puVar43 + 2 ), (StringName*)&local_b8);local_160 = (CowData<char32_t>*)( puVar43 + 3 );puVar43[3] = 0;if (local_b0 != 0) {
   CowData<char32_t>::_ref(local_160, local_188);
}
puVar43[5] = 0;*(undefined4*)( puVar43 + 4 ) = local_a8;if (local_a0 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar43 + 5 ), (CowData*)&local_a0);
}
StringName::StringName((StringName*)( puVar43 + 6 ), local_98);puVar43[8] = 0;*(undefined4*)( puVar43 + 7 ) = local_90;if (local_88 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar43 + 8 ), (CowData*)&local_88);
}
puVar43[0xb] = 0;*(undefined4*)( puVar43 + 9 ) = local_80;puVar43[10] = local_78;if (( local_70 != (undefined1(*) [16])0x0 ) && ( puVar57 = *(undefined4**)*local_70 ),puVar57 != (undefined4*)0x0) {
   pauVar44 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
   puVar43[0xb] = pauVar44;
   *(undefined4*)pauVar44[1] = 0;
   *pauVar44 = (undefined1[16])0x0;
   do {
      while (true) {
         puVar42 = (undefined4*)operator_new(0x48, DefaultAllocator::alloc);
         *(undefined8*)( puVar42 + 8 ) = 0;
         *(undefined1(*) [16])( puVar42 + 2 ) = (undefined1[16])0x0;
         lVar45 = *(long*)( puVar57 + 2 );
         *puVar42 = 0;
         puVar42[6] = 0;
         puVar42[10] = 6;
         *(undefined8*)( puVar42 + 0x10 ) = 0;
         *(undefined1(*) [16])( puVar42 + 0xc ) = (undefined1[16])0x0;
         *puVar42 = *puVar57;
         if (lVar45 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar42 + 2 ), (CowData*)( puVar57 + 2 ));
         }

         StringName::operator =((StringName*)( puVar42 + 4 ), (StringName*)( puVar57 + 4 ));
         puVar42[6] = puVar57[6];
         if (*(long*)( puVar42 + 8 ) != *(long*)( puVar57 + 8 )) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar42 + 8 ), (CowData*)( puVar57 + 8 ));
         }

         puVar42[10] = puVar57[10];
         plVar4 = (long*)puVar43[0xb];
         lVar45 = plVar4[1];
         *(undefined8*)( puVar42 + 0xc ) = 0;
         *(long**)( puVar42 + 0x10 ) = plVar4;
         *(long*)( puVar42 + 0xe ) = lVar45;
         if (lVar45 != 0) {
            *(undefined4**)( lVar45 + 0x30 ) = puVar42;
         }

         plVar4[1] = (long)puVar42;
         if (*plVar4 != 0) break;
         puVar57 = *(undefined4**)( puVar57 + 0xc );
         *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
         *plVar4 = (long)puVar42;
         if (puVar57 == (undefined4*)0x0) goto LAB_0011eb82;
      }
;
      puVar57 = *(undefined4**)( puVar57 + 0xc );
      *(int*)( plVar4 + 2 ) = (int)plVar4[2] + 1;
   }
 while ( puVar57 != (undefined4*)0x0 );
}
LAB_0011eb82:puVar43[0xd] = 0;if (local_60 != 0) {
   CowData<Variant>::_ref((CowData<Variant>*)( puVar43 + 0xd ), (CowData*)&local_60);
}
puVar43[0x10] = 0;*(undefined4*)( puVar43 + 0xe ) = local_58;if (local_48 != 0) {
   CowData<int>::_ref((CowData<int>*)( puVar43 + 0x10 ), (CowData*)&local_48);
}
MethodInfo::~MethodInfo((MethodInfo*)local_188);if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
   StringName::unref();
}
puVar58 = *(undefined8**)( this + 0x20 );if (puVar58 == (undefined8*)0x0) {
   lVar45 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar43;
   *(undefined8**)( this + 0x20 ) = puVar43;
   if (lVar45 == 0) goto LAB_0011ed6c;
   LAB_0011ec2c:uVar38 = *(uint*)( lVar45 + 0x20 );
}
 else {
   *puVar58 = puVar43;
   puVar43[1] = puVar58;
   lVar45 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar43;
   if (lVar45 != 0) goto LAB_0011ec2c;
   LAB_0011ed6c:uVar38 = StringName::get_empty_hash();
}
lVar45 = *(long*)( this + 0x10 );if (uVar38 == 0) {
   uVar38 = 1;
}
uVar40 = (ulong)uVar38;uVar53 = 0;uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar54 = CONCAT44(0, uVar37);lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar17._8_8_ = 0;auVar17._0_8_ = uVar40 * lVar49;auVar33._8_8_ = 0;auVar33._0_8_ = uVar54;lVar50 = SUB168(auVar17 * auVar33, 8);lVar48 = *(long*)( this + 8 );puVar1 = (uint*)( lVar45 + lVar50 * 4 );iVar47 = SUB164(auVar17 * auVar33, 8);uVar39 = *puVar1;while (uVar39 != 0) {
   auVar18._8_8_ = 0;
   auVar18._0_8_ = (ulong)uVar39 * lVar49;
   auVar34._8_8_ = 0;
   auVar34._0_8_ = uVar54;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = ( ulong )(( iVar47 + uVar37 ) - SUB164(auVar18 * auVar34, 8)) * lVar49;
   auVar35._8_8_ = 0;
   auVar35._0_8_ = uVar54;
   uVar38 = SUB164(auVar19 * auVar35, 8);
   puVar58 = puVar43;
   if (uVar38 < uVar53) {
      *puVar1 = (uint)uVar40;
      uVar40 = (ulong)uVar39;
      puVar2 = (undefined8*)( lVar48 + lVar50 * 8 );
      puVar58 = (undefined8*)*puVar2;
      *puVar2 = puVar43;
      uVar53 = uVar38;
   }

   uVar38 = (uint)uVar40;
   uVar53 = uVar53 + 1;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = ( ulong )(iVar47 + 1) * lVar49;
   auVar36._8_8_ = 0;
   auVar36._0_8_ = uVar54;
   lVar50 = SUB168(auVar20 * auVar36, 8);
   puVar1 = (uint*)( lVar45 + lVar50 * 4 );
   iVar47 = SUB164(auVar20 * auVar36, 8);
   puVar43 = puVar58;
   uVar39 = *puVar1;
}
;*(undefined8**)( lVar48 + lVar50 * 8 ) = puVar43;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011ed09:local_168 = (MethodInfo*)&local_138;MethodInfo::~MethodInfo(local_168);LAB_0011e2cc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_160;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<Variant>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Variant>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Variant>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<Variant>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0011eee2(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<GDScriptDataType>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GDScriptDataType>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<GDScriptCodeGenerator::Address>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GDScriptCodeGenerator::Address>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<GDScriptCompiler::FunctionLambdaInfo>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<GDScriptCompiler::FunctionLambdaInfo>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Variant>::_realloc(long) */undefined8 CowData<Variant>::_realloc(CowData<Variant> *this, long param_1) {
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
/* Vector<Variant>::append_array(Vector<Variant>) */void Vector<Variant>::append_array(Vector<Variant> *this, long param_2) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   Variant *this_00;
   if (*(long*)( param_2 + 8 ) == 0) {
      return;
   }

   lVar1 = *(long*)( *(long*)( param_2 + 8 ) + -8 );
   if (lVar1 != 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar6 = 0;
         lVar5 = lVar1;
      }
 else {
         lVar6 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar5 = lVar1 + lVar6;
      }

      CowData<Variant>::resize<false>((CowData<Variant>*)( this + 8 ), lVar5);
      if (0 < lVar1) {
         lVar6 = lVar6 * 0x18;
         lVar5 = 0;
         do {
            lVar2 = *(long*)( param_2 + 8 );
            if (lVar2 == 0) {
               lVar4 = 0;
               LAB_0011f044:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            lVar4 = *(long*)( lVar2 + -8 );
            if (lVar4 <= lVar5) goto LAB_0011f044;
            lVar4 = lVar5 + 1;
            CowData<Variant>::_copy_on_write((CowData<Variant>*)( this + 8 ));
            this_00 = (Variant*)( *(long*)( this + 8 ) + lVar6 );
            lVar6 = lVar6 + 0x18;
            Variant::operator =(this_00, (Variant*)( lVar2 + lVar5 * 0x18 ));
            lVar5 = lVar4;
         }
 while ( lVar4 != lVar1 );
      }

   }

   return;
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
/* GDScriptDataType::~GDScriptDataType() */void GDScriptDataType::~GDScriptDataType(GDScriptDataType *this) {
   Object *pOVar1;
   char cVar2;
   if (*(long*)( this + 0x30 ) != 0) {
      cVar2 = RefCounted::unreference();
      if (cVar2 != '\0') {
         pOVar1 = *(Object**)( this + 0x30 );
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x20 ) != 0 )) {
      StringName::unref();
   }

   CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( this + 8 ));
   return;
}
/* GDScriptDataType::TEMPNAMEPLACEHOLDERVALUE(GDScriptDataType const&) */void GDScriptDataType::operator =(GDScriptDataType *this, GDScriptDataType *param_1) {
   Object *pOVar1;
   Object *pOVar2;
   char cVar3;
   *(undefined4*)( this + 0x10 ) = *(undefined4*)( param_1 + 0x10 );
   this[0x14] = param_1[0x14];
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   StringName::operator =((StringName*)( this + 0x20 ), (StringName*)( param_1 + 0x20 ));
   pOVar1 = *(Object**)( this + 0x30 );
   *(undefined8*)( this + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
   pOVar2 = *(Object**)( param_1 + 0x30 );
   if (pOVar2 != pOVar1) {
      *(Object**)( this + 0x30 ) = pOVar2;
      if (pOVar2 != (Object*)0x0) {
         cVar3 = RefCounted::reference();
         if (cVar3 == '\0') {
            *(undefined8*)( this + 0x30 ) = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar3 = RefCounted::unreference();
         if (cVar3 != '\0') {
            cVar3 = predelete_handler(pOVar1);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( this + 8 ), (CowData*)( param_1 + 8 ));
      return;
   }

   return;
}
/* GDScriptDataType::GDScriptDataType(GDScriptDataType const&) */void GDScriptDataType::GDScriptDataType(GDScriptDataType *this, GDScriptDataType *param_1) {
   GDScriptDataType GVar1;
   undefined4 uVar2;
   Object *pOVar3;
   Object *pOVar4;
   char cVar5;
   *(undefined1(*) [16])( this + 0x20 ) = (undefined1[16])0x0;
   uVar2 = *(undefined4*)( param_1 + 0x10 );
   *(undefined8*)( this + 8 ) = 0;
   *(undefined4*)( this + 0x10 ) = uVar2;
   GVar1 = param_1[0x14];
   *(undefined8*)( this + 0x30 ) = 0;
   this[0x14] = GVar1;
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   StringName::operator =((StringName*)( this + 0x20 ), (StringName*)( param_1 + 0x20 ));
   pOVar3 = *(Object**)( param_1 + 0x30 );
   pOVar4 = *(Object**)( this + 0x30 );
   *(undefined8*)( this + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
   if (pOVar3 != pOVar4) {
      *(Object**)( this + 0x30 ) = pOVar3;
      if (pOVar3 != (Object*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( this + 0x30 ) = 0;
         }

      }

      if (pOVar4 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar4);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

      }

   }

   if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( this + 8 ), (CowData*)( param_1 + 8 ));
      return;
   }

   return;
}
/* GDScriptCodeGenerator::Address::Address(GDScriptCodeGenerator::Address::AddressMode,
   GDScriptDataType const&) */void GDScriptCodeGenerator::Address::Address(Address *this, undefined4 param_2, long param_3) {
   Address AVar1;
   undefined4 uVar2;
   Object *pOVar3;
   Object *pOVar4;
   char cVar5;
   this[0x1c] = (Address)0x0;
   *(undefined4*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined4*)( this + 0x18 ) = 0;
   *(undefined8*)( this + 0x10 ) = 0;
   *(undefined8*)( this + 0x38 ) = 0;
   uVar2 = *(undefined4*)( param_3 + 0x10 );
   *(undefined4*)this = param_2;
   *(undefined4*)( this + 0x18 ) = uVar2;
   AVar1 = *(Address*)( param_3 + 0x14 );
   *(undefined4*)( this + 4 ) = 0;
   this[0x1c] = AVar1;
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_3 + 0x18 );
   StringName::operator =((StringName*)( this + 0x28 ), (StringName*)( param_3 + 0x20 ));
   pOVar3 = *(Object**)( param_3 + 0x30 );
   pOVar4 = *(Object**)( this + 0x38 );
   *(undefined8*)( this + 0x30 ) = *(undefined8*)( param_3 + 0x28 );
   if (pOVar3 != pOVar4) {
      *(Object**)( this + 0x38 ) = pOVar3;
      if (pOVar3 != (Object*)0x0) {
         cVar5 = RefCounted::reference();
         if (cVar5 == '\0') {
            *(undefined8*)( this + 0x38 ) = 0;
         }

      }

      if (pOVar4 != (Object*)0x0) {
         cVar5 = RefCounted::unreference();
         if (cVar5 != '\0') {
            cVar5 = predelete_handler(pOVar4);
            if (cVar5 != '\0') {
               ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
               Memory::free_static(pOVar4, false);
            }

         }

      }

   }

   if (*(long*)( this + 0x10 ) != *(long*)( param_3 + 8 )) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( this + 0x10 ), (CowData*)( param_3 + 8 ));
      return;
   }

   return;
}
/* GDScriptDataType::get_container_element_type(int) const */undefined1(*)[16];GDScriptDataType::get_container_element_type(int param_1) {
   long lVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined1(*pauVar6)[16];
   long lVar7;
   pauVar6 = (undefined1(*) [16])CONCAT44(in_register_0000003c, param_1);
   lVar5 = (long)in_EDX;
   lVar1 = *(long*)( in_RSI + 8 );
   if (in_EDX < 0) {
      if (lVar1 != 0) {
         lVar7 = *(long*)( lVar1 + -8 );
         goto LAB_0011f641;
      }

   }
 else if (lVar1 != 0) {
      lVar7 = *(long*)( lVar1 + -8 );
      if (lVar5 < lVar7) {
         pauVar6[1][4] = 0;
         *(undefined4*)( pauVar6[1] + 8 ) = 0;
         lVar1 = lVar1 + lVar5 * 0x38;
         pauVar6[2] = (undefined1[16])0x0;
         *(undefined4*)pauVar6[1] = 0;
         *(undefined8*)( *pauVar6 + 8 ) = 0;
         *(undefined8*)pauVar6[3] = 0;
         *(undefined4*)pauVar6[1] = *(undefined4*)( lVar1 + 0x10 );
         pauVar6[1][4] = *(undefined1*)( lVar1 + 0x14 );
         *(undefined4*)( pauVar6[1] + 8 ) = *(undefined4*)( lVar1 + 0x18 );
         StringName::operator =((StringName*)( pauVar6 + 2 ), (StringName*)( lVar1 + 0x20 ));
         pOVar2 = *(Object**)pauVar6[3];
         *(undefined8*)( pauVar6[2] + 8 ) = *(undefined8*)( lVar1 + 0x28 );
         pOVar3 = *(Object**)( lVar1 + 0x30 );
         if (pOVar3 != pOVar2) {
            *(Object**)pauVar6[3] = pOVar3;
            if (pOVar3 != (Object*)0x0) {
               cVar4 = RefCounted::reference();
               if (cVar4 == '\0') {
                  *(undefined8*)pauVar6[3] = 0;
               }

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

         if (*(long*)( *pauVar6 + 8 ) != *(long*)( lVar1 + 8 )) {
            CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( *pauVar6 + 8 ), (CowData*)( lVar1 + 8 ));
         }

         return pauVar6;
      }

      goto LAB_0011f641;
   }

   lVar7 = 0;
   LAB_0011f641:_err_print_index_error("get_container_element_type", "modules/gdscript/gdscript_function.h", 0xd9, lVar5, lVar7, "p_index", "container_element_types.size()", "", false, false);
   *(undefined8*)pauVar6[3] = 0;
   *pauVar6 = (undefined1[16])0x0;
   pauVar6[1] = (undefined1[16])0x0;
   pauVar6[2] = (undefined1[16])0x0;
   return pauVar6;
}
/* GDScriptDataType::get_container_element_type_or_variant(int) const */undefined1(*)[16];GDScriptDataType::get_container_element_type_or_variant(int param_1) {
   long lVar1;
   Object *pOVar2;
   Object *pOVar3;
   char cVar4;
   int in_EDX;
   long in_RSI;
   undefined4 in_register_0000003c;
   undefined1(*pauVar5)[16];
   pauVar5 = (undefined1(*) [16])CONCAT44(in_register_0000003c, param_1);
   if (-1 < in_EDX) {
      lVar1 = *(long*)( in_RSI + 8 );
      if (( lVar1 != 0 ) && ( (long)in_EDX < *(long*)( lVar1 + -8 ) )) {
         pauVar5[1][4] = 0;
         *(undefined4*)( pauVar5[1] + 8 ) = 0;
         lVar1 = lVar1 + (long)in_EDX * 0x38;
         pauVar5[2] = (undefined1[16])0x0;
         *(undefined4*)pauVar5[1] = 0;
         *(undefined8*)( *pauVar5 + 8 ) = 0;
         *(undefined8*)pauVar5[3] = 0;
         *(undefined4*)pauVar5[1] = *(undefined4*)( lVar1 + 0x10 );
         pauVar5[1][4] = *(undefined1*)( lVar1 + 0x14 );
         *(undefined4*)( pauVar5[1] + 8 ) = *(undefined4*)( lVar1 + 0x18 );
         StringName::operator =((StringName*)( pauVar5 + 2 ), (StringName*)( lVar1 + 0x20 ));
         pOVar2 = *(Object**)pauVar5[3];
         *(undefined8*)( pauVar5[2] + 8 ) = *(undefined8*)( lVar1 + 0x28 );
         pOVar3 = *(Object**)( lVar1 + 0x30 );
         if (pOVar3 != pOVar2) {
            *(Object**)pauVar5[3] = pOVar3;
            if (( pOVar3 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
               *(undefined8*)pauVar5[3] = 0;
            }

            if (( ( pOVar2 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

      if (*(long*)( *pauVar5 + 8 ) == *(long*)( lVar1 + 8 )) {
         return pauVar5;
      }

      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( *pauVar5 + 8 ), (CowData*)( lVar1 + 8 ));
      return pauVar5;
   }

}
*(undefined8*)pauVar5[3] = 0;*pauVar5 = (undefined1[16])0x0;pauVar5[1] = (undefined1[16])0x0;pauVar5[2] = (undefined1[16])0x0;return pauVar5;}/* HashMap<StringName, GDScript::MemberInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScript::MemberInfo> > >::clear() */void HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>::clear(HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>> *this) {
   long *plVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   Object *pOVar5;
   char cVar6;
   long lVar7;
   if (*(long*)( this + 8 ) != 0) {
      if (*(int*)( this + 0x2c ) != 0) {
         lVar7 = 0;
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         if (uVar2 != 0) {
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar7 ) != 0) {
                  *(int*)( *(long*)( this + 0x10 ) + lVar7 ) = 0;
                  pvVar3 = *(void**)( *(long*)( this + 8 ) + lVar7 * 2 );
                  if (*(long*)( (long)pvVar3 + 0x88 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x88 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar4 = *(long*)( (long)pvVar3 + 0x88 );
                        *(undefined8*)( (long)pvVar3 + 0x88 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x78 ) != 0 )) {
                     StringName::unref();
                  }

                  if (*(long*)( (long)pvVar3 + 0x70 ) != 0) {
                     LOCK();
                     plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x70 ) + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        lVar4 = *(long*)( (long)pvVar3 + 0x70 );
                        *(undefined8*)( (long)pvVar3 + 0x70 ) = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  if (( *(long*)( (long)pvVar3 + 0x60 ) != 0 ) && ( cVar6 = cVar6 != '\0' )) {
                     pOVar5 = *(Object**)( (long)pvVar3 + 0x60 );
                     cVar6 = predelete_handler(pOVar5);
                     if (cVar6 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x50 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar3 + 0x38 ));
                  if (( ( ( StringName::configured != '\0' ) && ( ( *(long*)( (long)pvVar3 + 0x28 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( *(long*)( (long)pvVar3 + 0x20 ) == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  *(undefined8*)( *(long*)( this + 8 ) + lVar7 * 2 ) = 0;
               }

               lVar7 = lVar7 + 4;
            }
 while ( lVar7 != (ulong)uVar2 << 2 );
         }

         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }

      return;
   }

   return;
}
/* GDScript::MemberInfo::~MemberInfo() */void GDScript::MemberInfo::~MemberInfo(MemberInfo *this) {
   long *plVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   if (*(long*)( this + 0x70 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x70 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x70 );
         *(undefined8*)( this + 0x70 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x60 ) != 0 )) {
      StringName::unref();
   }

   if (*(long*)( this + 0x58 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x58 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar2 = *(long*)( this + 0x58 );
         *(undefined8*)( this + 0x58 ) = 0;
         Memory::free_static((void*)( lVar2 + -0x10 ), false);
      }

   }

   if (( *(long*)( this + 0x48 ) != 0 ) && ( cVar4 = cVar4 != '\0' )) {
      pOVar3 = *(Object**)( this + 0x48 );
      cVar4 = predelete_handler(pOVar3);
      if (cVar4 != '\0') {
         ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
         Memory::free_static(pOVar3, false);
      }

   }

   if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x38 ) != 0 )) {
      StringName::unref();
   }

   CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( this + 0x20 ));
   if (StringName::configured != '\0') {
      if (( *(long*)( this + 0x10 ) != 0 ) && ( StringName::unref(),StringName::configured == '\0' )) {
         return;
      }

      if (*(long*)( this + 8 ) != 0) {
         StringName::unref();
         return;
      }

   }

   return;
}
/* List<GDScriptCodeGenerator::Address, DefaultAllocator>::~List() */undefined8 List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List(List<GDScriptCodeGenerator::Address,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   undefined8 uVar6;
   long *plVar7;
   undefined8 uStack_28;
   plVar7 = *(long**)this;
   if (plVar7 == (long*)0x0) {
      return uStack_28;
   }

   do {
      pvVar1 = (void*)*plVar7;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar7[2] != 0) {
            uVar6 = _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return uVar6;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x50 ) == plVar7) {
         lVar5 = *(long*)( (long)pvVar1 + 0x40 );
         lVar2 = *(long*)( (long)pvVar1 + 0x48 );
         *plVar7 = lVar5;
         if (pvVar1 == (void*)plVar7[1]) {
            plVar7[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x40 ) = lVar5;
            lVar5 = *(long*)( (long)pvVar1 + 0x40 );
         }

         if (lVar5 != 0) {
            *(long*)( lVar5 + 0x48 ) = lVar2;
         }

         if (*(long*)( (long)pvVar1 + 0x38 ) != 0) {
            cVar4 = RefCounted::unreference();
            if (cVar4 != '\0') {
               pOVar3 = *(Object**)( (long)pvVar1 + 0x38 );
               cVar4 = predelete_handler(pOVar3);
               if (cVar4 != '\0') {
                  ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x28 ) != 0 )) {
            StringName::unref();
         }

         CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar1 + 0x10 ));
         Memory::free_static(pvVar1, false);
         *(int*)( plVar7 + 2 ) = (int)plVar7[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar7 = *(long**)this;
   }
 while ( (int)plVar7[2] != 0 );
   uVar6 = Memory::free_static(plVar7, false);
   return uVar6;
}
/* GDScriptCompiler::CodeGen::~CodeGen() */void GDScriptCompiler::CodeGen::~CodeGen(CodeGen *this) {
   uint uVar1;
   long lVar2;
   Object *pOVar3;
   char cVar4;
   int *piVar5;
   void *pvVar6;
   void *pvVar7;
   long lVar8;
   long *plVar9;
   plVar9 = *(long**)( this + 0x88 );
   if (plVar9 != (long*)0x0) {
      do {
         pvVar7 = (void*)*plVar9;
         if (pvVar7 == (void*)0x0) {
            if ((int)plVar9[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0011fe37;
            }

            break;
         }

         if (*(long**)( (long)pvVar7 + 0x40 ) == plVar9) {
            lVar8 = *(long*)( (long)pvVar7 + 0x30 );
            lVar2 = *(long*)( (long)pvVar7 + 0x38 );
            *plVar9 = lVar8;
            if (pvVar7 == (void*)plVar9[1]) {
               plVar9[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 0x30 ) = lVar8;
               lVar8 = *(long*)( (long)pvVar7 + 0x30 );
            }

            if (lVar8 != 0) {
               *(long*)( lVar8 + 0x38 ) = lVar2;
            }

            pvVar6 = *(void**)( (long)pvVar7 + 8 );
            if (pvVar6 != (void*)0x0) {
               if (*(int*)( (long)pvVar7 + 0x2c ) != 0) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar7 + 0x28 ) * 4 );
                  if (uVar1 == 0) {
                     *(undefined4*)( (long)pvVar7 + 0x2c ) = 0;
                     *(undefined1(*) [16])( (long)pvVar7 + 0x18 ) = (undefined1[16])0x0;
                  }
 else {
                     lVar8 = 0;
                     do {
                        piVar5 = (int*)( *(long*)( (long)pvVar7 + 0x10 ) + lVar8 );
                        if (*piVar5 != 0) {
                           pvVar6 = *(void**)( (long)pvVar6 + lVar8 * 2 );
                           *piVar5 = 0;
                           if (*(long*)( (long)pvVar6 + 0x50 ) != 0) {
                              cVar4 = RefCounted::unreference();
                              if (cVar4 != '\0') {
                                 pOVar3 = *(Object**)( (long)pvVar6 + 0x50 );
                                 cVar4 = predelete_handler(pOVar3);
                                 if (cVar4 != '\0') {
                                    ( **(code**)( *(long*)pOVar3 + 0x140 ) )();
                                    Memory::free_static(pOVar3, false);
                                 }

                              }

                           }

                           if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x40 ) != 0 )) {
                              StringName::unref();
                           }

                           CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar6 + 0x28 ));
                           if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                              StringName::unref();
                           }

                           Memory::free_static(pvVar6, false);
                           pvVar6 = *(void**)( (long)pvVar7 + 8 );
                           *(undefined8*)( (long)pvVar6 + lVar8 * 2 ) = 0;
                        }

                        lVar8 = lVar8 + 4;
                     }
 while ( (ulong)uVar1 * 4 != lVar8 );
                     *(undefined4*)( (long)pvVar7 + 0x2c ) = 0;
                     *(undefined1(*) [16])( (long)pvVar7 + 0x18 ) = (undefined1[16])0x0;
                     if (pvVar6 == (void*)0x0) goto LAB_0011fe0a;
                  }

               }

               Memory::free_static(pvVar6, false);
               Memory::free_static(*(void**)( (long)pvVar7 + 0x10 ), false);
            }

            LAB_0011fe0a:Memory::free_static(pvVar7, false);
            *(int*)( plVar9 + 2 ) = (int)plVar9[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar9 = *(long**)( this + 0x88 );
      }
 while ( (int)plVar9[2] != 0 );
      Memory::free_static(plVar9, false);
   }

   LAB_0011fe37:pvVar7 = *(void**)( this + 0x60 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x84 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x80 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x84 ) = 0;
            *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x68 ) + lVar8 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar8 * 2 );
                  *(int*)( *(long*)( this + 0x68 ) + lVar8 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x50 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( (long)pvVar7 + 0x50 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x40 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar7 + 0x28 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x60 );
                  *(undefined8*)( (long)pvVar7 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x84 ) = 0;
            *(undefined1(*) [16])( this + 0x70 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0011ff29;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x68 ), false);
   }

   LAB_0011ff29:pvVar7 = *(void**)( this + 0x30 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x54 ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x50 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x54 ) = 0;
            *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
         }
 else {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x38 ) + lVar8 ) != 0) {
                  pvVar7 = *(void**)( (long)pvVar7 + lVar8 * 2 );
                  *(int*)( *(long*)( this + 0x38 ) + lVar8 ) = 0;
                  if (*(long*)( (long)pvVar7 + 0x50 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( (long)pvVar7 + 0x50 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x40 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar7 + 0x28 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar7, false);
                  pvVar7 = *(void**)( this + 0x30 );
                  *(undefined8*)( (long)pvVar7 + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar8 );
            *(undefined4*)( this + 0x54 ) = 0;
            *(undefined1(*) [16])( this + 0x40 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_0012000e;
         }

      }

      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x38 ), false);
   }

   LAB_0012000e:if (( StringName::configured != '\0' ) && ( *(long*)( this + 0x18 ) != 0 )) {
      StringName::unref();
      return;
   }

   return;
}
/* GDScriptCompiler::CodeGen::add_constant(Variant const&) */Variant *GDScriptCompiler::CodeGen::add_constant(Variant *param_1) {
   char cVar1;
   undefined4 uVar2;
   Object *pOVar3;
   long lVar4;
   Object *pOVar5;
   Variant *in_RDX;
   long in_RSI;
   StringName *pSVar6;
   long in_FS_OFFSET;
   long local_90;
   undefined4 local_88;
   Variant local_84;
   int local_80;
   undefined1 local_78[16];
   Object *local_68;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = *(int*)in_RDX;
   local_84 = (Variant)0x1;
   local_90 = 0;
   local_68 = (Object*)0x0;
   local_88 = 1;
   local_78 = (undefined1[16])0x0;
   if (local_80 != 0x18) goto LAB_00120267;
   pOVar3 = Variant::operator_cast_to_Object_(in_RDX);
   if (pOVar3 == (Object*)0x0) {
      local_80 = 0;
      goto LAB_00120267;
   }

   local_88 = 2;
   if (*(long*)( pOVar3 + 8 ) == 0) {
      pSVar6 = *(StringName**)( pOVar3 + 0x118 );
      if (pSVar6 == (StringName*)0x0) {
         pSVar6 = (StringName*)( **(code**)( *(long*)pOVar3 + 0x40 ) )(pOVar3);
      }

   }
 else {
      pSVar6 = (StringName*)( *(long*)( pOVar3 + 8 ) + 0x20 );
   }

   StringName::operator =((StringName*)local_78, pSVar6);
   ( **(code**)( *(long*)pOVar3 + 0x98 ) )(local_58, pOVar3);
   lVar4 = Variant::get_validated_object();
   if (lVar4 == 0) {
      LAB_00120520:cVar1 = Variant::needs_deinit[local_58[0]];
   }
 else {
      pOVar3 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &Script::typeinfo, 0);
      if (pOVar3 != (Object*)0x0) {
         cVar1 = RefCounted::reference();
         if (cVar1 != '\0') {
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            local_78._8_8_ = pOVar3;
            pOVar5 = (Object*)__dynamic_cast(pOVar3, &Object::typeinfo, &GDScript::typeinfo, 0);
            if (( pOVar5 == (Object*)0x0 ) || ( cVar1 = cVar1 == '\0' )) {
               local_88 = 3;
            }
 else {
               local_88 = 4;
               cVar1 = RefCounted::unreference();
               if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

            cVar1 = RefCounted::unreference();
            if (( cVar1 != '\0' ) && ( cVar1 = cVar1 != '\0' )) {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

            goto LAB_00120267;
         }

         goto LAB_00120520;
      }

      cVar1 = Variant::needs_deinit[local_58[0]];
   }

   if (cVar1 != '\0') {
      Variant::_clear_internal();
   }

   LAB_00120267:uVar2 = ( **(code**)( **(long**)( in_RSI + 0x20 ) + 0x18 ) )();
   *(undefined4*)param_1 = 3;
   *(undefined4*)( param_1 + 4 ) = uVar2;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined4*)( param_1 + 0x18 ) = local_88;
   *(undefined8*)( param_1 + 0x38 ) = 0;
   param_1[0x1c] = local_84;
   *(undefined1(*) [16])( param_1 + 0x28 ) = (undefined1[16])0x0;
   *(int*)( param_1 + 0x20 ) = local_80;
   StringName::operator =((StringName*)( param_1 + 0x28 ), (StringName*)local_78);
   pOVar3 = *(Object**)( param_1 + 0x38 );
   *(undefined8*)( param_1 + 0x30 ) = local_78._8_8_;
   if (local_68 != pOVar3) {
      *(Object**)( param_1 + 0x38 ) = local_68;
      if (( local_68 != (Object*)0x0 ) && ( cVar1 = cVar1 == '\0' )) {
         *(undefined8*)( param_1 + 0x38 ) = 0;
      }

      if (( ( pOVar3 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
      Memory::free_static(pOVar3, false);
   }

}
if (*(long*)( param_1 + 0x10 ) != local_90) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( param_1 + 0x10 ), (CowData*)&local_90);
}
if (( ( local_68 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),pOVar3 = local_68,cVar1 != '\0' )) &&( cVar1 = cVar1 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);Memory::free_static(pOVar3, false);}if (( StringName::configured != '\0' ) && ( local_78._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_90);if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return param_1;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* GDScriptDataType::can_contain_object() const */uint GDScriptDataType::can_contain_object(GDScriptDataType *this) {
   uint uVar1;
   GDScriptDataType *pGVar2;
   long lVar3;
   Object *pOVar4;
   char cVar5;
   uint uVar6;
   GDScriptDataType *pGVar7;
   long in_FS_OFFSET;
   GDScriptDataType local_e8[8];
   CowData<GDScriptDataType> aCStack_e0[8];
   undefined1 local_d8[16];
   undefined1 local_c8[16];
   Object *local_b8;
   GDScriptDataType local_a8[16];
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   GDScriptDataType local_68[16];
   undefined1 local_58[16];
   undefined1 local_48[16];
   undefined8 local_38;
   long local_30;
   pGVar7 = local_e8;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      uVar6 = (uint)(byte)this[0x14];
      if (this[0x14] == (GDScriptDataType)0x0) {
         uVar6 = 1;
         goto LAB_00120650;
      }

      if (*(int*)( this + 0x10 ) != 1) goto LAB_00120650;
      uVar1 = *(uint*)( this + 0x18 );
      if (uVar1 == 0x1b) break;
      if (uVar1 < 0x1c) {
         if (uVar1 != 0) {
            uVar6 = ( uint )(uVar1 == 0x18);
         }

         goto LAB_00120650;
      }

      if (uVar1 != 0x1c) {
         uVar6 = 0;
         goto LAB_00120650;
      }

      this * (GDScriptDataType**)( this + 8 );
      if (( this == (GDScriptDataType*)0x0 ) || ( *(long*)( this + -8 ) < 1 )) goto LAB_00120650;
   }
;
   pGVar2 = *(GDScriptDataType**)( this + 8 );
   if (pGVar2 != (GDScriptDataType*)0x0) {
      if (0 < *(long*)( pGVar2 + -8 )) {
         GDScriptDataType(local_e8, pGVar2);
         cVar5 = local_d8[4];
         goto LAB_00120720;
      }

      local_b8 = (Object*)0x0;
      _local_e8 = (undefined1[16])0x0;
      local_d8 = (undefined1[16])0x0;
      local_c8 = (undefined1[16])0x0;
      goto LAB_001206bb;
   }

   goto LAB_00120650;
   LAB_00120720:if (( cVar5 == '\0' ) || ( *(int*)( pGVar7 + 0x10 ) != 1 )) goto LAB_001206bb;
   uVar1 = *(uint*)( pGVar7 + 0x18 );
   if (uVar1 != 0x1b) {
      if (uVar1 < 0x1c) {
         if (( uVar1 != 0 ) && ( uVar1 != 0x18 )) goto LAB_00120755;
         goto LAB_001206bb;
      }

      if (uVar1 != 0x1c) goto LAB_00120755;
      pGVar7 = *(GDScriptDataType**)( pGVar7 + 8 );
      if (( pGVar7 == (GDScriptDataType*)0x0 ) || ( *(long*)( pGVar7 + -8 ) < 1 )) goto LAB_001206bb;
      cVar5 = *(char*)( pGVar7 + 0x14 );
      goto LAB_00120720;
   }

   pGVar2 = *(GDScriptDataType**)( pGVar7 + 8 );
   if (pGVar2 != (GDScriptDataType*)0x0) {
      if (*(long*)( pGVar2 + -8 ) < 1) {
         local_78 = 0;
         for (int i = 0; i < 16; i++) {
            local_a8[i] = (GDScriptDataType)0;
         }

         local_98 = (undefined1[16])0x0;
         local_88 = (undefined1[16])0x0;
      }
 else {
         GDScriptDataType(local_a8, pGVar2);
      }

      cVar5 = can_contain_object(local_a8);
      if (cVar5 == '\0') {
         lVar3 = *(long*)( pGVar7 + 8 );
         if (( lVar3 == 0 ) || ( *(long*)( lVar3 + -8 ) < 2 )) {
            local_38 = 0;
            for (int i = 0; i < 16; i++) {
               local_68[i] = (GDScriptDataType)0;
            }

            local_58 = (undefined1[16])0x0;
            local_48 = (undefined1[16])0x0;
         }
 else {
            GDScriptDataType(local_68, (GDScriptDataType*)( lVar3 + 0x38 ));
         }

         cVar5 = can_contain_object(local_68);
         ~GDScriptDataType(local_68)
         ;;
         ~GDScriptDataType(local_a8)
         ;;
         if (cVar5 == '\0') {
            LAB_00120755:lVar3 = *(long*)( this + 8 );
            if (( lVar3 == 0 ) || ( *(long*)( lVar3 + -8 ) < 2 )) {
               local_38 = 0;
               for (int i = 0; i < 16; i++) {
                  local_68[i] = (GDScriptDataType)0;
               }

               local_58 = (undefined1[16])0x0;
               local_48 = (undefined1[16])0x0;
            }
 else {
               GDScriptDataType(local_68, (GDScriptDataType*)( lVar3 + 0x38 ));
            }

            uVar6 = can_contain_object(local_68);
            ~GDScriptDataType(local_68)
            ;;
         }

      }
 else {
         ~GDScriptDataType(local_a8)
         ;;
      }

   }

   LAB_001206bb:if (( ( local_b8 != (Object*)0x0 ) && ( cVar5 = RefCounted::unreference() ),pOVar4 = local_b8,cVar5 != '\0' )) &&( cVar5 = cVar5 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
if (( StringName::configured != '\0' ) && ( local_c8._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( local_e8 + 8 ));LAB_00120650:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar6;}/* CowData<GDScriptParser::DataType>::_unref() */void CowData<GDScriptParser::DataType>::_unref(CowData<GDScriptParser::DataType> *this) {
   long *plVar1;
   DataType *pDVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   DataType *this_00;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      pDVar2 = *(DataType**)this;
      if (pDVar2 != (DataType*)0x0) {
         lVar3 = *(long*)( pDVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = pDVar2;
            do {
               lVar5 = lVar5 + 1;
               GDScriptParser::DataType::~DataType(this_00);
               this_00 = this_00 + 0xf0;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static(pDVar2 + -0x10, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* GDScriptParser::DataType::~DataType() */void GDScriptParser::DataType::~DataType(DataType *this) {
   long *plVar1;
   uint uVar2;
   Object *pOVar3;
   char cVar4;
   long lVar5;
   void *pvVar6;
   bool bVar7;
   pvVar6 = *(void**)( this + 200 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xec ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xe8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xd0 ) + lVar5 ) != 0) {
                  bVar7 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0xd0 ) + lVar5 ) = 0;
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  if (( bVar7 ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 200 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0xec ) = 0;
            *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_00120a8a;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xd0 ), false);
   }

   LAB_00120a8a:MethodInfo::~MethodInfo((MethodInfo*)( this + 0x50 ));
   if (*(long*)( this + 0x40 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 0x40 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 0x40 );
         *(undefined8*)( this + 0x40 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
      }

   }

   if (*(long*)( this + 0x38 ) != 0) {
      cVar4 = RefCounted::unreference();
      if (cVar4 != '\0') {
         pOVar3 = *(Object**)( this + 0x38 );
         cVar4 = predelete_handler(pOVar3);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
            Memory::free_static(pOVar3, false);
         }

      }

   }

   if (StringName::configured != '\0') {
      if (*(long*)( this + 0x30 ) != 0) {
         StringName::unref();
         if (StringName::configured == '\0') goto LAB_00120af0;
      }

      if (*(long*)( this + 0x28 ) != 0) {
         StringName::unref();
      }

   }

   LAB_00120af0:CowData<GDScriptParser::DataType>::_unref((CowData<GDScriptParser::DataType>*)( this + 8 ));
   return;
}
/* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, long, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, long> > >::insert(StringName const&, long
   const&, bool) */StringName *
HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>
::insert(StringName *param_1,long *param_2,bool param_3){
   uint *puVar1;
   uint uVar2;
   undefined8 *puVar3;
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
   long *plVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   void *__s_00;
   long *in_RCX;
   uint uVar26;
   int iVar27;
   undefined7 in_register_00000011;
   StringName *pSVar28;
   long lVar29;
   long lVar30;
   ulong uVar31;
   char in_R8B;
   uint uVar32;
   ulong uVar33;
   uint uVar34;
   long *plVar35;
   long in_FS_OFFSET;
   bool bVar36;
   long *local_80;
   long local_58;
   long local_50;
   long local_40;
   pSVar28 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   if (param_2[1] == 0) {
      uVar21 = (ulong)uVar23;
      uVar31 = uVar21 * 4;
      uVar33 = uVar21 * 8;
      lVar25 = Memory::alloc_static(uVar31, false);
      param_2[2] = lVar25;
      __s_00 = (void*)Memory::alloc_static(uVar33, false);
      param_2[1] = (long)__s_00;
      if (uVar23 != 0) {
         __s = (void*)param_2[2];
         if (( __s < (void*)( (long)__s_00 + uVar33 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
            uVar31 = 0;
            do {
               *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar21 != uVar31 );
         }
 else {
            memset(__s, 0, uVar31);
            memset(__s_00, 0, uVar33);
         }

         goto LAB_00120e22;
      }

      iVar27 = *(int*)( (long)param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00120f49;
      if (*(int*)( (long)param_2 + 0x2c ) != 0) goto LAB_00120e2e;
      LAB_00120f6b:if ((int)param_2[5] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_00120f01;
      }

      _resize_and_rehash((HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)param_2, (int)param_2[5] + 1);
   }
 else {
      LAB_00120e22:iVar27 = *(int*)( (long)param_2 + 0x2c );
      if (iVar27 != 0) {
         LAB_00120e2e:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
         uVar31 = CONCAT44(0, uVar2);
         lVar25 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
         if (*(long*)pSVar28 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar28 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar34 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar24 * lVar25;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar31;
         lVar29 = SUB168(auVar5 * auVar13, 8);
         uVar32 = *(uint*)( param_2[2] + lVar29 * 4 );
         uVar26 = SUB164(auVar5 * auVar13, 8);
         if (uVar32 != 0) {
            do {
               if (( uVar24 == uVar32 ) && ( *(long*)( *(long*)( param_2[1] + lVar29 * 8 ) + 0x10 ) == *(long*)pSVar28 )) {
                  local_80 = *(long**)( param_2[1] + (ulong)uVar26 * 8 );
                  local_80[3] = *in_RCX;
                  goto LAB_00120f01;
               }

               uVar34 = uVar34 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar26 + 1) * lVar25;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar31;
               lVar29 = SUB168(auVar6 * auVar14, 8);
               uVar32 = *(uint*)( param_2[2] + lVar29 * 4 );
               uVar26 = SUB164(auVar6 * auVar14, 8);
            }
 while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar32 * lVar25,auVar15._8_8_ = 0,auVar15._0_8_ = uVar31,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar26 ) - SUB164(auVar7 * auVar15, 8)) * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar31,uVar34 <= SUB164(auVar8 * auVar16, 8) );
         }

         iVar27 = *(int*)( (long)param_2 + 0x2c );
      }

      LAB_00120f49:if ((float)uVar23 * __LC11 < (float)( iVar27 + 1 )) goto LAB_00120f6b;
   }

   StringName::StringName((StringName*)&local_58, pSVar28);
   local_50 = *in_RCX;
   local_80 = (long*)operator_new(0x20, "");
   *local_80 = 0;
   local_80[1] = 0;
   StringName::StringName((StringName*)( local_80 + 2 ), (StringName*)&local_58);
   bVar36 = StringName::configured != '\0';
   local_80[3] = local_50;
   if (( bVar36 ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   puVar3 = (undefined8*)param_2[4];
   if (puVar3 == (undefined8*)0x0) {
      param_2[3] = (long)local_80;
      param_2[4] = (long)local_80;
      LAB_00121024:lVar25 = *(long*)pSVar28;
      if (lVar25 != 0) goto LAB_00121031;
      LAB_0012112d:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B != '\0') {
         lVar25 = param_2[3];
         *(long**)( lVar25 + 8 ) = local_80;
         *local_80 = lVar25;
         param_2[3] = (long)local_80;
         goto LAB_00121024;
      }

      *puVar3 = local_80;
      local_80[1] = (long)puVar3;
      lVar25 = *(long*)pSVar28;
      param_2[4] = (long)local_80;
      if (lVar25 == 0) goto LAB_0012112d;
      LAB_00121031:uVar23 = *(uint*)( lVar25 + 0x20 );
   }

   lVar25 = param_2[2];
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar31 = (ulong)uVar23;
   uVar32 = 0;
   lVar29 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   uVar33 = CONCAT44(0, uVar2);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar31 * lVar29;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar33;
   lVar30 = SUB168(auVar9 * auVar17, 8);
   lVar4 = param_2[1];
   puVar1 = (uint*)( lVar25 + lVar30 * 4 );
   iVar27 = SUB164(auVar9 * auVar17, 8);
   uVar24 = *puVar1;
   plVar22 = local_80;
   while (uVar24 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar24 * lVar29;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar33;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar10 * auVar18, 8)) * lVar29;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar33;
      uVar23 = SUB164(auVar11 * auVar19, 8);
      plVar35 = plVar22;
      if (uVar23 < uVar32) {
         *puVar1 = (uint)uVar31;
         uVar31 = (ulong)uVar24;
         puVar3 = (undefined8*)( lVar4 + lVar30 * 8 );
         plVar35 = (long*)*puVar3;
         *puVar3 = plVar22;
         uVar32 = uVar23;
      }

      uVar23 = (uint)uVar31;
      uVar32 = uVar32 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar27 + 1) * lVar29;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar33;
      lVar30 = SUB168(auVar12 * auVar20, 8);
      puVar1 = (uint*)( lVar25 + lVar30 * 4 );
      iVar27 = SUB164(auVar12 * auVar20, 8);
      plVar22 = plVar35;
      uVar24 = *puVar1;
   }
;
   *(long**)( lVar4 + lVar30 * 8 ) = plVar22;
   *puVar1 = uVar23;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_00120f01:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptParser::DataType::DataType(GDScriptParser::DataType const&) */void GDScriptParser::DataType::DataType(DataType *this, DataType *param_1) {
   HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>> *this_00;
   Object *pOVar1;
   Object *pOVar2;
   void *pvVar3;
   char cVar4;
   uint uVar5;
   long lVar7;
   uint uVar8;
   long *plVar9;
   long lVar10;
   long in_FS_OFFSET;
   bool bVar11;
   StringName local_48[8];
   long local_40;
   ulong uVar6;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x60 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 200 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 8 ) = 0;
   *(undefined4*)( this + 0x58 ) = 0;
   *(undefined4*)( this + 0x70 ) = 0;
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined4*)( this + 0x80 ) = 6;
   *(undefined8*)( this + 0x88 ) = 1;
   *(undefined8*)( this + 0x90 ) = 0;
   *(undefined8*)( this + 0xa0 ) = 0;
   *(undefined4*)( this + 0xa8 ) = 0;
   *(undefined8*)( this + 0xb8 ) = 0;
   *(undefined8*)( this + 0xe8 ) = 2;
   *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
   *(undefined4*)( this + 0x18 ) = *(undefined4*)( param_1 + 0x18 );
   this[0x1c] = param_1[0x1c];
   *(undefined4*)( this + 0x20 ) = *(undefined4*)( param_1 + 0x20 );
   StringName::operator =((StringName*)( this + 0x28 ), (StringName*)( param_1 + 0x28 ));
   StringName::operator =((StringName*)( this + 0x30 ), (StringName*)( param_1 + 0x30 ));
   pOVar1 = *(Object**)( param_1 + 0x38 );
   pOVar2 = *(Object**)( this + 0x38 );
   if (pOVar1 != pOVar2) {
      *(Object**)( this + 0x38 ) = pOVar1;
      if (( pOVar1 != (Object*)0x0 ) && ( cVar4 = cVar4 == '\0' )) {
         *(undefined8*)( this + 0x38 ) = 0;
      }

      if (( ( pOVar2 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar2 + 0x140 ))(pOVar2);
      Memory::free_static(pOVar2, false);
   }

}
if (*(long*)( this + 0x40 ) != *(long*)( param_1 + 0x40 )) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( this + 0x40 ), (CowData*)( param_1 + 0x40 ));
}
this_00 = (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( this + 0xc0 );*(undefined8*)( this + 0x48 ) = *(undefined8*)( param_1 + 0x48 );MethodInfo::operator =((MethodInfo*)( this + 0x50 ), (MethodInfo*)( param_1 + 0x50 ));if (this_00 != (HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>*)( param_1 + 0xc0 )) {
   uVar8 = *(uint*)( this + 0xe8 );
   uVar5 = *(uint*)( hash_table_size_primes + (ulong)uVar8 * 4 );
   if (( *(int*)( this + 0xec ) != 0 ) && ( *(long*)( this + 200 ) != 0 )) {
      if (uVar5 != 0) {
         lVar10 = 0;
         do {
            if (*(int*)( *(long*)( this + 0xd0 ) + lVar10 ) != 0) {
               *(int*)( *(long*)( this + 0xd0 ) + lVar10 ) = 0;
               pvVar3 = *(void**)( *(long*)( this + 200 ) + lVar10 * 2 );
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar3, false);
               *(undefined8*)( *(long*)( this + 200 ) + lVar10 * 2 ) = 0;
            }

            lVar10 = lVar10 + 4;
         }
 while ( lVar10 != (ulong)uVar5 << 2 );
         uVar8 = *(uint*)( this + 0xe8 );
         uVar5 = *(uint*)( hash_table_size_primes + (ulong)uVar8 * 4 );
      }

      *(undefined4*)( this + 0xec ) = 0;
      *(undefined1(*) [16])( this + 0xd8 ) = (undefined1[16])0x0;
   }

   if (uVar5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0xe8 ) * 4 )) {
      if (uVar8 != 0x1c) {
         uVar6 = (ulong)uVar8;
         do {
            uVar5 = (int)uVar6 + 1;
            uVar6 = (ulong)uVar5;
            if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0xe8 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar6 * 4 )) {
               if (uVar8 != uVar5) {
                  if (*(long*)( this + 200 ) == 0) {
                     *(uint*)( this + 0xe8 ) = uVar5;
                  }
 else {
                     HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::_resize_and_rehash(this_00, uVar5);
                  }

               }

               goto LAB_001214b2;
            }

         }
 while ( uVar5 != 0x1c );
      }

      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_001214b2:if (( *(long*)( param_1 + 200 ) != 0 ) && ( plVar9 = *(long**)( param_1 + 0xd8 ) ),plVar9 != (long*)0x0) {
      do {
         HashMap<StringName,long,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,long>>>::insert(local_48, (long*)this_00, (bool)( (char)plVar9 + '\x10' ));
         plVar9 = (long*)*plVar9;
      }
 while ( plVar9 != (long*)0x0 );
   }

}
if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
   CowData<GDScriptParser::DataType>::_unref((CowData<GDScriptParser::DataType>*)( this + 8 ));
   if (*(long*)( param_1 + 8 ) != 0) {
      plVar9 = (long*)( *(long*)( param_1 + 8 ) + -0x10 );
      do {
         lVar10 = *plVar9;
         if (lVar10 == 0) goto LAB_00121533;
         LOCK();
         lVar7 = *plVar9;
         bVar11 = lVar10 == lVar7;
         if (bVar11) {
            *plVar9 = lVar10 + 1;
            lVar7 = lVar10;
         }

         UNLOCK();
      }
 while ( !bVar11 );
      if (lVar7 != -1) {
         *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
      }

   }

}
LAB_00121533:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* GDScriptParser::Node::get_datatype() const */void GDScriptParser::Node::get_datatype(void) {
   long in_RSI;
   DataType *in_RDI;
   DataType::DataType(in_RDI, (DataType*)( in_RSI + 0x38 ));
   return;
}
/* HashMap<StringName, GDScriptCodeGenerator::Address, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptCodeGenerator::Address> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::_resize_and_rehash(HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, GDScriptCodeGenerator::Address, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptCodeGenerator::Address> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::operator [](HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2Object *pOVar3undefined8 *puVar4void *__sundefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]char cVar29uint uVar30uint uVar31uint uVar32undefined8 *puVar33undefined8 uVar34void *__s_00int iVar35long lVar36long lVar37long lVar38uint uVar39ulong uVar40uint uVar41uint uVar42ulong uVar43ulong uVar44undefined8 *puVar45long lVar46long in_FS_OFFSETCowData<GDScriptDataType> *local_e0long local_c8undefined8 local_c0undefined8 local_b8undefined1 local_b0[16]Object *local_a0undefined1 local_98[16]long local_88undefined8 local_80long local_70undefined4 local_68undefined1 local_64undefined4 local_60undefined1 local_58[16]Object *local_48long local_40lVar46 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar43 = CONCAT44(0, uVar31);if (lVar46 == 0) {
   LAB_00121a20:local_c8 = 0;
   local_b0 = (undefined1[16])0x0;
   local_c0 = 0;
   local_b8 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   local_a0 = (Object*)0x0;
   if (lVar46 != 0) goto LAB_00121a6c;
   uVar44 = (ulong)uVar31;
   uVar43 = uVar44 * 4;
   uVar40 = uVar44 * 8;
   uVar34 = Memory::alloc_static(uVar43, false);
   *(undefined8*)( this + 0x10 ) = uVar34;
   __s_00 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar31 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar40 ) ) && ( __s_00 < (void*)( (long)__s + uVar43 ) )) {
         uVar43 = 0;
         do {
            *(undefined4*)( (long)__s + uVar43 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar43 * 8 ) = 0;
            uVar43 = uVar43 + 1;
         }
 while ( uVar44 != uVar43 );
      }
 else {
         memset(__s, 0, uVar43);
         memset(__s_00, 0, uVar40);
      }

      goto LAB_00121a6c;
   }

   iVar35 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_00121bfb;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_00121a7c;
   LAB_00121c1d:if (*(int*)( this + 0x28 ) == 0x1c) {
      puVar33 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00121fb5;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar30 = StringName::get_empty_hash();
         lVar46 = *(long*)( this + 8 );
      }
 else {
         uVar30 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar30 == 0) {
         uVar30 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar30 * lVar37;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar43;
      lVar36 = SUB168(auVar5 * auVar17, 8);
      uVar39 = SUB164(auVar5 * auVar17, 8);
      uVar32 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
      if (uVar32 != 0) {
         uVar41 = 0;
         do {
            if (( uVar32 == uVar30 ) && ( *(long*)( *(long*)( lVar46 + lVar36 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar33 = *(undefined8**)( lVar46 + (ulong)uVar39 * 8 );
               goto LAB_001219eb;
            }

            uVar41 = uVar41 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar39 + 1) * lVar37;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar43;
            lVar36 = SUB168(auVar6 * auVar18, 8);
            uVar32 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
            uVar39 = SUB164(auVar6 * auVar18, 8);
         }
 while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar32 * lVar37,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar39 + uVar31 ) - SUB164(auVar7 * auVar19, 8)) * lVar37,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar41 <= SUB164(auVar8 * auVar20, 8) );
      }

      goto LAB_00121a20;
   }

   local_c8 = 0;
   local_b0 = (undefined1[16])0x0;
   local_c0 = 0;
   local_b8 = 0;
   uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   local_a0 = (Object*)0x0;
   LAB_00121a6c:iVar35 = *(int*)( this + 0x2c );
   if (iVar35 != 0) {
      LAB_00121a7c:uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar43 = CONCAT44(0, uVar30);
      lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar32 = StringName::get_empty_hash();
      }
 else {
         uVar32 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar32 == 0) {
         uVar32 = 1;
      }

      uVar42 = 0;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar32 * lVar46;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar43;
      lVar37 = SUB168(auVar9 * auVar21, 8);
      uVar41 = SUB164(auVar9 * auVar21, 8);
      uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
      if (uVar39 != 0) {
         do {
            if (( uVar32 == uVar39 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar37 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar46 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
               *(undefined8*)( lVar46 + 0x18 ) = 7;
               *(undefined4*)( lVar46 + 0x30 ) = (undefined4)local_c0;
               *(undefined1*)( lVar46 + 0x34 ) = local_c0._4_1_;
               *(undefined4*)( lVar46 + 0x38 ) = (undefined4)local_b8;
               StringName::operator =((StringName*)( lVar46 + 0x40 ), (StringName*)local_b0);
               pOVar3 = *(Object**)( lVar46 + 0x50 );
               *(undefined8*)( lVar46 + 0x48 ) = local_b0._8_8_;
               if (local_a0 != pOVar3) {
                  *(Object**)( lVar46 + 0x50 ) = local_a0;
                  if (( local_a0 != (Object*)0x0 ) && ( cVar29 = cVar29 == '\0' )) {
                     *(undefined8*)( lVar46 + 0x50 ) = 0;
                  }

                  if (( ( pOVar3 != (Object*)0x0 ) && ( cVar29 = RefCounted::unreference() ),cVar29 != '\0' )) &&( cVar29 = cVar29 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
                  Memory::free_static(pOVar3, false);
               }

            }

            if (*(long*)( lVar46 + 0x28 ) != local_c8) {
               CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( lVar46 + 0x28 ), (CowData*)&local_c8);
            }

            puVar33 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
            goto LAB_00121fb5;
         }
 while ( ( uVar39 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar39 * lVar46,auVar23._8_8_ = 0,auVar23._0_8_ = uVar43,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar30 + uVar41 ) - SUB164(auVar11 * auVar23, 8)) * lVar46,auVar24._8_8_ = 0,auVar24._0_8_ = uVar43,uVar42 <= SUB164(auVar12 * auVar24, 8) );
      }

      iVar35 = *(int*)( this + 0x2c );
   }

   uVar44 = (ulong)uVar31;
   LAB_00121bfb:if ((float)uVar44 * __LC11 < (float)( iVar35 + 1 )) goto LAB_00121c1d;
}
local_98 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_88, param_1);local_58 = (undefined1[16])0x0;local_80 = 7;local_70 = 0;local_68 = (undefined4)local_c0;local_48 = (Object*)0x0;local_64 = local_c0._4_1_;local_60 = (undefined4)local_b8;StringName::operator =((StringName*)local_58, (StringName*)local_b0);pOVar3 = local_48;local_58._8_8_ = local_b0._8_8_;if (local_a0 != local_48) {
   local_48 = local_a0;
   if (( local_a0 != (Object*)0x0 ) && ( cVar29 = cVar29 == '\0' )) {
      local_48 = (Object*)0x0;
   }

   if (( ( pOVar3 != (Object*)0x0 ) && ( cVar29 = RefCounted::unreference() ),cVar29 != '\0' )) &&( cVar29 = cVar29 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
   Memory::free_static(pOVar3, false);
}
}if (local_70 != local_c8) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)&local_70, (CowData*)&local_c8);
}
puVar33 = (undefined8*)operator_new(0x58, "");*puVar33 = local_98._0_8_;puVar33[1] = local_98._8_8_;StringName::StringName((StringName*)( puVar33 + 2 ), (StringName*)&local_88);*(undefined1*)( (long)puVar33 + 0x34 ) = 0;*(undefined4*)( puVar33 + 6 ) = 0;puVar33[3] = local_80;puVar33[5] = 0;*(undefined4*)( puVar33 + 7 ) = 0;*(undefined4*)( puVar33 + 6 ) = local_68;puVar33[10] = 0;*(undefined1*)( (long)puVar33 + 0x34 ) = local_64;*(undefined1(*) [16])( puVar33 + 8 ) = (undefined1[16])0x0;*(undefined4*)( puVar33 + 7 ) = local_60;StringName::operator =((StringName*)( puVar33 + 8 ), (StringName*)local_58);pOVar3 = (Object*)puVar33[10];puVar33[9] = local_58._8_8_;if (local_48 != pOVar3) {
   puVar33[10] = local_48;
   if (( local_48 != (Object*)0x0 ) && ( cVar29 = cVar29 == '\0' )) {
      puVar33[10] = 0;
   }

   if (( ( pOVar3 != (Object*)0x0 ) && ( cVar29 = RefCounted::unreference() ),cVar29 != '\0' )) &&( cVar29 = cVar29 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
   Memory::free_static(pOVar3, false);
}
}if (puVar33[5] != local_70) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( puVar33 + 5 ), (CowData*)&local_70);
}
if (( ( local_48 != (Object*)0x0 ) && ( cVar29 = RefCounted::unreference() ),pOVar3 = local_48,cVar29 != '\0' )) &&( cVar29 = cVar29 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))();Memory::free_static(pOVar3, false);}if (( StringName::configured != '\0' ) && ( local_58._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_70);if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
   StringName::unref();
}
puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar33;
}
 else {
   *puVar4 = puVar33;
   puVar33[1] = puVar4;
}
*(undefined8**)( this + 0x20 ) = puVar33;if (*(long*)param_1 == 0) {
   uVar31 = StringName::get_empty_hash();
}
 else {
   uVar31 = *(uint*)( *(long*)param_1 + 0x20 );
}
if (uVar31 == 0) {
   uVar31 = 1;
}
uVar43 = (ulong)uVar31;uVar39 = 0;lVar46 = *(long*)( this + 0x10 );lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar30);auVar13._8_8_ = 0;auVar13._0_8_ = uVar43 * lVar37;auVar25._8_8_ = 0;auVar25._0_8_ = uVar40;lVar38 = SUB168(auVar13 * auVar25, 8);lVar36 = *(long*)( this + 8 );puVar1 = (uint*)( lVar46 + lVar38 * 4 );iVar35 = SUB164(auVar13 * auVar25, 8);uVar32 = *puVar1;puVar4 = puVar33;while (uVar32 != 0) {
   auVar14._8_8_ = 0;
   auVar14._0_8_ = (ulong)uVar32 * lVar37;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar40;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(( iVar35 + uVar30 ) - SUB164(auVar14 * auVar26, 8)) * lVar37;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   uVar31 = SUB164(auVar15 * auVar27, 8);
   puVar45 = puVar4;
   if (uVar31 < uVar39) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar32;
      puVar2 = (undefined8*)( lVar36 + lVar38 * 8 );
      puVar45 = (undefined8*)*puVar2;
      *puVar2 = puVar4;
      uVar39 = uVar31;
   }

   uVar31 = (uint)uVar43;
   uVar39 = uVar39 + 1;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(iVar35 + 1) * lVar37;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar40;
   lVar38 = SUB168(auVar16 * auVar28, 8);
   puVar1 = (uint*)( lVar46 + lVar38 * 4 );
   iVar35 = SUB164(auVar16 * auVar28, 8);
   puVar4 = puVar45;
   uVar32 = *puVar1;
}
;*(undefined8**)( lVar36 + lVar38 * 8 ) = puVar4;*puVar1 = uVar31;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00121fb5:local_e0 = (CowData<GDScriptDataType>*)&local_c8;if (( ( local_a0 != (Object*)0x0 ) && ( cVar29 = RefCounted::unreference() ),pOVar3 = local_a0,cVar29 != '\0' )) &&( cVar29 = cVar29 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);Memory::free_static(pOVar3, false);}if (( StringName::configured != '\0' ) && ( local_b0._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref(local_e0);LAB_001219eb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar33 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* GDScriptCompiler::CodeGen::add_local(StringName const&, GDScriptDataType const&) */StringName *GDScriptCompiler::CodeGen::add_local(StringName *param_1, GDScriptDataType *param_2) {
   Object *pOVar1;
   undefined8 uVar2;
   Object *pOVar3;
   char cVar4;
   undefined4 uVar5;
   undefined8 *puVar6;
   long in_RCX;
   StringName *in_RDX;
   long in_FS_OFFSET;
   long local_78;
   undefined4 local_70;
   undefined1 local_6c;
   undefined4 local_68;
   undefined1 local_60[16];
   Object *local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( **(code**)( **(long**)( param_2 + 0x20 ) + 8 ) )();
   local_70 = *(undefined4*)( in_RCX + 0x10 );
   local_78 = 0;
   local_6c = *(undefined1*)( in_RCX + 0x14 );
   local_50 = (Object*)0x0;
   local_68 = *(undefined4*)( in_RCX + 0x18 );
   local_60 = (undefined1[16])0x0;
   StringName::operator =((StringName*)local_60, (StringName*)( in_RCX + 0x20 ));
   pOVar3 = local_50;
   pOVar1 = *(Object**)( in_RCX + 0x30 );
   local_60._8_8_ = *(undefined8*)( in_RCX + 0x28 );
   if (pOVar1 != local_50) {
      local_50 = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            local_50 = (Object*)0x0;
         }

      }

      if (pOVar3 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar3);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
               Memory::free_static(pOVar3, false);
            }

         }

      }

   }

   if (local_78 != *(long*)( in_RCX + 8 )) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)&local_78, (CowData*)( in_RCX + 8 ));
   }

   puVar6 = (undefined8*)HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::operator []((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>*)( param_2 + 0x58 ), in_RDX);
   *puVar6 = CONCAT44(uVar5, 4);
   *(undefined4*)( puVar6 + 3 ) = local_70;
   *(undefined1*)( (long)puVar6 + 0x1c ) = local_6c;
   *(undefined4*)( puVar6 + 4 ) = local_68;
   StringName::operator =((StringName*)( puVar6 + 5 ), (StringName*)local_60);
   pOVar1 = (Object*)puVar6[7];
   puVar6[6] = local_60._8_8_;
   if (local_50 != pOVar1) {
      puVar6[7] = local_50;
      if (local_50 != (Object*)0x0) {
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            puVar6[7] = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   if (puVar6[2] != local_78) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( puVar6 + 2 ), (CowData*)&local_78);
   }

   if (local_50 != (Object*)0x0) {
      cVar4 = RefCounted::unreference();
      pOVar1 = local_50;
      if (cVar4 != '\0') {
         cVar4 = predelete_handler(local_50);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

      }

   }

   if (( StringName::configured != '\0' ) && ( local_60._0_8_ != 0 )) {
      StringName::unref();
   }

   CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_78);
   puVar6 = (undefined8*)HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::operator []((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>*)( param_2 + 0x58 ), in_RDX);
   uVar2 = *puVar6;
   param_1[0x1c] = (StringName)0x0;
   *(undefined4*)( param_1 + 0x20 ) = 0;
   *(undefined8*)param_1 = uVar2;
   *(undefined1(*) [16])( param_1 + 0x28 ) = (undefined1[16])0x0;
   *(undefined4*)( param_1 + 0x18 ) = 0;
   *(undefined8*)( param_1 + 0x10 ) = 0;
   *(undefined8*)( param_1 + 0x38 ) = 0;
   *(undefined4*)( param_1 + 0x18 ) = *(undefined4*)( puVar6 + 3 );
   param_1[0x1c] = *(StringName*)( (long)puVar6 + 0x1c );
   *(undefined4*)( param_1 + 0x20 ) = *(undefined4*)( puVar6 + 4 );
   StringName::operator =(param_1 + 0x28, (StringName*)( puVar6 + 5 ));
   pOVar1 = *(Object**)( param_1 + 0x38 );
   *(undefined8*)( param_1 + 0x30 ) = puVar6[6];
   pOVar3 = (Object*)puVar6[7];
   if (pOVar3 != pOVar1) {
      *(Object**)( param_1 + 0x38 ) = pOVar3;
      if (pOVar3 != (Object*)0x0) {
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') {
            *(undefined8*)( param_1 + 0x38 ) = 0;
         }

      }

      if (pOVar1 != (Object*)0x0) {
         cVar4 = RefCounted::unreference();
         if (cVar4 != '\0') {
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

      }

   }

   if (*(long*)( param_1 + 0x10 ) != puVar6[2]) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( param_1 + 0x10 ), (CowData*)( puVar6 + 2 ));
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, GDScriptCodeGenerator::Address, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptCodeGenerator::Address> > >::insert(StringName const&, GDScriptCodeGenerator::Address
   const&, bool) */StringName *
HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>
::insert(StringName *param_1,Address *param_2,bool param_3){
   uint *puVar1;
   uint uVar2;
   Object *pOVar3;
   Object *pOVar4;
   undefined8 *puVar5;
   long lVar6;
   void *__s;
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
   ulong uVar23;
   long *plVar24;
   char cVar25;
   uint uVar26;
   uint uVar27;
   long *plVar28;
   long lVar29;
   undefined8 uVar30;
   void *__s_00;
   long *in_RCX;
   uint uVar31;
   int iVar32;
   undefined7 in_register_00000011;
   StringName *pSVar33;
   long lVar34;
   long lVar35;
   char in_R8B;
   uint uVar36;
   ulong uVar37;
   uint uVar38;
   ulong uVar39;
   long *plVar40;
   long in_FS_OFFSET;
   long local_88;
   long local_80;
   long local_70;
   undefined4 local_68;
   undefined1 local_64;
   undefined4 local_60;
   undefined1 local_58[16];
   Object *local_48;
   long local_40;
   pSVar33 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar26 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar23 = (ulong)uVar26;
      uVar39 = uVar23 * 4;
      uVar37 = uVar23 * 8;
      uVar30 = Memory::alloc_static(uVar39, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar30;
      __s_00 = (void*)Memory::alloc_static(uVar37, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar26 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar37 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
            uVar39 = 0;
            do {
               *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
               uVar39 = uVar39 + 1;
            }
 while ( uVar23 != uVar39 );
         }
 else {
            memset(__s, 0, uVar39);
            memset(__s_00, 0, uVar37);
         }

         goto LAB_001226c6;
      }

      iVar32 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00122838;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_001226d2;
      LAB_0012285a:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar28 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00122ba6;
      }

      _resize_and_rehash((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_001226c6:iVar32 = *(int*)( param_2 + 0x2c );
      if (iVar32 != 0) {
         LAB_001226d2:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar39 = CONCAT44(0, uVar2);
         lVar29 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar33 == 0) {
            uVar27 = StringName::get_empty_hash();
         }
 else {
            uVar27 = *(uint*)( *(long*)pSVar33 + 0x20 );
         }

         if (uVar27 == 0) {
            uVar27 = 1;
         }

         uVar38 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = (ulong)uVar27 * lVar29;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar39;
         lVar34 = SUB168(auVar7 * auVar15, 8);
         uVar36 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar34 * 4 );
         uVar31 = SUB164(auVar7 * auVar15, 8);
         if (uVar36 != 0) {
            do {
               if (( uVar27 == uVar36 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar34 * 8 ) + 0x10 ) == *(long*)pSVar33 )) {
                  lVar29 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar31 * 8 );
                  *(long*)( lVar29 + 0x18 ) = *in_RCX;
                  *(int*)( lVar29 + 0x30 ) = (int)in_RCX[3];
                  *(undefined1*)( lVar29 + 0x34 ) = *(undefined1*)( (long)in_RCX + 0x1c );
                  *(int*)( lVar29 + 0x38 ) = (int)in_RCX[4];
                  StringName::operator =((StringName*)( lVar29 + 0x40 ), (StringName*)( in_RCX + 5 ));
                  pOVar4 = *(Object**)( lVar29 + 0x50 );
                  *(long*)( lVar29 + 0x48 ) = in_RCX[6];
                  pOVar3 = (Object*)in_RCX[7];
                  if (pOVar3 != pOVar4) {
                     *(Object**)( lVar29 + 0x50 ) = pOVar3;
                     if (( pOVar3 != (Object*)0x0 ) && ( cVar25 = cVar25 == '\0' )) {
                        *(undefined8*)( lVar29 + 0x50 ) = 0;
                     }

                     if (( ( pOVar4 != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
                     Memory::free_static(pOVar4, false);
                  }

               }

               if (*(long*)( lVar29 + 0x28 ) != in_RCX[2]) {
                  CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( lVar29 + 0x28 ), (CowData*)( in_RCX + 2 ));
               }

               plVar28 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar31 * 8 );
               goto LAB_00122ba6;
            }
 while ( ( uVar36 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar36 * lVar29,auVar17._8_8_ = 0,auVar17._0_8_ = uVar39,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar31 ) - SUB164(auVar9 * auVar17, 8)) * lVar29,auVar18._8_8_ = 0,auVar18._0_8_ = uVar39,uVar38 <= SUB164(auVar10 * auVar18, 8) );
         }

         iVar32 = *(int*)( param_2 + 0x2c );
      }

      LAB_00122838:if ((float)uVar26 * __LC11 < (float)( iVar32 + 1 )) goto LAB_0012285a;
   }

   StringName::StringName((StringName*)&local_88, pSVar33);
   local_80 = *in_RCX;
   local_58 = (undefined1[16])0x0;
   local_68 = (undefined4)in_RCX[3];
   local_70 = 0;
   local_64 = *(undefined1*)( (long)in_RCX + 0x1c );
   local_48 = (Object*)0x0;
   local_60 = (undefined4)in_RCX[4];
   StringName::operator =((StringName*)local_58, (StringName*)( in_RCX + 5 ));
   pOVar3 = local_48;
   pOVar4 = (Object*)in_RCX[7];
   local_58._8_8_ = in_RCX[6];
   if (pOVar4 != local_48) {
      local_48 = pOVar4;
      if (( pOVar4 != (Object*)0x0 ) && ( cVar25 = cVar25 == '\0' )) {
         local_48 = (Object*)0x0;
      }

      if (( ( pOVar3 != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
      Memory::free_static(pOVar3, false);
   }

}
if (local_70 != in_RCX[2]) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)&local_70, (CowData*)( in_RCX + 2 ));
}
plVar28 = (long*)operator_new(0x58, "");*plVar28 = 0;plVar28[1] = 0;StringName::StringName((StringName*)( plVar28 + 2 ), (StringName*)&local_88);*(undefined1*)( (long)plVar28 + 0x34 ) = 0;*(undefined4*)( plVar28 + 6 ) = 0;plVar28[5] = 0;plVar28[3] = local_80;*(undefined4*)( plVar28 + 7 ) = 0;*(undefined4*)( plVar28 + 6 ) = local_68;plVar28[10] = 0;*(undefined1*)( (long)plVar28 + 0x34 ) = local_64;*(undefined1(*) [16])( plVar28 + 8 ) = (undefined1[16])0x0;*(undefined4*)( plVar28 + 7 ) = local_60;StringName::operator =((StringName*)( plVar28 + 8 ), (StringName*)local_58);pOVar4 = (Object*)plVar28[10];plVar28[9] = local_58._8_8_;if (local_48 != pOVar4) {
   plVar28[10] = (long)local_48;
   if (( local_48 != (Object*)0x0 ) && ( cVar25 = cVar25 == '\0' )) {
      plVar28[10] = 0;
   }

   if (( ( pOVar4 != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
}if (plVar28[5] != local_70) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( plVar28 + 5 ), (CowData*)&local_70);
}
if (( ( local_48 != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),pOVar4 = local_48,cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))();Memory::free_static(pOVar4, false);}if (( StringName::configured != '\0' ) && ( local_58._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_70);if (( StringName::configured != '\0' ) && ( local_88 != 0 )) {
   StringName::unref();
}
puVar5 = *(undefined8**)( param_2 + 0x20 );if (puVar5 == (undefined8*)0x0) {
   *(long**)( param_2 + 0x18 ) = plVar28;
   *(long**)( param_2 + 0x20 ) = plVar28;
   LAB_00122aaa:lVar29 = *(long*)pSVar33;
   if (lVar29 != 0) goto LAB_00122ab7;
   LAB_00122bfc:uVar26 = StringName::get_empty_hash();
}
 else {
   if (in_R8B == '\0') {
      *puVar5 = plVar28;
      plVar28[1] = (long)puVar5;
      *(long**)( param_2 + 0x20 ) = plVar28;
      goto LAB_00122aaa;
   }

   lVar29 = *(long*)( param_2 + 0x18 );
   *(long**)( lVar29 + 8 ) = plVar28;
   *plVar28 = lVar29;
   lVar29 = *(long*)pSVar33;
   *(long**)( param_2 + 0x18 ) = plVar28;
   if (lVar29 == 0) goto LAB_00122bfc;
   LAB_00122ab7:uVar26 = *(uint*)( lVar29 + 0x20 );
}
lVar29 = *(long*)( param_2 + 0x10 );if (uVar26 == 0) {
   uVar26 = 1;
}
uVar39 = (ulong)uVar26;uVar36 = 0;lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );uVar37 = CONCAT44(0, uVar2);auVar11._8_8_ = 0;auVar11._0_8_ = uVar39 * lVar34;auVar19._8_8_ = 0;auVar19._0_8_ = uVar37;lVar35 = SUB168(auVar11 * auVar19, 8);lVar6 = *(long*)( param_2 + 8 );puVar1 = (uint*)( lVar29 + lVar35 * 4 );iVar32 = SUB164(auVar11 * auVar19, 8);uVar27 = *puVar1;plVar24 = plVar28;while (uVar27 != 0) {
   auVar12._8_8_ = 0;
   auVar12._0_8_ = (ulong)uVar27 * lVar34;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar37;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(( iVar32 + uVar2 ) - SUB164(auVar12 * auVar20, 8)) * lVar34;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar37;
   uVar26 = SUB164(auVar13 * auVar21, 8);
   plVar40 = plVar24;
   if (uVar26 < uVar36) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar27;
      puVar5 = (undefined8*)( lVar6 + lVar35 * 8 );
      plVar40 = (long*)*puVar5;
      *puVar5 = plVar24;
      uVar36 = uVar26;
   }

   uVar26 = (uint)uVar39;
   uVar36 = uVar36 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(iVar32 + 1) * lVar34;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar37;
   lVar35 = SUB168(auVar14 * auVar22, 8);
   puVar1 = (uint*)( lVar29 + lVar35 * 4 );
   iVar32 = SUB164(auVar14 * auVar22, 8);
   plVar24 = plVar40;
   uVar27 = *puVar1;
}
;*(long**)( lVar6 + lVar35 * 8 ) = plVar24;*puVar1 = uVar26;*(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;LAB_00122ba6:*(long**)param_1 = plVar28;if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return param_1;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* HashMap<StringName, GDScriptCodeGenerator::Address, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptCodeGenerator::Address> > >::TEMPNAMEPLACEHOLDERVALUE(HashMap<StringName,
   GDScriptCodeGenerator::Address, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, GDScriptCodeGenerator::Address> > > const&) */void HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::operator =(HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>> *this, HashMap *param_1) {
   void *pvVar1;
   Object *pOVar2;
   char cVar3;
   uint uVar4;
   uint uVar6;
   long *plVar7;
   long lVar8;
   long in_FS_OFFSET;
   StringName local_48[8];
   long local_40;
   ulong uVar5;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (this != (HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>*)param_1) {
      uVar6 = *(uint*)( this + 0x28 );
      uVar4 = *(uint*)( hash_table_size_primes + (ulong)uVar6 * 4 );
      if (( *(int*)( this + 0x2c ) != 0 ) && ( *(long*)( this + 8 ) != 0 )) {
         if (uVar4 != 0) {
            lVar8 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x10 ) + lVar8 ) != 0) {
                  *(int*)( *(long*)( this + 0x10 ) + lVar8 ) = 0;
                  pvVar1 = *(void**)( *(long*)( this + 8 ) + lVar8 * 2 );
                  if (*(long*)( (long)pvVar1 + 0x50 ) != 0) {
                     cVar3 = RefCounted::unreference();
                     if (cVar3 != '\0') {
                        pOVar2 = *(Object**)( (long)pvVar1 + 0x50 );
                        cVar3 = predelete_handler(pOVar2);
                        if (cVar3 != '\0') {
                           ( **(code**)( *(long*)pOVar2 + 0x140 ) )();
                           Memory::free_static(pOVar2, false);
                        }

                     }

                  }

                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x40 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar1 + 0x28 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar1, false);
                  *(undefined8*)( *(long*)( this + 8 ) + lVar8 * 2 ) = 0;
               }

               lVar8 = lVar8 + 4;
            }
 while ( lVar8 != (ulong)uVar4 << 2 );
            uVar6 = *(uint*)( this + 0x28 );
            uVar4 = *(uint*)( hash_table_size_primes + (ulong)uVar6 * 4 );
         }

         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      }

      if (uVar4 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x28 ) * 4 )) {
         if (uVar6 != 0x1c) {
            uVar5 = (ulong)uVar6;
            do {
               uVar4 = (int)uVar5 + 1;
               uVar5 = (ulong)uVar4;
               if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x28 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar5 * 4 )) {
                  if (uVar4 != uVar6) {
                     if (*(long*)( this + 8 ) == 0) {
                        *(uint*)( this + 0x28 ) = uVar4;
                     }
 else {
                        _resize_and_rehash(this, uVar4);
                     }

                  }

                  goto LAB_00122eb9;
               }

            }
 while ( uVar4 != 0x1c );
         }

         _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
      }

      LAB_00122eb9:if (( *(long*)( param_1 + 8 ) != 0 ) && ( plVar7 = *(long**)( param_1 + 0x18 ) ),plVar7 != (long*)0x0) {
         do {
            insert(local_48, this, (bool)( (char)plVar7 + '\x10' ));
            plVar7 = (long*)*plVar7;
         }
 while ( plVar7 != (long*)0x0 );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* GDScriptCompiler::CodeGen::end_block() */void GDScriptCompiler::CodeGen::end_block(CodeGen *this) {
   uint uVar1;
   long *plVar2;
   void *pvVar3;
   long lVar4;
   Object *pOVar5;
   char cVar6;
   int *piVar7;
   HashMap *pHVar8;
   void *pvVar9;
   long lVar10;
   pHVar8 = *(HashMap**)( this + 0x88 );
   if (pHVar8 != (HashMap*)0x0) {
      pHVar8 = *(HashMap**)( pHVar8 + 8 );
   }

   HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::operator =((HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>*)( this + 0x58 ), pHVar8);
   plVar2 = *(long**)( this + 0x88 );
   if (( plVar2 == (long*)0x0 ) || ( pvVar3 = (void*)plVar2[1] ),pvVar3 == (void*)0x0) goto LAB_00123211;
   if (plVar2 == *(long**)( (long)pvVar3 + 0x40 )) {
      lVar10 = *(long*)( (long)pvVar3 + 0x30 );
      if (pvVar3 == (void*)*plVar2) {
         *plVar2 = lVar10;
      }

      lVar4 = *(long*)( (long)pvVar3 + 0x38 );
      plVar2[1] = lVar4;
      if (lVar4 != 0) {
         *(long*)( lVar4 + 0x30 ) = lVar10;
         lVar10 = *(long*)( (long)pvVar3 + 0x30 );
      }

      if (lVar10 != 0) {
         *(long*)( lVar10 + 0x38 ) = lVar4;
      }

      pvVar9 = *(void**)( (long)pvVar3 + 8 );
      if (pvVar9 != (void*)0x0) {
         if (*(int*)( (long)pvVar3 + 0x2c ) != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( (long)pvVar3 + 0x28 ) * 4 );
            if (uVar1 == 0) {
               *(undefined4*)( (long)pvVar3 + 0x2c ) = 0;
               *(undefined1(*) [16])( (long)pvVar3 + 0x18 ) = (undefined1[16])0x0;
            }
 else {
               lVar10 = 0;
               do {
                  piVar7 = (int*)( *(long*)( (long)pvVar3 + 0x10 ) + lVar10 );
                  if (*piVar7 != 0) {
                     pvVar9 = *(void**)( (long)pvVar9 + lVar10 * 2 );
                     *piVar7 = 0;
                     if (*(long*)( (long)pvVar9 + 0x50 ) != 0) {
                        cVar6 = RefCounted::unreference();
                        if (cVar6 != '\0') {
                           pOVar5 = *(Object**)( (long)pvVar9 + 0x50 );
                           cVar6 = predelete_handler(pOVar5);
                           if (cVar6 != '\0') {
                              ( **(code**)( *(long*)pOVar5 + 0x140 ) )();
                              Memory::free_static(pOVar5, false);
                           }

                        }

                     }

                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x40 ) != 0 )) {
                        StringName::unref();
                     }

                     CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar9 + 0x28 ));
                     if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar9 + 0x10 ) != 0 )) {
                        StringName::unref();
                     }

                     Memory::free_static(pvVar9, false);
                     pvVar9 = *(void**)( (long)pvVar3 + 8 );
                     *(undefined8*)( (long)pvVar9 + lVar10 * 2 ) = 0;
                  }

                  lVar10 = lVar10 + 4;
               }
 while ( lVar10 != (ulong)uVar1 << 2 );
               *(undefined4*)( (long)pvVar3 + 0x2c ) = 0;
               *(undefined1(*) [16])( (long)pvVar3 + 0x18 ) = (undefined1[16])0x0;
               if (pvVar9 == (void*)0x0) goto LAB_001231f5;
            }

         }

         Memory::free_static(pvVar9, false);
         Memory::free_static(*(void**)( (long)pvVar3 + 0x10 ), false);
      }

      LAB_001231f5:Memory::free_static(pvVar3, false);
      *(int*)( plVar2 + 2 ) = (int)plVar2[2] + -1;
   }
 else {
      _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
   }

   if (*(int*)( (long)*(void**)( this + 0x88 ) + 0x10 ) == 0) {
      Memory::free_static(*(void**)( this + 0x88 ), false);
      *(undefined8*)( this + 0x88 ) = 0;
   }

   LAB_00123211:/* WARNING: Could not recover jumptable at 0x0012322a. Too many branches *//* WARNING: Treating indirect jump as call */( **(code**)( **(long**)( this + 0x20 ) + 0x68 ) )();
   return;
}
/* GDScriptCompiler::CodeGen::start_block() */void GDScriptCompiler::CodeGen::start_block(CodeGen *this) {
   int *piVar1;
   long *plVar2;
   long lVar3;
   long *plVar4;
   void *pvVar5;
   Object *pOVar6;
   undefined8 uVar7;
   char cVar8;
   ulong uVar9;
   HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>> *this_00;
   undefined1(*pauVar10)[16];
   undefined8 *puVar11;
   int *piVar12;
   undefined8 *puVar13;
   long in_FS_OFFSET;
   StringName local_80[8];
   HashMap local_78[8];
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = (undefined1[16])0x0;
   local_50 = 0;
   local_60 = (undefined1[16])0x0;
   uVar9 = 1;
   if (5 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x80 ) * 4 )) {
      do {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x80 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar9 * 4 )) {
            local_50 = uVar9 & 0xffffffff;
            goto LAB_00123372;
         }

         uVar9 = uVar9 + 1;
      }
 while ( uVar9 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00123372:if (*(int*)( this + 0x84 ) == 0) {
      puVar11 = (undefined8*)0x0;
   }
 else {
      puVar11 = *(undefined8**)( this + 0x70 );
      if (puVar11 != (undefined8*)0x0) {
         do {
            HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::insert(local_80, local_78, (bool)( (char)puVar11 + '\x10' ));
            puVar11 = (undefined8*)*puVar11;
         }
 while ( puVar11 != (undefined8*)0x0 );
         puVar11 = (undefined8*)local_70._0_8_;
      }

   }

   if (*(long*)( this + 0x88 ) == 0) {
      pauVar10 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
      *(undefined1(**) [16])( this + 0x88 ) = pauVar10;
      *(undefined4*)pauVar10[1] = 0;
      *pauVar10 = (undefined1[16])0x0;
   }

   this_00 = (HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>*)operator_new(0x48, DefaultAllocator::alloc);
   *(undefined8*)( this_00 + 0x28 ) = 2;
   *(undefined8*)( this_00 + 0x40 ) = 0;
   *(undefined1(*) [16])( this_00 + 8 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
   HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>::operator =(this_00, local_78);
   plVar2 = *(long**)( this + 0x88 );
   lVar3 = plVar2[1];
   *(undefined8*)( this_00 + 0x30 ) = 0;
   *(long**)( this_00 + 0x40 ) = plVar2;
   *(long*)( this_00 + 0x38 ) = lVar3;
   if (lVar3 != 0) {
      *(HashMap<StringName,GDScriptCodeGenerator::Address,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCodeGenerator::Address>>>**)( lVar3 + 0x30 ) = this_00;
   }

   plVar2[1] = (long)this_00;
   if (*plVar2 == 0) {
      *plVar2 = (long)this_00;
   }

   plVar4 = *(long**)( this + 0x20 );
   *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
   ( **(code**)( *plVar4 + 0x60 ) )();
   if (puVar11 == (undefined8*)0x0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

   }
 else {
      uVar7 = local_70._8_8_;
      if (( local_50._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) != 0 )) {
         piVar1 = (int*)( local_70._8_8_ + ( ulong ) * (uint*)( hash_table_size_primes + ( local_50 & 0xffffffff ) * 4 ) * 4 );
         piVar12 = (int*)local_70._8_8_;
         puVar13 = puVar11;
         do {
            if (*piVar12 != 0) {
               pvVar5 = (void*)*puVar13;
               *piVar12 = 0;
               if (( *(long*)( (long)pvVar5 + 0x50 ) != 0 ) && ( cVar8 = cVar8 != '\0' )) {
                  pOVar6 = *(Object**)( (long)pvVar5 + 0x50 );
                  cVar8 = predelete_handler(pOVar6);
                  if (cVar8 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )();
                     Memory::free_static(pOVar6, false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x40 ) != 0 )) {
                  StringName::unref();
               }

               CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( (long)pvVar5 + 0x28 ));
               if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar5 + 0x10 ) != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(pvVar5, false);
               *puVar13 = 0;
            }

            piVar12 = piVar12 + 1;
            puVar13 = puVar13 + 1;
         }
 while ( piVar12 != piVar1 );
      }

      Memory::free_static(puVar11, false);
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         Memory::free_static((void*)uVar7, false);
         return;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, GDScript::MemberInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScript::MemberInfo> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>::_resize_and_rehash(HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, GDScript::MemberInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScript::MemberInfo> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>::operator [](HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>> * this, StringName * param_1) * plVar1 ;undefined8 *puVar2uint *puVar3Object *pOVar4undefined8 *puVar5void *__sundefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]char cVar30uint uVar31uint uVar32uint uVar33undefined8 *puVar34undefined8 uVar35void *__s_00long lVar36int iVar37long lVar38long lVar39ulong uVar40uint uVar41uint uVar42uint uVar43ulong uVar44long lVar45ulong uVar46undefined8 *puVar47long in_FS_OFFSETbyte bVar48CowData<GDScriptDataType> *local_160undefined4 local_158[2]long local_150long local_148GDScriptDataType local_140[8]long local_138undefined4 local_130undefined1 local_12cundefined4 local_128long local_120undefined8 local_118Object *local_110undefined4 local_108long local_100long local_f8undefined4 local_f0long local_e8undefined4 local_e0undefined1 local_d8[16]long local_c8undefined4 local_c0long local_b8long local_b0GDScriptDataType local_a8[8]long local_a0undefined4 local_98undefined1 local_94undefined4 local_90StringName local_88[8]undefined8 uStack_80Object *local_78undefined4 local_70long local_68long local_60undefined4 local_58long local_50undefined4 local_48long local_40bVar48 = 0;lVar45 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar32);if (( lVar45 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
   lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   if (*(long*)param_1 == 0) {
      uVar31 = StringName::get_empty_hash();
      lVar45 = *(long*)( this + 8 );
   }
 else {
      uVar31 = *(uint*)( *(long*)param_1 + 0x20 );
   }

   if (uVar31 == 0) {
      uVar31 = 1;
   }

   auVar6._8_8_ = 0;
   auVar6._0_8_ = (ulong)uVar31 * lVar36;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar40;
   lVar38 = SUB168(auVar6 * auVar18, 8);
   uVar41 = SUB164(auVar6 * auVar18, 8);
   uVar33 = *(uint*)( *(long*)( this + 0x10 ) + lVar38 * 4 );
   if (uVar33 != 0) {
      uVar42 = 0;
      do {
         if (( uVar31 == uVar33 ) && ( *(long*)( *(long*)( lVar45 + lVar38 * 8 ) + 0x10 ) == *(long*)param_1 )) {
            puVar34 = (undefined8*)( *(long*)( lVar45 + (ulong)uVar41 * 8 ) + 0x18 );
            goto LAB_001241de;
         }

         uVar42 = uVar42 + 1;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = ( ulong )(uVar41 + 1) * lVar36;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar40;
         lVar38 = SUB168(auVar7 * auVar19, 8);
         uVar33 = *(uint*)( *(long*)( this + 0x10 ) + lVar38 * 4 );
         uVar41 = SUB164(auVar7 * auVar19, 8);
      }
 while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar36,auVar20._8_8_ = 0,auVar20._0_8_ = uVar40,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar41 + uVar32 ) - SUB164(auVar8 * auVar20, 8)) * lVar36,auVar21._8_8_ = 0,auVar21._0_8_ = uVar40,uVar42 <= SUB164(auVar9 * auVar21, 8) );
   }

}
puVar34 = (undefined8*)local_158;for (lVar36 = 0x10; lVar36 != 0; lVar36 = lVar36 + -1) {
   *puVar34 = 0;
   puVar34 = puVar34 + (ulong)bVar48 * -2 + 1;
}
local_e0 = 6;uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (lVar45 == 0) {
   uVar46 = (ulong)uVar32;
   uVar40 = uVar46 * 4;
   uVar44 = uVar46 * 8;
   uVar35 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar35;
   __s_00 = (void*)Memory::alloc_static(uVar44, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar32 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar46 != uVar40 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar44);
      }

      goto LAB_001239a0;
   }

   iVar37 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_00123b63;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_001239b0;
   LAB_00123b85:if (*(int*)( this + 0x28 ) == 0x1c) {
      puVar34 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001240e7;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   LAB_001239a0:iVar37 = *(int*)( this + 0x2c );
   if (iVar37 != 0) {
      LAB_001239b0:uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar33 = StringName::get_empty_hash();
      }
 else {
         uVar33 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      uVar40 = CONCAT44(0, uVar31);
      if (uVar33 == 0) {
         uVar33 = 1;
      }

      uVar43 = 0;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar33 * lVar45;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar40;
      lVar36 = SUB168(auVar10 * auVar22, 8);
      uVar42 = SUB164(auVar10 * auVar22, 8);
      uVar41 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
      if (uVar41 != 0) {
         do {
            if (( uVar41 == uVar33 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar36 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               lVar45 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar42 * 8 );
               *(undefined4*)( lVar45 + 0x18 ) = local_158[0];
               StringName::operator =((StringName*)( lVar45 + 0x20 ), (StringName*)&local_150);
               StringName::operator =((StringName*)( lVar45 + 0x28 ), (StringName*)&local_148);
               GDScriptDataType::operator =((GDScriptDataType*)( lVar45 + 0x30 ), local_140);
               *(undefined4*)( lVar45 + 0x68 ) = local_108;
               if (*(long*)( lVar45 + 0x70 ) != local_100) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar45 + 0x70 ), (CowData*)&local_100);
               }

               StringName::operator =((StringName*)( lVar45 + 0x78 ), (StringName*)&local_f8);
               *(undefined4*)( lVar45 + 0x80 ) = local_f0;
               if (*(long*)( lVar45 + 0x88 ) != local_e8) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar45 + 0x88 ), (CowData*)&local_e8);
               }

               *(undefined4*)( lVar45 + 0x90 ) = local_e0;
               puVar34 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar42 * 8 );
               goto LAB_001240e7;
            }

            uVar43 = uVar43 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar42 + 1) * lVar45;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar40;
            lVar36 = SUB168(auVar11 * auVar23, 8);
            uVar41 = *(uint*)( *(long*)( this + 0x10 ) + lVar36 * 4 );
            uVar42 = SUB164(auVar11 * auVar23, 8);
         }
 while ( ( uVar41 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar41 * lVar45,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar31 + uVar42 ) - SUB164(auVar12 * auVar24, 8)) * lVar45,auVar25._8_8_ = 0,auVar25._0_8_ = uVar40,uVar43 <= SUB164(auVar13 * auVar25, 8) );
      }

      iVar37 = *(int*)( this + 0x2c );
   }

   LAB_00123b63:if ((float)uVar32 * __LC11 < (float)( iVar37 + 1 )) goto LAB_00123b85;
}
local_d8 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_c8, param_1);local_c0 = local_158[0];StringName::StringName((StringName*)&local_b8, (StringName*)&local_150);StringName::StringName((StringName*)&local_b0, (StringName*)&local_148);local_a0 = 0;local_98 = local_130;local_78 = (Object*)0x0;local_94 = local_12c;_local_88 = (undefined1[16])0x0;local_90 = local_128;StringName::operator =(local_88, (StringName*)&local_120);pOVar4 = local_78;uStack_80 = local_118;if (local_110 != local_78) {
   local_78 = local_110;
   if (( local_110 != (Object*)0x0 ) && ( cVar30 = cVar30 == '\0' )) {
      local_78 = (Object*)0x0;
   }

   if (( ( pOVar4 != (Object*)0x0 ) && ( cVar30 = RefCounted::unreference() ),cVar30 != '\0' )) &&( cVar30 = cVar30 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
}if (local_a0 != local_138) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)&local_a0, (CowData*)&local_138);
}
local_68 = 0;local_70 = local_108;if (local_100 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)&local_100);
}
StringName::StringName((StringName*)&local_60, (StringName*)&local_f8);local_50 = 0;local_58 = local_f0;if (local_e8 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)&local_e8);
}
local_48 = local_e0;puVar34 = (undefined8*)operator_new(0x98, "");*puVar34 = local_d8._0_8_;puVar34[1] = local_d8._8_8_;StringName::StringName((StringName*)( puVar34 + 2 ), (StringName*)&local_c8);*(undefined4*)( puVar34 + 3 ) = local_c0;StringName::StringName((StringName*)( puVar34 + 4 ), (StringName*)&local_b8);StringName::StringName((StringName*)( puVar34 + 5 ), (StringName*)&local_b0);*(undefined1*)( (long)puVar34 + 0x44 ) = 0;*(undefined4*)( puVar34 + 8 ) = 0;puVar34[7] = 0;*(undefined4*)( puVar34 + 9 ) = 0;*(undefined4*)( puVar34 + 8 ) = local_98;puVar34[0xc] = 0;*(undefined1*)( (long)puVar34 + 0x44 ) = local_94;*(undefined1(*) [16])( puVar34 + 10 ) = (undefined1[16])0x0;*(undefined4*)( puVar34 + 9 ) = local_90;StringName::operator =((StringName*)( puVar34 + 10 ), local_88);pOVar4 = (Object*)puVar34[0xc];puVar34[0xb] = uStack_80;if (local_78 != pOVar4) {
   puVar34[0xc] = local_78;
   if (( local_78 != (Object*)0x0 ) && ( cVar30 = cVar30 == '\0' )) {
      puVar34[0xc] = 0;
   }

   if (( ( pOVar4 != (Object*)0x0 ) && ( cVar30 = RefCounted::unreference() ),cVar30 != '\0' )) &&( cVar30 = cVar30 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
}if (puVar34[7] != local_a0) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( puVar34 + 7 ), (CowData*)&local_a0);
}
puVar34[0xe] = 0;*(undefined4*)( puVar34 + 0xd ) = local_70;if (local_68 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 0xe ), (CowData*)&local_68);
}
StringName::StringName((StringName*)( puVar34 + 0xf ), (StringName*)&local_60);puVar34[0x11] = 0;*(undefined4*)( puVar34 + 0x10 ) = local_58;if (local_50 == 0) {
   *(undefined4*)( puVar34 + 0x12 ) = local_48;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar34 + 0x11 ), (CowData*)&local_50);
   lVar45 = local_50;
   *(undefined4*)( puVar34 + 0x12 ) = local_48;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar45 + -0x10 ), false);
      }

   }

}
if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
   StringName::unref();
}
lVar45 = local_68;if (local_68 != 0) {
   LOCK();
   plVar1 = (long*)( local_68 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void*)( lVar45 + -0x10 ), false);
   }

}
GDScriptDataType::~GDScriptDataType(local_a8);if (( ( ( StringName::configured != '\0' ) && ( ( local_b0 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_c8 != 0 )) {
   StringName::unref();
}
puVar5 = *(undefined8**)( this + 0x20 );if (puVar5 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar34;
}
 else {
   *puVar5 = puVar34;
   puVar34[1] = puVar5;
}
*(undefined8**)( this + 0x20 ) = puVar34;if (*(long*)param_1 == 0) {
   uVar32 = StringName::get_empty_hash();
}
 else {
   uVar32 = *(uint*)( *(long*)param_1 + 0x20 );
}
if (uVar32 == 0) {
   uVar32 = 1;
}
uVar40 = (ulong)uVar32;uVar41 = 0;lVar45 = *(long*)( this + 0x10 );lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar44 = CONCAT44(0, uVar31);auVar14._8_8_ = 0;auVar14._0_8_ = uVar40 * lVar36;auVar26._8_8_ = 0;auVar26._0_8_ = uVar44;lVar39 = SUB168(auVar14 * auVar26, 8);lVar38 = *(long*)( this + 8 );puVar3 = (uint*)( lVar45 + lVar39 * 4 );iVar37 = SUB164(auVar14 * auVar26, 8);uVar33 = *puVar3;puVar5 = puVar34;while (uVar33 != 0) {
   auVar15._8_8_ = 0;
   auVar15._0_8_ = (ulong)uVar33 * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar44;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(( iVar37 + uVar31 ) - SUB164(auVar15 * auVar27, 8)) * lVar36;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar44;
   uVar32 = SUB164(auVar16 * auVar28, 8);
   puVar47 = puVar5;
   if (uVar32 < uVar41) {
      *puVar3 = (uint)uVar40;
      uVar40 = (ulong)uVar33;
      puVar2 = (undefined8*)( lVar38 + lVar39 * 8 );
      puVar47 = (undefined8*)*puVar2;
      *puVar2 = puVar5;
      uVar41 = uVar32;
   }

   uVar32 = (uint)uVar40;
   uVar41 = uVar41 + 1;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = ( ulong )(iVar37 + 1) * lVar36;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar44;
   lVar39 = SUB168(auVar17 * auVar29, 8);
   puVar3 = (uint*)( lVar45 + lVar39 * 4 );
   iVar37 = SUB164(auVar17 * auVar29, 8);
   puVar5 = puVar47;
   uVar33 = *puVar3;
}
;*(undefined8**)( lVar38 + lVar39 * 8 ) = puVar5;*puVar3 = uVar32;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001240e7:lVar45 = local_e8;local_160 = (CowData<GDScriptDataType>*)&local_138;puVar34 = puVar34 + 3;if (local_e8 != 0) {
   LOCK();
   plVar1 = (long*)( local_e8 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_e8 = 0;
      Memory::free_static((void*)( lVar45 + -0x10 ), false);
   }

}
if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
   StringName::unref();
}
lVar45 = local_100;if (local_100 != 0) {
   LOCK();
   plVar1 = (long*)( local_100 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_100 = 0;
      Memory::free_static((void*)( lVar45 + -0x10 ), false);
   }

}
if (( ( local_110 != (Object*)0x0 ) && ( cVar30 = RefCounted::unreference() ),cVar30 != '\0' )) &&( cVar30 = cVar30 != '\0' )(**(code**)( *(long*)local_110 + 0x140 ))(local_110);Memory::free_static(local_110, false);}if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref(local_160);if (( ( StringName::configured != '\0' ) && ( ( local_148 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_150 != 0 )) {
   StringName::unref();
}
LAB_001241de:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar34;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, GDScript::MemberInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScript::MemberInfo> > >::insert(StringName const&, GDScript::MemberInfo const&, bool) */StringName *
HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>
::insert(StringName *param_1,MemberInfo *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   ulong __n;
   uint uVar3;
   Object *pOVar4;
   Object *pOVar5;
   undefined8 *puVar6;
   long lVar7;
   void *__s;
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
   char cVar24;
   uint uVar25;
   uint uVar26;
   long *plVar27;
   long lVar28;
   undefined8 uVar29;
   void *__s_00;
   ulong uVar30;
   undefined4 *in_RCX;
   uint uVar31;
   int iVar32;
   undefined7 in_register_00000011;
   StringName *pSVar33;
   long lVar34;
   long lVar35;
   char in_R8B;
   uint uVar36;
   uint uVar37;
   ulong uVar38;
   long *plVar39;
   long in_FS_OFFSET;
   long local_c8;
   undefined4 local_c0;
   long local_b8;
   long local_b0[2];
   long local_a0;
   undefined4 local_98;
   undefined1 local_94;
   undefined4 local_90;
   undefined1 local_88[16];
   Object *local_78;
   undefined4 local_70;
   long local_68;
   long local_60;
   undefined4 local_58;
   long local_50;
   undefined4 local_48;
   long local_40;
   pSVar33 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar25 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar38 = (ulong)uVar25;
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar30 = uVar38 * 4;
      __n = uVar38 * 8;
      uVar29 = Memory::alloc_static(uVar30, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar29;
      __s_00 = (void*)Memory::alloc_static(__n, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar25 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar30 ) )) {
            uVar30 = 0;
            do {
               *(undefined4*)( (long)__s + uVar30 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar30 * 8 ) = 0;
               uVar30 = uVar30 + 1;
            }
 while ( uVar38 != uVar30 );
         }
 else {
            memset(__s, 0, uVar30);
            memset(__s_00, 0, __n);
         }

         goto LAB_00124505;
      }

      iVar32 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_001246ef;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00124511;
      LAB_00124711:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar27 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00124c6d;
      }

      _resize_and_rehash((HashMap<StringName,GDScript::MemberInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScript::MemberInfo>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_00124505:iVar32 = *(int*)( param_2 + 0x2c );
      if (iVar32 != 0) {
         LAB_00124511:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar33 == 0) {
            uVar26 = StringName::get_empty_hash();
         }
 else {
            uVar26 = *(uint*)( *(long*)pSVar33 + 0x20 );
         }

         uVar38 = CONCAT44(0, uVar3);
         if (uVar26 == 0) {
            uVar26 = 1;
         }

         uVar37 = 0;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar26 * lVar28;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar38;
         lVar34 = SUB168(auVar8 * auVar16, 8);
         uVar36 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar34 * 4 );
         uVar31 = SUB164(auVar8 * auVar16, 8);
         if (uVar36 != 0) {
            do {
               if (( uVar26 == uVar36 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar34 * 8 ) + 0x10 ) == *(long*)pSVar33 )) {
                  lVar28 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar31 * 8 );
                  *(undefined4*)( lVar28 + 0x18 ) = *in_RCX;
                  StringName::operator =((StringName*)( lVar28 + 0x20 ), (StringName*)( in_RCX + 2 ));
                  StringName::operator =((StringName*)( lVar28 + 0x28 ), (StringName*)( in_RCX + 4 ));
                  *(undefined4*)( lVar28 + 0x40 ) = in_RCX[10];
                  *(undefined1*)( lVar28 + 0x44 ) = *(undefined1*)( in_RCX + 0xb );
                  *(undefined4*)( lVar28 + 0x48 ) = in_RCX[0xc];
                  StringName::operator =((StringName*)( lVar28 + 0x50 ), (StringName*)( in_RCX + 0xe ));
                  pOVar5 = *(Object**)( lVar28 + 0x60 );
                  *(undefined8*)( lVar28 + 0x58 ) = *(undefined8*)( in_RCX + 0x10 );
                  pOVar4 = *(Object**)( in_RCX + 0x12 );
                  if (pOVar4 != pOVar5) {
                     *(Object**)( lVar28 + 0x60 ) = pOVar4;
                     if (( pOVar4 != (Object*)0x0 ) && ( cVar24 = cVar24 == '\0' )) {
                        *(undefined8*)( lVar28 + 0x60 ) = 0;
                     }

                     if (( ( pOVar5 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

               if (*(long*)( lVar28 + 0x38 ) != *(long*)( in_RCX + 8 )) {
                  CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( lVar28 + 0x38 ), (CowData*)( in_RCX + 8 ));
               }

               *(undefined4*)( lVar28 + 0x68 ) = in_RCX[0x14];
               if (*(long*)( lVar28 + 0x70 ) != *(long*)( in_RCX + 0x16 )) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar28 + 0x70 ), (CowData*)( in_RCX + 0x16 ));
               }

               StringName::operator =((StringName*)( lVar28 + 0x78 ), (StringName*)( in_RCX + 0x18 ));
               *(undefined4*)( lVar28 + 0x80 ) = in_RCX[0x1a];
               if (*(long*)( lVar28 + 0x88 ) != *(long*)( in_RCX + 0x1c )) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)( lVar28 + 0x88 ), (CowData*)( in_RCX + 0x1c ));
               }

               *(undefined4*)( lVar28 + 0x90 ) = in_RCX[0x1e];
               plVar27 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar31 * 8 );
               goto LAB_00124c6d;
            }
 while ( ( uVar36 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar36 * lVar28,auVar18._8_8_ = 0,auVar18._0_8_ = uVar38,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar3 + uVar31 ) - SUB164(auVar10 * auVar18, 8)) * lVar28,auVar19._8_8_ = 0,auVar19._0_8_ = uVar38,uVar37 <= SUB164(auVar11 * auVar19, 8) );
         }

         iVar32 = *(int*)( param_2 + 0x2c );
      }

      LAB_001246ef:if ((float)uVar25 * __LC11 < (float)( iVar32 + 1 )) goto LAB_00124711;
   }

   StringName::StringName((StringName*)&local_c8, pSVar33);
   local_c0 = *in_RCX;
   StringName::StringName((StringName*)&local_b8, (StringName*)( in_RCX + 2 ));
   StringName::StringName((StringName*)local_b0, (StringName*)( in_RCX + 4 ));
   local_98 = in_RCX[10];
   local_88 = (undefined1[16])0x0;
   local_94 = *(undefined1*)( in_RCX + 0xb );
   local_a0 = 0;
   local_90 = in_RCX[0xc];
   local_78 = (Object*)0x0;
   StringName::operator =((StringName*)local_88, (StringName*)( in_RCX + 0xe ));
   pOVar4 = local_78;
   pOVar5 = *(Object**)( in_RCX + 0x12 );
   local_88._8_8_ = *(undefined8*)( in_RCX + 0x10 );
   if (pOVar5 != local_78) {
      local_78 = pOVar5;
      if (( pOVar5 != (Object*)0x0 ) && ( cVar24 = cVar24 == '\0' )) {
         local_78 = (Object*)0x0;
      }

      if (( ( pOVar4 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
      Memory::free_static(pOVar4, false);
   }

}
if (local_a0 != *(long*)( in_RCX + 8 )) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)&local_a0, (CowData*)( in_RCX + 8 ));
}
local_70 = in_RCX[0x14];local_68 = 0;if (*(long*)( in_RCX + 0x16 ) != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( in_RCX + 0x16 ));
}
StringName::StringName((StringName*)&local_60, (StringName*)( in_RCX + 0x18 ));local_58 = in_RCX[0x1a];local_50 = 0;if (*(long*)( in_RCX + 0x1c ) != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( in_RCX + 0x1c ));
}
local_48 = in_RCX[0x1e];plVar27 = (long*)operator_new(0x98, "");*plVar27 = 0;plVar27[1] = 0;StringName::StringName((StringName*)( plVar27 + 2 ), (StringName*)&local_c8);*(undefined4*)( plVar27 + 3 ) = local_c0;StringName::StringName((StringName*)( plVar27 + 4 ), (StringName*)&local_b8);StringName::StringName((StringName*)( plVar27 + 5 ), (StringName*)local_b0);*(undefined4*)( plVar27 + 8 ) = 0;plVar27[7] = 0;*(undefined1*)( (long)plVar27 + 0x44 ) = 0;*(undefined4*)( plVar27 + 8 ) = local_98;*(undefined4*)( plVar27 + 9 ) = 0;*(undefined1*)( (long)plVar27 + 0x44 ) = local_94;plVar27[0xc] = 0;*(undefined4*)( plVar27 + 9 ) = local_90;*(undefined1(*) [16])( plVar27 + 10 ) = (undefined1[16])0x0;StringName::operator =((StringName*)( plVar27 + 10 ), (StringName*)local_88);pOVar5 = (Object*)plVar27[0xc];plVar27[0xb] = local_88._8_8_;if (local_78 != pOVar5) {
   plVar27[0xc] = (long)local_78;
   if (( local_78 != (Object*)0x0 ) && ( cVar24 = cVar24 == '\0' )) {
      plVar27[0xc] = 0;
   }

   if (( ( pOVar5 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
   Memory::free_static(pOVar5, false);
}
}if (plVar27[7] != local_a0) {
   CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( plVar27 + 7 ), (CowData*)&local_a0);
}
plVar27[0xe] = 0;*(undefined4*)( plVar27 + 0xd ) = local_70;if (local_68 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( plVar27 + 0xe ), (CowData*)&local_68);
}
StringName::StringName((StringName*)( plVar27 + 0xf ), (StringName*)&local_60);plVar27[0x11] = 0;*(undefined4*)( plVar27 + 0x10 ) = local_58;if (local_50 == 0) {
   *(undefined4*)( plVar27 + 0x12 ) = local_48;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)( plVar27 + 0x11 ), (CowData*)&local_50);
   lVar28 = local_50;
   *(undefined4*)( plVar27 + 0x12 ) = local_48;
   if (local_50 != 0) {
      LOCK();
      plVar1 = (long*)( local_50 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_50 = 0;
         Memory::free_static((void*)( lVar28 + -0x10 ), false);
      }

   }

}
if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
   StringName::unref();
}
lVar28 = local_68;if (local_68 != 0) {
   LOCK();
   plVar1 = (long*)( local_68 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      local_68 = 0;
      Memory::free_static((void*)( lVar28 + -0x10 ), false);
   }

}
if (( ( local_78 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),pOVar5 = local_78,cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))();Memory::free_static(pOVar5, false);}if (( StringName::configured != '\0' ) && ( local_88._0_8_ != 0 )) {
   StringName::unref();
}
CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_a0);if (( ( ( StringName::configured != '\0' ) && ( ( local_b0[0] == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( ( local_b8 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) ) ) && ( local_c8 != 0 )) {
   StringName::unref();
}
puVar6 = *(undefined8**)( param_2 + 0x20 );if (puVar6 == (undefined8*)0x0) {
   *(long**)( param_2 + 0x18 ) = plVar27;
   *(long**)( param_2 + 0x20 ) = plVar27;
   LAB_00124b72:lVar28 = *(long*)pSVar33;
   if (lVar28 != 0) goto LAB_00124b82;
   LAB_00124cc3:uVar25 = StringName::get_empty_hash();
}
 else {
   if (in_R8B != '\0') {
      lVar28 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar28 + 8 ) = plVar27;
      *plVar27 = lVar28;
      *(long**)( param_2 + 0x18 ) = plVar27;
      goto LAB_00124b72;
   }

   *puVar6 = plVar27;
   plVar27[1] = (long)puVar6;
   *(long**)( param_2 + 0x20 ) = plVar27;
   lVar28 = *(long*)pSVar33;
   if (lVar28 == 0) goto LAB_00124cc3;
   LAB_00124b82:uVar25 = *(uint*)( lVar28 + 0x20 );
}
lVar28 = *(long*)( param_2 + 0x10 );if (uVar25 == 0) {
   uVar25 = 1;
}
uVar38 = (ulong)uVar25;uVar36 = 0;lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );uVar30 = CONCAT44(0, uVar3);auVar12._8_8_ = 0;auVar12._0_8_ = uVar38 * lVar34;auVar20._8_8_ = 0;auVar20._0_8_ = uVar30;lVar35 = SUB168(auVar12 * auVar20, 8);lVar7 = *(long*)( param_2 + 8 );puVar2 = (uint*)( lVar28 + lVar35 * 4 );iVar32 = SUB164(auVar12 * auVar20, 8);uVar26 = *puVar2;plVar1 = plVar27;while (uVar26 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar26 * lVar34;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar30;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( iVar32 + uVar3 ) - SUB164(auVar13 * auVar21, 8)) * lVar34;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar30;
   uVar25 = SUB164(auVar14 * auVar22, 8);
   plVar39 = plVar1;
   if (uVar25 < uVar36) {
      *puVar2 = (uint)uVar38;
      uVar38 = (ulong)uVar26;
      puVar6 = (undefined8*)( lVar7 + lVar35 * 8 );
      plVar39 = (long*)*puVar6;
      *puVar6 = plVar1;
      uVar36 = uVar25;
   }

   uVar25 = (uint)uVar38;
   uVar36 = uVar36 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar32 + 1) * lVar34;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar30;
   lVar35 = SUB168(auVar15 * auVar23, 8);
   puVar2 = (uint*)( lVar28 + lVar35 * 4 );
   iVar32 = SUB164(auVar15 * auVar23, 8);
   plVar1 = plVar39;
   uVar26 = *puVar2;
}
;*(long**)( lVar7 + lVar35 * 8 ) = plVar1;*puVar2 = uVar25;*(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;LAB_00124c6d:*(long**)param_1 = plVar27;if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return param_1;}/* CowData<GDScriptCodeGenerator::Address>::_unref() */void CowData<GDScriptCodeGenerator::Address>::_unref(CowData<GDScriptCodeGenerator::Address> *this) {
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
            plVar6 = (long*)( lVar1 + 0x28 );
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
               plVar6 = plVar6 + 8;
               CowData<GDScriptDataType>::_unref(this_00);
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
   LAB_001257e0:local_90 = (undefined1[16])0x0;
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

      LAB_0012540e:iVar32 = *(int*)( this + 0x2c );
      if (iVar32 != 0) {
         LAB_0012541e:uVar27 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
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
                  goto LAB_00125740;
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

      goto LAB_00125545;
   }

   iVar32 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_00125545;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_0012541e;
   LAB_00125567:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_a8 = (Variant*)0x18;
      goto LAB_00125740;
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
               goto LAB_001253b4;
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
      if (lVar40 == 0) goto LAB_001257e0;
      goto LAB_0012540e;
   }

   local_98[0] = 0;
   local_98[1] = 0;
   local_90 = (undefined1[16])0x0;
   iVar32 = 0;
   LAB_00125545:if ((float)uVar36 * __LC11 < (float)( iVar32 + 1 )) goto LAB_00125567;
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
;*(undefined8**)( lVar33 + lVar35 * 8 ) = puVar29;*puVar1 = uVar27;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00125740:if (Variant::needs_deinit[local_98[0]] != '\0') {
   Variant::_clear_internal();
}
LAB_001253b4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
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

         goto LAB_00125952;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00125a49;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0012595e;
      LAB_00125a6b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_90 = (undefined8*)0x0;
         goto LAB_00125c23;
      }

      _resize_and_rehash((HashMap<StringName,Variant,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Variant>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_00125952:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_0012595e:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
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
                  goto LAB_00125c23;
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

      LAB_00125a49:if ((float)uVar23 * __LC11 < (float)( iVar28 + 1 )) goto LAB_00125a6b;
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
      LAB_00125b42:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_00125b4f;
      LAB_00125c85:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         **(undefined8**)( param_2 + 0x20 ) = local_90;
         local_90[1] = *(undefined8*)( param_2 + 0x20 );
         *(undefined8**)( param_2 + 0x20 ) = local_90;
         goto LAB_00125b42;
      }

      *(undefined8**)( *(long*)( param_2 + 0x18 ) + 8 ) = local_90;
      *local_90 = *(undefined8*)( param_2 + 0x18 );
      lVar25 = *(long*)pSVar29;
      *(undefined8**)( param_2 + 0x18 ) = local_90;
      if (lVar25 == 0) goto LAB_00125c85;
      LAB_00125b4f:uVar23 = *(uint*)( lVar25 + 0x20 );
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
   LAB_00125c23:*(undefined8**)param_1 = local_90;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, ProjectSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ProjectSettings::AutoloadInfo> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>::_resize_and_rehash(HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ProjectSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ProjectSettings::AutoloadInfo> > >::insert(StringName const&, ProjectSettings::AutoloadInfo
   const&, bool) */StringName *
HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>
::insert(StringName *param_1,AutoloadInfo *param_2,bool param_3){
   long *plVar1;
   uint *puVar2;
   uint uVar3;
   undefined8 *puVar4;
   long lVar5;
   void *__s;
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
   uint uVar23;
   uint uVar24;
   long *plVar25;
   long lVar26;
   undefined8 uVar27;
   void *__s_00;
   StringName *in_RCX;
   uint uVar28;
   int iVar29;
   undefined7 in_register_00000011;
   StringName *pSVar30;
   long lVar31;
   long lVar32;
   char in_R8B;
   uint uVar33;
   ulong uVar34;
   uint uVar35;
   ulong uVar36;
   long *plVar37;
   long in_FS_OFFSET;
   long local_68;
   long local_60;
   long local_58;
   StringName local_50;
   long local_40;
   pSVar30 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar22 = (ulong)uVar23;
      uVar36 = uVar22 * 4;
      uVar34 = uVar22 * 8;
      uVar27 = Memory::alloc_static(uVar36, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar27;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar36 ) )) {
            uVar36 = 0;
            do {
               *(undefined4*)( (long)__s + uVar36 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar36 * 8 ) = 0;
               uVar36 = uVar36 + 1;
            }
 while ( uVar22 != uVar36 );
         }
 else {
            memset(__s, 0, uVar36);
            memset(__s_00, 0, uVar34);
         }

         goto LAB_00126070;
      }

      iVar29 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00126188;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0012607c;
      LAB_001261aa:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar25 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_001263d6;
      }

      _resize_and_rehash((HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_00126070:iVar29 = *(int*)( param_2 + 0x2c );
      if (iVar29 != 0) {
         LAB_0012607c:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar36 = CONCAT44(0, uVar3);
         lVar26 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar30 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar30 + 0x20 );
         }

         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar35 = 0;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = (ulong)uVar24 * lVar26;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar36;
         lVar31 = SUB168(auVar6 * auVar14, 8);
         uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
         uVar28 = SUB164(auVar6 * auVar14, 8);
         if (uVar33 != 0) {
            do {
               if (( uVar33 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar31 * 8 ) + 0x10 ) == *(long*)pSVar30 )) {
                  lVar26 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  StringName::operator =((StringName*)( lVar26 + 0x18 ), in_RCX);
                  if (*(long*)( lVar26 + 0x20 ) != *(long*)( in_RCX + 8 )) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar26 + 0x20 ), (CowData*)( in_RCX + 8 ));
                  }

                  *(StringName*)( lVar26 + 0x28 ) = in_RCX[0x10];
                  plVar25 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar28 * 8 );
                  goto LAB_001263d6;
               }

               uVar35 = uVar35 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar28 + 1) * lVar26;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar36;
               lVar31 = SUB168(auVar7 * auVar15, 8);
               uVar33 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar31 * 4 );
               uVar28 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar33 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar33 * lVar26,auVar16._8_8_ = 0,auVar16._0_8_ = uVar36,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar28 ) - SUB164(auVar8 * auVar16, 8)) * lVar26,auVar17._8_8_ = 0,auVar17._0_8_ = uVar36,uVar35 <= SUB164(auVar9 * auVar17, 8) );
         }

         iVar29 = *(int*)( param_2 + 0x2c );
      }

      LAB_00126188:if ((float)uVar23 * __LC11 < (float)( iVar29 + 1 )) goto LAB_001261aa;
   }

   StringName::StringName((StringName*)&local_68, pSVar30);
   StringName::StringName((StringName*)&local_60, in_RCX);
   local_58 = 0;
   if (*(long*)( in_RCX + 8 ) != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( in_RCX + 8 ));
   }

   local_50 = in_RCX[0x10];
   plVar25 = (long*)operator_new(0x30, "");
   *plVar25 = 0;
   plVar25[1] = 0;
   StringName::StringName((StringName*)( plVar25 + 2 ), (StringName*)&local_68);
   StringName::StringName((StringName*)( plVar25 + 3 ), (StringName*)&local_60);
   plVar25[4] = 0;
   if (local_58 == 0) {
      *(StringName*)( plVar25 + 5 ) = local_50;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( plVar25 + 4 ), (CowData*)&local_58);
      lVar26 = local_58;
      *(StringName*)( plVar25 + 5 ) = local_50;
      if (local_58 != 0) {
         LOCK();
         plVar1 = (long*)( local_58 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_58 = 0;
            Memory::free_static((void*)( lVar26 + -0x10 ), false);
         }

      }

   }

   if (( StringName::configured != '\0' ) && ( ( ( local_60 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_68 != 0 ) ) )) {
      StringName::unref();
   }

   puVar4 = *(undefined8**)( param_2 + 0x20 );
   if (puVar4 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar25;
      *(long**)( param_2 + 0x20 ) = plVar25;
      LAB_001262db:lVar26 = *(long*)pSVar30;
      if (lVar26 != 0) goto LAB_001262e8;
      LAB_0012642c:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar4 = plVar25;
         plVar25[1] = (long)puVar4;
         *(long**)( param_2 + 0x20 ) = plVar25;
         goto LAB_001262db;
      }

      lVar26 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar26 + 8 ) = plVar25;
      *plVar25 = lVar26;
      lVar26 = *(long*)pSVar30;
      *(long**)( param_2 + 0x18 ) = plVar25;
      if (lVar26 == 0) goto LAB_0012642c;
      LAB_001262e8:uVar23 = *(uint*)( lVar26 + 0x20 );
   }

   lVar26 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar36 = (ulong)uVar23;
   uVar33 = 0;
   lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar3);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar36 * lVar31;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar34;
   lVar32 = SUB168(auVar10 * auVar18, 8);
   lVar5 = *(long*)( param_2 + 8 );
   puVar2 = (uint*)( lVar26 + lVar32 * 4 );
   iVar29 = SUB164(auVar10 * auVar18, 8);
   uVar24 = *puVar2;
   plVar1 = plVar25;
   while (uVar24 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar24 * lVar31;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( iVar29 + uVar3 ) - SUB164(auVar11 * auVar19, 8)) * lVar31;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar34;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      plVar37 = plVar1;
      if (uVar23 < uVar33) {
         *puVar2 = (uint)uVar36;
         uVar36 = (ulong)uVar24;
         puVar4 = (undefined8*)( lVar5 + lVar32 * 8 );
         plVar37 = (long*)*puVar4;
         *puVar4 = plVar1;
         uVar33 = uVar23;
      }

      uVar23 = (uint)uVar36;
      uVar33 = uVar33 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar29 + 1) * lVar31;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar34;
      lVar32 = SUB168(auVar13 * auVar21, 8);
      puVar2 = (uint*)( lVar26 + lVar32 * 4 );
      iVar29 = SUB164(auVar13 * auVar21, 8);
      plVar1 = plVar37;
      uVar24 = *puVar2;
   }
;
   *(long**)( lVar5 + lVar32 * 8 ) = plVar1;
   *puVar2 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_001263d6:*(long**)param_1 = plVar25;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, ProjectSettings::AutoloadInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   ProjectSettings::AutoloadInfo> > >::operator[](StringName const&) */StringName * __thiscallHashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>>::operator [](HashMap<StringName,ProjectSettings::AutoloadInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,ProjectSettings::AutoloadInfo>>> * this, StringName * param_1) * plVar1 ;undefined8 *puVar2ulong __nuint *puVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]uint uVar28uint uVar29undefined8 *puVar30undefined8 uVar31void *__s_00ulong uVar32int iVar33long lVar34long lVar35long lVar36ulong uVar37uint uVar38uint uVar39uint uVar40long lVar41undefined8 *puVar42long in_FS_OFFSETuint local_b8StringName *local_a0undefined1 local_98[16]undefined1 local_88undefined1 local_78[16]long local_68long local_60long local_58undefined1 local_50long local_40lVar41 = *(long*)( this + 8 );uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar37 = CONCAT44(0, uVar28);local_40 = *(long*)( in_FS_OFFSET + 0x28 );if (lVar41 == 0) {
   LAB_00126b80:local_88 = 0;
   local_98 = (undefined1[16])0x0;
   uVar32 = uVar37 * 4;
   __n = uVar37 * 8;
   uVar31 = Memory::alloc_static(uVar32, false);
   *(undefined8*)( this + 0x10 ) = uVar31;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar37 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
         uVar32 = 0;
         do {
            *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
            uVar32 = uVar32 + 1;
         }
 while ( uVar37 != uVar32 );
      }
 else {
         memset(__s, 0, uVar32);
         memset(__s_00, 0, __n);
      }

      LAB_001266ec:iVar33 = *(int*)( this + 0x2c );
      if (iVar33 != 0) {
         LAB_001266fc:uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar28);
         lVar41 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar29 = StringName::get_empty_hash();
         }
 else {
            uVar29 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar29 == 0) {
            uVar29 = 1;
         }

         uVar40 = 0;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar29 * lVar41;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar32;
         lVar35 = SUB168(auVar8 * auVar20, 8);
         uVar39 = SUB164(auVar8 * auVar20, 8);
         uVar38 = *(uint*)( *(long*)( this + 0x10 ) + lVar35 * 4 );
         if (uVar38 != 0) {
            do {
               if (( uVar38 == uVar29 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar35 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  lVar41 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar39 * 8 );
                  StringName::operator =((StringName*)( lVar41 + 0x18 ), (StringName*)local_98);
                  lVar35 = local_98._8_8_;
                  if (*(long*)( lVar41 + 0x20 ) != local_98._8_8_) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar41 + 0x20 ), (CowData*)( local_98 + 8 ));
                     lVar35 = local_98._8_8_;
                  }

                  *(undefined1*)( lVar41 + 0x28 ) = local_88;
                  local_a0 = (StringName*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar39 * 8 ) + 0x18 );
                  goto LAB_00126a7f;
               }

               uVar40 = uVar40 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(uVar39 + 1) * lVar41;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar32;
               lVar35 = SUB168(auVar9 * auVar21, 8);
               uVar38 = *(uint*)( *(long*)( this + 0x10 ) + lVar35 * 4 );
               uVar39 = SUB164(auVar9 * auVar21, 8);
            }
 while ( ( uVar38 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar38 * lVar41,auVar22._8_8_ = 0,auVar22._0_8_ = uVar32,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar28 + uVar39 ) - SUB164(auVar10 * auVar22, 8)) * lVar41,auVar23._8_8_ = 0,auVar23._0_8_ = uVar32,uVar40 <= SUB164(auVar11 * auVar23, 8) );
         }

         iVar33 = *(int*)( this + 0x2c );
      }

      goto LAB_00126831;
   }

   iVar33 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_00126831;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_001266fc;
   LAB_00126853:if (*(int*)( this + 0x28 ) == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0);
      local_a0 = (StringName*)0x18;
      lVar35 = local_98._8_8_;
      goto LAB_00126a7f;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar29 = StringName::get_empty_hash();
         lVar41 = *(long*)( this + 8 );
      }
 else {
         uVar29 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar29 == 0) {
         uVar29 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar29 * lVar35;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar37;
      lVar34 = SUB168(auVar4 * auVar16, 8);
      uVar39 = SUB164(auVar4 * auVar16, 8);
      uVar38 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
      if (uVar38 != 0) {
         uVar40 = 0;
         do {
            if (( uVar38 == uVar29 ) && ( *(long*)( *(long*)( lVar41 + lVar34 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               local_a0 = (StringName*)( *(long*)( lVar41 + (ulong)uVar39 * 8 ) + 0x18 );
               goto LAB_0012669b;
            }

            uVar40 = uVar40 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar39 + 1) * lVar35;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar37;
            lVar34 = SUB168(auVar5 * auVar17, 8);
            uVar38 = *(uint*)( *(long*)( this + 0x10 ) + lVar34 * 4 );
            uVar39 = SUB164(auVar5 * auVar17, 8);
         }
 while ( ( uVar38 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar38 * lVar35,auVar18._8_8_ = 0,auVar18._0_8_ = uVar37,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar39 + uVar28 ) - SUB164(auVar6 * auVar18, 8)) * lVar35,auVar19._8_8_ = 0,auVar19._0_8_ = uVar37,uVar40 <= SUB164(auVar7 * auVar19, 8) );
      }

      local_88 = 0;
      local_98 = (undefined1[16])0x0;
      uVar37 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar41 == 0) goto LAB_00126b80;
      goto LAB_001266ec;
   }

   local_88 = 0;
   local_98 = (undefined1[16])0x0;
   iVar33 = 0;
   LAB_00126831:if ((float)uVar37 * __LC11 < (float)( iVar33 + 1 )) goto LAB_00126853;
}
local_78 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_68, param_1);StringName::StringName((StringName*)&local_60, (StringName*)local_98);local_58 = 0;if (local_98._8_8_ != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( local_98 + 8 ));
}
local_50 = local_88;puVar30 = (undefined8*)operator_new(0x30, "");*puVar30 = local_78._0_8_;puVar30[1] = local_78._8_8_;StringName::StringName((StringName*)( puVar30 + 2 ), (StringName*)&local_68);local_a0 = (StringName*)( puVar30 + 3 );StringName::StringName(local_a0, (StringName*)&local_60);puVar30[4] = 0;if (local_58 == 0) {
   *(undefined1*)( puVar30 + 5 ) = local_50;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar30 + 4 ), (CowData*)&local_58);
   lVar41 = local_58;
   *(undefined1*)( puVar30 + 5 ) = local_50;
   if (local_58 != 0) {
      LOCK();
      plVar1 = (long*)( local_58 + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         local_58 = 0;
         Memory::free_static((void*)( lVar41 + -0x10 ), false);
      }

   }

}
if (( StringName::configured != '\0' ) && ( ( ( local_60 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_68 != 0 ) ) )) {
   StringName::unref();
}
puVar42 = *(undefined8**)( this + 0x20 );if (puVar42 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar30;
}
 else {
   *puVar42 = puVar30;
   puVar30[1] = puVar42;
}
*(undefined8**)( this + 0x20 ) = puVar30;if (*(long*)param_1 == 0) {
   uVar28 = StringName::get_empty_hash();
}
 else {
   uVar28 = *(uint*)( *(long*)param_1 + 0x20 );
}
if (uVar28 == 0) {
   uVar28 = 1;
}
uVar37 = (ulong)uVar28;uVar39 = 0;lVar41 = *(long*)( this + 0x10 );lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar32 = CONCAT44(0, uVar29);auVar12._8_8_ = 0;auVar12._0_8_ = uVar37 * lVar35;auVar24._8_8_ = 0;auVar24._0_8_ = uVar32;lVar36 = SUB168(auVar12 * auVar24, 8);lVar34 = *(long*)( this + 8 );puVar3 = (uint*)( lVar41 + lVar36 * 4 );iVar33 = SUB164(auVar12 * auVar24, 8);uVar38 = *puVar3;while (uVar38 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar38 * lVar35;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar32;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar29 + iVar33 ) - SUB164(auVar13 * auVar25, 8)) * lVar35;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar32;
   local_b8 = SUB164(auVar14 * auVar26, 8);
   puVar42 = puVar30;
   if (local_b8 < uVar39) {
      puVar2 = (undefined8*)( lVar34 + lVar36 * 8 );
      *puVar3 = (uint)uVar37;
      uVar37 = (ulong)uVar38;
      puVar42 = (undefined8*)*puVar2;
      *puVar2 = puVar30;
      uVar39 = local_b8;
   }

   uVar28 = (uint)uVar37;
   uVar39 = uVar39 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar33 + 1) * lVar35;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar32;
   lVar36 = SUB168(auVar15 * auVar27, 8);
   puVar3 = (uint*)( lVar41 + lVar36 * 4 );
   iVar33 = SUB164(auVar15 * auVar27, 8);
   puVar30 = puVar42;
   uVar38 = *puVar3;
}
;*(undefined8**)( lVar34 + lVar36 * 8 ) = puVar30;*puVar3 = uVar28;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;lVar35 = local_98._8_8_;LAB_00126a7f:if (lVar35 != 0) {
   LOCK();
   plVar1 = (long*)( lVar35 + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      uVar31 = local_98._8_8_;
      local_98._8_8_ = 0;
      Memory::free_static((void*)( uVar31 + -0x10 ), false);
   }

}
if (( StringName::configured != '\0' ) && ( local_98._0_8_ != 0 )) {
   StringName::unref();
}
LAB_0012669b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_a0;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<GDScriptCodeGenerator::Address>::_realloc(long) */undefined8 CowData<GDScriptCodeGenerator::Address>::_realloc(CowData<GDScriptCodeGenerator::Address> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<GDScriptCodeGenerator::Address>::resize<false>(long) */undefined8 CowData<GDScriptCodeGenerator::Address>::resize<false>(CowData<GDScriptCodeGenerator::Address> *this, long param_1) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   undefined8 *puVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   ulong uVar12;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar9 = 0;
      lVar10 = 0;
   }
 else {
      lVar9 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar9) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar10 = lVar9 * 0x40;
      if (lVar10 != 0) {
         uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
         uVar11 = uVar11 | uVar11 >> 2;
         uVar11 = uVar11 | uVar11 >> 4;
         uVar11 = uVar11 | uVar11 >> 8;
         uVar11 = uVar11 | uVar11 >> 0x10;
         lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x40 == 0) {
      LAB_00127020:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar11 = param_1 * 0x40 - 1;
   uVar11 = uVar11 >> 1 | uVar11;
   uVar11 = uVar11 | uVar11 >> 2;
   uVar11 = uVar11 | uVar11 >> 4;
   uVar11 = uVar11 | uVar11 >> 8;
   uVar11 = uVar11 | uVar11 >> 0x10;
   uVar11 = uVar11 | uVar11 >> 0x20;
   lVar4 = uVar11 + 1;
   if (lVar4 == 0) goto LAB_00127020;
   uVar12 = param_1;
   if (param_1 <= lVar9) {
      while (lVar9 = *(long*)this,lVar9 != 0) {
         if (*(ulong*)( lVar9 + -8 ) <= uVar12) {
            if (lVar4 != lVar10) {
               uVar7 = _realloc(this, lVar4);
               if ((int)uVar7 != 0) {
                  return uVar7;
               }

               lVar9 = *(long*)this;
               if (lVar9 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

            }

            *(long*)( lVar9 + -8 ) = param_1;
            return 0;
         }

         lVar9 = lVar9 + uVar12 * 0x40;
         if (( *(long*)( lVar9 + 0x38 ) != 0 ) && ( cVar3 = cVar3 != '\0' )) {
            pOVar1 = *(Object**)( lVar9 + 0x38 );
            cVar3 = predelete_handler(pOVar1);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( lVar9 + 0x28 ) != 0 )) {
            StringName::unref();
         }

         CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)( lVar9 + 0x10 ));
         uVar12 = uVar12 + 1;
      }
;
      goto LAB_00127076;
   }

   if (lVar4 == lVar10) {
      LAB_00126f55:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         LAB_00127076:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar9 = puVar8[-1];
      if (param_1 <= lVar9) goto LAB_00126e82;
   }
 else {
      if (lVar9 != 0) {
         uVar7 = _realloc(this, lVar4);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_00126f55;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar11 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar9 = 0;
   }

   uVar7 = _LC49;
   puVar5 = puVar8 + lVar9 * 8;
   do {
      *puVar5 = uVar7;
      puVar6 = puVar5 + 8;
      puVar5[2] = 0;
      *(undefined4*)( puVar5 + 3 ) = 0;
      *(undefined1*)( (long)puVar5 + 0x1c ) = 0;
      *(undefined4*)( puVar5 + 4 ) = 0;
      *(undefined1(*) [16])( puVar5 + 5 ) = (undefined1[16])0x0;
      puVar5[7] = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar8 + param_1 * 8 );
   LAB_00126e82:puVar8[-1] = param_1;
   return 0;
}
/* HashMap<StringName, GDScriptFunction*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptFunction*> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>>::_resize_and_rehash(HashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, GDScriptFunction*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptFunction*> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>>::operator [](HashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>> * this, StringName * param_1) * puVar1 ;ulong __nuint *puVar2undefined8 *puVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]uint uVar28uint uVar29undefined8 *puVar30long lVar31undefined8 uVar32void *__s_00ulong uVar33int iVar34long lVar35long lVar36long lVar37ulong uVar38uint uVar39uint uVar40uint uVar41undefined8 *puVar42long in_FS_OFFSETbool bVar43uint local_88long local_58undefined8 local_50long local_40lVar31 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar38 = CONCAT44(0, uVar28);if (lVar31 == 0) {
   LAB_00127710:uVar33 = uVar38 * 4;
   __n = uVar38 * 8;
   uVar32 = Memory::alloc_static(uVar33, false);
   *(undefined8*)( this + 0x10 ) = uVar32;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar38 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar33 ) )) {
         uVar33 = 0;
         do {
            *(undefined4*)( (long)__s + uVar33 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar33 * 8 ) = 0;
            uVar33 = uVar33 + 1;
         }
 while ( uVar38 != uVar33 );
         goto LAB_001275d8;
      }

      memset(__s, 0, uVar33);
      memset(__s_00, 0, __n);
      iVar34 = *(int*)( this + 0x2c );
      LAB_001275dc:if (iVar34 != 0) {
         LAB_001275e4:uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar31 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar29 = StringName::get_empty_hash();
         }
 else {
            uVar29 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         uVar33 = CONCAT44(0, uVar28);
         if (uVar29 == 0) {
            uVar29 = 1;
         }

         uVar41 = 0;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar29 * lVar31;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar33;
         lVar37 = SUB168(auVar12 * auVar24, 8);
         uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
         uVar40 = SUB164(auVar12 * auVar24, 8);
         if (uVar39 != 0) {
            do {
               if (( uVar29 == uVar39 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar37 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar30 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar40 * 8 );
                  puVar30[3] = 0;
                  goto LAB_001273c4;
               }

               uVar41 = uVar41 + 1;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = ( ulong )(uVar40 + 1) * lVar31;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar33;
               lVar37 = SUB168(auVar13 * auVar25, 8);
               uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
               uVar40 = SUB164(auVar13 * auVar25, 8);
            }
 while ( ( uVar39 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar39 * lVar31,auVar26._8_8_ = 0,auVar26._0_8_ = uVar33,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar28 + uVar40 ) - SUB164(auVar14 * auVar26, 8)) * lVar31,auVar27._8_8_ = 0,auVar27._0_8_ = uVar33,uVar41 <= SUB164(auVar15 * auVar27, 8) );
         }

         iVar34 = *(int*)( this + 0x2c );
      }

      goto LAB_001273fb;
   }

   iVar34 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_001273fb;
   if (iVar34 != 0) goto LAB_001275e4;
   LAB_0012741d:if (*(int*)( this + 0x28 ) == 0x1c) {
      puVar30 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001273c4;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   iVar34 = *(int*)( this + 0x2c );
   if (iVar34 != 0) {
      lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar29 = StringName::get_empty_hash();
         lVar31 = *(long*)( this + 8 );
      }
 else {
         uVar29 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar29 == 0) {
         uVar29 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar29 * lVar37;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = uVar38;
      lVar35 = SUB168(auVar4 * auVar16, 8);
      uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar35 * 4 );
      uVar40 = SUB164(auVar4 * auVar16, 8);
      if (uVar39 != 0) {
         uVar41 = 0;
         do {
            if (( uVar29 == uVar39 ) && ( *(long*)( *(long*)( lVar31 + lVar35 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar30 = *(undefined8**)( lVar31 + (ulong)uVar40 * 8 );
               goto LAB_001273c4;
            }

            uVar41 = uVar41 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar40 + 1) * lVar37;
            auVar17._8_8_ = 0;
            auVar17._0_8_ = uVar38;
            lVar35 = SUB168(auVar5 * auVar17, 8);
            uVar39 = *(uint*)( *(long*)( this + 0x10 ) + lVar35 * 4 );
            uVar40 = SUB164(auVar5 * auVar17, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar39 * lVar37,auVar18._8_8_ = 0,auVar18._0_8_ = uVar38,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar40 + uVar28 ) - SUB164(auVar6 * auVar18, 8)) * lVar37,auVar19._8_8_ = 0,auVar19._0_8_ = uVar38,uVar41 <= SUB164(auVar7 * auVar19, 8) );
      }

      uVar38 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar31 == 0) goto LAB_00127710;
      LAB_001275d8:iVar34 = *(int*)( this + 0x2c );
      goto LAB_001275dc;
   }

   LAB_001273fb:if ((float)uVar38 * __LC11 < (float)( iVar34 + 1 )) goto LAB_0012741d;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar30 = (undefined8*)operator_new(0x20, "");*puVar30 = 0;puVar30[1] = 0;StringName::StringName((StringName*)( puVar30 + 2 ), (StringName*)&local_58);bVar43 = StringName::configured != '\0';puVar30[3] = local_50;if (( bVar43 ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   lVar31 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar30;
   *(undefined8**)( this + 0x20 ) = puVar30;
   if (lVar31 == 0) goto LAB_001276ed;
   LAB_001274c7:uVar28 = *(uint*)( lVar31 + 0x20 );
}
 else {
   *puVar3 = puVar30;
   puVar30[1] = puVar3;
   lVar31 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar30;
   if (lVar31 != 0) goto LAB_001274c7;
   LAB_001276ed:uVar28 = StringName::get_empty_hash();
}
lVar31 = *(long*)( this + 0x10 );if (uVar28 == 0) {
   uVar28 = 1;
}
uVar38 = (ulong)uVar28;uVar40 = 0;lVar37 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar33 = CONCAT44(0, uVar29);auVar8._8_8_ = 0;auVar8._0_8_ = uVar38 * lVar37;auVar20._8_8_ = 0;auVar20._0_8_ = uVar33;lVar36 = SUB168(auVar8 * auVar20, 8);lVar35 = *(long*)( this + 8 );puVar2 = (uint*)( lVar31 + lVar36 * 4 );iVar34 = SUB164(auVar8 * auVar20, 8);uVar39 = *puVar2;puVar3 = puVar30;while (uVar39 != 0) {
   auVar9._8_8_ = 0;
   auVar9._0_8_ = (ulong)uVar39 * lVar37;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar33;
   auVar10._8_8_ = 0;
   auVar10._0_8_ = ( ulong )(( uVar29 + iVar34 ) - SUB164(auVar9 * auVar21, 8)) * lVar37;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar33;
   local_88 = SUB164(auVar10 * auVar22, 8);
   puVar42 = puVar3;
   if (local_88 < uVar40) {
      *puVar2 = (uint)uVar38;
      uVar38 = (ulong)uVar39;
      puVar1 = (undefined8*)( lVar35 + lVar36 * 8 );
      puVar42 = (undefined8*)*puVar1;
      *puVar1 = puVar3;
      uVar40 = local_88;
   }

   uVar28 = (uint)uVar38;
   uVar40 = uVar40 + 1;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = ( ulong )(iVar34 + 1) * lVar37;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar33;
   lVar36 = SUB168(auVar11 * auVar23, 8);
   puVar2 = (uint*)( lVar31 + lVar36 * 4 );
   iVar34 = SUB164(auVar11 * auVar23, 8);
   puVar3 = puVar42;
   uVar39 = *puVar2;
}
;*(undefined8**)( lVar35 + lVar36 * 8 ) = puVar3;*puVar2 = uVar28;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_001273c4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar30 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, GDScriptFunction*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptFunction*> > >::insert(StringName const&, GDScriptFunction* const&, bool) */StringName *
HashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>>
::insert(StringName *param_1,GDScriptFunction **param_2,bool param_3){
   GDScriptFunction *pGVar1;
   uint uVar2;
   GDScriptFunction *pGVar3;
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
   ulong uVar20;
   GDScriptFunction *pGVar21;
   uint uVar22;
   uint uVar23;
   long lVar24;
   GDScriptFunction *pGVar25;
   long *in_RCX;
   uint uVar26;
   int iVar27;
   undefined7 in_register_00000011;
   StringName *pSVar28;
   long lVar29;
   ulong uVar30;
   char in_R8B;
   uint uVar31;
   ulong uVar32;
   uint uVar33;
   GDScriptFunction *pGVar34;
   long in_FS_OFFSET;
   bool bVar35;
   GDScriptFunction *local_80;
   long local_58;
   long local_50;
   long local_40;
   pSVar28 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar22 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   if (param_2[1] == (GDScriptFunction*)0x0) {
      uVar20 = (ulong)uVar22;
      uVar30 = uVar20 * 4;
      uVar32 = uVar20 * 8;
      pGVar25 = (GDScriptFunction*)Memory::alloc_static(uVar30, false);
      param_2[2] = pGVar25;
      pGVar25 = (GDScriptFunction*)Memory::alloc_static(uVar32, false);
      param_2[1] = pGVar25;
      if (uVar22 != 0) {
         pGVar1 = param_2[2];
         if (( pGVar1 < pGVar25 + uVar32 ) && ( pGVar25 < pGVar1 + uVar30 )) {
            uVar30 = 0;
            do {
               *(undefined4*)( pGVar1 + uVar30 * 4 ) = 0;
               *(undefined8*)( pGVar25 + uVar30 * 8 ) = 0;
               uVar30 = uVar30 + 1;
            }
 while ( uVar20 != uVar30 );
         }
 else {
            memset(pGVar1, 0, uVar30);
            memset(pGVar25, 0, uVar32);
         }

         goto LAB_00127852;
      }

      iVar27 = *(int*)( (long)param_2 + 0x2c );
      if (pGVar25 == (GDScriptFunction*)0x0) goto LAB_00127979;
      if (*(int*)( (long)param_2 + 0x2c ) != 0) goto LAB_0012785e;
      LAB_0012799b:if (*(int*)( param_2 + 5 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (GDScriptFunction*)0x0;
         goto LAB_00127931;
      }

      _resize_and_rehash((HashMap<StringName,GDScriptFunction*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptFunction*>>>*)param_2, *(int*)( param_2 + 5 ) + 1);
   }
 else {
      LAB_00127852:iVar27 = *(int*)( (long)param_2 + 0x2c );
      if (iVar27 != 0) {
         LAB_0012785e:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
         uVar30 = CONCAT44(0, uVar2);
         lVar24 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
         if (*(long*)pSVar28 == 0) {
            uVar23 = StringName::get_empty_hash();
         }
 else {
            uVar23 = *(uint*)( *(long*)pSVar28 + 0x20 );
         }

         if (uVar23 == 0) {
            uVar23 = 1;
         }

         uVar33 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar23 * lVar24;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar30;
         lVar29 = SUB168(auVar4 * auVar12, 8);
         uVar31 = *(uint*)( param_2[2] + lVar29 * 4 );
         uVar26 = SUB164(auVar4 * auVar12, 8);
         if (uVar31 != 0) {
            do {
               if (( uVar23 == uVar31 ) && ( *(long*)( *(long*)( param_2[1] + lVar29 * 8 ) + 0x10 ) == *(long*)pSVar28 )) {
                  local_80 = *(GDScriptFunction**)( param_2[1] + (ulong)uVar26 * 8 );
                  *(long*)( local_80 + 0x18 ) = *in_RCX;
                  goto LAB_00127931;
               }

               uVar33 = uVar33 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar26 + 1) * lVar24;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar30;
               lVar29 = SUB168(auVar5 * auVar13, 8);
               uVar31 = *(uint*)( param_2[2] + lVar29 * 4 );
               uVar26 = SUB164(auVar5 * auVar13, 8);
            }
 while ( ( uVar31 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar31 * lVar24,auVar14._8_8_ = 0,auVar14._0_8_ = uVar30,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar2 + uVar26 ) - SUB164(auVar6 * auVar14, 8)) * lVar24,auVar15._8_8_ = 0,auVar15._0_8_ = uVar30,uVar33 <= SUB164(auVar7 * auVar15, 8) );
         }

         iVar27 = *(int*)( (long)param_2 + 0x2c );
      }

      LAB_00127979:if ((float)uVar22 * __LC11 < (float)( iVar27 + 1 )) goto LAB_0012799b;
   }

   StringName::StringName((StringName*)&local_58, pSVar28);
   local_50 = *in_RCX;
   local_80 = (GDScriptFunction*)operator_new(0x20, "");
   *(long*)local_80 = 0;
   *(long*)( local_80 + 8 ) = 0;
   StringName::StringName((StringName*)( local_80 + 0x10 ), (StringName*)&local_58);
   bVar35 = StringName::configured != '\0';
   *(long*)( local_80 + 0x18 ) = local_50;
   if (( bVar35 ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   pGVar25 = param_2[4];
   if (pGVar25 == (GDScriptFunction*)0x0) {
      param_2[3] = local_80;
      param_2[4] = local_80;
      LAB_00127a54:lVar24 = *(long*)pSVar28;
      if (lVar24 != 0) goto LAB_00127a61;
      LAB_00127b5d:uVar22 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B != '\0') {
         pGVar25 = param_2[3];
         *(GDScriptFunction**)( pGVar25 + 8 ) = local_80;
         *(GDScriptFunction**)local_80 = pGVar25;
         param_2[3] = local_80;
         goto LAB_00127a54;
      }

      *(GDScriptFunction**)pGVar25 = local_80;
      *(GDScriptFunction**)( local_80 + 8 ) = pGVar25;
      lVar24 = *(long*)pSVar28;
      param_2[4] = local_80;
      if (lVar24 == 0) goto LAB_00127b5d;
      LAB_00127a61:uVar22 = *(uint*)( lVar24 + 0x20 );
   }

   pGVar25 = param_2[2];
   if (uVar22 == 0) {
      uVar22 = 1;
   }

   uVar30 = (ulong)uVar22;
   uVar31 = 0;
   lVar24 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   uVar32 = CONCAT44(0, uVar2);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar30 * lVar24;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar32;
   lVar29 = SUB168(auVar8 * auVar16, 8);
   pGVar3 = param_2[1];
   pGVar1 = pGVar25 + lVar29 * 4;
   iVar27 = SUB164(auVar8 * auVar16, 8);
   uVar23 = *(uint*)pGVar1;
   pGVar21 = local_80;
   while (uVar23 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar23 * lVar24;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar32;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar9 * auVar17, 8)) * lVar24;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar32;
      uVar22 = SUB164(auVar10 * auVar18, 8);
      pGVar34 = pGVar21;
      if (uVar22 < uVar31) {
         *(uint*)pGVar1 = (uint)uVar30;
         uVar30 = (ulong)uVar23;
         pGVar1 = pGVar3 + lVar29 * 8;
         pGVar34 = *(GDScriptFunction**)pGVar1;
         *(GDScriptFunction**)pGVar1 = pGVar21;
         uVar31 = uVar22;
      }

      uVar22 = (uint)uVar30;
      uVar31 = uVar31 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar27 + 1) * lVar24;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar32;
      lVar29 = SUB168(auVar11 * auVar19, 8);
      pGVar1 = pGVar25 + lVar29 * 4;
      iVar27 = SUB164(auVar11 * auVar19, 8);
      pGVar21 = pGVar34;
      uVar23 = *(uint*)pGVar1;
   }
;
   *(GDScriptFunction**)( pGVar3 + lVar29 * 8 ) = pGVar21;
   *(uint*)pGVar1 = uVar22;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_00127931:*(GDScriptFunction**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, Ref<GDScript>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<GDScript> > > >::_resize_and_rehash(unsigned
   int) */void HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::_resize_and_rehash(HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Ref<GDScript>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<GDScript> > > >::operator[](StringName
   const&) */undefined8 * __thiscallHashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::operator [](HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2ulong __nundefined8 *puVar3Object *pOVar4void *__sundefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]char cVar29uint uVar30uint uVar31undefined8 *puVar32long lVar33undefined8 uVar34void *__s_00ulong uVar35int iVar36long lVar37long lVar38long lVar39uint uVar40uint uVar41uint uVar42ulong uVar43undefined8 *puVar44long in_FS_OFFSETuint local_88long local_58Object *local_50long local_40lVar33 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar43 = CONCAT44(0, uVar30);if (lVar33 == 0) {
   LAB_001283d8:uVar35 = uVar43 * 4;
   __n = uVar43 * 8;
   uVar34 = Memory::alloc_static(uVar35, false);
   *(undefined8*)( this + 0x10 ) = uVar34;
   __s_00 = (void*)Memory::alloc_static(__n, false);
   *(void**)( this + 8 ) = __s_00;
   if ((int)uVar43 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + __n ) ) && ( __s_00 < (void*)( (long)__s + uVar35 ) )) {
         uVar35 = 0;
         do {
            *(undefined4*)( (long)__s + uVar35 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar35 * 8 ) = 0;
            uVar35 = uVar35 + 1;
         }
 while ( uVar43 != uVar35 );
         goto LAB_00128238;
      }

      memset(__s, 0, uVar35);
      memset(__s_00, 0, __n);
      iVar36 = *(int*)( this + 0x2c );
      LAB_0012823c:if (iVar36 != 0) {
         LAB_00128244:uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar35 = CONCAT44(0, uVar30);
         lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar31 = StringName::get_empty_hash();
         }
 else {
            uVar31 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar31 == 0) {
            uVar31 = 1;
         }

         uVar42 = 0;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = (ulong)uVar31 * lVar33;
         auVar25._8_8_ = 0;
         auVar25._0_8_ = uVar35;
         lVar39 = SUB168(auVar13 * auVar25, 8);
         uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar39 * 4 );
         uVar41 = SUB164(auVar13 * auVar25, 8);
         if (uVar40 != 0) {
            do {
               if (( uVar31 == uVar40 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar39 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  puVar32 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
                  pOVar4 = (Object*)puVar32[3];
                  if (pOVar4 != (Object*)0x0) {
                     puVar32[3] = 0;
                     cVar29 = RefCounted::unreference();
                     if (( cVar29 != '\0' ) && ( cVar29 = cVar29 != '\0' )) {
                        ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                        Memory::free_static(pOVar4, false);
                     }

                     puVar32 = *(undefined8**)( *(long*)( this + 8 ) + (ulong)uVar41 * 8 );
                  }

                  goto LAB_00127ff4;
               }

               uVar42 = uVar42 + 1;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(uVar41 + 1) * lVar33;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar35;
               lVar39 = SUB168(auVar14 * auVar26, 8);
               uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar39 * 4 );
               uVar41 = SUB164(auVar14 * auVar26, 8);
            }
 while ( ( uVar40 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar40 * lVar33,auVar27._8_8_ = 0,auVar27._0_8_ = uVar35,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar30 + uVar41 ) - SUB164(auVar15 * auVar27, 8)) * lVar33,auVar28._8_8_ = 0,auVar28._0_8_ = uVar35,uVar42 <= SUB164(auVar16 * auVar28, 8) );
         }

         iVar36 = *(int*)( this + 0x2c );
      }

      goto LAB_00128027;
   }

   iVar36 = *(int*)( this + 0x2c );
   if (__s_00 == (void*)0x0) goto LAB_00128027;
   if (iVar36 != 0) goto LAB_00128244;
   LAB_00128049:if (*(int*)( this + 0x28 ) == 0x1c) {
      puVar32 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00127ff4;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
 else {
   iVar36 = *(int*)( this + 0x2c );
   if (iVar36 != 0) {
      lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar31 = StringName::get_empty_hash();
         lVar33 = *(long*)( this + 8 );
      }
 else {
         uVar31 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar31 == 0) {
         uVar31 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = (ulong)uVar31 * lVar39;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar43;
      lVar37 = SUB168(auVar5 * auVar17, 8);
      uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
      uVar41 = SUB164(auVar5 * auVar17, 8);
      if (uVar40 != 0) {
         uVar42 = 0;
         do {
            if (( uVar40 == uVar31 ) && ( *(long*)( *(long*)( lVar33 + lVar37 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               puVar32 = *(undefined8**)( lVar33 + (ulong)uVar41 * 8 );
               goto LAB_00127ff4;
            }

            uVar42 = uVar42 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar41 + 1) * lVar39;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar43;
            lVar37 = SUB168(auVar6 * auVar18, 8);
            uVar40 = *(uint*)( *(long*)( this + 0x10 ) + lVar37 * 4 );
            uVar41 = SUB164(auVar6 * auVar18, 8);
         }
 while ( ( uVar40 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar40 * lVar39,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar41 + uVar30 ) - SUB164(auVar7 * auVar19, 8)) * lVar39,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar42 <= SUB164(auVar8 * auVar20, 8) );
      }

      uVar43 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar33 == 0) goto LAB_001283d8;
      LAB_00128238:iVar36 = *(int*)( this + 0x2c );
      goto LAB_0012823c;
   }

   LAB_00128027:if ((float)uVar43 * __LC11 < (float)( iVar36 + 1 )) goto LAB_00128049;
}
StringName::StringName((StringName*)&local_58, param_1);local_50 = (Object*)0x0;puVar32 = (undefined8*)operator_new(0x20, "");*puVar32 = 0;puVar32[1] = 0;StringName::StringName((StringName*)( puVar32 + 2 ), (StringName*)&local_58);puVar32[3] = 0;if (local_50 != (Object*)0x0) {
   puVar32[3] = local_50;
   cVar29 = RefCounted::reference();
   if (cVar29 == '\0') {
      puVar32[3] = 0;
   }

   if (( ( local_50 != (Object*)0x0 ) && ( cVar29 = RefCounted::unreference() ),pOVar4 = local_50,cVar29 != '\0' )) &&( cVar29 = cVar29 != '\0' )(**(code**)( *(long*)pOVar4 + 0x140 ))(pOVar4);
   Memory::free_static(pOVar4, false);
}
}if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   lVar33 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar32;
   *(undefined8**)( this + 0x20 ) = puVar32;
   if (lVar33 == 0) goto LAB_001283b5;
   LAB_00128124:uVar30 = *(uint*)( lVar33 + 0x20 );
}
 else {
   *puVar3 = puVar32;
   puVar32[1] = puVar3;
   lVar33 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar32;
   if (lVar33 != 0) goto LAB_00128124;
   LAB_001283b5:uVar30 = StringName::get_empty_hash();
}
lVar33 = *(long*)( this + 0x10 );if (uVar30 == 0) {
   uVar30 = 1;
}
uVar43 = (ulong)uVar30;uVar41 = 0;lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar35 = CONCAT44(0, uVar31);auVar9._8_8_ = 0;auVar9._0_8_ = uVar43 * lVar39;auVar21._8_8_ = 0;auVar21._0_8_ = uVar35;lVar38 = SUB168(auVar9 * auVar21, 8);lVar37 = *(long*)( this + 8 );puVar1 = (uint*)( lVar33 + lVar38 * 4 );iVar36 = SUB164(auVar9 * auVar21, 8);uVar40 = *puVar1;puVar3 = puVar32;while (uVar40 != 0) {
   auVar10._8_8_ = 0;
   auVar10._0_8_ = (ulong)uVar40 * lVar39;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar35;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = ( ulong )(( uVar31 + iVar36 ) - SUB164(auVar10 * auVar22, 8)) * lVar39;
   auVar23._8_8_ = 0;
   auVar23._0_8_ = uVar35;
   local_88 = SUB164(auVar11 * auVar23, 8);
   puVar44 = puVar3;
   if (local_88 < uVar41) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar40;
      puVar2 = (undefined8*)( lVar37 + lVar38 * 8 );
      puVar44 = (undefined8*)*puVar2;
      *puVar2 = puVar3;
      uVar41 = local_88;
   }

   uVar30 = (uint)uVar43;
   uVar41 = uVar41 + 1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(iVar36 + 1) * lVar39;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar35;
   lVar38 = SUB168(auVar12 * auVar24, 8);
   puVar1 = (uint*)( lVar33 + lVar38 * 4 );
   iVar36 = SUB164(auVar12 * auVar24, 8);
   puVar3 = puVar44;
   uVar40 = *puVar1;
}
;*(undefined8**)( lVar37 + lVar38 * 8 ) = puVar3;*puVar1 = uVar30;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00127ff4:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar32 + 3;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Ref<GDScript>, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Ref<GDScript> > > >::insert(StringName const&,
   Ref<GDScript> const&, bool) */StringName *HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>::insert(StringName *param_1, Ref *param_2, bool param_3) {
   uint *puVar1;
   uint uVar2;
   Object *pOVar3;
   Object *pOVar4;
   undefined8 *puVar5;
   long lVar6;
   void *__s;
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
   ulong uVar23;
   long *plVar24;
   char cVar25;
   uint uVar26;
   uint uVar27;
   long *plVar28;
   long lVar29;
   undefined8 uVar30;
   void *__s_00;
   long *in_RCX;
   uint uVar31;
   int iVar32;
   undefined7 in_register_00000011;
   StringName *pSVar33;
   long lVar34;
   long lVar35;
   char in_R8B;
   uint uVar36;
   ulong uVar37;
   uint uVar38;
   ulong uVar39;
   long *plVar40;
   long in_FS_OFFSET;
   long local_58;
   Object *local_50;
   long local_40;
   pSVar33 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar26 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar23 = (ulong)uVar26;
      uVar39 = uVar23 * 4;
      uVar37 = uVar23 * 8;
      uVar30 = Memory::alloc_static(uVar39, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar30;
      __s_00 = (void*)Memory::alloc_static(uVar37, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar26 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar37 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
            uVar39 = 0;
            do {
               *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
               uVar39 = uVar39 + 1;
            }
 while ( uVar23 != uVar39 );
         }
 else {
            memset(__s, 0, uVar39);
            memset(__s_00, 0, uVar37);
         }

         goto LAB_00128553;
      }

      iVar32 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00128679;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0012855f;
      LAB_0012869b:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar28 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00128886;
      }

      _resize_and_rehash((HashMap<StringName,Ref<GDScript>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Ref<GDScript>>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_00128553:iVar32 = *(int*)( param_2 + 0x2c );
      if (iVar32 != 0) {
         LAB_0012855f:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar39 = CONCAT44(0, uVar2);
         lVar29 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar33 == 0) {
            uVar27 = StringName::get_empty_hash();
         }
 else {
            uVar27 = *(uint*)( *(long*)pSVar33 + 0x20 );
         }

         if (uVar27 == 0) {
            uVar27 = 1;
         }

         uVar38 = 0;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = (ulong)uVar27 * lVar29;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar39;
         lVar34 = SUB168(auVar7 * auVar15, 8);
         uVar36 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar34 * 4 );
         uVar31 = SUB164(auVar7 * auVar15, 8);
         if (uVar36 != 0) {
            do uVar31 = SUB164(auVar8 * auVar16, 8); while ( ( uVar36 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar36 * lVar29,auVar17._8_8_ = 0,auVar17._0_8_ = uVar39,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar2 + uVar31 ) - SUB164(auVar9 * auVar17, 8)) * lVar29,auVar18._8_8_ = 0,auVar18._0_8_ = uVar39,uVar38 <= SUB164(auVar10 * auVar18, 8) );
         }

         iVar32 = *(int*)( param_2 + 0x2c );
      }

      LAB_00128679:if ((float)uVar26 * __LC11 < (float)( iVar32 + 1 )) goto LAB_0012869b;
   }

   StringName::StringName((StringName*)&local_58, pSVar33);
   local_50 = (Object*)0x0;
   if (( (Object*)*in_RCX != (Object*)0x0 ) && ( local_50 = (Object*)*in_RCX ),cVar25 = RefCounted::reference(),cVar25 == '\0') {
      local_50 = (Object*)0x0;
   }

   plVar28 = (long*)operator_new(0x20, "");
   *plVar28 = 0;
   plVar28[1] = 0;
   StringName::StringName((StringName*)( plVar28 + 2 ), (StringName*)&local_58);
   plVar28[3] = 0;
   if (local_50 != (Object*)0x0) {
      plVar28[3] = (long)local_50;
      cVar25 = RefCounted::reference();
      if (cVar25 == '\0') {
         plVar28[3] = 0;
      }

      if (( ( local_50 != (Object*)0x0 ) && ( cVar25 = RefCounted::unreference() ),pOVar3 = local_50,cVar25 != '\0' )) &&( cVar25 = cVar25 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);
      Memory::free_static(pOVar3, false);
   }

}
if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar5 = *(undefined8**)( param_2 + 0x20 );if (puVar5 == (undefined8*)0x0) {
   *(long**)( param_2 + 0x18 ) = plVar28;
   *(long**)( param_2 + 0x20 ) = plVar28;
   LAB_00128796:lVar29 = *(long*)pSVar33;
   if (lVar29 != 0) goto LAB_001287a3;
   LAB_001288dc:uVar26 = StringName::get_empty_hash();
}
 else {
   if (in_R8B == '\0') {
      *puVar5 = plVar28;
      plVar28[1] = (long)puVar5;
      *(long**)( param_2 + 0x20 ) = plVar28;
      goto LAB_00128796;
   }

   lVar29 = *(long*)( param_2 + 0x18 );
   *(long**)( lVar29 + 8 ) = plVar28;
   *plVar28 = lVar29;
   lVar29 = *(long*)pSVar33;
   *(long**)( param_2 + 0x18 ) = plVar28;
   if (lVar29 == 0) goto LAB_001288dc;
   LAB_001287a3:uVar26 = *(uint*)( lVar29 + 0x20 );
}
lVar29 = *(long*)( param_2 + 0x10 );if (uVar26 == 0) {
   uVar26 = 1;
}
uVar39 = (ulong)uVar26;uVar36 = 0;lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );uVar37 = CONCAT44(0, uVar2);auVar11._8_8_ = 0;auVar11._0_8_ = uVar39 * lVar34;auVar19._8_8_ = 0;auVar19._0_8_ = uVar37;lVar35 = SUB168(auVar11 * auVar19, 8);lVar6 = *(long*)( param_2 + 8 );puVar1 = (uint*)( lVar29 + lVar35 * 4 );iVar32 = SUB164(auVar11 * auVar19, 8);uVar27 = *puVar1;plVar24 = plVar28;while (uVar27 != 0) {
   auVar12._8_8_ = 0;
   auVar12._0_8_ = (ulong)uVar27 * lVar34;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar37;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(( uVar2 + iVar32 ) - SUB164(auVar12 * auVar20, 8)) * lVar34;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar37;
   uVar26 = SUB164(auVar13 * auVar21, 8);
   plVar40 = plVar24;
   if (uVar26 < uVar36) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar27;
      puVar5 = (undefined8*)( lVar6 + lVar35 * 8 );
      plVar40 = (long*)*puVar5;
      *puVar5 = plVar24;
      uVar36 = uVar26;
   }

   uVar26 = (uint)uVar39;
   uVar36 = uVar36 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(iVar32 + 1) * lVar34;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar37;
   lVar35 = SUB168(auVar14 * auVar22, 8);
   puVar1 = (uint*)( lVar29 + lVar35 * 4 );
   iVar32 = SUB164(auVar14 * auVar22, 8);
   plVar24 = plVar40;
   uVar27 = *puVar1;
}
;*(long**)( lVar6 + lVar35 * 8 ) = plVar24;*puVar1 = uVar26;*(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;LAB_00128886:*(long**)param_1 = plVar28;if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return param_1;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref() */void CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref(CowData<GDScriptCompiler::FunctionLambdaInfo> *this) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long lVar5;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar4 = (long*)( *(long*)this + -0x10 );
   *plVar4 = *plVar4 + -1;
   UNLOCK();
   if (*plVar4 == 0) {
      lVar1 = *(long*)this;
      if (lVar1 != 0) {
         lVar2 = *(long*)( lVar1 + -8 );
         *(undefined8*)this = 0;
         if (lVar2 != 0) {
            plVar4 = (long*)( lVar1 + 0x18 );
            lVar5 = 0;
            do {
               _unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( plVar4 + 6 ));
               if (( StringName::configured != '\0' ) && ( *plVar4 != 0 )) {
                  StringName::unref();
               }

               lVar5 = lVar5 + 1;
               plVar4 = plVar4 + 10;
            }
 while ( lVar2 != lVar5 );
         }

         Memory::free_static((void*)( lVar1 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* GDScriptCompiler::ScriptLambdaInfo::~ScriptLambdaInfo() */void GDScriptCompiler::ScriptLambdaInfo::~ScriptLambdaInfo(ScriptLambdaInfo *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 0x78 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x9c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x98 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x9c ) = 0;
            *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x80 ) + lVar2 ) != 0) {
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  *(int*)( *(long*)( this + 0x80 ) + lVar2 ) = 0;
                  ~ScriptLambdaInfo((ScriptLambdaInfo *)((long)
                  pvVar3 + 0x18;
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x78 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar2 );
            *(undefined4*)( this + 0x9c ) = 0;
            *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_00128c29;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x80 ), false);
   }

   LAB_00128c29:CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( this + 0x68 ));
   pvVar3 = *(void**)( this + 0x38 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x5c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x58 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x40 ) + lVar2 ) != 0) {
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  *(int*)( *(long*)( this + 0x40 ) + lVar2 ) = 0;
                  CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( (long)pvVar3 + 0x20 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x38 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x5c ) = 0;
            *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_00128ce4;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x40 ), false);
   }

   LAB_00128ce4:CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( this + 0x28 ));
   CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( this + 0x18 ));
   CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( this + 8 ));
   return;
}
/* HashMap<StringName, Vector<GDScriptCompiler::FunctionLambdaInfo>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<GDScriptCompiler::FunctionLambdaInfo> > > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>>::_resize_and_rehash(HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Vector<GDScriptCompiler::FunctionLambdaInfo>, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   Vector<GDScriptCompiler::FunctionLambdaInfo> > > >::insert(StringName const&,
   Vector<GDScriptCompiler::FunctionLambdaInfo> const&, bool) */StringName *HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>>::insert(StringName *param_1, Vector *param_2, bool param_3) {
   uint *puVar1;
   uint uVar2;
   undefined8 *puVar3;
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
   long *plVar22;
   uint uVar23;
   uint uVar24;
   long lVar25;
   undefined8 uVar26;
   void *__s_00;
   long in_RCX;
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
   long *plVar36;
   long in_FS_OFFSET;
   long *local_80;
   long local_58[2];
   long local_48;
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

         goto LAB_00129012;
      }

      iVar28 = *(int*)( param_2 + 0x2c );
      if (__s_00 == (void*)0x0) goto LAB_00129131;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0012901e;
      LAB_00129153:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_80 = (long*)0x0;
         goto LAB_0012931b;
      }

      _resize_and_rehash((HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_00129012:iVar28 = *(int*)( param_2 + 0x2c );
      if (iVar28 != 0) {
         LAB_0012901e:uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar2);
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
                  local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  if (local_80[4] != *(long*)( in_RCX + 8 )) {
                     CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( local_80 + 4 ), (CowData*)( in_RCX + 8 ));
                     local_80 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar27 * 8 );
                  }

                  goto LAB_0012931b;
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
 while ( ( uVar33 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar33 * lVar25,auVar15._8_8_ = 0,auVar15._0_8_ = uVar32,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar2 + uVar27 ) - SUB164(auVar7 * auVar15, 8)) * lVar25,auVar16._8_8_ = 0,auVar16._0_8_ = uVar32,uVar35 <= SUB164(auVar8 * auVar16, 8) );
         }

         iVar28 = *(int*)( param_2 + 0x2c );
      }

      LAB_00129131:if ((float)uVar23 * __LC11 < (float)( iVar28 + 1 )) goto LAB_00129153;
   }

   StringName::StringName((StringName*)local_58, pSVar29);
   local_48 = 0;
   if (*(long*)( in_RCX + 8 ) != 0) {
      CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)&local_48, (CowData*)( in_RCX + 8 ));
   }

   local_80 = (long*)operator_new(0x28, "");
   *local_80 = 0;
   local_80[1] = 0;
   StringName::StringName((StringName*)( local_80 + 2 ), (StringName*)local_58);
   local_80[4] = 0;
   if (local_48 != 0) {
      CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( local_80 + 4 ), (CowData*)&local_48);
   }

   CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_58[0] != 0 )) {
      StringName::unref();
   }

   puVar3 = *(undefined8**)( param_2 + 0x20 );
   if (puVar3 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = local_80;
      *(long**)( param_2 + 0x20 ) = local_80;
      LAB_0012923f:lVar25 = *(long*)pSVar29;
      if (lVar25 != 0) goto LAB_0012924c;
      LAB_00129371:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar3 = local_80;
         local_80[1] = (long)puVar3;
         *(long**)( param_2 + 0x20 ) = local_80;
         goto LAB_0012923f;
      }

      lVar25 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar25 + 8 ) = local_80;
      *local_80 = lVar25;
      lVar25 = *(long*)pSVar29;
      *(long**)( param_2 + 0x18 ) = local_80;
      if (lVar25 == 0) goto LAB_00129371;
      LAB_0012924c:uVar23 = *(uint*)( lVar25 + 0x20 );
   }

   lVar25 = *(long*)( param_2 + 0x10 );
   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar32 = (ulong)uVar23;
   uVar33 = 0;
   lVar30 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar2);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar32 * lVar30;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar34;
   lVar31 = SUB168(auVar9 * auVar17, 8);
   lVar4 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar25 + lVar31 * 4 );
   iVar28 = SUB164(auVar9 * auVar17, 8);
   uVar24 = *puVar1;
   plVar22 = local_80;
   while (uVar24 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar24 * lVar30;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( iVar28 + uVar2 ) - SUB164(auVar10 * auVar18, 8)) * lVar30;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      uVar23 = SUB164(auVar11 * auVar19, 8);
      plVar36 = plVar22;
      if (uVar23 < uVar33) {
         *puVar1 = (uint)uVar32;
         uVar32 = (ulong)uVar24;
         puVar3 = (undefined8*)( lVar4 + lVar31 * 8 );
         plVar36 = (long*)*puVar3;
         *puVar3 = plVar22;
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
      plVar22 = plVar36;
      uVar24 = *puVar1;
   }
;
   *(long**)( lVar4 + lVar31 * 8 ) = plVar22;
   *puVar1 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0012931b:*(long**)param_1 = local_80;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* HashMap<StringName, GDScriptCompiler::ScriptLambdaInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptCompiler::ScriptLambdaInfo> > >::_resize_and_rehash(unsigned int) */void HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>>::_resize_and_rehash(HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>> *this, uint param_1) {
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
/* CowData<GDScriptDataType>::_realloc(long) */undefined8 CowData<GDScriptDataType>::_realloc(CowData<GDScriptDataType> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<GDScriptDataType>::resize<false>(long) */undefined8 CowData<GDScriptDataType>::resize<false>(CowData<GDScriptDataType> *this, long param_1) {
   Object *pOVar1;
   code *pcVar2;
   char cVar3;
   long lVar4;
   undefined8 *puVar5;
   undefined8 uVar6;
   long lVar7;
   undefined8 *puVar8;
   long lVar9;
   ulong uVar10;
   ulong uVar11;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar7 = 0;
      lVar9 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar7) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar9 = lVar7 * 0x38;
      if (lVar9 != 0) {
         uVar10 = lVar9 - 1U | lVar9 - 1U >> 1;
         uVar10 = uVar10 | uVar10 >> 2;
         uVar10 = uVar10 | uVar10 >> 4;
         uVar10 = uVar10 | uVar10 >> 8;
         uVar10 = uVar10 | uVar10 >> 0x10;
         lVar9 = ( uVar10 | uVar10 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x38 == 0) {
      LAB_00129af0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar10 = param_1 * 0x38 - 1;
   uVar10 = uVar10 >> 1 | uVar10;
   uVar10 = uVar10 | uVar10 >> 2;
   uVar10 = uVar10 | uVar10 >> 4;
   uVar10 = uVar10 | uVar10 >> 8;
   uVar10 = uVar10 | uVar10 >> 0x10;
   uVar10 = uVar10 | uVar10 >> 0x20;
   lVar4 = uVar10 + 1;
   if (lVar4 == 0) goto LAB_00129af0;
   uVar11 = param_1;
   if (param_1 <= lVar7) {
      while (lVar7 = *(long*)this,lVar7 != 0) {
         if (*(ulong*)( lVar7 + -8 ) <= uVar11) {
            if (lVar4 != lVar9) {
               uVar6 = _realloc(this, lVar4);
               if ((int)uVar6 != 0) {
                  return uVar6;
               }

               lVar7 = *(long*)this;
               if (lVar7 == 0) goto LAB_00129a76;
            }

            *(long*)( lVar7 + -8 ) = param_1;
            return 0;
         }

         lVar7 = lVar7 + uVar11 * 0x38;
         if (( *(long*)( lVar7 + 0x30 ) != 0 ) && ( cVar3 = cVar3 != '\0' )) {
            pOVar1 = *(Object**)( lVar7 + 0x30 );
            cVar3 = predelete_handler(pOVar1);
            if (cVar3 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         if (( StringName::configured != '\0' ) && ( *(long*)( lVar7 + 0x20 ) != 0 )) {
            StringName::unref();
         }

         _unref((CowData<GDScriptDataType>*)( lVar7 + 8 ));
         uVar11 = uVar11 + 1;
      }
;
      goto LAB_00129b46;
   }

   if (lVar4 == lVar9) {
      LAB_00129a2d:puVar8 = *(undefined8**)this;
      if (puVar8 == (undefined8*)0x0) {
         LAB_00129b46:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar7 = puVar8[-1];
      if (param_1 <= lVar7) goto LAB_00129957;
   }
 else {
      if (lVar7 != 0) {
         uVar6 = _realloc(this, lVar4);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

         goto LAB_00129a2d;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar10 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar8 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar8;
      lVar7 = 0;
   }

   lVar9 = lVar7 + 1;
   puVar8[lVar7 * 7 + 1] = 0;
   *(undefined4*)( puVar8 + lVar7 * 7 + 2 ) = 0;
   *(undefined1*)( (long)puVar8 + lVar7 * 0x38 + 0x14 ) = 0;
   *(undefined4*)( puVar8 + lVar7 * 7 + 3 ) = 0;
   puVar8[lVar7 * 7 + 6] = 0;
   *(undefined1(*) [16])( puVar8 + lVar7 * 7 + 4 ) = (undefined1[16])0x0;
   if (lVar9 < param_1) {
      lVar7 = lVar9 * 0x38;
      do {
         lVar9 = lVar9 + 1;
         lVar4 = *(long*)this + lVar7;
         lVar7 = lVar7 + 0x38;
         *(undefined8*)( lVar4 + 8 ) = 0;
         *(undefined4*)( lVar4 + 0x10 ) = 0;
         *(undefined1*)( lVar4 + 0x14 ) = 0;
         *(undefined4*)( lVar4 + 0x18 ) = 0;
         *(undefined8*)( lVar4 + 0x30 ) = 0;
         *(undefined1(*) [16])( lVar4 + 0x20 ) = (undefined1[16])0x0;
      }
 while ( param_1 != lVar9 );
   }

   puVar8 = *(undefined8**)this;
   if (puVar8 == (undefined8*)0x0) {
      LAB_00129a76:_DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar2 = (code*)invalidInstructionException();
      ( *pcVar2 )();
   }

   LAB_00129957:puVar8[-1] = param_1;
   return 0;
}
/* GDScriptDataType::set_container_element_type(int, GDScriptDataType const&) */void GDScriptDataType::set_container_element_type(GDScriptDataType *this, int param_1, GDScriptDataType *param_2) {
   Object *pOVar1;
   code *pcVar2;
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   Object *pOVar5;
   char cVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long in_FS_OFFSET;
   long local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   Object *local_48;
   long local_40;
   lVar10 = (long)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (-1 < param_1) {
      do {
         auVar3 = local_68;
         if (*(long*)( this + 8 ) == 0) {
            lVar8 = 1;
         }
 else {
            lVar8 = *(long*)( *(long*)( this + 8 ) + -8 );
            if (lVar10 < lVar8) goto LAB_00129d80;
            lVar8 = lVar8 + 1;
         }

         local_48 = (Object*)0x0;
         local_68 = (undefined1[16])0x0;
         local_70 = 0;
         local_58 = (undefined1[16])0x0;
         iVar7 = CowData<GDScriptDataType>::resize<false>((CowData<GDScriptDataType>*)( this + 8 ), lVar8);
         if (iVar7 == 0) {
            if (*(long*)( this + 8 ) == 0) {
               lVar9 = -1;
               lVar8 = 0;
            }
 else {
               lVar8 = *(long*)( *(long*)( this + 8 ) + -8 );
               lVar9 = lVar8 + -1;
               if (-1 < lVar9) {
                  CowData<GDScriptDataType>::_copy_on_write((CowData<GDScriptDataType>*)( this + 8 ));
                  lVar8 = *(long*)( this + 8 ) + lVar9 * 0x38;
                  *(undefined4*)( lVar8 + 0x10 ) = local_68._0_4_;
                  *(undefined1*)( lVar8 + 0x14 ) = local_68[4];
                  *(undefined4*)( lVar8 + 0x18 ) = local_68._8_4_;
                  StringName::operator =((StringName*)( lVar8 + 0x20 ), (StringName*)local_58);
                  pOVar1 = *(Object**)( lVar8 + 0x30 );
                  *(undefined8*)( lVar8 + 0x28 ) = local_58._8_8_;
                  if (local_48 != pOVar1) {
                     *(Object**)( lVar8 + 0x30 ) = local_48;
                     if (local_48 != (Object*)0x0) {
                        cVar6 = RefCounted::reference();
                        if (cVar6 == '\0') {
                           *(undefined8*)( lVar8 + 0x30 ) = 0;
                        }

                     }

                     if (pOVar1 != (Object*)0x0) {
                        cVar6 = RefCounted::unreference();
                        if (cVar6 != '\0') {
                           cVar6 = predelete_handler(pOVar1);
                           if (cVar6 != '\0') {
                              ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                              Memory::free_static(pOVar1, false);
                           }

                        }

                     }

                  }

                  if (*(long*)( lVar8 + 8 ) != local_70) {
                     CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( lVar8 + 8 ), (CowData*)&local_70);
                  }

                  goto LAB_00129d30;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar9, lVar8, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }

         LAB_00129d30:if (local_48 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar1 = local_48;
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_48);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                  Memory::free_static(pOVar1, false);
               }

            }

         }

         if (( StringName::configured != '\0' ) && ( local_58._0_8_ != 0 )) {
            StringName::unref();
         }

         CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_70);
      }
 while ( true );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("set_container_element_type", "modules/gdscript/gdscript_function.h", 0xd1, "Condition \"p_index < 0\" is true.", 0, 0);
      return;
   }

   LAB_0012a117:/* WARNING: Subroutine does not return */__stack_chk_fail();
   LAB_00129d80:local_70 = 0;
   local_48 = (Object*)0x0;
   local_68._0_5_ = *(undefined5*)( param_2 + 0x10 );
   auVar4 = local_68;
   local_58 = (undefined1[16])0x0;
   local_68._12_4_ = auVar3._12_4_;
   local_68._0_8_ = auVar4._0_8_;
   local_68._8_4_ = *(undefined4*)( param_2 + 0x18 );
   StringName::operator =((StringName*)local_58, (StringName*)( param_2 + 0x20 ));
   pOVar5 = local_48;
   pOVar1 = *(Object**)( param_2 + 0x30 );
   local_58._8_8_ = *(undefined8*)( param_2 + 0x28 );
   if (pOVar1 != local_48) {
      local_48 = pOVar1;
      if (pOVar1 != (Object*)0x0) {
         cVar6 = RefCounted::reference();
         if (cVar6 == '\0') {
            local_48 = (Object*)0x0;
         }

      }

      if (pOVar5 != (Object*)0x0) {
         cVar6 = RefCounted::unreference();
         if (cVar6 != '\0') {
            cVar6 = predelete_handler(pOVar5);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
               Memory::free_static(pOVar5, false);
            }

         }

      }

   }

   if (local_70 != *(long*)( param_2 + 8 )) {
      CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)&local_70, (CowData*)( param_2 + 8 ));
   }

   if (*(long*)( this + 8 ) == 0) {
      lVar8 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)( this + 8 ) + -8 );
      if (lVar10 < lVar8) {
         CowData<GDScriptDataType>::_copy_on_write((CowData<GDScriptDataType>*)( this + 8 ));
         lVar10 = *(long*)( this + 8 ) + lVar10 * 0x38;
         *(undefined4*)( lVar10 + 0x10 ) = local_68._0_4_;
         *(undefined1*)( lVar10 + 0x14 ) = local_68[4];
         *(undefined4*)( lVar10 + 0x18 ) = local_68._8_4_;
         StringName::operator =((StringName*)( lVar10 + 0x20 ), (StringName*)local_58);
         pOVar1 = *(Object**)( lVar10 + 0x30 );
         *(undefined8*)( lVar10 + 0x28 ) = local_58._8_8_;
         if (local_48 != pOVar1) {
            *(Object**)( lVar10 + 0x30 ) = local_48;
            if (local_48 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  *(undefined8*)( lVar10 + 0x30 ) = 0;
               }

            }

            if (pOVar1 != (Object*)0x0) {
               cVar6 = RefCounted::unreference();
               if (cVar6 != '\0') {
                  cVar6 = predelete_handler(pOVar1);
                  if (cVar6 != '\0') {
                     ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                     Memory::free_static(pOVar1, false);
                  }

               }

            }

         }

         if (*(long*)( lVar10 + 8 ) != local_70) {
            CowData<GDScriptDataType>::_ref((CowData<GDScriptDataType>*)( lVar10 + 8 ), (CowData*)&local_70);
         }

         if (local_48 != (Object*)0x0) {
            cVar6 = RefCounted::unreference();
            pOVar1 = local_48;
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(local_48);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                  Memory::free_static(pOVar1, false);
               }

            }

         }

         if (( StringName::configured != '\0' ) && ( local_58._0_8_ != 0 )) {
            StringName::unref();
         }

         CowData<GDScriptDataType>::_unref((CowData<GDScriptDataType>*)&local_70);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return;
         }

         goto LAB_0012a117;
      }

   }

   _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar10, lVar8, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar2 = (code*)invalidInstructionException();
   ( *pcVar2 )();
}
/* CowData<GDScriptCompiler::FunctionLambdaInfo>::_realloc(long) */undefined8 CowData<GDScriptCompiler::FunctionLambdaInfo>::_realloc(CowData<GDScriptCompiler::FunctionLambdaInfo> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<GDScriptCompiler::FunctionLambdaInfo>::resize<false>(long) */undefined8 CowData<GDScriptCompiler::FunctionLambdaInfo>::resize<false>(CowData<GDScriptCompiler::FunctionLambdaInfo> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined1(*pauVar3)[16];
   undefined8 uVar4;
   undefined8 *puVar5;
   long lVar6;
   long lVar7;
   ulong uVar8;
   long lVar9;
   ulong uVar10;
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
      lVar7 = lVar6 * 0x50;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x50 == 0) {
      LAB_0012a610:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 0x50 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar9 = uVar8 + 1;
   if (lVar9 == 0) goto LAB_0012a610;
   uVar10 = param_1;
   if (param_1 <= lVar6) {
      while (lVar6 = *(long*)this,lVar6 != 0) {
         if (*(ulong*)( lVar6 + -8 ) <= uVar10) {
            if (lVar9 != lVar7) {
               uVar4 = _realloc(this, lVar9);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar6 = *(long*)this;
               if (lVar6 == 0) goto LAB_0012a55a;
            }

            *(long*)( lVar6 + -8 ) = param_1;
            return 0;
         }

         lVar6 = lVar6 + uVar10 * 0x50;
         _unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( lVar6 + 0x48 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( lVar6 + 0x18 ) != 0 )) {
            StringName::unref();
         }

         uVar10 = uVar10 + 1;
      }
;
      goto LAB_0012a666;
   }

   if (lVar9 == lVar7) {
      LAB_0012a583:puVar5 = *(undefined8**)this;
      if (puVar5 == (undefined8*)0x0) {
         LAB_0012a666:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar6 = puVar5[-1];
      if (param_1 <= lVar6) goto LAB_0012a4d0;
   }
 else {
      if (lVar6 != 0) {
         uVar4 = _realloc(this, lVar9);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_0012a583;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar5 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar5;
      lVar6 = 0;
   }

   pauVar3 = (undefined1(*) [16])( puVar5 + lVar6 * 10 );
   *pauVar3 = (undefined1[16])0x0;
   pauVar3[1] = (undefined1[16])0x0;
   pauVar3[3][0] = 0;
   *(undefined8*)( pauVar3[3] + 4 ) = 0;
   *(undefined8*)( pauVar3[4] + 8 ) = 0;
   pauVar3[2] = (undefined1[16])0x0;
   lVar6 = lVar6 + 1;
   if (lVar6 < param_1) {
      lVar7 = lVar6 * 0x50;
      do {
         lVar6 = lVar6 + 1;
         pauVar3 = (undefined1(*) [16])( *(long*)this + lVar7 );
         lVar7 = lVar7 + 0x50;
         pauVar3[3][0] = 0;
         *(undefined8*)( pauVar3[3] + 4 ) = 0;
         *(undefined8*)( pauVar3[4] + 8 ) = 0;
         *pauVar3 = (undefined1[16])0x0;
         pauVar3[1] = (undefined1[16])0x0;
         pauVar3[2] = (undefined1[16])0x0;
      }
 while ( param_1 != lVar6 );
   }

   puVar5 = *(undefined8**)this;
   if (puVar5 == (undefined8*)0x0) {
      LAB_0012a55a:_DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   LAB_0012a4d0:puVar5[-1] = param_1;
   return 0;
}
/* GDScriptCompiler::ScriptLambdaInfo::ScriptLambdaInfo(GDScriptCompiler::ScriptLambdaInfo const&)
    */void GDScriptCompiler::ScriptLambdaInfo::ScriptLambdaInfo(ScriptLambdaInfo *this, ScriptLambdaInfo *param_1) {
   uint uVar1;
   long lVar2;
   long *plVar3;
   long in_FS_OFFSET;
   StringName aSStack_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (int i = 0; i < 3; i++) {
      *(undefined8*)( this + ( 16*i + 8 ) ) = 0;
      if (*(long*)( param_1 + ( 16*i + 8 ) ) != 0) {
         CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( this + ( 16*i + 8 ) ), (CowData*)( param_1 + ( 16*i + 8 ) ));
      }

   }

   uVar1 = *(uint*)( param_1 + 0x58 );
   *(undefined8*)( this + 0x58 ) = 0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   uVar1 = *(uint*)( hash_table_size_primes + (ulong)uVar1 * 4 );
   *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
   lVar2 = 1;
   if (5 < uVar1) {
      do {
         if (uVar1 <= *(uint*)( hash_table_size_primes + lVar2 * 4 )) {
            *(int*)( this + 0x58 ) = (int)lVar2;
            goto LAB_0012a762;
         }

         lVar2 = lVar2 + 1;
      }
 while ( lVar2 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_0012a762:if (( *(int*)( param_1 + 0x5c ) != 0 ) && ( plVar3 = *(long**)( param_1 + 0x48 ) ),plVar3 != (long*)0x0) {
      do {
         HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>>::insert(aSStack_48, (Vector*)( this + 0x30 ), (bool)( (char)plVar3 + '\x10' ));
         plVar3 = (long*)*plVar3;
      }
 while ( plVar3 != (long*)0x0 );
   }

   *(undefined8*)( this + 0x68 ) = 0;
   if (*(long*)( param_1 + 0x68 ) != 0) {
      CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( this + 0x68 ), (CowData*)( param_1 + 0x68 ));
   }

   uVar1 = *(uint*)( param_1 + 0x98 );
   *(undefined8*)( this + 0x98 ) = 0;
   *(undefined1(*) [16])( this + 0x78 ) = (undefined1[16])0x0;
   uVar1 = *(uint*)( hash_table_size_primes + (ulong)uVar1 * 4 );
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   lVar2 = 1;
   if (5 < uVar1) {
      do {
         if (uVar1 <= *(uint*)( hash_table_size_primes + lVar2 * 4 )) {
            *(int*)( this + 0x98 ) = (int)lVar2;
            goto LAB_0012a831;
         }

         lVar2 = lVar2 + 1;
      }
 while ( lVar2 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
   }

   LAB_0012a831:if (( *(int*)( param_1 + 0x9c ) != 0 ) && ( plVar3 = *(long**)( param_1 + 0x88 ) ),plVar3 != (long*)0x0) {
      do {
         HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>>::insert(aSStack_48, this + 0x70, (bool)( (char)plVar3 + '\x10' ));
         plVar3 = (long*)*plVar3;
      }
 while ( plVar3 != (long*)0x0 );
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, GDScriptCompiler::ScriptLambdaInfo, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   GDScriptCompiler::ScriptLambdaInfo> > >::insert(StringName const&,
   GDScriptCompiler::ScriptLambdaInfo const&, bool) */StringName *
HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>>
::insert(StringName *param_1,ScriptLambdaInfo *param_2,bool param_3){
   HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>> *this;
   HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>> *this_00;
   uint *puVar1;
   undefined8 *puVar2;
   long lVar3;
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
   ulong uVar20;
   long *plVar21;
   uint uVar22;
   uint uVar23;
   uint uVar24;
   long *plVar25;
   long lVar26;
   undefined8 uVar27;
   void *pvVar28;
   ScriptLambdaInfo *in_RCX;
   uint uVar29;
   int iVar30;
   undefined7 in_register_00000011;
   StringName *pSVar31;
   long lVar32;
   long lVar33;
   int *piVar34;
   ulong uVar35;
   char in_R8B;
   uint uVar36;
   uint uVar37;
   ulong uVar38;
   long *plVar39;
   long in_FS_OFFSET;
   undefined1 local_f8[16];
   long local_e8;
   ScriptLambdaInfo local_e0[160];
   long local_40;
   pSVar31 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar20 = (ulong)uVar23;
      uVar35 = uVar20 * 4;
      uVar27 = Memory::alloc_static(uVar35, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar27;
      uVar38 = uVar20 * 8;
      pvVar28 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( param_2 + 8 ) = pvVar28;
      if (uVar23 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)pvVar28 + uVar38 ) ) && ( pvVar28 < (void*)( (long)__s + uVar35 ) )) {
            uVar35 = 0;
            do {
               *(undefined4*)( (long)__s + uVar35 * 4 ) = 0;
               *(undefined8*)( (long)pvVar28 + uVar35 * 8 ) = 0;
               uVar35 = uVar35 + 1;
            }
 while ( uVar20 != uVar35 );
         }
 else {
            memset(__s, 0, uVar35);
            memset(pvVar28, 0, uVar38);
         }

         goto LAB_0012a90b;
      }

      iVar30 = *(int*)( param_2 + 0x2c );
      if (pvVar28 == (void*)0x0) goto LAB_0012ac25;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_0012a91b;
      LAB_0012ac47:if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         plVar25 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0012adff;
      }

      _resize_and_rehash((HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }
 else {
      LAB_0012a90b:iVar30 = *(int*)( param_2 + 0x2c );
      if (iVar30 != 0) {
         LAB_0012a91b:uVar22 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         lVar26 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar31 == 0) {
            uVar24 = StringName::get_empty_hash();
         }
 else {
            uVar24 = *(uint*)( *(long*)pSVar31 + 0x20 );
         }

         uVar35 = CONCAT44(0, uVar22);
         if (uVar24 == 0) {
            uVar24 = 1;
         }

         uVar37 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar24 * lVar26;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar35;
         lVar32 = SUB168(auVar4 * auVar12, 8);
         uVar29 = SUB164(auVar4 * auVar12, 8);
         uVar36 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar32 * 4 );
         if (uVar36 != 0) {
            do {
               if (( uVar36 == uVar24 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar32 * 8 ) + 0x10 ) == *(long*)pSVar31 )) {
                  lVar26 = *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar29 * 8 );
                  for (int i = 0; i < 3; i++) {
                     if (*(long*)( lVar26 + ( 16*i + 32 ) ) != *(long*)( in_RCX + ( 16*i + 8 ) )) {
                        CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( lVar26 + ( 16*i + 32 ) ), (CowData*)( in_RCX + ( 16*i + 8 ) ));
                     }

                  }

                  this(HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>> * )(lVar26 + 0x48);
                  if (this != (HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>>*)( in_RCX + 0x30 )) {
                     uVar23 = *(uint*)( lVar26 + 0x70 );
                     uVar22 = *(uint*)( hash_table_size_primes + (ulong)uVar23 * 4 );
                     if (( *(int*)( lVar26 + 0x74 ) != 0 ) && ( *(long*)( lVar26 + 0x50 ) != 0 )) {
                        if (uVar22 != 0) {
                           lVar32 = 0;
                           do {
                              piVar34 = (int*)( *(long*)( lVar26 + 0x58 ) + lVar32 );
                              if (*piVar34 != 0) {
                                 *piVar34 = 0;
                                 pvVar28 = *(void**)( *(long*)( lVar26 + 0x50 ) + lVar32 * 2 );
                                 CowData<GDScriptCompiler::FunctionLambdaInfo>::_unref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( (long)pvVar28 + 0x20 ));
                                 if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar28 + 0x10 ) != 0 )) {
                                    StringName::unref();
                                 }

                                 Memory::free_static(pvVar28, false);
                                 *(undefined8*)( *(long*)( lVar26 + 0x50 ) + lVar32 * 2 ) = 0;
                              }

                              lVar32 = lVar32 + 4;
                           }
 while ( (ulong)uVar22 * 4 - lVar32 != 0 );
                           uVar23 = *(uint*)( lVar26 + 0x70 );
                           uVar22 = *(uint*)( hash_table_size_primes + (ulong)uVar23 * 4 );
                        }

                        *(undefined4*)( lVar26 + 0x74 ) = 0;
                        *(undefined1(*) [16])( lVar26 + 0x60 ) = (undefined1[16])0x0;
                     }

                     if (uVar22 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x58 ) * 4 )) {
                        if (uVar23 != 0x1c) {
                           uVar35 = (ulong)uVar23;
                           do {
                              uVar22 = (int)uVar35 + 1;
                              uVar35 = (ulong)uVar22;
                              if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x58 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar35 * 4 )) {
                                 if (uVar22 != uVar23) {
                                    if (*(long*)( lVar26 + 0x50 ) == 0) {
                                       *(uint*)( lVar26 + 0x70 ) = uVar22;
                                    }
 else {
                                       HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>>::_resize_and_rehash(this, uVar22);
                                    }

                                 }

                                 goto LAB_0012aacc;
                              }

                           }
 while ( uVar22 != 0x1c );
                        }

                        _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
                     }

                     LAB_0012aacc:if (( *(long*)( in_RCX + 0x38 ) != 0 ) && ( plVar25 = *(long**)( in_RCX + 0x48 ) ),plVar25 != (long*)0x0) {
                        do {
                           HashMap<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Vector<GDScriptCompiler::FunctionLambdaInfo>>>>::insert((StringName*)local_f8, (Vector*)this, (bool)( (char)plVar25 + '\x10' ));
                           plVar25 = (long*)*plVar25;
                        }
 while ( plVar25 != (long*)0x0 );
                     }

                  }

                  if (*(long*)( lVar26 + 0x80 ) != *(long*)( in_RCX + 0x68 )) {
                     CowData<GDScriptCompiler::FunctionLambdaInfo>::_ref((CowData<GDScriptCompiler::FunctionLambdaInfo>*)( lVar26 + 0x80 ), (CowData*)( in_RCX + 0x68 ));
                  }

                  this_00 = (HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>>*)( lVar26 + 0x88 );
                  if (this_00 != (HashMap<StringName,GDScriptCompiler::ScriptLambdaInfo,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,GDScriptCompiler::ScriptLambdaInfo>>>*)( in_RCX + 0x70 )) {
                     uVar23 = *(uint*)( lVar26 + 0xb0 );
                     uVar22 = *(uint*)( hash_table_size_primes + (ulong)uVar23 * 4 );
                     if (( *(int*)( lVar26 + 0xb4 ) != 0 ) && ( *(long*)( lVar26 + 0x90 ) != 0 )) {
                        if (uVar22 != 0) {
                           lVar32 = 0;
                           do {
                              piVar34 = (int*)( *(long*)( lVar26 + 0x98 ) + lVar32 );
                              if (*piVar34 != 0) {
                                 *piVar34 = 0;
                                 pvVar28 = *(void**)( *(long*)( lVar26 + 0x90 ) + lVar32 * 2 );
                                 GDScriptCompiler::ScriptLambdaInfo::~ScriptLambdaInfo((ScriptLambdaInfo*)( (long)pvVar28 + 0x18 ));
                                 if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar28 + 0x10 ) != 0 )) {
                                    StringName::unref();
                                 }

                                 Memory::free_static(pvVar28, false);
                                 *(undefined8*)( *(long*)( lVar26 + 0x90 ) + lVar32 * 2 ) = 0;
                              }

                              lVar32 = lVar32 + 4;
                           }
 while ( (ulong)uVar22 * 4 - lVar32 != 0 );
                           uVar23 = *(uint*)( lVar26 + 0xb0 );
                           uVar22 = *(uint*)( hash_table_size_primes + (ulong)uVar23 * 4 );
                        }

                        *(undefined4*)( lVar26 + 0xb4 ) = 0;
                        *(undefined1(*) [16])( lVar26 + 0xa0 ) = (undefined1[16])0x0;
                     }

                     if (uVar22 < *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x98 ) * 4 )) {
                        if (uVar23 != 0x1c) {
                           uVar35 = (ulong)uVar23;
                           do {
                              uVar22 = (int)uVar35 + 1;
                              uVar35 = (ulong)uVar22;
                              if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RCX + 0x98 ) * 4 ) <= *(uint*)( hash_table_size_primes + uVar35 * 4 )) {
                                 if (uVar22 != uVar23) {
                                    if (*(long*)( lVar26 + 0x90 ) == 0) {
                                       *(uint*)( lVar26 + 0xb0 ) = uVar22;
                                    }
 else {
                                       _resize_and_rehash(this_00, uVar22);
                                    }

                                 }

                                 goto LAB_0012abc2;
                              }

                           }
 while ( uVar22 != 0x1c );
                        }

                        _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
                     }

                     LAB_0012abc2:if (( *(long*)( in_RCX + 0x78 ) != 0 ) && ( plVar25 = *(long**)( in_RCX + 0x88 ) ),plVar25 != (long*)0x0) {
                        do {
                           insert((StringName*)local_f8, (ScriptLambdaInfo*)this_00, (bool)( (char)plVar25 + '\x10' ));
                           plVar25 = (long*)*plVar25;
                        }
 while ( plVar25 != (long*)0x0 );
                     }

                  }

                  plVar25 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar29 * 8 );
                  goto LAB_0012adff;
               }

               uVar37 = uVar37 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar29 + 1) * lVar26;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar35;
               lVar32 = SUB168(auVar5 * auVar13, 8);
               uVar36 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar32 * 4 );
               uVar29 = SUB164(auVar5 * auVar13, 8);
            }
 while ( ( uVar36 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar36 * lVar26,auVar14._8_8_ = 0,auVar14._0_8_ = uVar35,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar22 + uVar29 ) - SUB164(auVar6 * auVar14, 8)) * lVar26,auVar15._8_8_ = 0,auVar15._0_8_ = uVar35,uVar37 <= SUB164(auVar7 * auVar15, 8) );
         }

         iVar30 = *(int*)( param_2 + 0x2c );
      }

      LAB_0012ac25:if ((float)uVar23 * __LC11 < (float)( iVar30 + 1 )) goto LAB_0012ac47;
   }

   local_f8 = (undefined1[16])0x0;
   StringName::StringName((StringName*)&local_e8, pSVar31);
   GDScriptCompiler::ScriptLambdaInfo::ScriptLambdaInfo(local_e0, in_RCX);
   plVar25 = (long*)operator_new(0xb8, "");
   *plVar25 = local_f8._0_8_;
   plVar25[1] = local_f8._8_8_;
   StringName::StringName((StringName*)( plVar25 + 2 ), (StringName*)&local_e8);
   GDScriptCompiler::ScriptLambdaInfo::ScriptLambdaInfo((ScriptLambdaInfo*)( plVar25 + 3 ), local_e0);
   GDScriptCompiler::ScriptLambdaInfo::~ScriptLambdaInfo(local_e0);
   if (( StringName::configured != '\0' ) && ( local_e8 != 0 )) {
      StringName::unref();
   }

   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = plVar25;
      *(long**)( param_2 + 0x20 ) = plVar25;
      LAB_0012ad12:lVar26 = *(long*)pSVar31;
      if (lVar26 != 0) goto LAB_0012ad1f;
      LAB_0012ae59:uVar23 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar2 = plVar25;
         plVar25[1] = (long)puVar2;
         *(long**)( param_2 + 0x20 ) = plVar25;
         goto LAB_0012ad12;
      }

      lVar26 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar26 + 8 ) = plVar25;
      *plVar25 = lVar26;
      lVar26 = *(long*)pSVar31;
      *(long**)( param_2 + 0x18 ) = plVar25;
      if (lVar26 == 0) goto LAB_0012ae59;
      LAB_0012ad1f:uVar23 = *(uint*)( lVar26 + 0x20 );
   }

   if (uVar23 == 0) {
      uVar23 = 1;
   }

   uVar35 = (ulong)uVar23;
   uVar36 = 0;
   lVar26 = *(long*)( param_2 + 0x10 );
   lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar22 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar38 = CONCAT44(0, uVar22);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar35 * lVar32;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar38;
   lVar33 = SUB168(auVar8 * auVar16, 8);
   lVar3 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar26 + lVar33 * 4 );
   iVar30 = SUB164(auVar8 * auVar16, 8);
   uVar24 = *puVar1;
   plVar21 = plVar25;
   while (uVar24 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar24 * lVar32;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar38;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( iVar30 + uVar22 ) - SUB164(auVar9 * auVar17, 8)) * lVar32;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar38;
      uVar23 = SUB164(auVar10 * auVar18, 8);
      plVar39 = plVar21;
      if (uVar23 < uVar36) {
         *puVar1 = (uint)uVar35;
         uVar35 = (ulong)uVar24;
         puVar2 = (undefined8*)( lVar3 + lVar33 * 8 );
         plVar39 = (long*)*puVar2;
         *puVar2 = plVar21;
         uVar36 = uVar23;
      }

      uVar23 = (uint)uVar35;
      uVar36 = uVar36 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar30 + 1) * lVar32;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar38;
      lVar33 = SUB168(auVar11 * auVar19, 8);
      puVar1 = (uint*)( lVar26 + lVar33 * 4 );
      iVar30 = SUB164(auVar11 * auVar19, 8);
      plVar21 = plVar39;
      uVar24 = *puVar1;
   }
;
   *(long**)( lVar3 + lVar33 * 8 ) = plVar21;
   *puVar1 = uVar23;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0012adff:*(long**)param_1 = plVar25;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptCompiler::ScriptLambdaInfo::~ScriptLambdaInfo() */void GDScriptCompiler::ScriptLambdaInfo::~ScriptLambdaInfo(ScriptLambdaInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptParser::DataType::DataType(GDScriptParser::DataType const&) */void GDScriptParser::DataType::DataType(DataType *this, DataType *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptParser::DataType::~DataType() */void GDScriptParser::DataType::~DataType(DataType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptCompiler::CodeGen::~CodeGen() */void GDScriptCompiler::CodeGen::~CodeGen(CodeGen *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<GDScriptCodeGenerator::Address, DefaultAllocator>::~List() */void List<GDScriptCodeGenerator::Address,DefaultAllocator>::~List(List<GDScriptCodeGenerator::Address,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScript::MemberInfo::~MemberInfo() */void GDScript::MemberInfo::~MemberInfo(MemberInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptCodeGenerator::Address::Address(GDScriptCodeGenerator::Address::AddressMode,
   GDScriptDataType const&) */void GDScriptCodeGenerator::Address::Address(void) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptDataType::GDScriptDataType(GDScriptDataType const&) */void GDScriptDataType::GDScriptDataType(GDScriptDataType *this, GDScriptDataType *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptDataType::~GDScriptDataType() */void GDScriptDataType::~GDScriptDataType(GDScriptDataType *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodInfo::~MethodInfo() */void MethodInfo::~MethodInfo(MethodInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<GDScriptParser::SubscriptNode const*, DefaultAllocator>::~List() */void List<GDScriptParser::SubscriptNode_const*,DefaultAllocator>::~List(List<GDScriptParser::SubscriptNode_const*,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* GDScriptCompiler::ScriptLambdaInfo::ScriptLambdaInfo(GDScriptCompiler::ScriptLambdaInfo const&)
    */void GDScriptCompiler::ScriptLambdaInfo::ScriptLambdaInfo(ScriptLambdaInfo *this, ScriptLambdaInfo *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


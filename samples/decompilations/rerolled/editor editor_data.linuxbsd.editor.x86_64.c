/* CowData<EditorPlugin*>::_copy_on_write() [clone .isra.0] */void CowData<EditorPlugin*>::_copy_on_write(CowData<EditorPlugin*> *this) {
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
/* EditorSelection::_emit_change() */void EditorSelection::_emit_change(EditorSelection *this) {
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (_emit_change()::{lambda()
   #1
   iVar2 = __cxa_guard_acquire(&_emit_change()::, {
         lambda()
         #1
         if (iVar2 != 0) {
            _scs_create((char *)&_emit_change()::{lambda()
            #1
            __cxa_atexit(StringName::~StringName, &_emit_change()::, {
                  lambda()
                  #1
                  &__dso_handle;
                  __cxa_guard_release(&_emit_change()::{lambda()#1}::operator()()::sname);
    }
  }, ( **(code**)( *(long*)this + 0xd0 ) )(this,&_emit_change()::{lambda()#1}::operator()()::sname,0,0);
  if (Variant::needs_deinit[0] != '\0') {
    Variant::_clear_internal();
  }
  this[0x1a8] = (EditorSelection)0x0;
  if (lVar1 == *(long *)(in_FS_OFFSET + 0x28)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  __stack_chk_fail();
}



/* void Ref<Texture>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */

void __thiscall Ref<Texture>::operator=(Ref<Texture> *this,Ref *param_1), {
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
                              pOVar3 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Texture::typeinfo, 0);
                              if (pOVar3 == pOVar1) {
                                 return;
                              }

                              *(Object**)this = pOVar3;
                              if (( pOVar3 != (Object*)0x0 ) && ( cVar2 = RefCounted::reference() ),cVar2 == '\0') {
                                 *(undefined8*)this = 0;
                              }

                              if (pOVar1 == (Object*)0x0) {
                                 return;
                              }

                           }

                           cVar2 = RefCounted::unreference();
                           if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar1) ),cVar2 != '\0') {
                              ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                              Memory::free_static(pOVar1, false);
                              return;
                           }

                           return;
                        }
, /* Ref<Texture2D>::TEMPNAMEPLACEHOLDERVALUE(Ref<Texture2D> const&) [clone .isra.0] */, void __thiscall Ref<Texture2D>::operator=(Ref<Texture2D> *this, Ref * param_1) * pOVar1);
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
, /* EditorSelection::_update_node_list() [clone .part.0] */, void __thiscall EditorSelection::_update_node_list(EditorSelection *this);
            {
               void *pvVar1;
               long lVar2;
               undefined8 *puVar3;
               undefined8 uVar4;
               undefined1 auVar5[16];
               undefined1 auVar6[16];
               undefined1 auVar7[16];
               undefined1 auVar8[16];
               undefined1 auVar9[16];
               undefined1 auVar10[16];
               undefined1 auVar11[16];
               undefined1 auVar12[16];
               long lVar13;
               ulong uVar14;
               undefined8 *puVar15;
               undefined1(*pauVar16)[16];
               int iVar17;
               long lVar18;
               long *plVar19;
               ulong uVar20;
               uint uVar21;
               ulong uVar22;
               uint uVar23;
               plVar19 = *(long**)( this + 0x1b8 );
               if (plVar19 != (long*)0x0) {
                  do {
                     pvVar1 = (void*)*plVar19;
                     if (pvVar1 == (void*)0x0) goto LAB_001003ca;
                     if (*(long**)( (long)pvVar1 + 0x18 ) == plVar19) {
                        lVar13 = *(long*)( (long)pvVar1 + 8 );
                        lVar2 = *(long*)( (long)pvVar1 + 0x10 );
                        *plVar19 = lVar13;
                        if (pvVar1 == (void*)plVar19[1]) {
                           plVar19[1] = lVar2;
                        }

                        if (lVar2 != 0) {
                           *(long*)( lVar2 + 8 ) = lVar13;
                           lVar13 = *(long*)( (long)pvVar1 + 8 );
                        }

                        if (lVar13 != 0) {
                           *(long*)( lVar13 + 0x10 ) = lVar2;
                        }

                        Memory::free_static(pvVar1, false);
                        *(int*)( plVar19 + 2 ) = (int)plVar19[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     plVar19 = *(long**)( this + 0x1b8 );
                  }
 while ( (int)plVar19[2] != 0 );
                  Memory::free_static(plVar19, false);
                  *(undefined8*)( this + 0x1b8 ) = 0;
               }

               LAB_001003ca:puVar3 = *(undefined8**)( this + 400 );
               do {
                  if (puVar3 == (undefined8*)0x0) {
                     this[0x1aa] = (EditorSelection)0x1;
                     return;
                  }

                  lVar13 = Node::get_parent();
                  while (lVar13 != 0) {
                     if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
                        uVar22 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ));
                        lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
                        uVar14 = lVar13 * 0x3ffff - 1;
                        uVar14 = ( uVar14 ^ uVar14 >> 0x1f ) * 0x15;
                        uVar14 = ( uVar14 ^ uVar14 >> 0xb ) * 0x41;
                        uVar14 = uVar14 >> 0x16 ^ uVar14;
                        uVar20 = uVar14 & 0xffffffff;
                        if ((int)uVar14 == 0) {
                           uVar20 = 1;
                        }

                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = uVar20 * lVar2;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar22;
                        lVar18 = SUB168(auVar5 * auVar9, 8);
                        uVar21 = *(uint*)( *(long*)( this + 0x188 ) + lVar18 * 4 );
                        iVar17 = SUB164(auVar5 * auVar9, 8);
                        if (uVar21 != 0) {
                           uVar23 = 0;
                           do {
                              if (( uVar21 == (uint)uVar20 ) && ( lVar13 == *(long*)( *(long*)( *(long*)( this + 0x180 ) + lVar18 * 8 ) + 0x10 ) )) goto LAB_0010050d;
                              uVar23 = uVar23 + 1;
                              auVar6._8_8_ = 0;
                              auVar6._0_8_ = ( ulong )(iVar17 + 1) * lVar2;
                              auVar10._8_8_ = 0;
                              auVar10._0_8_ = uVar22;
                              lVar18 = SUB168(auVar6 * auVar10, 8);
                              uVar21 = *(uint*)( *(long*)( this + 0x188 ) + lVar18 * 4 );
                              iVar17 = SUB164(auVar6 * auVar10, 8);
                           }
 while ( ( uVar21 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar21 * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar22,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) + iVar17 ) - SUB164(auVar7 * auVar11, 8)) * lVar2,auVar12._8_8_ = 0,auVar12._0_8_ = uVar22,uVar23 <= SUB164(auVar8 * auVar12, 8) );
                        }

                     }

                     lVar13 = Node::get_parent();
                  }
;
                  if (*(long*)( this + 0x1b8 ) == 0) {
                     pauVar16 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined1(**) [16])( this + 0x1b8 ) = pauVar16;
                     *(undefined4*)pauVar16[1] = 0;
                     *pauVar16 = (undefined1[16])0x0;
                  }

                  puVar15 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                  uVar4 = puVar3[2];
                  puVar15[1] = 0;
                  *puVar15 = uVar4;
                  plVar19 = *(long**)( this + 0x1b8 );
                  lVar13 = plVar19[1];
                  puVar15[3] = plVar19;
                  puVar15[2] = lVar13;
                  if (lVar13 != 0) {
                     *(undefined8**)( lVar13 + 8 ) = puVar15;
                  }

                  plVar19[1] = (long)puVar15;
                  if (*plVar19 == 0) {
                     *plVar19 = (long)puVar15;
                  }

                  *(int*)( plVar19 + 2 ) = (int)plVar19[2] + 1;
                  LAB_0010050d:puVar3 = (undefined8*)*puVar3;
               }
 while ( true );
            }

            /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */
            void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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

            /* HashMap<Node*, Object*, HashMapHasherDefault, HashMapComparatorDefault<Node*>,
   DefaultTypedAllocator<HashMapElement<Node*, Object*> > >::erase(Node* const&) [clone .isra.0] */
            void HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>::erase(HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>> *this, Node **param_1) {
               uint *puVar1;
               undefined8 *puVar2;
               undefined8 *puVar3;
               long *plVar4;
               uint uVar5;
               long lVar6;
               long lVar7;
               long lVar8;
               undefined8 uVar9;
               long *plVar10;
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
               ulong uVar29;
               uint uVar30;
               ulong uVar31;
               ulong uVar32;
               ulong uVar33;
               long *plVar34;
               ulong uVar35;
               uint uVar36;
               uint uVar37;
               uint *puVar38;
               lVar6 = *(long*)( this + 8 );
               if (( lVar6 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
                  lVar7 = *(long*)( this + 0x10 );
                  uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar35 = CONCAT44(0, uVar5);
                  lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  uVar29 = (long)*param_1 * 0x3ffff - 1;
                  uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
                  uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
                  uVar29 = uVar29 >> 0x16 ^ uVar29;
                  uVar32 = uVar29 & 0xffffffff;
                  if ((int)uVar29 == 0) {
                     uVar32 = 1;
                  }

                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar32 * lVar8;
                  auVar20._8_8_ = 0;
                  auVar20._0_8_ = uVar35;
                  uVar29 = SUB168(auVar11 * auVar20, 8);
                  uVar37 = *(uint*)( lVar7 + uVar29 * 4 );
                  uVar33 = (ulong)SUB164(auVar11 * auVar20, 8);
                  if (uVar37 != 0) {
                     uVar36 = 0;
                     do {
                        auVar14._8_8_ = 0;
                        auVar14._0_8_ = ( ulong )((int)uVar33 + 1) * lVar8;
                        auVar23._8_8_ = 0;
                        auVar23._0_8_ = uVar35;
                        uVar31 = SUB168(auVar14 * auVar23, 8);
                        uVar30 = SUB164(auVar14 * auVar23, 8);
                        if (( (uint)uVar32 == uVar37 ) && ( *param_1 == *(Node**)( *(long*)( lVar6 + uVar29 * 8 ) + 0x10 ) )) {
                           puVar38 = (uint*)( lVar7 + uVar31 * 4 );
                           uVar37 = *puVar38;
                           if (( uVar37 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar37 * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar30 + uVar5 ) - SUB164(auVar15 * auVar24, 8)) * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar35,uVar29 = (ulong)uVar30,uVar32 = uVar33,SUB164(auVar16 * auVar25, 8) != 0) {
                              while (true) {
                                 uVar33 = uVar29;
                                 puVar1 = (uint*)( lVar7 + uVar32 * 4 );
                                 *puVar38 = *puVar1;
                                 puVar2 = (undefined8*)( lVar6 + uVar31 * 8 );
                                 *puVar1 = uVar37;
                                 puVar3 = (undefined8*)( lVar6 + uVar32 * 8 );
                                 uVar9 = *puVar2;
                                 *puVar2 = *puVar3;
                                 *puVar3 = uVar9;
                                 auVar19._8_8_ = 0;
                                 auVar19._0_8_ = ( ulong )((int)uVar33 + 1) * lVar8;
                                 auVar28._8_8_ = 0;
                                 auVar28._0_8_ = uVar35;
                                 uVar31 = SUB168(auVar19 * auVar28, 8);
                                 puVar38 = (uint*)( lVar7 + uVar31 * 4 );
                                 uVar37 = *puVar38;
                                 if (( uVar37 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar37 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar35,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( SUB164(auVar19 * auVar28, 8) + uVar5 ) - SUB164(auVar17 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar35,SUB164(auVar18 * auVar27, 8) == 0) break;
                                 uVar29 = uVar31 & 0xffffffff;
                                 uVar32 = uVar33;
                              }
;
                           }

                           plVar4 = (long*)( lVar6 + uVar33 * 8 );
                           *(undefined4*)( lVar7 + uVar33 * 4 ) = 0;
                           plVar34 = (long*)*plVar4;
                           if (*(long**)( this + 0x18 ) == plVar34) {
                              *(long*)( this + 0x18 ) = *plVar34;
                              plVar34 = (long*)*plVar4;
                              if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00100879;
                           }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                              LAB_00100879:plVar10 = (long*)plVar34[1];
                              goto joined_r0x00100880;
                           }

                           *(long*)( this + 0x20 ) = plVar34[1];
                           plVar34 = (long*)*plVar4;
                           plVar10 = (long*)plVar34[1];
                           joined_r0x00100880:if (plVar10 != (long*)0x0) {
                              *plVar10 = *plVar34;
                              plVar34 = (long*)*plVar4;
                           }

                           if (*plVar34 != 0) {
                              *(long*)( *plVar34 + 8 ) = plVar34[1];
                              plVar34 = (long*)*plVar4;
                           }

                           Memory::free_static(plVar34, false);
                           *(undefined8*)( *(long*)( this + 8 ) + uVar33 * 8 ) = 0;
                           *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
                           return;
                        }

                        uVar37 = *(uint*)( lVar7 + uVar31 * 4 );
                        uVar33 = uVar31 & 0xffffffff;
                        uVar36 = uVar36 + 1;
                     }
 while ( ( uVar37 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar37 * lVar8,auVar21._8_8_ = 0,auVar21._0_8_ = uVar35,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar5 + uVar30 ) - SUB164(auVar12 * auVar21, 8)) * lVar8,auVar22._8_8_ = 0,auVar22._0_8_ = uVar35,uVar29 = uVar31,uVar36 <= SUB164(auVar13 * auVar22, 8) );
                  }

               }

               return;
            }

            /* EditorSelectionHistory::get_history_len() */
            undefined4 EditorSelectionHistory::get_history_len(EditorSelectionHistory *this) {
               if (*(long*)( this + 8 ) != 0) {
                  return *(undefined4*)( *(long*)( this + 8 ) + -8 );
               }

               return 0;
            }

            /* EditorSelectionHistory::get_history_pos() */
            undefined4 EditorSelectionHistory::get_history_pos(EditorSelectionHistory *this) {
               return *(undefined4*)( this + 0x10 );
            }

            /* EditorSelectionHistory::get_history_obj(int) const */
            undefined8 EditorSelectionHistory::get_history_obj(EditorSelectionHistory *this, int param_1) {
               long lVar1;
               long lVar2;
               int iVar3;
               long lVar4;
               char *pcVar5;
               char *pcVar6;
               lVar2 = (long)param_1;
               lVar1 = *(long*)( this + 8 );
               if (param_1 < 0) {
                  if (lVar1 == 0) goto LAB_00100a30;
                  lVar4 = *(long*)( lVar1 + -8 );
               }
 else {
                  if (lVar1 != 0) {
                     lVar4 = *(long*)( lVar1 + -8 );
                     if (lVar4 <= lVar2) goto LAB_001009b9;
                     lVar1 = lVar1 + lVar2 * 0x18;
                     iVar3 = *(int*)( lVar1 + 0x10 );
                     lVar2 = (long)iVar3;
                     lVar1 = *(long*)( lVar1 + 8 );
                     if (iVar3 < 0) {
                        if (lVar1 == 0) goto LAB_00100a38;
                        lVar4 = *(long*)( lVar1 + -8 );
                     }
 else if (lVar1 == 0) {
                        LAB_00100a38:lVar4 = 0;
                     }
 else {
                        lVar4 = *(long*)( lVar1 + -8 );
                        if (lVar2 < lVar4) {
                           return *(undefined8*)( lVar1 + 8 + lVar2 * 0x20 );
                        }

                     }

                     iVar3 = 0xa3;
                     pcVar5 = "history[p_obj].level";
                     pcVar6 = "history[p_obj].path.size()";
                     goto LAB_001009d9;
                  }

                  LAB_00100a30:lVar4 = 0;
               }

               LAB_001009b9:iVar3 = 0xa2;
               pcVar5 = "p_obj";
               pcVar6 = "history.size()";
               LAB_001009d9:_err_print_index_error("get_history_obj", "editor/editor_data.cpp", iVar3, lVar2, lVar4, pcVar5, pcVar6, "", false, false);
               return 0;
            }

            /* EditorSelectionHistory::is_at_beginning() const */
            undefined4 EditorSelectionHistory::is_at_beginning(EditorSelectionHistory *this) {
               return CONCAT31(( int3 )(( uint ) * (int*)( this + 0x10 ) >> 8), *(int*)( this + 0x10 ) < 1);
            }

            /* EditorSelectionHistory::is_at_end() const */
            undefined8 EditorSelectionHistory::is_at_end(EditorSelectionHistory *this) {
               long lVar1;
               if (*(long*)( this + 8 ) == 0) {
                  lVar1 = 0;
               }
 else {
                  lVar1 = *(long*)( *(long*)( this + 8 ) + -8 );
               }

               return CONCAT71(( int7 )(int3)(( uint )(*(int*)( this + 0x10 ) + 1) >> 8), lVar1 <= *(int*)( this + 0x10 ) + 1);
            }

            /* EditorSelectionHistory::is_current_inspector_only() const */
            undefined1 EditorSelectionHistory::is_current_inspector_only(EditorSelectionHistory *this) {
               int iVar1;
               long lVar2;
               code *pcVar3;
               long lVar4;
               long lVar5;
               iVar1 = *(int*)( this + 0x10 );
               if (( ( iVar1 < 0 ) || ( lVar2 = lVar2 == 0 ) ) || ( *(long*)( lVar2 + -8 ) <= (long)iVar1 )) {
                  return 0;
               }

               lVar2 = lVar2 + (long)iVar1 * 0x18;
               lVar4 = (long)*(int*)( lVar2 + 0x10 );
               lVar2 = *(long*)( lVar2 + 8 );
               if (lVar4 < 0) {
                  if (lVar2 != 0) {
                     lVar5 = *(long*)( lVar2 + -8 );
                     goto LAB_00100ae1;
                  }

               }
 else if (lVar2 != 0) {
                  lVar5 = *(long*)( lVar2 + -8 );
                  if (lVar4 < lVar5) {
                     return *(undefined1*)( lVar2 + 0x18 + lVar4 * 0x20 );
                  }

                  goto LAB_00100ae1;
               }

               lVar5 = 0;
               LAB_00100ae1:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar3 = (code*)invalidInstructionException();
               ( *pcVar3 )();
            }

            /* EditorSelectionHistory::get_current() */
            undefined8 EditorSelectionHistory::get_current(EditorSelectionHistory *this) {
               int iVar1;
               long lVar2;
               undefined8 uVar3;
               ulong uVar4;
               uint uVar5;
               ulong *puVar6;
               long in_FS_OFFSET;
               bool bVar7;
               iVar1 = *(int*)( this + 0x10 );
               lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
               if (-1 < iVar1) {
                  if (( *(long*)( this + 8 ) != 0 ) && ( (long)iVar1 < *(long*)( *(long*)( this + 8 ) + -8 ) )) {
                     uVar4 = get_history_obj(this, iVar1);
                     uVar5 = (uint)uVar4 & 0xffffff;
                     if (uVar5 < (uint)ObjectDB::slot_max) {
                        while (true) {
                           LOCK();
                           bVar7 = (char)ObjectDB::spin_lock == '\0';
                           if (bVar7) {
                              ObjectDB::spin_lock._0_1_ = '\x01';
                           }

                           UNLOCK();
                           if (bVar7) break;
                           do {} while ( (char)ObjectDB::spin_lock != '\0' );
                        }
;
                        puVar6 = (ulong*)( (ulong)uVar5 * 0x10 + ObjectDB::object_slots );
                        if (( uVar4 >> 0x18 & 0x7fffffffff ) == ( *puVar6 & 0x7fffffffff )) {
                           uVar4 = puVar6[1];
                           ObjectDB::spin_lock._0_1_ = '\0';
                           if (uVar4 != 0) {
                              uVar3 = *(undefined8*)( uVar4 + 0x60 );
                              goto LAB_00100b63;
                           }

                        }
 else {
                           ObjectDB::spin_lock._0_1_ = '\0';
                        }

                     }
 else {
                        _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                     }

                  }

               }

               uVar3 = 0;
               LAB_00100b63:if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar3;
            }

            /* EditorSelectionHistory::get_path_size() const */
            undefined4 EditorSelectionHistory::get_path_size(EditorSelectionHistory *this) {
               int iVar1;
               long lVar2;
               undefined4 uVar3;
               undefined4 uVar4;
               iVar1 = *(int*)( this + 0x10 );
               uVar3 = 0;
               uVar4 = 0;
               if (( ( ( -1 < iVar1 ) && ( lVar2 = *(long*)( this + 8 ) ),uVar4 = uVar3,lVar2 != 0 ) ) && ( (long)iVar1 < *(long*)( lVar2 + -8 ) )) {
                  uVar4 = *(undefined4*)( lVar2 + -8 );
               }

               return uVar4;
            }

            /* EditorSelectionHistory::get_path_object(int) const */
            undefined8 EditorSelectionHistory::get_path_object(EditorSelectionHistory *this, int param_1) {
               int iVar1;
               long lVar2;
               long lVar3;
               ulong uVar4;
               undefined8 uVar5;
               uint uVar6;
               long lVar7;
               ulong *puVar8;
               long lVar9;
               long in_FS_OFFSET;
               bool bVar10;
               lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
               iVar1 = *(int*)( this + 0x10 );
               if (( ( iVar1 < 0 ) || ( lVar3 = lVar3 == 0 ) ) || ( *(long*)( lVar3 + -8 ) <= (long)iVar1 )) {
                  LAB_00100da8:uVar5 = 0;
                  goto LAB_00100daa;
               }

               lVar7 = (long)param_1;
               lVar3 = *(long*)( lVar3 + 8 + (long)iVar1 * 0x18 );
               if (param_1 < 0) {
                  if (lVar3 == 0) goto LAB_00100e2a;
                  lVar9 = *(long*)( lVar3 + -8 );
               }
 else if (lVar3 == 0) {
                  LAB_00100e2a:lVar9 = 0;
               }
 else {
                  lVar9 = *(long*)( lVar3 + -8 );
                  if (lVar7 < lVar9) {
                     uVar4 = *(ulong*)( lVar3 + 8 + lVar7 * 0x20 );
                     uVar6 = (uint)uVar4 & 0xffffff;
                     if (uVar6 < (uint)ObjectDB::slot_max) {
                        while (true) {
                           LOCK();
                           bVar10 = (char)ObjectDB::spin_lock == '\0';
                           if (bVar10) {
                              ObjectDB::spin_lock._0_1_ = '\x01';
                           }

                           UNLOCK();
                           if (bVar10) break;
                           do {} while ( (char)ObjectDB::spin_lock != '\0' );
                        }
;
                        puVar8 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
                        if (( uVar4 >> 0x18 & 0x7fffffffff ) == ( *puVar8 & 0x7fffffffff )) {
                           uVar4 = puVar8[1];
                           ObjectDB::spin_lock._0_1_ = '\0';
                           if (uVar4 != 0) {
                              uVar5 = *(undefined8*)( uVar4 + 0x60 );
                              goto LAB_00100daa;
                           }

                        }
 else {
                           ObjectDB::spin_lock._0_1_ = '\0';
                        }

                     }
 else {
                        _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                     }

                     goto LAB_00100da8;
                  }

               }

               _err_print_index_error("get_path_object", "editor/editor_data.cpp", 0xe6, lVar7, lVar9, "p_index", "history[current_elem_idx].path.size()", "", false, false);
               uVar5 = 0;
               LAB_00100daa:if (lVar2 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar5;
            }

            /* EditorSelectionHistory::get_path_property(int) const */
            CowData<char32_t> *EditorSelectionHistory::get_path_property(int param_1) {
               int iVar1;
               long lVar2;
               long lVar3;
               int in_EDX;
               long in_RSI;
               long lVar4;
               undefined4 in_register_0000003c;
               CowData<char32_t> *this;
               long lVar5;
               long in_FS_OFFSET;
               this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
               lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
               iVar1 = *(int*)( in_RSI + 0x10 );
               if (( ( iVar1 < 0 ) || ( lVar4 = lVar4 == 0 ) ) || ( *(long*)( lVar4 + -8 ) <= (long)iVar1 )) {
                  *(undefined8*)this = 0;
                  String::parse_latin1((StrRange*)this);
                  goto LAB_00100ee6;
               }

               lVar3 = (long)in_EDX;
               lVar4 = *(long*)( lVar4 + 8 + (long)iVar1 * 0x18 );
               if (in_EDX < 0) {
                  if (lVar4 == 0) goto LAB_00100f68;
                  lVar5 = *(long*)( lVar4 + -8 );
               }
 else if (lVar4 == 0) {
                  LAB_00100f68:lVar5 = 0;
               }
 else {
                  lVar5 = *(long*)( lVar4 + -8 );
                  if (lVar3 < lVar5) {
                     *(undefined8*)this = 0;
                     lVar4 = lVar4 + lVar3 * 0x20;
                     if (*(long*)( lVar4 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref(this, (CowData*)( lVar4 + 0x10 ));
                     }

                     goto LAB_00100ee6;
                  }

               }

               _err_print_index_error("get_path_property", "editor/editor_data.cpp", 0xf1, lVar3, lVar5, "p_index", "history[current_elem_idx].path.size()", "", false, false);
               *(undefined8*)this = 0;
               String::parse_latin1((StrRange*)this);
               LAB_00100ee6:if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return this;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorSelectionHistory::EditorSelectionHistory() */
            void EditorSelectionHistory::EditorSelectionHistory(EditorSelectionHistory *this) {
               *(undefined8*)( this + 8 ) = 0;
               *(undefined4*)( this + 0x10 ) = 0xffffffff;
               return;
            }

            /* EditorData::get_handling_main_editor(Object*) */
            undefined8 EditorData::get_handling_main_editor(EditorData *this, Object *param_1) {
               long *plVar1;
               code *pcVar2;
               char cVar3;
               long lVar4;
               uint uVar5;
               ulong uVar6;
               long lVar7;
               lVar4 = *(long*)( this + 8 );
               if (lVar4 == 0) {
                  return 0;
               }

               uVar5 = *(int*)( lVar4 + -8 ) - 1;
               if ((int)uVar5 < 0) {
                  return 0;
               }

               uVar6 = (ulong)uVar5;
               while (lVar4 != 0) {
                  lVar7 = *(long*)( lVar4 + -8 );
                  if (lVar7 <= (long)uVar6) goto LAB_0010103c;
                  cVar3 = ( **(code**)( **(long**)( lVar4 + uVar6 * 8 ) + 0x208 ) )();
                  if (cVar3 != '\0') {
                     lVar4 = *(long*)( this + 8 );
                     if (lVar4 == 0) {
                        lVar7 = 0;
                        LAB_00101083:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar6, lVar7, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                     lVar7 = *(long*)( lVar4 + -8 );
                     if (lVar7 <= (long)uVar6) goto LAB_00101083;
                     plVar1 = *(long**)( lVar4 + uVar6 * 8 );
                     cVar3 = ( **(code**)( *plVar1 + 0x228 ) )(plVar1, param_1);
                     if (cVar3 != '\0') {
                        lVar4 = *(long*)( this + 8 );
                        if (lVar4 == 0) {
                           lVar7 = 0;
                        }
 else {
                           lVar7 = *(long*)( lVar4 + -8 );
                           if ((long)uVar6 < lVar7) {
                              return *(undefined8*)( lVar4 + uVar6 * 8 );
                           }

                        }

                        _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar6, lVar7, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                  }

                  uVar6 = uVar6 - 1;
                  if ((int)uVar6 < 0) {
                     return 0;
                  }

                  lVar4 = *(long*)( this + 8 );
               }
;
               lVar7 = 0;
               LAB_0010103c:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar6, lVar7, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            /* EditorData::get_editor_by_name(String const&) */
            undefined8 EditorData::get_editor_by_name(EditorData *this, String *param_1) {
               long *plVar1;
               code *pcVar2;
               char cVar3;
               long lVar4;
               undefined8 uVar5;
               uint uVar6;
               ulong uVar7;
               long lVar8;
               long in_FS_OFFSET;
               long local_48;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               lVar4 = *(long*)( this + 8 );
               if (( lVar4 == 0 ) || ( uVar6 = *(int*)( lVar4 + -8 ) - 1 ),(int)uVar6 < 0) {
                  LAB_00101250:uVar5 = 0;
                  LAB_00101252:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return uVar5;
                  }

                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               uVar7 = (ulong)uVar6;
               do {
                  if (lVar4 == 0) {
                     LAB_00101202:lVar8 = 0;
                     LAB_00101205:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar7, lVar8, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar2 = (code*)invalidInstructionException();
                     ( *pcVar2 )();
                  }

                  lVar8 = *(long*)( lVar4 + -8 );
                  if (lVar8 <= (long)uVar7) goto LAB_00101205;
                  ( **(code**)( **(long**)( lVar4 + uVar7 * 8 ) + 0x1e8 ) )(&local_48);
                  cVar3 = String::operator ==((String*)&local_48, param_1);
                  lVar4 = local_48;
                  if (local_48 != 0) {
                     LOCK();
                     plVar1 = (long*)( local_48 + -0x10 );
                     *plVar1 = *plVar1 + -1;
                     UNLOCK();
                     if (*plVar1 == 0) {
                        local_48 = 0;
                        Memory::free_static((void*)( lVar4 + -0x10 ), false);
                     }

                  }

                  if (cVar3 != '\0') {
                     lVar4 = *(long*)( this + 8 );
                     if (lVar4 != 0) {
                        lVar8 = *(long*)( lVar4 + -8 );
                        if (lVar8 <= (long)uVar7) goto LAB_00101205;
                        uVar5 = *(undefined8*)( lVar4 + uVar7 * 8 );
                        goto LAB_00101252;
                     }

                     goto LAB_00101202;
                  }

                  uVar7 = uVar7 - 1;
                  if ((int)uVar7 < 0) goto LAB_00101250;
                  lVar4 = *(long*)( this + 8 );
               }
 while ( true );
            }

            /* EditorData::get_editor_breakpoints(List<String, DefaultAllocator>*) */
            void EditorData::get_editor_breakpoints(EditorData *this, List *param_1) {
               long *plVar1;
               long lVar2;
               long lVar3;
               lVar2 = *(long*)( this + 8 );
               if (lVar2 == 0) {
                  return;
               }

               lVar3 = 0;
               do {
                  if (*(long*)( lVar2 + -8 ) <= lVar3) {
                     return;
                  }

                  plVar1 = *(long**)( lVar2 + lVar3 * 8 );
                  lVar3 = lVar3 + 1;
                  ( **(code**)( *plVar1 + 0x268 ) )(plVar1, param_1);
                  lVar2 = *(long*)( this + 8 );
               }
 while ( lVar2 != 0 );
               return;
            }

            /* EditorData::get_editor_plugin_states() const */
            Dictionary *EditorData::get_editor_plugin_states(void) {
               long *plVar1;
               long lVar2;
               code *pcVar3;
               char cVar4;
               Variant *pVVar5;
               long lVar6;
               long in_RSI;
               Dictionary *in_RDI;
               long lVar7;
               long in_FS_OFFSET;
               Dictionary local_88[8];
               long local_80;
               int local_78[8];
               int local_58[2];
               undefined8 local_50;
               undefined8 uStack_48;
               long local_40;
               lVar6 = 0;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               Dictionary::Dictionary(in_RDI);
               lVar2 = *(long*)( in_RSI + 8 );
               do {
                  if (( lVar2 == 0 ) || ( *(long*)( lVar2 + -8 ) <= lVar6 )) {
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return in_RDI;
                     }

                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  ( **(code**)( **(long**)( lVar2 + lVar6 * 8 ) + 0x238 ) )(local_88);
                  cVar4 = Dictionary::is_empty();
                  if (cVar4 == '\0') {
                     Variant::Variant((Variant*)local_58, local_88);
                     lVar2 = *(long*)( in_RSI + 8 );
                     if (lVar2 == 0) {
                        lVar7 = 0;
                        LAB_001014a3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar3 = (code*)invalidInstructionException();
                        ( *pcVar3 )();
                     }

                     lVar7 = *(long*)( lVar2 + -8 );
                     if (lVar7 <= lVar6) goto LAB_001014a3;
                     ( **(code**)( **(long**)( lVar2 + lVar6 * 8 ) + 0x1e8 ) )((String*)&local_80);
                     Variant::Variant((Variant*)local_78, (String*)&local_80);
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

                     lVar2 = local_80;
                     if (local_80 != 0) {
                        LOCK();
                        plVar1 = (long*)( local_80 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_80 = 0;
                           Memory::free_static((void*)( lVar2 + -0x10 ), false);
                        }

                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                  }

                  lVar6 = lVar6 + 1;
                  Dictionary::~Dictionary(local_88);
                  lVar2 = *(long*)( in_RSI + 8 );
               }
 while ( true );
            }

            /* EditorData::notify_resource_saved(Ref<Resource> const&) */
            void EditorData::notify_resource_saved(Ref *param_1) {
               long lVar1;
               long lVar2;
               long lVar3;
               lVar2 = *(long*)( param_1 + 8 );
               if (lVar2 == 0) {
                  return;
               }

               lVar3 = 0;
               do {
                  if (*(long*)( lVar2 + -8 ) <= lVar3) {
                     return;
                  }

                  lVar1 = lVar3 * 8;
                  lVar3 = lVar3 + 1;
                  EditorPlugin::notify_resource_saved(*(Ref**)( lVar2 + lVar1 ));
                  lVar2 = *(long*)( param_1 + 8 );
               }
 while ( lVar2 != 0 );
               return;
            }

            /* EditorData::notify_scene_saved(String const&) */
            void EditorData::notify_scene_saved(String *param_1) {
               long lVar1;
               long lVar2;
               long lVar3;
               lVar2 = *(long*)( param_1 + 8 );
               if (lVar2 == 0) {
                  return;
               }

               lVar3 = 0;
               do {
                  if (*(long*)( lVar2 + -8 ) <= lVar3) {
                     return;
                  }

                  lVar1 = lVar3 * 8;
                  lVar3 = lVar3 + 1;
                  EditorPlugin::notify_scene_saved(*(String**)( lVar2 + lVar1 ));
                  lVar2 = *(long*)( param_1 + 8 );
               }
 while ( lVar2 != 0 );
               return;
            }

            /* EditorData::clear_editor_states() */
            void EditorData::clear_editor_states(EditorData *this) {
               long lVar1;
               long lVar2;
               long lVar3;
               lVar2 = *(long*)( this + 8 );
               if (lVar2 == 0) {
                  return;
               }

               lVar3 = 0;
               do {
                  if (*(long*)( lVar2 + -8 ) <= lVar3) {
                     return;
                  }

                  lVar1 = lVar3 * 8;
                  lVar3 = lVar3 + 1;
                  ( **(code**)( **(long**)( lVar2 + lVar1 ) + 0x248 ) )();
                  lVar2 = *(long*)( this + 8 );
               }
 while ( lVar2 != 0 );
               return;
            }

            /* EditorData::save_editor_external_data() */
            void EditorData::save_editor_external_data(EditorData *this) {
               long lVar1;
               long lVar2;
               long lVar3;
               lVar2 = *(long*)( this + 8 );
               if (lVar2 == 0) {
                  return;
               }

               lVar3 = 0;
               do {
                  if (*(long*)( lVar2 + -8 ) <= lVar3) {
                     return;
                  }

                  lVar1 = lVar3 * 8;
                  lVar3 = lVar3 + 1;
                  ( **(code**)( **(long**)( lVar2 + lVar1 ) + 600 ) )();
                  lVar2 = *(long*)( this + 8 );
               }
 while ( lVar2 != 0 );
               return;
            }

            /* EditorData::apply_changes_in_editors() */
            void EditorData::apply_changes_in_editors(EditorData *this) {
               long lVar1;
               long lVar2;
               long lVar3;
               lVar2 = *(long*)( this + 8 );
               if (lVar2 == 0) {
                  return;
               }

               lVar3 = 0;
               do {
                  if (*(long*)( lVar2 + -8 ) <= lVar3) {
                     return;
                  }

                  lVar1 = lVar3 * 8;
                  lVar3 = lVar3 + 1;
                  ( **(code**)( **(long**)( lVar2 + lVar1 ) + 0x260 ) )();
                  lVar2 = *(long*)( this + 8 );
               }
 while ( lVar2 != 0 );
               return;
            }

            /* EditorData::call_build() */
            undefined8 EditorData::call_build(EditorData *this) {
               long lVar1;
               undefined8 uVar2;
               long lVar3;
               long lVar4;
               lVar3 = *(long*)( this + 8 );
               if (lVar3 == 0) {
                  return 1;
               }

               uVar2 = 1;
               lVar4 = 0;
               while (true) {
                  if (*(long*)( lVar3 + -8 ) <= lVar4) {
                     return uVar2;
                  }

                  if ((char)uVar2 == '\0') break;
                  lVar1 = lVar4 * 8;
                  lVar4 = lVar4 + 1;
                  uVar2 = ( **(code**)( **(long**)( lVar3 + lVar1 ) + 0x290 ) )();
                  lVar3 = *(long*)( this + 8 );
                  if (lVar3 == 0) {
                     return uVar2;
                  }

               }
;
               return uVar2;
            }

            /* EditorData::set_scene_as_saved(int) */
            void EditorData::set_scene_as_saved(EditorData *this, int param_1) {
               long lVar1;
               if (param_1 == -1) {
                  param_1 = *(int*)( this + 0xd0 );
               }

               lVar1 = *(long*)( this + 200 );
               if (param_1 < 0) {
                  if (lVar1 != 0) {
                     lVar1 = *(long*)( lVar1 + -8 );
                     goto LAB_00101769;
                  }

               }
 else if (lVar1 != 0) {
                  lVar1 = *(long*)( lVar1 + -8 );
                  if (param_1 < lVar1) {
                     EditorUndoRedoManager::set_history_as_saved((int)*(undefined8*)( this + 0x78 ));
                     return;
                  }

                  goto LAB_00101769;
               }

               lVar1 = 0;
               LAB_00101769:_err_print_index_error("set_scene_as_saved", "editor/editor_data.cpp", 0x1a6, (long)param_1, lVar1, "p_idx", "edited_scene.size()", "", false, false);
               return;
            }

            /* EditorData::get_scene_history_id_from_path(String const&) const */
            undefined4 EditorData::get_scene_history_id_from_path(EditorData *this, String *param_1) {
               char cVar1;
               long lVar2;
               long lVar3;
               lVar2 = *(long*)( this + 200 );
               if (lVar2 != 0) {
                  lVar3 = *(long*)( lVar2 + -8 ) * 0x60 + lVar2;
                  for (; lVar3 != lVar2; lVar2 = lVar2 + 0x60) {
                     cVar1 = String::operator ==((String*)( lVar2 + 8 ), param_1);
                     if (cVar1 != '\0') {
                        return *(undefined4*)( lVar2 + 0x50 );
                     }

                  }

               }

               return 0;
            }

            /* EditorData::get_current_edited_scene_history_id() const */
            undefined4 EditorData::get_current_edited_scene_history_id(EditorData *this) {
               long lVar1;
               code *pcVar2;
               long lVar3;
               long lVar4;
               lVar3 = (long)*(int*)( this + 0xd0 );
               if (*(int*)( this + 0xd0 ) == -1) {
                  return 0;
               }

               lVar1 = *(long*)( this + 200 );
               if (lVar3 < 0) {
                  if (lVar1 != 0) {
                     lVar4 = *(long*)( lVar1 + -8 );
                     goto LAB_00101861;
                  }

               }
 else if (lVar1 != 0) {
                  lVar4 = *(long*)( lVar1 + -8 );
                  if (lVar3 < lVar4) {
                     return *(undefined4*)( lVar1 + 0x50 + lVar3 * 0x60 );
                  }

                  goto LAB_00101861;
               }

               lVar4 = 0;
               LAB_00101861:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            /* EditorData::get_scene_history_id(int) const */
            undefined4 EditorData::get_scene_history_id(EditorData *this, int param_1) {
               long lVar1;
               code *pcVar2;
               long lVar3;
               long lVar4;
               lVar3 = (long)param_1;
               lVar1 = *(long*)( this + 200 );
               if (lVar3 < 0) {
                  if (lVar1 != 0) {
                     lVar4 = *(long*)( lVar1 + -8 );
                     goto LAB_001018e9;
                  }

               }
 else if (lVar1 != 0) {
                  lVar4 = *(long*)( lVar1 + -8 );
                  if (lVar3 < lVar4) {
                     return *(undefined4*)( lVar1 + 0x50 + lVar3 * 0x60 );
                  }

                  goto LAB_001018e9;
               }

               lVar4 = 0;
               LAB_001018e9:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar3, lVar4, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            /* EditorData::remove_move_array_element_function(StringName const&) */
            ulong EditorData::remove_move_array_element_function(EditorData *this, StringName *param_1) {
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
               if (*(long*)( this + 0x98 ) == 0) {
                  return in_RAX;
               }

               if (*(uint*)( this + 0xbc ) == 0) {
                  return ( ulong ) * (uint*)( this + 0xbc );
               }

               uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
               uVar38 = CONCAT44(0, uVar6);
               lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xb8 ) * 8 );
               if (*(long*)param_1 == 0) {
                  uVar32 = StringName::get_empty_hash();
               }
 else {
                  uVar32 = *(uint*)( *(long*)param_1 + 0x20 );
               }

               lVar8 = *(long*)( this + 0xa0 );
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
               while (( uVar32 != uVar34 || ( lVar9 = *(long*)( this + 0x98 ) * (long*)( *(long*)( lVar9 + lVar36 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
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

               }
;
               lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0xb8 ) * 8 );
               uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
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
                  }
;
               }

               uVar38 = (ulong)uVar33;
               plVar5 = (long*)( lVar9 + uVar38 * 8 );
               *(undefined4*)( lVar8 + uVar38 * 4 ) = 0;
               plVar37 = (long*)*plVar5;
               if (*(long**)( this + 0xa8 ) == plVar37) {
                  *(long*)( this + 0xa8 ) = *plVar37;
                  plVar37 = (long*)*plVar5;
               }

               if (*(long**)( this + 0xb0 ) == plVar37) {
                  *(long*)( this + 0xb0 ) = plVar37[1];
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

               Callable::~Callable((Callable*)( plVar37 + 3 ));
               if (( StringName::configured != '\0' ) && ( plVar37[2] != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(plVar37, false);
               uVar11 = *(ulong*)( this + 0x98 );
               *(undefined8*)( uVar11 + uVar38 * 8 ) = 0;
               *(int*)( this + 0xbc ) = *(int*)( this + 0xbc ) + -1;
               return uVar11;
            }

            /* EditorData::get_move_array_element_function(StringName const&) const */
            StringName *EditorData::get_move_array_element_function(StringName *param_1) {
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
               long *in_RDX;
               long lVar22;
               long in_RSI;
               uint uVar23;
               ulong uVar24;
               uint uVar25;
               uint uVar26;
               long lVar27;
               if (( *(long*)( in_RSI + 0x98 ) != 0 ) && ( *(int*)( in_RSI + 0xbc ) != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0xb8 ) * 4 );
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0xb8 ) * 8 );
                  if (*in_RDX == 0) {
                     uVar20 = StringName::get_empty_hash();
                  }
 else {
                     uVar20 = *(uint*)( *in_RDX + 0x20 );
                  }

                  uVar24 = CONCAT44(0, uVar1);
                  lVar27 = *(long*)( in_RSI + 0xa0 );
                  if (uVar20 == 0) {
                     uVar20 = 1;
                  }

                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = (ulong)uVar20 * lVar2;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar24;
                  lVar22 = SUB168(auVar3 * auVar11, 8);
                  uVar23 = *(uint*)( lVar27 + lVar22 * 4 );
                  iVar21 = SUB164(auVar3 * auVar11, 8);
                  if (uVar23 != 0) {
                     uVar25 = 0;
                     do {
                        if (( uVar20 == uVar23 ) && ( lVar22 = *(long*)( *(long*)( *(long*)( in_RSI + 0x98 ) + lVar22 * 8 ) + 0x10 ) ),lVar22 == *in_RDX) {
                           if (( *(long*)( in_RSI + 0x98 ) != 0 ) && ( *(int*)( in_RSI + 0xbc ) != 0 )) {
                              uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0xb8 ) * 4 );
                              uVar24 = CONCAT44(0, uVar1);
                              lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0xb8 ) * 8 );
                              if (lVar22 == 0) {
                                 uVar20 = StringName::get_empty_hash();
                                 lVar27 = *(long*)( in_RSI + 0xa0 );
                              }
 else {
                                 uVar20 = *(uint*)( lVar22 + 0x20 );
                              }

                              if (uVar20 == 0) {
                                 uVar20 = 1;
                              }

                              auVar7._8_8_ = 0;
                              auVar7._0_8_ = (ulong)uVar20 * lVar2;
                              auVar15._8_8_ = 0;
                              auVar15._0_8_ = uVar24;
                              lVar22 = SUB168(auVar7 * auVar15, 8);
                              uVar23 = *(uint*)( lVar27 + lVar22 * 4 );
                              uVar25 = SUB164(auVar7 * auVar15, 8);
                              if (uVar23 != 0) {
                                 uVar26 = 0;
                                 do {
                                    if (( uVar20 == uVar23 ) && ( *(long*)( *(long*)( *(long*)( in_RSI + 0x98 ) + lVar22 * 8 ) + 0x10 ) == *in_RDX )) {
                                       Callable::Callable((Callable*)param_1, (Callable*)( *(long*)( *(long*)( in_RSI + 0x98 ) + (ulong)uVar25 * 8 ) + 0x18 ));
                                       return param_1;
                                    }

                                    uVar26 = uVar26 + 1;
                                    auVar8._8_8_ = 0;
                                    auVar8._0_8_ = ( ulong )(uVar25 + 1) * lVar2;
                                    auVar16._8_8_ = 0;
                                    auVar16._0_8_ = uVar24;
                                    lVar22 = SUB168(auVar8 * auVar16, 8);
                                    uVar23 = *(uint*)( lVar27 + lVar22 * 4 );
                                    uVar25 = SUB164(auVar8 * auVar16, 8);
                                 }
 while ( ( uVar23 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar23 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar24,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar25 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar24,uVar26 <= SUB164(auVar10 * auVar18, 8) );
                              }

                           }

                           _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar19 = (code*)invalidInstructionException();
                           ( *pcVar19 )();
                        }

                        uVar25 = uVar25 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(iVar21 + 1) * lVar2;
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar24;
                        lVar22 = SUB168(auVar4 * auVar12, 8);
                        uVar23 = *(uint*)( lVar27 + lVar22 * 4 );
                        iVar21 = SUB164(auVar4 * auVar12, 8);
                     }
 while ( ( uVar23 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar23 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar24,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar21 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar24,uVar25 <= SUB164(auVar6 * auVar14, 8) );
                  }

               }

               *(undefined8*)param_1 = 0;
               *(undefined8*)( param_1 + 8 ) = 0;
               return param_1;
            }

            /* EditorData::get_editor_plugin_count() const */
            undefined4 EditorData::get_editor_plugin_count(EditorData *this) {
               if (*(long*)( this + 8 ) != 0) {
                  return *(undefined4*)( *(long*)( this + 8 ) + -8 );
               }

               return 0;
            }

            /* EditorData::get_editor_plugin(int) */
            undefined8 EditorData::get_editor_plugin(EditorData *this, int param_1) {
               long lVar1;
               long lVar2;
               long lVar3;
               lVar1 = *(long*)( this + 8 );
               lVar2 = (long)param_1;
               if (param_1 < 0) {
                  if (lVar1 != 0) {
                     lVar3 = *(long*)( lVar1 + -8 );
                     goto LAB_00101ee1;
                  }

               }
 else if (lVar1 != 0) {
                  lVar3 = *(long*)( lVar1 + -8 );
                  if (lVar2 < lVar3) {
                     return *(undefined8*)( lVar1 + lVar2 * 8 );
                  }

                  goto LAB_00101ee1;
               }

               lVar3 = 0;
               LAB_00101ee1:_err_print_index_error("get_editor_plugin", "editor/editor_data.cpp", 499, lVar2, lVar3, "p_idx", "editor_plugins.size()", "", false, false);
               return 0;
            }

            /* EditorData::remove_extension_editor_plugin(StringName const&) */
            ulong EditorData::remove_extension_editor_plugin(EditorData *this, StringName *param_1) {
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
               if (*(long*)( this + 0x18 ) == 0) {
                  return in_RAX;
               }

               if (*(uint*)( this + 0x3c ) == 0) {
                  return ( ulong ) * (uint*)( this + 0x3c );
               }

               uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
               uVar38 = CONCAT44(0, uVar6);
               lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x38 ) * 8 );
               if (*(long*)param_1 == 0) {
                  uVar32 = StringName::get_empty_hash();
               }
 else {
                  uVar32 = *(uint*)( *(long*)param_1 + 0x20 );
               }

               lVar8 = *(long*)( this + 0x20 );
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
               while (( uVar32 != uVar34 || ( lVar9 = *(long*)( this + 0x18 ) * (long*)( *(long*)( lVar9 + lVar36 * 8 ) + 0x10 ) != *(long*)param_1 ) )) {
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

               }
;
               lVar7 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x38 ) * 8 );
               uVar6 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
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
                  }
;
               }

               uVar38 = (ulong)uVar33;
               plVar5 = (long*)( lVar9 + uVar38 * 8 );
               *(undefined4*)( lVar8 + uVar38 * 4 ) = 0;
               plVar37 = (long*)*plVar5;
               if (*(long**)( this + 0x28 ) == plVar37) {
                  *(long*)( this + 0x28 ) = *plVar37;
                  plVar37 = (long*)*plVar5;
               }

               if (*(long**)( this + 0x30 ) == plVar37) {
                  *(long*)( this + 0x30 ) = plVar37[1];
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

               if (( StringName::configured != '\0' ) && ( plVar37[2] != 0 )) {
                  StringName::unref();
               }

               Memory::free_static(plVar37, false);
               uVar11 = *(ulong*)( this + 0x18 );
               *(undefined8*)( uVar11 + uVar38 * 8 ) = 0;
               *(int*)( this + 0x3c ) = *(int*)( this + 0x3c ) + -1;
               return uVar11;
            }

            /* EditorData::has_extension_editor_plugin(StringName const&) */
            undefined8 EditorData::has_extension_editor_plugin(EditorData *this, StringName *param_1) {
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
               if (*(long*)( this + 0x18 ) == 0) {
                  return 0;
               }

               if (*(int*)( this + 0x3c ) != 0) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x38 ) * 8 );
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
                  uVar14 = *(uint*)( *(long*)( this + 0x20 ) + lVar13 * 4 );
                  iVar12 = SUB164(auVar3 * auVar7, 8);
                  if (uVar14 != 0) {
                     uVar16 = 0;
                     do {
                        if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x18 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                           return 1;
                        }

                        uVar16 = uVar16 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = uVar15;
                        lVar13 = SUB168(auVar4 * auVar8, 8);
                        uVar14 = *(uint*)( *(long*)( this + 0x20 ) + lVar13 * 4 );
                        iVar12 = SUB164(auVar4 * auVar8, 8);
                     }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
                  }

               }

               return 0;
            }

            /* EditorData::get_extension_editor_plugin(StringName const&) */
            undefined8 EditorData::get_extension_editor_plugin(EditorData *this, StringName *param_1) {
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
               if (*(long*)( this + 0x18 ) == 0) {
                  return 0;
               }

               if (*(int*)( this + 0x3c ) != 0) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
                  uVar16 = CONCAT44(0, uVar1);
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x38 ) * 8 );
                  if (*(long*)param_1 == 0) {
                     uVar11 = StringName::get_empty_hash();
                  }
 else {
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
                  uVar14 = *(uint*)( *(long*)( this + 0x20 ) + lVar13 * 4 );
                  uVar12 = SUB164(auVar3 * auVar7, 8);
                  if (uVar14 != 0) {
                     uVar15 = 0;
                     do {
                        if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( this + 0x18 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                           return *(undefined8*)( *(long*)( *(long*)( this + 0x18 ) + (ulong)uVar12 * 8 ) + 0x18 );
                        }

                        uVar15 = uVar15 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(uVar12 + 1) * lVar2;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = uVar16;
                        lVar13 = SUB168(auVar4 * auVar8, 8);
                        uVar14 = *(uint*)( *(long*)( this + 0x20 ) + lVar13 * 4 );
                        uVar12 = SUB164(auVar4 * auVar8, 8);
                     }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar15 <= SUB164(auVar6 * auVar10, 8) );
                  }

               }

               return 0;
            }

            /* EditorData::get_custom_type_by_name(String const&) const */
            String * EditorData::get_custom_type_by_name(EditorData * this, String * param_1);
            {
               String *pSVar1;
               undefined8 *puVar2;
               char cVar3;
               String *this_00;
               puVar2 = *(undefined8**)( this + 0x58 );
               do {
                  if (puVar2 == (undefined8*)0x0) {
                     return (String*)0x0;
                  }

                  this_00 = (String*)puVar2[4];
                  if (this_00 != (String*)0x0) {
                     pSVar1 = this_00 + *(long*)( this_00 + -8 ) * 0x18;
                     for (; pSVar1 != this_00; this_00 = this_00 + 0x18) {
                        cVar3 = String::operator ==(this_00, param_1);
                        if (cVar3 != '\0') {
                           return this_00;
                        }

                     }

                  }

                  puVar2 = (undefined8*)*puVar2;
               }
 while ( true );
            }

            /* EditorData::get_custom_type_by_path(String const&) const */
            long EditorData::get_custom_type_by_path(EditorData *this, String *param_1) {
               long *plVar1;
               long lVar2;
               undefined8 *puVar3;
               long lVar4;
               char cVar5;
               long lVar6;
               long in_FS_OFFSET;
               long local_48;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               for (puVar3 = *(undefined8**)( this + 0x58 ); puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
                  lVar6 = puVar3[4];
                  if (lVar6 != 0) {
                     lVar2 = lVar6 + *(long*)( lVar6 + -8 ) * 0x18;
                     for (; lVar2 != lVar6; lVar6 = lVar6 + 0x18) {
                        Resource::get_path();
                        cVar5 = String::operator ==((String*)&local_48, param_1);
                        lVar4 = local_48;
                        if (local_48 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_48 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_48 = 0;
                              Memory::free_static((void*)( lVar4 + -0x10 ), false);
                           }

                        }

                        if (cVar5 != '\0') goto LAB_00102548;
                     }

                  }

               }

               lVar6 = 0;
               LAB_00102548:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return lVar6;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::is_type_recognized(String const&) const */
            char EditorData::is_type_recognized(EditorData *this, String *param_1) {
               char cVar1;
               long lVar2;
               long in_FS_OFFSET;
               long local_40;
               long local_38;
               long local_30;
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               StringName::StringName((StringName*)&local_40, param_1, false);
               cVar1 = ClassDB::class_exists((StringName*)&local_40);
               if (cVar1 == '\0') {
                  StringName::StringName((StringName*)&local_38, param_1, false);
                  cVar1 = ScriptServer::is_global_class((StringName*)&local_38);
                  if (cVar1 == '\0') {
                     lVar2 = get_custom_type_by_name(this, param_1);
                     cVar1 = lVar2 != 0;
                  }

                  if (StringName::configured == '\0') goto LAB_001025ee;
                  if (local_38 != 0) {
                     StringName::unref();
                     goto LAB_001025da;
                  }

               }
 else {
                  LAB_001025da:if (StringName::configured == '\0') goto LAB_001025ee;
               }

               if (local_40 != 0) {
                  StringName::unref();
               }

               LAB_001025ee:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return cVar1;
            }

            /* EditorData::get_edited_scene() const */
            undefined4 EditorData::get_edited_scene(EditorData *this) {
               return *(undefined4*)( this + 0xd0 );
            }

            /* EditorData::get_edited_scene_from_path(String const&) const */
            ulong EditorData::get_edited_scene_from_path(EditorData *this, String *param_1) {
               char cVar1;
               long lVar2;
               ulong uVar3;
               lVar2 = *(long*)( this + 200 );
               if (lVar2 == 0) {
                  return 0xffffffff;
               }

               uVar3 = 0;
               while (true) {
                  if (*(long*)( lVar2 + -8 ) <= (long)uVar3) {
                     return 0xffffffff;
                  }

                  cVar1 = String::operator ==((String*)( lVar2 + 8 + uVar3 * 0x60 ), param_1);
                  if (cVar1 != '\0') break;
                  lVar2 = *(long*)( this + 200 );
                  uVar3 = uVar3 + 1;
                  if (lVar2 == 0) {
                     return 0xffffffff;
                  }

               }
;
               return uVar3 & 0xffffffff;
            }

            /* EditorData::set_edited_scene(int) */
            void EditorData::set_edited_scene(EditorData *this, int param_1) {
               long lVar1;
               lVar1 = *(long*)( this + 200 );
               if (param_1 < 0) {
                  if (lVar1 != 0) {
                     lVar1 = *(long*)( lVar1 + -8 );
                     goto LAB_00102729;
                  }

               }
 else if (lVar1 != 0) {
                  lVar1 = *(long*)( lVar1 + -8 );
                  if (param_1 < lVar1) {
                     *(int*)( this + 0xd0 ) = param_1;
                     return;
                  }

                  goto LAB_00102729;
               }

               lVar1 = 0;
               LAB_00102729:_err_print_index_error("set_edited_scene", "editor/editor_data.cpp", 0x2fb, (long)param_1, lVar1, "p_idx", "edited_scene.size()", "", false, false);
               return;
            }

            /* EditorData::get_edited_scene_root(int) */
            undefined8 EditorData::get_edited_scene_root(EditorData *this, int param_1) {
               long lVar1;
               long lVar2;
               long lVar3;
               lVar1 = *(long*)( this + 200 );
               if (-1 < param_1) {
                  lVar2 = (long)param_1;
                  if (lVar1 == 0) {
                     lVar3 = 0;
                  }
 else {
                     lVar3 = *(long*)( lVar1 + -8 );
                     if (lVar2 < lVar3) {
                        LAB_0010279c:return *(undefined8*)( lVar1 + lVar2 * 0x60 );
                     }

                  }

                  _err_print_index_error("get_edited_scene_root", "editor/editor_data.cpp", 0x304, lVar2, lVar3, "p_idx", "edited_scene.size()", "", false, false);
                  return 0;
               }

               lVar2 = (long)*(int*)( this + 0xd0 );
               if (*(int*)( this + 0xd0 ) < 0) {
                  if (lVar1 != 0) {
                     lVar3 = *(long*)( lVar1 + -8 );
                     goto LAB_001027d0;
                  }

               }
 else if (lVar1 != 0) {
                  lVar3 = *(long*)( lVar1 + -8 );
                  if (lVar2 < lVar3) goto LAB_0010279c;
                  goto LAB_001027d0;
               }

               lVar3 = 0;
               LAB_001027d0:_err_print_index_error("get_edited_scene_root", "editor/editor_data.cpp", 0x301, lVar2, lVar3, "current_edited_scene", "edited_scene.size()", "", false, false);
               return 0;
            }

            /* EditorData::notify_edited_scene_changed() */
            void EditorData::notify_edited_scene_changed(EditorData *this) {
               Node *pNVar1;
               code *pcVar2;
               long lVar3;
               long lVar4;
               long lVar5;
               lVar3 = *(long*)( this + 8 );
               if (lVar3 == 0) {
                  return;
               }

               lVar4 = 0;
               while (true) {
                  if (*(long*)( lVar3 + -8 ) <= lVar4) {
                     return;
                  }

                  pcVar2 = *(code**)( **(long**)( lVar3 + lVar4 * 8 ) + 0x288 );
                  if (pcVar2 != EditorPlugin::edited_scene_changed) {
                     ( *pcVar2 )();
                     lVar3 = *(long*)( this + 8 );
                  }

                  if (lVar3 == 0) break;
                  lVar5 = *(long*)( lVar3 + -8 );
                  if (lVar5 <= lVar4) goto LAB_00102906;
                  pNVar1 = *(Node**)( lVar3 + lVar4 * 8 );
                  lVar4 = lVar4 + 1;
                  get_edited_scene_root(this, -1);
                  EditorPlugin::notify_scene_changed(pNVar1);
                  lVar3 = *(long*)( this + 8 );
                  if (lVar3 == 0) {
                     return;
                  }

               }
;
               lVar5 = 0;
               LAB_00102906:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar5, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar2 = (code*)invalidInstructionException();
               ( *pcVar2 )();
            }

            /* EditorData::get_edited_scene_count() const */
            undefined4 EditorData::get_edited_scene_count(EditorData *this) {
               if (*(long*)( this + 200 ) != 0) {
                  return *(undefined4*)( *(long*)( this + 200 ) + -8 );
               }

               return 0;
            }

            /* EditorData::get_scene_modified_time(int) const */
            undefined8 EditorData::get_scene_modified_time(EditorData *this, int param_1) {
               long lVar1;
               long lVar2;
               long lVar3;
               lVar1 = *(long*)( this + 200 );
               lVar2 = (long)param_1;
               if (param_1 < 0) {
                  if (lVar1 != 0) {
                     lVar3 = *(long*)( lVar1 + -8 );
                     goto LAB_001029c9;
                  }

               }
 else if (lVar1 != 0) {
                  lVar3 = *(long*)( lVar1 + -8 );
                  if (lVar2 < lVar3) {
                     return *(undefined8*)( lVar1 + 0x10 + lVar2 * 0x60 );
                  }

                  goto LAB_001029c9;
               }

               lVar3 = 0;
               LAB_001029c9:_err_print_index_error("get_scene_modified_time", "editor/editor_data.cpp", 0x331, lVar2, lVar3, "p_idx", "edited_scene.size()", "", false, false);
               return 0;
            }

            /* EditorData::get_scene_type(int) const */
            StrRange *EditorData::get_scene_type(int param_1) {
               long lVar1;
               long lVar2;
               long *plVar3;
               long lVar4;
               int in_EDX;
               long in_RSI;
               undefined4 in_register_0000003c;
               StrRange *pSVar5;
               long lVar6;
               long in_FS_OFFSET;
               pSVar5 = (StrRange*)CONCAT44(in_register_0000003c, param_1);
               lVar4 = (long)in_EDX;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               lVar2 = *(long*)( in_RSI + 200 );
               if (in_EDX < 0) {
                  if (lVar2 == 0) goto LAB_00102b10;
                  lVar6 = *(long*)( lVar2 + -8 );
               }
 else if (lVar2 == 0) {
                  LAB_00102b10:lVar6 = 0;
               }
 else {
                  lVar6 = *(long*)( lVar2 + -8 );
                  if (lVar4 < lVar6) {
                     plVar3 = *(long**)( lVar2 + lVar4 * 0x60 );
                     if (plVar3 == (long*)0x0) {
                        *(undefined8*)pSVar5 = 0;
                        String::parse_latin1(pSVar5);
                     }
 else {
                        ( **(code**)( *plVar3 + 0x48 ) )();
                     }

                     goto LAB_00102a73;
                  }

               }

               _err_print_index_error("get_scene_type", "editor/editor_data.cpp", 0x336, lVar4, lVar6, "p_idx", "edited_scene.size()", "", false, false);
               *(undefined8*)pSVar5 = 0;
               LAB_00102a73:if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return pSVar5;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::set_plugin_window_layout(Ref<ConfigFile>) */
            void EditorData::set_plugin_window_layout(EditorData *this, long *param_2) {
               long lVar1;
               long *plVar2;
               Object *pOVar3;
               code *pcVar4;
               char cVar5;
               long lVar6;
               long lVar7;
               long in_FS_OFFSET;
               Object *local_48;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               lVar6 = *(long*)( this + 8 );
               if (lVar6 != 0) {
                  lVar7 = 0;
                  LAB_00102b71:do {
                     if (*(long*)( lVar6 + -8 ) <= lVar7) break;
                     plVar2 = *(long**)( lVar6 + lVar7 * 8 );
                     pOVar3 = (Object*)*param_2;
                     local_48 = (Object*)0x0;
                     pcVar4 = *(code**)( *plVar2 + 0x278 );
                     if (pOVar3 != (Object*)0x0) {
                        cVar5 = RefCounted::reference();
                        local_48 = pOVar3;
                        if (cVar5 == '\0') {
                           local_48 = (Object*)0x0;
                        }

                     }

                     ( *pcVar4 )(plVar2);
                     if (local_48 != (Object*)0x0) {
                        cVar5 = RefCounted::unreference();
                        if (cVar5 != '\0') {
                           cVar5 = predelete_handler(local_48);
                           if (cVar5 != '\0') {
                              lVar7 = lVar7 + 1;
                              ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                              Memory::free_static(local_48, false);
                              lVar6 = *(long*)( this + 8 );
                              if (lVar6 == 0) break;
                              goto LAB_00102b71;
                           }

                        }

                     }

                     lVar6 = *(long*)( this + 8 );
                     lVar7 = lVar7 + 1;
                  }
 while ( lVar6 != 0 );
               }

               if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::get_plugin_window_layout(Ref<ConfigFile>) */
            void EditorData::get_plugin_window_layout(EditorData *this, long *param_2) {
               long lVar1;
               long *plVar2;
               Object *pOVar3;
               code *pcVar4;
               char cVar5;
               long lVar6;
               long lVar7;
               long in_FS_OFFSET;
               Object *local_48;
               lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
               lVar6 = *(long*)( this + 8 );
               if (lVar6 != 0) {
                  lVar7 = 0;
                  LAB_00102c81:do {
                     if (*(long*)( lVar6 + -8 ) <= lVar7) break;
                     plVar2 = *(long**)( lVar6 + lVar7 * 8 );
                     pOVar3 = (Object*)*param_2;
                     local_48 = (Object*)0x0;
                     pcVar4 = *(code**)( *plVar2 + 0x280 );
                     if (pOVar3 != (Object*)0x0) {
                        cVar5 = RefCounted::reference();
                        local_48 = pOVar3;
                        if (cVar5 == '\0') {
                           local_48 = (Object*)0x0;
                        }

                     }

                     ( *pcVar4 )(plVar2);
                     if (local_48 != (Object*)0x0) {
                        cVar5 = RefCounted::unreference();
                        if (cVar5 != '\0') {
                           cVar5 = predelete_handler(local_48);
                           if (cVar5 != '\0') {
                              lVar7 = lVar7 + 1;
                              ( **(code**)( *(long*)local_48 + 0x140 ) )(local_48);
                              Memory::free_static(local_48, false);
                              lVar6 = *(long*)( this + 8 );
                              if (lVar6 == 0) break;
                              goto LAB_00102c81;
                           }

                        }

                     }

                     lVar6 = *(long*)( this + 8 );
                     lVar7 = lVar7 + 1;
                  }
 while ( lVar6 != 0 );
               }

               if (lVar1 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::script_class_get_name(String const&) const */
            String *EditorData::script_class_get_name(String *param_1) {
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
               char cVar20;
               uint uVar21;
               uint uVar22;
               int iVar23;
               String *in_RDX;
               long lVar24;
               long in_RSI;
               long lVar25;
               ulong uVar26;
               uint uVar27;
               uint uVar28;
               if (( *(long*)( in_RSI + 0x110 ) != 0 ) && ( *(int*)( in_RSI + 0x134 ) != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x130 ) * 4 );
                  uVar26 = CONCAT44(0, uVar1);
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x130 ) * 8 );
                  uVar21 = String::hash();
                  lVar25 = *(long*)( in_RSI + 0x118 );
                  uVar22 = 1;
                  if (uVar21 != 0) {
                     uVar22 = uVar21;
                  }

                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = (ulong)uVar22 * lVar2;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar26;
                  lVar24 = SUB168(auVar3 * auVar11, 8);
                  uVar21 = *(uint*)( lVar25 + lVar24 * 4 );
                  iVar23 = SUB164(auVar3 * auVar11, 8);
                  if (uVar21 != 0) {
                     uVar27 = 0;
                     do {
                        if (uVar22 == uVar21) {
                           cVar20 = String::operator ==((String*)( *(long*)( *(long*)( in_RSI + 0x110 ) + lVar24 * 8 ) + 0x10 ), in_RDX);
                           if (cVar20 != '\0') {
                              if (( *(long*)( in_RSI + 0x110 ) != 0 ) && ( *(int*)( in_RSI + 0x134 ) != 0 )) {
                                 uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x130 ) * 4 );
                                 lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x130 ) * 8 );
                                 uVar21 = String::hash();
                                 uVar26 = CONCAT44(0, uVar1);
                                 lVar25 = *(long*)( in_RSI + 0x118 );
                                 uVar22 = 1;
                                 if (uVar21 != 0) {
                                    uVar22 = uVar21;
                                 }

                                 auVar7._8_8_ = 0;
                                 auVar7._0_8_ = (ulong)uVar22 * lVar2;
                                 auVar15._8_8_ = 0;
                                 auVar15._0_8_ = uVar26;
                                 lVar24 = SUB168(auVar7 * auVar15, 8);
                                 uVar21 = *(uint*)( lVar25 + lVar24 * 4 );
                                 uVar27 = SUB164(auVar7 * auVar15, 8);
                                 if (uVar21 != 0) {
                                    uVar28 = 0;
                                    do {
                                       if (uVar22 == uVar21) {
                                          cVar20 = String::operator ==((String*)( *(long*)( *(long*)( in_RSI + 0x110 ) + lVar24 * 8 ) + 0x10 ), in_RDX);
                                          if (cVar20 != '\0') {
                                             StringName::StringName((StringName*)param_1, (StringName*)( *(long*)( *(long*)( in_RSI + 0x110 ) + (ulong)uVar27 * 8 ) + 0x18 ));
                                             return param_1;
                                          }

                                          lVar25 = *(long*)( in_RSI + 0x118 );
                                       }

                                       uVar28 = uVar28 + 1;
                                       auVar8._8_8_ = 0;
                                       auVar8._0_8_ = ( ulong )(uVar27 + 1) * lVar2;
                                       auVar16._8_8_ = 0;
                                       auVar16._0_8_ = uVar26;
                                       lVar24 = SUB168(auVar8 * auVar16, 8);
                                       uVar21 = *(uint*)( lVar25 + lVar24 * 4 );
                                       uVar27 = SUB164(auVar8 * auVar16, 8);
                                    }
 while ( ( uVar21 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar21 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar26,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar27 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar26,uVar28 <= SUB164(auVar10 * auVar18, 8) );
                                 }

                              }

                              _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar19 = (code*)invalidInstructionException();
                              ( *pcVar19 )();
                           }

                           lVar25 = *(long*)( in_RSI + 0x118 );
                        }

                        uVar27 = uVar27 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(iVar23 + 1) * lVar2;
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar26;
                        lVar24 = SUB168(auVar4 * auVar12, 8);
                        uVar21 = *(uint*)( lVar25 + lVar24 * 4 );
                        iVar23 = SUB164(auVar4 * auVar12, 8);
                     }
 while ( ( uVar21 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar21 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar26,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar23 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar26,uVar27 <= SUB164(auVar6 * auVar14, 8) );
                  }

               }

               *(undefined8*)param_1 = 0;
               return param_1;
            }

            /* EditorData::clear_script_icon_cache() */
            void EditorData::clear_script_icon_cache(EditorData *this) {
               long *plVar1;
               uint uVar2;
               void *pvVar3;
               long lVar4;
               Object *pOVar5;
               char cVar6;
               long lVar7;
               if (*(long*)( this + 0x140 ) != 0) {
                  if (*(int*)( this + 0x164 ) != 0) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x160 ) * 4 );
                     if (uVar2 != 0) {
                        lVar7 = 0;
                        do {
                           if (*(int*)( *(long*)( this + 0x148 ) + lVar7 ) != 0) {
                              *(int*)( *(long*)( this + 0x148 ) + lVar7 ) = 0;
                              pvVar3 = *(void**)( *(long*)( this + 0x140 ) + lVar7 * 2 );
                              if (*(long*)( (long)pvVar3 + 0x18 ) != 0) {
                                 cVar6 = RefCounted::unreference();
                                 if (cVar6 != '\0') {
                                    pOVar5 = *(Object**)( (long)pvVar3 + 0x18 );
                                    cVar6 = predelete_handler(pOVar5);
                                    if (cVar6 != '\0') {
                                       ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                                       Memory::free_static(pOVar5, false);
                                    }

                                 }

                              }

                              if (*(long*)( (long)pvVar3 + 0x10 ) != 0) {
                                 LOCK();
                                 plVar1 = (long*)( *(long*)( (long)pvVar3 + 0x10 ) + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    lVar4 = *(long*)( (long)pvVar3 + 0x10 );
                                    *(undefined8*)( (long)pvVar3 + 0x10 ) = 0;
                                    Memory::free_static((void*)( lVar4 + -0x10 ), false);
                                 }

                              }

                              Memory::free_static(pvVar3, false);
                              *(undefined8*)( *(long*)( this + 0x140 ) + lVar7 * 2 ) = 0;
                           }

                           lVar7 = lVar7 + 4;
                        }
 while ( lVar7 != (ulong)uVar2 << 2 );
                     }

                     *(undefined4*)( this + 0x164 ) = 0;
                     *(undefined1(*) [16])( this + 0x150 ) = (undefined1[16])0x0;
                  }

                  return;
               }

               return;
            }

            /* EditorSelection::is_selected(Node*) const */
            undefined8 EditorSelection::is_selected(EditorSelection *this, Node *param_1) {
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
               int iVar11;
               long lVar12;
               ulong uVar13;
               uint uVar14;
               ulong uVar15;
               uint uVar16;
               if (*(long*)( this + 0x180 ) == 0) {
                  return 0;
               }

               if (*(int*)( this + 0x1a4 ) != 0) {
                  uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ));
                  lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
                  uVar10 = (long)param_1 * 0x3ffff - 1;
                  uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
                  uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
                  uVar10 = uVar10 >> 0x16 ^ uVar10;
                  uVar13 = uVar10 & 0xffffffff;
                  if ((int)uVar10 == 0) {
                     uVar13 = 1;
                  }

                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar13 * lVar1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar15;
                  lVar12 = SUB168(auVar2 * auVar6, 8);
                  uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar12 * 4 );
                  iVar11 = SUB164(auVar2 * auVar6, 8);
                  if (uVar14 != 0) {
                     uVar16 = 0;
                     do {
                        if (( (uint)uVar13 == uVar14 ) && ( *(Node**)( *(long*)( *(long*)( this + 0x180 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
                           return 1;
                        }

                        uVar16 = uVar16 + 1;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = ( ulong )(iVar11 + 1) * lVar1;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = uVar15;
                        lVar12 = SUB168(auVar3 * auVar7, 8);
                        uVar14 = *(uint*)( *(long*)( this + 0x188 ) + lVar12 * 4 );
                        iVar11 = SUB164(auVar3 * auVar7, 8);
                        if (uVar14 == 0) {
                           return 0;
                        }

                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = (ulong)uVar14 * lVar1;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = uVar15;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) + iVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar15;
                     }
 while ( uVar16 <= SUB164(auVar5 * auVar9, 8) );
                     return 0;
                  }

               }

               return 0;
            }

            /* EditorSelection::add_editor_plugin(Object*) */
            void EditorSelection::add_editor_plugin(EditorSelection *this, Object *param_1) {
               long *plVar1;
               long lVar2;
               undefined8 *puVar3;
               undefined1(*pauVar4)[16];
               if (*(long*)( this + 0x1b0 ) == 0) {
                  pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined1(**) [16])( this + 0x1b0 ) = pauVar4;
                  *(undefined4*)pauVar4[1] = 0;
                  *pauVar4 = (undefined1[16])0x0;
               }

               puVar3 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
               plVar1 = *(long**)( this + 0x1b0 );
               puVar3[1] = 0;
               lVar2 = plVar1[1];
               *puVar3 = param_1;
               puVar3[3] = plVar1;
               puVar3[2] = lVar2;
               if (lVar2 != 0) {
                  *(undefined8**)( lVar2 + 8 ) = puVar3;
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

            /* EditorSelection::_update_node_list() */
            void EditorSelection::_update_node_list(EditorSelection *this) {
               if (this[0x1aa] == (EditorSelection)0x0) {
                  return;
               }

               _update_node_list(this);
               return;
            }

            /* EditorSelection::update() */
            void EditorSelection::update(EditorSelection *this) {
               undefined8 uVar1;
               CallableCustom *this_00;
               long in_FS_OFFSET;
               Callable aCStack_48[16];
               int local_38[6];
               long local_20;
               local_20 = *(long*)( in_FS_OFFSET + 0x28 );
               if (this[0x1aa] != (EditorSelection)0x0) {
                  _update_node_list(this);
               }

               if (( this[0x1a9] != (EditorSelection)0x0 ) && ( this[0x1a9] = (EditorSelection)0x0 ),this[0x1a8] == (EditorSelection)0x0) {
                  this[0x1a8] = (EditorSelection)0x1;
                  this_00 = (CallableCustom*)operator_new(0x48, "");
                  CallableCustom::CallableCustom(this_00);
                  *(EditorSelection**)( this_00 + 0x28 ) = this;
                  *(undefined1(*) [16])( this_00 + 0x30 ) = (undefined1[16])0x0;
                  *(undefined***)this_00 = &PTR_hash_00119f40;
                  *(undefined8*)( this_00 + 0x40 ) = 0;
                  uVar1 = *(undefined8*)( this + 0x60 );
                  *(undefined8*)( this_00 + 0x10 ) = 0;
                  *(undefined8*)( this_00 + 0x30 ) = uVar1;
                  *(code**)( this_00 + 0x38 ) = _emit_change;
                  *(undefined**)( this_00 + 0x20 ) = &_LC16;
                  CallableCustomMethodPointerBase::_setup((uint*)this_00, (int)this_00 + 0x28);
                  *(char**)( this_00 + 0x20 ) = "EditorSelection::_emit_change";
                  Callable::Callable(aCStack_48, this_00);
                  Variant::Variant((Variant*)local_38, 0);
                  Callable::call_deferredp((Variant**)aCStack_48, 0);
                  if (Variant::needs_deinit[local_38[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  Callable::~Callable(aCStack_48);
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorSelection::get_selected_node_list() */
            EditorSelection * EditorSelection::get_selected_node_list(EditorSelection * this);
            {
               if (this[0x1a9] != (EditorSelection)0x0) {
                  update(this);
                  return this + 0x1b8;
               }

               if (this[0x1aa] == (EditorSelection)0x0) {
                  return this + 0x1b8;
               }

               _update_node_list(this);
               return this + 0x1b8;
            }

            /* EditorSelection::get_full_selected_node_list() */
            void EditorSelection::get_full_selected_node_list(void) {
               long lVar1;
               long *plVar2;
               undefined1(*pauVar3)[16];
               long *plVar4;
               long *plVar5;
               long in_RSI;
               undefined8 *in_RDI;
               plVar5 = *(long**)( in_RSI + 400 );
               *in_RDI = 0;
               if (plVar5 != (long*)0x0) {
                  pauVar3 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *in_RDI = pauVar3;
                  *(undefined4*)pauVar3[1] = 0;
                  *pauVar3 = (undefined1[16])0x0;
                  do {
                     while (true) {
                        plVar4 = (long*)operator_new(0x20, DefaultAllocator::alloc);
                        lVar1 = plVar5[2];
                        plVar4[1] = 0;
                        *plVar4 = lVar1;
                        plVar2 = (long*)*in_RDI;
                        lVar1 = plVar2[1];
                        plVar4[3] = (long)plVar2;
                        plVar4[2] = lVar1;
                        if (lVar1 != 0) {
                           *(long**)( lVar1 + 8 ) = plVar4;
                        }

                        plVar2[1] = (long)plVar4;
                        if (*plVar2 != 0) break;
                        plVar5 = (long*)*plVar5;
                        *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
                        *plVar2 = (long)plVar4;
                        if (plVar5 == (long*)0x0) {
                           return;
                        }

                     }
;
                     plVar5 = (long*)*plVar5;
                     *(int*)( plVar2 + 2 ) = (int)plVar2[2] + 1;
                  }
 while ( plVar5 != (long*)0x0 );
               }

               return;
            }

            /* EditorSelection::EditorSelection() */
            void EditorSelection::EditorSelection(EditorSelection *this) {
               Object::Object((Object*)this);
               *(undefined8*)( this + 0x1a0 ) = 2;
               *(undefined***)this = &PTR__initialize_classv_00119d50;
               *(undefined2*)( this + 0x1a8 ) = 0;
               this[0x1aa] = (EditorSelection)0x0;
               *(undefined1(*) [16])( this + 0x180 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x1b0 ) = (undefined1[16])0x0;
               return;
            }

            /* EditorData::script_class_save_global_classes() */
            void EditorData::script_class_save_global_classes(EditorData *this) {
               long *plVar1;
               char cVar2;
               uint uVar3;
               long lVar4;
               char *pcVar5;
               undefined1 auVar6[16];
               undefined1 auVar7[16];
               undefined1 auVar8[16];
               undefined1 auVar9[16];
               undefined1 auVar10[16];
               undefined1 auVar11[16];
               undefined1 auVar12[16];
               undefined1 auVar13[16];
               bool bVar14;
               uint uVar15;
               Variant *pVVar16;
               Array *pAVar17;
               uint uVar18;
               long lVar19;
               uint uVar20;
               ulong uVar21;
               uint uVar22;
               CowData *pCVar23;
               StringName *pSVar24;
               long in_FS_OFFSET;
               long *local_a8;
               Array local_a0[8];
               Dictionary local_98[8];
               long local_90;
               char *local_88;
               size_t local_80;
               int local_78[8];
               int local_58[2];
               undefined8 local_50;
               undefined8 uStack_48;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_a8 = (long*)0x0;
               ScriptServer::get_global_class_list((List*)&local_a8);
               Array::Array(local_a0);
               if (( local_a8 != (long*)0x0 ) && ( pSVar24 = (StringName*)*local_a8 ),pSVar24 != (StringName*)0x0) {
                  do {
                     Dictionary::Dictionary(local_98);
                     if (( *(long*)( this + 0xe0 ) != 0 ) && ( *(int*)( this + 0x104 ) != 0 )) {
                        uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x100 ) * 4 );
                        lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x100 ) * 8 );
                        if (*(long*)pSVar24 == 0) {
                           uVar15 = StringName::get_empty_hash();
                        }
 else {
                           uVar15 = *(uint*)( *(long*)pSVar24 + 0x20 );
                        }

                        uVar21 = CONCAT44(0, uVar3);
                        if (uVar15 == 0) {
                           uVar15 = 1;
                        }

                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = (ulong)uVar15 * lVar4;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = uVar21;
                        lVar19 = SUB168(auVar6 * auVar10, 8);
                        uVar18 = SUB164(auVar6 * auVar10, 8);
                        uVar20 = *(uint*)( *(long*)( this + 0xe8 ) + lVar19 * 4 );
                        if (uVar20 != 0) {
                           uVar22 = 0;
                           do {
                              if (( uVar20 == uVar15 ) && ( *(long*)( *(long*)( *(long*)( this + 0xe0 ) + lVar19 * 8 ) + 0x10 ) == *(long*)pSVar24 )) {
                                 pCVar23 = (CowData*)( *(long*)( *(long*)( this + 0xe0 ) + (ulong)uVar18 * 8 ) + 0x18 );
                                 goto LAB_0010379d;
                              }

                              uVar22 = uVar22 + 1;
                              auVar7._8_8_ = 0;
                              auVar7._0_8_ = ( ulong )(uVar18 + 1) * lVar4;
                              auVar11._8_8_ = 0;
                              auVar11._0_8_ = uVar21;
                              lVar19 = SUB168(auVar7 * auVar11, 8);
                              uVar20 = *(uint*)( *(long*)( this + 0xe8 ) + lVar19 * 4 );
                              uVar18 = SUB164(auVar7 * auVar11, 8);
                           }
 while ( ( uVar20 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar20 * lVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar21,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar3 + uVar18 ) - SUB164(auVar8 * auVar12, 8)) * lVar4,auVar13._8_8_ = 0,auVar13._0_8_ = uVar21,uVar22 <= SUB164(auVar9 * auVar13, 8) );
                        }

                     }

                     pCVar23 = (CowData*)0x0;
                     LAB_0010379d:Variant::Variant((Variant*)local_58, pSVar24);
                     Variant::Variant((Variant*)local_78, "class");
                     pVVar16 = (Variant*)Dictionary::operator []((Variant*)local_98);
                     if (pVVar16 != (Variant*)local_58) {
                        if (Variant::needs_deinit[*(int*)pVVar16] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pVVar16 = 0;
                        *(int*)pVVar16 = local_58[0];
                        *(undefined8*)( pVVar16 + 8 ) = local_50;
                        *(undefined8*)( pVVar16 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
                     }

                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     ScriptServer::get_global_class_language((StringName*)&local_88);
                     Variant::Variant((Variant*)local_58, (StringName*)&local_88);
                     Variant::Variant((Variant*)local_78, "language");
                     pVVar16 = (Variant*)Dictionary::operator []((Variant*)local_98);
                     if (pVVar16 != (Variant*)local_58) {
                        if (Variant::needs_deinit[*(int*)pVVar16] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pVVar16 = 0;
                        *(int*)pVVar16 = local_58[0];
                        *(undefined8*)( pVVar16 + 8 ) = local_50;
                        *(undefined8*)( pVVar16 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
                     }

                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                        StringName::unref();
                     }

                     lVar4 = *(long*)pSVar24;
                     if (lVar4 == 0) {
                        local_90 = 0;
                     }
 else {
                        pcVar5 = *(char**)( lVar4 + 8 );
                        local_90 = 0;
                        if (pcVar5 == (char*)0x0) {
                           if (*(long*)( lVar4 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( lVar4 + 0x10 ));
                           }

                        }
 else {
                           local_80 = strlen(pcVar5);
                           local_88 = pcVar5;
                           String::parse_latin1((StrRange*)&local_90);
                        }

                     }

                     ScriptServer::get_global_class_path((String*)&local_88);
                     Variant::Variant((Variant*)local_58, (String*)&local_88);
                     Variant::Variant((Variant*)local_78, "path");
                     pVVar16 = (Variant*)Dictionary::operator []((Variant*)local_98);
                     if (pVVar16 != (Variant*)local_58) {
                        if (Variant::needs_deinit[*(int*)pVVar16] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pVVar16 = 0;
                        *(int*)pVVar16 = local_58[0];
                        *(undefined8*)( pVVar16 + 8 ) = local_50;
                        *(undefined8*)( pVVar16 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
                     }

                     if (Variant::needs_deinit[local_78[0]] == '\0') {
                        cVar2 = Variant::needs_deinit[local_58[0]];
                     }
 else {
                        Variant::_clear_internal();
                        cVar2 = Variant::needs_deinit[local_58[0]];
                     }

                     if (cVar2 != '\0') {
                        Variant::_clear_internal();
                     }

                     pcVar5 = local_88;
                     if (local_88 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_88 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_88 = (char*)0x0;
                           Memory::free_static(pcVar5 + -0x10, false);
                        }

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

                     lVar4 = *(long*)pSVar24;
                     if (lVar4 == 0) {
                        local_90 = 0;
                     }
 else {
                        pcVar5 = *(char**)( lVar4 + 8 );
                        local_90 = 0;
                        if (pcVar5 == (char*)0x0) {
                           if (*(long*)( lVar4 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( lVar4 + 0x10 ));
                           }

                        }
 else {
                           local_80 = strlen(pcVar5);
                           local_88 = pcVar5;
                           String::parse_latin1((StrRange*)&local_90);
                        }

                     }

                     ScriptServer::get_global_class_base((String*)&local_88);
                     Variant::Variant((Variant*)local_58, (StringName*)&local_88);
                     Variant::Variant((Variant*)local_78, "base");
                     pVVar16 = (Variant*)Dictionary::operator []((Variant*)local_98);
                     if (pVVar16 != (Variant*)local_58) {
                        if (Variant::needs_deinit[*(int*)pVVar16] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pVVar16 = 0;
                        *(int*)pVVar16 = local_58[0];
                        *(undefined8*)( pVVar16 + 8 ) = local_50;
                        *(undefined8*)( pVVar16 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
                     }

                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
                        StringName::unref();
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

                     local_88 = (char*)0x0;
                     if (( pCVar23 != (CowData*)0x0 ) && ( *(long*)pCVar23 != 0 )) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_88, pCVar23);
                     }

                     Variant::Variant((Variant*)local_58, (String*)&local_88);
                     Variant::Variant((Variant*)local_78, "icon");
                     pVVar16 = (Variant*)Dictionary::operator []((Variant*)local_98);
                     if (pVVar16 != (Variant*)local_58) {
                        if (Variant::needs_deinit[*(int*)pVVar16] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pVVar16 = 0;
                        *(int*)pVVar16 = local_58[0];
                        *(undefined8*)( pVVar16 + 8 ) = local_50;
                        *(undefined8*)( pVVar16 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
                     }

                     if (Variant::needs_deinit[local_78[0]] == '\0') {
                        cVar2 = Variant::needs_deinit[local_58[0]];
                     }
 else {
                        Variant::_clear_internal();
                        cVar2 = Variant::needs_deinit[local_58[0]];
                     }

                     if (cVar2 != '\0') {
                        Variant::_clear_internal();
                     }

                     pcVar5 = local_88;
                     if (local_88 != (char*)0x0) {
                        LOCK();
                        plVar1 = (long*)( local_88 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_88 = (char*)0x0;
                           Memory::free_static(pcVar5 + -0x10, false);
                        }

                     }

                     lVar4 = *(long*)pSVar24;
                     if (lVar4 == 0) {
                        local_90 = 0;
                     }
 else {
                        pcVar5 = *(char**)( lVar4 + 8 );
                        local_90 = 0;
                        if (pcVar5 == (char*)0x0) {
                           if (*(long*)( lVar4 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( lVar4 + 0x10 ));
                           }

                        }
 else {
                           local_80 = strlen(pcVar5);
                           local_88 = pcVar5;
                           String::parse_latin1((StrRange*)&local_90);
                        }

                     }

                     bVar14 = (bool)ScriptServer::is_global_class_abstract((String*)&local_90);
                     Variant::Variant((Variant*)local_58, bVar14);
                     Variant::Variant((Variant*)local_78, "is_abstract");
                     pVVar16 = (Variant*)Dictionary::operator []((Variant*)local_98);
                     if (pVVar16 != (Variant*)local_58) {
                        if (Variant::needs_deinit[*(int*)pVVar16] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pVVar16 = 0;
                        *(int*)pVVar16 = local_58[0];
                        *(undefined8*)( pVVar16 + 8 ) = local_50;
                        *(undefined8*)( pVVar16 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
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

                     lVar4 = *(long*)pSVar24;
                     if (lVar4 == 0) {
                        local_90 = 0;
                     }
 else {
                        pcVar5 = *(char**)( lVar4 + 8 );
                        local_90 = 0;
                        if (pcVar5 == (char*)0x0) {
                           if (*(long*)( lVar4 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( lVar4 + 0x10 ));
                           }

                        }
 else {
                           local_80 = strlen(pcVar5);
                           local_88 = pcVar5;
                           String::parse_latin1((StrRange*)&local_90);
                        }

                     }

                     bVar14 = (bool)ScriptServer::is_global_class_tool((String*)&local_90);
                     Variant::Variant((Variant*)local_58, bVar14);
                     Variant::Variant((Variant*)local_78, "is_tool");
                     pVVar16 = (Variant*)Dictionary::operator []((Variant*)local_98);
                     if (pVVar16 != (Variant*)local_58) {
                        if (Variant::needs_deinit[*(int*)pVVar16] != '\0') {
                           Variant::_clear_internal();
                        }

                        *(undefined4*)pVVar16 = 0;
                        *(int*)pVVar16 = local_58[0];
                        *(undefined8*)( pVVar16 + 8 ) = local_50;
                        *(undefined8*)( pVVar16 + 0x10 ) = uStack_48;
                        local_58[0] = 0;
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

                     Variant::Variant((Variant*)local_58, local_98);
                     Array::push_back((Variant*)local_a0);
                     if (Variant::needs_deinit[local_58[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     Dictionary::~Dictionary(local_98);
                     pSVar24 = *(StringName**)( pSVar24 + 8 );
                  }
 while ( pSVar24 != (StringName*)0x0 );
               }

               pAVar17 = (Array*)ProjectSettings::get_singleton();
               ProjectSettings::store_global_class_list(pAVar17);
               Array::~Array(local_a0);
               List<StringName,DefaultAllocator>::~List((List<StringName,DefaultAllocator>*)&local_a8);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::add_move_array_element_function(StringName const&, Callable) */
            void EditorData::add_move_array_element_function(long param_1, bool param_2) {
               long in_FS_OFFSET;
               StringName aSStack_18[8];
               long local_10;
               local_10 = *(long*)( in_FS_OFFSET + 0x28 );
               HashMap<StringName,Callable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Callable>>>::insert(aSStack_18, (Callable*)( param_1 + 0x90 ), param_2);
               if (local_10 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::add_extension_editor_plugin(StringName const&, EditorPlugin*) */
            void EditorData::add_extension_editor_plugin(StringName *param_1, EditorPlugin *param_2) {
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
               long in_FS_OFFSET;
               StringName local_48[8];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (( *(long*)( param_1 + 0x18 ) != 0 ) && ( *(int*)( param_1 + 0x3c ) != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x38 ) * 4 );
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x38 ) * 8 );
                  if (*(long*)param_2 == 0) {
                     uVar11 = StringName::get_empty_hash();
                  }
 else {
                     uVar11 = *(uint*)( *(long*)param_2 + 0x20 );
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
                  uVar14 = *(uint*)( *(long*)( param_1 + 0x20 ) + lVar13 * 4 );
                  iVar12 = SUB164(auVar3 * auVar7, 8);
                  if (uVar14 != 0) {
                     uVar16 = 0;
                     do {
                        if (( uVar11 == uVar14 ) && ( *(long*)( *(long*)( *(long*)( param_1 + 0x18 ) + lVar13 * 8 ) + 0x10 ) == *(long*)param_2 )) {
                           _err_print_error("add_extension_editor_plugin", "editor/editor_data.cpp", 0x1f8, "Condition \"extension_editor_plugins.has(p_class_name)\" is true.", 0, 0);
                           goto LAB_001042b8;
                        }

                        uVar16 = uVar16 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(iVar12 + 1) * lVar2;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = uVar15;
                        lVar13 = SUB168(auVar4 * auVar8, 8);
                        uVar14 = *(uint*)( *(long*)( param_1 + 0x20 ) + lVar13 * 4 );
                        iVar12 = SUB164(auVar4 * auVar8, 8);
                     }
 while ( ( uVar14 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar14 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + iVar12 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar15,uVar16 <= SUB164(auVar6 * auVar10, 8) );
                  }

               }

               HashMap<StringName,EditorPlugin*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPlugin*>>>::insert(local_48, (EditorPlugin**)( param_1 + 0x10 ), SUB81(param_2, 0));
               LAB_001042b8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorSelection::_node_removed(Node*) */
            void EditorSelection::_node_removed(EditorSelection *this, Node *param_1) {
               long lVar1;
               Object *pOVar2;
               undefined1 auVar3[16];
               undefined1 auVar4[16];
               undefined1 auVar5[16];
               undefined1 auVar6[16];
               undefined1 auVar7[16];
               undefined1 auVar8[16];
               undefined1 auVar9[16];
               undefined1 auVar10[16];
               char cVar11;
               ulong uVar12;
               undefined8 *puVar13;
               int iVar14;
               long lVar15;
               ulong uVar16;
               uint uVar17;
               ulong uVar18;
               uint uVar19;
               Node *local_40[2];
               if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
                  uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ));
                  lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
                  uVar12 = (long)param_1 * 0x3ffff - 1;
                  uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
                  uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
                  uVar12 = uVar12 >> 0x16 ^ uVar12;
                  uVar16 = uVar12 & 0xffffffff;
                  if ((int)uVar12 == 0) {
                     uVar16 = 1;
                  }

                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = uVar16 * lVar1;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar18;
                  lVar15 = SUB168(auVar3 * auVar7, 8);
                  uVar17 = *(uint*)( *(long*)( this + 0x188 ) + lVar15 * 4 );
                  iVar14 = SUB164(auVar3 * auVar7, 8);
                  if (uVar17 != 0) {
                     uVar19 = 0;
                     while (( (uint)uVar16 != uVar17 || ( param_1 != *(Node**)( *(long*)( *(long*)( this + 0x180 ) + lVar15 * 8 ) + 0x10 ) ) )) {
                        uVar19 = uVar19 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(iVar14 + 1) * lVar1;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = uVar18;
                        lVar15 = SUB168(auVar4 * auVar8, 8);
                        uVar17 = *(uint*)( *(long*)( this + 0x188 ) + lVar15 * 4 );
                        iVar14 = SUB164(auVar4 * auVar8, 8);
                        if (uVar17 == 0) {
                           return;
                        }

                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = (ulong)uVar17 * lVar1;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar18;
                        auVar6._8_8_ = 0;
                        auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) + iVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar1;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = uVar18;
                        if (SUB164(auVar6 * auVar10, 8) < uVar19) {
                           return;
                        }

                     }
;
                     local_40[0] = param_1;
                     puVar13 = (undefined8*)HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>::operator []((HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>*)( this + 0x178 ), local_40);
                     pOVar2 = (Object*)*puVar13;
                     if (( pOVar2 != (Object*)0x0 ) && ( cVar11 = predelete_handler(pOVar2) ),cVar11 != '\0') {
                        ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                        Memory::free_static(pOVar2, false);
                     }

                     HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>::erase((HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>*)( this + 0x178 ), local_40);
                     *(undefined2*)( this + 0x1a9 ) = 0x101;
                  }

               }

               return;
            }

            /* EditorSelection::add_node(Node*) */
            void EditorSelection::add_node(EditorSelection *this, Node *param_1) {
               char cVar1;
               long lVar2;
               long *plVar3;
               code *pcVar4;
               undefined1 auVar5[16];
               undefined1 auVar6[16];
               undefined1 auVar7[16];
               undefined1 auVar8[16];
               undefined1 auVar9[16];
               undefined1 auVar10[16];
               undefined1 auVar11[16];
               undefined1 auVar12[16];
               ulong uVar13;
               Object *pOVar14;
               undefined8 *puVar15;
               int iVar16;
               long lVar17;
               uint uVar18;
               uint uVar19;
               ulong uVar20;
               ulong uVar21;
               long in_FS_OFFSET;
               Callable *local_120;
               Node *local_f0;
               long local_e8[2];
               int local_d8;
               undefined8 local_d4;
               Variant *local_c8[2];
               int local_b8[2];
               undefined1 local_b0[16];
               Variant *local_98[4];
               int local_78[6];
               undefined8 local_60;
               undefined1 local_58[16];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_f0 = param_1;
               if (param_1 == (Node*)0x0) {
                  _err_print_error("add_node", "editor/editor_data.cpp", 0x4bf, "Parameter \"p_node\" is null.", 0);
               }
 else if (( (byte)param_1[0x2fa] & 0x40 ) == 0) {
                  _err_print_error("add_node", "editor/editor_data.cpp", 0x4c0, "Condition \"!p_node->is_inside_tree()\" is true.", 0, 0);
               }
 else {
                  if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
                     uVar20 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ));
                     lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
                     uVar13 = (long)param_1 * 0x3ffff - 1;
                     uVar13 = ( uVar13 ^ uVar13 >> 0x1f ) * 0x15;
                     uVar13 = ( uVar13 ^ uVar13 >> 0xb ) * 0x41;
                     uVar13 = uVar13 >> 0x16 ^ uVar13;
                     uVar21 = uVar13 & 0xffffffff;
                     if ((int)uVar13 == 0) {
                        uVar21 = 1;
                     }

                     auVar5._8_8_ = 0;
                     auVar5._0_8_ = uVar21 * lVar2;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = uVar20;
                     lVar17 = SUB168(auVar5 * auVar9, 8);
                     uVar19 = *(uint*)( *(long*)( this + 0x188 ) + lVar17 * 4 );
                     iVar16 = SUB164(auVar5 * auVar9, 8);
                     if (uVar19 != 0) {
                        uVar18 = 0;
                        do {
                           if (( (uint)uVar21 == uVar19 ) && ( param_1 == *(Node**)( *(long*)( *(long*)( this + 0x180 ) + lVar17 * 8 ) + 0x10 ) )) goto LAB_001045e0;
                           uVar18 = uVar18 + 1;
                           auVar6._8_8_ = 0;
                           auVar6._0_8_ = ( ulong )(iVar16 + 1) * lVar2;
                           auVar10._8_8_ = 0;
                           auVar10._0_8_ = uVar20;
                           lVar17 = SUB168(auVar6 * auVar10, 8);
                           uVar19 = *(uint*)( *(long*)( this + 0x188 ) + lVar17 * 4 );
                           iVar16 = SUB164(auVar6 * auVar10, 8);
                        }
 while ( ( uVar19 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar19 * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar20,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) + iVar16 ) - SUB164(auVar7 * auVar11, 8)) * lVar2,auVar12._8_8_ = 0,auVar12._0_8_ = uVar20,uVar18 <= SUB164(auVar8 * auVar12, 8) );
                     }

                  }

                  *(undefined2*)( this + 0x1a9 ) = 0x101;
                  if (*(long**)( this + 0x1b0 ) == (long*)0x0) {
                     pOVar14 = (Object*)0x0;
                  }
 else {
                     puVar15 = (undefined8*)**(long**)( this + 0x1b0 );
                     if (puVar15 == (undefined8*)0x0) {
                        pOVar14 = (Object*)0x0;
                     }
 else {
                        do {
                           plVar3 = (long*)*puVar15;
                           StringName::StringName((StringName*)local_e8, "_get_editor_data", false);
                           Variant::Variant((Variant*)local_78, (Object*)param_1);
                           local_58 = (undefined1[16])0x0;
                           local_60 = 0;
                           local_d8 = 0;
                           local_d4 = 0;
                           local_c8[0] = (Variant*)local_78;
                           ( **(code**)( *plVar3 + 0x68 ) )((Variant*)local_98, plVar3, (StringName*)local_e8, local_c8, 1, &local_d8);
                           if (local_d8 == 0) {
                              Variant::Variant((Variant*)local_b8, (Variant*)local_98);
                              if (Variant::needs_deinit[(int)local_98[0]] != '\0') goto LAB_001047c2;
                              LAB_001046af:if (Variant::needs_deinit[(int)local_60] == '\0') goto LAB_001046c1;
                              LAB_001047e0:Variant::_clear_internal();
                              cVar1 = Variant::needs_deinit[local_78[0]];
                           }
 else {
                              local_b8[0] = 0;
                              local_b0 = (undefined1[16])0x0;
                              if (Variant::needs_deinit[(int)local_98[0]] == '\0') goto LAB_001046af;
                              LAB_001047c2:Variant::_clear_internal();
                              if (Variant::needs_deinit[(int)local_60] != '\0') goto LAB_001047e0;
                              LAB_001046c1:cVar1 = Variant::needs_deinit[local_78[0]];
                           }

                           if (cVar1 != '\0') {
                              Variant::_clear_internal();
                           }

                           pOVar14 = Variant::operator_cast_to_Object_((Variant*)local_b8);
                           if (Variant::needs_deinit[local_b8[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           if (( StringName::configured != '\0' ) && ( local_e8[0] != 0 )) {
                              StringName::unref();
                           }

                           if (pOVar14 != (Object*)0x0) goto LAB_0010483d;
                           puVar15 = (undefined8*)puVar15[1];
                        }
 while ( puVar15 != (undefined8*)0x0 );
                        pOVar14 = (Object*)0x0;
                     }

                  }

                  LAB_0010483d:local_120 = (Callable*)&local_d8;
                  puVar15 = (undefined8*)HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>::operator []((HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>*)( this + 0x178 ), &local_f0);
                  *puVar15 = pOVar14;
                  pcVar4 = *(code**)( *(long*)param_1 + 0x108 );
                  create_custom_callable_function_pointer<EditorSelection,Node*>((EditorSelection*)local_e8, (char*)this, (_func_void_Node_ptr*)"&EditorSelection::_node_removed");
                  Variant::Variant((Variant*)local_78, (Object*)param_1);
                  local_60 = 0;
                  local_58 = (undefined1[16])0x0;
                  local_98[0] = (Variant*)local_78;
                  Callable::bindp((Variant**)local_120, (int)(EditorSelection*)local_e8);
                  if (Variant::needs_deinit[(int)local_60] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (Variant::needs_deinit[local_78[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  ( *pcVar4 )(param_1, SceneStringNames::singleton + 0x40, local_120, 4);
                  Callable::~Callable(local_120);
                  Callable::~Callable((Callable*)local_e8);
               }

               LAB_001045e0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorSelection::remove_node(Node*) */
            void EditorSelection::remove_node(EditorSelection *this, Node *param_1) {
               long lVar1;
               Object *pOVar2;
               code *pcVar3;
               undefined1 auVar4[16];
               undefined1 auVar5[16];
               undefined1 auVar6[16];
               undefined1 auVar7[16];
               undefined1 auVar8[16];
               undefined1 auVar9[16];
               undefined1 auVar10[16];
               undefined1 auVar11[16];
               char cVar12;
               ulong uVar13;
               undefined8 *puVar14;
               int iVar15;
               long lVar16;
               uint uVar17;
               ulong uVar18;
               uint uVar19;
               ulong uVar20;
               long in_FS_OFFSET;
               Node *local_60;
               EditorSelection local_58[24];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_60 = param_1;
               if (param_1 == (Node*)0x0) {
                  _err_print_error("remove_node", "editor/editor_data.cpp", 0x4d4, "Parameter \"p_node\" is null.", 0, 0);
               }
 else if (( *(long*)( this + 0x180 ) != 0 ) && ( *(int*)( this + 0x1a4 ) != 0 )) {
                  uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ));
                  lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a0 ) * 8 );
                  uVar13 = (long)param_1 * 0x3ffff - 1;
                  uVar13 = ( uVar13 ^ uVar13 >> 0x1f ) * 0x15;
                  uVar13 = ( uVar13 ^ uVar13 >> 0xb ) * 0x41;
                  uVar13 = uVar13 >> 0x16 ^ uVar13;
                  uVar20 = uVar13 & 0xffffffff;
                  if ((int)uVar13 == 0) {
                     uVar20 = 1;
                  }

                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = uVar20 * lVar1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = uVar18;
                  lVar16 = SUB168(auVar4 * auVar8, 8);
                  uVar17 = *(uint*)( *(long*)( this + 0x188 ) + lVar16 * 4 );
                  iVar15 = SUB164(auVar4 * auVar8, 8);
                  if (uVar17 != 0) {
                     uVar19 = 0;
                     while (( (uint)uVar20 != uVar17 || ( param_1 != *(Node**)( *(long*)( *(long*)( this + 0x180 ) + lVar16 * 8 ) + 0x10 ) ) )) {
                        uVar19 = uVar19 + 1;
                        auVar5._8_8_ = 0;
                        auVar5._0_8_ = ( ulong )(iVar15 + 1) * lVar1;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = uVar18;
                        lVar16 = SUB168(auVar5 * auVar9, 8);
                        uVar17 = *(uint*)( *(long*)( this + 0x188 ) + lVar16 * 4 );
                        iVar15 = SUB164(auVar5 * auVar9, 8);
                        if (( uVar17 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar17 * lVar1,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 ) + iVar15 ) - SUB164(auVar6 * auVar10, 8)) * lVar1,auVar11._8_8_ = 0,auVar11._0_8_ = uVar18,SUB164(auVar7 * auVar11, 8) < uVar19) goto LAB_00104be9;
                     }
;
                     *(undefined2*)( this + 0x1a9 ) = 0x101;
                     puVar14 = (undefined8*)HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>::operator []((HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>*)( this + 0x178 ), &local_60);
                     pOVar2 = (Object*)*puVar14;
                     if (pOVar2 != (Object*)0x0) {
                        cVar12 = predelete_handler(pOVar2);
                        if (cVar12 != '\0') {
                           ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                           Memory::free_static(pOVar2, false);
                        }

                     }

                     HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>::erase((HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>*)( this + 0x178 ), &local_60);
                     pcVar3 = *(code**)( *(long*)param_1 + 0x110 );
                     create_custom_callable_function_pointer<EditorSelection,Node*>(local_58, (char*)this, (_func_void_Node_ptr*)"&EditorSelection::_node_removed");
                     ( *pcVar3 )(param_1, SceneStringNames::singleton + 0x40, local_58);
                     Callable::~Callable((Callable*)local_58);
                  }

               }

               LAB_00104be9:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorSelection::clear() */
            void EditorSelection::clear(EditorSelection *this) {
               int iVar1;
               iVar1 = *(int*)( this + 0x1a4 );
               while (iVar1 != 0) {
                  remove_node(this, *(Node**)( *(long*)( this + 400 ) + 0x10 ));
                  iVar1 = *(int*)( this + 0x1a4 );
               }
;
               *(undefined2*)( this + 0x1a9 ) = 0x101;
               return;
            }

            /* EditorSelection::~EditorSelection() */
            void EditorSelection::~EditorSelection(EditorSelection *this) {
               int iVar1;
               uint uVar2;
               long lVar3;
               long *plVar4;
               long lVar5;
               void *pvVar6;
               iVar1 = *(int*)( this + 0x1a4 );
               *(undefined***)this = &PTR__initialize_classv_00119d50;
               while (iVar1 != 0) {
                  remove_node(this, *(Node**)( *(long*)( this + 400 ) + 0x10 ));
                  iVar1 = *(int*)( this + 0x1a4 );
               }
;
               plVar4 = *(long**)( this + 0x1b8 );
               *(undefined2*)( this + 0x1a9 ) = 0x101;
               if (plVar4 != (long*)0x0) {
                  do {
                     pvVar6 = (void*)*plVar4;
                     if (pvVar6 == (void*)0x0) {
                        if ((int)plVar4[2] != 0) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           goto LAB_00104d51;
                        }

                        break;
                     }

                     if (plVar4 == *(long**)( (long)pvVar6 + 0x18 )) {
                        lVar5 = *(long*)( (long)pvVar6 + 8 );
                        lVar3 = *(long*)( (long)pvVar6 + 0x10 );
                        *plVar4 = lVar5;
                        if (pvVar6 == (void*)plVar4[1]) {
                           plVar4[1] = lVar3;
                        }

                        if (lVar3 != 0) {
                           *(long*)( lVar3 + 8 ) = lVar5;
                           lVar5 = *(long*)( (long)pvVar6 + 8 );
                        }

                        if (lVar5 != 0) {
                           *(long*)( lVar5 + 0x10 ) = lVar3;
                        }

                        Memory::free_static(pvVar6, false);
                        *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     plVar4 = *(long**)( this + 0x1b8 );
                  }
 while ( (int)plVar4[2] != 0 );
                  Memory::free_static(plVar4, false);
               }

               LAB_00104d51:plVar4 = *(long**)( this + 0x1b0 );
               if (plVar4 != (long*)0x0) {
                  do {
                     pvVar6 = (void*)*plVar4;
                     if (pvVar6 == (void*)0x0) {
                        if ((int)plVar4[2] != 0) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           goto LAB_00104dc3;
                        }

                        break;
                     }

                     if (plVar4 == *(long**)( (long)pvVar6 + 0x18 )) {
                        lVar5 = *(long*)( (long)pvVar6 + 8 );
                        lVar3 = *(long*)( (long)pvVar6 + 0x10 );
                        *plVar4 = lVar5;
                        if (pvVar6 == (void*)plVar4[1]) {
                           plVar4[1] = lVar3;
                        }

                        if (lVar3 != 0) {
                           *(long*)( lVar3 + 8 ) = lVar5;
                           lVar5 = *(long*)( (long)pvVar6 + 8 );
                        }

                        if (lVar5 != 0) {
                           *(long*)( lVar5 + 0x10 ) = lVar3;
                        }

                        Memory::free_static(pvVar6, false);
                        *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     plVar4 = *(long**)( this + 0x1b0 );
                  }
 while ( (int)plVar4[2] != 0 );
                  Memory::free_static(plVar4, false);
               }

               LAB_00104dc3:pvVar6 = *(void**)( this + 0x180 );
               if (pvVar6 == (void*)0x0) {
                  LAB_00104e5f:Object::~Object((Object*)this);
                  return;
               }

               if (*(int*)( this + 0x1a4 ) != 0) {
                  uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a0 ) * 4 );
                  if (uVar2 == 0) {
                     *(undefined4*)( this + 0x1a4 ) = 0;
                     *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
                  }
 else {
                     lVar5 = 0;
                     do {
                        if (*(int*)( *(long*)( this + 0x188 ) + lVar5 ) != 0) {
                           *(int*)( *(long*)( this + 0x188 ) + lVar5 ) = 0;
                           Memory::free_static(*(void**)( (long)pvVar6 + lVar5 * 2 ), false);
                           pvVar6 = *(void**)( this + 0x180 );
                           *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
                        }

                        lVar5 = lVar5 + 4;
                     }
 while ( lVar5 != (ulong)uVar2 << 2 );
                     *(undefined4*)( this + 0x1a4 ) = 0;
                     *(undefined1(*) [16])( this + 400 ) = (undefined1[16])0x0;
                     if (pvVar6 == (void*)0x0) goto LAB_00104e5f;
                  }

               }

               Memory::free_static(pvVar6, false);
               Memory::free_static(*(void**)( this + 0x188 ), false);
               Object::~Object((Object*)this);
               return;
            }

            /* EditorSelection::~EditorSelection() */
            void EditorSelection::~EditorSelection(EditorSelection *this) {
               ~EditorSelection(this)
               ;;
               operator_delete(this, 0x1c0);
               return;
            }

            /* EditorData::script_class_is_parent(String const&, String const&) */
            undefined4 EditorData::script_class_is_parent(EditorData *this, String *param_1, String *param_2) {
               long *plVar1;
               char *__s;
               long lVar2;
               char cVar3;
               undefined4 uVar4;
               long in_FS_OFFSET;
               long local_70;
               long local_68;
               long local_60;
               char *local_58;
               size_t local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               StringName::StringName((StringName*)&local_58, param_1, false);
               uVar4 = ScriptServer::is_global_class((StringName*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                  StringName::unref();
               }

               if ((char)uVar4 != '\0') {
                  local_70 = 0;
                  if (*(long*)param_1 != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)param_1);
                  }

                  LAB_00105078:cVar3 = String::operator !=((String*)&local_70, param_2);
                  if (cVar3 != '\0') {
                     do {
                        StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
                        cVar3 = ClassDB::class_exists((StringName*)&local_58);
                        if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        if (cVar3 != '\0') {
                           StringName::StringName((StringName*)&local_58, param_2, false);
                           StringName::StringName((StringName*)&local_60, (String*)&local_70, false);
                           uVar4 = ClassDB::is_parent_class((StringName*)&local_60, (StringName*)&local_58);
                           if (( StringName::configured != '\0' ) && ( ( ( local_60 == 0 || ( StringName::unref(),StringName::configured != '\0' ) ) && ( local_58 != (char*)0x0 ) ) )) {
                              StringName::unref();
                           }

                           break;
                        }

                        StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
                        cVar3 = ScriptServer::is_global_class((StringName*)&local_58);
                        if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        if (cVar3 == '\0') {
                           uVar4 = 0;
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                           goto LAB_00105020;
                        }

                        ScriptServer::get_global_class_base((String*)&local_68);
                        if (local_68 == 0) {
                           LAB_001051e9:local_60 = 0;
                           if (local_70 != 0) {
                              LAB_001051f7:lVar2 = local_70;
                              LOCK();
                              plVar1 = (long*)( local_70 + -0x10 );
                              *plVar1 = *plVar1 + -1;
                              UNLOCK();
                              if (*plVar1 == 0) {
                                 local_70 = 0;
                                 Memory::free_static((void*)( lVar2 + -0x10 ), false);
                              }

                              goto LAB_00105165;
                           }

                        }
 else {
                           __s = *(char**)( local_68 + 8 );
                           local_60 = 0;
                           if (__s == (char*)0x0) {
                              if (*(long*)( local_68 + 0x10 ) == 0) goto LAB_001051e9;
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
                           }
 else {
                              local_50 = strlen(__s);
                              local_58 = __s;
                              String::parse_latin1((StrRange*)&local_60);
                           }

                           lVar2 = local_60;
                           if (local_70 == local_60) {
                              if (local_70 != 0) {
                                 LOCK();
                                 plVar1 = (long*)( local_70 + -0x10 );
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    local_60 = 0;
                                    Memory::free_static((void*)( lVar2 + -0x10 ), false);
                                 }

                              }

                           }
 else {
                              if (local_70 != 0) goto LAB_001051f7;
                              LAB_00105165:local_70 = local_60;
                           }

                        }

                        if (( StringName::configured == '\0' ) || ( local_68 == 0 )) goto LAB_00105078;
                        StringName::unref();
                        cVar3 = String::operator !=((String*)&local_70, param_2);
                        if (cVar3 == '\0') break;
                     }
 while ( true );
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
               }

               LAB_00105020:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar4;
            }

            /* EditorData::paste_object_params(Object*) */
            void EditorData::paste_object_params(EditorData *this, Object *param_1) {
               long *plVar1;
               undefined8 uVar2;
               long lVar3;
               Object *pOVar4;
               long lVar5;
               long *plVar6;
               long in_FS_OFFSET;
               bool bVar7;
               long local_78;
               long local_70;
               char *local_68;
               undefined8 local_60;
               int local_58[6];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (param_1 == (Object*)0x0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     _err_print_error("paste_object_params", "editor/editor_data.cpp", 0x18e, "Parameter \"p_object\" is null.", 0, 0);
                     return;
                  }

               }
 else {
                  uVar2 = *(undefined8*)( this + 0x78 );
                  local_68 = "";
                  local_70 = 0;
                  local_60 = 0;
                  String::parse_latin1((StrRange*)&local_70);
                  local_68 = "Paste Params";
                  local_78 = 0;
                  local_60 = 0xc;
                  String::parse_latin1((StrRange*)&local_78);
                  TTR((String*)&local_68, (String*)&local_78);
                  EditorUndoRedoManager::create_action(uVar2, (String*)&local_68, 0, 0, 0);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  if (( *(long**)( this + 0x70 ) != (long*)0x0 ) && ( plVar6 = (long*)**(long**)( this + 0x70 ) ),plVar6 != (long*)0x0) {
                     do {
                        local_78 = 0;
                        plVar1 = (long*)( *plVar6 + -0x10 );
                        if (*plVar6 != 0) {
                           do {
                              lVar3 = *plVar1;
                              if (lVar3 == 0) goto LAB_00105408;
                              LOCK();
                              lVar5 = *plVar1;
                              bVar7 = lVar3 == lVar5;
                              if (bVar7) {
                                 *plVar1 = lVar3 + 1;
                                 lVar5 = lVar3;
                              }

                              UNLOCK();
                           }
 while ( !bVar7 );
                           if (lVar5 != -1) {
                              local_78 = *plVar6;
                           }

                        }

                        LAB_00105408:pOVar4 = *(Object**)( this + 0x78 );
                        StringName::StringName((StringName*)&local_68, (String*)&local_78, false);
                        EditorUndoRedoManager::add_do_property(pOVar4, (StringName*)param_1, (Variant*)&local_68);
                        if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        pOVar4 = *(Object**)( this + 0x78 );
                        StringName::StringName((StringName*)&local_70, (String*)&local_78, false);
                        Object::get((StringName*)local_58, (bool*)param_1);
                        StringName::StringName((StringName*)&local_68, (String*)&local_78, false);
                        EditorUndoRedoManager::add_undo_property(pOVar4, (StringName*)param_1, (Variant*)&local_68);
                        if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
                           StringName::unref();
                        }

                        lVar3 = local_78;
                        if (local_78 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_78 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_78 = 0;
                              Memory::free_static((void*)( lVar3 + -0x10 ), false);
                           }

                        }

                        plVar6 = (long*)plVar6[4];
                     }
 while ( plVar6 != (long*)0x0 );
                  }

                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     EditorUndoRedoManager::commit_action(SUB81(*(undefined8*)( this + 0x78 ), 0));
                     return;
                  }

               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorSelection::_get_transformable_selected_nodes() */
            void EditorSelection::_get_transformable_selected_nodes(void) {
               undefined8 *puVar1;
               long in_RSI;
               Array *in_RDI;
               long in_FS_OFFSET;
               undefined8 local_60;
               undefined *local_58;
               undefined8 local_50;
               undefined8 local_48;
               undefined1 local_40[16];
               long local_30;
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               Array::Array(in_RDI);
               local_40 = (undefined1[16])0x0;
               local_58 = &_LC70;
               local_48 = 0;
               local_60 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_60);
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               Array::set_typed((uint)in_RDI, (StringName*)0x18, (Variant*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (Variant::needs_deinit[(int)local_48] != '\0') {
                  Variant::_clear_internal();
               }

               if (*(undefined8**)( in_RSI + 0x1b8 ) != (undefined8*)0x0) {
                  for (puVar1 = (undefined8*)**(undefined8**)( in_RSI + 0x1b8 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)puVar1[1]) {
                     Variant::Variant((Variant*)&local_48, (Object*)*puVar1);
                     Array::push_back((Variant*)in_RDI);
                     if (Variant::needs_deinit[(int)local_48] != '\0') {
                        Variant::_clear_internal();
                     }

                  }

               }

               if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

            /* EditorData::script_class_get_icon_path(String const&, bool*) const */
            String *EditorData::script_class_get_icon_path(String *param_1, bool *param_2) {
               long *plVar1;
               uint uVar2;
               long lVar3;
               char *__s;
               undefined1 auVar4[16];
               undefined1 auVar5[16];
               undefined1 auVar6[16];
               undefined1 auVar7[16];
               undefined1 auVar8[16];
               undefined1 auVar9[16];
               undefined1 auVar10[16];
               undefined1 auVar11[16];
               char cVar12;
               undefined1 uVar13;
               uint uVar14;
               undefined1 *in_RCX;
               uint uVar15;
               CowData *in_RDX;
               long lVar16;
               uint uVar17;
               uint uVar18;
               ulong uVar19;
               long in_FS_OFFSET;
               long local_70;
               long local_68;
               long local_60;
               char *local_58;
               size_t local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_70 = 0;
               if (*(long*)in_RDX != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, in_RDX);
               }

               do {
                  StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
                  cVar12 = ScriptServer::is_global_class((StringName*)&local_58);
                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  if (cVar12 == '\0') {
                     if (in_RCX != (undefined1*)0x0) {
                        StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
                        uVar13 = ClassDB::class_exists((StringName*)&local_58);
                        *in_RCX = uVar13;
                        if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                           StringName::unref();
                        }

                     }

                     *(undefined8*)param_1 = 0;
                     LAB_00105a7e:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                     if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                        /* WARNING: Subroutine does not return */
                        __stack_chk_fail();
                     }

                     return param_1;
                  }

                  StringName::StringName((StringName*)&local_58, (String*)&local_70, false);
                  if (( *(long*)( param_2 + 0xe0 ) != 0 ) && ( *(int*)( param_2 + 0x104 ) != 0 )) {
                     uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x100 ) * 4 );
                     uVar19 = CONCAT44(0, uVar2);
                     lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x100 ) * 8 );
                     if (local_58 == (char*)0x0) {
                        uVar14 = StringName::get_empty_hash();
                     }
 else {
                        uVar14 = *(uint*)( local_58 + 0x20 );
                     }

                     if (uVar14 == 0) {
                        uVar14 = 1;
                     }

                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = (ulong)uVar14 * lVar3;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = uVar19;
                     lVar16 = SUB168(auVar4 * auVar8, 8);
                     uVar17 = *(uint*)( *(long*)( param_2 + 0xe8 ) + lVar16 * 4 );
                     uVar15 = SUB164(auVar4 * auVar8, 8);
                     if (uVar17 != 0) {
                        uVar18 = 0;
                        do {
                           if (( uVar17 == uVar14 ) && ( *(char**)( *(long*)( *(long*)( param_2 + 0xe0 ) + lVar16 * 8 ) + 0x10 ) == local_58 )) {
                              lVar3 = *(long*)( *(long*)( param_2 + 0xe0 ) + (ulong)uVar15 * 8 );
                              if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                                 StringName::unref();
                              }

                              if (lVar3 == 0) goto LAB_001058ca;
                              if (( ( in_RCX != (undefined1*)0x0 ) && ( *(long*)( lVar3 + 0x18 ) != 0 ) ) && ( 1 < *(uint*)( *(long*)( lVar3 + 0x18 ) + -8 ) )) {
                                 *in_RCX = 1;
                              }

                              *(undefined8*)param_1 = 0;
                              CowData<char32_t>::_ref((CowData<char32_t>*)param_1, (CowData*)( lVar3 + 0x18 ));
                              goto LAB_00105a7e;
                           }

                           uVar18 = uVar18 + 1;
                           auVar5._8_8_ = 0;
                           auVar5._0_8_ = ( ulong )(uVar15 + 1) * lVar3;
                           auVar9._8_8_ = 0;
                           auVar9._0_8_ = uVar19;
                           lVar16 = SUB168(auVar5 * auVar9, 8);
                           uVar17 = *(uint*)( *(long*)( param_2 + 0xe8 ) + lVar16 * 4 );
                           uVar15 = SUB164(auVar5 * auVar9, 8);
                        }
 while ( ( uVar17 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar17 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar2 + uVar15 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,uVar18 <= SUB164(auVar7 * auVar11, 8) );
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  LAB_001058ca:ScriptServer::get_global_class_base((String*)&local_68);
                  if (local_68 == 0) {
                     LAB_001059c9:local_60 = 0;
                     if (local_70 != 0) {
                        LAB_001059d7:lVar3 = local_70;
                        LOCK();
                        plVar1 = (long*)( local_70 + -0x10 );
                        *plVar1 = *plVar1 + -1;
                        UNLOCK();
                        if (*plVar1 == 0) {
                           local_70 = 0;
                           Memory::free_static((void*)( lVar3 + -0x10 ), false);
                        }

                        goto LAB_00105932;
                     }

                  }
 else {
                     __s = *(char**)( local_68 + 8 );
                     local_60 = 0;
                     if (__s == (char*)0x0) {
                        if (*(long*)( local_68 + 0x10 ) == 0) goto LAB_001059c9;
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( local_68 + 0x10 ));
                     }
 else {
                        local_50 = strlen(__s);
                        local_58 = __s;
                        String::parse_latin1((StrRange*)&local_60);
                     }

                     lVar3 = local_60;
                     if (local_70 == local_60) {
                        if (local_70 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_70 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_60 = 0;
                              Memory::free_static((void*)( lVar3 + -0x10 ), false);
                           }

                        }

                     }
 else {
                        if (local_70 != 0) goto LAB_001059d7;
                        LAB_00105932:local_70 = local_60;
                     }

                  }

                  if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
                     StringName::unref();
                  }

               }
 while ( true );
            }

            /* EditorData::script_class_set_name(String const&, StringName const&) */
            void EditorData::script_class_set_name(EditorData *this, String *param_1, StringName *param_2) {
               StringName *this_00;
               this_00 = (StringName*)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>::operator []((HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>*)( this + 0x108 ), param_1);
               StringName::operator =(this_00, param_2);
               return;
            }

            /* EditorSelection::get_selected_nodes() */
            void EditorSelection::get_selected_nodes(void) {
               undefined8 *puVar1;
               long in_RSI;
               Array *in_RDI;
               long in_FS_OFFSET;
               undefined8 local_60;
               undefined *local_58;
               undefined8 local_50;
               undefined8 local_48;
               undefined1 local_40[16];
               long local_30;
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               Array::Array(in_RDI);
               local_40 = (undefined1[16])0x0;
               local_58 = &_LC70;
               local_48 = 0;
               local_60 = 0;
               local_50 = 4;
               String::parse_latin1((StrRange*)&local_60);
               StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
               Array::set_typed((uint)in_RDI, (StringName*)0x18, (Variant*)&local_58);
               if (( StringName::configured != '\0' ) && ( local_58 != (undefined*)0x0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               if (Variant::needs_deinit[(int)local_48] != '\0') {
                  Variant::_clear_internal();
               }

               for (puVar1 = *(undefined8**)( in_RSI + 400 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
                  Variant::Variant((Variant*)&local_48, (Object*)puVar1[2]);
                  Array::push_back((Variant*)in_RDI);
                  if (Variant::needs_deinit[(int)local_48] != '\0') {
                     Variant::_clear_internal();
                  }

               }

               if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::get_scene_root_script(int) const */
            undefined8 *EditorData::get_scene_root_script(int param_1) {
               code *pcVar1;
               char cVar2;
               int iVar3;
               long lVar4;
               Object *pOVar5;
               long *plVar6;
               int in_EDX;
               long in_RSI;
               undefined4 in_register_0000003c;
               undefined8 *puVar7;
               long lVar8;
               long lVar9;
               long lVar10;
               long in_FS_OFFSET;
               long local_60;
               int local_58[6];
               long local_40;
               puVar7 = (undefined8*)CONCAT44(in_register_0000003c, param_1);
               lVar9 = (long)in_EDX;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               lVar4 = *(long*)( in_RSI + 200 );
               if (in_EDX < 0) {
                  if (lVar4 == 0) goto LAB_00105fa8;
                  lVar10 = *(long*)( lVar4 + -8 );
               }
 else {
                  if (lVar4 != 0) {
                     lVar10 = *(long*)( lVar4 + -8 );
                     if (lVar10 <= lVar9) goto LAB_00105f1d;
                     lVar10 = lVar9 * 0x60;
                     if (*(long**)( lVar4 + lVar10 ) != (long*)0x0) {
                        ( **(code**)( **(long**)( lVar4 + lVar10 ) + 0x98 ) )(local_58);
                        lVar4 = Variant::get_validated_object();
                        if (lVar4 == 0) {
                           LAB_00105d80:cVar2 = Variant::needs_deinit[local_58[0]];
                        }
 else {
                           pOVar5 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &Script::typeinfo, 0);
                           if (pOVar5 != (Object*)0x0) {
                              cVar2 = RefCounted::reference();
                              if (cVar2 != '\0') {
                                 if (Variant::needs_deinit[local_58[0]] != '\0') {
                                    Variant::_clear_internal();
                                 }

                                 LAB_00105d2d:*puVar7 = pOVar5;
                                 cVar2 = RefCounted::reference();
                                 if (cVar2 == '\0') {
                                    *puVar7 = 0;
                                 }

                                 cVar2 = RefCounted::unreference();
                                 if (( cVar2 != '\0' ) && ( cVar2 = predelete_handler(pOVar5) ),cVar2 != '\0') {
                                    ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                                    Memory::free_static(pOVar5, false);
                                 }

                                 goto LAB_00105ee0;
                              }

                              goto LAB_00105d80;
                           }

                           cVar2 = Variant::needs_deinit[local_58[0]];
                        }

                        if (cVar2 != '\0') {
                           Variant::_clear_internal();
                        }

                        lVar4 = *(long*)( in_RSI + 200 );
                        if (lVar4 == 0) {
                           LAB_00105fb0:lVar8 = 0;
                           LAB_00105fb3:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
                           _err_flush_stdout();
                           /* WARNING: Does not return */
                           pcVar1 = (code*)invalidInstructionException();
                           ( *pcVar1 )();
                        }

                        lVar8 = *(long*)( lVar4 + -8 );
                        if (lVar8 <= lVar9) goto LAB_00105fb3;
                        iVar3 = Node::get_child_count(SUB81(*(undefined8*)( lVar4 + lVar10 ), 0));
                        if (iVar3 != 0) {
                           lVar4 = *(long*)( in_RSI + 200 );
                           if (lVar4 == 0) goto LAB_00105fb0;
                           lVar8 = *(long*)( lVar4 + -8 );
                           if (lVar8 <= lVar9) goto LAB_00105fb3;
                           plVar6 = (long*)Node::get_child((int)*(undefined8*)( lVar4 + lVar10 ), false);
                           while (plVar6 != (long*)0x0) {
                              Node::get_scene_file_path();
                              if (( local_60 != 0 ) && ( 1 < *(uint*)( local_60 + -8 ) )) {
                                 CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                                 break;
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                              ( **(code**)( *plVar6 + 0x98 ) )(local_58, plVar6);
                              lVar4 = Variant::get_validated_object();
                              if (( ( lVar4 != 0 ) && ( pOVar5 = (Object*)__dynamic_cast(lVar4, &Object::typeinfo, &Script::typeinfo, 0) ),pOVar5 != (Object*)0x0 )) {
                                 if (Variant::needs_deinit[local_58[0]] == '\0') {
                                    Node::get_parent();
                                 }
 else {
                                    Variant::_clear_internal();
                                    Node::get_parent();
                                 }

                                 goto LAB_00105d2d;
                              }

                              if (Variant::needs_deinit[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              plVar6 = (long*)Node::get_parent();
                           }
;
                        }

                     }

                     *puVar7 = 0;
                     goto LAB_00105ee0;
                  }

                  LAB_00105fa8:lVar10 = 0;
               }

               LAB_00105f1d:_err_print_index_error("get_scene_root_script", "editor/editor_data.cpp", 0x348, lVar9, lVar10, "p_idx", "edited_scene.size()", "", false, false);
               *puVar7 = 0;
               LAB_00105ee0:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return puVar7;
            }

            /* EditorData::get_scene_title(int, bool) const */
            String *EditorData::get_scene_title(int param_1, bool param_2) {
               undefined8 uVar1;
               code *pcVar2;
               char cVar3;
               long lVar4;
               char in_CL;
               int in_EDX;
               undefined7 in_register_00000031;
               long lVar5;
               undefined4 in_register_0000003c;
               String *this;
               long lVar6;
               long lVar7;
               long in_FS_OFFSET;
               CowData<char32_t> local_78[8];
               String local_70[8];
               undefined8 local_68;
               undefined8 local_60;
               char *local_58;
               undefined8 local_50;
               long local_40;
               this(String * CONCAT44(in_register_0000003c, param_1));
               lVar5 = CONCAT71(in_register_00000031, param_2);
               lVar7 = (long)in_EDX;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               lVar4 = *(long*)( lVar5 + 200 );
               if (in_EDX < 0) {
                  if (lVar4 == 0) goto LAB_001063e0;
                  lVar6 = *(long*)( lVar4 + -8 );
               }
 else if (lVar4 == 0) {
                  LAB_001063e0:lVar6 = 0;
               }
 else {
                  lVar6 = *(long*)( lVar4 + -8 );
                  if (lVar7 < lVar6) {
                     if (*(long*)( lVar4 + lVar7 * 0x60 ) == 0) {
                        local_60 = 0;
                        local_58 = "";
                        local_50 = 0;
                        String::parse_latin1((StrRange*)&local_60);
                        local_58 = "[empty]";
                        local_68 = 0;
                        local_50 = 7;
                        String::parse_latin1((StrRange*)&local_68);
                        TTR(this, (String*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     }
 else {
                        Node::get_scene_file_path();
                        if (( local_58 == (char*)0x0 ) || ( uVar1 = *(undefined8*)( local_58 + -8 ) ),(int)uVar1 == 0) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        }
 else {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                           if ((int)uVar1 != 1) {
                              if (*(long*)( lVar5 + 200 ) == 0) {
                                 lVar4 = 0;
                              }
 else {
                                 lVar4 = *(long*)( *(long*)( lVar5 + 200 ) + -8 );
                                 if (lVar7 < lVar4) {
                                    Node::get_scene_file_path();
                                    String::get_file();
                                    CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                                    String::get_basename();
                                    if (in_CL == '\0') {
                                       lVar4 = *(long*)( lVar5 + 200 );
                                       for (lVar7 = 0; ( lVar4 != 0 && ( lVar7 < *(long*)( lVar4 + -8 ) ) ); lVar7 = lVar7 + 1) {
                                          if (( in_EDX != (int)lVar7 ) && ( *(long*)( lVar4 + lVar7 * 0x60 ) != 0 )) {
                                             Node::get_scene_file_path();
                                             String::get_file();
                                             String::get_basename();
                                             cVar3 = String::operator ==(local_70, (String*)&local_58);
                                             CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                                             CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                                             CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                                             if (cVar3 != '\0') {
                                                *(undefined8*)this = 0;
                                                CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)local_78);
                                                goto LAB_00106204;
                                             }

                                             lVar4 = *(long*)( lVar5 + 200 );
                                          }

                                       }

                                    }

                                    *(undefined8*)this = 0;
                                    CowData<char32_t>::_ref((CowData<char32_t>*)this, (CowData*)local_70);
                                    LAB_00106204:CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
                                    CowData<char32_t>::_unref(local_78);
                                    goto LAB_001062a8;
                                 }

                              }

                              _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar4, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar2 = (code*)invalidInstructionException();
                              ( *pcVar2 )();
                           }

                        }

                        local_60 = 0;
                        local_58 = "";
                        local_50 = 0;
                        String::parse_latin1((StrRange*)&local_60);
                        local_58 = "[unsaved]";
                        local_68 = 0;
                        local_50 = 9;
                        String::parse_latin1((StrRange*)&local_68);
                        TTR(this, (String*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     }

                     goto LAB_001062a8;
                  }

               }

               _err_print_index_error("get_scene_title", "editor/editor_data.cpp", 0x358, lVar7, lVar6, "p_idx", "edited_scene.size()", "", false, false);
               *(undefined8*)this = 0;
               LAB_001062a8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return this;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::get_scene_path(int) const */
            CowData<char32_t> *EditorData::get_scene_path(int param_1) {
               code *pcVar1;
               int in_EDX;
               long in_RSI;
               long lVar2;
               undefined4 in_register_0000003c;
               CowData<char32_t> *this;
               long lVar3;
               long lVar4;
               long lVar5;
               int iVar6;
               long in_FS_OFFSET;
               long local_48;
               long local_40;
               this(CowData<char32_t> * CONCAT44(in_register_0000003c, param_1));
               lVar4 = (long)in_EDX;
               lVar2 = *(long*)( in_RSI + 200 );
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (in_EDX < 0) {
                  if (lVar2 == 0) goto LAB_00106630;
                  lVar5 = *(long*)( lVar2 + -8 );
               }
 else {
                  if (lVar2 != 0) {
                     lVar5 = *(long*)( lVar2 + -8 );
                     if (lVar5 <= lVar4) goto LAB_001065e1;
                     lVar5 = lVar4 * 0x60;
                     if (*(long*)( lVar2 + lVar5 ) != 0) {
                        Node::get_scene_file_path();
                        if (( local_48 == 0 ) || ( iVar6 = iVar6 == 0 )) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                           LAB_00106555:lVar2 = *(long*)( in_RSI + 200 );
                           if (lVar2 != 0) {
                              lVar3 = *(long*)( lVar2 + -8 );
                              if (lVar3 <= lVar4) goto LAB_0010658e;
                              Node::set_scene_file_path(*(String**)( lVar2 + lVar5 ));
                              lVar2 = *(long*)( in_RSI + 200 );
                              if (lVar2 != 0) {
                                 lVar3 = *(long*)( lVar2 + -8 );
                                 if (lVar3 <= lVar4) goto LAB_0010658e;
                                 goto LAB_00106530;
                              }

                           }

                        }
 else {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
                           if (iVar6 == 1) goto LAB_00106555;
                           if (*(long*)( in_RSI + 200 ) != 0) {
                              lVar3 = *(long*)( *(long*)( in_RSI + 200 ) + -8 );
                              if (lVar3 <= lVar4) goto LAB_0010658e;
                              Node::get_scene_file_path();
                              goto LAB_00106504;
                           }

                        }

                        lVar3 = 0;
                        LAB_0010658e:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar4, lVar3, "p_index", "size()", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar1 = (code*)invalidInstructionException();
                        ( *pcVar1 )();
                     }

                     LAB_00106530:*(undefined8*)this = 0;
                     if (*(long*)( lVar2 + lVar5 + 8 ) != 0) {
                        CowData<char32_t>::_ref(this, (CowData*)( lVar2 + lVar5 + 8 ));
                     }

                     goto LAB_00106504;
                  }

                  LAB_00106630:lVar5 = 0;
               }

               LAB_001065e1:_err_print_index_error("get_scene_path", "editor/editor_data.cpp", 0x382, lVar4, lVar5, "p_idx", "edited_scene.size()", "", false, false);
               *(undefined8*)this = 0;
               LAB_00106504:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return this;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::get_edited_scene_live_edit_root() */
            void EditorData::get_edited_scene_live_edit_root(void) {
               long lVar1;
               long lVar2;
               long in_RSI;
               NodePath *in_RDI;
               long lVar3;
               long in_FS_OFFSET;
               undefined8 local_28;
               long local_20;
               lVar2 = (long)*(int*)( in_RSI + 0xd0 );
               local_20 = *(long*)( in_FS_OFFSET + 0x28 );
               lVar1 = *(long*)( in_RSI + 200 );
               if (*(int*)( in_RSI + 0xd0 ) < 0) {
                  if (lVar1 == 0) goto LAB_00106718;
                  lVar3 = *(long*)( lVar1 + -8 );
               }
 else if (lVar1 == 0) {
                  LAB_00106718:lVar3 = 0;
               }
 else {
                  lVar3 = *(long*)( lVar1 + -8 );
                  if (lVar2 < lVar3) {
                     NodePath::NodePath(in_RDI, (NodePath*)( lVar1 + 0x48 + lVar2 * 0x60 ));
                     goto LAB_00106693;
                  }

               }

               _err_print_index_error("get_edited_scene_live_edit_root", "editor/editor_data.cpp", 0x396, lVar2, lVar3, "current_edited_scene", "edited_scene.size()", "", false, false);
               local_28 = 0;
               NodePath::NodePath(in_RDI, (String*)&local_28);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_28);
               LAB_00106693:if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::_find_updated_instances(Node*, Node*, HashSet<String, HashMapHasherDefault,
   HashMapComparatorDefault<String> >&) */
            undefined4 EditorData::_find_updated_instances(EditorData *this, Node *param_1, Node *param_2, HashSet *param_3) {
               uint uVar1;
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
               char cVar12;
               int iVar13;
               undefined4 uVar14;
               uint uVar15;
               Node *pNVar16;
               long lVar17;
               uint uVar18;
               long lVar19;
               ulong uVar20;
               long lVar21;
               Object *pOVar22;
               int iVar23;
               ulong uVar24;
               long in_FS_OFFSET;
               String local_60[8];
               Object *local_58[3];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (param_2 == param_1) {
                  Node::get_scene_inherited_state();
                  if (local_58[0] == (Object*)0x0) goto LAB_0010679b;
                  LAB_00106818:pOVar22 = local_58[0];
                  cVar12 = RefCounted::reference();
                  if (cVar12 == '\0') {
                     if (( local_58[0] != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0') {
                        pOVar22 = (Object*)0x0;
                        goto LAB_00106846;
                     }

                     goto LAB_0010679b;
                  }

                  if (( local_58[0] != (Object*)0x0 ) && ( cVar12 = RefCounted::unreference() ),cVar12 != '\0') {
                     LAB_00106846:cVar12 = predelete_handler(local_58[0]);
                     if (cVar12 != '\0') {
                        ( **(code**)( *(long*)local_58[0] + 0x140 ) )(local_58[0]);
                        Memory::free_static(local_58[0], false);
                     }

                     if (pOVar22 == (Object*)0x0) goto LAB_0010679b;
                  }

                  SceneState::get_path();
                  if (( *(long*)param_3 != 0 ) && ( *(int*)( param_3 + 0x24 ) != 0 )) {
                     uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_3 + 0x20 ) * 4 );
                     lVar17 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_3 + 0x20 ) * 8 );
                     uVar15 = String::hash();
                     uVar24 = CONCAT44(0, uVar1);
                     lVar21 = *(long*)( param_3 + 0x18 );
                     uVar18 = 1;
                     if (uVar15 != 0) {
                        uVar18 = uVar15;
                     }

                     auVar4._8_8_ = 0;
                     auVar4._0_8_ = (ulong)uVar18 * lVar17;
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = uVar24;
                     lVar19 = SUB168(auVar4 * auVar8, 8);
                     uVar15 = *(uint*)( lVar21 + lVar19 * 4 );
                     uVar20 = (ulong)uVar15;
                     if (uVar15 != 0) {
                        iVar23 = SUB164(auVar4 * auVar8, 8);
                        uVar15 = 0;
                        do {
                           if ((uint)uVar20 == uVar18) {
                              cVar12 = String::operator ==((String*)( *(long*)param_3 + ( ulong ) * (uint*)( *(long*)( param_3 + 8 ) + lVar19 * 4 ) * 8 ), local_60);
                              if (cVar12 != '\0') goto LAB_00106aa2;
                              lVar21 = *(long*)( param_3 + 0x18 );
                           }

                           uVar15 = uVar15 + 1;
                           auVar5._8_8_ = 0;
                           auVar5._0_8_ = ( ulong )(iVar23 + 1) * lVar17;
                           auVar9._8_8_ = 0;
                           auVar9._0_8_ = uVar24;
                           lVar19 = SUB168(auVar5 * auVar9, 8);
                           uVar2 = *(uint*)( lVar21 + lVar19 * 4 );
                           uVar20 = (ulong)uVar2;
                           iVar23 = SUB164(auVar5 * auVar9, 8);
                        }
 while ( ( uVar2 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar20 * lVar17,auVar10._8_8_ = 0,auVar10._0_8_ = uVar24,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + iVar23 ) - SUB164(auVar6 * auVar10, 8)) * lVar17,auVar11._8_8_ = 0,auVar11._0_8_ = uVar24,uVar15 <= SUB164(auVar7 * auVar11, 8) );
                     }

                  }

                  lVar17 = FileAccess::get_modified_time(local_60);
                  if (lVar17 == *(long*)( pOVar22 + 0x250 )) {
                     HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert((String*)local_58);
                     LAB_00106aa2:CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
                     goto LAB_0010679e;
                  }

                  uVar14 = 1;
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
               }
 else {
                  Node::get_scene_file_path();
                  if (( local_58[0] == (Object*)0x0 ) || ( uVar3 = *(undefined8*)( local_58[0] + -8 ) ),(int)uVar3 == 0) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
                  }
 else {
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
                     if (( (int)uVar3 != 1 ) && ( Node::get_scene_instance_state(),local_58[0] != (Object*)0x0 )) goto LAB_00106818;
                  }

                  LAB_0010679b:pOVar22 = (Object*)0x0;
                  LAB_0010679e:for (iVar23 = 0; iVar13 = Node::get_child_count(SUB81(param_2, 0)),iVar23 < iVar13; iVar23 = iVar23 + 1) {
                     pNVar16 = (Node*)Node::get_child((int)param_2, SUB41(iVar23, 0));
                     uVar14 = _find_updated_instances(this, param_1, pNVar16, param_3);
                     if ((char)uVar14 != '\0') goto LAB_001069b3;
                  }

                  uVar14 = 0;
                  LAB_001069b3:if (pOVar22 == (Object*)0x0) goto LAB_001069b8;
               }

               cVar12 = RefCounted::unreference();
               if (( cVar12 != '\0' ) && ( cVar12 = predelete_handler(pOVar22) ),cVar12 != '\0') {
                  ( **(code**)( *(long*)pOVar22 + 0x140 ) )(pOVar22);
                  Memory::free_static(pOVar22, false);
               }

               LAB_001069b8:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return uVar14;
            }

            /* EditorData::script_class_load_script(String const&) const */
            String *EditorData::script_class_load_script(String *param_1) {
               Object *pOVar1;
               char cVar2;
               long lVar3;
               String *in_RDX;
               long in_FS_OFFSET;
               String aSStack_58[8];
               undefined8 local_50;
               Object *local_48;
               undefined8 local_40;
               long local_30;
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               StringName::StringName((StringName*)&local_48, in_RDX, false);
               cVar2 = ScriptServer::is_global_class((StringName*)&local_48);
               if (( StringName::configured != '\0' ) && ( local_48 != (Object*)0x0 )) {
                  StringName::unref();
               }

               if (cVar2 == '\0') {
                  *(undefined8*)param_1 = 0;
                  goto LAB_00106b46;
               }

               ScriptServer::get_global_class_path(aSStack_58);
               local_48 = (Object*)0x110298;
               local_50 = 0;
               local_40 = 6;
               String::parse_latin1((StrRange*)&local_50);
               ResourceLoader::load((StringName*)&local_48, aSStack_58, (StrRange*)&local_50, 1, 0);
               *(undefined8*)param_1 = 0;
               if (local_48 != (Object*)0x0) {
                  lVar3 = __dynamic_cast(local_48, &Object::typeinfo, &Script::typeinfo, 0);
                  if (lVar3 != 0) {
                     *(long*)param_1 = lVar3;
                     cVar2 = RefCounted::reference();
                     if (cVar2 == '\0') {
                        *(undefined8*)param_1 = 0;
                     }

                     if (local_48 == (Object*)0x0) goto LAB_00106c48;
                  }

                  cVar2 = RefCounted::unreference();
                  pOVar1 = local_48;
                  if (cVar2 != '\0') {
                     cVar2 = predelete_handler(local_48);
                     if (cVar2 != '\0') {
                        ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
                        Memory::free_static(pOVar1, false);
                     }

                  }

               }

               LAB_00106c48:CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
               CowData<char32_t>::_unref((CowData<char32_t>*)aSStack_58);
               LAB_00106b46:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return param_1;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::script_class_instance(String const&) */
            String *EditorData::script_class_instance(String *param_1) {
               code *pcVar1;
               char cVar2;
               bool bVar3;
               Object *pOVar4;
               String *in_RDX;
               long in_FS_OFFSET;
               Object *local_78;
               long local_70;
               undefined4 local_68[2];
               undefined8 local_60;
               undefined8 uStack_58;
               int local_48[6];
               long local_30;
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               StringName::StringName((StringName*)&local_70, in_RDX, false);
               cVar2 = ScriptServer::is_global_class((StringName*)&local_70);
               if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
                  StringName::unref();
               }

               if (cVar2 != '\0') {
                  script_class_load_script((String*)&local_78);
                  if (local_78 != (Object*)0x0) {
                     ( **(code**)( *(long*)local_78 + 0x1f0 ) )((StringName*)&local_70);
                     pOVar4 = (Object*)ClassDB::instantiate((StringName*)&local_70);
                     Variant::Variant((Variant*)local_68, pOVar4);
                     if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
                        StringName::unref();
                     }

                     bVar3 = Variant::operator_cast_to_bool((Variant*)local_68);
                     if (bVar3) {
                        pOVar4 = Variant::operator_cast_to_Object_((Variant*)local_68);
                        PropertyUtils::assign_custom_type_script(pOVar4, (Ref*)&local_78);
                        pcVar1 = *(code**)( *(long*)pOVar4 + 0x90 );
                        Variant::Variant((Variant*)local_48, local_78);
                        ( *pcVar1 )(pOVar4);
                        if (Variant::needs_deinit[local_48[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                     }

                     *(undefined4*)param_1 = local_68[0];
                     *(undefined8*)( param_1 + 8 ) = local_60;
                     *(undefined8*)( param_1 + 0x10 ) = uStack_58;
                     if (local_78 != (Object*)0x0) {
                        cVar2 = RefCounted::unreference();
                        if (cVar2 != '\0') {
                           cVar2 = predelete_handler(local_78);
                           if (cVar2 != '\0') {
                              ( **(code**)( *(long*)local_78 + 0x140 ) )(local_78);
                              Memory::free_static(local_78, false);
                           }

                        }

                     }

                     goto LAB_00106ce2;
                  }

               }

               *(undefined4*)param_1 = 0;
               *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
               LAB_00106ce2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return param_1;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::_load_script_icon(String const&) const */
            String *EditorData::_load_script_icon(String *param_1) {
               char cVar1;
               Object *pOVar2;
               String *in_RDX;
               Object *pOVar3;
               long in_FS_OFFSET;
               undefined8 local_60;
               Object *local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (( *(long*)in_RDX != 0 ) && ( 1 < *(uint*)( *(long*)in_RDX + -8 ) )) {
                  local_60 = 0;
                  local_50 = 0;
                  local_58 = (Object*)&_LC16;
                  String::parse_latin1((StrRange*)&local_60);
                  cVar1 = ResourceLoader::exists(in_RDX, (String*)&local_60);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  if (cVar1 != '\0') {
                     local_58 = (Object*)&_LC16;
                     local_60 = 0;
                     local_50 = 0;
                     String::parse_latin1((StrRange*)&local_60);
                     ResourceLoader::load(&local_58);
                     if (local_58 != (Object*)0x0) {
                        pOVar2 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &Texture2D::typeinfo, 0);
                        if (pOVar2 == (Object*)0x0) {
                           cVar1 = RefCounted::unreference();
                           if (cVar1 != '\0') {
                              LAB_00107052:pOVar3 = local_58;
                              cVar1 = predelete_handler(local_58);
                              if (cVar1 != '\0') {
                                 LAB_00106f7a:( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                                 Memory::free_static(pOVar3, false);
                              }

                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                              if (pOVar2 == (Object*)0x0) goto LAB_00106fa0;
                              goto LAB_00106fe6;
                           }

                        }
 else {
                           cVar1 = RefCounted::reference();
                           if (cVar1 != '\0') {
                              if (( local_58 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),cVar1 != '\0') goto LAB_00107052;
                              CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                              LAB_00106fe6:*(Object**)param_1 = pOVar2;
                              cVar1 = RefCounted::reference();
                              if (cVar1 == '\0') {
                                 *(undefined8*)param_1 = 0;
                              }

                              cVar1 = RefCounted::unreference();
                              if (( cVar1 != '\0' ) && ( cVar1 = predelete_handler(pOVar2) ),cVar1 != '\0') {
                                 ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                                 Memory::free_static(pOVar2, false);
                              }

                              goto LAB_00106fa7;
                           }

                           if (( ( local_58 != (Object*)0x0 ) && ( cVar1 = RefCounted::unreference() ),pOVar3 = local_58,cVar1 != '\0' )) {
                              pOVar2 = (Object*)0x0;
                              goto LAB_00106f7a;
                           }

                        }

                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  }

               }

               LAB_00106fa0:*(undefined8*)param_1 = 0;
               LAB_00106fa7:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return param_1;
            }

            /* EditorData::extension_class_get_icon(String const&) const */
            String *EditorData::extension_class_get_icon(String *param_1) {
               char cVar1;
               String *pSVar2;
               long in_FS_OFFSET;
               String local_40[8];
               Object *local_38;
               long local_30;
               local_30 = *(long*)( in_FS_OFFSET + 0x28 );
               pSVar2 = (String*)GDExtensionManager::get_singleton();
               cVar1 = GDExtensionManager::class_has_icon_path(pSVar2);
               if (cVar1 != '\0') {
                  GDExtensionManager::get_singleton();
                  GDExtensionManager::class_get_icon_path(local_40);
                  _load_script_icon((String*)&local_38);
                  if (local_38 != (Object*)0x0) {
                     *(Object**)param_1 = local_38;
                     cVar1 = RefCounted::reference();
                     if (cVar1 == '\0') {
                        *(undefined8*)param_1 = 0;
                     }

                     cVar1 = RefCounted::unreference();
                     if (cVar1 != '\0') {
                        cVar1 = predelete_handler(local_38);
                        if (cVar1 != '\0') {
                           ( **(code**)( *(long*)local_38 + 0x140 ) )(local_38);
                           Memory::free_static(local_38, false);
                        }

                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)local_40);
                     goto LAB_00107117;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)local_40);
               }

               *(undefined8*)param_1 = 0;
               LAB_00107117:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return param_1;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::script_class_set_icon_path(String const&, String const&) */
            void EditorData::script_class_set_icon_path(EditorData *this, String *param_1, String *param_2) {
               CowData<char32_t> *this_00;
               long in_FS_OFFSET;
               long local_28;
               long local_20;
               local_20 = *(long*)( in_FS_OFFSET + 0x28 );
               StringName::StringName((StringName*)&local_28, param_1, false);
               this_00 = (CowData<char32_t>*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)( this + 0xd8 ), (StringName*)&local_28);
               if (*(long*)this_00 != *(long*)param_2) {
                  CowData<char32_t>::_ref(this_00, (CowData*)param_2);
               }

               if (( StringName::configured != '\0' ) && ( local_28 != 0 )) {
                  StringName::unref();
               }

               if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::set_editor_plugin_states(Dictionary const&) */
            void EditorData::set_editor_plugin_states(EditorData *this, Dictionary *param_1) {
               long *plVar1;
               long lVar2;
               code *pcVar3;
               char cVar4;
               undefined8 *puVar5;
               undefined8 *puVar6;
               long lVar7;
               long lVar8;
               long lVar9;
               long in_FS_OFFSET;
               long *local_70;
               long local_68;
               long local_60;
               int local_58[6];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               cVar4 = Dictionary::is_empty();
               if (cVar4 == '\0') {
                  local_70 = (long*)0x0;
                  Dictionary::get_key_list((List*)param_1);
                  if (( local_70 != (long*)0x0 ) && ( lVar8 = lVar8 != 0 )) {
                     do {
                        Variant::operator_cast_to_String((Variant*)&local_68);
                        lVar2 = *(long*)( this + 8 );
                        for (lVar9 = 0; ( lVar2 != 0 && ( lVar9 < *(long*)( lVar2 + -8 ) ) ); lVar9 = lVar9 + 1) {
                           ( **(code**)( **(long**)( lVar2 + lVar9 * 8 ) + 0x1e8 ) )((String*)&local_60);
                           cVar4 = String::operator ==((String*)&local_60, (String*)&local_68);
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

                           if (cVar4 != '\0') {
                              lVar2 = *(long*)( this + 8 );
                              lVar9 = (long)(int)lVar9;
                              if (lVar2 == 0) {
                                 lVar7 = 0;
                              }
 else {
                                 lVar7 = *(long*)( lVar2 + -8 );
                                 if (lVar9 < lVar7) {
                                    plVar1 = *(long**)( lVar2 + lVar9 * 8 );
                                    pcVar3 = *(code**)( *plVar1 + 0x240 );
                                    Variant::Variant((Variant*)local_58, (String*)&local_68);
                                    Dictionary::operator []((Variant*)param_1);
                                    Variant::operator_cast_to_Dictionary((Variant*)&local_60);
                                    ( *pcVar3 )(plVar1);
                                    Dictionary::~Dictionary((Dictionary*)&local_60);
                                    if (Variant::needs_deinit[local_58[0]] != '\0') {
                                       Variant::_clear_internal();
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

                                    lVar8 = *(long*)( lVar8 + 0x18 );
                                    goto joined_r0x0010740f;
                                 }

                              }

                              _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar7, "p_index", "size()", "", false, true);
                              _err_flush_stdout();
                              /* WARNING: Does not return */
                              pcVar3 = (code*)invalidInstructionException();
                              ( *pcVar3 )();
                           }

                           lVar2 = *(long*)( this + 8 );
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        lVar8 = *(long*)( lVar8 + 0x18 );
                        joined_r0x0010740f:;
                     }
 while ( lVar8 != 0 );
                  }

                  List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_70);
               }
 else {
                  CowData<EditorPlugin*>::_copy_on_write((CowData<EditorPlugin*>*)( this + 8 ));
                  puVar5 = *(undefined8**)( this + 8 );
                  CowData<EditorPlugin*>::_copy_on_write((CowData<EditorPlugin*>*)( this + 8 ));
                  puVar6 = *(undefined8**)( this + 8 );
                  if (puVar6 != (undefined8*)0x0) {
                     puVar6 = puVar6 + puVar6[-1];
                  }

                  for (; puVar5 != puVar6; puVar5 = puVar5 + 1) {
                     ( **(code**)( *(long*)*puVar5 + 0x248 ) )();
                  }

               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::script_class_load_icon_paths() */
            void EditorData::script_class_load_icon_paths(EditorData *this) {
               long *plVar1;
               uint uVar2;
               void *pvVar3;
               char cVar4;
               byte bVar5;
               int iVar6;
               String *pSVar7;
               CowData<char32_t> *pCVar8;
               StringName *pSVar9;
               long lVar10;
               int iVar11;
               long in_FS_OFFSET;
               Variant local_c8[8];
               long *local_c0;
               Variant local_b8[8];
               long local_b0;
               char *local_a8;
               undefined8 local_a0;
               int local_98[8];
               int local_78[8];
               int local_58[6];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (( *(long*)( this + 0xe0 ) != 0 ) && ( *(int*)( this + 0x104 ) != 0 )) {
                  uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x100 ) * 4 );
                  if (uVar2 != 0) {
                     lVar10 = 0;
                     do {
                        if (*(int*)( *(long*)( this + 0xe8 ) + lVar10 ) != 0) {
                           *(int*)( *(long*)( this + 0xe8 ) + lVar10 ) = 0;
                           pvVar3 = *(void**)( *(long*)( this + 0xe0 ) + lVar10 * 2 );
                           CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x18 ));
                           if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                              StringName::unref();
                           }

                           Memory::free_static(pvVar3, false);
                           *(undefined8*)( *(long*)( this + 0xe0 ) + lVar10 * 2 ) = 0;
                        }

                        lVar10 = lVar10 + 4;
                     }
 while ( lVar10 != (ulong)uVar2 << 2 );
                  }

                  *(undefined4*)( this + 0x104 ) = 0;
                  *(undefined1(*) [16])( this + 0xf0 ) = (undefined1[16])0x0;
               }

               pSVar7 = (String*)ProjectSettings::get_singleton();
               local_b0 = 0;
               local_a0 = 0x1a;
               local_a8 = "_global_script_class_icons";
               String::parse_latin1((StrRange*)&local_b0);
               cVar4 = ProjectSettings::has_setting(pSVar7);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               if (cVar4 != '\0') {
                  ProjectSettings::get_singleton();
                  StringName::StringName((StringName*)&local_a8, "_global_script_class_icons", false);
                  ProjectSettings::get_setting_with_override((StringName*)local_58);
                  Variant::operator_cast_to_Dictionary(local_c8);
                  if (Variant::needs_deinit[local_58[0]] != '\0') {
                     Variant::_clear_internal();
                  }

                  if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
                     StringName::unref();
                  }

                  local_c0 = (long*)0x0;
                  Dictionary::get_key_list((List*)local_c8);
                  if (( local_c0 != (long*)0x0 ) && ( lVar10 = lVar10 != 0 )) {
                     do {
                        Variant::operator_cast_to_String(local_b8);
                        Variant::Variant((Variant*)local_58, (String*)local_b8);
                        Dictionary::operator [](local_c8);
                        Variant::operator_cast_to_String((Variant*)&local_a8);
                        StringName::StringName((StringName*)&local_b0, (String*)local_b8, false);
                        pCVar8 = (CowData<char32_t>*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)( this + 0xd8 ), (StringName*)&local_b0);
                        if (*(char**)pCVar8 != local_a8) {
                           CowData<char32_t>::_unref(pCVar8);
                           *(char**)pCVar8 = local_a8;
                           local_a8 = (char*)0x0;
                        }

                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        ScriptServer::get_global_class_path((String*)&local_b0);
                        StringName::StringName((StringName*)&local_a8, (String*)local_b8, false);
                        pSVar9 = (StringName*)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>::operator []((HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>*)( this + 0x108 ), (String*)&local_b0);
                        StringName::operator =(pSVar9, (StringName*)&local_a8);
                        if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
                        lVar10 = *(long*)( lVar10 + 0x18 );
                     }
 while ( lVar10 != 0 );
                  }

                  pSVar7 = (String*)ProjectSettings::get_singleton();
                  local_b0 = 0;
                  local_a0 = 0x1a;
                  local_a8 = "_global_script_class_icons";
                  String::parse_latin1((StrRange*)&local_b0);
                  ProjectSettings::clear(pSVar7);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
                  List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_c0);
                  Dictionary::~Dictionary((Dictionary*)local_c8);
               }

               iVar11 = 0;
               ProjectSettings::get_singleton();
               ProjectSettings::get_global_class_list();
               Array::Array((Array*)local_c8, (Array*)&local_a8);
               Array::~Array((Array*)&local_a8);
               do {
                  iVar6 = Array::size();
                  if (iVar6 <= iVar11) {
                     Array::~Array((Array*)local_c8);
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        return;
                     }

                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  Array::operator []((int)local_c8);
                  Variant::operator_cast_to_Dictionary((Variant*)&local_c0);
                  Variant::Variant((Variant*)local_98, "class");
                  bVar5 = Dictionary::has((Variant*)&local_c0);
                  if (bVar5 == 0) {
                     if (Variant::needs_deinit[local_98[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                  }
 else {
                     Variant::Variant((Variant*)local_78, "path");
                     cVar4 = Dictionary::has((Variant*)&local_c0);
                     if (cVar4 == '\0') {
                        LAB_0010771a:if (Variant::needs_deinit[local_78[0]] == '\0') goto LAB_0010772d;
                        LAB_00107950:Variant::_clear_internal();
                        cVar4 = Variant::needs_deinit[local_98[0]];
                     }
 else {
                        Variant::Variant((Variant*)local_58, "icon");
                        bVar5 = Dictionary::has((Variant*)&local_c0);
                        bVar5 = bVar5 ^ 1;
                        if (Variant::needs_deinit[local_58[0]] == '\0') goto LAB_0010771a;
                        Variant::_clear_internal();
                        if (Variant::needs_deinit[local_78[0]] != '\0') goto LAB_00107950;
                        LAB_0010772d:cVar4 = Variant::needs_deinit[local_98[0]];
                     }

                     if (cVar4 != '\0') {
                        Variant::_clear_internal();
                     }

                     if (bVar5 == 0) {
                        Variant::Variant((Variant*)local_58, "class");
                        Dictionary::operator []((Variant*)&local_c0);
                        Variant::operator_cast_to_String(local_b8);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        Variant::Variant((Variant*)local_58, "icon");
                        Dictionary::operator []((Variant*)&local_c0);
                        Variant::operator_cast_to_String((Variant*)&local_a8);
                        StringName::StringName((StringName*)&local_b0, (String*)local_b8, false);
                        pCVar8 = (CowData<char32_t>*)HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator []((HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>*)( this + 0xd8 ), (StringName*)&local_b0);
                        if (*(char**)pCVar8 != local_a8) {
                           CowData<char32_t>::_unref(pCVar8);
                           *(char**)pCVar8 = local_a8;
                           local_a8 = (char*)0x0;
                        }

                        if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        StringName::StringName((StringName*)&local_a8, (String*)local_b8, false);
                        Variant::Variant((Variant*)local_58, "path");
                        Dictionary::operator []((Variant*)&local_c0);
                        Variant::operator_cast_to_String((Variant*)&local_b0);
                        pSVar9 = (StringName*)HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>::operator []((HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>*)( this + 0x108 ), (String*)&local_b0);
                        StringName::operator =(pSVar9, (StringName*)&local_a8);
                        lVar10 = local_b0;
                        if (local_b0 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_b0 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_b0 = 0;
                              Memory::free_static((void*)( lVar10 + -0x10 ), false);
                           }

                        }

                        if (Variant::needs_deinit[local_58[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (( StringName::configured != '\0' ) && ( local_a8 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
                     }

                  }

                  iVar11 = iVar11 + 1;
                  Dictionary::~Dictionary((Dictionary*)&local_c0);
               }
 while ( true );
            }

            /* EditorData::EditorData() */
            void EditorData::EditorData(EditorData *this) {
               undefined8 uVar1;
               undefined8 uVar2;
               EditorUndoRedoManager *this_00;
               uVar1 = _LC40;
               *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
               uVar2 = _LC85;
               *(undefined8*)( this + 8 ) = 0;
               *(undefined8*)( this + 0xd0 ) = uVar2;
               *(undefined8*)( this + 0x38 ) = uVar1;
               *(undefined8*)( this + 0x68 ) = uVar1;
               *(undefined8*)( this + 0x70 ) = 0;
               *(undefined8*)( this + 0x88 ) = 0;
               *(undefined8*)( this + 0xb8 ) = uVar1;
               *(undefined8*)( this + 200 ) = 0;
               for (int i = 0; i < 3; i++) {
                  *(undefined8*)( this + ( 48*i + 256 ) ) = uVar1;
               }

               *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x48 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xe0 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0xf0 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x110 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x120 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x140 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x150 ) = (undefined1[16])0x0;
               this_00 = (EditorUndoRedoManager*)operator_new(0x1d0, "");
               EditorUndoRedoManager::EditorUndoRedoManager(this_00);
               postinitialize_handler((Object*)this_00);
               *(EditorUndoRedoManager**)( this + 0x78 ) = this_00;
               script_class_load_icon_paths(this);
               return;
            }

            /* EditorData::copy_object_params(Object*) */
            void EditorData::copy_object_params(EditorData *this, Object *param_1) {
               String *this_00;
               long lVar1;
               undefined8 uVar2;
               long *plVar3;
               char cVar4;
               CowData<char32_t> *pCVar5;
               undefined1(*pauVar6)[16];
               undefined8 *puVar7;
               long in_FS_OFFSET;
               long *local_98;
               long local_90;
               int local_88[8];
               long local_68;
               int local_60[2];
               undefined1 local_58[16];
               long local_40;
               puVar7 = *(undefined8**)( this + 0x70 );
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (puVar7 != (undefined8*)0x0) {
                  do {
                     pCVar5 = (CowData<char32_t>*)*puVar7;
                     if (pCVar5 == (CowData<char32_t>*)0x0) goto LAB_00107e52;
                     if (puVar7 == *(undefined8**)( pCVar5 + 0x30 )) {
                        *puVar7 = *(undefined8*)( pCVar5 + 0x20 );
                        if (pCVar5 == (CowData<char32_t>*)puVar7[1]) {
                           puVar7[1] = *(undefined8*)( pCVar5 + 0x28 );
                        }

                        if (*(long*)( pCVar5 + 0x28 ) != 0) {
                           *(undefined8*)( *(long*)( pCVar5 + 0x28 ) + 0x20 ) = *(undefined8*)( pCVar5 + 0x20 );
                        }

                        if (*(long*)( pCVar5 + 0x20 ) != 0) {
                           *(undefined8*)( *(long*)( pCVar5 + 0x20 ) + 0x28 ) = *(undefined8*)( pCVar5 + 0x28 );
                        }

                        if (Variant::needs_deinit[*(int*)( pCVar5 + 8 )] != '\0') {
                           Variant::_clear_internal();
                        }

                        CowData<char32_t>::_unref(pCVar5);
                        Memory::free_static(pCVar5, false);
                        *(int*)( puVar7 + 2 ) = *(int*)( puVar7 + 2 ) + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     puVar7 = *(undefined8**)( this + 0x70 );
                  }
 while ( *(int*)( puVar7 + 2 ) != 0 );
                  Memory::free_static(puVar7, false);
                  *(undefined8*)( this + 0x70 ) = 0;
               }

               LAB_00107e52:local_98 = (long*)0x0;
               Object::get_property_list((List*)param_1, SUB81((List<PropertyInfo,DefaultAllocator>*)&local_98, 0));
               if (local_98 != (long*)0x0) {
                  for (lVar1 = *local_98; lVar1 != 0; lVar1 = *(long*)( lVar1 + 0x30 )) {
                     if (( *(byte*)( lVar1 + 0x28 ) & 4 ) != 0) {
                        this_00 = (String*)( lVar1 + 8 );
                        cVar4 = String::operator ==(this_00, "script");
                        if (( ( cVar4 == '\0' ) && ( cVar4 = String::operator ==(this_00, "scripts") ),cVar4 == '\0' )) {
                           local_60[0] = 0;
                           local_58 = (undefined1[16])0x0;
                           local_68 = 0;
                           if (*(long*)( lVar1 + 8 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)this_00);
                           }

                           StringName::StringName((StringName*)&local_90, (String*)&local_68, false);
                           Object::get((StringName*)local_88, (bool*)param_1);
                           if (Variant::needs_deinit[local_60[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           local_60[0] = local_88[0];
                           if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
                              StringName::unref();
                           }

                           if (*(long*)( this + 0x70 ) == 0) {
                              pauVar6 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                              *(undefined1(**) [16])( this + 0x70 ) = pauVar6;
                              *(undefined4*)pauVar6[1] = 0;
                              *pauVar6 = (undefined1[16])0x0;
                           }

                           pCVar5 = (CowData<char32_t>*)operator_new(0x38, DefaultAllocator::alloc);
                           *(undefined8*)pCVar5 = 0;
                           *(undefined1(*) [16])( pCVar5 + 0x10 ) = (undefined1[16])0x0;
                           *(undefined4*)( pCVar5 + 8 ) = 0;
                           *(undefined8*)( pCVar5 + 0x30 ) = 0;
                           *(undefined1(*) [16])( pCVar5 + 0x20 ) = (undefined1[16])0x0;
                           if (local_68 != 0) {
                              CowData<char32_t>::_ref(pCVar5, (CowData*)&local_68);
                           }

                           Variant::operator =((Variant*)( pCVar5 + 8 ), (Variant*)local_60);
                           uVar2 = *(undefined8*)( *(long*)( this + 0x70 ) + 8 );
                           *(long*)( pCVar5 + 0x30 ) = *(long*)( this + 0x70 );
                           plVar3 = *(long**)( this + 0x70 );
                           *(undefined8*)( pCVar5 + 0x20 ) = 0;
                           *(undefined8*)( pCVar5 + 0x28 ) = uVar2;
                           if (plVar3[1] != 0) {
                              *(CowData<char32_t>**)( plVar3[1] + 0x20 ) = pCVar5;
                           }

                           plVar3[1] = (long)pCVar5;
                           if (*plVar3 == 0) {
                              *plVar3 = (long)pCVar5;
                           }

                           *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
                           if (Variant::needs_deinit[local_60[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        }

                     }

                  }

               }

               List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_98);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::instantiate_object_properties(Object*) */
            void EditorData::instantiate_object_properties(EditorData *this, Object *param_1) {
               long *plVar1;
               long lVar2;
               Object *pOVar3;
               int *piVar4;
               long in_FS_OFFSET;
               undefined8 *local_98;
               long local_90;
               int local_88;
               long local_80;
               long local_78;
               int local_70;
               long local_68;
               uint local_60;
               int local_58[6];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (param_1 == (Object*)0x0) {
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     _err_print_error("instantiate_object_properties", "editor/editor_data.cpp", 600, "Parameter \"p_object\" is null.", 0, 0);
                     return;
                  }

               }
 else {
                  local_98 = (undefined8*)0x0;
                  Object::get_property_list((List*)param_1, SUB81(&local_98, 0));
                  if (( local_98 != (undefined8*)0x0 ) && ( piVar4 = (int*)*local_98 ),piVar4 != (int*)0x0) {
                     do {
                        local_88 = *piVar4;
                        local_80 = 0;
                        if (*(long*)( piVar4 + 2 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_80, (CowData*)( piVar4 + 2 ));
                        }

                        StringName::StringName((StringName*)&local_78, (StringName*)( piVar4 + 4 ));
                        local_70 = piVar4[6];
                        local_68 = 0;
                        if (*(long*)( piVar4 + 8 ) != 0) {
                           CowData<char32_t>::_ref((CowData<char32_t>*)&local_68, (CowData*)( piVar4 + 8 ));
                        }

                        local_60 = piVar4[10];
                        if (( local_88 == 0x18 ) && ( ( local_60 & 0x4000000 ) != 0 )) {
                           pOVar3 = (Object*)ClassDB::instantiate((StringName*)&local_78);
                           Variant::Variant((Variant*)local_58, pOVar3);
                           StringName::StringName((StringName*)&local_90, (String*)&local_80, false);
                           Object::set((StringName*)param_1, (Variant*)&local_90, (bool*)local_58);
                           if (( StringName::configured != '\0' ) && ( local_90 != 0 )) {
                              StringName::unref();
                           }

                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

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

                        if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                           StringName::unref();
                        }

                        lVar2 = local_80;
                        if (local_80 != 0) {
                           LOCK();
                           plVar1 = (long*)( local_80 + -0x10 );
                           *plVar1 = *plVar1 + -1;
                           UNLOCK();
                           if (*plVar1 == 0) {
                              local_80 = 0;
                              Memory::free_static((void*)( lVar2 + -0x10 ), false);
                           }

                        }

                        piVar4 = *(int**)( piVar4 + 0xc );
                     }
 while ( piVar4 != (int*)0x0 );
                  }

                  List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)&local_98);
                  if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                     return;
                  }

               }

               /* WARNING: Subroutine does not return */
               __stack_chk_fail();
            }

            /* EditorData::get_script_icon(String const&) */
            String *EditorData::get_script_icon(String *param_1) {
               HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>> *this;
               uint uVar1;
               undefined1 auVar2[16];
               undefined1 auVar3[16];
               undefined1 auVar4[16];
               undefined1 auVar5[16];
               undefined1 auVar6[16];
               undefined1 auVar7[16];
               undefined1 auVar8[16];
               undefined1 auVar9[16];
               ulong uVar10;
               Ref *pRVar11;
               char cVar12;
               uint uVar13;
               int iVar14;
               long *plVar15;
               Object *pOVar16;
               Object *pOVar17;
               long lVar18;
               Ref<Texture> *pRVar19;
               uint uVar20;
               String *in_RDX;
               long lVar21;
               EditorData *in_RSI;
               long lVar22;
               Object *pOVar23;
               uint uVar24;
               long in_FS_OFFSET;
               long local_78;
               Object *local_70;
               String local_68;
               undefined7 uStack_67;
               Ref *local_60;
               Object *local_58;
               size_t local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               this(HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>> * )(in_RSI + 0x138);
               if (( *(long*)( in_RSI + 0x140 ) != 0 ) && ( *(int*)( in_RSI + 0x164 ) != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 0x160 ) * 4 );
                  lVar18 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 0x160 ) * 8 );
                  uVar13 = String::hash();
                  uVar10 = CONCAT44(0, uVar1);
                  lVar22 = *(long*)( in_RSI + 0x148 );
                  uVar20 = 1;
                  if (uVar13 != 0) {
                     uVar20 = uVar13;
                  }

                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = (ulong)uVar20 * lVar18;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar10;
                  lVar21 = SUB168(auVar2 * auVar6, 8);
                  uVar13 = *(uint*)( lVar22 + lVar21 * 4 );
                  iVar14 = SUB164(auVar2 * auVar6, 8);
                  if (uVar13 != 0) {
                     uVar24 = 0;
                     do {
                        if (uVar20 == uVar13) {
                           cVar12 = String::operator ==((String*)( *(long*)( *(long*)( in_RSI + 0x140 ) + lVar21 * 8 ) + 0x10 ), in_RDX);
                           if (cVar12 != '\0') {
                              plVar15 = (long*)HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>>::operator [](this, in_RDX);
                              lVar18 = *plVar15;
                              *(undefined8*)param_1 = 0;
                              if (( lVar18 != 0 ) && ( lVar18 = __dynamic_cast(lVar18, &Object::typeinfo, &Texture2D::typeinfo, 0) ),lVar18 != 0) {
                                 *(long*)param_1 = lVar18;
                                 cVar12 = RefCounted::reference();
                                 if (cVar12 == '\0') {
                                    *(undefined8*)param_1 = 0;
                                 }

                              }

                              goto LAB_0010851b;
                           }

                           lVar22 = *(long*)( in_RSI + 0x148 );
                        }

                        uVar24 = uVar24 + 1;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = ( ulong )(iVar14 + 1) * lVar18;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = uVar10;
                        lVar21 = SUB168(auVar3 * auVar7, 8);
                        uVar13 = *(uint*)( lVar22 + lVar21 * 4 );
                        iVar14 = SUB164(auVar3 * auVar7, 8);
                     }
 while ( ( uVar13 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar13 * lVar18,auVar8._8_8_ = 0,auVar8._0_8_ = uVar10,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( uVar1 + iVar14 ) - SUB164(auVar4 * auVar8, 8)) * lVar18,auVar9._8_8_ = 0,auVar9._0_8_ = uVar10,uVar24 <= SUB164(auVar5 * auVar9, 8) );
                  }

               }

               script_class_get_name((String*)&local_78);
               if (local_78 != 0) {
                  local_68 = (String)0x0;
                  local_58 = (Object*)0x0;
                  if (*(char**)( local_78 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_78 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( local_78 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1((String*)&local_58, *(char**)( local_78 + 8 ));
                  }

                  script_class_get_icon_path((String*)&local_60, (bool*)in_RSI);
                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                  if (local_68 != (String)0x0) {
                     _load_script_icon((String*)&local_58);
                     plVar15 = (long*)HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>>::operator [](this, in_RDX);
                     pOVar17 = local_58;
                     if (local_58 == (Object*)0x0) {
                        pOVar23 = (Object*)*plVar15;
                        if (pOVar23 != (Object*)0x0) {
                           *plVar15 = 0;
                           LAB_00108bda:cVar12 = RefCounted::unreference();
                           if (( cVar12 != '\0' ) && ( cVar12 = predelete_handler(pOVar23) ),cVar12 != '\0') {
                              ( **(code**)( *(long*)pOVar23 + 0x140 ) )(pOVar23);
                              Memory::free_static(pOVar23, false);
                           }

                        }

                     }
 else {
                        pOVar16 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &Texture::typeinfo, 0);
                        pOVar23 = (Object*)*plVar15;
                        if (pOVar23 != pOVar16) {
                           *plVar15 = (long)pOVar16;
                           if (( pOVar16 != (Object*)0x0 ) && ( cVar12 = RefCounted::reference() ),cVar12 == '\0') {
                              *plVar15 = 0;
                           }

                           if (pOVar23 != (Object*)0x0) goto LAB_00108bda;
                        }

                     }

                     *(undefined8*)param_1 = 0;
                     Ref<Texture2D>::operator =((Ref<Texture2D>*)param_1, (Ref*)pOVar17);
                     Ref<Texture2D>::unref((Ref<Texture2D>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     goto LAB_00108500;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               }

               local_60 = (Ref*)0x0;
               String::parse_latin1((String*)&local_60, "Script");
               ResourceLoader::load((CowData<char32_t>*)&local_58, in_RDX, (String*)&local_60, 1, 0);
               if (local_58 == (Object*)0x0) {
                  LAB_00108a80:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
               }
 else {
                  pOVar17 = (Object*)__dynamic_cast(local_58, &Object::typeinfo, &Script::typeinfo, 0);
                  if (pOVar17 == (Object*)0x0) {
                     LAB_00108734:cVar12 = RefCounted::unreference();
                     if (cVar12 != '\0') {
                        LAB_0010894d:pOVar23 = local_58;
                        cVar12 = predelete_handler(local_58);
                        if (cVar12 != '\0') {
                           ( **(code**)( *(long*)pOVar23 + 0x140 ) )(pOVar23);
                           Memory::free_static(pOVar23, false);
                        }

                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     if (pOVar17 == (Object*)0x0) goto LAB_00108a88;
                  }
 else {
                     cVar12 = RefCounted::reference();
                     if (cVar12 == '\0') {
                        if (( local_58 == (Object*)0x0 ) || ( cVar12 = RefCounted::unreference() ),cVar12 == '\0') goto LAB_00108a80;
                        pOVar17 = (Object*)0x0;
                        goto LAB_0010894d;
                     }

                     if (local_58 != (Object*)0x0) goto LAB_00108734;
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                  }

                  do {
                     local_70 = (Object*)0x0;
                     Resource::get_path();
                     script_class_get_name(&local_68);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     if (( *(long*)( pOVar17 + 0x188 ) == 0 ) || ( *(uint*)( *(long*)( pOVar17 + 0x188 ) + -8 ) < 2 )) {
                        LAB_001087e1:( **(code**)( *(long*)pOVar17 + 0x240 ) )((CowData<char32_t>*)&local_58, pOVar17);
                        if (local_70 != local_58) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                           local_70 = local_58;
                           local_58 = (Object*)0x0;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     }
 else {
                        iVar14 = String::find((char*)( pOVar17 + 0x188 ), 0x1102f5);
                        if (( iVar14 != -1 ) || ( ( cVar12 = String::begins_with((char*)( pOVar17 + 0x188 )) ),cVar12 != '\0' || ( lVar18 = CONCAT71(uStack_67, local_68) ),lVar18 == 0 )) goto LAB_001087e1;
                        pOVar23 = *(Object**)( lVar18 + 8 );
                        if (pOVar23 == (Object*)0x0) {
                           local_60 = (Ref*)0x0;
                           if (*(long*)( lVar18 + 0x10 ) != 0) {
                              CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar18 + 0x10 ));
                           }

                        }
 else {
                           local_60 = (Ref*)0x0;
                           local_50 = strlen((char*)pOVar23);
                           local_58 = pOVar23;
                           String::parse_latin1((StrRange*)&local_60);
                        }

                        script_class_get_icon_path((String*)&local_58, (bool*)in_RSI);
                        pOVar23 = local_58;
                        if (local_70 != local_58) {
                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                           local_70 = pOVar23;
                           local_58 = (Object*)0x0;
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
                     }

                     _load_script_icon((String*)&local_60);
                     pRVar11 = local_60;
                     if (local_60 != (Ref*)0x0) {
                        pRVar19 = (Ref<Texture>*)HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>>::operator [](this, in_RDX);
                        Ref<Texture>::operator =(pRVar19, pRVar11);
                        *(undefined8*)param_1 = 0;
                        Ref<Texture2D>::operator =((Ref<Texture2D>*)param_1, pRVar11);
                        LAB_00108b5e:Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
                        if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_67, local_68) != 0 )) {
                           StringName::unref();
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                        cVar12 = RefCounted::unreference();
                        if (( cVar12 != '\0' ) && ( cVar12 = predelete_handler(pOVar17) ),cVar12 != '\0') {
                           ( **(code**)( *(long*)pOVar17 + 0x140 ) )(pOVar17);
                           Memory::free_static(pOVar17, false);
                        }

                        goto LAB_00108500;
                     }

                     Resource::get_path();
                     lVar18 = get_custom_type_by_path(in_RSI, (String*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     if (( lVar18 != 0 ) && ( *(long*)( lVar18 + 0x10 ) != 0 )) {
                        pRVar19 = (Ref<Texture>*)HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>>::operator [](this, in_RDX);
                        Ref<Texture>::operator =(pRVar19, *(Ref**)( lVar18 + 0x10 ));
                        *(undefined8*)param_1 = 0;
                        Ref<Texture2D>::operator =((Ref<Texture2D>*)param_1, *(Ref**)( lVar18 + 0x10 ));
                        goto LAB_00108b5e;
                     }

                     ( **(code**)( *(long*)pOVar17 + 0x1d8 ) )((CowData<char32_t>*)&local_58);
                     pOVar23 = local_58;
                     if (local_58 == pOVar17) {
                        LAB_001088c8:cVar12 = RefCounted::unreference();
                        pOVar23 = local_58;
                        if (( cVar12 != '\0' ) && ( cVar12 = predelete_handler(local_58) ),cVar12 != '\0') {
                           ( **(code**)( *(long*)pOVar23 + 0x140 ) )(pOVar23);
                           Memory::free_static(pOVar23, false);
                        }

                     }
 else {
                        if (local_58 == (Object*)0x0) {
                           LAB_001088a7:pOVar16 = pOVar23;
                        }
 else {
                           cVar12 = RefCounted::reference();
                           pOVar16 = (Object*)0x0;
                           if (cVar12 != '\0') goto LAB_001088a7;
                        }

                        cVar12 = RefCounted::unreference();
                        if (( cVar12 != '\0' ) && ( cVar12 = predelete_handler(pOVar17) ),cVar12 != '\0') {
                           ( **(code**)( *(long*)pOVar17 + 0x140 ) )(pOVar17);
                           Memory::free_static(pOVar17, false);
                        }

                        pOVar17 = pOVar16;
                        if (local_58 != (Object*)0x0) goto LAB_001088c8;
                     }

                     if (( StringName::configured != '\0' ) && ( CONCAT71(uStack_67, local_68) != 0 )) {
                        StringName::unref();
                     }

                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
                  }
 while ( pOVar17 != (Object*)0x0 );
               }

               LAB_00108a88:if (local_78 == 0) {
                  local_58 = (Object*)0x0;
               }
 else {
                  local_58 = (Object*)0x0;
                  if (*(char**)( local_78 + 8 ) == (char*)0x0) {
                     if (*(long*)( local_78 + 0x10 ) != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)( local_78 + 0x10 ));
                     }

                  }
 else {
                     String::parse_latin1((String*)&local_58, *(char**)( local_78 + 8 ));
                  }

               }

               extension_class_get_icon((String*)&local_60);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
               pRVar11 = local_60;
               if (local_60 == (Ref*)0x0) {
                  pRVar19 = (Ref<Texture>*)HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>>::operator [](this, in_RDX);
                  Ref<Texture>::operator =(pRVar19, (Ref*)0x0);
                  *(undefined8*)param_1 = 0;
               }
 else {
                  pRVar19 = (Ref<Texture>*)HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>>::operator [](this, in_RDX);
                  Ref<Texture>::operator =(pRVar19, pRVar11);
                  *(undefined8*)param_1 = 0;
                  Ref<Texture2D>::operator =((Ref<Texture2D>*)param_1, pRVar11);
               }

               Ref<Texture2D>::unref((Ref<Texture2D>*)&local_60);
               LAB_00108500:if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
                  StringName::unref();
               }

               LAB_0010851b:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return param_1;
            }

            /* EditorData::instantiate_custom_type(String const&, String const&) */
            String *EditorData::instantiate_custom_type(String *param_1, String *param_2) {
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
               ulong uVar20;
               char cVar21;
               bool bVar22;
               uint uVar23;
               Object *pOVar24;
               String *pSVar25;
               String *in_RCX;
               uint uVar26;
               uint uVar27;
               String *in_RDX;
               long lVar28;
               long lVar29;
               uint uVar30;
               long lVar31;
               long in_FS_OFFSET;
               Object *local_88;
               uint local_80;
               undefined4 uStack_7c;
               int local_78[2];
               undefined8 local_70;
               undefined8 uStack_68;
               int local_58[6];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_80 = 0;
               cVar21 = HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>::_lookup_pos((HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>*)( param_2 + 0x40 ), in_RCX, &local_80);
               if (cVar21 == '\0') {
                  LAB_00108dc5:*(undefined4*)param_1 = 0;
                  *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
                  LAB_00108dd4:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return param_1;
               }

               if (*(long*)( param_2 + 0x48 ) == 0) {
                  LAB_00108d93:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar19 = (code*)invalidInstructionException();
                  ( *pcVar19 )();
               }

               lVar31 = 0;
               LAB_00108d8b:if (*(int*)( param_2 + 0x6c ) != 0) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x68 ) * 4 );
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x68 ) * 8 );
                  uVar23 = String::hash();
                  uVar20 = CONCAT44(0, uVar1);
                  lVar29 = *(long*)( param_2 + 0x50 );
                  uVar26 = 1;
                  if (uVar23 != 0) {
                     uVar26 = uVar23;
                  }

                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = (ulong)uVar26 * lVar2;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar20;
                  lVar28 = SUB168(auVar3 * auVar11, 8);
                  uVar23 = *(uint*)( lVar29 + lVar28 * 4 );
                  uVar27 = SUB164(auVar3 * auVar11, 8);
                  if (uVar23 != 0) {
                     uVar30 = 0;
                     do {
                        if (uVar23 == uVar26) {
                           cVar21 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 0x48 ) + lVar28 * 8 ) + 0x10 ), in_RCX);
                           if (cVar21 != '\0') goto LAB_00108ef8;
                           lVar29 = *(long*)( param_2 + 0x50 );
                        }

                        uVar30 = uVar30 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(uVar27 + 1) * lVar2;
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar20;
                        lVar28 = SUB168(auVar4 * auVar12, 8);
                        uVar23 = *(uint*)( lVar29 + lVar28 * 4 );
                        uVar27 = SUB164(auVar4 * auVar12, 8);
                        if (( uVar23 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar23 * lVar2,auVar13._8_8_ = 0,auVar13._0_8_ = uVar20,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar27 ) - SUB164(auVar5 * auVar13, 8)) * lVar2,auVar14._8_8_ = 0,auVar14._0_8_ = uVar20,SUB164(auVar6 * auVar14, 8) < uVar30) break;
                     }
 while ( true );
                  }

               }

               goto LAB_00108d93;
               LAB_00108ef8:lVar2 = *(long*)( *(long*)( *(long*)( param_2 + 0x48 ) + (ulong)uVar27 * 8 ) + 0x20 );
               if (( lVar2 == 0 ) || ( *(long*)( lVar2 + -8 ) <= lVar31 )) goto LAB_00108dc5;
               if (( *(long*)( param_2 + 0x48 ) != 0 ) && ( *(int*)( param_2 + 0x6c ) != 0 )) {
                  uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x68 ) * 4 );
                  lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x68 ) * 8 );
                  uVar23 = String::hash();
                  uVar20 = CONCAT44(0, uVar1);
                  lVar29 = *(long*)( param_2 + 0x50 );
                  uVar26 = 1;
                  if (uVar23 != 0) {
                     uVar26 = uVar23;
                  }

                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar26 * lVar2;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar20;
                  lVar28 = SUB168(auVar7 * auVar15, 8);
                  uVar23 = *(uint*)( lVar29 + lVar28 * 4 );
                  uVar27 = SUB164(auVar7 * auVar15, 8);
                  if (uVar23 != 0) {
                     uVar30 = 0;
                     do {
                        if (uVar26 == uVar23) {
                           cVar21 = String::operator ==((String*)( *(long*)( *(long*)( param_2 + 0x48 ) + lVar28 * 8 ) + 0x10 ), in_RCX);
                           if (cVar21 != '\0') goto LAB_00109028;
                           lVar29 = *(long*)( param_2 + 0x50 );
                        }

                        uVar30 = uVar30 + 1;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = ( ulong )(uVar27 + 1) * lVar2;
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = uVar20;
                        lVar28 = SUB168(auVar8 * auVar16, 8);
                        uVar23 = *(uint*)( lVar29 + lVar28 * 4 );
                        uVar27 = SUB164(auVar8 * auVar16, 8);
                        if (( uVar23 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar23 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar20,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar1 + uVar27 ) - SUB164(auVar9 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar20,SUB164(auVar10 * auVar18, 8) < uVar30) break;
                     }
 while ( true );
                  }

               }

               goto LAB_00108d93;
               LAB_00109028:lVar2 = *(long*)( *(long*)( *(long*)( param_2 + 0x48 ) + (ulong)uVar27 * 8 ) + 0x20 );
               if (lVar2 == 0) {
                  lVar29 = 0;
               }
 else {
                  lVar29 = *(long*)( lVar2 + -8 );
                  if (lVar31 < lVar29) {
                     cVar21 = String::operator ==((String*)( lVar2 + lVar31 * 0x18 ), in_RDX);
                     if (cVar21 == '\0') {
                        lVar31 = lVar31 + 1;
                        if (*(long*)( param_2 + 0x48 ) == 0) goto LAB_00108d93;
                        goto LAB_00108d8b;
                     }

                     local_80 = 0;
                     cVar21 = HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>::_lookup_pos((HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>*)( param_2 + 0x40 ), in_RCX, &local_80);
                     if (cVar21 == '\0') goto LAB_00108d93;
                     lVar2 = *(long*)( *(long*)( *(long*)( param_2 + 0x48 ) + (ulong)local_80 * 8 ) + 0x20 );
                     if (lVar2 == 0) {
                        lVar29 = 0;
                     }
 else {
                        lVar29 = *(long*)( lVar2 + -8 );
                        if (lVar31 < lVar29) {
                           local_88 = (Object*)0x0;
                           pOVar24 = *(Object**)( lVar2 + 8 + lVar31 * 0x18 );
                           if (( pOVar24 != (Object*)0x0 ) && ( local_88 = pOVar24 ),cVar21 = RefCounted::reference(),cVar21 == '\0') {
                              local_88 = (Object*)0x0;
                           }

                           StringName::StringName((StringName*)&local_80, in_RCX, false);
                           pOVar24 = (Object*)ClassDB::instantiate((StringName*)&local_80);
                           Variant::Variant((Variant*)local_78, pOVar24);
                           if (( StringName::configured != '\0' ) && ( CONCAT44(uStack_7c, local_80) != 0 )) {
                              StringName::unref();
                           }

                           bVar22 = Variant::operator_cast_to_bool((Variant*)local_78);
                           if (bVar22) {
                              pOVar24 = Variant::operator_cast_to_Object_((Variant*)local_78);
                              if (( pOVar24 != (Object*)0x0 ) && ( pSVar25 = (String*)__dynamic_cast(pOVar24, &Object::typeinfo, &Node::typeinfo, 0) ),pSVar25 != (String*)0x0) {
                                 Node::set_name(pSVar25);
                              }

                              PropertyUtils::assign_custom_type_script(pOVar24, (Ref*)&local_88);
                              pcVar19 = *(code**)( *(long*)pOVar24 + 0x90 );
                              Variant::Variant((Variant*)local_58, local_88);
                              ( *pcVar19 )(pOVar24);
                              if (Variant::needs_deinit[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              *(int*)param_1 = local_78[0];
                              *(undefined8*)( param_1 + 8 ) = local_70;
                              *(undefined8*)( param_1 + 0x10 ) = uStack_68;
                           }
 else {
                              _err_print_error("instantiate_custom_type", "editor/editor_data.cpp", 0x21e, "Condition \"!v\" is true. Returning: Variant()", 0, 0);
                              *(undefined4*)param_1 = 0;
                              cVar21 = Variant::needs_deinit[local_78[0]];
                              *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
                              if (cVar21 != '\0') {
                                 Variant::_clear_internal();
                              }

                           }

                           if (( ( local_88 != (Object*)0x0 ) && ( cVar21 = RefCounted::unreference() ),pOVar24 = local_88,cVar21 != '\0' )) &&( cVar21 = cVar21 != '\0' )(**(code**)( *(long*)pOVar24 + 0x140 ))(pOVar24);
                           Memory::free_static(pOVar24, false);
                        }

                        goto LAB_00108dd4;
                     }

                  }

               }

            }

            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar31, lVar29, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar19 = (code*)invalidInstructionException();
            ( *pcVar19 )();
         }

         /* EditorSelection::_bind_methods() */
         void EditorSelection::_bind_methods(void) {
            long *plVar1;
            long lVar2;
            MethodBind *pMVar3;
            long in_FS_OFFSET;
            undefined8 local_f8;
            long local_f0;
            char *local_e8;
            undefined8 local_e0;
            char *local_d8;
            undefined8 local_d0;
            CowData<StringName> local_c8[8];
            long lStack_c0;
            undefined8 local_b8;
            undefined8 local_b0;
            undefined8 local_a8;
            undefined8 local_a0;
            undefined8 local_98[2];
            undefined8 local_88;
            undefined8 local_80;
            long local_70;
            undefined *local_68;
            undefined8 local_60;
            undefined **local_58;
            undefined1 local_50[16];
            long local_40;
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            D_METHODP((char*)&local_d8, (char***)"clear", 0);
            local_50 = (undefined1[16])0x0;
            local_58 = (undefined**)0x0;
            pMVar3 = create_method_bind<EditorSelection>(clear);
            ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            CowData<StringName>::_unref(local_c8);
            if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
               StringName::unref();
            }

            local_60 = 0;
            local_68 = &_LC95;
            local_58 = &local_68;
            D_METHODP((char*)&local_d8, (char***)"add_node", ( uint ) & local_58);
            local_50 = (undefined1[16])0x0;
            local_58 = (undefined**)0x0;
            pMVar3 = create_method_bind<EditorSelection,Node*>(add_node);
            ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            CowData<StringName>::_unref(local_c8);
            if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
               StringName::unref();
            }

            local_60 = 0;
            local_68 = &_LC95;
            local_58 = &local_68;
            D_METHODP((char*)&local_d8, (char***)"remove_node", ( uint ) & local_58);
            local_50 = (undefined1[16])0x0;
            local_58 = (undefined**)0x0;
            pMVar3 = create_method_bind<EditorSelection,Node*>(remove_node);
            ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            CowData<StringName>::_unref(local_c8);
            if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
               StringName::unref();
            }

            D_METHODP((char*)&local_d8, (char***)"get_selected_nodes", 0);
            local_50 = (undefined1[16])0x0;
            local_58 = (undefined**)0x0;
            pMVar3 = create_method_bind<EditorSelection,TypedArray<Node>>(get_selected_nodes);
            ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            CowData<StringName>::_unref(local_c8);
            if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
               StringName::unref();
            }

            D_METHODP((char*)&local_d8, (char***)"get_transformable_selected_nodes", 0);
            local_50 = (undefined1[16])0x0;
            local_58 = (undefined**)0x0;
            pMVar3 = create_method_bind<EditorSelection,TypedArray<Node>>(_get_transformable_selected_nodes);
            ClassDB::bind_methodfi(1, pMVar3, false, (MethodDefinition*)&local_d8, (Variant**)0x0, 0);
            if (Variant::needs_deinit[(int)local_58] != '\0') {
               Variant::_clear_internal();
            }

            CowData<StringName>::_unref(local_c8);
            if (( StringName::configured != '\0' ) && ( local_d8 != (char*)0x0 )) {
               StringName::unref();
            }

            local_f0 = 0;
            local_d8 = "selection_changed";
            local_d0 = 0x11;
            String::parse_latin1((StrRange*)&local_f0);
            local_d8 = (char*)0x0;
            local_d0 = 0;
            local_b8 = 0;
            local_b0 = 0;
            local_a8 = 6;
            local_a0 = 1;
            local_98[0] = 0;
            local_88 = 0;
            local_80 = 0;
            local_70 = 0;
            _local_c8 = (undefined1[16])0x0;
            if (local_f0 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_d8, (CowData*)&local_f0);
            }

            local_f8 = 0;
            local_e8 = "EditorSelection";
            local_e0 = 0xf;
            String::parse_latin1((StrRange*)&local_f8);
            StringName::StringName((StringName*)&local_e8, (String*)&local_f8, false);
            ClassDB::add_signal((StringName*)&local_e8, (MethodInfo*)&local_d8);
            if (( StringName::configured != '\0' ) && ( local_e8 != (char*)0x0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f8);
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

            CowData<Variant>::_unref((CowData<Variant>*)&local_88);
            List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
            if (( StringName::configured != '\0' ) && ( lStack_c0 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_d8);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_f0);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* EditorData::EditedScene::TEMPNAMEPLACEHOLDERVALUE(EditorData::EditedScene&&) [clone .isra.0] */
         void EditorData::EditedScene::operator =(EditedScene *this, EditedScene *param_1) {
            void *pvVar1;
            long lVar2;
            long lVar3;
            long *plVar4;
            *(undefined8*)this = *(undefined8*)param_1;
            if (*(long*)( this + 8 ) != *(long*)( param_1 + 8 )) {
               CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
               *(undefined8*)( this + 8 ) = *(undefined8*)( param_1 + 8 );
               *(undefined8*)( param_1 + 8 ) = 0;
            }

            *(undefined8*)( this + 0x10 ) = *(undefined8*)( param_1 + 0x10 );
            Dictionary::operator =((Dictionary*)( this + 0x18 ), (Dictionary*)( param_1 + 0x18 ));
            if (param_1 + 0x20 != this + 0x20) {
               plVar4 = *(long**)( this + 0x20 );
               if (plVar4 != (long*)0x0) {
                  do {
                     pvVar1 = (void*)*plVar4;
                     if (pvVar1 == (void*)0x0) goto LAB_0010991e;
                     if (*(long**)( (long)pvVar1 + 0x18 ) == plVar4) {
                        lVar3 = *(long*)( (long)pvVar1 + 8 );
                        lVar2 = *(long*)( (long)pvVar1 + 0x10 );
                        *plVar4 = lVar3;
                        if (pvVar1 == (void*)plVar4[1]) {
                           plVar4[1] = lVar2;
                        }

                        if (lVar2 != 0) {
                           *(long*)( lVar2 + 8 ) = lVar3;
                           lVar3 = *(long*)( (long)pvVar1 + 8 );
                        }

                        if (lVar3 != 0) {
                           *(long*)( lVar3 + 0x10 ) = lVar2;
                        }

                        Memory::free_static(pvVar1, false);
                        *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                     }

                     plVar4 = *(long**)( this + 0x20 );
                  }
 while ( (int)plVar4[2] != 0 );
                  Memory::free_static(plVar4, false);
                  *(undefined8*)( this + 0x20 ) = 0;
               }

               LAB_0010991e:*(undefined8*)( this + 0x20 ) = *(undefined8*)( param_1 + 0x20 );
               *(undefined8*)( param_1 + 0x20 ) = 0;
            }

            if (*(long*)( this + 0x30 ) != *(long*)( param_1 + 0x30 )) {
               CowData<EditorSelectionHistory::HistoryElement>::_unref((CowData<EditorSelectionHistory::HistoryElement>*)( this + 0x30 ));
               *(undefined8*)( this + 0x30 ) = *(undefined8*)( param_1 + 0x30 );
               *(undefined8*)( param_1 + 0x30 ) = 0;
            }

            *(undefined4*)( this + 0x38 ) = *(undefined4*)( param_1 + 0x38 );
            Dictionary::operator =((Dictionary*)( this + 0x40 ), (Dictionary*)( param_1 + 0x40 ));
            NodePath::operator =((NodePath*)( this + 0x48 ), (NodePath*)( param_1 + 0x48 ));
            *(undefined4*)( this + 0x50 ) = *(undefined4*)( param_1 + 0x50 );
            *(undefined8*)( this + 0x58 ) = *(undefined8*)( param_1 + 0x58 );
            return;
         }

         /* CowData<EditorSelectionHistory::HistoryElement>::_ref(CowData<EditorSelectionHistory::HistoryElement>
   const&) [clone .part.0] */
         void CowData<EditorSelectionHistory::HistoryElement>::_ref(CowData<EditorSelectionHistory::HistoryElement> *this, CowData *param_1) {
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

         /* EditorData::get_scene_editor_states(int) const */
         Dictionary *EditorData::get_scene_editor_states(int param_1) {
            long lVar1;
            undefined8 uVar2;
            undefined8 *puVar3;
            long lVar4;
            int in_EDX;
            undefined8 *puVar5;
            long in_RSI;
            undefined4 in_register_0000003c;
            Dictionary *this;
            long lVar6;
            undefined8 *puVar7;
            long in_FS_OFFSET;
            undefined8 local_98;
            undefined8 local_90;
            undefined8 local_88;
            Dictionary local_80[8];
            undefined1(*local_78)[16];
            undefined8 local_68;
            undefined4 local_60;
            Dictionary local_58[8];
            NodePath local_50[8];
            undefined4 local_48;
            undefined8 local_40;
            long local_30;
            this(Dictionary * CONCAT44(in_register_0000003c, param_1));
            lVar4 = (long)in_EDX;
            lVar1 = *(long*)( in_RSI + 200 );
            local_30 = *(long*)( in_FS_OFFSET + 0x28 );
            if (in_EDX < 0) {
               if (lVar1 == 0) goto LAB_00109c38;
               lVar6 = *(long*)( lVar1 + -8 );
            }
 else if (lVar1 == 0) {
               LAB_00109c38:lVar6 = 0;
            }
 else {
               lVar6 = *(long*)( lVar1 + -8 );
               if (lVar4 < lVar6) {
                  puVar5 = (undefined8*)( lVar1 + lVar4 * 0x60 );
                  local_98 = *puVar5;
                  local_90 = 0;
                  if (puVar5[1] != 0) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( puVar5 + 1 ));
                  }

                  local_88 = puVar5[2];
                  Dictionary::Dictionary(local_80, (Dictionary*)( puVar5 + 3 ));
                  local_78 = (undefined1(*) [16])0x0;
                  if (( (long*)puVar5[4] != (long*)0x0 ) && ( puVar7 = *(undefined8**)puVar5[4] ),puVar7 != (undefined8*)0x0) {
                     local_78 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined4*)local_78[1] = 0;
                     *local_78 = (undefined1[16])0x0;
                     do {
                        while (true) {
                           puVar3 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                           uVar2 = *puVar7;
                           puVar3[1] = 0;
                           *puVar3 = uVar2;
                           lVar1 = *(long*)( *local_78 + 8 );
                           puVar3[3] = local_78;
                           puVar3[2] = lVar1;
                           if (lVar1 != 0) {
                              *(undefined8**)( lVar1 + 8 ) = puVar3;
                           }

                           lVar1 = *(long*)*local_78;
                           *(undefined8**)( *local_78 + 8 ) = puVar3;
                           if (lVar1 != 0) break;
                           puVar7 = (undefined8*)puVar7[1];
                           *(int*)local_78[1] = *(int*)local_78[1] + 1;
                           *(undefined8**)*local_78 = puVar3;
                           if (puVar7 == (undefined8*)0x0) goto LAB_00109b5c;
                        }
;
                        puVar7 = (undefined8*)puVar7[1];
                        *(int*)local_78[1] = *(int*)local_78[1] + 1;
                     }
 while ( puVar7 != (undefined8*)0x0 );
                  }

                  LAB_00109b5c:local_68 = 0;
                  if (puVar5[6] != 0) {
                     CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)&local_68, (CowData*)( puVar5 + 6 ));
                  }

                  local_60 = *(undefined4*)( puVar5 + 7 );
                  Dictionary::Dictionary(local_58, (Dictionary*)( puVar5 + 8 ));
                  NodePath::NodePath(local_50, (NodePath*)( puVar5 + 9 ));
                  local_48 = *(undefined4*)( puVar5 + 10 );
                  local_40 = puVar5[0xb];
                  Dictionary::Dictionary(this, local_80);
                  EditedScene::~EditedScene((EditedScene*)&local_98);
                  goto LAB_00109bc3;
               }

            }

            _err_print_index_error("get_scene_editor_states", "editor/editor_data.cpp", 0x146, lVar4, lVar6, "p_idx", "edited_scene.size()", "", false, false);
            Dictionary::Dictionary(this);
            LAB_00109bc3:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return this;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* EditorSelectionHistory::clear() */
         void EditorSelectionHistory::clear(EditorSelectionHistory *this) {
            if (( *(long*)( this + 8 ) != 0 ) && ( *(long*)( *(long*)( this + 8 ) + -8 ) != 0 )) {
               CowData<EditorSelectionHistory::HistoryElement>::_unref((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ));
            }

            *(undefined4*)( this + 0x10 ) = 0xffffffff;
            return;
         }

         /* CowData<EditorSelectionHistory::_Object>::_ref(CowData<EditorSelectionHistory::_Object> const&)
   [clone .part.0] */
         void CowData<EditorSelectionHistory::_Object>::_ref(CowData<EditorSelectionHistory::_Object> *this, CowData *param_1) {
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

         /* CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write() [clone .isra.0] */
         void CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write(CowData<EditorSelectionHistory::HistoryElement> *this) {
            CowData<EditorSelectionHistory::_Object> *pCVar1;
            long lVar2;
            code *pcVar3;
            long lVar4;
            CowData<EditorSelectionHistory::_Object> *pCVar5;
            CowData<EditorSelectionHistory::_Object> *this_00;
            ulong uVar6;
            long lVar7;
            long lVar8;
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
            if (lVar2 * 0x18 != 0) {
               uVar6 = lVar2 * 0x18 - 1;
               uVar6 = uVar6 | uVar6 >> 1;
               uVar6 = uVar6 | uVar6 >> 2;
               uVar6 = uVar6 | uVar6 >> 4;
               uVar6 = uVar6 | uVar6 >> 8;
               uVar6 = uVar6 | uVar6 >> 0x10;
               uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
            }

            pCVar5 = (CowData<EditorSelectionHistory::_Object>*)Memory::alloc_static(uVar6, false);
            if (pCVar5 == (CowData<EditorSelectionHistory::_Object>*)0x0) {
               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
               return;
            }

            pCVar1 = pCVar5 + 0x10;
            lVar8 = 0;
            lVar7 = -0x18 - (long)pCVar5;
            *(undefined8*)pCVar5 = 1;
            *(long*)( pCVar5 + 8 ) = lVar2;
            if (lVar2 != 0) {
               do {
                  this_00 = pCVar5 + 0x18;
                  lVar4 = *(long*)this + lVar7;
                  *(undefined8*)this_00 = 0;
                  if (*(long*)( this_00 + lVar4 + 8 ) != 0) {
                     CowData<EditorSelectionHistory::_Object>::_ref(this_00, (CowData*)( this_00 + lVar4 + 8 ));
                  }

                  lVar8 = lVar8 + 1;
                  *(undefined4*)( pCVar5 + 0x20 ) = *(undefined4*)( this_00 + lVar4 + 0x10 );
                  pCVar5 = this_00;
               }
 while ( lVar2 != lVar8 );
            }

            _unref(this);
            *(CowData<EditorSelectionHistory::_Object>**)this = pCVar1;
            return;
         }

         /* EditorSelectionHistory::cleanup_history() */
         void EditorSelectionHistory::cleanup_history(EditorSelectionHistory *this) {
            ulong uVar1;
            undefined8 uVar2;
            code *pcVar3;
            char cVar4;
            int iVar5;
            Object *pOVar6;
            NodePath *pNVar7;
            long lVar8;
            long lVar9;
            CowData<EditorSelectionHistory::_Object> *this_00;
            int iVar10;
            uint uVar11;
            ulong *puVar12;
            long lVar13;
            long lVar14;
            long lVar15;
            long lVar16;
            long in_FS_OFFSET;
            bool bVar17;
            int local_54;
            NodePath local_48[8];
            long local_40;
            lVar8 = *(long*)( this + 8 );
            local_40 = *(long*)( in_FS_OFFSET + 0x28 );
            if (lVar8 != 0) {
               local_54 = 0;
               lVar14 = 0;
               do {
                  lVar15 = *(long*)( lVar8 + -8 );
                  if (lVar15 <= lVar14) goto LAB_0010a15d;
                  if (lVar8 == 0) {
                     LAB_0010a1ce:lVar13 = 0;
                     lVar9 = lVar14;
                     LAB_0010a1ef:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar13, "p_index", "size()", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar3 = (code*)invalidInstructionException();
                     ( *pcVar3 )();
                  }

                  lVar16 = (long)local_54;
                  lVar15 = 0;
                  LAB_00109ea3:if (*(long*)( lVar8 + -8 ) <= lVar14) {
                     if (lVar8 == 0) goto LAB_0010a1ce;
                     lVar13 = *(long*)( lVar8 + -8 );
                     lVar9 = lVar14;
                     goto LAB_0010a1ef;
                  }

                  lVar13 = *(long*)( lVar8 + 8 + lVar16 * 0x18 );
                  if (( lVar13 == 0 ) || ( *(long*)( lVar13 + -8 ) <= lVar15 )) {
                     local_54 = local_54 + 1;
                     lVar14 = (long)local_54;
                     goto LAB_0010a14f;
                  }

                  lVar13 = *(long*)( lVar13 + lVar15 * 0x20 );
                  if (lVar13 == 0) {
                     LAB_00109fd6:if (lVar8 == 0) goto LAB_0010a1ce;
                     lVar13 = *(long*)( lVar8 + -8 );
                     lVar9 = lVar14;
                     if (lVar13 <= lVar14) goto LAB_0010a1ef;
                     lVar8 = *(long*)( lVar8 + 8 + lVar16 * 0x18 );
                     lVar9 = lVar15;
                     if (lVar8 == 0) {
                        lVar13 = 0;
                        goto LAB_0010a1ef;
                     }

                     lVar13 = *(long*)( lVar8 + -8 );
                     if (lVar13 <= lVar15) goto LAB_0010a1ef;
                     uVar1 = *(ulong*)( lVar8 + 8 + lVar15 * 0x20 );
                     uVar11 = (uint)uVar1 & 0xffffff;
                     if ((uint)ObjectDB::slot_max <= uVar11) {
                        _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                        goto LAB_0010a0ae;
                     }

                     while (true) {
                        local_48[0] = (NodePath)0x0;
                        LOCK();
                        bVar17 = (char)ObjectDB::spin_lock == '\0';
                        if (bVar17) {
                           ObjectDB::spin_lock._0_1_ = '\x01';
                        }

                        UNLOCK();
                        if (bVar17) break;
                        do {} while ( (char)ObjectDB::spin_lock != '\0' );
                     }
;
                     puVar12 = (ulong*)( (ulong)uVar11 * 0x10 + ObjectDB::object_slots );
                     if (( uVar1 >> 0x18 & 0x7fffffffff ) != ( *puVar12 & 0x7fffffffff )) {
                        ObjectDB::spin_lock._0_1_ = '\0';
                        goto LAB_0010a0ae;
                     }

                     uVar1 = puVar12[1];
                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (( uVar1 == 0 ) || ( ( lVar8 = __dynamic_cast(uVar1, &Object::typeinfo, &Node::typeinfo, 0) ),lVar8 != 0 && ( ( *(byte*)( lVar8 + 0x2fa ) & 0x40 ) == 0 ) )) goto LAB_0010a0ae;
                     LAB_0010a1b8:lVar8 = *(long*)( this + 8 );
                     LAB_0010a1c1:lVar15 = lVar15 + 1;
                     if (lVar8 == 0) goto LAB_0010a1ce;
                     goto LAB_00109ea3;
                  }

                  pOVar6 = (Object*)__dynamic_cast(lVar13, &Object::typeinfo, &MultiNodeEdit::typeinfo, 0);
                  if (pOVar6 == (Object*)0x0) goto LAB_0010a1c1;
                  cVar4 = RefCounted::reference();
                  if (cVar4 == '\0') goto LAB_0010a1b8;
                  pNVar7 = (NodePath*)EditorData::get_edited_scene_root((EditorData*)( EditorNode::singleton + 0x430 ), -1);
                  if (pNVar7 != (NodePath*)0x0) {
                     for (iVar10 = 0; iVar5 = MultiNodeEdit::get_node_count(),iVar10 < iVar5; iVar10 = iVar10 + 1) {
                        MultiNodeEdit::get_node((int)local_48);
                        lVar8 = Node::get_node_or_null(pNVar7);
                        if (lVar8 == 0) {
                           NodePath::~NodePath(local_48);
                           cVar4 = RefCounted::unreference();
                           goto joined_r0x0010a237;
                        }

                        NodePath::~NodePath(local_48);
                     }

                     cVar4 = RefCounted::unreference();
                     if (( cVar4 == '\0' ) || ( cVar4 = predelete_handler(pOVar6) ),cVar4 == '\0') {
                        lVar8 = *(long*)( this + 8 );
                     }
 else {
                        ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                        Memory::free_static(pOVar6, false);
                        lVar8 = *(long*)( this + 8 );
                     }

                     goto LAB_00109fd6;
                  }

                  cVar4 = RefCounted::unreference();
                  joined_r0x0010a237:if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar6) ),cVar4 != '\0') {
                     ( **(code**)( *(long*)pOVar6 + 0x140 ) )(pOVar6);
                     Memory::free_static(pOVar6, false);
                  }

                  LAB_0010a0ae:if (*(long*)( this + 8 ) == 0) {
                     lVar8 = 0;
                     LAB_0010a2bd:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar14, lVar8, "p_index", "size()", "", false, false);
                     lVar8 = *(long*)( this + 8 );
                     lVar14 = lVar16;
                  }
 else {
                     lVar8 = *(long*)( *(long*)( this + 8 ) + -8 );
                     if (lVar8 <= lVar14) goto LAB_0010a2bd;
                     CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ));
                     lVar8 = *(long*)( this + 8 );
                     if (lVar8 == 0) {
                        lVar15 = -1;
                     }
 else {
                        lVar15 = *(long*)( lVar8 + -8 ) + -1;
                        if (lVar14 < lVar15) {
                           this_00 = (CowData<EditorSelectionHistory::_Object>*)( lVar8 + 8 + lVar14 * 0x18 );
                           do {
                              if (*(long*)this_00 != *(long*)( this_00 + 0x18 )) {
                                 CowData<EditorSelectionHistory::_Object>::_unref(this_00);
                                 uVar2 = *(undefined8*)( this_00 + 0x18 );
                                 *(undefined8*)( this_00 + 0x18 ) = 0;
                                 *(undefined8*)this_00 = uVar2;
                              }

                              lVar14 = lVar14 + 1;
                              *(undefined4*)( this_00 + 8 ) = *(undefined4*)( this_00 + 0x20 );
                              this_00 = this_00 + 0x18;
                           }
 while ( lVar14 != lVar15 );
                        }

                     }

                     CowData<EditorSelectionHistory::HistoryElement>::resize<false>((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ), lVar15);
                     lVar8 = *(long*)( this + 8 );
                     lVar14 = lVar16;
                  }

                  LAB_0010a14f:;
               }
 while ( lVar8 != 0 );
            }

            lVar15 = 0;
            LAB_0010a15d:if (lVar15 <= *(int*)( this + 0x10 )) {
               *(int*)( this + 0x10 ) = (int)lVar15 + -1;
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         /* EditorSelectionHistory::next() */
         bool EditorSelectionHistory::next(EditorSelectionHistory *this) {
            bool bVar1;
            long lVar2;
            cleanup_history(this);
            if (*(long*)( this + 8 ) == 0) {
               lVar2 = 0;
            }
 else {
               lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
            }

            bVar1 = *(int*)( this + 0x10 ) + 1 < lVar2;
            if (bVar1) {
               *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
            }

            return bVar1;
         }

         /* EditorSelectionHistory::previous() */
         bool EditorSelectionHistory::previous(EditorSelectionHistory *this) {
            int iVar1;
            cleanup_history(this);
            iVar1 = *(int*)( this + 0x10 );
            if (0 < iVar1) {
               *(int*)( this + 0x10 ) = iVar1 + -1;
            }

            return 0 < iVar1;
         }

         /* CowData<EditorSelectionHistory::_Object>::_copy_on_write() [clone .isra.0] */
         void CowData<EditorSelectionHistory::_Object>::_copy_on_write(CowData<EditorSelectionHistory::_Object> *this) {
            long lVar1;
            long lVar2;
            long lVar3;
            code *pcVar4;
            char cVar5;
            undefined8 *puVar6;
            long *plVar7;
            ulong uVar8;
            long *plVar9;
            long lVar10;
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
            if (lVar1 * 0x20 != 0) {
               uVar8 = lVar1 * 0x20 - 1;
               uVar8 = uVar8 | uVar8 >> 1;
               uVar8 = uVar8 | uVar8 >> 2;
               uVar8 = uVar8 | uVar8 >> 4;
               uVar8 = uVar8 | uVar8 >> 8;
               uVar8 = uVar8 | uVar8 >> 0x10;
               uVar8 = ( uVar8 | uVar8 >> 0x20 ) + 0x11;
            }

            puVar6 = (undefined8*)Memory::alloc_static(uVar8, false);
            if (puVar6 != (undefined8*)0x0) {
               lVar10 = 0;
               *puVar6 = 1;
               puVar6[1] = lVar1;
               plVar7 = puVar6 + 2;
               if (lVar1 != 0) {
                  do {
                     plVar9 = (long*)( lVar10 * 0x20 + *(long*)this );
                     *plVar7 = 0;
                     if (*plVar9 != 0) {
                        *plVar7 = *plVar9;
                        cVar5 = RefCounted::reference();
                        if (cVar5 == '\0') {
                           *plVar7 = 0;
                        }

                     }

                     lVar2 = plVar9[1];
                     plVar7[2] = 0;
                     lVar3 = plVar9[2];
                     plVar7[1] = lVar2;
                     if (lVar3 != 0) {
                        CowData<char32_t>::_ref((CowData<char32_t>*)( plVar7 + 2 ), (CowData*)( plVar9 + 2 ));
                     }

                     lVar10 = lVar10 + 1;
                     *(char*)( plVar7 + 3 ) = (char)plVar9[3];
                     plVar7 = plVar7 + 4;
                  }
 while ( lVar1 != lVar10 );
               }

               _unref(this);
               *(undefined8**)this = puVar6 + 2;
               return;
            }

            _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
            return;
         }

         /* EditorSelectionHistory::replace_object(ObjectID, ObjectID) */
         void EditorSelectionHistory::replace_object(EditorSelectionHistory *this, long param_2, undefined8 param_3) {
            CowData<EditorSelectionHistory::_Object> *this_00;
            long lVar1;
            long lVar2;
            long lVar3;
            CowData<EditorSelectionHistory::_Object> *pCVar4;
            CowData<EditorSelectionHistory::_Object> *pCVar5;
            CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ));
            pCVar4 = *(CowData<EditorSelectionHistory::_Object>**)( this + 8 );
            CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ));
            pCVar5 = *(CowData<EditorSelectionHistory::_Object>**)( this + 8 );
            if (pCVar5 != (CowData<EditorSelectionHistory::_Object>*)0x0) {
               pCVar5 = pCVar5 + *(long*)( pCVar5 + -8 ) * 0x18;
            }

            this_00 = pCVar4 + 8;
            do {
               if (pCVar4 == pCVar5) {
                  return;
               }

               lVar1 = *(long*)this_00;
               if (lVar1 != 0) {
                  lVar2 = 0;
                  do {
                     while (true) {
                        if (*(long*)( lVar1 + -8 ) <= lVar2) goto LAB_0010a610;
                        lVar3 = lVar2 * 0x20;
                        if (*(long*)( lVar1 + 8 + lVar3 ) != param_2) break;
                        lVar2 = lVar2 + 1;
                        CowData<EditorSelectionHistory::_Object>::_copy_on_write(this_00);
                        lVar1 = *(long*)this_00;
                        *(undefined8*)( lVar1 + 8 + lVar3 ) = param_3;
                        if (lVar1 == 0) goto LAB_0010a610;
                     }
;
                     lVar2 = lVar2 + 1;
                  }
 while ( lVar1 != 0 );
               }

               LAB_0010a610:pCVar4 = this_00 + 0x10;
               this_00 = this_00 + 0x18;
            }
 while ( true );
         }

         /* Vector<EditorSelectionHistory::_Object>::push_back(EditorSelectionHistory::_Object) [clone
   .isra.0] */
         void Vector<EditorSelectionHistory::_Object>::push_back(Vector<EditorSelectionHistory::_Object> *this, long *param_2) {
            Object *pOVar1;
            Object *pOVar2;
            char cVar3;
            int iVar4;
            long lVar5;
            long *plVar6;
            long lVar7;
            if (*(long*)( this + 8 ) == 0) {
               lVar7 = 1;
            }
 else {
               lVar7 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
            }

            iVar4 = CowData<EditorSelectionHistory::_Object>::resize<false>((CowData<EditorSelectionHistory::_Object>*)( this + 8 ), lVar7);
            if (iVar4 == 0) {
               if (*(long*)( this + 8 ) == 0) {
                  lVar5 = -1;
                  lVar7 = 0;
               }
 else {
                  lVar7 = *(long*)( *(long*)( this + 8 ) + -8 );
                  lVar5 = lVar7 + -1;
                  if (-1 < lVar5) {
                     CowData<EditorSelectionHistory::_Object>::_copy_on_write((CowData<EditorSelectionHistory::_Object>*)( this + 8 ));
                     plVar6 = (long*)( lVar5 * 0x20 + *(long*)( this + 8 ) );
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

                  plVar6[1] = param_2[1];
                  if (plVar6[2] != param_2[2]) {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( plVar6 + 2 ), (CowData*)( param_2 + 2 ));
                  }

                  *(char*)( plVar6 + 3 ) = (char)param_2[3];
                  return;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar5, lVar7, "p_index", "size()", "", false, false);
            return;
         }

         _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         return;
      }
, /* EditorSelectionHistory::add_object(ObjectID, String const&, bool) */, void __thiscall
EditorSelectionHistory::add_object
          (EditorSelectionHistory *this, ulong, param_2, CowData * param_3, undefined1, param_4);
   {
      ulong uVar1;
      code *pcVar2;
      char cVar3;
      int iVar4;
      Object *pOVar5;
      uint uVar6;
      ulong *puVar7;
      long lVar8;
      int iVar9;
      long lVar10;
      long in_FS_OFFSET;
      bool bVar11;
      Vector<EditorSelectionHistory::_Object> local_a8[8];
      long local_a0;
      int local_98;
      Object *local_88;
      ulong local_80;
      undefined8 local_78;
      undefined1 local_70;
      Object *local_68;
      ulong local_60;
      int local_58[2];
      undefined1 local_50;
      long local_40;
      uVar6 = (uint)param_2 & 0xffffff;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      if (uVar6 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar1 = (ulong)local_68 >> 8;
            local_68 = (Object*)( uVar1 << 8 );
            LOCK();
            bVar11 = (char)ObjectDB::spin_lock == '\0';
            if (bVar11) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar11) break;
            local_68 = (Object*)( uVar1 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar7 = (ulong*)( (ulong)uVar6 * 0x10 + ObjectDB::object_slots );
         if (( param_2 >> 0x18 & 0x7fffffffff ) == ( *puVar7 & 0x7fffffffff )) {
            uVar1 = puVar7[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (uVar1 != 0) {
               pOVar5 = (Object*)__dynamic_cast(uVar1, &Object::typeinfo, &RefCounted::typeinfo, 0);
               local_70 = 0;
               local_88 = (Object*)0x0;
               local_80 = 0;
               local_78 = 0;
               if (( pOVar5 != (Object*)0x0 ) && ( cVar3 = RefCounted::init_ref() ),cVar3 != '\0') {
                  local_88 = pOVar5;
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_88 = (Object*)0x0;
                  }

                  cVar3 = RefCounted::unreference();
                  if (( cVar3 != '\0' ) && ( cVar3 = predelete_handler(pOVar5) ),cVar3 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

               local_80 = param_2;
               if (*(long*)param_3 != 0) {
                  CowData<char32_t>::_ref((CowData<char32_t>*)&local_78, param_3);
               }

               iVar9 = *(int*)( this + 0x10 );
               local_70 = param_4;
               local_50 = param_4;
               if (iVar9 < 0) {
                  LAB_0010a936:local_98 = 0;
                  local_a0 = 0;
                  local_68 = (Object*)0x0;
                  if (local_88 != (Object*)0x0) {
                     local_68 = local_88;
                     cVar3 = RefCounted::reference();
                     if (cVar3 == '\0') {
                        local_68 = (Object*)0x0;
                     }

                  }

                  local_58[0] = 0;
                  local_58[1] = 0;
                  local_60 = local_80;
                  CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)&local_78);
                  Vector<EditorSelectionHistory::_Object>::push_back(local_a8);
                  CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
                  pOVar5 = local_68;
                  if (( ( local_68 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

               iVar9 = 0;
            }
 else {
               if (( *(long*)( this + 8 ) == 0 ) || ( *(long*)( *(long*)( this + 8 ) + -8 ) <= (long)iVar9 )) goto LAB_0010a936;
               CowData<EditorSelectionHistory::HistoryElement>::resize<false>((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ), (long)( iVar9 + 1 ));
               local_98 = 0;
               local_a0 = 0;
               if (( *(long*)param_3 == 0 ) || ( *(uint*)( *(long*)param_3 + -8 ) < 2 )) goto LAB_0010a936;
               lVar8 = (long)*(int*)( this + 0x10 );
               lVar10 = *(long*)( this + 8 );
               if (lVar8 < 0) {
                  if (lVar10 != 0) {
                     lVar10 = *(long*)( lVar10 + -8 );
                     goto LAB_0010adc2;
                  }

                  LAB_0010ae2f:lVar10 = 0;
                  LAB_0010adc2:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar8, lVar10, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar2 = (code*)invalidInstructionException();
                  ( *pcVar2 )();
               }

               if (lVar10 == 0) goto LAB_0010ae2f;
               lVar10 = *(long*)( lVar10 + -8 );
               if (lVar10 <= lVar8) goto LAB_0010adc2;
               CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ));
               lVar10 = *(long*)( this + 8 ) + lVar8 * 0x18;
               if (*(long*)( lVar10 + 8 ) != 0) {
                  CowData<EditorSelectionHistory::_Object>::_ref((CowData<EditorSelectionHistory::_Object>*)&local_a0, (CowData*)( lVar10 + 8 ));
               }

               local_98 = *(int*)( lVar10 + 0x10 );
               CowData<EditorSelectionHistory::_Object>::resize<false>((CowData<EditorSelectionHistory::_Object>*)&local_a0, (long)( local_98 + 1 ));
               local_68 = (Object*)0x0;
               if (local_88 != (Object*)0x0) {
                  local_68 = local_88;
                  cVar3 = RefCounted::reference();
                  if (cVar3 == '\0') {
                     local_68 = (Object*)0x0;
                  }

               }

               local_58[0] = 0;
               local_58[1] = 0;
               local_60 = local_80;
               CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)&local_78);
               Vector<EditorSelectionHistory::_Object>::push_back(local_a8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
               pOVar5 = local_68;
               if (( ( local_68 != (Object*)0x0 ) && ( cVar3 = RefCounted::unreference() ),cVar3 != '\0' )) &&( cVar3 = cVar3 != '\0' )(**(code**)( *(long*)pOVar5 + 0x140 ))(pOVar5);
               Memory::free_static(pOVar5, false);
            }

            iVar9 = local_98 + 1;
         }

         local_60 = 0;
         local_98 = iVar9;
         if (local_a0 != 0) {
            CowData<EditorSelectionHistory::_Object>::_ref((CowData<EditorSelectionHistory::_Object>*)&local_60, (CowData*)&local_a0);
         }

         local_58[0] = iVar9;
         if (*(long*)( this + 8 ) == 0) {
            lVar10 = 1;
         }
 else {
            lVar10 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
         }

         iVar4 = CowData<EditorSelectionHistory::HistoryElement>::resize<false>((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ), lVar10);
         if (iVar4 == 0) {
            if (*(long*)( this + 8 ) == 0) {
               lVar8 = -1;
               lVar10 = 0;
            }
 else {
               lVar10 = *(long*)( *(long*)( this + 8 ) + -8 );
               lVar8 = lVar10 + -1;
               if (-1 < lVar8) {
                  CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write((CowData<EditorSelectionHistory::HistoryElement>*)( this + 8 ));
                  lVar10 = *(long*)( this + 8 ) + lVar8 * 0x18;
                  if (*(long*)( lVar10 + 8 ) != local_60) {
                     CowData<EditorSelectionHistory::_Object>::_ref((CowData<EditorSelectionHistory::_Object>*)( lVar10 + 8 ), (CowData*)&local_60);
                  }

                  *(int*)( lVar10 + 0x10 ) = iVar9;
                  goto LAB_0010aa6b;
               }

            }

            _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar10, "p_index", "size()", "", false, false);
         }
 else {
            _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
         }

         LAB_0010aa6b:CowData<EditorSelectionHistory::_Object>::_unref((CowData<EditorSelectionHistory::_Object>*)&local_60);
         *(int*)( this + 0x10 ) = *(int*)( this + 0x10 ) + 1;
         CowData<EditorSelectionHistory::_Object>::_unref((CowData<EditorSelectionHistory::_Object>*)&local_a0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
         pOVar5 = local_88;
         if (( ( local_88 == (Object*)0x0 ) || ( cVar3 = RefCounted::unreference() ),cVar3 == '\0' )) {
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               return;
            }

         }
 else {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               Memory::free_static(pOVar5, false);
               return;
            }

         }

         goto LAB_0010ae34;
      }

   }

   else{ObjectDB::spin_lock._0_1_ = '\0';};
}
else{_err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);};if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   _err_print_error("add_object", "editor/editor_data.cpp", 0x6c, "Parameter \"obj\" is null.", 0, 0);
   return;
}
LAB_0010ae34:/* WARNING: Subroutine does not return */__stack_chk_fail();}/* EditorData::get_undo_redo_inspector_hook_callback() */void EditorData::get_undo_redo_inspector_hook_callback(void) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long in_RSI;
   long in_RDI;
   bool bVar4;
   *(undefined8*)( in_RDI + 8 ) = 0;
   if (*(long*)( in_RSI + 0x88 ) != 0) {
      CowData<Callable>::_unref((CowData<Callable>*)( in_RDI + 8 ));
      if (*(long*)( in_RSI + 0x88 ) != 0) {
         plVar1 = (long*)( *(long*)( in_RSI + 0x88 ) + -0x10 );
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
            *(undefined8*)( in_RDI + 8 ) = *(undefined8*)( in_RSI + 0x88 );
         }

      }

   }

   return;
}
/* CowData<Callable>::_copy_on_write() [clone .isra.0] */void CowData<Callable>::_copy_on_write(CowData<Callable> *this) {
   long lVar1;
   code *pcVar2;
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   ulong uVar6;
   Callable *this_00;
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
   if (lVar1 * 0x10 != 0) {
      uVar6 = lVar1 * 0x10 - 1;
      uVar6 = uVar6 | uVar6 >> 1;
      uVar6 = uVar6 | uVar6 >> 2;
      uVar6 = uVar6 | uVar6 >> 4;
      uVar6 = uVar6 | uVar6 >> 8;
      uVar6 = uVar6 | uVar6 >> 0x10;
      uVar6 = ( uVar6 | uVar6 >> 0x20 ) + 0x11;
   }

   puVar3 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar3 != (undefined8*)0x0) {
      *puVar3 = 1;
      puVar3[1] = lVar1;
      lVar4 = 0;
      this_00 = (Callable*)( puVar3 + 2 );
      if (lVar1 != 0) {
         do {
            lVar5 = lVar4 + 1;
            Callable::Callable(this_00, (Callable*)( lVar4 * 0x10 + *(long*)this ));
            lVar4 = lVar5;
            this_00 = this_00 + 0x10;
         }
 while ( lVar1 != lVar5 );
      }

      _unref(this);
      *(Callable**)this = (Callable*)( puVar3 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* CowData<EditorData::CustomType>::_copy_on_write() [clone .isra.0] */void CowData<EditorData::CustomType>::_copy_on_write(CowData<EditorData::CustomType> *this) {
   long lVar1;
   code *pcVar2;
   char cVar3;
   undefined8 *puVar4;
   CowData *pCVar5;
   CowData<char32_t> *this_00;
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

   puVar4 = (undefined8*)Memory::alloc_static(uVar6, false);
   if (puVar4 != (undefined8*)0x0) {
      lVar7 = 0;
      *puVar4 = 1;
      puVar4[1] = lVar1;
      this_00 = (CowData<char32_t>*)( puVar4 + 2 );
      if (lVar1 != 0) {
         do {
            pCVar5 = (CowData*)( this_00 + *(long*)this + ( -0x10 - (long)puVar4 ) );
            *(undefined8*)this_00 = 0;
            if (*(long*)pCVar5 != 0) {
               CowData<char32_t>::_ref(this_00, pCVar5);
            }

            *(undefined8*)( this_00 + 8 ) = 0;
            if (*(long*)( pCVar5 + 8 ) != 0) {
               *(long*)( this_00 + 8 ) = *(long*)( pCVar5 + 8 );
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *(undefined8*)( this_00 + 8 ) = 0;
               }

            }

            *(undefined8*)( this_00 + 0x10 ) = 0;
            if (*(long*)( pCVar5 + 0x10 ) != 0) {
               *(long*)( this_00 + 0x10 ) = *(long*)( pCVar5 + 0x10 );
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  *(undefined8*)( this_00 + 0x10 ) = 0;
               }

            }

            lVar7 = lVar7 + 1;
            this_00 = this_00 + 0x18;
         }
 while ( lVar1 != lVar7 );
      }

      _unref(this);
      *(CowData<char32_t>**)this = (CowData<char32_t>*)( puVar4 + 2 );
      return;
   }

   _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
   return;
}
/* EditorData::~EditorData() */void EditorData::~EditorData(EditorData *this) {
   long *plVar1;
   uint uVar2;
   Object *pOVar3;
   CowData<char32_t> *this_00;
   char cVar4;
   long lVar5;
   void *pvVar6;
   undefined8 *puVar7;
   bool bVar8;
   pOVar3 = *(Object**)( this + 0x78 );
   cVar4 = predelete_handler(pOVar3);
   if (cVar4 != '\0') {
      ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
      Memory::free_static(pOVar3, false);
   }

   pvVar6 = *(void**)( this + 0x140 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x164 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x160 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x164 ) = 0;
            *(undefined1(*) [16])( this + 0x150 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x148 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x148 ) + lVar5 ) = 0;
                  if (*(long*)( (long)pvVar6 + 0x18 ) != 0) {
                     cVar4 = RefCounted::unreference();
                     if (cVar4 != '\0') {
                        pOVar3 = *(Object**)( (long)pvVar6 + 0x18 );
                        cVar4 = predelete_handler(pOVar3);
                        if (cVar4 != '\0') {
                           ( **(code**)( *(long*)pOVar3 + 0x140 ) )(pOVar3);
                           Memory::free_static(pOVar3, false);
                        }

                     }

                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x10 ));
                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x140 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0x164 ) = 0;
            *(undefined1(*) [16])( this + 0x150 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010b260;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x148 ), false);
   }

   LAB_0010b260:pvVar6 = *(void**)( this + 0x110 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x134 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x130 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x134 ) = 0;
            *(undefined1(*) [16])( this + 0x120 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x118 ) + lVar5 ) != 0) {
                  bVar8 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x118 ) + lVar5 ) = 0;
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  if (( bVar8 ) && ( *(long*)( (long)pvVar6 + 0x18 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x10 ));
                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x110 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0x134 ) = 0;
            *(undefined1(*) [16])( this + 0x120 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010b326;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x118 ), false);
   }

   LAB_0010b326:pvVar6 = *(void**)( this + 0xe0 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x104 ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x100 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x104 ) = 0;
            *(undefined1(*) [16])( this + 0xf0 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xe8 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0xe8 ) + lVar5 ) = 0;
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x18 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0xe0 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( (ulong)uVar2 << 2 != lVar5 );
            *(undefined4*)( this + 0x104 ) = 0;
            *(undefined1(*) [16])( this + 0xf0 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010b3f6;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xe8 ), false);
   }

   LAB_0010b3f6:CowData<EditorData::EditedScene>::_unref((CowData<EditorData::EditedScene>*)( this + 200 ));
   pvVar6 = *(void**)( this + 0x98 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0xbc ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xb8 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xa0 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0xa0 ) + lVar5 ) = 0;
                  Callable::~Callable((Callable*)( (long)pvVar6 + 0x18 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x98 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0xbc ) = 0;
            *(undefined1(*) [16])( this + 0xa8 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010b4c9;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0xa0 ), false);
   }

   LAB_0010b4c9:CowData<Callable>::_unref((CowData<Callable>*)( this + 0x88 ));
   puVar7 = *(undefined8**)( this + 0x70 );
   if (puVar7 != (undefined8*)0x0) {
      do {
         this_00 = (CowData<char32_t>*)*puVar7;
         if (this_00 == (CowData<char32_t>*)0x0) {
            if (*(int*)( puVar7 + 2 ) != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0010b577;
            }

            break;
         }

         if (puVar7 == *(undefined8**)( this_00 + 0x30 )) {
            *puVar7 = *(undefined8*)( this_00 + 0x20 );
            if (this_00 == (CowData<char32_t>*)puVar7[1]) {
               puVar7[1] = *(undefined8*)( this_00 + 0x28 );
            }

            if (*(long*)( this_00 + 0x28 ) != 0) {
               *(undefined8*)( *(long*)( this_00 + 0x28 ) + 0x20 ) = *(undefined8*)( this_00 + 0x20 );
            }

            if (*(long*)( this_00 + 0x20 ) != 0) {
               *(undefined8*)( *(long*)( this_00 + 0x20 ) + 0x28 ) = *(undefined8*)( this_00 + 0x28 );
            }

            if (Variant::needs_deinit[*(int*)( this_00 + 8 )] != '\0') {
               Variant::_clear_internal();
            }

            CowData<char32_t>::_unref(this_00);
            Memory::free_static(this_00, false);
            *(int*)( puVar7 + 2 ) = *(int*)( puVar7 + 2 ) + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         puVar7 = *(undefined8**)( this + 0x70 );
      }
 while ( *(int*)( puVar7 + 2 ) != 0 );
      Memory::free_static(puVar7, false);
   }

   LAB_0010b577:pvVar6 = *(void**)( this + 0x48 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x6c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x68 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x6c ) = 0;
            *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x50 ) + lVar5 ) != 0) {
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  *(int*)( *(long*)( this + 0x50 ) + lVar5 ) = 0;
                  CowData<EditorData::CustomType>::_unref((CowData<EditorData::CustomType>*)( (long)pvVar6 + 0x20 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar6 + 0x10 ));
                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x48 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x6c ) = 0;
            *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010b612;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x50 ), false);
   }

   LAB_0010b612:pvVar6 = *(void**)( this + 0x18 );
   if (pvVar6 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar2 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar5 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar5 ) != 0) {
                  bVar8 = StringName::configured != '\0';
                  *(int*)( *(long*)( this + 0x20 ) + lVar5 ) = 0;
                  pvVar6 = *(void**)( (long)pvVar6 + lVar5 * 2 );
                  if (( bVar8 ) && ( *(long*)( (long)pvVar6 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }

                  Memory::free_static(pvVar6, false);
                  pvVar6 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar6 + lVar5 * 2 ) = 0;
               }

               lVar5 = lVar5 + 4;
            }
 while ( lVar5 != (ulong)uVar2 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar6 == (void*)0x0) goto LAB_0010b6ba;
         }

      }

      Memory::free_static(pvVar6, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_0010b6ba:if (*(long*)( this + 8 ) != 0) {
      LOCK();
      plVar1 = (long*)( *(long*)( this + 8 ) + -0x10 );
      *plVar1 = *plVar1 + -1;
      UNLOCK();
      if (*plVar1 == 0) {
         lVar5 = *(long*)( this + 8 );
         *(undefined8*)( this + 8 ) = 0;
         Memory::free_static((void*)( lVar5 + -0x10 ), false);
         return;
      }

   }

   return;
}
/* CowData<EditorData::EditedScene>::_copy_on_write() [clone .isra.0] */void CowData<EditorData::EditedScene>::_copy_on_write(CowData<EditorData::EditedScene> *this) {
   long lVar1;
   undefined8 uVar2;
   long *plVar3;
   long lVar4;
   code *pcVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   undefined8 *puVar8;
   undefined8 *puVar9;
   undefined8 *puVar10;
   ulong uVar11;
   long lVar12;
   undefined8 *puVar13;
   if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
      return;
   }

   if (*(long*)this == 0) {
      /* WARNING: Does not return */
      pcVar5 = (code*)invalidInstructionException();
      ( *pcVar5 )();
   }

   lVar1 = *(long*)( *(long*)this + -8 );
   uVar11 = 0x10;
   if (lVar1 * 0x60 != 0) {
      uVar11 = lVar1 * 0x60 - 1;
      uVar11 = uVar11 | uVar11 >> 1;
      uVar11 = uVar11 | uVar11 >> 2;
      uVar11 = uVar11 | uVar11 >> 4;
      uVar11 = uVar11 | uVar11 >> 8;
      uVar11 = uVar11 | uVar11 >> 0x10;
      uVar11 = ( uVar11 | uVar11 >> 0x20 ) + 0x11;
   }

   puVar6 = (undefined8*)Memory::alloc_static(uVar11, false);
   if (puVar6 == (undefined8*)0x0) {
      _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
      return;
   }

   lVar12 = 0;
   *puVar6 = 1;
   puVar6[1] = lVar1;
   if (lVar1 != 0) {
      puVar9 = puVar6 + 2;
      do {
         puVar10 = (undefined8*)( (long)puVar9 + *(long*)this + ( -0x10 - (long)puVar6 ) );
         uVar2 = *puVar10;
         puVar9[1] = 0;
         lVar4 = puVar10[1];
         *puVar9 = uVar2;
         if (lVar4 != 0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 1 ), (CowData*)( puVar10 + 1 ));
         }

         puVar9[2] = puVar10[2];
         Dictionary::Dictionary((Dictionary*)( puVar9 + 3 ), (Dictionary*)( puVar10 + 3 ));
         plVar3 = (long*)puVar10[4];
         puVar9[4] = 0;
         if (( plVar3 != (long*)0x0 ) && ( puVar13 = (undefined8*)*plVar3 ),puVar13 != (undefined8*)0x0) {
            pauVar7 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            puVar9[4] = pauVar7;
            *(undefined4*)pauVar7[1] = 0;
            *pauVar7 = (undefined1[16])0x0;
            do {
               while (true) {
                  puVar8 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                  uVar2 = *puVar13;
                  puVar8[1] = 0;
                  *puVar8 = uVar2;
                  plVar3 = (long*)puVar9[4];
                  lVar4 = plVar3[1];
                  puVar8[3] = plVar3;
                  puVar8[2] = lVar4;
                  if (lVar4 != 0) {
                     *(undefined8**)( lVar4 + 8 ) = puVar8;
                  }

                  plVar3[1] = (long)puVar8;
                  if (*plVar3 != 0) break;
                  puVar13 = (undefined8*)puVar13[1];
                  *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
                  *plVar3 = (long)puVar8;
                  if (puVar13 == (undefined8*)0x0) goto LAB_0010badb;
               }
;
               puVar13 = (undefined8*)puVar13[1];
               *(int*)( plVar3 + 2 ) = (int)plVar3[2] + 1;
            }
 while ( puVar13 != (undefined8*)0x0 );
         }

         LAB_0010badb:puVar9[6] = 0;
         if (puVar10[6] != 0) {
            CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)( puVar9 + 6 ), (CowData*)( puVar10 + 6 ));
         }

         lVar12 = lVar12 + 1;
         *(undefined4*)( puVar9 + 7 ) = *(undefined4*)( puVar10 + 7 );
         Dictionary::Dictionary((Dictionary*)( puVar9 + 8 ), (Dictionary*)( puVar10 + 8 ));
         NodePath::NodePath((NodePath*)( puVar9 + 9 ), (NodePath*)( puVar10 + 9 ));
         *(undefined4*)( puVar9 + 10 ) = *(undefined4*)( puVar10 + 10 );
         puVar9[0xb] = puVar10[0xb];
         puVar9 = puVar9 + 0xc;
      }
 while ( lVar1 != lVar12 );
   }

   _unref(this);
   *(undefined8**)this = puVar6 + 2;
   return;
}
/* EditorData::restore_edited_scene_state(EditorSelection*, EditorSelectionHistory*) */EditorSelection *EditorData::restore_edited_scene_state(EditorSelection *param_1, EditorSelectionHistory *param_2) {
   undefined8 *puVar1;
   long in_RCX;
   EditorSelection *in_RDX;
   long lVar2;
   long lVar3;
   lVar2 = (long)*(int*)( param_2 + 0xd0 );
   lVar3 = *(long*)( param_2 + 200 );
   if (*(int*)( param_2 + 0xd0 ) < 0) {
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + -8 );
         goto LAB_0010bca1;
      }

   }
 else if (lVar3 != 0) {
      lVar3 = *(long*)( lVar3 + -8 );
      if (lVar2 < lVar3) {
         CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( param_2 + 200 ));
         lVar3 = lVar2 * 0x60 + *(long*)( param_2 + 200 );
         *(undefined4*)( in_RCX + 0x10 ) = *(undefined4*)( lVar3 + 0x38 );
         if (*(long*)( in_RCX + 8 ) != *(long*)( lVar3 + 0x30 )) {
            CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)( in_RCX + 8 ), (CowData*)( lVar3 + 0x30 ));
         }

         while (*(int*)( in_RDX + 0x1a4 ) != 0) {
            EditorSelection::remove_node(in_RDX, *(Node**)( *(long*)( in_RDX + 400 ) + 0x10 ));
         }
;
         puVar1 = *(undefined8**)( lVar3 + 0x20 );
         *(undefined2*)( in_RDX + 0x1a9 ) = 0x101;
         if (puVar1 != (undefined8*)0x0) {
            for (puVar1 = (undefined8*)*puVar1; puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)puVar1[1]) {
               EditorSelection::add_node(in_RDX, (Node*)*puVar1);
            }

         }

         set_editor_plugin_states((EditorData*)param_2, (Dictionary*)( lVar3 + 0x18 ));
         Dictionary::Dictionary((Dictionary*)param_1, (Dictionary*)( lVar3 + 0x40 ));
         return param_1;
      }

      goto LAB_0010bca1;
   }

   lVar3 = 0;
   LAB_0010bca1:_err_print_index_error("restore_edited_scene_state", "editor/editor_data.cpp", 0x3a7, lVar2, lVar3, "current_edited_scene", "edited_scene.size()", "", false, false);
   Dictionary::Dictionary((Dictionary*)param_1);
   return param_1;
}
/* EditorData::save_edited_scene_state(EditorSelection*, EditorSelectionHistory*, Dictionary const&)
    */void EditorData::save_edited_scene_state(EditorData *this, EditorSelection *param_1, EditorSelectionHistory *param_2, Dictionary *param_3) {
   undefined4 uVar1;
   void *pvVar2;
   long lVar3;
   undefined1(*pauVar4)[16];
   long *plVar5;
   long lVar6;
   long lVar7;
   long *plVar8;
   long in_FS_OFFSET;
   Dictionary local_48[8];
   long local_40;
   lVar6 = (long)*(int*)( this + 0xd0 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar7 = *(long*)( this + 200 );
   if (*(int*)( this + 0xd0 ) < 0) {
      if (lVar7 == 0) goto LAB_0010bfb0;
      lVar7 = *(long*)( lVar7 + -8 );
   }
 else if (lVar7 == 0) {
      LAB_0010bfb0:lVar7 = 0;
   }
 else {
      lVar7 = *(long*)( lVar7 + -8 );
      if (lVar6 < lVar7) {
         CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
         plVar8 = *(long**)( param_1 + 400 );
         lVar7 = lVar6 * 0x60 + *(long*)( this + 200 );
         if (plVar8 == (long*)0x0) {
            pauVar4 = (undefined1(*) [16])0x0;
         }
 else {
            pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)pauVar4[1] = 0;
            *pauVar4 = (undefined1[16])0x0;
            do {
               while (true) {
                  plVar5 = (long*)operator_new(0x20, DefaultAllocator::alloc);
                  lVar6 = plVar8[2];
                  plVar5[1] = 0;
                  *plVar5 = lVar6;
                  lVar6 = *(long*)( *pauVar4 + 8 );
                  plVar5[3] = (long)pauVar4;
                  plVar5[2] = lVar6;
                  if (lVar6 != 0) {
                     *(long**)( lVar6 + 8 ) = plVar5;
                  }

                  lVar6 = *(long*)*pauVar4;
                  *(long**)( *pauVar4 + 8 ) = plVar5;
                  if (lVar6 != 0) break;
                  plVar8 = (long*)*plVar8;
                  *(int*)pauVar4[1] = *(int*)pauVar4[1] + 1;
                  *(long**)*pauVar4 = plVar5;
                  if (plVar8 == (long*)0x0) goto LAB_0010be08;
               }
;
               plVar8 = (long*)*plVar8;
               *(int*)pauVar4[1] = *(int*)pauVar4[1] + 1;
            }
 while ( plVar8 != (long*)0x0 );
         }

         LAB_0010be08:plVar8 = *(long**)( lVar7 + 0x20 );
         if (plVar8 != (long*)0x0) {
            do {
               pvVar2 = (void*)*plVar8;
               if (pvVar2 == (void*)0x0) goto LAB_0010be70;
               if (*(long**)( (long)pvVar2 + 0x18 ) == plVar8) {
                  lVar6 = *(long*)( (long)pvVar2 + 8 );
                  lVar3 = *(long*)( (long)pvVar2 + 0x10 );
                  *plVar8 = lVar6;
                  if (pvVar2 == (void*)plVar8[1]) {
                     plVar8[1] = lVar3;
                  }

                  if (lVar3 != 0) {
                     *(long*)( lVar3 + 8 ) = lVar6;
                     lVar6 = *(long*)( (long)pvVar2 + 8 );
                  }

                  if (lVar6 != 0) {
                     *(long*)( lVar6 + 0x10 ) = lVar3;
                  }

                  Memory::free_static(pvVar2, false);
                  *(int*)( plVar8 + 2 ) = (int)plVar8[2] + -1;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }

               plVar8 = *(long**)( lVar7 + 0x20 );
            }
 while ( (int)plVar8[2] != 0 );
            Memory::free_static(plVar8, false);
         }

         LAB_0010be70:uVar1 = *(undefined4*)( param_2 + 0x10 );
         *(undefined1(**) [16])( lVar7 + 0x20 ) = pauVar4;
         *(undefined4*)( lVar7 + 0x38 ) = uVar1;
         if (*(long*)( lVar7 + 0x30 ) != *(long*)( param_2 + 8 )) {
            CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)( lVar7 + 0x30 ), (CowData*)( param_2 + 8 ));
         }

         get_editor_plugin_states();
         Dictionary::operator =((Dictionary*)( lVar7 + 0x18 ), local_48);
         Dictionary::~Dictionary(local_48);
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Dictionary::operator =((Dictionary*)( lVar7 + 0x40 ), param_3);
            return;
         }

         goto LAB_0010bfb8;
      }

   }

   _err_print_index_error("save_edited_scene_state", "editor/editor_data.cpp", 0x39c, lVar6, lVar7, "current_edited_scene", "edited_scene.size()", "", false, false);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010bfb8:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* EditorData::move_edited_scene_index(int, int) */void EditorData::move_edited_scene_index(EditorData *this, int param_1, int param_2) {
   EditedScene *this_00;
   code *pcVar1;
   long lVar2;
   EditedScene *this_01;
   long lVar3;
   long lVar4;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 uStack_90;
   undefined8 local_88;
   Dictionary local_80[8];
   undefined8 local_78;
   undefined8 local_68;
   undefined4 local_60;
   Dictionary local_58[8];
   NodePath local_50[8];
   undefined4 local_48;
   undefined8 local_40;
   long local_30;
   lVar4 = (long)param_1;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( this + 200 );
   if (param_1 < 0) {
      if (lVar3 == 0) goto LAB_0010c1c0;
      lVar3 = *(long*)( lVar3 + -8 );
   }
 else if (lVar3 == 0) {
      LAB_0010c1c0:lVar3 = 0;
   }
 else {
      lVar3 = *(long*)( lVar3 + -8 );
      if (lVar4 < lVar3) {
         lVar2 = (long)param_2;
         if (( -1 < param_2 ) && ( lVar2 < lVar3 )) {
            CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
            lVar3 = *(long*)( this + 200 );
            this_00 = (EditedScene*)( lVar3 + lVar2 * 0x60 );
            if (lVar3 == 0) {
               lVar3 = 0;
            }
 else {
               lVar3 = *(long*)( lVar3 + -8 );
               if (lVar4 < lVar3) {
                  CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
                  this_01 = (EditedScene*)( lVar4 * 0x60 + *(long*)( this + 200 ) );
                  local_98 = *(undefined8*)this_01;
                  uStack_90 = *(undefined8*)( this_01 + 8 );
                  local_88 = *(undefined8*)( this_01 + 0x10 );
                  *(undefined8*)( this_01 + 8 ) = 0;
                  Dictionary::Dictionary(local_80, (Dictionary*)( this_01 + 0x18 ));
                  local_78 = *(undefined8*)( this_01 + 0x20 );
                  *(undefined8*)( this_01 + 0x20 ) = 0;
                  local_68 = *(undefined8*)( this_01 + 0x30 );
                  *(undefined8*)( this_01 + 0x30 ) = 0;
                  local_60 = *(undefined4*)( this_01 + 0x38 );
                  Dictionary::Dictionary(local_58, (Dictionary*)( this_01 + 0x40 ));
                  NodePath::NodePath(local_50, (NodePath*)( this_01 + 0x48 ));
                  local_48 = *(undefined4*)( this_01 + 0x50 );
                  local_40 = *(undefined8*)( this_01 + 0x58 );
                  EditedScene::operator =(this_01, this_00);
                  EditedScene::operator =(this_00, (EditedScene*)&local_98);
                  EditedScene::~EditedScene((EditedScene*)&local_98);
                  goto LAB_0010c10c;
               }

            }

            _err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar4, lVar3, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         _err_print_index_error("move_edited_scene_index", "editor/editor_data.cpp", 0x280, lVar2, lVar3, "p_to_idx", "edited_scene.size()", "", false, false);
         goto LAB_0010c10c;
      }

   }

   _err_print_index_error("move_edited_scene_index", "editor/editor_data.cpp", 0x27f, lVar4, lVar3, "p_idx", "edited_scene.size()", "", false, false);
   LAB_0010c10c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorData::check_and_update_scene(int) */char EditorData::check_and_update_scene(EditorData *this, int param_1) {
   Node *pNVar1;
   Object *pOVar2;
   code *pcVar3;
   undefined1(*pauVar4)[16];
   char cVar5;
   int iVar6;
   PackedScene *this_00;
   NodePath *pNVar7;
   long *plVar8;
   long lVar9;
   char *pcVar10;
   undefined8 uVar11;
   long lVar12;
   void *pvVar13;
   int iVar14;
   long lVar15;
   long lVar16;
   long lVar17;
   long in_FS_OFFSET;
   char local_d1;
   Node *local_b0;
   undefined8 local_98;
   undefined8 local_90;
   undefined1(*local_88)[16];
   undefined8 local_80;
   undefined *local_78;
   undefined8 local_70;
   undefined1 local_68[16];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   lVar15 = (long)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar12 = *(long*)( this + 200 );
   if (param_1 < 0) {
      if (lVar12 == 0) goto LAB_0010c830;
      lVar16 = *(long*)( lVar12 + -8 );
      LAB_0010c72d:_err_print_index_error("check_and_update_scene", "editor/editor_data.cpp", 0x2c0, lVar15, lVar16, "p_idx", "edited_scene.size()", "", false, false);
   }
 else {
      if (lVar12 == 0) {
         LAB_0010c830:lVar16 = 0;
         goto LAB_0010c72d;
      }

      lVar16 = *(long*)( lVar12 + -8 );
      if (lVar16 <= lVar15) goto LAB_0010c72d;
      lVar16 = lVar15 * 0x60;
      pNVar1 = *(Node**)( lVar12 + lVar16 );
      if (pNVar1 != (Node*)0x0) {
         local_48 = 2;
         local_68 = (undefined1[16])0x0;
         local_58 = (undefined1[16])0x0;
         local_d1 = _find_updated_instances(this, pNVar1, pNVar1, (HashSet*)local_68);
         if (local_d1 != '\0') {
            this_00 = (PackedScene*)operator_new(0x248, "");
            PackedScene::PackedScene(this_00);
            postinitialize_handler((Object*)this_00);
            cVar5 = RefCounted::init_ref();
            local_b0 = (Node*)0x0;
            if (cVar5 != '\0') {
               cVar5 = RefCounted::reference();
               local_b0 = (Node*)(PackedScene*)0x0;
               if (cVar5 != '\0') {
                  local_b0 = (Node*)this_00;
               }

               cVar5 = RefCounted::unreference();
               if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)this_00) ),cVar5 != '\0') {
                  ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
                  Memory::free_static(this_00, false);
               }

            }

            local_90 = 0;
            local_78 = &_LC16;
            local_70 = 0;
            String::parse_latin1((StrRange*)&local_90);
            local_98 = 0;
            String::parse_latin1((String*)&local_98, "Updating Scene");
            TTR((String*)&local_88, (String*)&local_98);
            local_80 = 0;
            String::parse_latin1((String*)&local_80, "update_scene");
            EditorProgress::EditorProgress((EditorProgress*)&local_78, (String*)&local_80, (String*)&local_88, 2, false, false);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            local_88 = (undefined1(*) [16])0x0;
            String::parse_latin1((String*)&local_88, "");
            local_90 = 0;
            String::parse_latin1((String*)&local_90, "Storing local changes...");
            TTR((String*)&local_80, (String*)&local_90);
            iVar14 = (int)(String*)&local_80;
            EditorProgress::step((String*)&local_78, iVar14, false);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            if (*(long*)( this + 200 ) == 0) goto LAB_0010c7b8;
            lVar12 = *(long*)( *(long*)( this + 200 ) + -8 );
            if (lVar12 <= lVar15) goto LAB_0010c7bb;
            iVar6 = PackedScene::pack(local_b0);
            if (iVar6 == 0) {
               local_88 = (undefined1(*) [16])0x0;
               String::parse_latin1((String*)&local_88, "");
               local_90 = 0;
               String::parse_latin1((String*)&local_90, "Updating scene...");
               TTR((String*)&local_80, (String*)&local_90);
               EditorProgress::step((String*)&local_78, iVar14, true);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
               pNVar7 = (NodePath*)PackedScene::instantiate(local_b0, 2);
               if (pNVar7 == (NodePath*)0x0) {
                  uVar11 = 0x2d4;
                  pcVar10 = "Parameter \"new_scene\" is null.";
                  goto LAB_0010c9ca;
               }

               local_88 = (undefined1(*) [16])0x0;
               if (*(long*)( this + 200 ) == 0) {
                  LAB_0010c970:lVar12 = 0;
                  LAB_0010c973:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar15, lVar12, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               lVar12 = *(long*)( *(long*)( this + 200 ) + -8 );
               if (lVar12 <= lVar15) goto LAB_0010c973;
               CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
               lVar9 = *(long*)( this + 200 );
               plVar8 = *(long**)( lVar9 + 0x20 + lVar16 );
               if (( plVar8 != (long*)0x0 ) && ( lVar17 = lVar17 != 0 )) {
                  while (lVar9 != 0) {
                     lVar12 = *(long*)( lVar9 + -8 );
                     if (lVar12 <= lVar15) goto LAB_0010c7bb;
                     Node::get_path_to((Node*)&local_80, SUB81(*(undefined8*)( lVar9 + lVar16 ), 0));
                     lVar12 = Node::get_node(pNVar7);
                     if (lVar12 != 0) {
                        if (local_88 == (undefined1(*) [16])0x0) {
                           local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                           *(undefined4*)local_88[1] = 0;
                           *local_88 = (undefined1[16])0x0;
                        }

                        pauVar4 = local_88;
                        plVar8 = (long*)operator_new(0x20, DefaultAllocator::alloc);
                        lVar9 = *(long*)( *pauVar4 + 8 );
                        plVar8[1] = 0;
                        *plVar8 = lVar12;
                        plVar8[2] = lVar9;
                        plVar8[3] = (long)pauVar4;
                        if (lVar9 != 0) {
                           *(long**)( lVar9 + 8 ) = plVar8;
                        }

                        lVar12 = *(long*)*pauVar4;
                        *(long**)( *pauVar4 + 8 ) = plVar8;
                        if (lVar12 == 0) {
                           *(long**)*pauVar4 = plVar8;
                        }

                        *(int*)pauVar4[1] = *(int*)pauVar4[1] + 1;
                     }

                     NodePath::~NodePath((NodePath*)&local_80);
                     lVar17 = *(long*)( lVar17 + 8 );
                     if (lVar17 == 0) {
                        lVar9 = *(long*)( this + 200 );
                        goto LAB_0010c84c;
                     }

                     lVar9 = *(long*)( this + 200 );
                  }
;
                  LAB_0010c7b8:lVar12 = 0;
                  LAB_0010c7bb:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar15, lVar12, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               LAB_0010c84c:if (lVar9 == 0) goto LAB_0010c7b8;
               lVar12 = *(long*)( lVar9 + -8 );
               if (lVar12 <= lVar15) goto LAB_0010c7bb;
               Node::get_scene_file_path();
               Node::set_scene_file_path((String*)pNVar7);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
               lVar9 = *(long*)( this + 200 );
               if (lVar9 == 0) goto LAB_0010c7b8;
               lVar12 = *(long*)( lVar9 + -8 );
               if (lVar12 <= lVar15) goto LAB_0010c7bb;
               pOVar2 = *(Object**)( lVar9 + lVar16 );
               EditorNode::set_edited_scene(EditorNode::singleton);
               cVar5 = predelete_handler(pOVar2);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

               if (*(long*)( this + 200 ) == 0) goto LAB_0010c970;
               lVar12 = *(long*)( *(long*)( this + 200 ) + -8 );
               if (lVar12 <= lVar15) goto LAB_0010c973;
               CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
               List<Node*,DefaultAllocator>::operator =((List<Node*,DefaultAllocator>*)( lVar16 + *(long*)( this + 200 ) + 0x20 ), (List*)&local_88);
               List<Node*,DefaultAllocator>::~List((List<Node*,DefaultAllocator>*)&local_88);
               EditorProgress::~EditorProgress((EditorProgress*)&local_78);
            }
 else {
               uVar11 = 0x2d1;
               pcVar10 = "Condition \"err != OK\" is true. Returning: false";
               LAB_0010c9ca:_err_print_error("check_and_update_scene", "editor/editor_data.cpp", uVar11, pcVar10, 0, 0);
               EditorProgress::~EditorProgress((EditorProgress*)&local_78);
               local_d1 = '\0';
            }

            cVar5 = RefCounted::unreference();
            if (( cVar5 != '\0' ) && ( cVar5 = predelete_handler((Object*)local_b0) ),cVar5 != '\0') {
               ( **(code**)( *(long*)local_b0 + 0x140 ) )(local_b0);
               Memory::free_static(local_b0, false);
            }

         }

         pvVar13 = (void*)local_68._0_8_;
         if ((void*)local_68._0_8_ == (void*)0x0) goto LAB_0010c340;
         if (local_48._4_4_ != 0) {
            if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
               memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) << 2);
               if (local_48._4_4_ == 0) goto LAB_0010c778;
            }

            lVar12 = 0;
            do {
               lVar15 = lVar12 * 8;
               lVar12 = lVar12 + 1;
               CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar13 + lVar15 ));
               pvVar13 = (void*)local_68._0_8_;
            }
 while ( (uint)lVar12 < local_48._4_4_ );
            local_48 = local_48 & 0xffffffff;
            if ((void*)local_68._0_8_ == (void*)0x0) goto LAB_0010c340;
         }

         LAB_0010c778:Memory::free_static(pvVar13, false);
         Memory::free_static((void*)local_58._0_8_, false);
         Memory::free_static((void*)local_68._8_8_, false);
         Memory::free_static((void*)local_58._8_8_, false);
         goto LAB_0010c340;
      }

   }

   local_d1 = '\0';
   LAB_0010c340:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return local_d1;
}
/* EditorData::set_edited_scene_live_edit_root(NodePath const&) */void EditorData::set_edited_scene_live_edit_root(EditorData *this, NodePath *param_1) {
   long lVar1;
   long lVar2;
   lVar2 = (long)*(int*)( this + 0xd0 );
   lVar1 = *(long*)( this + 200 );
   if (*(int*)( this + 0xd0 ) < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         goto LAB_0010ca89;
      }

   }
 else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar1) {
         CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
         NodePath::operator =((NodePath*)( lVar2 * 0x60 + *(long*)( this + 200 ) + 0x48 ), param_1);
         return;
      }

      goto LAB_0010ca89;
   }

   lVar1 = 0;
   LAB_0010ca89:_err_print_index_error("set_edited_scene_live_edit_root", "editor/editor_data.cpp", 0x390, lVar2, lVar1, "current_edited_scene", "edited_scene.size()", "", false, false);
   return;
}
/* EditorData::set_scene_path(int, String const&) */void EditorData::set_scene_path(EditorData *this, int param_1, String *param_2) {
   String *pSVar1;
   code *pcVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   lVar5 = (long)param_1;
   lVar4 = *(long*)( this + 200 );
   if (param_1 < 0) {
      if (lVar4 != 0) {
         lVar4 = *(long*)( lVar4 + -8 );
         goto LAB_0010cb8d;
      }

   }
 else if (lVar4 != 0) {
      lVar4 = *(long*)( lVar4 + -8 );
      if (lVar5 < lVar4) {
         CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
         lVar3 = *(long*)( this + 200 );
         lVar4 = lVar3 + lVar5 * 0x60;
         if (*(long*)( lVar4 + 8 ) != *(long*)param_2) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( lVar4 + 8 ), (CowData*)param_2);
            lVar3 = *(long*)( this + 200 );
         }

         if (lVar3 == 0) {
            lVar4 = 0;
         }
 else {
            lVar4 = *(long*)( lVar3 + -8 );
            if (lVar5 < lVar4) {
               pSVar1 = *(String**)( lVar3 + lVar5 * 0x60 );
               if (pSVar1 == (String*)0x0) {
                  return;
               }

               Node::set_scene_file_path(pSVar1);
               return;
            }

         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar4, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      goto LAB_0010cb8d;
   }

   lVar4 = 0;
   LAB_0010cb8d:_err_print_index_error("set_scene_path", "editor/editor_data.cpp", 0x378, lVar5, lVar4, "p_idx", "edited_scene.size()", "", false, false);
   return;
}
/* EditorData::set_scene_modified_time(int, unsigned long) */void EditorData::set_scene_modified_time(EditorData *this, int param_1, ulong param_2) {
   long lVar1;
   long lVar2;
   if (param_1 == -1) {
      param_1 = *(int*)( this + 0xd0 );
   }

   lVar1 = *(long*)( this + 200 );
   lVar2 = (long)param_1;
   if (param_1 < 0) {
      if (lVar1 != 0) {
         lVar1 = *(long*)( lVar1 + -8 );
         goto LAB_0010cc99;
      }

   }
 else if (lVar1 != 0) {
      lVar1 = *(long*)( lVar1 + -8 );
      if (lVar2 < lVar1) {
         CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
         *(ulong*)( lVar2 * 0x60 + *(long*)( this + 200 ) + 0x10 ) = param_2;
         return;
      }

      goto LAB_0010cc99;
   }

   lVar1 = 0;
   LAB_0010cc99:_err_print_index_error("set_scene_modified_time", "editor/editor_data.cpp", 0x32b, lVar2, lVar1, "p_idx", "edited_scene.size()", "", false, false);
   return;
}
/* EditorData::set_edited_scene_root(Node*) */void EditorData::set_edited_scene_root(EditorData *this, Node *param_1) {
   CowData<EditorData::EditedScene> *this_00;
   code *pcVar1;
   undefined8 uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   int iVar6;
   long in_FS_OFFSET;
   long local_38;
   long local_30;
   lVar5 = (long)*(int*)( this + 0xd0 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar3 = *(long*)( this + 200 );
   if (*(int*)( this + 0xd0 ) < 0) {
      if (lVar3 == 0) goto LAB_0010d000;
      lVar3 = *(long*)( lVar3 + -8 );
   }
 else {
      if (lVar3 != 0) {
         lVar3 = *(long*)( lVar3 + -8 );
         if (lVar3 <= lVar5) goto LAB_0010cfa9;
         this_00 = (CowData<EditorData::EditedScene>*)( this + 200 );
         CowData<EditorData::EditedScene>::_copy_on_write(this_00);
         lVar3 = *(long*)( this + 200 );
         *(Node**)( lVar3 + lVar5 * 0x60 ) = param_1;
         if (param_1 == (Node*)0x0) {
            LAB_0010ce30:lVar5 = (long)*(int*)( this + 0xd0 );
            if (lVar5 < 0) {
               if (lVar3 != 0) {
                  lVar4 = *(long*)( lVar3 + -8 );
                  goto LAB_0010cf5d;
               }

            }
 else if (lVar3 != 0) {
               lVar4 = *(long*)( lVar3 + -8 );
               if (lVar4 <= lVar5) goto LAB_0010cf5d;
               lVar3 = lVar3 + lVar5 * 0x60;
               lVar5 = *(long*)( lVar3 + 8 );
               if (( lVar5 == 0 ) || ( *(uint*)( lVar5 + -8 ) < 2 )) goto LAB_0010ce74;
               uVar2 = FileAccess::get_modified_time((String*)( lVar3 + 8 ));
               lVar5 = (long)*(int*)( this + 0xd0 );
               lVar3 = *(long*)( this + 200 );
               if (lVar5 < 0) goto LAB_0010d008;
               if (lVar3 != 0) {
                  lVar3 = *(long*)( lVar3 + -8 );
                  if (lVar5 < lVar3) {
                     CowData<EditorData::EditedScene>::_copy_on_write(this_00);
                     *(undefined8*)( lVar5 * 0x60 + *(long*)( this + 200 ) + 0x10 ) = uVar2;
                     goto LAB_0010ce74;
                  }

                  goto LAB_0010d011;
               }

               goto LAB_0010d070;
            }

         }
 else {
            Node::get_scene_file_path();
            if (( local_38 != 0 ) && ( iVar6 = iVar6 != 0 )) {
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
               if (iVar6 == 1) goto LAB_0010ce9d;
               Node::get_scene_file_path();
               lVar5 = (long)*(int*)( this + 0xd0 );
               lVar3 = *(long*)( this + 200 );
               if (lVar5 < 0) {
                  LAB_0010d008:if (lVar3 != 0) {
                     lVar3 = *(long*)( lVar3 + -8 );
                     goto LAB_0010d011;
                  }

               }
 else if (lVar3 != 0) {
                  lVar3 = *(long*)( lVar3 + -8 );
                  if (lVar3 <= lVar5) goto LAB_0010d011;
                  CowData<EditorData::EditedScene>::_copy_on_write(this_00);
                  lVar3 = lVar5 * 0x60 + *(long*)( this + 200 );
                  if (*(long*)( lVar3 + 8 ) != local_38) {
                     CowData<char32_t>::_unref((CowData<char32_t>*)( lVar3 + 8 ));
                     *(long*)( lVar3 + 8 ) = local_38;
                     local_38 = 0;
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
                  lVar3 = *(long*)( this + 200 );
                  goto LAB_0010ce30;
               }

               LAB_0010d070:lVar3 = 0;
               LAB_0010d011:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar5, lVar3, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
            LAB_0010ce9d:lVar5 = (long)*(int*)( this + 0xd0 );
            lVar3 = *(long*)( this + 200 );
            if (lVar5 < 0) {
               if (lVar3 != 0) {
                  lVar4 = *(long*)( lVar3 + -8 );
                  goto LAB_0010cf5d;
               }

            }
 else if (lVar3 != 0) {
               lVar4 = *(long*)( lVar3 + -8 );
               if (lVar4 <= lVar5) goto LAB_0010cf5d;
               Node::set_scene_file_path((String*)param_1);
               lVar3 = *(long*)( this + 200 );
               goto LAB_0010ce30;
            }

         }

         lVar4 = 0;
         LAB_0010cf5d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar4, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      LAB_0010d000:lVar3 = 0;
   }

   LAB_0010cfa9:_err_print_index_error("set_edited_scene_root", "editor/editor_data.cpp", 0x30a, lVar5, lVar3, "current_edited_scene", "edited_scene.size()", "", false, false);
   LAB_0010ce74:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorData::is_scene_changed(int) */ulong EditorData::is_scene_changed(EditorData *this, int param_1) {
   code *pcVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   if (param_1 == -1) {
      param_1 = *(int*)( this + 0xd0 );
   }

   lVar4 = *(long*)( this + 200 );
   lVar5 = (long)param_1;
   if (param_1 < 0) {
      if (lVar4 != 0) {
         lVar4 = *(long*)( lVar4 + -8 );
         goto LAB_0010d13d;
      }

   }
 else if (lVar4 != 0) {
      lVar4 = *(long*)( lVar4 + -8 );
      if (lVar5 < lVar4) {
         EditorUndoRedoManager::get_or_create_history((int)*(undefined8*)( this + 0x78 ));
         lVar2 = UndoRedo::get_version();
         lVar4 = *(long*)( this + 200 );
         if (lVar4 == 0) {
            lVar3 = 0;
         }
 else {
            lVar3 = *(long*)( lVar4 + -8 );
            if (lVar5 < lVar3) {
               lVar4 = *(long*)( lVar4 + 0x58 + lVar5 * 0x60 );
               CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
               *(long*)( *(long*)( this + 200 ) + 0x58 + lVar5 * 0x60 ) = lVar2;
               return CONCAT71(( int7 )(int3)((uint)param_1 >> 8), lVar4 != lVar2) & 0xffffffff;
            }

         }

         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar5, lVar3, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      goto LAB_0010d13d;
   }

   lVar4 = 0;
   LAB_0010d13d:_err_print_index_error("is_scene_changed", "editor/editor_data.cpp", 0x1af, lVar5, lVar4, "p_idx", "edited_scene.size()", "", false, false);
   return 0;
}
/* EditorData::clear_edited_scenes() */void EditorData::clear_edited_scenes(EditorData *this) {
   Object *pOVar1;
   char cVar2;
   long lVar3;
   long lVar4;
   lVar3 = *(long*)( this + 200 );
   if (lVar3 == 0) {
      return;
   }

   lVar4 = 0;
   do {
      if (*(long*)( lVar3 + -8 ) <= lVar4) {
         if (*(long*)( lVar3 + -8 ) == 0) {
            return;
         }

         CowData<EditorData::EditedScene>::_unref((CowData<EditorData::EditedScene>*)( this + 200 ));
         return;
      }

      pOVar1 = *(Object**)( lVar3 + lVar4 * 0x60 );
      if (pOVar1 != (Object*)0x0) {
         cVar2 = predelete_handler(pOVar1);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
            Memory::free_static(pOVar1, false);
         }

         lVar3 = *(long*)( this + 200 );
      }

      lVar4 = lVar4 + 1;
   }
 while ( lVar3 != 0 );
   return;
}
/* EditorData::remove_editor_plugin(EditorPlugin*) */void EditorData::remove_editor_plugin(EditorData *this, EditorPlugin *param_1) {
   long lVar1;
   long lVar2;
   long lVar3;
   lVar1 = *(long*)( this + 8 );
   if (( lVar1 != 0 ) && ( lVar3= *(long *)(lVar1 + -8),0 < lVar3 )) {
      lVar2 = 0;
      do {
         if (*(EditorPlugin**)( lVar1 + lVar2 * 8 ) == param_1) {
            if (lVar3 <= lVar2) {
               _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar2, lVar3, "p_index", "size()", "", false, false);
               return;
            }

            CowData<EditorPlugin*>::_copy_on_write((CowData<EditorPlugin*>*)( this + 8 ));
            lVar1 = *(long*)( this + 8 );
            if (lVar1 == 0) {
               lVar3 = -1;
            }
 else {
               lVar3 = *(long*)( lVar1 + -8 ) + -1;
               if (lVar2 < lVar3) {
                  memmove((void*)( lVar1 + lVar2 * 8 ), (void*)( lVar1 + 8 + lVar2 * 8 ), ( lVar3 - lVar2 ) * 8);
               }

            }

            CowData<EditorPlugin*>::resize<false>((CowData<EditorPlugin*>*)( this + 8 ), lVar3);
            return;
         }

         lVar2 = lVar2 + 1;
      }
 while ( lVar3 != lVar2 );
      return;
   }

   return;
}
/* Vector<EditorPlugin*>::push_back(EditorPlugin*) [clone .isra.0] */void Vector<EditorPlugin*>::push_back(Vector<EditorPlugin*> *this, EditorPlugin *param_1) {
   int iVar1;
   long lVar2;
   long lVar3;
   if (*(long*)( this + 8 ) == 0) {
      lVar2 = 1;
   }
 else {
      lVar2 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar1 = CowData<EditorPlugin*>::resize<false>((CowData<EditorPlugin*>*)( this + 8 ), lVar2);
   if (iVar1 == 0) {
      if (*(long*)( this + 8 ) == 0) {
         lVar3 = -1;
         lVar2 = 0;
      }
 else {
         lVar2 = *(long*)( *(long*)( this + 8 ) + -8 );
         lVar3 = lVar2 + -1;
         if (-1 < lVar3) {
            CowData<EditorPlugin*>::_copy_on_write((CowData<EditorPlugin*>*)( this + 8 ));
            *(EditorPlugin**)( *(long*)( this + 8 ) + lVar3 * 8 ) = param_1;
            return;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar3, lVar2, "p_index", "size()", "", false, false);
      return;
   }

   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   return;
}
/* EditorData::add_editor_plugin(EditorPlugin*) */void EditorData::add_editor_plugin(EditorData *this, EditorPlugin *param_1) {
   Vector<EditorPlugin*>::push_back((Vector<EditorPlugin*>*)this, param_1);
   return;
}
/* EditorData::get_handling_sub_editors(Object*) */Object *EditorData::get_handling_sub_editors(Object *param_1) {
   code *pcVar1;
   char cVar2;
   long lVar3;
   uint uVar4;
   ulong uVar5;
   long in_RSI;
   long lVar6;
   *(undefined8*)( param_1 + 8 ) = 0;
   lVar3 = *(long*)( in_RSI + 8 );
   if (( lVar3 == 0 ) || ( uVar4 = *(int*)( lVar3 + -8 ) - 1 ),(int)uVar4 < 0) {
      return param_1;
   }

   uVar5 = (ulong)uVar4;
   while (lVar3 != 0) {
      lVar6 = *(long*)( lVar3 + -8 );
      if (lVar6 <= (long)uVar5) goto LAB_0010d52a;
      cVar2 = ( **(code**)( **(long**)( lVar3 + uVar5 * 8 ) + 0x208 ) )();
      if (cVar2 == '\0') {
         lVar3 = *(long*)( in_RSI + 8 );
         if (lVar3 == 0) break;
         lVar6 = *(long*)( lVar3 + -8 );
         if (lVar6 <= (long)uVar5) goto LAB_0010d52a;
         cVar2 = ( **(code**)( **(long**)( lVar3 + uVar5 * 8 ) + 0x228 ) )();
         if (cVar2 != '\0') {
            lVar3 = *(long*)( in_RSI + 8 );
            if (lVar3 == 0) break;
            lVar6 = *(long*)( lVar3 + -8 );
            if (lVar6 <= (long)uVar5) goto LAB_0010d52a;
            Vector<EditorPlugin*>::push_back((Vector<EditorPlugin*>*)param_1, *(EditorPlugin**)( lVar3 + uVar5 * 8 ));
         }

      }

      uVar5 = uVar5 - 1;
      if ((int)uVar5 < 0) {
         return param_1;
      }

      lVar3 = *(long*)( in_RSI + 8 );
   }
;
   lVar6 = 0;
   LAB_0010d52a:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, uVar5, lVar6, "p_index", "size()", "", false, true);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* EditorData::remove_undo_redo_inspector_hook_callback(Callable) */void EditorData::remove_undo_redo_inspector_hook_callback(EditorData *this, Callable *param_2) {
   char cVar1;
   long lVar2;
   Callable *this_00;
   long lVar3;
   long lVar4;
   lVar3 = *(long*)( this + 0x88 );
   if (( lVar3 != 0 ) && ( lVar4 = lVar4 != 0 )) {
      lVar2 = 0;
      while (lVar2 < lVar4) {
         cVar1 = Callable::operator ==((Callable*)( lVar3 + lVar2 * 0x10 ), param_2);
         if (cVar1 != '\0') {
            if (*(long*)( this + 0x88 ) == 0) {
               lVar3 = 0;
            }
 else {
               lVar3 = *(long*)( *(long*)( this + 0x88 ) + -8 );
               if (lVar2 < lVar3) {
                  CowData<Callable>::_copy_on_write((CowData<Callable>*)( this + 0x88 ));
                  lVar3 = *(long*)( this + 0x88 );
                  if (lVar3 == 0) {
                     lVar4 = -1;
                  }
 else {
                     lVar4 = *(long*)( lVar3 + -8 ) + -1;
                     if (lVar2 < lVar4) {
                        this_00 = (Callable*)( lVar3 + lVar2 * 0x10 );
                        do {
                           lVar2 = lVar2 + 1;
                           Callable::operator =(this_00, this_00 + 0x10);
                           this_00 = this_00 + 0x10;
                        }
 while ( lVar4 != lVar2 );
                     }

                  }

                  CowData<Callable>::resize<false>((CowData<Callable>*)( this + 0x88 ), lVar4);
                  return;
               }

            }

            _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar2, lVar3, "p_index", "size()", "", false, false);
            return;
         }

         lVar3 = *(long*)( this + 0x88 );
         lVar2 = lVar2 + 1;
         if (lVar3 == 0) {
            return;
         }

         lVar4 = *(long*)( lVar3 + -8 );
      }
;
   }

   return;
}
/* EditorData::add_undo_redo_inspector_hook_callback(Callable) */void EditorData::add_undo_redo_inspector_hook_callback(EditorData *this, Callable *param_2) {
   int iVar1;
   long lVar2;
   long lVar3;
   long in_FS_OFFSET;
   Callable aCStack_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   Callable::Callable(aCStack_48, param_2);
   if (*(long*)( this + 0x88 ) == 0) {
      lVar3 = 1;
   }
 else {
      lVar3 = *(long*)( *(long*)( this + 0x88 ) + -8 ) + 1;
   }

   iVar1 = CowData<Callable>::resize<false>((CowData<Callable>*)( this + 0x88 ), lVar3);
   if (iVar1 == 0) {
      if (*(long*)( this + 0x88 ) == 0) {
         lVar2 = -1;
         lVar3 = 0;
      }
 else {
         lVar3 = *(long*)( *(long*)( this + 0x88 ) + -8 );
         lVar2 = lVar3 + -1;
         if (-1 < lVar2) {
            CowData<Callable>::_copy_on_write((CowData<Callable>*)( this + 0x88 ));
            Callable::operator =((Callable*)( lVar2 * 0x10 + *(long*)( this + 0x88 ) ), aCStack_48);
            goto LAB_0010d73e;
         }

      }

      _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar2, lVar3, "p_index", "size()", "", false, false);
   }
 else {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   }

   LAB_0010d73e:Callable::~Callable(aCStack_48);
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorData::remove_custom_type(String const&) */void EditorData::remove_custom_type(EditorData *this, String *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
   undefined8 *puVar4;
   Object *pOVar5;
   Object *pOVar6;
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
   long lVar35;
   ulong uVar36;
   uint uVar37;
   long lVar38;
   long *plVar39;
   uint *puVar40;
   puVar4 = *(undefined8**)( this + 0x58 );
   while (true) {
      if (puVar4 == (undefined8*)0x0) {
         return;
      }

      lVar35 = puVar4[4];
      if (lVar35 != 0) break;
      LAB_0010d84e:puVar4 = (undefined8*)*puVar4;
   }
;
   lVar38 = 0;
   while (true) {
      if (*(long*)( lVar35 + -8 ) <= lVar38) goto LAB_0010d84e;
      cVar28 = String::operator ==((String*)( lVar35 + lVar38 * 0x18 ), param_1);
      if (cVar28 != '\0') break;
      lVar35 = puVar4[4];
      lVar38 = lVar38 + 1;
      if (lVar35 == 0) goto LAB_0010d84e;
   }
;
   if (puVar4[4] == 0) {
      lVar35 = 0;
   }
 else {
      lVar35 = *(long*)( puVar4[4] + -8 );
      if (lVar38 < lVar35) {
         CowData<EditorData::CustomType>::_copy_on_write((CowData<EditorData::CustomType>*)( puVar4 + 4 ));
         lVar35 = puVar4[4];
         if (lVar35 == 0) {
            lVar32 = -1;
         }
 else {
            lVar32 = *(long*)( lVar35 + -8 ) + -1;
            if (lVar38 < lVar32) {
               plVar39 = (long*)( lVar35 + lVar38 * 0x18 );
               do if (pOVar5 != pOVar6) {
                  plVar39[2] = (long)pOVar5;
                  if (( pOVar5 != (Object*)0x0 ) && ( cVar28 = RefCounted::reference() ),cVar28 == '\0') {
                     plVar39[2] = 0;
                  }

                  if (( ( pOVar6 != (Object*)0x0 ) && ( cVar28 = RefCounted::unreference() ),cVar28 != '\0' )) &&( cVar28 = cVar28 != '\0' )(**(code**)( *(long*)pOVar6 + 0x140 ))(pOVar6);
                  Memory::free_static(pOVar6, false);
               }
 while ( lVar32 != lVar38 );
            }

         }

         CowData<EditorData::CustomType>::resize<false>((CowData<EditorData::CustomType>*)( puVar4 + 4 ), lVar32);
         LAB_0010da0c:if (( ( puVar4[4] == 0 ) && ( *(long*)( this + 0x48 ) != 0 ) ) && ( *(int*)( this + 0x6c ) != 0 )) {
            uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x68 ) * 4 );
            uVar36 = CONCAT44(0, uVar3);
            lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x68 ) * 8 );
            uVar29 = String::hash();
            lVar38 = *(long*)( this + 0x50 );
            uVar30 = 1;
            if (uVar29 != 0) {
               uVar30 = uVar29;
            }

            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar30 * lVar35;
            auVar18._8_8_ = 0;
            auVar18._0_8_ = uVar36;
            lVar32 = SUB168(auVar8 * auVar18, 8);
            uVar29 = *(uint*)( lVar38 + lVar32 * 4 );
            uVar31 = SUB164(auVar8 * auVar18, 8);
            if (uVar29 == 0) {
               return;
            }

            uVar37 = 0;
            do {
               if (uVar30 == uVar29) {
                  cVar28 = String::operator ==((String*)( *(long*)( *(long*)( this + 0x48 ) + lVar32 * 8 ) + 0x10 ), (String*)( puVar4 + 2 ));
                  if (cVar28 != '\0') {
                     lVar35 = *(long*)( this + 0x50 );
                     lVar38 = *(long*)( this + 0x48 );
                     uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x68 ) * 4 );
                     uVar36 = CONCAT44(0, uVar3);
                     lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x68 ) * 8 );
                     auVar12._8_8_ = 0;
                     auVar12._0_8_ = ( ulong )(uVar31 + 1) * lVar32;
                     auVar22._8_8_ = 0;
                     auVar22._0_8_ = uVar36;
                     lVar33 = SUB168(auVar12 * auVar22, 8);
                     puVar40 = (uint*)( lVar35 + lVar33 * 4 );
                     uVar29 = SUB164(auVar12 * auVar22, 8);
                     uVar30 = *puVar40;
                     if (( uVar30 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar30 * lVar32,auVar23._8_8_ = 0,auVar23._0_8_ = uVar36,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar3 + uVar29 ) - SUB164(auVar13 * auVar23, 8)) * lVar32,auVar24._8_8_ = 0,auVar24._0_8_ = uVar36,uVar37 = uVar31,SUB164(auVar14 * auVar24, 8) == 0) goto LAB_0010dc32;
                     goto LAB_0010dbec;
                  }

                  lVar38 = *(long*)( this + 0x50 );
               }

               uVar37 = uVar37 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(uVar31 + 1) * lVar35;
               auVar19._8_8_ = 0;
               auVar19._0_8_ = uVar36;
               lVar32 = SUB168(auVar9 * auVar19, 8);
               uVar29 = *(uint*)( lVar38 + lVar32 * 4 );
               uVar31 = SUB164(auVar9 * auVar19, 8);
            }
 while ( ( uVar29 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar29 * lVar35,auVar20._8_8_ = 0,auVar20._0_8_ = uVar36,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar3 + uVar31 ) - SUB164(auVar10 * auVar20, 8)) * lVar35,auVar21._8_8_ = 0,auVar21._0_8_ = uVar36,uVar37 <= SUB164(auVar11 * auVar21, 8) );
         }

         return;
      }

   }

   _err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, lVar38, lVar35, "p_index", "size()", "", false, false);
   goto LAB_0010da0c;
   while (auVar15._8_8_ = 0,auVar15._0_8_ = (ulong)uVar30 * lVar32,auVar25._8_8_ = 0,auVar25._0_8_ = uVar36,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar29 + uVar3 ) - SUB164(auVar15 * auVar25, 8)) * lVar32,auVar26._8_8_ = 0,auVar26._0_8_ = uVar36,uVar37 = uVar31,SUB164(auVar16 * auVar26, 8) != 0) {
      LAB_0010dbec:uVar31 = uVar29;
      puVar1 = (uint*)( lVar35 + (ulong)uVar37 * 4 );
      *puVar40 = *puVar1;
      puVar4 = (undefined8*)( lVar38 + lVar33 * 8 );
      *puVar1 = uVar30;
      puVar2 = (undefined8*)( lVar38 + (ulong)uVar37 * 8 );
      uVar7 = *puVar4;
      *puVar4 = *puVar2;
      *puVar2 = uVar7;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(uVar31 + 1) * lVar32;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar36;
      lVar33 = SUB168(auVar17 * auVar27, 8);
      puVar40 = (uint*)( lVar35 + lVar33 * 4 );
      uVar29 = SUB164(auVar17 * auVar27, 8);
      uVar30 = *puVar40;
      if (uVar30 == 0) break;
   }
;
   LAB_0010dc32:uVar36 = (ulong)uVar31;
   plVar39 = (long*)( lVar38 + uVar36 * 8 );
   *(undefined4*)( lVar35 + uVar36 * 4 ) = 0;
   plVar34 = (long*)*plVar39;
   if (*(long**)( this + 0x58 ) == plVar34) {
      *(long*)( this + 0x58 ) = *plVar34;
      plVar34 = (long*)*plVar39;
   }

   if (*(long**)( this + 0x60 ) == plVar34) {
      *(long*)( this + 0x60 ) = plVar34[1];
      plVar34 = (long*)*plVar39;
   }

   if ((long*)plVar34[1] != (long*)0x0) {
      *(long*)plVar34[1] = *plVar34;
      plVar34 = (long*)*plVar39;
   }

   if (*plVar34 != 0) {
      *(long*)( *plVar34 + 8 ) = plVar34[1];
      plVar34 = (long*)*plVar39;
   }

   CowData<EditorData::CustomType>::_unref((CowData<EditorData::CustomType>*)( plVar34 + 4 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( plVar34 + 2 ));
   Memory::free_static(plVar34, false);
   *(undefined8*)( *(long*)( this + 0x48 ) + uVar36 * 8 ) = 0;
   *(int*)( this + 0x6c ) = *(int*)( this + 0x6c ) + -1;
   return;
}
/* EditorData::add_custom_type(String const&, String const&, Ref<Script> const&, Ref<Texture2D>
   const&) */void EditorData::add_custom_type(EditorData *this, String *param_1, String *param_2, Ref *param_3, Ref *param_4) {
   CowData<char32_t> *this_00;
   Object *pOVar1;
   undefined1 auVar2[16];
   Object *pOVar3;
   char cVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   Object *pOVar8;
   HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>> *this_01;
   long lVar9;
   Object *pOVar10;
   Object *pOVar11;
   long in_FS_OFFSET;
   CowData *local_88;
   undefined1 local_78[16];
   Object *local_68;
   undefined8 local_58;
   Object *local_50;
   Object *local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(ulong*)param_3 == 0) {
      _err_print_error("add_custom_type", "editor/editor_data.cpp", 0x20a, "Condition \"p_script.is_null()\" is true.", "It\'s not a reference to a valid Script object.", 0, 0);
      goto LAB_0010e005;
   }

   local_68 = (Object*)0x0;
   local_78 = (undefined1[16])0x0;
   if (*(long*)param_1 == 0) {
      if (*(Object**)param_4 != (Object*)0x0) {
         local_68 = *(Object**)param_4;
         cVar4 = RefCounted::reference();
         pOVar8 = (Object*)0x0;
         if (cVar4 == '\0') goto LAB_0010e0fa;
         goto LAB_0010dd76;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = *(ulong*)param_3;
      local_78 = auVar2 << 0x40;
      cVar4 = RefCounted::reference();
      pOVar8 = (Object*)0x0;
      if (cVar4 == '\0') {
         LAB_0010dd97:local_78._8_8_ = 0;
         goto LAB_0010dda0;
      }

      LAB_0010ddb5:pOVar8 = (Object*)local_78._8_8_;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_78, (CowData*)param_1);
      pOVar8 = local_68;
      pOVar10 = *(Object**)param_4;
      if (pOVar10 != local_68) {
         local_68 = pOVar10;
         if (( pOVar10 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
            LAB_0010e0fa:local_68 = (Object*)0x0;
         }

         if (( ( pOVar8 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
         Memory::free_static(pOVar8, false);
      }

   }

   LAB_0010dd76:pOVar10 = *(Object**)param_3;
   pOVar8 = (Object*)local_78._8_8_;
   if (pOVar10 != (Object*)local_78._8_8_) {
      local_78._8_8_ = pOVar10;
      if (pOVar10 != (Object*)0x0) {
         cVar4 = RefCounted::reference();
         if (cVar4 == '\0') goto LAB_0010dd97;
      }

      LAB_0010dda0:if (( ( pOVar8 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);
      Memory::free_static(pOVar8, false);
   }

   goto LAB_0010ddb5;
}
}local_88 = (CowData*)local_78;this_01 = (HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>*)( this + 0x40 );local_58 = (ulong)local_58._4_4_ << 0x20;cVar4 = HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>::_lookup_pos(this_01, param_2, (uint*)&local_58);if (cVar4 == '\0') {
   local_50 = (Object*)0x0;
   lVar6 = HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>::operator [](this_01, param_2);
   if (*(long*)( lVar6 + 8 ) != 0) {
      CowData<EditorData::CustomType>::_unref((CowData<EditorData::CustomType>*)( lVar6 + 8 ));
      *(undefined8*)( lVar6 + 8 ) = 0;
   }

   CowData<EditorData::CustomType>::_unref((CowData<EditorData::CustomType>*)&local_50);
}
lVar6 = HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>::operator [](this_01, param_2);local_58 = 0;if (local_78._0_8_ != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, local_88);
}
if (( pOVar8 == (Object*)0x0 ) || ( local_50 = pOVar8 ),cVar4 = RefCounted::reference(),pOVar10 = pOVar8,cVar4 == '\0') {
   local_50 = (Object*)0x0;
   pOVar10 = (Object*)0x0;
}
pOVar3 = local_68;if (local_68 == (Object*)0x0) {
   LAB_0010e121:local_48 = (Object*)0x0;
   pOVar11 = (Object*)0x0;
}
 else {
   local_48 = local_68;
   cVar4 = RefCounted::reference();
   pOVar11 = pOVar3;
   if (cVar4 == '\0') goto LAB_0010e121;
}
if (*(long*)( lVar6 + 8 ) == 0) {
   lVar9 = 1;
}
 else {
   lVar9 = *(long*)( *(long*)( lVar6 + 8 ) + -8 ) + 1;
}
iVar5 = CowData<EditorData::CustomType>::resize<false>((CowData<EditorData::CustomType>*)( lVar6 + 8 ), lVar9);if (iVar5 == 0) {
   if (*(long*)( lVar6 + 8 ) == 0) {
      lVar7 = -1;
      lVar9 = 0;
      LAB_0010e31a:_err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar7, lVar9, "p_index", "size()", "", false, false);
      goto LAB_0010dfa0;
   }

   lVar9 = *(long*)( *(long*)( lVar6 + 8 ) + -8 );
   lVar7 = lVar9 + -1;
   if (lVar7 < 0) goto LAB_0010e31a;
   CowData<EditorData::CustomType>::_copy_on_write((CowData<EditorData::CustomType>*)( lVar6 + 8 ));
   this_00 = (CowData<char32_t>*)( *(long*)( lVar6 + 8 ) + lVar7 * 0x18 );
   CowData<char32_t>::_ref(this_00, (CowData*)&local_58);
   pOVar1 = *(Object**)( this_00 + 8 );
   if (pOVar1 != pOVar10) {
      *(Object**)( this_00 + 8 ) = pOVar10;
      if (( pOVar10 != (Object*)0x0 ) && ( cVar4 = RefCounted::reference() ),cVar4 == '\0') {
         *(undefined8*)( this_00 + 8 ) = 0;
      }

      if (( ( pOVar1 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar1 + 0x140 ))(pOVar1);
      Memory::free_static(pOVar1, false);
   }

}
pOVar1 = *(Object**)( this_00 + 0x10 );if (pOVar11 == pOVar1) goto LAB_0010dfa0;*(Object**)( this_00 + 0x10 ) = pOVar11;if (pOVar11 != (Object*)0x0) {
   cVar4 = RefCounted::reference();
   if (cVar4 == '\0') {
      *(undefined8*)( this_00 + 0x10 ) = 0;
   }

   if (( ( pOVar1 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) goto LAB_0010df7f;
   goto LAB_0010dfa5;
}
if (( ( pOVar1 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) {
   LAB_0010df7f:( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
   Memory::free_static(pOVar1, false);
   goto LAB_0010dfa0;
}
 else {
   _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
   LAB_0010dfa0:if (pOVar11 != (Object*)0x0) {
      LAB_0010dfa5:cVar4 = RefCounted::unreference();
      if (( cVar4 != '\0' ) && ( cVar4 = predelete_handler(pOVar11) ),cVar4 != '\0') {
         ( **(code**)( *(long*)pOVar11 + 0x140 ) )(pOVar11);
         Memory::free_static(pOVar11, false);
      }

   }

}
if (( ( pOVar10 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar10 + 0x140 ))(pOVar10);Memory::free_static(pOVar10, false);}CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);if (( ( pOVar3 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar3 + 0x140 ))(pOVar3);Memory::free_static(pOVar3, false);}if (( ( pOVar8 != (Object*)0x0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0' )) &&( cVar4 = cVar4 != '\0' )(**(code**)( *(long*)pOVar8 + 0x140 ))(pOVar8);Memory::free_static(pOVar8, false);}CowData<char32_t>::_unref((CowData<char32_t>*)local_88);LAB_0010e005:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return;}/* EditorData::remove_scene(int) */void EditorData::remove_scene(EditorData *this, int param_1) {
   String *pSVar1;
   Object *pOVar2;
   code *pcVar3;
   long *plVar4;
   char cVar5;
   long lVar6;
   int iVar7;
   long lVar8;
   long lVar9;
   long lVar10;
   long lVar11;
   long in_FS_OFFSET;
   long local_98;
   undefined8 local_90;
   Variant *local_88[2];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   lVar9 = (long)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar6 = *(long*)( this + 200 );
   if (param_1 < 0) {
      if (lVar6 == 0) goto LAB_0010e770;
      lVar10 = *(long*)( lVar6 + -8 );
   }
 else {
      if (lVar6 != 0) {
         lVar10 = *(long*)( lVar6 + -8 );
         if (lVar10 <= lVar9) goto LAB_0010e61d;
         lVar10 = lVar9 * 0x60;
         if (*(long*)( lVar6 + lVar10 ) != 0) {
            lVar8 = *(long*)( this + 8 );
            if (lVar8 == 0) {
               LAB_0010e4de:pOVar2 = *(Object**)( lVar6 + lVar10 );
               cVar5 = predelete_handler(pOVar2);
               if (cVar5 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

               if (*(long*)( this + 200 ) == 0) {
                  lVar6 = 0;
                  LAB_0010e77b:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar9, lVar6, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

               lVar6 = *(long*)( *(long*)( this + 200 ) + -8 );
               if (lVar6 <= lVar9) goto LAB_0010e77b;
               CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 200 ));
               lVar6 = *(long*)( this + 200 );
               iVar7 = *(int*)( this + 0xd0 );
               *(undefined8*)( lVar6 + lVar10 ) = 0;
               if (iVar7 <= param_1) goto LAB_0010e54f;
               LAB_0010e600:*(int*)( this + 0xd0 ) = iVar7 + -1;
               goto LAB_0010e55d;
            }

            lVar11 = 0;
            do {
               if (*(long*)( lVar8 + -8 ) <= lVar11) break;
               pSVar1 = *(String**)( lVar8 + lVar11 * 8 );
               if (lVar6 == 0) goto LAB_0010e46b;
               lVar8 = *(long*)( lVar6 + -8 );
               if (lVar8 <= lVar9) goto LAB_0010e46e;
               lVar11 = lVar11 + 1;
               Node::get_scene_file_path();
               EditorPlugin::notify_scene_closed(pSVar1);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
               lVar8 = *(long*)( this + 8 );
               lVar6 = *(long*)( this + 200 );
            }
 while ( lVar8 != 0 );
            if (lVar6 != 0) {
               lVar8 = *(long*)( lVar6 + -8 );
               if (lVar8 <= lVar9) goto LAB_0010e46e;
               goto LAB_0010e4de;
            }

            LAB_0010e46b:lVar8 = 0;
            LAB_0010e46e:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar8, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }

         iVar7 = *(int*)( this + 0xd0 );
         if (param_1 < iVar7) {
            *(int*)( this + 0xd0 ) = iVar7 + -1;
         }
 else {
            LAB_0010e54f:if (( iVar7 != 0 ) && ( param_1 == iVar7 )) goto LAB_0010e600;
            LAB_0010e55d:if (lVar6 == 0) goto LAB_0010e46b;
         }

         plVar4 = EditorNode::singleton;
         lVar8 = *(long*)( lVar6 + -8 );
         if (lVar8 <= lVar9) goto LAB_0010e46e;
         lVar8 = *(long*)( lVar6 + lVar10 + 8 );
         if (( lVar8 == 0 ) || ( *(uint*)( lVar8 + -8 ) < 2 )) {
            iVar7 = (int)*(undefined8*)( this + 0x78 );
         }
 else {
            local_90 = 0;
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_90, (CowData*)( lVar6 + lVar10 + 8 ));
            StringName::StringName((StringName*)&local_98, "scene_closed", false);
            Variant::Variant((Variant*)local_78, (String*)&local_90);
            local_60 = 0;
            local_58 = (undefined1[16])0x0;
            local_88[0] = (Variant*)local_78;
            ( **(code**)( *plVar4 + 0xd0 ) )(plVar4, (StringName*)&local_98, local_88, 1);
            if (Variant::needs_deinit[(int)local_60] != '\0') {
               Variant::_clear_internal();
            }

            if (Variant::needs_deinit[local_78[0]] != '\0') {
               Variant::_clear_internal();
            }

            if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
               StringName::unref();
            }

            CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
            iVar7 = (int)*(undefined8*)( this + 0x78 );
            if (*(long*)( this + 200 ) == 0) goto LAB_0010e46b;
            lVar8 = *(long*)( *(long*)( this + 200 ) + -8 );
            if (lVar8 <= lVar9) goto LAB_0010e46e;
         }

         cVar5 = EditorUndoRedoManager::has_history(iVar7);
         if (cVar5 != '\0') {
            lVar6 = *(long*)( this + 200 );
            if (lVar6 == 0) goto LAB_0010e46b;
            lVar8 = *(long*)( lVar6 + -8 );
            if (lVar8 <= lVar9) goto LAB_0010e46e;
            EditorUndoRedoManager::discard_history((int)*(undefined8*)( this + 0x78 ), SUB41(*(undefined4*)( lVar6 + 0x50 + lVar10 ), 0));
         }

         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            Vector<EditorData::EditedScene>::remove_at((Vector<EditorData::EditedScene>*)( this + 0xc0 ), lVar9);
            return;
         }

         goto LAB_0010e7df;
      }

      LAB_0010e770:lVar10 = 0;
   }

   LAB_0010e61d:_err_print_index_error("remove_scene", "editor/editor_data.cpp", 0x285, lVar9, lVar10, "p_idx", "edited_scene.size()", "", false, false);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010e7df:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CowData<EditorData::EditedScene>::insert(long, EditorData::EditedScene const&) [clone .isra.0] */void CowData<EditorData::EditedScene>::insert(CowData<EditorData::EditedScene> *this, long param_1, EditedScene *param_2) {
   long lVar1;
   void *pvVar2;
   undefined8 uVar3;
   int iVar4;
   undefined1(*pauVar5)[16];
   undefined8 *puVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   long lVar10;
   undefined8 *puVar11;
   CowData<EditorSelectionHistory::HistoryElement> *this_00;
   long *plVar12;
   if (*(long*)this == 0) {
      lVar10 = 1;
      lVar8 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)this + -8 );
      lVar10 = lVar8 + 1;
   }

   if (( param_1 < 0 ) || ( lVar10 <= param_1 )) {
      _err_print_index_error("insert", "./core/templates/cowdata.h", 0xf0, param_1, lVar10, "p_pos", "new_size", "", false, false);
      return;
   }

   iVar4 = resize<false>(this, lVar10);
   if (iVar4 != 0) {
      _err_print_error("insert", "./core/templates/cowdata.h", 0xf2, "Condition \"err\" is true. Returning: err", 0, 0);
      return;
   }

   _copy_on_write(this);
   lVar10 = *(long*)this;
   if (param_1 < lVar8) {
      this_00 = (CowData<EditorSelectionHistory::HistoryElement>*)( lVar10 + 0x30 + lVar8 * 0x60 );
      do {
         lVar7 = *(long*)( this_00 + -0x88 );
         *(undefined8*)( this_00 + -0x30 ) = *(undefined8*)( this_00 + -0x90 );
         lVar1 = *(long*)( this_00 + -0x28 );
         if (lVar1 != lVar7) {
            if (lVar1 != 0) {
               LOCK();
               plVar12 = (long*)( lVar1 + -0x10 );
               *plVar12 = *plVar12 + -1;
               UNLOCK();
               if (*plVar12 == 0) {
                  lVar7 = *(long*)( this_00 + -0x28 );
                  *(undefined8*)( this_00 + -0x28 ) = 0;
                  Memory::free_static((void*)( lVar7 + -0x10 ), false);
               }

               lVar7 = *(long*)( this_00 + -0x88 );
            }

            *(long*)( this_00 + -0x28 ) = lVar7;
            *(undefined8*)( this_00 + -0x88 ) = 0;
         }

         *(undefined8*)( this_00 + -0x20 ) = *(undefined8*)( this_00 + -0x80 );
         Dictionary::operator =((Dictionary*)( this_00 + -0x18 ), (Dictionary*)( this_00 + -0x78 ));
         plVar12 = *(long**)( this_00 + -0x10 );
         if (plVar12 != (long*)0x0) {
            do {
               pvVar2 = (void*)*plVar12;
               if (pvVar2 == (void*)0x0) goto LAB_0010e932;
               if (*(long**)( (long)pvVar2 + 0x18 ) == plVar12) {
                  lVar7 = *(long*)( (long)pvVar2 + 8 );
                  lVar1 = *(long*)( (long)pvVar2 + 0x10 );
                  *plVar12 = lVar7;
                  if (pvVar2 == (void*)plVar12[1]) {
                     plVar12[1] = lVar1;
                  }

                  if (lVar1 != 0) {
                     *(long*)( lVar1 + 8 ) = lVar7;
                     lVar7 = *(long*)( (long)pvVar2 + 8 );
                  }

                  if (lVar7 != 0) {
                     *(long*)( lVar7 + 0x10 ) = lVar1;
                  }

                  Memory::free_static(pvVar2, false);
                  *(int*)( plVar12 + 2 ) = (int)plVar12[2] + -1;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }

               plVar12 = *(long**)( this_00 + -0x10 );
            }
 while ( (int)plVar12[2] != 0 );
            Memory::free_static(plVar12, false);
         }

         LAB_0010e932:uVar3 = *(undefined8*)( this_00 + -0x70 );
         *(undefined8*)( this_00 + -0x70 ) = 0;
         *(undefined8*)( this_00 + -0x10 ) = uVar3;
         if (*(long*)this_00 != *(long*)( this_00 + -0x60 )) {
            CowData<EditorSelectionHistory::HistoryElement>::_unref(this_00);
            uVar3 = *(undefined8*)( this_00 + -0x60 );
            *(undefined8*)( this_00 + -0x60 ) = 0;
            *(undefined8*)this_00 = uVar3;
         }

         lVar8 = lVar8 + -1;
         *(undefined4*)( this_00 + 8 ) = *(undefined4*)( this_00 + -0x58 );
         Dictionary::operator =((Dictionary*)( this_00 + 0x10 ), (Dictionary*)( this_00 + -0x50 ));
         NodePath::operator =((NodePath*)( this_00 + 0x18 ), (NodePath*)( this_00 + -0x48 ));
         *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( this_00 + -0x40 );
         *(undefined8*)( this_00 + 0x28 ) = *(undefined8*)( this_00 + -0x38 );
         this_00 = this_00 + -0x60;
      }
 while ( param_1 != lVar8 );
   }

   puVar9 = (undefined8*)( param_1 * 0x60 + lVar10 );
   *puVar9 = *(undefined8*)param_2;
   if (puVar9[1] != *(long*)( param_2 + 8 )) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar9 + 1 ), (CowData*)( param_2 + 8 ));
   }

   puVar9[2] = *(undefined8*)( param_2 + 0x10 );
   Dictionary::operator =((Dictionary*)( puVar9 + 3 ), (Dictionary*)( param_2 + 0x18 ));
   plVar12 = (long*)puVar9[4];
   if (plVar12 != (long*)0x0) {
      do {
         pvVar2 = (void*)*plVar12;
         if (pvVar2 == (void*)0x0) goto LAB_0010ea61;
         if (plVar12 == *(long**)( (long)pvVar2 + 0x18 )) {
            lVar10 = *(long*)( (long)pvVar2 + 8 );
            lVar8 = *(long*)( (long)pvVar2 + 0x10 );
            *plVar12 = lVar10;
            if (pvVar2 == (void*)plVar12[1]) {
               plVar12[1] = lVar8;
            }

            if (lVar8 != 0) {
               *(long*)( lVar8 + 8 ) = lVar10;
               lVar10 = *(long*)( (long)pvVar2 + 8 );
            }

            if (lVar10 != 0) {
               *(long*)( lVar10 + 0x10 ) = lVar8;
            }

            Memory::free_static(pvVar2, false);
            *(int*)( plVar12 + 2 ) = (int)plVar12[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar12 = (long*)puVar9[4];
      }
 while ( (int)plVar12[2] != 0 );
      Memory::free_static(plVar12, false);
      puVar9[4] = 0;
   }

   plVar12 = (long*)0x0;
   LAB_0010ea61:if (( *(long**)( param_2 + 0x20 ) != (long*)0x0 ) && ( puVar11 = (undefined8*)**(long**)( param_2 + 0x20 ) ),puVar11 != (undefined8*)0x0) {
      if (plVar12 == (long*)0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         puVar9[4] = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            puVar6 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
            uVar3 = *puVar11;
            puVar6[1] = 0;
            *puVar6 = uVar3;
            plVar12 = (long*)puVar9[4];
            lVar10 = plVar12[1];
            puVar6[3] = plVar12;
            puVar6[2] = lVar10;
            if (lVar10 != 0) {
               *(undefined8**)( lVar10 + 8 ) = puVar6;
            }

            plVar12[1] = (long)puVar6;
            if (*plVar12 == 0) break;
            puVar11 = (undefined8*)puVar11[1];
            *(int*)( plVar12 + 2 ) = (int)plVar12[2] + 1;
            if (puVar11 == (undefined8*)0x0) goto LAB_0010eb4c;
         }
;
         puVar11 = (undefined8*)puVar11[1];
         *(int*)( plVar12 + 2 ) = (int)plVar12[2] + 1;
         *plVar12 = (long)puVar6;
      }
 while ( puVar11 != (undefined8*)0x0 );
   }

   LAB_0010eb4c:if (puVar9[6] != *(long*)( param_2 + 0x30 )) {
      CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)( puVar9 + 6 ), (CowData*)( param_2 + 0x30 ));
   }

   *(undefined4*)( puVar9 + 7 ) = *(undefined4*)( param_2 + 0x38 );
   Dictionary::operator =((Dictionary*)( puVar9 + 8 ), (Dictionary*)( param_2 + 0x40 ));
   NodePath::operator =((NodePath*)( puVar9 + 9 ), (NodePath*)( param_2 + 0x48 ));
   *(undefined4*)( puVar9 + 10 ) = *(undefined4*)( param_2 + 0x50 );
   puVar9[0xb] = *(undefined8*)( param_2 + 0x58 );
   return;
}
/* EditorData::move_edited_scene_to_index(int) */void EditorData::move_edited_scene_to_index(EditorData *this, int param_1) {
   long lVar1;
   undefined8 uVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long lVar5;
   undefined8 *puVar6;
   long lVar7;
   long lVar8;
   long in_FS_OFFSET;
   undefined8 local_108;
   long local_100;
   undefined8 local_f8;
   Dictionary local_f0[8];
   undefined1(*local_e8)[16];
   long local_d8;
   undefined4 local_d0;
   Dictionary local_c8[8];
   NodePath local_c0[8];
   undefined4 local_b8;
   undefined8 local_b0;
   undefined8 local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   Dictionary local_90[8];
   undefined1(*local_88)[16];
   undefined8 local_78;
   undefined4 local_70;
   Dictionary local_68[8];
   NodePath local_60[8];
   undefined4 local_58;
   undefined8 local_50;
   long local_40;
   lVar5 = (long)*(int*)( this + 0xd0 );
   lVar1 = *(long*)( this + 200 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0xd0 ) < 0) {
      if (lVar1 == 0) goto LAB_0010f0b0;
      lVar7 = *(long*)( lVar1 + -8 );
   }
 else if (lVar1 == 0) {
      LAB_0010f0b0:lVar7 = 0;
   }
 else {
      lVar7 = *(long*)( lVar1 + -8 );
      if (lVar5 < lVar7) {
         lVar8 = (long)param_1;
         if (( param_1 < 0 ) || ( lVar7 <= lVar8 )) {
            _err_print_index_error("move_edited_scene_to_index", "editor/editor_data.cpp", 0x33f, lVar8, lVar7, "p_idx", "edited_scene.size()", "", false, false);
         }
 else {
            puVar6 = (undefined8*)( lVar1 + lVar5 * 0x60 );
            local_108 = *puVar6;
            local_100 = 0;
            if (puVar6[1] != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)( puVar6 + 1 ));
            }

            local_f8 = puVar6[2];
            Dictionary::Dictionary(local_f0, (Dictionary*)( puVar6 + 3 ));
            local_e8 = (undefined1(*) [16])0x0;
            if (( (long*)puVar6[4] != (long*)0x0 ) && ( puVar4 = *(undefined8**)puVar6[4] ),puVar4 != (undefined8*)0x0) {
               local_e8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_e8[1] = 0;
               *local_e8 = (undefined1[16])0x0;
               do {
                  while (true) {
                     puVar3 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                     uVar2 = *puVar4;
                     puVar3[1] = 0;
                     *puVar3 = uVar2;
                     lVar1 = *(long*)( *local_e8 + 8 );
                     puVar3[3] = local_e8;
                     puVar3[2] = lVar1;
                     if (lVar1 != 0) {
                        *(undefined8**)( lVar1 + 8 ) = puVar3;
                     }

                     lVar1 = *(long*)*local_e8;
                     *(undefined8**)( *local_e8 + 8 ) = puVar3;
                     if (lVar1 != 0) break;
                     puVar4 = (undefined8*)puVar4[1];
                     *(int*)local_e8[1] = *(int*)local_e8[1] + 1;
                     *(undefined8**)*local_e8 = puVar3;
                     if (puVar4 == (undefined8*)0x0) goto LAB_0010eddc;
                  }
;
                  puVar4 = (undefined8*)puVar4[1];
                  *(int*)local_e8[1] = *(int*)local_e8[1] + 1;
               }
 while ( puVar4 != (undefined8*)0x0 );
            }

            LAB_0010eddc:local_d8 = 0;
            if (puVar6[6] != 0) {
               CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)&local_d8, (CowData*)( puVar6 + 6 ));
            }

            local_d0 = *(undefined4*)( puVar6 + 7 );
            Dictionary::Dictionary(local_c8, (Dictionary*)( puVar6 + 8 ));
            NodePath::NodePath(local_c0, (NodePath*)( puVar6 + 9 ));
            local_b8 = *(undefined4*)( puVar6 + 10 );
            local_b0 = puVar6[0xb];
            Vector<EditorData::EditedScene>::remove_at((Vector<EditorData::EditedScene>*)( this + 0xc0 ), (long)*(int*)( this + 0xd0 ));
            local_a0 = 0;
            local_a8 = local_108;
            if (local_100 != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)&local_100);
            }

            local_98 = local_f8;
            Dictionary::Dictionary(local_90, local_f0);
            local_88 = (undefined1(*) [16])0x0;
            if (( local_e8 != (undefined1(*) [16])0x0 ) && ( puVar6 = *(undefined8**)*local_e8 ),puVar6 != (undefined8*)0x0) {
               local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               *(undefined4*)local_88[1] = 0;
               *local_88 = (undefined1[16])0x0;
               do {
                  while (true) {
                     puVar4 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                     uVar2 = *puVar6;
                     puVar4[1] = 0;
                     *puVar4 = uVar2;
                     lVar1 = *(long*)( *local_88 + 8 );
                     puVar4[3] = local_88;
                     puVar4[2] = lVar1;
                     if (lVar1 != 0) {
                        *(undefined8**)( lVar1 + 8 ) = puVar4;
                     }

                     lVar1 = *(long*)*local_88;
                     *(undefined8**)( *local_88 + 8 ) = puVar4;
                     if (lVar1 != 0) break;
                     puVar6 = (undefined8*)puVar6[1];
                     *(int*)local_88[1] = *(int*)local_88[1] + 1;
                     *(undefined8**)*local_88 = puVar4;
                     if (puVar6 == (undefined8*)0x0) goto LAB_0010ef50;
                  }
;
                  puVar6 = (undefined8*)puVar6[1];
                  *(int*)local_88[1] = *(int*)local_88[1] + 1;
               }
 while ( puVar6 != (undefined8*)0x0 );
            }

            LAB_0010ef50:local_78 = 0;
            if (local_d8 != 0) {
               CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)&local_78, (CowData*)&local_d8);
            }

            local_70 = local_d0;
            Dictionary::Dictionary(local_68, local_c8);
            NodePath::NodePath(local_60, local_c0);
            local_58 = local_b8;
            local_50 = local_b0;
            CowData<EditorData::EditedScene>::insert((CowData<EditorData::EditedScene>*)( this + 200 ), lVar8, (EditedScene*)&local_a8);
            EditedScene::~EditedScene((EditedScene*)&local_a8);
            *(int*)( this + 0xd0 ) = param_1;
            EditedScene::~EditedScene((EditedScene*)&local_108);
         }

         goto LAB_0010eff0;
      }

   }

   _err_print_index_error("move_edited_scene_to_index", "editor/editor_data.cpp", 0x33e, lVar5, lVar7, "current_edited_scene", "edited_scene.size()", "", false, false);
   LAB_0010eff0:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Vector<EditorData::EditedScene>::push_back(EditorData::EditedScene) [clone .isra.0] */void Vector<EditorData::EditedScene>::push_back(Vector<EditorData::EditedScene> *this, undefined8 *param_2) {
   void *pvVar1;
   undefined8 uVar2;
   int iVar3;
   undefined1(*pauVar4)[16];
   undefined8 *puVar5;
   undefined8 *puVar6;
   long lVar7;
   long lVar8;
   undefined8 *puVar9;
   long *plVar10;
   if (*(long*)( this + 8 ) == 0) {
      lVar7 = 1;
   }
 else {
      lVar7 = *(long*)( *(long*)( this + 8 ) + -8 ) + 1;
   }

   iVar3 = CowData<EditorData::EditedScene>::resize<false>((CowData<EditorData::EditedScene>*)( this + 8 ), lVar7);
   if (iVar3 != 0) {
      _err_print_error("push_back", "./core/templates/vector.h", 0x142, "Condition \"err\" is true. Returning: true", 0, 0);
      return;
   }

   if (*(long*)( this + 8 ) == 0) {
      lVar8 = -1;
      lVar7 = 0;
   }
 else {
      lVar7 = *(long*)( *(long*)( this + 8 ) + -8 );
      lVar8 = lVar7 + -1;
      if (-1 < lVar8) {
         CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 8 ));
         puVar6 = (undefined8*)( lVar8 * 0x60 + *(long*)( this + 8 ) );
         *puVar6 = *param_2;
         if (puVar6[1] != param_2[1]) {
            CowData<char32_t>::_ref((CowData<char32_t>*)( puVar6 + 1 ), (CowData*)( param_2 + 1 ));
         }

         puVar6[2] = param_2[2];
         Dictionary::operator =((Dictionary*)( puVar6 + 3 ), (Dictionary*)( param_2 + 3 ));
         plVar10 = (long*)puVar6[4];
         if (plVar10 != (long*)0x0) {
            do {
               pvVar1 = (void*)*plVar10;
               if (pvVar1 == (void*)0x0) goto LAB_0010f1d8;
               if (*(long**)( (long)pvVar1 + 0x18 ) == plVar10) {
                  lVar7 = *(long*)( (long)pvVar1 + 8 );
                  lVar8 = *(long*)( (long)pvVar1 + 0x10 );
                  *plVar10 = lVar7;
                  if (pvVar1 == (void*)plVar10[1]) {
                     plVar10[1] = lVar8;
                  }

                  if (lVar8 != 0) {
                     *(long*)( lVar8 + 8 ) = lVar7;
                     lVar7 = *(long*)( (long)pvVar1 + 8 );
                  }

                  if (lVar7 != 0) {
                     *(long*)( lVar7 + 0x10 ) = lVar8;
                  }

                  Memory::free_static(pvVar1, false);
                  *(int*)( plVar10 + 2 ) = (int)plVar10[2] + -1;
               }
 else {
                  _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
               }

               plVar10 = (long*)puVar6[4];
            }
 while ( (int)plVar10[2] != 0 );
            Memory::free_static(plVar10, false);
            puVar6[4] = 0;
         }

         plVar10 = (long*)0x0;
         LAB_0010f1d8:if (( (long*)param_2[4] != (long*)0x0 ) && ( puVar9 = *(undefined8**)param_2[4] ),puVar9 != (undefined8*)0x0) {
            if (plVar10 == (long*)0x0) {
               pauVar4 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
               puVar6[4] = pauVar4;
               *(undefined4*)pauVar4[1] = 0;
               *pauVar4 = (undefined1[16])0x0;
            }

            do {
               while (true) {
                  puVar5 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
                  uVar2 = *puVar9;
                  puVar5[1] = 0;
                  *puVar5 = uVar2;
                  plVar10 = (long*)puVar6[4];
                  lVar7 = plVar10[1];
                  puVar5[3] = plVar10;
                  puVar5[2] = lVar7;
                  if (lVar7 != 0) {
                     *(undefined8**)( lVar7 + 8 ) = puVar5;
                  }

                  plVar10[1] = (long)puVar5;
                  if (*plVar10 == 0) break;
                  puVar9 = (undefined8*)puVar9[1];
                  *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
                  if (puVar9 == (undefined8*)0x0) goto LAB_0010f27c;
               }
;
               puVar9 = (undefined8*)puVar9[1];
               *(int*)( plVar10 + 2 ) = (int)plVar10[2] + 1;
               *plVar10 = (long)puVar5;
            }
 while ( puVar9 != (undefined8*)0x0 );
         }

         LAB_0010f27c:if (puVar6[6] != param_2[6]) {
            CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)( puVar6 + 6 ), (CowData*)( param_2 + 6 ));
         }

         *(undefined4*)( puVar6 + 7 ) = *(undefined4*)( param_2 + 7 );
         Dictionary::operator =((Dictionary*)( puVar6 + 8 ), (Dictionary*)( param_2 + 8 ));
         NodePath::operator =((NodePath*)( puVar6 + 9 ), (NodePath*)( param_2 + 9 ));
         *(undefined4*)( puVar6 + 10 ) = *(undefined4*)( param_2 + 10 );
         puVar6[0xb] = param_2[0xb];
         return;
      }

   }

   _err_print_index_error("set", "./core/templates/cowdata.h", 0xcf, lVar8, lVar7, "p_index", "size()", "", false, false);
   return;
}
/* EditorData::add_edited_scene(int) */int EditorData::add_edited_scene(EditorData *this, int param_1) {
   undefined8 uVar1;
   undefined1 auVar2[16];
   undefined8 *puVar3;
   long lVar4;
   long lVar5;
   undefined8 *puVar6;
   long in_FS_OFFSET;
   bool bVar7;
   int local_11c;
   undefined8 local_110;
   undefined1 local_108[16];
   undefined8 local_f8;
   Dictionary local_f0[8];
   long *local_e8;
   long local_d8;
   undefined4 local_d0;
   Dictionary local_c8[8];
   undefined8 local_c0;
   int local_b8;
   undefined8 local_b0;
   char *local_a8;
   undefined8 local_a0;
   undefined8 local_98;
   Dictionary local_90[8];
   undefined1(*local_88)[16];
   undefined8 local_78;
   undefined4 local_70;
   Dictionary local_68[8];
   NodePath local_60[8];
   int local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 < 0) {
      if (*(long*)( this + 200 ) == 0) {
         local_11c = 0;
         lVar5 = 0;
      }
 else {
         local_11c = (int)*(undefined8*)( *(long*)( this + 200 ) + -8 );
         lVar5 = (long)local_11c;
      }

   }
 else {
      lVar5 = (long)param_1;
      local_11c = param_1;
   }

   local_f8 = 0;
   local_108 = (undefined1[16])0x0;
   Dictionary::Dictionary(local_f0);
   local_d0 = 0;
   local_e8 = (long*)0x0;
   local_d8 = 0;
   Dictionary::Dictionary(local_c8);
   bVar7 = local_108._8_8_ != 0;
   local_c0 = 0;
   local_b8 = 0;
   local_b0 = 0;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_108._8_8_;
   local_108 = auVar2 << 0x40;
   local_a8 = (char*)0x0;
   if (bVar7) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( local_108 + 8 ));
      local_108._8_8_ = 0;
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
   local_a8 = "/root";
   local_f8 = 0;
   local_d0 = 0xffffffff;
   local_110 = 0;
   local_a0 = 5;
   String::parse_latin1((StrRange*)&local_110);
   NodePath::NodePath((NodePath*)&local_a8, (String*)&local_110);
   NodePath::operator =((NodePath*)&local_c0, (NodePath*)&local_a8);
   NodePath::~NodePath((NodePath*)&local_a8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_110);
   local_b8 = *(int*)( this + 0xd4 );
   *(int*)( this + 0xd4 ) = local_b8 + 1;
   if (*(long*)( this + 200 ) == 0) {
      lVar4 = 0;
   }
 else {
      lVar4 = *(long*)( *(long*)( this + 200 ) + -8 );
   }

   if (lVar4 == lVar5) {
      local_a8 = (char*)local_108._0_8_;
      local_a0 = 0;
      if (local_108._8_8_ != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( local_108 + 8 ));
      }

      local_98 = local_f8;
      Dictionary::Dictionary(local_90, local_f0);
      local_88 = (undefined1(*) [16])0x0;
      if (( local_e8 != (long*)0x0 ) && ( puVar6 = (undefined8*)*local_e8 ),puVar6 != (undefined8*)0x0) {
         local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_88[1] = 0;
         *local_88 = (undefined1[16])0x0;
         do {
            while (true) {
               puVar3 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
               uVar1 = *puVar6;
               puVar3[1] = 0;
               *puVar3 = uVar1;
               lVar5 = *(long*)( *local_88 + 8 );
               puVar3[3] = local_88;
               puVar3[2] = lVar5;
               if (lVar5 != 0) {
                  *(undefined8**)( lVar5 + 8 ) = puVar3;
               }

               lVar5 = *(long*)*local_88;
               *(undefined8**)( *local_88 + 8 ) = puVar3;
               if (lVar5 != 0) break;
               puVar6 = (undefined8*)puVar6[1];
               *(int*)local_88[1] = *(int*)local_88[1] + 1;
               *(undefined8**)*local_88 = puVar3;
               if (puVar6 == (undefined8*)0x0) goto LAB_0010f83f;
            }
;
            puVar6 = (undefined8*)puVar6[1];
            *(int*)local_88[1] = *(int*)local_88[1] + 1;
         }
 while ( puVar6 != (undefined8*)0x0 );
      }

      LAB_0010f83f:local_78 = 0;
      if (local_d8 != 0) {
         CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)&local_78, (CowData*)&local_d8);
      }

      local_70 = local_d0;
      Dictionary::Dictionary(local_68, local_c8);
      NodePath::NodePath(local_60, (NodePath*)&local_c0);
      local_58 = local_b8;
      local_50 = local_b0;
      Vector<EditorData::EditedScene>::push_back((Vector<EditorData::EditedScene>*)( this + 0xc0 ), (CowData<char32_t>*)&local_a8);
      EditedScene::~EditedScene((EditedScene*)&local_a8);
   }
 else {
      local_a8 = (char*)local_108._0_8_;
      local_a0 = 0;
      if (local_108._8_8_ != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( local_108 + 8 ));
      }

      local_98 = local_f8;
      Dictionary::Dictionary(local_90, local_f0);
      local_88 = (undefined1(*) [16])0x0;
      if (( local_e8 != (long*)0x0 ) && ( puVar6 = (undefined8*)*local_e8 ),puVar6 != (undefined8*)0x0) {
         local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_88[1] = 0;
         *local_88 = (undefined1[16])0x0;
         do {
            while (true) {
               puVar3 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
               uVar1 = *puVar6;
               puVar3[1] = 0;
               *puVar3 = uVar1;
               lVar4 = *(long*)( *local_88 + 8 );
               puVar3[3] = local_88;
               puVar3[2] = lVar4;
               if (lVar4 != 0) {
                  *(undefined8**)( lVar4 + 8 ) = puVar3;
               }

               lVar4 = *(long*)*local_88;
               *(undefined8**)( *local_88 + 8 ) = puVar3;
               if (lVar4 != 0) break;
               puVar6 = (undefined8*)puVar6[1];
               *(int*)local_88[1] = *(int*)local_88[1] + 1;
               *(undefined8**)*local_88 = puVar3;
               if (puVar6 == (undefined8*)0x0) goto LAB_0010f637;
            }
;
            puVar6 = (undefined8*)puVar6[1];
            *(int*)local_88[1] = *(int*)local_88[1] + 1;
         }
 while ( puVar6 != (undefined8*)0x0 );
      }

      LAB_0010f637:local_78 = 0;
      if (local_d8 != 0) {
         CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)&local_78, (CowData*)&local_d8);
      }

      local_70 = local_d0;
      Dictionary::Dictionary(local_68, local_c8);
      NodePath::NodePath(local_60, (NodePath*)&local_c0);
      local_58 = local_b8;
      local_50 = local_b0;
      CowData<EditorData::EditedScene>::insert((CowData<EditorData::EditedScene>*)( this + 200 ), lVar5, (EditedScene*)&local_a8);
      EditedScene::~EditedScene((EditedScene*)&local_a8);
   }

   if (*(int*)( this + 0xd0 ) < 0) {
      *(undefined4*)( this + 0xd0 ) = 0;
   }

   EditedScene::~EditedScene((EditedScene*)local_108);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return local_11c;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorData::get_edited_scenes() const */Vector<EditorData::EditedScene> *EditorData::get_edited_scenes(void) {
   long *plVar1;
   undefined8 uVar2;
   long lVar3;
   void *pvVar4;
   undefined1(*pauVar5)[16];
   undefined8 *puVar6;
   long lVar7;
   long in_RSI;
   Vector<EditorData::EditedScene> *in_RDI;
   long lVar8;
   undefined8 *puVar9;
   long in_FS_OFFSET;
   long local_a0;
   undefined8 local_98;
   Dictionary local_90[8];
   undefined1(*local_88)[16];
   undefined8 local_78;
   undefined4 local_70;
   Dictionary local_68[8];
   NodePath local_60[8];
   undefined4 local_58;
   undefined8 local_50;
   long local_40;
   lVar8 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( in_RDI + 8 ) = 0;
   lVar7 = *(long*)( in_RSI + 200 );
   do {
      if (( lVar7 == 0 ) || ( *(long*)( lVar7 + -8 ) <= lVar8 )) {
         if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }

         return in_RDI;
      }

      lVar7 = lVar7 + lVar8 * 0x60;
      local_a0 = 0;
      if (*(long*)( lVar7 + 8 ) != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)&local_a0, (CowData*)( lVar7 + 8 ));
      }

      local_98 = *(undefined8*)( lVar7 + 0x10 );
      Dictionary::Dictionary(local_90, (Dictionary*)( lVar7 + 0x18 ));
      local_88 = (undefined1(*) [16])0x0;
      if (( *(long**)( lVar7 + 0x20 ) != (long*)0x0 ) && ( puVar9 = (undefined8*)**(long**)( lVar7 + 0x20 ) ),puVar9 != (undefined8*)0x0) {
         local_88 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)local_88[1] = 0;
         *local_88 = (undefined1[16])0x0;
         do {
            while (true) {
               puVar6 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
               uVar2 = *puVar9;
               puVar6[1] = 0;
               *puVar6 = uVar2;
               lVar3 = *(long*)( *local_88 + 8 );
               puVar6[3] = local_88;
               puVar6[2] = lVar3;
               if (lVar3 != 0) {
                  *(undefined8**)( lVar3 + 8 ) = puVar6;
               }

               lVar3 = *(long*)*local_88;
               *(undefined8**)( *local_88 + 8 ) = puVar6;
               if (lVar3 != 0) break;
               puVar9 = (undefined8*)puVar9[1];
               *(int*)local_88[1] = *(int*)local_88[1] + 1;
               *(undefined8**)*local_88 = puVar6;
               if (puVar9 == (undefined8*)0x0) goto LAB_0010fa44;
            }
;
            puVar9 = (undefined8*)puVar9[1];
            *(int*)local_88[1] = *(int*)local_88[1] + 1;
         }
 while ( puVar9 != (undefined8*)0x0 );
      }

      LAB_0010fa44:local_78 = 0;
      if (*(long*)( lVar7 + 0x30 ) != 0) {
         CowData<EditorSelectionHistory::HistoryElement>::_ref((CowData<EditorSelectionHistory::HistoryElement>*)&local_78, (CowData*)( lVar7 + 0x30 ));
      }

      local_70 = *(undefined4*)( lVar7 + 0x38 );
      Dictionary::Dictionary(local_68, (Dictionary*)( lVar7 + 0x40 ));
      NodePath::NodePath(local_60, (NodePath*)( lVar7 + 0x48 ));
      local_58 = *(undefined4*)( lVar7 + 0x50 );
      local_50 = *(undefined8*)( lVar7 + 0x58 );
      Vector<EditorData::EditedScene>::push_back(in_RDI);
      NodePath::~NodePath(local_60);
      Dictionary::~Dictionary(local_68);
      CowData<EditorSelectionHistory::HistoryElement>::_unref((CowData<EditorSelectionHistory::HistoryElement>*)&local_78);
      if (local_88 != (undefined1(*) [16])0x0) {
         do {
            pauVar5 = local_88;
            pvVar4 = *(void**)*local_88;
            if (pvVar4 == (void*)0x0) {
               if (*(int*)local_88[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_0010fb40;
               }

               break;
            }

            if (*(undefined1(**) [16])( (long)pvVar4 + 0x18 ) == local_88) {
               lVar7 = *(long*)( (long)pvVar4 + 8 );
               lVar3 = *(long*)( (long)pvVar4 + 0x10 );
               *(long*)*local_88 = lVar7;
               if (pvVar4 == *(void**)( *local_88 + 8 )) {
                  *(long*)( *local_88 + 8 ) = lVar3;
               }

               if (lVar3 != 0) {
                  *(long*)( lVar3 + 8 ) = lVar7;
                  lVar7 = *(long*)( (long)pvVar4 + 8 );
               }

               if (lVar7 != 0) {
                  *(long*)( lVar7 + 0x10 ) = lVar3;
               }

               Memory::free_static(pvVar4, false);
               *(int*)pauVar5[1] = *(int*)pauVar5[1] + -1;
            }
 else {
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }

         }
 while ( *(int*)local_88[1] != 0 );
         Memory::free_static(local_88, false);
      }

      LAB_0010fb40:Dictionary::~Dictionary(local_90);
      lVar7 = local_a0;
      if (local_a0 != 0) {
         LOCK();
         plVar1 = (long*)( local_a0 + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            local_a0 = 0;
            Memory::free_static((void*)( lVar7 + -0x10 ), false);
         }

      }

      lVar8 = lVar8 + 1;
      lVar7 = *(long*)( in_RSI + 200 );
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
/* EditorSelection::is_class_ptr(void*) const */uint EditorSelection::is_class_ptr(EditorSelection *this, void *param_1) {
   return (uint)CONCAT71(0x11a1, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x11a0, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}
/* EditorSelection::_getv(StringName const&, Variant&) const */undefined8 EditorSelection::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSelection::_setv(StringName const&, Variant const&) */undefined8 EditorSelection::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSelection::_validate_propertyv(PropertyInfo&) const */void EditorSelection::_validate_propertyv(PropertyInfo *param_1) {
   return;
}
/* EditorSelection::_property_can_revertv(StringName const&) const */undefined8 EditorSelection::_property_can_revertv(StringName *param_1) {
   return 0;
}
/* EditorSelection::_property_get_revertv(StringName const&, Variant&) const */undefined8 EditorSelection::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}
/* EditorSelection::_notificationv(int, bool) */void EditorSelection::_notificationv(int param_1, bool param_2) {
   return;
}
/* EditorPlugin::edited_scene_changed() */void EditorPlugin::edited_scene_changed(void) {
   return;
}
/* CallableCustomMethodPointer<EditorSelection, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorSelection,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorSelection,void> *this) {
   return;
}
/* CallableCustomMethodPointer<EditorSelection, void, Node*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorSelection,void,Node*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorSelection,void,Node*> *this) {
   return;
}
/* MethodBindTR<TypedArray<Node>>::_gen_argument_type(int) const */undefined8 MethodBindTR<TypedArray<Node>>::_gen_argument_type(int param_1) {
   return 0x1c;
}
/* MethodBindTR<TypedArray<Node>>::get_argument_meta(int) const */undefined8 MethodBindTR<TypedArray<Node>>::get_argument_meta(int param_1) {
   return 0;
}
/* MethodBindT<Node*>::_gen_argument_type(int) const */byte MethodBindT<Node*>::_gen_argument_type(MethodBindT<Node*> *this, int param_1) {
   return -(param_1 == 0) & 0x18;
}
/* MethodBindT<Node*>::get_argument_meta(int) const */undefined8 MethodBindT<Node*>::get_argument_meta(int param_1) {
   return 0;
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
/* CallableCustomMethodPointer<EditorSelection, void>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorSelection,void>::get_argument_count(CallableCustomMethodPointer<EditorSelection,void> *this, bool *param_1) {
   *param_1 = true;
   return 0;
}
/* CallableCustomMethodPointer<EditorSelection, void, Node*>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<EditorSelection,void,Node*>::get_argument_count(CallableCustomMethodPointer<EditorSelection,void,Node*> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CallableCustomMethodPointer<EditorSelection, void, Node*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorSelection,void,Node*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorSelection,void,Node*> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<EditorSelection, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorSelection,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorSelection,void> *this) {
   operator_delete(this, 0x48);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119fd0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   *(undefined***)this = &PTR__gen_argument_type_00119fd0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a030;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a030;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* MethodBindTR<TypedArray<Node>>::~MethodBindTR() */void MethodBindTR<TypedArray<Node>>::~MethodBindTR(MethodBindTR<TypedArray<Node>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a090;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}
/* MethodBindTR<TypedArray<Node>>::~MethodBindTR() */void MethodBindTR<TypedArray<Node>>::~MethodBindTR(MethodBindTR<TypedArray<Node>> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0011a090;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}
/* CowData<EditorPlugin*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<EditorPlugin*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write() [clone .isra.0] [clone .cold]
    */void CowData<EditorSelectionHistory::HistoryElement>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<EditorSelectionHistory::_Object>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<EditorSelectionHistory::_Object>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Callable>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Callable>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<EditorData::CustomType>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<EditorData::CustomType>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<EditorData::EditedScene>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<EditorData::EditedScene>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* HashMap<Node*, Object*, HashMapHasherDefault, HashMapComparatorDefault<Node*>,
   DefaultTypedAllocator<HashMapElement<Node*, Object*> > >::_lookup_pos(Node* const&, unsigned
   int&) const [clone .isra.0] */undefined8 HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>::_lookup_pos(HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>> *this, Node **param_1, uint *param_2) {
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
   uint uVar11;
   long lVar12;
   ulong uVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (*(long*)( this + 8 ) == 0) {
      return 0;
   }

   if (*(int*)( this + 0x2c ) != 0) {
      uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar10 = (long)param_1 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar13 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar13 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar13 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar15;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar12 * 4 );
      uVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar14 != 0) {
         uVar16 = 0;
         do {
            if (( (uint)uVar13 == uVar14 ) && ( *(Node***)( *(long*)( *(long*)( this + 8 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
               *param_2 = uVar11;
               return 1;
            }

            uVar16 = uVar16 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(uVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar15;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x10 ) + lVar12 * 4 );
            uVar11 = SUB164(auVar3 * auVar7, 8);
            if (uVar14 == 0) {
               return 0;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar14 * lVar1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar15;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar15;
         }
 while ( uVar16 <= SUB164(auVar5 * auVar9, 8) );
         return 0;
      }

   }

   return 0;
}
/* CallableCustomMethodPointer<EditorSelection, void>::get_object() const */undefined8 CallableCustomMethodPointer<EditorSelection,void>::get_object(CallableCustomMethodPointer<EditorSelection,void> *this) {
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
         goto LAB_0011076d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011076d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011076d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<EditorSelection, void, Node*>::get_object() const */undefined8 CallableCustomMethodPointer<EditorSelection,void,Node*>::get_object(CallableCustomMethodPointer<EditorSelection,void,Node*> *this) {
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
         goto LAB_0011086d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0011086d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0011086d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
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
/* EditorSelection::_get_class_namev() const */undefined8 *EditorSelection::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }

   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00110c83:return &_get_class_namev();
      }

      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00110c83;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorSelection");
         goto LAB_00110cee;
      }

   }

   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "EditorSelection");
   LAB_00110cee:return &_get_class_namev();
}
/* EditorSelection::get_class() const */void EditorSelection::get_class(void) {
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
/* EditorSelection::is_class(String const&) const */undefined8 EditorSelection::is_class(EditorSelection *this, String *param_1) {
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

      if (cVar5 != '\0') goto LAB_00110f0b;
   }

   cVar5 = String::operator ==(param_1, "EditorSelection");
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

         if (cVar5 != '\0') goto LAB_00110f0b;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar6 = String::operator ==(param_1, "Object");
         return uVar6;
      }

   }
 else {
      LAB_00110f0b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
   }

   return;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<String, HashMapHasherDefault, HashMapComparatorDefault<String> >::insert(String const&)
    */String *HashSet<String,HashMapHasherDefault,HashMapComparatorDefault<String>>::insert(String *param_1) {
   CowData<char32_t> *this;
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
   char cVar27;
   uint uVar28;
   uint uVar29;
   int iVar30;
   ulong uVar31;
   long lVar32;
   long lVar33;
   long lVar34;
   int iVar35;
   uint uVar36;
   String *in_RDX;
   ulong uVar37;
   long lVar38;
   long *in_RSI;
   long lVar39;
   uint uVar40;
   ulong uVar41;
   undefined4 uVar42;
   ulong uVar43;
   uint uVar44;
   uint *puVar45;
   uint local_88;
   long local_68;
   uVar28 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (*in_RSI == 0) {
      uVar31 = (ulong)uVar28 * 4;
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[3] = lVar32;
      lVar32 = Memory::alloc_static((ulong)uVar28 * 8, false);
      *in_RSI = lVar32;
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[2] = lVar32;
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[1] = lVar32;
      if (uVar28 != 0) {
         memset((void*)in_RSI[3], 0, uVar31);
      }

      iVar35 = *(int*)( (long)in_RSI + 0x24 );
      if (*in_RSI != 0) goto LAB_001112fc;
   }
 else {
      iVar35 = *(int*)( (long)in_RSI + 0x24 );
      LAB_001112fc:if (iVar35 != 0) {
         uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
         lVar32 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar44 = String::hash();
         uVar31 = CONCAT44(0, uVar29);
         lVar39 = in_RSI[3];
         uVar36 = 1;
         if (uVar44 != 0) {
            uVar36 = uVar44;
         }

         uVar40 = 0;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = (ulong)uVar36 * lVar32;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar31;
         lVar38 = SUB168(auVar11 * auVar23, 8);
         uVar44 = *(uint*)( lVar39 + lVar38 * 4 );
         iVar35 = SUB164(auVar11 * auVar23, 8);
         if (uVar44 == 0) {
            iVar35 = *(int*)( (long)in_RSI + 0x24 );
         }
 else {
            do {
               if (uVar36 == uVar44) {
                  cVar27 = String::operator ==((String*)( *in_RSI + ( ulong ) * (uint*)( in_RSI[1] + lVar38 * 4 ) * 8 ), in_RDX);
                  if (cVar27 != '\0') {
                     iVar35 = *(int*)( (long)in_RSI + 0x24 );
                     iVar30 = *(int*)( in_RSI[1] + lVar38 * 4 );
                     goto LAB_0011165b;
                  }

                  lVar39 = in_RSI[3];
               }

               uVar40 = uVar40 + 1;
               auVar12._8_8_ = 0;
               auVar12._0_8_ = ( ulong )(iVar35 + 1) * lVar32;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar31;
               lVar38 = SUB168(auVar12 * auVar24, 8);
               uVar44 = *(uint*)( lVar39 + lVar38 * 4 );
               iVar35 = SUB164(auVar12 * auVar24, 8);
            }
 while ( ( uVar44 != 0 ) && ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar44 * lVar32,auVar25._8_8_ = 0,auVar25._0_8_ = uVar31,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( uVar29 + iVar35 ) - SUB164(auVar13 * auVar25, 8)) * lVar32,auVar26._8_8_ = 0,auVar26._0_8_ = uVar31,uVar40 <= SUB164(auVar14 * auVar26, 8) );
            iVar35 = *(int*)( (long)in_RSI + 0x24 );
         }

      }

   }

   if ((float)uVar28 * __LC51 < (float)( iVar35 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         iVar35 = *(int*)( (long)in_RSI + 0x24 );
         iVar30 = -1;
         goto LAB_0011165b;
      }

      uVar28 = (int)in_RSI[4] + 1;
      uVar31 = (ulong)uVar28;
      if (uVar28 < 2) {
         uVar31 = 2;
      }

      uVar28 = *(uint*)( hash_table_size_primes + uVar31 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar31;
      pvVar1 = (void*)in_RSI[3];
      uVar31 = (ulong)uVar28 * 4;
      pvVar2 = (void*)in_RSI[2];
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[3] = lVar32;
      lVar32 = Memory::realloc_static((void*)*in_RSI, (ulong)uVar28 * 8, false);
      *in_RSI = lVar32;
      lVar32 = Memory::alloc_static(uVar31, false);
      in_RSI[2] = lVar32;
      lVar32 = Memory::realloc_static((void*)in_RSI[1], uVar31, false);
      in_RSI[1] = lVar32;
      if (uVar28 != 0) {
         memset((void*)in_RSI[3], 0, uVar31);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar31 = 0;
         lVar39 = in_RSI[3];
         lVar38 = in_RSI[2];
         do {
            uVar43 = uVar31 & 0xffffffff;
            uVar42 = (undefined4)uVar31;
            uVar44 = 0;
            uVar28 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar31 * 4 ) * 4 );
            uVar37 = (ulong)uVar28;
            uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar41 = CONCAT44(0, uVar29);
            lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            auVar3._8_8_ = 0;
            auVar3._0_8_ = uVar37 * lVar33;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar41;
            lVar34 = SUB168(auVar3 * auVar15, 8) * 4;
            iVar35 = SUB164(auVar3 * auVar15, 8);
            puVar45 = (uint*)( lVar39 + lVar34 );
            uVar36 = *puVar45;
            if (uVar36 == 0) {
               lVar33 = uVar31 * 4;
            }
 else {
               do {
                  auVar4._8_8_ = 0;
                  auVar4._0_8_ = (ulong)uVar36 * lVar33;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar41;
                  auVar5._8_8_ = 0;
                  auVar5._0_8_ = ( ulong )(( uVar29 + iVar35 ) - SUB164(auVar4 * auVar16, 8)) * lVar33;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar41;
                  local_88 = SUB164(auVar5 * auVar17, 8);
                  if (local_88 < uVar44) {
                     *(int*)( lVar38 + uVar43 * 4 ) = iVar35;
                     uVar28 = *puVar45;
                     *puVar45 = (uint)uVar37;
                     uVar36 = *(uint*)( lVar34 + lVar32 );
                     uVar37 = (ulong)uVar28;
                     *(uint*)( lVar34 + lVar32 ) = (uint)uVar43;
                     uVar43 = (ulong)uVar36;
                     uVar44 = local_88;
                  }

                  uVar42 = (undefined4)uVar43;
                  uVar28 = (uint)uVar37;
                  uVar44 = uVar44 + 1;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = ( ulong )(iVar35 + 1) * lVar33;
                  auVar18._8_8_ = 0;
                  auVar18._0_8_ = uVar41;
                  lVar34 = SUB168(auVar6 * auVar18, 8) * 4;
                  iVar35 = SUB164(auVar6 * auVar18, 8);
                  puVar45 = (uint*)( lVar39 + lVar34 );
                  uVar36 = *puVar45;
               }
 while ( uVar36 != 0 );
               lVar33 = uVar43 << 2;
            }

            *puVar45 = uVar28;
            uVar31 = uVar31 + 1;
            *(int*)( lVar38 + lVar33 ) = iVar35;
            *(undefined4*)( lVar32 + lVar34 ) = uVar42;
         }
 while ( (uint)uVar31 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
   }

   uVar29 = String::hash();
   uVar28 = 1;
   if (uVar29 != 0) {
      uVar28 = uVar29;
   }

   uVar31 = (ulong)uVar28;
   this(CowData<char32_t> * )(*in_RSI + ( ulong ) * (uint*)( (long)in_RSI + 0x24 ) * 8);
   *(undefined8*)this = 0;
   CowData<char32_t>::_ref(this, (CowData*)in_RDX);
   uVar29 = *(uint*)( (long)in_RSI + 0x24 );
   lVar39 = in_RSI[3];
   uVar36 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar37 = CONCAT44(0, uVar36);
   lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar7._8_8_ = 0;
   auVar7._0_8_ = uVar31 * lVar38;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = uVar37;
   lVar32 = SUB168(auVar7 * auVar19, 8) * 4;
   iVar35 = SUB164(auVar7 * auVar19, 8);
   puVar45 = (uint*)( lVar39 + lVar32 );
   uVar44 = *puVar45;
   if (uVar44 == 0) {
      local_68 = in_RSI[2];
      lVar34 = in_RSI[1];
   }
 else {
      uVar40 = 0;
      local_68 = in_RSI[2];
      lVar34 = in_RSI[1];
      do {
         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar44 * lVar38;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar37;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( ulong )(( uVar36 + iVar35 ) - SUB164(auVar8 * auVar20, 8)) * lVar38;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar37;
         local_88 = SUB164(auVar9 * auVar21, 8);
         if (local_88 < uVar40) {
            *(int*)( local_68 + (ulong)uVar29 * 4 ) = iVar35;
            uVar28 = *puVar45;
            *puVar45 = (uint)uVar31;
            uVar44 = *(uint*)( lVar32 + lVar34 );
            uVar31 = (ulong)uVar28;
            *(uint*)( lVar32 + lVar34 ) = uVar29;
            uVar29 = uVar44;
            uVar40 = local_88;
         }

         uVar28 = (uint)uVar31;
         uVar40 = uVar40 + 1;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( ulong )(iVar35 + 1) * lVar38;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar37;
         lVar32 = SUB168(auVar10 * auVar22, 8) * 4;
         iVar35 = SUB164(auVar10 * auVar22, 8);
         puVar45 = (uint*)( lVar39 + lVar32 );
         uVar44 = *puVar45;
      }
 while ( uVar44 != 0 );
   }

   *puVar45 = uVar28;
   *(int*)( local_68 + (ulong)uVar29 * 4 ) = iVar35;
   *(uint*)( lVar34 + lVar32 ) = uVar29;
   iVar30 = *(int*)( (long)in_RSI + 0x24 );
   iVar35 = iVar30 + 1;
   *(int*)( (long)in_RSI + 0x24 ) = iVar35;
   LAB_0011165b:lVar32 = *in_RSI;
   *(int*)( param_1 + 0xc ) = iVar30;
   *(long*)param_1 = lVar32;
   *(int*)( param_1 + 8 ) = iVar35;
   return param_1;
}
/* List<Node*, DefaultAllocator>::~List() */undefined8 List<Node*,DefaultAllocator>::~List(List<Node*,DefaultAllocator> *this) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, Callable, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, Callable> > >::insert(StringName const&,
   Callable const&, bool) */StringName *
HashMap<StringName,Callable,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,Callable>>>
::insert(StringName *param_1,Callable *param_2,bool param_3){
   uint *puVar1;
   undefined8 *puVar2;
   uint uVar3;
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
   long *plVar29;
   uint uVar30;
   uint uVar31;
   ulong uVar32;
   undefined8 uVar33;
   void *__s_00;
   long lVar34;
   void *pvVar35;
   Callable *in_RCX;
   int iVar36;
   undefined7 in_register_00000011;
   StringName *pSVar37;
   long lVar38;
   long lVar39;
   long lVar40;
   ulong uVar41;
   undefined8 uVar42;
   char in_R8B;
   uint uVar43;
   uint uVar44;
   ulong uVar45;
   uint uVar46;
   long *plVar47;
   long in_FS_OFFSET;
   long *local_b0;
   long local_58;
   Callable local_50[16];
   long local_40;
   pSVar37 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (*(long*)( param_2 + 8 ) == 0) {
      uVar41 = (ulong)uVar30;
      uVar32 = uVar41 * 4;
      uVar45 = uVar41 * 8;
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      pvVar35 = (void*)Memory::alloc_static(uVar45, false);
      *(void**)( param_2 + 8 ) = pvVar35;
      if (uVar30 != 0) {
         pvVar4 = *(void**)( param_2 + 0x10 );
         if (( pvVar4 < (void*)( (long)pvVar35 + uVar45 ) ) && ( pvVar35 < (void*)( (long)pvVar4 + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)pvVar4 + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)pvVar35 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar41 != uVar32 );
         }
 else {
            memset(pvVar4, 0, uVar32);
            memset(pvVar35, 0, uVar45);
         }

         goto LAB_00111be5;
      }

      iVar36 = *(int*)( param_2 + 0x2c );
      if (pvVar35 == (void*)0x0) goto LAB_00111ce7;
      if (*(int*)( param_2 + 0x2c ) != 0) goto LAB_00111bf1;
      LAB_00111d0d:uVar30 = *(uint*)( param_2 + 0x28 );
      if (uVar30 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_b0 = (long*)0x0;
         goto LAB_0011209c;
      }

      uVar32 = ( ulong )(uVar30 + 1);
      *(undefined4*)( param_2 + 0x2c ) = 0;
      uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar30 * 4 );
      if (uVar30 + 1 < 2) {
         uVar32 = 2;
      }

      uVar30 = *(uint*)( hash_table_size_primes + uVar32 * 4 );
      uVar41 = (ulong)uVar30;
      *(int*)( param_2 + 0x28 ) = (int)uVar32;
      pvVar35 = *(void**)( param_2 + 8 );
      uVar32 = uVar41 * 4;
      uVar45 = uVar41 * 8;
      pvVar4 = *(void**)( param_2 + 0x10 );
      uVar33 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar33;
      __s_00 = (void*)Memory::alloc_static(uVar45, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar30 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar45 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar32 != uVar41 );
         }
 else {
            memset(__s, 0, uVar32);
            memset(__s_00, 0, uVar45);
         }

      }

      if (uVar3 != 0) {
         uVar32 = 0;
         do {
            uVar30 = *(uint*)( (long)pvVar4 + uVar32 * 4 );
            if (uVar30 != 0) {
               lVar34 = *(long*)( param_2 + 0x10 );
               uVar43 = 0;
               uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
               uVar45 = CONCAT44(0, uVar31);
               lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar30 * lVar38;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar45;
               lVar39 = SUB168(auVar9 * auVar21, 8);
               puVar1 = (uint*)( lVar34 + lVar39 * 4 );
               iVar36 = SUB164(auVar9 * auVar21, 8);
               uVar44 = *puVar1;
               uVar33 = *(undefined8*)( (long)pvVar35 + uVar32 * 8 );
               while (uVar44 != 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar44 * lVar38;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar45;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar31 + iVar36 ) - SUB164(auVar10 * auVar22, 8)) * lVar38;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar45;
                  uVar46 = SUB164(auVar11 * auVar23, 8);
                  uVar42 = uVar33;
                  if (uVar46 < uVar43) {
                     *puVar1 = uVar30;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar39 * 8 );
                     uVar42 = *puVar2;
                     *puVar2 = uVar33;
                     uVar30 = uVar44;
                     uVar43 = uVar46;
                  }

                  uVar43 = uVar43 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar36 + 1) * lVar38;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar45;
                  lVar39 = SUB168(auVar12 * auVar24, 8);
                  puVar1 = (uint*)( lVar34 + lVar39 * 4 );
                  iVar36 = SUB164(auVar12 * auVar24, 8);
                  uVar33 = uVar42;
                  uVar44 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar39 * 8 ) = uVar33;
               *puVar1 = uVar30;
               *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
            }

            uVar32 = uVar32 + 1;
         }
 while ( uVar3 != uVar32 );
         Memory::free_static(pvVar35, false);
         Memory::free_static(pvVar4, false);
      }

   }
 else {
      LAB_00111be5:iVar36 = *(int*)( param_2 + 0x2c );
      if (iVar36 != 0) {
         LAB_00111bf1:uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
         uVar32 = CONCAT44(0, uVar3);
         lVar34 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         if (*(long*)pSVar37 == 0) {
            uVar31 = StringName::get_empty_hash();
         }
 else {
            uVar31 = *(uint*)( *(long*)pSVar37 + 0x20 );
         }

         if (uVar31 == 0) {
            uVar31 = 1;
         }

         uVar46 = 0;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = (ulong)uVar31 * lVar34;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar32;
         lVar38 = SUB168(auVar5 * auVar17, 8);
         uVar44 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar38 * 4 );
         uVar43 = SUB164(auVar5 * auVar17, 8);
         if (uVar44 != 0) {
            do {
               if (( uVar31 == uVar44 ) && ( *(long*)( *(long*)( *(long*)( param_2 + 8 ) + lVar38 * 8 ) + 0x10 ) == *(long*)pSVar37 )) {
                  Callable::operator =((Callable*)( *(long*)( *(long*)( param_2 + 8 ) + (ulong)uVar43 * 8 ) + 0x18 ), in_RCX);
                  local_b0 = *(long**)( *(long*)( param_2 + 8 ) + (ulong)uVar43 * 8 );
                  goto LAB_0011209c;
               }

               uVar46 = uVar46 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar43 + 1) * lVar34;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar32;
               lVar38 = SUB168(auVar6 * auVar18, 8);
               uVar44 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar38 * 4 );
               uVar43 = SUB164(auVar6 * auVar18, 8);
            }
 while ( ( uVar44 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar44 * lVar34,auVar19._8_8_ = 0,auVar19._0_8_ = uVar32,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar3 + uVar43 ) - SUB164(auVar7 * auVar19, 8)) * lVar34,auVar20._8_8_ = 0,auVar20._0_8_ = uVar32,uVar46 <= SUB164(auVar8 * auVar20, 8) );
         }

         iVar36 = *(int*)( param_2 + 0x2c );
      }

      LAB_00111ce7:if ((float)uVar30 * __LC51 < (float)( iVar36 + 1 )) goto LAB_00111d0d;
   }

   StringName::StringName((StringName*)&local_58, pSVar37);
   Callable::Callable(local_50, in_RCX);
   local_b0 = (long*)operator_new(0x28, "");
   *local_b0 = 0;
   local_b0[1] = 0;
   StringName::StringName((StringName*)( local_b0 + 2 ), (StringName*)&local_58);
   Callable::Callable((Callable*)( local_b0 + 3 ), local_50);
   Callable::~Callable(local_50);
   if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   puVar2 = *(undefined8**)( param_2 + 0x20 );
   if (puVar2 == (undefined8*)0x0) {
      *(long**)( param_2 + 0x18 ) = local_b0;
      *(long**)( param_2 + 0x20 ) = local_b0;
      LAB_00111fb4:lVar34 = *(long*)pSVar37;
      if (lVar34 != 0) goto LAB_00111fc0;
      LAB_00112100:uVar30 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B == '\0') {
         *puVar2 = local_b0;
         local_b0[1] = (long)puVar2;
         *(long**)( param_2 + 0x20 ) = local_b0;
         goto LAB_00111fb4;
      }

      lVar34 = *(long*)( param_2 + 0x18 );
      *(long**)( lVar34 + 8 ) = local_b0;
      *local_b0 = lVar34;
      lVar34 = *(long*)pSVar37;
      *(long**)( param_2 + 0x18 ) = local_b0;
      if (lVar34 == 0) goto LAB_00112100;
      LAB_00111fc0:uVar30 = *(uint*)( lVar34 + 0x20 );
   }

   lVar34 = *(long*)( param_2 + 0x10 );
   if (uVar30 == 0) {
      uVar30 = 1;
   }

   uVar32 = (ulong)uVar30;
   uVar44 = 0;
   uVar3 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar45 = CONCAT44(0, uVar3);
   lVar38 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar32 * lVar38;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar45;
   lVar40 = SUB168(auVar13 * auVar25, 8);
   lVar39 = *(long*)( param_2 + 8 );
   puVar1 = (uint*)( lVar34 + lVar40 * 4 );
   iVar36 = SUB164(auVar13 * auVar25, 8);
   uVar31 = *puVar1;
   plVar29 = local_b0;
   while (uVar31 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar31 * lVar38;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar45;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar3 + iVar36 ) - SUB164(auVar14 * auVar26, 8)) * lVar38;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar45;
      uVar30 = SUB164(auVar15 * auVar27, 8);
      plVar47 = plVar29;
      if (uVar30 < uVar44) {
         *puVar1 = (uint)uVar32;
         uVar32 = (ulong)uVar31;
         puVar2 = (undefined8*)( lVar39 + lVar40 * 8 );
         plVar47 = (long*)*puVar2;
         *puVar2 = plVar29;
         uVar44 = uVar30;
      }

      uVar30 = (uint)uVar32;
      uVar44 = uVar44 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar36 + 1) * lVar38;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar45;
      lVar40 = SUB168(auVar16 * auVar28, 8);
      puVar1 = (uint*)( lVar34 + lVar40 * 4 );
      iVar36 = SUB164(auVar16 * auVar28, 8);
      plVar29 = plVar47;
      uVar31 = *puVar1;
   }
;
   *(long**)( lVar39 + lVar40 * 8 ) = plVar29;
   *puVar1 = uVar30;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_0011209c:*(long**)param_1 = local_b0;
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, EditorPlugin*, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, EditorPlugin*> > >::insert(StringName const&,
   EditorPlugin* const&, bool) */StringName *
HashMap<StringName,EditorPlugin*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,EditorPlugin*>>>
::insert(StringName *param_1,EditorPlugin **param_2,bool param_3){
   uint uVar1;
   EditorPlugin *pEVar2;
   EditorPlugin *pEVar3;
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
   undefined8 uVar28;
   uint uVar29;
   uint uVar30;
   ulong uVar31;
   EditorPlugin *pEVar32;
   long lVar33;
   EditorPlugin *pEVar34;
   long *in_RCX;
   int iVar35;
   undefined7 in_register_00000011;
   StringName *pSVar36;
   long lVar37;
   ulong uVar38;
   undefined8 uVar39;
   char in_R8B;
   uint uVar40;
   uint uVar41;
   ulong uVar42;
   uint uVar43;
   EditorPlugin *pEVar44;
   long in_FS_OFFSET;
   bool bVar45;
   EditorPlugin *local_b0;
   long local_58;
   long local_50;
   long local_40;
   pSVar36 = (StringName*)CONCAT71(in_register_00000011, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar29 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   if (param_2[1] == (EditorPlugin*)0x0) {
      uVar38 = (ulong)uVar29;
      uVar31 = uVar38 * 4;
      uVar42 = uVar38 * 8;
      pEVar34 = (EditorPlugin*)Memory::alloc_static(uVar31, false);
      param_2[2] = pEVar34;
      pEVar34 = (EditorPlugin*)Memory::alloc_static(uVar42, false);
      param_2[1] = pEVar34;
      if (uVar29 != 0) {
         pEVar2 = param_2[2];
         if (( pEVar2 < pEVar34 + uVar42 ) && ( pEVar34 < pEVar2 + uVar31 )) {
            uVar31 = 0;
            do {
               *(undefined4*)( pEVar2 + uVar31 * 4 ) = 0;
               *(undefined8*)( pEVar34 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar38 != uVar31 );
         }
 else {
            memset(pEVar2, 0, uVar31);
            memset(pEVar34, 0, uVar42);
         }

         goto LAB_001122c8;
      }

      iVar35 = *(int*)( (long)param_2 + 0x2c );
      if (pEVar34 == (EditorPlugin*)0x0) goto LAB_001123f0;
      if (*(int*)( (long)param_2 + 0x2c ) != 0) goto LAB_001122d4;
      LAB_00112416:uVar29 = *(uint*)( param_2 + 5 );
      if (uVar29 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_b0 = (EditorPlugin*)0x0;
         goto LAB_001123a9;
      }

      uVar31 = ( ulong )(uVar29 + 1);
      *(undefined4*)( (long)param_2 + 0x2c ) = 0;
      uVar1 = *(uint*)( hash_table_size_primes + (ulong)uVar29 * 4 );
      if (uVar29 + 1 < 2) {
         uVar31 = 2;
      }

      uVar29 = *(uint*)( hash_table_size_primes + uVar31 * 4 );
      uVar38 = (ulong)uVar29;
      *(int*)( param_2 + 5 ) = (int)uVar31;
      pEVar34 = param_2[1];
      uVar31 = uVar38 * 4;
      uVar42 = uVar38 * 8;
      pEVar2 = param_2[2];
      pEVar32 = (EditorPlugin*)Memory::alloc_static(uVar31, false);
      param_2[2] = pEVar32;
      pEVar32 = (EditorPlugin*)Memory::alloc_static(uVar42, false);
      param_2[1] = pEVar32;
      if (uVar29 != 0) {
         pEVar3 = param_2[2];
         if (( pEVar3 < pEVar32 + uVar42 ) && ( pEVar32 < pEVar3 + uVar31 )) {
            uVar31 = 0;
            do {
               *(undefined4*)( pEVar3 + uVar31 * 4 ) = 0;
               *(undefined8*)( pEVar32 + uVar31 * 8 ) = 0;
               uVar31 = uVar31 + 1;
            }
 while ( uVar31 != uVar38 );
         }
 else {
            memset(pEVar3, 0, uVar31);
            memset(pEVar32, 0, uVar42);
         }

      }

      if (uVar1 != 0) {
         uVar31 = 0;
         do {
            uVar29 = *(uint*)( pEVar2 + uVar31 * 4 );
            if (uVar29 != 0) {
               pEVar44 = param_2[2];
               uVar40 = 0;
               uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
               uVar42 = CONCAT44(0, uVar30);
               lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar29 * lVar33;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar42;
               lVar37 = SUB168(auVar8 * auVar20, 8);
               pEVar3 = pEVar44 + lVar37 * 4;
               iVar35 = SUB164(auVar8 * auVar20, 8);
               uVar41 = *(uint*)pEVar3;
               uVar28 = *(undefined8*)( pEVar34 + uVar31 * 8 );
               while (uVar41 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar41 * lVar33;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar42;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( uVar30 + iVar35 ) - SUB164(auVar9 * auVar21, 8)) * lVar33;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar42;
                  uVar43 = SUB164(auVar10 * auVar22, 8);
                  uVar39 = uVar28;
                  if (uVar43 < uVar40) {
                     *(uint*)pEVar3 = uVar29;
                     uVar39 = *(undefined8*)( pEVar32 + lVar37 * 8 );
                     *(undefined8*)( pEVar32 + lVar37 * 8 ) = uVar28;
                     uVar29 = uVar41;
                     uVar40 = uVar43;
                  }

                  uVar40 = uVar40 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar35 + 1) * lVar33;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar42;
                  lVar37 = SUB168(auVar11 * auVar23, 8);
                  pEVar3 = pEVar44 + lVar37 * 4;
                  iVar35 = SUB164(auVar11 * auVar23, 8);
                  uVar28 = uVar39;
                  uVar41 = *(uint*)pEVar3;
               }
;
               *(undefined8*)( pEVar32 + lVar37 * 8 ) = uVar28;
               *(uint*)pEVar3 = uVar29;
               *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
            }

            uVar31 = uVar31 + 1;
         }
 while ( uVar1 != uVar31 );
         Memory::free_static(pEVar34, false);
         Memory::free_static(pEVar2, false);
      }

   }
 else {
      LAB_001122c8:iVar35 = *(int*)( (long)param_2 + 0x2c );
      if (iVar35 != 0) {
         LAB_001122d4:uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
         uVar31 = CONCAT44(0, uVar1);
         lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
         if (*(long*)pSVar36 == 0) {
            uVar30 = StringName::get_empty_hash();
         }
 else {
            uVar30 = *(uint*)( *(long*)pSVar36 + 0x20 );
         }

         if (uVar30 == 0) {
            uVar30 = 1;
         }

         uVar43 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = (ulong)uVar30 * lVar33;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar31;
         lVar37 = SUB168(auVar4 * auVar16, 8);
         uVar41 = *(uint*)( param_2[2] + lVar37 * 4 );
         uVar40 = SUB164(auVar4 * auVar16, 8);
         if (uVar41 != 0) {
            do {
               if (( uVar30 == uVar41 ) && ( *(long*)( *(long*)( param_2[1] + lVar37 * 8 ) + 0x10 ) == *(long*)pSVar36 )) {
                  local_b0 = *(EditorPlugin**)( param_2[1] + (ulong)uVar40 * 8 );
                  *(long*)( local_b0 + 0x18 ) = *in_RCX;
                  goto LAB_001123a9;
               }

               uVar43 = uVar43 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar40 + 1) * lVar33;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar31;
               lVar37 = SUB168(auVar5 * auVar17, 8);
               uVar41 = *(uint*)( param_2[2] + lVar37 * 4 );
               uVar40 = SUB164(auVar5 * auVar17, 8);
            }
 while ( ( uVar41 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar41 * lVar33,auVar18._8_8_ = 0,auVar18._0_8_ = uVar31,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar1 + uVar40 ) - SUB164(auVar6 * auVar18, 8)) * lVar33,auVar19._8_8_ = 0,auVar19._0_8_ = uVar31,uVar43 <= SUB164(auVar7 * auVar19, 8) );
         }

         iVar35 = *(int*)( (long)param_2 + 0x2c );
      }

      LAB_001123f0:if ((float)uVar29 * __LC51 < (float)( iVar35 + 1 )) goto LAB_00112416;
   }

   StringName::StringName((StringName*)&local_58, pSVar36);
   local_50 = *in_RCX;
   local_b0 = (EditorPlugin*)operator_new(0x20, "");
   *(long*)local_b0 = 0;
   *(long*)( local_b0 + 8 ) = 0;
   StringName::StringName((StringName*)( local_b0 + 0x10 ), (StringName*)&local_58);
   bVar45 = StringName::configured != '\0';
   *(long*)( local_b0 + 0x18 ) = local_50;
   if (( bVar45 ) && ( local_58 != 0 )) {
      StringName::unref();
   }

   pEVar34 = param_2[4];
   if (pEVar34 == (EditorPlugin*)0x0) {
      param_2[3] = local_b0;
      param_2[4] = local_b0;
      LAB_001126b7:lVar33 = *(long*)pSVar36;
      if (lVar33 != 0) goto LAB_001126c3;
      LAB_001127c4:uVar29 = StringName::get_empty_hash();
   }
 else {
      if (in_R8B != '\0') {
         pEVar34 = param_2[3];
         *(EditorPlugin**)( pEVar34 + 8 ) = local_b0;
         *(EditorPlugin**)local_b0 = pEVar34;
         param_2[3] = local_b0;
         goto LAB_001126b7;
      }

      *(EditorPlugin**)pEVar34 = local_b0;
      *(EditorPlugin**)( local_b0 + 8 ) = pEVar34;
      lVar33 = *(long*)pSVar36;
      param_2[4] = local_b0;
      if (lVar33 == 0) goto LAB_001127c4;
      LAB_001126c3:uVar29 = *(uint*)( lVar33 + 0x20 );
   }

   pEVar34 = param_2[2];
   if (uVar29 == 0) {
      uVar29 = 1;
   }

   uVar31 = (ulong)uVar29;
   uVar41 = 0;
   uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 5 ) * 4 );
   uVar42 = CONCAT44(0, uVar1);
   lVar33 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 5 ) * 8 );
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar31 * lVar33;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar42;
   lVar37 = SUB168(auVar12 * auVar24, 8);
   pEVar32 = param_2[1];
   pEVar2 = pEVar34 + lVar37 * 4;
   iVar35 = SUB164(auVar12 * auVar24, 8);
   uVar30 = *(uint*)pEVar2;
   pEVar3 = local_b0;
   while (uVar30 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar30 * lVar33;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar42;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar1 + iVar35 ) - SUB164(auVar13 * auVar25, 8)) * lVar33;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar42;
      uVar29 = SUB164(auVar14 * auVar26, 8);
      pEVar44 = pEVar3;
      if (uVar29 < uVar41) {
         *(uint*)pEVar2 = (uint)uVar31;
         uVar31 = (ulong)uVar30;
         pEVar2 = pEVar32 + lVar37 * 8;
         pEVar44 = *(EditorPlugin**)pEVar2;
         *(EditorPlugin**)pEVar2 = pEVar3;
         uVar41 = uVar29;
      }

      uVar29 = (uint)uVar31;
      uVar41 = uVar41 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar35 + 1) * lVar33;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar42;
      lVar37 = SUB168(auVar15 * auVar27, 8);
      pEVar2 = pEVar34 + lVar37 * 4;
      iVar35 = SUB164(auVar15 * auVar27, 8);
      pEVar3 = pEVar44;
      uVar30 = *(uint*)pEVar2;
   }
;
   *(EditorPlugin**)( pEVar32 + lVar37 * 8 ) = pEVar3;
   *(uint*)pEVar2 = uVar29;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_001123a9:*(EditorPlugin**)param_1 = local_b0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* List<Node*, DefaultAllocator>::TEMPNAMEPLACEHOLDERVALUE(List<Node*, DefaultAllocator> const&) */void List<Node*,DefaultAllocator>::operator =(List<Node*,DefaultAllocator> *this, List *param_1) {
   void *pvVar1;
   long lVar2;
   undefined8 uVar3;
   long lVar4;
   undefined1(*pauVar5)[16];
   undefined8 *puVar6;
   undefined8 *puVar7;
   long *plVar8;
   plVar8 = *(long**)this;
   if (plVar8 != (long*)0x0) {
      do {
         pvVar1 = (void*)*plVar8;
         if (pvVar1 == (void*)0x0) goto LAB_001129c0;
         if (*(long**)( (long)pvVar1 + 0x18 ) == plVar8) {
            lVar4 = *(long*)( (long)pvVar1 + 8 );
            lVar2 = *(long*)( (long)pvVar1 + 0x10 );
            *plVar8 = lVar4;
            if (pvVar1 == (void*)plVar8[1]) {
               plVar8[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar4;
               lVar4 = *(long*)( (long)pvVar1 + 8 );
            }

            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar2;
            }

            Memory::free_static(pvVar1, false);
            *(int*)( plVar8 + 2 ) = (int)plVar8[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar8 = *(long**)this;
      }
 while ( (int)plVar8[2] != 0 );
      Memory::free_static(plVar8, false);
      *(undefined8*)this = 0;
   }

   plVar8 = (long*)0x0;
   LAB_001129c0:if (( *(long**)param_1 != (long*)0x0 ) && ( puVar7 = (undefined8*)**(long**)param_1 ),puVar7 != (undefined8*)0x0) {
      if (plVar8 == (long*)0x0) {
         pauVar5 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined1(**) [16])this = pauVar5;
         *(undefined4*)pauVar5[1] = 0;
         *pauVar5 = (undefined1[16])0x0;
      }

      do {
         while (true) {
            puVar6 = (undefined8*)operator_new(0x20, DefaultAllocator::alloc);
            uVar3 = *puVar7;
            puVar6[1] = 0;
            *puVar6 = uVar3;
            plVar8 = *(long**)this;
            lVar4 = plVar8[1];
            puVar6[3] = plVar8;
            puVar6[2] = lVar4;
            if (lVar4 != 0) {
               *(undefined8**)( lVar4 + 8 ) = puVar6;
            }

            plVar8[1] = (long)puVar6;
            if (*plVar8 == 0) break;
            puVar7 = (undefined8*)puVar7[1];
            *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
            if (puVar7 == (undefined8*)0x0) {
               return;
            }

         }
;
         puVar7 = (undefined8*)puVar7[1];
         *(int*)( plVar8 + 2 ) = (int)plVar8[2] + 1;
         *plVar8 = (long)puVar6;
      }
 while ( puVar7 != (undefined8*)0x0 );
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<Node*, Object*, HashMapHasherDefault, HashMapComparatorDefault<Node*>,
   DefaultTypedAllocator<HashMapElement<Node*, Object*> > >::operator[](Node* const&) */undefined1 * __thiscallHashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>>::operator [](HashMap<Node*,Object*,HashMapHasherDefault,HashMapComparatorDefault<Node*>,DefaultTypedAllocator<HashMapElement<Node*,Object*>>> * this, Node * *param_1) * puVar1 ;undefined8 *puVar2uint uVar3void *pvVar4void *__slong lVar5long lVar6undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1(*pauVar23)[16];char cVar24ulong uVar25undefined8 uVar26void *__s_00undefined1(*pauVar27)[16];void *pvVar28int iVar29long lVar30long lVar31uint uVar32ulong uVar33Node *pNVar34undefined8 uVar35uint uVar36uint uVar37uint uVar38ulong uVar39undefined1(*pauVar40)[16];long in_FS_OFFSETuint local_98uint local_48uint local_44long local_40pNVar34 = *param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_48 = 0;cVar24 = _lookup_pos(this, (Node**)pNVar34, &local_48);if (cVar24 == '\0') {
   uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      uVar33 = (ulong)uVar32;
      uVar25 = uVar33 * 4;
      uVar39 = uVar33 * 8;
      uVar26 = Memory::alloc_static(uVar25, false);
      *(undefined8*)( this + 0x10 ) = uVar26;
      pvVar28 = (void*)Memory::alloc_static(uVar39, false);
      *(void**)( this + 8 ) = pvVar28;
      if (uVar32 != 0) {
         pvVar4 = *(void**)( this + 0x10 );
         if (( pvVar4 < (void*)( (long)pvVar28 + uVar39 ) ) && ( pvVar28 < (void*)( (long)pvVar4 + uVar25 ) )) {
            uVar25 = 0;
            do {
               *(undefined4*)( (long)pvVar4 + uVar25 * 4 ) = 0;
               *(undefined8*)( (long)pvVar28 + uVar25 * 8 ) = 0;
               uVar25 = uVar25 + 1;
            }
 while ( uVar33 != uVar25 );
         }
 else {
            memset(pvVar4, 0, uVar25);
            memset(pvVar28, 0, uVar39);
         }

      }

      pNVar34 = *param_1;
   }

   local_44 = 0;
   cVar24 = _lookup_pos(this, (Node**)pNVar34, &local_44);
   if (cVar24 == '\0') {
      if ((float)uVar32 * __LC51 < (float)( *(int*)( this + 0x2c ) + 1 )) {
         uVar32 = *(uint*)( this + 0x28 );
         if (uVar32 == 0x1c) {
            pauVar27 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_00112ef8;
         }

         uVar25 = ( ulong )(uVar32 + 1);
         *(undefined4*)( this + 0x2c ) = 0;
         uVar3 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
         if (uVar32 + 1 < 2) {
            uVar25 = 2;
         }

         uVar32 = *(uint*)( hash_table_size_primes + uVar25 * 4 );
         uVar33 = (ulong)uVar32;
         *(int*)( this + 0x28 ) = (int)uVar25;
         pvVar28 = *(void**)( this + 8 );
         uVar25 = uVar33 * 4;
         uVar39 = uVar33 * 8;
         pvVar4 = *(void**)( this + 0x10 );
         uVar26 = Memory::alloc_static(uVar25, false);
         *(undefined8*)( this + 0x10 ) = uVar26;
         __s_00 = (void*)Memory::alloc_static(uVar39, false);
         *(void**)( this + 8 ) = __s_00;
         if (uVar32 != 0) {
            __s = *(void**)( this + 0x10 );
            if (( __s < (void*)( (long)__s_00 + uVar39 ) ) && ( __s_00 < (void*)( (long)__s + uVar25 ) )) {
               uVar25 = 0;
               do {
                  *(undefined4*)( (long)__s + uVar25 * 4 ) = 0;
                  *(undefined8*)( (long)__s_00 + uVar25 * 8 ) = 0;
                  uVar25 = uVar25 + 1;
               }
 while ( uVar25 != uVar33 );
            }
 else {
               memset(__s, 0, uVar25);
               memset(__s_00, 0, uVar39);
            }

         }

         if (uVar3 == 0) {
            pNVar34 = *param_1;
         }
 else {
            uVar25 = 0;
            do {
               uVar32 = *(uint*)( (long)pvVar4 + uVar25 * 4 );
               if (uVar32 != 0) {
                  lVar5 = *(long*)( this + 0x10 );
                  uVar36 = 0;
                  uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                  uVar39 = CONCAT44(0, uVar38);
                  lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = (ulong)uVar32 * lVar6;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar39;
                  lVar30 = SUB168(auVar7 * auVar15, 8);
                  puVar1 = (uint*)( lVar5 + lVar30 * 4 );
                  iVar29 = SUB164(auVar7 * auVar15, 8);
                  uVar37 = *puVar1;
                  uVar26 = *(undefined8*)( (long)pvVar28 + uVar25 * 8 );
                  while (uVar37 != 0) {
                     auVar8._8_8_ = 0;
                     auVar8._0_8_ = (ulong)uVar37 * lVar6;
                     auVar16._8_8_ = 0;
                     auVar16._0_8_ = uVar39;
                     auVar9._8_8_ = 0;
                     auVar9._0_8_ = ( ulong )(( uVar38 + iVar29 ) - SUB164(auVar8 * auVar16, 8)) * lVar6;
                     auVar17._8_8_ = 0;
                     auVar17._0_8_ = uVar39;
                     local_98 = SUB164(auVar9 * auVar17, 8);
                     uVar35 = uVar26;
                     if (local_98 < uVar36) {
                        *puVar1 = uVar32;
                        puVar2 = (undefined8*)( (long)__s_00 + lVar30 * 8 );
                        uVar35 = *puVar2;
                        *puVar2 = uVar26;
                        uVar32 = uVar37;
                        uVar36 = local_98;
                     }

                     uVar36 = uVar36 + 1;
                     auVar10._8_8_ = 0;
                     auVar10._0_8_ = ( ulong )(iVar29 + 1) * lVar6;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = uVar39;
                     lVar30 = SUB168(auVar10 * auVar18, 8);
                     puVar1 = (uint*)( lVar5 + lVar30 * 4 );
                     iVar29 = SUB164(auVar10 * auVar18, 8);
                     uVar26 = uVar35;
                     uVar37 = *puVar1;
                  }
;
                  *(undefined8*)( (long)__s_00 + lVar30 * 8 ) = uVar26;
                  *puVar1 = uVar32;
                  *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
               }

               uVar25 = uVar25 + 1;
            }
 while ( uVar25 != uVar3 );
            Memory::free_static(pvVar28, false);
            Memory::free_static(pvVar4, false);
            pNVar34 = *param_1;
         }

      }

      pauVar27 = (undefined1(*) [16])operator_new(0x20, "");
      *(Node**)pauVar27[1] = pNVar34;
      *(undefined8*)( pauVar27[1] + 8 ) = 0;
      *pauVar27 = (undefined1[16])0x0;
      puVar2 = *(undefined8**)( this + 0x20 );
      if (puVar2 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar27;
      }
 else {
         *puVar2 = pauVar27;
         *(undefined8**)( *pauVar27 + 8 ) = puVar2;
      }

      pNVar34 = *param_1;
      *(undefined1(**) [16])( this + 0x20 ) = pauVar27;
      lVar5 = *(long*)( this + 0x10 );
      uVar25 = (long)pNVar34 * 0x3ffff - 1;
      uVar25 = ( uVar25 ^ uVar25 >> 0x1f ) * 0x15;
      uVar25 = ( uVar25 ^ uVar25 >> 0xb ) * 0x41;
      uVar25 = uVar25 >> 0x16 ^ uVar25;
      uVar39 = uVar25 & 0xffffffff;
      if ((int)uVar25 == 0) {
         uVar39 = 1;
      }

      uVar37 = 0;
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar38 = (uint)uVar39;
      uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar25 = CONCAT44(0, uVar32);
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar39 * lVar6;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar25;
      lVar31 = SUB168(auVar11 * auVar19, 8);
      lVar30 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar5 + lVar31 * 4 );
      iVar29 = SUB164(auVar11 * auVar19, 8);
      uVar3 = *puVar1;
      pauVar23 = pauVar27;
      while (uVar3 != 0) {
         auVar12._8_8_ = 0;
         auVar12._0_8_ = (ulong)uVar3 * lVar6;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar25;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = ( ulong )(( uVar32 + iVar29 ) - SUB164(auVar12 * auVar20, 8)) * lVar6;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar25;
         local_98 = SUB164(auVar13 * auVar21, 8);
         pauVar40 = pauVar23;
         if (local_98 < uVar37) {
            *puVar1 = (uint)uVar39;
            uVar39 = (ulong)uVar3;
            puVar2 = (undefined8*)( lVar30 + lVar31 * 8 );
            pauVar40 = (undefined1(*) [16])*puVar2;
            *puVar2 = pauVar23;
            uVar37 = local_98;
         }

         uVar38 = (uint)uVar39;
         uVar37 = uVar37 + 1;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = ( ulong )(iVar29 + 1) * lVar6;
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar25;
         lVar31 = SUB168(auVar14 * auVar22, 8);
         puVar1 = (uint*)( lVar5 + lVar31 * 4 );
         iVar29 = SUB164(auVar14 * auVar22, 8);
         pauVar23 = pauVar40;
         uVar3 = *puVar1;
      }
;
      *(undefined1(**) [16])( lVar30 + lVar31 * 8 ) = pauVar23;
      *puVar1 = uVar38;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   }
 else {
      pauVar27 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_44 * 8 );
      *(undefined8*)( pauVar27[1] + 8 ) = 0;
   }

}
 else {
   pauVar27 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_48 * 8 );
}
LAB_00112ef8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar27[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Callable create_custom_callable_function_pointer<EditorSelection, Node*>(EditorSelection*, char
   const*, void (EditorSelection::*)(Node*)) */EditorSelection *create_custom_callable_function_pointer<EditorSelection,Node*>(EditorSelection *param_1, char *param_2, _func_void_Node_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC16;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00119eb0;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_Node_ptr**)( this + 0x20 ) = param_3 + 1;
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, StringName, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, StringName> > >::operator[](String const&) */StringName * __thiscallHashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>>::operator [](HashMap<String,StringName,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,StringName>>> * this, String * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__slong lVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]char cVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42void *pvVar43int iVar44long lVar45long lVar46ulong uVar47undefined8 uVar48uint uVar49uint uVar50ulong uVar51long lVar52uint uVar53undefined8 *puVar54uint uVar55long in_FS_OFFSETStringName *local_a0long local_70undefined1 local_68[16]long local_58long local_50[2]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_001137cb:local_70 = 0;
   uVar47 = (ulong)uVar55;
   uVar40 = uVar47 * 4;
   uVar51 = uVar47 * 8;
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   pvVar43 = (void*)Memory::alloc_static(uVar51, false);
   *(void**)( this + 8 ) = pvVar43;
   if (uVar55 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar43 + uVar51 ) ) && ( pvVar43 < (void*)( (long)pvVar3 + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)pvVar43 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar47 != uVar40 );
      }
 else {
         memset(pvVar3, 0, uVar40);
         memset(pvVar43, 0, uVar51);
      }

      LAB_001136c4:iVar44 = *(int*)( this + 0x2c );
      if (iVar44 != 0) {
         LAB_001136d0:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar50 = String::hash();
         uVar40 = CONCAT44(0, uVar38);
         lVar52 = *(long*)( this + 0x10 );
         uVar39 = 1;
         if (uVar50 != 0) {
            uVar39 = uVar50;
         }

         uVar53 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar4;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar40;
         lVar45 = SUB168(auVar17 * auVar33, 8);
         uVar50 = *(uint*)( lVar52 + lVar45 * 4 );
         uVar49 = SUB164(auVar17 * auVar33, 8);
         if (uVar50 != 0) {
            do {
               if (uVar39 == uVar50) {
                  cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar45 * 8 ) + 0x10 ), param_1);
                  if (cVar37 != '\0') {
                     StringName::operator =((StringName*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar49 * 8 ) + 0x18 ), (StringName*)&local_70);
                     local_a0 = (StringName*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar49 * 8 ) + 0x18 );
                     goto LAB_00113573;
                  }

                  lVar52 = *(long*)( this + 0x10 );
               }

               uVar53 = uVar53 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar49 + 1) * lVar4;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar40;
               lVar45 = SUB168(auVar18 * auVar34, 8);
               uVar50 = *(uint*)( lVar52 + lVar45 * 4 );
               uVar49 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar50 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar50 * lVar4,auVar35._8_8_ = 0,auVar35._0_8_ = uVar40,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar49 ) - SUB164(auVar19 * auVar35, 8)) * lVar4,auVar36._8_8_ = 0,auVar36._0_8_ = uVar40,uVar53 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar44 = *(int*)( this + 0x2c );
      }

      uVar47 = (ulong)uVar55;
      goto LAB_001131b0;
   }

   iVar44 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_001131b0;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_001136d0;
   LAB_001131d6:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_a0 = (StringName*)0x18;
      goto LAB_00113573;
   }

   uVar40 = ( ulong )(uVar55 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   if (uVar55 + 1 < 2) {
      uVar40 = 2;
   }

   uVar55 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar47 = (ulong)uVar55;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar43 = *(void**)( this + 8 );
   uVar40 = uVar47 * 4;
   uVar51 = uVar47 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar51, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar51 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar47 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar51);
      }

   }

   if (uVar38 != 0) {
      uVar40 = 0;
      do {
         uVar55 = *(uint*)( (long)pvVar3 + uVar40 * 4 );
         if (uVar55 != 0) {
            lVar4 = *(long*)( this + 0x10 );
            uVar49 = 0;
            uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar51 = CONCAT44(0, uVar39);
            lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar55 * lVar52;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar51;
            lVar45 = SUB168(auVar5 * auVar21, 8);
            puVar1 = (uint*)( lVar4 + lVar45 * 4 );
            iVar44 = SUB164(auVar5 * auVar21, 8);
            uVar50 = *puVar1;
            uVar41 = *(undefined8*)( (long)pvVar43 + uVar40 * 8 );
            while (uVar50 != 0) {
               auVar6._8_8_ = 0;
               auVar6._0_8_ = (ulong)uVar50 * lVar52;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar51;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(( uVar39 + iVar44 ) - SUB164(auVar6 * auVar22, 8)) * lVar52;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar51;
               uVar53 = SUB164(auVar7 * auVar23, 8);
               uVar48 = uVar41;
               if (uVar53 < uVar49) {
                  *puVar1 = uVar55;
                  puVar42 = (undefined8*)( (long)__s_00 + lVar45 * 8 );
                  uVar48 = *puVar42;
                  *puVar42 = uVar41;
                  uVar55 = uVar50;
                  uVar49 = uVar53;
               }

               uVar49 = uVar49 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar51;
               lVar45 = SUB168(auVar8 * auVar24, 8);
               puVar1 = (uint*)( lVar4 + lVar45 * 4 );
               iVar44 = SUB164(auVar8 * auVar24, 8);
               uVar41 = uVar48;
               uVar50 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar45 * 8 ) = uVar41;
            *puVar1 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar38 != uVar40 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      uVar40 = CONCAT44(0, uVar55);
      lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar39 = String::hash();
      lVar52 = *(long*)( this + 0x10 );
      uVar38 = 1;
      if (uVar39 != 0) {
         uVar38 = uVar39;
      }

      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar45 = SUB168(auVar13 * auVar29, 8);
      uVar39 = *(uint*)( lVar52 + lVar45 * 4 );
      uVar50 = SUB164(auVar13 * auVar29, 8);
      if (uVar39 == 0) {
         lVar46 = *(long*)( this + 8 );
      }
 else {
         lVar46 = *(long*)( this + 8 );
         uVar49 = 0;
         do {
            if (uVar38 == uVar39) {
               cVar37 = String::operator ==((String*)( *(long*)( lVar46 + lVar45 * 8 ) + 0x10 ), param_1);
               if (cVar37 != '\0') {
                  local_a0 = (StringName*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar50 * 8 ) + 0x18 );
                  goto LAB_00113593;
               }

               lVar52 = *(long*)( this + 0x10 );
               lVar46 = *(long*)( this + 8 );
            }

            uVar49 = uVar49 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(uVar50 + 1) * lVar4;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar40;
            lVar45 = SUB168(auVar14 * auVar30, 8);
            uVar39 = *(uint*)( lVar52 + lVar45 * 4 );
            uVar50 = SUB164(auVar14 * auVar30, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar39 * lVar4,auVar31._8_8_ = 0,auVar31._0_8_ = uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar50 + uVar55 ) - SUB164(auVar15 * auVar31, 8)) * lVar4,auVar32._8_8_ = 0,auVar32._0_8_ = uVar40,uVar49 <= SUB164(auVar16 * auVar32, 8) );
      }

      local_70 = 0;
      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar46 == 0) goto LAB_001137cb;
      goto LAB_001136c4;
   }

   local_70 = 0;
   uVar47 = (ulong)uVar55;
   iVar44 = 0;
   LAB_001131b0:if ((float)uVar47 * __LC51 < (float)( iVar44 + 1 )) goto LAB_001131d6;
}
local_58 = 0;local_68 = (undefined1[16])0x0;if (*(long*)param_1 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)param_1);
}
StringName::StringName((StringName*)local_50, (StringName*)&local_70);puVar42 = (undefined8*)operator_new(0x20, "");puVar42[2] = 0;*puVar42 = local_68._0_8_;puVar42[1] = local_68._8_8_;if (local_58 != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar42 + 2 ), (CowData*)&local_58);
}
local_a0 = (StringName*)( puVar42 + 3 );StringName::StringName(local_a0, (StringName*)local_50);if (( StringName::configured != '\0' ) && ( local_50[0] != 0 )) {
   StringName::unref();
}
CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);puVar54 = *(undefined8**)( this + 0x20 );if (puVar54 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar42;
}
 else {
   *puVar54 = puVar42;
   puVar42[1] = puVar54;
}
*(undefined8**)( this + 0x20 ) = puVar42;uVar38 = String::hash();lVar4 = *(long*)( this + 0x10 );uVar55 = 1;if (uVar38 != 0) {
   uVar55 = uVar38;
}
uVar50 = 0;uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);lVar52 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar9._8_8_ = 0;auVar9._0_8_ = (ulong)uVar55 * lVar52;auVar25._8_8_ = 0;auVar25._0_8_ = uVar40;lVar46 = SUB168(auVar9 * auVar25, 8);lVar45 = *(long*)( this + 8 );puVar1 = (uint*)( lVar4 + lVar46 * 4 );iVar44 = SUB164(auVar9 * auVar25, 8);uVar39 = *puVar1;while (uVar39 != 0) {
   auVar10._8_8_ = 0;
   auVar10._0_8_ = (ulong)uVar39 * lVar52;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar40;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = ( ulong )(( uVar38 + iVar44 ) - SUB164(auVar10 * auVar26, 8)) * lVar52;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   uVar49 = SUB164(auVar11 * auVar27, 8);
   puVar54 = puVar42;
   if (uVar49 < uVar50) {
      *puVar1 = uVar55;
      puVar2 = (undefined8*)( lVar45 + lVar46 * 8 );
      puVar54 = (undefined8*)*puVar2;
      *puVar2 = puVar42;
      uVar50 = uVar49;
      uVar55 = uVar39;
   }

   uVar50 = uVar50 + 1;
   auVar12._8_8_ = 0;
   auVar12._0_8_ = ( ulong )(iVar44 + 1) * lVar52;
   auVar28._8_8_ = 0;
   auVar28._0_8_ = uVar40;
   lVar46 = SUB168(auVar12 * auVar28, 8);
   puVar1 = (uint*)( lVar4 + lVar46 * 4 );
   iVar44 = SUB164(auVar12 * auVar28, 8);
   puVar42 = puVar54;
   uVar39 = *puVar1;
}
;*(undefined8**)( lVar45 + lVar46 * 8 ) = puVar42;*puVar1 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00113573:if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
   StringName::unref();
}
LAB_00113593:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_a0;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, String, HashMapHasherDefault, HashMapComparatorDefault<StringName>,
   DefaultTypedAllocator<HashMapElement<StringName, String> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>>::operator [](HashMap<StringName,String,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,String>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined1 auVar4[16]undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]uint uVar36uint uVar37uint uVar38ulong uVar39undefined8 uVar40void *__s_00undefined8 *puVar41long lVar42void *pvVar43ulong uVar44int iVar45long lVar46long lVar47long lVar48ulong uVar49undefined8 uVar50uint uVar51uint uVar52uint uVar53undefined8 *puVar54long in_FS_OFFSETundefined8 *local_a8undefined8 local_70undefined1 local_68[16]long local_58long local_50[2]long local_40lVar42 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar39 = CONCAT44(0, uVar37);if (lVar42 == 0) {
   LAB_00114030:local_70 = 0;
   uVar44 = uVar39 * 4;
   uVar49 = uVar39 * 8;
   uVar40 = Memory::alloc_static(uVar44, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   pvVar43 = (void*)Memory::alloc_static(uVar49, false);
   *(void**)( this + 8 ) = pvVar43;
   if ((int)uVar39 != 0) {
      pvVar3 = *(void**)( this + 0x10 );
      if (( pvVar3 < (void*)( (long)pvVar43 + uVar49 ) ) && ( pvVar43 < (void*)( (long)pvVar3 + uVar44 ) )) {
         uVar44 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar44 * 4 ) = 0;
            *(undefined8*)( (long)pvVar43 + uVar44 * 8 ) = 0;
            uVar44 = uVar44 + 1;
         }
 while ( uVar39 != uVar44 );
      }
 else {
         memset(pvVar3, 0, uVar44);
         memset(pvVar43, 0, uVar49);
      }

      LAB_00113aa1:iVar45 = *(int*)( this + 0x2c );
      if (iVar45 != 0) {
         LAB_00113aad:uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar44 = CONCAT44(0, uVar37);
         lVar42 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar38 = StringName::get_empty_hash();
         }
 else {
            uVar38 = *(uint*)( *(long*)param_1 + 0x20 );
         }

         if (uVar38 == 0) {
            uVar38 = 1;
         }

         uVar53 = 0;
         auVar8._8_8_ = 0;
         auVar8._0_8_ = (ulong)uVar38 * lVar42;
         auVar24._8_8_ = 0;
         auVar24._0_8_ = uVar44;
         lVar47 = SUB168(auVar8 * auVar24, 8);
         uVar51 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
         uVar52 = SUB164(auVar8 * auVar24, 8);
         if (uVar51 != 0) {
            do {
               if (( uVar38 == uVar51 ) && ( *(long*)( *(long*)( *(long*)( this + 8 ) + lVar47 * 8 ) + 0x10 ) == *(long*)param_1 )) {
                  lVar42 = *(long*)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                  if (*(long*)( lVar42 + 0x18 ) == 0) {
                     local_a8 = (undefined8*)( lVar42 + 0x18 );
                  }
 else {
                     CowData<char32_t>::_ref((CowData<char32_t>*)( lVar42 + 0x18 ), (CowData*)&local_70);
                     local_a8 = (undefined8*)( *(long*)( *(long*)( this + 8 ) + (ulong)uVar52 * 8 ) + 0x18 );
                  }

                  goto LAB_00113f80;
               }

               uVar53 = uVar53 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( ulong )(uVar52 + 1) * lVar42;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar44;
               lVar47 = SUB168(auVar9 * auVar25, 8);
               uVar51 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
               uVar52 = SUB164(auVar9 * auVar25, 8);
            }
 while ( ( uVar51 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar51 * lVar42,auVar26._8_8_ = 0,auVar26._0_8_ = uVar44,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( uVar37 + uVar52 ) - SUB164(auVar10 * auVar26, 8)) * lVar42,auVar27._8_8_ = 0,auVar27._0_8_ = uVar44,uVar53 <= SUB164(auVar11 * auVar27, 8) );
         }

         iVar45 = *(int*)( this + 0x2c );
      }

      goto LAB_00113bbc;
   }

   iVar45 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_00113bbc;
   if (*(int*)( this + 0x2c ) != 0) goto LAB_00113aad;
   LAB_00113be2:uVar37 = *(uint*)( this + 0x28 );
   if (uVar37 == 0x1c) {
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      local_a8 = (undefined8*)0x18;
      goto LAB_00113f80;
   }

   uVar39 = ( ulong )(uVar37 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar37 * 4 );
   if (uVar37 + 1 < 2) {
      uVar39 = 2;
   }

   uVar37 = *(uint*)( hash_table_size_primes + uVar39 * 4 );
   uVar49 = (ulong)uVar37;
   *(int*)( this + 0x28 ) = (int)uVar39;
   pvVar43 = *(void**)( this + 8 );
   uVar39 = uVar49 * 4;
   uVar44 = uVar49 * 8;
   pvVar3 = *(void**)( this + 0x10 );
   uVar40 = Memory::alloc_static(uVar39, false);
   *(undefined8*)( this + 0x10 ) = uVar40;
   __s_00 = (void*)Memory::alloc_static(uVar44, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar37 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar39 ) )) {
         uVar39 = 0;
         do {
            *(undefined4*)( (long)__s + uVar39 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar39 * 8 ) = 0;
            uVar39 = uVar39 + 1;
         }
 while ( uVar39 != uVar49 );
      }
 else {
         memset(__s, 0, uVar39);
         memset(__s_00, 0, uVar44);
      }

   }

   if (uVar38 != 0) {
      uVar39 = 0;
      do {
         uVar37 = *(uint*)( (long)pvVar3 + uVar39 * 4 );
         if (uVar37 != 0) {
            lVar42 = *(long*)( this + 0x10 );
            uVar53 = 0;
            uVar51 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar44 = CONCAT44(0, uVar51);
            lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar12._8_8_ = 0;
            auVar12._0_8_ = (ulong)uVar37 * lVar47;
            auVar28._8_8_ = 0;
            auVar28._0_8_ = uVar44;
            lVar46 = SUB168(auVar12 * auVar28, 8);
            puVar1 = (uint*)( lVar42 + lVar46 * 4 );
            iVar45 = SUB164(auVar12 * auVar28, 8);
            uVar52 = *puVar1;
            uVar40 = *(undefined8*)( (long)pvVar43 + uVar39 * 8 );
            while (uVar52 != 0) {
               auVar13._8_8_ = 0;
               auVar13._0_8_ = (ulong)uVar52 * lVar47;
               auVar29._8_8_ = 0;
               auVar29._0_8_ = uVar44;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = ( ulong )(( uVar51 + iVar45 ) - SUB164(auVar13 * auVar29, 8)) * lVar47;
               auVar30._8_8_ = 0;
               auVar30._0_8_ = uVar44;
               uVar36 = SUB164(auVar14 * auVar30, 8);
               uVar50 = uVar40;
               if (uVar36 < uVar53) {
                  *puVar1 = uVar37;
                  puVar41 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar50 = *puVar41;
                  *puVar41 = uVar40;
                  uVar37 = uVar52;
                  uVar53 = uVar36;
               }

               uVar53 = uVar53 + 1;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = ( ulong )(iVar45 + 1) * lVar47;
               auVar31._8_8_ = 0;
               auVar31._0_8_ = uVar44;
               lVar46 = SUB168(auVar15 * auVar31, 8);
               puVar1 = (uint*)( lVar42 + lVar46 * 4 );
               iVar45 = SUB164(auVar15 * auVar31, 8);
               uVar40 = uVar50;
               uVar52 = *puVar1;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar40;
            *puVar1 = uVar37;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar39 = uVar39 + 1;
      }
 while ( uVar38 != uVar39 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar3, false);
   }

}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar38 = StringName::get_empty_hash();
         lVar42 = *(long*)( this + 8 );
      }
 else {
         uVar38 = *(uint*)( *(long*)param_1 + 0x20 );
      }

      if (uVar38 == 0) {
         uVar38 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = (ulong)uVar38 * lVar47;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar39;
      lVar46 = SUB168(auVar4 * auVar20, 8);
      uVar51 = *(uint*)( *(long*)( this + 0x10 ) + lVar46 * 4 );
      uVar52 = SUB164(auVar4 * auVar20, 8);
      if (uVar51 != 0) {
         uVar53 = 0;
         do {
            if (( uVar38 == uVar51 ) && ( *(long*)( *(long*)( lVar42 + lVar46 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               local_a8 = (undefined8*)( *(long*)( lVar42 + (ulong)uVar52 * 8 ) + 0x18 );
               goto LAB_00113a4c;
            }

            uVar53 = uVar53 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar52 + 1) * lVar47;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar39;
            lVar46 = SUB168(auVar5 * auVar21, 8);
            uVar51 = *(uint*)( *(long*)( this + 0x10 ) + lVar46 * 4 );
            uVar52 = SUB164(auVar5 * auVar21, 8);
         }
 while ( ( uVar51 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar51 * lVar47,auVar22._8_8_ = 0,auVar22._0_8_ = uVar39,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar52 + uVar37 ) - SUB164(auVar6 * auVar22, 8)) * lVar47,auVar23._8_8_ = 0,auVar23._0_8_ = uVar39,uVar53 <= SUB164(auVar7 * auVar23, 8) );
      }

      local_70 = 0;
      uVar39 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar42 == 0) goto LAB_00114030;
      goto LAB_00113aa1;
   }

   local_70 = 0;
   iVar45 = 0;
   LAB_00113bbc:if ((float)uVar39 * __LC51 < (float)( iVar45 + 1 )) goto LAB_00113be2;
}
local_68 = (undefined1[16])0x0;StringName::StringName((StringName*)&local_58, param_1);local_50[0] = 0;puVar41 = (undefined8*)operator_new(0x20, "");*puVar41 = local_68._0_8_;puVar41[1] = local_68._8_8_;StringName::StringName((StringName*)( puVar41 + 2 ), (StringName*)&local_58);puVar41[3] = 0;if (local_50[0] != 0) {
   CowData<char32_t>::_ref((CowData<char32_t>*)( puVar41 + 3 ), (CowData*)local_50);
}
local_a8 = puVar41 + 3;CowData<char32_t>::_unref((CowData<char32_t>*)local_50);if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
   StringName::unref();
}
puVar54 = *(undefined8**)( this + 0x20 );if (puVar54 == (undefined8*)0x0) {
   lVar42 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar41;
   *(undefined8**)( this + 0x20 ) = puVar41;
   if (lVar42 == 0) goto LAB_00113fed;
   LAB_00113ea3:uVar37 = *(uint*)( lVar42 + 0x20 );
}
 else {
   *puVar54 = puVar41;
   puVar41[1] = puVar54;
   lVar42 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar41;
   if (lVar42 != 0) goto LAB_00113ea3;
   LAB_00113fed:uVar37 = StringName::get_empty_hash();
}
lVar42 = *(long*)( this + 0x10 );if (uVar37 == 0) {
   uVar37 = 1;
}
uVar39 = (ulong)uVar37;uVar52 = 0;uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar44 = CONCAT44(0, uVar38);lVar47 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar16._8_8_ = 0;auVar16._0_8_ = uVar39 * lVar47;auVar32._8_8_ = 0;auVar32._0_8_ = uVar44;lVar48 = SUB168(auVar16 * auVar32, 8);lVar46 = *(long*)( this + 8 );puVar1 = (uint*)( lVar42 + lVar48 * 4 );iVar45 = SUB164(auVar16 * auVar32, 8);uVar51 = *puVar1;while (uVar51 != 0) {
   auVar17._8_8_ = 0;
   auVar17._0_8_ = (ulong)uVar51 * lVar47;
   auVar33._8_8_ = 0;
   auVar33._0_8_ = uVar44;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar17 * auVar33, 8)) * lVar47;
   auVar34._8_8_ = 0;
   auVar34._0_8_ = uVar44;
   uVar37 = SUB164(auVar18 * auVar34, 8);
   puVar54 = puVar41;
   if (uVar37 < uVar52) {
      *puVar1 = (uint)uVar39;
      uVar39 = (ulong)uVar51;
      puVar2 = (undefined8*)( lVar46 + lVar48 * 8 );
      puVar54 = (undefined8*)*puVar2;
      *puVar2 = puVar41;
      uVar52 = uVar37;
   }

   uVar37 = (uint)uVar39;
   uVar52 = uVar52 + 1;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = ( ulong )(iVar45 + 1) * lVar47;
   auVar35._8_8_ = 0;
   auVar35._0_8_ = uVar44;
   lVar48 = SUB168(auVar19 * auVar35, 8);
   puVar1 = (uint*)( lVar42 + lVar48 * 4 );
   iVar45 = SUB164(auVar19 * auVar35, 8);
   puVar41 = puVar54;
   uVar51 = *puVar1;
}
;*(undefined8**)( lVar46 + lVar48 * 8 ) = puVar41;*puVar1 = uVar37;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00113f80:CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);LAB_00113a4c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_a8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Ref<Texture>, HashMapHasherDefault, HashMapComparatorDefault<String>,
   DefaultTypedAllocator<HashMapElement<String, Ref<Texture> > > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>>::operator [](HashMap<String,Ref<Texture>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Ref<Texture>>>> * this, String * param_1) * puVar1 ;void *pvVar2void *__slong lVar3Object *pOVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]char cVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined1(*pauVar42)[16];void *pvVar43ulong uVar44int iVar45long lVar46long lVar47ulong uVar48undefined8 uVar49uint *puVar50uint uVar51uint uVar52long lVar53uint uVar54uint uVar55undefined1(*pauVar56)[16];undefined1(*pauVar57)[16];long in_FS_OFFSETlong local_58[3]long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   LAB_00114830:uVar40 = (ulong)uVar55;
   uVar44 = uVar40 * 4;
   uVar48 = uVar40 * 8;
   uVar41 = Memory::alloc_static(uVar44, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
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
 while ( uVar40 != uVar44 );
         goto LAB_001146b2;
      }

      memset(pvVar2, 0, uVar44);
      memset(pvVar43, 0, uVar48);
      iVar45 = *(int*)( this + 0x2c );
      LAB_001146b6:if (iVar45 != 0) {
         LAB_001146be:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         uVar52 = String::hash();
         uVar40 = CONCAT44(0, uVar38);
         lVar53 = *(long*)( this + 0x10 );
         uVar39 = 1;
         if (uVar52 != 0) {
            uVar39 = uVar52;
         }

         uVar54 = 0;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = (ulong)uVar39 * lVar3;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar40;
         lVar46 = SUB168(auVar17 * auVar33, 8);
         uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
         uVar51 = SUB164(auVar17 * auVar33, 8);
         if (uVar52 != 0) {
            do {
               if (uVar52 == uVar39) {
                  cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
                  if (cVar37 != '\0') {
                     pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                     pOVar4 = *(Object**)( pauVar42[1] + 8 );
                     if (pOVar4 != (Object*)0x0) {
                        *(undefined8*)( pauVar42[1] + 8 ) = 0;
                        cVar37 = RefCounted::unreference();
                        if (( cVar37 != '\0' ) && ( cVar37 = predelete_handler(pOVar4) ),cVar37 != '\0') {
                           ( **(code**)( *(long*)pOVar4 + 0x140 ) )(pOVar4);
                           Memory::free_static(pOVar4, false);
                        }

                        pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar51 * 8 );
                     }

                     goto LAB_0011457b;
                  }

                  lVar53 = *(long*)( this + 0x10 );
               }

               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar51 + 1) * lVar3;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar40;
               lVar46 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( lVar53 + lVar46 * 4 );
               uVar51 = SUB164(auVar18 * auVar34, 8);
            }
 while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar3,auVar35._8_8_ = 0,auVar35._0_8_ = uVar40,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar51 ) - SUB164(auVar19 * auVar35, 8)) * lVar3,auVar36._8_8_ = 0,auVar36._0_8_ = uVar40,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }

         iVar45 = *(int*)( this + 0x2c );
      }

      uVar40 = (ulong)uVar55;
      goto LAB_001141c4;
   }

   iVar45 = *(int*)( this + 0x2c );
   if (pvVar43 == (void*)0x0) goto LAB_001141c4;
   if (iVar45 != 0) goto LAB_001146be;
   LAB_001141ea:uVar55 = *(uint*)( this + 0x28 );
   if (uVar55 == 0x1c) {
      pauVar42 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011457b;
   }

   uVar40 = ( ulong )(uVar55 + 1);
   *(undefined4*)( this + 0x2c ) = 0;
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar55 * 4 );
   if (uVar55 + 1 < 2) {
      uVar40 = 2;
   }

   uVar55 = *(uint*)( hash_table_size_primes + uVar40 * 4 );
   uVar48 = (ulong)uVar55;
   *(int*)( this + 0x28 ) = (int)uVar40;
   pvVar43 = *(void**)( this + 8 );
   uVar40 = uVar48 * 4;
   uVar44 = uVar48 * 8;
   pvVar2 = *(void**)( this + 0x10 );
   uVar41 = Memory::alloc_static(uVar40, false);
   *(undefined8*)( this + 0x10 ) = uVar41;
   __s_00 = (void*)Memory::alloc_static(uVar44, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar55 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar44 ) ) && ( __s_00 < (void*)( (long)__s + uVar40 ) )) {
         uVar40 = 0;
         do {
            *(undefined4*)( (long)__s + uVar40 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar40 * 8 ) = 0;
            uVar40 = uVar40 + 1;
         }
 while ( uVar40 != uVar48 );
      }
 else {
         memset(__s, 0, uVar40);
         memset(__s_00, 0, uVar44);
      }

   }

   if (uVar38 != 0) {
      uVar40 = 0;
      do {
         uVar55 = *(uint*)( (long)pvVar2 + uVar40 * 4 );
         if (uVar55 != 0) {
            lVar3 = *(long*)( this + 0x10 );
            uVar51 = 0;
            uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
            uVar44 = CONCAT44(0, uVar39);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
            auVar5._8_8_ = 0;
            auVar5._0_8_ = (ulong)uVar55 * lVar53;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar44;
            lVar46 = SUB168(auVar5 * auVar21, 8);
            puVar50 = (uint*)( lVar3 + lVar46 * 4 );
            iVar45 = SUB164(auVar5 * auVar21, 8);
            uVar52 = *puVar50;
            uVar41 = *(undefined8*)( (long)pvVar43 + uVar40 * 8 );
            while (uVar52 != 0) {
               auVar6._8_8_ = 0;
               auVar6._0_8_ = (ulong)uVar52 * lVar53;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar44;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(( uVar39 + iVar45 ) - SUB164(auVar6 * auVar22, 8)) * lVar53;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = uVar44;
               uVar54 = SUB164(auVar7 * auVar23, 8);
               uVar49 = uVar41;
               if (uVar54 < uVar51) {
                  *puVar50 = uVar55;
                  puVar1 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar49 = *puVar1;
                  *puVar1 = uVar41;
                  uVar55 = uVar52;
                  uVar51 = uVar54;
               }

               uVar51 = uVar51 + 1;
               auVar8._8_8_ = 0;
               auVar8._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
               auVar24._8_8_ = 0;
               auVar24._0_8_ = uVar44;
               lVar46 = SUB168(auVar8 * auVar24, 8);
               puVar50 = (uint*)( lVar3 + lVar46 * 4 );
               iVar45 = SUB164(auVar8 * auVar24, 8);
               uVar41 = uVar49;
               uVar52 = *puVar50;
            }
;
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar41;
            *puVar50 = uVar55;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }

         uVar40 = uVar40 + 1;
      }
 while ( uVar38 != uVar40 );
      Memory::free_static(pvVar43, false);
      Memory::free_static(pvVar2, false);
   }

}
 else {
   iVar45 = *(int*)( this + 0x2c );
   uVar40 = CONCAT44(0, uVar55);
   if (iVar45 != 0) {
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar39 = String::hash();
      lVar53 = *(long*)( this + 0x10 );
      uVar38 = 1;
      if (uVar39 != 0) {
         uVar38 = uVar39;
      }

      uVar51 = 0;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar38 * lVar3;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      lVar46 = SUB168(auVar13 * auVar29, 8);
      uVar39 = *(uint*)( lVar53 + lVar46 * 4 );
      uVar52 = SUB164(auVar13 * auVar29, 8);
      if (uVar39 != 0) {
         do {
            if (uVar38 == uVar39) {
               cVar37 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar46 * 8 ) + 0x10 ), param_1);
               if (cVar37 != '\0') {
                  pauVar42 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)uVar52 * 8 );
                  goto LAB_0011457b;
               }

               lVar53 = *(long*)( this + 0x10 );
            }

            uVar51 = uVar51 + 1;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )(uVar52 + 1) * lVar3;
            auVar30._8_8_ = 0;
            auVar30._0_8_ = uVar40;
            lVar46 = SUB168(auVar14 * auVar30, 8);
            uVar39 = *(uint*)( lVar53 + lVar46 * 4 );
            uVar52 = SUB164(auVar14 * auVar30, 8);
         }
 while ( ( uVar39 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar39 * lVar3,auVar31._8_8_ = 0,auVar31._0_8_ = uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar52 + uVar55 ) - SUB164(auVar15 * auVar31, 8)) * lVar3,auVar32._8_8_ = 0,auVar32._0_8_ = uVar40,uVar51 <= SUB164(auVar16 * auVar32, 8) );
      }

      uVar55 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) goto LAB_00114830;
      LAB_001146b2:iVar45 = *(int*)( this + 0x2c );
      goto LAB_001146b6;
   }

   LAB_001141c4:if ((float)uVar40 * __LC51 < (float)( iVar45 + 1 )) goto LAB_001141ea;
}
local_58[0] = 0;if (*(long*)param_1 == 0) {
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar42[1] = 0;
   *pauVar42 = (undefined1[16])0x0;
}
 else {
   CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
   lVar3 = local_58[0];
   local_58[1] = 0;
   pauVar42 = (undefined1(*) [16])operator_new(0x20, "");
   *(undefined8*)pauVar42[1] = 0;
   *(undefined8*)*pauVar42 = 0;
   *(undefined8*)( *pauVar42 + 8 ) = 0;
   if (lVar3 != 0) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar42 + 1 ), (CowData*)local_58);
   }

}
*(undefined8*)( pauVar42[1] + 8 ) = 0;CowData<char32_t>::_unref((CowData<char32_t>*)local_58);puVar1 = *(undefined8**)( this + 0x20 );if (puVar1 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar42;
}
 else {
   *puVar1 = pauVar42;
   *(undefined8**)( *pauVar42 + 8 ) = puVar1;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar42;uVar38 = String::hash();lVar3 = *(long*)( this + 0x10 );uVar55 = 1;if (uVar38 != 0) {
   uVar55 = uVar38;
}
uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar9._8_8_ = 0;auVar9._0_8_ = (ulong)uVar55 * lVar53;auVar25._8_8_ = 0;auVar25._0_8_ = uVar40;lVar47 = SUB168(auVar9 * auVar25, 8);lVar46 = *(long*)( this + 8 );puVar50 = (uint*)( lVar3 + lVar47 * 4 );iVar45 = SUB164(auVar9 * auVar25, 8);uVar39 = *puVar50;pauVar57 = pauVar42;if (uVar39 != 0) {
   uVar52 = 0;
   pauVar56 = pauVar42;
   do {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar39 * lVar53;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( uVar38 + iVar45 ) - SUB164(auVar10 * auVar26, 8)) * lVar53;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar51 = SUB164(auVar11 * auVar27, 8);
      pauVar57 = pauVar56;
      if (uVar51 < uVar52) {
         *puVar50 = uVar55;
         puVar1 = (undefined8*)( lVar46 + lVar47 * 8 );
         pauVar57 = (undefined1(*) [16])*puVar1;
         *puVar1 = pauVar56;
         uVar52 = uVar51;
         uVar55 = uVar39;
      }

      uVar52 = uVar52 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar45 + 1) * lVar53;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      lVar47 = SUB168(auVar12 * auVar28, 8);
      puVar50 = (uint*)( lVar3 + lVar47 * 4 );
      iVar45 = SUB164(auVar12 * auVar28, 8);
      uVar39 = *puVar50;
      pauVar56 = pauVar57;
   }
 while ( uVar39 != 0 );
}
*(undefined1(**) [16])( lVar46 + lVar47 * 8 ) = pauVar57;*puVar50 = uVar55;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011457b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar42[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* MethodBindTR<TypedArray<Node>>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<TypedArray<Node>>::_gen_argument_type_info(int param_1) {
   undefined4 in_register_0000003c;
   undefined4 *puVar1;
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   puVar1 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = 0;
   local_58 = 0;
   local_48 = &_LC70;
   local_40 = 4;
   String::parse_latin1((StrRange*)&local_58);
   local_60 = 0;
   *puVar1 = 0x1c;
   puVar1[6] = 0x1f;
   *(undefined8*)( puVar1 + 8 ) = 0;
   *(undefined1(*) [16])( puVar1 + 2 ) = (undefined1[16])0x0;
   if (local_58 == 0) {
      puVar1[10] = 6;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar1 + 8 ), (CowData*)&local_58);
      puVar1[10] = 6;
      if (puVar1[6] == 0x11) {
         StringName::StringName((StringName*)&local_48, (String*)( puVar1 + 8 ), false);
         if (*(undefined**)( puVar1 + 4 ) == local_48) {
            if (( StringName::configured != '\0' ) && ( local_48 != (undefined*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(undefined**)( puVar1 + 4 ) = local_48;
         }

         goto LAB_00114a75;
      }

   }

   StringName::operator =((StringName*)( puVar1 + 4 ), (StringName*)&local_50);
   LAB_00114a75:CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
   if (( StringName::configured != '\0' ) && ( local_50 != 0 )) {
      StringName::unref();
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorSelection, void>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<EditorSelection,void>::call(CallableCustomMethodPointer<EditorSelection,void> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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
         goto LAB_00114ccf;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] == 0) goto LAB_00114ccf;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if (param_2 == 0) {
         *(undefined4*)param_4 = 0;
         if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
            UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
         }

         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            /* WARNING: Could not recover jumptable at 0x00114ca8. Too many branches */
            /* WARNING: Treating indirect jump as call */
            ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar5, UNRECOVERED_JUMPTABLE);
            return;
         }

         goto LAB_00114d91;
      }

      *(undefined4*)param_4 = 3;
      *(undefined4*)( param_4 + 8 ) = 0;
   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_00114ccf:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_48, (String*)local_58);
      _err_print_error(&_LC82, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00114d91:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* CallableCustomMethodPointer<EditorSelection, void, Node*>::call(Variant const**, int, Variant&,
   Callable::CallError&) const */void CallableCustomMethodPointer<EditorSelection,void,Node*>::call(CallableCustomMethodPointer<EditorSelection,void,Node*> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   Variant *this_00;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   Object *pOVar6;
   Object *pOVar7;
   long lVar8;
   uint uVar9;
   ulong *puVar10;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar11;
   CowData<char32_t> local_70[8];
   CowData<char32_t> local_68[8];
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar9 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar9 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_58 >> 8;
         local_58 = (char*)( uVar3 << 8 );
         LOCK();
         bVar11 = (char)ObjectDB::spin_lock == '\0';
         if (bVar11) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar11) break;
         local_58 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar10 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar10 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00114fd5;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar10[1] == 0) goto LAB_00114fd5;
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
               LAB_00114ee0:uVar4 = _LC83;
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }
 else {
               this_00 = *param_1;
               pOVar6 = Variant::operator_cast_to_Object_(this_00);
               pOVar7 = Variant::operator_cast_to_Object_(this_00);
               if (( ( pOVar7 == (Object*)0x0 ) || ( lVar8 = __dynamic_cast(pOVar7, &Object::typeinfo, &Node::typeinfo, 0) ),lVar8 == 0 )) goto LAB_00114ee0;
            }

            pOVar6 = Variant::operator_cast_to_Object_(*param_1);
            if (pOVar6 != (Object*)0x0) {
               pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Node::typeinfo, 0);
            }

            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00114f47. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), pOVar6);
               return;
            }

            goto LAB_00115097;
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
      LAB_00114fd5:local_60 = 0;
      local_58 = "\', can\'t call method.";
      local_50 = 0x15;
      String::parse_latin1((StrRange*)&local_60);
      uitos((ulong)local_70);
      operator+((char *)
      local_68,(String*)"Invalid Object id \'";
      String::operator +((String*)&local_58, (String*)local_68);
      _err_print_error(&_LC82, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String*)&local_58, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
      CowData<char32_t>::_unref(local_68);
      CowData<char32_t>::_unref(local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00115097:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<Node*>::_gen_argument_type_info(int param_1) {
   long lVar1;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar2;
   long in_FS_OFFSET;
   undefined8 local_78;
   long local_70;
   undefined *local_68;
   long local_60;
   long local_58;
   undefined4 local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar2 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *puVar2 = 0;
   puVar2[6] = 0;
   *(undefined8*)( puVar2 + 8 ) = 0;
   puVar2[10] = 6;
   *(undefined1(*) [16])( puVar2 + 2 ) = (undefined1[16])0x0;
   if (in_EDX == 0) {
      local_78 = 0;
      local_68 = &_LC70;
      local_60 = 4;
      String::parse_latin1((StrRange*)&local_78);
      StringName::StringName((StringName*)&local_70, (String*)&local_78, false);
      local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x18);
      local_60 = 0;
      StringName::StringName((StringName*)&local_58, (StringName*)&local_70);
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      *puVar2 = local_68._0_4_;
      if (*(long*)( puVar2 + 2 ) != local_60) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 2 ));
         lVar1 = local_60;
         local_60 = 0;
         *(long*)( puVar2 + 2 ) = lVar1;
      }

      if (*(long*)( puVar2 + 4 ) != local_58) {
         StringName::unref();
         lVar1 = local_58;
         local_58 = 0;
         *(long*)( puVar2 + 4 ) = lVar1;
      }

      puVar2[6] = local_50;
      if (*(long*)( puVar2 + 8 ) != local_48) {
         CowData<char32_t>::_unref((CowData<char32_t>*)( puVar2 + 8 ));
         lVar1 = local_48;
         local_48 = 0;
         *(long*)( puVar2 + 8 ) = lVar1;
      }

      puVar2[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* EditorSelection::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void EditorSelection::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "EditorSelection";
   local_88 = 0;
   local_90 = 0;
   local_70 = 0xf;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "EditorSelection";
   local_98 = 0;
   local_70 = 0xf;
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
      LAB_001153fd:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_001153fd;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0011541f;
      }

      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }

   }

   lVar2 = *(long*)pLVar5;
   joined_r0x0011541f:if (lVar2 == 0) {
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

   StringName::StringName((StringName*)&local_78, "EditorSelection", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   plVar4 = *(long**)this;
   if (plVar4 == (long*)0x0) {
      return;
   }

   do {
      pvVar1 = (void*)*plVar4;
      if (pvVar1 == (void*)0x0) {
         if ((int)plVar4[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( (long)pvVar1 + 0x40 ) == plVar4) {
         lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         lVar2 = *(long*)( (long)pvVar1 + 0x38 );
         *plVar4 = lVar3;
         if (pvVar1 == (void*)plVar4[1]) {
            plVar4[1] = lVar2;
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x30 ) = lVar3;
            lVar3 = *(long*)( (long)pvVar1 + 0x30 );
         }

         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x38 ) = lVar2;
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 0x20 ));
         if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar1 + 0x10 ) != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar1 + 8 ));
         Memory::free_static(pvVar1, false);
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
/* Ref<Texture2D>::unref() */void Ref<Texture2D>::unref(Ref<Texture2D> *this) {
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
/* HashMap<String, Vector<EditorData::CustomType>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   Vector<EditorData::CustomType> > > >::_lookup_pos(String const&, unsigned int&) const */undefined8 HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>::_lookup_pos(HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>> *this, String *param_1, uint *param_2) {
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
   uint uVar14;
   long lVar15;
   ulong uVar16;
   long lVar17;
   uint uVar18;
   if (( *(long*)( this + 8 ) != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar16 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar11 = String::hash();
      uVar13 = 1;
      if (uVar11 != 0) {
         uVar13 = uVar11;
      }

      lVar17 = *(long*)( this + 0x10 );
      auVar3._8_8_ = 0;
      auVar3._0_8_ = (ulong)uVar13 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar16;
      lVar15 = SUB168(auVar3 * auVar7, 8);
      uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
      uVar14 = SUB164(auVar3 * auVar7, 8);
      if (uVar11 != 0) {
         uVar18 = 0;
         do {
            if (uVar13 == uVar11) {
               uVar12 = String::operator ==((String*)( *(long*)( *(long*)( this + 8 ) + lVar15 * 8 ) + 0x10 ), param_1);
               if ((char)uVar12 != '\0') {
                  *param_2 = uVar14;
                  return uVar12;
               }

               lVar17 = *(long*)( this + 0x10 );
            }

            uVar18 = uVar18 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar16;
            lVar15 = SUB168(auVar4 * auVar8, 8);
            uVar11 = *(uint*)( lVar17 + lVar15 * 4 );
            uVar14 = SUB164(auVar4 * auVar8, 8);
         }
 while ( ( uVar11 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar11 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar16,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar14 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar16,uVar18 <= SUB164(auVar6 * auVar10, 8) );
      }

   }

   return 0;
}
/* MethodBind* create_method_bind<EditorSelection>(void (EditorSelection::*)()) */MethodBind *create_method_bind<EditorSelection>(_func_void *param_1) {
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
   *(undefined***)this = &PTR__gen_argument_type_00119fd0;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorSelection";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<EditorSelection, Node*>(void (EditorSelection::*)(Node*)) */MethodBind *create_method_bind<EditorSelection,Node*>(_func_void_Node_ptr *param_1) {
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
   *(_func_void_Node_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a030;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "EditorSelection";
   local_30 = 0xf;
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
/* MethodBind* create_method_bind<EditorSelection, TypedArray<Node>>(TypedArray<Node>
   (EditorSelection::*)()) */MethodBind *create_method_bind<EditorSelection,TypedArray<Node>>(_func_TypedArray *param_1) {
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
   *(_func_TypedArray**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0011a090;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 0;
   local_40 = 0;
   local_38 = "EditorSelection";
   local_30 = 0xf;
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
/* EditorSelection::_initialize_classv() */void EditorSelection::_initialize_classv(void) {
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
      local_48 = "EditorSelection";
      local_60 = 0;
      local_40 = 0xf;
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
      initialize_class()::initialized = '\x01'
      ;;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* CowData<EditorSelectionHistory::HistoryElement>::_realloc(long) */undefined8 CowData<EditorSelectionHistory::HistoryElement>::_realloc(CowData<EditorSelectionHistory::HistoryElement> *this, long param_1) {
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
/* CowData<EditorSelectionHistory::_Object>::_unref() */void CowData<EditorSelectionHistory::_Object>::_unref(CowData<EditorSelectionHistory::_Object> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   Object *pOVar5;
   code *pcVar6;
   char cVar7;
   long *plVar8;
   long lVar9;
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
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   lVar3 = plVar1[-1];
   *(undefined8*)this = 0;
   if (lVar3 != 0) {
      lVar9 = 0;
      plVar8 = plVar1;
      LAB_00115f6d:do {
         if (plVar8[2] != 0) {
            LOCK();
            plVar2 = (long*)( plVar8[2] + -0x10 );
            *plVar2 = *plVar2 + -1;
            UNLOCK();
            if (*plVar2 == 0) {
               lVar4 = plVar8[2];
               plVar8[2] = 0;
               Memory::free_static((void*)( lVar4 + -0x10 ), false);
            }

         }

         if (*plVar8 != 0) {
            cVar7 = RefCounted::unreference();
            if (cVar7 != '\0') {
               pOVar5 = (Object*)*plVar8;
               cVar7 = predelete_handler(pOVar5);
               if (cVar7 != '\0') {
                  lVar9 = lVar9 + 1;
                  plVar8 = plVar8 + 4;
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
                  if (lVar3 == lVar9) break;
                  goto LAB_00115f6d;
               }

            }

         }

         lVar9 = lVar9 + 1;
         plVar8 = plVar8 + 4;
      }
 while ( lVar3 != lVar9 );
   }

   Memory::free_static(plVar1 + -2, false);
   return;
}
/* CowData<EditorSelectionHistory::HistoryElement>::_unref() */void CowData<EditorSelectionHistory::HistoryElement>::_unref(CowData<EditorSelectionHistory::HistoryElement> *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   CowData<EditorSelectionHistory::_Object> *this_00;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      lVar2 = *(long*)this;
      if (lVar2 != 0) {
         lVar3 = *(long*)( lVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = (CowData<EditorSelectionHistory::_Object>*)( lVar2 + 8 );
            do {
               lVar5 = lVar5 + 1;
               CowData<EditorSelectionHistory::_Object>::_unref(this_00);
               this_00 = this_00 + 0x18;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static((void*)( lVar2 + -0x10 ), false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* EditorData::EditedScene::~EditedScene() */void EditorData::EditedScene::~EditedScene(EditedScene *this) {
   void *pvVar1;
   long lVar2;
   long lVar3;
   long *plVar4;
   NodePath::~NodePath((NodePath*)( this + 0x48 ));
   Dictionary::~Dictionary((Dictionary*)( this + 0x40 ));
   CowData<EditorSelectionHistory::HistoryElement>::_unref((CowData<EditorSelectionHistory::HistoryElement>*)( this + 0x30 ));
   plVar4 = *(long**)( this + 0x20 );
   if (plVar4 != (long*)0x0) {
      do {
         pvVar1 = (void*)*plVar4;
         if (pvVar1 == (void*)0x0) {
            if ((int)plVar4[2] != 0) {
               _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
               goto LAB_0011612e;
            }

            break;
         }

         if (*(long**)( (long)pvVar1 + 0x18 ) == plVar4) {
            lVar3 = *(long*)( (long)pvVar1 + 8 );
            lVar2 = *(long*)( (long)pvVar1 + 0x10 );
            *plVar4 = lVar3;
            if (pvVar1 == (void*)plVar4[1]) {
               plVar4[1] = lVar2;
            }

            if (lVar2 != 0) {
               *(long*)( lVar2 + 8 ) = lVar3;
               lVar3 = *(long*)( (long)pvVar1 + 8 );
            }

            if (lVar3 != 0) {
               *(long*)( lVar3 + 0x10 ) = lVar2;
            }

            Memory::free_static(pvVar1, false);
            *(int*)( plVar4 + 2 ) = (int)plVar4[2] + -1;
         }
 else {
            _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
         }

         plVar4 = *(long**)( this + 0x20 );
      }
 while ( (int)plVar4[2] != 0 );
      Memory::free_static(plVar4, false);
   }

   LAB_0011612e:Dictionary::~Dictionary((Dictionary*)( this + 0x18 ));
   CowData<char32_t>::_unref((CowData<char32_t>*)( this + 8 ));
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<EditorSelectionHistory::HistoryElement>::resize<false>(long) */undefined8 CowData<EditorSelectionHistory::HistoryElement>::resize<false>(CowData<EditorSelectionHistory::HistoryElement> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   long lVar5;
   undefined8 *puVar6;
   long lVar7;
   ulong uVar8;
   ulong uVar9;
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
      lVar5 = 0;
      lVar7 = 0;
   }
 else {
      lVar5 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar5) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar7 = lVar5 * 0x18;
      if (lVar7 != 0) {
         uVar8 = lVar7 - 1U | lVar7 - 1U >> 1;
         uVar8 = uVar8 | uVar8 >> 2;
         uVar8 = uVar8 | uVar8 >> 4;
         uVar8 = uVar8 | uVar8 >> 8;
         uVar8 = uVar8 | uVar8 >> 0x10;
         lVar7 = ( uVar8 | uVar8 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_001164f0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar8 = param_1 * 0x18 - 1;
   uVar8 = uVar8 >> 1 | uVar8;
   uVar8 = uVar8 | uVar8 >> 2;
   uVar8 = uVar8 | uVar8 >> 4;
   uVar8 = uVar8 | uVar8 >> 8;
   uVar8 = uVar8 | uVar8 >> 0x10;
   uVar8 = uVar8 | uVar8 >> 0x20;
   lVar10 = uVar8 + 1;
   if (lVar10 == 0) goto LAB_001164f0;
   uVar9 = param_1;
   if (param_1 <= lVar5) {
      while (lVar5 = *(long*)this,lVar5 != 0) {
         if (*(ulong*)( lVar5 + -8 ) <= uVar9) {
            if (lVar10 != lVar7) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar5 = *(long*)this;
               if (lVar5 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar5 + -8 ) = param_1;
            return 0;
         }

         CowData<EditorSelectionHistory::_Object>::_unref((CowData<EditorSelectionHistory::_Object>*)( lVar5 + 8 + uVar9 * 0x18 ));
         uVar9 = uVar9 + 1;
      }
;
      goto LAB_00116546;
   }

   if (lVar10 == lVar7) {
      LAB_00116463:puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) {
         LAB_00116546:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar5 = puVar6[-1];
      if (param_1 <= lVar5) goto LAB_001163c8;
   }
 else {
      if (lVar5 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00116463;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar8 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar6 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar6;
      lVar5 = 0;
   }

   puVar2 = puVar6 + lVar5 * 3;
   do {
      puVar2[1] = 0;
      puVar3 = puVar2 + 3;
      *(undefined4*)( puVar2 + 2 ) = 0;
      puVar2 = puVar3;
   }
 while ( puVar3 != puVar6 + param_1 * 3 );
   LAB_001163c8:puVar6[-1] = param_1;
   return 0;
}
/* CowData<EditorSelectionHistory::_Object>::_realloc(long) */undefined8 CowData<EditorSelectionHistory::_Object>::_realloc(CowData<EditorSelectionHistory::_Object> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<EditorSelectionHistory::_Object>::resize<false>(long) */undefined8 CowData<EditorSelectionHistory::_Object>::resize<false>(CowData<EditorSelectionHistory::_Object> *this, long param_1) {
   long *plVar1;
   Object *pOVar2;
   code *pcVar3;
   char cVar4;
   undefined8 *puVar5;
   undefined8 *puVar6;
   undefined8 uVar7;
   long lVar8;
   undefined8 *puVar9;
   long lVar10;
   ulong uVar11;
   long lVar12;
   ulong uVar13;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return 0x1f;
   }

   if (*(long*)this == 0) {
      if (param_1 == 0) {
         return 0;
      }

      _copy_on_write(this);
      lVar8 = 0;
      lVar10 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar10 = lVar8 * 0x20;
      if (lVar10 != 0) {
         uVar11 = lVar10 - 1U | lVar10 - 1U >> 1;
         uVar11 = uVar11 | uVar11 >> 2;
         uVar11 = uVar11 | uVar11 >> 4;
         uVar11 = uVar11 | uVar11 >> 8;
         uVar11 = uVar11 | uVar11 >> 0x10;
         lVar10 = ( uVar11 | uVar11 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x20 == 0) {
      LAB_00116890:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar11 = param_1 * 0x20 - 1;
   uVar11 = uVar11 >> 1 | uVar11;
   uVar11 = uVar11 | uVar11 >> 2;
   uVar11 = uVar11 | uVar11 >> 4;
   uVar11 = uVar11 | uVar11 >> 8;
   uVar11 = uVar11 | uVar11 >> 0x10;
   uVar11 = uVar11 | uVar11 >> 0x20;
   lVar12 = uVar11 + 1;
   if (lVar12 == 0) goto LAB_00116890;
   uVar13 = param_1;
   if (param_1 <= lVar8) {
      while (lVar8 = *(long*)this,lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar13) {
            if (lVar12 != lVar10) {
               uVar7 = _realloc(this, lVar12);
               if ((int)uVar7 != 0) {
                  return uVar7;
               }

               lVar8 = *(long*)this;
               if (lVar8 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }

            }

            *(long*)( lVar8 + -8 ) = param_1;
            return 0;
         }

         plVar1 = (long*)( lVar8 + uVar13 * 0x20 );
         CowData<char32_t>::_unref((CowData<char32_t>*)( plVar1 + 2 ));
         if (( *plVar1 != 0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0') {
            pOVar2 = (Object*)*plVar1;
            cVar4 = predelete_handler(pOVar2);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
               Memory::free_static(pOVar2, false);
            }

         }

         uVar13 = uVar13 + 1;
      }
;
      goto LAB_001168e6;
   }

   if (lVar12 == lVar10) {
      LAB_001167d3:puVar9 = *(undefined8**)this;
      if (puVar9 == (undefined8*)0x0) {
         LAB_001168e6:/* WARNING: Does not return */pcVar3 = (code*)invalidInstructionException();
         ( *pcVar3 )();
      }

      lVar8 = puVar9[-1];
      if (param_1 <= lVar8) goto LAB_00116724;
   }
 else {
      if (lVar8 != 0) {
         uVar7 = _realloc(this, lVar12);
         if ((int)uVar7 != 0) {
            return uVar7;
         }

         goto LAB_001167d3;
      }

      puVar5 = (undefined8*)Memory::alloc_static(uVar11 + 0x11, false);
      if (puVar5 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar9 = puVar5 + 2;
      *puVar5 = 1;
      puVar5[1] = 0;
      *(undefined8**)this = puVar9;
      lVar8 = 0;
   }

   puVar5 = puVar9 + lVar8 * 4;
   do {
      *puVar5 = 0;
      puVar6 = puVar5 + 4;
      puVar5[1] = 0;
      puVar5[2] = 0;
      *(undefined1*)( puVar5 + 3 ) = 0;
      puVar5 = puVar6;
   }
 while ( puVar6 != puVar9 + param_1 * 4 );
   LAB_00116724:puVar9[-1] = param_1;
   return 0;
}
/* CowData<Callable>::_unref() */void CowData<Callable>::_unref(CowData<Callable> *this) {
   long *plVar1;
   Callable *pCVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   Callable *this_00;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      pCVar2 = *(Callable**)this;
      if (pCVar2 != (Callable*)0x0) {
         lVar3 = *(long*)( pCVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = pCVar2;
            do {
               lVar5 = lVar5 + 1;
               Callable::~Callable(this_00);
               this_00 = this_00 + 0x10;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static(pCVar2 + -0x10, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<EditorData::CustomType>::_unref() */void CowData<EditorData::CustomType>::_unref(CowData<EditorData::CustomType> *this) {
   long *plVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   Object *pOVar5;
   code *pcVar6;
   char cVar7;
   long *plVar8;
   long lVar9;
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
            lVar9 = 0;
            plVar8 = plVar1;
            do {
               if (plVar8[2] != 0) {
                  cVar7 = RefCounted::unreference();
                  if (cVar7 != '\0') {
                     pOVar5 = (Object*)plVar8[2];
                     cVar7 = predelete_handler(pOVar5);
                     if (cVar7 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

               if (plVar8[1] != 0) {
                  cVar7 = RefCounted::unreference();
                  if (cVar7 != '\0') {
                     pOVar5 = (Object*)plVar8[1];
                     cVar7 = predelete_handler(pOVar5);
                     if (cVar7 != '\0') {
                        ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                        Memory::free_static(pOVar5, false);
                     }

                  }

               }

               if (*plVar8 != 0) {
                  LOCK();
                  plVar2 = (long*)( *plVar8 + -0x10 );
                  *plVar2 = *plVar2 + -1;
                  UNLOCK();
                  if (*plVar2 == 0) {
                     lVar4 = *plVar8;
                     *plVar8 = 0;
                     Memory::free_static((void*)( lVar4 + -0x10 ), false);
                  }

               }

               lVar9 = lVar9 + 1;
               plVar8 = plVar8 + 3;
            }
 while ( lVar3 != lVar9 );
         }

         Memory::free_static(plVar1 + -2, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar6 = (code*)invalidInstructionException();
      ( *pcVar6 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<EditorData::CustomType>::_ref(CowData<EditorData::CustomType> const&) [clone .part.0] */void CowData<EditorData::CustomType>::_ref(CowData<EditorData::CustomType> *this, CowData *param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<String, Vector<EditorData::CustomType>, HashMapHasherDefault,
   HashMapComparatorDefault<String>, DefaultTypedAllocator<HashMapElement<String,
   Vector<EditorData::CustomType> > > >::operator[](String const&) */undefined1 * __thiscallHashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>>::operator [](HashMap<String,Vector<EditorData::CustomType>,HashMapHasherDefault,HashMapComparatorDefault<String>,DefaultTypedAllocator<HashMapElement<String,Vector<EditorData::CustomType>>>> * this, String * param_1) * puVar1 ;void *pvVar2void *__slong lVar3long lVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]char cVar21uint uVar22uint uVar23ulong uVar24undefined8 uVar25void *__s_00undefined1(*pauVar26)[16];void *pvVar27int iVar28long lVar29long lVar30uint uVar31ulong uVar32undefined8 uVar33uint *puVar34uint uVar35uint uVar36uint uVar37ulong uVar38undefined1(*pauVar39)[16];undefined1(*pauVar40)[16];long in_FS_OFFSETuint local_80uint local_7c[3]undefined8 local_70undefined1 local_68[16]long local_58[2]undefined8 local_48long local_40local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_80 = 0;cVar21 = _lookup_pos(this, param_1, &local_80);if (cVar21 != '\0') {
   pauVar26 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_80 * 8 );
   goto LAB_00116f78;
}
local_70 = 0;uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );if (*(long*)( this + 8 ) == 0) {
   uVar32 = (ulong)uVar31;
   uVar24 = uVar32 * 4;
   uVar38 = uVar32 * 8;
   uVar25 = Memory::alloc_static(uVar24, false);
   *(undefined8*)( this + 0x10 ) = uVar25;
   pvVar27 = (void*)Memory::alloc_static(uVar38, false);
   *(void**)( this + 8 ) = pvVar27;
   if (uVar31 != 0) {
      pvVar2 = *(void**)( this + 0x10 );
      if (( pvVar2 < (void*)( (long)pvVar27 + uVar38 ) ) && ( pvVar27 < (void*)( (long)pvVar2 + uVar24 ) )) {
         uVar24 = 0;
         do {
            *(undefined4*)( (long)pvVar2 + uVar24 * 4 ) = 0;
            *(undefined8*)( (long)pvVar27 + uVar24 * 8 ) = 0;
            uVar24 = uVar24 + 1;
         }
 while ( uVar32 != uVar24 );
      }
 else {
         memset(pvVar2, 0, uVar24);
         memset(pvVar27, 0, uVar38);
      }

   }

}
local_7c[0] = 0;cVar21 = _lookup_pos(this, param_1, local_7c);if (cVar21 == '\0') {
   if ((float)uVar31 * __LC51 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar31 = *(uint*)( this + 0x28 );
      if (uVar31 == 0x1c) {
         pauVar26 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_00116f6c;
      }

      uVar24 = ( ulong )(uVar31 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar23 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
      if (uVar31 + 1 < 2) {
         uVar24 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar24 * 4 );
      uVar32 = (ulong)uVar31;
      *(int*)( this + 0x28 ) = (int)uVar24;
      pvVar27 = *(void**)( this + 8 );
      uVar24 = uVar32 * 4;
      uVar38 = uVar32 * 8;
      pvVar2 = *(void**)( this + 0x10 );
      uVar25 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( this + 0x10 ) = uVar25;
      __s_00 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar31 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
            uVar24 = 0;
            do {
               *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
               uVar24 = uVar24 + 1;
            }
 while ( uVar32 != uVar24 );
         }
 else {
            memset(__s, 0, uVar24);
            memset(__s_00, 0, uVar38);
         }

      }

      if (uVar23 != 0) {
         uVar24 = 0;
         do {
            uVar31 = *(uint*)( (long)pvVar2 + uVar24 * 4 );
            if (uVar31 != 0) {
               lVar3 = *(long*)( this + 0x10 );
               uVar36 = 0;
               uVar35 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar38 = CONCAT44(0, uVar35);
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar5._8_8_ = 0;
               auVar5._0_8_ = (ulong)uVar31 * lVar4;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar38;
               lVar29 = SUB168(auVar5 * auVar13, 8);
               puVar34 = (uint*)( lVar3 + lVar29 * 4 );
               iVar28 = SUB164(auVar5 * auVar13, 8);
               uVar37 = *puVar34;
               uVar25 = *(undefined8*)( (long)pvVar27 + uVar24 * 8 );
               while (uVar37 != 0) {
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = (ulong)uVar37 * lVar4;
                  auVar14._8_8_ = 0;
                  auVar14._0_8_ = uVar38;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = ( ulong )(( uVar35 + iVar28 ) - SUB164(auVar6 * auVar14, 8)) * lVar4;
                  auVar15._8_8_ = 0;
                  auVar15._0_8_ = uVar38;
                  uVar22 = SUB164(auVar7 * auVar15, 8);
                  uVar33 = uVar25;
                  if (uVar22 < uVar36) {
                     *puVar34 = uVar31;
                     puVar1 = (undefined8*)( (long)__s_00 + lVar29 * 8 );
                     uVar33 = *puVar1;
                     *puVar1 = uVar25;
                     uVar31 = uVar37;
                     uVar36 = uVar22;
                  }

                  uVar36 = uVar36 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(iVar28 + 1) * lVar4;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar38;
                  lVar29 = SUB168(auVar8 * auVar16, 8);
                  puVar34 = (uint*)( lVar3 + lVar29 * 4 );
                  iVar28 = SUB164(auVar8 * auVar16, 8);
                  uVar25 = uVar33;
                  uVar37 = *puVar34;
               }
;
               *(undefined8*)( (long)__s_00 + lVar29 * 8 ) = uVar25;
               *puVar34 = uVar31;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar24 = uVar24 + 1;
         }
 while ( uVar23 != uVar24 );
         Memory::free_static(pvVar27, false);
         Memory::free_static(pvVar2, false);
      }

   }

   local_58[0] = 0;
   local_68 = (undefined1[16])0x0;
   if (*(long*)param_1 == 0) {
      local_48 = 0;
      pauVar26 = (undefined1(*) [16])operator_new(0x28, "");
      *(undefined8*)pauVar26[1] = 0;
      *pauVar26 = (undefined1[16])0x0;
   }
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)local_58, (CowData*)param_1);
      lVar3 = local_58[0];
      uVar25 = local_68._0_8_;
      uVar33 = local_68._8_8_;
      local_48 = 0;
      pauVar26 = (undefined1(*) [16])operator_new(0x28, "");
      *(undefined8*)pauVar26[1] = 0;
      *(undefined8*)*pauVar26 = uVar25;
      *(undefined8*)( *pauVar26 + 8 ) = uVar33;
      if (lVar3 != 0) {
         CowData<char32_t>::_ref((CowData<char32_t>*)( pauVar26 + 1 ), (CowData*)local_58);
      }

   }

   *(undefined8*)pauVar26[2] = 0;
   CowData<EditorData::CustomType>::_unref((CowData<EditorData::CustomType>*)&local_48);
   CowData<char32_t>::_unref((CowData<char32_t>*)local_58);
   puVar1 = *(undefined8**)( this + 0x20 );
   if (puVar1 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar26;
   }
 else {
      *puVar1 = pauVar26;
      *(undefined8**)( *pauVar26 + 8 ) = puVar1;
   }

   *(undefined1(**) [16])( this + 0x20 ) = pauVar26;
   uVar23 = String::hash();
   lVar3 = *(long*)( this + 0x10 );
   uVar31 = 1;
   if (uVar23 != 0) {
      uVar31 = uVar23;
   }

   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar24 = CONCAT44(0, uVar23);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = (ulong)uVar31 * lVar4;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar24;
   lVar30 = SUB168(auVar9 * auVar17, 8);
   lVar29 = *(long*)( this + 8 );
   puVar34 = (uint*)( lVar3 + lVar30 * 4 );
   iVar28 = SUB164(auVar9 * auVar17, 8);
   uVar35 = *puVar34;
   pauVar40 = pauVar26;
   if (uVar35 != 0) {
      uVar37 = 0;
      pauVar39 = pauVar26;
      do {
         auVar10._8_8_ = 0;
         auVar10._0_8_ = (ulong)uVar35 * lVar4;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar24;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(( iVar28 + uVar23 ) - SUB164(auVar10 * auVar18, 8)) * lVar4;
         auVar19._8_8_ = 0;
         auVar19._0_8_ = uVar24;
         uVar36 = SUB164(auVar11 * auVar19, 8);
         pauVar40 = pauVar39;
         if (uVar36 < uVar37) {
            *puVar34 = uVar31;
            puVar1 = (undefined8*)( lVar29 + lVar30 * 8 );
            pauVar40 = (undefined1(*) [16])*puVar1;
            *puVar1 = pauVar39;
            uVar37 = uVar36;
            uVar31 = uVar35;
         }

         uVar37 = uVar37 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar28 + 1) * lVar4;
         auVar20._8_8_ = 0;
         auVar20._0_8_ = uVar24;
         lVar30 = SUB168(auVar12 * auVar20, 8);
         puVar34 = (uint*)( lVar3 + lVar30 * 4 );
         iVar28 = SUB164(auVar12 * auVar20, 8);
         uVar35 = *puVar34;
         pauVar39 = pauVar40;
      }
 while ( uVar35 != 0 );
   }

   *(undefined1(**) [16])( lVar29 + lVar30 * 8 ) = pauVar40;
   *puVar34 = uVar31;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
}
 else {
   uVar24 = (ulong)local_7c[0];
   pauVar26 = *(undefined1(**) [16])( *(long*)( this + 8 ) + uVar24 * 8 );
   if (*(long*)pauVar26[2] != 0) {
      CowData<EditorData::CustomType>::_ref((CowData<EditorData::CustomType>*)( pauVar26 + 2 ), (CowData*)&local_70);
      pauVar26 = *(undefined1(**) [16])( *(long*)( this + 8 ) + uVar24 * 8 );
   }

}
LAB_00116f6c:CowData<EditorData::CustomType>::_unref((CowData<EditorData::CustomType>*)&local_70);LAB_00116f78:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar26[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<EditorData::EditedScene>::_unref() */void CowData<EditorData::EditedScene>::_unref(CowData<EditorData::EditedScene> *this) {
   long *plVar1;
   EditedScene *pEVar2;
   long lVar3;
   code *pcVar4;
   long lVar5;
   EditedScene *this_00;
   if (*(long*)this == 0) {
      return;
   }

   LOCK();
   plVar1 = (long*)( *(long*)this + -0x10 );
   *plVar1 = *plVar1 + -1;
   UNLOCK();
   if (*plVar1 == 0) {
      pEVar2 = *(EditedScene**)this;
      if (pEVar2 != (EditedScene*)0x0) {
         lVar3 = *(long*)( pEVar2 + -8 );
         *(undefined8*)this = 0;
         if (lVar3 != 0) {
            lVar5 = 0;
            this_00 = pEVar2;
            do {
               lVar5 = lVar5 + 1;
               EditorData::EditedScene::~EditedScene(this_00);
               this_00 = this_00 + 0x60;
            }
 while ( lVar3 != lVar5 );
         }

         Memory::free_static(pEVar2 + -0x10, false);
         return;
      }

      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }

   *(undefined8*)this = 0;
   return;
}
/* CowData<EditorPlugin*>::_realloc(long) */undefined8 CowData<EditorPlugin*>::_realloc(CowData<EditorPlugin*> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<EditorPlugin*>::resize<false>(long) */undefined8 CowData<EditorPlugin*>::resize<false>(CowData<EditorPlugin*> *this, long param_1) {
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
      LAB_00117470:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
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
   if (lVar8 == 0) goto LAB_00117470;
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
            goto LAB_00117381;
         }

         uVar6 = _realloc(this, lVar8);
         if ((int)uVar6 != 0) {
            return uVar6;
         }

      }

      puVar7 = *(undefined8**)this;
      if (puVar7 != (undefined8*)0x0) {
         LAB_00117381:puVar7[-1] = param_1;
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
/* CowData<Callable>::_realloc(long) */undefined8 CowData<Callable>::_realloc(CowData<Callable> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Callable>::resize<false>(long) */undefined8 CowData<Callable>::resize<false>(CowData<Callable> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   undefined8 uVar4;
   undefined8 *puVar5;
   ulong uVar6;
   long lVar7;
   long lVar8;
   ulong uVar9;
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
      lVar7 = 0;
      lVar8 = 0;
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
      lVar8 = lVar7 * 0x10;
      if (lVar8 != 0) {
         uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = uVar9 | uVar9 >> 0x10;
         lVar8 = ( uVar9 | uVar9 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x10 == 0) {
      LAB_001177c0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar9 = param_1 * 0x10 - 1;
   uVar9 = uVar9 >> 1 | uVar9;
   uVar9 = uVar9 | uVar9 >> 2;
   uVar9 = uVar9 | uVar9 >> 4;
   uVar9 = uVar9 | uVar9 >> 8;
   uVar9 = uVar9 | uVar9 >> 0x10;
   uVar9 = uVar9 | uVar9 >> 0x20;
   lVar10 = uVar9 + 1;
   if (lVar10 == 0) goto LAB_001177c0;
   uVar6 = param_1;
   if (param_1 <= lVar7) {
      while (lVar7 = *(long*)this,lVar7 != 0) {
         if (*(ulong*)( lVar7 + -8 ) <= uVar6) {
            if (lVar10 != lVar8) {
               uVar4 = _realloc(this, lVar10);
               if ((int)uVar4 != 0) {
                  return uVar4;
               }

               lVar7 = *(long*)this;
               if (lVar7 == 0) {
                  _DAT_00000000 = 0;
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

            }

            *(long*)( lVar7 + -8 ) = param_1;
            return 0;
         }

         Callable::~Callable((Callable*)( lVar7 + uVar6 * 0x10 ));
         uVar6 = uVar6 + 1;
      }
;
      goto LAB_00117816;
   }

   if (lVar10 == lVar8) {
      LAB_00117733:puVar5 = *(undefined8**)this;
      if (puVar5 == (undefined8*)0x0) {
         LAB_00117816:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar7 = puVar5[-1];
      if (param_1 <= lVar7) goto LAB_00117698;
   }
 else {
      if (lVar7 != 0) {
         uVar4 = _realloc(this, lVar10);
         if ((int)uVar4 != 0) {
            return uVar4;
         }

         goto LAB_00117733;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar9 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar5 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar5;
      lVar7 = 0;
   }

   puVar2 = puVar5 + lVar7 * 2;
   do {
      *puVar2 = 0;
      puVar3 = puVar2 + 2;
      puVar2[1] = 0;
      puVar2 = puVar3;
   }
 while ( puVar3 != puVar5 + param_1 * 2 );
   LAB_00117698:puVar5[-1] = param_1;
   return 0;
}
/* CowData<EditorData::CustomType>::_realloc(long) */undefined8 CowData<EditorData::CustomType>::_realloc(CowData<EditorData::CustomType> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<EditorData::CustomType>::resize<false>(long) */undefined8 CowData<EditorData::CustomType>::resize<false>(CowData<EditorData::CustomType> *this, long param_1) {
   CowData<char32_t> *this_00;
   Object *pOVar1;
   code *pcVar2;
   undefined1(*pauVar3)[16];
   char cVar4;
   long lVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   undefined8 uVar8;
   long lVar9;
   undefined8 *puVar10;
   long lVar11;
   ulong uVar12;
   ulong uVar13;
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
      lVar11 = 0;
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
      lVar11 = lVar9 * 0x18;
      if (lVar11 != 0) {
         uVar12 = lVar11 - 1U | lVar11 - 1U >> 1;
         uVar12 = uVar12 | uVar12 >> 2;
         uVar12 = uVar12 | uVar12 >> 4;
         uVar12 = uVar12 | uVar12 >> 8;
         uVar12 = uVar12 | uVar12 >> 0x10;
         lVar11 = ( uVar12 | uVar12 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 == 0) {
      LAB_00117bb0:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar12 = param_1 * 0x18 - 1;
   uVar12 = uVar12 >> 1 | uVar12;
   uVar12 = uVar12 | uVar12 >> 2;
   uVar12 = uVar12 | uVar12 >> 4;
   uVar12 = uVar12 | uVar12 >> 8;
   uVar12 = uVar12 | uVar12 >> 0x10;
   uVar12 = uVar12 | uVar12 >> 0x20;
   lVar5 = uVar12 + 1;
   if (lVar5 == 0) goto LAB_00117bb0;
   uVar13 = param_1;
   if (param_1 <= lVar9) {
      while (lVar9 = *(long*)this,lVar9 != 0) {
         if (*(ulong*)( lVar9 + -8 ) <= uVar13) {
            if (lVar5 != lVar11) {
               uVar8 = _realloc(this, lVar5);
               if ((int)uVar8 != 0) {
                  return uVar8;
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

         this_00 = (CowData<char32_t>*)( lVar9 + uVar13 * 0x18 );
         if (( *(long*)( this_00 + 0x10 ) != 0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0') {
            pOVar1 = *(Object**)( this_00 + 0x10 );
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         if (( *(long*)( this_00 + 8 ) != 0 ) && ( cVar4 = RefCounted::unreference() ),cVar4 != '\0') {
            pOVar1 = *(Object**)( this_00 + 8 );
            cVar4 = predelete_handler(pOVar1);
            if (cVar4 != '\0') {
               ( **(code**)( *(long*)pOVar1 + 0x140 ) )(pOVar1);
               Memory::free_static(pOVar1, false);
            }

         }

         CowData<char32_t>::_unref(this_00);
         uVar13 = uVar13 + 1;
      }
;
      goto LAB_00117c06;
   }

   if (lVar5 == lVar11) {
      LAB_00117ae5:puVar10 = *(undefined8**)this;
      if (puVar10 == (undefined8*)0x0) {
         LAB_00117c06:/* WARNING: Does not return */pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      lVar9 = puVar10[-1];
      if (param_1 <= lVar9) goto LAB_001179f5;
   }
 else {
      if (lVar9 != 0) {
         uVar8 = _realloc(this, lVar5);
         if ((int)uVar8 != 0) {
            return uVar8;
         }

         goto LAB_00117ae5;
      }

      puVar6 = (undefined8*)Memory::alloc_static(uVar12 + 0x11, false);
      if (puVar6 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar10 = puVar6 + 2;
      *puVar6 = 1;
      puVar6[1] = 0;
      *(undefined8**)this = puVar10;
      lVar9 = 0;
   }

   pauVar7 = (undefined1(*) [16])( puVar10 + lVar9 * 3 );
   do {
      *(undefined8*)pauVar7[1] = 0;
      pauVar3 = pauVar7 + 1;
      *pauVar7 = (undefined1[16])0x0;
      pauVar7 = (undefined1(*) [16])( *pauVar3 + 8 );
   }
 while ( (undefined1(*) [16])( *pauVar3 + 8 ) != (undefined1(*) [16])( puVar10 + param_1 * 3 ) );
   LAB_001179f5:puVar10[-1] = param_1;
   return 0;
}
/* CowData<EditorData::EditedScene>::_realloc(long) */undefined8 CowData<EditorData::EditedScene>::_realloc(CowData<EditorData::EditedScene> *this, long param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<EditorData::EditedScene>::resize<false>(long) */undefined8 CowData<EditorData::EditedScene>::resize<false>(CowData<EditorData::EditedScene> *this, long param_1) {
   code *pcVar1;
   undefined8 *puVar2;
   undefined8 uVar3;
   long lVar4;
   ulong uVar5;
   undefined8 *puVar6;
   undefined1(*pauVar7)[16];
   long lVar8;
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
      lVar8 = 0;
      lVar4 = 0;
   }
 else {
      lVar8 = *(long*)( *(long*)this + -8 );
      if (param_1 == lVar8) {
         return 0;
      }

      if (param_1 == 0) {
         _unref(this);
         return 0;
      }

      _copy_on_write(this);
      lVar4 = lVar8 * 0x60;
      if (lVar4 != 0) {
         uVar5 = lVar4 - 1U | lVar4 - 1U >> 1;
         uVar5 = uVar5 | uVar5 >> 2;
         uVar5 = uVar5 | uVar5 >> 4;
         uVar5 = uVar5 | uVar5 >> 8;
         uVar5 = uVar5 | uVar5 >> 0x10;
         lVar4 = ( uVar5 | uVar5 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x60 == 0) {
      LAB_00117f40:_err_print_error("resize", "./core/templates/cowdata.h", 0x16a, "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY", 0, 0);
      return 6;
   }

   uVar5 = param_1 * 0x60 - 1;
   uVar5 = uVar5 >> 1 | uVar5;
   uVar5 = uVar5 | uVar5 >> 2;
   uVar5 = uVar5 | uVar5 >> 4;
   uVar5 = uVar5 | uVar5 >> 8;
   uVar5 = uVar5 | uVar5 >> 0x10;
   uVar5 = uVar5 | uVar5 >> 0x20;
   lVar9 = uVar5 + 1;
   if (lVar9 == 0) goto LAB_00117f40;
   uVar10 = param_1;
   if (param_1 <= lVar8) {
      while (lVar8 = *(long*)this,lVar8 != 0) {
         if (*(ulong*)( lVar8 + -8 ) <= uVar10) {
            if (lVar9 != lVar4) {
               uVar3 = _realloc(this, lVar9);
               if ((int)uVar3 != 0) {
                  return uVar3;
               }

               lVar8 = *(long*)this;
               if (lVar8 == 0) goto LAB_00117e8c;
            }

            *(long*)( lVar8 + -8 ) = param_1;
            return 0;
         }

         EditorData::EditedScene::~EditedScene((EditedScene*)( lVar8 + uVar10 * 0x60 ));
         uVar10 = uVar10 + 1;
      }
;
      goto LAB_00117f96;
   }

   if (lVar9 == lVar4) {
      LAB_00117eb3:puVar6 = *(undefined8**)this;
      if (puVar6 == (undefined8*)0x0) {
         LAB_00117f96:/* WARNING: Does not return */pcVar1 = (code*)invalidInstructionException();
         ( *pcVar1 )();
      }

      lVar8 = puVar6[-1];
      if (param_1 <= lVar8) goto LAB_00117e1c;
   }
 else {
      if (lVar8 != 0) {
         uVar3 = _realloc(this, lVar9);
         if ((int)uVar3 != 0) {
            return uVar3;
         }

         goto LAB_00117eb3;
      }

      puVar2 = (undefined8*)Memory::alloc_static(uVar5 + 0x11, false);
      if (puVar2 == (undefined8*)0x0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
         return 6;
      }

      puVar6 = puVar2 + 2;
      *puVar2 = 1;
      puVar2[1] = 0;
      *(undefined8**)this = puVar6;
      lVar8 = 0;
   }

   do {
      lVar4 = lVar8 + 1;
      pauVar7 = (undefined1(*) [16])( puVar6 + lVar8 * 0xc );
      *(undefined8*)pauVar7[1] = 0;
      *pauVar7 = (undefined1[16])0x0;
      Dictionary::Dictionary((Dictionary*)( pauVar7[1] + 8 ));
      *(undefined4*)( pauVar7[3] + 8 ) = 0;
      *(undefined8*)pauVar7[2] = 0;
      *(undefined8*)pauVar7[3] = 0;
      Dictionary::Dictionary((Dictionary*)( pauVar7 + 4 ));
      *(undefined8*)( pauVar7[4] + 8 ) = 0;
      *(undefined4*)pauVar7[5] = 0;
      *(undefined8*)( pauVar7[5] + 8 ) = 0;
      puVar6 = *(undefined8**)this;
      lVar8 = lVar4;
   }
 while ( param_1 != lVar4 );
   if (puVar6 == (undefined8*)0x0) {
      LAB_00117e8c:_DAT_00000000 = 0;
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }

   LAB_00117e1c:puVar6[-1] = param_1;
   return 0;
}
/* Vector<EditorData::EditedScene>::remove_at(long) */void Vector<EditorData::EditedScene>::remove_at(Vector<EditorData::EditedScene> *this, long param_1) {
   long lVar1;
   void *pvVar2;
   undefined8 uVar3;
   long lVar4;
   long lVar5;
   CowData<EditorSelectionHistory::HistoryElement> *this_00;
   long *plVar6;
   lVar4 = *(long*)( this + 8 );
   if (param_1 < 0) {
      if (lVar4 != 0) {
         lVar4 = *(long*)( lVar4 + -8 );
         goto LAB_001181b7;
      }

   }
 else if (lVar4 != 0) {
      lVar4 = *(long*)( lVar4 + -8 );
      if (param_1 < lVar4) {
         CowData<EditorData::EditedScene>::_copy_on_write((CowData<EditorData::EditedScene>*)( this + 8 ));
         lVar4 = *(long*)( this + 8 );
         if (lVar4 == 0) {
            lVar5 = -1;
         }
 else {
            lVar5 = *(long*)( lVar4 + -8 ) + -1;
            if (param_1 < lVar5) {
               this_00 = (CowData<EditorSelectionHistory::HistoryElement>*)( lVar4 + 0x30 + param_1 * 0x60 );
               do {
                  lVar4 = *(long*)( this_00 + 0x38 );
                  *(undefined8*)( this_00 + -0x30 ) = *(undefined8*)( this_00 + 0x30 );
                  lVar1 = *(long*)( this_00 + -0x28 );
                  if (lVar1 != lVar4) {
                     if (lVar1 != 0) {
                        LOCK();
                        plVar6 = (long*)( lVar1 + -0x10 );
                        *plVar6 = *plVar6 + -1;
                        UNLOCK();
                        if (*plVar6 == 0) {
                           lVar4 = *(long*)( this_00 + -0x28 );
                           *(undefined8*)( this_00 + -0x28 ) = 0;
                           Memory::free_static((void*)( lVar4 + -0x10 ), false);
                        }

                        lVar4 = *(long*)( this_00 + 0x38 );
                     }

                     *(long*)( this_00 + -0x28 ) = lVar4;
                     *(undefined8*)( this_00 + 0x38 ) = 0;
                  }

                  *(undefined8*)( this_00 + -0x20 ) = *(undefined8*)( this_00 + 0x40 );
                  Dictionary::operator =((Dictionary*)( this_00 + -0x18 ), (Dictionary*)( this_00 + 0x48 ));
                  plVar6 = *(long**)( this_00 + -0x10 );
                  if (plVar6 != (long*)0x0) {
                     do {
                        pvVar2 = (void*)*plVar6;
                        if (pvVar2 == (void*)0x0) goto LAB_001180e6;
                        if (plVar6 == *(long**)( (long)pvVar2 + 0x18 )) {
                           lVar4 = *(long*)( (long)pvVar2 + 8 );
                           lVar1 = *(long*)( (long)pvVar2 + 0x10 );
                           *plVar6 = lVar4;
                           if (pvVar2 == (void*)plVar6[1]) {
                              plVar6[1] = lVar1;
                           }

                           if (lVar1 != 0) {
                              *(long*)( lVar1 + 8 ) = lVar4;
                              lVar4 = *(long*)( (long)pvVar2 + 8 );
                           }

                           if (lVar4 != 0) {
                              *(long*)( lVar4 + 0x10 ) = lVar1;
                           }

                           Memory::free_static(pvVar2, false);
                           *(int*)( plVar6 + 2 ) = (int)plVar6[2] + -1;
                        }
 else {
                           _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                        }

                        plVar6 = *(long**)( this_00 + -0x10 );
                     }
 while ( (int)plVar6[2] != 0 );
                     Memory::free_static(plVar6, false);
                  }

                  LAB_001180e6:uVar3 = *(undefined8*)( this_00 + 0x50 );
                  *(undefined8*)( this_00 + 0x50 ) = 0;
                  *(undefined8*)( this_00 + -0x10 ) = uVar3;
                  if (*(long*)this_00 != *(long*)( this_00 + 0x60 )) {
                     CowData<EditorSelectionHistory::HistoryElement>::_unref(this_00);
                     uVar3 = *(undefined8*)( this_00 + 0x60 );
                     *(undefined8*)( this_00 + 0x60 ) = 0;
                     *(undefined8*)this_00 = uVar3;
                  }

                  param_1 = param_1 + 1;
                  *(undefined4*)( this_00 + 8 ) = *(undefined4*)( this_00 + 0x68 );
                  Dictionary::operator =((Dictionary*)( this_00 + 0x10 ), (Dictionary*)( this_00 + 0x70 ));
                  NodePath::operator =((NodePath*)( this_00 + 0x18 ), (NodePath*)( this_00 + 0x78 ));
                  *(undefined4*)( this_00 + 0x20 ) = *(undefined4*)( this_00 + 0x80 );
                  *(undefined8*)( this_00 + 0x28 ) = *(undefined8*)( this_00 + 0x88 );
                  this_00 = this_00 + 0x60;
               }
 while ( param_1 != lVar5 );
            }

         }

         CowData<EditorData::EditedScene>::resize<false>((CowData<EditorData::EditedScene>*)( this + 8 ), lVar5);
         return;
      }

      goto LAB_001181b7;
   }

   lVar4 = 0;
   LAB_001181b7:_err_print_index_error("remove_at", "./core/templates/cowdata.h", 0xe4, param_1, lVar4, "p_index", "size()", "", false, false);
   return;
}
/* WARNING: Removing unreachable block (ram,0x001183b8) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
/* MethodBindTR<TypedArray<Node>>::call(Object*, Variant const**, int, Callable::CallError&) const
    */Object *MethodBindTR<TypedArray<Node>>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
         _err_print_error(&_LC82, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118740;
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

   LAB_00118740:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
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
         _err_print_error(&_LC82, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00118a30;
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

   LAB_00118a30:*(undefined4*)param_1 = 0;
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

         goto LAB_00118e3f;
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
      /* WARNING: Could not recover jumptable at 0x00118ce6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00118e3f:/* WARNING: Subroutine does not return */__stack_chk_fail();
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

         goto LAB_00118fff;
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
      /* WARNING: Could not recover jumptable at 0x00118ea6. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ));
      return;
   }

   LAB_00118fff:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindTR<TypedArray<Node>>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<TypedArray<Node>>::validated_call(MethodBindTR<TypedArray<Node>> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         local_48 = (Variant**)0x118588;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119069;
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
   LAB_00119069:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<TypedArray<Node>>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<TypedArray<Node>>::ptrcall(MethodBindTR<TypedArray<Node>> *this, Object *param_1, void **param_2, void *param_3) {
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
         local_48 = (void**)0x118588;
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((Array*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (Array*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         goto LAB_0011923a;
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
   LAB_0011923a:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindT<Node*>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<Node*>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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

         goto LAB_00119581;
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
      /* WARNING: Could not recover jumptable at 0x0011940d. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 0x10 ));
      return;
   }

   LAB_00119581:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::ptrcall(Object*, void const**, void*) const */void MethodBindT<Node*>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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

         goto LAB_00119769;
      }

      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   UNRECOVERED_JUMPTABLE = *(code**)( param_1 + 0x58 );
   /* WARNING: Load size is inaccurate */
   plVar1 = *param_3;
   if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
      UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ) + -1 );
   }

   if (plVar1 != (long*)0x0) {
      plVar1 = (long*)*plVar1;
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Could not recover jumptable at 0x001195f1. Too many branches */
      /* WARNING: Treating indirect jump as call */
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), plVar1);
      return;
   }

   LAB_00119769:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* MethodBindT<Node*>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<Node*>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   undefined4 uVar5;
   Object *pOVar6;
   long *plVar7;
   Object *pOVar8;
   long lVar9;
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
   long local_40;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar7 = (long*)plVar11[0x23];
         if (plVar7 == (long*)0x0) {
            plVar7 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar7 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_58 == (char*)*plVar7) {
         if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_60 = 0;
         local_50 = 0x35;
         String::parse_latin1((StrRange*)&local_60);
         vformat<StringName>((StringName*)&local_58, (StrRange*)&local_60, &local_68);
         _err_print_error(&_LC82, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }

         goto LAB_00119890;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar5 = 3;
      LAB_00119885:*in_R9 = uVar5;
      in_R9[2] = 1;
      goto LAB_00119890;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_001198e0;
      LAB_001198d0:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar9 = *(long*)( pVVar12 + -8 );
      if ((int)lVar9 < (int)( in_R8D ^ 1 )) {
         LAB_001198e0:uVar5 = 4;
         goto LAB_00119885;
      }

      if (in_R8D == 1) goto LAB_001198d0;
      lVar10 = (long)( (int)lVar9 + -1 );
      if (lVar9 <= lVar10) {
         _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar10, lVar9, "p_index", "size()", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }

      pVVar12 = pVVar12 + lVar10 * 0x18;
   }

   *in_R9 = 0;
   if (( (ulong)pVVar13 & 1 ) != 0) {
      pVVar13 = *(Variant**)( pVVar13 + *(long*)( (long)plVar11 + (long)pVVar1 ) + -1 );
   }

   cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar12, 0x18);
   if (cVar4 == '\0') {
      LAB_00119836:uVar3 = _LC83;
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar3;
   }
 else {
      pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
      pOVar8 = Variant::operator_cast_to_Object_(pVVar12);
      if (( ( pOVar8 == (Object*)0x0 ) || ( lVar9 = __dynamic_cast(pOVar8, &Object::typeinfo, &Node::typeinfo, 0) ),lVar9 == 0 )) goto LAB_00119836;
   }

   pOVar6 = Variant::operator_cast_to_Object_(pVVar12);
   if (pOVar6 != (Object*)0x0) {
      pOVar6 = (Object*)__dynamic_cast(pOVar6, &Object::typeinfo, &Node::typeinfo, 0);
   }

   ( *(code*)pVVar13 )((Variant*)( (long)plVar11 + (long)pVVar1 ), pOVar6);
   LAB_00119890:*(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return param_1;
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<TypedArray<Node>>::~MethodBindTR() */void MethodBindTR<TypedArray<Node>>::~MethodBindTR(MethodBindTR<TypedArray<Node>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<Node*>::~MethodBindT() */void MethodBindT<Node*>::~MethodBindT(MethodBindT<Node*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<>::~MethodBindT() */void MethodBindT<>::~MethodBindT(MethodBindT<> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorSelection, void, Node*>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorSelection,void,Node*>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorSelection,void,Node*> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<EditorSelection, void>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<EditorSelection,void>::~CallableCustomMethodPointer(CallableCustomMethodPointer<EditorSelection,void> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* EditorData::EditedScene::~EditedScene() */void EditorData::EditedScene::~EditedScene(EditedScene *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Node*, DefaultAllocator>::~List() */void List<Node*,DefaultAllocator>::~List(List<Node*,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<StringName, DefaultAllocator>::~List() */void List<StringName,DefaultAllocator>::~List(List<StringName,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


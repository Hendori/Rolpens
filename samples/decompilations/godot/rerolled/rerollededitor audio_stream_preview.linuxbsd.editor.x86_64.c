/* HashMap<ObjectID, AudioStreamPreviewGenerator::Preview, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   AudioStreamPreviewGenerator::Preview> > >::_lookup_pos(ObjectID const&, unsigned int&) const
   [clone .isra.0] */undefined8 HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>>::_lookup_pos(HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>> *this, ObjectID *param_1, uint *param_2) {
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
            if (( (uint)uVar13 == uVar14 ) && ( *(ObjectID**)( *(long*)( *(long*)( this + 8 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
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
/* AudioStreamPreviewGenerator::_update_emit(ObjectID) */void AudioStreamPreviewGenerator::_update_emit(AudioStreamPreviewGenerator *this, undefined8 param_2) {
   char cVar1;
   int iVar2;
   long in_FS_OFFSET;
   undefined8 local_80;
   Variant *local_78[2];
   int local_68[6];
   undefined8 local_50;
   undefined1 local_48[16];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if ((_update_emit(ObjectID)::{lambda()
   #1
   ( iVar2 = __cxa_guard_acquire(&_update_emit(ObjectID)::{lambda()#1}::operator()()::sname),
     iVar2 != 0) );
   {
      _scs_create((char *)&_update_emit(ObjectID)::{lambda()
      #1
      __cxa_atexit(StringName::~StringName, &_update_emit(ObjectID)::, {
            lambda()
            #1
            &__dso_handle;
            __cxa_guard_release(&_update_emit(ObjectID)::{lambda()#1}::operator()()::sname);
  }
  local_80 = param_2;, Variant::Variant((Variant*)local_68, (ObjectID*)&local_80));
            local_50 = 0;
            local_48 = (undefined1[16])0x0;
            local_78[0] = (Variant*)local_68;
            ( **(code**)( *(long*)this + 0xd0 ) )(this, &_update_emit(ObjectID)::, {
                  lambda()
                  #1
                  if (Variant::needs_deinit[(int)local_50] == '\0') {
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }
 else {
                     Variant::_clear_internal();
                     cVar1 = Variant::needs_deinit[local_68[0]];
                  }

                  if (cVar1 != '\0') {
                     Variant::_clear_internal();
                  }

                  if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
                     /* WARNING: Subroutine does not return */
                     __stack_chk_fail();
                  }

                  return;
               }
, /* AudioStreamPreviewGenerator::_notification(int) [clone .part.0] */, void AudioStreamPreviewGenerator::_notification(int param_1);
            {
               undefined8 *puVar1;
               uint *puVar2;
               Thread *this;
               long lVar3;
               long lVar4;
               undefined8 uVar5;
               Object *pOVar6;
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
               char cVar19;
               int iVar20;
               long *plVar21;
               undefined1(*pauVar22)[16];
               long lVar23;
               uint uVar24;
               uint uVar25;
               ulong *puVar26;
               ulong uVar27;
               undefined8 *puVar28;
               undefined4 in_register_0000003c;
               long lVar29;
               ulong uVar30;
               ulong uVar31;
               long *plVar32;
               uint *puVar33;
               ulong uVar34;
               long in_FS_OFFSET;
               bool bVar35;
               uint local_44;
               long local_40;
               lVar29 = CONCAT44(in_register_0000003c, param_1);
               pauVar22 = (undefined1(*) [16])0x0;
               plVar32 = *(long**)( lVar29 + 0x420 );
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               while (plVar32 != (long*)0x0) {
                  LAB_0010032a:if ((char)plVar32[6] != '\0') {
                     LAB_0010031d:plVar32 = (long*)*plVar32;
                     if (plVar32 == (long*)0x0) break;
                     goto LAB_0010032a;
                  }

                  if (plVar32[8] != 0) {
                     Thread::wait_to_finish();
                     this(Thread * plVar32[8]);
                     Thread::~Thread(this);
                     Memory::free_static(this, false);
                     plVar32[8] = 0;
                  }

                  uVar24 = (uint)plVar32[2] & 0xffffff;
                  if (uVar24 < (uint)ObjectDB::slot_max) {
                     while (true) {
                        uVar25 = local_44 >> 8;
                        local_44 = uVar25 << 8;
                        LOCK();
                        bVar35 = (char)ObjectDB::spin_lock == '\0';
                        if (bVar35) {
                           ObjectDB::spin_lock._0_1_ = '\x01';
                        }

                        UNLOCK();
                        if (bVar35) break;
                        local_44 = uVar25 << 8;
                        do {} while ( (char)ObjectDB::spin_lock != '\0' );
                     }
;
                     puVar26 = (ulong*)( (ulong)uVar24 * 0x10 + ObjectDB::object_slots );
                     if (( (ulong)plVar32[2] >> 0x18 & 0x7fffffffff ) != ( *puVar26 & 0x7fffffffff )) {
                        ObjectDB::spin_lock._0_1_ = '\0';
                        goto joined_r0x0010078e;
                     }

                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (puVar26[1] == 0) goto joined_r0x0010078e;
                     goto LAB_0010031d;
                  }

                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  joined_r0x0010078e:if (pauVar22 == (undefined1(*) [16])0x0) {
                     pauVar22 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                     *(undefined4*)pauVar22[1] = 0;
                     *pauVar22 = (undefined1[16])0x0;
                  }

                  plVar21 = (long*)operator_new(0x20, DefaultAllocator::alloc);
                  *plVar21 = 0;
                  lVar23 = plVar32[2];
                  plVar21[1] = 0;
                  *plVar21 = lVar23;
                  lVar23 = *(long*)( *pauVar22 + 8 );
                  plVar21[2] = lVar23;
                  plVar21[3] = (long)pauVar22;
                  if (lVar23 != 0) {
                     *(long**)( lVar23 + 8 ) = plVar21;
                  }

                  lVar23 = *(long*)*pauVar22;
                  *(long**)( *pauVar22 + 8 ) = plVar21;
                  if (lVar23 == 0) {
                     *(long**)*pauVar22 = plVar21;
                  }

                  plVar32 = (long*)*plVar32;
                  *(int*)pauVar22[1] = *(int*)pauVar22[1] + 1;
               }
;
               if (pauVar22 != (undefined1(*) [16])0x0) {
                  do {
                     puVar28 = *(undefined8**)*pauVar22;
                     if (puVar28 == (undefined8*)0x0) {
                        LAB_00100686:if (*(int*)pauVar22[1] == 0) {
                           if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                              Memory::free_static(pauVar22, false);
                              return;
                           }

                        }
 else if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                           _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                           return;
                        }

                        goto LAB_001008b4;
                     }

                     local_44 = 0;
                     cVar19 = HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>>::_lookup_pos((HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>>*)( lVar29 + 0x408 ), (ObjectID*)*puVar28, &local_44);
                     if (cVar19 != '\0') {
                        lVar23 = *(long*)( lVar29 + 0x418 );
                        uVar24 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar29 + 0x430 ) * 4 );
                        uVar34 = CONCAT44(0, uVar24);
                        lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar29 + 0x430 ) * 8 );
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = ( ulong )(local_44 + 1) * lVar3;
                        auVar13._8_8_ = 0;
                        auVar13._0_8_ = uVar34;
                        uVar27 = SUB168(auVar7 * auVar13, 8);
                        lVar4 = *(long*)( lVar29 + 0x410 );
                        puVar33 = (uint*)( lVar23 + uVar27 * 4 );
                        uVar25 = SUB164(auVar7 * auVar13, 8);
                        uVar31 = (ulong)uVar25;
                        uVar30 = ( ulong ) * puVar33;
                        if (( *puVar33 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar30 * lVar3,auVar14._8_8_ = 0,auVar14._0_8_ = uVar34,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar24 + uVar25 ) - SUB164(auVar8 * auVar14, 8)) * lVar3,auVar15._8_8_ = 0,auVar15._0_8_ = uVar34,SUB164(auVar9 * auVar15, 8) == 0) {
                           uVar31 = (ulong)local_44;
                        }
 else {
                           while (true) {
                              puVar2 = (uint*)( lVar23 + (ulong)local_44 * 4 );
                              *puVar33 = *puVar2;
                              puVar28 = (undefined8*)( lVar4 + uVar27 * 8 );
                              *puVar2 = (uint)uVar30;
                              puVar1 = (undefined8*)( lVar4 + (ulong)local_44 * 8 );
                              uVar5 = *puVar28;
                              *puVar28 = *puVar1;
                              local_44 = (uint)uVar31;
                              *puVar1 = uVar5;
                              auVar12._8_8_ = 0;
                              auVar12._0_8_ = ( ulong )(local_44 + 1) * lVar3;
                              auVar18._8_8_ = 0;
                              auVar18._0_8_ = uVar34;
                              uVar27 = SUB168(auVar12 * auVar18, 8);
                              puVar33 = (uint*)( lVar23 + uVar27 * 4 );
                              uVar30 = ( ulong ) * puVar33;
                              if (( *puVar33 == 0 ) || ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar30 * lVar3,auVar16._8_8_ = 0,auVar16._0_8_ = uVar34,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( SUB164(auVar12 * auVar18, 8) + uVar24 ) - SUB164(auVar10 * auVar16, 8)) * lVar3,auVar17._8_8_ = 0,auVar17._0_8_ = uVar34,SUB164(auVar11 * auVar17, 8) == 0) break;
                              uVar31 = uVar27 & 0xffffffff;
                           }
;
                        }

                        *(undefined4*)( lVar23 + uVar31 * 4 ) = 0;
                        plVar32 = (long*)( lVar4 + uVar31 * 8 );
                        plVar21 = (long*)*plVar32;
                        if (*(long**)( lVar29 + 0x420 ) == plVar21) {
                           *(long*)( lVar29 + 0x420 ) = *plVar21;
                           plVar21 = (long*)*plVar32;
                        }

                        if (*(long**)( lVar29 + 0x428 ) == plVar21) {
                           *(long*)( lVar29 + 0x428 ) = plVar21[1];
                           plVar21 = (long*)*plVar32;
                        }

                        if ((long*)plVar21[1] != (long*)0x0) {
                           *(long*)plVar21[1] = *plVar21;
                           plVar21 = (long*)*plVar32;
                        }

                        if (*plVar21 != 0) {
                           *(long*)( *plVar21 + 8 ) = plVar21[1];
                           plVar21 = (long*)*plVar32;
                        }

                        for (int i = 0; i < 3; i++) {
                           if (( plVar21[( 5 - i )] != 0 ) && ( cVar19 = cVar19 != '\0' )) {
                              pOVar6 = (Object*)plVar21[( 5 - i )];
                              cVar19 = predelete_handler(pOVar6);
                              if (cVar19 != '\0') {
                                 ( **(code**)( *(long*)pOVar6 + 320 ) )(pOVar6);
                                 Memory::free_static(pOVar6, false);
                              }

                           }

                        }

                        Memory::free_static(plVar21, false);
                        *(undefined8*)( *(long*)( lVar29 + 0x410 ) + uVar31 * 8 ) = 0;
                        *(int*)( lVar29 + 0x434 ) = *(int*)( lVar29 + 0x434 ) + -1;
                        puVar28 = *(undefined8**)*pauVar22;
                        if (puVar28 == (undefined8*)0x0) goto LAB_00100686;
                     }

                     if (pauVar22 == (undefined1(*) [16])puVar28[3]) {
                        lVar23 = puVar28[1];
                        lVar3 = puVar28[2];
                        *(long*)*pauVar22 = lVar23;
                        if (*(undefined8**)( *pauVar22 + 8 ) == puVar28) {
                           *(long*)( *pauVar22 + 8 ) = lVar3;
                        }

                        if (lVar3 != 0) {
                           *(long*)( lVar3 + 8 ) = lVar23;
                           lVar23 = puVar28[1];
                        }

                        if (lVar23 != 0) {
                           *(long*)( lVar23 + 0x10 ) = lVar3;
                        }

                        Memory::free_static(puVar28, false);
                        iVar20 = *(int*)pauVar22[1] + -1;
                        *(int*)pauVar22[1] = iVar20;
                     }
 else {
                        _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                        iVar20 = *(int*)pauVar22[1];
                     }

                  }
 while ( iVar20 != 0 );
                  Memory::free_static(pauVar22, false);
               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               LAB_001008b4:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            /* AudioStreamPreview::get_length() const */
            undefined4 AudioStreamPreview::get_length(AudioStreamPreview *this) {
               return *(undefined4*)( this + 400 );
            }

            /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
            /* AudioStreamPreview::get_max(float, float) const */
            undefined8 AudioStreamPreview::get_max(AudioStreamPreview *this, float param_1, float param_2) {
               float fVar1;
               long lVar2;
               long lVar3;
               code *pcVar4;
               int iVar5;
               int iVar6;
               long lVar7;
               byte bVar8;
               byte bVar9;
               int iVar10;
               int iVar11;
               int iVar12;
               long lVar13;
               double dVar14;
               fVar1 = *(float*)( this + 400 );
               if (( fVar1 == 0.0 ) || ( lVar2 = lVar2 == 0 )) {
                  return 0;
               }

               lVar3 = *(long*)( lVar2 + -8 );
               iVar6 = (int)( lVar3 / 2 );
               if (iVar6 == 0) {
                  return 0;
               }

               iVar5 = iVar6 + -1;
               iVar10 = (int)( ( param_1 / fVar1 ) * (float)iVar6 );
               iVar6 = (int)( ( param_2 / fVar1 ) * (float)iVar6 );
               if (iVar10 < 0) {
                  if (iVar6 < 0) {
                     bVar8 = 0;
                     lVar13 = 1;
                     iVar12 = 1;
                     iVar10 = 0;
                     iVar5 = 1;
                  }
 else {
                     iVar12 = 1;
                     lVar13 = 1;
                     if (iVar6 < iVar5) {
                        iVar5 = iVar6;
                     }

                     if (iVar5 < 1) {
                        iVar5 = 1;
                     }

                     bVar8 = 0;
                     iVar10 = 0;
                  }

               }
 else {
                  if (iVar5 <= iVar10) {
                     iVar10 = iVar5;
                  }

                  iVar12 = iVar10 * 2 + 1;
                  lVar13 = (long)iVar12;
                  if (iVar6 < 0) {
                     if (iVar10 < 0) goto LAB_001009ec;
                     LAB_00100a50:iVar5 = iVar10 + 1;
                  }
 else {
                     if (iVar6 < iVar5) {
                        iVar5 = iVar6;
                     }

                     if (iVar5 <= iVar10) goto LAB_00100a50;
                  }

                  bVar8 = ( byte )((uint)iVar12 >> 0x1f);
               }

               if (( lVar13 < lVar3 ) && ( bVar8 == 0 )) {
                  iVar6 = iVar10 + 1;
                  bVar9 = 0;
                  bVar8 = *(byte*)( lVar2 + iVar12 );
                  iVar12 = iVar6 * 2 + 1;
                  lVar7 = (long)( iVar6 * 2 ) + 1;
                  if (iVar10 == 0) goto LAB_001009dc;
                  do {
                     lVar13 = lVar7;
                     iVar10 = iVar6;
                     iVar11 = iVar12;
                     if (bVar9 < bVar8) goto LAB_001009dc;
                     while (true) {
                        if (iVar5 <= iVar10) {
                           dVar14 = ( (double)bVar9 / _LC18 + (double)bVar9 / _LC18 ) - __LC19;
                           return CONCAT44((int)( (ulong)dVar14 >> 0x20 ), (float)dVar14);
                        }

                        lVar7 = lVar13 + 2;
                        iVar12 = iVar11 + 2;
                        if (lVar3 <= lVar13) goto LAB_001009ec;
                        iVar6 = iVar10 + 1;
                        bVar8 = *(byte*)( lVar2 + iVar11 );
                        if (iVar10 != 0) break;
                        LAB_001009dc:lVar13 = lVar7;
                        iVar10 = iVar6;
                        iVar11 = iVar12;
                        bVar9 = bVar8;
                     }
;
                  }
 while ( true );
               }

               LAB_001009ec:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar13, lVar3, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
            /* AudioStreamPreview::get_min(float, float) const */
            undefined8 AudioStreamPreview::get_min(AudioStreamPreview *this, float param_1, float param_2) {
               float fVar1;
               long lVar2;
               long lVar3;
               code *pcVar4;
               int iVar5;
               int iVar6;
               byte bVar7;
               int iVar8;
               int iVar9;
               long lVar10;
               long lVar11;
               byte bVar12;
               double dVar13;
               fVar1 = *(float*)( this + 400 );
               if (( fVar1 == 0.0 ) || ( lVar2 = lVar2 == 0 )) {
                  return 0;
               }

               lVar3 = *(long*)( lVar2 + -8 );
               iVar8 = (int)( lVar3 / 2 );
               if (iVar8 == 0) {
                  return 0;
               }

               iVar5 = iVar8 + -1;
               iVar9 = (int)( ( param_1 / fVar1 ) * (float)iVar8 );
               iVar8 = (int)( ( param_2 / fVar1 ) * (float)iVar8 );
               if (iVar9 < 0) {
                  if (iVar8 < 0) {
                     bVar7 = 0;
                     lVar11 = 0;
                     iVar6 = 0;
                     iVar9 = 0;
                     iVar5 = 1;
                  }
 else {
                     if (iVar8 < iVar5) {
                        iVar5 = iVar8;
                     }

                     if (iVar5 < 1) {
                        iVar5 = 1;
                     }

                     bVar7 = 0;
                     lVar11 = 0;
                     iVar6 = 0;
                     iVar9 = 0;
                  }

               }
 else {
                  if (iVar5 <= iVar9) {
                     iVar9 = iVar5;
                  }

                  iVar6 = iVar9 * 2;
                  lVar11 = (long)iVar6;
                  if (iVar8 < 0) {
                     if (iVar9 < 0) goto LAB_00100ba4;
                     LAB_00100c08:iVar5 = iVar9 + 1;
                  }
 else {
                     if (iVar8 < iVar5) {
                        iVar5 = iVar8;
                     }

                     if (iVar5 <= iVar9) goto LAB_00100c08;
                  }

                  bVar7 = ( byte )(iVar6 >> 0x1f) >> 7;
               }

               if (( lVar11 < lVar3 ) && ( bVar7 == 0 )) {
                  iVar8 = iVar9 + 1;
                  bVar12 = 0xff;
                  bVar7 = *(byte*)( lVar2 + iVar6 );
                  lVar10 = (long)( iVar8 * 2 );
                  if (iVar9 == 0) goto LAB_00100b94;
                  do {
                     lVar11 = lVar10;
                     iVar9 = iVar8;
                     if (bVar7 < bVar12) goto LAB_00100b94;
                     while (true) {
                        if (iVar5 <= iVar9) {
                           dVar13 = ( (double)bVar12 / _LC18 + (double)bVar12 / _LC18 ) - __LC19;
                           return CONCAT44((int)( (ulong)dVar13 >> 0x20 ), (float)dVar13);
                        }

                        lVar10 = lVar11 + 2;
                        if (lVar3 <= lVar11) goto LAB_00100ba4;
                        iVar8 = iVar9 + 1;
                        bVar7 = *(byte*)( lVar2 + iVar9 * 2 );
                        if (iVar9 != 0) break;
                        LAB_00100b94:lVar11 = lVar10;
                        iVar9 = iVar8;
                        bVar12 = bVar7;
                     }
;
                  }
 while ( true );
               }

               LAB_00100ba4:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar11, lVar3, "p_index", "size()", "", false, true);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar4 = (code*)invalidInstructionException();
               ( *pcVar4 )();
            }

            /* AudioStreamPreview::AudioStreamPreview() */
            void AudioStreamPreview::AudioStreamPreview(AudioStreamPreview *this) {
               RefCounted::RefCounted((RefCounted*)this);
               *(undefined8*)( this + 0x188 ) = 0;
               *(undefined***)this = &PTR__initialize_classv_00107890;
               *(undefined8*)( this + 0x198 ) = 1;
               *(undefined4*)( this + 400 ) = 0;
               return;
            }

            /* AudioStreamPreviewGenerator::_notification(int) */
            void AudioStreamPreviewGenerator::_notification(AudioStreamPreviewGenerator *this, int param_1) {
               if (param_1 != 0x11) {
                  return;
               }

               _notification((int)this);
               return;
            }

            /* AudioStreamPreviewGenerator::AudioStreamPreviewGenerator() */
            void AudioStreamPreviewGenerator::AudioStreamPreviewGenerator(AudioStreamPreviewGenerator *this) {
               Node::Node((Node*)this);
               *(undefined***)this = &PTR__initialize_classv_001079f0;
               *(undefined8*)( this + 0x430 ) = 2;
               singleton = this;
               *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
               Node::set_process(SUB81(this, 0));
               return;
            }

            /* CowData<char32_t>::_ref(CowData<char32_t> const&) [clone .part.0] */
            void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
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

            /* List<PropertyInfo, DefaultAllocator>::push_back(PropertyInfo const&) [clone .isra.0] */
            void List<PropertyInfo,DefaultAllocator>::push_back(List<PropertyInfo,DefaultAllocator> *this, PropertyInfo *param_1) {
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
               *(undefined1(*) [16])( puVar3 + 2 ) = (undefined1[16])0x0;
               *(undefined1(*) [16])( puVar3 + 0xc ) = (undefined1[16])0x0;
               *puVar3 = 0;
               puVar3[6] = 0;
               *(undefined8*)( puVar3 + 8 ) = 0;
               puVar3[10] = 6;
               *(undefined8*)( puVar3 + 0x10 ) = 0;
               *puVar3 = *(undefined4*)param_1;
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 2 ), (CowData*)( param_1 + 8 ));
               StringName::operator =((StringName*)( puVar3 + 4 ), (StringName*)( param_1 + 0x10 ));
               puVar3[6] = *(undefined4*)( param_1 + 0x18 );
               CowData<char32_t>::_ref((CowData<char32_t>*)( puVar3 + 8 ), (CowData*)( param_1 + 0x20 ));
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

            /* AudioStreamPreviewGenerator::_bind_methods() */
            void AudioStreamPreviewGenerator::_bind_methods(void) {
               long lVar1;
               code *pcVar2;
               undefined1 auVar3[16];
               undefined8 uVar4;
               int *piVar5;
               MethodBind *pMVar6;
               long *plVar7;
               long lVar8;
               int *piVar9;
               long in_FS_OFFSET;
               undefined8 local_138;
               undefined8 local_130;
               undefined8 local_128;
               long local_120;
               undefined8 local_118;
               long local_110;
               undefined4 local_108[2];
               undefined8 local_100;
               long local_f8;
               int local_f0;
               undefined8 local_e8;
               undefined4 local_e0;
               long local_d8[2];
               undefined1 local_c8[16];
               undefined8 local_b8;
               undefined8 local_b0;
               undefined8 local_a8;
               undefined8 local_a0;
               undefined8 local_98[2];
               int *local_88;
               undefined8 local_80;
               long local_70;
               char *local_68;
               undefined8 local_60;
               char **local_58;
               undefined1 local_50[16];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               local_60 = 0;
               local_68 = "stream";
               local_58 = &local_68;
               D_METHODP((char*)local_d8, (char***)"generate_preview", ( uint ) & local_58);
               local_50 = (undefined1[16])0x0;
               local_58 = (char**)0x0;
               pMVar6 = create_method_bind<AudioStreamPreviewGenerator,Ref<AudioStreamPreview>,Ref<AudioStream>const&>(generate_preview);
               ClassDB::bind_methodfi(1, pMVar6, false, (MethodDefinition*)local_d8, (Variant**)0x0, 0);
               if (Variant::needs_deinit[(int)local_58] != '\0') {
                  Variant::_clear_internal();
               }

               uVar4 = local_c8._0_8_;
               if ((long*)local_c8._0_8_ != (long*)0x0) {
                  LOCK();
                  plVar7 = (long*)( local_c8._0_8_ + -0x10 );
                  *plVar7 = *plVar7 + -1;
                  UNLOCK();
                  if (*plVar7 == 0) {
                     if ((long*)local_c8._0_8_ == (long*)0x0) {
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                     lVar1 = *(long*)( local_c8._0_8_ + -8 );
                     lVar8 = 0;
                     auVar3._8_8_ = 0;
                     auVar3._0_8_ = local_c8._8_8_;
                     local_c8 = auVar3 << 0x40;
                     plVar7 = (long*)uVar4;
                     if (lVar1 != 0) {
                        do {
                           if (( StringName::configured != '\0' ) && ( *plVar7 != 0 )) {
                              StringName::unref();
                           }

                           lVar8 = lVar8 + 1;
                           plVar7 = plVar7 + 1;
                        }
 while ( lVar1 != lVar8 );
                     }

                     Memory::free_static((long*)( uVar4 + -0x10 ), false);
                  }

               }

               if (( StringName::configured != '\0' ) && ( local_d8[0] != 0 )) {
                  StringName::unref();
               }

               local_120 = 0;
               local_128 = 0;
               String::parse_latin1((String*)&local_128, "");
               local_130 = 0;
               String::parse_latin1((String*)&local_130, "obj_id");
               local_108[0] = 2;
               local_100 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_100, (CowData*)&local_130);
               local_f8 = 0;
               local_f0 = 0;
               local_e8 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_e8, (CowData*)&local_128);
               local_e0 = 6;
               if (local_f0 == 0x11) {
                  StringName::StringName((StringName*)local_d8, (String*)&local_e8, false);
                  if (local_f8 == local_d8[0]) {
                     if (( StringName::configured != '\0' ) && ( local_d8[0] != 0 )) {
                        StringName::unref();
                     }

                  }
 else {
                     StringName::unref();
                     local_f8 = local_d8[0];
                  }

               }
 else {
                  StringName::operator =((StringName*)&local_f8, (StringName*)&local_120);
               }

               local_118 = 0;
               String::parse_latin1((String*)&local_118, "preview_updated");
               local_c8 = (undefined1[16])0x0;
               local_d8[0] = 0;
               local_d8[1] = 0;
               local_b8 = 0;
               local_b0 = 0;
               local_a8 = 6;
               local_a0 = 1;
               local_98[0] = 0;
               local_88 = (int*)0x0;
               local_80 = 0;
               local_70 = 0;
               CowData<char32_t>::_ref((CowData<char32_t>*)local_d8, (CowData*)&local_118);
               List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)local_98, (PropertyInfo*)local_108);
               local_138 = 0;
               String::parse_latin1((String*)&local_138, "AudioStreamPreviewGenerator");
               StringName::StringName((StringName*)&local_110, (String*)&local_138, false);
               ClassDB::add_signal((StringName*)&local_110, (MethodInfo*)local_d8);
               if (( StringName::configured != '\0' ) && ( local_110 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_138);
               lVar1 = local_70;
               if (local_70 != 0) {
                  LOCK();
                  plVar7 = (long*)( local_70 + -0x10 );
                  *plVar7 = *plVar7 + -1;
                  UNLOCK();
                  if (*plVar7 == 0) {
                     local_70 = 0;
                     Memory::free_static((void*)( lVar1 + -0x10 ), false);
                  }

               }

               piVar5 = local_88;
               if (local_88 != (int*)0x0) {
                  LOCK();
                  plVar7 = (long*)( local_88 + -4 );
                  *plVar7 = *plVar7 + -1;
                  UNLOCK();
                  if (*plVar7 == 0) {
                     if (local_88 == (int*)0x0) {
                        /* WARNING: Does not return */
                        pcVar2 = (code*)invalidInstructionException();
                        ( *pcVar2 )();
                     }

                     lVar1 = *(long*)( local_88 + -2 );
                     lVar8 = 0;
                     local_88 = (int*)0x0;
                     piVar9 = piVar5;
                     if (lVar1 != 0) {
                        do {
                           if (Variant::needs_deinit[*piVar9] != '\0') {
                              Variant::_clear_internal();
                           }

                           lVar8 = lVar8 + 1;
                           piVar9 = piVar9 + 6;
                        }
 while ( lVar1 != lVar8 );
                     }

                     Memory::free_static(piVar5 + -4, false);
                  }

               }

               List<PropertyInfo,DefaultAllocator>::~List((List<PropertyInfo,DefaultAllocator>*)local_98);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
               if (( StringName::configured != '\0' ) && ( local_c8._8_8_ != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)local_c8);
               CowData<char32_t>::_unref((CowData<char32_t>*)local_d8);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_118);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_e8);
               if (( StringName::configured != '\0' ) && ( local_f8 != 0 )) {
                  StringName::unref();
               }

               CowData<char32_t>::_unref((CowData<char32_t>*)&local_100);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_130);
               CowData<char32_t>::_unref((CowData<char32_t>*)&local_128);
               if (( StringName::configured != '\0' ) && ( local_120 != 0 )) {
                  StringName::unref();
               }

               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               return;
            }

            /* CowData<unsigned char>::_copy_on_write() [clone .isra.0] */
            void CowData<unsigned_char>::_copy_on_write(CowData<unsigned_char> *this) {
               size_t __n;
               code *pcVar1;
               undefined8 *puVar2;
               ulong uVar3;
               if (( *(long*)this == 0 ) || ( *(ulong*)( *(long*)this + -0x10 ) < 2 )) {
                  return;
               }

               if (*(long*)this == 0) {
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               __n = *(size_t*)( *(long*)this + -8 );
               uVar3 = 0x10;
               if (__n != 0) {
                  uVar3 = __n - 1 | __n - 1 >> 1;
                  uVar3 = uVar3 | uVar3 >> 2;
                  uVar3 = uVar3 | uVar3 >> 4;
                  uVar3 = uVar3 | uVar3 >> 8;
                  uVar3 = uVar3 | uVar3 >> 0x10;
                  uVar3 = ( uVar3 | uVar3 >> 0x20 ) + 0x11;
               }

               puVar2 = (undefined8*)Memory::alloc_static(uVar3, false);
               if (puVar2 != (undefined8*)0x0) {
                  *puVar2 = 1;
                  puVar2[1] = __n;
                  memcpy(puVar2 + 2, *(void**)this, __n);
                  _unref(this);
                  *(undefined8**)this = puVar2 + 2;
                  return;
               }

               _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
               return;
            }

            /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
            /* AudioStreamPreviewGenerator::_preview_thread(void*) */
            void AudioStreamPreviewGenerator::_preview_thread(void *param_1) {
               long *plVar1;
               float fVar2;
               float fVar3;
               long lVar4;
               undefined8 uVar5;
               int iVar6;
               ulong uVar7;
               int iVar8;
               int iVar9;
               long *plVar10;
               undefined8 *puVar11;
               long lVar12;
               CallableCustom *this;
               undefined8 *puVar13;
               undefined1 uVar14;
               long lVar15;
               undefined8 *puVar16;
               long lVar17;
               int iVar18;
               ulong uVar19;
               int iVar20;
               code *pcVar21;
               ulong uVar22;
               int iVar23;
               int iVar24;
               long in_FS_OFFSET;
               float fVar25;
               float fVar26;
               double dVar27;
               double dVar28;
               undefined1 local_d8;
               undefined8 local_a0;
               Callable local_98[16];
               Variant *local_88[2];
               int local_78[6];
               int local_60[8];
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               plVar10 = (long*)AudioServer::get_singleton();
               fVar25 = (float)( **(code**)( *plVar10 + 0x188 ) )(plVar10);
               iVar8 = (int)( fVar25 * __LC45 );
               lVar15 = (long)iVar8;
               if (lVar15 < 0) {
                  _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
                  LAB_00101a95:puVar16 = (undefined8*)0x0;
               }
 else {
                  if (lVar15 == 0) goto LAB_00101a95;
                  uVar19 = lVar15 * 8 - 1;
                  uVar19 = uVar19 | uVar19 >> 1;
                  uVar19 = uVar19 | uVar19 >> 2;
                  uVar19 = uVar19 | uVar19 >> 4;
                  uVar19 = uVar19 | uVar19 >> 8;
                  uVar19 = uVar19 | uVar19 >> 0x10;
                  puVar11 = (undefined8*)Memory::alloc_static(( uVar19 | uVar19 >> 0x20 ) + 0x11, false);
                  if (puVar11 == (undefined8*)0x0) {
                     puVar16 = (undefined8*)0x0;
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
                  }
 else {
                     puVar16 = puVar11 + 2;
                     *puVar11 = 1;
                     memset(puVar16, 0, lVar15 * 8);
                     puVar11[1] = lVar15;
                  }

               }

               plVar10 = (long*)AudioServer::get_singleton();
               fVar25 = (float)( **(code**)( *plVar10 + 0x188 ) )(plVar10);
               /* WARNING: Load size is inaccurate */
               iVar23 = (int)( fVar25 * *(float*)( *param_1 + 400 ) );
               ( **(code**)( **(long**)( (long)param_1 + 0x10 ) + 0x150 ) )(0);
               if (iVar23 != 0) {
                  puVar11 = puVar16;
                  iVar24 = iVar23;
                  do {
                     /* WARNING: Load size is inaccurate */
                     iVar6 = iVar8;
                     if (iVar24 < iVar8) {
                        iVar6 = iVar24;
                     }

                     puVar16 = puVar11;
                     if (*(long*)( *param_1 + 0x188 ) == 0) {
                        plVar10 = *(long**)( (long)param_1 + 0x10 );
                        pcVar21 = *(code**)( *plVar10 + 0x198 );
                        if (puVar11 != (undefined8*)0x0) {
                           iVar9 = 0;
                           iVar20 = 0;
                           goto LAB_0010164e;
                        }

                        ( *pcVar21 )(plVar10, 0, iVar6);
                     }
 else {
                        plVar10 = *(long**)( (long)param_1 + 0x10 );
                        lVar17 = *(long*)( *(long*)( *param_1 + 0x188 ) + -8 ) / 2;
                        iVar9 = (int)( ( ulong )(( iVar23 - iVar24 ) * lVar17) / (ulong)(long)iVar23 );
                        lVar12 = (long)(int)( ( ulong )(iVar6 * lVar17) / (ulong)(long)iVar23 );
                        lVar15 = lVar17 - iVar9;
                        if (lVar12 <= lVar17 - iVar9) {
                           lVar15 = lVar12;
                        }

                        iVar20 = (int)lVar15;
                        pcVar21 = *(code**)( *plVar10 + 0x198 );
                        if (puVar11 != (undefined8*)0x0) {
                           LAB_0010164e:plVar1 = puVar11 + -2;
                           if (1 < (ulong)puVar11[-2]) {
                              lVar15 = puVar11[-1];
                              uVar19 = 0x10;
                              lVar12 = lVar15 * 8;
                              if (lVar12 != 0) {
                                 uVar19 = lVar12 - 1U | lVar12 - 1U >> 1;
                                 uVar19 = uVar19 | uVar19 >> 2;
                                 uVar19 = uVar19 | uVar19 >> 4;
                                 uVar19 = uVar19 | uVar19 >> 8;
                                 uVar19 = uVar19 | uVar19 >> 0x10;
                                 uVar19 = ( uVar19 | uVar19 >> 0x20 ) + 0x11;
                              }

                              puVar13 = (undefined8*)Memory::alloc_static(uVar19, false);
                              if (puVar13 == (undefined8*)0x0) {
                                 _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
                              }
 else {
                                 puVar16 = puVar13 + 2;
                                 lVar17 = 0;
                                 *puVar13 = 1;
                                 puVar13[1] = lVar15;
                                 if (lVar15 != 0) {
                                    do {
                                       *(undefined8*)( (long)puVar13 + lVar17 + 0x10 ) = *(undefined8*)( (long)puVar11 + lVar17 );
                                       lVar17 = lVar17 + 8;
                                    }
 while ( lVar17 != lVar12 );
                                 }

                                 LOCK();
                                 *plVar1 = *plVar1 + -1;
                                 UNLOCK();
                                 if (*plVar1 == 0) {
                                    Memory::free_static(plVar1, false);
                                 }

                              }

                           }

                        }

                        ( *pcVar21 )(plVar10, puVar16, iVar6);
                        if (0 < iVar20) {
                           uVar22 = (ulong)iVar20;
                           uVar19 = 0;
                           lVar15 = (long)( iVar9 * 2 );
                           do {
                              uVar7 = uVar19 / uVar22;
                              uVar19 = uVar19 + (long)iVar6;
                              iVar20 = (int)( uVar19 / uVar22 );
                              if (iVar6 <= iVar20) {
                                 iVar20 = iVar6;
                              }

                              iVar18 = (int)uVar7;
                              if (iVar6 + -1 <= iVar18) {
                                 iVar18 = iVar6 + -1;
                              }

                              if (iVar18 == iVar20) {
                                 iVar20 = iVar18 + 1;
                                 LAB_001016da:lVar12 = (long)iVar18;
                                 if (iVar18 < 0) {
                                    if (puVar16 != (undefined8*)0x0) {
                                       lVar17 = puVar16[-1];
                                       goto LAB_00101a1d;
                                    }

                                 }
 else if (puVar16 != (undefined8*)0x0) {
                                    lVar17 = puVar16[-1];
                                    fVar25 = _LC43;
                                    fVar26 = _LC44;
                                    do {
                                       if (lVar17 <= lVar12) goto LAB_00101a1d;
                                       fVar2 = *(float*)( puVar16 + lVar12 );
                                       fVar3 = *(float*)( (long)puVar16 + lVar12 * 8 + 4 );
                                       lVar12 = lVar12 + 1;
                                       if (fVar26 <= fVar2) {
                                          fVar26 = fVar2;
                                       }

                                       if (fVar2 <= fVar25) {
                                          fVar25 = fVar2;
                                       }

                                       if (fVar26 <= fVar3) {
                                          fVar26 = fVar3;
                                       }

                                       if (fVar3 <= fVar25) {
                                          fVar25 = fVar3;
                                       }

                                    }
 while ( (int)lVar12 < iVar20 );
                                    uVar14 = 0;
                                    dVar28 = ( (double)fVar25 * _LC51 + _LC51 ) * _LC18;
                                    dVar27 = ( (double)fVar26 * _LC51 + _LC51 ) * _LC18;
                                    if (0.0 <= dVar28) {
                                       if (_LC18 < dVar28) {
                                          uVar14 = 0xff;
                                       }
 else {
                                          uVar14 = (undefined1)(int)dVar28;
                                       }

                                    }

                                    local_d8 = 0;
                                    if (( 0.0 <= dVar27 ) && ( local_d8 = dVar27 <= _LC18 )) {
                                       local_d8 = (undefined1)(int)dVar27;
                                    }

                                    goto LAB_00101797;
                                 }

                                 lVar17 = 0;
                                 LAB_00101a1d:_err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar12, lVar17, "p_index", "size()", "", false, true);
                                 _err_flush_stdout();
                                 /* WARNING: Does not return */
                                 pcVar21 = (code*)invalidInstructionException();
                                 ( *pcVar21 )();
                              }

                              if (iVar18 < iVar20) goto LAB_001016da;
                              local_d8 = 0;
                              uVar14 = 0xff;
                              LAB_00101797:/* WARNING: Load size is inaccurate */lVar17 = *param_1;
                              lVar4 = *(long*)( lVar17 + 0x188 );
                              lVar12 = lVar15;
                              if (lVar15 < 0) {
                                 if (lVar4 != 0) {
                                    LAB_00101c33:lVar17 = *(long*)( lVar4 + -8 );
                                    goto LAB_00101c52;
                                 }

                                 LAB_00101c92:lVar17 = 0;
                                 LAB_00101c52:_err_print_index_error("operator[]", "./core/templates/vector.h", 0x38, lVar12, lVar17, "p_index", "((Vector<T> *)(this))->_cowdata.size()", "", false, true);
                                 _err_flush_stdout();
                                 /* WARNING: Does not return */
                                 pcVar21 = (code*)invalidInstructionException();
                                 ( *pcVar21 )();
                              }

                              if (lVar4 == 0) goto LAB_00101c92;
                              if (*(long*)( lVar4 + -8 ) <= lVar15) goto LAB_00101c33;
                              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( lVar17 + 0x188 ));
                              *(undefined1*)( *(long*)( lVar17 + 0x188 ) + lVar15 ) = uVar14;
                              /* WARNING: Load size is inaccurate */
                              lVar4 = *param_1;
                              lVar12 = lVar15 + 1;
                              if (*(long*)( lVar4 + 0x188 ) == 0) {
                                 lVar17 = 0;
                                 goto LAB_00101c52;
                              }

                              lVar17 = *(long*)( *(long*)( lVar4 + 0x188 ) + -8 );
                              if (lVar17 <= lVar12) goto LAB_00101c52;
                              CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( lVar4 + 0x188 ));
                              *(undefined1*)( *(long*)( lVar4 + 0x188 ) + lVar12 ) = local_d8;
                              lVar15 = lVar15 + 2;
                           }
 while ( ( (long)iVar9 + uVar22 ) * 2 != lVar15 );
                        }

                     }

                     lVar15 = singleton;
                     iVar24 = iVar24 - iVar6;
                     this(CallableCustom * operator_new(0x48, ""));
                     CallableCustom::CallableCustom(this);
                     *(undefined8*)( this + 0x40 ) = 0;
                     *(undefined**)( this + 0x20 ) = &_LC16;
                     *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
                     *(undefined***)this = &PTR_hash_00107bb8;
                     uVar5 = *(undefined8*)( lVar15 + 0x60 );
                     *(long*)( this + 0x28 ) = lVar15;
                     *(undefined8*)( this + 0x30 ) = uVar5;
                     *(code**)( this + 0x38 ) = _update_emit;
                     *(undefined8*)( this + 0x10 ) = 0;
                     CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
                     *(char**)( this + 0x20 ) = "AudioStreamPreviewGenerator::_update_emit";
                     Callable::Callable(local_98, this);
                     local_a0 = *(undefined8*)( (long)param_1 + 0x20 );
                     Variant::Variant((Variant*)local_78, (ObjectID*)&local_a0);
                     Variant::Variant((Variant*)local_60, 0);
                     local_88[0] = (Variant*)local_78;
                     Callable::call_deferredp((Variant**)local_98, (int)local_88);
                     if (Variant::needs_deinit[local_60[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     Callable::~Callable(local_98);
                     puVar11 = puVar16;
                  }
 while ( iVar24 != 0 );
               }

               /* WARNING: Load size is inaccurate */
               plVar10 = *(long**)( (long)param_1 + 0x10 );
               *(long*)( *param_1 + 0x198 ) = *(long*)( *param_1 + 0x198 ) + 1;
               ( **(code**)( *plVar10 + 0x158 ) )();
               *(undefined1*)( (long)param_1 + 0x18 ) = 0;
               if (puVar16 != (undefined8*)0x0) {
                  plVar10 = puVar16 + -2;
                  LOCK();
                  *plVar10 = *plVar10 + -1;
                  UNLOCK();
                  if (*plVar10 == 0) {
                     if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                        Memory::free_static(plVar10, false);
                        return;
                     }

                     goto LAB_00101d34;
                  }

               }

               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               LAB_00101d34:/* WARNING: Subroutine does not return */__stack_chk_fail();
            }

            /* AudioStreamPreviewGenerator::generate_preview(Ref<AudioStream> const&) */
            Ref *AudioStreamPreviewGenerator::generate_preview(Ref *param_1) {
               HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>> *this;
               CowData<unsigned_char> *this_00;
               ObjectID *pOVar1;
               long lVar2;
               RefCounted *pRVar3;
               uint uVar4;
               undefined8 uVar5;
               char cVar6;
               long *plVar7;
               Preview *this_01;
               Settings *pSVar8;
               undefined8 *puVar9;
               RefCounted *pRVar10;
               long lVar11;
               Thread *this_02;
               long *in_RDX;
               long in_RSI;
               ulong uVar12;
               Object *pOVar13;
               void *pvVar14;
               Object *pOVar15;
               long in_FS_OFFSET;
               bool bVar16;
               float fVar17;
               double dVar18;
               float local_8c;
               RefCounted *local_80;
               undefined1 local_78[16];
               Object *local_68;
               undefined1 local_60;
               undefined8 local_58;
               undefined8 local_50;
               long local_40;
               local_40 = *(long*)( in_FS_OFFSET + 0x28 );
               if (*in_RDX == 0) {
                  _err_print_error("generate_preview", "editor/audio_stream_preview.cpp", 0xac, "Condition \"p_stream.is_null()\" is true. Returning: Ref<AudioStreamPreview>()", 0, 0);
                  *(undefined8*)param_1 = 0;
                  goto LAB_00101dc5;
               }

               pOVar1 = *(ObjectID**)( *in_RDX + 0x60 );
               this(HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>> * )(in_RSI + 0x408);
               cVar6 = HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>>::_lookup_pos(this, pOVar1, (uint*)local_78);
               if (cVar6 != '\0') {
                  local_78._0_8_ = pOVar1;
                  plVar7 = (long*)HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>>::operator [](this, (ObjectID*)local_78);
                  *(undefined8*)param_1 = 0;
                  if (*plVar7 != 0) {
                     *(long*)param_1 = *plVar7;
                     cVar6 = RefCounted::reference();
                     if (cVar6 == '\0') {
                        *(undefined8*)param_1 = 0;
                     }

                  }

                  goto LAB_00101dc5;
               }

               local_68 = (Object*)0x0;
               local_78 = (undefined1[16])0x0;
               local_60 = 0;
               local_58 = 0;
               local_50 = 0;
               local_80 = *(RefCounted**)( *in_RDX + 0x60 );
               this_01 = (Preview*)HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>>::operator [](this, (ObjectID*)&local_80);
               Preview::operator =(this_01, (Preview*)local_78);
               if (( ( local_68 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),pOVar13 = local_68,cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar13 + 0x140 ))(pOVar13);
               Memory::free_static(pOVar13, false);
            }

            if (( local_78._8_8_ != 0 ) && ( cVar6 = cVar6 != '\0' )) {
               uVar5 = local_78._8_8_;
               cVar6 = predelete_handler((Object*)local_78._8_8_);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)uVar5 + 0x140 ) )(uVar5);
                  Memory::free_static((void*)uVar5, false);
               }

            }

            if (local_78._0_8_ != 0) {
               cVar6 = RefCounted::unreference();
               if (cVar6 != '\0') {
                  uVar5 = local_78._0_8_;
                  cVar6 = predelete_handler((Object*)local_78._0_8_);
                  if (cVar6 != '\0') {
                     ( **(code**)( *(long*)uVar5 + 0x140 ) )(uVar5);
                     Memory::free_static((void*)uVar5, false);
                  }

               }

            }

            local_78._0_8_ = *(undefined8*)( *in_RDX + 0x60 );
            pSVar8 = (Settings*)HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>>::operator [](this, (ObjectID*)local_78);
            pOVar13 = (Object*)*in_RDX;
            pOVar15 = *(Object**)( pSVar8 + 8 );
            if (pOVar13 != pOVar15) {
               *(Object**)( pSVar8 + 8 ) = pOVar13;
               if (( pOVar13 != (Object*)0x0 ) && ( cVar6 = cVar6 == '\0' )) {
                  *(undefined8*)( pSVar8 + 8 ) = 0;
               }

               if (( ( pOVar15 != (Object*)0x0 ) && ( cVar6 = RefCounted::unreference() ),cVar6 != '\0' )) &&( cVar6 = cVar6 != '\0' )(**(code**)( *(long*)pOVar15 + 0x140 ))(pOVar15);
               Memory::free_static(pOVar15, false);
            }

            pOVar15 = *(Object**)( pSVar8 + 8 );
         }
)(**(code**)( *(long*)pOVar15 + 0x1c8 ))((ObjectID*)local_78);
      pOVar13 = *(Object**)( pSVar8 + 0x10 );
      if ((Object*)local_78._0_8_ == pOVar13) {
         LAB_00101f59:if (( pOVar13 != (Object*)0x0 ) && ( cVar6 = cVar6 != '\0' )) {
            uVar5 = local_78._0_8_;
            cVar6 = predelete_handler((Object*)local_78._0_8_);
            if (cVar6 != '\0') {
               ( **(code**)( *(long*)uVar5 + 0x140 ) )(uVar5);
               Memory::free_static((void*)uVar5, false);
            }

         }

      }
 else {
         *(undefined8*)( pSVar8 + 0x10 ) = local_78._0_8_;
         if ((Object*)local_78._0_8_ != (Object*)0x0) {
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
               *(undefined8*)( pSVar8 + 0x10 ) = 0;
            }

            if (pOVar13 != (Object*)0x0) goto LAB_00101f44;
            LAB_00101f54:pOVar13 = (Object*)local_78._0_8_;
            goto LAB_00101f59;
         }

         if (pOVar13 != (Object*)0x0) {
            LAB_00101f44:cVar6 = RefCounted::unreference();
            if (( cVar6 != '\0' ) && ( cVar6 = cVar6 != '\0' )) {
               ( **(code**)( *(long*)pOVar13 + 0x140 ) )(pOVar13);
               Memory::free_static(pOVar13, false);
            }

            goto LAB_00101f54;
         }

      }

      pSVar8[0x18] = (Settings)0x1;
      *(undefined8*)( pSVar8 + 0x20 ) = *(undefined8*)( *in_RDX + 0x60 );
      dVar18 = (double)( **(code**)( **(long**)( pSVar8 + 8 ) + 0x1f8 ) )();
      local_8c = (float)dVar18;
      if (local_8c == 0.0) {
         local_8c = _LC56;
      }

      plVar7 = (long*)AudioServer::get_singleton();
      fVar17 = (float)( **(code**)( *plVar7 + 0x188 ) )(plVar7);
      local_78._8_8_ = 0;
      uVar4 = ( (int)( fVar17 * local_8c ) / 0x14 ) * 2;
      if ((int)uVar4 < 0) {
         _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( local_78 + 8 ));
         pvVar14 = (void*)local_78._8_8_;
      }
 else {
         this_00 = (CowData<unsigned_char>*)( local_78 + 8 );
         if ((int)( fVar17 * local_8c ) + 0x13U < 0x27) {
            CowData<unsigned_char>::_copy_on_write(this_00);
            pvVar14 = (void*)local_78._8_8_;
         }
 else {
            CowData<unsigned_char>::_copy_on_write(this_00);
            uVar12 = (long)(int)uVar4 - 1;
            uVar12 = uVar12 | uVar12 >> 1;
            uVar12 = uVar12 | uVar12 >> 2;
            uVar12 = uVar12 | uVar12 >> 4;
            uVar12 = uVar12 | uVar12 >> 8;
            puVar9 = (undefined8*)Memory::alloc_static(( uVar12 | uVar12 >> 0x10 ) + 0x11, false);
            if (puVar9 == (undefined8*)0x0) {
               _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.", 0, 0);
            }
 else {
               *puVar9 = 1;
               local_78._8_8_ = puVar9 + 2;
               puVar9[1] = (long)(int)uVar4;
            }

            CowData<unsigned_char>::_copy_on_write(this_00);
            pvVar14 = (void*)local_78._8_8_;
            memset((void*)local_78._8_8_, 0x7f, (ulong)uVar4);
         }

      }

      pRVar10 = (RefCounted*)operator_new(0x1a0, "");
      RefCounted::RefCounted(pRVar10);
      *(undefined8*)( pRVar10 + 0x188 ) = 0;
      *(undefined***)pRVar10 = &PTR__initialize_classv_00107890;
      *(undefined8*)( pRVar10 + 0x198 ) = 1;
      *(undefined4*)( pRVar10 + 400 ) = 0;
      postinitialize_handler((Object*)pRVar10);
      local_80 = (RefCounted*)0x0;
      cVar6 = RefCounted::init_ref();
      if (cVar6 == '\0') {
         Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)&local_80);
         pRVar10 = *(RefCounted**)pSVar8;
         if (pRVar10 != (RefCounted*)0x0) {
            *(undefined8*)pSVar8 = 0;
            local_80 = pRVar10;
            Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)&local_80);
            pRVar10 = *(RefCounted**)pSVar8;
         }

      }
 else {
         Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)&local_80);
         pRVar3 = *(RefCounted**)pSVar8;
         if (pRVar10 != pRVar3) {
            *(RefCounted**)pSVar8 = pRVar10;
            local_80 = pRVar3;
            cVar6 = RefCounted::reference();
            if (cVar6 == '\0') {
               *(undefined8*)pSVar8 = 0;
               Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)&local_80);
            }
 else {
               Ref<AudioStreamPreview>::unref((Ref<AudioStreamPreview>*)&local_80);
            }

         }

         cVar6 = RefCounted::unreference();
         if (( cVar6 != '\0' ) && ( cVar6 = predelete_handler((Object*)pRVar10) ),cVar6 != '\0') {
            ( **(code**)( *(long*)pRVar10 + 0x140 ) )(pRVar10);
            Memory::free_static(pRVar10, false);
         }

         pRVar10 = *(RefCounted**)pSVar8;
      }

      if (*(void**)( pRVar10 + 0x188 ) != pvVar14) {
         CowData<unsigned_char>::_unref((CowData<unsigned_char>*)( pRVar10 + 0x188 ));
         plVar7 = (long*)( (long)pvVar14 + -0x10 );
         if (pvVar14 != (void*)0x0) {
            do {
               lVar2 = *plVar7;
               if (lVar2 == 0) goto LAB_0010215f;
               LOCK();
               lVar11 = *plVar7;
               bVar16 = lVar2 == lVar11;
               if (bVar16) {
                  *plVar7 = lVar2 + 1;
                  lVar11 = lVar2;
               }

               UNLOCK();
            }
 while ( !bVar16 );
            if (lVar11 != -1) {
               *(undefined8*)( pRVar10 + 0x188 ) = local_78._8_8_;
            }

         }

         LAB_0010215f:pRVar10 = *(RefCounted**)pSVar8;
      }

      lVar2 = *(long*)( pSVar8 + 0x10 );
      *(float*)( pRVar10 + 400 ) = local_8c;
      if (lVar2 != 0) {
         this_02 = (Thread*)operator_new(0x10, "");
         Thread::Thread(this_02);
         *(Thread**)( pSVar8 + 0x28 ) = this_02;
         local_80 = (RefCounted*)0x0;
         String::parse_latin1((String*)&local_80, "AudioStreamPreviewGenerator");
         Thread::set_name((String*)&local_80);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
         local_80 = (RefCounted*)CONCAT44(local_80._4_4_, 1);
         Thread::start(*(_func_void_void_ptr**)( pSVar8 + 0x28 ), _preview_thread, pSVar8);
      }

      *(undefined8*)param_1 = 0;
      if (*(long*)pSVar8 != 0) {
         *(long*)param_1 = *(long*)pSVar8;
         cVar6 = RefCounted::reference();
         if (cVar6 == '\0') {
            *(undefined8*)param_1 = 0;
         }

      }

      CowData<unsigned_char>::_unref((CowData<unsigned_char>*)( local_78 + 8 ));
      LAB_00101dc5:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return param_1;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   /* DefaultAllocator::alloc(unsigned long) */
   void DefaultAllocator::alloc(ulong param_1) {
      Memory::alloc_static(param_1, false);
      return;
   }

   /* StringName::~StringName() */
   void StringName::~StringName(StringName *this) {
      if (( configured != '\0' ) && ( *(long*)this != 0 )) {
         StringName::unref();
         return;
      }

      return;
   }

   /* Object::_validate_property(PropertyInfo&) const */
   void Object::_validate_property(PropertyInfo *param_1) {
      return;
   }

   /* Object::_notification(int) */
   void Object::_notification(int param_1) {
      return;
   }

   /* Object::get_save_class() const */
   void Object::get_save_class(void) {
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

   /* MethodBind::is_valid() const */
   undefined8 MethodBind::is_valid(void) {
      return 1;
   }

   /* MethodBind::is_vararg() const */
   undefined8 MethodBind::is_vararg(void) {
      return 0;
   }

   /* RefCounted::is_class_ptr(void*) const */
   uint RefCounted::is_class_ptr(RefCounted *this, void *param_1) {
      return (uint)CONCAT71(0x107d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107d, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
   }

   /* RefCounted::_getv(StringName const&, Variant&) const */
   undefined8 RefCounted::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_setv(StringName const&, Variant const&) */
   undefined8 RefCounted::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_validate_propertyv(PropertyInfo&) const */
   void RefCounted::_validate_propertyv(PropertyInfo *param_1) {
      return;
   }

   /* RefCounted::_property_can_revertv(StringName const&) const */
   undefined8 RefCounted::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* RefCounted::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 RefCounted::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* RefCounted::_notificationv(int, bool) */
   void RefCounted::_notificationv(int param_1, bool param_2) {
      return;
   }

   /* AudioStreamPreview::is_class_ptr(void*) const */
   uint AudioStreamPreview::is_class_ptr(AudioStreamPreview *this, void *param_1) {
      return (uint)CONCAT71(0x107d, (undefined4*)param_1 == &RefCounted::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
   }

   /* AudioStreamPreview::_getv(StringName const&, Variant&) const */
   undefined8 AudioStreamPreview::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* AudioStreamPreview::_setv(StringName const&, Variant const&) */
   undefined8 AudioStreamPreview::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* AudioStreamPreview::_validate_propertyv(PropertyInfo&) const */
   void AudioStreamPreview::_validate_propertyv(PropertyInfo *param_1) {
      return;
   }

   /* AudioStreamPreview::_property_can_revertv(StringName const&) const */
   undefined8 AudioStreamPreview::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* AudioStreamPreview::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 AudioStreamPreview::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* AudioStreamPreview::_notificationv(int, bool) */
   void AudioStreamPreview::_notificationv(int param_1, bool param_2) {
      return;
   }

   /* AudioStreamPreviewGenerator::is_class_ptr(void*) const */
   uint AudioStreamPreviewGenerator::is_class_ptr(AudioStreamPreviewGenerator *this, void *param_1) {
      return (uint)CONCAT71(0x107d, (undefined4*)param_1 == &Node::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107c, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x107d, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr);
   }

   /* AudioStreamPreviewGenerator::_getv(StringName const&, Variant&) const */
   undefined8 AudioStreamPreviewGenerator::_getv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* AudioStreamPreviewGenerator::_setv(StringName const&, Variant const&) */
   undefined8 AudioStreamPreviewGenerator::_setv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* AudioStreamPreviewGenerator::_property_can_revertv(StringName const&) const */
   undefined8 AudioStreamPreviewGenerator::_property_can_revertv(StringName *param_1) {
      return 0;
   }

   /* AudioStreamPreviewGenerator::_property_get_revertv(StringName const&, Variant&) const */
   undefined8 AudioStreamPreviewGenerator::_property_get_revertv(StringName *param_1, Variant *param_2) {
      return 0;
   }

   /* CallableCustomMethodPointer<AudioStreamPreviewGenerator, void,
   ObjectID>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID> *this) {
      return;
   }

   /* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::_gen_argument_type(int) const */
   undefined8 MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::_gen_argument_type(int param_1) {
      return 0x18;
   }

   /* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::get_argument_meta(int) const */
   undefined8 MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::get_argument_meta(int param_1) {
      return 0;
   }

   /* CallableCustomMethodPointer<AudioStreamPreviewGenerator, void,
   ObjectID>::get_argument_count(bool&) const */
   undefined8 CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID>::get_argument_count(CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID> *this, bool *param_1) {
      *param_1 = true;
      return 1;
   }

   /* CallableCustomMethodPointer<AudioStreamPreviewGenerator, void,
   ObjectID>::~CallableCustomMethodPointer() */
   void CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID> *this) {
      operator_delete(this, 0x48);
      return;
   }

   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      *(undefined***)this = &PTR__initialize_classv_00107730;
      Object::~Object((Object*)this);
      return;
   }

   /* RefCounted::~RefCounted() */
   void RefCounted::~RefCounted(RefCounted *this) {
      *(undefined***)this = &PTR__initialize_classv_00107730;
      Object::~Object((Object*)this);
      operator_delete(this, 0x180);
      return;
   }

   /* CallableCustomMethodPointerBase::get_method() const */
   void CallableCustomMethodPointerBase::get_method(void) {
      long in_RSI;
      StringName *in_RDI;
      StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
      return;
   }

   /* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::~MethodBindTR() */
   void MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00107c48;
      MethodBind::~MethodBind((MethodBind*)this);
      return;
   }

   /* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::~MethodBindTR() */
   void MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&> *this) {
      *(undefined***)this = &PTR__gen_argument_type_00107c48;
      MethodBind::~MethodBind((MethodBind*)this);
      operator_delete(this, 0x68);
      return;
   }

   /* AudioStreamPreviewGenerator::_validate_propertyv(PropertyInfo&) const */
   void AudioStreamPreviewGenerator::_validate_propertyv(PropertyInfo *param_1) {
      if ((code*)_GLOBAL_OFFSET_TABLE_ != Object::_validate_property) {
         Node::_validate_property(param_1);
         return;
      }

      return;
   }

   /* CallableCustomMethodPointer<AudioStreamPreviewGenerator, void, ObjectID>::get_object() const */
   undefined8 CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID>::get_object(CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID> *this) {
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
            goto LAB_001029dd;
         }

         ObjectDB::spin_lock._0_1_ = '\0';
         if (puVar4[1] != 0) {
            uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
            goto LAB_001029dd;
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      }

      uVar2 = 0;
      LAB_001029dd:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return uVar2;
   }

   /* AudioStreamPreviewGenerator::~AudioStreamPreviewGenerator() */
   void AudioStreamPreviewGenerator::~AudioStreamPreviewGenerator(AudioStreamPreviewGenerator *this) {
      uint uVar1;
      Object *pOVar2;
      char cVar3;
      long lVar4;
      void *pvVar5;
      *(undefined***)this = &PTR__initialize_classv_001079f0;
      pvVar5 = *(void**)( this + 0x410 );
      if (pvVar5 != (void*)0x0) {
         if (*(int*)( this + 0x434 ) != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 );
            if (uVar1 == 0) {
               *(undefined4*)( this + 0x434 ) = 0;
               *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
            }
 else {
               lVar4 = 0;
               do {
                  if (*(int*)( *(long*)( this + 0x418 ) + lVar4 ) != 0) {
                     pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                     *(int*)( *(long*)( this + 0x418 ) + lVar4 ) = 0;
                     for (int i = 0; i < 3; i++) {
                        if (*(long*)( (long)pvVar5 + ( -8*i + 40 ) ) != 0) {
                           cVar3 = RefCounted::unreference();
                           if (cVar3 != '\0') {
                              pOVar2 = *(Object**)( (long)pvVar5 + ( -8*i + 40 ) );
                              cVar3 = predelete_handler(pOVar2);
                              if (cVar3 != '\0') {
                                 ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
                                 Memory::free_static(pOVar2, false);
                              }

                           }

                        }

                     }

                     Memory::free_static(pvVar5, false);
                     pvVar5 = *(void**)( this + 0x410 );
                     *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
                  }

                  lVar4 = lVar4 + 4;
               }
 while ( lVar4 != (ulong)uVar1 << 2 );
               *(undefined4*)( this + 0x434 ) = 0;
               *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
               if (pvVar5 == (void*)0x0) goto LAB_00102b53;
            }

         }

         Memory::free_static(pvVar5, false);
         Memory::free_static(*(void**)( this + 0x418 ), false);
      }

      LAB_00102b53:Node::~Node((Node*)this);
      return;
   }

   /* AudioStreamPreviewGenerator::~AudioStreamPreviewGenerator() */
   void AudioStreamPreviewGenerator::~AudioStreamPreviewGenerator(AudioStreamPreviewGenerator *this) {
      uint uVar1;
      Object *pOVar2;
      char cVar3;
      long lVar4;
      void *pvVar5;
      *(undefined***)this = &PTR__initialize_classv_001079f0;
      pvVar5 = *(void**)( this + 0x410 );
      if (pvVar5 != (void*)0x0) {
         if (*(int*)( this + 0x434 ) != 0) {
            uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x430 ) * 4 );
            if (uVar1 == 0) {
               *(undefined4*)( this + 0x434 ) = 0;
               *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
            }
 else {
               lVar4 = 0;
               do {
                  if (*(int*)( *(long*)( this + 0x418 ) + lVar4 ) != 0) {
                     pvVar5 = *(void**)( (long)pvVar5 + lVar4 * 2 );
                     *(int*)( *(long*)( this + 0x418 ) + lVar4 ) = 0;
                     for (int i = 0; i < 3; i++) {
                        if (*(long*)( (long)pvVar5 + ( -8*i + 40 ) ) != 0) {
                           cVar3 = RefCounted::unreference();
                           if (cVar3 != '\0') {
                              pOVar2 = *(Object**)( (long)pvVar5 + ( -8*i + 40 ) );
                              cVar3 = predelete_handler(pOVar2);
                              if (cVar3 != '\0') {
                                 ( **(code**)( *(long*)pOVar2 + 320 ) )(pOVar2);
                                 Memory::free_static(pOVar2, false);
                              }

                           }

                        }

                     }

                     Memory::free_static(pvVar5, false);
                     pvVar5 = *(void**)( this + 0x410 );
                     *(undefined8*)( (long)pvVar5 + lVar4 * 2 ) = 0;
                  }

                  lVar4 = lVar4 + 4;
               }
 while ( lVar4 != (ulong)uVar1 << 2 );
               *(undefined4*)( this + 0x434 ) = 0;
               *(undefined1(*) [16])( this + 0x420 ) = (undefined1[16])0x0;
               if (pvVar5 == (void*)0x0) goto LAB_00102d33;
            }

         }

         Memory::free_static(pvVar5, false);
         Memory::free_static(*(void**)( this + 0x418 ), false);
      }

      LAB_00102d33:Node::~Node((Node*)this);
      operator_delete(this, 0x438);
      return;
   }

   /* CallableCustomMethodPointerBase::get_as_text() const */
   void CallableCustomMethodPointerBase::get_as_text(void) {
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

   /* AudioStreamPreview::~AudioStreamPreview() */
   void AudioStreamPreview::~AudioStreamPreview(AudioStreamPreview *this) {
      long *plVar1;
      long lVar2;
      *(undefined***)this = &PTR__initialize_classv_00107890;
      if (*(long*)( this + 0x188 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x188 );
            *(undefined8*)( this + 0x188 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined***)this = &PTR__initialize_classv_00107730;
      Object::~Object((Object*)this);
      return;
   }

   /* AudioStreamPreviewGenerator::_notificationv(int, bool) */
   void AudioStreamPreviewGenerator::_notificationv(AudioStreamPreviewGenerator *this, int param_1, bool param_2) {
      int iVar1;
      iVar1 = (int)this;
      if (param_2) {
         if (param_1 == 0x11) {
            _notification(iVar1);
            if ((code*)PTR__notification_0010b008 != Object::_notification) goto LAB_00103088;
         }
 else if ((code*)PTR__notification_0010b008 != Object::_notification) {
            LAB_00103088:Node::_notification(iVar1);
            return;
         }

      }
 else {
         if ((code*)PTR__notification_0010b008 != Object::_notification) {
            Node::_notification(iVar1);
         }

         if (param_1 == 0x11) {
            _notification(iVar1);
            return;
         }

      }

      return;
   }

   /* AudioStreamPreview::~AudioStreamPreview() */
   void AudioStreamPreview::~AudioStreamPreview(AudioStreamPreview *this) {
      long *plVar1;
      long lVar2;
      *(undefined***)this = &PTR__initialize_classv_00107890;
      if (*(long*)( this + 0x188 ) != 0) {
         LOCK();
         plVar1 = (long*)( *(long*)( this + 0x188 ) + -0x10 );
         *plVar1 = *plVar1 + -1;
         UNLOCK();
         if (*plVar1 == 0) {
            lVar2 = *(long*)( this + 0x188 );
            *(undefined8*)( this + 0x188 ) = 0;
            Memory::free_static((void*)( lVar2 + -0x10 ), false);
         }

      }

      *(undefined***)this = &PTR__initialize_classv_00107730;
      Object::~Object((Object*)this);
      operator_delete(this, 0x1a0);
      return;
   }

   /* AudioStreamPreviewGenerator::_get_class_namev() const */
   undefined8 *AudioStreamPreviewGenerator::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_001031b3:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001031b3;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPreviewGenerator");
            goto LAB_0010321e;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPreviewGenerator");
      LAB_0010321e:return &_get_class_namev();
   }

   /* AudioStreamPreview::_get_class_namev() const */
   undefined8 *AudioStreamPreview::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_001032a3:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_001032a3;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPreview");
            goto LAB_0010330e;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "AudioStreamPreview");
      LAB_0010330e:return &_get_class_namev();
   }

   /* RefCounted::_get_class_namev() const */
   undefined8 *RefCounted::_get_class_namev(void) {
      int iVar1;
      if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
         _get_class_namev()
         __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
         __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
      }

      if (_get_class_namev()::_class_name_static != 0) {
         if (*(long*)( _get_class_namev() ) != 0) {
            LAB_00103383:return &_get_class_namev();
         }

         if (*(long*)( _get_class_namev() ) != 0) {
            if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00103383;
            StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
            goto LAB_001033ee;
         }

      }

      StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "RefCounted");
      LAB_001033ee:return &_get_class_namev();
   }

   /* String::parse_latin1(char const*) */
   void String::parse_latin1(String *this, char *param_1) {
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

   /* AudioStreamPreviewGenerator::Preview::TEMPNAMEPLACEHOLDERVALUE(AudioStreamPreviewGenerator::Preview
   const&) */
   void AudioStreamPreviewGenerator::Preview::operator =(Preview *this, Preview *param_1) {
      Object *pOVar1;
      Object *pOVar2;
      char cVar3;
      pOVar1 = *(Object**)param_1;
      pOVar2 = *(Object**)this;
      if (pOVar1 != pOVar2) {
         *(Object**)this = pOVar1;
         if (pOVar1 != (Object*)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *(undefined8*)this = 0;
            }

         }

         if (pOVar2 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }

      pOVar1 = *(Object**)( param_1 + 8 );
      pOVar2 = *(Object**)( this + 8 );
      if (pOVar1 != pOVar2) {
         *(Object**)( this + 8 ) = pOVar1;
         if (pOVar1 != (Object*)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *(undefined8*)( this + 8 ) = 0;
            }

         }

         if (pOVar2 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }

      pOVar1 = *(Object**)( param_1 + 0x10 );
      pOVar2 = *(Object**)( this + 0x10 );
      if (pOVar1 != pOVar2) {
         *(Object**)( this + 0x10 ) = pOVar1;
         if (pOVar1 != (Object*)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *(undefined8*)( this + 0x10 ) = 0;
            }

         }

         if (pOVar2 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }

      this[0x18] = ( Preview )(this[0x18] != (Preview)0x0);
      *(undefined8*)( this + 0x20 ) = *(undefined8*)( param_1 + 0x20 );
      *(undefined8*)( this + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
      return;
   }

   /* AudioStreamPreviewGenerator::Preview::Preview(AudioStreamPreviewGenerator::Preview const&) */
   void AudioStreamPreviewGenerator::Preview::Preview(Preview *this, Preview *param_1) {
      Object *pOVar1;
      Object *pOVar2;
      char cVar3;
      *(undefined8*)( this + 0x10 ) = 0;
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      this[0x18] = (Preview)0x0;
      *(undefined8*)( this + 0x20 ) = 0;
      *(undefined8*)( this + 0x28 ) = 0;
      pOVar1 = *(Object**)this;
      pOVar2 = *(Object**)param_1;
      if (pOVar2 != pOVar1) {
         *(Object**)this = pOVar2;
         if (pOVar2 != (Object*)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *(undefined8*)this = 0;
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

      pOVar1 = *(Object**)( param_1 + 8 );
      pOVar2 = *(Object**)( this + 8 );
      if (pOVar1 != pOVar2) {
         *(Object**)( this + 8 ) = pOVar1;
         if (pOVar1 != (Object*)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *(undefined8*)( this + 8 ) = 0;
            }

         }

         if (pOVar2 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }

      pOVar1 = *(Object**)( param_1 + 0x10 );
      pOVar2 = *(Object**)( this + 0x10 );
      if (pOVar1 != pOVar2) {
         *(Object**)( this + 0x10 ) = pOVar1;
         if (pOVar1 != (Object*)0x0) {
            cVar3 = RefCounted::reference();
            if (cVar3 == '\0') {
               *(undefined8*)( this + 0x10 ) = 0;
            }

         }

         if (pOVar2 != (Object*)0x0) {
            cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }

      this[0x18] = ( Preview )(this[0x18] != (Preview)0x0);
      *(undefined8*)( this + 0x20 ) = *(undefined8*)( param_1 + 0x20 );
      *(undefined8*)( this + 0x28 ) = *(undefined8*)( param_1 + 0x28 );
      return;
   }

   /* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
   /* HashMap<ObjectID, AudioStreamPreviewGenerator::Preview, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   AudioStreamPreviewGenerator::Preview> > >::operator[](ObjectID const&) */
   Preview * __thiscallHashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>>::operator [](HashMap<ObjectID,AudioStreamPreviewGenerator::Preview,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,AudioStreamPreviewGenerator::Preview>>> * this, ObjectID * param_1);
   {
      uint *puVar1;
      undefined8 *puVar2;
      uint uVar3;
      void *pvVar4;
      void *__s;
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
      undefined1 auVar15[16];
      undefined1 auVar16[16];
      undefined1 auVar17[16];
      undefined1 auVar18[16];
      undefined1 auVar19[16];
      undefined1 auVar20[16];
      undefined1 auVar21[16];
      undefined1 auVar22[16];
      Object *pOVar23;
      char cVar24;
      ulong uVar25;
      undefined8 uVar26;
      void *__s_00;
      undefined8 *puVar27;
      void *pvVar28;
      int iVar29;
      long lVar30;
      long lVar31;
      uint uVar32;
      ulong uVar33;
      uint uVar34;
      undefined8 uVar35;
      ulong uVar36;
      uint uVar37;
      uint uVar38;
      undefined8 *puVar39;
      long in_FS_OFFSET;
      uint local_118;
      Preview *local_f8;
      uint local_c0;
      uint local_bc;
      undefined1 local_b8[16];
      Object *local_a8;
      undefined1 local_a0;
      undefined8 local_98;
      undefined8 local_90;
      undefined1 local_88[16];
      undefined8 local_78;
      Object *local_70;
      Object *local_68;
      Object *local_60;
      long local_40;
      local_40 = *(long*)( in_FS_OFFSET + 0x28 );
      local_c0 = 0;
      cVar24 = _lookup_pos(this, *(ObjectID**)param_1, &local_c0);
      if (cVar24 != '\0') {
         local_f8 = (Preview*)( *(long*)( *(long*)( this + 8 ) + (ulong)local_c0 * 8 ) + 0x18 );
         goto LAB_001038a7;
      }

      local_a8 = (Object*)0x0;
      local_b8 = (undefined1[16])0x0;
      local_a0 = 0;
      local_98 = 0;
      local_90 = 0;
      uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (*(long*)( this + 8 ) == 0) {
         uVar33 = (ulong)uVar32;
         uVar25 = uVar33 * 4;
         uVar36 = uVar33 * 8;
         uVar26 = Memory::alloc_static(uVar25, false);
         *(undefined8*)( this + 0x10 ) = uVar26;
         pvVar28 = (void*)Memory::alloc_static(uVar36, false);
         *(void**)( this + 8 ) = pvVar28;
         if (uVar32 != 0) {
            pvVar4 = *(void**)( this + 0x10 );
            if (( pvVar4 < (void*)( (long)pvVar28 + uVar36 ) ) && ( pvVar28 < (void*)( (long)pvVar4 + uVar25 ) )) {
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
               memset(pvVar28, 0, uVar36);
            }

         }

      }

      local_bc = 0;
      cVar24 = _lookup_pos(this, *(ObjectID**)param_1, &local_bc);
      if (cVar24 == '\0') {
         if ((float)uVar32 * __LC22 < (float)( *(int*)( this + 0x2c ) + 1 )) {
            uVar32 = *(uint*)( this + 0x28 );
            if (uVar32 == 0x1c) {
               _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
               local_f8 = (Preview*)0x18;
               goto LAB_00103ddc;
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
            uVar36 = uVar33 * 8;
            pvVar4 = *(void**)( this + 0x10 );
            uVar26 = Memory::alloc_static(uVar25, false);
            *(undefined8*)( this + 0x10 ) = uVar26;
            __s_00 = (void*)Memory::alloc_static(uVar36, false);
            *(void**)( this + 8 ) = __s_00;
            if (uVar32 != 0) {
               __s = *(void**)( this + 0x10 );
               if (( __s < (void*)( (long)__s_00 + uVar36 ) ) && ( __s_00 < (void*)( (long)__s + uVar25 ) )) {
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
                  memset(__s_00, 0, uVar36);
               }

            }

            if (uVar3 != 0) {
               uVar25 = 0;
               do {
                  uVar32 = *(uint*)( (long)pvVar4 + uVar25 * 4 );
                  if (uVar32 != 0) {
                     lVar5 = *(long*)( this + 0x10 );
                     uVar37 = 0;
                     uVar34 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
                     uVar36 = CONCAT44(0, uVar34);
                     lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = (ulong)uVar32 * lVar6;
                     auVar15._8_8_ = 0;
                     auVar15._0_8_ = uVar36;
                     lVar30 = SUB168(auVar7 * auVar15, 8);
                     puVar1 = (uint*)( lVar5 + lVar30 * 4 );
                     iVar29 = SUB164(auVar7 * auVar15, 8);
                     uVar38 = *puVar1;
                     uVar26 = *(undefined8*)( (long)pvVar28 + uVar25 * 8 );
                     while (uVar38 != 0) {
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = (ulong)uVar38 * lVar6;
                        auVar16._8_8_ = 0;
                        auVar16._0_8_ = uVar36;
                        auVar9._8_8_ = 0;
                        auVar9._0_8_ = ( ulong )(( iVar29 + uVar34 ) - SUB164(auVar8 * auVar16, 8)) * lVar6;
                        auVar17._8_8_ = 0;
                        auVar17._0_8_ = uVar36;
                        local_118 = SUB164(auVar9 * auVar17, 8);
                        uVar35 = uVar26;
                        if (local_118 < uVar37) {
                           *puVar1 = uVar32;
                           puVar27 = (undefined8*)( (long)__s_00 + lVar30 * 8 );
                           uVar35 = *puVar27;
                           *puVar27 = uVar26;
                           uVar32 = uVar38;
                           uVar37 = local_118;
                        }

                        uVar37 = uVar37 + 1;
                        auVar10._8_8_ = 0;
                        auVar10._0_8_ = ( ulong )(iVar29 + 1) * lVar6;
                        auVar18._8_8_ = 0;
                        auVar18._0_8_ = uVar36;
                        lVar30 = SUB168(auVar10 * auVar18, 8);
                        puVar1 = (uint*)( lVar5 + lVar30 * 4 );
                        iVar29 = SUB164(auVar10 * auVar18, 8);
                        uVar26 = uVar35;
                        uVar38 = *puVar1;
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
            }

         }

         local_78 = *(undefined8*)param_1;
         local_88 = (undefined1[16])0x0;
         AudioStreamPreviewGenerator::Preview::Preview((Preview*)&local_70, (Preview*)local_b8);
         puVar27 = (undefined8*)operator_new(0x48, "");
         *puVar27 = local_88._0_8_;
         puVar27[1] = local_88._8_8_;
         puVar27[2] = local_78;
         local_f8 = (Preview*)( puVar27 + 3 );
         AudioStreamPreviewGenerator::Preview::Preview(local_f8, (Preview*)&local_70);
         if (( ( local_60 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)local_60 + 0x140 ))(local_60);
         Memory::free_static(local_60, false);
      }

      if (( ( local_68 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)local_68 + 0x140 ))(local_68);
      Memory::free_static(local_68, false);
   }

   if (( ( local_70 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)local_70 + 0x140 ))(local_70);
   Memory::free_static(local_70, false);
}
puVar39 = *(undefined8**)( this + 0x20 );if (puVar39 == (undefined8*)0x0) {
   *(undefined8**)( this + 0x18 ) = puVar27;
}
 else {
   *puVar39 = puVar27;
   puVar27[1] = puVar39;
}
lVar5 = *(long*)param_1;lVar6 = *(long*)( this + 0x10 );*(undefined8**)( this + 0x20 ) = puVar27;uVar25 = lVar5 * 0x3ffff - 1;uVar25 = ( uVar25 ^ uVar25 >> 0x1f ) * 0x15;uVar25 = ( uVar25 ^ uVar25 >> 0xb ) * 0x41;uVar25 = uVar25 >> 0x16 ^ uVar25;uVar36 = uVar25 & 0xffffffff;if ((int)uVar25 == 0) {
   uVar36 = 1;
}
uVar38 = 0;uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar25 = CONCAT44(0, uVar32);uVar34 = (uint)uVar36;lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar11._8_8_ = 0;auVar11._0_8_ = uVar36 * lVar5;auVar19._8_8_ = 0;auVar19._0_8_ = uVar25;lVar31 = SUB168(auVar11 * auVar19, 8);lVar30 = *(long*)( this + 8 );puVar1 = (uint*)( lVar6 + lVar31 * 4 );iVar29 = SUB164(auVar11 * auVar19, 8);uVar3 = *puVar1;while (uVar3 != 0) {
   auVar12._8_8_ = 0;
   auVar12._0_8_ = (ulong)uVar3 * lVar5;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar25;
   auVar13._8_8_ = 0;
   auVar13._0_8_ = ( ulong )(( uVar32 + iVar29 ) - SUB164(auVar12 * auVar20, 8)) * lVar5;
   auVar21._8_8_ = 0;
   auVar21._0_8_ = uVar25;
   local_118 = SUB164(auVar13 * auVar21, 8);
   puVar39 = puVar27;
   if (local_118 < uVar38) {
      *puVar1 = (uint)uVar36;
      uVar36 = (ulong)uVar3;
      puVar2 = (undefined8*)( lVar30 + lVar31 * 8 );
      puVar39 = (undefined8*)*puVar2;
      *puVar2 = puVar27;
      uVar38 = local_118;
   }

   uVar34 = (uint)uVar36;
   uVar38 = uVar38 + 1;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(iVar29 + 1) * lVar5;
   auVar22._8_8_ = 0;
   auVar22._0_8_ = uVar25;
   lVar31 = SUB168(auVar14 * auVar22, 8);
   puVar1 = (uint*)( lVar6 + lVar31 * 4 );
   iVar29 = SUB164(auVar14 * auVar22, 8);
   puVar27 = puVar39;
   uVar3 = *puVar1;
}
;*(undefined8**)( lVar30 + lVar31 * 8 ) = puVar27;*puVar1 = uVar34;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;}
  else{
   uVar25 = (ulong)local_bc;
   AudioStreamPreviewGenerator::Preview::operator =((Preview*)( *(long*)( *(long*)( this + 8 ) + uVar25 * 8 ) + 0x18 ), (Preview*)local_b8);
   local_f8 = (Preview*)( *(long*)( *(long*)( this + 8 ) + uVar25 * 8 ) + 0x18 );
}
LAB_00103ddc:if (( ( local_a8 != (Object*)0x0 ) && ( cVar24 = RefCounted::unreference() ),pOVar23 = local_a8,cVar24 != '\0' )) &&( cVar24 = cVar24 != '\0' )(**(code**)( *(long*)pOVar23 + 0x140 ))(pOVar23);Memory::free_static(pOVar23, false);}if (( local_b8._8_8_ != 0 ) && ( cVar24 = cVar24 != '\0' )) {
   uVar26 = local_b8._8_8_;
   cVar24 = predelete_handler((Object*)local_b8._8_8_);
   if (cVar24 != '\0') {
      ( **(code**)( *(long*)uVar26 + 0x140 ) )(uVar26);
      Memory::free_static((void*)uVar26, false);
   }

}
if (( local_b8._0_8_ != 0 ) && ( cVar24 = cVar24 != '\0' )) {
   uVar26 = local_b8._0_8_;
   cVar24 = predelete_handler((Object*)local_b8._0_8_);
   if (cVar24 != '\0') {
      ( **(code**)( *(long*)uVar26 + 0x140 ) )(uVar26);
      Memory::free_static((void*)uVar26, false);
   }

}
LAB_001038a7:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return local_f8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
/* CowData<char32_t>::_ref(CowData<char32_t> const&) */void CowData<char32_t>::_ref(CowData<char32_t> *this, CowData *param_1) {
   if (*(long*)this != *(long*)param_1) {
      _ref(this, param_1);
      return;
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* AudioStreamPreviewGenerator::get_class() const */void AudioStreamPreviewGenerator::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* AudioStreamPreview::get_class() const */void AudioStreamPreview::get_class(void) {
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
            CowData<char32_t>::_ref((CowData<char32_t>*)in_RDI, (CowData*)( lVar2 + 0x10 ));
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
/* Object::is_class(String const&) const */ulong Object::is_class(Object *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   uint uVar4;
   ulong uVar5;
   long in_FS_OFFSET;
   long local_50;
   char *local_48;
   size_t local_40;
   long local_30;
   lVar2 = *(long*)( this + 8 );
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   do {
      if (lVar2 == 0) {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = String::operator ==(param_1, "Object");
            return uVar5;
         }

         LAB_00104437:/* WARNING: Subroutine does not return */__stack_chk_fail();
      }

      lVar3 = *(long*)( lVar2 + 0x20 );
      if (lVar3 == 0) {
         local_50 = 0;
      }
 else {
         __s = *(char**)( lVar3 + 8 );
         local_50 = 0;
         if (__s == (char*)0x0) {
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_50, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_40 = strlen(__s);
            local_48 = __s;
            String::parse_latin1((StrRange*)&local_50);
         }

      }

      uVar4 = String::operator ==(param_1, (String*)&local_50);
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

      if ((char)uVar4 != '\0') {
         if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
            return (ulong)uVar4;
         }

         goto LAB_00104437;
      }

      lVar2 = *(long*)( lVar2 + 8 );
   }
 while ( true );
}
/* CallableCustomMethodPointer<AudioStreamPreviewGenerator, void, ObjectID>::call(Variant const**,
   int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID>::call(CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   char cVar3;
   undefined8 uVar4;
   uint uVar5;
   ulong *puVar6;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar7;
   CowData<char32_t> local_50[8];
   CowData<char32_t> local_48[8];
   undefined8 local_40;
   String local_38[8];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar5 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar5 < (uint)ObjectDB::slot_max) {
      while (true) {
         local_38[0] = (String)0x0;
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
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar6 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00104699;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar6[1] == 0) goto LAB_00104699;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 2) {
         if (param_2 != 0) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar3 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC33;
            if (cVar3 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            uVar4 = Variant::operator_cast_to_ObjectID(*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x00104648. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), uVar4);
               return;
            }

            goto LAB_0010474a;
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
      LAB_00104699:local_40 = 0;
      String::parse_latin1((String*)&local_40, "\', can\'t call method.");
      uitos((ulong)local_50);
      operator+((char *)
      local_48,(String*)"Invalid Object id \'";
      String::operator +(local_38, (String*)local_48);
      _err_print_error(&_LC32, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", local_38, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)local_38);
      CowData<char32_t>::_unref(local_48);
      CowData<char32_t>::_unref(local_50);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010474a:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* AudioStreamPreviewGenerator::is_class(String const&) const */undefined8 AudioStreamPreviewGenerator::is_class(AudioStreamPreviewGenerator *this, String *param_1) {
   long lVar1;
   char *pcVar2;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar3 = *(long*)( lVar1 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         }
 else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00104833;
   }

   cVar4 = String::operator ==(param_1, "AudioStreamPreviewGenerator");
   if (cVar4 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00104833;
      }

      cVar4 = String::operator ==(param_1, "Node");
      if (cVar4 == '\0') {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar5 = Object::is_class((Object*)this, param_1);
            return uVar5;
         }

         goto LAB_0010493e;
      }

   }

   LAB_00104833:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return 1;
   }

   LAB_0010493e:/* WARNING: Subroutine does not return */__stack_chk_fail();
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
      if ((code*)PTR__bind_methods_0010b010 != Object::_bind_methods) {
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
/* AudioStreamPreview::_initialize_classv() */void AudioStreamPreview::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (RefCounted::initialize_class() == '\0') {
         Object::initialize_class();
         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Object");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "RefCounted");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if ((code*)PTR__bind_methods_0010b010 != Object::_bind_methods) {
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
      local_48 = "AudioStreamPreview";
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
      initialize_class()::initialized =
      '\x01';
   }

   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 0x18 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x3c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x38 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x20 ) + lVar2 ) != 0) {
                  pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
                  *(int*)( *(long*)( this + 0x20 ) + lVar2 ) = 0;
                  if (Variant::needs_deinit[*(int*)( (long)pvVar3 + 0x48 )] != '\0') {
                     Variant::_clear_internal();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x38 ));
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar3 + 0x28 ) != 0 )) {
                     StringName::unref();
                  }

                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x20 ));
                  CowData<char32_t>::_unref((CowData<char32_t>*)( (long)pvVar3 + 0x10 ));
                  Memory::free_static(pvVar3, false);
                  pvVar3 = *(void**)( this + 0x18 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x3c ) = 0;
            *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_00104d9f;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x20 ), false);
   }

   LAB_00104d9f:CowData<char32_t>::_unref((CowData<char32_t>*)this);
   return;
}
/* RefCounted::is_class(String const&) const */undefined8 RefCounted::is_class(RefCounted *this, String *param_1) {
   long lVar1;
   char *pcVar2;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   undefined8 local_60;
   char *local_58;
   size_t local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
      lVar3 = *(long*)( lVar1 + 0x20 );
      if (lVar3 == 0) {
         local_60 = 0;
      }
 else {
         pcVar2 = *(char**)( lVar3 + 8 );
         local_60 = 0;
         if (pcVar2 == (char*)0x0) {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
         }
 else {
            local_50 = strlen(pcVar2);
            local_58 = pcVar2;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
      if (cVar4 != '\0') goto LAB_00104ed3;
   }

   cVar4 = String::operator ==(param_1, "RefCounted");
   if (cVar4 == '\0') {
      for (lVar1 = *(long*)( this + 8 ); lVar1 != 0; lVar1 = *(long*)( lVar1 + 8 )) {
         lVar3 = *(long*)( lVar1 + 0x20 );
         if (lVar3 == 0) {
            local_60 = 0;
         }
 else {
            pcVar2 = *(char**)( lVar3 + 8 );
            local_60 = 0;
            if (pcVar2 == (char*)0x0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }
 else {
               local_50 = strlen(pcVar2);
               local_58 = pcVar2;
               String::parse_latin1((StrRange*)&local_60);
            }

         }

         cVar4 = String::operator ==(param_1, (String*)&local_60);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (cVar4 != '\0') goto LAB_00104ed3;
      }

      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = String::operator ==(param_1, "Object");
         return uVar5;
      }

   }
 else {
      LAB_00104ed3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPreview::is_class(String const&) const */undefined8 AudioStreamPreview::is_class(AudioStreamPreview *this, String *param_1) {
   long *plVar1;
   long lVar2;
   char *__s;
   long lVar3;
   char cVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
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
            if (*(long*)( lVar3 + 0x10 ) != 0) {
               CowData<char32_t>::_ref((CowData<char32_t>*)&local_60, (CowData*)( lVar3 + 0x10 ));
            }

         }
 else {
            local_50 = strlen(__s);
            local_58 = __s;
            String::parse_latin1((StrRange*)&local_60);
         }

      }

      cVar4 = String::operator ==(param_1, (String*)&local_60);
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

      if (cVar4 != '\0') goto LAB_001050db;
   }

   cVar4 = String::operator ==(param_1, "AudioStreamPreview");
   if (cVar4 == '\0') {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar5 = RefCounted::is_class((RefCounted*)this, param_1);
         return uVar5;
      }

   }
 else {
      LAB_001050db:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }

   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* RefCounted::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void RefCounted::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
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
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
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

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* Node::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void Node::_get_property_listv(List *param_1, bool param_2) {
   undefined7 in_register_00000031;
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
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
   local_78 = &_LC34;
   local_88 = 0;
   local_90 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = &_LC34;
   local_98 = 0;
   local_70 = 4;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (undefined*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
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

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)CONCAT71(in_register_00000031, param_2), (PropertyInfo*)&local_78);
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
/* AudioStreamPreviewGenerator::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool)
   const */void AudioStreamPreviewGenerator::_get_property_listv(AudioStreamPreviewGenerator *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
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
   local_78 = "AudioStreamPreviewGenerator";
   local_70 = 0x1b;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPreviewGenerator";
   local_98 = 0;
   local_70 = 0x1b;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
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

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "AudioStreamPreviewGenerator", false);
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
/* AudioStreamPreview::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void AudioStreamPreview::_get_property_listv(AudioStreamPreview *this, List *param_1, bool param_2) {
   long in_FS_OFFSET;
   undefined8 local_98;
   undefined8 local_90;
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
   local_78 = "AudioStreamPreview";
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "AudioStreamPreview";
   local_98 = 0;
   local_70 = 0x12;
   String::parse_latin1((StrRange*)&local_98);
   local_78 = (char*)( (ulong)local_78 & 0xffffffff00000000 );
   local_70 = 0;
   CowData<char32_t>::_ref((CowData<char32_t>*)&local_70, (CowData*)&local_98);
   local_68 = 0;
   local_60 = 0;
   local_58 = 0;
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

   }
 else {
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   }

   List<PropertyInfo,DefaultAllocator>::push_back((List<PropertyInfo,DefaultAllocator>*)param_1, (PropertyInfo*)&local_78);
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

   StringName::StringName((StringName*)&local_78, "AudioStreamPreview", false);
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
/* Ref<AudioStreamPreview>::unref() */void Ref<AudioStreamPreview>::unref(Ref<AudioStreamPreview> *this) {
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
/* MethodBind* create_method_bind<AudioStreamPreviewGenerator, Ref<AudioStreamPreview>,
   Ref<AudioStream> const&>(Ref<AudioStreamPreview>
   (AudioStreamPreviewGenerator::*)(Ref<AudioStream> const&)) */MethodBind *create_method_bind<AudioStreamPreviewGenerator,Ref<AudioStreamPreview>,Ref<AudioStream>const&>(_func_Ref_Ref_ptr *param_1) {
   MethodBind *this;
   undefined8 in_RSI;
   long in_FS_OFFSET;
   undefined8 local_40;
   char *local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   this(MethodBind * operator_new(0x68, ""));
   MethodBind::MethodBind(this);
   *(_func_Ref_Ref_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_00107c48;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "AudioStreamPreviewGenerator";
   local_30 = 0x1b;
   String::parse_latin1((StrRange*)&local_40);
   StringName::StringName((StringName*)&local_38, (String*)&local_40, false);
   StringName::operator =((StringName*)( this + 0x18 ), (StringName*)&local_38);
   if (( StringName::configured != '\0' ) && ( local_38 != (char*)0x0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPreviewGenerator::_bind_methods() [clone .cold] */void AudioStreamPreviewGenerator::_bind_methods(void) {
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
/* AudioStreamPreviewGenerator::_initialize_classv() */void AudioStreamPreviewGenerator::_initialize_classv(void) {
   long in_FS_OFFSET;
   undefined8 local_60;
   long local_58;
   long local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (initialize_class() == '\0') {
      if (Node::initialize_class() == '\0') {
         Object::initialize_class();
         local_50 = 0;
         String::parse_latin1((String*)&local_50, "Object");
         StringName::StringName((StringName*)&local_48, (String*)&local_50, false);
         local_60 = 0;
         String::parse_latin1((String*)&local_60, "Node");
         StringName::StringName((StringName*)&local_58, (String*)&local_60, false);
         ClassDB::_add_class2((StringName*)&local_58, (StringName*)&local_48);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
            StringName::unref();
         }

         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if ((code*)PTR__bind_methods_0010b018 != Object::_bind_methods) {
            Node::_bind_methods();
         }

         Node::initialize_class()::initialized =
         '\x01';
      }

      local_48 = "Node";
      local_58 = 0;
      local_40 = 4;
      String::parse_latin1((StrRange*)&local_58);
      StringName::StringName((StringName*)&local_50, (String*)&local_58, false);
      local_48 = "AudioStreamPreviewGenerator";
      local_60 = 0;
      local_40 = 0x1b;
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
/* CowData<unsigned char>::_unref() */void CowData<unsigned_char>::_unref(CowData<unsigned_char> *this) {
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
/* CowData<AudioFrame>::_realloc(long) */undefined8 CowData<AudioFrame>::_realloc(CowData<AudioFrame> *this, long param_1) {
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
/* WARNING: Removing unreachable block (ram,0x00106268) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
   char cVar1;
   Variant *this;
   int iVar2;
   long in_FS_OFFSET;
   Array local_c0[8];
   undefined8 local_b8[8];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   Variant::Variant((Variant*)local_78, param_3);
   local_60 = 0;
   local_58 = (undefined1[16])0x0;
   Array::Array(local_c0);
   iVar2 = (int)local_c0;
   Array::resize(iVar2);
   this(Variant * Array::operator [](iVar2));
   Variant::operator =(this, (Variant*)local_78);
   String::sprintf((Array*)local_b8, param_2);
   *param_1 = local_b8[0];
   local_b8[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_b8);
   Array::~Array(local_c0);
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
/* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::ptrcall(Object*, void const**,
   void*) const */void MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::ptrcall(MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&> *this, Object *param_1, void **param_2, void *param_3) {
   long lVar1;
   char cVar2;
   Object *pOVar3;
   long *plVar4;
   Object *pOVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   long local_48;
   Object *local_40;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_38, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar4 = *(long**)( param_1 + 0x118 );
         if (plVar4 == (long*)0x0) {
            plVar4 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar4 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_38 == (Object*)*plVar4) {
         if (( StringName::configured != '\0' ) && ( local_38 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_40 = (Object*)0x0;
         String::parse_latin1((String*)&local_40, "Cannot call method bind \'%s\' on placeholder instance.");
         vformat<StringName>((StringName*)&local_38, (String*)&local_40, &local_48);
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_38, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_38);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_40);
         if (( StringName::configured != '\0' ) && ( local_48 != 0 )) {
            StringName::unref();
         }

         goto LAB_001065c2;
      }

      if (( StringName::configured != '\0' ) && ( local_38 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   /* WARNING: Load size is inaccurate */
   if (( (long*)*param_2 == (long*)0x0 ) || ( local_38 = **param_2 ),local_38 == (Object*)0x0) {
      LAB_0010652d:local_38 = (Object*)0x0;
   }
 else {
      cVar2 = RefCounted::init_ref();
      if (cVar2 == '\0') goto LAB_0010652d;
   }

   ( *pcVar6 )(&local_40, param_1 + lVar1, (StringName*)&local_38);
   if (local_40 == (Object*)0x0) {
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != (Object*)0x0) {
         *(undefined8*)param_3 = 0;
         goto LAB_001065f9;
      }

   }
 else {
      pOVar3 = (Object*)__dynamic_cast(local_40, &Object::typeinfo, &RefCounted::typeinfo, 0);
      /* WARNING: Load size is inaccurate */
      pOVar5 = *param_3;
      if (pOVar5 != pOVar3) {
         *(Object**)param_3 = pOVar3;
         if (pOVar3 == (Object*)0x0) {
            if (pOVar5 != (Object*)0x0) goto LAB_001065f9;
         }
 else {
            cVar2 = RefCounted::reference();
            if (cVar2 == '\0') {
               *(undefined8*)param_3 = 0;
            }

            if (pOVar5 != (Object*)0x0) {
               LAB_001065f9:cVar2 = RefCounted::unreference();
               if (cVar2 != '\0') {
                  cVar2 = predelete_handler(pOVar5);
                  if (cVar2 != '\0') {
                     ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                     Memory::free_static(pOVar5, false);
                  }

               }

            }

            if (local_40 == (Object*)0x0) goto LAB_001065ab;
         }

      }

      cVar2 = RefCounted::unreference();
      pOVar5 = local_40;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_40);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_001065ab:if (local_38 != (Object*)0x0) {
      cVar2 = RefCounted::unreference();
      pOVar5 = local_38;
      if (cVar2 != '\0') {
         cVar2 = predelete_handler(local_38);
         if (cVar2 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_001065c2:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::call(Object*, Variant const**,
   int, Callable::CallError&) const */Object *MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   Object *pOVar5;
   char cVar6;
   undefined4 uVar7;
   Object *pOVar8;
   long *plVar9;
   long lVar10;
   undefined4 in_register_00000014;
   long *plVar11;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar12;
   Variant *pVVar13;
   long in_FS_OFFSET;
   long local_60;
   Object *local_58;
   Object *local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar11 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar11 != (long*)0x0 ) && ( plVar11[1] != 0 ) ) && ( *(char*)( plVar11[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_50, (StringName*)( param_2 + 3 ));
      if (plVar11[1] == 0) {
         plVar9 = (long*)plVar11[0x23];
         if (plVar9 == (long*)0x0) {
            plVar9 = (long*)( **(code**)( *plVar11 + 0x40 ) )(plVar11);
         }

      }
 else {
         plVar9 = (long*)( plVar11[1] + 0x20 );
      }

      if (local_50 == (Object*)*plVar9) {
         if (( StringName::configured != '\0' ) && ( local_50 != (Object*)0x0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_58 = (Object*)0x0;
         String::parse_latin1((String*)&local_58, "Cannot call method bind \'%s\' on placeholder instance.");
         vformat<StringName>((StringName*)&local_50, (String*)&local_58, &local_60);
         _err_print_error(&_LC32, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_50, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         if (( StringName::configured != '\0' ) && ( local_60 != 0 )) {
            StringName::unref();
         }

         goto LAB_00106aa0;
      }

      if (( StringName::configured != '\0' ) && ( local_50 != (Object*)0x0 )) {
         StringName::unref();
      }

   }

   pVVar13 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (1 < in_R8D) {
      uVar7 = 3;
      LAB_00106a95:*in_R9 = uVar7;
      in_R9[2] = 1;
      goto LAB_00106aa0;
   }

   pVVar12 = param_2[5];
   if (pVVar12 == (Variant*)0x0) {
      if (in_R8D != 1) goto LAB_00106ae0;
      LAB_00106ad0:pVVar12 = *(Variant**)param_4;
   }
 else {
      lVar2 = *(long*)( pVVar12 + -8 );
      if ((int)lVar2 < (int)( in_R8D ^ 1 )) {
         LAB_00106ae0:uVar7 = 4;
         goto LAB_00106a95;
      }

      if (in_R8D == 1) goto LAB_00106ad0;
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

   cVar6 = Variant::can_convert_strict(*(undefined4*)pVVar12);
   uVar4 = _LC70;
   if (cVar6 == '\0') {
      *in_R9 = 2;
      *(undefined8*)( in_R9 + 1 ) = uVar4;
   }

   local_50 = (Object*)0x0;
   pOVar8 = (Object*)Variant::get_validated_object();
   pOVar5 = local_50;
   if (pOVar8 != local_50) {
      if (pOVar8 == (Object*)0x0) {
         if (local_50 != (Object*)0x0) {
            local_50 = (Object*)0x0;
            LAB_00106bfd:cVar6 = RefCounted::unreference();
            if (cVar6 != '\0') {
               cVar6 = predelete_handler(pOVar5);
               if (cVar6 != '\0') {
                  ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
                  Memory::free_static(pOVar5, false);
               }

            }

         }

      }
 else {
         pOVar8 = (Object*)__dynamic_cast(pOVar8, &Object::typeinfo, &AudioStream::typeinfo, 0);
         if (pOVar5 != pOVar8) {
            local_50 = pOVar8;
            if (pOVar8 != (Object*)0x0) {
               cVar6 = RefCounted::reference();
               if (cVar6 == '\0') {
                  local_50 = (Object*)0x0;
               }

            }

            if (pOVar5 != (Object*)0x0) goto LAB_00106bfd;
         }

      }

   }

   ( *(code*)pVVar13 )(&local_58, (Variant*)( (long)plVar11 + (long)pVVar1 ), &local_50);
   Variant::Variant((Variant*)local_48, local_58);
   if (Variant::needs_deinit[*(int*)param_1] != '\0') {
      Variant::_clear_internal();
   }

   *(undefined4*)param_1 = local_48[0];
   *(undefined8*)( param_1 + 8 ) = local_40;
   *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   if (local_58 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_58;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_58);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   if (local_50 != (Object*)0x0) {
      cVar6 = RefCounted::unreference();
      pOVar5 = local_50;
      if (cVar6 != '\0') {
         cVar6 = predelete_handler(local_50);
         if (cVar6 != '\0') {
            ( **(code**)( *(long*)pOVar5 + 0x140 ) )(pOVar5);
            Memory::free_static(pOVar5, false);
         }

      }

   }

   LAB_00106aa0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::validated_call(MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   long lVar1;
   Object *pOVar2;
   char cVar3;
   Object *pOVar4;
   long *plVar5;
   code *pcVar6;
   long in_FS_OFFSET;
   Object *local_68;
   Object *local_60;
   long local_58;
   Object *local_50;
   int local_48[6];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 != (Object*)0x0 ) && ( *(long*)( param_1 + 8 ) != 0 ) ) && ( *(char*)( *(long*)( param_1 + 8 ) + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( this + 0x18 ));
      if (*(long*)( param_1 + 8 ) == 0) {
         plVar5 = *(long**)( param_1 + 0x118 );
         if (plVar5 == (long*)0x0) {
            plVar5 = (long*)( **(code**)( *(long*)param_1 + 0x40 ) )(param_1);
         }

      }
 else {
         plVar5 = (long*)( *(long*)( param_1 + 8 ) + 0x20 );
      }

      if (local_58 == *plVar5) {
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }

         MethodBind::get_name();
         local_60 = (Object*)0x0;
         String::parse_latin1((String*)&local_60, "Cannot call method bind \'%s\' on placeholder instance.");
         vformat<StringName>((StringName*)&local_58, (String*)&local_60, &local_68);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != (Object*)0x0 )) {
            StringName::unref();
         }

         goto LAB_00106e6f;
      }

      if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
         StringName::unref();
      }

   }

   pcVar6 = *(code**)( this + 0x58 );
   lVar1 = *(long*)( this + 0x60 );
   if (( (ulong)pcVar6 & 1 ) != 0) {
      pcVar6 = *(code**)( pcVar6 + *(long*)( param_1 + lVar1 ) + -1 );
   }

   Variant::Variant((Variant*)local_48, *(Object**)( *param_2 + 0x10 ));
   local_60 = (Object*)0x0;
   pOVar4 = (Object*)Variant::get_validated_object();
   pOVar2 = local_60;
   if (pOVar4 != local_60) {
      if (pOVar4 == (Object*)0x0) {
         if (local_60 != (Object*)0x0) {
            local_60 = (Object*)0x0;
            LAB_00106df8:cVar3 = RefCounted::unreference();
            if (cVar3 != '\0') {
               cVar3 = predelete_handler(pOVar2);
               if (cVar3 != '\0') {
                  ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
                  Memory::free_static(pOVar2, false);
               }

            }

         }

      }
 else {
         pOVar4 = (Object*)__dynamic_cast(pOVar4, &Object::typeinfo, &AudioStream::typeinfo, 0);
         if (pOVar2 != pOVar4) {
            local_60 = pOVar4;
            if (pOVar4 != (Object*)0x0) {
               cVar3 = RefCounted::reference();
               if (cVar3 == '\0') {
                  local_60 = (Object*)0x0;
               }

            }

            if (pOVar2 != (Object*)0x0) goto LAB_00106df8;
         }

      }

   }

   if (Variant::needs_deinit[local_48[0]] != '\0') {
      Variant::_clear_internal();
   }

   ( *pcVar6 )(&local_68, param_1 + lVar1, &local_60);
   if (local_68 == (Object*)0x0) {
      Variant::ObjData::unref();
   }
 else {
      local_58 = *(long*)( local_68 + 0x60 );
      local_50 = local_68;
      Variant::ObjData::ref((ObjData*)( param_3 + 8 ));
   }

   if (local_68 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_68);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)local_68 + 0x140 ) )(local_68);
            Memory::free_static(local_68, false);
         }

      }

   }

   if (local_60 != (Object*)0x0) {
      cVar3 = RefCounted::unreference();
      pOVar2 = local_60;
      if (cVar3 != '\0') {
         cVar3 = predelete_handler(local_60);
         if (cVar3 != '\0') {
            ( **(code**)( *(long*)pOVar2 + 0x140 ) )(pOVar2);
            Memory::free_static(pOVar2, false);
         }

      }

   }

   LAB_00106e6f:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* void call_get_argument_type_info_helper<Ref<AudioStream> const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Ref<AudioStream>const&>(int param_1, int *param_2, PropertyInfo *param_3) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   long lVar3;
   int iVar4;
   long in_FS_OFFSET;
   undefined8 local_88;
   long local_80;
   long local_78;
   long local_70;
   undefined4 local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar4 = *param_2;
   if (iVar4 != param_1) goto LAB_00107117;
   local_78 = 0;
   local_80 = 0;
   String::parse_latin1((String*)&local_80, "AudioStream");
   local_88 = 0;
   local_68 = 0x18;
   local_50 = 0x11;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_001072cd:local_40 = 6;
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
 else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 == 0x11) goto LAB_001072cd;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
   if (( StringName::configured != '\0' ) && ( local_78 != 0 )) {
      StringName::unref();
   }

   *(undefined4*)param_3 = local_68;
   if (*(long*)( param_3 + 8 ) != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 8 ));
      uVar2 = local_60._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *(undefined8*)( param_3 + 8 ) = uVar2;
   }

   if (*(long*)( param_3 + 0x10 ) != local_60._8_8_) {
      StringName::unref();
      uVar2 = local_60._8_8_;
      local_60._8_8_ = 0;
      *(undefined8*)( param_3 + 0x10 ) = uVar2;
   }

   *(int*)( param_3 + 0x18 ) = local_50;
   if (*(long*)( param_3 + 0x20 ) != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_3 + 0x20 ));
      lVar3 = local_48;
      local_48 = 0;
      *(long*)( param_3 + 0x20 ) = lVar3;
   }

   *(undefined4*)( param_3 + 0x28 ) = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }

   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   iVar4 = *param_2;
   LAB_00107117:*param_2 = iVar4 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::_gen_argument_type_info(int)
   const */undefined4 *MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined8 uVar2;
   undefined8 uVar3;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar4;
   long in_FS_OFFSET;
   undefined8 local_80;
   undefined8 local_78;
   ulong local_70;
   char *local_68;
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   undefined4 local_40;
   long local_30;
   puVar4 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX == 0) {
      local_68 = (char*)0x0;
      local_50 = 0;
      local_48 = 0;
      local_40 = 6;
      local_70 = local_70 & 0xffffffff00000000;
      local_60 = (undefined1[16])0x0;
      call_get_argument_type_info_helper<Ref<AudioStream>const&>(0, (int*)&local_70, (PropertyInfo*)&local_68);
      uVar2 = local_60._0_8_;
      uVar3 = local_60._8_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_60._8_8_;
      local_60 = auVar1 << 0x40;
      *puVar4 = local_68._0_4_;
      *(undefined8*)( puVar4 + 2 ) = uVar2;
      *(undefined8*)( puVar4 + 4 ) = uVar3;
      puVar4[6] = (undefined4)local_50;
      *(undefined8*)( puVar4 + 8 ) = local_48;
      puVar4[10] = local_40;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   }
 else {
      local_70 = 0;
      local_78 = 0;
      local_68 = "AudioStreamPreview";
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 0x12;
      String::parse_latin1((StrRange*)&local_78);
      *puVar4 = 0x18;
      *(undefined8*)( puVar4 + 2 ) = 0;
      local_80 = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 2 ), (CowData*)&local_80);
      *(undefined8*)( puVar4 + 4 ) = 0;
      puVar4[6] = 0x11;
      *(undefined8*)( puVar4 + 8 ) = 0;
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar4 + 8 ), (CowData*)&local_78);
      puVar4[10] = 6;
      if (puVar4[6] == 0x11) {
         StringName::StringName((StringName*)&local_68, (String*)( puVar4 + 8 ), false);
         if (*(char**)( puVar4 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

         }
 else {
            StringName::unref();
            *(char**)( puVar4 + 4 ) = local_68;
         }

      }
 else {
         StringName::operator =((StringName*)( puVar4 + 4 ), (StringName*)&local_70);
      }

      CowData<char32_t>::_unref((CowData<char32_t>*)&local_80);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      if (( StringName::configured != '\0' ) && ( local_70 != 0 )) {
         StringName::unref();
      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return puVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* AudioStreamPreview::get_length() const */void AudioStreamPreview::_GLOBAL__sub_I_get_length(void) {
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
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<PropertyInfo, DefaultAllocator>::~List() */void List<PropertyInfo,DefaultAllocator>::~List(List<PropertyInfo,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* PropertyListHelper::~PropertyListHelper() */void PropertyListHelper::~PropertyListHelper(PropertyListHelper *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AudioStreamPreviewGenerator::Preview::Preview(AudioStreamPreviewGenerator::Preview const&) */void AudioStreamPreviewGenerator::Preview::Preview(Preview *this, Preview *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AudioStreamPreview::~AudioStreamPreview() */void AudioStreamPreview::~AudioStreamPreview(AudioStreamPreview *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* AudioStreamPreviewGenerator::~AudioStreamPreviewGenerator() */void AudioStreamPreviewGenerator::~AudioStreamPreviewGenerator(AudioStreamPreviewGenerator *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Ref<AudioStreamPreview>, Ref<AudioStream> const&>::~MethodBindTR() */void MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&>::~MethodBindTR(MethodBindTR<Ref<AudioStreamPreview>,Ref<AudioStream>const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* RefCounted::~RefCounted() */void RefCounted::~RefCounted(RefCounted *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<AudioStreamPreviewGenerator, void,
   ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<AudioStreamPreviewGenerator,void,ObjectID> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}


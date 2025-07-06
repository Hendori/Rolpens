/* HashMap<unsigned long, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned long>,
   DefaultTypedAllocator<HashMapElement<unsigned long, int> > >::_lookup_pos(unsigned long const&,
   unsigned int&) const [clone .isra.0] */undefined8 HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::_lookup_pos(HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>> *this, ulong *param_1, uint *param_2) {
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
            if (( (uint)uVar13 == uVar14 ) && ( *(ulong**)( *(long*)( *(long*)( this + 8 ) + lVar12 * 8 ) + 0x10 ) == param_1 )) {
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
         } while ( uVar16 <= SUB164(auVar5 * auVar9, 8) );
         return 0;
      }
   }
   return 0;
}/* WorkerThreadPool::is_task_completed(long) const */byte WorkerThreadPool::is_task_completed(WorkerThreadPool *this, long param_1) {
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
   int iVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   byte bVar15;
   ulong uVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   iVar11 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x268 ));
   if (iVar11 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar11);
   }
   lVar1 = *(long*)( this + 0x370 );
   if (( lVar1 != 0 ) && ( *(int*)( this + 0x394 ) != 0 )) {
      uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x390 ) * 4 ));
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x390 ) * 8 );
      uVar12 = param_1 * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar16 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
         uVar16 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar16 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar17 = *(uint*)( *(long*)( this + 0x378 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar17 != 0) {
         uVar19 = 0;
         do {
            if (( (uint)uVar16 == uVar17 ) && ( *(long*)( *(long*)( lVar1 + lVar14 * 8 ) + 0x10 ) == param_1 )) {
               bVar15 = *(byte*)( *(long*)( *(long*)( lVar1 + (ulong)uVar13 * 8 ) + 0x18 ) + 0x98 ) & 1;
               goto LAB_0010027a;
            }
            uVar19 = uVar19 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar17 = *(uint*)( *(long*)( this + 0x378 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar17 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar17 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x390 ) * 4 ) + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,uVar19 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   bVar15 = 0;
   _err_print_error("is_task_completed", "core/object/worker_thread_pool.cpp", 0x168, "Method/function failed. Returning: false", "Invalid Task ID", 0, 0);
   LAB_0010027a:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x268 ));
   return bVar15;
}/* WorkerThreadPool::get_group_processed_element_count(long) const */undefined4 WorkerThreadPool::get_group_processed_element_count(WorkerThreadPool *this, long param_1) {
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
   int iVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   undefined4 uVar15;
   ulong uVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   iVar11 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x268 ));
   if (iVar11 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar11);
   }
   lVar1 = *(long*)( this + 0x400 );
   if (( lVar1 != 0 ) && ( *(int*)( this + 0x424 ) != 0 )) {
      uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x420 ) * 4 ));
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x420 ) * 8 );
      uVar12 = param_1 * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar16 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
         uVar16 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar16 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar17 = *(uint*)( *(long*)( this + 0x408 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar17 != 0) {
         uVar19 = 0;
         do {
            if (( (uint)uVar16 == uVar17 ) && ( *(long*)( *(long*)( lVar1 + lVar14 * 8 ) + 0x10 ) == param_1 )) {
               uVar15 = *(undefined4*)( *(long*)( *(long*)( lVar1 + (ulong)uVar13 * 8 ) + 0x18 ) + 0xc );
               goto LAB_0010041b;
            }
            uVar19 = uVar19 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar17 = *(uint*)( *(long*)( this + 0x408 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar17 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar17 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x420 ) * 4 ) + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,uVar19 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   uVar15 = 0;
   _err_print_error("get_group_processed_element_count", "core/object/worker_thread_pool.cpp", 0x2a0, "Method/function failed. Returning: 0", "Invalid Group ID", 0, 0);
   LAB_0010041b:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x268 ));
   return uVar15;
}/* WorkerThreadPool::is_group_task_completed(long) const */undefined8 WorkerThreadPool::is_group_task_completed(WorkerThreadPool *this, long param_1) {
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
   int iVar11;
   ulong uVar12;
   uint uVar13;
   long lVar14;
   ulong uVar15;
   undefined8 uVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   iVar11 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x268 ));
   if (iVar11 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar11);
   }
   lVar1 = *(long*)( this + 0x400 );
   if (( lVar1 != 0 ) && ( *(int*)( this + 0x424 ) != 0 )) {
      uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x420 ) * 4 ));
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x420 ) * 8 );
      uVar12 = param_1 * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar15 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
         uVar15 = 1;
      }
      auVar3._8_8_ = 0;
      auVar3._0_8_ = uVar15 * lVar2;
      auVar7._8_8_ = 0;
      auVar7._0_8_ = uVar18;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar17 = *(uint*)( *(long*)( this + 0x408 ) + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar17 != 0) {
         uVar19 = 0;
         do {
            if (( (uint)uVar15 == uVar17 ) && ( *(long*)( *(long*)( lVar1 + lVar14 * 8 ) + 0x10 ) == param_1 )) {
               uVar16 = CONCAT71(( int7 )(uVar15 >> 8), *(char*)( *(long*)( *(long*)( lVar1 + (ulong)uVar13 * 8 ) + 0x18 ) + 0x78 ) != '\0');
               goto LAB_001005ca;
            }
            uVar19 = uVar19 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar18;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar17 = *(uint*)( *(long*)( this + 0x408 ) + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar17 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar17 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar18,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x420 ) * 4 ) + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,uVar19 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   uVar16 = 0;
   _err_print_error("is_group_task_completed", "core/object/worker_thread_pool.cpp", 0x2a8, "Method/function failed. Returning: false", "Invalid Group ID", 0, 0);
   LAB_001005ca:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x268 ));
   return uVar16;
}/* HashMap<long, WorkerThreadPool::Task*, HashMapHasherDefault, HashMapComparatorDefault<long>,
   PagedAllocator<HashMapElement<long, WorkerThreadPool::Task*>, false, 1024u> >::erase(long const&)
   [clone .isra.0] */void HashMap<long,WorkerThreadPool::Task*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Task*>,false,1024u>>::erase(HashMap<long,WorkerThreadPool::Task*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Task*>,false,1024u>> *this, long *param_1) {
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
   long *plVar30;
   uint uVar31;
   ulong uVar32;
   ulong uVar33;
   ulong uVar34;
   ulong uVar35;
   uint uVar36;
   uint uVar37;
   uint *puVar38;
   lVar6 = *(long*)( this + 0x68 );
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x8c ) != 0 )) {
      lVar7 = *(long*)( this + 0x70 );
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 );
      uVar35 = CONCAT44(0, uVar5);
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x88 ) * 8 );
      uVar29 = *param_1 * 0x3ffff - 1;
      uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
      uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
      uVar29 = uVar29 >> 0x16 ^ uVar29;
      uVar33 = uVar29 & 0xffffffff;
      if ((int)uVar29 == 0) {
         uVar33 = 1;
      }
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar33 * lVar8;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar35;
      uVar29 = SUB168(auVar11 * auVar20, 8);
      uVar37 = *(uint*)( lVar7 + uVar29 * 4 );
      uVar34 = (ulong)SUB164(auVar11 * auVar20, 8);
      if (uVar37 != 0) {
         uVar36 = 0;
         do {
            auVar14._8_8_ = 0;
            auVar14._0_8_ = ( ulong )((int)uVar34 + 1) * lVar8;
            auVar23._8_8_ = 0;
            auVar23._0_8_ = uVar35;
            uVar32 = SUB168(auVar14 * auVar23, 8);
            uVar31 = SUB164(auVar14 * auVar23, 8);
            if (( (uint)uVar33 == uVar37 ) && ( *param_1 == *(long*)( *(long*)( lVar6 + uVar29 * 8 ) + 0x10 ) )) {
               puVar38 = (uint*)( lVar7 + uVar32 * 4 );
               uVar37 = *puVar38;
               if (( uVar37 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar37 * lVar8,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar31 + uVar5 ) - SUB164(auVar15 * auVar24, 8)) * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar35,uVar29 = (ulong)uVar31,uVar33 = uVar34,SUB164(auVar16 * auVar25, 8) != 0) {
                  while (true) {
                     uVar34 = uVar29;
                     puVar1 = (uint*)( lVar7 + uVar33 * 4 );
                     *puVar38 = *puVar1;
                     puVar2 = (undefined8*)( lVar6 + uVar32 * 8 );
                     *puVar1 = uVar37;
                     puVar3 = (undefined8*)( lVar6 + uVar33 * 8 );
                     uVar9 = *puVar2;
                     *puVar2 = *puVar3;
                     *puVar3 = uVar9;
                     auVar19._8_8_ = 0;
                     auVar19._0_8_ = ( ulong )((int)uVar34 + 1) * lVar8;
                     auVar28._8_8_ = 0;
                     auVar28._0_8_ = uVar35;
                     uVar32 = SUB168(auVar19 * auVar28, 8);
                     puVar38 = (uint*)( lVar7 + uVar32 * 4 );
                     uVar37 = *puVar38;
                     if (( uVar37 == 0 ) || ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar37 * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar35,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( SUB164(auVar19 * auVar28, 8) + uVar5 ) - SUB164(auVar17 * auVar26, 8)) * lVar8,auVar27._8_8_ = 0,auVar27._0_8_ = uVar35,SUB164(auVar18 * auVar27, 8) == 0) break;
                     uVar29 = uVar32 & 0xffffffff;
                     uVar33 = uVar34;
                  };
               }
               plVar4 = (long*)( lVar6 + uVar34 * 8 );
               *(undefined4*)( lVar7 + uVar34 * 4 ) = 0;
               plVar30 = (long*)*plVar4;
               if (*(long**)( this + 0x78 ) == plVar30) {
                  *(long*)( this + 0x78 ) = *plVar30;
                  plVar30 = (long*)*plVar4;
                  if (*(long**)( this + 0x80 ) != plVar30) goto LAB_0010081c;
               } else if (*(long**)( this + 0x80 ) != plVar30) {
                  LAB_0010081c:plVar10 = (long*)plVar30[1];
                  goto joined_r0x00100823;
               }
               *(long*)( this + 0x80 ) = plVar30[1];
               plVar30 = (long*)*plVar4;
               plVar10 = (long*)plVar30[1];
               joined_r0x00100823:if (plVar10 != (long*)0x0) {
                  *plVar10 = *plVar30;
                  plVar30 = (long*)*plVar4;
               }
               if (*plVar30 != 0) {
                  *(long*)( *plVar30 + 8 ) = plVar30[1];
                  plVar30 = (long*)*plVar4;
               }
               uVar5 = *(uint*)( this + 0x14 );
               *(long**)( *(long*)( *(long*)( this + 8 ) + ( ulong )(uVar5 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )) * 8 ) + ( ulong )(uVar5 & *(uint*)( this + 0x1c )) * 8 ) = plVar30;
               *(uint*)( this + 0x14 ) = uVar5 + 1;
               *plVar4 = 0;
               *(int*)( this + 0x8c ) = *(int*)( this + 0x8c ) + -1;
               return;
            }
            uVar37 = *(uint*)( lVar7 + uVar32 * 4 );
            uVar34 = uVar32 & 0xffffffff;
            uVar36 = uVar36 + 1;
         } while ( ( uVar37 != 0 ) && ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar37 * lVar8,auVar21._8_8_ = 0,auVar21._0_8_ = uVar35,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar5 + uVar31 ) - SUB164(auVar12 * auVar21, 8)) * lVar8,auVar22._8_8_ = 0,auVar22._0_8_ = uVar35,uVar29 = uVar32,uVar36 <= SUB164(auVar13 * auVar22, 8) );
      }
   }
   return;
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
}/* WorkerThreadPool::Task::free_template_userdata() */void WorkerThreadPool::Task::free_template_userdata(Task *this) {
   long *plVar1;
   if (*(long*)( this + 0xd8 ) == 0) {
      _err_print_error("free_template_userdata", "core/object/worker_thread_pool.cpp", 0x2b, "Parameter \"template_userdata\" is null.", 0, 0);
      return;
   }
   plVar1 = *(long**)( this + 0x28 );
   if (plVar1 != (long*)0x0) {
      if (*(code**)( *plVar1 + 0x10 ) == BaseTemplateUserdata::~BaseTemplateUserdata) {
         Memory::free_static(plVar1, false);
         return;
      }
      ( **(code**)( *plVar1 + 0x10 ) )();
      Memory::free_static(plVar1, false);
      return;
   }
   _err_print_error("free_template_userdata", "core/object/worker_thread_pool.cpp", 0x2c, "Parameter \"native_func_userdata\" is null.", 0, 0);
   return;
}/* WorkerThreadPool::_notify_threads(WorkerThreadPool::ThreadData const*, unsigned int, unsigned
   int) */ulong WorkerThreadPool::_notify_threads(WorkerThreadPool *this, ThreadData *param_1, uint param_2, uint param_3) {
   uint uVar1;
   ThreadData *pTVar2;
   uint uVar3;
   code *pcVar4;
   ulong in_RAX;
   uint uVar5;
   ulong uVar6;
   ulong uVar7;
   uint uVar8;
   uVar3 = *(uint*)( this + 0x290 );
   uVar6 = (ulong)uVar3;
   if (uVar3 == 0) {
      return in_RAX;
   }
   if (( param_2 | param_3 ) == 0) {
      return ( ulong )(param_2 | param_3);
   }
   uVar5 = *(uint*)( this + 0x430 );
   uVar8 = 0;
   uVar7 = uVar6;
   LAB_00100a41:if ((uint)uVar7 <= uVar5) {
      LAB_00100aed:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar5, uVar7, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar4 = (code*)invalidInstructionException();
      ( *pcVar4 )();
   }
   do {
      pTVar2 = (ThreadData*)( *(long*)( this + 0x298 ) + (ulong)uVar5 * 0x68 );
      if (( (byte)pTVar2[0x18] & 1 ) == 0) {
         if (*(long*)( pTVar2 + 0x20 ) == 0) {
            if (param_2 != 0) {
               if (param_1 != pTVar2) {
                  std::condition_variable::notify_one();
               }
               pTVar2[0x18] = ( ThreadData )((byte)pTVar2[0x18] | 1);
               param_2 = param_2 - 1;
               uVar5 = *(uint*)( this + 0x430 );
            }
         } else if (param_3 != 0) {
            if (( *(long*)( pTVar2 + 0x28 ) == 0 ) || ( *(char*)( *(long*)( pTVar2 + 0x20 ) + 0xd0 ) == '\0' )) break;
            if (param_1 != pTVar2) {
               std::condition_variable::notify_one();
            }
            pTVar2[0x18] = ( ThreadData )((byte)pTVar2[0x18] | 1);
            uVar5 = *(uint*)( this + 0x430 );
            param_3 = param_3 - 1;
         }
      }
      uVar1 = uVar5 + 1;
      uVar8 = uVar8 + 1;
      uVar5 = uVar1 % uVar3;
      *(uint*)( this + 0x430 ) = uVar5;
      if (uVar3 == uVar8) goto LAB_00100b80;
      if (( param_2 | param_3 ) == 0) {
         return ( ulong )(param_2 | param_3);
      }
      uVar7 = ( ulong ) * (uint*)( this + 0x290 );
      if (*(uint*)( this + 0x290 ) <= uVar5) goto LAB_00100aed;
   } while ( true );
   uVar1 = uVar5 + 1;
   uVar8 = uVar8 + 1;
   uVar5 = uVar1 % uVar3;
   *(uint*)( this + 0x430 ) = uVar5;
   if (uVar8 == uVar3) {
      LAB_00100b80:if (param_2 == 0) {
         return uVar1 / uVar6;
      }
      uVar8 = 0;
      while (true) {
         if (*(uint*)( this + 0x290 ) <= uVar5) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar5, ( ulong ) * (uint*)( this + 0x290 ), "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar4 = (code*)invalidInstructionException();
            ( *pcVar4 )();
         }
         pTVar2 = (ThreadData*)( *(long*)( this + 0x298 ) + (ulong)uVar5 * 0x68 );
         if (( ( (byte)pTVar2[0x18] & 1 ) == 0 ) && ( *(long*)( pTVar2 + 0x28 ) != 0 )) {
            if (param_1 != pTVar2) {
               std::condition_variable::notify_one();
            }
            pTVar2[0x18] = ( ThreadData )((byte)pTVar2[0x18] | 1);
            uVar5 = *(uint*)( this + 0x430 );
            param_2 = param_2 - 1;
         }
         uVar8 = uVar8 + 1;
         uVar7 = ( uVar5 + 1 ) / uVar6;
         uVar5 = ( uVar5 + 1 ) % uVar3;
         *(uint*)( this + 0x430 ) = uVar5;
         if (uVar3 <= uVar8) break;
         if (param_2 == 0) {
            return uVar7;
         }
      };
      return uVar7;
   }
   goto LAB_00100a41;
}/* WorkerThreadPool::_try_promote_low_priority_task() */undefined8 WorkerThreadPool::_try_promote_low_priority_task(WorkerThreadPool *this) {
   long *plVar1;
   long lVar2;
   long lVar3;
   long lVar4;
   plVar1 = *(long**)( this + 0x248 );
   if (plVar1 != (long*)0x0) {
      lVar2 = plVar1[1];
      if ((WorkerThreadPool*)*plVar1 == this + 0x248) {
         lVar4 = plVar1[2];
         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x18 ) = plVar1[3];
         }
         lVar3 = plVar1[3];
         if (lVar3 != 0) {
            *(long*)( lVar3 + 0x10 ) = lVar4;
            lVar4 = plVar1[2];
         }
         *(long*)( this + 0x248 ) = lVar4;
         if (plVar1 == *(long**)( this + 0x250 )) {
            *(long*)( this + 0x250 ) = lVar3;
         }
         *plVar1 = 0;
         *(undefined1(*) [16])( plVar1 + 2 ) = (undefined1[16])0x0;
      } else {
         _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
      }
      lVar4 = lVar2 + 0xa8;
      if (*(long*)( lVar2 + 0xa8 ) == 0) {
         *(WorkerThreadPool**)( lVar2 + 0xa8 ) = this + 600;
         lVar3 = *(long*)( this + 0x260 );
         *(undefined8*)( lVar2 + 0xb8 ) = 0;
         *(long*)( lVar2 + 0xc0 ) = lVar3;
         if (lVar3 == 0) {
            *(long*)( this + 600 ) = lVar4;
         } else {
            *(long*)( lVar3 + 0x10 ) = lVar4;
         }
         *(long*)( this + 0x260 ) = lVar4;
      } else {
         _err_print_error("add_last", "./core/templates/self_list.h", 0x3f, "Condition \"p_elem->_root\" is true.", 0, 0);
      }
      *(int*)( this + 0x42c ) = *(int*)( this + 0x42c ) + 1;
      return 1;
   }
   return 0;
}/* WorkerThreadPool::_lock_unlockable_mutexes() */void WorkerThreadPool::_lock_unlockable_mutexes(void) {
   long *plVar1;
   undefined8 *puVar2;
   int iVar3;
   long *plVar4;
   long *in_FS_OFFSET;
   plVar1 = (long*)*in_FS_OFFSET;
   plVar4 = plVar1;
   do {
      puVar2 = (undefined8*)*plVar4;
      if (puVar2 != (undefined8*)0x0) {
         if ((pthread_mutex_t*)*puVar2 == (pthread_mutex_t*)0x0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(1);
         }
         if (*(char*)( puVar2 + 1 ) != '\0') {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(0x23);
         }
         iVar3 = pthread_mutex_lock((pthread_mutex_t*)*puVar2);
         if (iVar3 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar3);
         }
         *(undefined1*)( puVar2 + 1 ) = 1;
      }
      plVar4 = plVar4 + 2;
      if (plVar4 == plVar1) {
         return;
      }
   } while ( true );
}/* WorkerThreadPool::_unlock_unlockable_mutexes() */void WorkerThreadPool::_unlock_unlockable_mutexes(void) {
   undefined8 *puVar1;
   long *in_FS_OFFSET;
   puVar1 = (undefined8*)*in_FS_OFFSET;
   if (puVar1 != (undefined8*)0x0) {
      if (*(char*)( puVar1 + 1 ) == '\0') goto LAB_00100e71;
      if ((pthread_mutex_t*)*puVar1 != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock((pthread_mutex_t*)*puVar1);
         *(undefined1*)( puVar1 + 1 ) = 0;
      }
   }
   puVar1 = (undefined8*)*in_FS_OFFSET;
   if (puVar1 != (undefined8*)0x0) {
      if (*(char*)( puVar1 + 1 ) == '\0') {
         LAB_00100e71:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }
      if ((pthread_mutex_t*)*puVar1 != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock((pthread_mutex_t*)*puVar1);
         *(undefined1*)( puVar1 + 1 ) = 0;
      }
   }
   return;
}/* WorkerThreadPool::wait_for_group_task_completion(long) */void WorkerThreadPool::wait_for_group_task_completion(WorkerThreadPool *this, long param_1) {
   int *piVar1;
   pthread_mutex_t *__mutex;
   uint *puVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   undefined8 uVar9;
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
   int iVar36;
   ulong uVar37;
   long *plVar38;
   uint uVar39;
   uint uVar40;
   long lVar41;
   ulong uVar42;
   ulong uVar43;
   ulong uVar44;
   uint uVar45;
   ulong uVar46;
   uint uVar47;
   pthread_mutex_t *__mutex_00;
   uint *puVar48;
   long in_FS_OFFSET;
   lVar6 = *(long*)( in_FS_OFFSET + 0x28 );
   __mutex = (pthread_mutex_t*)( this + 0x268 );
   iVar36 = pthread_mutex_lock(__mutex);
   if (iVar36 != 0) {
      LAB_0010151b:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar36);
   }
   lVar7 = *(long*)( this + 0x400 );
   if (( lVar7 != 0 ) && ( *(int*)( this + 0x424 ) != 0 )) {
      uVar44 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x420 ) * 4 ));
      lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x420 ) * 8 );
      uVar37 = param_1 * 0x3ffff - 1;
      uVar37 = ( uVar37 ^ uVar37 >> 0x1f ) * 0x15;
      uVar37 = ( uVar37 ^ uVar37 >> 0xb ) * 0x41;
      uVar37 = uVar37 >> 0x16 ^ uVar37;
      uVar43 = uVar37 & 0xffffffff;
      if ((int)uVar37 == 0) {
         uVar43 = 1;
      }
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar43 * lVar8;
      auVar23._8_8_ = 0;
      auVar23._0_8_ = uVar44;
      lVar41 = SUB168(auVar10 * auVar23, 8);
      uVar45 = *(uint*)( *(long*)( this + 0x408 ) + lVar41 * 4 );
      uVar39 = SUB164(auVar10 * auVar23, 8);
      if (uVar45 != 0) {
         uVar47 = 0;
         while (( (uint)uVar43 != uVar45 || ( *(long*)( *(long*)( lVar7 + lVar41 * 8 ) + 0x10 ) != param_1 ) )) {
            uVar47 = uVar47 + 1;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = ( ulong )(uVar39 + 1) * lVar8;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar44;
            lVar41 = SUB168(auVar11 * auVar24, 8);
            uVar45 = *(uint*)( *(long*)( this + 0x408 ) + lVar41 * 4 );
            uVar39 = SUB164(auVar11 * auVar24, 8);
            if (( uVar45 == 0 ) || ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar45 * lVar8,auVar25._8_8_ = 0,auVar25._0_8_ = uVar44,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x420 ) * 4 ) + uVar39 ) - SUB164(auVar12 * auVar25, 8)) * lVar8,auVar26._8_8_ = 0,auVar26._0_8_ = uVar44,SUB164(auVar13 * auVar26, 8) < uVar47) goto LAB_00101318;
         };
         lVar7 = *(long*)( lVar7 + (ulong)uVar39 * 8 );
         pthread_mutex_unlock(__mutex);
         lVar7 = *(long*)( lVar7 + 0x18 );
         if (singleton == this) {
            _unlock_unlockable_mutexes();
         }
         __mutex_00 = (pthread_mutex_t*)( lVar7 + 0x18 );
         iVar36 = pthread_mutex_lock(__mutex_00);
         if (iVar36 != 0) goto LAB_0010151b;
         iVar36 = *(int*)( lVar7 + 0x74 );
         *(int*)( lVar7 + 0x74 ) = iVar36 + 1;
         if (*(int*)( lVar7 + 0x70 ) == 0) {
            do {
               std::condition_variable::wait((unique_lock*)( lVar7 + 0x40 ));
            } while ( *(int*)( lVar7 + 0x70 ) == 0 );
            *(int*)( lVar7 + 0x74 ) = *(int*)( lVar7 + 0x74 ) + -1;
            *(int*)( lVar7 + 0x70 ) = *(int*)( lVar7 + 0x70 ) + -1;
         } else {
            *(int*)( lVar7 + 0x74 ) = iVar36;
            *(int*)( lVar7 + 0x70 ) = *(int*)( lVar7 + 0x70 ) + -1;
         }
         if (__mutex_00 != (pthread_mutex_t*)0x0) {
            pthread_mutex_unlock(__mutex_00);
         }
         if (singleton == this) {
            _lock_unlockable_mutexes();
         }
         LOCK();
         piVar1 = (int*)( lVar7 + 0x7c );
         iVar36 = *piVar1;
         *piVar1 = *piVar1 + 1;
         UNLOCK();
         if (*(int*)( lVar7 + 0x80 ) + 1 == iVar36 + 1) {
            iVar36 = pthread_mutex_lock(__mutex);
            if (( iVar36 != 0 ) || ( iVar36 = iVar36 != 0 )) goto LAB_0010151b;
            if (*(int*)( lVar7 + 0x74 ) != 0) {
               _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
               std::condition_variable::condition_variable((condition_variable*)( lVar7 + 0x40 ));
            }
            pthread_mutex_unlock(__mutex_00);
            std::condition_variable::~condition_variable((condition_variable*)( lVar7 + 0x40 ));
            uVar45 = *(uint*)( this + 500 );
            *(long*)( *(long*)( *(long*)( this + 0x1e8 ) + ( ulong )(uVar45 >> ( ( byte ) * (undefined4*)( this + 0x1f8 ) & 0x1f )) * 8 ) + ( ulong )(uVar45 & *(uint*)( this + 0x1fc )) * 8 ) = lVar7;
            *(uint*)( this + 500 ) = uVar45 + 1;
            pthread_mutex_unlock(__mutex);
         }
         iVar36 = pthread_mutex_lock(__mutex);
         if (iVar36 != 0) goto LAB_0010151b;
         lVar7 = *(long*)( this + 0x400 );
         if (( lVar7 != 0 ) && ( *(int*)( this + 0x424 ) != 0 )) {
            lVar8 = *(long*)( this + 0x408 );
            uVar45 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x420 ) * 4 );
            uVar46 = CONCAT44(0, uVar45);
            lVar41 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x420 ) * 8 );
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar43 * lVar41;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar46;
            uVar37 = SUB168(auVar14 * auVar27, 8);
            uVar39 = *(uint*)( lVar8 + uVar37 * 4 );
            uVar44 = (ulong)SUB164(auVar14 * auVar27, 8);
            if (uVar39 != 0) {
               uVar47 = 0;
               do {
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = ( ulong )((int)uVar44 + 1) * lVar41;
                  auVar30._8_8_ = 0;
                  auVar30._0_8_ = uVar46;
                  uVar42 = SUB168(auVar17 * auVar30, 8);
                  uVar40 = SUB164(auVar17 * auVar30, 8);
                  if (( uVar39 == (uint)uVar43 ) && ( *(long*)( *(long*)( lVar7 + uVar37 * 8 ) + 0x10 ) == param_1 )) {
                     puVar48 = (uint*)( lVar8 + uVar42 * 4 );
                     uVar39 = *puVar48;
                     if (( uVar39 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar39 * lVar41,auVar31._8_8_ = 0,auVar31._0_8_ = uVar46,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( uVar40 + uVar45 ) - SUB164(auVar18 * auVar31, 8)) * lVar41,auVar32._8_8_ = 0,auVar32._0_8_ = uVar46,uVar37 = (ulong)uVar40,uVar43 = uVar44,SUB164(auVar19 * auVar32, 8) != 0) {
                        while (true) {
                           uVar44 = uVar37;
                           puVar2 = (uint*)( lVar8 + uVar43 * 4 );
                           *puVar48 = *puVar2;
                           puVar3 = (undefined8*)( lVar7 + uVar42 * 8 );
                           *puVar2 = uVar39;
                           puVar4 = (undefined8*)( lVar7 + uVar43 * 8 );
                           uVar9 = *puVar3;
                           *puVar3 = *puVar4;
                           *puVar4 = uVar9;
                           auVar22._8_8_ = 0;
                           auVar22._0_8_ = ( ulong )((int)uVar44 + 1) * lVar41;
                           auVar35._8_8_ = 0;
                           auVar35._0_8_ = uVar46;
                           uVar42 = SUB168(auVar22 * auVar35, 8);
                           puVar48 = (uint*)( lVar8 + uVar42 * 4 );
                           uVar39 = *puVar48;
                           if (( uVar39 == 0 ) || ( auVar20._8_8_ = 0 ),auVar20._0_8_ = (ulong)uVar39 * lVar41,auVar33._8_8_ = 0,auVar33._0_8_ = uVar46,auVar21._8_8_ = 0,auVar21._0_8_ = ( ulong )(( SUB164(auVar22 * auVar35, 8) + uVar45 ) - SUB164(auVar20 * auVar33, 8)) * lVar41,auVar34._8_8_ = 0,auVar34._0_8_ = uVar46,SUB164(auVar21 * auVar34, 8) == 0) break;
                           uVar37 = uVar42 & 0xffffffff;
                           uVar43 = uVar44;
                        };
                     }
                     plVar5 = (long*)( lVar7 + uVar44 * 8 );
                     *(undefined4*)( lVar8 + uVar44 * 4 ) = 0;
                     plVar38 = (long*)*plVar5;
                     if (*(long**)( this + 0x410 ) == plVar38) {
                        *(long*)( this + 0x410 ) = *plVar38;
                        plVar38 = (long*)*plVar5;
                     }
                     if (*(long**)( this + 0x418 ) == plVar38) {
                        *(long*)( this + 0x418 ) = plVar38[1];
                        plVar38 = (long*)*plVar5;
                     }
                     if ((long*)plVar38[1] != (long*)0x0) {
                        *(long*)plVar38[1] = *plVar38;
                        plVar38 = (long*)*plVar5;
                     }
                     if (*plVar38 != 0) {
                        *(long*)( *plVar38 + 8 ) = plVar38[1];
                        plVar38 = (long*)*plVar5;
                     }
                     uVar45 = *(uint*)( this + 0x3ac );
                     *(long**)( *(long*)( *(long*)( this + 0x3a0 ) + ( ulong )(uVar45 >> ( ( byte ) * (undefined4*)( this + 0x3b0 ) & 0x1f )) * 8 ) + ( ulong )(uVar45 & *(uint*)( this + 0x3b4 )) * 8 ) = plVar38;
                     *(uint*)( this + 0x3ac ) = uVar45 + 1;
                     *plVar5 = 0;
                     *(int*)( this + 0x424 ) = *(int*)( this + 0x424 ) + -1;
                     break;
                  }
                  uVar39 = *(uint*)( lVar8 + uVar42 * 4 );
                  uVar44 = uVar42 & 0xffffffff;
                  uVar47 = uVar47 + 1;
               } while ( ( uVar39 != 0 ) && ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar39 * lVar41,auVar28._8_8_ = 0,auVar28._0_8_ = uVar46,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar45 + uVar40 ) - SUB164(auVar15 * auVar28, 8)) * lVar41,auVar29._8_8_ = 0,auVar29._0_8_ = uVar46,uVar37 = uVar42,uVar47 <= SUB164(auVar16 * auVar29, 8) );
            }
         }
         if (lVar6 == *(long*)( in_FS_OFFSET + 0x28 )) {
            pthread_mutex_unlock(__mutex);
            return;
         }
         goto LAB_00101522;
      }
   }
   LAB_00101318:pthread_mutex_unlock(__mutex);
   _err_print_error("wait_for_group_task_completion", "core/object/worker_thread_pool.cpp", 0x2b3, "Method/function failed.", "Invalid Group ID.", 0, 0);
   if (lVar6 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00101522:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* WorkerThreadPool::_switch_runlevel(WorkerThreadPool::Runlevel) */void WorkerThreadPool::_switch_runlevel(WorkerThreadPool *this, undefined4 param_2) {
   byte *pbVar1;
   code *pcVar2;
   ulong uVar3;
   long lVar4;
   *(undefined4*)( this + 0x2a0 ) = param_2;
   *(undefined4*)( this + 0x2a4 ) = 0;
   if (*(int*)( this + 0x290 ) != 0) {
      uVar3 = 0;
      do {
         lVar4 = uVar3 * 0x68;
         std::condition_variable::notify_one();
         if (*(uint*)( this + 0x290 ) <= (uint)uVar3) {
            _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar3 & 0xffffffff, ( ulong ) * (uint*)( this + 0x290 ), "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         uVar3 = uVar3 + 1;
         pbVar1 = (byte*)( *(long*)( this + 0x298 ) + 0x18 + lVar4 );
         *pbVar1 = *pbVar1 | 1;
      } while ( (uint)uVar3 < *(uint*)( this + 0x290 ) );
   }
   std::condition_variable::notify_all();
   return;
}/* WorkerThreadPool::finish() [clone .part.0] */void WorkerThreadPool::finish(WorkerThreadPool *this) {
   long *plVar1;
   pthread_mutex_t *__mutex;
   uint uVar2;
   undefined8 *puVar3;
   long lVar4;
   int iVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   long local_48;
   long local_40;
   __mutex = (pthread_mutex_t*)( this + 0x268 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar5 = pthread_mutex_lock(__mutex);
   if (iVar5 == 0) {
      for (lVar7 = *(long*)( this + 0x248 ); lVar7 != 0; lVar7 = *(long*)( lVar7 + 0x10 )) {
         operator+((char *)&
         local_48,(String*)"Task waiting was never re-claimed: ";
         print_error((String*)&local_48);
         lVar6 = local_48;
         if (local_48 != 0) {
            LOCK();
            plVar1 = (long*)( local_48 + -0x10 );
            *plVar1 = *plVar1 + -1;
            UNLOCK();
            if (*plVar1 == 0) {
               local_48 = 0;
               Memory::free_static((void*)( lVar6 + -0x10 ), false);
            }
         }
      }
      _switch_runlevel(this);
      pthread_mutex_unlock(__mutex);
      lVar6 = *(long*)( this + 0x298 );
      lVar7 = lVar6 + ( ulong ) * (uint*)( this + 0x290 ) * 0x68;
      for (; lVar6 != lVar7; lVar6 = lVar6 + 0x68) {
         Thread::wait_to_finish();
      }
      iVar5 = pthread_mutex_lock(__mutex);
      if (iVar5 == 0) {
         puVar3 = *(undefined8**)( this + 0x380 );
         while (true) {
            if (puVar3 == (undefined8*)0x0) {
               pthread_mutex_unlock(__mutex);
               if (*(int*)( this + 0x290 ) != 0) {
                  lVar7 = 0;
                  do {
                     lVar6 = lVar7 + 1;
                     lVar7 = *(long*)( this + 0x298 ) + lVar7 * 0x68;
                     std::condition_variable::~condition_variable((condition_variable*)( lVar7 + 0x30 ));
                     Thread::~Thread((Thread*)( lVar7 + 8 ));
                     lVar7 = lVar6;
                  } while ( (uint)lVar6 < *(uint*)( this + 0x290 ) );
                  *(undefined4*)( this + 0x290 ) = 0;
               }
               if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }
               return;
            }
            lVar7 = puVar3[3];
            plVar1 = *(long**)( lVar7 + 0xa8 );
            if (plVar1 != (long*)0x0) {
               lVar6 = *(long*)( lVar7 + 0xb8 );
               if (lVar6 != 0) {
                  *(undefined8*)( lVar6 + 0x18 ) = *(undefined8*)( lVar7 + 0xc0 );
               }
               lVar4 = *(long*)( lVar7 + 0xc0 );
               if (lVar4 != 0) {
                  *(long*)( lVar4 + 0x10 ) = lVar6;
               }
               if (lVar7 + 0xa8 == *plVar1) {
                  *plVar1 = *(long*)( lVar7 + 0xb8 );
               }
               if (lVar7 + 0xa8 == plVar1[1]) {
                  plVar1[1] = lVar4;
               }
            }
            iVar5 = pthread_mutex_lock((pthread_mutex_t*)( lVar7 + 0x38 ));
            if (iVar5 != 0) break;
            if (*(int*)( lVar7 + 0x94 ) != 0) {
               _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
               std::condition_variable::condition_variable((condition_variable*)( lVar7 + 0x60 ));
            }
            pthread_mutex_unlock((pthread_mutex_t*)( lVar7 + 0x38 ));
            std::condition_variable::~condition_variable((condition_variable*)( lVar7 + 0x60 ));
            if (*(long*)( lVar7 + 0x30 ) != 0) {
               LOCK();
               plVar1 = (long*)( *(long*)( lVar7 + 0x30 ) + -0x10 );
               *plVar1 = *plVar1 + -1;
               UNLOCK();
               if (*plVar1 == 0) {
                  lVar6 = *(long*)( lVar7 + 0x30 );
                  *(undefined8*)( lVar7 + 0x30 ) = 0;
                  Memory::free_static((void*)( lVar6 + -0x10 ), false);
               }
            }
            Callable::~Callable((Callable*)( lVar7 + 8 ));
            uVar2 = *(uint*)( this + 0x18c );
            puVar3 = (undefined8*)*puVar3;
            *(long*)( *(long*)( *(long*)( this + 0x180 ) + ( ulong )(uVar2 >> ( ( byte ) * (undefined4*)( this + 400 ) & 0x1f )) * 8 ) + ( ulong )(uVar2 & *(uint*)( this + 0x194 )) * 8 ) = lVar7;
            *(uint*)( this + 0x18c ) = uVar2 + 1;
         };
      }
   }
   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar5);
}/* WorkerThreadPool::_handle_runlevel(WorkerThreadPool::ThreadData*, MutexLock<MutexImpl<std::mutex>
   >&) */undefined8 WorkerThreadPool::_handle_runlevel(WorkerThreadPool *this, ThreadData *param_1, MutexLock *param_2) {
   int iVar1;
   iVar1 = *(int*)( this + 0x2a0 );
   if (iVar1 == 2) {
      if (( (byte)param_1[0x18] & 8 ) == 0) {
         if (param_2[8] != (MutexLock)0x0) {
            if (*(pthread_mutex_t**)param_2 != (pthread_mutex_t*)0x0) {
               pthread_mutex_unlock(*(pthread_mutex_t**)param_2);
               param_2[8] = (MutexLock)0x0;
            }
            ScriptServer::thread_exit();
            if (*(pthread_mutex_t**)param_2 != (pthread_mutex_t*)0x0) {
               if (param_2[8] != (MutexLock)0x0) {
                  /* WARNING: Subroutine does not return */
                  std::__throw_system_error(0x23);
               }
               iVar1 = pthread_mutex_lock(*(pthread_mutex_t**)param_2);
               if (iVar1 == 0) {
                  param_2[8] = (MutexLock)0x1;
                  param_1[0x18] = ( ThreadData )((byte)param_1[0x18] | 8);
                  *(int*)( this + 0x2a4 ) = *(int*)( this + 0x2a4 ) + 1;
                  std::condition_variable::notify_all();
                  return 0;
               }
               /* WARNING: Subroutine does not return */
               std::__throw_system_error(iVar1);
            }
         }
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(1);
      }
   } else {
      if (iVar1 == 3) {
         return 1;
      }
      if (( ( ( iVar1 == 1 ) && ( ( (byte)param_1[0x18] & 4 ) == 0 ) ) && ( *(long*)( this + 600 ) == 0 ) ) && ( *(long*)( this + 0x248 ) == 0 )) {
         param_1[0x18] = ( ThreadData )((byte)param_1[0x18] | 4);
         *(int*)( this + 0x2a4 ) = *(int*)( this + 0x2a4 ) + 1;
         std::condition_variable::notify_all();
         return 0;
      }
   }
   return 0;
}/* WorkerThreadPool::notify_yield_over(long) */void WorkerThreadPool::notify_yield_over(WorkerThreadPool *this, long param_1) {
   byte *pbVar1;
   long lVar2;
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
   int iVar13;
   ulong uVar14;
   uint uVar15;
   long lVar16;
   ulong uVar17;
   uint uVar18;
   ulong uVar19;
   uint uVar20;
   iVar13 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x268 ));
   if (iVar13 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar13);
   }
   lVar2 = *(long*)( this + 0x370 );
   if (( lVar2 != 0 ) && ( *(int*)( this + 0x394 ) != 0 )) {
      uVar19 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x390 ) * 4 ));
      lVar3 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x390 ) * 8 );
      uVar14 = param_1 * 0x3ffff - 1;
      uVar14 = ( uVar14 ^ uVar14 >> 0x1f ) * 0x15;
      uVar14 = ( uVar14 ^ uVar14 >> 0xb ) * 0x41;
      uVar14 = uVar14 >> 0x16 ^ uVar14;
      uVar17 = uVar14 & 0xffffffff;
      if ((int)uVar14 == 0) {
         uVar17 = 1;
      }
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar17 * lVar3;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar19;
      lVar16 = SUB168(auVar4 * auVar8, 8);
      uVar18 = *(uint*)( *(long*)( this + 0x378 ) + lVar16 * 4 );
      uVar15 = SUB164(auVar4 * auVar8, 8);
      if (uVar18 != 0) {
         uVar20 = 0;
         do {
            if (( (uint)uVar17 == uVar18 ) && ( *(long*)( *(long*)( lVar2 + lVar16 * 8 ) + 0x10 ) == param_1 )) {
               lVar2 = *(long*)( *(long*)( lVar2 + (ulong)uVar15 * 8 ) + 0x18 );
               uVar18 = *(uint*)( lVar2 + 0xe0 );
               if (uVar18 == 0xffffffff) {
                  if (( *(byte*)( lVar2 + 0x98 ) & 1 ) == 0) {
                     *(byte*)( lVar2 + 0x98 ) = *(byte*)( lVar2 + 0x98 ) | 2;
                  }
               } else {
                  if (*(uint*)( this + 0x290 ) <= uVar18) {
                     _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar18, ( ulong ) * (uint*)( this + 0x290 ), "p_index", "count", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar12 = (code*)invalidInstructionException();
                     ( *pcVar12 )();
                  }
                  pbVar1 = (byte*)( *(long*)( this + 0x298 ) + (ulong)uVar18 * 0x68 + 0x18 );
                  *pbVar1 = *pbVar1 | 3;
                  std::condition_variable::notify_one();
               }
               goto LAB_00101b72;
            }
            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar15 + 1) * lVar3;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar16 = SUB168(auVar5 * auVar9, 8);
            uVar18 = *(uint*)( *(long*)( this + 0x378 ) + lVar16 * 4 );
            uVar15 = SUB164(auVar5 * auVar9, 8);
         } while ( ( uVar18 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar18 * lVar3,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x390 ) * 4 ) + uVar15 ) - SUB164(auVar6 * auVar10, 8)) * lVar3,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,uVar20 <= SUB164(auVar7 * auVar11, 8) );
      }
   }
   _err_print_error("notify_yield_over", "core/object/worker_thread_pool.cpp", 0x254, "Method/function failed.", "Invalid Task ID.", 0, 0);
   LAB_00101b72:pthread_mutex_unlock((pthread_mutex_t*)( this + 0x268 ));
   return;
}/* WorkerThreadPool::get_thread_index() const */undefined4 WorkerThreadPool::get_thread_index(WorkerThreadPool *this) {
   uint uVar1;
   long lVar2;
   long lVar3;
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
   code *pcVar20;
   ulong uVar21;
   uint uVar22;
   uint uVar23;
   ulong uVar24;
   long lVar25;
   long lVar26;
   uint uVar27;
   uint uVar28;
   ulong uVar29;
   uint uVar30;
   long in_FS_OFFSET;
   if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
      /* WARNING: Subroutine does not return */
      Thread::caller_id();
   }
   lVar2 = *(long*)( this + 0x2e0 );
   if (( lVar2 != 0 ) && ( *(int*)( this + 0x304 ) != 0 )) {
      lVar3 = *(long*)( this + 0x2e8 );
      lVar4 = *(long*)( in_FS_OFFSET + lRam0000000000101c7d );
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x300 ) * 4 );
      uVar29 = CONCAT44(0, uVar1);
      lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x300 ) * 8 );
      uVar21 = lVar4 * 0x3ffff - 1;
      uVar21 = ( uVar21 ^ uVar21 >> 0x1f ) * 0x15;
      uVar21 = ( uVar21 ^ uVar21 >> 0xb ) * 0x41;
      uVar21 = uVar21 >> 0x16 ^ uVar21;
      uVar24 = 1;
      if ((int)uVar21 != 0) {
         uVar24 = uVar21 & 0xffffffff;
      }
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar24 * lVar5;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar29;
      lVar25 = SUB168(auVar6 * auVar13, 8);
      uVar30 = *(uint*)( lVar3 + lVar25 * 4 );
      uVar22 = SUB164(auVar6 * auVar13, 8);
      if (uVar30 != 0) {
         uVar27 = 0;
         lVar26 = lVar25;
         uVar28 = uVar30;
         uVar23 = uVar22;
         do {
            if (( uVar28 == (uint)uVar24 ) && ( lVar4 == *(long*)( *(long*)( lVar2 + lVar26 * 8 ) + 0x10 ) )) {
               uVar28 = 0;
               do {
                  if (( (uint)uVar24 == uVar30 ) && ( lVar4 == *(long*)( *(long*)( lVar2 + lVar25 * 8 ) + 0x10 ) )) {
                     return *(undefined4*)( *(long*)( lVar2 + (ulong)uVar22 * 8 ) + 0x18 );
                  }
                  uVar28 = uVar28 + 1;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(uVar22 + 1) * lVar5;
                  auVar17._8_8_ = 0;
                  auVar17._0_8_ = uVar29;
                  lVar25 = SUB168(auVar10 * auVar17, 8);
                  uVar30 = *(uint*)( lVar3 + lVar25 * 4 );
                  uVar22 = SUB164(auVar10 * auVar17, 8);
               } while ( ( uVar30 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar30 * lVar5,auVar18._8_8_ = 0,auVar18._0_8_ = uVar29,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( uVar1 + uVar22 ) - SUB164(auVar11 * auVar18, 8)) * lVar5,auVar19._8_8_ = 0,auVar19._0_8_ = uVar29,uVar28 <= SUB164(auVar12 * auVar19, 8) );
               _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
               _err_flush_stdout();
               /* WARNING: Does not return */
               pcVar20 = (code*)invalidInstructionException();
               ( *pcVar20 )();
            }
            uVar27 = uVar27 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar23 + 1) * lVar5;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar29;
            lVar26 = SUB168(auVar7 * auVar14, 8);
            uVar28 = *(uint*)( lVar3 + lVar26 * 4 );
            uVar23 = SUB164(auVar7 * auVar14, 8);
         } while ( ( uVar28 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar28 * lVar5,auVar15._8_8_ = 0,auVar15._0_8_ = uVar29,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar1 + uVar23 ) - SUB164(auVar8 * auVar15, 8)) * lVar5,auVar16._8_8_ = 0,auVar16._0_8_ = uVar29,uVar27 <= SUB164(auVar9 * auVar16, 8) );
      }
   }
   return 0xffffffff;
}/* WorkerThreadPool::get_caller_task_id() const */undefined8 WorkerThreadPool::get_caller_task_id(WorkerThreadPool *this) {
   undefined8 *puVar1;
   code *pcVar2;
   uint uVar3;
   uVar3 = get_thread_index(this);
   if (uVar3 != 0xffffffff) {
      if (*(uint*)( this + 0x290 ) <= uVar3) {
         _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xae, (ulong)uVar3, ( ulong ) * (uint*)( this + 0x290 ), "p_index", "count", "", false, true);
         _err_flush_stdout();
         /* WARNING: Does not return */
         pcVar2 = (code*)invalidInstructionException();
         ( *pcVar2 )();
      }
      puVar1 = *(undefined8**)( *(long*)( this + 0x298 ) + (ulong)uVar3 * 0x68 + 0x20 );
      if (puVar1 != (undefined8*)0x0) {
         return *puVar1;
      }
   }
   return 0xffffffffffffffff;
}/* WorkerThreadPool::_thread_enter_unlock_allowance_zone(std::unique_lock<std::mutex>&) */long WorkerThreadPool::_thread_enter_unlock_allowance_zone(unique_lock *param_1) {
   long lVar1;
   undefined8 *puVar2;
   long *in_FS_OFFSET;
   if (param_1 == (unique_lock*)*in_FS_OFFSET) {
      lVar1 = 0;
      LAB_00101f82:*(int*)( in_FS_OFFSET + lVar1 * 2 ) = (int)in_FS_OFFSET[lVar1 * 2] + 1;
      return lVar1;
   }
   if ((unique_lock*)*in_FS_OFFSET == (unique_lock*)0x0) {
      lVar1 = 0;
   } else {
      if (param_1 == (unique_lock*)*in_FS_OFFSET) {
         lVar1 = 1;
         goto LAB_00101f82;
      }
      if ((unique_lock*)*in_FS_OFFSET != (unique_lock*)0x0) {
         _err_print_error("_thread_enter_unlock_allowance_zone", "core/object/worker_thread_pool.cpp", 0x2ec, "Method/function failed. Returning: (4294967295U)", "No more unlockable lock slots available. Engine bug.", 0, 0);
         return 0xffffffff;
      }
      lVar1 = 1;
   }
   puVar2 = (undefined8*)( lVar1 * 0x10 + *in_FS_OFFSET );
   *puVar2 = param_1;
   *(undefined4*)puVar2 = 1;
   return lVar1;
}/* WorkerThreadPool::thread_exit_unlock_allowance_zone(unsigned int) */void WorkerThreadPool::thread_exit_unlock_allowance_zone(uint param_1) {
   int *piVar1;
   long *in_FS_OFFSET;
   piVar1 = (int*)( (ulong)param_1 * 0x10 + *in_FS_OFFSET );
   *piVar1 = *piVar1 + -1;
   if (*piVar1 == 0) {
      piVar1[0] = 0;
      piVar1[1] = 0;
   }
   return;
}/* WorkerThreadPool::exit_languages_threads() */void WorkerThreadPool::exit_languages_threads(WorkerThreadPool *this) {
   pthread_mutex_t *__mutex;
   long lVar1;
   int iVar2;
   long in_FS_OFFSET;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x290 ) != 0) {
      __mutex = (pthread_mutex_t*)( this + 0x268 );
      iVar2 = pthread_mutex_lock(__mutex);
      if (iVar2 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar2);
      }
      _switch_runlevel(this, 1);
      if (*(int*)( this + 0x290 ) != *(int*)( this + 0x2a4 )) {
         do {
            std::condition_variable::wait((unique_lock*)( this + 0x2a8 ));
         } while ( *(int*)( this + 0x2a4 ) != *(int*)( this + 0x290 ) );
      }
      _switch_runlevel(this, 2);
      if (*(int*)( this + 0x2a4 ) != *(int*)( this + 0x290 )) {
         do {
            std::condition_variable::wait((unique_lock*)( this + 0x2a8 ));
         } while ( *(int*)( this + 0x2a4 ) != *(int*)( this + 0x290 ) );
      }
      if (__mutex != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(__mutex);
      }
   }
   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* WorkerThreadPool::finish() */void WorkerThreadPool::finish(WorkerThreadPool *this) {
   if (*(int*)( this + 0x290 ) == 0) {
      return;
   }
   finish(this);
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* WorkerThreadPool::WorkerThreadPool(bool) */void WorkerThreadPool::WorkerThreadPool(WorkerThreadPool *this, bool param_1) {
   undefined8 uVar1;
   undefined8 uVar2;
   undefined8 uVar3;
   undefined8 uVar4;
   undefined8 uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   Object::Object((Object*)this);
   uVar4 = _UNK_00110218;
   uVar3 = __LC38;
   uVar2 = _UNK_00110208;
   uVar1 = __LC37;
   *(undefined***)this = &PTR__initialize_classv_0010fc60;
   this[0x19c] = (WorkerThreadPool)0x0;
   *(undefined4*)( this + 0x198 ) = 0x400;
   this[0x204] = (WorkerThreadPool)0x0;
   *(undefined4*)( this + 0x200 ) = 0x100;
   *(undefined8*)( this + 0x288 ) = 0;
   *(undefined8*)( this + 0x290 ) = 0;
   *(undefined8*)( this + 0x298 ) = 0;
   *(undefined4*)( this + 0x2a0 ) = 0;
   *(undefined1(*) [16])( this + 0x178 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x188 ) = uVar1;
   *(undefined8*)( this + 400 ) = uVar2;
   *(undefined1(*) [16])( this + 0x1e0 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x1f0 ) = uVar3;
   *(undefined8*)( this + 0x1f8 ) = uVar4;
   for (int i_1325 = 0; i_1325 < 4; i_1325++) {
      *(undefined1(*) [16])( this + ( 16*i_1325 + 584 ) ) = (undefined1[16])0;
   }
   std::condition_variable::condition_variable((condition_variable*)( this + 0x2a8 ));
   uVar5 = _LC39;
   uVar4 = _UNK_00110218;
   uVar3 = __LC38;
   uVar2 = _UNK_00110208;
   uVar1 = __LC37;
   *(undefined1(*) [16])( this + 0x2e0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x2f0 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x308 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x370 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x380 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x398 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x400 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
   uVar7 = _UNK_00110228;
   uVar6 = _LC39;
   *(undefined8*)( this + 0x300 ) = uVar5;
   this[0x32c] = (WorkerThreadPool)0x0;
   *(undefined4*)( this + 0x328 ) = 0x400;
   *(undefined8*)( this + 0x390 ) = uVar5;
   this[0x3bc] = (WorkerThreadPool)0x0;
   *(undefined4*)( this + 0x3b8 ) = 0x100;
   *(undefined4*)( this + 0x430 ) = 0;
   *(undefined8*)( this + 0x438 ) = 1;
   *(undefined8*)( this + 0x318 ) = uVar1;
   *(undefined8*)( this + 800 ) = uVar2;
   *(undefined8*)( this + 0x3a8 ) = uVar3;
   *(undefined8*)( this + 0x3b0 ) = uVar4;
   *(undefined8*)( this + 0x420 ) = uVar6;
   *(undefined8*)( this + 0x428 ) = uVar7;
   if (param_1) {
      singleton = this;
   }
   return;
}/* WorkerThreadPool::~WorkerThreadPool() */void WorkerThreadPool::~WorkerThreadPool(WorkerThreadPool *this) {
   long lVar1;
   uint uVar2;
   undefined8 *puVar3;
   char cVar4;
   ulong uVar5;
   long lVar6;
   WorkerThreadPool *this_00;
   void *pvVar7;
   uint uVar8;
   long in_FS_OFFSET;
   undefined8 local_58;
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined***)this = &PTR__initialize_classv_0010fc60;
   if (*(int*)( this + 0x290 ) != 0) {
      finish(this);
   }
   if (singleton == this) {
      singleton = (WorkerThreadPool*)0x0;
      for (puVar3 = (undefined8*)named_pools._24_8_; puVar3 != (undefined8*)0x0; puVar3 = (undefined8*)*puVar3) {
         this_00 = (WorkerThreadPool*)puVar3[3];
         if (*(int*)( this_00 + 0x290 ) != 0) {
            finish(this_00);
            this_00 = (WorkerThreadPool*)puVar3[3];
         }
         cVar4 = predelete_handler((Object*)this_00);
         if (cVar4 != '\0') {
            ( **(code**)( *(long*)this_00 + 0x140 ) )(this_00);
            Memory::free_static(this_00, false);
         }
      }
      if (( named_pools._8_8_ != 0 ) && ( named_pools._44_4_ != 0 )) {
         lVar6 = 0;
         uVar8 = *(uint*)( hash_table_size_primes + (ulong)(uint)named_pools._40_4_ * 4 );
         if (uVar8 != 0) {
            do {
               if (*(int*)( named_pools._16_8_ + lVar6 ) != 0) {
                  *(int*)( named_pools._16_8_ + lVar6 ) = 0;
                  pvVar7 = *(void**)( named_pools._8_8_ + lVar6 * 2 );
                  if (( StringName::configured != '\0' ) && ( *(long*)( (long)pvVar7 + 0x10 ) != 0 )) {
                     StringName::unref();
                  }
                  Memory::free_static(pvVar7, false);
                  *(undefined8*)( named_pools._8_8_ + lVar6 * 2 ) = 0;
               }
               lVar6 = lVar6 + 4;
            } while ( (ulong)uVar8 << 2 != lVar6 );
         }
         named_pools._44_4_ = 0;
         named_pools._24_16_ = (undefined1[16])0x0;
      }
   }
   pvVar7 = *(void**)( this + 0x400 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x424 ) != 0) {
         uVar8 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x420 ) * 4 );
         if (uVar8 != 0) {
            lVar6 = *(long*)( this + 0x408 );
            uVar5 = 0;
            do {
               if (*(int*)( lVar6 + uVar5 * 4 ) != 0) {
                  *(undefined4*)( lVar6 + uVar5 * 4 ) = 0;
                  uVar2 = *(uint*)( this + 0x3ac );
                  *(undefined8*)( *(long*)( *(long*)( this + 0x3a0 ) + ( ulong )(uVar2 >> ( ( byte ) * (undefined4*)( this + 0x3b0 ) & 0x1f )) * 8 ) + ( ulong )(uVar2 & *(uint*)( this + 0x3b4 )) * 8 ) = *(undefined8*)( (long)pvVar7 + uVar5 * 8 );
                  *(uint*)( this + 0x3ac ) = uVar2 + 1;
                  *(undefined8*)( (long)pvVar7 + uVar5 * 8 ) = 0;
               }
               uVar5 = uVar5 + 1;
            } while ( uVar8 != uVar5 );
         }
         *(undefined4*)( this + 0x424 ) = 0;
         *(undefined1(*) [16])( this + 0x410 ) = (undefined1[16])0x0;
      }
      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x408 ), false);
   }
   if (*(uint*)( this + 0x3ac ) < ( uint )(*(int*)( this + 0x3b8 ) * *(int*)( this + 0x3a8 ))) {
      if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
         local_50 = 0;
         String::parse_latin1((String*)&local_50, "14HashMapElementIlPN16WorkerThreadPool5GroupEE");
         local_48 = "Pages in use exist at exit in PagedAllocator: ";
         local_58 = 0;
         local_40 = 0x2e;
         String::parse_latin1((StrRange*)&local_58);
         String::operator +((String*)&local_48, (String*)&local_58);
         _err_print_error("~PagedAllocator", "./core/templates/paged_allocator.h", 0xaa, (String*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }
   } else if (*(int*)( this + 0x3a8 ) != 0) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x398 ) + lVar6 * 8 ), false);
         lVar1 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x3a0 ) + lVar1 ), false);
      } while ( (uint)lVar6 < *(uint*)( this + 0x3a8 ) );
      Memory::free_static(*(void**)( this + 0x398 ), false);
      Memory::free_static(*(void**)( this + 0x3a0 ), false);
   }
   pvVar7 = *(void**)( this + 0x370 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x394 ) != 0) {
         uVar8 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x390 ) * 4 );
         if (uVar8 != 0) {
            lVar6 = *(long*)( this + 0x378 );
            uVar5 = 0;
            do {
               if (*(int*)( lVar6 + uVar5 * 4 ) != 0) {
                  *(undefined4*)( lVar6 + uVar5 * 4 ) = 0;
                  uVar2 = *(uint*)( this + 0x31c );
                  *(undefined8*)( *(long*)( *(long*)( this + 0x310 ) + ( ulong )(uVar2 >> ( ( byte ) * (undefined4*)( this + 800 ) & 0x1f )) * 8 ) + ( ulong )(uVar2 & *(uint*)( this + 0x324 )) * 8 ) = *(undefined8*)( (long)pvVar7 + uVar5 * 8 );
                  *(uint*)( this + 0x31c ) = uVar2 + 1;
                  *(undefined8*)( (long)pvVar7 + uVar5 * 8 ) = 0;
               }
               uVar5 = uVar5 + 1;
            } while ( uVar8 != uVar5 );
         }
         *(undefined4*)( this + 0x394 ) = 0;
         *(undefined1(*) [16])( this + 0x380 ) = (undefined1[16])0x0;
      }
      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x378 ), false);
   }
   if (*(uint*)( this + 0x31c ) < ( uint )(*(int*)( this + 0x328 ) * *(int*)( this + 0x318 ))) {
      if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
         local_50 = 0;
         String::parse_latin1((String*)&local_50, "14HashMapElementIlPN16WorkerThreadPool4TaskEE");
         local_48 = "Pages in use exist at exit in PagedAllocator: ";
         local_58 = 0;
         local_40 = 0x2e;
         String::parse_latin1((StrRange*)&local_58);
         String::operator +((String*)&local_48, (String*)&local_58);
         _err_print_error("~PagedAllocator", "./core/templates/paged_allocator.h", 0xaa, (String*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }
   } else if (*(int*)( this + 0x318 ) != 0) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x308 ) + lVar6 * 8 ), false);
         lVar1 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x310 ) + lVar1 ), false);
      } while ( (uint)lVar6 < *(uint*)( this + 0x318 ) );
      Memory::free_static(*(void**)( this + 0x308 ), false);
      Memory::free_static(*(void**)( this + 0x310 ), false);
   }
   pvVar7 = *(void**)( this + 0x2e0 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x304 ) != 0) {
         uVar8 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x300 ) * 4 );
         if (uVar8 == 0) {
            *(undefined4*)( this + 0x304 ) = 0;
            *(undefined1(*) [16])( this + 0x2f0 ) = (undefined1[16])0x0;
         } else {
            lVar6 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x2e8 ) + lVar6 ) != 0) {
                  *(int*)( *(long*)( this + 0x2e8 ) + lVar6 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar7 + lVar6 * 2 ), false);
                  pvVar7 = *(void**)( this + 0x2e0 );
                  *(undefined8*)( (long)pvVar7 + lVar6 * 2 ) = 0;
               }
               lVar6 = lVar6 + 4;
            } while ( lVar6 != (ulong)uVar8 << 2 );
            *(undefined4*)( this + 0x304 ) = 0;
            *(undefined1(*) [16])( this + 0x2f0 ) = (undefined1[16])0x0;
            if (pvVar7 == (void*)0x0) goto LAB_001025af;
         }
      }
      Memory::free_static(pvVar7, false);
      Memory::free_static(*(void**)( this + 0x2e8 ), false);
   }
   LAB_001025af:std::condition_variable::~condition_variable((condition_variable*)( this + 0x2a8 ));
   pvVar7 = *(void**)( this + 0x298 );
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( this + 0x290 ) != 0) {
         uVar8 = 0;
         lVar6 = 0;
         while (true) {
            uVar8 = uVar8 + 1;
            std::condition_variable::~condition_variable((condition_variable*)( (long)pvVar7 + lVar6 + 0x30 ));
            Thread::~Thread((Thread*)( (long)pvVar7 + lVar6 + 8 ));
            if (*(uint*)( this + 0x290 ) <= uVar8) break;
            pvVar7 = *(void**)( this + 0x298 );
            lVar6 = lVar6 + 0x68;
         };
         pvVar7 = *(void**)( this + 0x298 );
         *(undefined4*)( this + 0x290 ) = 0;
         if (pvVar7 == (void*)0x0) goto LAB_00102628;
      }
      Memory::free_static(pvVar7, false);
   }
   LAB_00102628:if (*(uint*)( this + 500 ) < ( uint )(*(int*)( this + 0x200 ) * *(int*)( this + 0x1f0 ))) {
      if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
         local_50 = 0;
         String::parse_latin1((String*)&local_50, "N16WorkerThreadPool5GroupE");
         local_48 = "Pages in use exist at exit in PagedAllocator: ";
         local_58 = 0;
         local_40 = 0x2e;
         String::parse_latin1((StrRange*)&local_58);
         String::operator +((String*)&local_48, (String*)&local_58);
         _err_print_error("~PagedAllocator", "./core/templates/paged_allocator.h", 0xaa, (String*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }
   } else if (*(int*)( this + 0x1f0 ) != 0) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x1e0 ) + lVar6 * 8 ), false);
         lVar1 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x1e8 ) + lVar1 ), false);
      } while ( (uint)lVar6 < *(uint*)( this + 0x1f0 ) );
      Memory::free_static(*(void**)( this + 0x1e0 ), false);
      Memory::free_static(*(void**)( this + 0x1e8 ), false);
   }
   if (*(uint*)( this + 0x18c ) < ( uint )(*(int*)( this + 0x198 ) * *(int*)( this + 0x188 ))) {
      if ((char)CoreGlobals::leak_reporting_enabled != '\0') {
         local_50 = 0;
         local_40 = 0x19;
         local_48 = "N16WorkerThreadPool4TaskE";
         String::parse_latin1((StrRange*)&local_50);
         local_58 = 0;
         String::parse_latin1((String*)&local_58, "Pages in use exist at exit in PagedAllocator: ");
         String::operator +((String*)&local_48, (String*)&local_58);
         _err_print_error("~PagedAllocator", "./core/templates/paged_allocator.h", 0xaa, (String*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
      }
   } else if (*(int*)( this + 0x188 ) != 0) {
      lVar6 = 0;
      do {
         Memory::free_static(*(void**)( *(long*)( this + 0x178 ) + lVar6 * 8 ), false);
         lVar1 = lVar6 * 8;
         lVar6 = lVar6 + 1;
         Memory::free_static(*(void**)( *(long*)( this + 0x180 ) + lVar1 ), false);
      } while ( (uint)lVar6 < *(uint*)( this + 0x188 ) );
      Memory::free_static(*(void**)( this + 0x178 ), false);
      Memory::free_static(*(void**)( this + 0x180 ), false);
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      Object::~Object((Object*)this);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::~WorkerThreadPool() */void WorkerThreadPool::~WorkerThreadPool(WorkerThreadPool *this) {
   ~WorkerThreadPool(this)
   ;;
   operator_delete(this, 0x440);
   return;
}/* WorkerThreadPool::_bind_methods() */void WorkerThreadPool::_bind_methods(void) {
   Variant *pVVar1;
   long lVar2;
   code *pcVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   long *plVar7;
   MethodBind *pMVar8;
   Variant *pVVar9;
   long *plVar10;
   uint uVar11;
   long lVar12;
   long in_FS_OFFSET;
   undefined8 local_190;
   long local_188[2];
   long *local_178;
   char *local_168;
   char *pcStack_160;
   char *local_158;
   undefined8 local_150;
   Variant *local_148;
   Variant *pVStack_140;
   char **local_138;
   char *local_128;
   char *pcStack_120;
   char *local_118;
   char *pcStack_110;
   char *local_108;
   undefined8 local_100;
   Variant *local_f8;
   undefined1 auStack_f0[16];
   char **ppcStack_e0;
   char **local_d8;
   undefined8 local_c8;
   undefined1 local_c0[16];
   Variant local_b0[8];
   Variant *local_a8;
   undefined1 local_a0[16];
   Variant local_90[24];
   Variant local_78[24];
   undefined8 local_60;
   undefined1 local_58[16];
   Variant local_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_190 = 0;
   local_150 = 0;
   local_158 = "description";
   local_148 = (Variant*)&local_168;
   local_168 = "action";
   pcStack_160 = "high_priority";
   pVStack_140 = (Variant*)&pcStack_160;
   local_138 = &local_158;
   D_METHODP((char*)local_188, (char***)"add_task", ( uint ) & local_148);
   Variant::Variant((Variant*)&local_f8, false);
   Variant::Variant((Variant*)&ppcStack_e0, (String*)&local_190);
   local_c0 = (undefined1[16])0x0;
   local_c8 = 0;
   local_148 = (Variant*)&local_f8;
   pVStack_140 = (Variant*)&ppcStack_e0;
   pMVar8 = create_method_bind<WorkerThreadPool,long,Callable_const&,bool,String_const&>(add_task);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)local_188, &local_148, 2);
   pVVar9 = local_b0;
   do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
      plVar7 = local_178;
   } while ( pVVar9 != (Variant*)&local_f8 );
   if (local_178 != (long*)0x0) {
      LOCK();
      plVar10 = local_178 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_178 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_178[-1];
         local_178 = (long*)0x0;
         if (lVar2 != 0) {
            lVar12 = 0;
            plVar10 = plVar7;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            } while ( lVar2 != lVar12 );
         }
         Memory::free_static(plVar7 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   pVStack_140 = (Variant*)0x0;
   local_148 = (Variant*)0x106727;
   uVar11 = (uint)(Variant*)&local_f8;
   local_f8 = (Variant*)&local_148;
   D_METHODP((char*)local_188, (char***)"is_task_completed", uVar11);
   auStack_f0 = (undefined1[16])0x0;
   local_f8 = (Variant*)0x0;
   pMVar8 = create_method_bind<WorkerThreadPool,bool,long>(is_task_completed);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_f8] != '\0') {
      Variant::_clear_internal();
   }
   plVar7 = local_178;
   if (local_178 != (long*)0x0) {
      LOCK();
      plVar10 = local_178 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_178 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_178[-1];
         local_178 = (long*)0x0;
         if (lVar2 != 0) {
            lVar12 = 0;
            plVar10 = plVar7;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            } while ( lVar2 != lVar12 );
         }
         Memory::free_static(plVar7 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }
   local_148 = (Variant*)0x106727;
   pVStack_140 = (Variant*)0x0;
   local_f8 = (Variant*)&local_148;
   D_METHODP((char*)local_188, (char***)"wait_for_task_completion", uVar11);
   auStack_f0 = (undefined1[16])0x0;
   local_f8 = (Variant*)0x0;
   pMVar8 = create_method_bind<WorkerThreadPool,Error,long>(wait_for_task_completion);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_f8] != '\0') {
      Variant::_clear_internal();
   }
   plVar7 = local_178;
   if (local_178 != (long*)0x0) {
      LOCK();
      plVar10 = local_178 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_178 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_178[-1];
         local_178 = (long*)0x0;
         if (lVar2 != 0) {
            lVar12 = 0;
            plVar10 = plVar7;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            } while ( lVar2 != lVar12 );
         }
         Memory::free_static(plVar7 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }
   local_108 = "description";
   local_d8 = &local_108;
   local_128 = "action";
   pcStack_120 = "elements";
   local_118 = "tasks_needed";
   pcStack_110 = "high_priority";
   auStack_f0._8_8_ = &local_118;
   auStack_f0._0_8_ = &pcStack_120;
   local_190 = 0;
   local_100 = 0;
   local_f8 = (Variant*)&local_128;
   ppcStack_e0 = &pcStack_110;
   D_METHODP((char*)local_188, (char***)"add_group_task", uVar11);
   Variant::Variant((Variant*)&local_a8, -1);
   Variant::Variant(local_90, false);
   Variant::Variant(local_78, (String*)&local_190);
   pVVar9 = local_48;
   local_58 = (undefined1[16])0x0;
   auStack_f0._8_8_ = local_78;
   auStack_f0._0_8_ = local_90;
   local_60 = 0;
   local_f8 = (Variant*)&local_a8;
   pMVar8 = create_method_bind<WorkerThreadPool,long,Callable_const&,int,int,bool,String_const&>(add_group_task);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)local_188, &local_f8, 3);
   do {
      pVVar1 = pVVar9 + -0x18;
      pVVar9 = pVVar9 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
      plVar7 = local_178;
   } while ( pVVar9 != (Variant*)&local_a8 );
   if (local_178 != (long*)0x0) {
      LOCK();
      plVar10 = local_178 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_178 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_178[-1];
         local_178 = (long*)0x0;
         if (lVar2 != 0) {
            lVar12 = 0;
            plVar10 = plVar7;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            } while ( lVar2 != lVar12 );
         }
         Memory::free_static(plVar7 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_190);
   local_f8 = (Variant*)0x106757;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = auStack_f0._8_8_;
   auStack_f0 = auVar4 << 0x40;
   uVar11 = (uint)(Variant*)&local_a8;
   local_a8 = (Variant*)&local_f8;
   D_METHODP((char*)local_188, (char***)"is_group_task_completed", uVar11);
   local_a0 = (undefined1[16])0x0;
   local_a8 = (Variant*)0x0;
   pMVar8 = create_method_bind<WorkerThreadPool,bool,long>(is_group_task_completed);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   plVar7 = local_178;
   if (local_178 != (long*)0x0) {
      LOCK();
      plVar10 = local_178 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_178 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_178[-1];
         local_178 = (long*)0x0;
         if (lVar2 != 0) {
            lVar12 = 0;
            plVar10 = plVar7;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            } while ( lVar2 != lVar12 );
         }
         Memory::free_static(plVar7 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }
   auVar5._8_8_ = 0;
   auVar5._0_8_ = auStack_f0._8_8_;
   auStack_f0 = auVar5 << 0x40;
   local_f8 = (Variant*)0x106757;
   local_a8 = (Variant*)&local_f8;
   D_METHODP((char*)local_188, (char***)"get_group_processed_element_count", uVar11);
   local_a0 = (undefined1[16])0x0;
   local_a8 = (Variant*)0x0;
   pMVar8 = create_method_bind<WorkerThreadPool,unsigned_int,long>(get_group_processed_element_count);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   plVar7 = local_178;
   if (local_178 != (long*)0x0) {
      LOCK();
      plVar10 = local_178 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_178 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_178[-1];
         local_178 = (long*)0x0;
         if (lVar2 != 0) {
            lVar12 = 0;
            plVar10 = plVar7;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            } while ( lVar2 != lVar12 );
         }
         Memory::free_static(plVar7 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }
   auVar6._8_8_ = 0;
   auVar6._0_8_ = auStack_f0._8_8_;
   auStack_f0 = auVar6 << 0x40;
   local_f8 = (Variant*)0x106757;
   local_a8 = (Variant*)&local_f8;
   D_METHODP((char*)local_188, (char***)"wait_for_group_task_completion", uVar11);
   local_a0 = (undefined1[16])0x0;
   local_a8 = (Variant*)0x0;
   pMVar8 = create_method_bind<WorkerThreadPool,long>(wait_for_group_task_completion);
   ClassDB::bind_methodfi(1, pMVar8, false, (MethodDefinition*)local_188, (Variant**)0x0, 0);
   if (Variant::needs_deinit[(int)local_a8] != '\0') {
      Variant::_clear_internal();
   }
   plVar7 = local_178;
   if (local_178 != (long*)0x0) {
      LOCK();
      plVar10 = local_178 + -2;
      *plVar10 = *plVar10 + -1;
      UNLOCK();
      if (*plVar10 == 0) {
         if (local_178 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar2 = local_178[-1];
         local_178 = (long*)0x0;
         if (lVar2 != 0) {
            lVar12 = 0;
            plVar10 = plVar7;
            do {
               if (( StringName::configured != '\0' ) && ( *plVar10 != 0 )) {
                  StringName::unref();
               }
               lVar12 = lVar12 + 1;
               plVar10 = plVar10 + 1;
            } while ( lVar2 != lVar12 );
         }
         Memory::free_static(plVar7 + -2, false);
      }
   }
   if (( StringName::configured != '\0' ) && ( local_188[0] != 0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WARNING: Removing unreachable block (ram,0x001039d0) *//* WorkerThreadPool::_process_task(WorkerThreadPool::Task*) */void WorkerThreadPool::_process_task(WorkerThreadPool *this, Task *param_1) {
   int *piVar1;
   pthread_mutex_t *__mutex;
   ThreadData *pTVar2;
   byte *pbVar3;
   Task TVar4;
   uint uVar5;
   int iVar6;
   long lVar7;
   code *pcVar8;
   long *plVar9;
   long lVar10;
   bool bVar11;
   bool bVar12;
   char cVar13;
   int iVar14;
   uint *puVar15;
   undefined8 *puVar16;
   CallQueue *pCVar17;
   undefined8 *puVar18;
   long lVar19;
   uint uVar20;
   long in_FS_OFFSET;
   undefined4 local_b8;
   undefined4 uStack_b4;
   undefined4 uStack_b0;
   Variant *local_a8[2];
   int local_98[2];
   undefined1 local_90[16];
   int local_78[6];
   int local_60[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
      /* WARNING: Subroutine does not return */
      Thread::caller_id();
   }
   local_b8 = ( undefined4 ) * (undefined8*)( in_FS_OFFSET + lRam000000000010380b );
   uStack_b4 = ( undefined4 )(( ulong ) * (undefined8*)( in_FS_OFFSET + lRam000000000010380b ) >> 0x20);
   puVar15 = (uint*)HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::operator []((HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>*)( this + 0x2d8 ), (ulong*)&local_b8);
   uVar5 = *(uint*)( this + 0x290 );
   uVar20 = *puVar15;
   if (uVar5 <= uVar20) {
      LAB_00103e13:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar20, (ulong)uVar5, "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar8 = (code*)invalidInstructionException();
      ( *pcVar8 )();
   }
   pTVar2 = (ThreadData*)( *(long*)( this + 0x298 ) + (ulong)uVar20 * 0x68 );
   bVar12 = (bool)is_current_thread_safe_for_nodes();
   MessageQueue::thread_singleton();
   lVar7 = lRam0000000000103878;
   if (( *(long*)( in_FS_OFFSET + lRam0000000000103878 ) == 0 ) || ( MessageQueue::thread_singleton(),MessageQueue::main_singleton == *(CallQueue**)( in_FS_OFFSET + lVar7 ) )) {
      pCVar17 = (CallQueue*)0x0;
   } else {
      MessageQueue::thread_singleton();
      pCVar17 = MessageQueue::main_singleton;
      if (*(long*)( in_FS_OFFSET + lVar7 ) != 0) {
         MessageQueue::thread_singleton();
         pCVar17 = *(CallQueue**)( in_FS_OFFSET + lVar7 );
      }
   }
   __mutex = (pthread_mutex_t*)( this + 0x268 );
   set_current_thread_safe_for_nodes(false);
   MessageQueue::set_thread_singleton_override((CallQueue*)0x0);
   ScriptServer::thread_enter();
   iVar14 = pthread_mutex_lock(__mutex);
   if (iVar14 != 0) goto LAB_001040aa;
   *(uint*)( param_1 + 0xe0 ) = uVar20;
   lVar7 = *(long*)( pTVar2 + 0x20 );
   *(Task**)( pTVar2 + 0x20 ) = param_1;
   if (( (byte)param_1[0x98] & 2 ) != 0) {
      pTVar2[0x18] = ( ThreadData )((byte)pTVar2[0x18] | 2);
   }
   bVar11 = false;
   pthread_mutex_unlock(__mutex);
   TVar4 = param_1[0xd0];
   lVar19 = *(long*)( param_1 + 0xa0 );
   if (lVar19 != 0) {
      while (true) {
         LOCK();
         puVar15 = (uint*)( lVar19 + 8 );
         uVar20 = *puVar15;
         *puVar15 = *puVar15 + 1;
         UNLOCK();
         lVar19 = *(long*)( param_1 + 0xa0 );
         if (*(uint*)( lVar19 + 0x10 ) <= uVar20) break;
         if (*(code**)( param_1 + 0x20 ) == (code*)0x0) {
            if (*(long**)( param_1 + 0xd8 ) == (long*)0x0) {
               Variant::Variant((Variant*)local_78, uVar20);
               Variant::Variant((Variant*)local_60, 0);
               local_98[0] = 0;
               local_b8 = 0;
               uStack_b4 = 0;
               uStack_b0 = 0;
               local_90 = (undefined1[16])0x0;
               local_a8[0] = (Variant*)local_78;
               Callable::callp((Variant**)( param_1 + 8 ), (int)local_a8, (Variant*)0x1, (CallError*)local_98);
               if (Variant::needs_deinit[local_60[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (Variant::needs_deinit[local_78[0]] != '\0') {
                  Variant::_clear_internal();
               }
               if (Variant::needs_deinit[local_98[0]] != '\0') {
                  Variant::_clear_internal();
               }
               lVar19 = *(long*)( param_1 + 0xa0 );
            } else {
               pcVar8 = *(code**)( **(long**)( param_1 + 0xd8 ) + 8 );
               if (pcVar8 != BaseTemplateUserdata::callback_indexed) {
                  ( *pcVar8 )();
                  lVar19 = *(long*)( param_1 + 0xa0 );
               }
            }
         } else {
            ( **(code**)( param_1 + 0x20 ) )(*(undefined8*)( param_1 + 0x28 ));
            lVar19 = *(long*)( param_1 + 0xa0 );
         }
         LOCK();
         piVar1 = (int*)( lVar19 + 0xc );
         iVar14 = *piVar1;
         *piVar1 = *piVar1 + 1;
         UNLOCK();
         lVar19 = *(long*)( param_1 + 0xa0 );
         if (*(int*)( lVar19 + 0x10 ) == iVar14 + 1) {
            bVar11 = true;
         }
      };
      if (bVar11) {
         plVar9 = *(long**)( param_1 + 0xd8 );
         if (plVar9 != (long*)0x0) {
            if (*(code**)( *plVar9 + 0x10 ) != BaseTemplateUserdata::~BaseTemplateUserdata) {
               ( **(code**)( *plVar9 + 0x10 ) )();
            }
            Memory::free_static(plVar9, false);
            lVar19 = *(long*)( param_1 + 0xa0 );
         }
         iVar14 = pthread_mutex_lock((pthread_mutex_t*)( lVar19 + 0x18 ));
         if (iVar14 != 0) goto LAB_001040aa;
         *(int*)( lVar19 + 0x70 ) = *(int*)( lVar19 + 0x70 ) + 1;
         std::condition_variable::notify_one();
         pthread_mutex_unlock((pthread_mutex_t*)( lVar19 + 0x18 ));
         *(undefined1*)( *(long*)( param_1 + 0xa0 ) + 0x78 ) = 1;
         lVar19 = *(long*)( param_1 + 0xa0 );
      }
      LOCK();
      piVar1 = (int*)( lVar19 + 0x7c );
      iVar14 = *piVar1;
      *piVar1 = *piVar1 + 1;
      UNLOCK();
      if (*(int*)( lVar19 + 0x80 ) + 1 == iVar14 + 1) {
         iVar14 = pthread_mutex_lock(__mutex);
         if (iVar14 != 0) goto LAB_001040aa;
         lVar19 = *(long*)( param_1 + 0xa0 );
         iVar14 = pthread_mutex_lock((pthread_mutex_t*)( lVar19 + 0x18 ));
         if (iVar14 != 0) goto LAB_001040aa;
         if (*(int*)( lVar19 + 0x74 ) != 0) {
            _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
            std::condition_variable::condition_variable((condition_variable*)( lVar19 + 0x40 ));
         }
         pthread_mutex_unlock((pthread_mutex_t*)( lVar19 + 0x18 ));
         std::condition_variable::~condition_variable((condition_variable*)( lVar19 + 0x40 ));
         uVar20 = *(uint*)( this + 500 );
         *(long*)( *(long*)( *(long*)( this + 0x1e8 ) + ( ulong )(uVar20 >> ( ( byte ) * (undefined4*)( this + 0x1f8 ) & 0x1f )) * 8 ) + ( ulong )(uVar20 & *(uint*)( this + 0x1fc )) * 8 ) = lVar19;
         *(uint*)( this + 500 ) = uVar20 + 1;
         pthread_mutex_unlock(__mutex);
      }
      iVar14 = pthread_mutex_lock(__mutex);
      if (iVar14 == 0) {
         plVar9 = *(long**)( param_1 + 0xa8 );
         if (plVar9 != (long*)0x0) {
            lVar19 = *(long*)( param_1 + 0xb8 );
            if (lVar19 != 0) {
               *(undefined8*)( lVar19 + 0x18 ) = *(undefined8*)( param_1 + 0xc0 );
            }
            lVar10 = *(long*)( param_1 + 0xc0 );
            if (lVar10 != 0) {
               *(long*)( lVar10 + 0x10 ) = lVar19;
            }
            if (param_1 + 0xa8 == (Task*)*plVar9) {
               *plVar9 = *(long*)( param_1 + 0xb8 );
            }
            if (param_1 + 0xa8 == (Task*)plVar9[1]) {
               plVar9[1] = lVar10;
            }
         }
         iVar14 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x38 ));
         if (iVar14 == 0) {
            if (*(int*)( param_1 + 0x94 ) != 0) {
               _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
               std::condition_variable::condition_variable((condition_variable*)( param_1 + 0x60 ));
            }
            pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x38 ));
            std::condition_variable::~condition_variable((condition_variable*)( param_1 + 0x60 ));
            CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
            Callable::~Callable((Callable*)( param_1 + 8 ));
            uVar20 = *(uint*)( this + 0x18c );
            *(Task**)( *(long*)( *(long*)( this + 0x180 ) + ( ulong )(uVar20 >> ( ( byte ) * (undefined4*)( this + 400 ) & 0x1f )) * 8 ) + ( ulong )(uVar20 & *(uint*)( this + 0x194 )) * 8 ) = param_1;
            *(uint*)( this + 0x18c ) = uVar20 + 1;
            goto LAB_00103b6e;
         }
      }
      LAB_001040aa:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar14);
   }
   if (*(code**)( param_1 + 0x18 ) == (code*)0x0) {
      puVar18 = *(undefined8**)( param_1 + 0xd8 );
      if (puVar18 == (undefined8*)0x0) {
         Variant::Variant((Variant*)local_78, 0);
         local_90 = (undefined1[16])0x0;
         local_98[0] = 0;
         local_b8 = 0;
         uStack_b4 = 0;
         uStack_b0 = 0;
         Callable::callp((Variant**)( param_1 + 8 ), 0, (Variant*)0x0, (CallError*)local_98);
         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }
         if (Variant::needs_deinit[local_98[0]] != '\0') {
            Variant::_clear_internal();
         }
      } else {
         puVar16 = (undefined8*)*puVar18;
         if ((code*)*puVar16 != BaseTemplateUserdata::callback) {
            ( *(code*)*puVar16 )();
            puVar18 = *(undefined8**)( param_1 + 0xd8 );
            puVar16 = (undefined8*)*puVar18;
         }
         if ((code*)puVar16[2] != BaseTemplateUserdata::~BaseTemplateUserdata) {
            ( *(code*)puVar16[2] )();
         }
         Memory::free_static(puVar18, false);
      }
   } else {
      ( **(code**)( param_1 + 0x18 ) )(*(undefined8*)( param_1 + 0x28 ));
   }
   iVar14 = pthread_mutex_lock(__mutex);
   if (iVar14 != 0) goto LAB_001040aa;
   iVar6 = *(int*)( param_1 + 0xcc );
   param_1[0x98] = ( Task )((byte)param_1[0x98] | 1);
   *(undefined4*)( param_1 + 0xe0 ) = 0xffffffff;
   if (iVar6 != 0) {
      iVar14 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x38 ));
      if (iVar14 != 0) goto LAB_001040aa;
      *(int*)( param_1 + 0x90 ) = *(int*)( param_1 + 0x90 ) + iVar6;
      iVar14 = 0;
      do {
         iVar14 = iVar14 + 1;
         std::condition_variable::notify_one();
      } while ( iVar6 != iVar14 );
      pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x38 ));
   }
   lVar19 = 0;
   uVar20 = 0;
   if (*(int*)( this + 0x290 ) != 0) {
      do {
         if (*(Task**)( *(long*)( this + 0x298 ) + lVar19 + 0x28 ) == param_1) {
            std::condition_variable::notify_one();
            uVar5 = *(uint*)( this + 0x290 );
            if (uVar5 <= uVar20) goto LAB_00103e13;
            pbVar3 = (byte*)( *(long*)( this + 0x298 ) + 0x18 + lVar19 );
            *pbVar3 = *pbVar3 | 1;
         }
         uVar20 = uVar20 + 1;
         lVar19 = lVar19 + 0x68;
      } while ( uVar20 < *(uint*)( this + 0x290 ) );
   }
   LAB_00103b6e:*(long*)( pTVar2 + 0x20 ) = lVar7;
   if (TVar4 != (Task)0x0) {
      *(int*)( this + 0x42c ) = *(int*)( this + 0x42c ) + -1;
      cVar13 = _try_promote_low_priority_task(this);
      if (( lVar7 != 0 ) && ( cVar13 != '\0' )) {
         _notify_threads(this, pTVar2, 1, 0);
      }
   }
   pthread_mutex_unlock(__mutex);
   set_current_thread_safe_for_nodes(bVar12);
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      MessageQueue::set_thread_singleton_override(pCVar17);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::_thread_function(void*) */void WorkerThreadPool::_thread_function(void *param_1) {
   long lVar1;
   long *plVar2;
   Task *pTVar3;
   long lVar4;
   char cVar5;
   int iVar6;
   long lVar7;
   long in_FS_OFFSET;
   pthread_mutex_t *local_38;
   char local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   while (true) {
      local_30 = 0;
      local_38 = (pthread_mutex_t*)( *(long*)( (long)param_1 + 0x60 ) + 0x268 );
      iVar6 = pthread_mutex_lock(local_38);
      if (iVar6 != 0) {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(iVar6);
      }
      local_30 = '\x01';
      cVar5 = _handle_runlevel(*(WorkerThreadPool**)( (long)param_1 + 0x60 ), (ThreadData*)param_1, (MutexLock*)&local_38);
      if (cVar5 != '\0') break;
      lVar1 = *(long*)( (long)param_1 + 0x60 );
      *(byte*)( (long)param_1 + 0x18 ) = *(byte*)( (long)param_1 + 0x18 ) & 0xfe;
      plVar2 = *(long**)( lVar1 + 600 );
      if (plVar2 == (long*)0x0) {
         std::condition_variable::wait((unique_lock*)( (long)param_1 + 0x30 ));
         if (( local_30 != '\0' ) && ( local_38 != (pthread_mutex_t*)0x0 )) {
            pthread_mutex_unlock(local_38);
         }
      } else {
         pTVar3 = (Task*)plVar2[1];
         if (*plVar2 == lVar1 + 600) {
            lVar7 = plVar2[2];
            if (lVar7 != 0) {
               *(long*)( lVar7 + 0x18 ) = plVar2[3];
            }
            lVar4 = plVar2[3];
            if (lVar4 != 0) {
               *(long*)( lVar4 + 0x10 ) = lVar7;
               lVar7 = plVar2[2];
            }
            *(long*)( lVar1 + 600 ) = lVar7;
            if (plVar2 == *(long**)( lVar1 + 0x260 )) {
               *(long*)( lVar1 + 0x260 ) = lVar4;
            }
            *plVar2 = 0;
            *(undefined1(*) [16])( plVar2 + 2 ) = (undefined1[16])0x0;
         } else {
            _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
         }
         if (( local_30 != '\0' ) && ( local_38 != (pthread_mutex_t*)0x0 )) {
            pthread_mutex_unlock(local_38);
         }
         if (pTVar3 != (Task*)0x0) {
            _process_task(*(WorkerThreadPool**)( (long)param_1 + 0x60 ), pTVar3);
         }
      }
   };
   if (( local_30 != '\0' ) && ( local_38 != (pthread_mutex_t*)0x0 )) {
      pthread_mutex_unlock(local_38);
   }
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::_wait_collaboratively(WorkerThreadPool::ThreadData*, WorkerThreadPool::Task*)
    */void WorkerThreadPool::_wait_collaboratively(WorkerThreadPool *this, ThreadData *param_1, Task *param_2) {
   ThreadData TVar1;
   long *plVar2;
   Task *pTVar3;
   long lVar4;
   undefined8 *puVar5;
   char cVar6;
   int iVar7;
   uint uVar8;
   uint uVar9;
   long lVar10;
   long *plVar11;
   long *in_FS_OFFSET;
   bool bVar12;
   pthread_mutex_t *local_58;
   char local_50;
   long local_40;
   local_40 = in_FS_OFFSET[5];
   LAB_001042a7:do {
      local_50 = '\0';
      local_58 = (pthread_mutex_t*)( this + 0x268 );
      iVar7 = pthread_mutex_lock((pthread_mutex_t*)( this + 0x268 ));
      if (iVar7 != 0) {
         LAB_00104651:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar7);
      }
      TVar1 = param_1[0x18];
      local_50 = '\x01';
      param_1[0x18] = ( ThreadData )((byte)TVar1 & 0xfe);
      cVar6 = _handle_runlevel(this, param_1, (MutexLock*)&local_58);
      if (cVar6 != '\0') goto LAB_001044f8;
      if (param_2 == (Task*)0x1) {
         if (( (byte)param_1[0x18] & 2 ) != 0) {
            param_1[0x18] = ( ThreadData )((byte)param_1[0x18] & 0xfd);
            goto LAB_001044b8;
         }
      } else if (( (byte)param_2[0x98] & 1 ) != 0) {
         LAB_001044b8:if (( (byte)TVar1 & 1 ) != 0) {
            if (*(long*)( this + 600 ) == 0) {
               if (( *(char*)( *(long*)( param_1 + 0x20 ) + 0xd0 ) == '\0' ) || ( *(long*)( this + 0x248 ) == 0 )) goto LAB_001044f8;
               uVar8 = 1;
               uVar9 = 0;
            } else if (*(char*)( *(long*)( param_1 + 0x20 ) + 0xd0 ) == '\0') {
               uVar8 = 0;
               uVar9 = 1;
            } else {
               uVar9 = 1;
               uVar8 = ( uint )(*(long*)( this + 0x248 ) != 0);
            }
            param_1[0x18] = ( ThreadData )((byte)param_1[0x18] | 1);
            _notify_threads(this, param_1, uVar9, uVar8);
         }
         LAB_001044f8:if (( local_50 != '\0' ) && ( local_58 != (pthread_mutex_t*)0x0 )) {
            pthread_mutex_unlock(local_58);
         }
         if (local_40 != in_FS_OFFSET[5]) {
            /* WARNING: Subroutine does not return */
            __stack_chk_fail();
         }
         return;
      }
      if (( ( *(char*)( *(long*)( param_1 + 0x20 ) + 0xd0 ) != '\0' ) && ( *(long*)( this + 0x248 ) != 0 ) ) && ( cVar6 = _try_promote_low_priority_task(this) ),cVar6 != '\0') {
         _notify_threads(this, param_1, 1, 0);
      }
      if (*(long*)( *(long*)( param_1 + 0x60 ) + 600 ) == 0) {
         LAB_001043c8:bVar12 = singleton == this;
         *(Task**)( param_1 + 0x28 ) = param_2;
         if (bVar12) {
            puVar5 = (undefined8*)*in_FS_OFFSET;
            if (puVar5 != (undefined8*)0x0) {
               if (*(char*)( puVar5 + 1 ) == '\0') goto LAB_00104658;
               if ((pthread_mutex_t*)*puVar5 != (pthread_mutex_t*)0x0) {
                  pthread_mutex_unlock((pthread_mutex_t*)*puVar5);
                  *(undefined1*)( puVar5 + 1 ) = 0;
               }
            }
            puVar5 = (undefined8*)*in_FS_OFFSET;
            if (puVar5 != (undefined8*)0x0) {
               if (*(char*)( puVar5 + 1 ) == '\0') {
                  LAB_00104658:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
               }
               if ((pthread_mutex_t*)*puVar5 != (pthread_mutex_t*)0x0) {
                  pthread_mutex_unlock((pthread_mutex_t*)*puVar5);
                  *(undefined1*)( puVar5 + 1 ) = 0;
               }
            }
         }
         std::condition_variable::wait((unique_lock*)( param_1 + 0x30 ));
         *(undefined8*)( param_1 + 0x28 ) = 0;
         if (( local_50 != '\0' ) && ( local_58 != (pthread_mutex_t*)0x0 )) {
            pthread_mutex_unlock(local_58);
         }
         if (singleton == this) {
            plVar2 = (long*)*in_FS_OFFSET;
            plVar11 = plVar2;
            do {
               puVar5 = (undefined8*)*plVar11;
               if (puVar5 != (undefined8*)0x0) {
                  if ((pthread_mutex_t*)*puVar5 == (pthread_mutex_t*)0x0) goto LAB_00104658;
                  if (*(char*)( puVar5 + 1 ) != '\0') {
                     /* WARNING: Subroutine does not return */
                     std::__throw_system_error(0x23);
                  }
                  iVar7 = pthread_mutex_lock((pthread_mutex_t*)*puVar5);
                  if (iVar7 != 0) goto LAB_00104651;
                  *(undefined1*)( puVar5 + 1 ) = 1;
               }
               plVar11 = plVar11 + 2;
            } while ( plVar2 != plVar11 );
         }
         goto LAB_001042a7;
      }
      plVar2 = *(long**)( this + 600 );
      pTVar3 = (Task*)plVar2[1];
      if ((WorkerThreadPool*)*plVar2 == this + 600) {
         lVar10 = plVar2[2];
         if (lVar10 != 0) {
            *(long*)( lVar10 + 0x18 ) = plVar2[3];
         }
         lVar4 = plVar2[3];
         if (lVar4 != 0) {
            *(long*)( lVar4 + 0x10 ) = lVar10;
            lVar10 = plVar2[2];
         }
         *(long*)( this + 600 ) = lVar10;
         if (plVar2 == *(long**)( this + 0x260 )) {
            *(long*)( this + 0x260 ) = lVar4;
         }
         *plVar2 = 0;
         *(undefined1(*) [16])( plVar2 + 2 ) = (undefined1[16])0x0;
      } else {
         _err_print_error("remove", "./core/templates/self_list.h", 0x50, "Condition \"p_elem->_root != this\" is true.", 0, 0);
      }
      if (pTVar3 == (Task*)0x0) goto LAB_001043c8;
      if (( local_50 != '\0' ) && ( local_58 != (pthread_mutex_t*)0x0 )) {
         pthread_mutex_unlock(local_58);
      }
      _process_task(this, pTVar3);
   } while ( true );
}/* WorkerThreadPool::yield() */void WorkerThreadPool::yield(WorkerThreadPool *this) {
   pthread_mutex_t *__mutex;
   code *pcVar1;
   uint uVar2;
   int iVar3;
   uVar2 = get_thread_index(this);
   if (uVar2 == 0xffffffff) {
      _err_print_error("yield", "core/object/worker_thread_pool.cpp", 0x240, "Condition \"th_index == -1\" is true.", "This function can only be called from a worker thread.", 0, 0);
      return;
   }
   if (*(uint*)( this + 0x290 ) <= uVar2) {
      _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar2, ( ulong ) * (uint*)( this + 0x290 ), "p_index", "count", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar1 = (code*)invalidInstructionException();
      ( *pcVar1 )();
   }
   __mutex = (pthread_mutex_t*)( this + 0x268 );
   _wait_collaboratively(this, (ThreadData*)( *(long*)( this + 0x298 ) + (ulong)uVar2 * 0x68 ), (Task*)0x1);
   iVar3 = pthread_mutex_lock(__mutex);
   if (iVar3 != 0) {
      /* WARNING: Subroutine does not return */
      std::__throw_system_error(iVar3);
   }
   if (1 < *(int*)( this + 0x2a0 )) {
      pthread_mutex_unlock(__mutex);
      return;
   }
   pthread_mutex_unlock(__mutex);
   ScriptServer::thread_enter();
   return;
}/* WARNING: Removing unreachable block (ram,0x00104954) *//* WorkerThreadPool::_post_tasks(WorkerThreadPool::Task**, unsigned int, bool,
   MutexLock<MutexImpl<std::mutex> >&) [clone .part.0] */void WorkerThreadPool::_post_tasks(Task **param_1, uint param_2, bool param_3, MutexLock *param_4) {
   Task *pTVar1;
   long *plVar2;
   ulong uVar3;
   long lVar4;
   Task *pTVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   code *pcVar14;
   byte bVar15;
   ulong uVar16;
   uint *puVar17;
   int iVar18;
   undefined7 in_register_00000011;
   long lVar19;
   uint uVar20;
   undefined4 in_register_00000034;
   long *plVar21;
   ulong uVar22;
   uint uVar23;
   ulong uVar24;
   long in_FS_OFFSET;
   ThreadData *local_78;
   ulong local_48;
   long local_40;
   plVar21 = (long*)CONCAT44(in_register_00000034, param_2);
   bVar15 = (byte)param_4;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   iVar18 = *(int*)( param_1 + 0x54 );
   while (iVar18 == 2) {
      std::condition_variable::wait((unique_lock*)( param_1 + 0x55 ));
      iVar18 = *(int*)( param_1 + 0x54 );
   };
   if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
      /* WARNING: Subroutine does not return */
      Thread::caller_id();
   }
   uVar3 = *(ulong*)( in_FS_OFFSET + lRam0000000000104812 );
   local_78 = (ThreadData*)param_1[0x5c];
   if (local_78 != (ThreadData*)0x0) {
      if (*(int*)( (long)param_1 + 0x304 ) != 0) {
         uVar22 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x60 ) * 4 ));
         lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_1 + 0x60 ) * 8 );
         uVar16 = uVar3 * 0x3ffff - 1;
         uVar16 = ( uVar16 ^ uVar16 >> 0x1f ) * 0x15;
         uVar16 = ( uVar16 ^ uVar16 >> 0xb ) * 0x41;
         uVar16 = uVar16 >> 0x16 ^ uVar16;
         uVar24 = uVar16 & 0xffffffff;
         if ((int)uVar16 == 0) {
            uVar24 = 1;
         }
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar24 * lVar4;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = uVar22;
         lVar19 = SUB168(auVar6 * auVar10, 8);
         uVar20 = *(uint*)( param_1[0x5d] + lVar19 * 4 );
         uVar16 = (ulong)uVar20;
         iVar18 = SUB164(auVar6 * auVar10, 8);
         if (uVar20 != 0) {
            uVar20 = 0;
            do {
               if (( (int)uVar24 == (int)uVar16 ) && ( uVar3 == *(ulong*)( *(long*)( local_78 + lVar19 * 8 ) + 0x10 ) )) {
                  local_48 = uVar3;
                  puVar17 = (uint*)HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::operator []((HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>*)( param_1 + 0x5b ), &local_48);
                  uVar20 = *puVar17;
                  if (*(uint*)( param_1 + 0x52 ) <= uVar20) {
                     _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar20, ( ulong ) * (uint*)( param_1 + 0x52 ), "p_index", "count", "", false, true);
                     _err_flush_stdout();
                     /* WARNING: Does not return */
                     pcVar14 = (code*)invalidInstructionException();
                     ( *pcVar14 )();
                  }
                  local_78 = (ThreadData*)( param_1[0x53] + (ulong)uVar20 * 0x68 );
                  goto joined_r0x00104b23;
               }
               uVar20 = uVar20 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar18 + 1) * lVar4;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = uVar22;
               lVar19 = SUB168(auVar7 * auVar11, 8);
               uVar23 = *(uint*)( param_1[0x5d] + lVar19 * 4 );
               uVar16 = (ulong)uVar23;
               iVar18 = SUB164(auVar7 * auVar11, 8);
            } while ( ( uVar23 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar16 * lVar4,auVar12._8_8_ = 0,auVar12._0_8_ = uVar22,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_1 + 0x60 ) * 4 ) + iVar18 ) - SUB164(auVar8 * auVar12, 8)) * lVar4,auVar13._8_8_ = 0,auVar13._0_8_ = uVar22,uVar20 <= SUB164(auVar9 * auVar13, 8) );
         }
      }
      local_78 = (ThreadData*)0x0;
   }
   joined_r0x00104b23:if ((int)CONCAT71(in_register_00000011, param_3) == 0) {
      uVar23 = 0;
      uVar20 = 0;
   } else {
      uVar23 = 0;
      plVar2 = plVar21 + ( CONCAT71(in_register_00000011, param_3) & 0xffffffff );
      uVar20 = 0;
      do {
         while (true) {
            lVar4 = *plVar21;
            *(byte*)( lVar4 + 0xd0 ) = bVar15 ^ 1;
            if (( bVar15 != 0 ) || ( *(uint*)( (long)param_1 + 0x42c ) < *(uint*)( param_1 + 0x85 ) )) break;
            pTVar1 = (Task*)( lVar4 + 0xa8 );
            if (*(long*)( lVar4 + 0xa8 ) == 0) {
               pTVar5 = param_1[0x4a];
               *(Task***)( lVar4 + 0xa8 ) = param_1 + 0x49;
               *(undefined8*)( lVar4 + 0xb8 ) = 0;
               *(Task**)( lVar4 + 0xc0 ) = pTVar5;
               if (pTVar5 == (Task*)0x0) {
                  param_1[0x49] = pTVar1;
               } else {
                  *(Task**)( pTVar5 + 0x10 ) = pTVar1;
               }
               param_1[0x4a] = pTVar1;
            } else {
               _err_print_error("add_last", "./core/templates/self_list.h", 0x3f, "Condition \"p_elem->_root\" is true.", 0, 0);
            }
            plVar21 = plVar21 + 1;
            uVar23 = uVar23 + 1;
            if (plVar2 == plVar21) goto LAB_00104ac8;
         };
         pTVar1 = (Task*)( lVar4 + 0xa8 );
         if (*(long*)( lVar4 + 0xa8 ) == 0) {
            pTVar5 = param_1[0x4c];
            *(Task***)( lVar4 + 0xa8 ) = param_1 + 0x4b;
            *(undefined8*)( lVar4 + 0xb8 ) = 0;
            *(Task**)( lVar4 + 0xc0 ) = pTVar5;
            if (pTVar5 == (Task*)0x0) {
               param_1[0x4b] = pTVar1;
            } else {
               *(Task**)( pTVar5 + 0x10 ) = pTVar1;
            }
            param_1[0x4c] = pTVar1;
         } else {
            _err_print_error("add_last", "./core/templates/self_list.h", 0x3f, "Condition \"p_elem->_root\" is true.", 0, 0);
         }
         if (bVar15 == 0) {
            *(int*)( (long)param_1 + 0x42c ) = *(int*)( (long)param_1 + 0x42c ) + 1;
         }
         plVar21 = plVar21 + 1;
         uVar20 = uVar20 + 1;
      } while ( plVar2 != plVar21 );
   }
   LAB_00104ac8:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _notify_threads((WorkerThreadPool*)param_1, local_78, uVar20, uVar23);
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::_post_tasks(WorkerThreadPool::Task**, unsigned int, bool,
   MutexLock<MutexImpl<std::mutex> >&) */void WorkerThreadPool::_post_tasks(WorkerThreadPool *this, Task **param_1, uint param_2, bool param_3, MutexLock *param_4) {
   Task **ppTVar1;
   int iVar2;
   long lVar3;
   pthread_mutex_t *__mutex;
   if (*(int*)( this + 0x290 ) != 0) {
      _post_tasks((Task**)this, (uint)param_1, SUB41(param_2, 0), (MutexLock*)(ulong)param_3);
      return;
   }
   if (param_4[8] != (MutexLock)0x0) {
      if (*(pthread_mutex_t**)param_4 == (pthread_mutex_t*)0x0) {
         if (param_2 == 0) goto LAB_00104cc8;
      } else {
         pthread_mutex_unlock(*(pthread_mutex_t**)param_4);
         param_4[8] = (MutexLock)0x0;
         if (param_2 == 0) {
            __mutex = *(pthread_mutex_t**)param_4;
            if (__mutex == (pthread_mutex_t*)0x0) goto LAB_00104cc8;
            goto LAB_00104c95;
         }
      }
      lVar3 = 0;
      do {
         ppTVar1 = param_1 + lVar3;
         lVar3 = lVar3 + 1;
         _process_task(this, *ppTVar1);
      } while ( (uint)lVar3 < param_2 );
      __mutex = *(pthread_mutex_t**)param_4;
      if (__mutex != (pthread_mutex_t*)0x0) {
         if (param_4[8] != (MutexLock)0x0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(0x23);
         }
         LAB_00104c95:iVar2 = pthread_mutex_lock(__mutex);
         if (iVar2 != 0) {
            /* WARNING: Subroutine does not return */
            std::__throw_system_error(iVar2);
         }
         param_4[8] = (MutexLock)0x1;
         return;
      }
   }
   LAB_00104cc8:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
}/* WorkerThreadPool::_add_group_task(Callable const&, void (*)(void*, unsigned int), void*,
   WorkerThreadPool::BaseTemplateUserdata*, int, int, bool, String const&) */Callable * __thiscall
WorkerThreadPool::_add_group_task
          (WorkerThreadPool *this,Callable *param_1,_func_void_void_ptr_uint *param_2,void *param_3,
          BaseTemplateUserdata *param_4,int param_5,int param_6,bool param_7,String *param_8){
   long lVar1;
   int iVar2;
   Group *pGVar3;
   Task *pTVar4;
   undefined8 *puVar5;
   Task **ppTVar6;
   Task **ppTVar7;
   undefined1 *puVar8;
   undefined1 *puVar10;
   ulong uVar11;
   Callable *pCVar12;
   long in_FS_OFFSET;
   undefined3 in_stack_00000011;
   undefined1 auStack_b8[8];
   WorkerThreadPool *local_b0;
   Callable *local_a8;
   Task **local_a0;
   uint local_98;
   undefined4 local_94;
   PagedAllocator<WorkerThreadPool::Task,false,1024u> *local_90;
   Task **local_88;
   void *local_80;
   _func_void_void_ptr_uint *local_78;
   Callable *local_70;
   Callable *local_60;
   pthread_mutex_t *local_58;
   char local_50;
   long local_40;
   undefined1 *puVar9;
   puVar9 = auStack_b8;
   puVar8 = auStack_b8;
   puVar10 = auStack_b8;
   local_94 = _param_7;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_80 = param_3;
   local_78 = param_2;
   local_70 = param_1;
   if (param_5 < 0) {
      _err_print_error("_add_group_task", "core/object/worker_thread_pool.cpp", 0x266, "Condition \"p_elements < 0\" is true. Returning: INVALID_TASK_ID", 0, 0);
      pCVar12 = (Callable*)0xffffffffffffffff;
   } else {
      if (param_6 < 0) {
         param_6 = 1;
         if (*(int*)( this + 0x290 ) != 0) {
            param_6 = *(int*)( this + 0x290 );
         }
      }
      local_58 = (pthread_mutex_t*)( this + 0x268 );
      local_50 = '\0';
      iVar2 = pthread_mutex_lock(local_58);
      if (iVar2 != 0) {
         LAB_00105040:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar2);
      }
      local_50 = '\x01';
      pGVar3 = PagedAllocator<WorkerThreadPool::Group,false,256u>::alloc<>((PagedAllocator<WorkerThreadPool::Group,false,256u>*)( this + 0x1e0 ));
      local_60 = *(Callable**)( this + 0x438 );
      *(Callable**)( this + 0x438 ) = local_60 + 1;
      *(int*)( pGVar3 + 0x10 ) = param_5;
      *(Callable**)pGVar3 = local_60;
      if (param_5 == 0) {
         pGVar3[0x78] = (Group)0x1;
         iVar2 = pthread_mutex_lock((pthread_mutex_t*)( pGVar3 + 0x18 ));
         if (iVar2 != 0) goto LAB_00105040;
         *(int*)( pGVar3 + 0x70 ) = *(int*)( pGVar3 + 0x70 ) + 1;
         std::condition_variable::notify_one();
         pthread_mutex_unlock((pthread_mutex_t*)( pGVar3 + 0x18 ));
         *(undefined4*)( pGVar3 + 0x80 ) = 0;
         if (param_4 == (BaseTemplateUserdata*)0x0) {
            local_a0 = (Task**)0x0;
            local_98 = 0;
            puVar10 = auStack_b8;
            pCVar12 = local_60;
         } else {
            if (*(code**)( *(long*)param_4 + 0x10 ) != BaseTemplateUserdata::~BaseTemplateUserdata) {
               ( **(code**)( *(long*)param_4 + 0x10 ) )(param_4);
            }
            Memory::free_static(param_4, false);
            local_98 = 0;
            local_a0 = (Task**)0x0;
            puVar10 = auStack_b8;
            pCVar12 = local_60;
         }
      } else {
         local_98 = param_6;
         *(int*)( pGVar3 + 0x80 ) = param_6;
         uVar11 = (long)param_6 * 8 + 0x17;
         puVar10 = auStack_b8;
         while (puVar9 != auStack_b8 + -(uVar11 & 0xfffffffffffff000)) {
            puVar8 = puVar10 + -0x1000;
            *(undefined8*)( puVar10 + -8 ) = *(undefined8*)( puVar10 + -8 );
            puVar9 = puVar10 + -0x1000;
            puVar10 = puVar10 + -0x1000;
         };
         uVar11 = ( ulong )((uint)uVar11 & 0xff0);
         lVar1 = -uVar11;
         if (uVar11 != 0) {
            *(undefined8*)( puVar8 + -8 ) = *(undefined8*)( puVar8 + -8 );
         }
         local_a0 = (Task**)( ( ulong )(puVar8 + lVar1 + 0xf) & 0xfffffffffffffff0 );
         puVar10 = puVar8 + lVar1;
         pCVar12 = local_60;
         if (0 < param_6) {
            local_88 = local_a0 + param_6;
            local_90 = (PagedAllocator<WorkerThreadPool::Task,false,1024u>*)( this + 0x178 );
            ppTVar6 = local_a0;
            local_b0 = this;
            local_a8 = local_60;
            do {
               *(undefined8*)( puVar8 + lVar1 + -8 ) = 0x104e5c;
               pTVar4 = PagedAllocator<WorkerThreadPool::Task,false,1024u>::alloc<>(local_90);
               *(_func_void_void_ptr_uint**)( pTVar4 + 0x20 ) = local_78;
               *(void**)( pTVar4 + 0x28 ) = local_80;
               if (*(long*)( pTVar4 + 0x30 ) != *(long*)param_8) {
                  *(undefined8*)( puVar8 + lVar1 + -8 ) = 0x104e89;
                  CowData<char32_t>::_ref((CowData<char32_t>*)( pTVar4 + 0x30 ), (CowData*)param_8);
               }
               *(Group**)( pTVar4 + 0xa0 ) = pGVar3;
               ppTVar7 = ppTVar6 + 1;
               *(undefined8*)( puVar8 + lVar1 + -8 ) = 0x104ea3;
               Callable::operator =((Callable*)( pTVar4 + 8 ), local_70);
               *ppTVar6 = pTVar4;
               *(BaseTemplateUserdata**)( pTVar4 + 0xd8 ) = param_4;
               ppTVar6 = ppTVar7;
               puVar10 = puVar8 + lVar1;
               pCVar12 = local_a8;
               this =
               local_b0;
            } while ( ppTVar7 != local_88 );
         }
      }
      *(undefined8*)( puVar10 + -8 ) = 0x104edb;
      local_70 = pCVar12;
      puVar5 = (undefined8*)HashMap<long,WorkerThreadPool::Group*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Group*>,false,256u>>::operator []((HashMap<long,WorkerThreadPool::Group*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Group*>,false,256u>>*)( this + 0x398 ), (long*)&local_60);
      *puVar5 = pGVar3;
      *(undefined8*)( puVar10 + -8 ) = 0x104efe;
      _post_tasks(this, local_a0, local_98, local_94._0_1_, (MutexLock*)&local_58);
      pCVar12 = local_70;
      if (( local_50 != '\0' ) && ( local_58 != (pthread_mutex_t*)0x0 )) {
         *(undefined8*)( puVar10 + -8 ) = 0x104ff2;
         pthread_mutex_unlock(local_58);
         pCVar12 = local_70;
      }
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return pCVar12;
   }
   /* WARNING: Subroutine does not return */
   *(undefined8*)( puVar10 + -8 ) = 0x105040;
   __stack_chk_fail();
}/* WorkerThreadPool::add_native_group_task(void (*)(void*, unsigned int), void*, int, int, bool,
   String const&) */undefined8 WorkerThreadPool::add_native_group_task(WorkerThreadPool *this, _func_void_void_ptr_uint *param_1, void *param_2, int param_3, int param_4, bool param_5, String *param_6) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   local_30 = 0;
   uVar1 = _add_group_task(this, (Callable*)&local_38, param_1, param_2, (BaseTemplateUserdata*)0x0, param_3, param_4, param_5, param_6);
   Callable::~Callable((Callable*)&local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::add_group_task(Callable const&, int, int, bool, String const&) */void WorkerThreadPool::add_group_task(WorkerThreadPool *this, Callable *param_1, int param_2, int param_3, bool param_4, String *param_5) {
   _add_group_task(this, param_1, (_func_void_void_ptr_uint*)0x0, (void*)0x0, (BaseTemplateUserdata*)0x0, param_2, param_3, param_4, param_5);
   return;
}/* WorkerThreadPool::_add_task(Callable const&, void (*)(void*), void*,
   WorkerThreadPool::BaseTemplateUserdata*, bool, String const&) */long WorkerThreadPool::_add_task(WorkerThreadPool *this, Callable *param_1, _func_void_void_ptr *param_2, void *param_3, BaseTemplateUserdata *param_4, bool param_5, String *param_6) {
   long lVar1;
   int iVar2;
   Task *pTVar3;
   long in_FS_OFFSET;
   Task *local_70;
   long local_68;
   long local_60;
   pthread_mutex_t *local_58;
   char local_50;
   long local_40;
   local_58 = (pthread_mutex_t*)( this + 0x268 );
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = '\0';
   iVar2 = pthread_mutex_lock(local_58);
   if (iVar2 != 0) {
      LAB_00105296:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar2);
   }
   local_50 = '\x01';
   pTVar3 = PagedAllocator<WorkerThreadPool::Task,false,1024u>::alloc<>((PagedAllocator<WorkerThreadPool::Task,false,1024u>*)( this + 0x178 ));
   lVar1 = *(long*)( this + 0x438 );
   *(long*)( this + 0x438 ) = lVar1 + 1;
   *(long*)pTVar3 = lVar1;
   local_70 = pTVar3;
   local_68 = lVar1;
   Callable::operator =((Callable*)( pTVar3 + 8 ), param_1);
   *(_func_void_void_ptr**)( pTVar3 + 0x18 ) = param_2;
   *(void**)( pTVar3 + 0x28 ) = param_3;
   if (*(long*)( pTVar3 + 0x30 ) != *(long*)param_6) {
      CowData<char32_t>::_ref((CowData<char32_t>*)( pTVar3 + 0x30 ), (CowData*)param_6);
   }
   *(BaseTemplateUserdata**)( pTVar3 + 0xd8 ) = param_4;
   HashMap<long,WorkerThreadPool::Task*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Task*>,false,1024u>>::insert(&local_60, (Task**)( this + 0x308 ), SUB81(&local_68, 0));
   if (*(int*)( this + 0x290 ) == 0) {
      if (local_50 == '\0') {
         LAB_001052a2:/* WARNING: Subroutine does not return */std::__throw_system_error(1);
      }
      if (local_58 != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(local_58);
         local_50 = '\0';
      }
      _process_task(this, pTVar3);
      if (local_58 == (pthread_mutex_t*)0x0) goto LAB_001052a2;
      if (local_50 != '\0') {
         /* WARNING: Subroutine does not return */
         std::__throw_system_error(0x23);
      }
      iVar2 = pthread_mutex_lock(local_58);
      if (iVar2 != 0) goto LAB_00105296;
      local_50 = '\x01';
   } else {
      _post_tasks((Task**)this, ( uint ) & local_70, true, (MutexLock*)(ulong)param_5);
      if (local_50 == '\0') goto LAB_00105217;
   }
   if (local_58 != (pthread_mutex_t*)0x0) {
      pthread_mutex_unlock(local_58);
   }
   LAB_00105217:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return lVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::add_native_task(void (*)(void*), void*, bool, String const&) */undefined8 WorkerThreadPool::add_native_task(WorkerThreadPool *this, _func_void_void_ptr *param_1, void *param_2, bool param_3, String *param_4) {
   undefined8 uVar1;
   long in_FS_OFFSET;
   undefined8 local_38;
   undefined8 local_30;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_38 = 0;
   local_30 = 0;
   uVar1 = _add_task(this, (Callable*)&local_38, param_1, param_2, (BaseTemplateUserdata*)0x0, param_3, param_4);
   Callable::~Callable((Callable*)&local_38);
   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::add_task(Callable const&, bool, String const&) */void WorkerThreadPool::add_task(WorkerThreadPool *this, Callable *param_1, bool param_2, String *param_3) {
   _add_task(this, param_1, (_func_void_void_ptr*)0x0, (void*)0x0, (BaseTemplateUserdata*)0x0, param_2, param_3);
   return;
}/* WorkerThreadPool::wait_for_task_completion(long) */undefined8 WorkerThreadPool::wait_for_task_completion(WorkerThreadPool *this, long param_1) {
   pthread_mutex_t *__mutex;
   ThreadData *pTVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   Task *pTVar5;
   pthread_mutex_t *ppVar6;
   undefined8 *puVar7;
   long lVar8;
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   undefined1 auVar14[16];
   undefined1 auVar15[16];
   undefined1 auVar16[16];
   code *pcVar17;
   char cVar18;
   int iVar19;
   ulong uVar20;
   uint *puVar21;
   undefined8 uVar22;
   uint uVar23;
   long lVar24;
   ulong uVar25;
   ulong uVar26;
   uint uVar27;
   long in_FS_OFFSET;
   long local_60;
   pthread_mutex_t *local_58;
   char local_50;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   __mutex = (pthread_mutex_t*)( this + 0x268 );
   local_60 = param_1;
   iVar19 = pthread_mutex_lock(__mutex);
   lVar8 = local_60;
   if (iVar19 != 0) goto LAB_001058c1;
   lVar3 = *(long*)( this + 0x370 );
   if (( lVar3 != 0 ) && ( *(int*)( this + 0x394 ) != 0 )) {
      uVar26 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x390 ) * 4 ));
      lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x390 ) * 8 );
      uVar20 = local_60 * 0x3ffff - 1;
      uVar20 = ( uVar20 ^ uVar20 >> 0x1f ) * 0x15;
      uVar20 = ( uVar20 ^ uVar20 >> 0xb ) * 0x41;
      uVar20 = uVar20 >> 0x16 ^ uVar20;
      uVar25 = uVar20 & 0xffffffff;
      if ((int)uVar20 == 0) {
         uVar25 = 1;
      }
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar25 * lVar4;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar26;
      lVar24 = SUB168(auVar9 * auVar13, 8);
      uVar27 = *(uint*)( *(long*)( this + 0x378 ) + lVar24 * 4 );
      uVar20 = (ulong)uVar27;
      uVar23 = SUB164(auVar9 * auVar13, 8);
      if (uVar27 != 0) {
         uVar27 = 0;
         do {
            if (( (int)uVar20 == (int)uVar25 ) && ( local_60 == *(long*)( *(long*)( lVar3 + lVar24 * 8 ) + 0x10 ) )) {
               pTVar5 = *(Task**)( *(long*)( lVar3 + (ulong)uVar23 * 8 ) + 0x18 );
               if (( (byte)pTVar5[0x98] & 1 ) == 0) {
                  if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
                     /* WARNING: Subroutine does not return */
                     Thread::caller_id();
                  }
                  ppVar6 = *(pthread_mutex_t**)( in_FS_OFFSET + lRam00000000001054fb );
                  cVar18 = HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::_lookup_pos((HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>*)( this + 0x2d8 ), (ulong*)&ppVar6->__align, (uint*)&local_58);
                  if (cVar18 != '\0') {
                     if (_GLOBAL_OFFSET_TABLE_ != (undefined*)0x0) {
                        /* WARNING: Subroutine does not return */
                        Thread::caller_id();
                     }
                     local_58 = ppVar6;
                     puVar21 = (uint*)HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::operator []((HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>*)( this + 0x2d8 ), (ulong*)&local_58);
                     uVar27 = *puVar21;
                     if (*(uint*)( this + 0x290 ) <= uVar27) {
                        _err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, (ulong)uVar27, ( ulong ) * (uint*)( this + 0x290 ), "p_index", "count", "", false, true);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar17 = (code*)invalidInstructionException();
                        ( *pcVar17 )();
                     }
                     pTVar1 = (ThreadData*)( *(long*)( this + 0x298 ) + (ulong)uVar27 * 0x68 );
                     if (pTVar1 != (ThreadData*)0x0) {
                        if (**(long**)( pTVar1 + 0x20 ) < lVar8) {
                           *(int*)( pTVar5 + 200 ) = *(int*)( pTVar5 + 200 ) + 1;
                           pthread_mutex_unlock(__mutex);
                           _wait_collaboratively(this, pTVar1, pTVar5);
                           iVar19 = pthread_mutex_lock(__mutex);
                           if (iVar19 == 0) {
                              *(int*)( pTVar5 + 200 ) = *(int*)( pTVar5 + 200 ) + -1;
                              goto LAB_001056c0;
                           }
                           goto LAB_001058c1;
                        }
                        pthread_mutex_unlock(__mutex);
                        uVar22 = 0x2c;
                        goto LAB_001055fc;
                     }
                  }
                  *(int*)( pTVar5 + 0xcc ) = *(int*)( pTVar5 + 0xcc ) + 1;
                  pthread_mutex_unlock(__mutex);
                  local_58 = (pthread_mutex_t*)( pTVar5 + 0x38 );
                  local_50 = '\0';
                  iVar19 = pthread_mutex_lock(local_58);
                  if (iVar19 != 0) goto LAB_001058c1;
                  iVar19 = *(int*)( pTVar5 + 0x94 );
                  local_50 = '\x01';
                  *(int*)( pTVar5 + 0x94 ) = iVar19 + 1;
                  if (*(int*)( pTVar5 + 0x90 ) == 0) goto LAB_00105570;
                  *(int*)( pTVar5 + 0x94 ) = iVar19;
                  *(int*)( pTVar5 + 0x90 ) = *(int*)( pTVar5 + 0x90 ) + -1;
                  goto LAB_001057ee;
               }
               LAB_001056c0:if (*(long*)( pTVar5 + 200 ) != 0) goto LAB_001055f0;
               HashMap<long,WorkerThreadPool::Task*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Task*>,false,1024u>>::erase((HashMap<long,WorkerThreadPool::Task*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Task*>,false,1024u>>*)( this + 0x308 ), &local_60);
               puVar7 = *(undefined8**)( pTVar5 + 0xa8 );
               if (puVar7 != (undefined8*)0x0) {
                  lVar8 = *(long*)( pTVar5 + 0xb8 );
                  if (lVar8 != 0) {
                     *(undefined8*)( lVar8 + 0x18 ) = *(undefined8*)( pTVar5 + 0xc0 );
                  }
                  lVar3 = *(long*)( pTVar5 + 0xc0 );
                  if (lVar3 != 0) {
                     *(long*)( lVar3 + 0x10 ) = lVar8;
                  }
                  if (pTVar5 + 0xa8 == (Task*)*puVar7) {
                     *puVar7 = *(undefined8*)( pTVar5 + 0xb8 );
                  }
                  if (pTVar5 + 0xa8 == (Task*)puVar7[1]) {
                     puVar7[1] = lVar3;
                  }
               }
               iVar19 = pthread_mutex_lock((pthread_mutex_t*)( pTVar5 + 0x38 ));
               if (iVar19 != 0) goto LAB_001058c1;
               if (*(int*)( pTVar5 + 0x94 ) != 0) {
                  _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
                  std::condition_variable::condition_variable((condition_variable*)( pTVar5 + 0x60 ));
               }
               pthread_mutex_unlock((pthread_mutex_t*)( pTVar5 + 0x38 ));
               std::condition_variable::~condition_variable((condition_variable*)( pTVar5 + 0x60 ));
               CowData<char32_t>::_unref((CowData<char32_t>*)( pTVar5 + 0x30 ));
               Callable::~Callable((Callable*)( pTVar5 + 8 ));
               uVar27 = *(uint*)( this + 0x18c );
               *(Task**)( *(long*)( *(long*)( this + 0x180 ) + ( ulong )(uVar27 >> ( ( byte ) * (undefined4*)( this + 400 ) & 0x1f )) * 8 ) + ( ulong )(uVar27 & *(uint*)( this + 0x194 )) * 8 ) = pTVar5;
               *(uint*)( this + 0x18c ) = uVar27 + 1;
               goto LAB_001055f0;
            }
            uVar27 = uVar27 + 1;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = ( ulong )(uVar23 + 1) * lVar4;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar26;
            lVar24 = SUB168(auVar10 * auVar14, 8);
            uVar2 = *(uint*)( *(long*)( this + 0x378 ) + lVar24 * 4 );
            uVar20 = (ulong)uVar2;
            uVar23 = SUB164(auVar10 * auVar14, 8);
            if (uVar2 == 0) break;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar20 * lVar4;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar26;
            auVar12._8_8_ = 0;
            auVar12._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x390 ) * 4 ) + uVar23 ) - SUB164(auVar11 * auVar15, 8)) * lVar4;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar26;
         } while ( uVar27 <= SUB164(auVar12 * auVar16, 8) );
      }
   }
   pthread_mutex_unlock(__mutex);
   _err_print_error("wait_for_task_completion", "core/object/worker_thread_pool.cpp", 0x173, "Method/function failed. Returning: ERR_INVALID_PARAMETER", "Invalid Task ID", 0, 0);
   uVar22 = 0x1f;
   goto LAB_001055fc;
   LAB_00105570:do {
      std::condition_variable::wait((unique_lock*)( pTVar5 + 0x60 ));
   } while ( *(int*)( pTVar5 + 0x90 ) == 0 );
   *(int*)( pTVar5 + 0x94 ) = *(int*)( pTVar5 + 0x94 ) + -1;
   *(int*)( pTVar5 + 0x90 ) = *(int*)( pTVar5 + 0x90 ) + -1;
   if (local_50 != '\0') {
      LAB_001057ee:if (local_58 != (pthread_mutex_t*)0x0) {
         pthread_mutex_unlock(local_58);
      }
   }
   iVar19 = pthread_mutex_lock(__mutex);
   if (iVar19 != 0) {
      LAB_001058c1:/* WARNING: Subroutine does not return */std::__throw_system_error(iVar19);
   }
   *(int*)( pTVar5 + 0xcc ) = *(int*)( pTVar5 + 0xcc ) + -1;
   if (*(long*)( pTVar5 + 200 ) == 0) {
      HashMap<long,WorkerThreadPool::Task*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Task*>,false,1024u>>::erase((HashMap<long,WorkerThreadPool::Task*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Task*>,false,1024u>>*)( this + 0x308 ), &local_60);
      PagedAllocator<WorkerThreadPool::Task,false,1024u>::free((PagedAllocator<WorkerThreadPool::Task,false,1024u>*)( this + 0x178 ), pTVar5);
   }
   LAB_001055f0:pthread_mutex_unlock(__mutex);
   uVar22 = 0;
   LAB_001055fc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar22;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::init(int, float) */void WorkerThreadPool::init(WorkerThreadPool *this, int param_1, float param_2) {
   code *pcVar1;
   char cVar2;
   undefined4 uVar3;
   long *plVar4;
   Settings *pSVar5;
   uint uVar6;
   undefined4 *puVar7;
   long lVar8;
   ulong uVar9;
   long lVar10;
   uint uVar11;
   long in_FS_OFFSET;
   float fVar12;
   undefined8 local_78;
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x290 ) != 0) {
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         _err_print_error(&_LC79, "core/object/worker_thread_pool.cpp", 0x2f9, "Condition \"threads.size() > 0\" is true.", 0, 0);
         return;
      }
      goto LAB_00105d6d;
   }
   *(undefined4*)( this + 0x2a0 ) = 0;
   if (param_1 < 0) {
      plVar4 = (long*)OS::get_singleton();
      pcVar1 = *(code**)( *plVar4 + 0x2e8 );
      if (pcVar1 == OS::get_default_thread_pool_size) {
         param_1 = ( **(code**)( *plVar4 + 0x2d8 ) )();
      } else {
         param_1 = ( *pcVar1 )(plVar4);
      }
   }
   uVar3 = 1;
   fVar12 = (float)param_1 * param_2;
   if (_LC80 <= fVar12) {
      if ((float)(int)( param_1 - 1 ) < fVar12) {
         uVar3 = (undefined4)(long)(float)(int)( param_1 - 1 );
         goto LAB_0010593e;
      }
      *(int*)( this + 0x428 ) = (int)(long)fVar12;
      cVar2 = is_print_verbose_enabled();
   } else {
      LAB_0010593e:*(undefined4*)( this + 0x428 ) = uVar3;
      cVar2 = is_print_verbose_enabled();
   }
   if (cVar2 != '\0') {
      local_78 = 0;
      local_68 = "WorkerThreadPool: %d threads, %d max low-priority.";
      local_60 = 0x32;
      String::parse_latin1((StrRange*)&local_78);
      vformat<int,unsigned_int>((String*)&local_70, (int)(StrRange*)&local_78, param_1);
      Variant::Variant((Variant*)local_58, (String*)&local_70);
      stringify_variants((Variant*)&local_68);
      __print_line((String*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
      if (Variant::needs_deinit[local_58[0]] != '\0') {
         Variant::_clear_internal();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_70);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
   }
   uVar11 = *(uint*)( this + 0x290 );
   if ((uint)param_1 < uVar11) {
      lVar10 = (ulong)(uint)param_1 * 0x68;
      uVar11 = param_1;
      do {
         uVar11 = uVar11 + 1;
         lVar8 = *(long*)( this + 0x298 ) + lVar10;
         lVar10 = lVar10 + 0x68;
         std::condition_variable::~condition_variable((condition_variable*)( lVar8 + 0x30 ));
         Thread::~Thread((Thread*)( lVar8 + 8 ));
      } while ( uVar11 < *(uint*)( this + 0x290 ) );
      *(int*)( this + 0x290 ) = param_1;
      uVar11 = param_1;
      LAB_00105a3f:if (uVar11 != 0) goto LAB_00105a47;
   } else {
      if ((uint)param_1 <= uVar11) goto LAB_00105a3f;
      if (*(uint*)( this + 0x294 ) < (uint)param_1) {
         *(int*)( this + 0x294 ) = param_1;
         lVar10 = Memory::realloc_static(*(void**)( this + 0x298 ), (ulong)(uint)param_1 * 0x68, false);
         *(long*)( this + 0x298 ) = lVar10;
         if (lVar10 == 0) {
            _err_print_error("resize", "./core/templates/local_vector.h", 0xa3, "FATAL: Condition \"!data\" is true.", "Out of memory", 0, 0);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }
         uVar11 = *(uint*)( this + 0x290 );
         if (uVar11 < (uint)param_1) goto LAB_00105976;
      } else {
         LAB_00105976:lVar10 = (ulong)uVar11 * 0x68;
         do {
            puVar7 = (undefined4*)( *(long*)( this + 0x298 ) + lVar10 );
            lVar10 = lVar10 + 0x68;
            *puVar7 = 0;
            Thread::Thread((Thread*)( puVar7 + 2 ));
            *(byte*)( puVar7 + 6 ) = *(byte*)( puVar7 + 6 ) & 0xf0;
            *(undefined1(*) [16])( puVar7 + 8 ) = (undefined1[16])0x0;
            std::condition_variable::condition_variable((condition_variable*)( puVar7 + 0xc ));
            *(undefined8*)( puVar7 + 0x18 ) = 0;
         } while ( lVar10 != ( (ulong)uVar11 + 1 + ( ulong )(( param_1 - 1U ) - uVar11) ) * 0x68 );
      }
      *(int*)( this + 0x290 ) = param_1;
      LAB_00105a47:uVar9 = 0;
      do {
         lVar10 = uVar9 * 0x68;
         pSVar5 = (Settings*)( *(long*)( this + 0x298 ) + lVar10 );
         uVar6 = (uint)uVar9;
         *(uint*)pSVar5 = uVar6;
         uVar11 = *(uint*)( this + 0x290 );
         if (uVar11 <= uVar6) {
            LAB_00105be8:_err_print_index_error("operator[]", "./core/templates/local_vector.h", 0xb2, uVar9 & 0xffffffff, (ulong)uVar11, "p_index", "count", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }
         *(WorkerThreadPool**)( pSVar5 + 0x60 ) = this;
         local_68 = (char*)CONCAT44(local_68._4_4_, 1);
         Thread::start((_func_void_void_ptr*)( pSVar5 + 8 ), _thread_function, pSVar5);
         uVar11 = *(uint*)( this + 0x290 );
         local_78 = CONCAT44(local_78._4_4_, uVar6);
         if (uVar11 <= uVar6) goto LAB_00105be8;
         uVar9 = uVar9 + 1;
         local_70 = *(undefined8*)( *(long*)( this + 0x298 ) + 8 + lVar10 );
         HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::insert((ulong*)&local_68, (int*)( this + 0x2d8 ), SUB81(&local_70, 0));
      } while ( (uint)uVar9 < *(uint*)( this + 0x290 ) );
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   LAB_00105d6d:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* WorkerThreadPool::get_named_pool(StringName const&) */WorkerThreadPool *WorkerThreadPool::get_named_pool(StringName *param_1) {
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
   WorkerThreadPool *this;
   undefined8 *puVar12;
   uint uVar13;
   long lVar14;
   uint uVar15;
   uint uVar16;
   ulong uVar17;
   if (( named_pools._8_8_ != 0 ) && ( named_pools._44_4_ != 0 )) {
      uVar1 = *(uint*)( hash_table_size_primes + (ulong)(uint)named_pools._40_4_ * 4 );
      uVar17 = CONCAT44(0, uVar1);
      lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)named_pools._40_4_ * 8 );
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
      auVar7._0_8_ = uVar17;
      lVar14 = SUB168(auVar3 * auVar7, 8);
      uVar15 = *(uint*)( named_pools._16_8_ + lVar14 * 4 );
      uVar13 = SUB164(auVar3 * auVar7, 8);
      if (uVar15 != 0) {
         uVar16 = 0;
         do {
            if (( uVar11 == uVar15 ) && ( *(long*)( *(long*)( named_pools._8_8_ + lVar14 * 8 ) + 0x10 ) == *(long*)param_1 )) {
               return *(WorkerThreadPool**)( *(long*)( named_pools._8_8_ + (ulong)uVar13 * 8 ) + 0x18 );
            }
            uVar16 = uVar16 + 1;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = ( ulong )(uVar13 + 1) * lVar2;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar17;
            lVar14 = SUB168(auVar4 * auVar8, 8);
            uVar15 = *(uint*)( named_pools._16_8_ + lVar14 * 4 );
            uVar13 = SUB164(auVar4 * auVar8, 8);
         } while ( ( uVar15 != 0 ) && ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar15 * lVar2,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( uVar1 + uVar13 ) - SUB164(auVar5 * auVar9, 8)) * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar17,uVar16 <= SUB164(auVar6 * auVar10, 8) );
      }
   }
   this(WorkerThreadPool * operator_new(0x440, ""));
   WorkerThreadPool(this, false);
   postinitialize_handler((Object*)this);
   init(this, -1, _LC85);
   puVar12 = (undefined8*)HashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>>>::operator []((HashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>>>*)named_pools, param_1);
   *puVar12 = this;
   return this;
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
}/* OS::get_default_thread_pool_size() const */void OS::get_default_thread_pool_size(OS *this) {
   for (int i_1326 = 0; i_1326 < 2; i_1326++) {
      /* WARNING: Could not recover jumptable at 0x00105ff7. Too many branches */
   }
   ( **(code**)( *(long*)this + 0x2d8 ) )();
   return;
}/* WorkerThreadPool::is_class_ptr(void*) const */uint WorkerThreadPool::is_class_ptr(WorkerThreadPool *this, void *param_1) {
   return (uint)CONCAT71(0x1100, (undefined4*)param_1 == &Object::get_class_ptr_static(), ::ptr) | (uint)CONCAT71(0x10ff, (undefined4*)param_1 == &get_class_ptr_static(), ::ptr);
}/* WorkerThreadPool::_getv(StringName const&, Variant&) const */undefined8 WorkerThreadPool::_getv(StringName *param_1, Variant *param_2) {
   return 0;
}/* WorkerThreadPool::_setv(StringName const&, Variant const&) */undefined8 WorkerThreadPool::_setv(StringName *param_1, Variant *param_2) {
   return 0;
}/* WorkerThreadPool::_validate_propertyv(PropertyInfo&) const */void WorkerThreadPool::_validate_propertyv(PropertyInfo *param_1) {
   return;
}/* WorkerThreadPool::_property_can_revertv(StringName const&) const */undefined8 WorkerThreadPool::_property_can_revertv(StringName *param_1) {
   return 0;
}/* WorkerThreadPool::_property_get_revertv(StringName const&, Variant&) const */undefined8 WorkerThreadPool::_property_get_revertv(StringName *param_1, Variant *param_2) {
   return 0;
}/* WorkerThreadPool::_notificationv(int, bool) */void WorkerThreadPool::_notificationv(int param_1, bool param_2) {
   return;
}/* WorkerThreadPool::BaseTemplateUserdata::callback() */void WorkerThreadPool::BaseTemplateUserdata::callback(void) {
   return;
}/* WorkerThreadPool::BaseTemplateUserdata::callback_indexed(unsigned int) */void WorkerThreadPool::BaseTemplateUserdata::callback_indexed(uint param_1) {
   return;
}/* WorkerThreadPool::BaseTemplateUserdata::~BaseTemplateUserdata() */void WorkerThreadPool::BaseTemplateUserdata::~BaseTemplateUserdata(BaseTemplateUserdata *this) {
   return;
}/* MethodBindT<long>::_gen_argument_type(int) const */char MethodBindT<long>::_gen_argument_type(MethodBindT<long> *this, int param_1) {
   return ( param_1 == 0 ) * '\x02';
}/* MethodBindT<long>::get_argument_meta(int) const */long MethodBindT<long>::get_argument_meta(MethodBindT<long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}/* MethodBindTRC<unsigned int, long>::_gen_argument_type(int) const */undefined8 MethodBindTRC<unsigned_int,long>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTRC<unsigned int, long>::get_argument_meta(int) const */long MethodBindTRC<unsigned_int,long>::get_argument_meta(MethodBindTRC<unsigned_int,long> *this, int param_1) {
   long lVar1;
   lVar1 = ( ulong )(param_1 == 0) << 2;
   if (param_1 < 0) {
      lVar1 = 7;
   }
   return lVar1;
}/* MethodBindTR<long, Callable const&, int, int, bool, String const&>::get_argument_meta(int) const
    */byte MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::get_argument_meta(MethodBindTR<long,Callable_const&,int,int,bool,String_const&> *this, int param_1) {
   if (-1 < param_1) {
      return -(param_1 - 1U < 2) & 3;
   }
   return 4;
}/* MethodBindTR<Error, long>::_gen_argument_type(int) const */undefined8 MethodBindTR<Error,long>::_gen_argument_type(int param_1) {
   return 2;
}/* MethodBindTR<Error, long>::get_argument_meta(int) const */long MethodBindTR<Error,long>::get_argument_meta(MethodBindTR<Error,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}/* MethodBindTRC<bool, long>::_gen_argument_type(int) const */char MethodBindTRC<bool,long>::_gen_argument_type(MethodBindTRC<bool,long> *this, int param_1) {
   return ( param_1 == 0 ) + '\x01';
}/* MethodBindTRC<bool, long>::get_argument_meta(int) const */long MethodBindTRC<bool,long>::get_argument_meta(MethodBindTRC<bool,long> *this, int param_1) {
   return ( ulong )(param_1 == 0) << 2;
}/* MethodBindTR<long, Callable const&, bool, String const&>::_gen_argument_type(int) const */char MethodBindTR<long,Callable_const&,bool,String_const&>::_gen_argument_type(MethodBindTR<long,Callable_const&,bool,String_const&> *this, int param_1) {
   char cVar1;
   cVar1 = '\x02';
   if (( (uint)param_1 < 3 ) && ( cVar1 = param_1 != 0 )) {
      cVar1 = ( param_1 != 1 ) * '\x03' + '\x01';
   }
   return cVar1;
}/* MethodBindTR<long, Callable const&, bool, String const&>::get_argument_meta(int) const */int MethodBindTR<long,Callable_const&,bool,String_const&>::get_argument_meta(MethodBindTR<long,Callable_const&,bool,String_const&> *this, int param_1) {
   return ( param_1 >> 0x1f ) * -4;
}/* MethodBindTR<long, Callable const&, int, int, bool, String const&>::_gen_argument_type(int) const
    */char MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::_gen_argument_type(MethodBindTR<long,Callable_const&,int,int,bool,String_const&> *this, int param_1) {
   char cVar1;
   cVar1 = '\x02';
   if (( ( (uint)param_1 < 5 ) && ( cVar1 = '\x19' ),param_1 != 0 )) {
      return ( param_1 != 3 ) * '\x03' + '\x01';
   }
   return cVar1;
}/* MethodBindTR<long, Callable const&, bool, String const&>::~MethodBindTR() */void MethodBindTR<long,Callable_const&,bool,String_const&>::~MethodBindTR(MethodBindTR<long,Callable_const&,bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fdc0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<long, Callable const&, bool, String const&>::~MethodBindTR() */void MethodBindTR<long,Callable_const&,bool,String_const&>::~MethodBindTR(MethodBindTR<long,Callable_const&,bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fdc0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<Error, long>::~MethodBindTR() */void MethodBindTR<Error,long>::~MethodBindTR(MethodBindTR<Error,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fe80;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<Error, long>::~MethodBindTR() */void MethodBindTR<Error,long>::~MethodBindTR(MethodBindTR<Error,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fe80;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTR<long, Callable const&, int, int, bool, String const&>::~MethodBindTR() */void MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::~MethodBindTR(MethodBindTR<long,Callable_const&,int,int,bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fee0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTR<long, Callable const&, int, int, bool, String const&>::~MethodBindTR() */void MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::~MethodBindTR(MethodBindTR<long,Callable_const&,int,int,bool,String_const&> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fee0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fe20;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010fe20;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindTRC<unsigned int, long>::~MethodBindTRC() */void MethodBindTRC<unsigned_int,long>::~MethodBindTRC(MethodBindTRC<unsigned_int,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ff40;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindTRC<unsigned int, long>::~MethodBindTRC() */void MethodBindTRC<unsigned_int,long>::~MethodBindTRC(MethodBindTRC<unsigned_int,long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ff40;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ffa0;
   MethodBind::~MethodBind((MethodBind*)this);
   return;
}/* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   *(undefined***)this = &PTR__gen_argument_type_0010ffa0;
   MethodBind::~MethodBind((MethodBind*)this);
   operator_delete(this, 0x68);
   return;
}/* HashMap<StringName, WorkerThreadPool*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   WorkerThreadPool*> > >::~HashMap() */void HashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>>>::~HashMap(HashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>>> *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   bool bVar4;
   pvVar3 = *(void**)( this + 8 );
   if (pvVar3 == (void*)0x0) {
      return;
   }
   if (*(int*)( this + 0x2c ) != 0) {
      uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (uVar1 == 0) {
         *(undefined4*)( this + 0x2c ) = 0;
         *(undefined1(*) [16])( this + 0x18 ) = (undefined1[16])0x0;
      } else {
         lVar2 = 0;
         do {
            if (*(int*)( *(long*)( this + 0x10 ) + lVar2 ) != 0) {
               bVar4 = StringName::configured != '\0';
               *(int*)( *(long*)( this + 0x10 ) + lVar2 ) = 0;
               pvVar3 = *(void**)( (long)pvVar3 + lVar2 * 2 );
               if (( bVar4 ) && ( *(long*)( (long)pvVar3 + 0x10 ) != 0 )) {
                  StringName::unref();
               }
               Memory::free_static(pvVar3, false);
               pvVar3 = *(void**)( this + 8 );
               *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
            }
            lVar2 = lVar2 + 4;
         } while ( lVar2 != (ulong)uVar1 << 2 );
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
}/* WorkerThreadPool::_get_class_namev() const */undefined8 *WorkerThreadPool::_get_class_namev(void) {
   int iVar1;
   if (( _get_class_namev() ) && ( iVar1 = __cxa_guard_acquire(&_get_class_namev(), ::_class_name_static) ),iVar1 != 0) {
      _get_class_namev()
      __cxa_atexit(StringName::~StringName, &_get_class_namev(), ::_class_name_static, &__dso_handle);
      __cxa_guard_release(&_get_class_namev(), ::_class_name_static);
   }
   if (_get_class_namev()::_class_name_static != 0) {
      if (*(long*)( _get_class_namev() ) != 0) {
         LAB_00106503:return &_get_class_namev();
      }
      if (*(long*)( _get_class_namev() ) != 0) {
         if (1 < *(uint*)( *(long*)( _get_class_namev() ) + -8 )) goto LAB_00106503;
         StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "WorkerThreadPool");
         goto LAB_0010656e;
      }
   }
   StringName::assign_static_unique_class_name((StringName*)&_get_class_namev(), ::_class_name_static, "WorkerThreadPool");
   LAB_0010656e:return &_get_class_namev();
}/* WorkerThreadPool::get_class() const */void WorkerThreadPool::get_class(void) {
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
}/* WorkerThreadPool::is_class(String const&) const */undefined8 WorkerThreadPool::is_class(WorkerThreadPool *this, String *param_1) {
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
      } else {
         pcVar3 = *(char**)( lVar4 + 8 );
         local_60 = 0;
         if (pcVar3 == (char*)0x0) {
            plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
            if (*(long*)( lVar4 + 0x10 ) != 0) {
               do {
                  lVar5 = *plVar1;
                  if (lVar5 == 0) goto LAB_00106ddf;
                  LOCK();
                  lVar8 = *plVar1;
                  bVar9 = lVar5 == lVar8;
                  if (bVar9) {
                     *plVar1 = lVar5 + 1;
                     lVar8 = lVar5;
                  }
                  UNLOCK();
               } while ( !bVar9 );
               if (lVar8 != -1) {
                  local_60 = *(long*)( lVar4 + 0x10 );
               }
            }
         } else {
            local_50 = strlen(pcVar3);
            local_58 = pcVar3;
            String::parse_latin1((StrRange*)&local_60);
         }
      }
      LAB_00106ddf:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
      if (cVar6 != '\0') goto LAB_00106e93;
   }
   cVar6 = String::operator ==(param_1, "WorkerThreadPool");
   if (cVar6 == '\0') {
      for (lVar2 = *(long*)( this + 8 ); lVar2 != 0; lVar2 = *(long*)( lVar2 + 8 )) {
         lVar4 = *(long*)( lVar2 + 0x20 );
         if (lVar4 == 0) {
            local_60 = 0;
         } else {
            pcVar3 = *(char**)( lVar4 + 8 );
            local_60 = 0;
            if (pcVar3 == (char*)0x0) {
               plVar1 = (long*)( *(long*)( lVar4 + 0x10 ) + -0x10 );
               if (*(long*)( lVar4 + 0x10 ) != 0) {
                  do {
                     lVar5 = *plVar1;
                     if (lVar5 == 0) goto LAB_00106f43;
                     LOCK();
                     lVar8 = *plVar1;
                     bVar9 = lVar5 == lVar8;
                     if (bVar9) {
                        *plVar1 = lVar5 + 1;
                        lVar8 = lVar5;
                     }
                     UNLOCK();
                  } while ( !bVar9 );
                  if (lVar8 != -1) {
                     local_60 = *(long*)( lVar4 + 0x10 );
                  }
               }
            } else {
               local_50 = strlen(pcVar3);
               local_58 = pcVar3;
               String::parse_latin1((StrRange*)&local_60);
            }
         }
         LAB_00106f43:cVar6 = String::operator ==(param_1, (String*)&local_60);
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
         if (cVar6 != '\0') goto LAB_00106e93;
      }
      if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         uVar7 = String::operator ==(param_1, "Object");
         return uVar7;
      }
   } else {
      LAB_00106e93:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return 1;
      }
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* String::parse_latin1(char const*) */void String::parse_latin1(String *this, char *param_1) {
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
}/* WorkerThreadPool::BaseTemplateUserdata::~BaseTemplateUserdata() */void WorkerThreadPool::BaseTemplateUserdata::~BaseTemplateUserdata(BaseTemplateUserdata *this) {
   operator_delete(this, 8);
   return;
}/* WorkerThreadPool::Task* PagedAllocator<WorkerThreadPool::Task, false, 1024u>::alloc<>() */Task * __thiscall
PagedAllocator<WorkerThreadPool::Task,false,1024u>::alloc<>
          (PagedAllocator<WorkerThreadPool::Task,false,1024u> *this){
   Task *pTVar1;
   long lVar2;
   long *plVar3;
   uint uVar4;
   int iVar5;
   undefined8 uVar6;
   long lVar7;
   long *plVar8;
   long *plVar9;
   long lVar10;
   long *plVar11;
   long lVar12;
   iVar5 = *(int*)( this + 0x14 );
   if (iVar5 == 0) {
      uVar4 = *(uint*)( this + 0x10 ) + 1;
      lVar10 = ( ulong ) * (uint*)( this + 0x10 ) * 8;
      *(uint*)( this + 0x10 ) = uVar4;
      uVar6 = Memory::realloc_static(*(void**)this, (ulong)uVar4 << 3, false);
      *(undefined8*)this = uVar6;
      uVar6 = Memory::realloc_static(*(void**)( this + 8 ), ( ulong ) * (uint*)( this + 0x10 ) << 3, false);
      lVar2 = *(long*)this;
      *(undefined8*)( this + 8 ) = uVar6;
      uVar6 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x20 ) * 0xe8, false);
      uVar4 = *(uint*)( this + 0x20 );
      *(undefined8*)( lVar2 + lVar10 ) = uVar6;
      lVar2 = *(long*)( this + 8 );
      uVar6 = Memory::alloc_static((ulong)uVar4 << 3, false);
      *(undefined8*)( lVar2 + lVar10 ) = uVar6;
      uVar4 = *(uint*)( this + 0x20 );
      if (uVar4 == 0) {
         plVar11 = *(long**)( this + 8 );
      } else {
         plVar11 = *(long**)( this + 8 );
         lVar2 = *(long*)this;
         plVar3 = (long*)*plVar11;
         lVar7 = 0;
         plVar8 = plVar3;
         do {
            plVar9 = plVar8 + 1;
            lVar12 = *(long*)( lVar2 + lVar10 ) + lVar7;
            lVar7 = lVar7 + 0xe8;
            *plVar8 = lVar12;
            plVar8 = plVar9;
         } while ( plVar3 + uVar4 != plVar9 );
      }
      iVar5 = uVar4 + *(int*)( this + 0x14 );
   } else {
      plVar11 = *(long**)( this + 8 );
   }
   uVar4 = iVar5 - 1;
   *(uint*)( this + 0x14 ) = uVar4;
   pTVar1 = *(Task**)( plVar11[uVar4 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )] + ( ulong )(uVar4 & *(uint*)( this + 0x1c )) * 8 );
   *(undefined8*)pTVar1 = 0xffffffffffffffff;
   *(undefined8*)( pTVar1 + 8 ) = 0;
   *(undefined8*)( pTVar1 + 0x10 ) = 0;
   *(undefined8*)( pTVar1 + 0x58 ) = 0;
   for (int i_1327 = 0; i_1327 < 4; i_1327++) {
      *(undefined1(*) [16])( pTVar1 + ( 16*i_1327 + 24 ) ) = (undefined1[16])0;
   }
   std::condition_variable::condition_variable((condition_variable*)( pTVar1 + 0x60 ));
   pTVar1[0x98] = ( Task )((byte)pTVar1[0x98] & 0xfc);
   *(undefined8*)( pTVar1 + 0x90 ) = 0;
   *(undefined8*)( pTVar1 + 0xb8 ) = 0;
   *(undefined8*)( pTVar1 + 0xc0 ) = 0;
   *(Task**)( pTVar1 + 0xb0 ) = pTVar1;
   *(undefined8*)( pTVar1 + 200 ) = 0;
   pTVar1[0xd0] = (Task)0x0;
   *(undefined8*)( pTVar1 + 0xd8 ) = 0;
   *(undefined4*)( pTVar1 + 0xe0 ) = 0xffffffff;
   *(undefined1(*) [16])( pTVar1 + 0xa0 ) = (undefined1[16])0x0;
   return pTVar1;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<long, WorkerThreadPool::Task*, HashMapHasherDefault, HashMapComparatorDefault<long>,
   PagedAllocator<HashMapElement<long, WorkerThreadPool::Task*>, false, 1024u> >::insert(long
   const&, WorkerThreadPool::Task* const&, bool) */void HashMap<long,WorkerThreadPool::Task*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Task*>,false,1024u>>::insert(long *param_1, Task **param_2, bool param_3) {
   Task *pTVar1;
   Task *pTVar2;
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
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   undefined1 auVar25[16];
   undefined1 auVar26[16];
   undefined1 auVar27[16];
   Task *pTVar28;
   uint uVar29;
   uint uVar30;
   uint uVar31;
   int iVar32;
   ulong uVar33;
   Task *pTVar34;
   Task *pTVar35;
   undefined8 uVar36;
   undefined8 *in_RCX;
   undefined7 in_register_00000011;
   long *plVar37;
   long lVar38;
   long lVar39;
   long lVar40;
   ulong uVar41;
   uint uVar42;
   char in_R8B;
   uint uVar43;
   uint uVar44;
   ulong uVar45;
   Task *pTVar46;
   Task *local_80;
   plVar37 = (long*)CONCAT71(in_register_00000011, param_3);
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x11 ) * 4 );
   local_80 = param_2[0xd];
   if (local_80 == (Task*)0x0) {
      uVar45 = (ulong)uVar30;
      uVar33 = uVar45 * 4;
      uVar41 = uVar45 * 8;
      pTVar35 = (Task*)Memory::alloc_static(uVar33, false);
      param_2[0xe] = pTVar35;
      local_80 = (Task*)Memory::alloc_static(uVar41, false);
      param_2[0xd] = local_80;
      if (uVar30 != 0) {
         pTVar35 = param_2[0xe];
         if (( pTVar35 < local_80 + uVar41 ) && ( local_80 < pTVar35 + uVar33 )) {
            uVar33 = 0;
            do {
               *(undefined4*)( pTVar35 + uVar33 * 4 ) = 0;
               *(undefined8*)( local_80 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            } while ( uVar45 != uVar33 );
            goto LAB_001072fe;
         }
         memset(pTVar35, 0, uVar33);
         memset(local_80, 0, uVar41);
         iVar32 = *(int*)( (long)param_2 + 0x8c );
         lVar40 = *plVar37;
         goto LAB_0010730d;
      }
      iVar32 = *(int*)( (long)param_2 + 0x8c );
      lVar40 = *plVar37;
      if (local_80 != (Task*)0x0) goto LAB_0010730d;
   } else {
      LAB_001072fe:iVar32 = *(int*)( (long)param_2 + 0x8c );
      lVar40 = *plVar37;
      LAB_0010730d:if (iVar32 != 0) {
         uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x11 ) * 4 ));
         lVar39 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x11 ) * 8 );
         uVar33 = lVar40 * 0x3ffff - 1;
         uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
         uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
         uVar33 = uVar33 >> 0x16 ^ uVar33;
         uVar45 = uVar33 & 0xffffffff;
         if ((int)uVar33 == 0) {
            uVar45 = 1;
         }
         uVar44 = 0;
         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar45 * lVar39;
         auVar16._8_8_ = 0;
         auVar16._0_8_ = uVar41;
         lVar38 = SUB168(auVar4 * auVar16, 8);
         uVar42 = *(uint*)( param_2[0xe] + lVar38 * 4 );
         uVar31 = SUB164(auVar4 * auVar16, 8);
         if (uVar42 != 0) {
            do {
               if (( uVar42 == (uint)uVar45 ) && ( lVar40 == *(long*)( *(long*)( local_80 + lVar38 * 8 ) + 0x10 ) )) {
                  pTVar35 = *(Task**)( local_80 + (ulong)uVar31 * 8 );
                  *(undefined8*)( pTVar35 + 0x18 ) = *in_RCX;
                  goto LAB_001077ec;
               }
               uVar44 = uVar44 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( ulong )(uVar31 + 1) * lVar39;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar41;
               lVar38 = SUB168(auVar5 * auVar17, 8);
               uVar42 = *(uint*)( param_2[0xe] + lVar38 * 4 );
               uVar31 = SUB164(auVar5 * auVar17, 8);
            } while ( ( uVar42 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar42 * lVar39,auVar18._8_8_ = 0,auVar18._0_8_ = uVar41,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x11 ) * 4 ) + uVar31 ) - SUB164(auVar6 * auVar18, 8)) * lVar39,auVar19._8_8_ = 0,auVar19._0_8_ = uVar41,uVar44 <= SUB164(auVar7 * auVar19, 8) );
         }
      }
   }
   if ((float)uVar30 * __LC43 < (float)( iVar32 + 1 )) {
      uVar30 = *(uint*)( param_2 + 0x11 );
      if (uVar30 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pTVar35 = (Task*)0x0;
         goto LAB_001077ec;
      }
      uVar33 = ( ulong )(uVar30 + 1);
      *(undefined4*)( (long)param_2 + 0x8c ) = 0;
      uVar42 = *(uint*)( hash_table_size_primes + (ulong)uVar30 * 4 );
      if (uVar30 + 1 < 2) {
         uVar33 = 2;
      }
      uVar30 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      uVar45 = (ulong)uVar30;
      *(int*)( param_2 + 0x11 ) = (int)uVar33;
      pTVar35 = param_2[0xe];
      uVar33 = uVar45 * 4;
      uVar41 = uVar45 * 8;
      pTVar34 = (Task*)Memory::alloc_static(uVar33, false);
      param_2[0xe] = pTVar34;
      pTVar34 = (Task*)Memory::alloc_static(uVar41, false);
      param_2[0xd] = pTVar34;
      if (uVar30 != 0) {
         pTVar1 = param_2[0xe];
         if (( pTVar1 < pTVar34 + uVar41 ) && ( pTVar34 < pTVar1 + uVar33 )) {
            uVar33 = 0;
            do {
               *(undefined4*)( pTVar1 + uVar33 * 4 ) = 0;
               *(undefined8*)( pTVar34 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            } while ( uVar45 != uVar33 );
         } else {
            memset(pTVar1, 0, uVar33);
            memset(pTVar34, 0, uVar41);
         }
      }
      if (uVar42 != 0) {
         uVar33 = 0;
         do {
            uVar30 = *(uint*)( pTVar35 + uVar33 * 4 );
            if (uVar30 != 0) {
               pTVar2 = param_2[0xe];
               uVar43 = 0;
               uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x11 ) * 4 );
               uVar41 = CONCAT44(0, uVar31);
               lVar40 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x11 ) * 8 );
               auVar8._8_8_ = 0;
               auVar8._0_8_ = (ulong)uVar30 * lVar40;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = uVar41;
               lVar39 = SUB168(auVar8 * auVar20, 8);
               pTVar1 = pTVar2 + lVar39 * 4;
               iVar32 = SUB164(auVar8 * auVar20, 8);
               uVar44 = *(uint*)pTVar1;
               uVar3 = *(undefined8*)( local_80 + uVar33 * 8 );
               while (uVar44 != 0) {
                  auVar9._8_8_ = 0;
                  auVar9._0_8_ = (ulong)uVar44 * lVar40;
                  auVar21._8_8_ = 0;
                  auVar21._0_8_ = uVar41;
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = ( ulong )(( iVar32 + uVar31 ) - SUB164(auVar9 * auVar21, 8)) * lVar40;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar41;
                  uVar29 = SUB164(auVar10 * auVar22, 8);
                  uVar36 = uVar3;
                  if (uVar29 < uVar43) {
                     *(uint*)pTVar1 = uVar30;
                     uVar36 = *(undefined8*)( pTVar34 + lVar39 * 8 );
                     *(undefined8*)( pTVar34 + lVar39 * 8 ) = uVar3;
                     uVar30 = uVar44;
                     uVar43 = uVar29;
                  }
                  uVar43 = uVar43 + 1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(iVar32 + 1) * lVar40;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar41;
                  lVar39 = SUB168(auVar11 * auVar23, 8);
                  pTVar1 = pTVar2 + lVar39 * 4;
                  iVar32 = SUB164(auVar11 * auVar23, 8);
                  uVar3 = uVar36;
                  uVar44 = *(uint*)pTVar1;
               };
               *(undefined8*)( pTVar34 + lVar39 * 8 ) = uVar3;
               *(uint*)pTVar1 = uVar30;
               *(int*)( (long)param_2 + 0x8c ) = *(int*)( (long)param_2 + 0x8c ) + 1;
            }
            uVar33 = uVar33 + 1;
         } while ( uVar33 != uVar42 );
         Memory::free_static(local_80, false);
         Memory::free_static(pTVar35, false);
      }
   }
   lVar40 = *plVar37;
   uVar3 = *in_RCX;
   iVar32 = *(int*)( (long)param_2 + 0x14 );
   if (iVar32 == 0) {
      uVar30 = *(uint*)( param_2 + 2 ) + 1;
      lVar39 = ( ulong ) * (uint*)( param_2 + 2 ) * 8;
      *(uint*)( param_2 + 2 ) = uVar30;
      pTVar35 = (Task*)Memory::realloc_static(*param_2, (ulong)uVar30 * 8, false);
      *param_2 = pTVar35;
      pTVar34 = (Task*)Memory::realloc_static(param_2[1], ( ulong ) * (uint*)( param_2 + 2 ) << 3, false);
      pTVar35 = *param_2;
      param_2[1] = pTVar34;
      uVar36 = Memory::alloc_static(( ulong ) * (uint*)( param_2 + 4 ) << 5, false);
      uVar30 = *(uint*)( param_2 + 4 );
      *(undefined8*)( pTVar35 + lVar39 ) = uVar36;
      pTVar35 = param_2[1];
      uVar36 = Memory::alloc_static((ulong)uVar30 << 3, false);
      *(undefined8*)( pTVar35 + lVar39 ) = uVar36;
      uVar30 = *(uint*)( param_2 + 4 );
      if (uVar30 == 0) {
         pTVar35 = param_2[1];
      } else {
         pTVar35 = param_2[1];
         pTVar34 = *param_2;
         uVar33 = 0;
         lVar38 = *(long*)pTVar35;
         do {
            *(ulong*)( lVar38 + uVar33 * 8 ) = uVar33 * 0x20 + *(long*)( pTVar34 + lVar39 );
            uVar33 = uVar33 + 1;
         } while ( uVar33 != uVar30 );
      }
      iVar32 = uVar30 + *(int*)( (long)param_2 + 0x14 );
   } else {
      pTVar35 = param_2[1];
   }
   uVar30 = iVar32 - 1;
   *(uint*)( (long)param_2 + 0x14 ) = uVar30;
   pTVar35 = *(Task**)( *(long*)( pTVar35 + ( ulong )(uVar30 >> ( ( byte ) * (undefined4*)( param_2 + 3 ) & 0x1f )) * 8 ) + ( ulong )(uVar30 & *(uint*)( (long)param_2 + 0x1c )) * 8 );
   *(undefined1(*) [16])pTVar35 = (undefined1[16])0x0;
   pTVar34 = param_2[0x10];
   *(long*)( pTVar35 + 0x10 ) = lVar40;
   *(undefined8*)( pTVar35 + 0x18 ) = uVar3;
   if (pTVar34 == (Task*)0x0) {
      param_2[0xf] = pTVar35;
      param_2[0x10] = pTVar35;
   } else if (in_R8B == '\0') {
      *(Task**)pTVar34 = pTVar35;
      *(Task**)( pTVar35 + 8 ) = param_2[0x10];
      param_2[0x10] = pTVar35;
   } else {
      *(Task**)( param_2[0xf] + 8 ) = pTVar35;
      *(Task**)pTVar35 = param_2[0xf];
      param_2[0xf] = pTVar35;
   }
   pTVar34 = param_2[0xe];
   uVar33 = *plVar37 * 0x3ffff - 1;
   uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
   uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
   uVar33 = uVar33 >> 0x16 ^ uVar33;
   uVar41 = uVar33 & 0xffffffff;
   if ((int)uVar33 == 0) {
      uVar41 = 1;
   }
   uVar44 = 0;
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x11 ) * 4 );
   uVar33 = CONCAT44(0, uVar30);
   uVar31 = (uint)uVar41;
   lVar40 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x11 ) * 8 );
   auVar12._8_8_ = 0;
   auVar12._0_8_ = uVar41 * lVar40;
   auVar24._8_8_ = 0;
   auVar24._0_8_ = uVar33;
   lVar39 = SUB168(auVar12 * auVar24, 8);
   pTVar2 = param_2[0xd];
   pTVar1 = pTVar34 + lVar39 * 4;
   iVar32 = SUB164(auVar12 * auVar24, 8);
   uVar42 = *(uint*)pTVar1;
   pTVar28 = pTVar35;
   while (uVar42 != 0) {
      auVar13._8_8_ = 0;
      auVar13._0_8_ = (ulong)uVar42 * lVar40;
      auVar25._8_8_ = 0;
      auVar25._0_8_ = uVar33;
      auVar14._8_8_ = 0;
      auVar14._0_8_ = ( ulong )(( uVar30 + iVar32 ) - SUB164(auVar13 * auVar25, 8)) * lVar40;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar33;
      uVar31 = SUB164(auVar14 * auVar26, 8);
      pTVar46 = pTVar28;
      if (uVar31 < uVar44) {
         *(uint*)pTVar1 = (uint)uVar41;
         uVar41 = (ulong)uVar42;
         pTVar1 = pTVar2 + lVar39 * 8;
         pTVar46 = *(Task**)pTVar1;
         *(Task**)pTVar1 = pTVar28;
         uVar44 = uVar31;
      }
      uVar31 = (uint)uVar41;
      uVar44 = uVar44 + 1;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(iVar32 + 1) * lVar40;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar33;
      lVar39 = SUB168(auVar15 * auVar27, 8);
      pTVar1 = pTVar34 + lVar39 * 4;
      iVar32 = SUB164(auVar15 * auVar27, 8);
      pTVar28 = pTVar46;
      uVar42 = *(uint*)pTVar1;
   };
   *(Task**)( pTVar2 + lVar39 * 8 ) = pTVar28;
   *(uint*)pTVar1 = uVar31;
   *(int*)( (long)param_2 + 0x8c ) = *(int*)( (long)param_2 + 0x8c ) + 1;
   LAB_001077ec:*param_1 = (long)pTVar35;
   return;
}/* WorkerThreadPool::Group* PagedAllocator<WorkerThreadPool::Group, false, 256u>::alloc<>() */Group * __thiscall
PagedAllocator<WorkerThreadPool::Group,false,256u>::alloc<>
          (PagedAllocator<WorkerThreadPool::Group,false,256u> *this){
   Group *pGVar1;
   long *plVar2;
   uint uVar3;
   int iVar4;
   undefined8 uVar5;
   long lVar6;
   long lVar7;
   long *plVar8;
   long *plVar9;
   long lVar10;
   long *plVar11;
   Group *pGVar12;
   long lVar13;
   byte bVar14;
   bVar14 = 0;
   iVar4 = *(int*)( this + 0x14 );
   if (iVar4 == 0) {
      uVar3 = *(uint*)( this + 0x10 ) + 1;
      lVar10 = ( ulong ) * (uint*)( this + 0x10 ) * 8;
      *(uint*)( this + 0x10 ) = uVar3;
      uVar5 = Memory::realloc_static(*(void**)this, (ulong)uVar3 << 3, false);
      *(undefined8*)this = uVar5;
      uVar5 = Memory::realloc_static(*(void**)( this + 8 ), ( ulong ) * (uint*)( this + 0x10 ) << 3, false);
      lVar6 = *(long*)this;
      *(undefined8*)( this + 8 ) = uVar5;
      uVar5 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x20 ) * 0x88, false);
      uVar3 = *(uint*)( this + 0x20 );
      *(undefined8*)( lVar6 + lVar10 ) = uVar5;
      lVar6 = *(long*)( this + 8 );
      uVar5 = Memory::alloc_static((ulong)uVar3 << 3, false);
      *(undefined8*)( lVar6 + lVar10 ) = uVar5;
      uVar3 = *(uint*)( this + 0x20 );
      if (uVar3 == 0) {
         plVar11 = *(long**)( this + 8 );
      } else {
         plVar11 = *(long**)( this + 8 );
         lVar6 = *(long*)this;
         plVar2 = (long*)*plVar11;
         lVar7 = 0;
         plVar8 = plVar2;
         do {
            plVar9 = plVar8 + 1;
            lVar13 = *(long*)( lVar6 + lVar10 ) + lVar7;
            lVar7 = lVar7 + 0x88;
            *plVar8 = lVar13;
            plVar8 = plVar9;
         } while ( plVar2 + uVar3 != plVar9 );
      }
      iVar4 = uVar3 + *(int*)( this + 0x14 );
   } else {
      plVar11 = *(long**)( this + 8 );
   }
   uVar3 = iVar4 - 1;
   *(uint*)( this + 0x14 ) = uVar3;
   pGVar1 = *(Group**)( plVar11[uVar3 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )] + ( ulong )(uVar3 & *(uint*)( this + 0x1c )) * 8 );
   pGVar12 = pGVar1;
   for (lVar6 = 0x11; lVar6 != 0; lVar6 = lVar6 + -1) {
      *(undefined8*)pGVar12 = 0;
      pGVar12 = pGVar12 + (ulong)bVar14 * -0x10 + 8;
   }
   *(undefined8*)pGVar1 = 0xffffffffffffffff;
   *(undefined4*)( pGVar1 + 8 ) = 0;
   *(undefined4*)( pGVar1 + 0xc ) = 0;
   *(undefined4*)( pGVar1 + 0x10 ) = 0;
   *(undefined8*)( pGVar1 + 0x38 ) = 0;
   *(undefined1(*) [16])( pGVar1 + 0x18 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( pGVar1 + 0x28 ) = (undefined1[16])0x0;
   std::condition_variable::condition_variable((condition_variable*)( pGVar1 + 0x40 ));
   *(undefined8*)( pGVar1 + 0x70 ) = 0;
   pGVar1[0x78] = (Group)0x0;
   *(undefined4*)( pGVar1 + 0x7c ) = 0;
   *(undefined4*)( pGVar1 + 0x80 ) = 0;
   return pGVar1;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<long, WorkerThreadPool::Group*, HashMapHasherDefault, HashMapComparatorDefault<long>,
   PagedAllocator<HashMapElement<long, WorkerThreadPool::Group*>, false, 256u> >::operator[](long
   const&) */undefined1[16];HashMap<long,WorkerThreadPool::Group*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Group*>,false,256u>>::operator [](HashMap<long,WorkerThreadPool::Group*,HashMapHasherDefault,HashMapComparatorDefault<long>,PagedAllocator<HashMapElement<long,WorkerThreadPool::Group*>,false,256u>>
             *this,long*param_1)

{
  uint *puVar1;
  undefined8 *puVar2;
  void *pvVar3;
  void *__s;
  undefined1 auVar4 [16];
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
  undefined1 auVar35[16](*, pauVar36)[16](*, pauVar48)[16](*, pauVar58)[16];
  undefined1 auVar59[16];
  undefined1 auVar60[16](ulong)(local_70 = = (void*)0x0) {
   uVar41 = uVar56 * 4;
   uVar40 = uVar56 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x70 ) = uVar42;
   lStack_90 = 0x108202;
   local_70 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 0x68 ) = local_70;
   if (uVar38 == 0) {
      iVar39 = *(int*)( this + 0x8c );
      lVar57 = *param_1;
      if (local_70 == (void*)0x0) goto LAB_00107cf3;
   } else {
      pvVar3 = *(void**)( this + 0x70 );
      if (( pvVar3 < (void*)( (long)local_70 + uVar40 ) ) && ( local_70 < (void*)( (long)pvVar3 + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)pvVar3 + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)local_70 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         } while ( uVar56 != uVar41 );
         iVar39 = *(int*)( this + 0x8c );
         lVar57 = *param_1;
      } else {
         memset(pvVar3, 0, uVar41);
         lStack_90 = 0x10824a;
         memset(local_70, 0, uVar40);
         iVar39 = *(int*)( this + 0x8c );
         lVar57 = *param_1;
      }
   }
   if (iVar39 != 0) {
      uVar41 = ( ulong ) * (uint*)( this + 0x88 );
      lVar53 = *(long*)( this + 0x70 );
      goto LAB_001080d3;
   }
}else{iVar39 = *(int*)( this + 0x8c );if (iVar39 != 0) {
   lVar53 = *(long*)( this + 0x70 );
   lVar46 = *(long*)( hash_table_size_primes_inv + uVar41 * 8 );
   uVar40 = lVar57 * 0x3ffff - 1;
   uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;
   uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;
   uVar40 = uVar40 >> 0x16 ^ uVar40;
   uVar55 = uVar40 & 0xffffffff;
   if ((int)uVar40 == 0) {
      uVar55 = 1;
   }
   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar55 * lVar46;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar56;
   lVar44 = SUB168(auVar4 * auVar20, 8);
   uVar43 = *(uint*)( lVar53 + lVar44 * 4 );
   uVar54 = SUB164(auVar4 * auVar20, 8);
   if (uVar43 != 0) {
      uVar51 = 0;
      lVar45 = lVar44;
      do {
         if (( (uint)uVar55 == uVar43 ) && ( lVar57 == *(long*)( *(long*)( (long)local_70 + lVar44 * 8 ) + 0x10 ) )) {
            auVar59._0_8_ = *(long*)( (long)local_70 + (ulong)uVar54 * 8 ) + 0x18;
            auVar59._8_8_ = lVar45;
            return auVar59;
         }
         uVar51 = uVar51 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar54 + 1) * lVar46;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar56;
         lVar44 = SUB168(auVar5 * auVar21, 8);
         uVar43 = *(uint*)( lVar53 + lVar44 * 4 );
         uVar54 = SUB164(auVar5 * auVar21, 8);
      } while ( ( uVar43 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar43 * lVar46,auVar22._8_8_ = 0,auVar22._0_8_ = uVar56,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar54 + uVar38 ) - SUB164(auVar6 * auVar22, 8)) * lVar46,auVar23._8_8_ = 0,auVar23._0_8_ = uVar56,lVar45 = SUB168(auVar7 * auVar23, 8),uVar51 <= SUB164(auVar7 * auVar23, 8) );
   }
   LAB_001080d3:uVar52 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar41 * 4 ));
   lVar46 = *(long*)( hash_table_size_primes_inv + uVar41 * 8 );
   uVar40 = lVar57 * 0x3ffff - 1;
   uVar40 = ( uVar40 ^ uVar40 >> 0x1f ) * 0x15;
   uVar40 = ( uVar40 ^ uVar40 >> 0xb ) * 0x41;
   uVar40 = uVar40 >> 0x16 ^ uVar40;
   uVar55 = uVar40 & 0xffffffff;
   if ((int)uVar40 == 0) {
      uVar55 = 1;
   }
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar55 * lVar46;
   auVar32._8_8_ = 0;
   auVar32._0_8_ = uVar52;
   lVar44 = SUB168(auVar16 * auVar32, 8);
   uVar38 = *(uint*)( lVar53 + lVar44 * 4 );
   uVar43 = SUB164(auVar16 * auVar32, 8);
   if (uVar38 != 0) {
      uVar54 = 0;
      lVar45 = lVar44;
      do {
         if (( (uint)uVar55 == uVar38 ) && ( *(long*)( *(long*)( (long)local_70 + lVar44 * 8 ) + 0x10 ) == lVar57 )) {
            pauVar48 = *(undefined1(**) [16])( (long)local_70 + (ulong)uVar43 * 8 );
            *(undefined8*)( pauVar48[1] + 8 ) = 0;
            lStack_90 = lVar45;
            goto LAB_001080b7;
         }
         uVar54 = uVar54 + 1;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = ( ulong )(uVar43 + 1) * lVar46;
         auVar33._8_8_ = 0;
         auVar33._0_8_ = uVar52;
         lVar44 = SUB168(auVar17 * auVar33, 8);
         uVar38 = *(uint*)( lVar53 + lVar44 * 4 );
         uVar43 = SUB164(auVar17 * auVar33, 8);
      } while ( ( uVar38 != 0 ) && ( auVar18._8_8_ = 0 ),auVar18._0_8_ = (ulong)uVar38 * lVar46,auVar34._8_8_ = 0,auVar34._0_8_ = uVar52,auVar19._8_8_ = 0,auVar19._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar41 * 4 ) + uVar43 ) - SUB164(auVar18 * auVar34, 8)) * lVar46,auVar35._8_8_ = 0,auVar35._0_8_ = uVar52,lVar45 = SUB168(auVar19 * auVar35, 8),uVar54 <= SUB164(auVar19 * auVar35, 8) );
   }
}}LAB_00107cf3:if ((float)uVar56 * __LC43 < (float)( iVar39 + 1 )) {
   uVar38 = *(uint*)( this + 0x88 );
   if (uVar38 == 0x1c) {
      pauVar48 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_001080b7;
   }
   uVar41 = ( ulong )(uVar38 + 1);
   *(undefined4*)( this + 0x8c ) = 0;
   uVar43 = *(uint*)( hash_table_size_primes + (ulong)uVar38 * 4 );
   if (uVar38 + 1 < 2) {
      uVar41 = 2;
   }
   uVar38 = *(uint*)( hash_table_size_primes + uVar41 * 4 );
   uVar40 = (ulong)uVar38;
   *(int*)( this + 0x88 ) = (int)uVar41;
   pvVar3 = *(void**)( this + 0x70 );
   uVar41 = uVar40 * 4;
   uVar56 = uVar40 * 8;
   uVar42 = Memory::alloc_static(uVar41, false);
   *(undefined8*)( this + 0x70 ) = uVar42;
   __s_00 = (void*)Memory::alloc_static(uVar56, false);
   *(void**)( this + 0x68 ) = __s_00;
   if (uVar38 != 0) {
      __s = *(void**)( this + 0x70 );
      if (( __s < (void*)( (long)__s_00 + uVar56 ) ) && ( __s_00 < (void*)( (long)__s + uVar41 ) )) {
         uVar41 = 0;
         do {
            *(undefined4*)( (long)__s + uVar41 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar41 * 8 ) = 0;
            uVar41 = uVar41 + 1;
         } while ( uVar40 != uVar41 );
      } else {
         memset(__s, 0, uVar41);
         memset(__s_00, 0, uVar56);
      }
   }
   if (uVar43 != 0) {
      uVar41 = 0;
      do {
         uVar38 = *(uint*)( (long)pvVar3 + uVar41 * 4 );
         if (uVar38 != 0) {
            lVar57 = *(long*)( this + 0x70 );
            uVar50 = 0;
            uVar54 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 );
            uVar56 = CONCAT44(0, uVar54);
            lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x88 ) * 8 );
            auVar8._8_8_ = 0;
            auVar8._0_8_ = (ulong)uVar38 * lVar53;
            auVar24._8_8_ = 0;
            auVar24._0_8_ = uVar56;
            lVar46 = SUB168(auVar8 * auVar24, 8);
            puVar1 = (uint*)( lVar57 + lVar46 * 4 );
            iVar39 = SUB164(auVar8 * auVar24, 8);
            uVar51 = *puVar1;
            uVar42 = *(undefined8*)( (long)local_70 + uVar41 * 8 );
            while (uVar51 != 0) {
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar51 * lVar53;
               auVar25._8_8_ = 0;
               auVar25._0_8_ = uVar56;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(( uVar54 + iVar39 ) - SUB164(auVar9 * auVar25, 8)) * lVar53;
               auVar26._8_8_ = 0;
               auVar26._0_8_ = uVar56;
               uVar37 = SUB164(auVar10 * auVar26, 8);
               uVar47 = uVar42;
               if (uVar37 < uVar50) {
                  *puVar1 = uVar38;
                  puVar2 = (undefined8*)( (long)__s_00 + lVar46 * 8 );
                  uVar47 = *puVar2;
                  *puVar2 = uVar42;
                  uVar38 = uVar51;
                  uVar50 = uVar37;
               }
               uVar50 = uVar50 + 1;
               auVar11._8_8_ = 0;
               auVar11._0_8_ = ( ulong )(iVar39 + 1) * lVar53;
               auVar27._8_8_ = 0;
               auVar27._0_8_ = uVar56;
               lVar46 = SUB168(auVar11 * auVar27, 8);
               puVar1 = (uint*)( lVar57 + lVar46 * 4 );
               iVar39 = SUB164(auVar11 * auVar27, 8);
               uVar42 = uVar47;
               uVar51 = *puVar1;
            };
            *(undefined8*)( (long)__s_00 + lVar46 * 8 ) = uVar42;
            *puVar1 = uVar38;
            *(int*)( this + 0x8c ) = *(int*)( this + 0x8c ) + 1;
         }
         uVar41 = uVar41 + 1;
      } while ( uVar41 != uVar43 );
      Memory::free_static(local_70, false);
      Memory::free_static(pvVar3, false);
   }
}lVar57 = *param_1;iVar39 = *(int*)( this + 0x14 );if (iVar39 == 0) {
   uVar38 = *(uint*)( this + 0x10 ) + 1;
   lVar46 = ( ulong ) * (uint*)( this + 0x10 ) * 8;
   *(uint*)( this + 0x10 ) = uVar38;
   uVar42 = Memory::realloc_static(*(void**)this, (ulong)uVar38 * 8, false);
   *(undefined8*)this = uVar42;
   uVar42 = Memory::realloc_static(*(void**)( this + 8 ), ( ulong ) * (uint*)( this + 0x10 ) << 3, false);
   lVar53 = *(long*)this;
   *(undefined8*)( this + 8 ) = uVar42;
   uVar42 = Memory::alloc_static(( ulong ) * (uint*)( this + 0x20 ) << 5, false);
   uVar38 = *(uint*)( this + 0x20 );
   *(undefined8*)( lVar53 + lVar46 ) = uVar42;
   lVar53 = *(long*)( this + 8 );
   uVar42 = Memory::alloc_static((ulong)uVar38 << 3, false);
   *(undefined8*)( lVar53 + lVar46 ) = uVar42;
   uVar38 = *(uint*)( this + 0x20 );
   if (uVar38 == 0) {
      plVar49 = *(long**)( this + 8 );
   } else {
      plVar49 = *(long**)( this + 8 );
      lVar53 = *(long*)this;
      uVar41 = 0;
      lVar44 = *plVar49;
      do {
         *(ulong*)( lVar44 + uVar41 * 8 ) = uVar41 * 0x20 + *(long*)( lVar46 + lVar53 );
         uVar41 = uVar41 + 1;
      } while ( uVar41 != uVar38 );
   }
   iVar39 = uVar38 + *(int*)( this + 0x14 );
} else {
   plVar49 = *(long**)( this + 8 );
}uVar38 = iVar39 - 1;*(uint*)( this + 0x14 ) = uVar38;pauVar48 = *(undefined1(**) [16])( plVar49[uVar38 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )] + ( ulong )(uVar38 & *(uint*)( this + 0x1c )) * 8 );*pauVar48 = (undefined1[16])0x0;puVar2 = *(undefined8**)( this + 0x80 );*(long*)pauVar48[1] = lVar57;*(undefined8*)( pauVar48[1] + 8 ) = 0;if (puVar2 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x78 ) = pauVar48;
} else {
   *puVar2 = pauVar48;
   *(undefined8*)( *pauVar48 + 8 ) = *(undefined8*)( this + 0x80 );
}lVar57 = *(long*)( this + 0x70 );*(undefined1(**) [16])( this + 0x80 ) = pauVar48;uVar41 = *param_1 * 0x3ffff - 1;uVar41 = ( uVar41 ^ uVar41 >> 0x1f ) * 0x15;uVar41 = ( uVar41 ^ uVar41 >> 0xb ) * 0x41;uVar41 = uVar41 >> 0x16 ^ uVar41;uVar56 = uVar41 & 0xffffffff;if ((int)uVar41 == 0) {
   uVar56 = 1;
}uVar51 = 0;lVar53 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x88 ) * 8 );uVar54 = (uint)uVar56;uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x88 ) * 4 );uVar41 = CONCAT44(0, uVar38);auVar12._8_8_ = 0;auVar12._0_8_ = uVar56 * lVar53;auVar28._8_8_ = 0;auVar28._0_8_ = uVar41;lStack_90 = SUB168(auVar12 * auVar28, 8);lVar46 = *(long*)( this + 0x68 );puVar1 = (uint*)( lVar57 + lStack_90 * 4 );iVar39 = SUB164(auVar12 * auVar28, 8);uVar43 = *puVar1;pauVar36 = pauVar48;while (uVar43 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar43 * lVar53;
   auVar29._8_8_ = 0;
   auVar29._0_8_ = uVar41;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar38 + iVar39 ) - SUB164(auVar13 * auVar29, 8)) * lVar53;
   auVar30._8_8_ = 0;
   auVar30._0_8_ = uVar41;
   uVar54 = SUB164(auVar14 * auVar30, 8);
   pauVar58 = pauVar36;
   if (uVar54 < uVar51) {
      *puVar1 = (uint)uVar56;
      uVar56 = (ulong)uVar43;
      puVar2 = (undefined8*)( lVar46 + lStack_90 * 8 );
      pauVar58 = (undefined1(*) [16])*puVar2;
      *puVar2 = pauVar36;
      uVar51 = uVar54;
   }
   uVar54 = (uint)uVar56;
   uVar51 = uVar51 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar39 + 1) * lVar53;
   auVar31._8_8_ = 0;
   auVar31._0_8_ = uVar41;
   lStack_90 = SUB168(auVar15 * auVar31, 8);
   puVar1 = (uint*)( lVar57 + lStack_90 * 4 );
   iVar39 = SUB164(auVar15 * auVar31, 8);
   pauVar36 = pauVar58;
   uVar43 = *puVar1;
};*(undefined1(**) [16])( lVar46 + lStack_90 * 8 ) = pauVar36;*puVar1 = uVar54;*(int*)( this + 0x8c ) = *(int*)( this + 0x8c ) + 1;LAB_001080b7:auVar60._8_8_ = lStack_90;auVar60._0_8_ = pauVar48[1] + 8;return auVar60;}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<StringName, WorkerThreadPool*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   WorkerThreadPool*> > >::operator[](StringName const&) */undefined8 * __thiscallHashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>>>::operator [](HashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>>> * this, StringName * param_1) * puVar1 ;undefined8 *puVar2void *pvVar3void *__sundefined8 *puVar4undefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1 auVar30[16]undefined1 auVar31[16]undefined1 auVar32[16]undefined1 auVar33[16]undefined1 auVar34[16]undefined1 auVar35[16]undefined1 auVar36[16]uint uVar37uint uVar38uint uVar39ulong uVar40undefined8 uVar41void *__s_00undefined8 *puVar42long lVar43void *pvVar44ulong uVar45int iVar46long lVar47long lVar48long lVar49ulong uVar50undefined8 uVar51uint uVar52uint uVar53uint uVar54undefined8 *puVar55long in_FS_OFFSETbool bVar56long local_58undefined8 local_50long local_40lVar43 = *(long*)( this + 8 );local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar40 = CONCAT44(0, uVar38);if (lVar43 == 0) {
   LAB_00108a68:uVar45 = uVar40 * 4;
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
         } while ( uVar40 != uVar45 );
         goto LAB_00108918;
      }
      memset(pvVar3, 0, uVar45);
      memset(pvVar44, 0, uVar50);
      iVar46 = *(int*)( this + 0x2c );
      LAB_0010891c:if (iVar46 != 0) {
         LAB_00108924:uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
         uVar45 = CONCAT44(0, uVar38);
         lVar43 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
         if (*(long*)param_1 == 0) {
            uVar39 = StringName::get_empty_hash();
         } else {
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
                  puVar42[3] = 0;
                  goto LAB_0010851c;
               }
               uVar54 = uVar54 + 1;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = ( ulong )(uVar53 + 1) * lVar43;
               auVar34._8_8_ = 0;
               auVar34._0_8_ = uVar45;
               lVar49 = SUB168(auVar18 * auVar34, 8);
               uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar49 * 4 );
               uVar53 = SUB164(auVar18 * auVar34, 8);
            } while ( ( uVar52 != 0 ) && ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar52 * lVar43,auVar35._8_8_ = 0,auVar35._0_8_ = uVar45,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( uVar38 + uVar53 ) - SUB164(auVar19 * auVar35, 8)) * lVar43,auVar36._8_8_ = 0,auVar36._0_8_ = uVar45,uVar54 <= SUB164(auVar20 * auVar36, 8) );
         }
         iVar46 = *(int*)( this + 0x2c );
      }
      goto LAB_00108553;
   }
   iVar46 = *(int*)( this + 0x2c );
   if (pvVar44 == (void*)0x0) goto LAB_00108553;
   if (iVar46 != 0) goto LAB_00108924;
   LAB_00108579:uVar38 = *(uint*)( this + 0x28 );
   if (uVar38 == 0x1c) {
      puVar42 = (undefined8*)0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0010851c;
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
         } while ( uVar40 != uVar50 );
      } else {
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
            };
            *(undefined8*)( (long)__s_00 + lVar47 * 8 ) = uVar41;
            *puVar1 = uVar38;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar40 = uVar40 + 1;
      } while ( uVar39 != uVar40 );
      Memory::free_static(pvVar44, false);
      Memory::free_static(pvVar3, false);
   }
} else {
   iVar46 = *(int*)( this + 0x2c );
   if (iVar46 != 0) {
      lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      if (*(long*)param_1 == 0) {
         uVar39 = StringName::get_empty_hash();
         lVar43 = *(long*)( this + 8 );
      } else {
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
               goto LAB_0010851c;
            }
            uVar54 = uVar54 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(uVar53 + 1) * lVar49;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar40;
            lVar47 = SUB168(auVar6 * auVar22, 8);
            uVar52 = *(uint*)( *(long*)( this + 0x10 ) + lVar47 * 4 );
            uVar53 = SUB164(auVar6 * auVar22, 8);
         } while ( ( uVar52 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar52 * lVar49,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( uVar53 + uVar38 ) - SUB164(auVar7 * auVar23, 8)) * lVar49,auVar24._8_8_ = 0,auVar24._0_8_ = uVar40,uVar54 <= SUB164(auVar8 * auVar24, 8) );
      }
      uVar40 = ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      if (lVar43 == 0) goto LAB_00108a68;
      LAB_00108918:iVar46 = *(int*)( this + 0x2c );
      goto LAB_0010891c;
   }
   LAB_00108553:if ((float)uVar40 * __LC43 < (float)( iVar46 + 1 )) goto LAB_00108579;
}StringName::StringName((StringName*)&local_58, param_1);local_50 = 0;puVar42 = (undefined8*)operator_new(0x20, "");*puVar42 = 0;puVar42[1] = 0;StringName::StringName((StringName*)( puVar42 + 2 ), (StringName*)&local_58);bVar56 = StringName::configured != '\0';puVar42[3] = local_50;if (( bVar56 ) && ( local_58 != 0 )) {
   StringName::unref();
}puVar4 = *(undefined8**)( this + 0x20 );if (puVar4 == (undefined8*)0x0) {
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x18 ) = puVar42;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 == 0) goto LAB_00108a2d;
   LAB_00108807:uVar38 = *(uint*)( lVar43 + 0x20 );
} else {
   *puVar4 = puVar42;
   puVar42[1] = puVar4;
   lVar43 = *(long*)param_1;
   *(undefined8**)( this + 0x20 ) = puVar42;
   if (lVar43 != 0) goto LAB_00108807;
   LAB_00108a2d:uVar38 = StringName::get_empty_hash();
}if (uVar38 == 0) {
   uVar38 = 1;
}uVar40 = (ulong)uVar38;lVar43 = *(long*)( this + 0x10 );uVar53 = 0;lVar49 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar39 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar45 = CONCAT44(0, uVar39);auVar13._8_8_ = 0;auVar13._0_8_ = uVar40 * lVar49;auVar29._8_8_ = 0;auVar29._0_8_ = uVar45;lVar48 = SUB168(auVar13 * auVar29, 8);lVar47 = *(long*)( this + 8 );puVar1 = (uint*)( lVar43 + lVar48 * 4 );iVar46 = SUB164(auVar13 * auVar29, 8);uVar52 = *puVar1;puVar4 = puVar42;while (uVar52 != 0) {
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
};*(undefined8**)( lVar47 + lVar48 * 8 ) = puVar4;*puVar1 = uVar38;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0010851c:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return puVar42 + 3;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* CowData<char32_t>::_unref() */void CowData<char32_t>::_unref(CowData<char32_t> *this) {
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
}/* PagedAllocator<WorkerThreadPool::Task, false, 1024u>::free(WorkerThreadPool::Task*) */void PagedAllocator<WorkerThreadPool::Task,false,1024u>::free(PagedAllocator<WorkerThreadPool::Task,false,1024u> *this, Task *param_1) {
   uint uVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   int iVar5;
   plVar2 = *(long**)( param_1 + 0xa8 );
   if (plVar2 != (long*)0x0) {
      lVar3 = *(long*)( param_1 + 0xb8 );
      if (lVar3 != 0) {
         *(undefined8*)( lVar3 + 0x18 ) = *(undefined8*)( param_1 + 0xc0 );
      }
      lVar4 = *(long*)( param_1 + 0xc0 );
      if (lVar4 != 0) {
         *(long*)( lVar4 + 0x10 ) = lVar3;
      }
      if (param_1 + 0xa8 == (Task*)*plVar2) {
         *plVar2 = *(long*)( param_1 + 0xb8 );
      }
      if (param_1 + 0xa8 == (Task*)plVar2[1]) {
         plVar2[1] = lVar4;
      }
   }
   iVar5 = pthread_mutex_lock((pthread_mutex_t*)( param_1 + 0x38 ));
   if (iVar5 == 0) {
      if (*(int*)( param_1 + 0x94 ) != 0) {
         _err_print_error("~Semaphore", "./core/os/semaphore.h", 0x81, "A Semaphore object is being destroyed while one or more threads are still waiting on it.\nPlease call post() on it as necessary to prevent such a situation and so ensure correct cleanup.", 0, 1);
         std::condition_variable::condition_variable((condition_variable*)( param_1 + 0x60 ));
      }
      pthread_mutex_unlock((pthread_mutex_t*)( param_1 + 0x38 ));
      std::condition_variable::~condition_variable((condition_variable*)( param_1 + 0x60 ));
      CowData<char32_t>::_unref((CowData<char32_t>*)( param_1 + 0x30 ));
      Callable::~Callable((Callable*)( param_1 + 8 ));
      uVar1 = *(uint*)( this + 0x14 );
      *(Task**)( *(long*)( *(long*)( this + 8 ) + ( ulong )(uVar1 >> ( ( byte ) * (undefined4*)( this + 0x18 ) & 0x1f )) * 8 ) + ( ulong )(uVar1 & *(uint*)( this + 0x1c )) * 8 ) = param_1;
      *(uint*)( this + 0x14 ) = uVar1 + 1;
      return;
   }
   /* WARNING: Subroutine does not return */
   std::__throw_system_error(iVar5);
}/* WARNING: Removing unreachable block (ram,0x00108ed0) *//* String vformat<int, unsigned int>(String const&, int const, unsigned int const) */String *vformat<int,unsigned_int>(String *param_1, int param_2, uint param_3) {
   Variant *pVVar1;
   Variant *pVVar2;
   uint in_ECX;
   undefined4 in_register_00000034;
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
   Variant::Variant(local_70, in_ECX);
   local_58 = 0;
   local_50 = (undefined1[16])0x0;
   Array::Array(local_d8);
   iVar3 = (int)local_d8;
   Array::resize(iVar3);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_88);
   pVVar2 = (Variant*)Array::operator [](iVar3);
   Variant::operator =(pVVar2, local_70);
   String::sprintf((Array*)local_d0, (bool*)CONCAT44(in_register_00000034, param_2));
   *(undefined8*)param_1 = local_d0[0];
   local_d0[0] = 0;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_d0);
   pVVar2 = (Variant*)local_40;
   Array::~Array(local_d8);
   do {
      pVVar1 = pVVar2 + -0x18;
      pVVar2 = pVVar2 + -0x18;
      if (Variant::needs_deinit[*(int*)pVVar1] != '\0') {
         Variant::_clear_internal();
      }
   } while ( pVVar2 != local_88 );
   if (local_40[0] != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return param_1;
}/* godot::details::enum_qualified_name_to_class_info_name(String const&) */details * __thiscall
godot::details::enum_qualified_name_to_class_info_name(details *this,String *param_1){
   long *plVar1;
   long lVar2;
   code *pcVar3;
   long *plVar4;
   long *plVar5;
   long lVar6;
   long lVar7;
   long in_FS_OFFSET;
   undefined8 local_60;
   char local_58[8];
   long *local_50;
   undefined *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   String::split(local_58, SUB81(param_1, 0), 0x10905f);
   if (( local_50 != (long*)0x0 ) && ( 2 < local_50[-1] )) {
      local_60 = 0;
      local_48 = &_LC47;
      local_40 = 1;
      String::parse_latin1((StrRange*)&local_60);
      if (local_50 == (long*)0x0) {
         lVar7 = 0;
         lVar6 = -2;
      } else {
         lVar7 = local_50[-1];
         lVar6 = lVar7 + -2;
         if (-1 < lVar6) {
            String::operator +((String*)&local_48, (String*)( local_50 + lVar6 ));
            String::operator +((String*)this, (String*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
            goto LAB_0010912a;
         }
      }
      _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar6, lVar7, "p_index", "size()", "", false, true);
      _err_flush_stdout();
      /* WARNING: Does not return */
      pcVar3 = (code*)invalidInstructionException();
      ( *pcVar3 )();
   }
   local_60 = 0;
   local_48 = &_LC47;
   local_40 = 1;
   String::parse_latin1((StrRange*)&local_60);
   String::join((Vector*)this);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
   LAB_0010912a:plVar4 = local_50;
   if (local_50 != (long*)0x0) {
      LOCK();
      plVar5 = local_50 + -2;
      *plVar5 = *plVar5 + -1;
      UNLOCK();
      if (*plVar5 == 0) {
         if (local_50 == (long*)0x0) {
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         lVar7 = local_50[-1];
         local_50 = (long*)0x0;
         if (lVar7 != 0) {
            lVar6 = 0;
            plVar5 = plVar4;
            do {
               if (*plVar5 != 0) {
                  LOCK();
                  plVar1 = (long*)( *plVar5 + -0x10 );
                  *plVar1 = *plVar1 + -1;
                  UNLOCK();
                  if (*plVar1 == 0) {
                     lVar2 = *plVar5;
                     *plVar5 = 0;
                     Memory::free_static((void*)( lVar2 + -0x10 ), false);
                  }
               }
               lVar6 = lVar6 + 1;
               plVar5 = plVar5 + 1;
            } while ( lVar7 != lVar6 );
         }
         Memory::free_static(plVar4 + -2, false);
      }
   }
   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return this;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* WorkerThreadPool::_get_property_listv(List<PropertyInfo, DefaultAllocator>*, bool) const */void WorkerThreadPool::_get_property_listv(List *param_1, bool param_2) {
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
   local_78 = "WorkerThreadPool";
   local_88 = 0;
   local_90 = 0;
   local_70 = 0x10;
   String::parse_latin1((StrRange*)&local_90);
   local_78 = "WorkerThreadPool";
   local_98 = 0;
   local_70 = 0x10;
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
      LAB_0010943d:local_50 = 0x80;
      StringName::operator =((StringName*)&local_68, (StringName*)&local_88);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_90);
      local_50 = 0x80;
      if (local_60 != 0x11) goto LAB_0010943d;
      StringName::StringName((StringName*)&local_80, (String*)&local_58, false);
      if (local_68 != local_80) {
         StringName::unref();
         lVar2 = *(long*)pLVar5;
         local_68 = local_80;
         goto joined_r0x0010945f;
      }
      if (( StringName::configured != '\0' ) && ( local_80 != 0 )) {
         StringName::unref();
      }
   }
   lVar2 = *(long*)pLVar5;
   joined_r0x0010945f:if (lVar2 == 0) {
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
   StringName::StringName((StringName*)&local_78, "WorkerThreadPool", false);
   ClassDB::get_property_list((StringName*)&local_78, pLVar5, true, (Object*)param_1);
   if (( StringName::configured != '\0' ) && ( local_78 != (char*)0x0 )) {
      StringName::unref();
   }
   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindT<long>::_gen_argument_type_info(int) const */undefined4 *MethodBindT<long>::_gen_argument_type_info(int param_1) {
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
   if (in_EDX != 0) goto LAB_00109669;
   local_78 = 0;
   local_68 = &_LC16;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_00109765:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109765;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
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
   LAB_00109669:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar5;
}/* MethodBindTR<Error, long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<Error,long>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined8 uVar4;
   undefined8 uVar5;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar6;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   undefined8 local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   char *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar6 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX != 0) {
      local_a0 = 0;
      local_68 = "Error";
      local_60._8_8_ = local_60._0_8_;
      local_60._0_8_ = 5;
      String::parse_latin1((StrRange*)&local_a0);
      godot::details::enum_qualified_name_to_class_info_name((details*)&local_98, (String*)&local_a0);
      StringName::StringName((StringName*)&local_68, (String*)&local_98, false);
      *puVar6 = 2;
      puVar6[6] = 0;
      *(undefined8*)( puVar6 + 8 ) = 0;
      puVar6[10] = 0x10006;
      *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
      local_a8 = 0;
      local_b0 = 0;
      StringName::operator =((StringName*)( puVar6 + 4 ), (StringName*)&local_68);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
         StringName::unref();
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      goto LAB_00109a8f;
   }
   local_98 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_80 = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = "";
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (char*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_00109acd:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109acd;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._8_8_;
      local_60 = auVar2 << 0x40;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }
   local_70 = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   uVar5 = local_90._8_8_;
   uVar4 = local_90._0_8_;
   auVar3._8_8_ = 0;
   auVar3._0_8_ = local_90._8_8_;
   local_90 = auVar3 << 0x40;
   *puVar6 = (undefined4)local_98;
   *(undefined8*)( puVar6 + 2 ) = uVar4;
   *(undefined8*)( puVar6 + 4 ) = uVar5;
   puVar6[6] = (undefined4)local_80;
   *(long*)( puVar6 + 8 ) = local_78;
   puVar6[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_00109a8f:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar6;
}/* MethodBindTRC<unsigned int, long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<unsigned_int,long>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   undefined8 uVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      local_68 = &_LC16;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar7 = 2;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar7[10] = 6;
         LAB_00109e27:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_98);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_a0);
         puVar7[10] = 6;
         if (puVar7[6] != 0x11) goto LAB_00109e27;
         StringName::StringName((StringName*)&local_68, (String*)( puVar7 + 8 ), false);
         if (*(undefined**)( puVar7 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar7 + 4 ) = local_68;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      goto LAB_00109e62;
   }
   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC16;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_00109e9d:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_00109e9d;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }
   local_70 = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   uVar6 = local_90._8_8_;
   uVar5 = local_90._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_90._8_8_;
   local_90 = auVar4 << 0x40;
   *puVar7 = (undefined4)local_98;
   *(undefined8*)( puVar7 + 2 ) = uVar5;
   *(undefined8*)( puVar7 + 4 ) = uVar6;
   puVar7[6] = (undefined4)local_80;
   *(long*)( puVar7 + 8 ) = local_78;
   puVar7[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_00109e62:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBindTRC<bool, long>::_gen_argument_type_info(int) const */undefined4 *MethodBindTRC<bool,long>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined8 uVar5;
   undefined8 uVar6;
   int in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar7;
   long in_FS_OFFSET;
   undefined8 local_b8;
   long local_b0;
   long local_a8;
   long local_a0;
   long local_98;
   undefined1 local_90[16];
   undefined8 local_80;
   long local_78;
   undefined4 local_70;
   undefined *local_68;
   undefined1 local_60[16];
   int local_50;
   long local_48;
   undefined4 local_40;
   long local_30;
   puVar7 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   local_98 = 0;
   if (in_EDX != 0) {
      local_a0 = 0;
      auVar2._8_8_ = 0;
      auVar2._0_8_ = local_60._0_8_;
      local_60 = auVar2 << 0x40;
      local_68 = &_LC16;
      String::parse_latin1((StrRange*)&local_a0);
      local_a8 = 0;
      *puVar7 = 1;
      puVar7[6] = 0;
      *(undefined8*)( puVar7 + 8 ) = 0;
      *(undefined1(*) [16])( puVar7 + 2 ) = (undefined1[16])0x0;
      if (local_a0 == 0) {
         puVar7[10] = 6;
         LAB_0010a217:StringName::operator =((StringName*)( puVar7 + 4 ), (StringName*)&local_98);
      } else {
         CowData<char32_t>::_ref((CowData<char32_t>*)( puVar7 + 8 ), (CowData*)&local_a0);
         puVar7[10] = 6;
         if (puVar7[6] != 0x11) goto LAB_0010a217;
         StringName::StringName((StringName*)&local_68, (String*)( puVar7 + 8 ), false);
         if (*(undefined**)( puVar7 + 4 ) == local_68) {
            if (( StringName::configured != '\0' ) && ( local_68 != (undefined*)0x0 )) {
               StringName::unref();
            }
         } else {
            StringName::unref();
            *(undefined**)( puVar7 + 4 ) = local_68;
         }
      }
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
         StringName::unref();
      }
      goto LAB_0010a252;
   }
   local_80 = 0;
   local_90._0_8_ = 0;
   local_90._8_8_ = 0;
   local_78 = 0;
   local_70 = 6;
   local_a8 = 0;
   local_b0 = 0;
   local_68 = &_LC16;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._0_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_b0 == 0) {
      LAB_0010a28d:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_b0);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010a28d;
      StringName::StringName((StringName*)&local_a0, (String*)&local_48, false);
      if (local_60._8_8_ == local_a0) {
         if (( StringName::configured != '\0' ) && ( local_a0 != 0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         local_60._8_8_ = local_a0;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   local_98 = CONCAT44(local_98._4_4_, local_68._0_4_);
   if (local_90._0_8_ != local_60._0_8_) {
      CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
      local_90._0_8_ = local_60._0_8_;
      auVar3._8_8_ = 0;
      auVar3._0_8_ = local_60._8_8_;
      local_60 = auVar3 << 0x40;
   }
   if (local_90._8_8_ != local_60._8_8_) {
      StringName::unref();
      local_90._8_8_ = local_60._8_8_;
      local_60._8_8_ = 0;
   }
   local_80 = CONCAT44(local_80._4_4_, local_50);
   if (local_78 != local_48) {
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_78);
      local_78 = local_48;
      local_48 = 0;
   }
   local_70 = local_40;
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   if (( StringName::configured != '\0' ) && ( local_60._8_8_ != 0 )) {
      StringName::unref();
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)local_60);
   uVar6 = local_90._8_8_;
   uVar5 = local_90._0_8_;
   auVar4._8_8_ = 0;
   auVar4._0_8_ = local_90._8_8_;
   local_90 = auVar4 << 0x40;
   *puVar7 = (undefined4)local_98;
   *(undefined8*)( puVar7 + 2 ) = uVar5;
   *(undefined8*)( puVar7 + 4 ) = uVar6;
   puVar7[6] = (undefined4)local_80;
   *(long*)( puVar7 + 8 ) = local_78;
   puVar7[10] = local_70;
   CowData<char32_t>::_unref((CowData<char32_t>*)local_90);
   LAB_0010a252:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar7;
}/* MethodBind* create_method_bind<WorkerThreadPool, long, Callable const&, bool, String const&>(long
   (WorkerThreadPool::*)(Callable const&, bool, String const&)) */MethodBind *create_method_bind<WorkerThreadPool,long,Callable_const&,bool,String_const&>(_func_long_Callable_ptr_bool_String_ptr *param_1) {
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
   *(_func_long_Callable_ptr_bool_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fdc0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 3;
   local_40 = 0;
   local_38 = "WorkerThreadPool";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<WorkerThreadPool, bool, long>(bool (WorkerThreadPool::*)(long)
   const) */MethodBind *create_method_bind<WorkerThreadPool,bool,long>(_func_bool_long *param_1) {
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
   *(_func_bool_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fe20;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WorkerThreadPool";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<WorkerThreadPool, Error, long>(Error (WorkerThreadPool::*)(long))
    */MethodBind *create_method_bind<WorkerThreadPool,Error,long>(_func_Error_long *param_1) {
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
   *(_func_Error_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fe80;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WorkerThreadPool";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<WorkerThreadPool, long, Callable const&, int, int, bool, String
   const&>(long (WorkerThreadPool::*)(Callable const&, int, int, bool, String const&)) */MethodBind *create_method_bind<WorkerThreadPool,long,Callable_const&,int,int,bool,String_const&>(_func_long_Callable_ptr_int_int_bool_String_ptr *param_1) {
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
   *(_func_long_Callable_ptr_int_int_bool_String_ptr**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010fee0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 5;
   local_40 = 0;
   local_38 = "WorkerThreadPool";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<WorkerThreadPool, unsigned int, long>(unsigned int
   (WorkerThreadPool::*)(long) const) */MethodBind *create_method_bind<WorkerThreadPool,unsigned_int,long>(_func_uint_long *param_1) {
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
   *(_func_uint_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ff40;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_set_returns(SUB81(this, 0));
   MethodBind::_set_const(SUB81(this, 0));
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WorkerThreadPool";
   local_30 = 0x10;
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
}/* MethodBind* create_method_bind<WorkerThreadPool, long>(void (WorkerThreadPool::*)(long)) */MethodBind *create_method_bind<WorkerThreadPool,long>(_func_void_long *param_1) {
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
   *(_func_void_long**)( this + 0x58 ) = param_1;
   *(undefined***)this = &PTR__gen_argument_type_0010ffa0;
   *(undefined8*)( this + 0x60 ) = in_RSI;
   MethodBind::_generate_argument_types((int)this);
   *(undefined4*)( this + 0x34 ) = 1;
   local_40 = 0;
   local_38 = "WorkerThreadPool";
   local_30 = 0x10;
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
}/* WorkerThreadPool::_bind_methods() [clone .cold] */void WorkerThreadPool::_bind_methods(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}/* WorkerThreadPool::_initialize_classv() */void WorkerThreadPool::_initialize_classv(void) {
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
      local_48 = "WorkerThreadPool";
      local_60 = 0;
      local_40 = 0x10;
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
}/* HashMap<unsigned long, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned long>,
   DefaultTypedAllocator<HashMapElement<unsigned long, int> > >::_resize_and_rehash(unsigned int) */void HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::_resize_and_rehash(HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>> *this, uint param_1) {
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
         } while ( uVar22 != uVar26 );
      } else {
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
            };
            *(undefined8*)( (long)__s_00 + lVar20 * 8 ) = uVar18;
            *puVar1 = uVar21;
            *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
         }
         uVar26 = uVar26 + 1;
      } while ( uVar26 != uVar3 );
      Memory::free_static(pvVar6, false);
      Memory::free_static(pvVar7, false);
      return;
   }
   return;
}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned long, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned long>,
   DefaultTypedAllocator<HashMapElement<unsigned long, int> > >::operator[](unsigned long const&) */undefined1 * __thiscallHashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::operator [](HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>> * this, ulong * param_1) * puVar1 ;uint uVar2uint uVar3undefined8 *puVar4long lVar5long lVar6long lVar7void *__sundefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1(*pauVar16)[16];char cVar17undefined1(*pauVar18)[16];ulong uVar19undefined8 uVar20void *__s_00int iVar21long lVar22uint uVar23uint uVar24ulong uVar25ulong *puVar26ulong uVar27undefined1(*pauVar28)[16];long in_FS_OFFSETuint local_68uint local_48uint local_44long local_40puVar26 = (ulong*)*param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );local_48 = 0;cVar17 = _lookup_pos(this, puVar26, &local_48);if (cVar17 == '\0') {
   uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   if (*(long*)( this + 8 ) == 0) {
      uVar27 = (ulong)uVar2;
      uVar19 = uVar27 * 4;
      uVar25 = uVar27 * 8;
      uVar20 = Memory::alloc_static(uVar19, false);
      *(undefined8*)( this + 0x10 ) = uVar20;
      __s_00 = (void*)Memory::alloc_static(uVar25, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar2 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar25 ) ) && ( __s_00 < (void*)( (long)__s + uVar19 ) )) {
            uVar19 = 0;
            do {
               *(undefined4*)( (long)__s + uVar19 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar19 * 8 ) = 0;
               uVar19 = uVar19 + 1;
            } while ( uVar27 != uVar19 );
         } else {
            memset(__s, 0, uVar19);
            memset(__s_00, 0, uVar25);
         }
      }
      puVar26 = (ulong*)*param_1;
   }
   local_44 = 0;
   cVar17 = _lookup_pos(this, puVar26, &local_44);
   if (cVar17 == '\0') {
      if ((float)uVar2 * __LC43 < (float)( *(int*)( this + 0x2c ) + 1 )) {
         if (*(int*)( this + 0x28 ) == 0x1c) {
            pauVar18 = (undefined1(*) [16])0x0;
            _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
            goto LAB_0010b14b;
         }
         _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
         puVar26 = (ulong*)*param_1;
      }
      pauVar18 = (undefined1(*) [16])operator_new(0x20, "");
      *(ulong**)pauVar18[1] = puVar26;
      *(undefined4*)( pauVar18[1] + 8 ) = 0;
      *pauVar18 = (undefined1[16])0x0;
      puVar4 = *(undefined8**)( this + 0x20 );
      if (puVar4 == (undefined8*)0x0) {
         *(undefined1(**) [16])( this + 0x18 ) = pauVar18;
      } else {
         *puVar4 = pauVar18;
         *(undefined8**)( *pauVar18 + 8 ) = puVar4;
      }
      uVar19 = *param_1;
      lVar5 = *(long*)( this + 0x10 );
      *(undefined1(**) [16])( this + 0x20 ) = pauVar18;
      uVar19 = uVar19 * 0x3ffff - 1;
      uVar19 = ( uVar19 ^ uVar19 >> 0x1f ) * 0x15;
      uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
      uVar19 = uVar19 >> 0x16 ^ uVar19;
      uVar25 = uVar19 & 0xffffffff;
      if ((int)uVar19 == 0) {
         uVar25 = 1;
      }
      uVar23 = 0;
      lVar6 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar24 = (uint)uVar25;
      uVar2 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar19 = CONCAT44(0, uVar2);
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar25 * lVar6;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = uVar19;
      lVar22 = SUB168(auVar8 * auVar12, 8);
      lVar7 = *(long*)( this + 8 );
      puVar1 = (uint*)( lVar5 + lVar22 * 4 );
      iVar21 = SUB164(auVar8 * auVar12, 8);
      uVar3 = *puVar1;
      pauVar16 = pauVar18;
      while (uVar3 != 0) {
         auVar9._8_8_ = 0;
         auVar9._0_8_ = (ulong)uVar3 * lVar6;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar19;
         auVar10._8_8_ = 0;
         auVar10._0_8_ = ( ulong )(( uVar2 + iVar21 ) - SUB164(auVar9 * auVar13, 8)) * lVar6;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar19;
         local_68 = SUB164(auVar10 * auVar14, 8);
         pauVar28 = pauVar16;
         if (local_68 < uVar23) {
            *puVar1 = (uint)uVar25;
            uVar25 = (ulong)uVar3;
            puVar4 = (undefined8*)( lVar7 + lVar22 * 8 );
            pauVar28 = (undefined1(*) [16])*puVar4;
            *puVar4 = pauVar16;
            uVar23 = local_68;
         }
         uVar24 = (uint)uVar25;
         uVar23 = uVar23 + 1;
         auVar11._8_8_ = 0;
         auVar11._0_8_ = ( ulong )(iVar21 + 1) * lVar6;
         auVar15._8_8_ = 0;
         auVar15._0_8_ = uVar19;
         lVar22 = SUB168(auVar11 * auVar15, 8);
         puVar1 = (uint*)( lVar5 + lVar22 * 4 );
         iVar21 = SUB164(auVar11 * auVar15, 8);
         pauVar16 = pauVar28;
         uVar3 = *puVar1;
      };
      *(undefined1(**) [16])( lVar7 + lVar22 * 8 ) = pauVar16;
      *puVar1 = uVar24;
      *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   } else {
      pauVar18 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_44 * 8 );
      *(undefined4*)( pauVar18[1] + 8 ) = 0;
   }
} else {
   pauVar18 = *(undefined1(**) [16])( *(long*)( this + 8 ) + (ulong)local_48 * 8 );
}LAB_0010b14b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar18[1] + 8;
}/* WARNING: Subroutine does not return */__stack_chk_fail();}/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned long, int, HashMapHasherDefault, HashMapComparatorDefault<unsigned long>,
   DefaultTypedAllocator<HashMapElement<unsigned long, int> > >::insert(unsigned long const&, int
   const&, bool) */void HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>::insert(ulong *param_1, int *param_2, bool param_3) {
   uint *puVar1;
   uint uVar2;
   undefined4 uVar3;
   long lVar4;
   undefined8 *puVar5;
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
   undefined1(*pauVar22)[16];
   uint uVar23;
   ulong uVar24;
   undefined1(*pauVar25)[16];
   undefined8 uVar26;
   void *__s_00;
   undefined4 *in_RCX;
   int iVar27;
   undefined7 in_register_00000011;
   long *plVar28;
   long lVar29;
   long lVar30;
   ulong uVar31;
   uint uVar32;
   char in_R8B;
   ulong uVar33;
   uint uVar34;
   long lVar35;
   undefined1(*pauVar36)[16];
   plVar28 = (long*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 2 );
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 );
   if (__s_00 == (void*)0x0) {
      uVar33 = (ulong)uVar2;
      uVar24 = uVar33 * 4;
      uVar31 = uVar33 * 8;
      uVar26 = Memory::alloc_static(uVar24, false);
      *(undefined8*)( param_2 + 4 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar31, false);
      *(void**)( param_2 + 2 ) = __s_00;
      if (uVar2 != 0) {
         __s = *(void**)( param_2 + 4 );
         if (( __s < (void*)( (long)__s_00 + uVar31 ) ) && ( __s_00 < (void*)( (long)__s + uVar24 ) )) {
            uVar24 = 0;
            do {
               *(undefined4*)( (long)__s + uVar24 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar24 * 8 ) = 0;
               uVar24 = uVar24 + 1;
            } while ( uVar33 != uVar24 );
            goto LAB_0010b2d6;
         }
         memset(__s, 0, uVar24);
         memset(__s_00, 0, uVar31);
         iVar27 = param_2[0xb];
         lVar35 = *plVar28;
         goto LAB_0010b2e1;
      }
      iVar27 = param_2[0xb];
      lVar35 = *plVar28;
      if (__s_00 != (void*)0x0) goto LAB_0010b2e1;
   } else {
      LAB_0010b2d6:iVar27 = param_2[0xb];
      lVar35 = *plVar28;
      LAB_0010b2e1:if (iVar27 != 0) {
         uVar33 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 ));
         lVar4 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8 );
         uVar24 = lVar35 * 0x3ffff - 1;
         uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
         uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
         uVar24 = uVar24 >> 0x16 ^ uVar24;
         uVar31 = uVar24 & 0xffffffff;
         if ((int)uVar24 == 0) {
            uVar31 = 1;
         }
         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar31 * lVar4;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar33;
         lVar29 = SUB168(auVar6 * auVar14, 8);
         uVar32 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
         uVar23 = SUB164(auVar6 * auVar14, 8);
         if (uVar32 != 0) {
            uVar34 = 0;
            do {
               if (( (uint)uVar31 == uVar32 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar29 * 8 ) + 0x10 ) == lVar35 )) {
                  pauVar25 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar23 * 8 );
                  *(undefined4*)( pauVar25[1] + 8 ) = *in_RCX;
                  goto LAB_0010b5a8;
               }
               uVar34 = uVar34 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(uVar23 + 1) * lVar4;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar33;
               lVar29 = SUB168(auVar7 * auVar15, 8);
               uVar32 = *(uint*)( *(long*)( param_2 + 4 ) + lVar29 * 4 );
               uVar23 = SUB164(auVar7 * auVar15, 8);
            } while ( ( uVar32 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar32 * lVar4,auVar16._8_8_ = 0,auVar16._0_8_ = uVar33,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 ) + uVar23 ) - SUB164(auVar8 * auVar16, 8)) * lVar4,auVar17._8_8_ = 0,auVar17._0_8_ = uVar33,uVar34 <= SUB164(auVar9 * auVar17, 8) );
         }
      }
   }
   if ((float)uVar2 * __LC43 < (float)( iVar27 + 1 )) {
      if (param_2[10] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pauVar25 = (undefined1(*) [16])0x0;
         goto LAB_0010b5a8;
      }
      _resize_and_rehash((HashMap<unsigned_long,int,HashMapHasherDefault,HashMapComparatorDefault<unsigned_long>,DefaultTypedAllocator<HashMapElement<unsigned_long,int>>>*)param_2, param_2[10] + 1);
   }
   lVar35 = *plVar28;
   uVar3 = *in_RCX;
   pauVar25 = (undefined1(*) [16])operator_new(0x20, "");
   *(long*)pauVar25[1] = lVar35;
   *(undefined4*)( pauVar25[1] + 8 ) = uVar3;
   *pauVar25 = (undefined1[16])0x0;
   puVar5 = *(undefined8**)( param_2 + 8 );
   if (puVar5 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 6 ) = pauVar25;
      *(undefined1(**) [16])( param_2 + 8 ) = pauVar25;
   } else if (in_R8B == '\0') {
      *puVar5 = pauVar25;
      *(undefined8**)( *pauVar25 + 8 ) = puVar5;
      *(undefined1(**) [16])( param_2 + 8 ) = pauVar25;
   } else {
      lVar35 = *(long*)( param_2 + 6 );
      *(undefined1(**) [16])( lVar35 + 8 ) = pauVar25;
      *(long*)*pauVar25 = lVar35;
      *(undefined1(**) [16])( param_2 + 6 ) = pauVar25;
   }
   lVar35 = *(long*)( param_2 + 4 );
   uVar24 = *plVar28 * 0x3ffff - 1;
   uVar24 = ( uVar24 ^ uVar24 >> 0x1f ) * 0x15;
   uVar24 = ( uVar24 ^ uVar24 >> 0xb ) * 0x41;
   uVar24 = uVar24 >> 0x16 ^ uVar24;
   uVar31 = uVar24 & 0xffffffff;
   if ((int)uVar24 == 0) {
      uVar31 = 1;
   }
   uVar34 = 0;
   lVar4 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[10] * 8 );
   uVar23 = (uint)uVar31;
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[10] * 4 );
   uVar24 = CONCAT44(0, uVar2);
   auVar10._8_8_ = 0;
   auVar10._0_8_ = uVar31 * lVar4;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar24;
   lVar30 = SUB168(auVar10 * auVar18, 8);
   lVar29 = *(long*)( param_2 + 2 );
   puVar1 = (uint*)( lVar35 + lVar30 * 4 );
   iVar27 = SUB164(auVar10 * auVar18, 8);
   uVar32 = *puVar1;
   pauVar22 = pauVar25;
   while (uVar32 != 0) {
      auVar11._8_8_ = 0;
      auVar11._0_8_ = (ulong)uVar32 * lVar4;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar24;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(( uVar2 + iVar27 ) - SUB164(auVar11 * auVar19, 8)) * lVar4;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar24;
      uVar23 = SUB164(auVar12 * auVar20, 8);
      pauVar36 = pauVar22;
      if (uVar23 < uVar34) {
         *puVar1 = (uint)uVar31;
         uVar31 = (ulong)uVar32;
         puVar5 = (undefined8*)( lVar29 + lVar30 * 8 );
         pauVar36 = (undefined1(*) [16])*puVar5;
         *puVar5 = pauVar22;
         uVar34 = uVar23;
      }
      uVar23 = (uint)uVar31;
      uVar34 = uVar34 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(iVar27 + 1) * lVar4;
      auVar21._8_8_ = 0;
      auVar21._0_8_ = uVar24;
      lVar30 = SUB168(auVar13 * auVar21, 8);
      puVar1 = (uint*)( lVar35 + lVar30 * 4 );
      iVar27 = SUB164(auVar13 * auVar21, 8);
      pauVar22 = pauVar36;
      uVar32 = *puVar1;
   };
   *(undefined1(**) [16])( lVar29 + lVar30 * 8 ) = pauVar22;
   *puVar1 = uVar23;
   param_2[0xb] = param_2[0xb] + 1;
   LAB_0010b5a8:*param_1 = (ulong)pauVar25;
   return;
}/* WARNING: Removing unreachable block (ram,0x0010b7f8) *//* String vformat<StringName>(String const&, StringName const) */undefined8 *vformat<StringName>(undefined8 *param_1, bool *param_2, StringName *param_3) {
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
   } else {
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
}/* MethodBindT<long>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindT<long>::validated_call(Object *param_1, Variant **param_2, Variant *param_3) {
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
         goto LAB_0010bc81;
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
      for (int i_1328 = 0; i_1328 < 2; i_1328++) {
         /* WARNING: Could not recover jumptable at 0x0010bb0d. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), *(undefined8*)( *(long*)param_3 + 8 ));
      return;
   }
   LAB_0010bc81:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindT<long>::ptrcall(Object*, void const**, void*) const */void MethodBindT<long>::ptrcall(Object *param_1, void **param_2, void *param_3) {
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
         goto LAB_0010be61;
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
      for (int i_1329 = 0; i_1329 < 2; i_1329++) {
         /* WARNING: Could not recover jumptable at 0x0010bcec. Too many branches */
      }
      ( *UNRECOVERED_JUMPTABLE )((long*)( (long)param_2 + *(long*)( param_1 + 0x60 ) ), **param_3);
      return;
   }
   LAB_0010be61:/* WARNING: Subroutine does not return */__stack_chk_fail();
}/* MethodBindTRC<unsigned int, long>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<unsigned_int,long>::validated_call(MethodBindTRC<unsigned_int,long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         goto LAB_0010bebc;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_0010bebc:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<unsigned int, long>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<unsigned_int,long>::ptrcall(MethodBindTRC<unsigned_int,long> *this, Object *param_1, void **param_2, void *param_3) {
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
         goto LAB_0010c09b;
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
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_0010c09b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<long, Callable const&, int, int, bool, String const&>::validated_call(Object*,
   Variant const**, Variant*) const */void MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::validated_call(MethodBindTR<long,Callable_const&,int,int,bool,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   undefined8 uVar2;
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
         local_40 = 0x35;
         local_50 = 0;
         String::parse_latin1((StrRange*)&local_50);
         vformat<StringName>((StringName*)&local_48, (StrRange*)&local_50, &local_58);
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c29e;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar2 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8, *(undefined4*)( param_2[1] + 8 ), *(undefined4*)( param_2[2] + 8 ), param_2[3][8], param_2[4] + 8);
   *(undefined8*)( param_3 + 8 ) = uVar2;
   LAB_0010c29e:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<long, Callable const&, int, int, bool, String const&>::ptrcall(Object*, void
   const**, void*) const */void MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::ptrcall(MethodBindTR<long,Callable_const&,int,int,bool,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   undefined8 uVar2;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c474;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   for (int i_1330 = 0; i_1330 < 3; i_1330++) {
      /* WARNING: Load size is inaccurate */
   }
   uVar2 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1], *param_2[2], *param_2[3] != '\0', param_2[4]);
   *(undefined8*)param_3 = uVar2;
   LAB_0010c474:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<Error, long>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTR<Error,long>::validated_call(MethodBindTR<Error,long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c64c;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar1 = ( *pcVar2 )(param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ));
   *(ulong*)( param_3 + 8 ) = (ulong)uVar1;
   LAB_0010c64c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<Error, long>::ptrcall(Object*, void const**, void*) const */void MethodBindTR<Error,long>::ptrcall(MethodBindTR<Error,long> *this, Object *param_1, void **param_2, void *param_3) {
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010c82b;
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
   *(ulong*)param_3 = (ulong)uVar1;
   LAB_0010c82b:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<bool, long>::validated_call(Object*, Variant const**, Variant*) const */void MethodBindTRC<bool,long>::validated_call(MethodBindTRC<bool,long> *this, Object *param_1, Variant **param_2, Variant *param_3) {
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
         goto LAB_0010ca09;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar2 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar2 & 1 ) != 0) {
      pcVar2 = *(code**)( pcVar2 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   VVar1 = ( Variant )(*pcVar2)(param_1 + *(long*)( this + 0x60 ), *(undefined8*)( *param_2 + 8 ));
   param_3[8] = VVar1;
   LAB_0010ca09:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<bool, long>::ptrcall(Object*, void const**, void*) const */void MethodBindTRC<bool,long>::ptrcall(MethodBindTRC<bool,long> *this, Object *param_1, void **param_2, void *param_3) {
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
         goto LAB_0010cbe8;
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
   LAB_0010cbe8:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<long, Callable const&, bool, String const&>::validated_call(Object*, Variant
   const**, Variant*) const */void MethodBindTR<long,Callable_const&,bool,String_const&>::validated_call(MethodBindTR<long,Callable_const&,bool,String_const&> *this, Object *param_1, Variant **param_2, Variant *param_3) {
   code *pcVar1;
   undefined8 uVar2;
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
         _err_print_error("validated_call", "./core/object/method_bind.h", 0x213, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010cddd;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pcVar1 = *(code**)( this + 0x58 );
   if (( (ulong)pcVar1 & 1 ) != 0) {
      pcVar1 = *(code**)( pcVar1 + *(long*)( param_1 + *(long*)( this + 0x60 ) ) + -1 );
   }
   uVar2 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2 + 8, param_2[1][8], param_2[2] + 8);
   *(undefined8*)( param_3 + 8 ) = uVar2;
   LAB_0010cddd:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<long, Callable const&, bool, String const&>::ptrcall(Object*, void const**, void*)
   const */void MethodBindTR<long,Callable_const&,bool,String_const&>::ptrcall(MethodBindTR<long,Callable_const&,bool,String_const&> *this, Object *param_1, void **param_2, void *param_3) {
   code *pcVar1;
   undefined8 uVar2;
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
         _err_print_error("ptrcall", "./core/object/method_bind.h", 0x21e, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true.", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010cfc9;
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
   uVar2 = ( *pcVar1 )(param_1 + *(long*)( this + 0x60 ), *param_2, *param_2[1] != '\0', param_2[2]);
   *(undefined8*)param_3 = uVar2;
   LAB_0010cfc9:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<Error, long>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTR<Error,long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   int iVar5;
   undefined4 uVar6;
   long lVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }
      } else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
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
         _err_print_error(&_LC92, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010d320;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010d360;
         LAB_0010d350:pVVar11 = *(Variant**)param_4;
      } else {
         lVar7 = *(long*)( pVVar11 + -8 );
         if ((int)lVar7 < (int)( in_R8D ^ 1 )) {
            LAB_0010d360:uVar6 = 4;
            goto LAB_0010d315;
         }
         if (in_R8D == 1) goto LAB_0010d350;
         lVar9 = (long)( (int)lVar7 + -1 );
         if (lVar7 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         pVVar11 = pVVar11 + lVar9 * 0x18;
      }
      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }
      cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar3 = _LC93;
      if (cVar4 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(pVVar11);
      iVar5 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), lVar7);
      Variant::Variant((Variant*)local_48, iVar5);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   } else {
      uVar6 = 3;
      LAB_0010d315:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_0010d320:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<bool, long>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindTRC<bool,long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   bool bVar5;
   undefined4 uVar6;
   long lVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }
      } else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
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
         _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010d6a0;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010d6e0;
         LAB_0010d6d0:pVVar11 = *(Variant**)param_4;
      } else {
         lVar7 = *(long*)( pVVar11 + -8 );
         if ((int)lVar7 < (int)( in_R8D ^ 1 )) {
            LAB_0010d6e0:uVar6 = 4;
            goto LAB_0010d695;
         }
         if (in_R8D == 1) goto LAB_0010d6d0;
         lVar9 = (long)( (int)lVar7 + -1 );
         if (lVar7 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         pVVar11 = pVVar11 + lVar9 * 0x18;
      }
      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }
      cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar3 = _LC93;
      if (cVar4 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(pVVar11);
      bVar5 = (bool)( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), lVar7);
      Variant::Variant((Variant*)local_48, bVar5);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   } else {
      uVar6 = 3;
      LAB_0010d695:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_0010d6a0:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTRC<unsigned int, long>::call(Object*, Variant const**, int, Callable::CallError&)
   const */Object *MethodBindTRC<unsigned_int,long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   code *pcVar2;
   undefined8 uVar3;
   char cVar4;
   uint uVar5;
   undefined4 uVar6;
   long lVar7;
   long *plVar8;
   long lVar9;
   undefined4 in_register_00000014;
   long *plVar10;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar11;
   Variant *pVVar12;
   long in_FS_OFFSET;
   long local_68;
   undefined8 local_60;
   char *local_58;
   undefined8 local_50;
   undefined4 local_48[2];
   undefined8 local_40;
   undefined8 uStack_38;
   long local_30;
   plVar10 = (long*)CONCAT44(in_register_00000014, param_3);
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar10 != (long*)0x0 ) && ( plVar10[1] != 0 ) ) && ( *(char*)( plVar10[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_58, (StringName*)( param_2 + 3 ));
      if (plVar10[1] == 0) {
         plVar8 = (long*)plVar10[0x23];
         if (plVar8 == (long*)0x0) {
            plVar8 = (long*)( **(code**)( *plVar10 + 0x40 ) )(plVar10);
         }
      } else {
         plVar8 = (long*)( plVar10[1] + 0x20 );
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
         _err_print_error(&_LC92, "./core/object/method_bind.h", 0x267, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_58, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_60);
         if (( StringName::configured != '\0' ) && ( local_68 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010da20;
      }
      if (( StringName::configured != '\0' ) && ( local_58 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar12 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 2) {
      pVVar11 = param_2[5];
      if (pVVar11 == (Variant*)0x0) {
         if (in_R8D != 1) goto LAB_0010da60;
         LAB_0010da50:pVVar11 = *(Variant**)param_4;
      } else {
         lVar7 = *(long*)( pVVar11 + -8 );
         if ((int)lVar7 < (int)( in_R8D ^ 1 )) {
            LAB_0010da60:uVar6 = 4;
            goto LAB_0010da15;
         }
         if (in_R8D == 1) goto LAB_0010da50;
         lVar9 = (long)( (int)lVar7 + -1 );
         if (lVar7 <= lVar9) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar9, lVar7, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar2 = (code*)invalidInstructionException();
            ( *pcVar2 )();
         }
         pVVar11 = pVVar11 + lVar9 * 0x18;
      }
      *in_R9 = 0;
      if (( (ulong)pVVar12 & 1 ) != 0) {
         pVVar12 = *(Variant**)( pVVar12 + *(long*)( (long)plVar10 + (long)pVVar1 ) + -1 );
      }
      cVar4 = Variant::can_convert_strict(*(undefined4*)pVVar11, 2);
      uVar3 = _LC93;
      if (cVar4 == '\0') {
         *in_R9 = 2;
         *(undefined8*)( in_R9 + 1 ) = uVar3;
      }
      lVar7 = Variant::operator_cast_to_long(pVVar11);
      uVar5 = ( *(code*)pVVar12 )((Variant*)( (long)plVar10 + (long)pVVar1 ), lVar7);
      Variant::Variant((Variant*)local_48, uVar5);
      if (Variant::needs_deinit[*(int*)param_1] != '\0') {
         Variant::_clear_internal();
      }
      *(undefined4*)param_1 = local_48[0];
      *(undefined8*)( param_1 + 8 ) = local_40;
      *(undefined8*)( param_1 + 0x10 ) = uStack_38;
   } else {
      uVar6 = 3;
      LAB_0010da15:*in_R9 = uVar6;
      in_R9[2] = 1;
   }
   LAB_0010da20:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<long, Callable const&, bool, String const&>::call(Object*, Variant const**, int,
   Callable::CallError&) const */Object *MethodBindTR<long,Callable_const&,bool,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   undefined4 uVar7;
   long lVar8;
   long lVar9;
   long *plVar10;
   uint uVar11;
   int iVar12;
   undefined4 in_register_00000014;
   long *plVar13;
   Variant *pVVar14;
   uint in_R8D;
   undefined4 *in_R9;
   Variant *pVVar15;
   long in_FS_OFFSET;
   long local_98;
   undefined8 local_90;
   char *local_88;
   undefined8 local_80;
   Variant *local_78[4];
   undefined4 local_58[2];
   undefined8 local_50;
   undefined8 uStack_48;
   long local_40;
   plVar13 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar13 != (long*)0x0 ) && ( plVar13[1] != 0 ) ) && ( *(char*)( plVar13[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_88, (StringName*)( param_2 + 3 ));
      if (plVar13[1] == 0) {
         plVar10 = (long*)plVar13[0x23];
         if (plVar10 == (long*)0x0) {
            plVar10 = (long*)( **(code**)( *plVar13 + 0x40 ) )(plVar13);
         }
      } else {
         plVar10 = (long*)( plVar13[1] + 0x20 );
      }
      if (local_88 == (char*)*plVar10) {
         if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_88 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_90 = 0;
         local_80 = 0x35;
         String::parse_latin1((StrRange*)&local_90);
         vformat<StringName>((StringName*)&local_88, (StrRange*)&local_90, &local_98);
         _err_print_error(&_LC92, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_88, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         if (( StringName::configured != '\0' ) && ( local_98 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010de50;
      }
      if (( StringName::configured != '\0' ) && ( local_88 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   pVVar15 = param_2[0xb];
   pVVar1 = param_2[0xc];
   uVar7 = 3;
   if (in_R8D < 4) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar12 = 0;
         lVar9 = 0;
      } else {
         lVar9 = *(long*)( pVVar2 + -8 );
         iVar12 = (int)lVar9;
      }
      if ((int)( 3 - in_R8D ) <= iVar12) {
         lVar8 = 0;
         do {
            if ((int)lVar8 < (int)in_R8D) {
               pVVar14 = *(Variant**)( param_4 + lVar8 * 8 );
            } else {
               uVar11 = iVar12 + -3 + (int)lVar8;
               if (lVar9 <= (int)uVar11) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar11, lVar9, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }
               pVVar14 = pVVar2 + (ulong)uVar11 * 0x18;
            }
            local_78[lVar8] = pVVar14;
            lVar8 = lVar8 + 1;
         } while ( lVar8 != 3 );
         *in_R9 = 0;
         if (( (ulong)pVVar15 & 1 ) != 0) {
            pVVar15 = *(Variant**)( pVVar15 + *(long*)( (long)plVar13 + (long)pVVar1 ) + -1 );
         }
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[2], 4);
         uVar4 = _LC95;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_90);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[1], 1);
         uVar4 = _LC96;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         bVar6 = Variant::operator_cast_to_bool(local_78[1]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_78[0], 0x19);
         uVar4 = _LC97;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_Callable((Variant*)&local_88);
         lVar9 = ( *(code*)pVVar15 )((Variant*)( (long)plVar13 + (long)pVVar1 ), (Variant*)&local_88, bVar6, (Variant*)&local_90);
         Variant::Variant((Variant*)local_58, lVar9);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_58[0];
         *(undefined8*)( param_1 + 8 ) = local_50;
         *(undefined8*)( param_1 + 0x10 ) = uStack_48;
         Callable::~Callable((Callable*)&local_88);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
         goto LAB_0010de50;
      }
      uVar7 = 4;
   }
   *in_R9 = uVar7;
   in_R9[2] = 3;
   LAB_0010de50:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* MethodBindTR<long, Callable const&, int, int, bool, String const&>::call(Object*, Variant
   const**, int, Callable::CallError&) const */Object *MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
   Variant *pVVar1;
   Variant *pVVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   bool bVar6;
   int iVar7;
   int iVar8;
   undefined4 uVar9;
   long lVar10;
   long lVar11;
   long *plVar12;
   uint uVar13;
   undefined4 in_register_00000014;
   long *plVar14;
   Variant *pVVar15;
   uint in_R8D;
   undefined4 *in_R9;
   long in_FS_OFFSET;
   Variant *local_c0;
   long local_a8;
   undefined8 local_a0;
   char *local_98;
   undefined8 local_90;
   undefined4 local_88[2];
   undefined8 local_80;
   undefined8 uStack_78;
   Variant *local_68[5];
   long local_40;
   plVar14 = (long*)CONCAT44(in_register_00000014, param_3);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   if (( ( plVar14 != (long*)0x0 ) && ( plVar14[1] != 0 ) ) && ( *(char*)( plVar14[1] + 0x2e ) != '\0' )) {
      StringName::StringName((StringName*)&local_98, (StringName*)( param_2 + 3 ));
      if (plVar14[1] == 0) {
         plVar12 = (long*)plVar14[0x23];
         if (plVar12 == (long*)0x0) {
            plVar12 = (long*)( **(code**)( *plVar14 + 0x40 ) )();
         }
      } else {
         plVar12 = (long*)( plVar14[1] + 0x20 );
      }
      if (local_98 == (char*)*plVar12) {
         if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
            StringName::unref();
         }
         MethodBind::get_name();
         local_98 = "Cannot call method bind \'%s\' on placeholder instance.";
         local_a0 = 0;
         local_90 = 0x35;
         String::parse_latin1((StrRange*)&local_a0);
         vformat<StringName>((StringName*)&local_98, (StrRange*)&local_a0, &local_a8);
         _err_print_error(&_LC92, "./core/object/method_bind.h", 0x207, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: ret", (StringName*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
            StringName::unref();
         }
         goto LAB_0010e312;
      }
      if (( StringName::configured != '\0' ) && ( local_98 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   local_c0 = param_2[0xb];
   pVVar1 = param_2[0xc];
   if (in_R8D < 6) {
      pVVar2 = param_2[5];
      if (pVVar2 == (Variant*)0x0) {
         iVar7 = 0;
         lVar11 = 0;
      } else {
         lVar11 = *(long*)( pVVar2 + -8 );
         iVar7 = (int)lVar11;
      }
      if ((int)( 5 - in_R8D ) <= iVar7) {
         lVar10 = 0;
         do {
            if ((int)lVar10 < (int)in_R8D) {
               pVVar15 = *(Variant**)( param_4 + lVar10 * 8 );
            } else {
               uVar13 = iVar7 + -5 + (int)lVar10;
               if (lVar11 <= (int)uVar13) {
                  _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, (long)(int)uVar13, lVar11, "p_index", "size()", "", false, true);
                  _err_flush_stdout();
                  /* WARNING: Does not return */
                  pcVar3 = (code*)invalidInstructionException();
                  ( *pcVar3 )();
               }
               pVVar15 = pVVar2 + (ulong)uVar13 * 0x18;
            }
            local_68[lVar10] = pVVar15;
            lVar10 = lVar10 + 1;
         } while ( lVar10 != 5 );
         *in_R9 = 0;
         if (( (ulong)local_c0 & 1 ) != 0) {
            local_c0 = *(Variant**)( local_c0 + *(long*)( (long)plVar14 + (long)pVVar1 ) + -1 );
         }
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[4], 4);
         uVar4 = _LC98;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_String((Variant*)&local_a0);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[3], 1);
         uVar4 = _LC99;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         bVar6 = Variant::operator_cast_to_bool(local_68[3]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[2], 2);
         uVar4 = _LC100;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         iVar7 = Variant::operator_cast_to_int(local_68[2]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[1], 2);
         uVar4 = _LC101;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         iVar8 = Variant::operator_cast_to_int(local_68[1]);
         cVar5 = Variant::can_convert_strict(*(undefined4*)local_68[0], 0x19);
         uVar4 = _LC97;
         if (cVar5 == '\0') {
            *in_R9 = 2;
            *(undefined8*)( in_R9 + 1 ) = uVar4;
         }
         Variant::operator_cast_to_Callable((Variant*)&local_98);
         lVar11 = ( *(code*)local_c0 )((Variant*)( (long)plVar14 + (long)pVVar1 ), (Variant*)&local_98, iVar8, iVar7, bVar6, (Variant*)&local_a0);
         Variant::Variant((Variant*)local_88, lVar11);
         if (Variant::needs_deinit[*(int*)param_1] != '\0') {
            Variant::_clear_internal();
         }
         *(undefined4*)param_1 = local_88[0];
         *(undefined8*)( param_1 + 8 ) = local_80;
         *(undefined8*)( param_1 + 0x10 ) = uStack_78;
         Callable::~Callable((Callable*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         goto LAB_0010e312;
      }
      uVar9 = 4;
   } else {
      uVar9 = 3;
   }
   *in_R9 = uVar9;
   in_R9[2] = 5;
   LAB_0010e312:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* void call_with_variant_args_dv<__UnexistingClass, long>(__UnexistingClass*, void
   (__UnexistingClass::*)(long), Variant const**, int, Callable::CallError&, Vector<Variant> const&)
    */void call_with_variant_args_dv<__UnexistingClass,long>(__UnexistingClass *param_1, _func_void_long *param_2, Variant **param_3, int param_4, CallError *param_5, Vector *param_6) {
   long lVar1;
   long lVar2;
   code *pcVar3;
   undefined8 uVar4;
   char cVar5;
   undefined4 uVar6;
   undefined4 in_register_0000000c;
   long lVar7;
   uint uVar8;
   Variant *this;
   long in_stack_00000008;
   uVar8 = (uint)param_5;
   if (1 < uVar8) {
      uVar6 = 3;
      goto LAB_0010e61d;
   }
   lVar1 = *(long*)( in_stack_00000008 + 8 );
   if (lVar1 == 0) {
      if (uVar8 != 1) goto LAB_0010e680;
   } else {
      lVar2 = *(long*)( lVar1 + -8 );
      if ((int)lVar2 < (int)( uVar8 ^ 1 )) {
         LAB_0010e680:uVar6 = 4;
         LAB_0010e61d:*(undefined4*)param_6 = uVar6;
         *(undefined4*)( param_6 + 8 ) = 1;
         return;
      }
      if (uVar8 != 1) {
         lVar7 = (long)( (int)lVar2 + -1 );
         if (lVar2 <= lVar7) {
            _err_print_index_error("get", "./core/templates/cowdata.h", 0xdb, lVar7, lVar2, "p_index", "size()", "", false, true);
            _err_flush_stdout();
            /* WARNING: Does not return */
            pcVar3 = (code*)invalidInstructionException();
            ( *pcVar3 )();
         }
         this(Variant * )(lVar1 + lVar7 * 0x18);
         goto LAB_0010e59b;
      }
   }
   this * (Variant**)CONCAT44(in_register_0000000c, param_4);
   LAB_0010e59b:*(undefined4*)param_6 = 0;
   if (( (ulong)param_2 & 1 ) != 0) {
      param_2 = *(_func_void_long**)( param_2 + *(long*)( param_1 + (long)param_3 ) + -1 );
   }
   cVar5 = Variant::can_convert_strict(*(undefined4*)this, 2);
   uVar4 = _LC93;
   if (cVar5 == '\0') {
      *(undefined4*)param_6 = 2;
      *(undefined8*)( param_6 + 4 ) = uVar4;
   }
   Variant::operator_cast_to_long(this);
   for (int i_1331 = 0; i_1331 < 2; i_1331++) {
      /* WARNING: Could not recover jumptable at 0x0010e5f7. Too many branches */
   }
   ( *param_2 )((long)( param_1 + (long)param_3 ));
   return;
}/* MethodBindT<long>::call(Object*, Variant const**, int, Callable::CallError&) const */Object *MethodBindT<long>::call(Object *param_1, Variant **param_2, int param_3, CallError *param_4) {
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
      } else {
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
         _err_print_error(&_LC92, "./core/object/method_bind.h", 0x154, "Condition \"p_object && p_object->is_extension_placeholder() && p_object->get_class_name() == get_instance_class()\" is true. Returning: Variant()", (StringName*)&local_48, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
         if (( StringName::configured != '\0' ) && ( local_58 != 0 )) {
            StringName::unref();
         }
         *(undefined4*)param_1 = 0;
         *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
         goto LAB_0010e776;
      }
      if (( StringName::configured != '\0' ) && ( local_48 != (char*)0x0 )) {
         StringName::unref();
      }
   }
   call_with_variant_args_dv<__UnexistingClass,long>(p_Var2, (_func_void_long*)param_2[0xb], (Variant**)param_2[0xc], (int)param_4, in_R8, in_R9);
   *(undefined4*)param_1 = 0;
   *(undefined1(*) [16])( param_1 + 8 ) = (undefined1[16])0x0;
   LAB_0010e776:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}/* void call_get_argument_type_info_helper<Callable const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<Callable_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_0010e977;
   local_78 = 0;
   local_68 = &_LC16;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 0x19);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ea75:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ea75;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
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
   LAB_0010e977:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* void call_get_argument_type_info_helper<int>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<int>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_0010ebc7;
   local_78 = 0;
   local_68 = &_LC16;
   local_80 = 0;
   auVar1._8_8_ = 0;
   auVar1._0_8_ = local_60._8_8_;
   local_60 = auVar1 << 0x40;
   String::parse_latin1((StrRange*)&local_80);
   local_88 = 0;
   local_68 = (undefined*)CONCAT44(local_68._4_4_, 2);
   local_50 = 0;
   local_48 = 0;
   local_60 = (undefined1[16])0x0;
   if (local_80 == 0) {
      LAB_0010ecc5:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ecc5;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
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
   LAB_0010ebc7:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* void call_get_argument_type_info_helper<String const&>(int, int&, PropertyInfo&) */void call_get_argument_type_info_helper<String_const&>(int param_1, int *param_2, PropertyInfo *param_3) {
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
   if (iVar5 != param_1) goto LAB_0010ee17;
   local_78 = 0;
   local_68 = &_LC16;
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
      LAB_0010ef15:local_40 = 6;
      StringName::operator =((StringName*)( local_60 + 8 ), (StringName*)&local_78);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)&local_48, (CowData*)&local_80);
      local_40 = 6;
      if (local_50 != 0x11) goto LAB_0010ef15;
      StringName::StringName((StringName*)&local_70, (String*)&local_48, false);
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
   LAB_0010ee17:*param_2 = iVar5 + 1;
   if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return;
}/* MethodBindTR<long, Callable const&, bool, String const&>::_gen_argument_type_info(int) const */undefined4 *MethodBindTR<long,Callable_const&,bool,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   uint uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   CowData<char32_t> *local_e8;
   uint local_cc;
   undefined8 local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   undefined4 local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 3) {
      local_a8 = 0;
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      local_80 = 6;
      local_90 = 0;
      local_88 = 0;
      local_cc = 0;
      call_get_argument_type_info_helper<Callable_const&>(in_EDX, (int*)&local_cc, (PropertyInfo*)&local_a8);
      uVar5 = local_cc;
      if (in_EDX == local_cc) {
         local_b8 = 0;
         local_78 = &_LC16;
         local_c0 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_70._8_8_;
         local_70 = auVar3 << 0x40;
         String::parse_latin1((StrRange*)&local_c0);
         local_c8 = 0;
         local_78 = (undefined*)CONCAT44(local_78._4_4_, 1);
         local_60 = 0;
         local_58 = 0;
         local_70 = (undefined1[16])0x0;
         if (local_c0 == 0) {
            LAB_0010f38f:local_50 = 6;
            StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_b8);
         } else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_c0);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_0010f38f;
            StringName::StringName((StringName*)&local_b0, (String*)&local_58, false);
            if (local_70._8_8_ == local_b0) {
               if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                  StringName::unref();
               }
            } else {
               StringName::unref();
               local_70._8_8_ = local_b0;
            }
         }
         local_e8 = (CowData<char32_t>*)&local_58;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
            StringName::unref();
         }
         local_a8 = CONCAT44(local_a8._4_4_, local_78._0_4_);
         if (local_a0._0_8_ != local_70._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
            local_a0._0_8_ = local_70._0_8_;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_70._8_8_;
            local_70 = auVar4 << 0x40;
         }
         if (local_a0._8_8_ != local_70._8_8_) {
            StringName::unref();
            local_a0._8_8_ = local_70._8_8_;
            local_70._8_8_ = 0;
         }
         local_90 = CONCAT44(local_90._4_4_, local_60);
         if (local_88 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            local_88 = local_58;
            local_58 = 0;
         }
         local_80 = local_50;
         CowData<char32_t>::_unref(local_e8);
         if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
      }
      local_cc = uVar5 + 1;
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_cc, (PropertyInfo*)&local_a8);
      uVar7 = local_a0._8_8_;
      uVar6 = local_a0._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_a0._8_8_;
      local_a0 = auVar1 << 0x40;
      *puVar8 = (undefined4)local_a8;
      *(undefined8*)( puVar8 + 2 ) = uVar6;
      *(undefined8*)( puVar8 + 4 ) = uVar7;
      puVar8[6] = (undefined4)local_90;
      *(long*)( puVar8 + 8 ) = local_88;
      puVar8[10] = local_80;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
      goto LAB_0010f122;
   }
   local_a8 = 0;
   local_b0 = 0;
   local_78 = &_LC16;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_70._8_8_;
   local_70 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   *puVar8 = 2;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (local_b0 == 0) {
      puVar8[10] = 6;
      LAB_0010f217:StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_b0);
      puVar8[10] = 6;
      if (puVar8[6] != 0x11) goto LAB_0010f217;
      StringName::StringName((StringName*)&local_78, (String*)( puVar8 + 8 ), false);
      if (*(undefined**)( puVar8 + 4 ) == local_78) {
         if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         *(undefined**)( puVar8 + 4 ) = local_78;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   LAB_0010f122:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar8;
}/* MethodBindTR<long, Callable const&, int, int, bool, String const&>::_gen_argument_type_info(int)
   const */undefined4 *MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::_gen_argument_type_info(int param_1) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   uint uVar5;
   undefined8 uVar6;
   undefined8 uVar7;
   uint in_EDX;
   undefined4 in_register_0000003c;
   undefined4 *puVar8;
   long in_FS_OFFSET;
   CowData<char32_t> *local_e8;
   uint local_cc;
   undefined8 local_c8;
   long local_c0;
   long local_b8;
   long local_b0;
   long local_a8;
   undefined1 local_a0[16];
   undefined8 local_90;
   long local_88;
   undefined4 local_80;
   undefined *local_78;
   undefined1 local_70[16];
   int local_60;
   long local_58;
   undefined4 local_50;
   long local_40;
   puVar8 = (undefined4*)CONCAT44(in_register_0000003c, param_1);
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (in_EDX < 5) {
      local_a0._0_8_ = 0;
      local_a0._8_8_ = 0;
      local_a8 = 0;
      local_90 = 0;
      local_88 = 0;
      local_80 = 6;
      local_cc = 0;
      call_get_argument_type_info_helper<Callable_const&>(in_EDX, (int*)&local_cc, (PropertyInfo*)&local_a8);
      for (int i_1332 = 0; i_1332 < 2; i_1332++) {
         call_get_argument_type_info_helper<int>(in_EDX, (int*)&local_cc, (PropertyInfo*)&local_a8);
      }
      uVar5 = local_cc;
      if (in_EDX == local_cc) {
         local_b8 = 0;
         local_78 = &_LC16;
         local_c0 = 0;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = local_70._8_8_;
         local_70 = auVar3 << 0x40;
         String::parse_latin1((StrRange*)&local_c0);
         local_c8 = 0;
         local_78 = (undefined*)CONCAT44(local_78._4_4_, 1);
         local_60 = 0;
         local_58 = 0;
         local_70 = (undefined1[16])0x0;
         if (local_c0 == 0) {
            LAB_0010f84f:local_50 = 6;
            StringName::operator =((StringName*)( local_70 + 8 ), (StringName*)&local_b8);
         } else {
            CowData<char32_t>::_ref((CowData<char32_t>*)&local_58, (CowData*)&local_c0);
            local_50 = 6;
            if (local_60 != 0x11) goto LAB_0010f84f;
            StringName::StringName((StringName*)&local_b0, (String*)&local_58, false);
            if (local_70._8_8_ == local_b0) {
               if (( StringName::configured != '\0' ) && ( local_b0 != 0 )) {
                  StringName::unref();
               }
            } else {
               StringName::unref();
               local_70._8_8_ = local_b0;
            }
         }
         local_e8 = (CowData<char32_t>*)&local_58;
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         if (( StringName::configured != '\0' ) && ( local_b8 != 0 )) {
            StringName::unref();
         }
         local_a8 = CONCAT44(local_a8._4_4_, local_78._0_4_);
         if (local_a0._0_8_ != local_70._0_8_) {
            CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
            local_a0._0_8_ = local_70._0_8_;
            auVar4._8_8_ = 0;
            auVar4._0_8_ = local_70._8_8_;
            local_70 = auVar4 << 0x40;
         }
         if (local_a0._8_8_ != local_70._8_8_) {
            StringName::unref();
            local_a0._8_8_ = local_70._8_8_;
            local_70._8_8_ = 0;
         }
         local_90 = CONCAT44(local_90._4_4_, local_60);
         if (local_88 != local_58) {
            CowData<char32_t>::_unref((CowData<char32_t>*)&local_88);
            local_88 = local_58;
            local_58 = 0;
         }
         local_80 = local_50;
         CowData<char32_t>::_unref(local_e8);
         if (( StringName::configured != '\0' ) && ( local_70._8_8_ != 0 )) {
            StringName::unref();
         }
         CowData<char32_t>::_unref((CowData<char32_t>*)local_70);
      }
      local_cc = uVar5 + 1;
      call_get_argument_type_info_helper<String_const&>(in_EDX, (int*)&local_cc, (PropertyInfo*)&local_a8);
      uVar7 = local_a0._8_8_;
      uVar6 = local_a0._0_8_;
      auVar1._8_8_ = 0;
      auVar1._0_8_ = local_a0._8_8_;
      local_a0 = auVar1 << 0x40;
      *puVar8 = (undefined4)local_a8;
      *(undefined8*)( puVar8 + 2 ) = uVar6;
      *(undefined8*)( puVar8 + 4 ) = uVar7;
      puVar8[6] = (undefined4)local_90;
      *(long*)( puVar8 + 8 ) = local_88;
      puVar8[10] = local_80;
      CowData<char32_t>::_unref((CowData<char32_t>*)local_a0);
      goto LAB_0010f5dc;
   }
   local_a8 = 0;
   local_b0 = 0;
   local_78 = &_LC16;
   auVar2._8_8_ = 0;
   auVar2._0_8_ = local_70._8_8_;
   local_70 = auVar2 << 0x40;
   String::parse_latin1((StrRange*)&local_b0);
   local_b8 = 0;
   *puVar8 = 2;
   puVar8[6] = 0;
   *(undefined8*)( puVar8 + 8 ) = 0;
   *(undefined1(*) [16])( puVar8 + 2 ) = (undefined1[16])0x0;
   if (local_b0 == 0) {
      puVar8[10] = 6;
      LAB_0010f6d7:StringName::operator =((StringName*)( puVar8 + 4 ), (StringName*)&local_a8);
   } else {
      CowData<char32_t>::_ref((CowData<char32_t>*)( puVar8 + 8 ), (CowData*)&local_b0);
      puVar8[10] = 6;
      if (puVar8[6] != 0x11) goto LAB_0010f6d7;
      StringName::StringName((StringName*)&local_78, (String*)( puVar8 + 8 ), false);
      if (*(undefined**)( puVar8 + 4 ) == local_78) {
         if (( StringName::configured != '\0' ) && ( local_78 != (undefined*)0x0 )) {
            StringName::unref();
         }
      } else {
         StringName::unref();
         *(undefined**)( puVar8 + 4 ) = local_78;
      }
   }
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b8);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   if (( StringName::configured != '\0' ) && ( local_a8 != 0 )) {
      StringName::unref();
   }
   LAB_0010f5dc:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }
   return puVar8;
}/* WorkerThreadPool::ThreadData::YIELDING */void WorkerThreadPool::ThreadData::_GLOBAL__sub_I_YIELDING(void) {
   named_pools._40_8_ = 2;
   named_pools._8_16_ = (undefined1[16])0x0;
   named_pools._24_16_ = (undefined1[16])0x0;
   __cxa_atexit(HashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault < StringName>, DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>> > ::~HashMap, named_pools, &__dso_handle);
   return;
}/* WARNING: Control flow encountered bad instruction data *//* WorkerThreadPool::BaseTemplateUserdata::~BaseTemplateUserdata() */void WorkerThreadPool::BaseTemplateUserdata::~BaseTemplateUserdata(BaseTemplateUserdata *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* HashMap<StringName, WorkerThreadPool*, HashMapHasherDefault,
   HashMapComparatorDefault<StringName>, DefaultTypedAllocator<HashMapElement<StringName,
   WorkerThreadPool*> > >::~HashMap() */void HashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>>>::~HashMap(HashMap<StringName,WorkerThreadPool*,HashMapHasherDefault,HashMapComparatorDefault<StringName>,DefaultTypedAllocator<HashMapElement<StringName,WorkerThreadPool*>>> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* MethodBindT<long>::~MethodBindT() */void MethodBindT<long>::~MethodBindT(MethodBindT<long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<unsigned int, long>::~MethodBindTRC() */void MethodBindTRC<unsigned_int,long>::~MethodBindTRC(MethodBindTRC<unsigned_int,long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* MethodBindTRC<bool, long>::~MethodBindTRC() */void MethodBindTRC<bool,long>::~MethodBindTRC(MethodBindTRC<bool,long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<long, Callable const&, int, int, bool, String const&>::~MethodBindTR() */void MethodBindTR<long,Callable_const&,int,int,bool,String_const&>::~MethodBindTR(MethodBindTR<long,Callable_const&,int,int,bool,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<Error, long>::~MethodBindTR() */void MethodBindTR<Error,long>::~MethodBindTR(MethodBindTR<Error,long> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}/* WARNING: Control flow encountered bad instruction data *//* MethodBindTR<long, Callable const&, bool, String const&>::~MethodBindTR() */void MethodBindTR<long,Callable_const&,bool,String_const&>::~MethodBindTR(MethodBindTR<long,Callable_const&,bool,String_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

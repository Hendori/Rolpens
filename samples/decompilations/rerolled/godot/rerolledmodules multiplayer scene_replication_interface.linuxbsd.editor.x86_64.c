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
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>
   >::_lookup_pos(ObjectID const&, unsigned int&) const [clone .isra.0] */undefined8 HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_lookup_pos(HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *this, ObjectID *param_1, uint *param_2) {
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
   uint uVar13;
   ulong uVar14;
   uint uVar15;
   ulong uVar16;
   if (*(long*)this == 0) {
      return 0;
   }

   if (*(int*)( this + 0x24 ) != 0) {
      uVar14 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ));
      lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x20 ) * 8 );
      uVar10 = (long)param_1 * 0x3ffff - 1;
      uVar10 = ( uVar10 ^ uVar10 >> 0x1f ) * 0x15;
      uVar10 = ( uVar10 ^ uVar10 >> 0xb ) * 0x41;
      uVar10 = uVar10 >> 0x16 ^ uVar10;
      uVar16 = uVar10 & 0xffffffff;
      if ((int)uVar10 == 0) {
         uVar16 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar16 * lVar1;
      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar14;
      lVar12 = SUB168(auVar2 * auVar6, 8);
      uVar13 = *(uint*)( *(long*)( this + 0x18 ) + lVar12 * 4 );
      iVar11 = SUB164(auVar2 * auVar6, 8);
      if (uVar13 != 0) {
         uVar15 = 0;
         do {
            if (( (uint)uVar16 == uVar13 ) && ( uVar13 = *(uint*)( *(long*)( this + 8 ) + lVar12 * 4 ) * (ObjectID**)( *(long*)this + (ulong)uVar13 * 8 ) == param_1 )) {
               *param_2 = uVar13;
               return 1;
            }

            uVar15 = uVar15 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar11 + 1) * lVar1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar14;
            lVar12 = SUB168(auVar3 * auVar7, 8);
            uVar13 = *(uint*)( *(long*)( this + 0x18 ) + lVar12 * 4 );
            iVar11 = SUB164(auVar3 * auVar7, 8);
            if (uVar13 == 0) {
               return 0;
            }

            auVar4._8_8_ = 0;
            auVar4._0_8_ = (ulong)uVar13 * lVar1;
            auVar8._8_8_ = 0;
            auVar8._0_8_ = uVar14;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) + iVar11 ) - SUB164(auVar4 * auVar8, 8)) * lVar1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar14;
         }
 while ( uVar15 <= SUB164(auVar5 * auVar9, 8) );
         return 0;
      }

   }

   return 0;
}
/* HashMap<int, SceneReplicationInterface::PeerInfo, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   SceneReplicationInterface::PeerInfo> > >::_lookup_pos(int const&, unsigned int&) const [clone
   .isra.0] */undefined8 HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::_lookup_pos(HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>> *this, int *param_1, uint *param_2) {
   ulong uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   uint uVar10;
   uint uVar11;
   ulong uVar12;
   long lVar13;
   uint uVar14;
   ulong uVar15;
   uint uVar16;
   if (( *(long*)( this + 8 ) == 0 ) || ( *(int*)( this + 0x2c ) == 0 )) {
      return 0;
   }

   uVar1 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar10 = ( ( uint )((ulong)param_1 >> 0x10) & 0xffff ^ (uint)param_1 ) * -0x7a143595;
   uVar10 = ( uVar10 ^ uVar10 >> 0xd ) * -0x3d4d51cb;
   uVar14 = uVar10 ^ uVar10 >> 0x10;
   if (uVar10 == uVar10 >> 0x10) {
      uVar14 = 1;
      uVar12 = uVar1;
   }
 else {
      uVar12 = uVar14 * uVar1;
   }

   uVar15 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ));
   auVar2._8_8_ = 0;
   auVar2._0_8_ = uVar15;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = uVar12;
   lVar13 = SUB168(auVar2 * auVar6, 8);
   uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
   uVar11 = SUB164(auVar2 * auVar6, 8);
   if (uVar10 != 0) {
      uVar16 = 0;
      do {
         if (( uVar14 == uVar10 ) && ( *(uint*)( *(long*)( *(long*)( this + 8 ) + lVar13 * 8 ) + 0x10 ) == (uint)param_1 )) {
            *param_2 = uVar11;
            return 1;
         }

         uVar16 = uVar16 + 1;
         auVar3._8_8_ = 0;
         auVar3._0_8_ = ( uVar11 + 1 ) * uVar1;
         auVar7._8_8_ = 0;
         auVar7._0_8_ = uVar15;
         lVar13 = SUB168(auVar3 * auVar7, 8);
         uVar10 = *(uint*)( *(long*)( this + 0x10 ) + lVar13 * 4 );
         uVar11 = SUB164(auVar3 * auVar7, 8);
      }
 while ( ( uVar10 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar10 * uVar1,auVar8._8_8_ = 0,auVar8._0_8_ = uVar15,auVar5._8_8_ = 0,auVar5._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 ) + uVar11 ) - SUB164(auVar4 * auVar8, 8) ) * uVar1,auVar9._8_8_ = 0,auVar9._0_8_ = uVar15,uVar16 <= SUB164(auVar5 * auVar9, 8) );
   }

   return 0;
}
/* HashMap<ObjectID, SceneReplicationInterface::TrackedNode, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   SceneReplicationInterface::TrackedNode> > >::_lookup_pos(ObjectID const&, unsigned int&) const
   [clone .isra.0] */undefined8 HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::_lookup_pos(HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>> *this, ObjectID *param_1, uint *param_2) {
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
/* HashMap<ObjectID, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, unsigned long> > >::erase(ObjectID const&) [clone
   .isra.0] */void HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::erase(HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>> *this, ObjectID *param_1) {
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
      uVar29 = *(long*)param_1 * 0x3ffff - 1;
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
            if (( (uint)uVar32 == uVar37 ) && ( *(long*)param_1 == *(long*)( *(long*)( lVar6 + uVar29 * 8 ) + 0x10 ) )) {
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
                  if (*(long**)( this + 0x20 ) != plVar34) goto LAB_00100689;
               }
 else if (*(long**)( this + 0x20 ) != plVar34) {
                  LAB_00100689:plVar10 = (long*)plVar34[1];
                  goto joined_r0x00100690;
               }

               *(long*)( this + 0x20 ) = plVar34[1];
               plVar34 = (long*)*plVar4;
               plVar10 = (long*)plVar34[1];
               joined_r0x00100690:if (plVar10 != (long*)0x0) {
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
/* HashMap<unsigned int, ObjectID, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, ObjectID> > >::erase(unsigned int const&)
   [clone .isra.0] */void HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::erase(HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>> *this, uint *param_1) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   uint uVar5;
   long lVar6;
   ulong uVar7;
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
   uint uVar28;
   uint uVar29;
   ulong uVar30;
   ulong uVar31;
   uint uVar32;
   uint uVar33;
   ulong uVar34;
   ulong uVar35;
   long *plVar36;
   uint uVar37;
   uint *puVar38;
   ulong uVar39;
   lVar6 = *(long*)( this + 8 );
   if (( lVar6 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
      uVar33 = *param_1;
      uVar5 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
      uVar39 = CONCAT44(0, uVar5);
      uVar7 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar28 = ( uVar33 >> 0x10 ^ uVar33 ) * -0x7a143595;
      uVar28 = ( uVar28 ^ uVar28 >> 0xd ) * -0x3d4d51cb;
      uVar32 = uVar28 ^ uVar28 >> 0x10;
      if (uVar28 == uVar28 >> 0x10) {
         uVar32 = 1;
         uVar30 = uVar7;
      }
 else {
         uVar30 = uVar32 * uVar7;
      }

      lVar8 = *(long*)( this + 0x10 );
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar39;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar30;
      uVar30 = SUB168(auVar10 * auVar19, 8);
      uVar28 = *(uint*)( lVar8 + uVar30 * 4 );
      uVar34 = (ulong)SUB164(auVar10 * auVar19, 8);
      if (uVar28 != 0) {
         uVar37 = 0;
         do {
            auVar13._8_8_ = 0;
            auVar13._0_8_ = ( (int)uVar34 + 1 ) * uVar7;
            auVar22._8_8_ = 0;
            auVar22._0_8_ = uVar39;
            uVar31 = SUB168(auVar13 * auVar22, 8);
            uVar29 = SUB164(auVar13 * auVar22, 8);
            if (( uVar32 == uVar28 ) && ( uVar33 == *(uint*)( *(long*)( lVar6 + uVar30 * 8 ) + 0x10 ) )) {
               puVar38 = (uint*)( lVar8 + uVar31 * 4 );
               uVar33 = *puVar38;
               if (( uVar33 != 0 ) && ( auVar14._8_8_ = 0 ),auVar14._0_8_ = uVar33 * uVar7,auVar23._8_8_ = 0,auVar23._0_8_ = uVar39,auVar15._8_8_ = 0,auVar15._0_8_ = ( ( uVar29 + uVar5 ) - SUB164(auVar14 * auVar23, 8) ) * uVar7,auVar24._8_8_ = 0,auVar24._0_8_ = uVar39,uVar30 = (ulong)uVar29,uVar35 = uVar34,SUB164(auVar15 * auVar24, 8) != 0) {
                  while (true) {
                     uVar34 = uVar30;
                     puVar1 = (uint*)( lVar8 + uVar35 * 4 );
                     *puVar38 = *puVar1;
                     puVar2 = (undefined8*)( lVar6 + uVar31 * 8 );
                     *puVar1 = uVar33;
                     puVar3 = (undefined8*)( lVar6 + uVar35 * 8 );
                     uVar9 = *puVar2;
                     *puVar2 = *puVar3;
                     *puVar3 = uVar9;
                     auVar18._8_8_ = 0;
                     auVar18._0_8_ = ( (int)uVar34 + 1 ) * uVar7;
                     auVar27._8_8_ = 0;
                     auVar27._0_8_ = uVar39;
                     uVar31 = SUB168(auVar18 * auVar27, 8);
                     puVar38 = (uint*)( lVar8 + uVar31 * 4 );
                     uVar33 = *puVar38;
                     if (( uVar33 == 0 ) || ( auVar16._8_8_ = 0 ),auVar16._0_8_ = uVar33 * uVar7,auVar25._8_8_ = 0,auVar25._0_8_ = uVar39,auVar17._8_8_ = 0,auVar17._0_8_ = ( ( SUB164(auVar18 * auVar27, 8) + uVar5 ) - SUB164(auVar16 * auVar25, 8) ) * uVar7,auVar26._8_8_ = 0,auVar26._0_8_ = uVar39,SUB164(auVar17 * auVar26, 8) == 0) break;
                     uVar30 = uVar31 & 0xffffffff;
                     uVar35 = uVar34;
                  }
;
               }

               plVar4 = (long*)( lVar6 + uVar34 * 8 );
               *(undefined4*)( lVar8 + uVar34 * 4 ) = 0;
               plVar36 = (long*)*plVar4;
               if (*(long**)( this + 0x18 ) == plVar36) {
                  *(long*)( this + 0x18 ) = *plVar36;
                  plVar36 = (long*)*plVar4;
               }

               if (*(long**)( this + 0x20 ) == plVar36) {
                  *(long*)( this + 0x20 ) = plVar36[1];
                  plVar36 = (long*)*plVar4;
               }

               if ((long*)plVar36[1] != (long*)0x0) {
                  *(long*)plVar36[1] = *plVar36;
                  plVar36 = (long*)*plVar4;
               }

               if (*plVar36 != 0) {
                  *(long*)( *plVar36 + 8 ) = plVar36[1];
                  plVar36 = (long*)*plVar4;
               }

               Memory::free_static(plVar36, false);
               *(undefined8*)( *(long*)( this + 8 ) + uVar34 * 8 ) = 0;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + -1;
               return;
            }

            uVar28 = *(uint*)( lVar8 + uVar31 * 4 );
            uVar34 = uVar31 & 0xffffffff;
            uVar37 = uVar37 + 1;
         }
 while ( ( uVar28 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = uVar28 * uVar7,auVar20._8_8_ = 0,auVar20._0_8_ = uVar39,auVar12._8_8_ = 0,auVar12._0_8_ = ( ( uVar5 + uVar29 ) - SUB164(auVar11 * auVar20, 8) ) * uVar7,auVar21._8_8_ = 0,auVar21._0_8_ = uVar39,uVar30 = uVar31,uVar37 <= SUB164(auVar12 * auVar21, 8) );
      }

   }

   return;
}
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::erase(ObjectID
   const&) [clone .isra.0] */void HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase(HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *this, ObjectID *param_1) {
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
      uVar32 = *(long*)param_1 * 0x3ffff - 1;
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
               if (*(long*)param_1 == *(long*)( lVar6 + uVar32 * 8 )) {
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
/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] */void CowData<Variant_const*>::_copy_on_write(CowData<Variant_const*> *this) {
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
/* SceneReplicationInterface::_free_remotes(SceneReplicationInterface::PeerInfo const&) */void SceneReplicationInterface::_free_remotes(SceneReplicationInterface *this, PeerInfo *param_1) {
   undefined8 *puVar1;
   long lVar2;
   ulong uVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   ulong uVar12;
   long lVar13;
   uint uVar14;
   ulong *puVar15;
   int iVar16;
   long lVar17;
   ulong uVar18;
   ulong uVar19;
   uint uVar20;
   long in_FS_OFFSET;
   bool bVar21;
   puVar1 = *(undefined8**)( param_1 + 200 );
   lVar2 = *(long*)( in_FS_OFFSET + 0x28 );
   joined_r0x00100d61:if (puVar1 == (undefined8*)0x0) {
      if (lVar2 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   uVar3 = puVar1[3];
   if (( *(long*)( this + 0x1c0 ) != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
      uVar19 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
      lVar13 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
      uVar12 = uVar3 * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar18 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
         uVar18 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar18 * lVar13;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar19;
      lVar17 = SUB168(auVar4 * auVar8, 8);
      uVar14 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar17 * 4 );
      iVar16 = SUB164(auVar4 * auVar8, 8);
      if (uVar14 != 0) {
         uVar20 = 0;
         while (( (uint)uVar18 != uVar14 || ( uVar3 != *(ulong*)( *(long*)( *(long*)( this + 0x1c0 ) + lVar17 * 8 ) + 0x10 ) ) )) {
            uVar20 = uVar20 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(iVar16 + 1) * lVar13;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar19;
            lVar17 = SUB168(auVar5 * auVar9, 8);
            uVar14 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar17 * 4 );
            iVar16 = SUB164(auVar5 * auVar9, 8);
            if (( uVar14 == 0 ) || ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar14 * lVar13,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + iVar16 ) - SUB164(auVar6 * auVar10, 8)) * lVar13,auVar11._8_8_ = 0,auVar11._0_8_ = uVar19,SUB164(auVar7 * auVar11, 8) < uVar20) goto LAB_00100fa0;
         }
;
         if (uVar3 != 0) {
            uVar14 = (uint)uVar3 & 0xffffff;
            if (uVar14 < (uint)ObjectDB::slot_max) goto LAB_00100eb0;
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         }

      }

   }

   goto LAB_00100fa0;
   LAB_00100eb0:while (true) {
      LOCK();
      bVar21 = (char)ObjectDB::spin_lock == '\0';
      if (bVar21) {
         ObjectDB::spin_lock._0_1_ = '\x01';
      }

      UNLOCK();
      if (bVar21) break;
      do {} while ( (char)ObjectDB::spin_lock != '\0' );
   }
;
   puVar15 = (ulong*)( (ulong)uVar14 * 0x10 + ObjectDB::object_slots );
   if (( uVar3 >> 0x18 & 0x7fffffffff ) == ( *puVar15 & 0x7fffffffff )) {
      uVar3 = puVar15[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (( uVar3 != 0 ) && ( lVar13 = __dynamic_cast(uVar3, &Object::typeinfo, &Node::typeinfo, 0) ),lVar13 != 0) {
         Node::queue_free();
         goto LAB_00100f27;
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
   }

   LAB_00100fa0:_err_print_error("_free_remotes", "modules/multiplayer/scene_replication_interface.cpp", 0x56, "Condition \"!node\" is true. Continuing.", 0, 0);
   LAB_00100f27:puVar1 = (undefined8*)*puVar1;
   goto joined_r0x00100d61;
}
/* SceneReplicationInterface::_has_authority(Node const*) */bool SceneReplicationInterface::_has_authority(Node *param_1) {
   char cVar1;
   int iVar2;
   int iVar3;
   long in_FS_OFFSET;
   bool bVar4;
   Object *local_28;
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   ( **(code**)( **(long**)( param_1 + 0x288 ) + 0x160 ) )(&local_28);
   bVar4 = false;
   if (local_28 != (Object*)0x0) {
      cVar1 = RefCounted::unreference();
      if (cVar1 != '\0') {
         cVar1 = predelete_handler(local_28);
         if (cVar1 != '\0') {
            ( **(code**)( *(long*)local_28 + 0x140 ) )(local_28);
            Memory::free_static(local_28, false);
         }

      }

      iVar2 = Node::get_multiplayer_authority();
      iVar3 = ( **(code**)( **(long**)( param_1 + 0x288 ) + 0x168 ) )();
      bVar4 = iVar2 == iVar3;
   }

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return bVar4;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneReplicationInterface::on_reset() */void SceneReplicationInterface::on_reset(SceneReplicationInterface *this) {
   int iVar1;
   undefined8 *puVar2;
   long lVar3;
   void *pvVar4;
   ulong *puVar5;
   int iVar6;
   long lVar7;
   uint uVar8;
   ulong *puVar9;
   long lVar10;
   ulong uVar11;
   long in_FS_OFFSET;
   bool bVar12;
   lVar3 = *(long*)( in_FS_OFFSET + 0x28 );
   for (puVar2 = *(undefined8**)( this + 0x198 ); puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
      _free_remotes(this, (PeerInfo*)( puVar2 + 3 ));
   }

   if (( *(long*)( this + 0x188 ) != 0 ) && ( *(int*)( this + 0x1ac ) != 0 )) {
      lVar10 = 0;
      uVar8 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
      if (uVar8 != 0) {
         do {
            if (*(int*)( *(long*)( this + 400 ) + lVar10 ) != 0) {
               *(int*)( *(long*)( this + 400 ) + lVar10 ) = 0;
               pvVar4 = *(void**)( *(long*)( this + 0x188 ) + lVar10 * 2 );
               PeerInfo::~PeerInfo((PeerInfo*)( (long)pvVar4 + 0x18 ));
               Memory::free_static(pvVar4, false);
               *(undefined8*)( *(long*)( this + 0x188 ) + lVar10 * 2 ) = 0;
            }

            lVar10 = lVar10 + 4;
         }
 while ( (ulong)uVar8 << 2 != lVar10 );
      }

      *(undefined4*)( this + 0x1ac ) = 0;
      *(undefined1(*) [16])( this + 0x198 ) = (undefined1[16])0x0;
   }

   for (puVar2 = *(undefined8**)( this + 0x1d0 ); puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
      puVar2[4] = 0;
   }

   iVar1 = *(int*)( this + 0x234 );
   if (iVar1 == 0) {
      LAB_001012b8:*(undefined4*)( this + 0x1b0 ) = 0;
      if (lVar3 != *(long*)( in_FS_OFFSET + 0x28 )) {
         /* WARNING: Subroutine does not return */
         __stack_chk_fail();
      }

      return;
   }

   puVar5 = *(ulong**)( this + 0x210 );
   lVar10 = 0;
   uVar11 = *puVar5;
   if (uVar11 == 0) goto LAB_00101285;
   do {
      uVar8 = (uint)uVar11 & 0xffffff;
      if ((uint)ObjectDB::slot_max <= uVar8) {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         goto LAB_00101285;
      }

      while (true) {
         LOCK();
         bVar12 = (char)ObjectDB::spin_lock == '\0';
         if (bVar12) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar12) break;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( uVar11 >> 0x18 & 0x7fffffffff ) != ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00101285;
      }

      uVar11 = puVar9[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (uVar11 == 0) goto LAB_00101285;
      lVar7 = __dynamic_cast(uVar11, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
      if (lVar7 == 0) goto LAB_00101285;
      MultiplayerSynchronizer::reset();
      iVar6 = (int)lVar10;
      while (true) {
         if (iVar1 <= iVar6 + 1) goto LAB_001012b8;
         lVar10 = lVar10 + 1;
         uVar11 = puVar5[lVar10];
         if (uVar11 != 0) break;
         LAB_00101285:_err_print_error("on_reset", "modules/multiplayer/scene_replication_interface.cpp", 0x7c, "Condition \"!sync\" is true. Continuing.", 0, 0);
         iVar6 = (int)lVar10;
      }
;
   }
 while ( true );
}
/* SceneReplicationInterface::is_rpc_visible(ObjectID const&, int) const */undefined8 SceneReplicationInterface::is_rpc_visible(SceneReplicationInterface *this, ObjectID *param_1, int param_2) {
   ObjectID *pOVar1;
   long lVar2;
   ulong *puVar3;
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
   code *pcVar26;
   char cVar27;
   ulong uVar28;
   undefined8 uVar29;
   uint uVar30;
   uint uVar31;
   int iVar32;
   uint uVar33;
   long lVar34;
   long lVar35;
   long lVar36;
   ulong *puVar37;
   uint uVar38;
   ulong uVar39;
   long lVar40;
   long *plVar41;
   uint uVar42;
   ulong uVar43;
   uint uVar44;
   uint uVar45;
   long in_FS_OFFSET;
   bool bVar46;
   uint local_44;
   long local_40;
   pOVar1 = *(ObjectID**)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar40 = *(long*)( this + 0x1c0 );
   if (( lVar40 != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
      lVar36 = *(long*)( this + 0x1c8 );
      uVar33 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 );
      uVar43 = CONCAT44(0, uVar33);
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
      uVar28 = (long)pOVar1 * 0x3ffff - 1;
      uVar28 = ( uVar28 ^ uVar28 >> 0x1f ) * 0x15;
      uVar28 = ( uVar28 ^ uVar28 >> 0xb ) * 0x41;
      uVar28 = uVar28 >> 0x16 ^ uVar28;
      uVar39 = uVar28 & 0xffffffff;
      if ((int)uVar28 == 0) {
         uVar39 = 1;
      }

      uVar38 = (uint)uVar39;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar39 * lVar2;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = uVar43;
      lVar34 = SUB168(auVar4 * auVar15, 8);
      uVar44 = *(uint*)( lVar36 + lVar34 * 4 );
      uVar30 = SUB164(auVar4 * auVar15, 8);
      if (uVar44 != 0) {
         uVar45 = 0;
         lVar35 = lVar34;
         uVar42 = uVar44;
         uVar31 = uVar30;
         do {
            if (( uVar38 == uVar42 ) && ( pOVar1 == *(ObjectID**)( *(long*)( lVar40 + lVar35 * 8 ) + 0x10 ) )) {
               if (param_2 < 0) {
                  _err_print_error("is_rpc_visible", "modules/multiplayer/scene_replication_interface.cpp", 0x135, "Condition \"p_peer < 0\" is true. Returning: false", 0, 0);
                  uVar29 = 0;
                  goto LAB_00101685;
               }

               uVar42 = 0;
               goto LAB_00101519;
            }

            uVar45 = uVar45 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar31 + 1) * lVar2;
            auVar16._8_8_ = 0;
            auVar16._0_8_ = uVar43;
            lVar35 = SUB168(auVar5 * auVar16, 8);
            uVar42 = *(uint*)( lVar36 + lVar35 * 4 );
            uVar31 = SUB164(auVar5 * auVar16, 8);
         }
 while ( ( uVar42 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar42 * lVar2,auVar17._8_8_ = 0,auVar17._0_8_ = uVar43,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar33 + uVar31 ) - SUB164(auVar6 * auVar17, 8)) * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar43,uVar45 <= SUB164(auVar7 * auVar18, 8) );
      }

   }

   goto LAB_00101680;
   LAB_00101519:if (( uVar38 != uVar44 ) || ( pOVar1 != *(ObjectID**)( *(long*)( lVar40 + lVar34 * 8 ) + 0x10 ) )) goto LAB_001014d0;
   lVar40 = *(long*)( lVar40 + (ulong)uVar30 * 8 );
   iVar32 = *(int*)( lVar40 + 0x54 );
   if (( iVar32 == 0 ) || ( ( *(int*)( lVar40 + 0x24 ) != 0 && ( *(int*)( lVar40 + 0x24 ) == param_2 ) ) )) goto LAB_00101680;
   cVar27 = HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_lookup_pos((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( this + 0x1e8 ), pOVar1, &local_44);
   if (cVar27 == '\0') {
      puVar3 = *(ulong**)( lVar40 + 0x30 );
      lVar40 = 0;
      uVar28 = *puVar3;
      if (uVar28 == 0) goto LAB_00101782;
      while (true) {
         uVar33 = (uint)uVar28 & 0xffffff;
         if ((uint)ObjectDB::slot_max <= uVar33) {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            goto LAB_00101782;
         }

         while (true) {
            uVar44 = local_44 >> 8;
            local_44 = uVar44 << 8;
            LOCK();
            bVar46 = (char)ObjectDB::spin_lock == '\0';
            if (bVar46) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar46) break;
            local_44 = uVar44 << 8;
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar37 = (ulong*)( (ulong)uVar33 * 0x10 + ObjectDB::object_slots );
         if (( uVar28 >> 0x18 & 0x7fffffffff ) != ( *puVar37 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            goto LAB_00101782;
         }

         uVar28 = puVar37[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (uVar28 == 0) goto LAB_00101782;
         lVar36 = __dynamic_cast(uVar28, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
         if (lVar36 == 0) goto LAB_00101782;
         cVar27 = MultiplayerSynchronizer::is_visible_to((int)lVar36);
         if (cVar27 != '\0') break;
         while (true) {
            if (iVar32 <= (int)lVar40 + 1) goto LAB_00101765;
            lVar40 = lVar40 + 1;
            uVar28 = puVar3[lVar40];
            if (uVar28 != 0) break;
            LAB_00101782:_err_print_error("is_rpc_visible", "modules/multiplayer/scene_replication_interface.cpp", 0x14c, "Condition \"!sync\" is true. Continuing.", 0, 0);
         }
;
      }
;
      goto LAB_00101680;
   }

   if (param_2 == 0) {
      plVar41 = *(long**)( this + 0x198 );
      if (plVar41 != (long*)0x0) goto LAB_001015a0;
      goto LAB_00101680;
   }

   cVar27 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::_lookup_pos((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), (int*)(ulong)(uint)param_2, &local_44);
   if (cVar27 == '\0') goto LAB_00101765;
   local_44 = 0;
   cVar27 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::_lookup_pos((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), (int*)(ulong)(uint)param_2, &local_44);
   if (cVar27 != '\0') {
      uVar29 = HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_lookup_pos((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( *(long*)( *(long*)( this + 0x188 ) + (ulong)local_44 * 8 ) + 0x40 ), pOVar1, &local_44);
      goto LAB_00101685;
   }

   goto LAB_00101829;
   LAB_001014d0:uVar42 = uVar42 + 1;
   auVar8._8_8_ = 0;
   auVar8._0_8_ = ( ulong )(uVar30 + 1) * lVar2;
   auVar19._8_8_ = 0;
   auVar19._0_8_ = uVar43;
   lVar34 = SUB168(auVar8 * auVar19, 8);
   uVar44 = *(uint*)( lVar36 + lVar34 * 4 );
   uVar30 = SUB164(auVar8 * auVar19, 8);
   if (( uVar44 == 0 ) || ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar44 * lVar2,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( uVar33 + uVar30 ) - SUB164(auVar9 * auVar20, 8)) * lVar2,auVar21._8_8_ = 0,auVar21._0_8_ = uVar43,SUB164(auVar10 * auVar21, 8) < uVar42) goto LAB_00101829;
   goto LAB_00101519;
   LAB_00101765:uVar29 = 0;
   goto LAB_00101685;
   LAB_00101829:_err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
   _err_flush_stdout();
   /* WARNING: Does not return */
   pcVar26 = (code*)invalidInstructionException();
   ( *pcVar26 )();
   while (true) {
      uVar28 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar41 + 0xc ) * 4 ));
      lVar40 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( plVar41 + 0xc ) * 8 );
      auVar11._8_8_ = 0;
      auVar11._0_8_ = uVar39 * lVar40;
      auVar22._8_8_ = 0;
      auVar22._0_8_ = uVar28;
      lVar36 = SUB168(auVar11 * auVar22, 8);
      uVar33 = *(uint*)( plVar41[0xb] + lVar36 * 4 );
      iVar32 = SUB164(auVar11 * auVar22, 8);
      if (uVar33 == 0) goto LAB_00101765;
      uVar44 = 0;
      while (( uVar38 != uVar33 || ( pOVar1 != *(ObjectID**)( plVar41[8] + ( ulong ) * (uint*)( plVar41[9] + lVar36 * 4 ) * 8 ) ) )) {
         uVar44 = uVar44 + 1;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = ( ulong )(iVar32 + 1) * lVar40;
         auVar23._8_8_ = 0;
         auVar23._0_8_ = uVar28;
         lVar36 = SUB168(auVar12 * auVar23, 8);
         uVar33 = *(uint*)( plVar41[0xb] + lVar36 * 4 );
         iVar32 = SUB164(auVar12 * auVar23, 8);
         if (( uVar33 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = (ulong)uVar33 * lVar40,auVar24._8_8_ = 0,auVar24._0_8_ = uVar28,auVar14._8_8_ = 0,auVar14._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar41 + 0xc ) * 4 ) + iVar32 ) - SUB164(auVar13 * auVar24, 8)) * lVar40,auVar25._8_8_ = 0,auVar25._0_8_ = uVar28,SUB164(auVar14 * auVar25, 8) < uVar44) goto LAB_00101765;
      }
;
      plVar41 = (long*)*plVar41;
      if (plVar41 == (long*)0x0) break;
      LAB_001015a0:if (( plVar41[8] == 0 ) || ( *(int*)( (long)plVar41 + 100 ) == 0 )) goto LAB_00101765;
   }
;
   LAB_00101680:uVar29 = 1;
   LAB_00101685:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar29;
}
/* SceneReplicationInterface::_send_raw(unsigned char const*, int, int, bool) */undefined4 SceneReplicationInterface::_send_raw(SceneReplicationInterface *this, uchar *param_1, int param_2, int param_3, bool param_4) {
   char cVar1;
   undefined4 uVar2;
   long in_FS_OFFSET;
   Object *local_38;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( param_1 == (uchar*)0x0 ) || ( param_2 < 1 )) {
      uVar2 = 0x1f;
      _err_print_error("_send_raw", "modules/multiplayer/scene_replication_interface.cpp", 0x1cb, "Condition \"!p_buffer || p_size < 1\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else {
      ( **(code**)( **(long**)( this + 0x288 ) + 0x160 ) )(&local_38);
      if (local_38 == (Object*)0x0) {
         uVar2 = 3;
         _err_print_error("_send_raw", "modules/multiplayer/scene_replication_interface.cpp", 0x1ce, "Condition \"peer.is_null()\" is true. Returning: ERR_UNCONFIGURED", 0, 0);
      }
 else {
         ( **(code**)( *(long*)local_38 + 400 ) )(local_38, 0);
         ( **(code**)( *(long*)local_38 + 0x1a0 ) )(local_38, (uint)param_4 * 2);
         uVar2 = SceneMultiplayer::send_command((int)*(undefined8*)( this + 0x288 ), (uchar*)(ulong)(uint)param_3, (int)param_1);
      }

      if (local_38 != (Object*)0x0) {
         cVar1 = RefCounted::unreference();
         if (cVar1 != '\0') {
            cVar1 = predelete_handler(local_38);
            if (cVar1 != '\0') {
               ( **(code**)( *(long*)local_38 + 0x140 ) )(local_38);
               Memory::free_static(local_38, false);
            }

         }

      }

   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar2;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Removing unreachable block (ram,0x00101ae0) *//* SceneReplicationInterface::_verify_synchronizer(int, MultiplayerSynchronizer*, unsigned int&) */undefined4 SceneReplicationInterface::_verify_synchronizer(SceneReplicationInterface *this, int param_1, MultiplayerSynchronizer *param_2, uint *param_3) {
   long lVar1;
   uint uVar2;
   undefined4 uVar3;
   long in_FS_OFFSET;
   uVar3 = 1;
   lVar1 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar2 = MultiplayerSynchronizer::get_net_id();
   *param_3 = uVar2;
   if ((int)uVar2 < 1) {
      uVar3 = SceneCacheInterface::send_object_cache(*(Object**)( this + 0x290 ), (uint)param_2, (int*)(ulong)(uint)param_1);
      if (*param_3 == 0) {
         *param_3 = 0x80000000;
         MultiplayerSynchronizer::set_net_id((uint)param_2);
      }

   }

   if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar3;
}
/* SceneReplicationInterface::set_max_sync_packet_size(int) */void SceneReplicationInterface::set_max_sync_packet_size(SceneReplicationInterface *this, int param_1) {
   if (0x7f < param_1) {
      *(int*)( this + 0x2a8 ) = param_1;
      return;
   }

   _err_print_error("set_max_sync_packet_size", "modules/multiplayer/scene_replication_interface.cpp", 0x389, "Condition \"p_size < 128\" is true.", "Sync maximum packet size must be at least 128 bytes.", 0, 0);
   return;
}
/* SceneReplicationInterface::get_max_sync_packet_size() const */undefined4 SceneReplicationInterface::get_max_sync_packet_size(SceneReplicationInterface *this) {
   return *(undefined4*)( this + 0x2a8 );
}
/* SceneReplicationInterface::set_max_delta_packet_size(int) */void SceneReplicationInterface::set_max_delta_packet_size(SceneReplicationInterface *this, int param_1) {
   if (0x7f < param_1) {
      *(int*)( this + 0x2ac ) = param_1;
      return;
   }

   _err_print_error("set_max_delta_packet_size", "modules/multiplayer/scene_replication_interface.cpp", 0x392, "Condition \"p_size < 128\" is true.", "Sync maximum packet size must be at least 128 bytes.", 0, 0);
   return;
}
/* SceneReplicationInterface::get_max_delta_packet_size() const */undefined4 SceneReplicationInterface::get_max_delta_packet_size(SceneReplicationInterface *this) {
   return *(undefined4*)( this + 0x2ac );
}
/* SceneReplicationInterface::_track(ObjectID const&) */void SceneReplicationInterface::_track(SceneReplicationInterface *this, ObjectID *param_1) {
   long lVar1;
   long lVar2;
   void *pvVar3;
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
   long *plVar14;
   uint uVar15;
   ulong *puVar16;
   int iVar17;
   long lVar18;
   ulong uVar19;
   ulong uVar20;
   uint uVar21;
   long in_FS_OFFSET;
   bool bVar22;
   SceneReplicationInterface local_68[16];
   Callable local_58[24];
   long local_40;
   lVar1 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x1c0 ) != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
      uVar20 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
      uVar13 = lVar1 * 0x3ffff - 1;
      uVar13 = ( uVar13 ^ uVar13 >> 0x1f ) * 0x15;
      uVar13 = ( uVar13 ^ uVar13 >> 0xb ) * 0x41;
      uVar13 = uVar13 >> 0x16 ^ uVar13;
      uVar19 = uVar13 & 0xffffffff;
      if ((int)uVar13 == 0) {
         uVar19 = 1;
      }

      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar19 * lVar2;
      auVar9._8_8_ = 0;
      auVar9._0_8_ = uVar20;
      lVar18 = SUB168(auVar5 * auVar9, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar18 * 4 );
      iVar17 = SUB164(auVar5 * auVar9, 8);
      if (uVar15 != 0) {
         uVar21 = 0;
         do {
            if (( uVar15 == (uint)uVar19 ) && ( lVar1 == *(long*)( *(long*)( *(long*)( this + 0x1c0 ) + lVar18 * 8 ) + 0x10 ) )) goto LAB_00101d20;
            uVar21 = uVar21 + 1;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = ( ulong )(iVar17 + 1) * lVar2;
            auVar10._8_8_ = 0;
            auVar10._0_8_ = uVar20;
            lVar18 = SUB168(auVar6 * auVar10, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar18 * 4 );
            iVar17 = SUB164(auVar6 * auVar10, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar15 * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar20,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + iVar17 ) - SUB164(auVar7 * auVar11, 8)) * lVar2,auVar12._8_8_ = 0,auVar12._0_8_ = uVar20,uVar21 <= SUB164(auVar8 * auVar12, 8) );
      }

   }

   plVar14 = (long*)HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::operator []((HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>*)( this + 0x1b8 ), param_1);
   *plVar14 = lVar1;
   pvVar3 = (void*)plVar14[3];
   plVar14[1] = 0;
   plVar14[2] = 0;
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( (long)plVar14 + 0x3c ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar14 + 7 ) * 4 ) != 0) {
            memset((void*)plVar14[6], 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar14 + 7 ) * 4 ) * 4);
         }

         *(undefined4*)( (long)plVar14 + 0x3c ) = 0;
      }

      Memory::free_static(pvVar3, false);
      Memory::free_static((void*)plVar14[5], false);
      Memory::free_static((void*)plVar14[4], false);
      Memory::free_static((void*)plVar14[6], false);
      *(undefined1(*) [16])( plVar14 + 3 ) = (undefined1[16])0x0;
      *(undefined1(*) [16])( plVar14 + 5 ) = (undefined1[16])0x0;
   }

   plVar14[7] = 2;
   uVar13 = *(ulong*)param_1;
   if (uVar13 != 0) {
      uVar15 = (uint)uVar13 & 0xffffff;
      if (uVar15 < (uint)ObjectDB::slot_max) {
         while (true) {
            local_58[0] = (Callable)0x0;
            LOCK();
            bVar22 = (char)ObjectDB::spin_lock == '\0';
            if (bVar22) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar22) break;
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar16 = (ulong*)( (ulong)uVar15 * 0x10 + ObjectDB::object_slots );
         if (( uVar13 >> 0x18 & 0x7fffffffff ) == ( *puVar16 & 0x7fffffffff )) {
            uVar13 = puVar16[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (uVar13 != 0) {
               plVar14 = (long*)__dynamic_cast(uVar13, &Object::typeinfo, &Node::typeinfo, 0);
               pcVar4 = *(code**)( *plVar14 + 0x108 );
               create_custom_callable_function_pointer<SceneReplicationInterface,ObjectID_const&>(local_68, (char*)this, (_func_void_ObjectID_ptr*)"&SceneReplicationInterface::_untrack");
               Callable::bind<ObjectID>(local_58, local_68, *(undefined8*)param_1);
               ( *pcVar4 )(plVar14, SceneStringNames::singleton + 0x48, local_58, 4);
               Callable::~Callable(local_58);
               Callable::~Callable((Callable*)local_68);
               LAB_00101d20:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
                  /* WARNING: Subroutine does not return */
                  __stack_chk_fail();
               }

               HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::operator []((HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>*)( this + 0x1b8 ), param_1);
               return;
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

   /* WARNING: Does not return */
   pcVar4 = (code*)invalidInstructionException();
   ( *pcVar4 )();
}
/* SceneReplicationInterface::on_spawn(Object*, Variant) */undefined8 SceneReplicationInterface::on_spawn(SceneReplicationInterface *this, long param_1, int *param_3) {
   code *pcVar1;
   long *plVar2;
   long lVar3;
   long lVar4;
   undefined8 uVar5;
   long in_FS_OFFSET;
   long local_60;
   SceneReplicationInterface local_58[16];
   ObjectID local_48[24];
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      LAB_00102080:_err_print_error("on_spawn", "modules/multiplayer/scene_replication_interface.cpp", 0x9f, "Condition \"!node || p_config.get_type() != Variant::OBJECT\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else {
      plVar2 = (long*)__dynamic_cast(param_1, &Object::typeinfo, &Node::typeinfo, 0);
      if (( plVar2 == (long*)0x0 ) || ( *param_3 != 0x18 )) goto LAB_00102080;
      lVar3 = Variant::get_validated_object();
      if (lVar3 != 0) {
         lVar3 = __dynamic_cast(lVar3, &Object::typeinfo, &MultiplayerSpawner::typeinfo, 0);
         if (lVar3 != 0) {
            local_60 = plVar2[0xc];
            lVar4 = _track(this, (ObjectID*)&local_60);
            if (*(long*)( lVar4 + 0x10 ) == 0) {
               *(undefined8*)( lVar4 + 0x10 ) = *(undefined8*)( lVar3 + 0x60 );
               HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(local_48);
               pcVar1 = *(code**)( *plVar2 + 0x108 );
               create_custom_callable_function_pointer<SceneReplicationInterface,ObjectID_const&>(local_58, (char*)this, (_func_void_ObjectID_ptr*)"&SceneReplicationInterface::_node_ready");
               Callable::bind<ObjectID>(local_48, local_58, local_60);
               ( *pcVar1 )(plVar2, SceneStringNames::singleton + 0x50, local_48, 4);
               Callable::~Callable((Callable*)local_48);
               Callable::~Callable((Callable*)local_58);
               uVar5 = 0;
            }
 else {
               _err_print_error("on_spawn", "modules/multiplayer/scene_replication_interface.cpp", 0xa7, "Condition \"tobj.spawner != ObjectID()\" is true. Returning: ERR_ALREADY_IN_USE", 0, 0);
               uVar5 = 0x16;
            }

            goto LAB_0010205c;
         }

      }

      _err_print_error("on_spawn", "modules/multiplayer/scene_replication_interface.cpp", 0xa1, "Parameter \"spawner\" is null.", 0, 0);
   }

   uVar5 = 0x1f;
   LAB_0010205c:if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar5;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneReplicationInterface::on_replication_stop(Object*, Variant) */undefined8 SceneReplicationInterface::on_replication_stop(SceneReplicationInterface *this, long param_1, int *param_3) {
   code *pcVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   int iVar10;
   long lVar11;
   long lVar12;
   long *plVar13;
   ulong uVar14;
   undefined8 uVar15;
   uint uVar16;
   ulong uVar17;
   uint uVar18;
   ulong uVar19;
   long in_FS_OFFSET;
   uint local_64;
   long local_60;
   long local_58[3];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == 0 ) || ( lVar11 = __dynamic_cast(param_1, &Object::typeinfo, &Node::typeinfo, 0) ),lVar11 == 0 )) {
      _err_print_error("on_replication_stop", "modules/multiplayer/scene_replication_interface.cpp", 0x110, "Condition \"!node || p_config.get_type() != Variant::OBJECT\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else {
      lVar12 = Variant::get_validated_object();
      if (( lVar12 == 0 ) || ( plVar13 = (long*)__dynamic_cast(lVar12, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0) ),plVar13 == (long*)0x0) {
         _err_print_error("on_replication_stop", "modules/multiplayer/scene_replication_interface.cpp", 0x112, "Parameter \"sync\" is null.", 0, 0);
      }
 else {
         pcVar1 = *(code**)( *plVar13 + 0x110 );
         create_custom_callable_function_pointer<SceneReplicationInterface,int,ObjectID>((SceneReplicationInterface*)local_58, (char*)this, (_func_void_int_ObjectID*)"&SceneReplicationInterface::_visibility_changed");
         ( *pcVar1 )(plVar13, SceneStringNames::singleton + 0x18, (SceneReplicationInterface*)local_58);
         Callable::~Callable((Callable*)local_58);
         local_58[0] = plVar13[0xc];
         local_60 = *(long*)( lVar11 + 0x60 );
         if (( *(long*)( this + 0x1c0 ) != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
            uVar17 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
            lVar11 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
            uVar14 = local_60 * 0x3ffff - 1;
            uVar14 = ( uVar14 ^ uVar14 >> 0x1f ) * 0x15;
            uVar14 = ( uVar14 ^ uVar14 >> 0xb ) * 0x41;
            uVar14 = uVar14 >> 0x16 ^ uVar14;
            uVar19 = uVar14 & 0xffffffff;
            if ((int)uVar14 == 0) {
               uVar19 = 1;
            }

            auVar2._8_8_ = 0;
            auVar2._0_8_ = uVar19 * lVar11;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar17;
            lVar12 = SUB168(auVar2 * auVar6, 8);
            uVar16 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar12 * 4 );
            iVar10 = SUB164(auVar2 * auVar6, 8);
            if (uVar16 != 0) {
               uVar18 = 0;
               do {
                  if (( uVar16 == (uint)uVar19 ) && ( local_60 == *(long*)( *(long*)( *(long*)( this + 0x1c0 ) + lVar12 * 8 ) + 0x10 ) )) {
                     lVar11 = _track(this, (ObjectID*)&local_60);
                     HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( lVar11 + 0x18 ), (ObjectID*)local_58);
                     HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( this + 0x210 ), (ObjectID*)local_58);
                     for (plVar13 = *(long**)( this + 0x198 ); plVar13 != (long*)0x0; plVar13 = (long*)*plVar13) {
                        while (true) {
                           HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( plVar13 + 3 ), (ObjectID*)local_58);
                           HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::erase((HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>*)( plVar13 + 0xd ), (ObjectID*)local_58);
                           iVar10 = MultiplayerSynchronizer::get_net_id();
                           if (iVar10 != 0) break;
                           plVar13 = (long*)*plVar13;
                           if (plVar13 == (long*)0x0) goto LAB_001023d4;
                        }
;
                        local_64 = MultiplayerSynchronizer::get_net_id();
                        HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::erase((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( plVar13 + 0x13 ), &local_64);
                     }

                     LAB_001023d4:uVar15 = 0;
                     goto LAB_001023d6;
                  }

                  uVar18 = uVar18 + 1;
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = ( ulong )(iVar10 + 1) * lVar11;
                  auVar7._8_8_ = 0;
                  auVar7._0_8_ = uVar17;
                  lVar12 = SUB168(auVar3 * auVar7, 8);
                  uVar16 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar12 * 4 );
                  iVar10 = SUB164(auVar3 * auVar7, 8);
               }
 while ( ( uVar16 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar16 * lVar11,auVar8._8_8_ = 0,auVar8._0_8_ = uVar17,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + iVar10 ) - SUB164(auVar4 * auVar8, 8)) * lVar11,auVar9._8_8_ = 0,auVar9._0_8_ = uVar17,uVar18 <= SUB164(auVar5 * auVar9, 8) );
            }

         }

         _err_print_error("on_replication_stop", "modules/multiplayer/scene_replication_interface.cpp", 0x117, "Condition \"!tracked_nodes.has(oid)\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      }

   }

   uVar15 = 0x1f;
   LAB_001023d6:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar15;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<Variant>::resize<false>(long) [clone .isra.0] */void CowData<Variant>::resize<false>(CowData<Variant> *this, long param_1) {
   Variant *this_00;
   code *pcVar1;
   int iVar2;
   undefined8 *puVar3;
   undefined8 *puVar4;
   char *pcVar5;
   undefined4 *puVar6;
   undefined8 uVar7;
   long lVar8;
   ulong uVar9;
   Variant *pVVar10;
   CowData<Variant> *pCVar11;
   long lVar12;
   long lVar13;
   long lVar14;
   if (param_1 < 0) {
      _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      return;
   }

   lVar8 = *(long*)this;
   if (lVar8 == 0) {
      lVar12 = 0;
      lVar8 = 0;
      if (param_1 == 0) {
         return;
      }

   }
 else {
      lVar12 = *(long*)( lVar8 + -8 );
      if (param_1 == lVar12) {
         return;
      }

      if (param_1 == 0) {
         _unref(this);
         return;
      }

      if (1 < *(ulong*)( lVar8 + -0x10 )) {
         if (*(long*)this == 0) {
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         lVar8 = *(long*)( *(long*)this + -8 );
         uVar9 = 0x10;
         if (lVar8 * 0x18 != 0) {
            uVar9 = lVar8 * 0x18 - 1;
            uVar9 = uVar9 | uVar9 >> 1;
            uVar9 = uVar9 | uVar9 >> 2;
            uVar9 = uVar9 | uVar9 >> 4;
            uVar9 = uVar9 | uVar9 >> 8;
            uVar9 = uVar9 | uVar9 >> 0x10;
            uVar9 = ( uVar9 | uVar9 >> 0x20 ) + 0x11;
         }

         puVar4 = (undefined8*)Memory::alloc_static(uVar9, false);
         if (puVar4 == (undefined8*)0x0) {
            _err_print_error("_copy_on_write", "./core/templates/cowdata.h", 0x13a, "Parameter \"mem_new\" is null.", 0, 0);
         }
 else {
            lVar13 = 0;
            lVar14 = 0;
            *puVar4 = 1;
            puVar4[1] = lVar8;
            if (lVar8 != 0) {
               do {
                  lVar14 = lVar14 + 1;
                  pVVar10 = (Variant*)( *(long*)this + lVar13 );
                  this_00 = (Variant*)( (long)( puVar4 + 2 ) + lVar13 );
                  lVar13 = lVar13 + 0x18;
                  Variant::Variant(this_00, pVVar10);
               }
 while ( lVar8 != lVar14 );
            }

            _unref(this);
            *(undefined8**)this = puVar4 + 2;
         }

      }

      lVar8 = lVar12 * 0x18;
      if (lVar8 != 0) {
         uVar9 = lVar8 - 1U | lVar8 - 1U >> 1;
         uVar9 = uVar9 | uVar9 >> 2;
         uVar9 = uVar9 | uVar9 >> 4;
         uVar9 = uVar9 | uVar9 >> 8;
         uVar9 = uVar9 | uVar9 >> 0x10;
         lVar8 = ( uVar9 | uVar9 >> 0x20 ) + 1;
      }

   }

   if (param_1 * 0x18 != 0) {
      uVar9 = param_1 * 0x18 - 1;
      uVar9 = uVar9 | uVar9 >> 1;
      uVar9 = uVar9 | uVar9 >> 2;
      uVar9 = uVar9 | uVar9 >> 4;
      uVar9 = uVar9 | uVar9 >> 8;
      uVar9 = uVar9 | uVar9 >> 0x10;
      uVar9 = uVar9 | uVar9 >> 0x20;
      lVar13 = uVar9 + 1;
      if (lVar13 != 0) {
         if (param_1 <= lVar12) {
            puVar4 = *(undefined8**)this;
            uVar9 = param_1;
            while (true) {
               if (puVar4 == (undefined8*)0x0) {
                  /* WARNING: Does not return */
                  pcVar1 = (code*)invalidInstructionException();
                  ( *pcVar1 )();
               }

               if ((ulong)puVar4[-1] <= uVar9) break;
               if (Variant::needs_deinit[*(int*)( puVar4 + uVar9 * 3 )] != '\0') {
                  Variant::_clear_internal();
                  puVar4 = *(undefined8**)this;
               }

               uVar9 = uVar9 + 1;
            }
;
            if (lVar13 != lVar8) {
               pCVar11 = this;
               iVar2 = _realloc(this, lVar13);
               if (iVar2 != 0) {
                  return;
               }

               puVar4 = *(undefined8**)this;
               if (puVar4 == (undefined8*)0x0) {
                  resize<false>((long)pCVar11);
                  return;
               }

            }

            goto LAB_0010262f;
         }

         if (lVar13 == lVar8) {
            LAB_001026d3:puVar4 = *(undefined8**)this;
            if (puVar4 == (undefined8*)0x0) {
               /* WARNING: Does not return */
               pcVar1 = (code*)invalidInstructionException();
               ( *pcVar1 )();
            }

            lVar8 = puVar4[-1];
            if (param_1 <= lVar8) goto LAB_0010262f;
         }
 else {
            if (lVar12 != 0) {
               iVar2 = _realloc(this, lVar13);
               if (iVar2 != 0) {
                  return;
               }

               goto LAB_001026d3;
            }

            puVar3 = (undefined8*)Memory::alloc_static(uVar9 + 0x11, false);
            if (puVar3 == (undefined8*)0x0) {
               uVar7 = 0x171;
               pcVar5 = "Parameter \"mem_new\" is null.";
               goto LAB_0010275a;
            }

            puVar4 = puVar3 + 2;
            *puVar3 = 1;
            puVar3[1] = 0;
            *(undefined8**)this = puVar4;
            lVar8 = 0;
         }

         lVar12 = lVar8 + 1;
         *(undefined4*)( puVar4 + lVar8 * 3 ) = 0;
         *(undefined1(*) [16])( puVar4 + lVar8 * 3 + 1 ) = (undefined1[16])0x0;
         if (lVar12 < param_1) {
            lVar8 = lVar12 * 0x18;
            do {
               lVar12 = lVar12 + 1;
               puVar6 = (undefined4*)( *(long*)this + lVar8 );
               lVar8 = lVar8 + 0x18;
               *puVar6 = 0;
               *(undefined1(*) [16])( puVar6 + 2 ) = (undefined1[16])0x0;
            }
 while ( param_1 != lVar12 );
         }

         puVar4 = *(undefined8**)this;
         if (puVar4 == (undefined8*)0x0) {
            _DAT_00000000 = 0;
            /* WARNING: Does not return */
            pcVar1 = (code*)invalidInstructionException();
            ( *pcVar1 )();
         }

         LAB_0010262f:puVar4[-1] = param_1;
         return;
      }

   }

   uVar7 = 0x16a;
   pcVar5 = "Condition \"!_get_alloc_size_checked(p_size, &alloc_size)\" is true. Returning: ERR_OUT_OF_MEMORY";
   LAB_0010275a:_err_print_error("resize", "./core/templates/cowdata.h", uVar7, pcVar5, 0, 0);
   return;
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
      LAB_00102a66:lVar10 = 0;
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
      if (lVar10 == 0) goto LAB_00102a66;
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

      FUN_0010b314();
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
         goto LAB_001029bc;
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

   LAB_001029bc:puVar8[-1] = param_1;
   return;
}
/* SceneReplicationInterface::_send_sync(int, HashSet<ObjectID, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID> > const&, unsigned short, unsigned long) */void SceneReplicationInterface::_send_sync(int param_1, HashSet *param_2, ushort param_3, ulong param_4) {
   Variant **ppVVar1;
   undefined1 *puVar2;
   int iVar3;
   undefined4 uVar4;
   undefined1 *puVar5;
   ulong *puVar6;
   ulong uVar7;
   Variant **ppVVar8;
   char cVar9;
   int iVar10;
   MultiplayerSynchronizer *pMVar11;
   long lVar12;
   Object *pOVar13;
   long *plVar14;
   NodePath *this;
   ulong uVar15;
   uint uVar16;
   ulong *puVar17;
   undefined6 in_register_00000012;
   NodePath *pNVar18;
   undefined1 *puVar19;
   int iVar20;
   undefined4 in_register_0000003c;
   Node *this_00;
   long lVar21;
   long in_FS_OFFSET;
   bool bVar22;
   int local_e0;
   uint local_b0;
   uint local_ac;
   undefined1(*local_a8)[16];
   long local_a0;
   ulong local_98;
   undefined8 local_90;
   Vector local_88[8];
   undefined8 local_80;
   Vector local_78[8];
   Variant **local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   this_00 = (Node*)CONCAT44(in_register_0000003c, param_1);
   iVar20 = (int)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this_00 + 0x2a0 ) == 0) {
      lVar21 = 0;
   }
 else {
      lVar21 = *(long*)( *(long*)( this_00 + 0x2a0 ) + -8 );
   }

   if (lVar21 < *(int*)( this_00 + 0x2a8 ) + 0xb) {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this_00 + 0x2a0 ), (long)( *(int*)( this_00 + 0x2a8 ) + 0xb ));
   }

   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this_00 + 0x2a0 ));
   puVar5 = *(undefined1**)( this_00 + 0x2a0 );
   *puVar5 = 6;
   *(short*)( puVar5 + 1 ) = (short)param_4;
   iVar3 = *(int*)( (long)CONCAT62(in_register_00000012, param_3) + 0x24 );
   if (iVar3 == 0) {
      LAB_00102f0d:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
         return;
      }

      LAB_0010339d:/* WARNING: Subroutine does not return */__stack_chk_fail();
   }

   puVar6 = *(ulong**)CONCAT62(in_register_00000012, param_3);
   lVar21 = 0;
   local_e0 = 3;
   uVar15 = *puVar6;
   if (uVar15 == 0) goto LAB_00102f72;
   do {
      uVar16 = (uint)uVar15 & 0xffffff;
      if ((uint)ObjectDB::slot_max <= uVar16) {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr");
         goto LAB_00102f72;
      }

      while (true) {
         uVar7 = (ulong)local_68 >> 8;
         local_68 = (char*)( uVar7 << 8 );
         LOCK();
         bVar22 = (char)ObjectDB::spin_lock == '\0';
         if (bVar22) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar22) break;
         local_68 = (char*)( uVar7 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar17 = (ulong*)( (ulong)uVar16 * 0x10 + ObjectDB::object_slots );
      if (( uVar15 >> 0x18 & 0x7fffffffff ) != ( *puVar17 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00102f72;
      }

      uVar15 = puVar17[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (uVar15 == 0) goto LAB_00102f72;
      pMVar11 = (MultiplayerSynchronizer*)__dynamic_cast(uVar15, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
      if (pMVar11 == (MultiplayerSynchronizer*)0x0) goto LAB_00102f72;
      lVar12 = MultiplayerSynchronizer::get_replication_config_ptr();
      if (lVar12 == 0) goto LAB_00102f72;
      cVar9 = _has_authority(this_00);
      if (cVar9 == '\0') goto LAB_00102f72;
      cVar9 = MultiplayerSynchronizer::update_outbound_sync_time((ulong)pMVar11);
      if (cVar9 != '\0') {
         pOVar13 = (Object*)MultiplayerSynchronizer::get_root_node();
         if (pOVar13 == (Object*)0x0) {
            _err_print_error("_send_sync", "modules/multiplayer/scene_replication_interface.cpp", 0x333, "Condition \"!node\" is true. Continuing.");
         }
 else {
            local_b0 = MultiplayerSynchronizer::get_net_id();
            cVar9 = _verify_synchronizer((SceneReplicationInterface*)this_00, iVar20, pMVar11, &local_b0);
            if (cVar9 != '\0') {
               local_80 = 0;
               local_70 = (Variant**)0x0;
               MultiplayerSynchronizer::get_replication_config_ptr();
               plVar14 = (long*)SceneReplicationConfig::get_sync_properties();
               local_a8 = (undefined1(*) [16])0x0;
               if (( (long*)*plVar14 != (long*)0x0 ) && ( pNVar18 = *(NodePath**)*plVar14 ),pNVar18 != (NodePath*)0x0) {
                  local_a8 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                  *(undefined4*)local_a8[1] = 0;
                  *local_a8 = (undefined1[16])0x0;
                  do {
                     while (true) {
                        this(NodePath * operator_new(0x20, DefaultAllocator::alloc));
                        *(undefined1(*) [16])this = (undefined1[16])0x0;
                        *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
                        NodePath::operator =(this, pNVar18);
                        lVar12 = *(long*)( *local_a8 + 8 );
                        *(undefined8*)( this + 8 ) = 0;
                        *(undefined1(**) [16])( this + 0x18 ) = local_a8;
                        *(long*)( this + 0x10 ) = lVar12;
                        if (lVar12 != 0) {
                           *(NodePath**)( lVar12 + 8 ) = this;
                        }

                        lVar12 = *(long*)*local_a8;
                        *(NodePath**)( *local_a8 + 8 ) = this;
                        if (lVar12 != 0) break;
                        pNVar18 = *(NodePath**)( pNVar18 + 8 );
                        *(int*)local_a8[1] = *(int*)local_a8[1] + 1;
                        *(NodePath**)*local_a8 = this;
                        if (pNVar18 == (NodePath*)0x0) goto LAB_00102d68;
                     }
;
                     pNVar18 = *(NodePath**)( pNVar18 + 8 );
                     *(int*)local_a8[1] = *(int*)local_a8[1] + 1;
                  }
 while ( pNVar18 != (NodePath*)0x0 );
               }

               LAB_00102d68:iVar10 = MultiplayerSynchronizer::get_state((List*)&local_a8, pOVar13, local_88, local_78);
               if (iVar10 == 0) {
                  if (local_70 == (Variant**)0x0) {
                     iVar10 = 0;
                  }
 else {
                     iVar10 = *(int*)( local_70 + -1 );
                  }

                  CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*>*)&local_70);
                  iVar10 = MultiplayerAPI::encode_and_compress_variants(local_70, iVar10, (uchar*)0x0, (int*)&local_ac, (bool*)0x0, false);
                  if (iVar10 == 0) {
                     if (*(int*)( this_00 + 0x2a8 ) < (int)local_ac) {
                        Node::get_path();
                        uVar16 = local_ac;
                        uVar4 = *(undefined4*)( this_00 + 0x2a8 );
                        local_90 = 0;
                        local_68 = "Node states bigger than MTU will not be sent (%d > %d): %s";
                        local_60 = 0x3a;
                        String::parse_latin1((StrRange*)&local_90);
                        vformat<int,int,NodePath>((StringName*)&local_68, (StrRange*)&local_90, uVar16, uVar4, (NodePath*)&local_98);
                        _err_print_error("_send_sync", "modules/multiplayer/scene_replication_interface.cpp", 0x342, "Condition \"size > sync_mtu\" is true. Continuing.", (StringName*)&local_68, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                        NodePath::~NodePath((NodePath*)&local_98);
                     }
 else {
                        if (*(int*)( this_00 + 0x2a8 ) < (int)( local_e0 + 8 + local_ac )) {
                           _send_raw((SceneReplicationInterface*)this_00, *(uchar**)( this_00 + 0x2a0 ), local_e0, iVar20, false);
                           local_e0 = 3;
                        }

                        if (local_ac != 0) {
                           puVar19 = puVar5 + local_e0;
                           uVar15 = MultiplayerSynchronizer::get_net_id();
                           puVar2 = puVar19 + 4;
                           do {
                              *puVar19 = (char)uVar15;
                              puVar19 = puVar19 + 1;
                              uVar15 = uVar15 >> 8 & 0xffffff;
                           }
 while ( puVar2 != puVar19 );
                           puVar19 = puVar5 + ( local_e0 + 4 );
                           puVar2 = puVar19 + 4;
                           uVar16 = local_ac;
                           do {
                              *puVar19 = (char)uVar16;
                              puVar19 = puVar19 + 1;
                              uVar16 = uVar16 >> 8;
                           }
 while ( puVar2 != puVar19 );
                           if (local_70 == (Variant**)0x0) {
                              iVar10 = 0;
                           }
 else {
                              iVar10 = *(int*)( local_70 + -1 );
                           }

                           CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*>*)&local_70);
                           MultiplayerAPI::encode_and_compress_variants(local_70, iVar10, puVar5 + ( local_e0 + 8 ), (int*)&local_ac, (bool*)0x0, false);
                           local_e0 = local_ac + local_e0 + 8;
                        }

                        uVar16 = local_ac;
                        local_a0 = 0;
                        local_68 = "sync_out";
                        local_60 = 8;
                        String::parse_latin1((StrRange*)&local_a0);
                        local_98 = puVar6[lVar21];
                        StringName::StringName((StringName*)&local_68, "multiplayer:replication", false);
                        cVar9 = EngineDebugger::is_profiling((StringName*)&local_68);
                        if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        if (cVar9 != '\0') {
                           Array::Array((Array*)&local_90);
                           Variant::Variant((Variant*)local_58, (String_conflict*)&local_a0);
                           Array::push_back((Variant*)&local_90);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Variant::Variant((Variant*)local_58, (ObjectID*)&local_98);
                           Array::push_back((Variant*)&local_90);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Variant::Variant((Variant*)local_58, uVar16);
                           Array::push_back((Variant*)&local_90);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           StringName::StringName((StringName*)&local_68, "multiplayer:replication", false);
                           EngineDebugger::profiler_add_frame_data((StringName*)&local_68, (Array*)&local_90);
                           if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                              StringName::unref();
                           }

                           Array::~Array((Array*)&local_90);
                        }

                        lVar12 = local_a0;
                        if (local_a0 != 0) {
                           LOCK();
                           plVar14 = (long*)( local_a0 + -0x10 );
                           *plVar14 = *plVar14 + -1;
                           UNLOCK();
                           if (*plVar14 == 0) {
                              local_a0 = 0;
                              Memory::free_static((void*)( lVar12 + -0x10 ), false);
                           }

                        }

                     }

                  }
 else {
                     _err_print_error("_send_sync", "modules/multiplayer/scene_replication_interface.cpp", 0x340, "Condition \"err != OK\" is true. Continuing.", "Unable to encode sync state.", 0, 0);
                  }

               }
 else {
                  _err_print_error("_send_sync", "modules/multiplayer/scene_replication_interface.cpp", 0x33e, "Condition \"err != OK\" is true. Continuing.", "Unable to retrieve sync state.", 0, 0);
               }

               List<NodePath,DefaultAllocator>::~List((List<NodePath,DefaultAllocator>*)&local_a8);
               ppVVar8 = local_70;
               if (local_70 != (Variant**)0x0) {
                  LOCK();
                  ppVVar1 = local_70 + -2;
                  *ppVVar1 = *ppVVar1 + -1;
                  UNLOCK();
                  if (*ppVVar1 == (Variant*)0x0) {
                     local_70 = (Variant**)0x0;
                     Memory::free_static(ppVVar8 + -2, false);
                  }

               }

               CowData<Variant>::_unref((CowData<Variant>*)&local_80);
            }

         }

      }

      while (true) {
         if (iVar3 <= (int)lVar21 + 1) {
            if (local_e0 < 4) goto LAB_00102f0d;
            if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
               _send_raw((SceneReplicationInterface*)this_00, *(uchar**)( this_00 + 0x2a0 ), local_e0, iVar20, false);
               return;
            }

            goto LAB_0010339d;
         }

         lVar21 = lVar21 + 1;
         uVar15 = puVar6[lVar21];
         if (uVar15 != 0) break;
         LAB_00102f72:_err_print_error("_send_sync", "modules/multiplayer/scene_replication_interface.cpp", 0x32d, "Condition \"!sync || !sync->get_replication_config_ptr() || !_has_authority(sync)\" is true. Continuing.");
      }
;
   }
 while ( true );
}
/* SceneReplicationInterface::_make_spawn_packet(Node*, MultiplayerSpawner*, int&) */int SceneReplicationInterface::_make_spawn_packet(SceneReplicationInterface *this, Node *param_1, MultiplayerSpawner *param_2, int *param_3) {
   undefined1 *puVar1;
   Variant **ppVVar2;
   undefined1(*pauVar3)[16];
   undefined1 *puVar4;
   void *pvVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   Variant **ppVVar14;
   undefined8 uVar15;
   undefined8 uVar16;
   char cVar17;
   char cVar18;
   int iVar19;
   undefined4 uVar20;
   int iVar21;
   ulong uVar22;
   long lVar23;
   long *plVar24;
   NodePath *this_00;
   undefined4 *puVar25;
   char *pcVar26;
   size_t sVar27;
   char *pcVar28;
   undefined1 *puVar29;
   undefined1(*pauVar30)[16];
   int iVar31;
   long lVar32;
   ulong uVar33;
   NodePath *pNVar34;
   uint uVar35;
   uint uVar36;
   ulong *puVar37;
   uint *puVar38;
   ulong uVar39;
   uint uVar40;
   long lVar41;
   long in_FS_OFFSET;
   bool bVar42;
   List<NodePath,DefaultAllocator> *local_130;
   uint local_104;
   uint local_e0;
   int local_dc;
   long local_d8;
   undefined1(*local_d0)[16];
   long local_c8;
   undefined8 local_c0;
   Vector local_b8[8];
   undefined8 local_b0;
   Vector local_a8[8];
   Variant **local_a0;
   char *local_98;
   size_t local_90;
   undefined1 local_88[16];
   undefined1 local_78[16];
   undefined8 local_68;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( *(long*)( this + 0x288 ) == 0 ) || ( param_1 == (Node*)0x0 ) ) || ( param_2 == (MultiplayerSpawner*)0x0 )) {
      iVar21 = 0x2f;
      _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x1d5, "Condition \"!multiplayer || !p_node || !p_spawner\" is true. Returning: ERR_BUG", 0, 0);
      goto LAB_00103db3;
   }

   local_d8 = *(long*)( param_1 + 0x60 );
   lVar41 = *(long*)( this + 0x1c0 );
   if (( lVar41 != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
      uVar39 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
      lVar23 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
      uVar22 = local_d8 * 0x3ffff - 1;
      uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
      uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
      uVar22 = uVar22 >> 0x16 ^ uVar22;
      uVar33 = uVar22 & 0xffffffff;
      if ((int)uVar22 == 0) {
         uVar33 = 1;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar33 * lVar23;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar39;
      lVar32 = SUB168(auVar6 * auVar10, 8);
      uVar35 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar32 * 4 );
      uVar36 = SUB164(auVar6 * auVar10, 8);
      if (uVar35 != 0) {
         uVar40 = 0;
         LAB_00103512:if (( (uint)uVar33 != uVar35 ) || ( local_d8 != *(long*)( *(long*)( lVar41 + lVar32 * 8 ) + 0x10 ) )) goto LAB_001034c8;
         lVar41 = *(long*)( lVar41 + (ulong)uVar36 * 8 );
         local_104 = *(uint*)( lVar41 + 0x20 );
         if (local_104 == 0) {
            local_104 = *(int*)( this + 0x1b0 ) + 1;
            *(uint*)( this + 0x1b0 ) = local_104;
            *(uint*)( lVar41 + 0x20 ) = local_104;
            if (local_104 == 0) {
               iVar21 = 3;
               _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x1e0, "Condition \"!nid\" is true. Returning: ERR_UNCONFIGURED", 0, 0);
               goto LAB_00103db3;
            }

         }

         cVar17 = MultiplayerSpawner::find_spawnable_scene_index_from_object((ObjectID*)param_2);
         MultiplayerSpawner::get_spawn_argument((ObjectID*)local_58);
         local_e0 = 0;
         if (( cVar17 == -1 ) && ( iVar21 = MultiplayerAPI::encode_and_compress_variant((Variant*)local_58, (uchar*)0x0, (int*)&local_e0, false) ),iVar21 != 0) {
            _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x1e9, "Condition \"err\" is true. Returning: err", 0, 0);
            goto LAB_00103d9a;
         }

         local_d0 = (undefined1(*) [16])0x0;
         local_68 = 0;
         local_88 = (undefined1[16])0x0;
         local_78 = (undefined1[16])0x0;
         HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_init_from((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)local_88, (HashSet*)( lVar41 + 0x30 ));
         iVar21 = local_68._4_4_;
         if (local_68._4_4_ != 0) {
            lVar41 = 0;
            pauVar30 = (undefined1(*) [16])0x0;
            uVar15 = local_88._0_8_;
            uVar22 = *(ulong*)local_88._0_8_;
            if (uVar22 == 0) goto LAB_00103ba0;
            goto LAB_0010360e;
         }

         pauVar30 = (undefined1(*) [16])0x0;
         LAB_00103816:local_dc = 0;
         local_b0 = 0;
         local_a0 = (Variant**)0x0;
         if (( local_d0 != (undefined1(*) [16])0x0 ) && ( *(int*)local_d0[1] != 0 )) {
            iVar21 = MultiplayerSynchronizer::get_state((List*)&local_d0, (Object*)param_1, local_b8, local_a8);
            if (iVar21 == 0) {
               if (local_a0 == (Variant**)0x0) {
                  iVar21 = 0;
               }
 else {
                  iVar21 = *(int*)( local_a0 + -1 );
               }

               CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*>*)&local_a0);
               iVar21 = MultiplayerAPI::encode_and_compress_variants(local_a0, iVar21, (uchar*)0x0, &local_dc, (bool*)0x0, false);
               if (iVar21 == 0) goto LAB_0010385b;
               _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x207, "Condition \"err != OK\" is true. Returning: err", "Unable to encode spawn state.", 0, 0);
            }
 else {
               _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x205, "Condition \"err != OK\" is true. Returning: err", "Unable to retrieve spawn state.", 0, 0);
            }

            goto LAB_00103b29;
         }

         LAB_0010385b:uVar35 = SceneCacheInterface::make_object_cache(*(Object**)( this + 0x290 ));
         uVar22 = (ulong)uVar35;
         Node::get_name();
         if (local_c8 == 0) {
            LAB_00103fa0:local_c0 = 0;
         }
 else {
            pcVar26 = *(char**)( local_c8 + 8 );
            local_c0 = 0;
            if (pcVar26 == (char*)0x0) {
               plVar24 = (long*)( *(long*)( local_c8 + 0x10 ) + -0x10 );
               if (*(long*)( local_c8 + 0x10 ) != 0) {
                  while (lVar41 = *plVar24,lVar41 != 0) {
                     LOCK();
                     lVar23 = *plVar24;
                     bVar42 = lVar41 == lVar23;
                     if (bVar42) {
                        *plVar24 = lVar41 + 1;
                        lVar23 = lVar41;
                     }

                     UNLOCK();
                     if (bVar42) {
                        if (lVar23 != -1) {
                           local_c0 = *(undefined8*)( local_c8 + 0x10 );
                           goto LAB_001038d4;
                        }

                        break;
                     }

                  }
;
               }

               goto LAB_00103fa0;
            }

            local_90 = strlen(pcVar26);
            local_98 = pcVar26;
            String::parse_latin1((StrRange*)&local_c0);
         }

         LAB_001038d4:String::utf8();
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_c0);
         if (( StringName::configured != '\0' ) && ( local_c8 != 0 )) {
            StringName::unref();
         }

         pcVar26 = (char*)CharString::get_data();
         if (*pcVar26 == '\0') {
            uVar35 = 1;
         }
 else {
            sVar27 = strlen(pcVar26 + 1);
            uVar35 = (int)sVar27 + 2;
         }

         if (*(long*)( this + 0x2a0 ) == 0) {
            lVar41 = 0;
         }
 else {
            lVar41 = *(long*)( *(long*)( this + 0x2a0 ) + -8 );
         }

         iVar21 = 0x12;
         if (pauVar30 != (undefined1(*) [16])0x0) {
            iVar21 = *(int*)pauVar30[1] * 4 + 0x12;
         }

         iVar21 = iVar21 + uVar35;
         if (cVar17 == -1) {
            iVar21 = iVar21 + 4 + local_e0;
         }

         if (lVar41 < iVar21 + local_dc) {
            CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 0x2a0 ), (long)( iVar21 + local_dc ));
         }

         CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 0x2a0 ));
         puVar4 = *(undefined1**)( this + 0x2a0 );
         *puVar4 = 4;
         pcVar26 = puVar4 + 2;
         puVar4[1] = cVar17;
         pcVar28 = puVar4 + 6;
         do {
            *pcVar26 = (char)uVar22;
            pcVar26 = pcVar26 + 1;
            uVar22 = uVar22 >> 8;
         }
 while ( pcVar26 != pcVar28 );
         pcVar26 = puVar4 + 10;
         do {
            *pcVar28 = (char)local_104;
            pcVar28 = pcVar28 + 1;
            local_104 = local_104 >> 8;
         }
 while ( pcVar28 != pcVar26 );
         uVar36 = 0;
         if (pauVar30 != (undefined1(*) [16])0x0) {
            uVar36 = *(uint*)pauVar30[1];
         }

         pcVar28 = puVar4 + 0xe;
         do {
            *pcVar26 = (char)uVar36;
            pcVar26 = pcVar26 + 1;
            uVar36 = uVar36 >> 8;
         }
 while ( pcVar28 != pcVar26 );
         pcVar26 = puVar4 + 0x12;
         do {
            *pcVar28 = (char)uVar35;
            pcVar28 = pcVar28 + 1;
            uVar35 = uVar35 >> 8;
         }
 while ( pcVar28 != pcVar26 );
         if (( pauVar30 == (undefined1(*) [16])0x0 ) || ( puVar38 = *(uint**)*pauVar30 ),puVar38 == (uint*)0x0) {
            iVar21 = 0x12;
            iVar19 = 0x13;
            pcVar28 = (char*)CharString::get_data();
            cVar18 = *pcVar28;
            if (cVar18 != '\0') goto LAB_00103a51;
            LAB_00103a7f:*pcVar26 = '\0';
         }
 else {
            iVar21 = 0x12;
            do {
               iVar19 = iVar21;
               uVar35 = *puVar38;
               puVar29 = puVar4 + iVar19;
               puVar1 = puVar29 + 4;
               do {
                  *puVar29 = (char)uVar35;
                  puVar29 = puVar29 + 1;
                  uVar35 = uVar35 >> 8;
               }
 while ( puVar29 != puVar1 );
               puVar38 = *(uint**)( puVar38 + 2 );
               iVar21 = iVar19 + 4;
            }
 while ( puVar38 != (uint*)0x0 );
            pcVar28 = (char*)CharString::get_data();
            pcVar26 = puVar4 + iVar21;
            cVar18 = *pcVar28;
            if (cVar18 == '\0') {
               iVar19 = iVar19 + 5;
               goto LAB_00103a7f;
            }

            LAB_00103a51:iVar19 = 0;
            do {
               iVar31 = iVar19;
               if (pcVar26 != (char*)0x0) {
                  *pcVar26 = cVar18;
                  pcVar26 = pcVar26 + 1;
               }

               cVar18 = pcVar28[1];
               pcVar28 = pcVar28 + 1;
               iVar19 = iVar31 + 1;
            }
 while ( cVar18 != '\0' );
            iVar19 = iVar31 + 2 + iVar21;
            if (pcVar26 != (char*)0x0) goto LAB_00103a7f;
         }

         if (cVar17 == -1) {
            puVar29 = puVar4 + iVar19;
            puVar1 = puVar29 + 4;
            uVar35 = local_e0;
            do {
               *puVar29 = (char)uVar35;
               puVar29 = puVar29 + 1;
               uVar35 = uVar35 >> 8;
            }
 while ( puVar29 != puVar1 );
            iVar21 = MultiplayerAPI::encode_and_compress_variant((Variant*)local_58, puVar4 + ( iVar19 + 4 ), (int*)&local_e0, false);
            if (iVar21 == 0) {
               iVar19 = iVar19 + 4 + local_e0;
               goto LAB_00103a8e;
            }

            _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x21f, "Condition \"err\" is true. Returning: err", 0, 0);
         }
 else {
            LAB_00103a8e:if (local_dc != 0) {
               if (local_a0 == (Variant**)0x0) {
                  iVar21 = 0;
               }
 else {
                  iVar21 = *(int*)( local_a0 + -1 );
               }

               CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*>*)&local_a0);
               iVar21 = MultiplayerAPI::encode_and_compress_variants(local_a0, iVar21, puVar4 + iVar19, &local_dc, (bool*)0x0, false);
               if (iVar21 != 0) {
                  _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x225, "Condition \"err\" is true. Returning: err", 0, 0);
                  goto LAB_00103af5;
               }

               iVar19 = iVar19 + local_dc;
            }

            iVar21 = 0;
            *param_3 = iVar19;
         }

         LAB_00103af5:pcVar26 = local_98;
         if (local_98 != (char*)0x0) {
            LOCK();
            plVar24 = (long*)( local_98 + -0x10 );
            *plVar24 = *plVar24 + -1;
            UNLOCK();
            if (*plVar24 == 0) {
               local_98 = (char*)0x0;
               Memory::free_static(pcVar26 + -0x10, false);
            }

         }

         LAB_00103b29:ppVVar14 = local_a0;
         if (local_a0 != (Variant**)0x0) {
            LOCK();
            ppVVar2 = local_a0 + -2;
            *ppVVar2 = *ppVVar2 + -1;
            UNLOCK();
            if (*ppVVar2 == (Variant*)0x0) {
               local_a0 = (Variant**)0x0;
               Memory::free_static(ppVVar14 + -2, false);
            }

         }

         CowData<Variant>::_unref((CowData<Variant>*)&local_b0);
         goto LAB_00103cb8;
      }

   }

   LAB_00103e53:iVar21 = 0x1f;
   _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x1d9, "Parameter \"tnode\" is null.", 0, 0);
   LAB_00103db3:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar21;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_001034c8:uVar40 = uVar40 + 1;
   auVar7._8_8_ = 0;
   auVar7._0_8_ = ( ulong )(uVar36 + 1) * lVar23;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = uVar39;
   lVar32 = SUB168(auVar7 * auVar11, 8);
   uVar35 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar32 * 4 );
   uVar36 = SUB164(auVar7 * auVar11, 8);
   if (( uVar35 == 0 ) || ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar35 * lVar23,auVar12._8_8_ = 0,auVar12._0_8_ = uVar39,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + uVar36 ) - SUB164(auVar8 * auVar12, 8)) * lVar23,auVar13._8_8_ = 0,auVar13._0_8_ = uVar39,SUB164(auVar9 * auVar13, 8) < uVar40) goto LAB_00103e53;
   goto LAB_00103512;
   LAB_0010360e:uVar35 = (uint)uVar22 & 0xffffff;
   if ((uint)ObjectDB::slot_max <= uVar35) {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr");
      goto LAB_00103ba0;
   }

   while (true) {
      uVar33 = (ulong)local_98 >> 8;
      local_98 = (char*)( uVar33 << 8 );
      LOCK();
      bVar42 = (char)ObjectDB::spin_lock == '\0';
      if (bVar42) {
         ObjectDB::spin_lock._0_1_ = '\x01';
      }

      UNLOCK();
      if (bVar42) break;
      local_98 = (char*)( uVar33 << 8 );
      do {} while ( (char)ObjectDB::spin_lock != '\0' );
   }
;
   puVar37 = (ulong*)( (ulong)uVar35 * 0x10 + ObjectDB::object_slots );
   if (( uVar22 >> 0x18 & 0x7fffffffff ) != ( *puVar37 & 0x7fffffffff )) {
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00103ba0;
   }

   uVar22 = puVar37[1];
   ObjectDB::spin_lock._0_1_ = '\0';
   if (uVar22 == 0) goto LAB_00103ba0;
   lVar23 = __dynamic_cast(uVar22, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
   cVar18 = _has_authority((Node*)this);
   if (cVar18 != '\0') {
      if (lVar23 == 0) goto LAB_00103bb2;
      lVar32 = MultiplayerSynchronizer::get_replication_config_ptr();
      if (lVar32 == 0) {
         iVar21 = 0x2f;
         _err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x1f6, "Parameter \"sync->get_replication_config_ptr()\" is null.", 0, 0);
         LAB_00103cb8:local_130 = (List<NodePath,DefaultAllocator>*)&local_d0;
         uVar15 = local_88._0_8_;
         if ((void*)local_88._0_8_ != (void*)0x0) {
            uVar16 = local_78._8_8_;
            if (( local_68._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_68 & 0xffffffff ) * 4 ) != 0 )) {
               memset((void*)local_78._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_68 & 0xffffffff ) * 4 ) * 4);
            }

            Memory::free_static((void*)uVar15, false);
            Memory::free_static((void*)local_78._0_8_, false);
            Memory::free_static((void*)local_88._8_8_, false);
            Memory::free_static((void*)uVar16, false);
         }

         if (pauVar30 != (undefined1(*) [16])0x0) {
            do {
               while (true) {
                  pvVar5 = *(void**)*pauVar30;
                  if (pvVar5 == (void*)0x0) {
                     if (*(int*)pauVar30[1] != 0) {
                        _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                        goto LAB_00103d90;
                     }

                     goto LAB_00103d86;
                  }

                  if (pauVar30 != *(undefined1(**) [16])( (long)pvVar5 + 0x18 )) break;
                  lVar41 = *(long*)( (long)pvVar5 + 8 );
                  lVar23 = *(long*)( (long)pvVar5 + 0x10 );
                  *(long*)*pauVar30 = lVar41;
                  if (pvVar5 == *(void**)( *pauVar30 + 8 )) {
                     *(long*)( *pauVar30 + 8 ) = lVar23;
                  }

                  if (lVar23 != 0) {
                     *(long*)( lVar23 + 8 ) = lVar41;
                     lVar41 = *(long*)( (long)pvVar5 + 8 );
                  }

                  if (lVar41 != 0) {
                     *(long*)( lVar41 + 0x10 ) = lVar23;
                  }

                  Memory::free_static(pvVar5, false);
                  pauVar3 = pauVar30 + 1;
                  *(int*)*pauVar3 = *(int*)*pauVar3 + -1;
                  if (*(int*)*pauVar3 == 0) goto LAB_00103d86;
               }
;
               _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
            }
 while ( *(int*)pauVar30[1] != 0 );
            LAB_00103d86:Memory::free_static(pauVar30, false);
         }

         LAB_00103d90:List<NodePath,DefaultAllocator>::~List(local_130);
         LAB_00103d9a:if (Variant::needs_deinit[local_58[0]] != '\0') {
            Variant::_clear_internal();
         }

         goto LAB_00103db3;
      }

      MultiplayerSynchronizer::get_replication_config_ptr();
      plVar24 = (long*)SceneReplicationConfig::get_spawn_properties();
      if (( (long*)*plVar24 != (long*)0x0 ) && ( pNVar34 = *(NodePath**)*plVar24 ),pNVar34 != (NodePath*)0x0) {
         if (local_d0 == (undefined1(*) [16])0x0) {
            local_d0 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)local_d0[1] = 0;
            *local_d0 = (undefined1[16])0x0;
         }

         do {
            while (true) {
               this_00 = (NodePath*)operator_new(0x20, DefaultAllocator::alloc);
               *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
               *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
               NodePath::operator =(this_00, pNVar34);
               lVar32 = *(long*)( *local_d0 + 8 );
               *(undefined8*)( this_00 + 8 ) = 0;
               *(undefined1(**) [16])( this_00 + 0x18 ) = local_d0;
               *(long*)( this_00 + 0x10 ) = lVar32;
               if (lVar32 != 0) {
                  *(NodePath**)( lVar32 + 8 ) = this_00;
               }

               lVar32 = *(long*)*local_d0;
               *(NodePath**)( *local_d0 + 8 ) = this_00;
               if (lVar32 != 0) break;
               pNVar34 = *(NodePath**)( pNVar34 + 8 );
               *(int*)local_d0[1] = *(int*)local_d0[1] + 1;
               *(NodePath**)*local_d0 = this_00;
               if (pNVar34 == (NodePath*)0x0) goto LAB_001037a4;
            }
;
            pNVar34 = *(NodePath**)( pNVar34 + 8 );
            *(int*)local_d0[1] = *(int*)local_d0[1] + 1;
         }
 while ( pNVar34 != (NodePath*)0x0 );
      }

      LAB_001037a4:iVar19 = MultiplayerSynchronizer::get_net_id();
      if (iVar19 == 0) {
         *(int*)( this + 0x1b0 ) = *(int*)( this + 0x1b0 ) + 1;
         MultiplayerSynchronizer::set_net_id((uint)lVar23);
         uVar20 = MultiplayerSynchronizer::get_net_id();
      }
 else {
         uVar20 = MultiplayerSynchronizer::get_net_id();
      }

      if (pauVar30 == (undefined1(*) [16])0x0) {
         pauVar30 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
         *(undefined4*)pauVar30[1] = 0;
         *pauVar30 = (undefined1[16])0x0;
      }

      puVar25 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
      lVar23 = *(long*)( *pauVar30 + 8 );
      *(undefined8*)( puVar25 + 2 ) = 0;
      *puVar25 = uVar20;
      *(long*)( puVar25 + 4 ) = lVar23;
      *(undefined1(**) [16])( puVar25 + 6 ) = pauVar30;
      if (lVar23 != 0) {
         *(undefined4**)( lVar23 + 8 ) = puVar25;
      }

      lVar23 = *(long*)*pauVar30;
      *(undefined4**)( *pauVar30 + 8 ) = puVar25;
      if (lVar23 == 0) {
         *(undefined4**)*pauVar30 = puVar25;
      }

      *(int*)pauVar30[1] = *(int*)pauVar30[1] + 1;
   }

   while (true) {
      if (iVar21 <= (int)lVar41 + 1) goto LAB_00103816;
      lVar41 = lVar41 + 1;
      uVar22 = *(ulong*)( uVar15 + lVar41 * 8 );
      if (uVar22 != 0) break;
      LAB_00103ba0:cVar18 = _has_authority((Node*)this);
      if (cVar18 != '\0') {
         LAB_00103bb2:_err_print_error("_make_spawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x1f5, "Condition \"!sync\" is true. Continuing.");
      }

   }
;
   goto LAB_0010360e;
}
/* SceneReplicationInterface::_make_despawn_packet(Node*, int&) */undefined8 SceneReplicationInterface::_make_despawn_packet(SceneReplicationInterface *this, Node *param_1, int *param_2) {
   long lVar1;
   long lVar2;
   undefined1 *puVar3;
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   ulong uVar12;
   undefined1 *puVar13;
   uint uVar14;
   uint uVar15;
   long lVar16;
   ulong uVar17;
   ulong uVar18;
   uint uVar19;
   lVar1 = *(long*)( this + 0x1c0 );
   if (( lVar1 != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
      uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
      lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
      uVar12 = *(long*)( param_1 + 0x60 ) * 0x3ffff - 1;
      uVar12 = ( uVar12 ^ uVar12 >> 0x1f ) * 0x15;
      uVar12 = ( uVar12 ^ uVar12 >> 0xb ) * 0x41;
      uVar12 = uVar12 >> 0x16 ^ uVar12;
      uVar17 = uVar12 & 0xffffffff;
      if ((int)uVar12 == 0) {
         uVar17 = 1;
      }

      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar17 * lVar2;
      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar18;
      lVar16 = SUB168(auVar4 * auVar8, 8);
      uVar15 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar16 * 4 );
      uVar14 = SUB164(auVar4 * auVar8, 8);
      if (uVar15 != 0) {
         uVar19 = 0;
         do {
            if (( (uint)uVar17 == uVar15 ) && ( *(long*)( param_1 + 0x60 ) == *(long*)( *(long*)( lVar1 + lVar16 * 8 ) + 0x10 ) )) {
               lVar1 = *(long*)( lVar1 + (ulong)uVar14 * 8 );
               if (( *(long*)( this + 0x2a0 ) == 0 ) || ( *(long*)( *(long*)( this + 0x2a0 ) + -8 ) < 5 )) {
                  CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 0x2a0 ), 5);
               }

               CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 0x2a0 ));
               puVar3 = *(undefined1**)( this + 0x2a0 );
               *puVar3 = 5;
               uVar15 = *(uint*)( lVar1 + 0x20 );
               puVar13 = puVar3 + 1;
               do {
                  *puVar13 = (char)uVar15;
                  puVar13 = puVar13 + 1;
                  uVar15 = uVar15 >> 8;
               }
 while ( puVar13 != puVar3 + 5 );
               *param_2 = 5;
               return 0;
            }

            uVar19 = uVar19 + 1;
            auVar5._8_8_ = 0;
            auVar5._0_8_ = ( ulong )(uVar14 + 1) * lVar2;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar18;
            lVar16 = SUB168(auVar5 * auVar9, 8);
            uVar15 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar16 * 4 );
            uVar14 = SUB164(auVar5 * auVar9, 8);
         }
 while ( ( uVar15 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar15 * lVar2,auVar10._8_8_ = 0,auVar10._0_8_ = uVar18,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + uVar14 ) - SUB164(auVar6 * auVar10, 8)) * lVar2,auVar11._8_8_ = 0,auVar11._0_8_ = uVar18,uVar19 <= SUB164(auVar7 * auVar11, 8) );
      }

   }

   _err_print_error("_make_despawn_packet", "modules/multiplayer/scene_replication_interface.cpp", 0x22f, "Parameter \"tnode\" is null.", 0, 0);
   return 0x1f;
}
/* SceneReplicationInterface::on_despawn(Object*, Variant) */undefined4 SceneReplicationInterface::on_despawn(SceneReplicationInterface *this, long param_1, int *param_3) {
   long lVar1;
   undefined8 *puVar2;
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
   int iVar19;
   Node *pNVar20;
   long lVar21;
   ulong uVar22;
   long lVar23;
   long lVar24;
   long *plVar25;
   ulong uVar26;
   uint uVar27;
   ulong uVar28;
   uint uVar29;
   undefined4 uVar30;
   long in_FS_OFFSET;
   int local_4c;
   long local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( ( param_1 == 0 ) || ( pNVar20 = (Node*)__dynamic_cast(param_1, &Object::typeinfo, &Node::typeinfo, 0) ),pNVar20 == (Node*)0x0 )) {
      _err_print_error("on_despawn", "modules/multiplayer/scene_replication_interface.cpp", 199, "Condition \"!node || p_config.get_type() != Variant::OBJECT\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else {
      lVar21 = Variant::get_validated_object();
      if (( lVar21 == 0 ) || ( lVar21 = __dynamic_cast(lVar21, &Object::typeinfo, &MultiplayerSpawner::typeinfo, 0) ),lVar21 == 0) {
         _err_print_error("on_despawn", "modules/multiplayer/scene_replication_interface.cpp", 0xc9, "Condition \"!p_obj || !spawner\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      }
 else {
         local_4c = 0;
         iVar19 = _make_despawn_packet(this, pNVar20, &local_4c);
         if (iVar19 != 0) {
            uVar30 = 0x2f;
            _err_print_error("on_despawn", "modules/multiplayer/scene_replication_interface.cpp", 0xcd, "Condition \"err != OK\" is true. Returning: ERR_BUG", 0, 0);
            goto LAB_001046fc;
         }

         lVar23 = *(long*)( param_1 + 0x60 );
         plVar25 = *(long**)( this + 0x198 );
         local_48 = lVar23;
         if (plVar25 != (long*)0x0) {
            uVar22 = lVar23 * 0x3ffff - 1;
            uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
            uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
            uVar22 = uVar22 >> 0x16 ^ uVar22;
            uVar26 = uVar22 & 0xffffffff;
            if ((int)uVar22 == 0) {
               uVar26 = 1;
            }

            do {
               if (( plVar25[8] != 0 ) && ( *(int*)( (long)plVar25 + 100 ) != 0 )) {
                  uVar22 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar25 + 0xc ) * 4 ));
                  lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( plVar25 + 0xc ) * 8 );
                  auVar3._8_8_ = 0;
                  auVar3._0_8_ = uVar26 * lVar1;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = uVar22;
                  lVar24 = SUB168(auVar3 * auVar11, 8);
                  uVar27 = *(uint*)( plVar25[0xb] + lVar24 * 4 );
                  iVar19 = SUB164(auVar3 * auVar11, 8);
                  if (uVar27 != 0) {
                     uVar29 = 0;
                     while (( uVar27 != (uint)uVar26 || ( lVar23 != *(long*)( plVar25[8] + ( ulong ) * (uint*)( plVar25[9] + lVar24 * 4 ) * 8 ) ) )) {
                        uVar29 = uVar29 + 1;
                        auVar4._8_8_ = 0;
                        auVar4._0_8_ = ( ulong )(iVar19 + 1) * lVar1;
                        auVar12._8_8_ = 0;
                        auVar12._0_8_ = uVar22;
                        lVar24 = SUB168(auVar4 * auVar12, 8);
                        uVar27 = *(uint*)( plVar25[0xb] + lVar24 * 4 );
                        iVar19 = SUB164(auVar4 * auVar12, 8);
                        if (( uVar27 == 0 ) || ( auVar5._8_8_ = 0 ),auVar5._0_8_ = (ulong)uVar27 * lVar1,auVar13._8_8_ = 0,auVar13._0_8_ = uVar22,auVar6._8_8_ = 0,auVar6._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar25 + 0xc ) * 4 ) + iVar19 ) - SUB164(auVar5 * auVar13, 8)) * lVar1,auVar14._8_8_ = 0,auVar14._0_8_ = uVar22,SUB164(auVar6 * auVar14, 8) < uVar29) goto LAB_00104576;
                     }
;
                     _send_raw(this, *(uchar**)( this + 0x2a0 ), local_4c, (int)plVar25[2], true);
                  }

               }

               LAB_00104576:plVar25 = (long*)*plVar25;
            }
 while ( plVar25 != (long*)0x0 );
         }

         if (( *(long*)( this + 0x1c0 ) != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
            uVar28 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
            lVar1 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
            uVar22 = lVar23 * 0x3ffff - 1;
            uVar22 = ( uVar22 ^ uVar22 >> 0x1f ) * 0x15;
            uVar22 = ( uVar22 ^ uVar22 >> 0xb ) * 0x41;
            uVar22 = uVar22 >> 0x16 ^ uVar22;
            uVar26 = uVar22 & 0xffffffff;
            if ((int)uVar22 == 0) {
               uVar26 = 1;
            }

            auVar7._8_8_ = 0;
            auVar7._0_8_ = uVar26 * lVar1;
            auVar15._8_8_ = 0;
            auVar15._0_8_ = uVar28;
            lVar24 = SUB168(auVar7 * auVar15, 8);
            uVar27 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar24 * 4 );
            iVar19 = SUB164(auVar7 * auVar15, 8);
            if (uVar27 != 0) {
               uVar29 = 0;
               do {
                  if (( (uint)uVar26 == uVar27 ) && ( lVar23 == *(long*)( *(long*)( *(long*)( this + 0x1c0 ) + lVar24 * 8 ) + 0x10 ) )) {
                     lVar23 = _track(this, (ObjectID*)&local_48);
                     if (*(long*)( lVar21 + 0x60 ) == *(long*)( lVar23 + 0x10 )) {
                        *(undefined8*)( lVar23 + 0x10 ) = 0;
                        HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( this + 0x1e8 ), (ObjectID*)&local_48);
                        for (puVar2 = *(undefined8**)( this + 0x198 ); uVar30 = 0,puVar2 != (undefined8*)0x0; puVar2 = (undefined8*)*puVar2) {
                           HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( puVar2 + 8 ), (ObjectID*)&local_48);
                        }

                        goto LAB_001046fc;
                     }

                     _err_print_error("on_despawn", "modules/multiplayer/scene_replication_interface.cpp", 0xd8, "Condition \"tobj.spawner != spawner->get_instance_id()\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
                     goto LAB_00104750;
                  }

                  uVar29 = uVar29 + 1;
                  auVar8._8_8_ = 0;
                  auVar8._0_8_ = ( ulong )(iVar19 + 1) * lVar1;
                  auVar16._8_8_ = 0;
                  auVar16._0_8_ = uVar28;
                  lVar24 = SUB168(auVar8 * auVar16, 8);
                  uVar27 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar24 * 4 );
                  iVar19 = SUB164(auVar8 * auVar16, 8);
               }
 while ( ( uVar27 != 0 ) && ( auVar9._8_8_ = 0 ),auVar9._0_8_ = (ulong)uVar27 * lVar1,auVar17._8_8_ = 0,auVar17._0_8_ = uVar28,auVar10._8_8_ = 0,auVar10._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + iVar19 ) - SUB164(auVar9 * auVar17, 8)) * lVar1,auVar18._8_8_ = 0,auVar18._0_8_ = uVar28,uVar29 <= SUB164(auVar10 * auVar18, 8) );
            }

         }

         _err_print_error("on_despawn", "modules/multiplayer/scene_replication_interface.cpp", 0xd6, "Condition \"!tracked_nodes.has(oid)\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
      }

   }

   LAB_00104750:uVar30 = 0x1f;
   LAB_001046fc:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar30;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneReplicationInterface::_untrack(ObjectID const&) */void SceneReplicationInterface::_untrack(SceneReplicationInterface *this, ObjectID *param_1) {
   undefined8 *puVar1;
   undefined8 *puVar2;
   long *plVar3;
   uint *puVar4;
   long lVar5;
   undefined8 uVar6;
   void *pvVar7;
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
   undefined1 auVar42[16];
   undefined1 auVar43[16];
   uint uVar44;
   ulong uVar45;
   long lVar46;
   int iVar47;
   long lVar48;
   long lVar49;
   ulong uVar50;
   uint uVar51;
   ulong uVar52;
   long *plVar53;
   uint uVar54;
   uint uVar55;
   uint uVar56;
   uint uVar57;
   ulong uVar58;
   uint *puVar59;
   long in_FS_OFFSET;
   uint local_48;
   uint local_44;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( *(long*)( this + 0x1c0 ) != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
      uVar58 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
      lVar46 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
      uVar45 = *(long*)param_1 * 0x3ffff - 1;
      uVar45 = ( uVar45 ^ uVar45 >> 0x1f ) * 0x15;
      uVar45 = ( uVar45 ^ uVar45 >> 0xb ) * 0x41;
      uVar45 = uVar45 >> 0x16 ^ uVar45;
      uVar52 = uVar45 & 0xffffffff;
      if ((int)uVar45 == 0) {
         uVar52 = 1;
      }

      auVar8._8_8_ = 0;
      auVar8._0_8_ = uVar52 * lVar46;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar58;
      lVar48 = SUB168(auVar8 * auVar26, 8);
      uVar54 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar48 * 4 );
      iVar47 = SUB164(auVar8 * auVar26, 8);
      if (uVar54 != 0) {
         uVar57 = 0;
         do {
            if (( (uint)uVar52 == uVar54 ) && ( *(long*)param_1 == *(long*)( *(long*)( *(long*)( this + 0x1c0 ) + lVar48 * 8 ) + 0x10 ) )) {
               lVar46 = HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::operator []((HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>*)( this + 0x1b8 ), param_1);
               uVar54 = *(uint*)( lVar46 + 8 );
               local_48 = uVar54;
               lVar48 = HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::operator []((HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>*)( this + 0x1b8 ), param_1);
               lVar46 = *(long*)( this + 0x1c0 );
               uVar57 = *(uint*)( lVar48 + 0xc );
               if (( lVar46 == 0 ) || ( *(int*)( this + 0x1e4 ) == 0 )) goto LAB_00104c31;
               lVar48 = *(long*)( this + 0x1c8 );
               uVar44 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 );
               lVar5 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
               uVar52 = CONCAT44(0, uVar44);
               uVar45 = *(long*)param_1 * 0x3ffff - 1;
               uVar45 = ( uVar45 ^ uVar45 >> 0x1f ) * 0x15;
               uVar45 = ( uVar45 ^ uVar45 >> 0xb ) * 0x41;
               uVar45 = uVar45 >> 0x16 ^ uVar45;
               uVar58 = uVar45 & 0xffffffff;
               if ((int)uVar45 == 0) {
                  uVar58 = 1;
               }

               auVar12._8_8_ = 0;
               auVar12._0_8_ = uVar58 * lVar5;
               auVar30._8_8_ = 0;
               auVar30._0_8_ = uVar52;
               lVar49 = SUB168(auVar12 * auVar30, 8);
               uVar51 = *(uint*)( lVar48 + lVar49 * 4 );
               uVar56 = SUB164(auVar12 * auVar30, 8);
               if (uVar51 == 0) goto LAB_00104c31;
               uVar55 = 0;
               goto LAB_00104a88;
            }

            uVar57 = uVar57 + 1;
            auVar9._8_8_ = 0;
            auVar9._0_8_ = ( ulong )(iVar47 + 1) * lVar46;
            auVar27._8_8_ = 0;
            auVar27._0_8_ = uVar58;
            lVar48 = SUB168(auVar9 * auVar27, 8);
            uVar54 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar48 * 4 );
            iVar47 = SUB164(auVar9 * auVar27, 8);
         }
 while ( ( uVar54 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar54 * lVar46,auVar28._8_8_ = 0,auVar28._0_8_ = uVar58,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + iVar47 ) - SUB164(auVar10 * auVar28, 8)) * lVar46,auVar29._8_8_ = 0,auVar29._0_8_ = uVar58,uVar57 <= SUB164(auVar11 * auVar29, 8) );
      }

   }

   LAB_00104c64:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   LAB_00104a88:uVar45 = (ulong)uVar56;
   if (( (uint)uVar58 != uVar51 ) || ( *(long*)param_1 != *(long*)( *(long*)( lVar46 + lVar49 * 8 ) + 0x10 ) )) {
      uVar55 = uVar55 + 1;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = ( ulong )(uVar56 + 1) * lVar5;
      auVar31._8_8_ = 0;
      auVar31._0_8_ = uVar52;
      lVar49 = SUB168(auVar13 * auVar31, 8);
      uVar51 = *(uint*)( lVar48 + lVar49 * 4 );
      uVar56 = SUB164(auVar13 * auVar31, 8);
      if (( uVar51 == 0 ) || ( auVar14._8_8_ = 0 ),auVar14._0_8_ = (ulong)uVar51 * lVar5,auVar32._8_8_ = 0,auVar32._0_8_ = uVar52,auVar15._8_8_ = 0,auVar15._0_8_ = ( ulong )(( uVar44 + uVar56 ) - SUB164(auVar14 * auVar32, 8)) * lVar5,auVar33._8_8_ = 0,auVar33._0_8_ = uVar52,SUB164(auVar15 * auVar33, 8) < uVar55) goto LAB_00104c31;
      goto LAB_00104a88;
   }

   auVar16._8_8_ = 0;
   auVar16._0_8_ = ( ulong )(uVar56 + 1) * lVar5;
   auVar34._8_8_ = 0;
   auVar34._0_8_ = uVar52;
   uVar50 = SUB168(auVar16 * auVar34, 8);
   puVar59 = (uint*)( lVar48 + uVar50 * 4 );
   uVar56 = SUB164(auVar16 * auVar34, 8);
   uVar58 = (ulong)uVar56;
   uVar51 = *puVar59;
   if (( uVar51 != 0 ) && ( auVar17._8_8_ = 0 ),auVar17._0_8_ = (ulong)uVar51 * lVar5,auVar35._8_8_ = 0,auVar35._0_8_ = uVar52,auVar18._8_8_ = 0,auVar18._0_8_ = ( ulong )(( uVar56 + uVar44 ) - SUB164(auVar17 * auVar35, 8)) * lVar5,auVar36._8_8_ = 0,auVar36._0_8_ = uVar52,SUB164(auVar18 * auVar36, 8) != 0) {
      while (true) {
         puVar4 = (uint*)( lVar48 + uVar45 * 4 );
         *puVar59 = *puVar4;
         puVar1 = (undefined8*)( lVar46 + uVar50 * 8 );
         *puVar4 = uVar51;
         puVar2 = (undefined8*)( lVar46 + uVar45 * 8 );
         uVar6 = *puVar1;
         *puVar1 = *puVar2;
         *puVar2 = uVar6;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = ( ulong )((int)uVar58 + 1) * lVar5;
         auVar39._8_8_ = 0;
         auVar39._0_8_ = uVar52;
         uVar50 = SUB168(auVar21 * auVar39, 8);
         puVar59 = (uint*)( lVar48 + uVar50 * 4 );
         uVar51 = *puVar59;
         uVar45 = uVar58;
         if (( uVar51 == 0 ) || ( auVar19._8_8_ = 0 ),auVar19._0_8_ = (ulong)uVar51 * lVar5,auVar37._8_8_ = 0,auVar37._0_8_ = uVar52,auVar20._8_8_ = 0,auVar20._0_8_ = ( ulong )(( SUB164(auVar21 * auVar39, 8) + uVar44 ) - SUB164(auVar19 * auVar37, 8)) * lVar5,auVar38._8_8_ = 0,auVar38._0_8_ = uVar52,SUB164(auVar20 * auVar38, 8) == 0) break;
         uVar58 = uVar50 & 0xffffffff;
      }
;
   }

   *(undefined4*)( lVar48 + uVar45 * 4 ) = 0;
   plVar3 = (long*)( lVar46 + uVar45 * 8 );
   plVar53 = (long*)*plVar3;
   if (*(long**)( this + 0x1d0 ) == plVar53) {
      *(long*)( this + 0x1d0 ) = *plVar53;
      plVar53 = (long*)*plVar3;
   }

   if (*(long**)( this + 0x1d8 ) == plVar53) {
      *(long*)( this + 0x1d8 ) = plVar53[1];
      plVar53 = (long*)*plVar3;
   }

   if ((long*)plVar53[1] != (long*)0x0) {
      *(long*)plVar53[1] = *plVar53;
      plVar53 = (long*)*plVar3;
   }

   if (*plVar53 != 0) {
      *(long*)( *plVar53 + 8 ) = plVar53[1];
      plVar53 = (long*)*plVar3;
   }

   pvVar7 = (void*)plVar53[6];
   if (pvVar7 != (void*)0x0) {
      if (*(int*)( (long)plVar53 + 0x54 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar53 + 10 ) * 4 ) != 0) {
            memset((void*)plVar53[9], 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar53 + 10 ) * 4 ) * 4);
         }

         *(undefined4*)( (long)plVar53 + 0x54 ) = 0;
      }

      Memory::free_static(pvVar7, false);
      Memory::free_static((void*)plVar53[8], false);
      Memory::free_static((void*)plVar53[7], false);
      Memory::free_static((void*)plVar53[9], false);
   }

   Memory::free_static(plVar53, false);
   *(undefined8*)( *(long*)( this + 0x1c0 ) + uVar45 * 8 ) = 0;
   *(int*)( this + 0x1e4 ) = *(int*)( this + 0x1e4 ) + -1;
   LAB_00104c31:if (uVar57 != 0) {
      if (( *(long*)( this + 0x188 ) != 0 ) && ( *(int*)( this + 0x1ac ) != 0 )) {
         uVar45 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
         uVar44 = ( uVar57 >> 0x10 ^ uVar57 ) * -0x7a143595;
         uVar44 = ( uVar44 ^ uVar44 >> 0xd ) * -0x3d4d51cb;
         uVar51 = uVar44 ^ uVar44 >> 0x10;
         if (uVar44 == uVar44 >> 0x10) {
            uVar51 = 1;
            uVar52 = uVar45;
         }
 else {
            uVar52 = uVar51 * uVar45;
         }

         uVar58 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ));
         auVar22._8_8_ = 0;
         auVar22._0_8_ = uVar58;
         auVar40._8_8_ = 0;
         auVar40._0_8_ = uVar52;
         lVar46 = SUB168(auVar22 * auVar40, 8);
         uVar44 = *(uint*)( *(long*)( this + 400 ) + lVar46 * 4 );
         iVar47 = SUB164(auVar22 * auVar40, 8);
         if (uVar44 != 0) {
            uVar56 = 0;
            while (( uVar51 != uVar44 || ( uVar57 != *(uint*)( *(long*)( *(long*)( this + 0x188 ) + lVar46 * 8 ) + 0x10 ) ) )) {
               uVar56 = uVar56 + 1;
               auVar23._8_8_ = 0;
               auVar23._0_8_ = ( iVar47 + 1 ) * uVar45;
               auVar41._8_8_ = 0;
               auVar41._0_8_ = uVar58;
               lVar46 = SUB168(auVar23 * auVar41, 8);
               uVar44 = *(uint*)( *(long*)( this + 400 ) + lVar46 * 4 );
               iVar47 = SUB164(auVar23 * auVar41, 8);
               if (( uVar44 == 0 ) || ( auVar24._8_8_ = 0 ),auVar24._0_8_ = uVar44 * uVar45,auVar42._8_8_ = 0,auVar42._0_8_ = uVar58,auVar25._8_8_ = 0,auVar25._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ) + iVar47 ) - SUB164(auVar24 * auVar42, 8) ) * uVar45,auVar43._8_8_ = 0,auVar43._0_8_ = uVar58,SUB164(auVar25 * auVar43, 8) < uVar56) goto LAB_00104daa;
            }
;
            local_44 = uVar57;
            lVar46 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), (int*)&local_44);
            HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::erase((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( lVar46 + 0xb0 ), &local_48);
         }

      }

      LAB_00104daa:if (uVar54 == 0) goto LAB_00104c64;
   }

   for (puVar1 = *(undefined8**)( this + 0x198 ); puVar1 != (undefined8*)0x0; puVar1 = (undefined8*)*puVar1) {
      HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( puVar1 + 8 ), param_1);
   }

   goto LAB_00104c64;
}
/* SceneReplicationInterface::_update_sync_visibility(int, MultiplayerSynchronizer*) */undefined8 SceneReplicationInterface::_update_sync_visibility(SceneReplicationInterface *this, int param_1, MultiplayerSynchronizer *param_2) {
   ObjectID *pOVar1;
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
   char cVar12;
   char cVar13;
   uint uVar14;
   ulong uVar15;
   HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *pHVar16;
   long lVar17;
   undefined8 uVar18;
   ulong uVar19;
   ulong uVar20;
   HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>> *this_00;
   ulong uVar21;
   long lVar22;
   uint uVar23;
   uint uVar24;
   long *plVar25;
   long in_FS_OFFSET;
   long local_b0;
   uint local_98;
   uint local_6c[3];
   ObjectID *local_60;
   ObjectID local_58[24];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_6c[0] = param_1;
   if (param_2 == (MultiplayerSynchronizer*)0x0) {
      _err_print_error("_update_sync_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x159, "Parameter \"p_sync\" is null.", 0, 0);
      uVar18 = 0x2f;
   }
 else {
      cVar12 = _has_authority((Node*)this);
      if (( cVar12 != '\0' ) && ( uVar14 = ( **(code**)( **(long**)( this + 0x288 ) + 0x168 ) )() ),uVar24 = local_6c[0],uVar14 != local_6c[0]) {
         pOVar1 = *(ObjectID**)( param_2 + 0x60 );
         local_60 = pOVar1;
         cVar12 = MultiplayerSynchronizer::is_visible_to((int)param_2);
         if (uVar24 == 0) {
            plVar25 = *(long**)( this + 0x198 );
            if (plVar25 != (long*)0x0) {
               uVar15 = (long)pOVar1 * 0x3ffff - 1;
               uVar15 = ( uVar15 ^ uVar15 >> 0x1f ) * 0x15;
               uVar15 = ( uVar15 ^ uVar15 >> 0xb ) * 0x41;
               uVar15 = uVar15 >> 0x16 ^ uVar15;
               uVar20 = 1;
               if ((int)uVar15 != 0) {
                  uVar20 = uVar15 & 0xffffffff;
               }

               do {
                  if (cVar12 == '\0') {
                     while (true) {
                        cVar13 = MultiplayerSynchronizer::is_visible_to((int)param_2);
                        local_b0 = plVar25[3];
                        if (( local_b0 != 0 ) && ( *(int*)( (long)plVar25 + 0x3c ) != 0 )) {
                           lVar17 = plVar25[6];
                           uVar24 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar25 + 7 ) * 4 );
                           uVar19 = CONCAT44(0, uVar24);
                           lVar22 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( plVar25 + 7 ) * 8 );
                           auVar6._8_8_ = 0;
                           auVar6._0_8_ = uVar20 * lVar22;
                           auVar11._8_8_ = 0;
                           auVar11._0_8_ = uVar19;
                           uVar15 = SUB168(auVar6 * auVar11, 8);
                           uVar14 = *(uint*)( lVar17 + uVar15 * 4 );
                           if (uVar14 != 0) {
                              local_98 = SUB164(auVar6 * auVar11, 8);
                              goto LAB_00104f95;
                           }

                        }

                        if (cVar13 != '\0') break;
                        plVar25 = (long*)*plVar25;
                        if (plVar25 == (long*)0x0) goto LAB_00105080;
                     }
;
                     LAB_001051e2:HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(local_58);
                  }
 else {
                     local_b0 = plVar25[3];
                     if (( local_b0 == 0 ) || ( *(int*)( (long)plVar25 + 0x3c ) == 0 )) goto LAB_001051e2;
                     lVar17 = plVar25[6];
                     uVar24 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( plVar25 + 7 ) * 4 );
                     uVar19 = CONCAT44(0, uVar24);
                     lVar22 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( plVar25 + 7 ) * 8 );
                     auVar2._8_8_ = 0;
                     auVar2._0_8_ = uVar20 * lVar22;
                     auVar7._8_8_ = 0;
                     auVar7._0_8_ = uVar19;
                     uVar15 = SUB168(auVar2 * auVar7, 8);
                     uVar14 = *(uint*)( lVar17 + uVar15 * 4 );
                     local_98 = SUB164(auVar2 * auVar7, 8);
                     cVar13 = cVar12;
                     if (uVar14 == 0) goto LAB_001051e2;
                     LAB_00104f95:uVar23 = 0;
                     uVar21 = (ulong)local_98;
                     do {
                        if (( (uint)uVar20 == uVar14 ) && ( pOVar1 == *(ObjectID**)( local_b0 + ( ulong ) * (uint*)( plVar25[4] + uVar15 * 4 ) * 8 ) )) {
                           if (cVar13 == '\0') {
                              HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( plVar25 + 3 ), (ObjectID*)&local_60);
                              HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::erase((HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>*)( plVar25 + 0xd ), (ObjectID*)&local_60);
                           }

                           goto LAB_0010506b;
                        }

                        uVar23 = uVar23 + 1;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = ( ulong )((int)uVar21 + 1) * lVar22;
                        auVar8._8_8_ = 0;
                        auVar8._0_8_ = uVar19;
                        uVar15 = SUB168(auVar3 * auVar8, 8);
                        uVar14 = *(uint*)( lVar17 + uVar15 * 4 );
                        uVar21 = uVar15 & 0xffffffff;
                     }
 while ( ( uVar14 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar14 * lVar22,auVar9._8_8_ = 0,auVar9._0_8_ = uVar19,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( SUB164(auVar3 * auVar8, 8) + uVar24 ) - SUB164(auVar4 * auVar9, 8)) * lVar22,auVar10._8_8_ = 0,auVar10._0_8_ = uVar19,uVar23 <= SUB164(auVar5 * auVar10, 8) );
                     if (cVar13 != '\0') goto LAB_001051e2;
                  }

                  LAB_0010506b:plVar25 = (long*)*plVar25;
               }
 while ( plVar25 != (long*)0x0 );
            }

         }
 else {
            this_00 = (HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 );
            cVar13 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::_lookup_pos(this_00, (int*)(ulong)uVar24, (uint*)local_58);
            if (cVar13 == '\0') {
               _err_print_error("_update_sync_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x170, "Condition \"!peers_info.has(p_peer)\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
               uVar18 = 0x1f;
               goto LAB_00105082;
            }

            pHVar16 = (HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](this_00, (int*)local_6c);
            cVar13 = HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_lookup_pos(pHVar16, pOVar1, (uint*)local_58);
            if (cVar12 != cVar13) {
               if (cVar12 == '\0') {
                  pHVar16 = (HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](this_00, (int*)local_6c);
                  HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase(pHVar16, (ObjectID*)&local_60);
                  lVar17 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](this_00, (int*)local_6c);
                  HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::erase((HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>*)( lVar17 + 0x50 ), (ObjectID*)&local_60);
               }
 else {
                  HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](this_00, (int*)local_6c);
                  HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(local_58);
               }

            }

         }

      }

      LAB_00105080:uVar18 = 0;
   }

   LAB_00105082:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar18;
}
/* SceneReplicationInterface::on_spawn_receive(int, unsigned char const*, int) */int SceneReplicationInterface::on_spawn_receive(SceneReplicationInterface *this, int param_1, uchar *param_2, int param_3) {
   uchar *puVar1;
   byte *pbVar2;
   HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>> *this_00;
   uchar uVar3;
   undefined4 uVar4;
   void *pvVar5;
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[16];
   undefined1 auVar11[16];
   undefined1 auVar12[16];
   undefined1 auVar13[16];
   byte bVar14;
   char cVar15;
   int iVar16;
   uint uVar17;
   long lVar18;
   NodePath *pNVar19;
   uint *puVar20;
   NodePath *pNVar21;
   undefined1(*pauVar22)[16];
   undefined8 *puVar23;
   undefined1(*pauVar24)[16];
   undefined4 *puVar25;
   ulong uVar26;
   ulong uVar27;
   long lVar28;
   uchar *puVar29;
   undefined4 *puVar30;
   long *plVar31;
   uint uVar32;
   ulong uVar33;
   uint uVar34;
   uint uVar35;
   int iVar36;
   long in_FS_OFFSET;
   bool bVar37;
   String_conflict *local_108;
   uint local_d8;
   int local_bc[2];
   uint local_b4;
   long local_b0;
   undefined8 local_a8;
   long local_a0;
   char *local_98;
   undefined8 local_90;
   Variant *local_88[2];
   int local_78[2];
   undefined1 local_70[16];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_bc[0] = param_1;
   if (param_3 < 0x12) {
      _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x23b, "Condition \"p_buffer_len < 18\" is true. Returning: ERR_INVALID_DATA", "Invalid spawn packet received", 0, 0);
      LAB_00105d8c:iVar16 = 0x1e;
      goto LAB_001058af;
   }

   uVar3 = param_2[1];
   lVar18 = 0;
   do {
      lVar18 = lVar18 + 1;
   }
 while ( lVar18 != 4 );
   lVar18 = SceneCacheInterface::get_cached_object((int)*(undefined8*)( this + 0x290 ), param_1);
   if (( lVar18 == 0 ) || ( pNVar19 = (NodePath*)__dynamic_cast(lVar18, &Object::typeinfo, &MultiplayerSpawner::typeinfo, 0) ),pNVar19 == (NodePath*)0x0) {
      iVar16 = 0x21;
      _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x242, "Parameter \"spawner\" is null.", 0, 0);
      goto LAB_001058af;
   }

   iVar16 = Node::get_multiplayer_authority();
   uVar32 = 0;
   lVar18 = 0;
   if (param_1 != iVar16) {
      iVar16 = 4;
      _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x243, "Condition \"p_from != spawner->get_multiplayer_authority()\" is true. Returning: ERR_UNAUTHORIZED", 0, 0);
      goto LAB_001058af;
   }

   do {
      lVar28 = lVar18 + 6;
      cVar15 = (char)lVar18;
      lVar18 = lVar18 + 1;
      bVar14 = cVar15 * '\b' & 0x1f;
      uVar32 = uVar32 | (uint)param_2[lVar28] << bVar14;
   }
 while ( lVar18 != 4 );
   uVar26 = ( ulong )(uint)(0 << bVar14);
   uVar17 = 0;
   do {
      lVar18 = uVar26 + 10;
      cVar15 = (char)uVar26;
      uVar26 = uVar26 + 1;
      bVar14 = cVar15 * '\b' & 0x1f;
      uVar17 = uVar17 | (uint)param_2[lVar18] << bVar14;
   }
 while ( uVar26 != 4 );
   uVar26 = ( ulong )(uint)(0 << bVar14);
   uVar35 = 0;
   do {
      lVar18 = uVar26 + 0xe;
      cVar15 = (char)uVar26;
      uVar26 = uVar26 + 1;
      uVar35 = uVar35 | (uint)param_2[lVar18] << ( cVar15 * '\b' & 0x1fU );
   }
 while ( uVar26 != 4 );
   local_b4 = uVar32;
   if (param_3 - 0x12U < uVar17 * 4 + uVar35) {
      local_a0 = 0;
      local_90 = 0x28;
      local_98 = "Invalid spawn packet size: %d, wants: %d";
      String::parse_latin1((StrRange*)&local_a0);
      vformat<int,unsigned_int>((String_conflict*)&local_98, (int)(StrRange*)&local_a0, param_3);
      _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x24b, "Condition \"name_len + (sync_len * 4) > uint32_t(p_buffer_len - ofs)\" is true. Returning: ERR_INVALID_DATA", (String_conflict*)&local_98, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
      goto LAB_00105d8c;
   }

   if (uVar17 == 0) {
      pauVar22 = (undefined1(*) [16])0x0;
      iVar36 = 0x12;
   }
 else {
      puVar29 = param_2 + 0x12;
      pauVar22 = (undefined1(*) [16])0x0;
      puVar1 = puVar29 + (ulong)uVar17 * 4;
      do {
         lVar18 = 0;
         uVar34 = 0;
         do {
            pbVar2 = puVar29 + lVar18;
            cVar15 = (char)lVar18;
            lVar18 = lVar18 + 1;
            uVar34 = uVar34 | ( uint ) * pbVar2 << ( cVar15 * '\b' & 0x1fU );
         }
 while ( lVar18 != 4 );
         if (pauVar22 == (undefined1(*) [16])0x0) {
            pauVar22 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
            *(undefined4*)pauVar22[1] = 0;
            *pauVar22 = (undefined1[16])0x0;
         }

         puVar20 = (uint*)operator_new(0x20, DefaultAllocator::alloc);
         lVar18 = *(long*)( *pauVar22 + 8 );
         puVar20[2] = 0;
         puVar20[3] = 0;
         *puVar20 = uVar34;
         *(long*)( puVar20 + 4 ) = lVar18;
         *(undefined1(**) [16])( puVar20 + 6 ) = pauVar22;
         if (lVar18 != 0) {
            *(uint**)( lVar18 + 8 ) = puVar20;
         }

         lVar18 = *(long*)*pauVar22;
         *(uint**)( *pauVar22 + 8 ) = puVar20;
         if (lVar18 == 0) {
            *(uint**)*pauVar22 = puVar20;
         }

         puVar29 = puVar29 + 4;
         *(int*)pauVar22[1] = *(int*)pauVar22[1] + 1;
      }
 while ( puVar29 != puVar1 );
      iVar36 = uVar17 * 4 + 0x12;
   }

   if (uVar35 == 0) {
      iVar16 = 0x1e;
      _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x251, "Condition \"name_len < 1\" is true. Returning: ERR_INVALID_DATA", "Zero spawn name size.", 0, 0);
   }
 else {
      String::utf8((char*)&local_b0, iVar36 + (int)param_2);
      String::validate_node_name();
      cVar15 = String::operator !=((String_conflict*)&local_98, (String_conflict*)&local_b0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
      if (cVar15 == '\0') {
         iVar36 = iVar36 + uVar35;
         MultiplayerSpawner::get_spawn_path();
         pNVar21 = (NodePath*)Node::get_node_or_null(pNVar19);
         NodePath::~NodePath((NodePath*)&local_98);
         if (pNVar21 != (NodePath*)0x0) {
            NodePath::NodePath((NodePath*)&local_98, (String_conflict*)&local_b0);
            cVar15 = Node::has_node(pNVar21);
            NodePath::~NodePath((NodePath*)&local_98);
            if (cVar15 == '\0') {
               if (uVar3 != 0xff) {
                  local_108 = (String_conflict*)MultiplayerSpawner::instantiate_scene((int)pNVar19);
                  LAB_0010569f:if (local_108 == (String_conflict*)0x0) {
                     iVar16 = 4;
                     _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x26d, "Parameter \"node\" is null.", 0, 0);
                  }
 else {
                     Node::set_name(local_108);
                     this_00 = (HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 );
                     cVar15 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::_lookup_pos(this_00, (int*)(ulong)(uint)param_1, (uint*)&local_98);
                     if (cVar15 == '\0') {
                        iVar16 = 2;
                        _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x271, "Condition \"!peers_info.has(p_from)\" is true. Returning: ERR_UNAVAILABLE", 0, 0);
                     }
 else {
                        lVar18 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](this_00, local_bc);
                        if (( *(long*)( lVar18 + 0xb8 ) != 0 ) && ( *(int*)( lVar18 + 0xdc ) != 0 )) {
                           uVar26 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar18 + 0xd8 ) * 8 );
                           uVar17 = ( uVar32 >> 0x10 ^ uVar32 ) * -0x7a143595;
                           uVar17 = ( uVar17 ^ uVar17 >> 0xd ) * -0x3d4d51cb;
                           local_d8 = uVar17 ^ uVar17 >> 0x10;
                           if (uVar17 == uVar17 >> 0x10) {
                              local_d8 = 1;
                              uVar27 = uVar26;
                           }
 else {
                              uVar27 = local_d8 * uVar26;
                           }

                           uVar33 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar18 + 0xd8 ) * 4 ));
                           auVar6._8_8_ = 0;
                           auVar6._0_8_ = uVar33;
                           auVar10._8_8_ = 0;
                           auVar10._0_8_ = uVar27;
                           lVar28 = SUB168(auVar6 * auVar10, 8);
                           uVar17 = *(uint*)( *(long*)( lVar18 + 0xc0 ) + lVar28 * 4 );
                           iVar16 = SUB164(auVar6 * auVar10, 8);
                           if (uVar17 != 0) {
                              uVar35 = 0;
                              do {
                                 if (( local_d8 == uVar17 ) && ( uVar32 == *(uint*)( *(long*)( *(long*)( lVar18 + 0xb8 ) + lVar28 * 8 ) + 0x10 ) )) {
                                    iVar16 = 0x16;
                                    _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x272, "Condition \"peers_info[p_from].recv_nodes.has(net_id)\" is true. Returning: ERR_ALREADY_IN_USE", 0, 0);
                                    goto LAB_00105848;
                                 }

                                 uVar35 = uVar35 + 1;
                                 auVar7._8_8_ = 0;
                                 auVar7._0_8_ = ( iVar16 + 1 ) * uVar26;
                                 auVar11._8_8_ = 0;
                                 auVar11._0_8_ = uVar33;
                                 lVar28 = SUB168(auVar7 * auVar11, 8);
                                 uVar17 = *(uint*)( *(long*)( lVar18 + 0xc0 ) + lVar28 * 4 );
                                 iVar16 = SUB164(auVar7 * auVar11, 8);
                              }
 while ( ( uVar17 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = uVar17 * uVar26,auVar12._8_8_ = 0,auVar12._0_8_ = uVar33,auVar9._8_8_ = 0,auVar9._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar18 + 0xd8 ) * 4 ) + iVar16 ) - SUB164(auVar8 * auVar12, 8) ) * uVar26,auVar13._8_8_ = 0,auVar13._0_8_ = uVar33,uVar35 <= SUB164(auVar9 * auVar13, 8) );
                           }

                        }

                        local_98 = *(char**)( local_108 + 0x60 );
                        lVar18 = _track(this, (ObjectID*)&local_98);
                        *(undefined8*)( lVar18 + 0x10 ) = *(undefined8*)( pNVar19 + 0x60 );
                        *(ulong*)( lVar18 + 8 ) = CONCAT44(param_1, uVar32);
                        lVar18 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](this_00, local_bc);
                        puVar23 = (undefined8*)HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::operator []((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( lVar18 + 0xb0 ), &local_b4);
                        plVar31 = *(long**)( this + 0x280 );
                        *puVar23 = local_98;
                        *(undefined8*)( this + 0x260 ) = *(undefined8*)( local_108 + 0x60 );
                        *(int*)( this + 0x268 ) = param_1;
                        puVar29 = param_2 + iVar36;
                        *(int*)( this + 0x278 ) = param_3 - iVar36;
                        if (param_3 - iVar36 < 1) {
                           puVar29 = (uchar*)0x0;
                        }

                        *(uchar**)( this + 0x270 ) = puVar29;
                        if (plVar31 != (long*)0x0) {
                           do {
                              pvVar5 = (void*)*plVar31;
                              if (pvVar5 == (void*)0x0) goto LAB_00105a13;
                              if (*(long**)( (long)pvVar5 + 0x18 ) == plVar31) {
                                 lVar18 = *(long*)( (long)pvVar5 + 8 );
                                 lVar28 = *(long*)( (long)pvVar5 + 0x10 );
                                 *plVar31 = lVar18;
                                 if (pvVar5 == (void*)plVar31[1]) {
                                    plVar31[1] = lVar28;
                                 }

                                 if (lVar28 != 0) {
                                    *(long*)( lVar28 + 8 ) = lVar18;
                                    lVar18 = *(long*)( (long)pvVar5 + 8 );
                                 }

                                 if (lVar18 != 0) {
                                    *(long*)( lVar18 + 0x10 ) = lVar28;
                                 }

                                 Memory::free_static(pvVar5, false);
                                 *(int*)( plVar31 + 2 ) = (int)plVar31[2] + -1;
                              }
 else {
                                 _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                              }

                              plVar31 = *(long**)( this + 0x280 );
                           }
 while ( (int)plVar31[2] != 0 );
                           Memory::free_static(plVar31, false);
                           *(undefined8*)( this + 0x280 ) = 0;
                        }

                        plVar31 = (long*)0x0;
                        LAB_00105a13:if (( pauVar22 != (undefined1(*) [16])0x0 ) && ( puVar30 = *(undefined4**)*pauVar22 ),puVar30 != (undefined4*)0x0) {
                           if (plVar31 == (long*)0x0) {
                              pauVar24 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                              *(undefined1(**) [16])( this + 0x280 ) = pauVar24;
                              *(undefined4*)pauVar24[1] = 0;
                              *pauVar24 = (undefined1[16])0x0;
                           }

                           do {
                              while (true) {
                                 puVar25 = (undefined4*)operator_new(0x20, DefaultAllocator::alloc);
                                 uVar4 = *puVar30;
                                 *(undefined8*)( puVar25 + 2 ) = 0;
                                 *puVar25 = uVar4;
                                 plVar31 = *(long**)( this + 0x280 );
                                 lVar18 = plVar31[1];
                                 *(long**)( puVar25 + 6 ) = plVar31;
                                 *(long*)( puVar25 + 4 ) = lVar18;
                                 if (lVar18 != 0) {
                                    *(undefined4**)( lVar18 + 8 ) = puVar25;
                                 }

                                 plVar31[1] = (long)puVar25;
                                 if (*plVar31 == 0) break;
                                 puVar30 = *(undefined4**)( puVar30 + 2 );
                                 *(int*)( plVar31 + 2 ) = (int)plVar31[2] + 1;
                                 if (puVar30 == (undefined4*)0x0) goto LAB_00105abe;
                              }
;
                              puVar30 = *(undefined4**)( puVar30 + 2 );
                              *(int*)( plVar31 + 2 ) = (int)plVar31[2] + 1;
                              *plVar31 = (long)puVar25;
                           }
 while ( puVar30 != (undefined4*)0x0 );
                        }

                        LAB_00105abe:Node::add_child(pNVar21, local_108, 0, 0);
                        if ((on_spawn_receive(int,unsigned_char_const*,int)::{lambda()
                        #1
                        sname == '\0') &&
                   (iVar16 = __cxa_guard_acquire(&on_spawn_receive(int,unsigned_char_const*,int)::
                                                  {lambda()
                        #1
                        {
                           _scs_create((char*)&on_spawn_receive, (int, unsigned_char_const, *, int)::{lambda()#1}, ::operator()()::sname,true;
                           __cxa_atexit(StringName::~StringName, &on_spawn_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::
                                operator()()::sname,&__dso_handle);
                           __cxa_guard_release (&on_spawn_receive(int,unsigned_char_const*,int)::{lambda()#1}
                                       ::operator()()::sname);
                        }

                        Variant::Variant((Variant*)local_78, (Object*)local_108);
                        local_58 = (undefined1[16])0x0;
                        local_60 = 0;
                        local_88[0] = (Variant*)local_78;
                        ( **(code**)( *(long*)pNVar19 + 0xd0 ) )(pNVar19, &on_spawn_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::
                                    operator()()::sname,local_88,1);
                        if (Variant::needs_deinit[(int)local_60] != '\0') {
                           Variant::_clear_internal();
                        }

                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        plVar31 = *(long**)( this + 0x280 );
                        iVar16 = 0;
                        *(undefined8*)( this + 0x260 ) = 0;
                        *(undefined4*)( this + 0x268 ) = 0;
                        *(undefined8*)( this + 0x270 ) = 0;
                        *(undefined4*)( this + 0x278 ) = 0;
                        if (( plVar31 != (long*)0x0 ) && ( (int)plVar31[2] != 0 )) {
                           do {
                              pvVar5 = (void*)*plVar31;
                              if (pvVar5 == (void*)0x0) goto LAB_00105c27;
                              if (*(long**)( (long)pvVar5 + 0x18 ) == plVar31) {
                                 lVar18 = *(long*)( (long)pvVar5 + 8 );
                                 lVar28 = *(long*)( (long)pvVar5 + 0x10 );
                                 *plVar31 = lVar18;
                                 if (pvVar5 == (void*)plVar31[1]) {
                                    plVar31[1] = lVar28;
                                 }

                                 if (lVar28 != 0) {
                                    *(long*)( lVar28 + 8 ) = lVar18;
                                    lVar18 = *(long*)( (long)pvVar5 + 8 );
                                 }

                                 if (lVar18 != 0) {
                                    *(long*)( lVar18 + 0x10 ) = lVar28;
                                 }

                                 Memory::free_static(pvVar5, false);
                                 *(int*)( plVar31 + 2 ) = (int)plVar31[2] + -1;
                              }
 else {
                                 _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
                              }

                              plVar31 = *(long**)( this + 0x280 );
                           }
 while ( (int)plVar31[2] != 0 );
                           Memory::free_static(plVar31, false);
                           *(undefined8*)( this + 0x280 ) = 0;
                           LAB_00105c27:_err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x28a, "Method/function failed. Returning: ERR_INVALID_DATA", 0, 0);
                           goto LAB_00105fb5;
                        }

                     }

                  }

                  goto LAB_00105848;
               }

               if (param_3 - iVar36 < 4) {
                  _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x260, "Condition \"p_buffer_len - ofs < 4\" is true. Returning: ERR_INVALID_DATA", 0, 0);
               }
 else {
                  lVar18 = 0;
                  uVar17 = 0;
                  do {
                     lVar28 = lVar18 + iVar36;
                     cVar15 = (char)lVar18;
                     lVar18 = lVar18 + 1;
                     uVar17 = uVar17 | (uint)param_2[lVar28] << ( cVar15 * '\b' & 0x1fU );
                  }
 while ( lVar18 != 4 );
                  iVar36 = iVar36 + 4;
                  if (uVar17 <= ( uint )(param_3 - iVar36)) {
                     local_78[0] = 0;
                     local_78[1] = 0;
                     local_70 = (undefined1[16])0x0;
                     iVar16 = MultiplayerAPI::decode_and_decompress_variant((Variant*)local_78, param_2 + iVar36, uVar17, (int*)0x0, false);
                     if (iVar16 != 0) {
                        _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x266, "Condition \"err != OK\" is true. Returning: err", 0, 0);
                        if (Variant::needs_deinit[local_78[0]] != '\0') {
                           Variant::_clear_internal();
                        }

                        goto LAB_00105848;
                     }

                     iVar36 = iVar36 + uVar17;
                     local_108 = (String_conflict*)MultiplayerSpawner::instantiate_custom((Variant*)pNVar19);
                     if (Variant::needs_deinit[local_78[0]] != '\0') {
                        Variant::_clear_internal();
                     }

                     goto LAB_0010569f;
                  }

                  _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x263, "Condition \"arg_size > uint32_t(p_buffer_len - ofs)\" is true. Returning: ERR_INVALID_DATA", 0, 0);
               }

            }
 else {
               _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x25b, "Condition \"parent->has_node(name)\" is true. Returning: ERR_INVALID_DATA", 0, 0);
            }

            goto LAB_00105fb5;
         }

         iVar16 = 3;
         _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x25a, "Parameter \"parent\" is null.", 0, 0);
      }
 else {
         local_a0 = 0;
         plVar31 = (long*)( local_b0 + -0x10 );
         if (local_b0 != 0) {
            do {
               lVar18 = *plVar31;
               if (lVar18 == 0) goto LAB_00105f1e;
               LOCK();
               lVar28 = *plVar31;
               bVar37 = lVar18 == lVar28;
               if (bVar37) {
                  *plVar31 = lVar18 + 1;
                  lVar28 = lVar18;
               }

               UNLOCK();
            }
 while ( !bVar37 );
            if (lVar28 != -1) {
               local_a0 = local_b0;
            }

         }

         LAB_00105f1e:local_a8 = 0;
         local_98 = "Invalid node name received: \'%s\'. Make sure to add nodes via \'add_child(node, true)\' remotely.";
         local_90 = 0x5e;
         String::parse_latin1((StrRange*)&local_a8);
         vformat<String>((String_conflict*)&local_98, (StrRange*)&local_a8, (CowData<char32_t>*)&local_a0);
         _err_print_error("on_spawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x255, "Condition \"name.validate_node_name() != name\" is true. Returning: ERR_INVALID_DATA", (String_conflict*)&local_98, 0, 0);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_98);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a8);
         CowData<char32_t>::_unref((CowData<char32_t>*)&local_a0);
         LAB_00105fb5:iVar16 = 0x1e;
      }

      LAB_00105848:CowData<char32_t>::_unref((CowData<char32_t>*)&local_b0);
   }

   if (pauVar22 != (undefined1(*) [16])0x0) {
      do {
         while (true) {
            pvVar5 = *(void**)*pauVar22;
            if (pvVar5 == (void*)0x0) {
               if (*(int*)pauVar22[1] != 0) {
                  _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
                  goto LAB_001058af;
               }

               goto LAB_001058a5;
            }

            if (*(undefined1(**) [16])( (long)pvVar5 + 0x18 ) != pauVar22) break;
            lVar18 = *(long*)( (long)pvVar5 + 8 );
            lVar28 = *(long*)( (long)pvVar5 + 0x10 );
            *(long*)*pauVar22 = lVar18;
            if (pvVar5 == *(void**)( *pauVar22 + 8 )) {
               *(long*)( *pauVar22 + 8 ) = lVar28;
            }

            if (lVar28 != 0) {
               *(long*)( lVar28 + 8 ) = lVar18;
               lVar18 = *(long*)( (long)pvVar5 + 8 );
            }

            if (lVar18 != 0) {
               *(long*)( lVar18 + 0x10 ) = lVar28;
            }

            Memory::free_static(pvVar5, false);
            pauVar24 = pauVar22 + 1;
            *(int*)*pauVar24 = *(int*)*pauVar24 + -1;
            if (*(int*)*pauVar24 == 0) goto LAB_001058a5;
         }
;
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }
 while ( *(int*)pauVar22[1] != 0 );
      LAB_001058a5:Memory::free_static(pauVar22, false);
   }

   LAB_001058af:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return iVar16;
}
/* SceneReplicationInterface::on_despawn_receive(int, unsigned char const*, int) */undefined8 SceneReplicationInterface::on_despawn_receive(SceneReplicationInterface *this, int param_1, uchar *param_2, int param_3) {
   undefined1 auVar1[16];
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
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined1 auVar24[16];
   char cVar25;
   uint uVar26;
   int iVar27;
   long lVar28;
   ulong *puVar29;
   Object *pOVar30;
   ulong uVar31;
   long *plVar32;
   Node *pNVar33;
   undefined8 uVar34;
   ulong uVar35;
   long lVar36;
   uint uVar37;
   uint uVar38;
   uint uVar39;
   ulong uVar40;
   long in_FS_OFFSET;
   bool bVar41;
   int local_9c;
   undefined1 local_95;
   uint local_94;
   ulong local_90;
   Variant *local_88[2];
   int local_78[6];
   undefined8 local_60;
   undefined1 local_58[16];
   long local_40;
   uVar37 = 0;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   lVar28 = 0;
   local_9c = param_1;
   if (param_3 < 5) {
      _err_print_error("on_despawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x290, "Condition \"p_buffer_len < 5\" is true. Returning: ERR_INVALID_DATA", "Invalid spawn packet received", 0, 0);
      uVar34 = 0x1e;
      goto LAB_0010674a;
   }

   do {
      lVar36 = lVar28 + 1;
      cVar25 = (char)lVar28;
      lVar28 = lVar28 + 1;
      uVar37 = uVar37 | (uint)param_2[lVar36] << ( cVar25 * '\b' & 0x1fU );
   }
 while ( lVar28 != 4 );
   local_94 = uVar37;
   if (( *(long*)( this + 0x188 ) != 0 ) && ( *(int*)( this + 0x1ac ) != 0 )) {
      uVar35 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ));
      uVar31 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
      uVar26 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
      uVar26 = ( uVar26 ^ uVar26 >> 0xd ) * -0x3d4d51cb;
      uVar38 = uVar26 ^ uVar26 >> 0x10;
      if (uVar26 == uVar26 >> 0x10) {
         uVar38 = 1;
         uVar40 = uVar31;
      }
 else {
         uVar40 = uVar38 * uVar31;
      }

      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar35;
      auVar13._8_8_ = 0;
      auVar13._0_8_ = uVar40;
      lVar28 = SUB168(auVar1 * auVar13, 8);
      uVar26 = *(uint*)( *(long*)( this + 400 ) + lVar28 * 4 );
      iVar27 = SUB164(auVar1 * auVar13, 8);
      if (uVar26 != 0) {
         uVar39 = 0;
         do {
            if (( uVar26 == uVar38 ) && ( param_1 == *(int*)( *(long*)( *(long*)( this + 0x188 ) + lVar28 * 8 ) + 0x10 ) )) {
               lVar28 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), &local_9c);
               if (( *(long*)( lVar28 + 0xb8 ) == 0 ) || ( *(int*)( lVar28 + 0xdc ) == 0 )) goto LAB_00106878;
               uVar31 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar28 + 0xd8 ) * 8 );
               uVar26 = ( uVar37 >> 0x10 ^ uVar37 ) * -0x7a143595;
               uVar26 = ( uVar26 ^ uVar26 >> 0xd ) * -0x3d4d51cb;
               uVar38 = uVar26 ^ uVar26 >> 0x10;
               if (uVar26 == uVar26 >> 0x10) {
                  uVar38 = 1;
                  uVar35 = uVar31;
               }
 else {
                  uVar35 = uVar38 * uVar31;
               }

               uVar40 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar28 + 0xd8 ) * 4 ));
               auVar5._8_8_ = 0;
               auVar5._0_8_ = uVar40;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar35;
               lVar36 = SUB168(auVar5 * auVar17, 8);
               uVar26 = *(uint*)( *(long*)( lVar28 + 0xc0 ) + lVar36 * 4 );
               iVar27 = SUB164(auVar5 * auVar17, 8);
               if (uVar26 == 0) goto LAB_00106878;
               uVar39 = 0;
               goto LAB_001063e1;
            }

            uVar39 = uVar39 + 1;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = ( iVar27 + 1 ) * uVar31;
            auVar14._8_8_ = 0;
            auVar14._0_8_ = uVar35;
            lVar28 = SUB168(auVar2 * auVar14, 8);
            uVar26 = *(uint*)( *(long*)( this + 400 ) + lVar28 * 4 );
            iVar27 = SUB164(auVar2 * auVar14, 8);
         }
 while ( ( uVar26 != 0 ) && ( auVar3._8_8_ = 0 ),auVar3._0_8_ = uVar26 * uVar31,auVar15._8_8_ = 0,auVar15._0_8_ = uVar35,auVar4._8_8_ = 0,auVar4._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ) + iVar27 ) - SUB164(auVar3 * auVar15, 8) ) * uVar31,auVar16._8_8_ = 0,auVar16._0_8_ = uVar35,uVar39 <= SUB164(auVar4 * auVar16, 8) );
      }

   }

   _err_print_error("on_despawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x296, "Condition \"!peers_info.has(p_from)\" is true. Returning: ERR_UNAUTHORIZED", 0, 0);
   goto LAB_001067d5;
   LAB_00106430:while (true) {
      uVar35 = local_90 >> 8;
      local_90 = uVar35 << 8;
      LOCK();
      bVar41 = (char)ObjectDB::spin_lock == '\0';
      if (bVar41) {
         ObjectDB::spin_lock._0_1_ = '\x01';
      }

      UNLOCK();
      if (bVar41) break;
      local_90 = uVar35 << 8;
      do {} while ( (char)ObjectDB::spin_lock != '\0' );
   }
;
   puVar29 = (ulong*)( (ulong)uVar37 * 0x10 + ObjectDB::object_slots );
   if (( uVar31 >> 0x18 & 0x7fffffffff ) == ( *puVar29 & 0x7fffffffff )) {
      uVar31 = puVar29[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (( uVar31 == 0 ) || ( pOVar30 = (Object*)__dynamic_cast(uVar31, &Object::typeinfo, &Node::typeinfo, 0) ),pOVar30 == (Object*)0x0) goto LAB_001068c7;
      HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::erase((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( lVar28 + 0xb0 ), &local_94);
      local_90 = *(ulong*)( pOVar30 + 0x60 );
      if (( *(long*)( this + 0x1c0 ) != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
         uVar35 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
         lVar28 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
         uVar31 = local_90 * 0x3ffff - 1;
         uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;
         uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;
         uVar31 = uVar31 >> 0x16 ^ uVar31;
         uVar40 = uVar31 & 0xffffffff;
         if ((int)uVar31 == 0) {
            uVar40 = 1;
         }

         auVar9._8_8_ = 0;
         auVar9._0_8_ = uVar40 * lVar28;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar35;
         lVar36 = SUB168(auVar9 * auVar21, 8);
         uVar37 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar36 * 4 );
         iVar27 = SUB164(auVar9 * auVar21, 8);
         if (uVar37 != 0) {
            uVar26 = 0;
            do {
               if (( (uint)uVar40 == uVar37 ) && ( local_90 == *(ulong*)( *(long*)( *(long*)( this + 0x1c0 ) + lVar36 * 8 ) + 0x10 ) )) {
                  lVar28 = HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::operator []((HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>*)( this + 0x1b8 ), (ObjectID*)&local_90);
                  uVar31 = *(ulong*)( lVar28 + 0x10 );
                  if (uVar31 == 0) goto LAB_0010694c;
                  uVar37 = (uint)uVar31 & 0xffffff;
                  if (uVar37 < (uint)ObjectDB::slot_max) goto LAB_00106620;
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  goto LAB_0010694c;
               }

               uVar26 = uVar26 + 1;
               auVar10._8_8_ = 0;
               auVar10._0_8_ = ( ulong )(iVar27 + 1) * lVar28;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar35;
               lVar36 = SUB168(auVar10 * auVar22, 8);
               uVar37 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar36 * 4 );
               iVar27 = SUB164(auVar10 * auVar22, 8);
            }
 while ( ( uVar37 != 0 ) && ( auVar11._8_8_ = 0 ),auVar11._0_8_ = (ulong)uVar37 * lVar28,auVar23._8_8_ = 0,auVar23._0_8_ = uVar35,auVar12._8_8_ = 0,auVar12._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + iVar27 ) - SUB164(auVar11 * auVar23, 8)) * lVar28,auVar24._8_8_ = 0,auVar24._0_8_ = uVar35,uVar26 <= SUB164(auVar12 * auVar24, 8) );
         }

      }

      _err_print_error("on_despawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x29e, "Condition \"!tracked_nodes.has(oid)\" is true. Returning: ERR_BUG", 0, 0);
   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
      LAB_001068c7:_err_print_error("on_despawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x29a, "Parameter \"node\" is null.", 0, 0);
   }

   uVar34 = 0x2f;
   goto LAB_0010674a;
   LAB_00106620:while (true) {
      local_95 = 0;
      LOCK();
      bVar41 = (char)ObjectDB::spin_lock == '\0';
      if (bVar41) {
         ObjectDB::spin_lock._0_1_ = '\x01';
      }

      UNLOCK();
      if (bVar41) break;
      do {} while ( (char)ObjectDB::spin_lock != '\0' );
   }
;
   puVar29 = (ulong*)( (ulong)uVar37 * 0x10 + ObjectDB::object_slots );
   if (( uVar31 >> 0x18 & 0x7fffffffff ) == ( *puVar29 & 0x7fffffffff )) {
      uVar31 = puVar29[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (( uVar31 != 0 ) && ( plVar32 = (long*)__dynamic_cast(uVar31, &Object::typeinfo, &MultiplayerSpawner::typeinfo, 0) ),plVar32 != (long*)0x0) {
         iVar27 = Node::get_multiplayer_authority();
         if (iVar27 == local_9c) {
            lVar28 = Node::get_parent();
            if (lVar28 != 0) {
               pNVar33 = (Node*)Node::get_parent();
               Node::remove_child(pNVar33);
            }

            Node::queue_free();
            if ((on_despawn_receive(int,unsigned_char_const*,int)::{lambda()
            #1
            '\0') &&
           (iVar27 = __cxa_guard_acquire(&on_despawn_receive(int,unsigned_char_const*,int)::
                                          {lambda()
            #1
            _scs_create((char*)&on_despawn_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::
                               operator()()::sname,true);
            __cxa_atexit(StringName::~StringName, &on_despawn_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
            __cxa_guard_release (&on_despawn_receive(int,unsigned_char_const*,int)::{lambda()#1}::
                               operator()()::sname);
         }

         Variant::Variant((Variant*)local_78, pOVar30);
         local_58 = (undefined1[16])0x0;
         local_60 = 0;
         local_88[0] = (Variant*)local_78;
         ( **(code**)( *plVar32 + 0xd0 ) )(plVar32, &on_despawn_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::
                            operator()()::sname,local_88,1);
         if (Variant::needs_deinit[(int)local_60] != '\0') {
            Variant::_clear_internal();
         }

         if (Variant::needs_deinit[local_78[0]] != '\0') {
            Variant::_clear_internal();
         }

         uVar34 = 0;
         goto LAB_0010674a;
      }

      _err_print_error("on_despawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x2a1, "Condition \"p_from != spawner->get_multiplayer_authority()\" is true. Returning: ERR_UNAUTHORIZED", 0, 0);
      goto LAB_001067d5;
   }

}
else{ObjectDB::spin_lock._0_1_ = '\0';};LAB_0010694c:_err_print_error("on_despawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x2a0, "Parameter \"spawner\" is null.", 0, 0);uVar34 = 0x21;goto LAB_0010674a;while (true) {
   uVar39 = uVar39 + 1;
   auVar6._8_8_ = 0;
   auVar6._0_8_ = ( iVar27 + 1 ) * uVar31;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar40;
   lVar36 = SUB168(auVar6 * auVar18, 8);
   uVar26 = *(uint*)( *(long*)( lVar28 + 0xc0 ) + lVar36 * 4 );
   iVar27 = SUB164(auVar6 * auVar18, 8);
   if (( uVar26 == 0 ) || ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar26 * uVar31,auVar19._8_8_ = 0,auVar19._0_8_ = uVar40,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar28 + 0xd8 ) * 4 ) + iVar27 ) - SUB164(auVar7 * auVar19, 8) ) * uVar31,auVar20._8_8_ = 0,auVar20._0_8_ = uVar40,SUB164(auVar8 * auVar20, 8) < uVar39) break;
   LAB_001063e1:if (( uVar38 == uVar26 ) && ( uVar37 == *(uint*)( *(long*)( *(long*)( lVar28 + 0xb8 ) + lVar36 * 8 ) + 0x10 ) )) {
      puVar29 = (ulong*)HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::operator []((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( lVar28 + 0xb0 ), &local_94);
      uVar31 = *puVar29;
      if (uVar31 == 0) goto LAB_001068c7;
      uVar37 = (uint)uVar31 & 0xffffff;
      if (uVar37 < (uint)ObjectDB::slot_max) goto LAB_00106430;
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      goto LAB_001068c7;
   }

}
;LAB_00106878:_err_print_error("on_despawn_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x298, "Condition \"!pinfo.recv_nodes.has(net_id)\" is true. Returning: ERR_UNAUTHORIZED", 0, 0);LAB_001067d5:uVar34 = 4;LAB_0010674a:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return uVar34;}/* SceneReplicationInterface::_find_synchronizer(int, unsigned int) */undefined8 SceneReplicationInterface::_find_synchronizer(SceneReplicationInterface *this, int param_1, uint param_2) {
   undefined1 auVar1[16];
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   uint uVar9;
   long lVar10;
   ulong *puVar11;
   ulong uVar12;
   undefined8 uVar13;
   int iVar14;
   ulong uVar15;
   long lVar16;
   uint uVar17;
   ulong uVar18;
   uint uVar19;
   long in_FS_OFFSET;
   bool bVar20;
   uint local_50;
   int local_4c[2];
   undefined1 local_41;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_50 = param_2;
   local_4c[0] = param_1;
   if ((int)param_2 < 0) {
      uVar12 = SceneCacheInterface::get_cached_object((int)*(undefined8*)( this + 0x290 ), param_1);
      goto joined_r0x00106c0a;
   }

   lVar10 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), local_4c);
   if (( *(long*)( lVar10 + 0x88 ) != 0 ) && ( *(int*)( lVar10 + 0xac ) != 0 )) {
      uVar12 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( lVar10 + 0xa8 ) * 8 );
      uVar9 = ( param_2 >> 0x10 ^ param_2 ) * -0x7a143595;
      uVar9 = ( uVar9 ^ uVar9 >> 0xd ) * -0x3d4d51cb;
      uVar17 = uVar9 ^ uVar9 >> 0x10;
      if (uVar9 == uVar9 >> 0x10) {
         uVar17 = 1;
         uVar15 = uVar12;
      }
 else {
         uVar15 = uVar17 * uVar12;
      }

      uVar18 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar10 + 0xa8 ) * 4 ));
      auVar1._8_8_ = 0;
      auVar1._0_8_ = uVar18;
      auVar5._8_8_ = 0;
      auVar5._0_8_ = uVar15;
      lVar16 = SUB168(auVar1 * auVar5, 8);
      uVar9 = *(uint*)( *(long*)( lVar10 + 0x90 ) + lVar16 * 4 );
      iVar14 = SUB164(auVar1 * auVar5, 8);
      if (uVar9 != 0) {
         uVar19 = 0;
         while (( uVar17 != uVar9 || ( param_2 != *(uint*)( *(long*)( *(long*)( lVar10 + 0x88 ) + lVar16 * 8 ) + 0x10 ) ) )) {
            uVar19 = uVar19 + 1;
            auVar2._8_8_ = 0;
            auVar2._0_8_ = ( iVar14 + 1 ) * uVar12;
            auVar6._8_8_ = 0;
            auVar6._0_8_ = uVar18;
            lVar16 = SUB168(auVar2 * auVar6, 8);
            uVar9 = *(uint*)( *(long*)( lVar10 + 0x90 ) + lVar16 * 4 );
            iVar14 = SUB164(auVar2 * auVar6, 8);
            if (( uVar9 == 0 ) || ( auVar3._8_8_ = 0 ),auVar3._0_8_ = uVar9 * uVar12,auVar7._8_8_ = 0,auVar7._0_8_ = uVar18,auVar4._8_8_ = 0,auVar4._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( lVar10 + 0xa8 ) * 4 ) + iVar14 ) - SUB164(auVar3 * auVar7, 8) ) * uVar12,auVar8._8_8_ = 0,auVar8._0_8_ = uVar18,SUB164(auVar4 * auVar8, 8) < uVar19) goto LAB_00106bd1;
         }
;
         lVar10 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), local_4c);
         puVar11 = (ulong*)HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::operator []((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( lVar10 + 0x80 ), &local_50);
         uVar12 = *puVar11;
         if (uVar12 != 0) {
            uVar9 = (uint)uVar12 & 0xffffff;
            if (uVar9 < (uint)ObjectDB::slot_max) goto LAB_00106b88;
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            uVar13 = 0;
            goto LAB_00106c21;
         }

      }

   }

   goto LAB_00106bd1;
   LAB_00106b88:while (true) {
      local_41 = 0;
      LOCK();
      bVar20 = (char)ObjectDB::spin_lock == '\0';
      if (bVar20) {
         ObjectDB::spin_lock._0_1_ = '\x01';
      }

      UNLOCK();
      if (bVar20) break;
      do {} while ( (char)ObjectDB::spin_lock != '\0' );
   }
;
   puVar11 = (ulong*)( (ulong)uVar9 * 0x10 + ObjectDB::object_slots );
   if (( uVar12 >> 0x18 & 0x7fffffffff ) != ( *puVar11 & 0x7fffffffff )) {
      uVar13 = 0;
      ObjectDB::spin_lock._0_1_ = '\0';
      goto LAB_00106c21;
   }

   uVar12 = puVar11[1];
   ObjectDB::spin_lock._0_1_ = '\0';
   joined_r0x00106c0a:if (uVar12 != 0) {
      uVar13 = __dynamic_cast(uVar12, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
      goto LAB_00106c21;
   }

   LAB_00106bd1:uVar13 = 0;
   LAB_00106c21:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar13;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneReplicationInterface::on_delta_receive(int, unsigned char const*, int) */int SceneReplicationInterface::on_delta_receive(SceneReplicationInterface *this, int param_1, uchar *param_2, int param_3) {
   long lVar1;
   char cVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   Object *pOVar6;
   int iVar7;
   int iVar8;
   uint uVar9;
   uint uVar10;
   long in_FS_OFFSET;
   uint local_9c;
   long local_98;
   long local_90;
   long local_88;
   Array local_80[8];
   Vector local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (0x11 < param_3) {
      iVar8 = 0x11;
      iVar3 = 1;
      do {
         lVar4 = 0;
         uVar9 = 0;
         do {
            lVar1 = lVar4 + iVar3;
            cVar2 = (char)lVar4;
            lVar4 = lVar4 + 1;
            uVar9 = uVar9 | (uint)param_2[lVar1] << ( cVar2 * '\b' & 0x1fU );
         }
 while ( lVar4 != 4 );
         iVar7 = 0;
         do {
            iVar7 = iVar7 + 8;
         }
 while ( iVar7 != 0x40 );
         lVar4 = 0;
         uVar10 = 0;
         do {
            lVar1 = lVar4 + ( iVar3 + 0xc );
            cVar2 = (char)lVar4;
            lVar4 = lVar4 + 1;
            uVar10 = uVar10 | (uint)param_2[lVar1] << ( cVar2 * '\b' & 0x1fU );
         }
 while ( lVar4 != 4 );
         if (( uint )(param_3 - iVar8) < uVar10) {
            _err_print_error("on_delta_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x309, "Condition \"size > uint32_t(p_buffer_len - ofs)\" is true. Returning: ERR_INVALID_DATA", 0, 0);
            iVar3 = 0x1e;
            goto LAB_00106ffb;
         }

         plVar5 = (long*)_find_synchronizer(this, param_1, uVar9);
         if (plVar5 == (long*)0x0) {
            LAB_00106f70:_err_print_error("on_delta_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x30e, "Condition \"true\" is true. Continuing.", "Ignoring delta for non-authority or invalid synchronizer.", 0, 0);
         }
 else {
            pOVar6 = (Object*)MultiplayerSynchronizer::get_root_node();
            iVar3 = Node::get_multiplayer_authority();
            if (( iVar3 != param_1 ) || ( pOVar6 == (Object*)0x0 )) goto LAB_00106f70;
            MultiplayerSynchronizer::get_delta_properties(( ulong ) & local_98);
            if (( local_98 == 0 ) || ( *(int*)( local_98 + 0x10 ) == 0 )) {
               _err_print_error("on_delta_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x311, "Condition \"props.is_empty()\" is true. Returning: ERR_INVALID_DATA", 0, 0);
               iVar3 = 0x1e;
               LAB_00107193:List<NodePath,DefaultAllocator>::~List((List<NodePath,DefaultAllocator>*)&local_98);
               goto LAB_00106ffb;
            }

            local_70 = 0;
            CowData<Variant>::resize<false>((CowData<Variant>*)&local_70, (long)*(int*)( local_98 + 0x10 ));
            local_9c = 0;
            iVar3 = MultiplayerAPI::decode_and_decompress_variants(local_78, param_2 + iVar8, uVar10, (int*)&local_9c, false, false);
            if (iVar3 != 0) {
               _err_print_error("on_delta_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x316, "Condition \"err != OK\" is true. Returning: err", 0, 0);
               LAB_001071d6:CowData<Variant>::_unref((CowData<Variant>*)&local_70);
               goto LAB_00107193;
            }

            if (local_9c != uVar10) {
               _err_print_error("on_delta_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x317, "Condition \"uint32_t(consumed) != size\" is true. Returning: ERR_INVALID_DATA", 0, 0);
               iVar3 = 0x1e;
               goto LAB_001071d6;
            }

            iVar3 = MultiplayerSynchronizer::set_state((List*)&local_98, pOVar6, local_78);
            if (iVar3 != 0) {
               _err_print_error("on_delta_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x319, "Condition \"err != OK\" is true. Returning: err", 0, 0);
               goto LAB_001071d6;
            }

            if (on_delta_receive(int,unsigned_char_const*,int) ::{lambda();
            #1
            '\0')
            {
               iVar3 = __cxa_guard_acquire(&on_delta_receive, (int, unsigned_char_const, *, int)::{lambda()#1}, ::operator()();
               if (iVar3 != 0) {
                  _scs_create((char*)&on_delta_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::
                                 operator()()::sname,true);
                  __cxa_atexit(StringName::~StringName, &on_delta_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::operator()()::sname,&__dso_handle);
                  __cxa_guard_release (&on_delta_receive(int,unsigned_char_const*,int)::{lambda()#1}::
                                 operator()()::sname);
               }

            }

            local_58[0] = 0;
            local_58[1] = 0;
            local_50 = (undefined1[16])0x0;
            ( **(code**)( *plVar5 + 0xd0 ) )(plVar5, &on_delta_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::
                           operator()()::sname,0,0);
            if (Variant::needs_deinit[local_58[0]] != '\0') {
               Variant::_clear_internal();
            }

            lVar4 = plVar5[0xc];
            local_90 = 0;
            local_68 = "delta_in";
            local_60 = 8;
            String::parse_latin1((StrRange*)&local_90);
            local_88 = lVar4;
            StringName::StringName((StringName*)&local_68, "multiplayer:replication", false);
            cVar2 = EngineDebugger::is_profiling((StringName*)&local_68);
            if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
               StringName::unref();
            }

            if (cVar2 != '\0') {
               Array::Array(local_80);
               Variant::Variant((Variant*)local_58, (String_conflict*)&local_90);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Variant::Variant((Variant*)local_58, (ObjectID*)&local_88);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               Variant::Variant((Variant*)local_58, uVar10);
               Array::push_back((Variant*)local_80);
               if (Variant::needs_deinit[local_58[0]] != '\0') {
                  Variant::_clear_internal();
               }

               StringName::StringName((StringName*)&local_68, "multiplayer:replication", false);
               EngineDebugger::profiler_add_frame_data((StringName*)&local_68, local_80);
               if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                  StringName::unref();
               }

               Array::~Array(local_80);
            }

            lVar4 = local_90;
            if (local_90 != 0) {
               LOCK();
               plVar5 = (long*)( local_90 + -0x10 );
               *plVar5 = *plVar5 + -1;
               UNLOCK();
               if (*plVar5 == 0) {
                  local_90 = 0;
                  Memory::free_static((void*)( lVar4 + -0x10 ), false);
               }

            }

            CowData<Variant>::_unref((CowData<Variant>*)&local_70);
            List<NodePath,DefaultAllocator>::~List((List<NodePath,DefaultAllocator>*)&local_98);
         }

         iVar3 = iVar8 + uVar10;
         iVar8 = iVar3 + 0x10;
      }
 while ( iVar8 < param_3 );
   }

   iVar3 = 0;
   LAB_00106ffb:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar3;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneReplicationInterface::on_sync_receive(int, unsigned char const*, int) */ulong SceneReplicationInterface::on_sync_receive(SceneReplicationInterface *this, int param_1, uchar *param_2, int param_3) {
   long lVar1;
   char cVar2;
   int iVar3;
   long lVar4;
   long *plVar5;
   Object *pOVar6;
   long *plVar7;
   NodePath *this_00;
   NodePath *pNVar8;
   uint uVar9;
   uint uVar10;
   ulong uVar11;
   int iVar12;
   long in_FS_OFFSET;
   List<NodePath,DefaultAllocator> *local_c8;
   int local_9c;
   undefined1(*local_98)[16];
   undefined8 local_90;
   long local_88;
   Array local_80[8];
   Vector local_78[8];
   undefined8 local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[2];
   undefined1 local_50[16];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 < 0xb) {
      uVar11 = 0x1e;
      _err_print_error("on_sync_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x359, "Condition \"p_buffer_len < 11\" is true. Returning: ERR_INVALID_DATA", "Invalid sync packet received", 0, 0);
   }
 else {
      if (( *param_2 & 0x10 ) != 0) {
         if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
            uVar11 = on_delta_receive(this, param_1, param_2, param_3);
            return uVar11;
         }

         goto LAB_00107938;
      }

      iVar12 = 0xb;
      if (param_3 != 0xb) {
         iVar3 = 3;
         do {
            lVar4 = 0;
            uVar9 = 0;
            do {
               lVar1 = lVar4 + iVar3;
               cVar2 = (char)lVar4;
               lVar4 = lVar4 + 1;
               uVar9 = uVar9 | (uint)param_2[lVar1] << ( cVar2 * '\b' & 0x1fU );
            }
 while ( lVar4 != 4 );
            lVar4 = 0;
            uVar10 = 0;
            do {
               lVar1 = lVar4 + ( iVar3 + 4 );
               cVar2 = (char)lVar4;
               lVar4 = lVar4 + 1;
               uVar10 = uVar10 | (uint)param_2[lVar1] << ( cVar2 * '\b' & 0x1fU );
            }
 while ( lVar4 != 4 );
            if (( uint )(param_3 - iVar12) < uVar10) {
               uVar11 = 0x1e;
               _err_print_error("on_sync_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x365, "Condition \"size > uint32_t(p_buffer_len - ofs)\" is true. Returning: ERR_INVALID_DATA", 0, 0);
               goto LAB_0010769b;
            }

            plVar5 = (long*)_find_synchronizer(this, param_1, uVar9);
            if (plVar5 != (long*)0x0) {
               pOVar6 = (Object*)MultiplayerSynchronizer::get_root_node();
               iVar3 = Node::get_multiplayer_authority();
               if (( pOVar6 == (Object*)0x0 ) || ( iVar3 != param_1 )) {
                  _err_print_error("on_sync_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x370, "Condition \"true\" is true. Continuing.", "Ignoring sync data from non-authority or for missing node.", 0, 0);
               }
 else {
                  cVar2 = MultiplayerSynchronizer::update_inbound_sync_time((ushort)plVar5);
                  if (cVar2 != '\0') {
                     MultiplayerSynchronizer::get_replication_config_ptr();
                     plVar7 = (long*)SceneReplicationConfig::get_sync_properties();
                     local_98 = (undefined1(*) [16])0x0;
                     if (( (long*)*plVar7 == (long*)0x0 ) || ( pNVar8 = *(NodePath**)*plVar7 ),pNVar8 == (NodePath*)0x0) {
                        lVar4 = 0;
                     }
 else {
                        local_98 = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                        *(undefined4*)local_98[1] = 0;
                        *local_98 = (undefined1[16])0x0;
                        do {
                           this_00 = (NodePath*)operator_new(0x20, DefaultAllocator::alloc);
                           *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
                           *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
                           NodePath::operator =(this_00, pNVar8);
                           lVar4 = *(long*)( *local_98 + 8 );
                           *(undefined8*)( this_00 + 8 ) = 0;
                           *(undefined1(**) [16])( this_00 + 0x18 ) = local_98;
                           *(long*)( this_00 + 0x10 ) = lVar4;
                           if (lVar4 != 0) {
                              *(NodePath**)( lVar4 + 8 ) = this_00;
                           }

                           lVar4 = *(long*)*local_98;
                           *(NodePath**)( *local_98 + 8 ) = this_00;
                           if (lVar4 == 0) {
                              *(NodePath**)*local_98 = this_00;
                           }

                           pNVar8 = *(NodePath**)( pNVar8 + 8 );
                           iVar3 = *(int*)local_98[1] + 1;
                           *(int*)local_98[1] = iVar3;
                        }
 while ( pNVar8 != (NodePath*)0x0 );
                        lVar4 = (long)iVar3;
                     }

                     local_70 = 0;
                     CowData<Variant>::resize<false>((CowData<Variant>*)&local_70, lVar4);
                     uVar9 = MultiplayerAPI::decode_and_decompress_variants(local_78, param_2 + iVar12, uVar10, &local_9c, false, false);
                     if (uVar9 == 0) {
                        uVar9 = MultiplayerSynchronizer::set_state((List*)&local_98, pOVar6, local_78);
                        if (uVar9 == 0) {
                           if ((on_sync_receive(int,unsigned_char_const*,int)::{lambda()
                           #1
                           sname == '\0') &&
                     (iVar3 = __cxa_guard_acquire(&on_sync_receive(int,unsigned_char_const*,int)::
                                                   {lambda()
                           #1
                           {
                              _scs_create((char*)&on_sync_receive, (int, unsigned_char_const, *, int)::{lambda()#1}, ::operator()()::sname,true;
                              __cxa_atexit(StringName::~StringName, &on_sync_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::
                                  operator()()::sname,&__dso_handle);
                              __cxa_guard_release (&on_sync_receive(int,unsigned_char_const*,int)::{lambda()#1}
                                         ::operator()()::sname);
                           }

                           local_58[0] = 0;
                           local_58[1] = 0;
                           local_50 = (undefined1[16])0x0;
                           ( **(code**)( *plVar5 + 0xd0 ) )(plVar5, &on_sync_receive, (int, unsigned_char_const, *, int)::{lambda()#1}::
                                     operator()()::sname,0,0);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           lVar4 = plVar5[0xc];
                           local_90 = 0;
                           local_68 = "sync_in";
                           local_60 = 7;
                           String::parse_latin1((StrRange*)&local_90);
                           local_88 = lVar4;
                           StringName::StringName((StringName*)&local_68, "multiplayer:replication", false);
                           cVar2 = EngineDebugger::is_profiling((StringName*)&local_68);
                           if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                              StringName::unref();
                           }

                           if (cVar2 != '\0') {
                              Array::Array(local_80);
                              Variant::Variant((Variant*)local_58, (String_conflict*)&local_90);
                              Array::push_back((Variant*)local_80);
                              if (Variant::needs_deinit[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              Variant::Variant((Variant*)local_58, (ObjectID*)&local_88);
                              Array::push_back((Variant*)local_80);
                              if (Variant::needs_deinit[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              Variant::Variant((Variant*)local_58, uVar10);
                              Array::push_back((Variant*)local_80);
                              if (Variant::needs_deinit[local_58[0]] != '\0') {
                                 Variant::_clear_internal();
                              }

                              StringName::StringName((StringName*)&local_68, "multiplayer:replication", false);
                              EngineDebugger::profiler_add_frame_data((StringName*)&local_68, local_80);
                              if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                                 StringName::unref();
                              }

                              Array::~Array(local_80);
                           }

                           CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                           CowData<Variant>::_unref((CowData<Variant>*)&local_70);
                           List<NodePath,DefaultAllocator>::~List((List<NodePath,DefaultAllocator>*)&local_98);
                           goto LAB_0010749c;
                        }

                        _err_print_error("on_sync_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x37e, "Condition \"err\" is true. Returning: err", 0, 0);
                     }
 else {
                        _err_print_error("on_sync_receive", "modules/multiplayer/scene_replication_interface.cpp", 0x37c, "Condition \"err\" is true. Returning: err", 0, 0);
                     }

                     local_c8 = (List<NodePath,DefaultAllocator>*)&local_98;
                     uVar11 = (ulong)uVar9;
                     CowData<Variant>::_unref((CowData<Variant>*)&local_70);
                     List<NodePath,DefaultAllocator>::~List(local_c8);
                     goto LAB_0010769b;
                  }

               }

            }

            LAB_0010749c:iVar3 = iVar12 + uVar10;
            iVar12 = iVar3 + 8;
         }
 while ( iVar12 < param_3 );
      }

      uVar11 = 0;
   }

   LAB_0010769b:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar11;
   }

   LAB_00107938:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SceneReplicationInterface::on_replication_start(Object*, Variant) */int SceneReplicationInterface::on_replication_start(SceneReplicationInterface *this, long param_1, int *param_3) {
   code *pcVar1;
   uint *puVar2;
   long lVar3;
   undefined8 uVar4;
   char cVar5;
   uint uVar6;
   int iVar7;
   Object *pOVar8;
   long lVar9;
   MultiplayerSynchronizer *pMVar10;
   undefined8 *puVar11;
   long *plVar12;
   NodePath *this_00;
   NodePath *pNVar13;
   long in_FS_OFFSET;
   uint local_7c;
   undefined8 local_78;
   int local_70[2];
   undefined1(*local_68[2])[16];
   char *local_58;
   undefined8 local_50[2];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_1 == 0) {
      LAB_00107b70:_err_print_error("on_replication_start", "modules/multiplayer/scene_replication_interface.cpp", 0xe3, "Condition \"!node || p_config.get_type() != Variant::OBJECT\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
   }
 else {
      pOVar8 = (Object*)__dynamic_cast(param_1, &Object::typeinfo, &Node::typeinfo, 0);
      if (( pOVar8 == (Object*)0x0 ) || ( *param_3 != 0x18 )) goto LAB_00107b70;
      lVar9 = Variant::get_validated_object();
      if (lVar9 != 0) {
         pMVar10 = (MultiplayerSynchronizer*)__dynamic_cast(lVar9, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
         if (pMVar10 != (MultiplayerSynchronizer*)0x0) {
            local_58 = *(char**)( param_1 + 0x60 );
            _track(this, (ObjectID*)&local_58);
            local_78 = *(undefined8*)( pMVar10 + 0x60 );
            HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert((ObjectID*)&local_58);
            HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert((ObjectID*)&local_58);
            pcVar1 = *(code**)( *(long*)pMVar10 + 0x108 );
            create_custom_callable_function_pointer<SceneReplicationInterface,int,ObjectID>((SceneReplicationInterface*)local_68, (char*)this, (_func_void_int_ObjectID*)"&SceneReplicationInterface::_visibility_changed");
            Callable::bind<ObjectID>((ObjectID*)&local_58, (SceneReplicationInterface*)local_68, *(undefined8*)( pMVar10 + 0x60 ));
            ( *pcVar1 )(pMVar10, SceneStringNames::singleton + 0x18, (ObjectID*)&local_58, 0);
            Callable::~Callable((Callable*)&local_58);
            Callable::~Callable((Callable*)local_68);
            _update_sync_visibility(this, 0, pMVar10);
            if (*(long*)( param_1 + 0x60 ) == *(long*)( this + 0x260 )) {
               uVar6 = Node::get_multiplayer_authority();
               if (uVar6 == *(uint*)( this + 0x268 )) {
                  plVar12 = *(long**)( this + 0x280 );
                  if (( plVar12 == (long*)0x0 ) || ( (int)plVar12[2] == 0 )) {
                     Node::get_path();
                     local_58 = "The MultiplayerSynchronizer at path \"%s\" is unable to process the pending spawn since it has no network ID. This might happen when changing the multiplayer authority during the \"_ready\" callback. Make sure to only change the authority of multiplayer synchronizers during \"_enter_tree\" or the \"_spawn_custom\" callback of their multiplayer spawner.";
                     local_68[0] = (undefined1(*) [16])0x0;
                     local_50[0] = 0x15a;
                     String::parse_latin1((StrRange*)local_68);
                     vformat<NodePath>((ObjectID*)&local_58, (SceneReplicationInterface*)local_68, (NodePath*)local_70);
                     _err_print_error("on_replication_start", "modules/multiplayer/scene_replication_interface.cpp", 0xf3, "Condition \"pending_sync_net_ids.is_empty()\" is true. Returning: ERR_INVALID_DATA", (ObjectID*)&local_58, 0, 0);
                     CowData<char32_t>::_unref((CowData<char32_t>*)&local_58);
                     CowData<char32_t>::_unref((CowData<char32_t>*)local_68);
                     NodePath::~NodePath((NodePath*)local_70);
                  }
 else {
                     cVar5 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::_lookup_pos((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), (int*)(ulong)uVar6, (uint*)&local_58);
                     if (cVar5 != '\0') {
                        puVar2 = (uint*)*plVar12;
                        local_7c = *puVar2;
                        if (plVar12 == *(long**)( puVar2 + 6 )) {
                           lVar9 = *(long*)( puVar2 + 2 );
                           lVar3 = *(long*)( puVar2 + 4 );
                           *plVar12 = lVar9;
                           if (puVar2 == (uint*)plVar12[1]) {
                              plVar12[1] = lVar3;
                           }

                           if (lVar3 != 0) {
                              *(long*)( lVar3 + 8 ) = lVar9;
                              lVar9 = *(long*)( puVar2 + 2 );
                           }

                           if (lVar9 != 0) {
                              *(long*)( lVar9 + 0x10 ) = lVar3;
                           }

                           Memory::free_static(puVar2, false);
                           *(int*)( plVar12 + 2 ) = (int)plVar12[2] + -1;
                        }
 else {
                           _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false");
                        }

                        if (*(int*)( (long)*(void**)( this + 0x280 ) + 0x10 ) == 0) {
                           Memory::free_static(*(void**)( this + 0x280 ), false);
                           *(undefined8*)( this + 0x280 ) = 0;
                        }

                        uVar4 = *(undefined8*)( pMVar10 + 0x60 );
                        lVar9 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), (int*)( this + 0x268 ));
                        puVar11 = (undefined8*)HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::operator []((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( lVar9 + 0x80 ), &local_7c);
                        *puVar11 = uVar4;
                        MultiplayerSynchronizer::set_net_id((uint)pMVar10);
                        if (*(int*)( this + 0x278 ) < 1) goto LAB_00107aa4;
                        lVar9 = MultiplayerSynchronizer::get_replication_config_ptr();
                        if (lVar9 == 0) {
                           _err_print_error("on_replication_start", "modules/multiplayer/scene_replication_interface.cpp", 0xfc, "Condition \"!node || !sync->get_replication_config_ptr()\" is true. Returning: ERR_UNCONFIGURED", 0, 0);
                           iVar7 = 3;
                           goto LAB_00107b9a;
                        }

                        local_70[0] = 0;
                        MultiplayerSynchronizer::get_replication_config_ptr();
                        plVar12 = (long*)SceneReplicationConfig::get_spawn_properties();
                        local_68[0] = (undefined1(*) [16])0x0;
                        if (( (long*)*plVar12 == (long*)0x0 ) || ( pNVar13 = *(NodePath**)*plVar12 ),pNVar13 == (NodePath*)0x0) {
                           lVar9 = 0;
                        }
 else {
                           local_68[0] = (undefined1(*) [16])operator_new(0x18, DefaultAllocator::alloc);
                           *(undefined4*)local_68[0][1] = 0;
                           *local_68[0] = (undefined1[16])0x0;
                           do {
                              this_00 = (NodePath*)operator_new(0x20, DefaultAllocator::alloc);
                              *(undefined1(*) [16])this_00 = (undefined1[16])0x0;
                              *(undefined1(*) [16])( this_00 + 0x10 ) = (undefined1[16])0x0;
                              NodePath::operator =(this_00, pNVar13);
                              lVar9 = *(long*)( *local_68[0] + 8 );
                              *(undefined1(**) [16])( this_00 + 0x18 ) = local_68[0];
                              *(undefined8*)( this_00 + 8 ) = 0;
                              *(long*)( this_00 + 0x10 ) = lVar9;
                              if (lVar9 != 0) {
                                 *(NodePath**)( lVar9 + 8 ) = this_00;
                              }

                              lVar9 = *(long*)*local_68[0];
                              *(NodePath**)( *local_68[0] + 8 ) = this_00;
                              if (lVar9 == 0) {
                                 *(NodePath**)*local_68[0] = this_00;
                              }

                              pNVar13 = *(NodePath**)( pNVar13 + 8 );
                              iVar7 = *(int*)local_68[0][1] + 1;
                              *(int*)local_68[0][1] = iVar7;
                           }
 while ( pNVar13 != (NodePath*)0x0 );
                           lVar9 = (long)iVar7;
                        }

                        local_50[0] = 0;
                        CowData<Variant>::resize<false>((CowData<Variant>*)local_50, lVar9);
                        iVar7 = MultiplayerAPI::decode_and_decompress_variants((Vector*)&local_58, *(uchar**)( this + 0x270 ), *(int*)( this + 0x278 ), local_70, false, false);
                        if (iVar7 == 0) {
                           if (0 < local_70[0]) {
                              *(int*)( this + 0x278 ) = *(int*)( this + 0x278 ) - local_70[0];
                              *(long*)( this + 0x270 ) = *(long*)( this + 0x270 ) + (long)local_70[0];
                              iVar7 = MultiplayerSynchronizer::set_state((List*)local_68, pOVar8, (Vector*)&local_58);
                              if (iVar7 != 0) {
                                 _err_print_error("on_replication_start", "modules/multiplayer/scene_replication_interface.cpp", 0x107, "Condition \"err\" is true. Returning: err", 0, 0);
                                 goto LAB_00107edc;
                              }

                           }

                           CowData<Variant>::_unref((CowData<Variant>*)local_50);
                           List<NodePath,DefaultAllocator>::~List((List<NodePath,DefaultAllocator>*)local_68);
                           iVar7 = 0;
                        }
 else {
                           _err_print_error("on_replication_start", "modules/multiplayer/scene_replication_interface.cpp", 0x102, "Condition \"err\" is true. Returning: err", 0, 0);
                           LAB_00107edc:CowData<Variant>::_unref((CowData<Variant>*)local_50);
                           List<NodePath,DefaultAllocator>::~List((List<NodePath,DefaultAllocator>*)local_68);
                        }

                        goto LAB_00107b9a;
                     }

                     _err_print_error("on_replication_start", "modules/multiplayer/scene_replication_interface.cpp", 0xf4, "Condition \"!peers_info.has(pending_spawn_remote)\" is true. Returning: ERR_INVALID_DATA", 0, 0);
                  }

                  iVar7 = 0x1e;
                  goto LAB_00107b9a;
               }

            }

            LAB_00107aa4:iVar7 = 0;
            goto LAB_00107b9a;
         }

      }

      _err_print_error("on_replication_start", "modules/multiplayer/scene_replication_interface.cpp", 0xe5, "Parameter \"sync\" is null.", 0, 0);
   }

   iVar7 = 0x1f;
   LAB_00107b9a:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return iVar7;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* SceneReplicationInterface::_update_spawn_visibility(int, ObjectID const&) */undefined8 SceneReplicationInterface::_update_spawn_visibility(SceneReplicationInterface *this, int param_1, ObjectID *param_2) {
   HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>> *this_00;
   HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>> *this_01;
   undefined1 auVar1[16];
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
   undefined1 auVar18[16];
   undefined1 auVar19[16];
   undefined1 auVar20[16];
   undefined1 auVar21[16];
   undefined1 auVar22[16];
   undefined1 auVar23[16];
   undefined8 uVar24;
   undefined8 uVar25;
   int iVar26;
   void *pvVar27;
   undefined1 auVar28[15];
   char cVar29;
   char cVar30;
   uint uVar31;
   ulong *puVar32;
   Node *pNVar33;
   long lVar34;
   long lVar35;
   uint uVar36;
   int iVar37;
   ulong uVar38;
   void *pvVar39;
   ulong uVar40;
   ulong uVar41;
   uint uVar42;
   uint uVar43;
   undefined8 uVar44;
   ObjectID *pOVar45;
   long *plVar46;
   long in_FS_OFFSET;
   bool bVar47;
   MultiplayerSpawner *local_128;
   long local_120;
   uint local_ec[2];
   int local_e4;
   uint local_e0;
   int local_dc;
   uint local_d8[4];
   undefined1 local_c8[16];
   undefined1 local_b8[16];
   undefined8 local_a8;
   undefined1 local_98[16];
   undefined1 local_88[16];
   undefined8 local_78;
   undefined1 local_68[4];
   undefined1 auStack_64[12];
   undefined1 local_58[16];
   undefined8 local_48;
   long local_40;
   this_00 = (HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>*)( this + 0x1b8 );
   pOVar45 = *(ObjectID**)param_2;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   auVar17._12_4_ = 0;
   auVar17._0_12_ = auStack_64;
   _local_68 = auVar17 << 0x20;
   local_ec[0] = param_1;
   cVar29 = HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::_lookup_pos(this_00, pOVar45, (uint*)local_68);
   if (cVar29 == '\0') {
      _err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x180, "Parameter \"tnode\" is null.", 0, 0);
      goto LAB_0010854f;
   }

   local_128 = (MultiplayerSpawner*)0x0;
   uVar40 = *(ulong*)( *(long*)( *(long*)( this + 0x1c0 ) + (ulong)(uint)local_68 * 8 ) + 0x28 );
   if (uVar40 != 0) {
      uVar36 = (uint)uVar40 & 0xffffff;
      if (uVar36 < (uint)ObjectDB::slot_max) {
         while (true) {
            auVar28 = stack0xffffffffffffff99;
            auVar18[0xf] = 0;
            auVar18._0_15_ = stack0xffffffffffffff99;
            _local_68 = auVar18 << 8;
            LOCK();
            bVar47 = (char)ObjectDB::spin_lock == '\0';
            if (bVar47) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar47) break;
            auVar22[0xf] = 0;
            auVar22._0_15_ = auVar28;
            _local_68 = auVar22 << 8;
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar32 = (ulong*)( (ulong)uVar36 * 0x10 + ObjectDB::object_slots );
         if (( uVar40 >> 0x18 & 0x7fffffffff ) == ( *puVar32 & 0x7fffffffff )) {
            local_128 = (MultiplayerSpawner*)puVar32[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (local_128 != (MultiplayerSpawner*)0x0) {
               local_128 = (MultiplayerSpawner*)__dynamic_cast(local_128, &Object::typeinfo, &MultiplayerSpawner::typeinfo, 0);
            }

            pOVar45 = *(ObjectID**)param_2;
         }
 else {
            ObjectDB::spin_lock._0_1_ = '\0';
            local_128 = (MultiplayerSpawner*)0x0;
            pOVar45 = *(ObjectID**)param_2;
         }

      }
 else {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         pOVar45 = *(ObjectID**)param_2;
      }

   }

   if (pOVar45 == (ObjectID*)0x0) {
      LAB_00108b4f:_err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x183, "Parameter \"node\" is null.", 0, 0);
   }
 else {
      uVar36 = (uint)pOVar45 & 0xffffff;
      if ((uint)ObjectDB::slot_max <= uVar36) {
         _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
         goto LAB_00108b4f;
      }

      while (true) {
         auVar28 = stack0xffffffffffffff99;
         auVar19[0xf] = 0;
         auVar19._0_15_ = stack0xffffffffffffff99;
         _local_68 = auVar19 << 8;
         LOCK();
         bVar47 = (char)ObjectDB::spin_lock == '\0';
         if (bVar47) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar47) break;
         auVar21[0xf] = 0;
         auVar21._0_15_ = auVar28;
         _local_68 = auVar21 << 8;
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar32 = (ulong*)( (ulong)uVar36 * 0x10 + ObjectDB::object_slots );
      if (( (ulong)pOVar45 >> 0x18 & 0x7fffffffff ) != ( *puVar32 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_00108b4f;
      }

      uVar40 = puVar32[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (( uVar40 == 0 ) || ( pNVar33 = (Node*)__dynamic_cast(uVar40, &Object::typeinfo, &Node::typeinfo, 0) ),pNVar33 == (Node*)0x0) goto LAB_00108b4f;
      if (local_128 == (MultiplayerSpawner*)0x0) {
         _err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x184, "Parameter \"spawner\" is null.", 0, 0);
      }
 else {
         cVar29 = _has_authority((Node*)this);
         if (cVar29 == '\0') {
            _err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x185, "Condition \"!_has_authority(spawner)\" is true. Returning: ERR_BUG", 0, 0);
         }
 else {
            cVar29 = HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::_lookup_pos(this_00, *(ObjectID**)param_2, (uint*)local_68);
            if (cVar29 != '\0') {
               lVar34 = HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::operator [](this_00, param_2);
               local_a8 = 0;
               local_c8 = (undefined1[16])0x0;
               local_b8 = (undefined1[16])0x0;
               HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_init_from((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)local_c8, (HashSet*)( lVar34 + 0x18 ));
               iVar26 = local_a8._4_4_;
               uVar36 = local_ec[0];
               if (local_a8._4_4_ != 0) {
                  uVar44 = local_c8._0_8_;
                  lVar34 = 0;
                  uVar40 = *(ulong*)local_c8._0_8_;
                  if (uVar40 == 0) goto LAB_001082f3;
                  while (true) {
                     uVar36 = (uint)uVar40 & 0xffffff;
                     if ((uint)ObjectDB::slot_max <= uVar36) {
                        _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                        goto LAB_001082f3;
                     }

                     while (true) {
                        auVar28 = stack0xffffffffffffff99;
                        auVar20[0xf] = 0;
                        auVar20._0_15_ = stack0xffffffffffffff99;
                        _local_68 = auVar20 << 8;
                        LOCK();
                        bVar47 = (char)ObjectDB::spin_lock == '\0';
                        if (bVar47) {
                           ObjectDB::spin_lock._0_1_ = '\x01';
                        }

                        UNLOCK();
                        if (bVar47) break;
                        auVar23[0xf] = 0;
                        auVar23._0_15_ = auVar28;
                        _local_68 = auVar23 << 8;
                        do {} while ( (char)ObjectDB::spin_lock != '\0' );
                     }
;
                     puVar32 = (ulong*)( (ulong)uVar36 * 0x10 + ObjectDB::object_slots );
                     if (( uVar40 >> 0x18 & 0x7fffffffff ) != ( *puVar32 & 0x7fffffffff )) {
                        ObjectDB::spin_lock._0_1_ = '\0';
                        goto LAB_001082f3;
                     }

                     uVar40 = puVar32[1];
                     ObjectDB::spin_lock._0_1_ = '\0';
                     if (uVar40 == 0) goto LAB_001082f3;
                     lVar35 = __dynamic_cast(uVar40, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
                     if (lVar35 == 0) goto LAB_001082f3;
                     cVar30 = _has_authority((Node*)this);
                     uVar36 = local_ec[0];
                     if (( cVar30 != '\0' ) && ( cVar29 = MultiplayerSynchronizer::is_visible_to((int)lVar35) ),cVar29 != '\0') break;
                     iVar37 = (int)lVar34;
                     uVar36 = local_ec[0];
                     while (true) {
                        local_ec[0] = uVar36;
                        if (iVar26 <= iVar37 + 1) goto LAB_0010832c;
                        lVar34 = lVar34 + 1;
                        uVar40 = *(ulong*)( uVar44 + lVar34 * 8 );
                        if (uVar40 != 0) break;
                        LAB_001082f3:_err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x18b, "Condition \"!sync\" is true. Continuing.", 0, 0);
                        iVar37 = (int)lVar34;
                        uVar36 = local_ec[0];
                     }
;
                  }
;
               }

               LAB_0010832c:local_98 = (undefined1[16])0x0;
               local_78 = _LC38;
               local_48 = _LC38;
               local_88 = (undefined1[16])0x0;
               _local_68 = (undefined1[16])0x0;
               local_58 = (undefined1[16])0x0;
               if (uVar36 == 0) {
                  plVar46 = *(long**)( this + 0x198 );
                  if (plVar46 == (long*)0x0) goto LAB_001083b3;
                  if (cVar29 == '\0') {
                     do {
                        _update_spawn_visibility(this, (int)plVar46[2], param_2);
                        plVar46 = (long*)*plVar46;
                     }
 while ( plVar46 != (long*)0x0 );
                  }
 else {
                     do {
                        cVar29 = HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_lookup_pos((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( plVar46 + 8 ), *(ObjectID**)param_2, local_d8);
                        if (cVar29 == '\0') {
                           HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)local_d8);
                        }

                        plVar46 = (long*)*plVar46;
                     }
 while ( plVar46 != (long*)0x0 );
                  }

                  LAB_001083a0:iVar26 = local_78._4_4_;
                  if (local_78._4_4_ != 0) {
                     local_e4 = 0;
                     _make_spawn_packet(this, pNVar33, local_128, &local_e4);
                     uVar44 = local_98._0_8_;
                     local_120 = 0;
                     do {
                        uVar36 = *(uint*)( uVar44 + local_120 * 4 );
                        local_e0 = uVar36;
                        if (( *(long*)( this + 0x188 ) != 0 ) && ( *(int*)( this + 0x1ac ) != 0 )) {
                           uVar40 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
                           uVar31 = ( uVar36 >> 0x10 ^ uVar36 ) * -0x7a143595;
                           uVar31 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;
                           uVar43 = uVar31 ^ uVar31 >> 0x10;
                           if (uVar31 == uVar31 >> 0x10) {
                              uVar43 = 1;
                              uVar38 = uVar40;
                           }
 else {
                              uVar38 = uVar43 * uVar40;
                           }

                           uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ));
                           auVar5._8_8_ = 0;
                           auVar5._0_8_ = uVar41;
                           auVar13._8_8_ = 0;
                           auVar13._0_8_ = uVar38;
                           lVar34 = SUB168(auVar5 * auVar13, 8);
                           uVar31 = *(uint*)( *(long*)( this + 400 ) + lVar34 * 4 );
                           iVar37 = SUB164(auVar5 * auVar13, 8);
                           if (uVar31 != 0) {
                              uVar42 = 0;
                              do {
                                 if (( uVar43 == uVar31 ) && ( uVar36 == *(uint*)( *(long*)( *(long*)( this + 0x188 ) + lVar34 * 8 ) + 0x10 ) )) {
                                    SceneCacheInterface::send_object_cache(*(Object**)( this + 0x290 ), (int)local_128, (int*)(ulong)uVar36);
                                    _send_raw(this, *(uchar**)( this + 0x2a0 ), local_e4, uVar36, true);
                                    HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), (int*)&local_e0);
                                    HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert((ObjectID*)local_d8);
                                    goto LAB_001089cd;
                                 }

                                 uVar42 = uVar42 + 1;
                                 auVar6._8_8_ = 0;
                                 auVar6._0_8_ = ( iVar37 + 1 ) * uVar40;
                                 auVar14._8_8_ = 0;
                                 auVar14._0_8_ = uVar41;
                                 lVar34 = SUB168(auVar6 * auVar14, 8);
                                 uVar31 = *(uint*)( *(long*)( this + 400 ) + lVar34 * 4 );
                                 iVar37 = SUB164(auVar6 * auVar14, 8);
                              }
 while ( ( uVar31 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar31 * uVar40,auVar15._8_8_ = 0,auVar15._0_8_ = uVar41,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ) + iVar37 ) - SUB164(auVar7 * auVar15, 8) ) * uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = uVar41,uVar42 <= SUB164(auVar8 * auVar16, 8) );
                           }

                        }

                        _err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x1b7, "Condition \"!peers_info.has(pid)\" is true. Continuing.", 0, 0);
                        LAB_001089cd:if (iVar26 <= (int)local_120 + 1) break;
                        local_120 = local_120 + 1;
                     }
 while ( true );
                  }

                  goto LAB_001083b3;
               }

               this_01 = (HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 );
               cVar30 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::_lookup_pos(this_01, (int*)(ulong)uVar36, local_d8);
               if (cVar30 == '\0') {
                  uVar44 = 0x1f;
                  _err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x19a, "Condition \"!peers_info.has(p_peer)\" is true. Returning: ERR_INVALID_PARAMETER", 0, 0);
               }
 else {
                  uVar44 = 0;
                  lVar34 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](this_01, (int*)local_ec);
                  cVar30 = HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_lookup_pos((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( lVar34 + 0x28 ), *(ObjectID**)param_2, local_d8);
                  if (cVar29 != cVar30) {
                     if (cVar29 != '\0') {
                        HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)local_d8);
                        goto LAB_001083a0;
                     }

                     HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert((int*)local_d8);
                     iVar26 = local_48._4_4_;
                     pvVar27 = _local_68;
                     if (local_48._4_4_ != 0) {
                        local_dc = 0;
                        _make_despawn_packet(this, pNVar33, &local_dc);
                        local_128 = (MultiplayerSpawner*)0x0;
                        do {
                           uVar36 = *(uint*)( (long)pvVar27 + (long)local_128 * 4 );
                           local_d8[0] = uVar36;
                           if (( *(long*)( this + 0x188 ) != 0 ) && ( *(int*)( this + 0x1ac ) != 0 )) {
                              uVar40 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
                              uVar31 = ( uVar36 >> 0x10 ^ uVar36 ) * -0x7a143595;
                              uVar31 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;
                              uVar43 = uVar31 ^ uVar31 >> 0x10;
                              if (uVar31 == uVar31 >> 0x10) {
                                 uVar43 = 1;
                                 uVar38 = uVar40;
                              }
 else {
                                 uVar38 = uVar43 * uVar40;
                              }

                              uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ));
                              auVar1._8_8_ = 0;
                              auVar1._0_8_ = uVar41;
                              auVar9._8_8_ = 0;
                              auVar9._0_8_ = uVar38;
                              lVar34 = SUB168(auVar1 * auVar9, 8);
                              uVar31 = *(uint*)( *(long*)( this + 400 ) + lVar34 * 4 );
                              iVar37 = SUB164(auVar1 * auVar9, 8);
                              if (uVar31 != 0) {
                                 uVar42 = 0;
                                 do {
                                    if (( uVar43 == uVar31 ) && ( uVar36 == *(uint*)( *(long*)( *(long*)( this + 0x188 ) + lVar34 * 8 ) + 0x10 ) )) {
                                       lVar34 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](this_01, (int*)local_d8);
                                       HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::erase((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( lVar34 + 0x28 ), param_2);
                                       _send_raw(this, *(uchar**)( this + 0x2a0 ), local_dc, uVar36, true);
                                       goto LAB_00108798;
                                    }

                                    uVar42 = uVar42 + 1;
                                    auVar2._8_8_ = 0;
                                    auVar2._0_8_ = ( iVar37 + 1 ) * uVar40;
                                    auVar10._8_8_ = 0;
                                    auVar10._0_8_ = uVar41;
                                    lVar34 = SUB168(auVar2 * auVar10, 8);
                                    uVar31 = *(uint*)( *(long*)( this + 400 ) + lVar34 * 4 );
                                    iVar37 = SUB164(auVar2 * auVar10, 8);
                                 }
 while ( ( uVar31 != 0 ) && ( auVar3._8_8_ = 0 ),auVar3._0_8_ = uVar31 * uVar40,auVar11._8_8_ = 0,auVar11._0_8_ = uVar41,auVar4._8_8_ = 0,auVar4._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ) + iVar37 ) - SUB164(auVar3 * auVar11, 8) ) * uVar40,auVar12._8_8_ = 0,auVar12._0_8_ = uVar41,uVar42 <= SUB164(auVar4 * auVar12, 8) );
                              }

                           }

                           _err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x1c2, "Condition \"!peers_info.has(pid)\" is true. Continuing.", 0, 0);
                           LAB_00108798:if (iVar26 <= (int)local_128 + 1) goto code_r0x001087a8;
                           local_128 = (MultiplayerSpawner*)( (long)local_128 + 1 );
                        }
 while ( true );
                     }

                     pvVar39 = (void*)local_98._0_8_;
                     if (_local_68 != (void*)0x0) {
                        pvVar39 = (void*)local_58._8_8_;
                        goto LAB_001087d7;
                     }

                     goto LAB_001083bb;
                  }

               }

               goto LAB_0010842f;
            }

            _err_print_error("_update_spawn_visibility", "modules/multiplayer/scene_replication_interface.cpp", 0x186, "Condition \"!tracked_nodes.has(p_oid)\" is true. Returning: ERR_BUG", 0, 0);
         }

      }

   }

   LAB_0010854f:uVar44 = 0x2f;
   LAB_001084a2:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return uVar44;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
   code_r0x001087a8:pvVar39 = (void*)local_58._8_8_;
   if (*(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) != 0) {
      memset((void*)local_58._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 ) * 4);
   }

   LAB_001087d7:Memory::free_static(pvVar27, false);
   Memory::free_static((void*)local_58._0_8_, false);
   Memory::free_static((void*)auStack_64._4_8_, false);
   Memory::free_static(pvVar39, false);
   LAB_001083b3:pvVar39 = (void*)local_98._0_8_;
   LAB_001083bb:if (pvVar39 != (void*)0x0) {
      uVar44 = local_88._8_8_;
      if (( local_78._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_78 & 0xffffffff ) * 4 ) != 0 )) {
         memset((void*)local_88._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_78 & 0xffffffff ) * 4 ) * 4);
      }

      Memory::free_static(pvVar39, false);
      Memory::free_static((void*)local_88._0_8_, false);
      Memory::free_static((void*)local_98._8_8_, false);
      Memory::free_static((void*)uVar44, false);
   }

   uVar44 = 0;
   LAB_0010842f:uVar24 = local_c8._0_8_;
   if ((void*)local_c8._0_8_ != (void*)0x0) {
      uVar25 = local_b8._8_8_;
      if (( local_a8._4_4_ != 0 ) && ( *(uint*)( hash_table_size_primes + ( local_a8 & 0xffffffff ) * 4 ) != 0 )) {
         memset((void*)local_b8._8_8_, 0, ( ulong ) * (uint*)( hash_table_size_primes + ( local_a8 & 0xffffffff ) * 4 ) * 4);
      }

      Memory::free_static((void*)uVar24, false);
      Memory::free_static((void*)local_b8._0_8_, false);
      Memory::free_static((void*)local_c8._8_8_, false);
      Memory::free_static((void*)uVar25, false);
   }

   goto LAB_001084a2;
}
/* SceneReplicationInterface::_node_ready(ObjectID const&) */void SceneReplicationInterface::_node_ready(SceneReplicationInterface *this, ObjectID *param_1) {
   int iVar1;
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
   char cVar18;
   ulong uVar19;
   long lVar20;
   uint uVar21;
   ulong *puVar22;
   int iVar23;
   int iVar24;
   long lVar25;
   long lVar26;
   ulong uVar27;
   uint uVar28;
   ulong uVar29;
   ObjectID *pOVar30;
   long in_FS_OFFSET;
   bool bVar31;
   ObjectID local_58[24];
   long local_40;
   pOVar30 = *(ObjectID**)( this + 0x238 );
   lVar20 = *(long*)param_1;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (( pOVar30 != (ObjectID*)0x0 ) && ( iVar1 = iVar1 != 0 )) {
      uVar27 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 600 ) * 4 ));
      lVar26 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 600 ) * 8 );
      uVar19 = lVar20 * 0x3ffff - 1;
      uVar19 = ( uVar19 ^ uVar19 >> 0x1f ) * 0x15;
      uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
      uVar19 = uVar19 >> 0x16 ^ uVar19;
      uVar29 = uVar19 & 0xffffffff;
      if ((int)uVar19 == 0) {
         uVar29 = 1;
      }

      auVar2._8_8_ = 0;
      auVar2._0_8_ = uVar29 * lVar26;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = uVar27;
      lVar25 = SUB168(auVar2 * auVar10, 8);
      uVar21 = *(uint*)( *(long*)( this + 0x250 ) + lVar25 * 4 );
      iVar23 = SUB164(auVar2 * auVar10, 8);
      if (uVar21 != 0) {
         uVar28 = 0;
         do {
            if (( (uint)uVar29 == uVar21 ) && ( lVar20 == *(long*)( pOVar30 + ( ulong ) * (uint*)( *(long*)( this + 0x240 ) + lVar25 * 4 ) * 8 ) )) {
               if (*(long*)pOVar30 != lVar20) goto LAB_00108ffa;
               iVar23 = 0;
               goto LAB_00108da8;
            }

            uVar28 = uVar28 + 1;
            auVar3._8_8_ = 0;
            auVar3._0_8_ = ( ulong )(iVar23 + 1) * lVar26;
            auVar11._8_8_ = 0;
            auVar11._0_8_ = uVar27;
            lVar25 = SUB168(auVar3 * auVar11, 8);
            uVar21 = *(uint*)( *(long*)( this + 0x250 ) + lVar25 * 4 );
            iVar23 = SUB164(auVar3 * auVar11, 8);
         }
 while ( ( uVar21 != 0 ) && ( auVar4._8_8_ = 0 ),auVar4._0_8_ = (ulong)uVar21 * lVar26,auVar12._8_8_ = 0,auVar12._0_8_ = uVar27,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 600 ) * 4 ) + iVar23 ) - SUB164(auVar4 * auVar12, 8)) * lVar26,auVar13._8_8_ = 0,auVar13._0_8_ = uVar27,uVar28 <= SUB164(auVar5 * auVar13, 8) );
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      _err_print_error("_node_ready", "modules/multiplayer/scene_replication_interface.cpp", 0xaf, "Condition \"!spawn_queue.has(p_oid)\" is true.", 0, 0);
      return;
   }

   goto LAB_00109124;
   LAB_00108f00:while (true) {
      local_58[0] = (ObjectID)0x0;
      LOCK();
      bVar31 = (char)ObjectDB::spin_lock == '\0';
      if (bVar31) {
         ObjectDB::spin_lock._0_1_ = '\x01';
      }

      UNLOCK();
      if (bVar31) break;
      do {} while ( (char)ObjectDB::spin_lock != '\0' );
   }
;
   puVar22 = (ulong*)( (ulong)uVar21 * 0x10 + ObjectDB::object_slots );
   if (( uVar19 >> 0x18 & 0x7fffffffff ) == ( *puVar22 & 0x7fffffffff )) {
      uVar19 = puVar22[1];
      ObjectDB::spin_lock._0_1_ = '\0';
      if (( uVar19 == 0 ) || ( lVar20 = __dynamic_cast(uVar19, &Object::typeinfo, &MultiplayerSpawner::typeinfo, 0) ),lVar20 == 0) goto LAB_001090ae;
      HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(local_58);
      cVar18 = _has_authority((Node*)this);
      if (cVar18 != '\0') {
         _update_spawn_visibility(this, 0, pOVar30);
      }

   }
 else {
      ObjectDB::spin_lock._0_1_ = '\0';
      LAB_001090ae:_err_print_error("_node_ready", "modules/multiplayer/scene_replication_interface.cpp", 0xbb, "Condition \"!spawner\" is true. Continuing.", 0, 0);
   }

   while (true) {
      iVar23 = iVar23 + 1;
      pOVar30 = pOVar30 + 8;
      if (iVar1 <= iVar23) break;
      LAB_00108da8:if (( *(long*)( this + 0x1c0 ) != 0 ) && ( *(int*)( this + 0x1e4 ) != 0 )) {
         uVar29 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ));
         lVar20 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1e0 ) * 8 );
         uVar19 = *(long*)pOVar30 * 0x3ffff - 1;
         uVar19 = ( uVar19 ^ uVar19 >> 0x1f ) * 0x15;
         uVar19 = ( uVar19 ^ uVar19 >> 0xb ) * 0x41;
         uVar19 = uVar19 >> 0x16 ^ uVar19;
         uVar27 = uVar19 & 0xffffffff;
         if ((int)uVar19 == 0) {
            uVar27 = 1;
         }

         auVar6._8_8_ = 0;
         auVar6._0_8_ = uVar27 * lVar20;
         auVar14._8_8_ = 0;
         auVar14._0_8_ = uVar29;
         lVar26 = SUB168(auVar6 * auVar14, 8);
         uVar21 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar26 * 4 );
         iVar24 = SUB164(auVar6 * auVar14, 8);
         if (uVar21 != 0) {
            uVar28 = 0;
            do {
               if (( (uint)uVar27 == uVar21 ) && ( *(long*)pOVar30 == *(long*)( *(long*)( *(long*)( this + 0x1c0 ) + lVar26 * 8 ) + 0x10 ) )) {
                  lVar20 = HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::operator []((HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>*)( this + 0x1b8 ), pOVar30);
                  uVar19 = *(ulong*)( lVar20 + 0x10 );
                  if (uVar19 == 0) goto LAB_001090ae;
                  uVar21 = (uint)uVar19 & 0xffffff;
                  if (uVar21 < (uint)ObjectDB::slot_max) goto LAB_00108f00;
                  _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
                  goto LAB_001090ae;
               }

               uVar28 = uVar28 + 1;
               auVar7._8_8_ = 0;
               auVar7._0_8_ = ( ulong )(iVar24 + 1) * lVar20;
               auVar15._8_8_ = 0;
               auVar15._0_8_ = uVar29;
               lVar26 = SUB168(auVar7 * auVar15, 8);
               uVar21 = *(uint*)( *(long*)( this + 0x1c8 ) + lVar26 * 4 );
               iVar24 = SUB164(auVar7 * auVar15, 8);
            }
 while ( ( uVar21 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar21 * lVar20,auVar16._8_8_ = 0,auVar16._0_8_ = uVar29,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1e0 ) * 4 ) + iVar24 ) - SUB164(auVar8 * auVar16, 8)) * lVar20,auVar17._8_8_ = 0,auVar17._0_8_ = uVar29,uVar28 <= SUB164(auVar9 * auVar17, 8) );
         }

      }

      _err_print_error("_node_ready", "modules/multiplayer/scene_replication_interface.cpp", 0xb7, "Condition \"!tracked_nodes.has(oid)\" is true. Continuing.", 0, 0);
   }
;
   if (( *(long*)( this + 0x238 ) != 0 ) && ( *(int*)( this + 0x25c ) != 0 )) {
      if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 600 ) * 4 ) != 0) {
         memset(*(void**)( this + 0x250 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 600 ) * 4 ) * 4);
      }

      *(undefined4*)( this + 0x25c ) = 0;
   }

   LAB_00108ffa:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_00109124:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SceneReplicationInterface::_visibility_changed(int, ObjectID) */void SceneReplicationInterface::_visibility_changed(SceneReplicationInterface *this, int param_1, ulong param_3) {
   uint uVar1;
   undefined1 auVar2[16];
   undefined1 auVar3[16];
   undefined1 auVar4[16];
   undefined1 auVar5[16];
   undefined1 auVar6[16];
   undefined1 auVar7[16];
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   int iVar10;
   MultiplayerSynchronizer *pMVar11;
   long lVar12;
   ulong uVar13;
   char *pcVar14;
   long lVar15;
   undefined8 uVar16;
   uint uVar17;
   ulong *puVar18;
   ulong uVar19;
   ulong uVar20;
   long in_FS_OFFSET;
   bool bVar21;
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (param_3 != 0) {
      uVar17 = (uint)param_3 & 0xffffff;
      if (uVar17 < (uint)ObjectDB::slot_max) {
         while (true) {
            uVar13 = local_48 >> 8;
            local_48 = uVar13 << 8;
            LOCK();
            bVar21 = (char)ObjectDB::spin_lock == '\0';
            if (bVar21) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar21) break;
            local_48 = uVar13 << 8;
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar18 = (ulong*)( (ulong)uVar17 * 0x10 + ObjectDB::object_slots );
         if (( param_3 >> 0x18 & 0x7fffffffff ) == ( *puVar18 & 0x7fffffffff )) {
            uVar13 = puVar18[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (( uVar13 != 0 ) && ( pMVar11 = (MultiplayerSynchronizer*)__dynamic_cast(uVar13, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0) ),pMVar11 != (MultiplayerSynchronizer*)0x0) {
               lVar12 = MultiplayerSynchronizer::get_root_node();
               if (lVar12 == 0) {
                  if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) goto LAB_00109448;
                  uVar16 = 0x129;
                  pcVar14 = "Parameter \"node\" is null.";
                  goto LAB_001093fa;
               }

               local_48 = *(ulong*)( lVar12 + 0x60 );
               if (( *(long*)( this + 0x1e8 ) != 0 ) && ( *(int*)( this + 0x20c ) != 0 )) {
                  uVar19 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x208 ) * 4 ));
                  lVar12 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x208 ) * 8 );
                  uVar13 = local_48 * 0x3ffff - 1;
                  uVar13 = ( uVar13 ^ uVar13 >> 0x1f ) * 0x15;
                  uVar13 = ( uVar13 ^ uVar13 >> 0xb ) * 0x41;
                  uVar13 = uVar13 >> 0x16 ^ uVar13;
                  uVar20 = uVar13 & 0xffffffff;
                  if ((int)uVar13 == 0) {
                     uVar20 = 1;
                  }

                  auVar2._8_8_ = 0;
                  auVar2._0_8_ = uVar20 * lVar12;
                  auVar6._8_8_ = 0;
                  auVar6._0_8_ = uVar19;
                  lVar15 = SUB168(auVar2 * auVar6, 8);
                  uVar17 = *(uint*)( *(long*)( this + 0x200 ) + lVar15 * 4 );
                  uVar13 = (ulong)uVar17;
                  iVar10 = SUB164(auVar2 * auVar6, 8);
                  if (uVar17 != 0) {
                     uVar17 = 0;
                     while (( (int)uVar13 != (int)uVar20 || ( local_48 != *(ulong*)( *(long*)( this + 0x1e8 ) + ( ulong ) * (uint*)( *(long*)( this + 0x1f0 ) + lVar15 * 4 ) * 8 ) ) )) {
                        uVar17 = uVar17 + 1;
                        auVar3._8_8_ = 0;
                        auVar3._0_8_ = ( ulong )(iVar10 + 1) * lVar12;
                        auVar7._8_8_ = 0;
                        auVar7._0_8_ = uVar19;
                        lVar15 = SUB168(auVar3 * auVar7, 8);
                        uVar1 = *(uint*)( *(long*)( this + 0x200 ) + lVar15 * 4 );
                        uVar13 = (ulong)uVar1;
                        iVar10 = SUB164(auVar3 * auVar7, 8);
                        if (( uVar1 == 0 ) || ( auVar4._8_8_ = 0 ),auVar4._0_8_ = uVar13 * lVar12,auVar8._8_8_ = 0,auVar8._0_8_ = uVar19,auVar5._8_8_ = 0,auVar5._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x208 ) * 4 ) + iVar10 ) - SUB164(auVar4 * auVar8, 8)) * lVar12,auVar9._8_8_ = 0,auVar9._0_8_ = uVar19,SUB164(auVar5 * auVar9, 8) < uVar17) goto LAB_00109350;
                     }
;
                     iVar10 = ( **(code**)( **(long**)( this + 0x288 ) + 0x168 ) )();
                     if (iVar10 != param_1) {
                        _update_spawn_visibility(this, param_1, (ObjectID*)&local_48);
                     }

                  }

               }

               LAB_00109350:_update_sync_visibility(this, param_1, pMVar11);
               if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
                  return;
               }

               goto LAB_00109448;
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

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      uVar16 = 0x127;
      pcVar14 = "Parameter \"sync\" is null.";
      LAB_001093fa:_err_print_error("_visibility_changed", "modules/multiplayer/scene_replication_interface.cpp", uVar16, pcVar14, 0, 0);
      return;
   }

   LAB_00109448:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* SceneReplicationInterface::on_peer_change(int, bool) */void SceneReplicationInterface::on_peer_change(SceneReplicationInterface *this, int param_1, bool param_2) {
   uint *puVar1;
   undefined8 *puVar2;
   undefined8 *puVar3;
   long *plVar4;
   long lVar5;
   undefined8 uVar6;
   ulong *puVar7;
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
   int iVar36;
   undefined1 auVar37[15];
   uint uVar38;
   HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *this_00;
   PeerInfo *pPVar40;
   MultiplayerSynchronizer *pMVar41;
   uint uVar42;
   ulong *puVar43;
   int iVar44;
   ulong uVar45;
   ulong uVar46;
   ulong uVar47;
   uint uVar48;
   uint uVar49;
   long *plVar50;
   int iVar51;
   ulong uVar52;
   long lVar53;
   uint uVar54;
   ulong uVar55;
   uint uVar56;
   ObjectID *pOVar57;
   uint *puVar58;
   long in_FS_OFFSET;
   bool bVar59;
   int local_12c;
   PeerInfo local_128;
   undefined1 auStack_127[15];
   undefined1 local_118[16];
   undefined8 local_108;
   HashSet local_100[16];
   undefined1 local_f0[16];
   undefined8 local_e0;
   undefined1 local_d0[16];
   undefined1 local_c0[16];
   undefined8 local_b0;
   undefined1 local_a0[16];
   undefined1 local_90[16];
   undefined8 local_80;
   undefined1 local_70[16];
   undefined1 local_60[16];
   undefined8 local_50;
   undefined8 local_48;
   long local_40;
   ulong uVar39;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   local_12c = param_1;
   if (!param_2) {
      if (( *(long*)( this + 0x188 ) != 0 ) && ( *(int*)( this + 0x1ac ) != 0 )) {
         uVar39 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
         uVar46 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ));
         uVar42 = ( (uint)param_1 >> 0x10 ^ param_1 ) * -0x7a143595;
         uVar42 = ( uVar42 ^ uVar42 >> 0xd ) * -0x3d4d51cb;
         uVar48 = uVar42 >> 0x10;
         uVar38 = uVar42 ^ uVar48;
         if (uVar42 == uVar48) {
            uVar49 = 1;
            uVar45 = uVar39;
         }
 else {
            uVar45 = uVar38 * uVar39;
            uVar49 = uVar38;
         }

         auVar8._8_8_ = 0;
         auVar8._0_8_ = uVar46;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar45;
         lVar53 = SUB168(auVar8 * auVar21, 8);
         uVar54 = *(uint*)( *(long*)( this + 400 ) + lVar53 * 4 );
         iVar44 = SUB164(auVar8 * auVar21, 8);
         if (uVar54 != 0) {
            uVar56 = 0;
            do {
               if (( uVar54 == uVar49 ) && ( param_1 == *(int*)( *(long*)( *(long*)( this + 0x188 ) + lVar53 * 8 ) + 0x10 ) )) {
                  pPVar40 = (PeerInfo*)HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), &local_12c);
                  _free_remotes(this, pPVar40);
                  lVar53 = *(long*)( this + 0x188 );
                  if (( lVar53 == 0 ) || ( *(int*)( this + 0x1ac ) == 0 )) goto LAB_00109a18;
                  uVar54 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 );
                  uVar39 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x1a8 ) * 8 );
                  uVar46 = uVar39;
                  if (uVar42 != uVar48) {
                     uVar46 = uVar38 * uVar39;
                  }

                  uVar45 = CONCAT44(0, uVar54);
                  lVar5 = *(long*)( this + 400 );
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = uVar45;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar46;
                  uVar46 = SUB168(auVar12 * auVar25, 8);
                  uVar42 = *(uint*)( lVar5 + uVar46 * 4 );
                  uVar52 = (ulong)SUB164(auVar12 * auVar25, 8);
                  if (uVar42 == 0) goto LAB_00109a18;
                  uVar38 = 0;
                  goto LAB_001098cd;
               }

               uVar56 = uVar56 + 1;
               auVar9._8_8_ = 0;
               auVar9._0_8_ = ( iVar44 + 1 ) * uVar39;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar46;
               lVar53 = SUB168(auVar9 * auVar22, 8);
               uVar54 = *(uint*)( *(long*)( this + 400 ) + lVar53 * 4 );
               iVar44 = SUB164(auVar9 * auVar22, 8);
            }
 while ( ( uVar54 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar54 * uVar39,auVar23._8_8_ = 0,auVar23._0_8_ = uVar46,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x1a8 ) * 4 ) + iVar44 ) - SUB164(auVar10 * auVar23, 8) ) * uVar39,auVar24._8_8_ = 0,auVar24._0_8_ = uVar46,uVar56 <= SUB164(auVar11 * auVar24, 8) );
         }

      }

      _err_print_error("on_peer_change", "modules/multiplayer/scene_replication_interface.cpp", 0x69, "Condition \"!peers_info.has(p_id)\" is true.", 0, 0);
      goto LAB_00109a18;
   }

   _local_128 = (undefined1[16])0x0;
   local_118 = (undefined1[16])0x0;
   for (int i = 0; i < 16; i++) {
      local_100[i] = (HashSet)0;
   }

   local_f0 = (undefined1[16])0x0;
   local_d0 = (undefined1[16])0x0;
   local_c0 = (undefined1[16])0x0;
   local_a0 = (undefined1[16])0x0;
   local_90 = (undefined1[16])0x0;
   local_70 = (undefined1[16])0x0;
   local_60 = (undefined1[16])0x0;
   local_48 = 0;
   local_108 = _LC38;
   local_e0 = _LC38;
   local_b0 = _LC38;
   local_80 = _LC38;
   local_50 = _LC38;
   this_00 = (HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), &local_12c);
   HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator =(this_00, (HashSet*)&local_128);
   HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator =(this_00 + 0x28, local_100);
   uVar42 = *(uint*)( this_00 + 0x78 );
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar42 * 4 );
   if (( *(int*)( this_00 + 0x7c ) == 0 ) || ( *(long*)( this_00 + 0x58 ) == 0 )) {
      LAB_00109555:if (uVar38 < 0x17) goto LAB_0010955a;
   }
 else {
      lVar53 = 0;
      if (uVar38 != 0) {
         do {
            if (*(int*)( *(long*)( this_00 + 0x60 ) + lVar53 ) != 0) {
               *(int*)( *(long*)( this_00 + 0x60 ) + lVar53 ) = 0;
               Memory::free_static(*(void**)( *(long*)( this_00 + 0x58 ) + lVar53 * 2 ), false);
               *(undefined8*)( *(long*)( this_00 + 0x58 ) + lVar53 * 2 ) = 0;
            }

            lVar53 = lVar53 + 4;
         }
 while ( (ulong)uVar38 << 2 != lVar53 );
         uVar42 = *(uint*)( this_00 + 0x78 );
         *(undefined4*)( this_00 + 0x7c ) = 0;
         *(undefined1(*) [16])( this_00 + 0x68 ) = (undefined1[16])0x0;
         uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar42 * 4 );
         goto LAB_00109555;
      }

      *(undefined4*)( this_00 + 0x7c ) = 0;
      *(undefined1(*) [16])( this_00 + 0x68 ) = (undefined1[16])0x0;
      LAB_0010955a:if (uVar42 != 0x1c) {
         uVar39 = (ulong)uVar42;
         do {
            uVar38 = (int)uVar39 + 1;
            uVar39 = (ulong)uVar38;
            if (0x16 < *(uint*)( hash_table_size_primes + uVar39 * 4 )) {
               if (uVar42 != uVar38) {
                  if (*(long*)( this_00 + 0x58 ) == 0) {
                     *(uint*)( this_00 + 0x78 ) = uVar38;
                  }
 else {
                     HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::_resize_and_rehash((HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>*)( this_00 + 0x50 ), uVar38);
                  }

               }

               goto LAB_001095ab;
            }

         }
 while ( uVar38 != 0x1c );
      }

      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_001095ab:uVar42 = *(uint*)( this_00 + 0xa8 );
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar42 * 4 );
   if (( *(int*)( this_00 + 0xac ) == 0 ) || ( *(long*)( this_00 + 0x88 ) == 0 )) {
      LAB_001095c6:if (uVar38 < 0x17) goto LAB_001095cb;
   }
 else {
      lVar53 = 0;
      if (uVar38 != 0) {
         do {
            if (*(int*)( *(long*)( this_00 + 0x90 ) + lVar53 ) != 0) {
               *(int*)( *(long*)( this_00 + 0x90 ) + lVar53 ) = 0;
               Memory::free_static(*(void**)( *(long*)( this_00 + 0x88 ) + lVar53 * 2 ), false);
               *(undefined8*)( *(long*)( this_00 + 0x88 ) + lVar53 * 2 ) = 0;
            }

            lVar53 = lVar53 + 4;
         }
 while ( lVar53 != (ulong)uVar38 << 2 );
         uVar42 = *(uint*)( this_00 + 0xa8 );
         *(undefined4*)( this_00 + 0xac ) = 0;
         *(undefined1(*) [16])( this_00 + 0x98 ) = (undefined1[16])0x0;
         uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar42 * 4 );
         goto LAB_001095c6;
      }

      *(undefined4*)( this_00 + 0xac ) = 0;
      *(undefined1(*) [16])( this_00 + 0x98 ) = (undefined1[16])0x0;
      LAB_001095cb:if (uVar42 != 0x1c) {
         uVar39 = (ulong)uVar42;
         do {
            uVar38 = (int)uVar39 + 1;
            uVar39 = (ulong)uVar38;
            if (0x16 < *(uint*)( hash_table_size_primes + uVar39 * 4 )) {
               if (uVar42 != uVar38) {
                  if (*(long*)( this_00 + 0x88 ) == 0) {
                     *(uint*)( this_00 + 0xa8 ) = uVar38;
                  }
 else {
                     HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::_resize_and_rehash((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( this_00 + 0x80 ), uVar38);
                  }

               }

               goto LAB_0010961d;
            }

         }
 while ( uVar38 != 0x1c );
      }

      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_0010961d:uVar42 = *(uint*)( this_00 + 0xd8 );
   uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar42 * 4 );
   if (( *(int*)( this_00 + 0xdc ) == 0 ) || ( *(long*)( this_00 + 0xb8 ) == 0 )) {
      LAB_0010963a:if (uVar38 < 0x17) goto LAB_0010963f;
   }
 else {
      lVar53 = 0;
      if (uVar38 != 0) {
         do {
            if (*(int*)( *(long*)( this_00 + 0xc0 ) + lVar53 ) != 0) {
               *(int*)( *(long*)( this_00 + 0xc0 ) + lVar53 ) = 0;
               Memory::free_static(*(void**)( *(long*)( this_00 + 0xb8 ) + lVar53 * 2 ), false);
               *(undefined8*)( *(long*)( this_00 + 0xb8 ) + lVar53 * 2 ) = 0;
            }

            lVar53 = lVar53 + 4;
         }
 while ( lVar53 != (ulong)uVar38 << 2 );
         uVar42 = *(uint*)( this_00 + 0xd8 );
         *(undefined4*)( this_00 + 0xdc ) = 0;
         *(undefined1(*) [16])( this_00 + 200 ) = (undefined1[16])0x0;
         uVar38 = *(uint*)( hash_table_size_primes + (ulong)uVar42 * 4 );
         goto LAB_0010963a;
      }

      *(undefined4*)( this_00 + 0xdc ) = 0;
      *(undefined1(*) [16])( this_00 + 200 ) = (undefined1[16])0x0;
      LAB_0010963f:if (uVar42 != 0x1c) {
         uVar39 = (ulong)uVar42;
         do {
            uVar38 = (int)uVar39 + 1;
            uVar39 = (ulong)uVar38;
            if (0x16 < *(uint*)( hash_table_size_primes + uVar39 * 4 )) {
               if (uVar42 != uVar38) {
                  if (*(long*)( this_00 + 0xb8 ) == 0) {
                     *(uint*)( this_00 + 0xd8 ) = uVar38;
                  }
 else {
                     HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::_resize_and_rehash((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( this_00 + 0xb0 ), uVar38);
                  }

               }

               goto LAB_00109693;
            }

         }
 while ( uVar38 != 0x1c );
      }

      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_00109693:*(undefined2*)( this_00 + 0xe0 ) = 0;
   PeerInfo::~PeerInfo(&local_128);
   iVar36 = local_12c;
   iVar44 = *(int*)( this + 0x20c );
   if (iVar44 != 0) {
      pOVar57 = *(ObjectID**)( this + 0x1e8 );
      for (iVar51 = 1; _update_spawn_visibility(this, iVar36, pOVar57),iVar51 < iVar44; iVar51 = iVar51 + 1) {
         pOVar57 = pOVar57 + 8;
      }

   }

   iVar44 = *(int*)( this + 0x234 );
   if (iVar44 != 0) {
      puVar7 = *(ulong**)( this + 0x210 );
      lVar53 = 0;
      uVar39 = *puVar7;
      if (uVar39 == 0) goto LAB_00109b14;
      do {
         uVar42 = (uint)uVar39 & 0xffffff;
         if (uVar42 < (uint)ObjectDB::slot_max) {
            while (true) {
               auVar37 = auStack_127;
               auVar34[0xf] = 0;
               auVar34._0_15_ = auStack_127;
               _local_128 = auVar34 << 8;
               LOCK();
               bVar59 = (char)ObjectDB::spin_lock == '\0';
               if (bVar59) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar59) break;
               auVar35[0xf] = 0;
               auVar35._0_15_ = auVar37;
               _local_128 = auVar35 << 8;
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar43 = (ulong*)( (ulong)uVar42 * 0x10 + ObjectDB::object_slots );
            if (( uVar39 >> 0x18 & 0x7fffffffff ) == ( *puVar43 & 0x7fffffffff )) {
               uVar39 = puVar43[1];
               ObjectDB::spin_lock._0_1_ = '\0';
               if (uVar39 == 0) goto LAB_00109b14;
               pMVar41 = (MultiplayerSynchronizer*)__dynamic_cast(uVar39, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
            }
 else {
               pMVar41 = (MultiplayerSynchronizer*)0x0;
               ObjectDB::spin_lock._0_1_ = '\0';
            }

         }
 else {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
            pMVar41 = (MultiplayerSynchronizer*)0x0;
         }

         while (true) {
            _update_sync_visibility(this, local_12c, pMVar41);
            if (iVar44 <= (int)lVar53 + 1) goto LAB_00109a18;
            lVar53 = lVar53 + 1;
            uVar39 = puVar7[lVar53];
            if (uVar39 != 0) break;
            LAB_00109b14:pMVar41 = (MultiplayerSynchronizer*)0x0;
         }
;
      }
 while ( true );
   }

   LAB_00109a18:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   while (true) {
      uVar42 = *(uint*)( lVar5 + uVar47 * 4 );
      uVar52 = uVar47 & 0xffffffff;
      uVar38 = uVar38 + 1;
      if (( uVar42 == 0 ) || ( auVar13._8_8_ = 0 ),auVar13._0_8_ = uVar42 * uVar39,auVar26._8_8_ = 0,auVar26._0_8_ = uVar45,auVar14._8_8_ = 0,auVar14._0_8_ = ( ( uVar54 + uVar48 ) - SUB164(auVar13 * auVar26, 8) ) * uVar39,auVar27._8_8_ = 0,auVar27._0_8_ = uVar45,uVar46 = uVar47,SUB164(auVar14 * auVar27, 8) < uVar38) break;
      LAB_001098cd:auVar15._8_8_ = 0;
      auVar15._0_8_ = ( (int)uVar52 + 1 ) * uVar39;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar45;
      uVar47 = SUB168(auVar15 * auVar28, 8);
      uVar48 = SUB164(auVar15 * auVar28, 8);
      if (( uVar49 == uVar42 ) && ( param_1 == *(int*)( *(long*)( lVar53 + uVar46 * 8 ) + 0x10 ) )) {
         puVar58 = (uint*)( lVar5 + uVar47 * 4 );
         uVar42 = *puVar58;
         if (( uVar42 != 0 ) && ( auVar16._8_8_ = 0 ),auVar16._0_8_ = uVar42 * uVar39,auVar29._8_8_ = 0,auVar29._0_8_ = uVar45,auVar17._8_8_ = 0,auVar17._0_8_ = ( ( uVar48 + uVar54 ) - SUB164(auVar16 * auVar29, 8) ) * uVar39,auVar30._8_8_ = 0,auVar30._0_8_ = uVar45,uVar46 = (ulong)uVar48,uVar55 = uVar52,SUB164(auVar17 * auVar30, 8) != 0) {
            while (true) {
               uVar52 = uVar46;
               puVar1 = (uint*)( lVar5 + uVar55 * 4 );
               *puVar58 = *puVar1;
               puVar2 = (undefined8*)( lVar53 + uVar47 * 8 );
               *puVar1 = uVar42;
               puVar3 = (undefined8*)( lVar53 + uVar55 * 8 );
               uVar6 = *puVar2;
               *puVar2 = *puVar3;
               *puVar3 = uVar6;
               auVar20._8_8_ = 0;
               auVar20._0_8_ = ( (int)uVar52 + 1 ) * uVar39;
               auVar33._8_8_ = 0;
               auVar33._0_8_ = uVar45;
               uVar47 = SUB168(auVar20 * auVar33, 8);
               puVar58 = (uint*)( lVar5 + uVar47 * 4 );
               uVar42 = *puVar58;
               if (( uVar42 == 0 ) || ( auVar18._8_8_ = 0 ),auVar18._0_8_ = uVar42 * uVar39,auVar31._8_8_ = 0,auVar31._0_8_ = uVar45,auVar19._8_8_ = 0,auVar19._0_8_ = ( ( SUB164(auVar20 * auVar33, 8) + uVar54 ) - SUB164(auVar18 * auVar31, 8) ) * uVar39,auVar32._8_8_ = 0,auVar32._0_8_ = uVar45,SUB164(auVar19 * auVar32, 8) == 0) break;
               uVar46 = uVar47 & 0xffffffff;
               uVar55 = uVar52;
            }
;
         }

         plVar4 = (long*)( lVar53 + uVar52 * 8 );
         *(undefined4*)( lVar5 + uVar52 * 4 ) = 0;
         plVar50 = (long*)*plVar4;
         if (*(long**)( this + 0x198 ) == plVar50) {
            *(long*)( this + 0x198 ) = *plVar50;
            plVar50 = (long*)*plVar4;
         }

         if (*(long**)( this + 0x1a0 ) == plVar50) {
            *(long*)( this + 0x1a0 ) = plVar50[1];
            plVar50 = (long*)*plVar4;
         }

         if ((long*)plVar50[1] != (long*)0x0) {
            *(long*)plVar50[1] = *plVar50;
            plVar50 = (long*)*plVar4;
         }

         if (*plVar50 != 0) {
            *(long*)( *plVar50 + 8 ) = plVar50[1];
            plVar50 = (long*)*plVar4;
         }

         PeerInfo::~PeerInfo((PeerInfo*)( plVar50 + 3 ));
         Memory::free_static(plVar50, false);
         *(undefined8*)( *(long*)( this + 0x188 ) + uVar52 * 8 ) = 0;
         *(int*)( this + 0x1ac ) = *(int*)( this + 0x1ac ) + -1;
         break;
      }

   }
;
   goto LAB_00109a18;
}
/* SceneReplicationInterface::_send_delta(int, HashSet<ObjectID, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID> > const&, unsigned long, HashMap<ObjectID, unsigned long,
   HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, unsigned long> > > const&) */void SceneReplicationInterface::_send_delta(SceneReplicationInterface *this, int param_1, HashSet *param_2, ulong param_3, HashMap *param_4) {
   Variant **ppVVar1;
   undefined1 *puVar2;
   int iVar3;
   undefined4 uVar4;
   undefined1 *puVar5;
   long lVar6;
   long lVar7;
   long lVar8;
   Variant *pVVar9;
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
   code *pcVar24;
   char cVar25;
   int iVar26;
   MultiplayerSynchronizer *pMVar27;
   long lVar28;
   ulong uVar29;
   undefined8 *puVar30;
   uint uVar31;
   ulong *puVar32;
   int iVar33;
   long lVar34;
   long lVar35;
   Variant **ppVVar36;
   ulong uVar37;
   uint uVar38;
   int iVar39;
   ulong uVar40;
   uint uVar41;
   uint uVar42;
   undefined1 *puVar43;
   long in_FS_OFFSET;
   bool bVar44;
   ObjectID *local_110;
   int local_fc;
   int local_c0;
   int local_ac;
   uint local_a8;
   uint local_a4;
   ulong local_a0;
   long *local_98;
   undefined8 local_90;
   undefined8 local_88;
   undefined8 local_80[2];
   Variant **local_70;
   char *local_68;
   undefined8 local_60;
   int local_58[6];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(long*)( this + 0x2a0 ) == 0) {
      lVar28 = 0;
   }
 else {
      lVar28 = *(long*)( *(long*)( this + 0x2a0 ) + -8 );
   }

   local_ac = param_1;
   if (lVar28 < *(int*)( this + 0x2ac ) + 0x11) {
      CowData<unsigned_char>::resize<false>((CowData<unsigned_char>*)( this + 0x2a0 ), (long)( *(int*)( this + 0x2ac ) + 0x11 ));
   }

   CowData<unsigned_char>::_copy_on_write((CowData<unsigned_char>*)( this + 0x2a0 ));
   puVar5 = *(undefined1**)( this + 0x2a0 );
   *puVar5 = 0x16;
   iVar3 = *(int*)( param_2 + 0x24 );
   if (iVar3 != 0) {
      local_110 = *(ObjectID**)param_2;
      local_fc = 1;
      local_c0 = 1;
      uVar29 = *(ulong*)local_110;
      if (uVar29 == 0) goto LAB_0010a25e;
      do {
         uVar31 = (uint)uVar29 & 0xffffff;
         if ((uint)ObjectDB::slot_max <= uVar31) {
            _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0);
            goto LAB_0010a25e;
         }

         while (true) {
            uVar37 = (ulong)local_68 >> 8;
            local_68 = (char*)( uVar37 << 8 );
            LOCK();
            bVar44 = (char)ObjectDB::spin_lock == '\0';
            if (bVar44) {
               ObjectDB::spin_lock._0_1_ = '\x01';
            }

            UNLOCK();
            if (bVar44) break;
            local_68 = (char*)( uVar37 << 8 );
            do {} while ( (char)ObjectDB::spin_lock != '\0' );
         }
;
         puVar32 = (ulong*)( (ulong)uVar31 * 0x10 + ObjectDB::object_slots );
         if (( uVar29 >> 0x18 & 0x7fffffffff ) != ( *puVar32 & 0x7fffffffff )) {
            ObjectDB::spin_lock._0_1_ = '\0';
            goto LAB_0010a25e;
         }

         uVar29 = puVar32[1];
         ObjectDB::spin_lock._0_1_ = '\0';
         if (uVar29 == 0) goto LAB_0010a25e;
         pMVar27 = (MultiplayerSynchronizer*)__dynamic_cast(uVar29, &Object::typeinfo, &MultiplayerSynchronizer::typeinfo, 0);
         if (pMVar27 == (MultiplayerSynchronizer*)0x0) goto LAB_0010a25e;
         lVar28 = MultiplayerSynchronizer::get_replication_config_ptr();
         if (lVar28 == 0) goto LAB_0010a25e;
         cVar25 = _has_authority((Node*)this);
         iVar39 = local_ac;
         if (cVar25 == '\0') goto LAB_0010a25e;
         cVar25 = _verify_synchronizer(this, local_ac, pMVar27, &local_a8);
         if (cVar25 != '\0') {
            lVar28 = *(long*)local_110;
            lVar6 = *(long*)( param_4 + 8 );
            if (( lVar6 != 0 ) && ( *(int*)( param_4 + 0x2c ) != 0 )) {
               lVar7 = *(long*)( param_4 + 0x10 );
               uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_4 + 0x28 ) * 4 );
               uVar40 = CONCAT44(0, uVar31);
               lVar8 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_4 + 0x28 ) * 8 );
               uVar29 = lVar28 * 0x3ffff - 1;
               uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
               uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
               uVar29 = uVar29 >> 0x16 ^ uVar29;
               uVar37 = uVar29 & 0xffffffff;
               if ((int)uVar29 == 0) {
                  uVar37 = 1;
               }

               auVar10._8_8_ = 0;
               auVar10._0_8_ = uVar37 * lVar8;
               auVar17._8_8_ = 0;
               auVar17._0_8_ = uVar40;
               lVar34 = SUB168(auVar10 * auVar17, 8);
               uVar42 = *(uint*)( lVar7 + lVar34 * 4 );
               iVar26 = SUB164(auVar10 * auVar17, 8);
               if (uVar42 != 0) {
                  uVar41 = 0;
                  lVar35 = lVar34;
                  uVar38 = uVar42;
                  iVar33 = iVar26;
                  LAB_0010a108:if (( uVar38 != (uint)uVar37 ) || ( lVar28 != *(long*)( *(long*)( lVar6 + lVar35 * 8 ) + 0x10 ) )) goto LAB_0010a0c0;
                  uVar38 = 0;
                  while (( uVar42 != (uint)uVar37 || ( lVar28 != *(long*)( *(long*)( lVar6 + lVar34 * 8 ) + 0x10 ) ) )) {
                     uVar38 = uVar38 + 1;
                     auVar14._8_8_ = 0;
                     auVar14._0_8_ = ( ulong )(iVar26 + 1) * lVar8;
                     auVar21._8_8_ = 0;
                     auVar21._0_8_ = uVar40;
                     lVar34 = SUB168(auVar14 * auVar21, 8);
                     uVar42 = *(uint*)( lVar7 + lVar34 * 4 );
                     iVar26 = SUB164(auVar14 * auVar21, 8);
                     if (( uVar42 == 0 ) || ( auVar15._8_8_ = 0 ),auVar15._0_8_ = (ulong)uVar42 * lVar8,auVar22._8_8_ = 0,auVar22._0_8_ = uVar40,auVar16._8_8_ = 0,auVar16._0_8_ = ( ulong )(( uVar31 + iVar26 ) - SUB164(auVar15 * auVar22, 8)) * lVar8,auVar23._8_8_ = 0,auVar23._0_8_ = uVar40,SUB164(auVar16 * auVar23, 8) < uVar38) {
                        _err_print_error("operator[]", "./core/templates/hash_map.h", 0x245, "FATAL: Condition \"!exists\" is true.", 0, 0);
                        _err_flush_stdout();
                        /* WARNING: Does not return */
                        pcVar24 = (code*)invalidInstructionException();
                        ( *pcVar24 )();
                     }

                  }
;
               }

            }

            LAB_0010a1bc:MultiplayerSynchronizer::get_delta_state(( ulong ) & local_98, (ulong)pMVar27, (ulong*)param_3);
            if (local_98 != (long*)0x0) {
               iVar26 = (int)local_98[2];
               if (iVar26 != 0) {
                  local_70 = (Variant**)0x0;
                  if (iVar26 < 0) {
                     _err_print_error("resize", "./core/templates/cowdata.h", 0x157, "Condition \"p_size < 0\" is true. Returning: ERR_INVALID_PARAMETER");
                  }
 else {
                     CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*>*)&local_70);
                     uVar29 = (long)iVar26 * 8 - 1;
                     uVar29 = uVar29 | uVar29 >> 1;
                     uVar29 = uVar29 | uVar29 >> 2;
                     uVar29 = uVar29 | uVar29 >> 4;
                     uVar29 = uVar29 | uVar29 >> 8;
                     uVar29 = uVar29 | uVar29 >> 0x10;
                     puVar30 = (undefined8*)Memory::alloc_static(( uVar29 | uVar29 >> 0x20 ) + 0x11, false);
                     if (puVar30 == (undefined8*)0x0) {
                        _err_print_error("resize", "./core/templates/cowdata.h", 0x171, "Parameter \"mem_new\" is null.");
                     }
 else {
                        local_70 = (Variant**)( puVar30 + 2 );
                        *puVar30 = 1;
                        puVar30[1] = (long)iVar26;
                     }

                  }

                  CowData<Variant_const*>::_copy_on_write((CowData<Variant_const*>*)&local_70);
                  ppVVar1 = local_70;
                  if (local_98 != (long*)0x0) {
                     ppVVar36 = local_70;
                     for (pVVar9 = (Variant*)*local_98; pVVar9 != (Variant*)0x0; pVVar9 = *(Variant**)( pVVar9 + 0x18 )) {
                        *ppVVar36 = pVVar9;
                        ppVVar36 = ppVVar36 + 1;
                     }

                  }

                  if (local_70 == (Variant**)0x0) {
                     iVar26 = 0;
                  }
 else {
                     iVar26 = *(int*)( local_70 + -1 );
                  }

                  iVar26 = MultiplayerAPI::encode_and_compress_variants(local_70, iVar26, (uchar*)0x0, (int*)&local_a4, (bool*)0x0, false);
                  if (iVar26 == 0) {
                     if (*(int*)( this + 0x2ac ) < (int)local_a4) {
                        Node::get_path();
                        uVar31 = local_a4;
                        local_80[0] = 0;
                        uVar4 = *(undefined4*)( this + 0x2ac );
                        local_60 = 0x41;
                        local_68 = "Synchronizer delta bigger than MTU will not be sent (%d > %d): %s";
                        String::parse_latin1((StrRange*)local_80);
                        vformat<int,int,NodePath>((StringName*)&local_68, (StrRange*)local_80, uVar31, uVar4, (NodePath*)&local_88);
                        _err_print_error("_send_delta", "modules/multiplayer/scene_replication_interface.cpp", 0x2e7, "Condition \"size > delta_mtu\" is true. Continuing.", (StringName*)&local_68, 0, 0);
                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_68);
                        CowData<char32_t>::_unref((CowData<char32_t>*)local_80);
                        NodePath::~NodePath((NodePath*)&local_88);
                     }
 else {
                        if (*(int*)( this + 0x2ac ) < (int)( local_a4 + 0x10 + local_c0 )) {
                           _send_raw(this, *(uchar**)( this + 0x2a0 ), local_c0, iVar39, true);
                           local_c0 = 1;
                        }

                        if (local_a4 != 0) {
                           puVar43 = puVar5 + local_c0;
                           uVar29 = MultiplayerSynchronizer::get_net_id();
                           puVar2 = puVar43 + 4;
                           do {
                              *puVar43 = (char)uVar29;
                              puVar43 = puVar43 + 1;
                              uVar29 = uVar29 >> 8 & 0xffffff;
                           }
 while ( puVar2 != puVar43 );
                           puVar43 = puVar5 + ( local_c0 + 4 );
                           puVar2 = puVar43 + 8;
                           uVar29 = local_a0;
                           do {
                              *puVar43 = (char)uVar29;
                              puVar43 = puVar43 + 1;
                              uVar29 = uVar29 >> 8;
                           }
 while ( puVar2 != puVar43 );
                           puVar43 = puVar5 + ( local_c0 + 0xc );
                           puVar2 = puVar43 + 4;
                           uVar31 = local_a4;
                           do {
                              *puVar43 = (char)uVar31;
                              puVar43 = puVar43 + 1;
                              uVar31 = uVar31 >> 8;
                           }
 while ( puVar43 != puVar2 );
                           if (ppVVar1 == (Variant**)0x0) {
                              iVar39 = 0;
                           }
 else {
                              iVar39 = *(int*)( ppVVar1 + -1 );
                           }

                           MultiplayerAPI::encode_and_compress_variants(ppVVar1, iVar39, puVar5 + ( local_c0 + 0x10 ), (int*)&local_a4, (bool*)0x0, false);
                           local_c0 = local_a4 + local_c0 + 0x10;
                        }

                        uVar31 = local_a4;
                        local_90 = 0;
                        local_68 = "delta_out";
                        local_60 = 9;
                        String::parse_latin1((StrRange*)&local_90);
                        local_88 = *(undefined8*)local_110;
                        StringName::StringName((StringName*)&local_68, "multiplayer:replication", false);
                        cVar25 = EngineDebugger::is_profiling((StringName*)&local_68);
                        if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                           StringName::unref();
                        }

                        if (cVar25 != '\0') {
                           Array::Array((Array*)local_80);
                           Variant::Variant((Variant*)local_58, (String_conflict*)&local_90);
                           Array::push_back((Variant*)local_80);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Variant::Variant((Variant*)local_58, (ObjectID*)&local_88);
                           Array::push_back((Variant*)local_80);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           Variant::Variant((Variant*)local_58, uVar31);
                           Array::push_back((Variant*)local_80);
                           if (Variant::needs_deinit[local_58[0]] != '\0') {
                              Variant::_clear_internal();
                           }

                           StringName::StringName((StringName*)&local_68, "multiplayer:replication", false);
                           EngineDebugger::profiler_add_frame_data((StringName*)&local_68, (Array*)local_80);
                           if (( StringName::configured != '\0' ) && ( local_68 != (char*)0x0 )) {
                              StringName::unref();
                           }

                           Array::~Array((Array*)local_80);
                        }

                        CowData<char32_t>::_unref((CowData<char32_t>*)&local_90);
                        lVar28 = HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator []((HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>*)( this + 0x180 ), &local_ac);
                        puVar32 = (ulong*)HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::operator []((HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>*)( lVar28 + 0x50 ), local_110);
                        *puVar32 = param_3;
                     }

                  }
 else {
                     _err_print_error("_send_delta", "modules/multiplayer/scene_replication_interface.cpp", 0x2e5, "Condition \"err != OK\" is true. Continuing.", "Unable to encode delta state.", 0, 0);
                  }

                  if (ppVVar1 != (Variant**)0x0) {
                     LOCK();
                     ppVVar1 = ppVVar1 + -2;
                     *ppVVar1 = *ppVVar1 + -1;
                     UNLOCK();
                     if (*ppVVar1 == (Variant*)0x0) {
                        Memory::free_static(local_70 + -2, false);
                     }

                  }

               }

            }

            List<Variant,DefaultAllocator>::~List((List<Variant,DefaultAllocator>*)&local_98);
         }

         while (true) {
            if (iVar3 <= local_fc) {
               if (1 < local_c0) {
                  _send_raw(this, *(uchar**)( this + 0x2a0 ), local_c0, local_ac, true);
               }

               goto LAB_0010a216;
            }

            local_fc = local_fc + 1;
            local_110 = local_110 + 8;
            uVar29 = *(ulong*)local_110;
            if (uVar29 != 0) break;
            LAB_0010a25e:_err_print_error("_send_delta", "modules/multiplayer/scene_replication_interface.cpp", 0x2ce, "Condition \"!sync || !sync->get_replication_config_ptr() || !_has_authority(sync)\" is true. Continuing.", 0);
         }
;
      }
 while ( true );
   }

   LAB_0010a216:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
   LAB_0010a0c0:uVar41 = uVar41 + 1;
   auVar11._8_8_ = 0;
   auVar11._0_8_ = ( ulong )(iVar33 + 1) * lVar8;
   auVar18._8_8_ = 0;
   auVar18._0_8_ = uVar40;
   lVar35 = SUB168(auVar11 * auVar18, 8);
   uVar38 = *(uint*)( lVar7 + lVar35 * 4 );
   iVar33 = SUB164(auVar11 * auVar18, 8);
   if (( uVar38 == 0 ) || ( auVar12._8_8_ = 0 ),auVar12._0_8_ = (ulong)uVar38 * lVar8,auVar19._8_8_ = 0,auVar19._0_8_ = uVar40,auVar13._8_8_ = 0,auVar13._0_8_ = ( ulong )(( uVar31 + iVar33 ) - SUB164(auVar12 * auVar19, 8)) * lVar8,auVar20._8_8_ = 0,auVar20._0_8_ = uVar40,SUB164(auVar13 * auVar20, 8) < uVar41) goto LAB_0010a1bc;
   goto LAB_0010a108;
}
/* SceneReplicationInterface::on_network_process() */void SceneReplicationInterface::on_network_process(SceneReplicationInterface *this) {
   ulong uVar1;
   uint uVar2;
   int iVar3;
   undefined8 *puVar4;
   long lVar5;
   ulong *puVar6;
   code *pcVar7;
   undefined1 auVar8[16];
   undefined1 auVar9[16];
   undefined1 auVar10[15];
   char cVar11;
   long *plVar12;
   ulong uVar13;
   void *__s;
   void *pvVar14;
   void *pvVar15;
   void *pvVar16;
   long lVar17;
   uint uVar18;
   ulong *puVar19;
   ushort uVar20;
   long lVar21;
   ulong uVar22;
   long in_FS_OFFSET;
   bool bVar23;
   undefined1 local_68[8];
   void *pvStack_60;
   undefined1 local_58[16];
   ulong local_48;
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   if (*(int*)( this + 0x25c ) != 0) {
      _err_print_error("on_network_process", "modules/multiplayer/scene_replication_interface.cpp", 0x85, "An error happened during last spawn, this usually means the \'ready\' signal was not emitted by the spawned node.", 0, 0);
      iVar3 = *(int*)( this + 0x25c );
      if (iVar3 != 0) {
         puVar6 = *(ulong**)( this + 0x238 );
         lVar21 = 0;
         uVar13 = *puVar6;
         if (uVar13 == 0) goto LAB_0010acee;
         do {
            uVar18 = (uint)uVar13 & 0xffffff;
            if ((uint)ObjectDB::slot_max <= uVar18) {
               _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
               goto LAB_0010acee;
            }

            while (true) {
               auVar10 = stack0xffffffffffffff99;
               auVar8[0xf] = 0;
               auVar8._0_15_ = stack0xffffffffffffff99;
               _local_68 = auVar8 << 8;
               LOCK();
               bVar23 = (char)ObjectDB::spin_lock == '\0';
               if (bVar23) {
                  ObjectDB::spin_lock._0_1_ = '\x01';
               }

               UNLOCK();
               if (bVar23) break;
               auVar9[0xf] = 0;
               auVar9._0_15_ = auVar10;
               _local_68 = auVar9 << 8;
               do {} while ( (char)ObjectDB::spin_lock != '\0' );
            }
;
            puVar19 = (ulong*)( (ulong)uVar18 * 0x10 + ObjectDB::object_slots );
            if (( uVar13 >> 0x18 & 0x7fffffffff ) != ( *puVar19 & 0x7fffffffff )) {
               ObjectDB::spin_lock._0_1_ = '\0';
               goto LAB_0010acee;
            }

            uVar13 = puVar19[1];
            ObjectDB::spin_lock._0_1_ = '\0';
            if (uVar13 == 0) goto LAB_0010acee;
            plVar12 = (long*)__dynamic_cast(uVar13, &Object::typeinfo, &Node::typeinfo, 0);
            if (plVar12 == (long*)0x0) goto LAB_0010acee;
            pcVar7 = *(code**)( *plVar12 + 0x118 );
            create_custom_callable_function_pointer<SceneReplicationInterface,ObjectID_const&>((SceneReplicationInterface*)local_68, (char*)this, (_func_void_ObjectID_ptr*)"&SceneReplicationInterface::_node_ready");
            cVar11 = ( *pcVar7 )(plVar12, SceneStringNames::singleton + 0x50, (SceneReplicationInterface*)local_68);
            Callable::~Callable((Callable*)local_68);
            if (cVar11 != '\0') {
               pcVar7 = *(code**)( *plVar12 + 0x110 );
               create_custom_callable_function_pointer<SceneReplicationInterface,ObjectID_const&>((SceneReplicationInterface*)local_68, (char*)this, (_func_void_ObjectID_ptr*)"&SceneReplicationInterface::_node_ready");
               ( *pcVar7 )(plVar12, SceneStringNames::singleton + 0x50, (SceneReplicationInterface*)local_68);
               Callable::~Callable((Callable*)local_68);
            }

            while (true) {
               if (iVar3 <= (int)lVar21 + 1) {
                  if (( *(long*)( this + 0x238 ) != 0 ) && ( *(int*)( this + 0x25c ) != 0 )) {
                     if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 600 ) * 4 ) != 0) {
                        memset(*(void**)( this + 0x250 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 600 ) * 4 ) * 4);
                     }

                     *(undefined4*)( this + 0x25c ) = 0;
                  }

                  goto LAB_0010a8e3;
               }

               lVar21 = lVar21 + 1;
               uVar13 = puVar6[lVar21];
               if (uVar13 != 0) break;
               LAB_0010acee:_err_print_error("on_network_process", "modules/multiplayer/scene_replication_interface.cpp", 0x88, "Condition \"!node\" is true. Continuing.", 0, 0);
            }
;
         }
 while ( true );
      }

   }

   LAB_0010a8e3:plVar12 = (long*)OS::get_singleton();
   uVar13 = ( **(code**)( *plVar12 + 0x208 ) )(plVar12);
   for (puVar4 = *(undefined8**)( this + 0x198 ); puVar4 != (undefined8*)0x0; puVar4 = (undefined8*)*puVar4) {
      _local_68 = (undefined1[16])0x0;
      local_58 = (undefined1[16])0x0;
      local_48 = puVar4[7];
      uVar18 = ( uint )(local_48 >> 0x20);
      if (uVar18 != 0) {
         uVar2 = *(uint*)( hash_table_size_primes + ( local_48 & 0xffffffff ) * 4 );
         uVar22 = (ulong)uVar2;
         uVar1 = uVar22 * 4;
         __s = (void*)Memory::alloc_static(uVar1, false);
         local_58._8_8_ = __s;
         pvVar14 = (void*)Memory::alloc_static(uVar22 * 8, false);
         local_68 = (undefined1[8])pvVar14;
         pvVar15 = (void*)Memory::alloc_static(uVar1, false);
         local_58._0_8_ = pvVar15;
         pvVar16 = (void*)Memory::alloc_static(uVar1, false);
         lVar21 = puVar4[3];
         lVar5 = puVar4[5];
         pvStack_60 = pvVar16;
         lVar17 = 0;
         do {
            *(undefined8*)( (long)pvVar14 + lVar17 * 2 ) = *(undefined8*)( lVar21 + lVar17 * 2 );
            *(undefined4*)( (long)pvVar15 + lVar17 ) = *(undefined4*)( lVar5 + lVar17 );
            lVar17 = lVar17 + 4;
         }
 while ( (ulong)uVar18 << 2 != lVar17 );
         uVar20 = *(short*)( puVar4 + 0x1f ) + 1;
         if (uVar2 == 0) {
            *(ushort*)( puVar4 + 0x1f ) = uVar20;
            _send_sync((int)this, (HashSet*)( ulong ) * (uint*)( puVar4 + 2 ), (ushort)(HashSet*)local_68, (ulong)(uint)uVar20);
            _send_delta(this, *(int*)( puVar4 + 2 ), (HashSet*)local_68, uVar13, (HashMap*)( puVar4 + 0xd ));
         }
 else {
            lVar21 = puVar4[6];
            lVar5 = puVar4[4];
            lVar17 = 0;
            do {
               *(undefined4*)( (long)__s + lVar17 ) = *(undefined4*)( lVar21 + lVar17 );
               *(undefined4*)( (long)pvVar16 + lVar17 ) = *(undefined4*)( lVar5 + lVar17 );
               lVar17 = lVar17 + 4;
            }
 while ( uVar1 - lVar17 != 0 );
            *(ushort*)( puVar4 + 0x1f ) = uVar20;
            _send_sync((int)this, (HashSet*)( ulong ) * (uint*)( puVar4 + 2 ), (ushort)(HashSet*)local_68, (ulong)(uint)uVar20);
            _send_delta(this, *(int*)( puVar4 + 2 ), (HashSet*)local_68, uVar13, (HashMap*)( puVar4 + 0xd ));
            memset(__s, 0, uVar22 << 2);
         }

         Memory::free_static(pvVar14, false);
         Memory::free_static(pvVar15, false);
         Memory::free_static(pvVar16, false);
         Memory::free_static(__s, false);
      }

   }

   if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
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
/* CallableCustomMethodPointer<SceneReplicationInterface, void, int,
   ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID> *this) {
   return;
}
/* CallableCustomMethodPointer<SceneReplicationInterface, void, ObjectID
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&> *this) {
   return;
}
/* CallableCustomMethodPointer<SceneReplicationInterface, void, int,
   ObjectID>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID>::get_argument_count(CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID> *this, bool *param_1) {
   *param_1 = true;
   return 2;
}
/* CallableCustomMethodPointer<SceneReplicationInterface, void, ObjectID
   const&>::get_argument_count(bool&) const */undefined8 CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&>::get_argument_count(CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&> *this, bool *param_1) {
   *param_1 = true;
   return 1;
}
/* CallableCustomMethodPointer<SceneReplicationInterface, void, ObjectID
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointer<SceneReplicationInterface, void, int,
   ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID> *this) {
   operator_delete(this, 0x48);
   return;
}
/* CallableCustomMethodPointerBase::get_method() const */void CallableCustomMethodPointerBase::get_method(void) {
   long in_RSI;
   StringName *in_RDI;
   StringName::StringName(in_RDI, *(char**)( in_RSI + 0x20 ), false);
   return;
}
/* CowData<unsigned char>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CowData<Variant const*>::_copy_on_write() [clone .isra.0] [clone .cold] */void CowData<Variant_const*>::_copy_on_write(void) {
   code *pcVar1;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* SceneReplicationInterface::_track(ObjectID const&) [clone .cold] */void SceneReplicationInterface::_track(ObjectID *param_1) {
   code *pcVar1;
   _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* Error CowData<unsigned char>::resize<false>(long) [clone .isra.0] [clone .cold] */void CowData<unsigned_char>::resize<false>(long param_1) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */void FUN_0010b314(void) {
   code *pcVar1;
   _DAT_00000000 = 0;
   /* WARNING: Does not return */
   pcVar1 = (code*)invalidInstructionException();
   ( *pcVar1 )();
}
/* CallableCustomMethodPointer<SceneReplicationInterface, void, int, ObjectID>::get_object() const
    */undefined8 CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID>::get_object(CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID> *this) {
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
         goto LAB_0010b40d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010b40d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010b40d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return uVar2;
}
/* CallableCustomMethodPointer<SceneReplicationInterface, void, ObjectID const&>::get_object() const
    */undefined8 CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&>::get_object(CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&> *this) {
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
         goto LAB_0010b50d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar4[1] != 0) {
         uVar2 = *(undefined8*)( *(long*)( this + 0x28 ) + 0x60 );
         goto LAB_0010b50d;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
   }

   uVar2 = 0;
   LAB_0010b50d:if (lVar1 != *(long*)( in_FS_OFFSET + 0x28 )) {
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
/* SceneReplicationInterface::PeerInfo::~PeerInfo() */void SceneReplicationInterface::PeerInfo::~PeerInfo(PeerInfo *this) {
   uint uVar1;
   long lVar2;
   void *pvVar3;
   pvVar3 = *(void**)( this + 0xb8 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0xdc ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xd8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xdc ) = 0;
            *(undefined1(*) [16])( this + 200 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0xc0 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( this + 0xc0 ) + lVar2 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar3 + lVar2 * 2 ), false);
                  pvVar3 = *(void**)( this + 0xb8 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar2 );
            *(undefined4*)( this + 0xdc ) = 0;
            *(undefined1(*) [16])( this + 200 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010ca89;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0xc0 ), false);
   }

   LAB_0010ca89:pvVar3 = *(void**)( this + 0x88 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0xac ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0xa8 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0xac ) = 0;
            *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x90 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( this + 0x90 ) + lVar2 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar3 + lVar2 * 2 ), false);
                  pvVar3 = *(void**)( this + 0x88 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( (ulong)uVar1 << 2 != lVar2 );
            *(undefined4*)( this + 0xac ) = 0;
            *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010cb29;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x90 ), false);
   }

   LAB_0010cb29:pvVar3 = *(void**)( this + 0x58 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x7c ) != 0) {
         uVar1 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x78 ) * 4 );
         if (uVar1 == 0) {
            *(undefined4*)( this + 0x7c ) = 0;
            *(undefined1(*) [16])( this + 0x68 ) = (undefined1[16])0x0;
         }
 else {
            lVar2 = 0;
            do {
               if (*(int*)( *(long*)( this + 0x60 ) + lVar2 ) != 0) {
                  *(int*)( *(long*)( this + 0x60 ) + lVar2 ) = 0;
                  Memory::free_static(*(void**)( (long)pvVar3 + lVar2 * 2 ), false);
                  pvVar3 = *(void**)( this + 0x58 );
                  *(undefined8*)( (long)pvVar3 + lVar2 * 2 ) = 0;
               }

               lVar2 = lVar2 + 4;
            }
 while ( lVar2 != (ulong)uVar1 << 2 );
            *(undefined4*)( this + 0x7c ) = 0;
            *(undefined1(*) [16])( this + 0x68 ) = (undefined1[16])0x0;
            if (pvVar3 == (void*)0x0) goto LAB_0010cbab;
         }

      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x60 ), false);
   }

   LAB_0010cbab:pvVar3 = *(void**)( this + 0x28 );
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x4c ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x48 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x40 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x48 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0x4c ) = 0;
      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x38 ), false);
      Memory::free_static(*(void**)( this + 0x30 ), false);
      Memory::free_static(*(void**)( this + 0x40 ), false);
   }

   pvVar3 = *(void**)this;
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x24 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0x24 ) = 0;
      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
      return;
   }

   return;
}
/* List<NodePath, DefaultAllocator>::~List() */void List<NodePath,DefaultAllocator>::~List(List<NodePath,DefaultAllocator> *this) {
   NodePath *this_00;
   long lVar1;
   long lVar2;
   long *plVar3;
   plVar3 = *(long**)this;
   if (plVar3 == (long*)0x0) {
      return;
   }

   do {
      this_00 = (NodePath*)*plVar3;
      if (this_00 == (NodePath*)0x0) {
         if ((int)plVar3[2] != 0) {
            _err_print_error("~List", "./core/templates/list.h", 0x316, "Condition \"_data->size_cache\" is true.", 0, 0);
            return;
         }

         break;
      }

      if (*(long**)( this_00 + 0x18 ) == plVar3) {
         lVar2 = *(long*)( this_00 + 8 );
         lVar1 = *(long*)( this_00 + 0x10 );
         *plVar3 = lVar2;
         if (this_00 == (NodePath*)plVar3[1]) {
            plVar3[1] = lVar1;
         }

         if (lVar1 != 0) {
            *(long*)( lVar1 + 8 ) = lVar2;
            lVar2 = *(long*)( this_00 + 8 );
         }

         if (lVar2 != 0) {
            *(long*)( lVar2 + 0x10 ) = lVar1;
         }

         NodePath::~NodePath(this_00);
         Memory::free_static(this_00, false);
         *(int*)( plVar3 + 2 ) = (int)plVar3[2] + -1;
      }
 else {
         _err_print_error("erase", "./core/templates/list.h", 0xe7, "Condition \"p_I->data != this\" is true. Returning: false", 0, 0);
      }

      plVar3 = *(long**)this;
   }
 while ( (int)plVar3[2] != 0 );
   Memory::free_static(plVar3, false);
   return;
}
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>
   >::TEMPNAMEPLACEHOLDERVALUE(HashSet<ObjectID, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID> > const&) */void HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator =(HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *this, HashSet *param_1) {
   ulong uVar1;
   uint uVar2;
   void *pvVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   ulong uVar11;
   if (this == (HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)param_1) {
      return;
   }

   pvVar3 = *(void**)this;
   if (pvVar3 != (void*)0x0) {
      if (*(int*)( this + 0x24 ) != 0) {
         if (*(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) != 0) {
            memset(*(void**)( this + 0x18 ), 0, ( ulong ) * (uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x20 ) * 4 ) << 2);
         }

         *(undefined4*)( this + 0x24 ) = 0;
      }

      Memory::free_static(pvVar3, false);
      Memory::free_static(*(void**)( this + 0x10 ), false);
      Memory::free_static(*(void**)( this + 8 ), false);
      Memory::free_static(*(void**)( this + 0x18 ), false);
      *(undefined1(*) [16])this = (undefined1[16])0x0;
      *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   }

   uVar1 = *(ulong*)( param_1 + 0x20 );
   *(ulong*)( this + 0x20 ) = uVar1;
   if ((int)( uVar1 >> 0x20 ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
      uVar1 = (ulong)uVar2 * 4;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x18 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar2 * 8, false);
      *(undefined8*)this = uVar8;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x10 ) = uVar8;
      lVar9 = Memory::alloc_static(uVar1, false);
      *(long*)( this + 8 ) = lVar9;
      if (*(int*)( this + 0x24 ) != 0) {
         lVar4 = *(long*)this;
         lVar5 = *(long*)param_1;
         lVar10 = 0;
         lVar6 = *(long*)( param_1 + 0x10 );
         lVar7 = *(long*)( this + 0x10 );
         do {
            *(undefined8*)( lVar4 + lVar10 * 8 ) = *(undefined8*)( lVar5 + lVar10 * 8 );
            *(undefined4*)( lVar7 + lVar10 * 4 ) = *(undefined4*)( lVar6 + lVar10 * 4 );
            lVar10 = lVar10 + 1;
         }
 while ( (uint)lVar10 < *(uint*)( this + 0x24 ) );
      }

      if (uVar2 != 0) {
         lVar4 = *(long*)( param_1 + 0x18 );
         lVar5 = *(long*)( this + 0x18 );
         uVar11 = 0;
         lVar6 = *(long*)( param_1 + 8 );
         do {
            *(undefined4*)( lVar5 + uVar11 ) = *(undefined4*)( lVar4 + uVar11 );
            *(undefined4*)( lVar9 + uVar11 ) = *(undefined4*)( lVar6 + uVar11 );
            uVar11 = uVar11 + 4;
         }
 while ( uVar11 != uVar1 );
         return;
      }

   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, SceneReplicationInterface::TrackedNode, HashMapHasherDefault,
   HashMapComparatorDefault<ObjectID>, DefaultTypedAllocator<HashMapElement<ObjectID,
   SceneReplicationInterface::TrackedNode> > >::operator[](ObjectID const&) */undefined1 * __thiscallHashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>>::operator [](HashMap<ObjectID,SceneReplicationInterface::TrackedNode,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,SceneReplicationInterface::TrackedNode>>> * this, ObjectID * param_1) * puVar1 ;undefined8 *puVar2long lVar3long lVar4void *pvVar5void *__sundefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]undefined1 auVar29[16]undefined1(*pauVar30)[16];undefined8 uVar31char cVar32ulong uVar33ulong uVar34undefined8 uVar35void *__s_00undefined1(*pauVar36)[16];void *pvVar37uint uVar38int iVar39long lVar40long lVar41uint uVar42ulong uVar43undefined8 uVar44uint uVar45uint uVar46uint uVar47ObjectID *pOVar48undefined1(*pauVar49)[16];long in_FS_OFFSETuint local_138uint local_dcundefined8 local_d8undefined8 local_d0undefined8 local_c8HashSet local_c0[16]undefined1 local_b0[16]undefined8 local_a0undefined8 local_88undefined8 local_80undefined8 local_70long local_40uVar31 = _LC38;lVar3 = *(long*)( this + 8 );pOVar48 = *(ObjectID**)param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar34 = CONCAT44(0, uVar42);if (lVar3 == 0) {
   uVar33 = uVar34 * 4;
   for (int i = 0; i < 16; i++) {
      local_c0[i] = (HashSet)0;
   }

   uVar43 = uVar34 * 8;
   local_b0 = (undefined1[16])0x0;
   local_d8 = 0;
   local_d0 = 0;
   local_c8 = 0;
   local_a0 = _LC38;
   uVar35 = Memory::alloc_static(uVar33, false);
   *(undefined8*)( this + 0x10 ) = uVar35;
   pvVar37 = (void*)Memory::alloc_static(uVar43, false);
   *(void**)( this + 8 ) = pvVar37;
   if (uVar42 != 0) {
      pvVar5 = *(void**)( this + 0x10 );
      if (( pvVar5 < (void*)( (long)pvVar37 + uVar43 ) ) && ( pvVar37 < (void*)( (long)pvVar5 + uVar33 ) )) {
         uVar33 = 0;
         do {
            *(undefined4*)( (long)pvVar5 + uVar33 * 4 ) = 0;
            *(undefined8*)( (long)pvVar37 + uVar33 * 8 ) = 0;
            uVar33 = uVar33 + 1;
         }
 while ( uVar34 != uVar33 );
      }
 else {
         memset(pvVar5, 0, uVar33);
         memset(pvVar37, 0, uVar43);
      }

   }

   pOVar48 = *(ObjectID**)param_1;
}
 else {
   if (*(int*)( this + 0x2c ) != 0) {
      lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
      uVar33 = (long)pOVar48 * 0x3ffff - 1;
      uVar33 = ( uVar33 ^ uVar33 >> 0x1f ) * 0x15;
      uVar33 = ( uVar33 ^ uVar33 >> 0xb ) * 0x41;
      uVar33 = uVar33 >> 0x16 ^ uVar33;
      uVar43 = uVar33 & 0xffffffff;
      if ((int)uVar33 == 0) {
         uVar43 = 1;
      }

      auVar6._8_8_ = 0;
      auVar6._0_8_ = uVar43 * lVar4;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      lVar40 = SUB168(auVar6 * auVar18, 8);
      uVar45 = *(uint*)( *(long*)( this + 0x10 ) + lVar40 * 4 );
      uVar38 = SUB164(auVar6 * auVar18, 8);
      if (uVar45 != 0) {
         uVar47 = 0;
         do {
            if (( uVar45 == (uint)uVar43 ) && ( pOVar48 == *(ObjectID**)( *(long*)( lVar3 + lVar40 * 8 ) + 0x10 ) )) {
               pauVar36 = *(undefined1(**) [16])( lVar3 + (ulong)uVar38 * 8 );
               goto LAB_0010d201;
            }

            uVar47 = uVar47 + 1;
            auVar7._8_8_ = 0;
            auVar7._0_8_ = ( ulong )(uVar38 + 1) * lVar4;
            auVar19._8_8_ = 0;
            auVar19._0_8_ = uVar34;
            lVar40 = SUB168(auVar7 * auVar19, 8);
            uVar45 = *(uint*)( *(long*)( this + 0x10 ) + lVar40 * 4 );
            uVar38 = SUB164(auVar7 * auVar19, 8);
         }
 while ( ( uVar45 != 0 ) && ( auVar8._8_8_ = 0 ),auVar8._0_8_ = (ulong)uVar45 * lVar4,auVar20._8_8_ = 0,auVar20._0_8_ = uVar34,auVar9._8_8_ = 0,auVar9._0_8_ = ( ulong )(( uVar38 + uVar42 ) - SUB164(auVar8 * auVar20, 8)) * lVar4,auVar21._8_8_ = 0,auVar21._0_8_ = uVar34,uVar47 <= SUB164(auVar9 * auVar21, 8) );
      }

   }

   local_d8 = 0;
   local_d0 = 0;
   local_c8 = 0;
   local_a0 = _LC38;
   for (int i = 0; i < 16; i++) {
      local_c0[i] = (HashSet)0;
   }

   local_b0 = (undefined1[16])0x0;
}
local_dc = 0;cVar32 = _lookup_pos(this, pOVar48, &local_dc);if (cVar32 == '\0') {
   if ((float)uVar34 * __LC33 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar42 = *(uint*)( this + 0x28 );
      if (uVar42 == 0x1c) {
         pauVar36 = (undefined1(*) [16])0x0;
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         goto LAB_0010d201;
      }

      uVar34 = ( ulong )(uVar42 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar45 = *(uint*)( hash_table_size_primes + (ulong)uVar42 * 4 );
      if (uVar42 + 1 < 2) {
         uVar34 = 2;
      }

      uVar42 = *(uint*)( hash_table_size_primes + uVar34 * 4 );
      uVar43 = (ulong)uVar42;
      *(int*)( this + 0x28 ) = (int)uVar34;
      pvVar37 = *(void**)( this + 8 );
      uVar34 = uVar43 * 4;
      uVar33 = uVar43 * 8;
      pvVar5 = *(void**)( this + 0x10 );
      uVar35 = Memory::alloc_static(uVar34, false);
      *(undefined8*)( this + 0x10 ) = uVar35;
      __s_00 = (void*)Memory::alloc_static(uVar33, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar42 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar33 ) ) && ( __s_00 < (void*)( (long)__s + uVar34 ) )) {
            uVar34 = 0;
            do {
               *(undefined4*)( (long)__s + uVar34 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar34 * 8 ) = 0;
               uVar34 = uVar34 + 1;
            }
 while ( uVar43 != uVar34 );
         }
 else {
            memset(__s, 0, uVar34);
            memset(__s_00, 0, uVar33);
         }

      }

      if (uVar45 != 0) {
         uVar34 = 0;
         do {
            uVar42 = *(uint*)( (long)pvVar5 + uVar34 * 4 );
            if (uVar42 != 0) {
               lVar3 = *(long*)( this + 0x10 );
               uVar46 = 0;
               uVar38 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar33 = CONCAT44(0, uVar38);
               lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar10._8_8_ = 0;
               auVar10._0_8_ = (ulong)uVar42 * lVar4;
               auVar22._8_8_ = 0;
               auVar22._0_8_ = uVar33;
               lVar40 = SUB168(auVar10 * auVar22, 8);
               puVar1 = (uint*)( lVar3 + lVar40 * 4 );
               iVar39 = SUB164(auVar10 * auVar22, 8);
               uVar47 = *puVar1;
               uVar35 = *(undefined8*)( (long)pvVar37 + uVar34 * 8 );
               while (uVar47 != 0) {
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = (ulong)uVar47 * lVar4;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar33;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(( uVar38 + iVar39 ) - SUB164(auVar11 * auVar23, 8)) * lVar4;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar33;
                  local_138 = SUB164(auVar12 * auVar24, 8);
                  uVar44 = uVar35;
                  if (local_138 < uVar46) {
                     *puVar1 = uVar42;
                     puVar2 = (undefined8*)( (long)__s_00 + lVar40 * 8 );
                     uVar44 = *puVar2;
                     *puVar2 = uVar35;
                     uVar42 = uVar47;
                     uVar46 = local_138;
                  }

                  uVar46 = uVar46 + 1;
                  auVar13._8_8_ = 0;
                  auVar13._0_8_ = ( ulong )(iVar39 + 1) * lVar4;
                  auVar25._8_8_ = 0;
                  auVar25._0_8_ = uVar33;
                  lVar40 = SUB168(auVar13 * auVar25, 8);
                  puVar1 = (uint*)( lVar3 + lVar40 * 4 );
                  iVar39 = SUB164(auVar13 * auVar25, 8);
                  uVar35 = uVar44;
                  uVar47 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar40 * 8 ) = uVar35;
               *puVar1 = uVar42;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar34 = uVar34 + 1;
         }
 while ( uVar34 != uVar45 );
         Memory::free_static(pvVar37, false);
         Memory::free_static(pvVar5, false);
      }

   }

   local_88 = *(undefined8*)param_1;
   local_80 = local_d8;
   local_70 = local_c8;
   pauVar36 = (undefined1(*) [16])operator_new(0x58, "");
   *pauVar36 = (undefined1[16])0x0;
   pauVar36[3] = (undefined1[16])0x0;
   *(undefined8*)pauVar36[1] = local_88;
   pauVar36[4] = (undefined1[16])0x0;
   *(undefined8*)( pauVar36[1] + 8 ) = local_80;
   *(undefined8*)pauVar36[2] = 0;
   *(undefined8*)( pauVar36[2] + 8 ) = local_70;
   puVar2 = *(undefined8**)( this + 0x20 );
   *(undefined8*)pauVar36[5] = uVar31;
   if (puVar2 == (undefined8*)0x0) {
      *(undefined1(**) [16])( this + 0x18 ) = pauVar36;
   }
 else {
      *puVar2 = pauVar36;
      *(undefined8**)( *pauVar36 + 8 ) = puVar2;
   }

   lVar3 = *(long*)( this + 0x10 );
   *(undefined1(**) [16])( this + 0x20 ) = pauVar36;
   uVar34 = *(long*)param_1 * 0x3ffff - 1;
   uVar34 = ( uVar34 ^ uVar34 >> 0x1f ) * 0x15;
   uVar34 = ( uVar34 ^ uVar34 >> 0xb ) * 0x41;
   uVar34 = uVar34 >> 0x16 ^ uVar34;
   uVar33 = uVar34 & 0xffffffff;
   if ((int)uVar34 == 0) {
      uVar33 = 1;
   }

   uVar47 = 0;
   lVar4 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar38 = (uint)uVar33;
   uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar42);
   auVar14._8_8_ = 0;
   auVar14._0_8_ = uVar33 * lVar4;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar34;
   lVar41 = SUB168(auVar14 * auVar26, 8);
   lVar40 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar3 + lVar41 * 4 );
   iVar39 = SUB164(auVar14 * auVar26, 8);
   uVar45 = *puVar1;
   pauVar30 = pauVar36;
   while (uVar45 != 0) {
      auVar15._8_8_ = 0;
      auVar15._0_8_ = (ulong)uVar45 * lVar4;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar34;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(( iVar39 + uVar42 ) - SUB164(auVar15 * auVar27, 8)) * lVar4;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar34;
      local_138 = SUB164(auVar16 * auVar28, 8);
      pauVar49 = pauVar30;
      if (local_138 < uVar47) {
         *puVar1 = (uint)uVar33;
         uVar33 = (ulong)uVar45;
         puVar2 = (undefined8*)( lVar40 + lVar41 * 8 );
         pauVar49 = (undefined1(*) [16])*puVar2;
         *puVar2 = pauVar30;
         uVar47 = local_138;
      }

      uVar38 = (uint)uVar33;
      uVar47 = uVar47 + 1;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(iVar39 + 1) * lVar4;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar34;
      lVar41 = SUB168(auVar17 * auVar29, 8);
      puVar1 = (uint*)( lVar3 + lVar41 * 4 );
      iVar39 = SUB164(auVar17 * auVar29, 8);
      pauVar30 = pauVar49;
      uVar45 = *puVar1;
   }
;
   *(undefined1(**) [16])( lVar40 + lVar41 * 8 ) = pauVar30;
   *puVar1 = uVar38;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
}
 else {
   uVar34 = (ulong)local_dc;
   lVar3 = *(long*)( *(long*)( this + 8 ) + uVar34 * 8 );
   *(undefined8*)( lVar3 + 0x18 ) = local_d8;
   *(undefined8*)( lVar3 + 0x20 ) = 0;
   *(undefined8*)( lVar3 + 0x28 ) = local_c8;
   HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator =((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( lVar3 + 0x30 ), local_c0);
   pauVar36 = *(undefined1(**) [16])( *(long*)( this + 8 ) + uVar34 * 8 );
}
LAB_0010d201:if (local_40 == *(long*)( in_FS_OFFSET + 0x28 )) {
   return pauVar36[1] + 8;
}
/* WARNING: Subroutine does not return */__stack_chk_fail();}/* Callable create_custom_callable_function_pointer<SceneReplicationInterface, ObjectID
   const&>(SceneReplicationInterface*, char const*, void (SceneReplicationInterface::*)(ObjectID
   const&)) */SceneReplicationInterface *create_custom_callable_function_pointer<SceneReplicationInterface,ObjectID_const&>(SceneReplicationInterface *param_1, char *param_2, _func_void_ObjectID_ptr *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC37;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_001127d0;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_ObjectID_ptr**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* Callable Callable::bind<ObjectID>(ObjectID) const */Variant **Callable::bind<ObjectID>(Variant **param_1, int param_2, undefined8 param_3) {
   char cVar1;
   long in_FS_OFFSET;
   undefined8 local_70;
   Variant *local_68;
   int local_58[6];
   undefined8 local_40;
   undefined1 local_38[16];
   long local_20;
   local_20 = *(long*)( in_FS_OFFSET + 0x28 );
   local_70 = param_3;
   Variant::Variant((Variant*)local_58, (ObjectID*)&local_70);
   local_40 = 0;
   local_38 = (undefined1[16])0x0;
   local_68 = (Variant*)local_58;
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

   if (local_20 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return param_1;
   }

   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >::insert(ObjectID
   const&) */undefined1[16];HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::insert(ObjectID *param_1) {
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
   ulong local_70;
   uVar32 = *(uint*)( in_RSI + 4 );
   uVar31 = *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 );
   lVar34 = *in_RSI;
   if (lVar34 == 0) {
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
      lVar34 = *in_RSI;
      local_70 = *in_RDX;
      uVar32 = *(uint*)( in_RSI + 4 );
      if (lVar34 != 0) goto LAB_0010da7f;
   }
 else {
      uVar44 = *(uint*)( (long)in_RSI + 0x24 );
      local_70 = *in_RDX;
      LAB_0010da7f:if (uVar44 != 0) {
         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)uVar32 * 4 ));
         lVar3 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
         uVar33 = local_70 * 0x3ffff - 1;
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
                  if (*(long*)( lVar34 + uStack_98 * 8 ) == local_70) goto LAB_0010df31;
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

   if ((float)uVar31 * __LC33 < (float)( uVar44 + 1 )) {
      if (uVar32 == 0x1c) {
         uStack_98 = 0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar44 = *(uint*)( (long)in_RSI + 0x24 );
         uVar37 = 0xffffffff;
         lVar34 = *in_RSI;
         goto LAB_0010df31;
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
      lVar34 = *in_RSI;
   }

   uVar42 = (ulong)uVar44;
   lVar3 = in_RSI[3];
   lVar36 = *in_RDX;
   *(long*)( lVar34 + uVar42 * 8 ) = lVar36;
   uVar33 = lVar36 * 0x3ffff - 1;
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
   lVar2 = *(long*)( hash_table_size_primes_inv + (ulong)uVar32 * 8 );
   auVar15._8_8_ = 0;
   auVar15._0_8_ = uVar43 * lVar2;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar40;
   lVar36 = SUB168(auVar15 * auVar27, 8) * 4;
   iVar35 = SUB164(auVar15 * auVar27, 8);
   lVar6 = in_RSI[2];
   puVar1 = (uint*)( lVar3 + lVar36 );
   uVar33 = in_RSI[1];
   uVar32 = *puVar1;
   uStack_98 = uVar33;
   uVar38 = uVar42;
   while (uVar32 != 0) {
      auVar16._8_8_ = 0;
      auVar16._0_8_ = (ulong)uVar32 * lVar2;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = ( ulong )(( uVar31 + iVar35 ) - SUB164(auVar16 * auVar28, 8)) * lVar2;
      auVar29._8_8_ = 0;
      auVar29._0_8_ = uVar40;
      uVar32 = SUB164(auVar17 * auVar29, 8);
      if (uVar32 < uVar37) {
         *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
         uVar44 = *puVar1;
         *puVar1 = (uint)uVar43;
         uVar39 = *(uint*)( lVar36 + uVar33 );
         uVar43 = (ulong)uVar44;
         *(uint*)( lVar36 + uVar33 ) = (uint)uVar38;
         uVar42 = (ulong)uVar39;
         uVar38 = uVar42;
         uVar37 = uVar32;
      }

      uVar44 = (uint)uVar38;
      uVar39 = (uint)uVar43;
      uVar37 = uVar37 + 1;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = ( ulong )(iVar35 + 1) * lVar2;
      auVar30._8_8_ = 0;
      auVar30._0_8_ = uVar40;
      uStack_98 = SUB168(auVar18 * auVar30, 8);
      lVar36 = uStack_98 * 4;
      iVar35 = SUB164(auVar18 * auVar30, 8);
      puVar1 = (uint*)( lVar3 + lVar36 );
      uVar32 = *puVar1;
   }
;
   *puVar1 = uVar39;
   *(int*)( lVar6 + uVar42 * 4 ) = iVar35;
   *(uint*)( uVar33 + lVar36 ) = uVar44;
   uVar37 = *(uint*)( (long)in_RSI + 0x24 );
   uVar44 = uVar37 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar44;
   LAB_0010df31:*(uint*)( param_1 + 0xc ) = uVar37;
   *(long*)param_1 = lVar34;
   *(uint*)( param_1 + 8 ) = uVar44;
   auVar45._8_8_ = uStack_98;
   auVar45._0_8_ = param_1;
   return auVar45;
}
/* Callable create_custom_callable_function_pointer<SceneReplicationInterface, int,
   ObjectID>(SceneReplicationInterface*, char const*, void (SceneReplicationInterface::*)(int,
   ObjectID)) */SceneReplicationInterface *create_custom_callable_function_pointer<SceneReplicationInterface,int,ObjectID>(SceneReplicationInterface *param_1, char *param_2, _func_void_int_ObjectID *param_3) {
   undefined8 uVar1;
   CallableCustom *this;
   undefined8 in_RCX;
   undefined8 in_R8;
   this(CallableCustom * operator_new(0x48, ""));
   CallableCustom::CallableCustom(this);
   *(undefined**)( this + 0x20 ) = &_LC37;
   *(undefined1(*) [16])( this + 0x30 ) = (undefined1[16])0x0;
   *(undefined8*)( this + 0x40 ) = 0;
   *(undefined***)this = &PTR_hash_00112860;
   uVar1 = *(undefined8*)( param_2 + 0x60 );
   *(char**)( this + 0x28 ) = param_2;
   *(undefined8*)( this + 0x30 ) = uVar1;
   *(undefined8*)( this + 0x38 ) = in_RCX;
   *(undefined8*)( this + 0x40 ) = in_R8;
   *(undefined8*)( this + 0x10 ) = 0;
   CallableCustomMethodPointerBase::_setup((uint*)this, (int)this + 0x28);
   *(_func_void_int_ObjectID**)( this + 0x20 ) = param_3 + 1;
   Callable::Callable((Callable*)param_1, this);
   return param_1;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashSet<int, HashMapHasherDefault, HashMapComparatorDefault<int> >::insert(int const&) */undefined1[16];HashSet<int,HashMapHasherDefault,HashMapComparatorDefault<int>>::insert(int *param_1) {
   void *pvVar1;
   void *pvVar2;
   long lVar3;
   long lVar4;
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
   uint uVar29;
   uint uVar30;
   uint uVar31;
   uint uVar32;
   ulong uVar33;
   long lVar34;
   long lVar35;
   long lVar36;
   uint *puVar37;
   int iVar38;
   uint *in_RDX;
   long lVar39;
   ulong uVar40;
   uint uVar41;
   long *in_RSI;
   uint uVar42;
   ulong uVar43;
   undefined4 uVar44;
   ulong uVar45;
   uint uVar46;
   uint *puVar47;
   undefined1 auVar48[16];
   long *plStack_98;
   lVar34 = *in_RSI;
   uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   if (lVar34 == 0) {
      uVar33 = (ulong)uVar30 * 4;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar30 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      uVar31 = *in_RDX;
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      if (lVar34 != 0) goto LAB_0010e16a;
   }
 else {
      uVar31 = *in_RDX;
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      LAB_0010e16a:if (uVar42 != 0) {
         uVar33 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
         uVar29 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
         uVar29 = ( uVar29 ^ uVar29 >> 0xd ) * -0x3d4d51cb;
         uVar41 = uVar29 ^ uVar29 >> 0x10;
         if (uVar29 == uVar29 >> 0x10) {
            uVar41 = 1;
            uVar40 = uVar33;
         }
 else {
            uVar40 = uVar41 * uVar33;
         }

         uVar43 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ));
         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar43;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar40;
         lVar39 = SUB168(auVar5 * auVar17, 8);
         iVar38 = SUB164(auVar5 * auVar17, 8);
         uVar29 = *(uint*)( in_RSI[3] + lVar39 * 4 );
         uVar40 = (ulong)uVar29;
         if (uVar29 != 0) {
            uVar29 = 0;
            do {
               if (uVar41 == (uint)uVar40) {
                  uVar32 = *(uint*)( in_RSI[1] + lVar39 * 4 );
                  plStack_98 = (long*)(ulong)uVar32;
                  if (*(uint*)( lVar34 + (long)plStack_98 * 4 ) == uVar31) goto LAB_0010e25f;
               }

               uVar29 = uVar29 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( iVar38 + 1 ) * uVar33;
               auVar18._8_8_ = 0;
               auVar18._0_8_ = uVar43;
               lVar39 = SUB168(auVar6 * auVar18, 8);
               uVar32 = *(uint*)( in_RSI[3] + lVar39 * 4 );
               uVar40 = (ulong)uVar32;
               iVar38 = SUB164(auVar6 * auVar18, 8);
            }
 while ( ( uVar32 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar40 * uVar33,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 ) + iVar38 ) - SUB164(auVar7 * auVar19, 8) ) * uVar33,auVar20._8_8_ = 0,auVar20._0_8_ = uVar43,uVar29 <= SUB164(auVar8 * auVar20, 8) );
         }

      }

   }

   if ((float)uVar30 * __LC33 < (float)( uVar42 + 1 )) {
      if ((int)in_RSI[4] == 0x1c) {
         plStack_98 = (long*)0x0;
         _err_print_error("_insert", "./core/templates/hash_set.h", 0xbf, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: -1", "Hash table maximum capacity reached, aborting insertion.", 0);
         uVar42 = *(uint*)( (long)in_RSI + 0x24 );
         lVar34 = *in_RSI;
         uVar32 = 0xffffffff;
         goto LAB_0010e25f;
      }

      uVar30 = (int)in_RSI[4] + 1;
      uVar33 = (ulong)uVar30;
      if (uVar30 < 2) {
         uVar33 = 2;
      }

      uVar30 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      *(int*)( in_RSI + 4 ) = (int)uVar33;
      pvVar1 = (void*)in_RSI[3];
      uVar33 = (ulong)uVar30 << 2;
      pvVar2 = (void*)in_RSI[2];
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[3] = lVar34;
      lVar34 = Memory::realloc_static((void*)*in_RSI, uVar33, false);
      *in_RSI = lVar34;
      lVar34 = Memory::alloc_static(uVar33, false);
      in_RSI[2] = lVar34;
      lVar34 = Memory::realloc_static((void*)in_RSI[1], uVar33, false);
      in_RSI[1] = lVar34;
      if (uVar30 != 0) {
         memset((void*)in_RSI[3], 0, uVar33);
      }

      if (*(int*)( (long)in_RSI + 0x24 ) != 0) {
         uVar33 = 0;
         lVar39 = in_RSI[3];
         lVar3 = in_RSI[2];
         do {
            uVar45 = uVar33 & 0xffffffff;
            uVar44 = (undefined4)uVar33;
            uVar29 = 0;
            uVar30 = *(uint*)( (long)pvVar1 + ( ulong ) * (uint*)( (long)pvVar2 + uVar33 * 4 ) * 4 );
            uVar40 = (ulong)uVar30;
            lVar35 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
            uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
            uVar43 = CONCAT44(0, uVar42);
            auVar9._8_8_ = 0;
            auVar9._0_8_ = uVar40 * lVar35;
            auVar21._8_8_ = 0;
            auVar21._0_8_ = uVar43;
            lVar36 = SUB168(auVar9 * auVar21, 8) * 4;
            iVar38 = SUB164(auVar9 * auVar21, 8);
            puVar47 = (uint*)( lVar39 + lVar36 );
            uVar31 = *puVar47;
            if (uVar31 == 0) {
               lVar35 = uVar33 * 4;
            }
 else {
               do {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar31 * lVar35;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar43;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( uVar42 + iVar38 ) - SUB164(auVar10 * auVar22, 8)) * lVar35;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar43;
                  uVar30 = SUB164(auVar11 * auVar23, 8);
                  if (uVar30 < uVar29) {
                     *(int*)( lVar3 + uVar45 * 4 ) = iVar38;
                     uVar31 = *puVar47;
                     *puVar47 = (uint)uVar40;
                     uVar29 = *(uint*)( lVar36 + lVar34 );
                     uVar40 = (ulong)uVar31;
                     *(uint*)( lVar36 + lVar34 ) = (uint)uVar45;
                     uVar45 = (ulong)uVar29;
                     uVar29 = uVar30;
                  }

                  uVar44 = (undefined4)uVar45;
                  uVar30 = (uint)uVar40;
                  uVar29 = uVar29 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar38 + 1) * lVar35;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar43;
                  lVar36 = SUB168(auVar12 * auVar24, 8) * 4;
                  iVar38 = SUB164(auVar12 * auVar24, 8);
                  puVar47 = (uint*)( lVar39 + lVar36 );
                  uVar31 = *puVar47;
               }
 while ( uVar31 != 0 );
               lVar35 = uVar45 << 2;
            }

            *puVar47 = uVar30;
            uVar33 = uVar33 + 1;
            *(int*)( lVar3 + lVar35 ) = iVar38;
            *(undefined4*)( lVar34 + lVar36 ) = uVar44;
         }
 while ( (uint)uVar33 < *(uint*)( (long)in_RSI + 0x24 ) );
      }

      Memory::free_static(pvVar1, false);
      Memory::free_static(pvVar2, false);
      uVar42 = *(uint*)( (long)in_RSI + 0x24 );
      lVar34 = *in_RSI;
      uVar31 = *in_RDX;
   }

   uVar30 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
   uVar29 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
   uVar30 = uVar29 ^ uVar29 >> 0x10;
   if (uVar29 == uVar29 >> 0x10) {
      uVar33 = 1;
      uVar30 = 1;
   }
 else {
      uVar33 = (ulong)uVar30;
   }

   uVar41 = 0;
   *(uint*)( lVar34 + (ulong)uVar42 * 4 ) = uVar31;
   lVar3 = in_RSI[3];
   uVar42 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( in_RSI + 4 ) * 4 );
   uVar40 = CONCAT44(0, uVar42);
   lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( in_RSI + 4 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar33 * lVar36;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar40;
   lVar39 = SUB168(auVar13 * auVar25, 8) * 4;
   iVar38 = SUB164(auVar13 * auVar25, 8);
   lVar35 = in_RSI[2];
   puVar47 = (uint*)( lVar3 + lVar39 );
   lVar4 = in_RSI[1];
   uVar31 = *puVar47;
   uVar29 = *(uint*)( (long)in_RSI + 0x24 );
   plStack_98 = in_RSI;
   while (uVar31 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar31 * lVar36;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar40;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( uVar42 + iVar38 ) - SUB164(auVar14 * auVar26, 8)) * lVar36;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar40;
      uVar31 = SUB164(auVar15 * auVar27, 8);
      uVar32 = uVar30;
      uVar46 = uVar29;
      if (uVar31 < uVar41) {
         puVar37 = (uint*)( lVar39 + lVar4 );
         *(int*)( lVar35 + (ulong)uVar29 * 4 ) = iVar38;
         uVar32 = *puVar47;
         *puVar47 = uVar30;
         uVar46 = *puVar37;
         *puVar37 = uVar29;
         uVar41 = uVar31;
      }

      uVar41 = uVar41 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar38 + 1) * lVar36;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar40;
      plStack_98 = SUB168(auVar16 * auVar28, 8);
      lVar39 = (long)plStack_98 * 4;
      iVar38 = SUB164(auVar16 * auVar28, 8);
      puVar47 = (uint*)( lVar3 + lVar39 );
      uVar29 = uVar46;
      uVar30 = uVar32;
      uVar31 = *puVar47;
   }
;
   *puVar47 = uVar30;
   *(int*)( lVar35 + (ulong)uVar29 * 4 ) = iVar38;
   *(uint*)( lVar4 + lVar39 ) = uVar29;
   uVar32 = *(uint*)( (long)in_RSI + 0x24 );
   uVar42 = uVar32 + 1;
   *(uint*)( (long)in_RSI + 0x24 ) = uVar42;
   LAB_0010e25f:param_1[3] = uVar32;
   *(long*)param_1 = lVar34;
   param_1[2] = uVar42;
   auVar48._8_8_ = plStack_98;
   auVar48._0_8_ = param_1;
   return auVar48;
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
/* WARNING: Removing unreachable block (ram,0x0010ea38) *//* WARNING: Removing unreachable block (ram,0x0010ebcd) *//* WARNING: Removing unreachable block (ram,0x0010ebd9) *//* String vformat<NodePath>(String const&, NodePath const) */undefined8 *vformat<NodePath>(undefined8 *param_1, bool *param_2, NodePath *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0010ed70) *//* WARNING: Removing unreachable block (ram,0x0010ef05) *//* WARNING: Removing unreachable block (ram,0x0010ef11) *//* String vformat<int, unsigned int>(String const&, int const, unsigned int const) */String_conflict *vformat<int,unsigned_int>(String_conflict *param_1, int param_2, uint param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0010f068) *//* WARNING: Removing unreachable block (ram,0x0010f1fd) *//* WARNING: Removing unreachable block (ram,0x0010f209) *//* String vformat<String>(String const&, String const) */undefined8 *vformat<String>(undefined8 *param_1, bool *param_2, String_conflict *param_3) {
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
/* WARNING: Removing unreachable block (ram,0x0010f3b0) *//* WARNING: Removing unreachable block (ram,0x0010f545) *//* WARNING: Removing unreachable block (ram,0x0010f551) *//* String vformat<int, int, NodePath>(String const&, int const, int const, NodePath const) */undefined8 *vformat<int,int,NodePath>(undefined8 *param_1, bool *param_2, int param_3, int param_4, NodePath *param_5) {
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
/* CallableCustomMethodPointer<SceneReplicationInterface, void, ObjectID const&>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&>::call(CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
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

                  cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
                  uVar4 = _LC64;
                  if (cVar5 == '\0') {
                     *(undefined4*)param_4 = 2;
                     *(undefined8*)( param_4 + 4 ) = uVar4;
                  }

                  local_48 = (char*)Variant::operator_cast_to_ObjectID((Variant*)*param_1);
                  ( *pcVar8 )((long*)( lVar1 + lVar2 ), (String_conflict*)&local_48);
               }

            }
 else {
               *(undefined4*)param_4 = 3;
               *(undefined4*)( param_4 + 8 ) = 1;
            }

            goto LAB_0010f6fe;
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
   local_58,(String_conflict*)"Invalid Object id \'";
   String::operator +((String_conflict*)&local_48, (String_conflict*)local_58);
   _err_print_error(&_LC63, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String_conflict*)&local_48, 0, 0);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
   CowData<char32_t>::_unref(local_58);
   CowData<char32_t>::_unref(local_60);
   CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   LAB_0010f6fe:if (local_30 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* CallableCustomMethodPointer<SceneReplicationInterface, void, int, ObjectID>::call(Variant
   const**, int, Variant&, Callable::CallError&) const */void CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID>::call(CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID> *this, Variant **param_1, int param_2, Variant *param_3, CallError *param_4) {
   long lVar1;
   long lVar2;
   ulong uVar3;
   undefined8 uVar4;
   char cVar5;
   int iVar6;
   undefined8 uVar7;
   uint uVar8;
   ulong *puVar9;
   code *UNRECOVERED_JUMPTABLE;
   long in_FS_OFFSET;
   bool bVar10;
   CowData<char32_t> local_60[8];
   CowData<char32_t> local_58[8];
   undefined8 local_50;
   char *local_48;
   undefined8 local_40;
   long local_30;
   local_30 = *(long*)( in_FS_OFFSET + 0x28 );
   uVar8 = ( uint ) * (ulong*)( this + 0x30 ) & 0xffffff;
   if (uVar8 < (uint)ObjectDB::slot_max) {
      while (true) {
         uVar3 = (ulong)local_48 >> 8;
         local_48 = (char*)( uVar3 << 8 );
         LOCK();
         bVar10 = (char)ObjectDB::spin_lock == '\0';
         if (bVar10) {
            ObjectDB::spin_lock._0_1_ = '\x01';
         }

         UNLOCK();
         if (bVar10) break;
         local_48 = (char*)( uVar3 << 8 );
         do {} while ( (char)ObjectDB::spin_lock != '\0' );
      }
;
      puVar9 = (ulong*)( (ulong)uVar8 * 0x10 + ObjectDB::object_slots );
      if (( *(ulong*)( this + 0x30 ) >> 0x18 & 0x7fffffffff ) != ( *puVar9 & 0x7fffffffff )) {
         ObjectDB::spin_lock._0_1_ = '\0';
         goto LAB_0010fa8d;
      }

      ObjectDB::spin_lock._0_1_ = '\0';
      if (puVar9[1] == 0) goto LAB_0010fa8d;
      lVar1 = *(long*)( this + 0x28 );
      UNRECOVERED_JUMPTABLE = *(code**)( this + 0x38 );
      lVar2 = *(long*)( this + 0x40 );
      if ((uint)param_2 < 3) {
         if (param_2 == 2) {
            *(undefined4*)param_4 = 0;
            if (( (ulong)UNRECOVERED_JUMPTABLE & 1 ) != 0) {
               UNRECOVERED_JUMPTABLE = *(code**)( UNRECOVERED_JUMPTABLE + *(long*)( lVar1 + lVar2 ) + -1 );
            }

            cVar5 = Variant::can_convert_strict(*(undefined4*)param_1[1], 2);
            uVar4 = _LC65;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            uVar7 = Variant::operator_cast_to_ObjectID((Variant*)param_1[1]);
            cVar5 = Variant::can_convert_strict(*(undefined4*)*param_1, 2);
            uVar4 = _LC64;
            if (cVar5 == '\0') {
               *(undefined4*)param_4 = 2;
               *(undefined8*)( param_4 + 4 ) = uVar4;
            }

            iVar6 = Variant::operator_cast_to_int((Variant*)*param_1);
            if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
               /* WARNING: Could not recover jumptable at 0x0010fa66. Too many branches */
               /* WARNING: Treating indirect jump as call */
               ( *UNRECOVERED_JUMPTABLE )((long*)( lVar1 + lVar2 ), iVar6, uVar7);
               return;
            }

            goto LAB_0010fb4f;
         }

         *(undefined4*)param_4 = 4;
         *(undefined4*)( param_4 + 8 ) = 2;
      }
 else {
         *(undefined4*)param_4 = 3;
         *(undefined4*)( param_4 + 8 ) = 2;
      }

   }
 else {
      _err_print_error("get_instance", "./core/object/object.h", 0x418, "Condition \"slot >= slot_max\" is true. Returning: nullptr", 0, 0);
      LAB_0010fa8d:local_50 = 0;
      local_48 = "\', can\'t call method.";
      local_40 = 0x15;
      String::parse_latin1((StrRange*)&local_50);
      uitos((ulong)local_60);
      operator+((char *)
      local_58,(String_conflict*)"Invalid Object id \'";
      String::operator +((String_conflict*)&local_48, (String_conflict*)local_58);
      _err_print_error(&_LC63, "./core/object/callable_method_pointer.h", 0x67, "Parameter \"ObjectDB::get_instance(ObjectID(data.object_id))\" is null.", (String_conflict*)&local_48, 0, 0);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_48);
      CowData<char32_t>::_unref(local_58);
      CowData<char32_t>::_unref(local_60);
      CowData<char32_t>::_unref((CowData<char32_t>*)&local_50);
   }

   if (local_30 == *(long*)( in_FS_OFFSET + 0x28 )) {
      return;
   }

   LAB_0010fb4f:/* WARNING: Subroutine does not return */__stack_chk_fail();
}
/* HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>
   >::_init_from(HashSet<ObjectID, HashMapHasherDefault, HashMapComparatorDefault<ObjectID> >
   const&) */void HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::_init_from(HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>> *this, HashSet *param_1) {
   ulong uVar1;
   uint uVar2;
   long lVar3;
   long lVar4;
   long lVar5;
   undefined8 uVar6;
   long lVar7;
   long lVar8;
   long lVar9;
   uVar1 = *(ulong*)( param_1 + 0x20 );
   *(ulong*)( this + 0x20 ) = uVar1;
   if ((int)( uVar1 >> 0x20 ) == 0) {
      return;
   }

   uVar2 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
   uVar1 = (ulong)uVar2 * 4;
   uVar6 = Memory::alloc_static(uVar1, false);
   *(undefined8*)( this + 0x18 ) = uVar6;
   uVar6 = Memory::alloc_static((ulong)uVar2 * 8, false);
   *(undefined8*)this = uVar6;
   uVar6 = Memory::alloc_static(uVar1, false);
   *(undefined8*)( this + 0x10 ) = uVar6;
   lVar7 = Memory::alloc_static(uVar1, false);
   *(long*)( this + 8 ) = lVar7;
   if (*(int*)( this + 0x24 ) != 0) {
      lVar3 = *(long*)this;
      lVar4 = *(long*)param_1;
      lVar8 = 0;
      lVar5 = *(long*)( param_1 + 0x10 );
      lVar9 = *(long*)( this + 0x10 );
      do {
         *(undefined8*)( lVar3 + lVar8 * 8 ) = *(undefined8*)( lVar4 + lVar8 * 8 );
         *(undefined4*)( lVar9 + lVar8 * 4 ) = *(undefined4*)( lVar5 + lVar8 * 4 );
         lVar8 = lVar8 + 1;
      }
 while ( (uint)lVar8 < *(uint*)( this + 0x24 ) );
   }

   if (uVar2 != 0) {
      lVar3 = *(long*)( param_1 + 0x18 );
      lVar4 = *(long*)( this + 0x18 );
      lVar9 = 0;
      lVar5 = *(long*)( param_1 + 8 );
      do {
         *(undefined4*)( lVar4 + lVar9 ) = *(undefined4*)( lVar3 + lVar9 );
         *(undefined4*)( lVar7 + lVar9 ) = *(undefined4*)( lVar5 + lVar9 );
         lVar9 = lVar9 + 4;
      }
 while ( uVar1 - lVar9 != 0 );
   }

   return;
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
/* HashMap<ObjectID, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, unsigned long> > >::_resize_and_rehash(unsigned
   int) */void HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::_resize_and_rehash(HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, unsigned long> > >::insert(ObjectID const&,
   unsigned long const&, bool) */void HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::insert(ObjectID *param_1, ulong *param_2, bool param_3) {
   uint *puVar1;
   uint uVar2;
   undefined8 uVar3;
   undefined8 *puVar4;
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
   undefined1(*pauVar21)[16];
   uint uVar22;
   ulong uVar23;
   undefined1(*pauVar24)[16];
   void *__s_00;
   undefined8 *in_RCX;
   int iVar25;
   undefined7 in_register_00000011;
   long *plVar26;
   long lVar27;
   long lVar28;
   ulong uVar29;
   ulong uVar30;
   uint uVar31;
   char in_R8B;
   ulong uVar32;
   uint uVar33;
   long lVar34;
   undefined1(*pauVar35)[16];
   plVar26 = (long*)CONCAT71(in_register_00000011, param_3);
   __s_00 = (void*)param_2[1];
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[5] * 4 );
   if (__s_00 == (void*)0x0) {
      uVar32 = (ulong)uVar2;
      uVar23 = uVar32 * 4;
      uVar29 = uVar32 * 8;
      uVar30 = Memory::alloc_static(uVar23, false);
      param_2[2] = uVar30;
      __s_00 = (void*)Memory::alloc_static(uVar29, false);
      param_2[1] = (ulong)__s_00;
      if (uVar2 != 0) {
         __s = (void*)param_2[2];
         if (( __s < (void*)( (long)__s_00 + uVar29 ) ) && ( __s_00 < (void*)( (long)__s + uVar23 ) )) {
            uVar23 = 0;
            do {
               *(undefined4*)( (long)__s + uVar23 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar23 * 8 ) = 0;
               uVar23 = uVar23 + 1;
            }
 while ( uVar32 != uVar23 );
            goto LAB_0010ffe6;
         }

         memset(__s, 0, uVar23);
         memset(__s_00, 0, uVar29);
         iVar25 = *(int*)( (long)param_2 + 0x2c );
         lVar34 = *plVar26;
         goto LAB_0010fff1;
      }

      iVar25 = *(int*)( (long)param_2 + 0x2c );
      lVar34 = *plVar26;
      if (__s_00 != (void*)0x0) goto LAB_0010fff1;
   }
 else {
      LAB_0010ffe6:iVar25 = *(int*)( (long)param_2 + 0x2c );
      lVar34 = *plVar26;
      LAB_0010fff1:if (iVar25 != 0) {
         uVar30 = CONCAT44(0, *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[5] * 4 ));
         lVar28 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[5] * 8 );
         uVar23 = lVar34 * 0x3ffff - 1;
         uVar23 = ( uVar23 ^ uVar23 >> 0x1f ) * 0x15;
         uVar23 = ( uVar23 ^ uVar23 >> 0xb ) * 0x41;
         uVar23 = uVar23 >> 0x16 ^ uVar23;
         uVar29 = uVar23 & 0xffffffff;
         if ((int)uVar23 == 0) {
            uVar29 = 1;
         }

         auVar5._8_8_ = 0;
         auVar5._0_8_ = uVar29 * lVar28;
         auVar13._8_8_ = 0;
         auVar13._0_8_ = uVar30;
         lVar27 = SUB168(auVar5 * auVar13, 8);
         uVar31 = *(uint*)( param_2[2] + lVar27 * 4 );
         uVar22 = SUB164(auVar5 * auVar13, 8);
         if (uVar31 != 0) {
            uVar33 = 0;
            do {
               if (( (uint)uVar29 == uVar31 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar27 * 8 ) + 0x10 ) == lVar34 )) {
                  pauVar24 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar22 * 8 );
                  *(undefined8*)( pauVar24[1] + 8 ) = *in_RCX;
                  goto LAB_001102d0;
               }

               uVar33 = uVar33 + 1;
               auVar6._8_8_ = 0;
               auVar6._0_8_ = ( ulong )(uVar22 + 1) * lVar28;
               auVar14._8_8_ = 0;
               auVar14._0_8_ = uVar30;
               lVar27 = SUB168(auVar6 * auVar14, 8);
               uVar31 = *(uint*)( param_2[2] + lVar27 * 4 );
               uVar22 = SUB164(auVar6 * auVar14, 8);
            }
 while ( ( uVar31 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = (ulong)uVar31 * lVar28,auVar15._8_8_ = 0,auVar15._0_8_ = uVar30,auVar8._8_8_ = 0,auVar8._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[5] * 4 ) + uVar22 ) - SUB164(auVar7 * auVar15, 8)) * lVar28,auVar16._8_8_ = 0,auVar16._0_8_ = uVar30,uVar33 <= SUB164(auVar8 * auVar16, 8) );
         }

      }

   }

   if ((float)uVar2 * __LC33 < (float)( iVar25 + 1 )) {
      if ((int)param_2[5] == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pauVar24 = (undefined1(*) [16])0x0;
         goto LAB_001102d0;
      }

      _resize_and_rehash((HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>*)param_2, (int)param_2[5] + 1);
   }

   lVar34 = *plVar26;
   uVar3 = *in_RCX;
   pauVar24 = (undefined1(*) [16])operator_new(0x20, "");
   *pauVar24 = (undefined1[16])0x0;
   *(undefined8*)( pauVar24[1] + 8 ) = uVar3;
   *(long*)pauVar24[1] = lVar34;
   puVar4 = (undefined8*)param_2[4];
   if (puVar4 == (undefined8*)0x0) {
      param_2[3] = (ulong)pauVar24;
      param_2[4] = (ulong)pauVar24;
   }
 else if (in_R8B == '\0') {
      *puVar4 = pauVar24;
      *(undefined8**)( *pauVar24 + 8 ) = puVar4;
      param_2[4] = (ulong)pauVar24;
   }
 else {
      uVar23 = param_2[3];
      *(undefined1(**) [16])( uVar23 + 8 ) = pauVar24;
      *(ulong*)*pauVar24 = uVar23;
      param_2[3] = (ulong)pauVar24;
   }

   uVar23 = param_2[2];
   uVar29 = *plVar26 * 0x3ffff - 1;
   uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
   uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
   uVar29 = uVar29 >> 0x16 ^ uVar29;
   uVar30 = uVar29 & 0xffffffff;
   if ((int)uVar29 == 0) {
      uVar30 = 1;
   }

   uVar33 = 0;
   lVar34 = *(long*)( hash_table_size_primes_inv + (ulong)(uint)param_2[5] * 8 );
   uVar22 = (uint)uVar30;
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)(uint)param_2[5] * 4 );
   uVar32 = CONCAT44(0, uVar2);
   auVar9._8_8_ = 0;
   auVar9._0_8_ = uVar30 * lVar34;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar32;
   lVar28 = SUB168(auVar9 * auVar17, 8);
   uVar29 = param_2[1];
   puVar1 = (uint*)( uVar23 + lVar28 * 4 );
   iVar25 = SUB164(auVar9 * auVar17, 8);
   uVar31 = *puVar1;
   pauVar21 = pauVar24;
   while (uVar31 != 0) {
      auVar10._8_8_ = 0;
      auVar10._0_8_ = (ulong)uVar31 * lVar34;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar32;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(( uVar2 + iVar25 ) - SUB164(auVar10 * auVar18, 8)) * lVar34;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar32;
      uVar22 = SUB164(auVar11 * auVar19, 8);
      pauVar35 = pauVar21;
      if (uVar22 < uVar33) {
         *puVar1 = (uint)uVar30;
         uVar30 = (ulong)uVar31;
         puVar4 = (undefined8*)( uVar29 + lVar28 * 8 );
         pauVar35 = (undefined1(*) [16])*puVar4;
         *puVar4 = pauVar21;
         uVar33 = uVar22;
      }

      uVar22 = (uint)uVar30;
      uVar33 = uVar33 + 1;
      auVar12._8_8_ = 0;
      auVar12._0_8_ = ( ulong )(iVar25 + 1) * lVar34;
      auVar20._8_8_ = 0;
      auVar20._0_8_ = uVar32;
      lVar28 = SUB168(auVar12 * auVar20, 8);
      puVar1 = (uint*)( uVar23 + lVar28 * 4 );
      iVar25 = SUB164(auVar12 * auVar20, 8);
      pauVar21 = pauVar35;
      uVar31 = *puVar1;
   }
;
   *(undefined1(**) [16])( uVar29 + lVar28 * 8 ) = pauVar21;
   *puVar1 = uVar22;
   *(int*)( (long)param_2 + 0x2c ) = *(int*)( (long)param_2 + 0x2c ) + 1;
   LAB_001102d0:*(undefined1(**) [16])param_1 = pauVar24;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<ObjectID, unsigned long, HashMapHasherDefault, HashMapComparatorDefault<ObjectID>,
   DefaultTypedAllocator<HashMapElement<ObjectID, unsigned long> > >::operator[](ObjectID const&) */undefined1[16];HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::operator [](HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>
             *this,ObjectID*param_1)

{
  uint *puVar1;
  long lVar2;
  undefined8 *puVar3;
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
  undefined1 auVar27[16](*, pauVar28)[16](*, pauVar30)[16](*, pauVar44)[16];
  long lVar45;
  undefined1 auVar46[16];
  undefined1 auVar47[16](ulong)(__s_00 = = (void*)0x0) {
   uVar31 = uVar43 * 4;
   uVar29 = uVar43 * 8;
   uVar32 = Memory::alloc_static(uVar31, false);
   *(undefined8*)( this + 0x10 ) = uVar32;
   lStack_90 = 0x110860;
   __s_00 = (void*)Memory::alloc_static(uVar29, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar37 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar29 ) ) && ( __s_00 < (void*)( (long)__s + uVar31 ) )) {
         uVar31 = 0;
         do {
            *(undefined4*)( (long)__s + uVar31 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar31 * 8 ) = 0;
            uVar31 = uVar31 + 1;
         }
 while ( uVar43 != uVar31 );
         lVar45 = *(long*)param_1;
         iVar36 = *(int*)( this + 0x2c );
      }
 else {
         memset(__s, 0, uVar31);
         lStack_90 = 0x1108aa;
         memset(__s_00, 0, uVar29);
         lVar45 = *(long*)param_1;
         iVar36 = *(int*)( this + 0x2c );
      }

      LAB_001108b9:if (iVar36 == 0) goto LAB_00110950;
      uVar31 = ( ulong ) * (uint*)( this + 0x28 );
      lVar39 = *(long*)( this + 0x10 );
      goto LAB_00110554;
   }

   lVar45 = *(long*)param_1;
   iVar36 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_001108b9;
}
else{iVar36 = *(int*)( this + 0x2c );if (iVar36 == 0) {
   LAB_00110950:iVar36 = 0;
}
 else {
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
   uVar29 = lVar45 * 0x3ffff - 1;
   uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
   uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
   uVar29 = uVar29 >> 0x16 ^ uVar29;
   uVar41 = uVar29 & 0xffffffff;
   if ((int)uVar29 == 0) {
      uVar41 = 1;
   }

   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar41 * lVar2;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar43;
   lVar34 = SUB168(auVar4 * auVar16, 8);
   lVar39 = *(long*)( this + 0x10 );
   uVar40 = SUB164(auVar4 * auVar16, 8);
   uVar33 = *(uint*)( lVar39 + lVar34 * 4 );
   if (uVar33 != 0) {
      uVar38 = 0;
      lVar35 = lVar34;
      do {
         if (( (uint)uVar41 == uVar33 ) && ( lVar45 == *(long*)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) )) {
            auVar46._0_8_ = *(long*)( (long)__s_00 + (ulong)uVar40 * 8 ) + 0x18;
            auVar46._8_8_ = lVar35;
            return auVar46;
         }

         uVar38 = uVar38 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( ulong )(uVar40 + 1) * lVar2;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar43;
         lVar34 = SUB168(auVar5 * auVar17, 8);
         uVar33 = *(uint*)( lVar39 + lVar34 * 4 );
         uVar40 = SUB164(auVar5 * auVar17, 8);
      }
 while ( ( uVar33 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = (ulong)uVar33 * lVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar43,auVar7._8_8_ = 0,auVar7._0_8_ = ( ulong )(( uVar40 + uVar37 ) - SUB164(auVar6 * auVar18, 8)) * lVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar43,lVar35 = SUB168(auVar7 * auVar19, 8),uVar38 <= SUB164(auVar7 * auVar19, 8) );
   }

   LAB_00110554:uVar41 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar31 * 4 ));
   lVar2 = *(long*)( hash_table_size_primes_inv + uVar31 * 8 );
   uVar29 = lVar45 * 0x3ffff - 1;
   uVar29 = ( uVar29 ^ uVar29 >> 0x1f ) * 0x15;
   uVar29 = ( uVar29 ^ uVar29 >> 0xb ) * 0x41;
   uVar29 = uVar29 >> 0x16 ^ uVar29;
   uVar42 = uVar29 & 0xffffffff;
   if ((int)uVar29 == 0) {
      uVar42 = 1;
   }

   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar42 * lVar2;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar41;
   lVar34 = SUB168(auVar8 * auVar20, 8);
   uVar37 = *(uint*)( lVar39 + lVar34 * 4 );
   uVar33 = SUB164(auVar8 * auVar20, 8);
   if (uVar37 != 0) {
      uVar40 = 0;
      lVar35 = lVar34;
      do {
         if (( (uint)uVar42 == uVar37 ) && ( *(long*)( *(long*)( (long)__s_00 + lVar34 * 8 ) + 0x10 ) == lVar45 )) {
            pauVar30 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar33 * 8 );
            *(undefined8*)( pauVar30[1] + 8 ) = 0;
            lStack_90 = lVar35;
            goto LAB_0011063f;
         }

         uVar40 = uVar40 + 1;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( ulong )(uVar33 + 1) * lVar2;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar41;
         lVar34 = SUB168(auVar9 * auVar21, 8);
         uVar37 = *(uint*)( lVar39 + lVar34 * 4 );
         uVar33 = SUB164(auVar9 * auVar21, 8);
      }
 while ( ( uVar37 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = (ulong)uVar37 * lVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar41,auVar11._8_8_ = 0,auVar11._0_8_ = ( ulong )(( *(uint*)( hash_table_size_primes + uVar31 * 4 ) + uVar33 ) - SUB164(auVar10 * auVar22, 8)) * lVar2,auVar23._8_8_ = 0,auVar23._0_8_ = uVar41,lVar35 = SUB168(auVar11 * auVar23, 8),uVar40 <= SUB164(auVar11 * auVar23, 8) );
   }

}
}if ((float)uVar43 * __LC33 < (float)( iVar36 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar30 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_0011063f;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
uVar32 = *(undefined8*)param_1;pauVar30 = (undefined1(*) [16])operator_new(0x20, "");*pauVar30 = (undefined1[16])0x0;*(undefined8*)( pauVar30[1] + 8 ) = 0;*(undefined8*)pauVar30[1] = uVar32;puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar30;
}
 else {
   *puVar3 = pauVar30;
   *(undefined8**)( *pauVar30 + 8 ) = puVar3;
}
lVar45 = *(long*)param_1;lVar39 = *(long*)( this + 0x10 );*(undefined1(**) [16])( this + 0x20 ) = pauVar30;uVar31 = lVar45 * 0x3ffff - 1;uVar31 = ( uVar31 ^ uVar31 >> 0x1f ) * 0x15;uVar31 = ( uVar31 ^ uVar31 >> 0xb ) * 0x41;uVar31 = uVar31 >> 0x16 ^ uVar31;uVar43 = uVar31 & 0xffffffff;if ((int)uVar31 == 0) {
   uVar43 = 1;
}
uVar38 = 0;lVar45 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );uVar40 = (uint)uVar43;uVar37 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar31 = CONCAT44(0, uVar37);auVar12._8_8_ = 0;auVar12._0_8_ = uVar43 * lVar45;auVar24._8_8_ = 0;auVar24._0_8_ = uVar31;lStack_90 = SUB168(auVar12 * auVar24, 8);lVar2 = *(long*)( this + 8 );puVar1 = (uint*)( lVar39 + lStack_90 * 4 );iVar36 = SUB164(auVar12 * auVar24, 8);uVar33 = *puVar1;pauVar28 = pauVar30;while (uVar33 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar33 * lVar45;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar31;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar37 + iVar36 ) - SUB164(auVar13 * auVar25, 8)) * lVar45;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar31;
   local_88 = SUB164(auVar14 * auVar26, 8);
   pauVar44 = pauVar28;
   if (local_88 < uVar38) {
      *puVar1 = (uint)uVar43;
      uVar43 = (ulong)uVar33;
      puVar3 = (undefined8*)( lVar2 + lStack_90 * 8 );
      pauVar44 = (undefined1(*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar38 = local_88;
   }

   uVar40 = (uint)uVar43;
   uVar38 = uVar38 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar36 + 1) * lVar45;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar31;
   lStack_90 = SUB168(auVar15 * auVar27, 8);
   puVar1 = (uint*)( lVar39 + lStack_90 * 4 );
   iVar36 = SUB164(auVar15 * auVar27, 8);
   pauVar28 = pauVar44;
   uVar33 = *puVar1;
}
;*(undefined1(**) [16])( lVar2 + lStack_90 * 8 ) = pauVar28;*puVar1 = uVar40;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_0011063f:auVar47._8_8_ = lStack_90;auVar47._0_8_ = pauVar30[1] + 8;return auVar47;}/* HashMap<unsigned int, ObjectID, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, ObjectID> > >::_resize_and_rehash(unsigned
   int) */void HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::_resize_and_rehash(HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>> *this, uint param_1) {
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
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned int, ObjectID, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, ObjectID> > >::insert(unsigned int const&,
   ObjectID const&, bool) */void HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::insert(uint *param_1, ObjectID *param_2, bool param_3) {
   undefined8 *puVar1;
   long lVar2;
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
   undefined1(*pauVar20)[16];
   uint uVar21;
   uint uVar22;
   uint uVar23;
   uint uVar24;
   undefined1(*pauVar25)[16];
   undefined8 uVar26;
   void *__s_00;
   undefined8 *in_RCX;
   int iVar27;
   undefined7 in_register_00000011;
   uint *puVar28;
   ulong uVar29;
   long lVar30;
   long lVar31;
   ulong uVar32;
   uint uVar33;
   char in_R8B;
   ulong uVar34;
   uint uVar35;
   undefined1(*pauVar36)[16];
   puVar28 = (uint*)CONCAT71(in_register_00000011, param_3);
   __s_00 = *(void**)( param_2 + 8 );
   uVar22 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   if (__s_00 == (void*)0x0) {
      uVar29 = (ulong)uVar22;
      uVar32 = uVar29 * 4;
      uVar34 = uVar29 * 8;
      uVar26 = Memory::alloc_static(uVar32, false);
      *(undefined8*)( param_2 + 0x10 ) = uVar26;
      __s_00 = (void*)Memory::alloc_static(uVar34, false);
      *(void**)( param_2 + 8 ) = __s_00;
      if (uVar22 != 0) {
         __s = *(void**)( param_2 + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar34 ) ) && ( __s_00 < (void*)( (long)__s + uVar32 ) )) {
            uVar32 = 0;
            do {
               *(undefined4*)( (long)__s + uVar32 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar32 * 8 ) = 0;
               uVar32 = uVar32 + 1;
            }
 while ( uVar29 != uVar32 );
            goto LAB_00110c16;
         }

         memset(__s, 0, uVar32);
         memset(__s_00, 0, uVar34);
         iVar27 = *(int*)( param_2 + 0x2c );
         uVar23 = *puVar28;
         goto LAB_00110c21;
      }

      iVar27 = *(int*)( param_2 + 0x2c );
      uVar23 = *puVar28;
      if (__s_00 != (void*)0x0) goto LAB_00110c21;
   }
 else {
      LAB_00110c16:iVar27 = *(int*)( param_2 + 0x2c );
      uVar23 = *puVar28;
      LAB_00110c21:if (iVar27 != 0) {
         uVar34 = CONCAT44(0, *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ));
         uVar32 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
         uVar21 = ( uVar23 >> 0x10 ^ uVar23 ) * -0x7a143595;
         uVar21 = ( uVar21 ^ uVar21 >> 0xd ) * -0x3d4d51cb;
         uVar33 = uVar21 ^ uVar21 >> 0x10;
         if (uVar21 == uVar21 >> 0x10) {
            uVar33 = 1;
            uVar29 = uVar32;
         }
 else {
            uVar29 = uVar33 * uVar32;
         }

         auVar4._8_8_ = 0;
         auVar4._0_8_ = uVar34;
         auVar12._8_8_ = 0;
         auVar12._0_8_ = uVar29;
         lVar30 = SUB168(auVar4 * auVar12, 8);
         uVar21 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
         uVar24 = SUB164(auVar4 * auVar12, 8);
         if (uVar21 != 0) {
            uVar35 = 0;
            do {
               if (( uVar33 == uVar21 ) && ( *(uint*)( *(long*)( (long)__s_00 + lVar30 * 8 ) + 0x10 ) == uVar23 )) {
                  pauVar25 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar24 * 8 );
                  *(undefined8*)( pauVar25[1] + 8 ) = *in_RCX;
                  goto LAB_00110ec0;
               }

               uVar35 = uVar35 + 1;
               auVar5._8_8_ = 0;
               auVar5._0_8_ = ( uVar24 + 1 ) * uVar32;
               auVar13._8_8_ = 0;
               auVar13._0_8_ = uVar34;
               lVar30 = SUB168(auVar5 * auVar13, 8);
               uVar21 = *(uint*)( *(long*)( param_2 + 0x10 ) + lVar30 * 4 );
               uVar24 = SUB164(auVar5 * auVar13, 8);
            }
 while ( ( uVar21 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar21 * uVar32,auVar14._8_8_ = 0,auVar14._0_8_ = uVar34,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 ) + uVar24 ) - SUB164(auVar6 * auVar14, 8) ) * uVar32,auVar15._8_8_ = 0,auVar15._0_8_ = uVar34,uVar35 <= SUB164(auVar7 * auVar15, 8) );
         }

      }

   }

   if ((float)uVar22 * __LC33 < (float)( iVar27 + 1 )) {
      if (*(int*)( param_2 + 0x28 ) == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         pauVar25 = (undefined1(*) [16])0x0;
         goto LAB_00110ec0;
      }

      _resize_and_rehash((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)param_2, *(int*)( param_2 + 0x28 ) + 1);
   }

   uVar22 = *puVar28;
   uVar26 = *in_RCX;
   pauVar25 = (undefined1(*) [16])operator_new(0x20, "");
   *pauVar25 = (undefined1[16])0x0;
   *(uint*)pauVar25[1] = uVar22;
   *(undefined8*)( pauVar25[1] + 8 ) = uVar26;
   puVar1 = *(undefined8**)( param_2 + 0x20 );
   if (puVar1 == (undefined8*)0x0) {
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar25;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar25;
   }
 else if (in_R8B == '\0') {
      *puVar1 = pauVar25;
      *(undefined8**)( *pauVar25 + 8 ) = puVar1;
      *(undefined1(**) [16])( param_2 + 0x20 ) = pauVar25;
   }
 else {
      lVar30 = *(long*)( param_2 + 0x18 );
      *(undefined1(**) [16])( lVar30 + 8 ) = pauVar25;
      *(long*)*pauVar25 = lVar30;
      *(undefined1(**) [16])( param_2 + 0x18 ) = pauVar25;
   }

   uVar22 = ( *puVar28 >> 0x10 ^ *puVar28 ) * -0x7a143595;
   uVar23 = ( uVar22 ^ uVar22 >> 0xd ) * -0x3d4d51cb;
   uVar22 = uVar23 ^ uVar23 >> 0x10;
   if (uVar23 == uVar23 >> 0x10) {
      uVar32 = 1;
      uVar22 = 1;
   }
 else {
      uVar32 = (ulong)uVar22;
   }

   lVar30 = *(long*)( param_2 + 0x10 );
   uVar33 = 0;
   lVar2 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( param_2 + 0x28 ) * 8 );
   uVar23 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( param_2 + 0x28 ) * 4 );
   uVar34 = CONCAT44(0, uVar23);
   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar32 * lVar2;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar34;
   lVar31 = SUB168(auVar8 * auVar16, 8);
   lVar3 = *(long*)( param_2 + 8 );
   puVar28 = (uint*)( lVar30 + lVar31 * 4 );
   iVar27 = SUB164(auVar8 * auVar16, 8);
   uVar21 = *puVar28;
   pauVar20 = pauVar25;
   while (uVar21 != 0) {
      auVar9._8_8_ = 0;
      auVar9._0_8_ = (ulong)uVar21 * lVar2;
      auVar17._8_8_ = 0;
      auVar17._0_8_ = uVar34;
      auVar10._8_8_ = 0;
      auVar10._0_8_ = ( ulong )(( uVar23 + iVar27 ) - SUB164(auVar9 * auVar17, 8)) * lVar2;
      auVar18._8_8_ = 0;
      auVar18._0_8_ = uVar34;
      uVar24 = SUB164(auVar10 * auVar18, 8);
      pauVar36 = pauVar20;
      if (uVar24 < uVar33) {
         *puVar28 = uVar22;
         puVar1 = (undefined8*)( lVar3 + lVar31 * 8 );
         pauVar36 = (undefined1(*) [16])*puVar1;
         *puVar1 = pauVar20;
         uVar22 = uVar21;
         uVar33 = uVar24;
      }

      uVar33 = uVar33 + 1;
      auVar11._8_8_ = 0;
      auVar11._0_8_ = ( ulong )(iVar27 + 1) * lVar2;
      auVar19._8_8_ = 0;
      auVar19._0_8_ = uVar34;
      lVar31 = SUB168(auVar11 * auVar19, 8);
      puVar28 = (uint*)( lVar30 + lVar31 * 4 );
      iVar27 = SUB164(auVar11 * auVar19, 8);
      pauVar20 = pauVar36;
      uVar21 = *puVar28;
   }
;
   *(undefined1(**) [16])( lVar3 + lVar31 * 8 ) = pauVar20;
   *puVar28 = uVar22;
   *(int*)( param_2 + 0x2c ) = *(int*)( param_2 + 0x2c ) + 1;
   LAB_00110ec0:*(undefined1(**) [16])param_1 = pauVar25;
   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<unsigned int, ObjectID, HashMapHasherDefault, HashMapComparatorDefault<unsigned int>,
   DefaultTypedAllocator<HashMapElement<unsigned int, ObjectID> > >::operator[](unsigned int const&)
    */undefined1[16];HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::operator [](HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>
             *this,uint*param_1)

{
  uint *puVar1;
  ulong uVar2;
  undefined8 *puVar3;
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
  undefined1 auVar27[16](*, pauVar28)[16](*, pauVar32)[16](*, pauVar45)[16];
  undefined1 auVar46[16];
  undefined1 auVar47[16](ulong)(__s_00 = = (void*)0x0) {
   uVar38 = uVar41 * 4;
   uVar2 = uVar41 * 8;
   uVar33 = Memory::alloc_static(uVar38, false);
   *(undefined8*)( this + 0x10 ) = uVar33;
   lStack_70 = 0x111420;
   __s_00 = (void*)Memory::alloc_static(uVar2, false);
   *(void**)( this + 8 ) = __s_00;
   if (uVar30 != 0) {
      __s = *(void**)( this + 0x10 );
      if (( __s < (void*)( (long)__s_00 + uVar2 ) ) && ( __s_00 < (void*)( (long)__s + uVar38 ) )) {
         uVar38 = 0;
         do {
            *(undefined4*)( (long)__s + uVar38 * 4 ) = 0;
            *(undefined8*)( (long)__s_00 + uVar38 * 8 ) = 0;
            uVar38 = uVar38 + 1;
         }
 while ( uVar41 != uVar38 );
         uVar31 = *param_1;
         iVar39 = *(int*)( this + 0x2c );
      }
 else {
         memset(__s, 0, uVar38);
         lStack_70 = 0x11146a;
         memset(__s_00, 0, uVar2);
         uVar31 = *param_1;
         iVar39 = *(int*)( this + 0x2c );
      }

      LAB_00111479:if (iVar39 == 0) goto LAB_00111530;
      uVar38 = ( ulong ) * (uint*)( this + 0x28 );
      lVar42 = *(long*)( this + 0x10 );
      goto LAB_00111144;
   }

   uVar31 = *param_1;
   iVar39 = *(int*)( this + 0x2c );
   if (__s_00 != (void*)0x0) goto LAB_00111479;
}
else{iVar39 = *(int*)( this + 0x2c );if (iVar39 == 0) {
   LAB_00111530:iVar39 = 0;
}
 else {
   uVar2 = *(ulong*)( hash_table_size_primes_inv + uVar38 * 8 );
   uVar29 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
   uVar29 = ( uVar29 ^ uVar29 >> 0xd ) * -0x3d4d51cb;
   uVar43 = uVar29 ^ uVar29 >> 0x10;
   if (uVar29 == uVar29 >> 0x10) {
      uVar43 = 1;
      uVar35 = uVar2;
   }
 else {
      uVar35 = uVar43 * uVar2;
   }

   auVar4._8_8_ = 0;
   auVar4._0_8_ = uVar41;
   auVar16._8_8_ = 0;
   auVar16._0_8_ = uVar35;
   lVar36 = SUB168(auVar4 * auVar16, 8);
   lVar42 = *(long*)( this + 0x10 );
   uVar44 = SUB164(auVar4 * auVar16, 8);
   uVar29 = *(uint*)( lVar42 + lVar36 * 4 );
   if (uVar29 != 0) {
      uVar40 = 0;
      lVar37 = lVar36;
      do {
         if (( uVar43 == uVar29 ) && ( uVar31 == *(uint*)( *(long*)( (long)__s_00 + lVar36 * 8 ) + 0x10 ) )) {
            auVar46._0_8_ = *(long*)( (long)__s_00 + (ulong)uVar44 * 8 ) + 0x18;
            auVar46._8_8_ = lVar37;
            return auVar46;
         }

         uVar40 = uVar40 + 1;
         auVar5._8_8_ = 0;
         auVar5._0_8_ = ( uVar44 + 1 ) * uVar2;
         auVar17._8_8_ = 0;
         auVar17._0_8_ = uVar41;
         lVar36 = SUB168(auVar5 * auVar17, 8);
         uVar29 = *(uint*)( lVar42 + lVar36 * 4 );
         uVar44 = SUB164(auVar5 * auVar17, 8);
      }
 while ( ( uVar29 != 0 ) && ( auVar6._8_8_ = 0 ),auVar6._0_8_ = uVar29 * uVar2,auVar18._8_8_ = 0,auVar18._0_8_ = uVar41,auVar7._8_8_ = 0,auVar7._0_8_ = ( ( uVar44 + uVar30 ) - SUB164(auVar6 * auVar18, 8) ) * uVar2,auVar19._8_8_ = 0,auVar19._0_8_ = uVar41,lVar37 = SUB168(auVar7 * auVar19, 8),uVar40 <= SUB164(auVar7 * auVar19, 8) );
   }

   LAB_00111144:uVar35 = CONCAT44(0, *(uint*)( hash_table_size_primes + uVar38 * 4 ));
   uVar2 = *(ulong*)( hash_table_size_primes_inv + uVar38 * 8 );
   uVar30 = ( uVar31 >> 0x10 ^ uVar31 ) * -0x7a143595;
   uVar30 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
   uVar29 = uVar30 ^ uVar30 >> 0x10;
   if (uVar30 == uVar30 >> 0x10) {
      uVar29 = 1;
      uVar34 = uVar2;
   }
 else {
      uVar34 = uVar29 * uVar2;
   }

   auVar8._8_8_ = 0;
   auVar8._0_8_ = uVar35;
   auVar20._8_8_ = 0;
   auVar20._0_8_ = uVar34;
   lVar36 = SUB168(auVar8 * auVar20, 8);
   uVar30 = *(uint*)( lVar42 + lVar36 * 4 );
   uVar43 = SUB164(auVar8 * auVar20, 8);
   if (uVar30 != 0) {
      uVar44 = 0;
      lVar37 = lVar36;
      do {
         if (( uVar29 == uVar30 ) && ( uVar31 == *(uint*)( *(long*)( (long)__s_00 + lVar36 * 8 ) + 0x10 ) )) {
            pauVar32 = *(undefined1(**) [16])( (long)__s_00 + (ulong)uVar43 * 8 );
            *(undefined8*)( pauVar32[1] + 8 ) = 0;
            lStack_70 = lVar37;
            goto LAB_00111217;
         }

         uVar44 = uVar44 + 1;
         auVar9._8_8_ = 0;
         auVar9._0_8_ = ( uVar43 + 1 ) * uVar2;
         auVar21._8_8_ = 0;
         auVar21._0_8_ = uVar35;
         lVar36 = SUB168(auVar9 * auVar21, 8);
         uVar30 = *(uint*)( lVar42 + lVar36 * 4 );
         uVar43 = SUB164(auVar9 * auVar21, 8);
      }
 while ( ( uVar30 != 0 ) && ( auVar10._8_8_ = 0 ),auVar10._0_8_ = uVar30 * uVar2,auVar22._8_8_ = 0,auVar22._0_8_ = uVar35,auVar11._8_8_ = 0,auVar11._0_8_ = ( ( *(uint*)( hash_table_size_primes + uVar38 * 4 ) + uVar43 ) - SUB164(auVar10 * auVar22, 8) ) * uVar2,auVar23._8_8_ = 0,auVar23._0_8_ = uVar35,lVar37 = SUB168(auVar11 * auVar23, 8),uVar44 <= SUB164(auVar11 * auVar23, 8) );
   }

}
}if ((float)uVar41 * __LC33 < (float)( iVar39 + 1 )) {
   if (*(int*)( this + 0x28 ) == 0x1c) {
      pauVar32 = (undefined1(*) [16])0x0;
      _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
      goto LAB_00111217;
   }

   _resize_and_rehash(this, *(int*)( this + 0x28 ) + 1);
}
uVar31 = *param_1;pauVar32 = (undefined1(*) [16])operator_new(0x20, "");*(uint*)pauVar32[1] = uVar31;*(undefined8*)( pauVar32[1] + 8 ) = 0;*pauVar32 = (undefined1[16])0x0;puVar3 = *(undefined8**)( this + 0x20 );if (puVar3 == (undefined8*)0x0) {
   *(undefined1(**) [16])( this + 0x18 ) = pauVar32;
}
 else {
   *puVar3 = pauVar32;
   *(undefined8**)( *pauVar32 + 8 ) = puVar3;
}
*(undefined1(**) [16])( this + 0x20 ) = pauVar32;uVar31 = ( *param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;uVar30 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;uVar31 = uVar30 ^ uVar30 >> 0x10;if (uVar30 == uVar30 >> 0x10) {
   uVar38 = 1;
   uVar31 = 1;
}
 else {
   uVar38 = (ulong)uVar31;
}
uVar43 = 0;lVar42 = *(long*)( this + 0x10 );uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar41 = CONCAT44(0, uVar30);lVar36 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );auVar12._8_8_ = 0;auVar12._0_8_ = uVar38 * lVar36;auVar24._8_8_ = 0;auVar24._0_8_ = uVar41;lStack_70 = SUB168(auVar12 * auVar24, 8);lVar37 = *(long*)( this + 8 );puVar1 = (uint*)( lVar42 + lStack_70 * 4 );iVar39 = SUB164(auVar12 * auVar24, 8);uVar29 = *puVar1;pauVar28 = pauVar32;while (uVar29 != 0) {
   auVar13._8_8_ = 0;
   auVar13._0_8_ = (ulong)uVar29 * lVar36;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar41;
   auVar14._8_8_ = 0;
   auVar14._0_8_ = ( ulong )(( uVar30 + iVar39 ) - SUB164(auVar13 * auVar25, 8)) * lVar36;
   auVar26._8_8_ = 0;
   auVar26._0_8_ = uVar41;
   local_68 = SUB164(auVar14 * auVar26, 8);
   pauVar45 = pauVar28;
   if (local_68 < uVar43) {
      *puVar1 = uVar31;
      puVar3 = (undefined8*)( lVar37 + lStack_70 * 8 );
      pauVar45 = (undefined1(*) [16])*puVar3;
      *puVar3 = pauVar28;
      uVar31 = uVar29;
      uVar43 = local_68;
   }

   uVar43 = uVar43 + 1;
   auVar15._8_8_ = 0;
   auVar15._0_8_ = ( ulong )(iVar39 + 1) * lVar36;
   auVar27._8_8_ = 0;
   auVar27._0_8_ = uVar41;
   lStack_70 = SUB168(auVar15 * auVar27, 8);
   puVar1 = (uint*)( lVar42 + lStack_70 * 4 );
   iVar39 = SUB164(auVar15 * auVar27, 8);
   pauVar28 = pauVar45;
   uVar29 = *puVar1;
}
;*(undefined1(**) [16])( lVar37 + lStack_70 * 8 ) = pauVar28;*puVar1 = uVar31;*(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;LAB_00111217:auVar47._8_8_ = lStack_70;auVar47._0_8_ = pauVar32[1] + 8;return auVar47;}/* CowData<unsigned char>::_realloc(long) */undefined8 CowData<unsigned_char>::_realloc(CowData<unsigned_char> *this, long param_1) {
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
/* CowData<Variant const*>::_realloc(long) */undefined8 CowData<Variant_const*>::_realloc(CowData<Variant_const*> *this, long param_1) {
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
/* SceneReplicationInterface::PeerInfo::PeerInfo(SceneReplicationInterface::PeerInfo const&) */void SceneReplicationInterface::PeerInfo::PeerInfo(PeerInfo *this, PeerInfo *param_1) {
   ulong uVar1;
   uint uVar2;
   uint uVar3;
   long lVar4;
   long lVar5;
   long lVar6;
   long lVar7;
   undefined8 uVar8;
   long lVar9;
   long lVar10;
   long *plVar11;
   long in_FS_OFFSET;
   ObjectID aOStack_48[8];
   long local_40;
   local_40 = *(long*)( in_FS_OFFSET + 0x28 );
   *(undefined8*)( this + 0x20 ) = 0;
   *(undefined1(*) [16])this = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x10 ) = (undefined1[16])0x0;
   uVar1 = *(ulong*)( param_1 + 0x20 );
   *(ulong*)( this + 0x20 ) = uVar1;
   if ((int)( uVar1 >> 0x20 ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
      uVar1 = (ulong)uVar2 * 4;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x18 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar2 * 8, false);
      *(undefined8*)this = uVar8;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x10 ) = uVar8;
      lVar7 = Memory::alloc_static(uVar1, false);
      uVar3 = *(uint*)( this + 0x24 );
      *(long*)( this + 8 ) = lVar7;
      if (uVar3 != 0) {
         lVar4 = *(long*)this;
         lVar5 = *(long*)param_1;
         lVar9 = 0;
         lVar6 = *(long*)( param_1 + 0x10 );
         lVar10 = *(long*)( this + 0x10 );
         do {
            *(undefined8*)( lVar4 + lVar9 * 2 ) = *(undefined8*)( lVar5 + lVar9 * 2 );
            *(undefined4*)( lVar10 + lVar9 ) = *(undefined4*)( lVar6 + lVar9 );
            lVar9 = lVar9 + 4;
         }
 while ( (ulong)uVar3 << 2 != lVar9 );
      }

      if (uVar2 != 0) {
         lVar4 = *(long*)( param_1 + 0x18 );
         lVar5 = *(long*)( this + 0x18 );
         lVar10 = 0;
         lVar6 = *(long*)( param_1 + 8 );
         do {
            *(undefined4*)( lVar5 + lVar10 ) = *(undefined4*)( lVar4 + lVar10 );
            *(undefined4*)( lVar7 + lVar10 ) = *(undefined4*)( lVar6 + lVar10 );
            lVar10 = lVar10 + 4;
         }
 while ( uVar1 - lVar10 != 0 );
      }

   }

   *(undefined8*)( this + 0x48 ) = 0;
   *(undefined1(*) [16])( this + 0x28 ) = (undefined1[16])0x0;
   *(undefined1(*) [16])( this + 0x38 ) = (undefined1[16])0x0;
   uVar1 = *(ulong*)( param_1 + 0x48 );
   *(ulong*)( this + 0x48 ) = uVar1;
   if ((int)( uVar1 >> 0x20 ) != 0) {
      uVar2 = *(uint*)( hash_table_size_primes + ( uVar1 & 0xffffffff ) * 4 );
      uVar1 = (ulong)uVar2 * 4;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x40 ) = uVar8;
      uVar8 = Memory::alloc_static((ulong)uVar2 * 8, false);
      *(undefined8*)( this + 0x28 ) = uVar8;
      uVar8 = Memory::alloc_static(uVar1, false);
      *(undefined8*)( this + 0x38 ) = uVar8;
      lVar7 = Memory::alloc_static(uVar1, false);
      uVar3 = *(uint*)( this + 0x4c );
      *(long*)( this + 0x30 ) = lVar7;
      if (uVar3 != 0) {
         lVar4 = *(long*)( this + 0x28 );
         lVar5 = *(long*)( param_1 + 0x28 );
         lVar9 = 0;
         lVar6 = *(long*)( param_1 + 0x38 );
         lVar10 = *(long*)( this + 0x38 );
         do {
            *(undefined8*)( lVar4 + lVar9 * 2 ) = *(undefined8*)( lVar5 + lVar9 * 2 );
            *(undefined4*)( lVar10 + lVar9 ) = *(undefined4*)( lVar6 + lVar9 );
            lVar9 = lVar9 + 4;
         }
 while ( (ulong)uVar3 << 2 != lVar9 );
      }

      if (uVar2 != 0) {
         lVar4 = *(long*)( param_1 + 0x40 );
         lVar5 = *(long*)( this + 0x40 );
         lVar10 = 0;
         lVar6 = *(long*)( param_1 + 0x30 );
         do {
            *(undefined4*)( lVar5 + lVar10 ) = *(undefined4*)( lVar4 + lVar10 );
            *(undefined4*)( lVar7 + lVar10 ) = *(undefined4*)( lVar6 + lVar10 );
            lVar10 = lVar10 + 4;
         }
 while ( uVar1 - lVar10 != 0 );
      }

   }

   uVar2 = *(uint*)( param_1 + 0x78 );
   *(undefined8*)( this + 0x78 ) = 0;
   *(undefined1(*) [16])( this + 0x58 ) = (undefined1[16])0x0;
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)uVar2 * 4 );
   *(undefined1(*) [16])( this + 0x68 ) = (undefined1[16])0x0;
   lVar7 = 1;
   if (5 < uVar2) {
      do {
         if (uVar2 <= *(uint*)( hash_table_size_primes + lVar7 * 4 )) {
            *(int*)( this + 0x78 ) = (int)lVar7;
            goto LAB_0011179b;
         }

         lVar7 = lVar7 + 1;
      }
 while ( lVar7 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_0011179b:if (( *(int*)( param_1 + 0x7c ) != 0 ) && ( plVar11 = *(long**)( param_1 + 0x68 ) ),plVar11 != (long*)0x0) {
      do {
         HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::insert(aOStack_48, (ulong*)( this + 0x50 ), (bool)( (char)plVar11 + '\x10' ));
         plVar11 = (long*)*plVar11;
      }
 while ( plVar11 != (long*)0x0 );
   }

   uVar2 = *(uint*)( param_1 + 0xa8 );
   *(undefined8*)( this + 0xa8 ) = 0;
   *(undefined1(*) [16])( this + 0x88 ) = (undefined1[16])0x0;
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)uVar2 * 4 );
   *(undefined1(*) [16])( this + 0x98 ) = (undefined1[16])0x0;
   lVar7 = 1;
   if (5 < uVar2) {
      do {
         if (uVar2 <= *(uint*)( hash_table_size_primes + lVar7 * 4 )) {
            *(int*)( this + 0xa8 ) = (int)lVar7;
            goto LAB_0011185a;
         }

         lVar7 = lVar7 + 1;
      }
 while ( lVar7 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
   }

   LAB_0011185a:if (( *(int*)( param_1 + 0xac ) != 0 ) && ( plVar11 = *(long**)( param_1 + 0x98 ) ),plVar11 != (long*)0x0) {
      do {
         HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::insert((uint*)aOStack_48, (ObjectID*)( this + 0x80 ), (bool)( (char)plVar11 + '\x10' ));
         plVar11 = (long*)*plVar11;
      }
 while ( plVar11 != (long*)0x0 );
   }

   uVar2 = *(uint*)( param_1 + 0xd8 );
   *(undefined8*)( this + 0xd8 ) = 0;
   *(undefined1(*) [16])( this + 0xb8 ) = (undefined1[16])0x0;
   uVar2 = *(uint*)( hash_table_size_primes + (ulong)uVar2 * 4 );
   *(undefined1(*) [16])( this + 200 ) = (undefined1[16])0x0;
   lVar7 = 1;
   if (5 < uVar2) {
      do {
         if (uVar2 <= *(uint*)( hash_table_size_primes + lVar7 * 4 )) {
            *(int*)( this + 0xd8 ) = (int)lVar7;
            goto LAB_00111919;
         }

         lVar7 = lVar7 + 1;
      }
 while ( lVar7 != 0x1d );
      _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0);
   }

   LAB_00111919:if (( *(int*)( param_1 + 0xdc ) != 0 ) && ( plVar11 = *(long**)( param_1 + 200 ) ),plVar11 != (long*)0x0) {
      do {
         HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::insert((uint*)aOStack_48, (ObjectID*)( this + 0xb0 ), (bool)( (char)plVar11 + '\x10' ));
         plVar11 = (long*)*plVar11;
      }
 while ( plVar11 != (long*)0x0 );
   }

   *(undefined2*)( this + 0xe0 ) = *(undefined2*)( param_1 + 0xe0 );
   if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
      /* WARNING: Subroutine does not return */
      __stack_chk_fail();
   }

   return;
}
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address *//* HashMap<int, SceneReplicationInterface::PeerInfo, HashMapHasherDefault,
   HashMapComparatorDefault<int>, DefaultTypedAllocator<HashMapElement<int,
   SceneReplicationInterface::PeerInfo> > >::operator[](int const&) */PeerInfo * __thiscallHashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>>::operator [](HashMap<int,SceneReplicationInterface::PeerInfo,HashMapHasherDefault,HashMapComparatorDefault<int>,DefaultTypedAllocator<HashMapElement<int,SceneReplicationInterface::PeerInfo>>> * this, int, *param_1) * puVar1 ;undefined8 *puVar2long lVar3void *pvVar4void *__sundefined1 auVar5[16]undefined1 auVar6[16]undefined1 auVar7[16]undefined1 auVar8[16]undefined1 auVar9[16]undefined1 auVar10[16]undefined1 auVar11[16]undefined1 auVar12[16]undefined1 auVar13[16]undefined1 auVar14[16]undefined1 auVar15[16]undefined1 auVar16[16]undefined1 auVar17[16]undefined1 auVar18[16]undefined1 auVar19[16]undefined1 auVar20[16]undefined1 auVar21[16]undefined1 auVar22[16]undefined1 auVar23[16]undefined1 auVar24[16]undefined1 auVar25[16]undefined1 auVar26[16]undefined1 auVar27[16]undefined1 auVar28[16]char cVar29uint uVar30uint uVar31uint uVar32ulong uVar33undefined8 uVar34void *__s_00undefined8 *puVar35void *pvVar36int *piVar37ulong uVar38int iVar39ulong uVar40long lVar41long lVar42long lVar43uint uVar44undefined8 uVar45uint uVar46uint uVar47undefined8 *puVar48long in_FS_OFFSETPeerInfo *local_278PeerInfo *local_270uint local_23cPeerInfo local_238[16]undefined1 local_228[16]undefined8 local_218HashSet local_210[16]undefined1 local_200[16]undefined8 local_1f0undefined1 local_1e0[16]undefined1 local_1d0[16]undefined8 local_1c0undefined1 local_1b0[16]undefined1 local_1a0[16]undefined8 local_190undefined1 local_180[16]undefined1 local_170[16]undefined8 local_160undefined8 local_158undefined1 local_148[16]uint local_138PeerInfo local_130[240]long local_40lVar3 = *(long*)( this + 8 );uVar32 = *param_1;local_40 = *(long*)( in_FS_OFFSET + 0x28 );uVar31 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );uVar33 = CONCAT44(0, uVar31);if (( lVar3 != 0 ) && ( *(int*)( this + 0x2c ) != 0 )) {
   uVar38 = *(ulong*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   uVar30 = ( uVar32 >> 0x10 ^ uVar32 ) * -0x7a143595;
   uVar30 = ( uVar30 ^ uVar30 >> 0xd ) * -0x3d4d51cb;
   uVar44 = uVar30 ^ uVar30 >> 0x10;
   if (uVar30 == uVar30 >> 0x10) {
      uVar44 = 1;
      uVar40 = uVar38;
   }
 else {
      uVar40 = uVar44 * uVar38;
   }

   auVar5._8_8_ = 0;
   auVar5._0_8_ = uVar33;
   auVar17._8_8_ = 0;
   auVar17._0_8_ = uVar40;
   lVar41 = SUB168(auVar5 * auVar17, 8);
   uVar30 = *(uint*)( *(long*)( this + 0x10 ) + lVar41 * 4 );
   uVar46 = SUB164(auVar5 * auVar17, 8);
   if (uVar30 != 0) {
      uVar47 = 0;
      do {
         if (( uVar44 == uVar30 ) && ( uVar32 == *(uint*)( *(long*)( lVar3 + lVar41 * 8 ) + 0x10 ) )) {
            local_278 = (PeerInfo*)( *(long*)( lVar3 + (ulong)uVar46 * 8 ) + 0x18 );
            goto LAB_00111c79;
         }

         uVar47 = uVar47 + 1;
         auVar6._8_8_ = 0;
         auVar6._0_8_ = ( uVar46 + 1 ) * uVar38;
         auVar18._8_8_ = 0;
         auVar18._0_8_ = uVar33;
         lVar41 = SUB168(auVar6 * auVar18, 8);
         uVar30 = *(uint*)( *(long*)( this + 0x10 ) + lVar41 * 4 );
         uVar46 = SUB164(auVar6 * auVar18, 8);
      }
 while ( ( uVar30 != 0 ) && ( auVar7._8_8_ = 0 ),auVar7._0_8_ = uVar30 * uVar38,auVar19._8_8_ = 0,auVar19._0_8_ = uVar33,auVar8._8_8_ = 0,auVar8._0_8_ = ( ( uVar46 + uVar31 ) - SUB164(auVar7 * auVar19, 8) ) * uVar38,auVar20._8_8_ = 0,auVar20._0_8_ = uVar33,uVar47 <= SUB164(auVar8 * auVar20, 8) );
   }

}
local_158 = 0;local_238[0] = (PeerInfo)0x0;local_238[1] = (PeerInfo)0x0;local_238[2] = (PeerInfo)0x0;local_238[3] = (PeerInfo)0x0;local_238[4] = (PeerInfo)0x0;local_238[5] = (PeerInfo)0x0;local_238[6] = (PeerInfo)0x0;local_238[7] = (PeerInfo)0x0;local_238[8] = (PeerInfo)0x0;local_238[9] = (PeerInfo)0x0;local_238[10] = (PeerInfo)0x0;local_238[0xb] = (PeerInfo)0x0;local_238[0xc] = (PeerInfo)0x0;local_238[0xd] = (PeerInfo)0x0;local_238[0xe] = (PeerInfo)0x0;local_238[0xf] = (PeerInfo)0x0;local_218 = _LC38;local_1f0 = _LC38;local_1c0 = _LC38;local_190 = _LC38;local_160 = _LC38;local_228 = (undefined1[16])0x0;local_210[0] = (HashSet)0x0;local_210[1] = (HashSet)0x0;local_210[2] = (HashSet)0x0;local_210[3] = (HashSet)0x0;local_210[4] = (HashSet)0x0;local_210[5] = (HashSet)0x0;local_210[6] = (HashSet)0x0;local_210[7] = (HashSet)0x0;local_210[8] = (HashSet)0x0;local_210[9] = (HashSet)0x0;local_210[10] = (HashSet)0x0;local_210[0xb] = (HashSet)0x0;local_210[0xc] = (HashSet)0x0;local_210[0xd] = (HashSet)0x0;local_210[0xe] = (HashSet)0x0;local_210[0xf] = (HashSet)0x0;local_200 = (undefined1[16])0x0;local_1e0 = (undefined1[16])0x0;local_1d0 = (undefined1[16])0x0;local_1b0 = (undefined1[16])0x0;local_1a0 = (undefined1[16])0x0;local_180 = (undefined1[16])0x0;local_170 = (undefined1[16])0x0;if (lVar3 == 0) {
   uVar38 = uVar33 * 4;
   uVar40 = uVar33 * 8;
   uVar34 = Memory::alloc_static(uVar38, false);
   *(undefined8*)( this + 0x10 ) = uVar34;
   pvVar36 = (void*)Memory::alloc_static(uVar40, false);
   *(void**)( this + 8 ) = pvVar36;
   if (uVar31 != 0) {
      pvVar4 = *(void**)( this + 0x10 );
      if (( pvVar4 < (void*)( (long)pvVar36 + uVar40 ) ) && ( pvVar36 < (void*)( (long)pvVar4 + uVar38 ) )) {
         uVar38 = 0;
         do {
            *(undefined4*)( (long)pvVar4 + uVar38 * 4 ) = 0;
            *(undefined8*)( (long)pvVar36 + uVar38 * 8 ) = 0;
            uVar38 = uVar38 + 1;
         }
 while ( uVar33 != uVar38 );
      }
 else {
         memset(pvVar4, 0, uVar38);
         memset(pvVar36, 0, uVar40);
      }

   }

   uVar32 = *param_1;
}
local_23c = 0;cVar29 = _lookup_pos(this, (int*)(ulong)uVar32, &local_23c);if (cVar29 == '\0') {
   if ((float)uVar33 * __LC33 < (float)( *(int*)( this + 0x2c ) + 1 )) {
      uVar31 = *(uint*)( this + 0x28 );
      if (uVar31 == 0x1c) {
         _err_print_error("_insert", "./core/templates/hash_map.h", 0xdd, "Condition \"capacity_index + 1 == HASH_TABLE_SIZE_MAX\" is true. Returning: nullptr", "Hash table maximum capacity reached, aborting insertion.", 0, 0);
         local_278 = (PeerInfo*)0x18;
         goto LAB_00112113;
      }

      uVar33 = ( ulong )(uVar31 + 1);
      *(undefined4*)( this + 0x2c ) = 0;
      uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
      if (uVar31 + 1 < 2) {
         uVar33 = 2;
      }

      uVar31 = *(uint*)( hash_table_size_primes + uVar33 * 4 );
      uVar40 = (ulong)uVar31;
      *(int*)( this + 0x28 ) = (int)uVar33;
      pvVar36 = *(void**)( this + 8 );
      uVar33 = uVar40 * 4;
      uVar38 = uVar40 * 8;
      pvVar4 = *(void**)( this + 0x10 );
      uVar34 = Memory::alloc_static(uVar33, false);
      *(undefined8*)( this + 0x10 ) = uVar34;
      __s_00 = (void*)Memory::alloc_static(uVar38, false);
      *(void**)( this + 8 ) = __s_00;
      if (uVar31 != 0) {
         __s = *(void**)( this + 0x10 );
         if (( __s < (void*)( (long)__s_00 + uVar38 ) ) && ( __s_00 < (void*)( (long)__s + uVar33 ) )) {
            uVar33 = 0;
            do {
               *(undefined4*)( (long)__s + uVar33 * 4 ) = 0;
               *(undefined8*)( (long)__s_00 + uVar33 * 8 ) = 0;
               uVar33 = uVar33 + 1;
            }
 while ( uVar40 != uVar33 );
         }
 else {
            memset(__s, 0, uVar33);
            memset(__s_00, 0, uVar38);
         }

      }

      if (uVar32 == 0) {
         uVar32 = *param_1;
      }
 else {
         uVar33 = 0;
         do {
            uVar31 = *(uint*)( (long)pvVar4 + uVar33 * 4 );
            if (uVar31 != 0) {
               lVar3 = *(long*)( this + 0x10 );
               uVar46 = 0;
               uVar30 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
               uVar38 = CONCAT44(0, uVar30);
               lVar41 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
               auVar9._8_8_ = 0;
               auVar9._0_8_ = (ulong)uVar31 * lVar41;
               auVar21._8_8_ = 0;
               auVar21._0_8_ = uVar38;
               lVar42 = SUB168(auVar9 * auVar21, 8);
               puVar1 = (uint*)( lVar3 + lVar42 * 4 );
               iVar39 = SUB164(auVar9 * auVar21, 8);
               uVar44 = *puVar1;
               uVar34 = *(undefined8*)( (long)pvVar36 + uVar33 * 8 );
               while (uVar44 != 0) {
                  auVar10._8_8_ = 0;
                  auVar10._0_8_ = (ulong)uVar44 * lVar41;
                  auVar22._8_8_ = 0;
                  auVar22._0_8_ = uVar38;
                  auVar11._8_8_ = 0;
                  auVar11._0_8_ = ( ulong )(( iVar39 + uVar30 ) - SUB164(auVar10 * auVar22, 8)) * lVar41;
                  auVar23._8_8_ = 0;
                  auVar23._0_8_ = uVar38;
                  uVar47 = SUB164(auVar11 * auVar23, 8);
                  uVar45 = uVar34;
                  if (uVar47 < uVar46) {
                     *puVar1 = uVar31;
                     puVar48 = (undefined8*)( (long)__s_00 + lVar42 * 8 );
                     uVar45 = *puVar48;
                     *puVar48 = uVar34;
                     uVar31 = uVar44;
                     uVar46 = uVar47;
                  }

                  uVar46 = uVar46 + 1;
                  auVar12._8_8_ = 0;
                  auVar12._0_8_ = ( ulong )(iVar39 + 1) * lVar41;
                  auVar24._8_8_ = 0;
                  auVar24._0_8_ = uVar38;
                  lVar42 = SUB168(auVar12 * auVar24, 8);
                  puVar1 = (uint*)( lVar3 + lVar42 * 4 );
                  iVar39 = SUB164(auVar12 * auVar24, 8);
                  uVar34 = uVar45;
                  uVar44 = *puVar1;
               }
;
               *(undefined8*)( (long)__s_00 + lVar42 * 8 ) = uVar34;
               *puVar1 = uVar31;
               *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
            }

            uVar33 = uVar33 + 1;
         }
 while ( uVar32 != uVar33 );
         Memory::free_static(pvVar36, false);
         Memory::free_static(pvVar4, false);
         uVar32 = *param_1;
      }

   }

   local_148 = (undefined1[16])0x0;
   local_138 = uVar32;
   SceneReplicationInterface::PeerInfo::PeerInfo(local_130, local_238);
   puVar35 = (undefined8*)operator_new(0x100, "");
   *puVar35 = local_148._0_8_;
   puVar35[1] = local_148._8_8_;
   *(uint*)( puVar35 + 2 ) = local_138;
   local_278 = (PeerInfo*)( puVar35 + 3 );
   SceneReplicationInterface::PeerInfo::PeerInfo(local_278, local_130);
   SceneReplicationInterface::PeerInfo::~PeerInfo(local_130);
   puVar48 = *(undefined8**)( this + 0x20 );
   if (puVar48 == (undefined8*)0x0) {
      *(undefined8**)( this + 0x18 ) = puVar35;
   }
 else {
      *puVar48 = puVar35;
      puVar35[1] = puVar48;
   }

   *(undefined8**)( this + 0x20 ) = puVar35;
   uVar31 = ( ( uint ) * param_1 >> 0x10 ^ *param_1 ) * -0x7a143595;
   uVar32 = ( uVar31 ^ uVar31 >> 0xd ) * -0x3d4d51cb;
   uVar31 = uVar32 ^ uVar32 >> 0x10;
   if (uVar32 == uVar32 >> 0x10) {
      uVar33 = 1;
      uVar31 = 1;
   }
 else {
      uVar33 = (ulong)uVar31;
   }

   lVar3 = *(long*)( this + 0x10 );
   uVar44 = 0;
   uVar32 = *(uint*)( hash_table_size_primes + ( ulong ) * (uint*)( this + 0x28 ) * 4 );
   uVar38 = CONCAT44(0, uVar32);
   lVar41 = *(long*)( hash_table_size_primes_inv + ( ulong ) * (uint*)( this + 0x28 ) * 8 );
   auVar13._8_8_ = 0;
   auVar13._0_8_ = uVar33 * lVar41;
   auVar25._8_8_ = 0;
   auVar25._0_8_ = uVar38;
   lVar43 = SUB168(auVar13 * auVar25, 8);
   lVar42 = *(long*)( this + 8 );
   puVar1 = (uint*)( lVar3 + lVar43 * 4 );
   iVar39 = SUB164(auVar13 * auVar25, 8);
   uVar30 = *puVar1;
   while (uVar30 != 0) {
      auVar14._8_8_ = 0;
      auVar14._0_8_ = (ulong)uVar30 * lVar41;
      auVar26._8_8_ = 0;
      auVar26._0_8_ = uVar38;
      auVar15._8_8_ = 0;
      auVar15._0_8_ = ( ulong )(( iVar39 + uVar32 ) - SUB164(auVar14 * auVar26, 8)) * lVar41;
      auVar27._8_8_ = 0;
      auVar27._0_8_ = uVar38;
      uVar46 = SUB164(auVar15 * auVar27, 8);
      puVar48 = puVar35;
      if (uVar46 < uVar44) {
         *puVar1 = uVar31;
         puVar2 = (undefined8*)( lVar42 + lVar43 * 8 );
         puVar48 = (undefined8*)*puVar2;
         *puVar2 = puVar35;
         uVar31 = uVar30;
         uVar44 = uVar46;
      }

      uVar44 = uVar44 + 1;
      auVar16._8_8_ = 0;
      auVar16._0_8_ = ( ulong )(iVar39 + 1) * lVar41;
      auVar28._8_8_ = 0;
      auVar28._0_8_ = uVar38;
      lVar43 = SUB168(auVar16 * auVar28, 8);
      puVar1 = (uint*)( lVar3 + lVar43 * 4 );
      iVar39 = SUB164(auVar16 * auVar28, 8);
      puVar35 = puVar48;
      uVar30 = *puVar1;
   }
;
   *(undefined8**)( lVar42 + lVar43 * 8 ) = puVar35;
   *puVar1 = uVar31;
   *(int*)( this + 0x2c ) = *(int*)( this + 0x2c ) + 1;
   goto LAB_00112113;
}
uVar33 = (ulong)local_23c;lVar3 = *(long*)( *(long*)( this + 8 ) + uVar33 * 8 );HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator =((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( lVar3 + 0x18 ), (HashSet*)local_238);HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>::operator =((HashSet<ObjectID,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>>*)( lVar3 + 0x40 ), local_210);uVar31 = *(uint*)( lVar3 + 0x90 );uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );if (( *(int*)( lVar3 + 0x94 ) == 0 ) || ( *(long*)( lVar3 + 0x70 ) == 0 )) {
   LAB_001121c6:if (uVar32 < 0x17) goto LAB_001121cb;
}
 else {
   lVar41 = 0;
   if (uVar32 != 0) {
      do {
         piVar37 = (int*)( *(long*)( lVar3 + 0x78 ) + lVar41 );
         if (*piVar37 != 0) {
            *piVar37 = 0;
            Memory::free_static(*(void**)( *(long*)( lVar3 + 0x70 ) + lVar41 * 2 ), false);
            *(undefined8*)( *(long*)( lVar3 + 0x70 ) + lVar41 * 2 ) = 0;
         }

         lVar41 = lVar41 + 4;
      }
 while ( lVar41 != (ulong)uVar32 << 2 );
      uVar31 = *(uint*)( lVar3 + 0x90 );
      *(undefined4*)( lVar3 + 0x94 ) = 0;
      *(undefined1(*) [16])( lVar3 + 0x80 ) = (undefined1[16])0x0;
      uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
      goto LAB_001121c6;
   }

   *(undefined4*)( lVar3 + 0x94 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0x80 ) = (undefined1[16])0x0;
   LAB_001121cb:if (uVar31 != 0x1c) {
      uVar38 = (ulong)uVar31;
      do {
         uVar32 = (int)uVar38 + 1;
         uVar38 = (ulong)uVar32;
         if (0x16 < *(uint*)( hash_table_size_primes + uVar38 * 4 )) {
            if (uVar32 != uVar31) {
               if (*(long*)( lVar3 + 0x70 ) == 0) {
                  *(uint*)( lVar3 + 0x90 ) = uVar32;
               }
 else {
                  HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>::_resize_and_rehash((HashMap<ObjectID,unsigned_long,HashMapHasherDefault,HashMapComparatorDefault<ObjectID>,DefaultTypedAllocator<HashMapElement<ObjectID,unsigned_long>>>*)( lVar3 + 0x68 ), uVar32);
               }

            }

            goto LAB_00112221;
         }

      }
 while ( uVar32 != 0x1c );
   }

   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
}
LAB_00112221:uVar31 = *(uint*)( lVar3 + 0xc0 );uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );if (( *(int*)( lVar3 + 0xc4 ) == 0 ) || ( *(long*)( lVar3 + 0xa0 ) == 0 )) {
   LAB_00112242:if (uVar32 < 0x17) goto LAB_00112247;
}
 else {
   lVar41 = 0;
   if (uVar32 != 0) {
      do {
         piVar37 = (int*)( *(long*)( lVar3 + 0xa8 ) + lVar41 );
         if (*piVar37 != 0) {
            *piVar37 = 0;
            Memory::free_static(*(void**)( *(long*)( lVar3 + 0xa0 ) + lVar41 * 2 ), false);
            *(undefined8*)( *(long*)( lVar3 + 0xa0 ) + lVar41 * 2 ) = 0;
         }

         lVar41 = lVar41 + 4;
      }
 while ( lVar41 != (ulong)uVar32 << 2 );
      uVar31 = *(uint*)( lVar3 + 0xc0 );
      *(undefined4*)( lVar3 + 0xc4 ) = 0;
      *(undefined1(*) [16])( lVar3 + 0xb0 ) = (undefined1[16])0x0;
      uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
      goto LAB_00112242;
   }

   *(undefined4*)( lVar3 + 0xc4 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0xb0 ) = (undefined1[16])0x0;
   LAB_00112247:if (uVar31 != 0x1c) {
      uVar38 = (ulong)uVar31;
      do {
         uVar32 = (int)uVar38 + 1;
         uVar38 = (ulong)uVar32;
         if (0x16 < *(uint*)( hash_table_size_primes + uVar38 * 4 )) {
            if (uVar32 != uVar31) {
               if (*(long*)( lVar3 + 0xa0 ) == 0) {
                  *(uint*)( lVar3 + 0xc0 ) = uVar32;
               }
 else {
                  HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::_resize_and_rehash((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( lVar3 + 0x98 ), uVar32);
               }

            }

            goto LAB_0011229b;
         }

      }
 while ( uVar32 != 0x1c );
   }

   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
}
LAB_0011229b:uVar31 = *(uint*)( lVar3 + 0xf0 );uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );if (( *(int*)( lVar3 + 0xf4 ) == 0 ) || ( *(long*)( lVar3 + 0xd0 ) == 0 )) {
   LAB_001122be:if (uVar32 < 0x17) goto LAB_001122c3;
}
 else {
   lVar41 = 0;
   if (uVar32 != 0) {
      do {
         piVar37 = (int*)( *(long*)( lVar3 + 0xd8 ) + lVar41 );
         if (*piVar37 != 0) {
            *piVar37 = 0;
            Memory::free_static(*(void**)( *(long*)( lVar3 + 0xd0 ) + lVar41 * 2 ), false);
            *(undefined8*)( *(long*)( lVar3 + 0xd0 ) + lVar41 * 2 ) = 0;
         }

         lVar41 = lVar41 + 4;
      }
 while ( lVar41 != (ulong)uVar32 << 2 );
      uVar31 = *(uint*)( lVar3 + 0xf0 );
      *(undefined4*)( lVar3 + 0xf4 ) = 0;
      *(undefined1(*) [16])( lVar3 + 0xe0 ) = (undefined1[16])0x0;
      uVar32 = *(uint*)( hash_table_size_primes + (ulong)uVar31 * 4 );
      goto LAB_001122be;
   }

   *(undefined4*)( lVar3 + 0xf4 ) = 0;
   *(undefined1(*) [16])( lVar3 + 0xe0 ) = (undefined1[16])0x0;
   LAB_001122c3:if (uVar31 != 0x1c) {
      uVar38 = (ulong)uVar31;
      do {
         uVar32 = (int)uVar38 + 1;
         uVar38 = (ulong)uVar32;
         if (0x16 < *(uint*)( hash_table_size_primes + uVar38 * 4 )) {
            if (uVar32 != uVar31) {
               if (*(long*)( lVar3 + 0xd0 ) == 0) {
                  *(uint*)( lVar3 + 0xf0 ) = uVar32;
               }
 else {
                  HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>::_resize_and_rehash((HashMap<unsigned_int,ObjectID,HashMapHasherDefault,HashMapComparatorDefault<unsigned_int>,DefaultTypedAllocator<HashMapElement<unsigned_int,ObjectID>>>*)( lVar3 + 200 ), uVar32);
               }

            }

            goto LAB_00112319;
         }

      }
 while ( uVar32 != 0x1c );
   }

   _err_print_error("reserve", "./core/templates/hash_map.h", 0x1b7, "Condition \"new_index + 1 == (uint32_t)HASH_TABLE_SIZE_MAX\" is true.", 0, 0, 0);
}
LAB_00112319:lVar41 = *(long*)( this + 8 );*(undefined2*)( lVar3 + 0xf8 ) = 0;local_278 = (PeerInfo*)( *(long*)( lVar41 + uVar33 * 8 ) + 0x18 );LAB_00112113:local_270 = local_238;SceneReplicationInterface::PeerInfo::~PeerInfo(local_270);LAB_00111c79:if (local_40 != *(long*)( in_FS_OFFSET + 0x28 )) {
   /* WARNING: Subroutine does not return */
   __stack_chk_fail();
}
return local_278;}/* WARNING: Control flow encountered bad instruction data *//* SceneReplicationInterface::PeerInfo::PeerInfo(SceneReplicationInterface::PeerInfo const&) */void SceneReplicationInterface::PeerInfo::PeerInfo(PeerInfo *this, PeerInfo *param_1) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<Variant, DefaultAllocator>::~List() */void List<Variant,DefaultAllocator>::~List(List<Variant,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* List<NodePath, DefaultAllocator>::~List() */void List<NodePath,DefaultAllocator>::~List(List<NodePath,DefaultAllocator> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* SceneReplicationInterface::PeerInfo::~PeerInfo() */void SceneReplicationInterface::PeerInfo::~PeerInfo(PeerInfo *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<SceneReplicationInterface, void, ObjectID
   const&>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SceneReplicationInterface,void,ObjectID_const&> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* CallableCustomMethodPointer<SceneReplicationInterface, void, int,
   ObjectID>::~CallableCustomMethodPointer() */void CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID>::~CallableCustomMethodPointer(CallableCustomMethodPointer<SceneReplicationInterface,void,int,ObjectID> *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}
/* WARNING: Control flow encountered bad instruction data *//* StringName::~StringName() */void StringName::~StringName(StringName *this) {
   /* WARNING: Bad instruction - Truncating control flow here */
   halt_baddata();
}

